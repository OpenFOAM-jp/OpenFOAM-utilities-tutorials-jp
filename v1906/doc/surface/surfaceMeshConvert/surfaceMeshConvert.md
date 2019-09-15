# surfaceMeshConvert

[source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/surface/surfaceMeshConvert/surfaceMeshConvert.C/surfaceMeshConvert.C)

```
Description
    Convert between surface formats with optional scaling or
    transformations (rotate/translate) on a coordinateSystem.

Usage
    \b surfaceMeshConvert inputFile outputFile [OPTION]

    Options:
      - \par -clean
        Perform some surface checking/cleanup on the input surface.

      - \par -scaleIn \<scale\>
        Specify a scaling factor when reading files.

      - \par -scaleOut \<scale\>
        Specify a scaling factor when writing files.

      - \par -dict \<dictionary\>
        Specify an alternative dictionary for constant/coordinateSystems.

      - \par -from \<coordinateSystem\>
        Specify a coordinate System when reading files.

      - \par -to \<coordinateSystem\>
        Specify a coordinate System when writing files.

      - \par -tri
        Triangulate surface.

Note
    The filename extensions are used to determine the file format type.


```

