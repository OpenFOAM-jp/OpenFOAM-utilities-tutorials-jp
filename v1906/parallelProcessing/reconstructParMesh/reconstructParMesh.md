# reconstructParMesh

## 概要

分割されたメッシュを再結合します。

## 用途

- snappyHexMeshを並列で実行した後
- dynamicMeshなどにより分割前とメッシュが異なる場合

## 設定ファイル

設定ファイルはありません。

## reconstructParMeshの実行

```
$ reconstructParMesh
```

## options

- `-mergeTol` : 点と点が一致していると判断する距離を指定します。デフォルトは1e-7です。
- `-fullMatch` : 境界面のすべての点が一致している面を検出して結合します。通常よりも時間がかかります。
- `-cellDist` : 分割番号をフィールドとして出力します。ParaViewなどでどう分割されているかを確認できます。
- `-time` : 時刻を指定します。例：`-time ':10,20'`->「10までと20」
- `-latestTime` : 最新時刻のみを再結合します。
- `-region` :  (multiRegion) 指定した領域について再結合します。例：`-region '(leftSolid heater)'`
- `-allRegions` : (multiRegion) すべての領域について再結合します。
- `-constant` : constantディレクトリの中身を各processorにコピーします。

## Source

- [reconstructParMesh.C](reconstructParMesh.C) : 


## Discription from [reconstructParMesh.C](reconstructParMesh.C)

```
Description
    Reconstructs a mesh using geometric information only.

    Writes point/face/cell procAddressing so afterwards reconstructPar can be
    used to reconstruct fields.

    Note:
    - uses geometric matching tolerance (set with -mergeTol (at your option)

    If the parallel case does not have correct procBoundaries use the
    -fullMatch option which will check all boundary faces (bit slower).


```

