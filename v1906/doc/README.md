# thermophysical

## chemkinToFoam

### chemkinToFoam.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/thermophysical/chemkinToFoam/chemkinToFoam.C/chemkinToFoam.C)
- [detail](v1906/doc/thermophysical/chemkinToFoam/chemkinToFoam.md)

```
Description
    Convert CHEMKINIII thermodynamics and reaction data files into
    OpenFOAM format.


```

## equilibriumFlameT

### equilibriumFlameT.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/thermophysical/equilibriumFlameT/equilibriumFlameT.C/equilibriumFlameT.C)
- [detail](v1906/doc/thermophysical/equilibriumFlameT/equilibriumFlameT.md)

```
Description
    Calculate the equilibrium flame temperature for a given fuel and
    pressure for a range of unburnt gas temperatures and equivalence
    ratios. Includes the effects of dissociation on O2, H2O and CO2.


```

## adiabaticFlameT

### adiabaticFlameT.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/thermophysical/adiabaticFlameT/adiabaticFlameT.C/adiabaticFlameT.C)
- [detail](v1906/doc/thermophysical/adiabaticFlameT/adiabaticFlameT.md)

```
Description
    Calculate adiabatic flame temperature for a given fuel over a
    range of unburnt temperatures and equivalence ratios.


```

## equilibriumCO

### equilibriumCO.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/thermophysical/equilibriumCO/equilibriumCO.C/equilibriumCO.C)
- [detail](v1906/doc/thermophysical/equilibriumCO/equilibriumCO.md)

```
Description
    Calculate the equilibrium level of carbon monoxide.


```

## mixtureAdiabaticFlameT

### mixtureAdiabaticFlameT.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/thermophysical/mixtureAdiabaticFlameT/mixtureAdiabaticFlameT.C/mixtureAdiabaticFlameT.C)
- [detail](v1906/doc/thermophysical/mixtureAdiabaticFlameT/mixtureAdiabaticFlameT.md)

```
Description
    Calculate adiabatic flame temperature for a given mixture
    at a given temperature.


```

# parallelProcessing

## redistributePar

### parLagrangianRedistributorFields.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/parallelProcessing/redistributePar/parLagrangianRedistributorFields.C/parLagrangianRedistributorFields.C)
- [detail](v1906/doc/parallelProcessing/redistributePar/parLagrangianRedistributorFields.md)



### passivePositionParticleCloud.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/parallelProcessing/redistributePar/passivePositionParticleCloud.C/passivePositionParticleCloud.C)
- [detail](v1906/doc/parallelProcessing/redistributePar/passivePositionParticleCloud.md)



### parFvFieldReconstructor.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/parallelProcessing/redistributePar/parFvFieldReconstructor.C/parFvFieldReconstructor.C)
- [detail](v1906/doc/parallelProcessing/redistributePar/parFvFieldReconstructor.md)



### parFvFieldReconstructorFields.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/parallelProcessing/redistributePar/parFvFieldReconstructorFields.C/parFvFieldReconstructorFields.C)
- [detail](v1906/doc/parallelProcessing/redistributePar/parFvFieldReconstructorFields.md)



### parLagrangianRedistributor.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/parallelProcessing/redistributePar/parLagrangianRedistributor.C/parLagrangianRedistributor.C)
- [detail](v1906/doc/parallelProcessing/redistributePar/parLagrangianRedistributor.md)



### redistributePar.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/parallelProcessing/redistributePar/redistributePar.C/redistributePar.C)
- [detail](v1906/doc/parallelProcessing/redistributePar/redistributePar.md)

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

### loadOrCreateMesh.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/parallelProcessing/redistributePar/loadOrCreateMesh.C/loadOrCreateMesh.C)
- [detail](v1906/doc/parallelProcessing/redistributePar/loadOrCreateMesh.md)



## decomposePar

### decomposePar.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/parallelProcessing/decomposePar/decomposePar.C/decomposePar.C)
- [detail](v1906/doc/parallelProcessing/decomposePar/decomposePar.md)

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

### faMeshDecomposition.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/parallelProcessing/decomposePar/faMeshDecomposition.C/faMeshDecomposition.C)
- [detail](v1906/doc/parallelProcessing/decomposePar/faMeshDecomposition.md)



### faFieldDecomposer.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/parallelProcessing/decomposePar/faFieldDecomposer.C/faFieldDecomposer.C)
- [detail](v1906/doc/parallelProcessing/decomposePar/faFieldDecomposer.md)



### domainDecompositionDryRun.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/parallelProcessing/decomposePar/domainDecompositionDryRun.C/domainDecompositionDryRun.C)
- [detail](v1906/doc/parallelProcessing/decomposePar/domainDecompositionDryRun.md)



### dimFieldDecomposerDecomposeFields.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/parallelProcessing/decomposePar/dimFieldDecomposerDecomposeFields.C/dimFieldDecomposerDecomposeFields.C)
- [detail](v1906/doc/parallelProcessing/decomposePar/dimFieldDecomposerDecomposeFields.md)



### domainDecompositionTemplates.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/parallelProcessing/decomposePar/domainDecompositionTemplates.C/domainDecompositionTemplates.C)
- [detail](v1906/doc/parallelProcessing/decomposePar/domainDecompositionTemplates.md)



### lagrangianFieldDecomposer.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/parallelProcessing/decomposePar/lagrangianFieldDecomposer.C/lagrangianFieldDecomposer.C)
- [detail](v1906/doc/parallelProcessing/decomposePar/lagrangianFieldDecomposer.md)

```
Description
    Lagrangian field decomposer.


```

### domainDecomposition.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/parallelProcessing/decomposePar/domainDecomposition.C/domainDecomposition.C)
- [detail](v1906/doc/parallelProcessing/decomposePar/domainDecomposition.md)



### faFieldDecomposerDecomposeFields.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/parallelProcessing/decomposePar/faFieldDecomposerDecomposeFields.C/faFieldDecomposerDecomposeFields.C)
- [detail](v1906/doc/parallelProcessing/decomposePar/faFieldDecomposerDecomposeFields.md)



### readFields.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/parallelProcessing/decomposePar/readFields.C/readFields.C)
- [detail](v1906/doc/parallelProcessing/decomposePar/readFields.md)



### dimFieldDecomposer.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/parallelProcessing/decomposePar/dimFieldDecomposer.C/dimFieldDecomposer.C)
- [detail](v1906/doc/parallelProcessing/decomposePar/dimFieldDecomposer.md)



### domainDecompositionMesh.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/parallelProcessing/decomposePar/domainDecompositionMesh.C/domainDecompositionMesh.C)
- [detail](v1906/doc/parallelProcessing/decomposePar/domainDecompositionMesh.md)

```
Description
    Private member of domainDecomposition.
    Decomposes the mesh into bits


```

### pointFieldDecomposer.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/parallelProcessing/decomposePar/pointFieldDecomposer.C/pointFieldDecomposer.C)
- [detail](v1906/doc/parallelProcessing/decomposePar/pointFieldDecomposer.md)



### domainDecompositionDistribute.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/parallelProcessing/decomposePar/domainDecompositionDistribute.C/domainDecompositionDistribute.C)
- [detail](v1906/doc/parallelProcessing/decomposePar/domainDecompositionDistribute.md)



### pointFieldDecomposerDecomposeFields.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/parallelProcessing/decomposePar/pointFieldDecomposerDecomposeFields.C/pointFieldDecomposerDecomposeFields.C)
- [detail](v1906/doc/parallelProcessing/decomposePar/pointFieldDecomposerDecomposeFields.md)



### lagrangianFieldDecomposerDecomposeFields.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/parallelProcessing/decomposePar/lagrangianFieldDecomposerDecomposeFields.C/lagrangianFieldDecomposerDecomposeFields.C)
- [detail](v1906/doc/parallelProcessing/decomposePar/lagrangianFieldDecomposerDecomposeFields.md)



## reconstructParMesh

### reconstructParMesh.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/parallelProcessing/reconstructParMesh/reconstructParMesh.C/reconstructParMesh.C)
- [detail](v1906/doc/parallelProcessing/reconstructParMesh/reconstructParMesh.md)

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

## reconstructPar

### reconstructPar.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/parallelProcessing/reconstructPar/reconstructPar.C/reconstructPar.C)
- [detail](v1906/doc/parallelProcessing/reconstructPar/reconstructPar.md)

```
Description
    Reconstructs fields of a case that is decomposed for parallel
    execution of OpenFOAM.


```

### processorFaMeshes.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/parallelProcessing/reconstructPar/processorFaMeshes.C/processorFaMeshes.C)
- [detail](v1906/doc/parallelProcessing/reconstructPar/processorFaMeshes.md)



### faFieldReconstructor.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/parallelProcessing/reconstructPar/faFieldReconstructor.C/faFieldReconstructor.C)
- [detail](v1906/doc/parallelProcessing/reconstructPar/faFieldReconstructor.md)



### faFieldReconstructorReconstructFields.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/parallelProcessing/reconstructPar/faFieldReconstructorReconstructFields.C/faFieldReconstructorReconstructFields.C)
- [detail](v1906/doc/parallelProcessing/reconstructPar/faFieldReconstructorReconstructFields.md)



# postProcessing

## lumped

### lumpedPointForces

#### lumpedPointForces.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/postProcessing/lumped/lumpedPointForces/lumpedPointForces.C/lumpedPointForces.C)
- [detail](v1906/doc/postProcessing/lumped/lumpedPointForces/lumpedPointForces.md)

```
Description
    Extract force/moment information from existing calculations based
    on the segmentation of the pressure integration zones.


```

### lumpedPointMovement

#### lumpedPointMovement.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/postProcessing/lumped/lumpedPointMovement/lumpedPointMovement.C/lumpedPointMovement.C)
- [detail](v1906/doc/postProcessing/lumped/lumpedPointMovement/lumpedPointMovement.md)

```
Description
    This utility can be used to produce VTK files to visualize the response
    points/rotations and the corresponding movement of the building surfaces.

    Uses the tabulated responses from the specified file.
    Optionally, it can also be used to a dummy responder for the
    externalFileCoupler logic, which makes it useful as a debugging facility
    as well demonstrating how an external application could communicate
    with the lumpedPointMovement point-patch boundary condition.


```

### lumpedPointZones

#### lumpedPointZones.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/postProcessing/lumped/lumpedPointZones/lumpedPointZones.C/lumpedPointZones.C)
- [detail](v1906/doc/postProcessing/lumped/lumpedPointZones/lumpedPointZones.md)

```
Description
    Produce a VTK PolyData file \c lumpedPointZones.vtp in which the
    segmentation of the pressure integration zones can be visualized
    for diagnostic purposes. Does not use external coupling.


```

## optimisation

### computeSensitivities

#### computeSensitivities.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/postProcessing/optimisation/computeSensitivities/computeSensitivities.C/computeSensitivities.C)
- [detail](v1906/doc/postProcessing/optimisation/computeSensitivities/computeSensitivities.md)

```
Description
    Computes the sensitivities wrt what is defined in the optimisationDict


```

## miscellaneous

### pdfPlot

#### pdfPlot.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/postProcessing/miscellaneous/pdfPlot/pdfPlot.C/pdfPlot.C)
- [detail](v1906/doc/postProcessing/miscellaneous/pdfPlot/pdfPlot.md)

```
Description
    Generate a graph of a probability distribution function.


```

### temporalInterpolate

#### temporalInterpolate.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/postProcessing/miscellaneous/temporalInterpolate/temporalInterpolate.C/temporalInterpolate.C)
- [detail](v1906/doc/postProcessing/miscellaneous/temporalInterpolate/temporalInterpolate.md)

```
Description
    Interpolate fields between time-steps e.g. for animation.


```

### postChannel

#### channelIndex.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/postProcessing/miscellaneous/postChannel/channelIndex.C/channelIndex.C)
- [detail](v1906/doc/postProcessing/miscellaneous/postChannel/channelIndex.md)



#### postChannel.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/postProcessing/miscellaneous/postChannel/postChannel.C/postChannel.C)
- [detail](v1906/doc/postProcessing/miscellaneous/postChannel/postChannel.md)

```
Description
    Post-process data from channel flow calculations.

    For each time: calculate: txx, txy,tyy, txy,
    eps, prod, vorticity, enstrophy and helicity. Assuming that the mesh
    is periodic in the x and z directions, collapse Umeanx, Umeany, txx,
    txy and tyy to a line and print them as standard output.


```

#### channelIndexTemplates.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/postProcessing/miscellaneous/postChannel/channelIndexTemplates.C/channelIndexTemplates.C)
- [detail](v1906/doc/postProcessing/miscellaneous/postChannel/channelIndexTemplates.md)



### engineCompRatio

#### engineCompRatio.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/postProcessing/miscellaneous/engineCompRatio/engineCompRatio.C/engineCompRatio.C)
- [detail](v1906/doc/postProcessing/miscellaneous/engineCompRatio/engineCompRatio.md)

```
Description
    Calculate the engine geometric compression ratio.

    Note: if you have valves and/or extra volumes it will not work,
          since it calculates the volume at BDC and TCD.


```

### profilingSummary

#### profilingSummary.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/postProcessing/miscellaneous/profilingSummary/profilingSummary.C/profilingSummary.C)
- [detail](v1906/doc/postProcessing/miscellaneous/profilingSummary/profilingSummary.md)

```
Description
    Collects information from profiling files in the processor
    sub-directories and summarizes the number of calls and time spent as
    max/avg/min values. If the values are identical for all processes,
    only a single value is written.


```

## lagrangian

### steadyParticleTracks

#### steadyParticleTracks.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/postProcessing/lagrangian/steadyParticleTracks/steadyParticleTracks.C/steadyParticleTracks.C)
- [detail](v1906/doc/postProcessing/lagrangian/steadyParticleTracks/steadyParticleTracks.md)

```
Description
    Generate a legacy VTK file of particle tracks for cases that were
    computed using a steady-state cloud

    Note:
    - Case must be re-constructed (if running in parallel) before use


```

#### steadyParticleTracksTemplates.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/postProcessing/lagrangian/steadyParticleTracks/steadyParticleTracksTemplates.C/steadyParticleTracksTemplates.C)
- [detail](v1906/doc/postProcessing/lagrangian/steadyParticleTracks/steadyParticleTracksTemplates.md)



### particleTracks

#### particleTracks.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/postProcessing/lagrangian/particleTracks/particleTracks.C/particleTracks.C)
- [detail](v1906/doc/postProcessing/lagrangian/particleTracks/particleTracks.md)

```
Description
    Generate a legacy VTK file of particle tracks for cases that were
    computed using a tracked-parcel-type cloud.


```

## postProcess

### postProcess.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/postProcessing/postProcess/postProcess.C/postProcess.C)
- [detail](v1906/doc/postProcessing/postProcess/postProcess.md)

```
Description
    Execute the set of functionObjects specified in the selected dictionary
    (which defaults to system/controlDict) or on the command-line for the
    selected set of times on the selected set of fields.


```

## graphics

### PVReaders

#### vtkPVblockMesh

##### vtkPVblockMesh.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/postProcessing/graphics/PVReaders/vtkPVblockMesh/vtkPVblockMesh.C/vtkPVblockMesh.C)
- [detail](v1906/doc/postProcessing/graphics/PVReaders/vtkPVblockMesh/vtkPVblockMesh.md)



##### vtkPVblockMeshConvert.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/postProcessing/graphics/PVReaders/vtkPVblockMesh/vtkPVblockMeshConvert.C/vtkPVblockMeshConvert.C)
- [detail](v1906/doc/postProcessing/graphics/PVReaders/vtkPVblockMesh/vtkPVblockMeshConvert.md)



##### lnInclude

###### vtkPVblockMesh.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/postProcessing/graphics/PVReaders/vtkPVblockMesh/lnInclude/vtkPVblockMesh.C/vtkPVblockMesh.C)
- [detail](v1906/doc/postProcessing/graphics/PVReaders/vtkPVblockMesh/lnInclude/vtkPVblockMesh.md)



###### vtkPVblockMeshConvert.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/postProcessing/graphics/PVReaders/vtkPVblockMesh/lnInclude/vtkPVblockMeshConvert.C/vtkPVblockMeshConvert.C)
- [detail](v1906/doc/postProcessing/graphics/PVReaders/vtkPVblockMesh/lnInclude/vtkPVblockMeshConvert.md)



#### foamPv

##### foamPvCoreTemplates.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/postProcessing/graphics/PVReaders/foamPv/foamPvCoreTemplates.C/foamPvCoreTemplates.C)
- [detail](v1906/doc/postProcessing/graphics/PVReaders/foamPv/foamPvCoreTemplates.md)



##### foamPvCore.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/postProcessing/graphics/PVReaders/foamPv/foamPvCore.C/foamPvCore.C)
- [detail](v1906/doc/postProcessing/graphics/PVReaders/foamPv/foamPvCore.md)



##### lnInclude

###### foamPvCoreTemplates.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/postProcessing/graphics/PVReaders/foamPv/lnInclude/foamPvCoreTemplates.C/foamPvCoreTemplates.C)
- [detail](v1906/doc/postProcessing/graphics/PVReaders/foamPv/lnInclude/foamPvCoreTemplates.md)



###### foamPvCore.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/postProcessing/graphics/PVReaders/foamPv/lnInclude/foamPvCore.C/foamPvCore.C)
- [detail](v1906/doc/postProcessing/graphics/PVReaders/foamPv/lnInclude/foamPvCore.md)



#### vtkPVFoam

##### vtkPVFoamFieldTemplates.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/postProcessing/graphics/PVReaders/vtkPVFoam/vtkPVFoamFieldTemplates.C/vtkPVFoamFieldTemplates.C)
- [detail](v1906/doc/postProcessing/graphics/PVReaders/vtkPVFoam/vtkPVFoamFieldTemplates.md)



##### vtkPVFoamMeshVolume.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/postProcessing/graphics/PVReaders/vtkPVFoam/vtkPVFoamMeshVolume.C/vtkPVFoamMeshVolume.C)
- [detail](v1906/doc/postProcessing/graphics/PVReaders/vtkPVFoam/vtkPVFoamMeshVolume.md)



##### vtkPVFoamMeshLagrangian.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/postProcessing/graphics/PVReaders/vtkPVFoam/vtkPVFoamMeshLagrangian.C/vtkPVFoamMeshLagrangian.C)
- [detail](v1906/doc/postProcessing/graphics/PVReaders/vtkPVFoam/vtkPVFoamMeshLagrangian.md)



##### vtkPVFoamUpdateTemplates.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/postProcessing/graphics/PVReaders/vtkPVFoam/vtkPVFoamUpdateTemplates.C/vtkPVFoamUpdateTemplates.C)
- [detail](v1906/doc/postProcessing/graphics/PVReaders/vtkPVFoam/vtkPVFoamUpdateTemplates.md)



##### vtkPVFoamMesh.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/postProcessing/graphics/PVReaders/vtkPVFoam/vtkPVFoamMesh.C/vtkPVFoamMesh.C)
- [detail](v1906/doc/postProcessing/graphics/PVReaders/vtkPVFoam/vtkPVFoamMesh.md)



##### vtkPVFoamUpdateInfo.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/postProcessing/graphics/PVReaders/vtkPVFoam/vtkPVFoamUpdateInfo.C/vtkPVFoamUpdateInfo.C)
- [detail](v1906/doc/postProcessing/graphics/PVReaders/vtkPVFoam/vtkPVFoamUpdateInfo.md)



##### lnInclude

###### vtkPVFoamFieldTemplates.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/postProcessing/graphics/PVReaders/vtkPVFoam/lnInclude/vtkPVFoamFieldTemplates.C/vtkPVFoamFieldTemplates.C)
- [detail](v1906/doc/postProcessing/graphics/PVReaders/vtkPVFoam/lnInclude/vtkPVFoamFieldTemplates.md)



###### vtkPVFoamMeshVolume.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/postProcessing/graphics/PVReaders/vtkPVFoam/lnInclude/vtkPVFoamMeshVolume.C/vtkPVFoamMeshVolume.C)
- [detail](v1906/doc/postProcessing/graphics/PVReaders/vtkPVFoam/lnInclude/vtkPVFoamMeshVolume.md)



###### vtkPVFoamMeshLagrangian.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/postProcessing/graphics/PVReaders/vtkPVFoam/lnInclude/vtkPVFoamMeshLagrangian.C/vtkPVFoamMeshLagrangian.C)
- [detail](v1906/doc/postProcessing/graphics/PVReaders/vtkPVFoam/lnInclude/vtkPVFoamMeshLagrangian.md)



