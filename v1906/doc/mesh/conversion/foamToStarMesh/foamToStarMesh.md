# foamToStarMesh

[source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/conversion/foamToStarMesh/foamToStarMesh.C/foamToStarMesh.C)

```
Description
    Write an OpenFOAM mesh in STARCD/PROSTAR (v4) bnd/cel/vrt format.

Usage
    \b foamToStarMesh [OPTION]

    Options:
      - \par -noBnd
        Suppress writing the \c .bnd file

      - \par -scale \<factor\>
        Specify an alternative geometry scaling factor.
        The default is \b 1000 (scale \em [m] to \em [mm]).

Note
    The cellTable information available in the files
    \c constant/cellTable and \c constant/polyMesh/cellTableId
    will be used if available. Otherwise the cellZones are used when
    creating the cellTable information.

See also
    Foam::cellTable, Foam::meshWriter and Foam::fileFormats::STARCDMeshWriter


```

