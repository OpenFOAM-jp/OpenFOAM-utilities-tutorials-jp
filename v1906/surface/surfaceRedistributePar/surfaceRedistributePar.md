# surfaceRedistributePar

## Source

- [surfaceRedistributePar.C](surfaceRedistributePar.C) : 


## Discription from [surfaceRedistributePar.C](surfaceRedistributePar.C)

```
Description
    (Re)distribution of triSurface. Either takes an undecomposed surface
    or an already decomposed surface and redistributes it so that each
    processor has all triangles that overlap its mesh.

Note
    - best decomposition option is hierarchical since it guarantees
      square decompositions.
    - triangles might be present on multiple processors.
    - merging uses geometric tolerance so take care with writing precision.


```