###### vtkPVFoamUpdateTemplates.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/postProcessing/graphics/PVReaders/vtkPVFoam/lnInclude/vtkPVFoamUpdateTemplates.C/vtkPVFoamUpdateTemplates.C)
- [detail](v1906/doc/postProcessing/graphics/PVReaders/vtkPVFoam/lnInclude/vtkPVFoamUpdateTemplates.md)



###### vtkPVFoamMesh.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/postProcessing/graphics/PVReaders/vtkPVFoam/lnInclude/vtkPVFoamMesh.C/vtkPVFoamMesh.C)
- [detail](v1906/doc/postProcessing/graphics/PVReaders/vtkPVFoam/lnInclude/vtkPVFoamMesh.md)



###### vtkPVFoamUpdateInfo.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/postProcessing/graphics/PVReaders/vtkPVFoam/lnInclude/vtkPVFoamUpdateInfo.C/vtkPVFoamUpdateInfo.C)
- [detail](v1906/doc/postProcessing/graphics/PVReaders/vtkPVFoam/lnInclude/vtkPVFoamUpdateInfo.md)



###### vtkPVFoamFields.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/postProcessing/graphics/PVReaders/vtkPVFoam/lnInclude/vtkPVFoamFields.C/vtkPVFoamFields.C)
- [detail](v1906/doc/postProcessing/graphics/PVReaders/vtkPVFoam/lnInclude/vtkPVFoamFields.md)



###### vtkPVFoam.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/postProcessing/graphics/PVReaders/vtkPVFoam/lnInclude/vtkPVFoam.C/vtkPVFoam.C)
- [detail](v1906/doc/postProcessing/graphics/PVReaders/vtkPVFoam/lnInclude/vtkPVFoam.md)



##### vtkPVFoamFields.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/postProcessing/graphics/PVReaders/vtkPVFoam/vtkPVFoamFields.C/vtkPVFoamFields.C)
- [detail](v1906/doc/postProcessing/graphics/PVReaders/vtkPVFoam/vtkPVFoamFields.md)



##### vtkPVFoam.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/postProcessing/graphics/PVReaders/vtkPVFoam/vtkPVFoam.C/vtkPVFoam.C)
- [detail](v1906/doc/postProcessing/graphics/PVReaders/vtkPVFoam/vtkPVFoam.md)



## dataConversion

### foamToVTK

#### readFields.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/postProcessing/dataConversion/foamToVTK/readFields.C/readFields.C)
- [detail](v1906/doc/postProcessing/dataConversion/foamToVTK/readFields.md)



#### foamToVTK.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/postProcessing/dataConversion/foamToVTK/foamToVTK.C/foamToVTK.C)
- [detail](v1906/doc/postProcessing/dataConversion/foamToVTK/foamToVTK.md)

```
Description
    General OpenFOAM to VTK file writer.

    Other bits
    - Handles volFields, pointFields, surfaceScalarField, surfaceVectorField
      fields.
    - Mesh topo changes.
    - Output legacy or xml VTK format in ascii or binary.
    - Single time step writing.
    - Write subset only.
    - Optional decomposition of cells.

Usage
    \b foamToVTK [OPTION]

    Options:
      - \par -ascii
        Write VTK data in ASCII format instead of binary.

      - \par -legacy
        Write VTK data in legacy format instead of XML format

      - \par -fields \<fields\>
        Specify single or multiple fields to write (all by default)
        For example,
        \verbatim
          -fields T
          -fields '(p T U \"alpha.*\")'
        \endverbatim
        The quoting is required to avoid shell expansions and to pass the
        information as a single argument.

      - \par -surfaceFields
        Write surfaceScalarFields (e.g., phi)

      - \par -cellSet \<name\>
      - \par -cellZone \<name\>
        Restrict conversion to either the cellSet or the cellZone.

      - \par -faceSet \<name\>
      - \par -pointSet \<name\>
        Restrict conversion to the faceSet or pointSet.

      - \par -faceZones zone or zone list
        Specify single faceZone or or multiple faceZones (name or regex)
        to write

      - \par -nearCellValue
        Output cell value on patches instead of patch value itself

      - \par -no-boundary
        Suppress output for all boundary patches

      - \par -no-internal
        Suppress output for internal (volume) mesh

      - \par -no-lagrangian
        Suppress writing Lagrangian positions and fields.

      - \par -no-point-data
        Suppress conversion of pointFields. No interpolated PointData.

      - \par -with-ids
        Additional mesh id fields (cellID, procID, patchID)

      - \par -with-point-ids
        Additional pointID field for internal mesh

      - \par -poly-decomp
        Decompose polyhedral cells into tets/pyramids

      - \par -one-boundary
        Combine all patches into a single boundary file

      - \par -patches NAME | LIST
        Specify single patch or multiple patches (name or regex) to write
        For example,
        \verbatim
          -patches top
          -patches '( front \".*back\" )'
        \endverbatim

      - \par -excludePatches NAME | LIST
        Specify single or multiple patches (name or regex) not to convert.
        For example,
        \verbatim
          -excludePatches '( inlet_1 inlet_2 "proc.*")'
        \endverbatim

Note
    The mesh subset is handled by fvMeshSubsetProxy. Slight inconsistency in
    interpolation: on the internal field it interpolates the whole volField
    to the whole-mesh pointField and then selects only those values it
    needs for the subMesh (using the fvMeshSubset cellMap(), pointMap()
    functions). For the patches however it uses the
    fvMeshSubset.interpolate function to directly interpolate the
    whole-mesh values onto the subset patch.


```

### smapToFoam

#### smapToFoam.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/postProcessing/dataConversion/smapToFoam/smapToFoam.C/smapToFoam.C)
- [detail](v1906/doc/postProcessing/dataConversion/smapToFoam/smapToFoam.md)

```
Description
    Translate a STARCD SMAP data file into OpenFOAM field format.


```

### foamToTetDualMesh

#### foamToTetDualMesh.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/postProcessing/dataConversion/foamToTetDualMesh/foamToTetDualMesh.C/foamToTetDualMesh.C)
- [detail](v1906/doc/postProcessing/dataConversion/foamToTetDualMesh/foamToTetDualMesh.md)

```
Description
    Convert polyMesh results to tetDualMesh.


```

### foamToEnsightParts

#### foamToEnsightParts.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/postProcessing/dataConversion/foamToEnsightParts/foamToEnsightParts.C/foamToEnsightParts.C)
- [detail](v1906/doc/postProcessing/dataConversion/foamToEnsightParts/foamToEnsightParts.md)

```
Description
    Translate OpenFOAM data to Ensight format with an Ensight part
    for each cellZone and patch.

Usage
    \b foamToEnsightParts [OPTION]

    Options:
      - \par -ascii
        Write Ensight data in ASCII format instead of "C Binary"

      - \par -fields \<fields\>
        Specify single or multiple fields to write (all by default)
        For example,
        \verbatim
          -fields T
          -fields '(p T U \"alpha.*\")'
        \endverbatim
        The quoting is required to avoid shell expansions and to pass the
        information as a single argument.

      - \par -noZero
        Exclude the often incomplete initial conditions.

      - \par -index \<start\>
        Ignore the time index contained in the time file and use a
        simple indexing when creating the \c Ensight/data/######## files.

      - \par -no-lagrangian
        Suppress writing lagrangian positions and fields.

      - \par -no-mesh
        Suppress writing the geometry. Can be useful for converting partial
        results for a static geometry.

      - \par -noZero
        Exclude the often incomplete initial conditions.

      - \par -name \<subdir\>
        Define sub-directory name to use for Ensight data (default: "Ensight")

      - \par -width \<n\>
        Width of Ensight data subdir

Note
    - no parallel data.
    - writes to \a Ensight directory to avoid collisions with foamToEnsight.


```

#### readFields.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/postProcessing/dataConversion/foamToEnsightParts/readFields.C/readFields.C)
- [detail](v1906/doc/postProcessing/dataConversion/foamToEnsightParts/readFields.md)



### foamToEnsight

#### foamToEnsight.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/postProcessing/dataConversion/foamToEnsight/foamToEnsight.C/foamToEnsight.C)
- [detail](v1906/doc/postProcessing/dataConversion/foamToEnsight/foamToEnsight.md)

```
Description
    Translate OpenFOAM data to EnSight format.
    An Ensight part is created for the internalMesh and for each patch.

Usage
    \b foamToEnsight [OPTION]

    Options:
      - \par -ascii
        Write Ensight data in ASCII format instead of "C Binary"

      - \par -fields \<fields\>
        Specify single or multiple fields to write (all by default)
        For example,
        \verbatim
          -fields T
          -fields '(p T U \"alpha.*\")'
        \endverbatim
        The quoting is required to avoid shell expansions and to pass the
        information as a single argument.

      - \par -no-boundary
        Suppress writing any patches.

      - \par -no-internal
        Suppress writing the internal mesh.

      - \par -no-lagrangian
        Suppress writing lagrangian positions and fields.

      - \par -patches patch or patch list
        Specify particular patches to write.

      - \par -faceZones zone or zone list
        Specify faceZones to write, with wildcards

      - \par -cellZone zoneName
        Specify single cellZone to write (not lagrangian)

      - \par -noZero
        Exclude the often incomplete initial conditions.

      - \par -name \<subdir\>
        Define sub-directory name to use for Ensight data (default: "EnSight")

      - \par -width \<n\>
        Width of Ensight data subdir (default: 8)

Note
    Writes to \a EnSight directory to avoid collisions with
    foamToEnsightParts


```

#### readFields.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/postProcessing/dataConversion/foamToEnsight/readFields.C/readFields.C)
- [detail](v1906/doc/postProcessing/dataConversion/foamToEnsight/readFields.md)



### foamDataToFluent

#### writeFluentVectorField.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/postProcessing/dataConversion/foamDataToFluent/writeFluentVectorField.C/writeFluentVectorField.C)
- [detail](v1906/doc/postProcessing/dataConversion/foamDataToFluent/writeFluentVectorField.md)

```
Description
    Given a volVectorField and Fluent field identifier, write the field in
    Fluent data format



```

#### foamDataToFluent.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/postProcessing/dataConversion/foamDataToFluent/foamDataToFluent.C/foamDataToFluent.C)
- [detail](v1906/doc/postProcessing/dataConversion/foamDataToFluent/foamDataToFluent.md)

```
Description
    Translate OpenFOAM data to Fluent format.


```

#### writeFluentScalarField.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/postProcessing/dataConversion/foamDataToFluent/writeFluentScalarField.C/writeFluentScalarField.C)
- [detail](v1906/doc/postProcessing/dataConversion/foamDataToFluent/writeFluentScalarField.md)

```
Description
    Given a volScalarField and Fluent field identifier, write the field in
    Fluent data format



```

### foamToGMV

#### foamToGMV.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/postProcessing/dataConversion/foamToGMV/foamToGMV.C/foamToGMV.C)
- [detail](v1906/doc/postProcessing/dataConversion/foamToGMV/foamToGMV.md)

```
Description
    Translate OpenFOAM output to GMV readable files.

    A free post-processor with available binaries from
    http://www-xdiv.lanl.gov/XCM/gmv/


```

#### itoa.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/postProcessing/dataConversion/foamToGMV/itoa.C/itoa.C)
- [detail](v1906/doc/postProcessing/dataConversion/foamToGMV/itoa.md)



## noise

### noise.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/postProcessing/noise/noise.C/noise.C)
- [detail](v1906/doc/postProcessing/noise/noise.md)

```
Description
    Perform noise analysis of pressure data.

    The utility provides a light wrapper around the run-time selectable
    noise model.  Current options include:
    - point, and
    - surface noise.

Usage
    \verbatim
    noiseModel      surfaceNoise; // pointNoise

    surfaceNoiseCoeffs
    {
        windowModel     Hanning;

        HanningCoeffs
        {
            // Window overlap percentage
            overlapPercent  50;
            symmetric       yes;
            extended        yes;

            // Optional number of windows, default = all available
            nWindow         5;
        }


        // Input files list
        files       ("postProcessing/faceSource1/surface/patch/patch.case";)

        // Surface reader
        reader      ensight;

        // Surface writer
        writer      ensight;

        // Collate times for ensight output
        // - ensures geometry is only written once
        writeOptions
        {
            ensight
            {
                collateTimes true;
            }
        }

        // Number of samples in sampling window, default = 2^16 (=65536)
        N               4096;

        // Write interval for FFT data, default = 1
        fftWriteInterval 100;
    }
    \endverbatim


See also
    noiseFFT.H
    noiseModel.H
    windowModel.H


```

# miscellaneous

## patchSummary

### patchSummary.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/miscellaneous/patchSummary/patchSummary.C/patchSummary.C)
- [detail](v1906/doc/miscellaneous/patchSummary/patchSummary.md)

```
Description
    Write field and boundary condition info for each patch at each requested
    time instance.

    Default action is to write a single entry for patches/patchGroups with the
    same boundary conditions. Use the -expand option to print every patch
    separately. In case of multiple groups matching it will print only the
    first one.


```

### patchSummaryTemplates.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/miscellaneous/patchSummary/patchSummaryTemplates.C/patchSummaryTemplates.C)
- [detail](v1906/doc/miscellaneous/patchSummary/patchSummaryTemplates.md)



## foamListTimes

### foamListTimes.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/miscellaneous/foamListTimes/foamListTimes.C/foamListTimes.C)
- [detail](v1906/doc/miscellaneous/foamListTimes/foamListTimes.md)

```
Description
    List times using the timeSelector, or use to remove selected time
    directories.

Usage
    \b foamListTimes [OPTION]

    Options:
      - \par -processor
        List times from processor0/ directory

      - \par -rm
        Remove selected time directories

      - \par -verbose
        Report progress during removal

Note
    The OpenFOAM banner information is suppressed so that the output can be
    piped into another command.


```

## foamHelp

### helpTypes

#### helpBoundary

##### helpBoundary.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/miscellaneous/foamHelp/helpTypes/helpBoundary/helpBoundary.C/helpBoundary.C)
- [detail](v1906/doc/miscellaneous/foamHelp/helpTypes/helpBoundary/helpBoundary.md)



##### helpBoundaryTemplates.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/miscellaneous/foamHelp/helpTypes/helpBoundary/helpBoundaryTemplates.C/helpBoundaryTemplates.C)
- [detail](v1906/doc/miscellaneous/foamHelp/helpTypes/helpBoundary/helpBoundaryTemplates.md)



#### doxygenXmlParser

##### doxygenXmlParserTemplates.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/miscellaneous/foamHelp/helpTypes/doxygenXmlParser/doxygenXmlParserTemplates.C/doxygenXmlParserTemplates.C)
- [detail](v1906/doc/miscellaneous/foamHelp/helpTypes/doxygenXmlParser/doxygenXmlParserTemplates.md)



##### doxygenXmlParser.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/miscellaneous/foamHelp/helpTypes/doxygenXmlParser/doxygenXmlParser.C/doxygenXmlParser.C)
- [detail](v1906/doc/miscellaneous/foamHelp/helpTypes/doxygenXmlParser/doxygenXmlParser.md)



#### helpType

##### helpTypeNew.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/miscellaneous/foamHelp/helpTypes/helpType/helpTypeNew.C/helpTypeNew.C)
- [detail](v1906/doc/miscellaneous/foamHelp/helpTypes/helpType/helpTypeNew.md)



##### helpType.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/miscellaneous/foamHelp/helpTypes/helpType/helpType.C/helpType.C)
- [detail](v1906/doc/miscellaneous/foamHelp/helpTypes/helpType/helpType.md)



#### lnInclude

##### helpTypeNew.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/miscellaneous/foamHelp/helpTypes/lnInclude/helpTypeNew.C/helpTypeNew.C)
- [detail](v1906/doc/miscellaneous/foamHelp/helpTypes/lnInclude/helpTypeNew.md)



##### helpBoundary.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/miscellaneous/foamHelp/helpTypes/lnInclude/helpBoundary.C/helpBoundary.C)
- [detail](v1906/doc/miscellaneous/foamHelp/helpTypes/lnInclude/helpBoundary.md)



##### doxygenXmlParserTemplates.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/miscellaneous/foamHelp/helpTypes/lnInclude/doxygenXmlParserTemplates.C/doxygenXmlParserTemplates.C)
- [detail](v1906/doc/miscellaneous/foamHelp/helpTypes/lnInclude/doxygenXmlParserTemplates.md)



##### helpType.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/miscellaneous/foamHelp/helpTypes/lnInclude/helpType.C/helpType.C)
- [detail](v1906/doc/miscellaneous/foamHelp/helpTypes/lnInclude/helpType.md)



##### helpBoundaryTemplates.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/miscellaneous/foamHelp/helpTypes/lnInclude/helpBoundaryTemplates.C/helpBoundaryTemplates.C)
- [detail](v1906/doc/miscellaneous/foamHelp/helpTypes/lnInclude/helpBoundaryTemplates.md)



##### doxygenXmlParser.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/miscellaneous/foamHelp/helpTypes/lnInclude/doxygenXmlParser.C/doxygenXmlParser.C)
- [detail](v1906/doc/miscellaneous/foamHelp/helpTypes/lnInclude/doxygenXmlParser.md)



##### helpSolver.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/miscellaneous/foamHelp/helpTypes/lnInclude/helpSolver.C/helpSolver.C)
- [detail](v1906/doc/miscellaneous/foamHelp/helpTypes/lnInclude/helpSolver.md)



##### helpFunctionObject.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/miscellaneous/foamHelp/helpTypes/lnInclude/helpFunctionObject.C/helpFunctionObject.C)
- [detail](v1906/doc/miscellaneous/foamHelp/helpTypes/lnInclude/helpFunctionObject.md)



#### helpSolver

##### helpSolver.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/miscellaneous/foamHelp/helpTypes/helpSolver/helpSolver.C/helpSolver.C)
- [detail](v1906/doc/miscellaneous/foamHelp/helpTypes/helpSolver/helpSolver.md)



#### helpFunctionObject

##### helpFunctionObject.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/miscellaneous/foamHelp/helpTypes/helpFunctionObject/helpFunctionObject.C/helpFunctionObject.C)
- [detail](v1906/doc/miscellaneous/foamHelp/helpTypes/helpFunctionObject/helpFunctionObject.md)



### foamHelp.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/miscellaneous/foamHelp/foamHelp.C/foamHelp.C)
- [detail](v1906/doc/miscellaneous/foamHelp/foamHelp.md)

```
Description
    Top level wrapper utility around foam help utilities


```

## OSspecific

### addr2line

#### addr2line.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/miscellaneous/OSspecific/addr2line/addr2line.C/addr2line.C)
- [detail](v1906/doc/miscellaneous/OSspecific/addr2line/addr2line.md)

```
Description
    A simple, partial emulation of addr2line utility for Mac-OS.


```

## foamFormatConvert

### foamFormatConvert.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/miscellaneous/foamFormatConvert/foamFormatConvert.C/foamFormatConvert.C)
- [detail](v1906/doc/miscellaneous/foamFormatConvert/foamFormatConvert.md)

```
Description
    Converts all IOobjects associated with a case into the format specified
    in the controlDict.

    Mainly used to convert binary mesh/field files to ASCII.

    Problem: any zero-size List written binary gets written as '0'. When
    reading the file as a dictionary this is interpreted as a label. This
    is (usually) not a problem when doing patch fields since these get the
    'uniform', 'nonuniform' prefix. However zone contents are labelLists
    not labelFields and these go wrong. For now hacked a solution where
    we detect the keywords in zones and redo the dictionary entries
    to be labelLists.

Usage

    - foamFormatConvert [OPTION]

    \param -noConstant \n
    Exclude the constant/ directory from the times list

    \param -enableFunctionEntries \n
    By default all dictionary preprocessing of fields is disabled


```

## foamListRegions

### foamListRegions.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/miscellaneous/foamListRegions/foamListRegions.C/foamListRegions.C)
- [detail](v1906/doc/miscellaneous/foamListRegions/foamListRegions.md)

```
Description
    List regions from constant/regionProperties.

Usage
    \b foamListRegions [OPTION]

Note
    The OpenFOAM banner information is suppressed so that the output can be
    piped into another command.


```

## foamDictionary

### foamDictionary.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/miscellaneous/foamDictionary/foamDictionary.C/foamDictionary.C)
- [detail](v1906/doc/miscellaneous/foamDictionary/foamDictionary.md)

