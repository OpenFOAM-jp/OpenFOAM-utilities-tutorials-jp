# moveDynamicMesh

## 概要

　移動メッシュのdry-runとして使用できます。
dynamicMeshDictに記載されている動きを実行します。

## 用途

- 移動メッシュの動作確認
- メッシュの変形
- メッシュの歪の緩和
 
## チュートリアル

- [SnakeRiverCanyon](tutorials/SnakeRiverCanyon) : 地形ファイルに沿ったプロジェクション
![SnakeRiverCanyon.png](tutorials/SnakeRiverCanyon.png)
- [relativeMotion](tutorials/relativeMotion) : 回転体の中で回転するメッシュ
![relativeMotion.gif](tutorials/relativeMotion.gif)
- [stingColumn](tutorials/twistingColumn) : ねじれる棒
![stingColumn.png](tutorials/twistingColumn.png)

## 設定ファイル

- 0/pointDisplacement : 境界面の点の制御を行います。[例 : SnakeRiverCanyon](tutorials/SnakeRiverCanyon/0/pointDisplacement)
- 0/cellDisplacement : 一部のmotionSolverにおける境界条件を設定します。[例 : box2D_moveDynamicMesh](tutorials/relativeMotion/box2D_moveDynamicMesh/0.orig/cellDisplacement)
- constant/dynamicMeshDict : motionSolverを設定します。[例 : relativeMotion](tutorials/relativeMotion/constant/dynamicMeshDict)

## 基本コマンド

```
$ moveDynamicMesh
```

## options

- `-overwrite` : const/polyMesh/pointsを移動したpointsで上書きします。
- `-region` : マルチリージョン用に分割された領域のうち一つを指定します。
- `-checkAMI` : AMI接続された面の重みをvtkファイルで出力します。

## dynamicMeshDict

　dynamicMeshはメッシュの移動を行うための機能です。
現在多くのソルバーにおいてdynamicMeshを使用可能ですが、エネルギーの計算を伴うソルバーなどは一部未実装です
。
この挙動は以下のように`constant/dynamicMeshDict`に記述します。

```
FoamFile // ヘッダ
{
    version     2.0;
    format      ascii;
    class       dictionary;
    location    "system";
    object      dynamicMeshDict;
}

dynamicFvMesh dynamicMotionSolverFvMesh; // dynamicMotionのタイプ

motionSolver displacementSBRStress;   // motionSolverを選択
motionSolverLibs ("libfvMotionSolvers.so"); // それに関するライブラリ

diffusivity  quadratic inverseDistance 1(minZ); // 移動距離に関する拡散係数を指定
```

### dynamicFvMesh

v1906では以下の６種類の中から選択します。

  - staticFvMesh : メッシュの移動を行いません。
    > source : $FOAM_SRC/dynamicFvMesh/staticFvMesh 
  - dynamicMotionSolverFvMesh : 単一のmotionSolverを設定します。
    > source : $FOAM_SRC/dynamicFvMesh/dynamicMotionSolverFvMesh 
  - dynamicMotionSolverListFvMesh : 複数のmotionSolverを選択します。
    > source : $FOAM_SRC/dynamicFvMesh/dynamicMotionSolverListFvMesh
  - dynamicMultiMotionSolverFvMesh : 複数のmotionSolverを選択します。（場所が重複している場合）
    > source : $FOAM_SRC/dynamicFvMesh/dynamicMultiMotionSolverFvMesh
  - dynamicRefineFvMesh : 指定した領域内をメッシュ細分化します。
    > source : $FOAM_SRC/dynamicFvMesh/dynamicRefineFvMes
  - dynamicInkJetFvMesh : インクジェット導入部の"pumping"を正弦波で設定します。
    > source : $FOAM_SRC/dynamicFvMesh/dynamicInkJetFvMesh

### motionSolver

v1906では以下の中から選択します。

- coded
- displacementComponentLaplacian
- displacementInterpolation
- displacementLaplacian
- displacementLayeredMotion
- displacementSBRStress
- multiSolidBodyMotionSolver
- solidBody
- solidBodyDisplacementLaplacian
- surfaceAlignedSBRStress
- velocityComponentLaplacian
- velocityDisplacement
- velocityLaplacian




## 注意

- 動作確認として使用する場合にはtimeStepに注意してください。
- 移動後の時刻ディレクトリにはpointsのみが保存されます。移動したメッシュを他の計算で使用する場合には`const/polyMesh`の中のpointsを時刻ディレクトリのpointsで書き換えるか`-overwrite`オプションを使用します。

## Source

- [moveDynamicMesh.C](moveDynamicMesh.C) : 


## Discription from [moveDynamicMesh.C](moveDynamicMesh.C)

```
Description
    Mesh motion and topological mesh changes utility.


```

