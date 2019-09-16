# PDRMesh

## Source

- [PDRMesh.C](PDRMesh.C) : 


## Discription from [PDRMesh.C](PDRMesh.C)

```
Description
    Mesh and field preparation utility for PDR type simulations.

    Reads
    - cellSet giving blockedCells
    - faceSets giving blockedFaces and the patch they should go into

    NOTE: To avoid exposing wrong fields values faceSets should include
    faces contained in the blockedCells cellset.

    - coupledFaces reads coupledFacesSet to introduces mixed-coupled
      duplicate baffles

    Subsets out the blocked cells and splits the blockedFaces and updates
    fields.

    The face splitting is done by duplicating the faces. No duplication of
    points for now (so checkMesh will show a lot of 'duplicate face' messages)


```