```
Description
    Interrogate and manipulate dictionaries.

Usage
    \b foamDictionary [OPTION] dictionary

      - \par -entry \<name\>
        Selects an entry

      - \par -keywords
        Prints the keywords (of the selected entry or of the top level if
        no entry was selected

      - \par -add \<value\>
        Adds the entry (should not exist yet)

      - \par -set \<value\>
        Adds or replaces the entry

      - \par -remove
        Remove the selected entry

      - \par -diff \<dictionary\>
        Write differences with respect to the specified dictionary
        (or sub entry if -entry specified)

      - \par -diff-etc \<dictionary\>
        Write differences with respect to the specified dictionary
        (or sub entry if -entry specified)

      - \par -expand
        Read the specified dictionary file, expand the macros etc. and write
        the resulting dictionary to standard output.

      - \par -includes
        List the \c \#include and \c \#sinclude files to standard output

      - \par -disableFunctionEntries
        Do not expand macros or directives (\#include etc)

      - \par -precision int
        Set default write precision for IOstreams

    Example usage:
      - Change simulation to run for one timestep only:
        \verbatim
          foamDictionary system/controlDict -entry stopAt -set writeNow
        \endverbatim

      - Change solver:
        \verbatim
           foamDictionary system/fvSolution -entry solvers.p.solver -set PCG
        \endverbatim

      - Print bc type:
        \verbatim
           foamDictionary 0/U -entry boundaryField.movingWall.type
        \endverbatim

      - Change bc parameter:
        \verbatim
           foamDictionary 0/U -entry boundaryField.movingWall.value \
             -set "uniform (2 0 0)"
        \endverbatim

      - Change whole bc type:
        \verbatim
          foamDictionary 0/U -entry boundaryField.movingWall \
            -set "{type uniformFixedValue; uniformValue (2 0 0);}"
        \endverbatim

      - Write the differences with respect to a template dictionary:
        \verbatim
          foamDictionary 0/U -diff-etc templates/closedVolume/0/U
        \endverbatim

      - Write the differences in boundaryField with respect to a
        template dictionary:
        \verbatim
          foamDictionary 0/U -diff-etc templates/closedVolume/0/U \
            -entry boundaryField
        \endverbatim

      - Change patch type:
        \verbatim
          foamDictionary constant/polyMesh/boundary \
            -entry entry0.fixedWalls.type -set patch
        \endverbatim
        This uses special parsing of Lists which stores these in the
        dictionary with keyword 'entryDDD' where DDD is the position
        in the dictionary (after ignoring the FoamFile entry).

    Notes:
        - the use of '.' as the scoping symbol might conflict with
        e.g. file extensions ('.' is not really considered
        to be a valid word character). Instead use the '/' as a scoping
        character e.g.
          foamDictionary system/snappyHexMeshDict \
            -entry /geometry/motorBike.obj -remove


```

## foamRestoreFields

### foamRestoreFields.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/miscellaneous/foamRestoreFields/foamRestoreFields.C/foamRestoreFields.C)
- [detail](v1906/doc/miscellaneous/foamRestoreFields/foamRestoreFields.md)

```
Description
    Restore field names by removing the ending.
    The fields are selected automatically or can be specified as optional
    command arguments.

    The operation 'mean' renames files ending with 'Mean' and makes
    a backup of existing names, using the '.orig' ending.

    The operation 'orig' renames files ending with '.orig'.

Usage
    \b foamRestoreFields [OPTION]

    Options:
      - \par -method mean | orig
        The renaming method.

      - \par -processor
        Use processor directories, taking information from processor0/

      - \par -dry-run
        Test without actually moving/renaming files.

      - \par -verbose
        Additional verbosity.


```

# surface

## surfaceMeshInfo

### surfaceMeshInfo.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/surface/surfaceMeshInfo/surfaceMeshInfo.C/surfaceMeshInfo.C)
- [detail](v1906/doc/surface/surfaceMeshInfo/surfaceMeshInfo.md)

```
Description
    Miscellaneous information about surface meshes.
    To simplify parsing of the output, the normal banner information
    is suppressed.

Usage
    \b surfaceMeshInfo surfaceFile [OPTION]

    Options:
      - \par -areas
        Report area for each face.

      - \par -scale \<scale\>
        Specify a scaling factor when reading files.

      - \par -xml
        Write output in XML format.

Note
    The filename extensions are used to determine the file format type.

    The XML-like output can be useful for extraction with other tools,
    but either output format can be easily extracted with a simple sed
    command:
    \verbatim
        surfaceMeshInfo surfaceFile -areas | \
            sed -ne '/areas/,/:/{ /:/!p }'

        surfaceMeshInfo surfaceFile -areas -xml | \
            sed -ne '/<areas/,/</{ /</!p }'
    \endverbatim


```

## surfaceFind

### surfaceFind.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/surface/surfaceFind/surfaceFind.C/surfaceFind.C)
- [detail](v1906/doc/surface/surfaceFind/surfaceFind.md)

```
Description
    Finds nearest face and vertex.
    Uses a zero origin unless otherwise specified.


```

## surfaceFeatureExtract

### extractionMethod

#### extractFromFile.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/surface/surfaceFeatureExtract/extractionMethod/extractFromFile.C/extractFromFile.C)
- [detail](v1906/doc/surface/surfaceFeatureExtract/extractionMethod/extractFromFile.md)



#### extractFromNone.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/surface/surfaceFeatureExtract/extractionMethod/extractFromNone.C/extractFromNone.C)
- [detail](v1906/doc/surface/surfaceFeatureExtract/extractionMethod/extractFromNone.md)



#### surfaceFeaturesExtraction.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/surface/surfaceFeatureExtract/extractionMethod/surfaceFeaturesExtraction.C/surfaceFeaturesExtraction.C)
- [detail](v1906/doc/surface/surfaceFeatureExtract/extractionMethod/surfaceFeaturesExtraction.md)



#### extractFromSurface.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/surface/surfaceFeatureExtract/extractionMethod/extractFromSurface.C/extractFromSurface.C)
- [detail](v1906/doc/surface/surfaceFeatureExtract/extractionMethod/extractFromSurface.md)



#### lnInclude

##### extractFromFile.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/surface/surfaceFeatureExtract/extractionMethod/lnInclude/extractFromFile.C/extractFromFile.C)
- [detail](v1906/doc/surface/surfaceFeatureExtract/extractionMethod/lnInclude/extractFromFile.md)



##### extractFromNone.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/surface/surfaceFeatureExtract/extractionMethod/lnInclude/extractFromNone.C/extractFromNone.C)
- [detail](v1906/doc/surface/surfaceFeatureExtract/extractionMethod/lnInclude/extractFromNone.md)



##### surfaceFeaturesExtraction.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/surface/surfaceFeatureExtract/extractionMethod/lnInclude/surfaceFeaturesExtraction.C/surfaceFeaturesExtraction.C)
- [detail](v1906/doc/surface/surfaceFeatureExtract/extractionMethod/lnInclude/surfaceFeaturesExtraction.md)



##### extractFromSurface.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/surface/surfaceFeatureExtract/extractionMethod/lnInclude/extractFromSurface.C/extractFromSurface.C)
- [detail](v1906/doc/surface/surfaceFeatureExtract/extractionMethod/lnInclude/extractFromSurface.md)



### surfaceFeatureExtract.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/surface/surfaceFeatureExtract/surfaceFeatureExtract.C/surfaceFeatureExtract.C)
- [detail](v1906/doc/surface/surfaceFeatureExtract/surfaceFeatureExtract.md)

```
Description
    Extracts and writes surface features to file. All but the basic feature
    extraction is a work-in-progress.

    The extraction process is driven by the \a system/surfaceFeatureExtractDict
    dictionary, but the \a -dict option can be used to define an alternative
    location.

    The \a system/surfaceFeatureExtractDict dictionary contains entries
    for each extraction process.
    The name of the individual dictionary is used to load the input surface
    (found under \a constant/triSurface) and also as the basename for the
    output.

    If the \c surfaces entry is present in a sub-dictionary, it has absolute
    precedence over a surface name deduced from the dictionary name.
    If the dictionary name itself does not have an extension, the \c surfaces
    entry becomes mandatory since in this case the dictionary name cannot
    represent an input surface file (ie, there is no file extension).
    The \c surfaces entry is a wordRe list, which allows loading and
    combining of multiple surfaces. Any exactly specified surface names must
    exist, but surfaces selected via regular expressions need not exist.
    The selection mechanism preserves order and is without duplicates.
    For example,
    \verbatim
    dictName
    {
        surfaces    (surface1.stl "other.*" othersurf.obj);
        ...
    }
    \endverbatim

    When loading surfaces, the points/faces/regions of each surface are
    normally offset to create an aggregated surface. No merging of points
    or faces is done. The optional entry \c loadingOption can be used to
    adjust the treatment of the regions when loading single or multiple files,
    with selections according to the Foam::triSurfaceLoader::loadingOption
    enumeration.
    \verbatim
    dictName
    {
        // Optional treatment of surface regions when loading
        // (single, file, offset, merge)
        loadingOption   file;
        ...
    }
    \endverbatim
    The \c loadingOption is primarily used in combination with the
    \c intersectionMethod (specifically its \c region option).
    The default \c loadingOption is normally \c offset,
    but this changes to \c file if the \c intersectionMethod
    \c region is being used.

    Once surfaces have been loaded, the first stage is to extract
    features according to the specified \c extractionMethod with values
    as per the following table:
    \table
        extractionMethod   | Description
        none               | No feature extraction
        extractFromFile    | Load features from the file named in featureEdgeFile
        extractFromSurface | Extract features from surface geometry
    \endtable

    There are a few entries that influence the extraction behaviour:
    \verbatim
        // File to use for extractFromFile input
        featureEdgeFile     "FileName"

        // Mark edges whose adjacent surface normals are at an angle less
        // than includedAngle as features
        // - 0  : selects no edges
        // - 180: selects all edges
        includedAngle       120;

        // Do not mark region edges
        geometricTestOnly   yes;
    \endverbatim

    This initial set of edges can be trimmed:
    \verbatim
        trimFeatures
        {
            // Remove features with fewer than the specified number of edges
            minElem         0;

            // Remove features shorter than the specified cumulative length
            minLen          0.0;
        }
    \endverbatim

    and subsetted
    \verbatim
    subsetFeatures
    {
        // Use a plane to select feature edges (normal)(basePoint)
        // Only keep edges that intersect the plane
        plane           (1 0 0)(0 0 0);

        // Select feature edges using a box // (minPt)(maxPt)
        // Only keep edges inside the box:
        insideBox       (0 0 0)(1 1 1);

        // Only keep edges outside the box:
        outsideBox      (0 0 0)(1 1 1);

        // Keep nonManifold edges (edges with >2 connected faces where
        // the faces form more than two different normal planes)
        nonManifoldEdges yes;

        // Keep open edges (edges with 1 connected face)
        openEdges       yes;
    }
    \endverbatim

    Subsequently, additional features can be added from another file:
    \verbatim
        addFeatures
        {
            // Add (without merging) another extendedFeatureEdgeMesh
            name        axZ.extendedFeatureEdgeMesh;
        }
    \endverbatim

    The intersectionMethod provides a final means of adding additional
    features. These are loosely termed "self-intersection", since it
    detects the face/face intersections of the loaded surface or surfaces.

    \table
        intersectionMethod | Description
        none    | Do nothing
        self    | All face/face intersections
        region  | Limit face/face intersections to those between different regions.
    \endtable
    The optional \c tolerance tuning parameter is available for handling
    the face/face intersections, but should normally not be touched.

    As well as the normal extendedFeatureEdgeMesh written,
    other items can be selected with boolean switches:

    \table
        Output option | Description
        closeness | Output the closeness of surface elements to other surface elements.
        curvature | Output surface curvature
        featureProximity | Output the proximity of feature points and edges to another
        writeObj  | Write features to OBJ format for postprocessing
        writeVTK  | Write closeness/curvature/proximity fields as VTK for postprocessing
    \endtable

Note
   Although surfaceFeatureExtract can do many things, there are still a fair
   number of corner cases where it may not produce the desired result.

```

## surfaceBooleanFeatures

### surfaceBooleanFeatures.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/surface/surfaceBooleanFeatures/surfaceBooleanFeatures.C/surfaceBooleanFeatures.C)
- [detail](v1906/doc/surface/surfaceBooleanFeatures/surfaceBooleanFeatures.md)

```
Description
    Generates the extendedFeatureEdgeMesh for the interface between a boolean
    operation on two surfaces.

    Assumes that the orientation of the surfaces is correct:
    - if the operation is union or intersection, that both surface's normals
      (n) have the same orientation with respect to a point, i.e. surfaces
      A and B are orientated the same with respect to point x:

    \verbatim
       _______
      |       |--> n
      |    ___|___             x
      |A  |   |   |--> n
      |___|___|  B|
          |       |
          |_______|

    \endverbatim

    - if the operation is a subtraction, the surfaces should be oppositely
    oriented with respect to a point, i.e. for (A - B), then B's orientation
    should be such that x is "inside", and A's orientation such that x is
    "outside"

    \verbatim
       _______
      |       |--> n
      |    ___|___             x
      |A  |   |   |
      |___|___|  B|
          |  n <--|
          |_______|

    \endverbatim

    When the operation is peformed - for union, all of the edges generates where
    one surfaces cuts another are all "internal" for union, and "external" for
    intersection, (B - A) and (A - B).
    This has been assumed, formal (dis)proof is invited.


```

### PolyhedronReader

#### PolyhedronReaderTemplates.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/surface/surfaceBooleanFeatures/PolyhedronReader/PolyhedronReaderTemplates.C/PolyhedronReaderTemplates.C)
- [detail](v1906/doc/surface/surfaceBooleanFeatures/PolyhedronReader/PolyhedronReaderTemplates.md)



#### PolyhedronReader.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/surface/surfaceBooleanFeatures/PolyhedronReader/PolyhedronReader.C/PolyhedronReader.C)
- [detail](v1906/doc/surface/surfaceBooleanFeatures/PolyhedronReader/PolyhedronReader.md)



#### lnInclude

##### PolyhedronReaderTemplates.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/surface/surfaceBooleanFeatures/PolyhedronReader/lnInclude/PolyhedronReaderTemplates.C/PolyhedronReaderTemplates.C)
- [detail](v1906/doc/surface/surfaceBooleanFeatures/PolyhedronReader/lnInclude/PolyhedronReaderTemplates.md)



##### PolyhedronReader.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/surface/surfaceBooleanFeatures/PolyhedronReader/lnInclude/PolyhedronReader.C/PolyhedronReader.C)
- [detail](v1906/doc/surface/surfaceBooleanFeatures/PolyhedronReader/lnInclude/PolyhedronReader.md)



## surfaceSubset

### surfaceSubset.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/surface/surfaceSubset/surfaceSubset.C/surfaceSubset.C)
- [detail](v1906/doc/surface/surfaceSubset/surfaceSubset.md)

```
Description
    A surface analysis tool that subsets the triSurface to choose a
    region of interest. Based on subsetMesh.


```

## surfaceConvert

### surfaceConvert.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/surface/surfaceConvert/surfaceConvert.C/surfaceConvert.C)
- [detail](v1906/doc/surface/surfaceConvert/surfaceConvert.md)

```
Description
    Converts from one surface mesh format to another.

Usage
    \b surfaceConvert inputFile outputFile [OPTION]

    Options:
      - \par -clean
        Perform some surface checking/cleanup on the input surface

      - \par -scale \<scale\>
        Specify a scaling factor for writing the files

      - \par -group
        Orders faces by region

Note
    The filename extensions are used to determine the file format type.


```

## surfaceSplitByPatch

### surfaceSplitByPatch.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/surface/surfaceSplitByPatch/surfaceSplitByPatch.C/surfaceSplitByPatch.C)
- [detail](v1906/doc/surface/surfaceSplitByPatch/surfaceSplitByPatch.md)

```
Description
    Writes regions of triSurface to separate files.


```

## surfaceSplitByTopology

### surfaceSplitByTopology.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/surface/surfaceSplitByTopology/surfaceSplitByTopology.C/surfaceSplitByTopology.C)
- [detail](v1906/doc/surface/surfaceSplitByTopology/surfaceSplitByTopology.md)

```
Description
    Strips any baffle parts of a surface.

    A baffle region is one which is reached by walking from an open edge, and
    stopping when a multiply connected edge is reached.


```

## surfaceOrient

### surfaceOrient.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/surface/surfaceOrient/surfaceOrient.C/surfaceOrient.C)
- [detail](v1906/doc/surface/surfaceOrient/surfaceOrient.md)

```
Description
    Set normal consistent with respect to a user provided 'outside' point.
    If the -inside option is used the point is considered inside.


```

## surfaceClean

### collapseEdge.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/surface/surfaceClean/collapseEdge.C/collapseEdge.C)
- [detail](v1906/doc/surface/surfaceClean/collapseEdge.md)



### collapseBase.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/surface/surfaceClean/collapseBase.C/collapseBase.C)
- [detail](v1906/doc/surface/surfaceClean/collapseBase.md)



### surfaceClean.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/surface/surfaceClean/surfaceClean.C/surfaceClean.C)
- [detail](v1906/doc/surface/surfaceClean/surfaceClean.md)

```
Description
    Utility to clean surfaces.

    Current functionality
    - removes baffles
    - collapses small edges, removing triangles.
    - converts sliver triangles into split edges by projecting point onto
      base of triangle.


```

## surfaceMeshExport

### surfaceMeshExport.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/surface/surfaceMeshExport/surfaceMeshExport.C/surfaceMeshExport.C)
- [detail](v1906/doc/surface/surfaceMeshExport/surfaceMeshExport.md)

```
Description
    Export from surfMesh to various third-party surface formats with
    optional scaling or transformations (rotate/translate) on a
    coordinateSystem.

Usage
    \b surfaceMeshExport outputFile [OPTION]

    Options:
      - \par -clean
        Perform some surface checking/cleanup on the input surface.

      - \par -name \<name\>
        Specify an alternative surface name when writing.

      - \par -scaleIn \<scale\>
        Specify a scaling factor when reading files.

      - \par -scaleOut \<scale\>
        Specify a scaling factor when writing files.

      - \par -dict \<dictionary\>
        Specify an alternative dictionary for constant/coordinateSystems.

      - \par -from \<coordinateSystem\>
        Specify a coordinate system when reading files.

      - \par -to \<coordinateSystem\>
        Specify a coordinate system when writing files.

Note
    The filename extensions are used to determine the file format type.


```

## surfaceMeshExtract

### surfaceMeshExtract.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/surface/surfaceMeshExtract/surfaceMeshExtract.C/surfaceMeshExtract.C)
- [detail](v1906/doc/surface/surfaceMeshExtract/surfaceMeshExtract.md)

```
Description
    Extract patch or faceZone surfaces from a polyMesh.
    Depending on output surface format triangulates faces.

    Region numbers on faces no guaranteed to be the same as the patch indices.

    Optionally only extracts named patches.

    If run in parallel, processor patches get filtered out by default and
    the mesh is merged (based on topology).


```

## surfaceRefineRedGreen

### surfaceRefineRedGreen.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/surface/surfaceRefineRedGreen/surfaceRefineRedGreen.C/surfaceRefineRedGreen.C)
- [detail](v1906/doc/surface/surfaceRefineRedGreen/surfaceRefineRedGreen.md)

```
Description
    Refine by splitting all three edges of triangle ('red' refinement).

    Neighbouring triangles (which are not marked for refinement get split
    in half ('green' refinement).

    Reference:
    \verbatim
    R. Verfuerth, "A review of a posteriori
    error estimation and adaptive mesh refinement techniques",
    Wiley-Teubner, 1996)
    \endverbatim


```

## surfaceInflate

### surfaceInflate.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/surface/surfaceInflate/surfaceInflate.C/surfaceInflate.C)
- [detail](v1906/doc/surface/surfaceInflate/surfaceInflate.md)

```
Description
    Inflates surface. WIP. Checks for overlaps and locally lowers
    inflation distance

Usage
    - surfaceInflate [OPTION]

    \param -checkSelfIntersection \n
    Includes checks for self-intersection.

    \param -nSmooth
    Specify number of smoothing iterations

    \param -featureAngle
    Specify a feature angle


    E.g. inflate surface by 20mm with 1.5 safety factor:
        surfaceInflate DTC-scaled.obj 0.02 1.5 -featureAngle 45 -nSmooth 2


```

## surfaceCheck

### surfaceCheck.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/surface/surfaceCheck/surfaceCheck.C/surfaceCheck.C)
- [detail](v1906/doc/surface/surfaceCheck/surfaceCheck.md)

```
Description
    Check geometric and topological quality of a surface.

Usage
    \b surfaceCheck [OPTION] surfaceFile

    Options:
      - \par -checkSelfIntersection
        Check for self-intersection.

      - \par -splitNonManifold
        Split surface along non-manifold edges.

      - \par -verbose
        Extra verbosity.

      - \par -blockMesh
        Write vertices/blocks for tight-fitting 1 cell blockMeshDict.

      - \par -outputThreshold \<num files\>
        Upper limit on the number of files written.
        Prevent surfaces with many disconnected parts from writing many files.
        The default is 10. A value of 0 suppresses file writing.


```

