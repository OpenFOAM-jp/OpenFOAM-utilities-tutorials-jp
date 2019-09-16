# foamToEnsight

## Source

- [readFields.C](readFields.C) : 
- [foamToEnsight.C](foamToEnsight.C) : 
- [checkMeshMoving.H](checkMeshMoving.H) : 
- [writeVolFields.H](writeVolFields.H) : 
- [convertVolumeFields.H](convertVolumeFields.H) : 
- [writeDimFields.H](writeDimFields.H) : 
- [convertLagrangian.H](convertLagrangian.H) : 
- [readFields.H](readFields.H) : 
- [findCloudFields.H](findCloudFields.H) : 


## Discription from [foamToEnsight.C](foamToEnsight.C)

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

