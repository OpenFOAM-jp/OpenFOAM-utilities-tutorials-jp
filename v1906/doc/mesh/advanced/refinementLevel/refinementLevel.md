# refinementLevel

[source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/advanced/refinementLevel/refinementLevel.C/refinementLevel.C)

```
Description
    Attempt to determine the refinement levels of a refined cartesian mesh.
    Run BEFORE snapping.

    Writes
    - volScalarField 'refinementLevel' with current refinement level.
    - cellSet 'refCells' which are the cells that need to be refined to satisfy
      2:1 refinement.

    Works by dividing cells into volume bins.


```

