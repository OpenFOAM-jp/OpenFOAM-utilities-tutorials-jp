# redistributePar

## 概要

すでにdecomposeParなどで分割されたものについて再分割します。

## 用途

- 計算途中で分割数を変更したい場合


- `-cellDist` : 分割番号をフィールドとして出力します。ParaViewなどでどう分割されているかを確認できます。
- `-dry-run` : 実際に分割は行いません。`-cellDist`と組み合わせて使用します。
- `-time` : 時刻を指定します。例：`-time ':10,20'`->「10までと20」
- `-latestTime`最新時刻のみを分割します。
- `-fields` : 分割するフィールドを指定します。例：`-fields '(U p)'`
- `-region` :  (multiRegion) 指定した領域について分割します。例：`-region '(leftSolid heater)'`
- `-allRegions` : (multiRegion) すべての領域について分割します。

## Source

- [redistributePar.C](redistributePar.C) : 
- [passivePositionParticleCloud.C](passivePositionParticleCloud.C) : 
- [parLagrangianRedistributor.C](parLagrangianRedistributor.C) : 
- [parLagrangianRedistributorFields.C](parLagrangianRedistributorFields.C) : 
- [parFvFieldReconstructorFields.C](parFvFieldReconstructorFields.C) : 
- [parFvFieldReconstructor.C](parFvFieldReconstructor.C) : 
- [loadOrCreateMesh.C](loadOrCreateMesh.C) : 
- [parFvFieldReconstructor.H](parFvFieldReconstructor.H) : 
- [unmappedPassivePositionParticleCloud.H](unmappedPassivePositionParticleCloud.H) : 
- [loadOrCreateMesh.H](loadOrCreateMesh.H) : 
- [parLagrangianRedistributor.H](parLagrangianRedistributor.H) : 
- [distributedUnallocatedDirectFvPatchFieldMapper.H](distributedUnallocatedDirectFvPatchFieldMapper.H) : 
- [passivePositionParticleCloud.H](passivePositionParticleCloud.H) : 
- [passivePositionParticle.H](passivePositionParticle.H) : 
- [distributedUnallocatedDirectFieldMapper.H](distributedUnallocatedDirectFieldMapper.H) : 


## Discription from [redistributePar.C](redistributePar.C)

```
Description
    Redistributes existing decomposed mesh and fields according to the current
    settings in the decomposeParDict file.

    Must be run on maximum number of source and destination processors.
    Balances mesh and writes new mesh to new time directory.

    Can optionally run in decompose/reconstruct mode to decompose/reconstruct
    mesh and fields.

Usage
    \b redistributePar [OPTION]

    Options:
      - \par -decompose
        Remove any existing \a processor subdirectories and decomposes the
        mesh. Equivalent to running without processor subdirectories.

      - \par -reconstruct
        Reconstruct mesh and fields (like reconstructParMesh+reconstructPar).

      - \par -newTimes
        (in combination with -reconstruct) reconstruct only new times.

      - \par -dry-run
        (not in combination with -reconstruct) Test without actually
        decomposing.

      - \par -cellDist
        not in combination with -reconstruct) Write the cell distribution
        as a labelList, for use with 'manual'
        decomposition method and as a volScalarField for visualization.

      - \par -region \<regionName\>
        Distribute named region.

      - \par -allRegions
        Distribute all regions in regionProperties. Does not check for
        existence of processor*.


```

