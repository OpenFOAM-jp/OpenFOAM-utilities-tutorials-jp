# collapseEdges

## Source

- [collapseEdges.C](collapseEdges.C) : 


## Discription from [collapseEdges.C](collapseEdges.C)

```
Description
    Collapses short edges and combines edges that are in line.

    - collapse short edges. Length of edges to collapse provided as argument.
    - merge two edges if they are in line. Maximum angle provided as argument.
    - remove unused points.
    - collapse faces:
        - with small areas to a single point
        - that have a high aspect ratio (i.e. sliver face) to a single edge

    Optionally checks the resulting mesh for bad faces and reduces the desired
    face length factor for those faces attached to the bad faces.

    When collapsing an edge with one point on the boundary it will leave
    the boundary point intact. When both points inside it chooses random. When
    both points on boundary random again.

Usage
    - collapseEdges [OPTION]


```

