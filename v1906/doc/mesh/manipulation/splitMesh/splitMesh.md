# splitMesh

[source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/manipulation/splitMesh/splitMesh.C/splitMesh.C)

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

