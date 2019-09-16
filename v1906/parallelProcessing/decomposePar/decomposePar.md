# decomposePar

## Source

- [decomposePar.C](decomposePar.C) : 
- [domainDecompositionMesh.C](domainDecompositionMesh.C) : 
- [pointFieldDecomposer.C](pointFieldDecomposer.C) : 
- [readFields.C](readFields.C) : 
- [domainDecompositionDryRun.C](domainDecompositionDryRun.C) : 
- [domainDecompositionTemplates.C](domainDecompositionTemplates.C) : 
- [lagrangianFieldDecomposer.C](lagrangianFieldDecomposer.C) : 
- [faMeshDecomposition.C](faMeshDecomposition.C) : 
- [domainDecomposition.C](domainDecomposition.C) : 
- [pointFieldDecomposerDecomposeFields.C](pointFieldDecomposerDecomposeFields.C) : 
- [dimFieldDecomposer.C](dimFieldDecomposer.C) : 
- [dimFieldDecomposerDecomposeFields.C](dimFieldDecomposerDecomposeFields.C) : 
- [domainDecompositionDistribute.C](domainDecompositionDistribute.C) : 
- [lagrangianFieldDecomposerDecomposeFields.C](lagrangianFieldDecomposerDecomposeFields.C) : 
- [faFieldDecomposerDecomposeFields.C](faFieldDecomposerDecomposeFields.C) : 
- [faFieldDecomposer.C](faFieldDecomposer.C) : 
- [pointFieldDecomposer.H](pointFieldDecomposer.H) : 
- [lagrangianFieldDecomposer.H](lagrangianFieldDecomposer.H) : 
- [domainDecompositionDryRun.H](domainDecompositionDryRun.H) : 
- [faFieldDecomposer.H](faFieldDecomposer.H) : 
- [domainDecomposition.H](domainDecomposition.H) : 
- [dimFieldDecomposer.H](dimFieldDecomposer.H) : 
- [readFields.H](readFields.H) : 
- [faMeshDecomposition.H](faMeshDecomposition.H) : 


## Discription from [decomposePar.C](decomposePar.C)

```
Description
    Automatically decomposes a mesh and fields of a case for parallel
    execution of OpenFOAM.

Usage
    \b decomposePar [OPTION]

    Options:
      - \par -dry-run
        Test without actually decomposing

      - \par -cellDist
        Write the cell distribution as a labelList, for use with 'manual'
        decomposition method and as a volScalarField for visualization.

      - \par -region \<regionName\>
        Decompose named region. Does not check for existence of processor*.

      - \par -allRegions
        Decompose all regions in regionProperties. Does not check for
        existence of processor*.

      - \par -copyZero
        Copy \a 0 directory to processor* rather than decompose the fields.

      - \par -copyUniform
        Copy any \a uniform directories too.

      - \par -constant

      - \par -time xxx:yyy
        Override controlDict settings and decompose selected times. Does not
        re-decompose the mesh i.e. does not handle moving mesh or changing
        mesh cases.

      - \par -fields
        Use existing geometry decomposition and convert fields only.

      - \par -noSets
        Skip decomposing cellSets, faceSets, pointSets.

      - \par -force
        Remove any existing \a processor subdirectories before decomposing the
        geometry.

      - \par -ifRequired
        Only decompose the geometry if the number of domains has changed from a
        previous decomposition. No \a processor subdirectories will be removed
        unless the \a -force option is also specified. This option can be used
        to avoid redundant geometry decomposition (eg, in scripts), but should
        be used with caution when the underlying (serial) geometry or the
        decomposition method etc. have been changed between decompositions.


```

