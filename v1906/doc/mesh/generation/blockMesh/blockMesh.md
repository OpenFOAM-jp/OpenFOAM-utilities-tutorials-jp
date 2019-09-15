# blockMesh

[source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/generation/blockMesh/blockMesh.C/blockMesh.C)

```
Description
    A multi-block mesh generator.

    Uses the block mesh description found in
      - \c system/blockMeshDict
      - \c system/\<region\>/blockMeshDict
      - \c constant/polyMesh/blockMeshDict
      - \c constant/\<region\>/polyMesh/blockMeshDict

Usage
    \b blockMesh [OPTION]

    Options:
      - \par -blockTopology
        Write the topology as a set of edges in OBJ format and exit.

      - \par -region \<name\>
        Specify alternative mesh region.

      - \par -dict \<filename\>
        Alternative dictionary for the block mesh description.

      - \par -sets
        Write cellZones as cellSets too (for processing purposes)

      - \par -noClean
        Do not remove any existing polyMesh/ directory or files

      - \par -time
        Write resulting mesh to a time directory (instead of constant)


```