## surfaceInertia

### surfaceInertia.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/surface/surfaceInertia/surfaceInertia.C/surfaceInertia.C)
- [detail](v1906/doc/surface/surfaceInertia/surfaceInertia.md)

```
Description
    Calculates the inertia tensor, principal axes and moments of a
    command line specified triSurface.

    Inertia can either be of the solid body or of a thin shell.


```

## surfaceToPatch

### surfaceToPatch.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/surface/surfaceToPatch/surfaceToPatch.C/surfaceToPatch.C)
- [detail](v1906/doc/surface/surfaceToPatch/surfaceToPatch.md)

```
Description
    Reads surface and applies surface regioning to a mesh. Uses boundaryMesh
    to do the hard work.


```

## surfaceHookUp

### surfaceHookUp.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/surface/surfaceHookUp/surfaceHookUp.C/surfaceHookUp.C)
- [detail](v1906/doc/surface/surfaceHookUp/surfaceHookUp.md)

```
Description
    Find close open edges and stitches the surface along them

Usage
    - surfaceHookUp hookDistance [OPTION]


```

## surfaceTransformPoints

### surfaceTransformPoints.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/surface/surfaceTransformPoints/surfaceTransformPoints.C/surfaceTransformPoints.C)
- [detail](v1906/doc/surface/surfaceTransformPoints/surfaceTransformPoints.md)

```
Description
    Transform (scale/rotate) a surface.
    Like transformPoints but for surfaces.

    The rollPitchYaw and yawPitchRoll options take three angles (degrees)
    that describe the intrinsic Euler rotation.

    rollPitchYaw
    - roll (rotation about X) followed by
    - pitch (rotation about Y) followed by
    - yaw (rotation about Z)

    yawPitchRoll
    - yaw (rotation about Z) followed by
    - pitch (rotation about Y) followed by
    - roll (rotation about X)


```

## surfaceCoarsen

### bunnylod

#### bunnygut.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/surface/surfaceCoarsen/bunnylod/bunnygut.C/bunnygut.C)
- [detail](v1906/doc/surface/surfaceCoarsen/bunnylod/bunnygut.md)



#### winmain.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/surface/surfaceCoarsen/bunnylod/winmain.C/winmain.C)
- [detail](v1906/doc/surface/surfaceCoarsen/bunnylod/winmain.md)



#### progmesh.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/surface/surfaceCoarsen/bunnylod/progmesh.C/progmesh.C)
- [detail](v1906/doc/surface/surfaceCoarsen/bunnylod/progmesh.md)



#### vector.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/surface/surfaceCoarsen/bunnylod/vector.C/vector.C)
- [detail](v1906/doc/surface/surfaceCoarsen/bunnylod/vector.md)



### surfaceCoarsen.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/surface/surfaceCoarsen/surfaceCoarsen.C/surfaceCoarsen.C)
- [detail](v1906/doc/surface/surfaceCoarsen/surfaceCoarsen.md)

```
Description
    Surface coarsening using 'bunnylod'

    Reference:
    \verbatim
        Polygon Reduction Demo
        By Stan Melax (c) 1998
        mailto:melax@cs.ualberta.ca
        http://www.cs.ualberta.ca/~melax
    \endverbatim


```

## surfaceRedistributePar

### surfaceRedistributePar.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/surface/surfaceRedistributePar/surfaceRedistributePar.C/surfaceRedistributePar.C)
- [detail](v1906/doc/surface/surfaceRedistributePar/surfaceRedistributePar.md)

```
Description
    (Re)distribution of triSurface. Either takes an undecomposed surface
    or an already decomposed surface and redistributes it so that each
    processor has all triangles that overlap its mesh.

Note
    - best decomposition option is hierarchical since it guarantees
      square decompositions.
    - triangles might be present on multiple processors.
    - merging uses geometric tolerance so take care with writing precision.


```

## surfaceLambdaMuSmooth

### surfaceLambdaMuSmooth.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/surface/surfaceLambdaMuSmooth/surfaceLambdaMuSmooth.C/surfaceLambdaMuSmooth.C)
- [detail](v1906/doc/surface/surfaceLambdaMuSmooth/surfaceLambdaMuSmooth.md)

```
Description
    Smooth a surface using lambda/mu smoothing.

    To get laplacian smoothing, set lambda to the relaxation factor and mu to
    zero.

    Provide an edgeMesh file containing points that are not to be moved during
    smoothing in order to preserve features.

    lambda/mu smoothing: G. Taubin, IBM Research report Rc-19923 (02/01/95)
    "A signal processing approach to fair surface design"


```

## surfaceMeshConvert

### surfaceMeshConvert.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/surface/surfaceMeshConvert/surfaceMeshConvert.C/surfaceMeshConvert.C)
- [detail](v1906/doc/surface/surfaceMeshConvert/surfaceMeshConvert.md)

```
Description
    Convert between surface formats with optional scaling or
    transformations (rotate/translate) on a coordinateSystem.

Usage
    \b surfaceMeshConvert inputFile outputFile [OPTION]

    Options:
      - \par -clean
        Perform some surface checking/cleanup on the input surface.

      - \par -scaleIn \<scale\>
        Specify a scaling factor when reading files.

      - \par -scaleOut \<scale\>
        Specify a scaling factor when writing files.

      - \par -dict \<dictionary\>
        Specify an alternative dictionary for constant/coordinateSystems.

      - \par -from \<coordinateSystem\>
        Specify a coordinate System when reading files.

      - \par -to \<coordinateSystem\>
        Specify a coordinate System when writing files.

      - \par -tri
        Triangulate surface.

Note
    The filename extensions are used to determine the file format type.


```

## surfaceAdd

### surfaceAdd.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/surface/surfaceAdd/surfaceAdd.C/surfaceAdd.C)
- [detail](v1906/doc/surface/surfaceAdd/surfaceAdd.md)

```
Description
    Add two surfaces. Does geometric merge on points.
    Does not check for overlapping/intersecting triangles.

    Keeps patches separate by renumbering.


```

## surfaceSplitNonManifolds

### surfaceSplitNonManifolds.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/surface/surfaceSplitNonManifolds/surfaceSplitNonManifolds.C/surfaceSplitNonManifolds.C)
- [detail](v1906/doc/surface/surfaceSplitNonManifolds/surfaceSplitNonManifolds.md)

```
Description
    Takes multiply connected surface and tries to split surface at
    multiply connected edges by duplicating points.

    Introduces concept of
    - borderEdge. Edge with 4 faces connected to it.
    - borderPoint. Point connected to exactly 2 borderEdges.
    - borderLine. Connected list of borderEdges.

    By duplicating borderPoints this will split 'borderLines'. As a
    preprocessing step it can detect borderEdges without any borderPoints
    and explicitly split these triangles.

    The problems in this algorithm are:
    - determining which two (of the four) faces form a surface. Done by walking
      face-edge-face while keeping and edge or point on the borderEdge
      borderPoint.
    - determining the outwards pointing normal to be used to slightly offset the
      duplicated point.

    Uses sortedEdgeFaces quite a bit.

    Is tested on simple borderLines resulting from extracting a surface
    from a hex mesh. Will quite possibly go wrong on more complicated border
    lines (i.e. ones forming a loop).

    Dumps surface every so often since might take a long time to complete.


```

## surfacePointMerge

### surfacePointMerge.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/surface/surfacePointMerge/surfacePointMerge.C/surfacePointMerge.C)
- [detail](v1906/doc/surface/surfacePointMerge/surfacePointMerge.md)

```
Description
    Merges points on surface if they are within absolute distance.
    Since absolute distance use with care!


```

## surfaceFeatureConvert

### surfaceFeatureConvert.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/surface/surfaceFeatureConvert/surfaceFeatureConvert.C/surfaceFeatureConvert.C)
- [detail](v1906/doc/surface/surfaceFeatureConvert/surfaceFeatureConvert.md)

```
Description
    Convert between edgeMesh formats.


```

## surfaceMeshImport

### surfaceMeshImport.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/surface/surfaceMeshImport/surfaceMeshImport.C/surfaceMeshImport.C)
- [detail](v1906/doc/surface/surfaceMeshImport/surfaceMeshImport.md)

```
Description
    Import from various third-party surface formats into surfMesh
    with optional scaling or transformations (rotate/translate)
    on a coordinateSystem.

Usage
    \b surfaceMeshImport inputFile [OPTION]

    Options:
      - \par -clean
        Perform some surface checking/cleanup on the input surface.

      - \par -name \<name\>
        Specify an alternative surface name when writing.

      - \par -scaleIn \<scale\>
        Specify a scaling factor when reading files.

      - \par -scaleOut \<scale\>
        Specify a scaling factor when writing files.

      - \par -dict \<dictionary\>
        Use alternative dictionary for constant/coordinateSystems.

      - \par -from \<coordinateSystem\>
        Specify a coordinate system when reading files.

      - \par -to \<coordinateSystem\>
        Specify a coordinate system when writing files.

Note
    The filename extensions are used to determine the file format type.


```

## surfacePatch

### surfacePatch.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/surface/surfacePatch/surfacePatch.C/surfacePatch.C)
- [detail](v1906/doc/surface/surfacePatch/surfacePatch.md)

```
Description
    Patches (regionises) a surface using a user-selectable method.

    The current methods are either based on a geometric feature angle
    (a replacement for the surfaceAutoPatch functionality) or on intersecting
    a set of searchableSurfaces - this will re-triangulate the intersecting
    triangles and regonise the resulting triangles according to being
    inside/outside the surface.


```

### searchableSurfaceModifier

#### cut.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/surface/surfacePatch/searchableSurfaceModifier/cut.C/cut.C)
- [detail](v1906/doc/surface/surfacePatch/searchableSurfaceModifier/cut.md)



#### autoPatch.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/surface/surfacePatch/searchableSurfaceModifier/autoPatch.C/autoPatch.C)
- [detail](v1906/doc/surface/surfacePatch/searchableSurfaceModifier/autoPatch.md)



#### searchableSurfaceModifier.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/surface/surfacePatch/searchableSurfaceModifier/searchableSurfaceModifier.C/searchableSurfaceModifier.C)
- [detail](v1906/doc/surface/surfacePatch/searchableSurfaceModifier/searchableSurfaceModifier.md)



# finiteArea

## checkFaMesh

### checkFaMesh.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/finiteArea/checkFaMesh/checkFaMesh.C/checkFaMesh.C)
- [detail](v1906/doc/finiteArea/checkFaMesh/checkFaMesh.md)

```
Description
    Check a finiteArea mesh

Author
    Zeljko Tukovic, FAMENA
    Hrvoje Jasak, Wikki Ltd.


```

## makeFaMesh

### makeFaMesh.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/finiteArea/makeFaMesh/makeFaMesh.C/makeFaMesh.C)
- [detail](v1906/doc/finiteArea/makeFaMesh/makeFaMesh.md)

```
Description
    A mesh generator for finiteArea mesh.

Author
    Zeljko Tukovic, FAMENA
    Hrvoje Jasak, Wikki Ltd.


```

# mesh

## conversion

### tetgenToFoam

#### tetgenToFoam.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/conversion/tetgenToFoam/tetgenToFoam.C/tetgenToFoam.C)
- [detail](v1906/doc/mesh/conversion/tetgenToFoam/tetgenToFoam.md)

```
Description
    Convert tetgen .ele and .node and .face files to an OpenFOAM mesh.

    Make sure to use add boundary attributes to the smesh file
    (5 fifth column in the element section)
    and run tetgen with -f option.

    Sample smesh file:
    \verbatim
        # cube.smesh -- A 10x10x10 cube
        8 3
        1       0 0 0
        2       0 10 0
        3       10 10 0
        4       10 0 0
        5       0 0 10
        6       0 10 10
        7       10 10 10
        8       10 0 10
        6 1                 # 1 for boundary info present
        4       1 2 3 4 11  # region number 11
        4       5 6 7 8 21  # region number 21
        4       1 2 6 5 3
        4       4 3 7 8 43
        4       1 5 8 4 5
        4       2 6 7 3 65
        0
        0
    \endverbatim

Note
    - for some reason boundary faces point inwards. I just reverse them
      always. Might use some geometric check instead.
    - marked faces might not actually be boundary faces of mesh.
      This is hopefully handled now by first constructing without boundaries
      and then reconstructing with boundary faces.


```

### foamMeshToFluent

#### foamMeshToFluent.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/conversion/foamMeshToFluent/foamMeshToFluent.C/foamMeshToFluent.C)
- [detail](v1906/doc/mesh/conversion/foamMeshToFluent/foamMeshToFluent.md)

```
Description
    Write an OpenFOAM mesh in Fluent mesh format.


```

#### fluentFvMesh.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/conversion/foamMeshToFluent/fluentFvMesh.C/fluentFvMesh.C)
- [detail](v1906/doc/mesh/conversion/foamMeshToFluent/fluentFvMesh.md)



### foamToSurface

#### foamToSurface.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/conversion/foamToSurface/foamToSurface.C/foamToSurface.C)
- [detail](v1906/doc/mesh/conversion/foamToSurface/foamToSurface.md)

```
Description
    Extract boundaries from an OpenFOAM mesh and write in a surface format

Usage
    \b foamToSurface [OPTION]

    Options:
      - \par -scale \<factor\>
        Specify an alternative geometry scaling factor.
        E.g. use \b 1000 to scale \em [m] to \em [mm].

      - \par -tri
        Triangulate surface.


```

### netgenNeutralToFoam

#### netgenNeutralToFoam.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/conversion/netgenNeutralToFoam/netgenNeutralToFoam.C/netgenNeutralToFoam.C)
- [detail](v1906/doc/mesh/conversion/netgenNeutralToFoam/netgenNeutralToFoam.md)

```
Description
    Convert a neutral file format (Netgen v4.4) to OpenFOAM.

    Example:

    9
      1.000000  1.000000  1.000000
      0.000000  1.000000  1.000000
      0.000000  0.000000  1.000000
      1.000000  0.000000  1.000000
      0.000000  1.000000  0.000000
      1.000000  1.000000  0.000000
      1.000000  0.000000  0.000000
      0.000000  0.000000  0.000000
      0.500000  0.500000  0.500000
    12
       1          7        8        9        3
       1          5        9        6        8
       1          5        9        2        1
       1          4        9        7        6
       1          7        8        6        9
       1          4        6        1        9
       1          5        9        8        2
       1          4        1        2        9
       1          1        6        5        9
       1          2        3        4        9
       1          8        9        3        2
       1          4        9        3        7
    12
       1            1        2        4
       1            3        4        2
       2            5        6        8
       2            7        8        6
       3            1        4        6
       3            7        6        4
       5            2        1        5
       5            6        5        1
       5            3        2        8
       5            5        8        2
       6            4        3        7
       6            8        7        3

NOTE:
    - reverse order of boundary faces using geometric test.
      (not very space efficient)
    - order of tet vertices only tested on one file.
    - all patch/cell/vertex numbers offset by one.


```

### foamToStarMesh

#### foamToStarMesh.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/conversion/foamToStarMesh/foamToStarMesh.C/foamToStarMesh.C)
- [detail](v1906/doc/mesh/conversion/foamToStarMesh/foamToStarMesh.md)

```
Description
    Write an OpenFOAM mesh in STARCD/PROSTAR (v4) bnd/cel/vrt format.

Usage
    \b foamToStarMesh [OPTION]

    Options:
      - \par -noBnd
        Suppress writing the \c .bnd file

      - \par -scale \<factor\>
        Specify an alternative geometry scaling factor.
        The default is \b 1000 (scale \em [m] to \em [mm]).

Note
    The cellTable information available in the files
    \c constant/cellTable and \c constant/polyMesh/cellTableId
    will be used if available. Otherwise the cellZones are used when
    creating the cellTable information.

See also
    Foam::cellTable, Foam::meshWriter and Foam::fileFormats::STARCDMeshWriter


```

### cfx4ToFoam

#### hexBlock.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/conversion/cfx4ToFoam/hexBlock.C/hexBlock.C)
- [detail](v1906/doc/mesh/conversion/cfx4ToFoam/hexBlock.md)



#### cfx4ToFoam.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/conversion/cfx4ToFoam/cfx4ToFoam.C/cfx4ToFoam.C)
- [detail](v1906/doc/mesh/conversion/cfx4ToFoam/cfx4ToFoam.md)

```
Description
    Convert a CFX 4 mesh to OpenFOAM format.


```

### kivaToFoam

#### kivaToFoam.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/conversion/kivaToFoam/kivaToFoam.C/kivaToFoam.C)
- [detail](v1906/doc/mesh/conversion/kivaToFoam/kivaToFoam.md)

```
Description
    Convert a KIVA3v grid to OpenFOAM.


```

### vtkUnstructuredToFoam

#### vtkUnstructuredToFoam.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/conversion/vtkUnstructuredToFoam/vtkUnstructuredToFoam.C/vtkUnstructuredToFoam.C)
- [detail](v1906/doc/mesh/conversion/vtkUnstructuredToFoam/vtkUnstructuredToFoam.md)

```
Description
    Convert legacy VTK file (ascii) containing an unstructured grid
    to an OpenFOAM mesh without boundary information.

Note
    The .vtk format does not contain any boundary information.
    It is purely a description of the internal mesh.
    Not extensively tested.


```

### fireToFoam

#### fireToFoam.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/conversion/fireToFoam/fireToFoam.C/fireToFoam.C)
- [detail](v1906/doc/mesh/conversion/fireToFoam/fireToFoam.md)

```
Description
    Convert AVL/FIRE polyhedral mesh to OpenFOAM format

Usage
    \b fireToFoam [OPTION] firePolyMesh

    Options:

      - \par -ascii
        Write in ASCII format instead of binary

      - \par -check
        Perform edge checking

      - \par -scale \<factor\>
        Specify an alternative geometry scaling factor.
        The default is \b 1 (no scaling).


```

### datToFoam

#### datToFoam.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/conversion/datToFoam/datToFoam.C/datToFoam.C)
- [detail](v1906/doc/mesh/conversion/datToFoam/datToFoam.md)

```
Description
    Reads in a datToFoam mesh file and outputs a points file.
    Used in conjunction with blockMesh.


```

### ccm

#### foamToCcm

##### foamToCcm.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/conversion/ccm/foamToCcm/foamToCcm.C/foamToCcm.C)
- [detail](v1906/doc/mesh/conversion/ccm/foamToCcm/foamToCcm.md)

```
Description
    Translates OPENFOAM mesh and/or results to CCM format

Usage
    \b foamToCcm [OPTION]

    Options:
      - \par -mesh
        convert mesh only to CCM format

      - \par -name \<name\>
        Provide alternative base name. Default is <tt>meshExport</tt>.

      - \par -overwrite
        No backup of existing output files.

      - \par -remap \<name\>
        Use specified remapping dictionary instead of
        <tt>constant/remapping</tt>

      - \par -results
        Convert results only to CCM format

Note
    - No parallel data
    - No Lagrangian elements
    - the -noZero time option can be useful to avoid the often incomplete
      initial conditions (missing useful calculated values)

See also
    Foam::ccm::writer for information about the
    <tt>constant/remapping</tt> file.


```

#### ccmToFoam

##### ccmToFoam.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/conversion/ccm/ccmToFoam/ccmToFoam.C/ccmToFoam.C)
- [detail](v1906/doc/mesh/conversion/ccm/ccmToFoam/ccmToFoam.md)

```
Description
    Reads CCM files as written by PROSTAR/STARCCM and writes an
    OPENFOAM polyMesh.

Usage
    \b ccmToFoam [OPTION] ccmMesh

    Options:
      - \par -ascii
        Write in ASCII format instead of binary

      - \par -export
        re-export mesh in CCM format for post-processing

      - \par -list
        List some information about the geometry

      - \par -name \<name\>
        Provide alternative base name for export.
        Default is <tt>meshExport</tt>.

      - \par -noBaffles
        Remove any baffles by merging the faces.

      - \par -merge
        Merge in-place interfaces

      - \par -numbered
        Use numbered patch/zone (not names) directly from ccm ids.

      - \par -remap \<name\>
        Use specified remapping dictionary instead of
        <tt>constant/remapping</tt>

      - \par -scale \<factor\>
        Specify an alternative geometry scaling factor.
        The default is \b 1 (no scaling).

      - \par -solids
        Treat any solid cells present just like fluid cells.
        The default is to remove them.

Note
    - sub-domains (fluid | solid | porosity) are stored as separate domains
      within the CCM file. These are merged together to form a single mesh.
    - baffles are written as interfaces for later use

See also
    Foam::ccm::reader for more information about the File Locations


```

