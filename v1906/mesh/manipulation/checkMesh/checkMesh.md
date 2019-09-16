# checkMesh

## Source

- [checkTopology.C](checkTopology.C) : 
- [checkMesh.C](checkMesh.C) : 
- [checkMeshQuality.C](checkMeshQuality.C) : 
- [writeFields.C](writeFields.C) : 
- [checkGeometry.C](checkGeometry.C) : 
- [checkTools.C](checkTools.C) : 
- [checkMeshQuality.H](checkMeshQuality.H) : 
- [checkGeometry.H](checkGeometry.H) : 
- [writeFields.H](writeFields.H) : 
- [checkTools.H](checkTools.H) : 
- [checkTopology.H](checkTopology.H) : 


## Discription from [checkMesh.C](checkMesh.C)

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

