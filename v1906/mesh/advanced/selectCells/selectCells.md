# selectCells

## Source

- [selectCells.C](selectCells.C) : 
- [edgeStats.C](edgeStats.C) : 
- [edgeStats.H](edgeStats.H) : 


## Discription from [selectCells.C](selectCells.C)

```
Description
    Select cells in relation to surface.

    Divides cells into three sets:
    - cutCells : cells cut by surface or close to surface.
    - outside  : cells not in cutCells and reachable from set of
      user-defined points (outsidePoints)
    - inside   : same but not reachable.

    Finally the wanted sets are combined into a cellSet 'selected'. Apart
    from straightforward adding the contents there are a few extra rules to
    make sure that the surface of the 'outside' of the mesh is singly
    connected.


```