### foamToFireMesh

#### foamToFireMesh.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/conversion/foamToFireMesh/foamToFireMesh.C/foamToFireMesh.C)
- [detail](v1906/doc/mesh/conversion/foamToFireMesh/foamToFireMesh.md)

```
Description
    Write an OpenFOAM mesh in AVL/FIRE fpma format

Usage
    \b foamToFireMesh [OPTION]

    Options:
      - \par -ascii
        Write in ASCII format instead of binary

      - \par -scale \<factor\>
        Specify an alternative geometry scaling factor.
        The default is \b 1 (ie, no scaling).

See also
    Foam::cellTable, Foam::meshWriter and Foam::fileFormats::FIREMeshWriter


```

### fluentMeshToFoam

#### extrudedTriangleCellShape.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/conversion/fluentMeshToFoam/extrudedTriangleCellShape.C/extrudedTriangleCellShape.C)
- [detail](v1906/doc/mesh/conversion/fluentMeshToFoam/extrudedTriangleCellShape.md)

```
Description
    Construct an extruded triangular prism cell shape from three straight edges


```

#### create3DCellShape.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/conversion/fluentMeshToFoam/create3DCellShape.C/create3DCellShape.C)
- [detail](v1906/doc/mesh/conversion/fluentMeshToFoam/create3DCellShape.md)

```
Description
    Construct a cell shape from face information


```

#### extrudedQuadCellShape.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/conversion/fluentMeshToFoam/extrudedQuadCellShape.C/extrudedQuadCellShape.C)
- [detail](v1906/doc/mesh/conversion/fluentMeshToFoam/extrudedQuadCellShape.md)

```
Description
    Construct an extruded hex cell shape from four straight edges


```

### mshToFoam

#### mshToFoam.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/conversion/mshToFoam/mshToFoam.C/mshToFoam.C)
- [detail](v1906/doc/mesh/conversion/mshToFoam/mshToFoam.md)

```
Description
    Convert .msh file generated by the Adventure system.

    Note: the .msh format does not contain any boundary information. It is
    purely a description of the internal mesh.

    Can read both linear-tet format (i.e. 4 verts per tet) and linear-hex
    format (8 verts per hex) (if provided with the -hex (at your option)
    (Note: will bomb out if not supplied with the correct option for the
     file format)

    Not extensively tested.


```

### plot3dToFoam

#### hexBlock.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/conversion/plot3dToFoam/hexBlock.C/hexBlock.C)
- [detail](v1906/doc/mesh/conversion/plot3dToFoam/hexBlock.md)



#### plot3dToFoam.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/conversion/plot3dToFoam/plot3dToFoam.C/plot3dToFoam.C)
- [detail](v1906/doc/mesh/conversion/plot3dToFoam/plot3dToFoam.md)

```
Description
    Plot3d mesh (ascii/formatted format) converter.

    Work in progress! Handles ascii multiblock (and optionally singleBlock)
    format.
    By default expects blanking. Use -noBlank if none.
    Use -2D \a thickness if 2D.

    Niklas Nordin has experienced a problem with lefthandedness of the blocks.
    The code should detect this automatically - see hexBlock::readPoints but
    if this goes wrong just set the blockHandedness_ variable to 'right'
    always.


```

### ideasUnvToFoam

#### ideasUnvToFoam.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/conversion/ideasUnvToFoam/ideasUnvToFoam.C/ideasUnvToFoam.C)
- [detail](v1906/doc/mesh/conversion/ideasUnvToFoam/ideasUnvToFoam.md)

```
Description
    I-Deas unv format mesh conversion.

    Uses either
    - DOF sets (757) or
    - face groups (2452(Cubit), 2467)
    to do patching.
    Works without but then puts all faces in defaultFaces patch.


```

### writeMeshObj

#### writeMeshObj.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/conversion/writeMeshObj/writeMeshObj.C/writeMeshObj.C)
- [detail](v1906/doc/mesh/conversion/writeMeshObj/writeMeshObj.md)

```
Description
    For mesh debugging: writes mesh as three separate OBJ files.

    meshPoints_XXX.obj : all points and edges as lines.
    meshFaceCentres_XXX.obj : all face centres.
    meshCellCentres_XXX.obj : all cell centres.

    patch_YYY_XXX.obj : all face centres of patch YYY

    Optional: - patch faces (as polygons) : patchFaces_YYY_XXX.obj
              - non-manifold edges : patchEdges_YYY_XXX.obj


```

### star4ToFoam

#### star4ToFoam.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/conversion/star4ToFoam/star4ToFoam.C/star4ToFoam.C)
- [detail](v1906/doc/mesh/conversion/star4ToFoam/star4ToFoam.md)

```
Description
    Convert a STARCD/PROSTAR (v4) mesh into OpenFOAM format.

Usage
    \b star4ToFoam [OPTION] prostarMesh

    Options:
      - \par -ascii
        Write in ASCII format instead of binary

      - \par -scale \<factor\>
        Specify an alternative geometry scaling factor.
        The default is \b 0.001 (scale \em [mm] to \em [m]).

      - \par -solids
        Treat any solid cells present just like fluid cells.
        The default is to discard them.

Note
    Baffles are written as interfaces for later use

See also
    Foam::cellTable, Foam::meshReader and Foam::fileFormats::STARCDMeshReader


```

### gmshToFoam

#### gmshToFoam.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/conversion/gmshToFoam/gmshToFoam.C/gmshToFoam.C)
- [detail](v1906/doc/mesh/conversion/gmshToFoam/gmshToFoam.md)

```
Description
    Reads .msh file as written by Gmsh.

    Needs surface elements on mesh to be present and aligned with outside faces
    of the mesh. I.e. if the mesh is hexes, the outside faces need to be
    quads.

    Note: There is something seriously wrong with the ordering written in the
    .msh file. Normal operation is to check the ordering and invert prisms
    and hexes if found to be wrong way round.
    Use the -keepOrientation to keep the raw information.

    Note: The code now uses the element (cell,face) physical region id number
    to create cell zones and faces zones (similar to
    fluentMeshWithInternalFaces).

    A use of the cell zone information, is for field initialization with the
    "setFields" utility. see the classes:  topoSetSource, zoneToCell.


```

## advanced

### modifyMesh

#### modifyMesh.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/advanced/modifyMesh/modifyMesh.C/modifyMesh.C)
- [detail](v1906/doc/mesh/advanced/modifyMesh/modifyMesh.md)

```
Description
    Manipulate mesh elements.

    Actions are:
        (boundary)points:
            - move

        (boundary)edges:
            - split and move introduced point

        (boundary)faces:
            - split(triangulate) and move introduced point

        edges:
            - collapse

        cells:
            - split into polygonal base pyramids around newly introduced mid
              point

    Is a bit of a loose collection of mesh change drivers.


```

#### cellSplitter.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/advanced/modifyMesh/cellSplitter.C/cellSplitter.C)
- [detail](v1906/doc/mesh/advanced/modifyMesh/cellSplitter.md)



### collapseEdges

#### collapseEdges.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/advanced/collapseEdges/collapseEdges.C/collapseEdges.C)
- [detail](v1906/doc/mesh/advanced/collapseEdges/collapseEdges.md)

```
Description
    Collapses short edges and combines edges that are in line.

    - collapse short edges. Length of edges to collapse provided as argument.
    - merge two edges if they are in line. Maximum angle provided as argument.
    - remove unused points.
    - collapse faces:
        - with small areas to a single point
        - that have a high aspect ratio (i.e. sliver face) to a single edge

    Optionally checks the resulting mesh for bad faces and reduces the desired
    face length factor for those faces attached to the bad faces.

    When collapsing an edge with one point on the boundary it will leave
    the boundary point intact. When both points inside it chooses random. When
    both points on boundary random again.

Usage
    - collapseEdges [OPTION]


```

### refinementLevel

#### refinementLevel.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/advanced/refinementLevel/refinementLevel.C/refinementLevel.C)
- [detail](v1906/doc/mesh/advanced/refinementLevel/refinementLevel.md)

```
Description
    Attempt to determine the refinement levels of a refined cartesian mesh.
    Run BEFORE snapping.

    Writes
    - volScalarField 'refinementLevel' with current refinement level.
    - cellSet 'refCells' which are the cells that need to be refined to satisfy
      2:1 refinement.

    Works by dividing cells into volume bins.


```

### refineWallLayer

#### refineWallLayer.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/advanced/refineWallLayer/refineWallLayer.C/refineWallLayer.C)
- [detail](v1906/doc/mesh/advanced/refineWallLayer/refineWallLayer.md)

```
Description
    Refine cells next to specified patches.

    Arguments:
        1: List of patch names or regular expressions
        2: The size of the refined cells as a fraction of the edge-length.

    Examples:
        Split the near-wall cells of patch Wall in the middle
            refineWallLayer "(Wall)" 0.5

        Split the near-wall cells of patches Wall1 and Wall2 in the middle
            refineWallLayer "(Wall1 Wall2)" 0.5

        Split the near-wall cells of all patches with names beginning with wall
        with the near-wall cells 10% of the thickness of the original cells
            refineWallLayer '("Wall.*")' 0.1


```

### selectCells

#### selectCells.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/advanced/selectCells/selectCells.C/selectCells.C)
- [detail](v1906/doc/mesh/advanced/selectCells/selectCells.md)

```
Description
    Select cells in relation to surface.

    Divides cells into three sets:
    - cutCells : cells cut by surface or close to surface.
    - outside  : cells not in cutCells and reachable from set of
      user-defined points (outsidePoints)
    - inside   : same but not reachable.

    Finally the wanted sets are combined into a cellSet 'selected'. Apart
    from straightforward adding the contents there are a few extra rules to
    make sure that the surface of the 'outside' of the mesh is singly
    connected.


```

#### edgeStats.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/advanced/selectCells/edgeStats.C/edgeStats.C)
- [detail](v1906/doc/mesh/advanced/selectCells/edgeStats.md)



### snappyRefineMesh

#### snappyRefineMesh.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/advanced/snappyRefineMesh/snappyRefineMesh.C/snappyRefineMesh.C)
- [detail](v1906/doc/mesh/advanced/snappyRefineMesh/snappyRefineMesh.md)

```
Description
    Refine cells near to a surface.


```

### refineHexMesh

#### refineHexMesh.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/advanced/refineHexMesh/refineHexMesh.C/refineHexMesh.C)
- [detail](v1906/doc/mesh/advanced/refineHexMesh/refineHexMesh.md)

```
Description
    Refine a hex mesh by 2x2x2 cell splitting for the specified cellSet.


```

### PDRMesh

#### PDRMesh.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/advanced/PDRMesh/PDRMesh.C/PDRMesh.C)
- [detail](v1906/doc/mesh/advanced/PDRMesh/PDRMesh.md)

```
Description
    Mesh and field preparation utility for PDR type simulations.

    Reads
    - cellSet giving blockedCells
    - faceSets giving blockedFaces and the patch they should go into

    NOTE: To avoid exposing wrong fields values faceSets should include
    faces contained in the blockedCells cellset.

    - coupledFaces reads coupledFacesSet to introduces mixed-coupled
      duplicate baffles

    Subsets out the blocked cells and splits the blockedFaces and updates
    fields.

    The face splitting is done by duplicating the faces. No duplication of
    points for now (so checkMesh will show a lot of 'duplicate face' messages)


```

### removeFaces

#### removeFaces.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/advanced/removeFaces/removeFaces.C/removeFaces.C)
- [detail](v1906/doc/mesh/advanced/removeFaces/removeFaces.md)

```
Description
    Remove faces specified in faceSet by combining cells on both sides.

    Takes faceSet of candidates for removal and writes faceSet with faces that
    will actually be removed. (because e.g. would cause two faces between the
    same cells). See removeFaces in dynamicMesh library for constraints.


```

### combinePatchFaces

#### combinePatchFaces.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/advanced/combinePatchFaces/combinePatchFaces.C/combinePatchFaces.C)
- [detail](v1906/doc/mesh/advanced/combinePatchFaces/combinePatchFaces.md)

```
Description
    Checks for multiple patch faces on the same cell and combines them.
    Multiple patch faces can result from e.g. removal of refined
    neighbouring cells, leaving 4 exposed faces with same owner.

    Rules for merging:
    - only boundary faces (since multiple internal faces between two cells
      not allowed anyway)
    - faces have to have same owner
    - faces have to be connected via edge which are not features (so angle
      between them < feature angle)
    - outside of faces has to be single loop
    - outside of face should not be (or just slightly) concave (so angle
      between consecutive edges < concaveangle

    E.g. to allow all faces on same patch to be merged:

        combinePatchFaces 180 -concaveAngle 90


```

### splitCells

#### splitCells.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/advanced/splitCells/splitCells.C/splitCells.C)
- [detail](v1906/doc/mesh/advanced/splitCells/splitCells.md)

```
Description
    Utility to split cells with flat faces.

    Uses a geometric cut with a plane dividing the edge angle into two so
    might produce funny cells. For hexes it will use by default a cut from
    edge onto opposite edge (i.e. purely topological).

    Options:
    - split cells from cellSet only
    - use geometric cut for hexes as well

    The angle is the angle between two faces sharing an edge as seen from
    inside each cell. So a cube will have all angles 90. If you want
    to split cells with cell centre outside use e.g. angle 200


```

## manipulation

### attachMesh

#### attachMesh.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/manipulation/attachMesh/attachMesh.C/attachMesh.C)
- [detail](v1906/doc/mesh/manipulation/attachMesh/attachMesh.md)

```
Description
    Attach topologically detached mesh using prescribed mesh modifiers.


```

### checkMesh

#### checkMesh.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/manipulation/checkMesh/checkMesh.C/checkMesh.C)
- [detail](v1906/doc/mesh/manipulation/checkMesh/checkMesh.md)

```
Description
    Checks validity of a mesh.

Usage
    \b checkMesh [OPTION]

    Options:
      - \par -allGeometry
        Checks all (including non finite-volume specific) geometry

      - \par -allTopology
        Checks all (including non finite-volume specific) addressing

      - \par -meshQuality
        Checks against user defined (in \a system/meshQualityDict) quality
        settings

      - \par -region \<name\>
        Specify an alternative mesh region.

    \param -writeSets \<surfaceFormat\> \n
    Reconstruct all cellSets and faceSets geometry and write to postProcessing
    directory according to surfaceFormat (e.g. vtk or ensight). Additionally
    reconstructs all pointSets and writes as vtk format.

    \param -writeAllFields \n
    Writes all mesh quality measures as fields.

    \param -writeFields '(\<fieldName\>)' \n
    Writes selected mesh quality measures as fields.


```

#### checkGeometry.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/manipulation/checkMesh/checkGeometry.C/checkGeometry.C)
- [detail](v1906/doc/mesh/manipulation/checkMesh/checkGeometry.md)



#### checkTools.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/manipulation/checkMesh/checkTools.C/checkTools.C)
- [detail](v1906/doc/mesh/manipulation/checkMesh/checkTools.md)



#### writeFields.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/manipulation/checkMesh/writeFields.C/writeFields.C)
- [detail](v1906/doc/mesh/manipulation/checkMesh/writeFields.md)



#### checkTopology.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/manipulation/checkMesh/checkTopology.C/checkTopology.C)
- [detail](v1906/doc/mesh/manipulation/checkMesh/checkTopology.md)



#### checkMeshQuality.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/manipulation/checkMesh/checkMeshQuality.C/checkMeshQuality.C)
- [detail](v1906/doc/mesh/manipulation/checkMesh/checkMeshQuality.md)



### splitMeshRegions

#### splitMeshRegions.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/manipulation/splitMeshRegions/splitMeshRegions.C/splitMeshRegions.C)
- [detail](v1906/doc/mesh/manipulation/splitMeshRegions/splitMeshRegions.md)

```
Description
    Splits mesh into multiple regions.

    Each region is defined as a domain whose cells can all be reached by
    cell-face-cell walking without crossing
    - boundary faces
    - additional faces from faceset (-blockedFaces faceSet).
    - any face between differing cellZones (-cellZones)

    Output is:
    - volScalarField with regions as different scalars (-detectOnly)
            or
    - mesh with multiple regions and mapped patches. These patches
      either cover the whole interface between two region (default) or
      only part according to faceZones (-useFaceZones)
            or
    - mesh with cells put into cellZones (-makeCellZones)

    Note:
    - cellZonesOnly does not do a walk and uses the cellZones only. Use
    this if you don't mind having disconnected domains in a single region.
    This option requires all cells to be in one (and one only) cellZone.

    - cellZonesFileOnly behaves like -cellZonesOnly but reads the cellZones
    from the specified file. This allows one to explicitly specify the region
    distribution and still have multiple cellZones per region.

    - prefixRegion prefixes all normal patches with region name (interface
    (patches already have region name prefix)

    - Should work in parallel.
    cellZones can differ on either side of processor boundaries in which case
    the faces get moved from processor patch to directMapped patch. Not
    the faces get moved from processor patch to mapped patch. Not
    very well tested.

    - If a cell zone gets split into more than one region it can detect
    the largest matching region (-sloppyCellZones). This will accept any
    region that covers more than 50% of the zone. It has to be a subset
    so cannot have any cells in any other zone.

    - If explicitly a single region has been selected (-largestOnly or
      -insidePoint) its region name will be either
        - name of a cellZone it matches to or
        - "largestOnly" respectively "insidePoint" or
        - polyMesh::defaultRegion if additionally -overwrite
          (so it will overwrite the input mesh!)

    - writes maps like decomposePar back to original mesh:
        - pointRegionAddressing : for every point in this region the point in
        the original mesh
        - cellRegionAddressing  :   ,,      cell                ,,  cell    ,,
        - faceRegionAddressing  :   ,,      face                ,,  face in
        the original mesh + 'turning index'. For a face in the same orientation
        this is the original facelabel+1, for a turned face this is -facelabel-1
        - boundaryRegionAddressing : for every patch in this region the
        patch in the original mesh (or -1 if added patch)


```

### autoPatch

#### autoPatch.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/manipulation/autoPatch/autoPatch.C/autoPatch.C)
- [detail](v1906/doc/mesh/manipulation/autoPatch/autoPatch.md)

```
Description
    Divides external faces into patches based on (user supplied) feature
    angle.


```

### objToVTK

#### objToVTK.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/manipulation/objToVTK/objToVTK.C/objToVTK.C)
- [detail](v1906/doc/mesh/manipulation/objToVTK/objToVTK.md)

```
Description
    Read obj line (not surface) file and convert into legacy VTK file.


```

### createPatch

#### createPatch.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/manipulation/createPatch/createPatch.C/createPatch.C)
- [detail](v1906/doc/mesh/manipulation/createPatch/createPatch.md)

```
Description
    Create patches out of selected boundary faces, which are either
    from existing patches or from a faceSet.

    More specifically it:
    - creates new patches (from selected boundary faces).
      Synchronise faces on coupled patches.
    - synchronises points on coupled boundaries
    - remove patches with 0 faces in them


```

### setSet

#### setSet.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/manipulation/setSet/setSet.C/setSet.C)
- [detail](v1906/doc/mesh/manipulation/setSet/setSet.md)

```
Description
    Manipulate a cell/face/point Set or Zone interactively.


```

### topoSet

#### topoSet.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/manipulation/topoSet/topoSet.C/topoSet.C)
- [detail](v1906/doc/mesh/manipulation/topoSet/topoSet.md)

```
Description
    Operates on cellSets/faceSets/pointSets through a dictionary,
    normally system/topoSetDict


```

### singleCellMesh

#### singleCellMesh.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/manipulation/singleCellMesh/singleCellMesh.C/singleCellMesh.C)
- [detail](v1906/doc/mesh/manipulation/singleCellMesh/singleCellMesh.md)

```
Description
    Reads all fields and maps them to a mesh with all internal faces removed
    (singleCellFvMesh) which gets written to region "singleCell".

    Used to generate mesh and fields that can be used for boundary-only data.
    Might easily result in illegal mesh though so only look at boundaries
    in paraview.


```

### subsetMesh

#### subsetMesh.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/manipulation/subsetMesh/subsetMesh.C/subsetMesh.C)
- [detail](v1906/doc/mesh/manipulation/subsetMesh/subsetMesh.md)

```
Description
    Create a mesh subset for a particular region of interest based on a
    cellSet or cellZone.

    See setSet/topoSet utilities on how to define select cells based on
    various shapes.

    Will subset all points, faces and cells needed to make a sub-mesh,
    but not preserve attached boundary types.


```

### moveDynamicMesh

#### moveDynamicMesh.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/manipulation/moveDynamicMesh/moveDynamicMesh.C/moveDynamicMesh.C)
- [detail](v1906/doc/mesh/manipulation/moveDynamicMesh/moveDynamicMesh.md)

