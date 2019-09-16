# modifyMesh

## Source

- [modifyMesh.C](modifyMesh.C) : 
- [cellSplitter.C](cellSplitter.C) : 
- [cellSplitter.H](cellSplitter.H) : 


## Discription from [modifyMesh.C](modifyMesh.C)

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

