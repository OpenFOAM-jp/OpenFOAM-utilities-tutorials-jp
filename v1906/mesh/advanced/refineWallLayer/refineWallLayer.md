# refineWallLayer

## Source

- [refineWallLayer.C](refineWallLayer.C) : 


## Discription from [refineWallLayer.C](refineWallLayer.C)

```
Description
    Refine cells next to specified patches.

    Arguments:
        1: List of patch names or regular expressions
        2: The size of the refined cells as a fraction of the edge-length.

    Examples:
        Split the near-wall cells of patch Wall in the middle
            refineWallLayer "(Wall)" 0.5

        Split the near-wall cells of patches Wall1 and Wall2 in the middle
            refineWallLayer "(Wall1 Wall2)" 0.5

        Split the near-wall cells of all patches with names beginning with wall
        with the near-wall cells 10% of the thickness of the original cells
            refineWallLayer '("Wall.*")' 0.1


```