```
Description
    Mesh motion and topological mesh changes utility.


```

### moveMesh

#### moveMesh.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/manipulation/moveMesh/moveMesh.C/moveMesh.C)
- [detail](v1906/doc/mesh/manipulation/moveMesh/moveMesh.md)

```
Description
    A solver utility for moving meshes.


```

### deformedGeom

#### deformedGeom.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/manipulation/deformedGeom/deformedGeom.C/deformedGeom.C)
- [detail](v1906/doc/mesh/manipulation/deformedGeom/deformedGeom.md)

```
Description
    Deforms a polyMesh using a displacement field U and a scaling factor
    supplied as an argument.


```

### refineMesh

#### refineMesh.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/manipulation/refineMesh/refineMesh.C/refineMesh.C)
- [detail](v1906/doc/mesh/manipulation/refineMesh/refineMesh.md)

```
Description
    Utility to refine cells in multiple directions.

    Command-line option handling:
    - If -all specified or no refineMeshDict exists or, refine all cells
    - If -dict \<file\> specified refine according to \<file\>
    - If refineMeshDict exists refine according to refineMeshDict

    When the refinement or all cells is selected apply 3D refinement for 3D
    cases and 2D refinement for 2D cases.


```

### transformPoints

#### transformPoints.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/manipulation/transformPoints/transformPoints.C/transformPoints.C)
- [detail](v1906/doc/mesh/manipulation/transformPoints/transformPoints.md)

```
Description
    Transforms the mesh points in the polyMesh directory according to the
    translate, rotate and scale options.

Usage
    Options are:

    -translate vector
        Translates the points by the given vector before rotations

    -rotate (vector vector)
        Rotates the points from the first vector to the second,

    -rotate-angle (vector angle)
        Rotate angle degrees about vector axis.

     or -yawPitchRoll (yawdegrees pitchdegrees rolldegrees)
     or -rollPitchYaw (rolldegrees pitchdegrees yawdegrees)

    -scale scalar|vector
        Scales the points by the given scalar or vector.

    The any or all of the three options may be specified and are processed
    in the above order.

    With -rotateFields (in combination with -rotate/yawPitchRoll/rollPitchYaw)
    it will also read & transform vector & tensor fields.

Note
    roll (rotation about x)
    pitch (rotation about y)
    yaw (rotation about z)


```

### setsToZones

#### setsToZones.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/manipulation/setsToZones/setsToZones.C/setsToZones.C)
- [detail](v1906/doc/mesh/manipulation/setsToZones/setsToZones.md)

```
Description
    Add pointZones/faceZones/cellZones to the mesh from similar named
    pointSets/faceSets/cellSets.

    There is one catch: for faceZones you also need to specify a flip
    condition which basically denotes the side of the face. In this app
    it reads a cellSet (xxxCells if 'xxx' is the name of the faceSet) which
    is the masterCells of the zone.
    There are lots of situations in which this will go wrong but it is the
    best I can think of for now.

    If one is not interested in sideNess specify the -noFlipMap
    command line option.


```

### splitMesh

#### splitMesh.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/manipulation/splitMesh/splitMesh.C/splitMesh.C)
- [detail](v1906/doc/mesh/manipulation/splitMesh/splitMesh.md)

```
Description
    Splits mesh by making internal faces external. Uses attachDetach.

    Generates a meshModifier of the form:

    Splitter
    {
        type                       attachDetach;
        faceZoneName               membraneFaces;
        masterPatchName            masterPatch;
        slavePatchName             slavePatch;
        triggerTimes               runTime.value();
    }

    so will detach at the current time and split all faces in membraneFaces
    into masterPatch and slavePatch (which have to be present but of 0 size)


```

#### regionSide.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/manipulation/splitMesh/regionSide.C/regionSide.C)
- [detail](v1906/doc/mesh/manipulation/splitMesh/regionSide.md)



### mergeOrSplitBaffles

#### mergeOrSplitBaffles.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/manipulation/mergeOrSplitBaffles/mergeOrSplitBaffles.C/mergeOrSplitBaffles.C)
- [detail](v1906/doc/mesh/manipulation/mergeOrSplitBaffles/mergeOrSplitBaffles.md)

```
Description
    Detects boundary faces that share points (baffles). Either merges them or
    duplicate the points.

Usage
    \b mergeOrSplitBaffles [OPTION]

    Options:
      - \par -detectOnly
        Detect baffles and write to faceSet duplicateFaces.

      - \par -split
        Detect baffles and duplicate the points (used so the two sides
        can move independently)

      - \par -dict \<dictionary\>
        Specify a dictionary to read actions from.

Note
    - can only handle pairwise boundary faces. So three faces using
      the same points is not handled (is illegal mesh anyway)

    - surfaces consisting of duplicate faces can be topologically split
    if the points on the interior of the surface cannot walk to all the
    cells that use them in one go.

    - Parallel operation (where duplicate face is perpendicular to a coupled
    boundary) is supported but not really tested.
    (Note that coupled faces themselves are not seen as duplicate faces)


```

### flattenMesh

#### flattenMesh.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/manipulation/flattenMesh/flattenMesh.C/flattenMesh.C)
- [detail](v1906/doc/mesh/manipulation/flattenMesh/flattenMesh.md)

```
Description
    Flattens the front and back planes of a 2D cartesian mesh.


```

### orientFaceZone

#### orientFaceZone.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/manipulation/orientFaceZone/orientFaceZone.C/orientFaceZone.C)
- [detail](v1906/doc/mesh/manipulation/orientFaceZone/orientFaceZone.md)

```
Description
    Corrects the orientation of faceZone.

    - correct in parallel - excludes coupled faceZones from walk
    - correct for non-manifold faceZones - restarts walk


```

### polyDualMesh

#### meshDualiser.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/manipulation/polyDualMesh/meshDualiser.C/meshDualiser.C)
- [detail](v1906/doc/mesh/manipulation/polyDualMesh/meshDualiser.md)



#### polyDualMeshApp.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/manipulation/polyDualMesh/polyDualMeshApp.C/polyDualMeshApp.C)
- [detail](v1906/doc/mesh/manipulation/polyDualMesh/polyDualMeshApp.md)

```
Description
    Creates the dual of a polyMesh, adhering to all the feature and patch edges.

Usage
    \b polyDualMesh featureAngle

    Detects any boundary edge > angle and creates multiple boundary faces
    for it. Normal behaviour is to have each point become a cell
    (1.5 behaviour)

    Options:
      - \par -concaveMultiCells
        Creates multiple cells for each point on a concave edge. Might limit
        the amount of distortion on some meshes.

      - \par -splitAllFaces
        Normally only constructs a single face between two cells. This single
        face might be too distorted. splitAllFaces will create a single face for
        every original cell the face passes through. The mesh will thus have
        multiple faces in between two cells! (so is not strictly
        upper-triangular anymore - checkMesh will complain)

      - \par -doNotPreserveFaceZones:
        By default all faceZones are preserved by marking all faces, edges and
        points on them as features. The -doNotPreserveFaceZones disables this
        behaviour.

Note
    It is just a driver for meshDualiser. Substitute your own simpleMarkFeatures
    to have different behaviour.


```

### mirrorMesh

#### mirrorFvMesh.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/manipulation/mirrorMesh/mirrorFvMesh.C/mirrorFvMesh.C)
- [detail](v1906/doc/mesh/manipulation/mirrorMesh/mirrorFvMesh.md)



#### mirrorMesh.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/manipulation/mirrorMesh/mirrorMesh.C/mirrorMesh.C)
- [detail](v1906/doc/mesh/manipulation/mirrorMesh/mirrorMesh.md)

```
Description
    Mirrors a mesh around a given plane.


```

### insideCells

#### insideCells.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/manipulation/insideCells/insideCells.C/insideCells.C)
- [detail](v1906/doc/mesh/manipulation/insideCells/insideCells.md)

```
Description
    Create a cellSet for cells with their centres 'inside' the defined
    surface.
    Requires surface to be closed and singly connected.


```

### zipUpMesh

#### zipUpMesh.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/manipulation/zipUpMesh/zipUpMesh.C/zipUpMesh.C)
- [detail](v1906/doc/mesh/manipulation/zipUpMesh/zipUpMesh.md)

```
Description
    Reads in a mesh with hanging vertices and 'zips' up the cells
    to guarantee that all polyhedral cells of valid shape are closed.

    Meshes with hanging vertices may occur as a result of split
    hex mesh conversion or integration or coupled math face pairs.


```

### stitchMesh

#### stitchMesh.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/manipulation/stitchMesh/stitchMesh.C/stitchMesh.C)
- [detail](v1906/doc/mesh/manipulation/stitchMesh/stitchMesh.md)

```
Description
    'Stitches' a mesh.

    Takes a mesh and two patches and merges the faces on the two patches
    (if geometrically possible) so the faces become internal.

    Can do
    - 'perfect' match: faces and points on patches align exactly. Order might
    be different though.
    - 'integral' match: where the surfaces on both patches exactly
    match but the individual faces not
    - 'partial' match: where the non-overlapping part of the surface remains
    in the respective patch.

    Note : Is just a front-end to perfectInterface/slidingInterface.

    Comparable to running a meshModifier of the form
    (if masterPatch is called "M" and slavePatch "S"):

    \verbatim
    couple
    {
        type                    slidingInterface;
        masterFaceZoneName      MSMasterZone
        slaveFaceZoneName       MSSlaveZone
        cutPointZoneName        MSCutPointZone
        cutFaceZoneName         MSCutFaceZone
        masterPatchName         M;
        slavePatchName          S;
        typeOfMatch             partial or integral
    }
    \endverbatim



```

### mergeMeshes

#### mergeMeshes.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/manipulation/mergeMeshes/mergeMeshes.C/mergeMeshes.C)
- [detail](v1906/doc/mesh/manipulation/mergeMeshes/mergeMeshes.md)

```
Description
    Merges two meshes.


```

#### mergePolyMesh.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/manipulation/mergeMeshes/mergePolyMesh.C/mergePolyMesh.C)
- [detail](v1906/doc/mesh/manipulation/mergeMeshes/mergePolyMesh.md)



### createBaffles

#### faceSelection

##### searchableSurfaceSelection.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/manipulation/createBaffles/faceSelection/searchableSurfaceSelection.C/searchableSurfaceSelection.C)
- [detail](v1906/doc/mesh/manipulation/createBaffles/faceSelection/searchableSurfaceSelection.md)



##### faceSelection.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/manipulation/createBaffles/faceSelection/faceSelection.C/faceSelection.C)
- [detail](v1906/doc/mesh/manipulation/createBaffles/faceSelection/faceSelection.md)



##### faceZoneSelection.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/manipulation/createBaffles/faceSelection/faceZoneSelection.C/faceZoneSelection.C)
- [detail](v1906/doc/mesh/manipulation/createBaffles/faceSelection/faceZoneSelection.md)



#### createBaffles.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/manipulation/createBaffles/createBaffles.C/createBaffles.C)
- [detail](v1906/doc/mesh/manipulation/createBaffles/createBaffles.md)

```
Description
    Makes internal faces into boundary faces. Does not duplicate points, unlike
    mergeOrSplitBaffles.

    Note: if any coupled patch face is selected for baffling the opposite
    member has to be selected for baffling as well.

    - if the patch already exists will not override it nor its fields
    - if the patch does not exist it will be created together with 'calculated'
      patchfields unless the field is mentioned in the patchFields section.
    - any 0-sized patches (since faces have been moved out) will get removed


```

### rotateMesh

#### rotateMesh.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/manipulation/rotateMesh/rotateMesh.C/rotateMesh.C)
- [detail](v1906/doc/mesh/manipulation/rotateMesh/rotateMesh.md)

```
Description
    Rotates the mesh and fields from the direction n1 to direction n2.


```

### renumberMesh

#### renumberMesh.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/manipulation/renumberMesh/renumberMesh.C/renumberMesh.C)
- [detail](v1906/doc/mesh/manipulation/renumberMesh/renumberMesh.md)

```
Description
    Renumbers the cell list in order to reduce the bandwidth, reading and
    renumbering all fields from all the time directories.

    By default uses bandCompression (CuthillMcKee) but will
    read system/renumberMeshDict if -dict option is present


```

### moveEngineMesh

#### moveEngineMesh.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/manipulation/moveEngineMesh/moveEngineMesh.C/moveEngineMesh.C)
- [detail](v1906/doc/mesh/manipulation/moveEngineMesh/moveEngineMesh.md)

```
Description
    Solver for moving meshes for engine calculations.


```

## generation

### extrude2DMesh

#### extrude2DMesh

##### extrude2DMesh

###### extrude2DMesh.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/extrude2DMesh/extrude2DMesh/extrude2DMesh/extrude2DMesh.C/extrude2DMesh.C)
- [detail](v1906/doc/mesh/generation/extrude2DMesh/extrude2DMesh/extrude2DMesh/extrude2DMesh.md)



##### lnInclude

###### patchToPoly2DMesh.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/extrude2DMesh/extrude2DMesh/lnInclude/patchToPoly2DMesh.C/patchToPoly2DMesh.C)
- [detail](v1906/doc/mesh/generation/extrude2DMesh/extrude2DMesh/lnInclude/patchToPoly2DMesh.md)



###### extrude2DMesh.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/extrude2DMesh/extrude2DMesh/lnInclude/extrude2DMesh.C/extrude2DMesh.C)
- [detail](v1906/doc/mesh/generation/extrude2DMesh/extrude2DMesh/lnInclude/extrude2DMesh.md)



##### patchToPoly2DMesh

###### patchToPoly2DMesh.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/extrude2DMesh/extrude2DMesh/patchToPoly2DMesh/patchToPoly2DMesh.C/patchToPoly2DMesh.C)
- [detail](v1906/doc/mesh/generation/extrude2DMesh/extrude2DMesh/patchToPoly2DMesh/patchToPoly2DMesh.md)



#### extrude2DMeshApp.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/extrude2DMesh/extrude2DMeshApp.C/extrude2DMeshApp.C)
- [detail](v1906/doc/mesh/generation/extrude2DMesh/extrude2DMeshApp.md)

```
Description
    Create a 3D mesh by extruding a 2D mesh with specified thickness.
    For the 2D mesh, all faces are 2 points only, no front and back faces.

Note
    Not sure about the walking of the faces to create the front and back faces.


```

### snappyHexMesh

#### snappyHexMesh.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/snappyHexMesh/snappyHexMesh.C/snappyHexMesh.C)
- [detail](v1906/doc/mesh/generation/snappyHexMesh/snappyHexMesh.md)

```
Description
    Automatic split hex mesher. Refines and snaps to surface.


```

### extrude

#### extrudeMesh

##### extrudedMesh

###### extrudedMeshTemplates.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/extrude/extrudeMesh/extrudedMesh/extrudedMeshTemplates.C/extrudedMeshTemplates.C)
- [detail](v1906/doc/mesh/generation/extrude/extrudeMesh/extrudedMesh/extrudedMeshTemplates.md)



###### extrudedMesh.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/extrude/extrudeMesh/extrudedMesh/extrudedMesh.C/extrudedMesh.C)
- [detail](v1906/doc/mesh/generation/extrude/extrudeMesh/extrudedMesh/extrudedMesh.md)



##### extrudeMesh.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/extrude/extrudeMesh/extrudeMesh.C/extrudeMesh.C)
- [detail](v1906/doc/mesh/generation/extrude/extrudeMesh/extrudeMesh.md)

```
Description
    Extrude mesh from existing patch (by default outwards facing normals;
    optional flips faces) or from patch read from file.

    Note: Merges close points so be careful.

    Type of extrusion prescribed by run-time selectable model.


```

#### extrudeToRegionMesh

##### extrudeToRegionMesh.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/extrude/extrudeToRegionMesh/extrudeToRegionMesh.C/extrudeToRegionMesh.C)
- [detail](v1906/doc/mesh/generation/extrude/extrudeToRegionMesh/extrudeToRegionMesh.md)

```
Description
    Extrude faceZones (internal or boundary faces) or faceSets (boundary faces
    only) into a separate mesh (as a different region).

    - used to e.g. extrude baffles (extrude internal faces) or create
    liquid film regions.
    - if extruding internal faces:
        - create baffles in original mesh with mappedWall patches
    - if extruding boundary faces:
        - convert boundary faces to mappedWall patches
    - extrude edges of faceZone as a \<zone\>_sidePatch
    - extrude edges inbetween different faceZones as a
      (nonuniformTransform)cyclic \<zoneA\>_\<zoneB\>
    - extrudes into master direction (i.e. away from the owner cell
      if flipMap is false)

\verbatim

Internal face extrusion
-----------------------

    +-------------+
    |             |
    |             |
    +---AAAAAAA---+
    |             |
    |             |
    +-------------+

    AAA=faceZone to extrude.


For the case of no flipMap the extrusion starts at owner and extrudes
into the space of the neighbour:

      +CCCCCCC+
      |       |         <= extruded mesh
      +BBBBBBB+

    +-------------+
    |             |
    | (neighbour) |
    |___CCCCCCC___|       <= original mesh (with 'baffles' added)
    |   BBBBBBB   |
    |(owner side) |
    |             |
    +-------------+

    BBB=mapped between owner on original mesh and new extrusion.
        (zero offset)
    CCC=mapped between neighbour on original mesh and new extrusion
        (offset due to the thickness of the extruded mesh)

For the case of flipMap the extrusion is the other way around: from the
neighbour side into the owner side.


Boundary face extrusion
-----------------------

    +--AAAAAAA--+
    |           |
    |           |
    +-----------+

    AAA=faceZone to extrude. E.g. slave side is owner side (no flipmap)

becomes

      +CCCCCCC+
      |       |         <= extruded mesh
      +BBBBBBB+

    +--BBBBBBB--+
    |           |       <= original mesh
    |           |
    +-----------+

    BBB=mapped between original mesh and new extrusion
    CCC=polypatch


Notes:
    - when extruding cyclics with only one cell inbetween it does not
      detect this as a cyclic since the face is the same face. It will
      only work if the coupled edge extrudes a different face so if there
      are more than 1 cell inbetween.

\endverbatim


```

### PDRblockMesh

#### PDRblockMesh.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/PDRblockMesh/PDRblockMesh.C/PDRblockMesh.C)
- [detail](v1906/doc/mesh/generation/PDRblockMesh/PDRblockMesh.md)

```
Description
    A specialized single-block mesh generator for a rectilinear mesh
    in x-y-z.

    Uses the mesh description found in
      - \c system/PDRblockMeshDict

Usage
    \b PDRblockMesh [OPTION]

    Options:
      - \par -dict \<filename\>
        Alternative dictionary for the mesh description.

      - \par -noClean
        Do not remove any existing polyMesh/ directory or files

      - \par -time
        Write resulting mesh to a time directory (instead of constant)


```

### blockMesh

#### blockMesh.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/blockMesh/blockMesh.C/blockMesh.C)
- [detail](v1906/doc/mesh/generation/blockMesh/blockMesh.md)

```
Description
    A multi-block mesh generator.

    Uses the block mesh description found in
      - \c system/blockMeshDict
      - \c system/\<region\>/blockMeshDict
      - \c constant/polyMesh/blockMeshDict
      - \c constant/\<region\>/polyMesh/blockMeshDict

Usage
    \b blockMesh [OPTION]

    Options:
      - \par -blockTopology
        Write the topology as a set of edges in OBJ format and exit.

      - \par -region \<name\>
        Specify alternative mesh region.

      - \par -dict \<filename\>
        Alternative dictionary for the block mesh description.

      - \par -sets
        Write cellZones as cellSets too (for processing purposes)

      - \par -noClean
        Do not remove any existing polyMesh/ directory or files

      - \par -time
        Write resulting mesh to a time directory (instead of constant)


```

### foamyMesh

#### foamyHexMeshSurfaceSimplify

##### foamyHexMeshSurfaceSimplify_non_octree.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/foamyHexMeshSurfaceSimplify/foamyHexMeshSurfaceSimplify_non_octree.C/foamyHexMeshSurfaceSimplify_non_octree.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/foamyHexMeshSurfaceSimplify/foamyHexMeshSurfaceSimplify_non_octree.md)

```
Description
    Simplifies surfaces by resampling.

    Uses Thomas Lewiner's topology preserving MarchingCubes.


```

##### foamyHexMeshSurfaceSimplify.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/foamyHexMeshSurfaceSimplify/foamyHexMeshSurfaceSimplify.C/foamyHexMeshSurfaceSimplify.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/foamyHexMeshSurfaceSimplify/foamyHexMeshSurfaceSimplify.md)

