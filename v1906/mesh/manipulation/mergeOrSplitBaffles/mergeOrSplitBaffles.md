# mergeOrSplitBaffles

## Source

- [mergeOrSplitBaffles.C](mergeOrSplitBaffles.C) : 


## Discription from [mergeOrSplitBaffles.C](mergeOrSplitBaffles.C)

```
Description
    Detects boundary faces that share points (baffles). Either merges them or
    duplicate the points.

Usage
    \b mergeOrSplitBaffles [OPTION]

    Options:
      - \par -detectOnly
        Detect baffles and write to faceSet duplicateFaces.

      - \par -split
        Detect baffles and duplicate the points (used so the two sides
        can move independently)

      - \par -dict \<dictionary\>
        Specify a dictionary to read actions from.

Note
    - can only handle pairwise boundary faces. So three faces using
      the same points is not handled (is illegal mesh anyway)

    - surfaces consisting of duplicate faces can be topologically split
    if the points on the interior of the surface cannot walk to all the
    cells that use them in one go.

    - Parallel operation (where duplicate face is perpendicular to a coupled
    boundary) is supported but not really tested.
    (Note that coupled faces themselves are not seen as duplicate faces)


```

