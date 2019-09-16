# star4ToFoam

## Source

- [star4ToFoam.C](star4ToFoam.C) : 


## Discription from [star4ToFoam.C](star4ToFoam.C)

```
Description
    Convert a STARCD/PROSTAR (v4) mesh into OpenFOAM format.

Usage
    \b star4ToFoam [OPTION] prostarMesh

    Options:
      - \par -ascii
        Write in ASCII format instead of binary

      - \par -scale \<factor\>
        Specify an alternative geometry scaling factor.
        The default is \b 0.001 (scale \em [mm] to \em [m]).

      - \par -solids
        Treat any solid cells present just like fluid cells.
        The default is to discard them.

Note
    Baffles are written as interfaces for later use

See also
    Foam::cellTable, Foam::meshReader and Foam::fileFormats::STARCDMeshReader


```

