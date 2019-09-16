# mapFields

## Source

- [mapLagrangian.C](mapLagrangian.C) : 
- [mapFields.C](mapFields.C) : 
- [setTimeIndex.H](setTimeIndex.H) : 
- [MapConsistentVolFields.H](MapConsistentVolFields.H) : 
- [MapVolFields.H](MapVolFields.H) : 
- [UnMapped.H](UnMapped.H) : 
- [createTimes.H](createTimes.H) : 
- [MapMeshes.H](MapMeshes.H) : 
- [mapLagrangian.H](mapLagrangian.H) : 
- [MapLagrangianFields.H](MapLagrangianFields.H) : 


## Discription from [mapFields.C](mapFields.C)

```
Description
    Maps volume fields from one mesh to another, reading and
    interpolating all fields present in the time directory of both cases.

    Parallel and non-parallel cases are handled without the need to reconstruct
    them first.


```

