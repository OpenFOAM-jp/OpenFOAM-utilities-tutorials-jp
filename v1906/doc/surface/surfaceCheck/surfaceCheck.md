# surfaceCheck

[source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/surface/surfaceCheck/surfaceCheck.C/surfaceCheck.C)

```
Description
    Check geometric and topological quality of a surface.

Usage
    \b surfaceCheck [OPTION] surfaceFile

    Options:
      - \par -checkSelfIntersection
        Check for self-intersection.

      - \par -splitNonManifold
        Split surface along non-manifold edges.

      - \par -verbose
        Extra verbosity.

      - \par -blockMesh
        Write vertices/blocks for tight-fitting 1 cell blockMeshDict.

      - \par -outputThreshold \<num files\>
        Upper limit on the number of files written.
        Prevent surfaces with many disconnected parts from writing many files.
        The default is 10. A value of 0 suppresses file writing.


```

