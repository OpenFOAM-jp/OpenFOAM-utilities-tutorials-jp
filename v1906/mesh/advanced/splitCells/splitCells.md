# splitCells

## Source

- [splitCells.C](splitCells.C) : 


## Discription from [splitCells.C](splitCells.C)

```
Description
    Utility to split cells with flat faces.

    Uses a geometric cut with a plane dividing the edge angle into two so
    might produce funny cells. For hexes it will use by default a cut from
    edge onto opposite edge (i.e. purely topological).

    Options:
    - split cells from cellSet only
    - use geometric cut for hexes as well

    The angle is the angle between two faces sharing an edge as seen from
    inside each cell. So a cube will have all angles 90. If you want
    to split cells with cell centre outside use e.g. angle 200


```

