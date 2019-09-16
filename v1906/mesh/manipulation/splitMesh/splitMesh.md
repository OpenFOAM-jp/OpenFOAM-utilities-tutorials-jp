# splitMesh

## Source

- [regionSide.C](regionSide.C) : 
- [splitMesh.C](splitMesh.C) : 
- [regionSide.H](regionSide.H) : 


## Discription from [splitMesh.C](splitMesh.C)

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

