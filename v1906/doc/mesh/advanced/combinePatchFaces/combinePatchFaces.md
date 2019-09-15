# combinePatchFaces

[source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/advanced/combinePatchFaces/combinePatchFaces.C/combinePatchFaces.C)

```
Description
    Checks for multiple patch faces on the same cell and combines them.
    Multiple patch faces can result from e.g. removal of refined
    neighbouring cells, leaving 4 exposed faces with same owner.

    Rules for merging:
    - only boundary faces (since multiple internal faces between two cells
      not allowed anyway)
    - faces have to have same owner
    - faces have to be connected via edge which are not features (so angle
      between them < feature angle)
    - outside of faces has to be single loop
    - outside of face should not be (or just slightly) concave (so angle
      between consecutive edges < concaveangle

    E.g. to allow all faces on same patch to be merged:

        combinePatchFaces 180 -concaveAngle 90


```

