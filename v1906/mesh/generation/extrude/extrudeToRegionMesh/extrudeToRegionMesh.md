# extrudeToRegionMesh

## Source

- [extrudeToRegionMesh.C](extrudeToRegionMesh.C) : 


## Discription from [extrudeToRegionMesh.C](extrudeToRegionMesh.C)

```
Description
    Extrude faceZones (internal or boundary faces) or faceSets (boundary faces
    only) into a separate mesh (as a different region).

    - used to e.g. extrude baffles (extrude internal faces) or create
    liquid film regions.
    - if extruding internal faces:
        - create baffles in original mesh with mappedWall patches
    - if extruding boundary faces:
        - convert boundary faces to mappedWall patches
    - extrude edges of faceZone as a \<zone\>_sidePatch
    - extrude edges inbetween different faceZones as a
      (nonuniformTransform)cyclic \<zoneA\>_\<zoneB\>
    - extrudes into master direction (i.e. away from the owner cell
      if flipMap is false)

\verbatim

Internal face extrusion
-----------------------

    +-------------+
    |             |
    |             |
    +---AAAAAAA---+
    |             |
    |             |
    +-------------+

    AAA=faceZone to extrude.


For the case of no flipMap the extrusion starts at owner and extrudes
into the space of the neighbour:

      +CCCCCCC+
      |       |         <= extruded mesh
      +BBBBBBB+

    +-------------+
    |             |
    | (neighbour) |
    |___CCCCCCC___|       <= original mesh (with 'baffles' added)
    |   BBBBBBB   |
    |(owner side) |
    |             |
    +-------------+

    BBB=mapped between owner on original mesh and new extrusion.
        (zero offset)
    CCC=mapped between neighbour on original mesh and new extrusion
        (offset due to the thickness of the extruded mesh)

For the case of flipMap the extrusion is the other way around: from the
neighbour side into the owner side.


Boundary face extrusion
-----------------------

    +--AAAAAAA--+
    |           |
    |           |
    +-----------+

    AAA=faceZone to extrude. E.g. slave side is owner side (no flipmap)

becomes

      +CCCCCCC+
      |       |         <= extruded mesh
      +BBBBBBB+

    +--BBBBBBB--+
    |           |       <= original mesh
    |           |
    +-----------+

    BBB=mapped between original mesh and new extrusion
    CCC=polypatch


Notes:
    - when extruding cyclics with only one cell inbetween it does not
      detect this as a cyclic since the face is the same face. It will
      only work if the coupled edge extrudes a different face so if there
      are more than 1 cell inbetween.

\endverbatim


```

