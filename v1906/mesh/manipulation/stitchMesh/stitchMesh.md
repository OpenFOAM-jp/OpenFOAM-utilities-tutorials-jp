# stitchMesh

## Source

- [stitchMesh.C](stitchMesh.C) : 


## Discription from [stitchMesh.C](stitchMesh.C)

```
Description
    'Stitches' a mesh.

    Takes a mesh and two patches and merges the faces on the two patches
    (if geometrically possible) so the faces become internal.

    Can do
    - 'perfect' match: faces and points on patches align exactly. Order might
    be different though.
    - 'integral' match: where the surfaces on both patches exactly
    match but the individual faces not
    - 'partial' match: where the non-overlapping part of the surface remains
    in the respective patch.

    Note : Is just a front-end to perfectInterface/slidingInterface.

    Comparable to running a meshModifier of the form
    (if masterPatch is called "M" and slavePatch "S"):

    \verbatim
    couple
    {
        type                    slidingInterface;
        masterFaceZoneName      MSMasterZone
        slaveFaceZoneName       MSSlaveZone
        cutPointZoneName        MSCutPointZone
        cutFaceZoneName         MSCutFaceZone
        masterPatchName         M;
        slavePatchName          S;
        typeOfMatch             partial or integral
    }
    \endverbatim



```

