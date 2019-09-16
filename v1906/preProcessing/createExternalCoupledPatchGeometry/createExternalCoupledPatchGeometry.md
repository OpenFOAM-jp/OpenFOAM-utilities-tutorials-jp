# createExternalCoupledPatchGeometry

## Source

- [createExternalCoupledPatchGeometry.C](createExternalCoupledPatchGeometry.C) : 
- [addRegionsOption.H](addRegionsOption.H) : 


## Discription from [createExternalCoupledPatchGeometry.C](createExternalCoupledPatchGeometry.C)

```
Description
    Generate the patch geometry (points and faces) for use
    with the externalCoupled functionObject.

Usage
    \verbatim
    createExternalCoupledPatchGeometry \<patchGroup\> [OPTION]
    \endverbatim

    \param -commsDir \<commsDir\> \n
    Specify an alternative communications directory (default is comms
    in the case directory)

    \param -region \<name\> \n
    Specify an alternative mesh region.

    \param -regions (\<name1\> \<name2\> .. \<namen\>) \n
    Specify alternative mesh regions. The region names will be sorted
    alphabetically and a single composite name will be created
        \<nameX\>_\<nameY\>.._\<nameZ\>

    On execution, the combined patch geometry (points and faces) are output
    to the communications directory.

Note:
    The addressing is patch-local, i.e. point indices for each patch point
    used for face addressing starts at index 0.

See also
    functionObjects::externalCoupled


```

