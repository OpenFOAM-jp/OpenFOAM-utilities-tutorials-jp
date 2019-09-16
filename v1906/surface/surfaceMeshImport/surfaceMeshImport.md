# surfaceMeshImport

## Source

- [surfaceMeshImport.C](surfaceMeshImport.C) : 


## Discription from [surfaceMeshImport.C](surfaceMeshImport.C)

```
Description
    Import from various third-party surface formats into surfMesh
    with optional scaling or transformations (rotate/translate)
    on a coordinateSystem.

Usage
    \b surfaceMeshImport inputFile [OPTION]

    Options:
      - \par -clean
        Perform some surface checking/cleanup on the input surface.

      - \par -name \<name\>
        Specify an alternative surface name when writing.

      - \par -scaleIn \<scale\>
        Specify a scaling factor when reading files.

      - \par -scaleOut \<scale\>
        Specify a scaling factor when writing files.

      - \par -dict \<dictionary\>
        Use alternative dictionary for constant/coordinateSystems.

      - \par -from \<coordinateSystem\>
        Specify a coordinate system when reading files.

      - \par -to \<coordinateSystem\>
        Specify a coordinate system when writing files.

Note
    The filename extensions are used to determine the file format type.


```

