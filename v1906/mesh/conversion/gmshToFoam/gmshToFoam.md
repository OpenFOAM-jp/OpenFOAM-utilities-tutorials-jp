# gmshToFoam

## Source

- [gmshToFoam.C](gmshToFoam.C) : 


## Discription from [gmshToFoam.C](gmshToFoam.C)

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

