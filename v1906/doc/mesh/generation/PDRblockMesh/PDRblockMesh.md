# PDRblockMesh

[source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/PDRblockMesh/PDRblockMesh.C/PDRblockMesh.C)

```
Description
    A specialized single-block mesh generator for a rectilinear mesh
    in x-y-z.

    Uses the mesh description found in
      - \c system/PDRblockMeshDict

Usage
    \b PDRblockMesh [OPTION]

    Options:
      - \par -dict \<filename\>
        Alternative dictionary for the mesh description.

      - \par -noClean
        Do not remove any existing polyMesh/ directory or files

      - \par -time
        Write resulting mesh to a time directory (instead of constant)


```

