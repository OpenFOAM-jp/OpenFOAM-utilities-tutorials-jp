# surfaceMeshExtract

## Source

- [surfaceMeshExtract.C](surfaceMeshExtract.C) : 


## Discription from [surfaceMeshExtract.C](surfaceMeshExtract.C)

```
Description
    Extract patch or faceZone surfaces from a polyMesh.
    Depending on output surface format triangulates faces.

    Region numbers on faces no guaranteed to be the same as the patch indices.

    Optionally only extracts named patches.

    If run in parallel, processor patches get filtered out by default and
    the mesh is merged (based on topology).


```

