# surfaceMeshInfo

[source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/surface/surfaceMeshInfo/surfaceMeshInfo.C/surfaceMeshInfo.C)

```
Description
    Miscellaneous information about surface meshes.
    To simplify parsing of the output, the normal banner information
    is suppressed.

Usage
    \b surfaceMeshInfo surfaceFile [OPTION]

    Options:
      - \par -areas
        Report area for each face.

      - \par -scale \<scale\>
        Specify a scaling factor when reading files.

      - \par -xml
        Write output in XML format.

Note
    The filename extensions are used to determine the file format type.

    The XML-like output can be useful for extraction with other tools,
    but either output format can be easily extracted with a simple sed
    command:
    \verbatim
        surfaceMeshInfo surfaceFile -areas | \
            sed -ne '/areas/,/:/{ /:/!p }'

        surfaceMeshInfo surfaceFile -areas -xml | \
            sed -ne '/<areas/,/</{ /</!p }'
    \endverbatim


```

