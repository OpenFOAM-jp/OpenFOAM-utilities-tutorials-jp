# removeFaces

[source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/advanced/removeFaces/removeFaces.C/removeFaces.C)

```
Description
    Remove faces specified in faceSet by combining cells on both sides.

    Takes faceSet of candidates for removal and writes faceSet with faces that
    will actually be removed. (because e.g. would cause two faces between the
    same cells). See removeFaces in dynamicMesh library for constraints.


```

