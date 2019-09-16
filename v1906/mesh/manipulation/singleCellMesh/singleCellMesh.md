# singleCellMesh

## Source

- [singleCellMesh.C](singleCellMesh.C) : 


## Discription from [singleCellMesh.C](singleCellMesh.C)

```
Description
    Reads all fields and maps them to a mesh with all internal faces removed
    (singleCellFvMesh) which gets written to region "singleCell".

    Used to generate mesh and fields that can be used for boundary-only data.
    Might easily result in illegal mesh though so only look at boundaries
    in paraview.


```

