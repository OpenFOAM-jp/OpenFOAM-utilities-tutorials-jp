# foamToCcm

[source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/conversion/ccm/foamToCcm/foamToCcm.C/foamToCcm.C)

```
Description
    Translates OPENFOAM mesh and/or results to CCM format

Usage
    \b foamToCcm [OPTION]

    Options:
      - \par -mesh
        convert mesh only to CCM format

      - \par -name \<name\>
        Provide alternative base name. Default is <tt>meshExport</tt>.

      - \par -overwrite
        No backup of existing output files.

      - \par -remap \<name\>
        Use specified remapping dictionary instead of
        <tt>constant/remapping</tt>

      - \par -results
        Convert results only to CCM format

Note
    - No parallel data
    - No Lagrangian elements
    - the -noZero time option can be useful to avoid the often incomplete
      initial conditions (missing useful calculated values)

See also
    Foam::ccm::writer for information about the
    <tt>constant/remapping</tt> file.


```