```
Description
    Simplifies surfaces by resampling.

    Uses Thomas Lewiner's topology preserving MarchingCubes.
    (http://zeus.mat.puc-rio.br/tomlew/tomlew_uk.php)


```

#### foamyHexMeshBackgroundMesh

##### foamyHexMeshBackgroundMesh.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/foamyHexMeshBackgroundMesh/foamyHexMeshBackgroundMesh.C/foamyHexMeshBackgroundMesh.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/foamyHexMeshBackgroundMesh/foamyHexMeshBackgroundMesh.md)

```
Description
    Writes out background mesh as constructed by foamyHexMesh and constructs
    distanceSurface.


```

#### conformalVoronoi2DMesh

##### cv2DControls

###### cv2DControls.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoi2DMesh/cv2DControls/cv2DControls.C/cv2DControls.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoi2DMesh/cv2DControls/cv2DControls.md)



##### lnInclude

###### cv2DControls.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoi2DMesh/lnInclude/cv2DControls.C/cv2DControls.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoi2DMesh/lnInclude/cv2DControls.md)



#### foamyHexMesh

##### foamyHexMesh.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/foamyHexMesh/foamyHexMesh.C/foamyHexMesh.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/foamyHexMesh/foamyHexMesh.md)

```
Description
    Conformal Voronoi automatic mesh generator


```

#### cellSizeAndAlignmentGrid

##### cellSizeAndAlignmentGrid.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/cellSizeAndAlignmentGrid/cellSizeAndAlignmentGrid.C/cellSizeAndAlignmentGrid.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/cellSizeAndAlignmentGrid/cellSizeAndAlignmentGrid.md)

```
Description


```

#### foamyQuadMesh

##### insertBoundaryConformPointPairs.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/foamyQuadMesh/insertBoundaryConformPointPairs.C/insertBoundaryConformPointPairs.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/foamyQuadMesh/insertBoundaryConformPointPairs.md)



##### insertSurfaceNearPointPairs.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/foamyQuadMesh/insertSurfaceNearPointPairs.C/insertSurfaceNearPointPairs.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/foamyQuadMesh/insertSurfaceNearPointPairs.md)



##### insertFeaturePoints.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/foamyQuadMesh/insertFeaturePoints.C/insertFeaturePoints.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/foamyQuadMesh/insertFeaturePoints.md)



##### CV2D.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/foamyQuadMesh/CV2D.C/CV2D.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/foamyQuadMesh/CV2D.md)



##### CV2DIO.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/foamyQuadMesh/CV2DIO.C/CV2DIO.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/foamyQuadMesh/CV2DIO.md)



##### shortEdgeFilter2D.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/foamyQuadMesh/shortEdgeFilter2D.C/shortEdgeFilter2D.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/foamyQuadMesh/shortEdgeFilter2D.md)



##### foamyQuadMesh.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/foamyQuadMesh/foamyQuadMesh.C/foamyQuadMesh.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/foamyQuadMesh/foamyQuadMesh.md)

```
Description
    Conformal-Voronoi 2D extruding automatic mesher with grid or read
    initial points and point position relaxation with optional
    "squarification".


```

##### insertSurfaceNearestPointPairs.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/foamyQuadMesh/insertSurfaceNearestPointPairs.C/insertSurfaceNearestPointPairs.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/foamyQuadMesh/insertSurfaceNearestPointPairs.md)



#### conformalVoronoiMesh

##### DelaunayMesh

###### DelaunayMeshIO.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/DelaunayMesh/DelaunayMeshIO.C/DelaunayMeshIO.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/DelaunayMesh/DelaunayMeshIO.md)



###### DelaunayMesh.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/DelaunayMesh/DelaunayMesh.C/DelaunayMesh.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/DelaunayMesh/DelaunayMesh.md)



###### DistributedDelaunayMesh.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/DelaunayMesh/DistributedDelaunayMesh.C/DistributedDelaunayMesh.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/DelaunayMesh/DistributedDelaunayMesh.md)



##### DelaunayMeshTools

###### DelaunayMeshToolsTemplates.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/DelaunayMeshTools/DelaunayMeshToolsTemplates.C/DelaunayMeshToolsTemplates.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/DelaunayMeshTools/DelaunayMeshToolsTemplates.md)



###### DelaunayMeshTools.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/DelaunayMeshTools/DelaunayMeshTools.C/DelaunayMeshTools.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/DelaunayMeshTools/DelaunayMeshTools.md)



##### relaxationModel

###### relaxationModel

####### relaxationModel.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/relaxationModel/relaxationModel/relaxationModel.C/relaxationModel.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/relaxationModel/relaxationModel/relaxationModel.md)



###### rampHoldFall

####### rampHoldFall.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/relaxationModel/rampHoldFall/rampHoldFall.C/rampHoldFall.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/relaxationModel/rampHoldFall/rampHoldFall.md)



###### adaptiveLinear

####### adaptiveLinear.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/relaxationModel/adaptiveLinear/adaptiveLinear.C/adaptiveLinear.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/relaxationModel/adaptiveLinear/adaptiveLinear.md)



##### cellSizeControlSurfaces

###### cellSizeFunction

####### linearDistance

######## linearDistance.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/cellSizeControlSurfaces/cellSizeFunction/linearDistance/linearDistance.C/linearDistance.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/cellSizeControlSurfaces/cellSizeFunction/linearDistance/linearDistance.md)



####### cellSizeFunction

######## cellSizeFunction.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/cellSizeControlSurfaces/cellSizeFunction/cellSizeFunction/cellSizeFunction.C/cellSizeFunction.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/cellSizeControlSurfaces/cellSizeFunction/cellSizeFunction/cellSizeFunction.md)



####### uniformDistance

######## uniformDistance.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/cellSizeControlSurfaces/cellSizeFunction/uniformDistance/uniformDistance.C/uniformDistance.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/cellSizeControlSurfaces/cellSizeFunction/uniformDistance/uniformDistance.md)



####### surfaceOffsetLinearDistance

######## surfaceOffsetLinearDistance.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/cellSizeControlSurfaces/cellSizeFunction/surfaceOffsetLinearDistance/surfaceOffsetLinearDistance.C/surfaceOffsetLinearDistance.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/cellSizeControlSurfaces/cellSizeFunction/surfaceOffsetLinearDistance/surfaceOffsetLinearDistance.md)



####### uniform

######## uniform.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/cellSizeControlSurfaces/cellSizeFunction/uniform/uniform.C/uniform.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/cellSizeControlSurfaces/cellSizeFunction/uniform/uniform.md)



####### linearSpatial

######## linearSpatial.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/cellSizeControlSurfaces/cellSizeFunction/linearSpatial/linearSpatial.C/linearSpatial.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/cellSizeControlSurfaces/cellSizeFunction/linearSpatial/linearSpatial.md)



###### surfaceCellSizeFunction

####### surfaceCellSizeFunction

######## surfaceCellSizeFunction.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/cellSizeControlSurfaces/surfaceCellSizeFunction/surfaceCellSizeFunction/surfaceCellSizeFunction.C/surfaceCellSizeFunction.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/cellSizeControlSurfaces/surfaceCellSizeFunction/surfaceCellSizeFunction/surfaceCellSizeFunction.md)



####### cellSizeCalculationType

######## automatic

######### automatic.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/cellSizeControlSurfaces/surfaceCellSizeFunction/cellSizeCalculationType/automatic/automatic.C/automatic.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/cellSizeControlSurfaces/surfaceCellSizeFunction/cellSizeCalculationType/automatic/automatic.md)



######## cellSizeCalculationType

######### cellSizeCalculationType.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/cellSizeControlSurfaces/surfaceCellSizeFunction/cellSizeCalculationType/cellSizeCalculationType/cellSizeCalculationType.C/cellSizeCalculationType.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/cellSizeControlSurfaces/surfaceCellSizeFunction/cellSizeCalculationType/cellSizeCalculationType/cellSizeCalculationType.md)



######## fieldFromFile

######### fieldFromFile.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/cellSizeControlSurfaces/surfaceCellSizeFunction/cellSizeCalculationType/fieldFromFile/fieldFromFile.C/fieldFromFile.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/cellSizeControlSurfaces/surfaceCellSizeFunction/cellSizeCalculationType/fieldFromFile/fieldFromFile.md)



####### nonUniformField

######## nonUniformField.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/cellSizeControlSurfaces/surfaceCellSizeFunction/nonUniformField/nonUniformField.C/nonUniformField.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/cellSizeControlSurfaces/surfaceCellSizeFunction/nonUniformField/nonUniformField.md)



####### uniformValue

######## uniformValue.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/cellSizeControlSurfaces/surfaceCellSizeFunction/uniformValue/uniformValue.C/uniformValue.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/cellSizeControlSurfaces/surfaceCellSizeFunction/uniformValue/uniformValue.md)



##### initialPointsMethod

###### autoDensity

####### autoDensity.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/initialPointsMethod/autoDensity/autoDensity.C/autoDensity.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/initialPointsMethod/autoDensity/autoDensity.md)



###### uniformGrid

####### uniformGrid.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/initialPointsMethod/uniformGrid/uniformGrid.C/uniformGrid.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/initialPointsMethod/uniformGrid/uniformGrid.md)



###### initialPointsMethod

####### initialPointsMethod.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/initialPointsMethod/initialPointsMethod/initialPointsMethod.C/initialPointsMethod.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/initialPointsMethod/initialPointsMethod/initialPointsMethod.md)



###### rayShooting

####### rayShooting.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/initialPointsMethod/rayShooting/rayShooting.C/rayShooting.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/initialPointsMethod/rayShooting/rayShooting.md)



###### pointFile

####### pointFile.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/initialPointsMethod/pointFile/pointFile.C/pointFile.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/initialPointsMethod/pointFile/pointFile.md)



###### bodyCentredCubic

####### bodyCentredCubic.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/initialPointsMethod/bodyCentredCubic/bodyCentredCubic.C/bodyCentredCubic.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/initialPointsMethod/bodyCentredCubic/bodyCentredCubic.md)



###### faceCentredCubic

####### faceCentredCubic.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/initialPointsMethod/faceCentredCubic/faceCentredCubic.C/faceCentredCubic.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/initialPointsMethod/faceCentredCubic/faceCentredCubic.md)



##### faceAreaWeightModel

###### piecewiseLinearRamp

####### piecewiseLinearRamp.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/faceAreaWeightModel/piecewiseLinearRamp/piecewiseLinearRamp.C/piecewiseLinearRamp.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/faceAreaWeightModel/piecewiseLinearRamp/piecewiseLinearRamp.md)



###### faceAreaWeightModel

####### faceAreaWeightModel.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/faceAreaWeightModel/faceAreaWeightModel/faceAreaWeightModel.C/faceAreaWeightModel.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/faceAreaWeightModel/faceAreaWeightModel/faceAreaWeightModel.md)



##### searchableSurfaceFeatures

###### searchableSurfaceFeatures.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/searchableSurfaceFeatures/searchableSurfaceFeatures.C/searchableSurfaceFeatures.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/searchableSurfaceFeatures/searchableSurfaceFeatures.md)



###### searchableBoxFeatures.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/searchableSurfaceFeatures/searchableBoxFeatures.C/searchableBoxFeatures.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/searchableSurfaceFeatures/searchableBoxFeatures.md)



###### searchablePlateFeatures.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/searchableSurfaceFeatures/searchablePlateFeatures.C/searchablePlateFeatures.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/searchableSurfaceFeatures/searchablePlateFeatures.md)



###### triSurfaceMeshFeatures.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/searchableSurfaceFeatures/triSurfaceMeshFeatures.C/triSurfaceMeshFeatures.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/searchableSurfaceFeatures/triSurfaceMeshFeatures.md)



##### pointPairs

###### pointPairs.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/pointPairs/pointPairs.C/pointPairs.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/pointPairs/pointPairs.md)



##### lnInclude

###### cellSizeFunction.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/cellSizeFunction.C/cellSizeFunction.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/cellSizeFunction.md)



###### featurePointConformerSpecialisations.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/featurePointConformerSpecialisations.C/featurePointConformerSpecialisations.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/featurePointConformerSpecialisations.md)



###### pointFile.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/pointFile.C/pointFile.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/pointFile.md)



###### surfaceOffsetLinearDistance.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/surfaceOffsetLinearDistance.C/surfaceOffsetLinearDistance.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/surfaceOffsetLinearDistance.md)



###### indexedCellChecks.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/indexedCellChecks.C/indexedCellChecks.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/indexedCellChecks.md)



###### pointFeatureEdgesTypes.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/pointFeatureEdgesTypes.C/pointFeatureEdgesTypes.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/pointFeatureEdgesTypes.md)



###### indexedVertexOpsTemplates.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/indexedVertexOpsTemplates.C/indexedVertexOpsTemplates.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/indexedVertexOpsTemplates.md)



###### uniformGrid.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/uniformGrid.C/uniformGrid.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/uniformGrid.md)



###### faceCentredCubic.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/faceCentredCubic.C/faceCentredCubic.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/faceCentredCubic.md)



###### initialPointsMethod.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/initialPointsMethod.C/initialPointsMethod.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/initialPointsMethod.md)



###### searchableSurfaceFeatures.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/searchableSurfaceFeatures.C/searchableSurfaceFeatures.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/searchableSurfaceFeatures.md)



###### DelaunayMeshIO.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/DelaunayMeshIO.C/DelaunayMeshIO.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/DelaunayMeshIO.md)



###### indexedCellOpsTemplates.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/indexedCellOpsTemplates.C/indexedCellOpsTemplates.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/indexedCellOpsTemplates.md)



###### linearSpatial.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/linearSpatial.C/linearSpatial.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/linearSpatial.md)



###### searchableSurfaceControl.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/searchableSurfaceControl.C/searchableSurfaceControl.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/searchableSurfaceControl.md)



###### conformalVoronoiMesh.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/conformalVoronoiMesh.C/conformalVoronoiMesh.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/conformalVoronoiMesh.md)



###### pointPairs.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/pointPairs.C/pointPairs.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/pointPairs.md)



###### linearDistance.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/linearDistance.C/linearDistance.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/linearDistance.md)



###### faceAreaWeightModel.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/faceAreaWeightModel.C/faceAreaWeightModel.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/faceAreaWeightModel.md)



###### adaptiveLinear.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/adaptiveLinear.C/adaptiveLinear.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/adaptiveLinear.md)



###### automatic.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/automatic.C/automatic.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/automatic.md)



###### fileControl.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/fileControl.C/fileControl.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/fileControl.md)



###### nonUniformField.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/nonUniformField.C/nonUniformField.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/nonUniformField.md)



###### indexedCell.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/indexedCell.C/indexedCell.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/indexedCell.md)



###### surfaceCellSizeFunction.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/surfaceCellSizeFunction.C/surfaceCellSizeFunction.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/surfaceCellSizeFunction.md)



###### uniform.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/uniform.C/uniform.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/uniform.md)



###### indexedVertex.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/indexedVertex.C/indexedVertex.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/indexedVertex.md)



###### piecewiseLinearRamp.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/piecewiseLinearRamp.C/piecewiseLinearRamp.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/piecewiseLinearRamp.md)



###### smoothAlignmentSolver.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/smoothAlignmentSolver.C/smoothAlignmentSolver.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/smoothAlignmentSolver.md)



###### cellSizeCalculationType.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/cellSizeCalculationType.C/cellSizeCalculationType.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/cellSizeCalculationType.md)



###### uniformDistance.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/uniformDistance.C/uniformDistance.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/uniformDistance.md)



###### conformalVoronoiMeshConformToSurface.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/conformalVoronoiMeshConformToSurface.C/conformalVoronoiMeshConformToSurface.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/conformalVoronoiMeshConformToSurface.md)



###### cellSizeAndAlignmentControls.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/cellSizeAndAlignmentControls.C/cellSizeAndAlignmentControls.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/cellSizeAndAlignmentControls.md)



###### PrintTable.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/PrintTable.C/PrintTable.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/PrintTable.md)



###### searchableBoxFeatures.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/searchableBoxFeatures.C/searchableBoxFeatures.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/searchableBoxFeatures.md)



###### DelaunayMesh.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/DelaunayMesh.C/DelaunayMesh.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/DelaunayMesh.md)



###### conformalVoronoiMeshCalcDualMesh.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/conformalVoronoiMeshCalcDualMesh.C/conformalVoronoiMeshCalcDualMesh.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/conformalVoronoiMeshCalcDualMesh.md)



###### rayShooting.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/rayShooting.C/rayShooting.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/rayShooting.md)



###### uniformValue.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/uniformValue.C/uniformValue.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/uniformValue.md)



###### searchablePlateFeatures.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/searchablePlateFeatures.C/searchablePlateFeatures.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/searchablePlateFeatures.md)



###### DistributedDelaunayMesh.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/DistributedDelaunayMesh.C/DistributedDelaunayMesh.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/DistributedDelaunayMesh.md)



###### rampHoldFall.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/rampHoldFall.C/rampHoldFall.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/rampHoldFall.md)



###### DelaunayMeshToolsTemplates.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/DelaunayMeshToolsTemplates.C/DelaunayMeshToolsTemplates.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/DelaunayMeshToolsTemplates.md)



###### conformalVoronoiMeshIO.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/conformalVoronoiMeshIO.C/conformalVoronoiMeshIO.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/conformalVoronoiMeshIO.md)



###### backgroundMeshDecompositionTemplates.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/backgroundMeshDecompositionTemplates.C/backgroundMeshDecompositionTemplates.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/backgroundMeshDecompositionTemplates.md)



###### conformalVoronoiMeshFeaturePoints.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/conformalVoronoiMeshFeaturePoints.C/conformalVoronoiMeshFeaturePoints.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/conformalVoronoiMeshFeaturePoints.md)



###### indexedCellEnum.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/indexedCellEnum.C/indexedCellEnum.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/indexedCellEnum.md)



###### autoDensity.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/autoDensity.C/autoDensity.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/autoDensity.md)



###### bodyCentredCubic.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/bodyCentredCubic.C/bodyCentredCubic.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/bodyCentredCubic.md)



###### backgroundMeshDecomposition.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/backgroundMeshDecomposition.C/backgroundMeshDecomposition.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/backgroundMeshDecomposition.md)



###### relaxationModel.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/relaxationModel.C/relaxationModel.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/relaxationModel.md)



###### conformalVoronoiMeshTemplates.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/conformalVoronoiMeshTemplates.C/conformalVoronoiMeshTemplates.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/conformalVoronoiMeshTemplates.md)



###### cellAspectRatioControl.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/cellAspectRatioControl.C/cellAspectRatioControl.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/cellAspectRatioControl.md)



###### conformationSurfaces.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/conformationSurfaces.C/conformationSurfaces.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/conformationSurfaces.md)



###### triSurfaceMeshFeatures.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/triSurfaceMeshFeatures.C/triSurfaceMeshFeatures.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/triSurfaceMeshFeatures.md)



###### conformalVoronoiMeshZones.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/conformalVoronoiMeshZones.C/conformalVoronoiMeshZones.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/conformalVoronoiMeshZones.md)



###### featurePointConformer.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/featurePointConformer.C/featurePointConformer.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/featurePointConformer.md)



###### cellSizeAndAlignmentControl.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/cellSizeAndAlignmentControl.C/cellSizeAndAlignmentControl.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/cellSizeAndAlignmentControl.md)



###### controlMeshRefinement.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/controlMeshRefinement.C/controlMeshRefinement.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/controlMeshRefinement.md)



###### indexedVertexEnum.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/indexedVertexEnum.C/indexedVertexEnum.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/indexedVertexEnum.md)



###### cellShapeControl.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/cellShapeControl.C/cellShapeControl.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/cellShapeControl.md)



###### DelaunayMeshTools.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/DelaunayMeshTools.C/DelaunayMeshTools.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/DelaunayMeshTools.md)



###### cvControls.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/cvControls.C/cvControls.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/cvControls.md)



###### fieldFromFile.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/fieldFromFile.C/fieldFromFile.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/fieldFromFile.md)



###### cellShapeControlMesh.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/cellShapeControlMesh.C/cellShapeControlMesh.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/lnInclude/cellShapeControlMesh.md)



##### backgroundMeshDecomposition

###### backgroundMeshDecompositionTemplates.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/backgroundMeshDecomposition/backgroundMeshDecompositionTemplates.C/backgroundMeshDecompositionTemplates.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/backgroundMeshDecomposition/backgroundMeshDecompositionTemplates.md)



###### backgroundMeshDecomposition.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/backgroundMeshDecomposition/backgroundMeshDecomposition.C/backgroundMeshDecomposition.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/backgroundMeshDecomposition/backgroundMeshDecomposition.md)



##### PrintTable

