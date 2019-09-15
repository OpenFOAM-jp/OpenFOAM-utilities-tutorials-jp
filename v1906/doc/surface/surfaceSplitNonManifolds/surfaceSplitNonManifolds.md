# surfaceSplitNonManifolds

[source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/surface/surfaceSplitNonManifolds/surfaceSplitNonManifolds.C/surfaceSplitNonManifolds.C)

```
Description
    Takes multiply connected surface and tries to split surface at
    multiply connected edges by duplicating points.

    Introduces concept of
    - borderEdge. Edge with 4 faces connected to it.
    - borderPoint. Point connected to exactly 2 borderEdges.
    - borderLine. Connected list of borderEdges.

    By duplicating borderPoints this will split 'borderLines'. As a
    preprocessing step it can detect borderEdges without any borderPoints
    and explicitly split these triangles.

    The problems in this algorithm are:
    - determining which two (of the four) faces form a surface. Done by walking
      face-edge-face while keeping and edge or point on the borderEdge
      borderPoint.
    - determining the outwards pointing normal to be used to slightly offset the
      duplicated point.

    Uses sortedEdgeFaces quite a bit.

    Is tested on simple borderLines resulting from extracting a surface
    from a hex mesh. Will quite possibly go wrong on more complicated border
    lines (i.e. ones forming a loop).

    Dumps surface every so often since might take a long time to complete.


```

