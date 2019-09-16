import os, shutil, sys, datetime, glob

OF = os.environ['WM_PROJECT_VERSION']
if os.path.exists(OF):
    print('Faild : Directory "{}" already exists.'.format(OF))
    exit()
else:
    shutil.copytree(os.environ['FOAM_UTILITIES'], OF)

globalFile= OF+'/README.md'
globalMsg='\n'.join([
	'# Utilities of OpenFOAM-{}'.format(OF),
	'',
	'This document was initially generated on '+datetime.datetime.now().strftime("%Y/%m/%d") + '.\n',
	''
])
with open(globalFile, 'w') as f:
	f.write(globalMsg)
			
def addDict(master, path, val):
	key = path[0]
	if len(path) == 1:
		master[key] = val
	else:
		if not key in master.keys():
			master[key] = {}
		addDict(master[key], path[1:], val)
			
addedUtils = []
details = {}
for f in glob.glob(OF+'/**', recursive=True):
	if os.path.isfile(f):
		continue
	if os.path.basename(f) == 'platform':
		shutil.rmtree(f)
	if not os.path.isfile(f+'/Make/files'):
		continue
	with open(f+'/Make/files') as makeFile:
		for l in makeFile.readlines():
			if l.startswith('EXE = $(FOAM_APPBIN)/'):
				utilName = l.replace('EXE = $(FOAM_APPBIN)/','').replace('\n','')
				break
	if not os.path.exists(f+'/{}.C'.format(utilName)):
		continue
	print(utilName, f)
	descriptions = ''
	pathList = []
	reading = False
	for p in f.split('/'):
		if reading:
			pathList.append(p)
		if p == OF:
			reading = True
	filePath = '/'.join(pathList)+'/'+utilName+'.C'
	localFile = '/'.join(pathList)+'/'+utilName+'.md'
	includeFiles = []
	for ch in glob.glob(f+'/*.C', recursive=True):
		includeFiles.append(os.path.basename(ch))
	for ch in glob.glob(f+'/*.H', recursive=True):
		includeFiles.append(os.path.basename(ch))
	includeFilesStr = '\n'.join(['- [{}]({}) : '.format(ch, ch) for ch in includeFiles])
	with open(f+'/{}.C'.format(utilName), 'r') as lines:
		reading = False
		for l in lines.readlines():
			if not reading and l.startswith('Description'):
				reading = True
			if reading and l.startswith('\*----'):
				reading = False
				break
			if reading:
				descriptions += l
	with open(OF + '/' + localFile, 'w') as lines:
		msg = '\n'.join([
			'# ' + utilName,
			'',
			'## Source\n',
			includeFilesStr,
			'\n\n'
		])
		if descriptions != '':
			msg += '## Discription from [{}]({})\n\n'.format(utilName+'.C',utilName+'.C') + '\n'.join(['```', descriptions, '```\n\n'])
		else:
			msg += '\n\n'
		lines.write(msg)

	addDict(details, pathList, {'description':descriptions,'md':localFile, 'file':filePath})
		
def makeMdFile(detail, n):
	for key in detail.keys():
		if not 'md' in detail[key].keys():
			msg = '  '*n + '- {}\n'.format(key)
			with open(globalFile, 'a') as lines:
				lines.write(msg)
			makeMdFile(detail[key], n+2)
		else:
			msg = '  '*n + '- [{}]({}) : \n'.format(key,detail[key]['md'])
			with open(globalFile, 'a') as lines:
				lines.write(msg)
			
makeMdFile(details, 0)
