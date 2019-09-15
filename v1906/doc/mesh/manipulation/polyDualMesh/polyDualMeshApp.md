# polyDualMeshApp

[source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/manipulation/polyDualMesh/polyDualMeshApp.C/polyDualMeshApp.C)

```
Description
    Creates the dual of a polyMesh, adhering to all the feature and patch edges.

Usage
    \b polyDualMesh featureAngle

    Detects any boundary edge > angle and creates multiple boundary faces
    for it. Normal behaviour is to have each point become a cell
    (1.5 behaviour)

    Options:
      - \par -concaveMultiCells
        Creates multiple cells for each point on a concave edge. Might limit
        the amount of distortion on some meshes.

      - \par -splitAllFaces
        Normally only constructs a single face between two cells. This single
        face might be too distorted. splitAllFaces will create a single face for
        every original cell the face passes through. The mesh will thus have
        multiple faces in between two cells! (so is not strictly
        upper-triangular anymore - checkMesh will complain)

      - \par -doNotPreserveFaceZones:
        By default all faceZones are preserved by marking all faces, edges and
        points on them as features. The -doNotPreserveFaceZones disables this
        behaviour.

Note
    It is just a driver for meshDualiser. Substitute your own simpleMarkFeatures
    to have different behaviour.


```