###### PrintTable.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/PrintTable/PrintTable.C/PrintTable.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/PrintTable/PrintTable.md)



##### cvControls

###### cvControls.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/cvControls/cvControls.C/cvControls.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/cvControls/cvControls.md)



##### conformationSurfaces

###### conformationSurfaces.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/conformationSurfaces/conformationSurfaces.C/conformationSurfaces.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/conformationSurfaces/conformationSurfaces.md)



##### cellShapeControl

###### controlMeshRefinement

####### controlMeshRefinement.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/cellShapeControl/controlMeshRefinement/controlMeshRefinement.C/controlMeshRefinement.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/cellShapeControl/controlMeshRefinement/controlMeshRefinement.md)



###### cellShapeControlMesh

####### cellShapeControlMesh.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/cellShapeControl/cellShapeControlMesh/cellShapeControlMesh.C/cellShapeControlMesh.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/cellShapeControl/cellShapeControlMesh/cellShapeControlMesh.md)



###### cellSizeAndAlignmentControl

####### fileControl

######## fileControl.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/cellShapeControl/cellSizeAndAlignmentControl/fileControl/fileControl.C/fileControl.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/cellShapeControl/cellSizeAndAlignmentControl/fileControl/fileControl.md)



####### searchableSurfaceControl

######## searchableSurfaceControl.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/cellShapeControl/cellSizeAndAlignmentControl/searchableSurfaceControl/searchableSurfaceControl.C/searchableSurfaceControl.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/cellShapeControl/cellSizeAndAlignmentControl/searchableSurfaceControl/searchableSurfaceControl.md)



####### cellSizeAndAlignmentControls.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/cellShapeControl/cellSizeAndAlignmentControl/cellSizeAndAlignmentControls.C/cellSizeAndAlignmentControls.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/cellShapeControl/cellSizeAndAlignmentControl/cellSizeAndAlignmentControls.md)



####### cellSizeAndAlignmentControl

######## cellSizeAndAlignmentControl.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/cellShapeControl/cellSizeAndAlignmentControl/cellSizeAndAlignmentControl/cellSizeAndAlignmentControl.C/cellSizeAndAlignmentControl.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/cellShapeControl/cellSizeAndAlignmentControl/cellSizeAndAlignmentControl/cellSizeAndAlignmentControl.md)



###### cellAspectRatioControl

####### cellAspectRatioControl.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/cellShapeControl/cellAspectRatioControl/cellAspectRatioControl.C/cellAspectRatioControl.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/cellShapeControl/cellAspectRatioControl/cellAspectRatioControl.md)



###### smoothAlignmentSolver

####### smoothAlignmentSolver.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/cellShapeControl/smoothAlignmentSolver/smoothAlignmentSolver.C/smoothAlignmentSolver.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/cellShapeControl/smoothAlignmentSolver/smoothAlignmentSolver.md)



###### cellShapeControl

####### cellShapeControl.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/cellShapeControl/cellShapeControl/cellShapeControl.C/cellShapeControl.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/cellShapeControl/cellShapeControl/cellShapeControl.md)



##### conformalVoronoiMesh

###### featurePointConformer

####### featurePointConformerSpecialisations.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/conformalVoronoiMesh/featurePointConformer/featurePointConformerSpecialisations.C/featurePointConformerSpecialisations.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/conformalVoronoiMesh/featurePointConformer/featurePointConformerSpecialisations.md)



####### pointFeatureEdgesTypes.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/conformalVoronoiMesh/featurePointConformer/pointFeatureEdgesTypes.C/pointFeatureEdgesTypes.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/conformalVoronoiMesh/featurePointConformer/pointFeatureEdgesTypes.md)



####### featurePointConformer.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/conformalVoronoiMesh/featurePointConformer/featurePointConformer.C/featurePointConformer.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/conformalVoronoiMesh/featurePointConformer/featurePointConformer.md)



###### conformalVoronoiMesh.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/conformalVoronoiMesh/conformalVoronoiMesh.C/conformalVoronoiMesh.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/conformalVoronoiMesh/conformalVoronoiMesh.md)



###### indexedVertex

####### indexedVertexOpsTemplates.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/conformalVoronoiMesh/indexedVertex/indexedVertexOpsTemplates.C/indexedVertexOpsTemplates.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/conformalVoronoiMesh/indexedVertex/indexedVertexOpsTemplates.md)



####### indexedVertex.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/conformalVoronoiMesh/indexedVertex/indexedVertex.C/indexedVertex.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/conformalVoronoiMesh/indexedVertex/indexedVertex.md)



####### indexedVertexEnum.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/conformalVoronoiMesh/indexedVertex/indexedVertexEnum.C/indexedVertexEnum.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/conformalVoronoiMesh/indexedVertex/indexedVertexEnum.md)



###### conformalVoronoiMeshConformToSurface.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/conformalVoronoiMesh/conformalVoronoiMeshConformToSurface.C/conformalVoronoiMeshConformToSurface.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/conformalVoronoiMesh/conformalVoronoiMeshConformToSurface.md)



###### conformalVoronoiMeshCalcDualMesh.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/conformalVoronoiMesh/conformalVoronoiMeshCalcDualMesh.C/conformalVoronoiMeshCalcDualMesh.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/conformalVoronoiMesh/conformalVoronoiMeshCalcDualMesh.md)



###### conformalVoronoiMeshIO.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/conformalVoronoiMesh/conformalVoronoiMeshIO.C/conformalVoronoiMeshIO.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/conformalVoronoiMesh/conformalVoronoiMeshIO.md)



###### conformalVoronoiMeshFeaturePoints.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/conformalVoronoiMesh/conformalVoronoiMeshFeaturePoints.C/conformalVoronoiMeshFeaturePoints.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/conformalVoronoiMesh/conformalVoronoiMeshFeaturePoints.md)



###### indexedCell

####### indexedCellChecks.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/conformalVoronoiMesh/indexedCell/indexedCellChecks.C/indexedCellChecks.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/conformalVoronoiMesh/indexedCell/indexedCellChecks.md)



####### indexedCellOpsTemplates.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/conformalVoronoiMesh/indexedCell/indexedCellOpsTemplates.C/indexedCellOpsTemplates.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/conformalVoronoiMesh/indexedCell/indexedCellOpsTemplates.md)



####### indexedCell.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/conformalVoronoiMesh/indexedCell/indexedCell.C/indexedCell.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/conformalVoronoiMesh/indexedCell/indexedCell.md)



####### indexedCellEnum.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/conformalVoronoiMesh/indexedCell/indexedCellEnum.C/indexedCellEnum.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/conformalVoronoiMesh/indexedCell/indexedCellEnum.md)



###### conformalVoronoiMeshTemplates.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/conformalVoronoiMesh/conformalVoronoiMeshTemplates.C/conformalVoronoiMeshTemplates.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/conformalVoronoiMesh/conformalVoronoiMeshTemplates.md)



###### conformalVoronoiMeshZones.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/foamyMesh/conformalVoronoiMesh/conformalVoronoiMesh/conformalVoronoiMeshZones.C/conformalVoronoiMeshZones.C)
- [detail](v1906/doc/mesh/generation/foamyMesh/conformalVoronoiMesh/conformalVoronoiMesh/conformalVoronoiMeshZones.md)



# preProcessing

## setFields

### setFields.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/preProcessing/setFields/setFields.C/setFields.C)
- [detail](v1906/doc/preProcessing/setFields/setFields.md)

```
Description
    Set values on a selected set of cells/patch-faces via a dictionary.


```

## mapFields

### mapLagrangian.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/preProcessing/mapFields/mapLagrangian.C/mapLagrangian.C)
- [detail](v1906/doc/preProcessing/mapFields/mapLagrangian.md)



### mapFields.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/preProcessing/mapFields/mapFields.C/mapFields.C)
- [detail](v1906/doc/preProcessing/mapFields/mapFields.md)

```
Description
    Maps volume fields from one mesh to another, reading and
    interpolating all fields present in the time directory of both cases.

    Parallel and non-parallel cases are handled without the need to reconstruct
    them first.


```

## foamUpgradeCyclics

### foamUpgradeCyclics.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/preProcessing/foamUpgradeCyclics/foamUpgradeCyclics.C/foamUpgradeCyclics.C)
- [detail](v1906/doc/preProcessing/foamUpgradeCyclics/foamUpgradeCyclics.md)

```
Description
    Tool to upgrade mesh and fields for split cyclics.

Usage
    \b foamUpgradeCyclics [OPTION]

    Options:
      - \par -dry-run
        Suppress writing the updated files with split cyclics

      - \par -enableFunctionEntries
        By default all dictionary preprocessing of fields is disabled


```

## engineSwirl

### engineSwirl.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/preProcessing/engineSwirl/engineSwirl.C/engineSwirl.C)
- [detail](v1906/doc/preProcessing/engineSwirl/engineSwirl.md)

```
Description
    Generate a swirl flow for engine calculations.


```

## createBoxTurb

### createBoxTurb.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/preProcessing/createBoxTurb/createBoxTurb.C/createBoxTurb.C)
- [detail](v1906/doc/preProcessing/createBoxTurb/createBoxTurb.md)

```
Description
    Create a box of isotropic turbulence based on a user-specified
    energy spectrum.

    Based on the reference
    \verbatim
    Saad, T., Cline, D., Stoll, R., Sutherland, J.C.
    "Scalable Tools for Generating Synthetic Isotropic Turbulence with
    Arbitrary Spectra"
    AIAA Journal, Vol. 55, No. 1 (2017), pp. 327-331.
    \endverbatim

    The \c -createBlockMesh option creates a block mesh and exits, which
    can then be decomposed and the utility run in parallel.


```

## boxTurb

### boxTurb.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/preProcessing/boxTurb/boxTurb.C/boxTurb.C)
- [detail](v1906/doc/preProcessing/boxTurb/boxTurb.md)

```
Description
    Create a box of divergence-free turbulence conforming to a given
    energy spectrum.


```

## setAlphaField

### setAlphaField.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/preProcessing/setAlphaField/setAlphaField.C/setAlphaField.C)
- [detail](v1906/doc/preProcessing/setAlphaField/setAlphaField.md)

```
Description
    Uses isoCutCell to create a volume fraction field from either a cylinder,
    a sphere or a plane.

    Original code supplied by Johan Roenby, DHI (2016)


```

## viewFactorsGen

### viewFactorsGen.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/preProcessing/viewFactorsGen/viewFactorsGen.C/viewFactorsGen.C)
- [detail](v1906/doc/preProcessing/viewFactorsGen/viewFactorsGen.md)

```
Description
    View factors are calculated based on a face agglomeration array
    (finalAgglom generated by faceAgglomerate utility).

    Each view factor between the agglomerated faces i and j (Fij) is calculated
    using a double integral of the sub-areas composing the agglomeration.

    The patches involved in the view factor calculation are taken from the
    boundary file and should be part on the group viewFactorWall. ie.:

    floor
    {
        type            wall;
        inGroups        2(wall viewFactorWall);
        nFaces          100;
        startFace       3100;
    }


```

## changeDictionary

### changeDictionary.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/preProcessing/changeDictionary/changeDictionary.C/changeDictionary.C)
- [detail](v1906/doc/preProcessing/changeDictionary/changeDictionary.md)

```
Description
    Utility to change dictionary entries, e.g. can be used to change the patch
    type in the field and polyMesh/boundary files.

    Reads dictionaries (fields) and entries to change from a dictionary.
    E.g. to make the \em movingWall a \em fixedValue for \em p but all other
    \em Walls a zeroGradient boundary condition, the
    \c system/changeDictionaryDict would contain the following:
    \verbatim
    p                           // field to change
    {
        boundaryField
        {
            ".*Wall"            // entry to change
            {
                type            zeroGradient;
            }
            movingWall          // entry to change
            {
                type            fixedValue;
                value           uniform 123.45;
            }
        }
    }
    \endverbatim
    Replacement entries starting with '~' will remove the entry.

Usage
    \b changeDictionary [OPTION]

    Options:
      - \par -subDict
        Specify the subDict name of the replacements dictionary.

      - \par -literalRE
        Do not interpret regular expressions or patchGroups; treat them as any
        other keyword.

      - \par -enableFunctionEntries
        Enable function entries (default: disabled)

      - \par -disablePatchGroups
        Disable the default checking for keys being patchGroups


```

## dsmcInitialise

### dsmcInitialise.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/preProcessing/dsmcInitialise/dsmcInitialise.C/dsmcInitialise.C)
- [detail](v1906/doc/preProcessing/dsmcInitialise/dsmcInitialise.md)

```
Description
    Initialise a case for dsmcFoam by reading the initialisation dictionary
    system/dsmcInitialise.


```

## createZeroDirectory

### solverTemplate.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/preProcessing/createZeroDirectory/solverTemplate.C/solverTemplate.C)
- [detail](v1906/doc/preProcessing/createZeroDirectory/solverTemplate.md)



### boundaryTemplates.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/preProcessing/createZeroDirectory/boundaryTemplates.C/boundaryTemplates.C)
- [detail](v1906/doc/preProcessing/createZeroDirectory/boundaryTemplates.md)



### createZeroDirectory.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/preProcessing/createZeroDirectory/createZeroDirectory.C/createZeroDirectory.C)
- [detail](v1906/doc/preProcessing/createZeroDirectory/createZeroDirectory.md)

```
Description
    Creates a zero directory with fields appropriate for the chosen solver and
    turbulence model. Operates on both single and multi-region cases.

Usage
    The set-up is configured using a 'caseProperties' dictionary, located under
    the $FOAM_CASE/system (or system/regionName if multi-region) directory.
    This consists of a lists of initial and boundary conditions, e.g.

    \verbatim
    initialConditions
    {
        U           uniform (0 0 0);
        p           uniform 0;
    }

    boundaryConditions
    {
        topWall
        {
            category        wall;
            patches         (movingWall);
            type            noSlip;
            options
            {
                wallFunction    highReynolds;
                motion          moving;
            };
            values
            {
                U           uniform (1 0 0);
            }
        }

        walls
        {
            category        wall;
            patches         (fixedWalls);
            type            noSlip;
            options
            {
                wallFunction    highReynolds;
                motion          stationary;
            };
        }
    }
    \endverbatim


```

### caseInfo.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/preProcessing/createZeroDirectory/caseInfo.C/caseInfo.C)
- [detail](v1906/doc/preProcessing/createZeroDirectory/caseInfo.md)



### boundaryInfo.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/preProcessing/createZeroDirectory/boundaryInfo.C/boundaryInfo.C)
- [detail](v1906/doc/preProcessing/createZeroDirectory/boundaryInfo.md)



## mdInitialise

### mdInitialise.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/preProcessing/mdInitialise/mdInitialise.C/mdInitialise.C)
- [detail](v1906/doc/preProcessing/mdInitialise/mdInitialise.md)

```
Description
    Initialises fields for a molecular dynamics (MD) simulation.


```

## createExternalCoupledPatchGeometry

### createExternalCoupledPatchGeometry.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/preProcessing/createExternalCoupledPatchGeometry/createExternalCoupledPatchGeometry.C/createExternalCoupledPatchGeometry.C)
- [detail](v1906/doc/preProcessing/createExternalCoupledPatchGeometry/createExternalCoupledPatchGeometry.md)

```
Description
    Generate the patch geometry (points and faces) for use
    with the externalCoupled functionObject.

Usage
    \verbatim
    createExternalCoupledPatchGeometry \<patchGroup\> [OPTION]
    \endverbatim

    \param -commsDir \<commsDir\> \n
    Specify an alternative communications directory (default is comms
    in the case directory)

    \param -region \<name\> \n
    Specify an alternative mesh region.

    \param -regions (\<name1\> \<name2\> .. \<namen\>) \n
    Specify alternative mesh regions. The region names will be sorted
    alphabetically and a single composite name will be created
        \<nameX\>_\<nameY\>.._\<nameZ\>

    On execution, the combined patch geometry (points and faces) are output
    to the communications directory.

Note:
    The addressing is patch-local, i.e. point indices for each patch point
    used for face addressing starts at index 0.

See also
    functionObjects::externalCoupled


```

## applyBoundaryLayer

### applyBoundaryLayer.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/preProcessing/applyBoundaryLayer/applyBoundaryLayer.C/applyBoundaryLayer.C)
- [detail](v1906/doc/preProcessing/applyBoundaryLayer/applyBoundaryLayer.md)

```
Description
    Apply a simplified boundary-layer model to the velocity and
    turbulence fields based on the 1/7th power-law.

    The uniform boundary-layer thickness is either provided via the -ybl option
    or calculated as the average of the distance to the wall scaled with
    the thickness coefficient supplied via the option -Cbl.  If both options
    are provided -ybl is used.

    Compressible modes is automatically selected based on the existence of the
    "thermophysicalProperties" dictionary required to construct the
    thermodynamics package.


```

## faceAgglomerate

### faceAgglomerate.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/preProcessing/faceAgglomerate/faceAgglomerate.C/faceAgglomerate.C)
- [detail](v1906/doc/preProcessing/faceAgglomerate/faceAgglomerate.md)

```
Description
    Agglomerate boundary faces using the pairPatchAgglomeration algorithm.

    It writes a map from the fine to coarse grid.

SeeAlso
    pairPatchAgglomeration.H


```

## wallFunctionTable

### wallFunctionTable.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/preProcessing/wallFunctionTable/wallFunctionTable.C/wallFunctionTable.C)
- [detail](v1906/doc/preProcessing/wallFunctionTable/wallFunctionTable.md)

```
Description
    Generates a table suitable for use by tabulated wall functions.


```

### tabulatedWallFunction

#### SpaldingsLaw

##### SpaldingsLaw.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/preProcessing/wallFunctionTable/tabulatedWallFunction/SpaldingsLaw/SpaldingsLaw.C/SpaldingsLaw.C)
- [detail](v1906/doc/preProcessing/wallFunctionTable/tabulatedWallFunction/SpaldingsLaw/SpaldingsLaw.md)



#### lnInclude

##### general.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/preProcessing/wallFunctionTable/tabulatedWallFunction/lnInclude/general.C/general.C)
- [detail](v1906/doc/preProcessing/wallFunctionTable/tabulatedWallFunction/lnInclude/general.md)



##### tabulatedWallFunctionNew.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/preProcessing/wallFunctionTable/tabulatedWallFunction/lnInclude/tabulatedWallFunctionNew.C/tabulatedWallFunctionNew.C)
- [detail](v1906/doc/preProcessing/wallFunctionTable/tabulatedWallFunction/lnInclude/tabulatedWallFunctionNew.md)



##### tabulatedWallFunction.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/preProcessing/wallFunctionTable/tabulatedWallFunction/lnInclude/tabulatedWallFunction.C/tabulatedWallFunction.C)
- [detail](v1906/doc/preProcessing/wallFunctionTable/tabulatedWallFunction/lnInclude/tabulatedWallFunction.md)



##### SpaldingsLaw.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/preProcessing/wallFunctionTable/tabulatedWallFunction/lnInclude/SpaldingsLaw.C/SpaldingsLaw.C)
- [detail](v1906/doc/preProcessing/wallFunctionTable/tabulatedWallFunction/lnInclude/SpaldingsLaw.md)



#### general

##### general.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/preProcessing/wallFunctionTable/tabulatedWallFunction/general/general.C/general.C)
- [detail](v1906/doc/preProcessing/wallFunctionTable/tabulatedWallFunction/general/general.md)



#### tabulatedWallFunction

##### tabulatedWallFunctionNew.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/preProcessing/wallFunctionTable/tabulatedWallFunction/tabulatedWallFunction/tabulatedWallFunctionNew.C/tabulatedWallFunctionNew.C)
- [detail](v1906/doc/preProcessing/wallFunctionTable/tabulatedWallFunction/tabulatedWallFunction/tabulatedWallFunctionNew.md)



##### tabulatedWallFunction.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/preProcessing/wallFunctionTable/tabulatedWallFunction/tabulatedWallFunction/tabulatedWallFunction.C/tabulatedWallFunction.C)
- [detail](v1906/doc/preProcessing/wallFunctionTable/tabulatedWallFunction/tabulatedWallFunction/tabulatedWallFunction.md)



## mapFieldsPar

### mapFieldsPar.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/preProcessing/mapFieldsPar/mapFieldsPar.C/mapFieldsPar.C)
- [detail](v1906/doc/preProcessing/mapFieldsPar/mapFieldsPar.md)

```
Description
    Maps volume fields from one mesh to another, reading and
    interpolating all fields present in the time directory of both cases.


```

### mapLagrangian.C

- [source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/preProcessing/mapFieldsPar/mapLagrangian.C/mapLagrangian.C)
- [detail](v1906/doc/preProcessing/mapFieldsPar/mapLagrangian.md)



