import os, shutil, sys, datetime, glob

OF = os.environ['WM_PROJECT_VERSION']
if os.path.exists(OF):
    shutil.rmtree(OF)
    os.mkdir(OF)
    print('OpenFOAM-{} already generated.'.format(OF))
else:
    os.mkdir(OF)
    
urlBase = 'github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/'
    
docDir = OF+'/doc'
shutil.copytree(os.environ['FOAM_UTILITIES'], OF+'/utilities')
shutil.copytree(os.environ['FOAM_UTILITIES'], docDir)

globalFile= OF+'/doc/README.md'
globalMsg='\n'.join([
    '# Utilities of OpenFOAM-{}'.format(OF),
    '',
    'Generated at'+datetime.datetime.now().strftime("%Y/%m/%d"),
    ''
])

for d in glob.glob(docDir+'/**', recursive=True):
    if os.path.isdir(d):
        if os.path.basename(d) == 'Make':
            shutil.rmtree(d)
            
def addDict(master, path, val):
    key = path[0]
    if len(path) == 1:
        master[key] = val
    else:
        if not key in master.keys():
            master[key] = {}
        addDict(master[key], path[1:], val)
            
details = {}
for f in glob.glob(docDir+'/**', recursive=True):
    if os.path.isdir(f):
        continue
    if os.path.basename(f).endswith('.C'):
        utilName = os.path.basename(f).replace('.C','')
        localFile = f.replace('.C','.md')
        descriptions = ''
        pathList = []
        reading = False
        for p in f.split('/'):
            if reading:
                pathList.append(p)
            if p == 'doc':
                reading = True
        filePath = urlBase + OF + '/' + '/'.join(pathList)+'/'+utilName+'.C'
        with open(f, 'r') as lines:
            reading = False
            for l in lines.readlines():
                if not reading and l.startswith('Description'):
                    reading = True
                if reading and l.startswith('\*----'):
                    reading = False
                    break
                if reading:
                    descriptions += l
        with open(localFile, 'w') as lines:
            msg = '\n'.join([
                '# ' + utilName,
                '',
                '[source]({})'.format(filePath),
                '\n'
            ])
            if descriptions != '':
                msg += '\n'.join(['```', descriptions, '```\n\n'])
            else:
                msg += '\n\n'
            lines.write(msg)
        
        addDict(details, pathList, {'description':descriptions,'md':localFile, 'file':filePath})
    elif os.path.basename(f).endswith('Dict'):
        pass
    else:
        os.remove(f)
        
def makeMdFile(detail, n):
    for key in detail.keys():
        if not 'md' in detail[key].keys():
            msg = '#'*n + ' ' + key + '\n\n'
            with open(globalFile, 'a') as lines:
                lines.write(msg)
            makeMdFile(detail[key], n+1)
        else:
            msg = '\n'.join([
                '#'*n + ' ' + key + '\n',
                '- [source]({})'.format(detail[key]['file']),
                '- [detail]({})\n\n'.format(detail[key]['md'])
            ])
            if detail[key]['description'] != '':
                msg += '\n'.join(['```', detail[key]['description'], '```\n\n'])
            else:
                msg += '\n\n'
            with open(globalFile, 'a') as lines:
                lines.write(msg)
            
makeMdFile(details, 1)
