# createBaffles

[source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/manipulation/createBaffles/createBaffles.C/createBaffles.C)

```
Description
    Makes internal faces into boundary faces. Does not duplicate points, unlike
    mergeOrSplitBaffles.

    Note: if any coupled patch face is selected for baffling the opposite
    member has to be selected for baffling as well.

    - if the patch already exists will not override it nor its fields
    - if the patch does not exist it will be created together with 'calculated'
      patchfields unless the field is mentioned in the patchFields section.
    - any 0-sized patches (since faces have been moved out) will get removed


```

