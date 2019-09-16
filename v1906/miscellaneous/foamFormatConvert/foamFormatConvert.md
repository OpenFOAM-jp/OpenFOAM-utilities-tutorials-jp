# foamFormatConvert

## Source

- [foamFormatConvert.C](foamFormatConvert.C) : 
- [writeMeshObject.H](writeMeshObject.H) : 


## Discription from [foamFormatConvert.C](foamFormatConvert.C)

```
Description
    Converts all IOobjects associated with a case into the format specified
    in the controlDict.

    Mainly used to convert binary mesh/field files to ASCII.

    Problem: any zero-size List written binary gets written as '0'. When
    reading the file as a dictionary this is interpreted as a label. This
    is (usually) not a problem when doing patch fields since these get the
    'uniform', 'nonuniform' prefix. However zone contents are labelLists
    not labelFields and these go wrong. For now hacked a solution where
    we detect the keywords in zones and redo the dictionary entries
    to be labelLists.

Usage

    - foamFormatConvert [OPTION]

    \param -noConstant \n
    Exclude the constant/ directory from the times list

    \param -enableFunctionEntries \n
    By default all dictionary preprocessing of fields is disabled


```

