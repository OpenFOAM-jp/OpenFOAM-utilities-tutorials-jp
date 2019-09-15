# reconstructParMesh

[source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/parallelProcessing/reconstructParMesh/reconstructParMesh.C/reconstructParMesh.C)

```
Description
    Reconstructs a mesh using geometric information only.

    Writes point/face/cell procAddressing so afterwards reconstructPar can be
    used to reconstruct fields.

    Note:
    - uses geometric matching tolerance (set with -mergeTol (at your option)

    If the parallel case does not have correct procBoundaries use the
    -fullMatch option which will check all boundary faces (bit slower).


```

