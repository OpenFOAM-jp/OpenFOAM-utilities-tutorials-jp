# foamToEnsightParts

## Source

- [foamToEnsightParts.C](foamToEnsightParts.C) : 
- [readFields.C](readFields.C) : 
- [checkMeshMoving.H](checkMeshMoving.H) : 
- [writeVolFields.H](writeVolFields.H) : 
- [convertVolumeFields.H](convertVolumeFields.H) : 
- [writeDimFields.H](writeDimFields.H) : 
- [getTimeIndex.H](getTimeIndex.H) : 
- [moveMesh.H](moveMesh.H) : 
- [convertLagrangian.H](convertLagrangian.H) : 
- [readFields.H](readFields.H) : 
- [findCloudFields.H](findCloudFields.H) : 


## Discription from [foamToEnsightParts.C](foamToEnsightParts.C)

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

