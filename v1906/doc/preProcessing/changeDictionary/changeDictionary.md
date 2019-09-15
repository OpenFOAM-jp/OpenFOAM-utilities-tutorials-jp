# changeDictionary

[source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/preProcessing/changeDictionary/changeDictionary.C/changeDictionary.C)

```
Description
    Utility to change dictionary entries, e.g. can be used to change the patch
    type in the field and polyMesh/boundary files.

    Reads dictionaries (fields) and entries to change from a dictionary.
    E.g. to make the \em movingWall a \em fixedValue for \em p but all other
    \em Walls a zeroGradient boundary condition, the
    \c system/changeDictionaryDict would contain the following:
    \verbatim
    p                           // field to change
    {
        boundaryField
        {
            ".*Wall"            // entry to change
            {
                type            zeroGradient;
            }
            movingWall          // entry to change
            {
                type            fixedValue;
                value           uniform 123.45;
            }
        }
    }
    \endverbatim
    Replacement entries starting with '~' will remove the entry.

Usage
    \b changeDictionary [OPTION]

    Options:
      - \par -subDict
        Specify the subDict name of the replacements dictionary.

      - \par -literalRE
        Do not interpret regular expressions or patchGroups; treat them as any
        other keyword.

      - \par -enableFunctionEntries
        Enable function entries (default: disabled)

      - \par -disablePatchGroups
        Disable the default checking for keys being patchGroups


```

