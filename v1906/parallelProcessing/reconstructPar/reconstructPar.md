# reconstructPar

## 概要

　並列計算を行ったあとは結果が`processor*`に分割された状態で保存されます。これらを再結合するためのユーティリティがこのreconstructParです。

## 用途

- `paraFoam`で表示するための再結合
- ケース内のファイル数の削減

※ 分割された状態をParaViewで読み込むためには`paraFoam -builtin`などを用います。ただこの場合にはsetなどの表示ができなくなること、stream lineなどを描画する場合にprocessor間で途切れることなどに注意してください。

## 設定ファイル

　設定ファイルはありません。

## reconstructParの基本実行

```
$ reconstructPar
```

## options

- `-time` : 指定した時刻のみを再結合します。
- `-latestTime` : 最新時刻のみ再結合します。
- `-newTimes` : まだ再結合していない時刻を再結合します。
- `-fields` : 再結合するフィールドを指定します。例：`-fields '(p T U "alpha.*")'`
- `-noFields` : フィールドの再結合を行いません。
- `-lagrangianFields` : ラグランジアンフィールドを指定します。例：`lagrangianFields '(U d)'`
- `-noLagrangian` : ラグランジアンフィールドの再結合を行いません。
- `-region` : (multiRegion) 指定した領域のみを再結合します。
- `-allRegions` : (multiRegion) すべての領域について再結合します。
- `-constant` : timeディレクトリの中のconstantを含めます。
- `-noSets` : *cellSets*, *faceSets*, *pointSets*の再結合を省略します。
- `-noZero` : 0ディレクトリの再結合を省略します。
- `-withZero` : 0ディレクトリを含めて再結合します。


## Source

- [faFieldReconstructorReconstructFields.C](faFieldReconstructorReconstructFields.C) : 
- [reconstructPar.C](reconstructPar.C) : 
- [processorFaMeshes.C](processorFaMeshes.C) : 
- [faFieldReconstructor.C](faFieldReconstructor.C) : 
- [faFieldReconstructor.H](faFieldReconstructor.H) : 
- [checkFaceAddressingComp.H](checkFaceAddressingComp.H) : 
- [processorFaMeshes.H](processorFaMeshes.H) : 


## Discription from [reconstructPar.C](reconstructPar.C)

```
Description
    Reconstructs fields of a case that is decomposed for parallel
    execution of OpenFOAM.


```

