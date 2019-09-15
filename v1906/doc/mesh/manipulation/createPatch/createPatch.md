# createPatch

[source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/manipulation/createPatch/createPatch.C/createPatch.C)

```
Description
    Create patches out of selected boundary faces, which are either
    from existing patches or from a faceSet.

    More specifically it:
    - creates new patches (from selected boundary faces).
      Synchronise faces on coupled patches.
    - synchronises points on coupled boundaries
    - remove patches with 0 faces in them


```

