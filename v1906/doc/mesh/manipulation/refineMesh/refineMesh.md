# refineMesh

[source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/manipulation/refineMesh/refineMesh.C/refineMesh.C)

```
Description
    Utility to refine cells in multiple directions.

    Command-line option handling:
    - If -all specified or no refineMeshDict exists or, refine all cells
    - If -dict \<file\> specified refine according to \<file\>
    - If refineMeshDict exists refine according to refineMeshDict

    When the refinement or all cells is selected apply 3D refinement for 3D
    cases and 2D refinement for 2D cases.


```

