# foamToVTK

## Source

- [foamToVTK.C](foamToVTK.C) : 
- [readFields.C](readFields.C) : 
- [convertSurfaceFields.H](convertSurfaceFields.H) : 
- [convertAreaFields.H](convertAreaFields.H) : 
- [writeVolFields.H](writeVolFields.H) : 
- [convertVolumeFields.H](convertVolumeFields.H) : 
- [reportFields.H](reportFields.H) : 
- [writeDimFields.H](writeDimFields.H) : 
- [writeAreaFields.H](writeAreaFields.H) : 
- [convertLagrangian.H](convertLagrangian.H) : 
- [convertTopoSet.H](convertTopoSet.H) : 
- [createMeshes.H](createMeshes.H) : 
- [writePointFields.H](writePointFields.H) : 
- [convertProcessorPatches.H](convertProcessorPatches.H) : 
- [readFields.H](readFields.H) : 


## Discription from [foamToVTK.C](foamToVTK.C)

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

