# foamToFireMesh

## Source

- [foamToFireMesh.C](foamToFireMesh.C) : 
- [getTimeIndex.H](getTimeIndex.H) : 


## Discription from [foamToFireMesh.C](foamToFireMesh.C)

```
Description
    Write an OpenFOAM mesh in AVL/FIRE fpma format

Usage
    \b foamToFireMesh [OPTION]

    Options:
      - \par -ascii
        Write in ASCII format instead of binary

      - \par -scale \<factor\>
        Specify an alternative geometry scaling factor.
        The default is \b 1 (ie, no scaling).

See also
    Foam::cellTable, Foam::meshWriter and Foam::fileFormats::FIREMeshWriter


```

