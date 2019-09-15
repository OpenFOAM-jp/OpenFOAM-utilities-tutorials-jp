# ccmToFoam

[source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/conversion/ccm/ccmToFoam/ccmToFoam.C/ccmToFoam.C)

```
Description
    Reads CCM files as written by PROSTAR/STARCCM and writes an
    OPENFOAM polyMesh.

Usage
    \b ccmToFoam [OPTION] ccmMesh

    Options:
      - \par -ascii
        Write in ASCII format instead of binary

      - \par -export
        re-export mesh in CCM format for post-processing

      - \par -list
        List some information about the geometry

      - \par -name \<name\>
        Provide alternative base name for export.
        Default is <tt>meshExport</tt>.

      - \par -noBaffles
        Remove any baffles by merging the faces.

      - \par -merge
        Merge in-place interfaces

      - \par -numbered
        Use numbered patch/zone (not names) directly from ccm ids.

      - \par -remap \<name\>
        Use specified remapping dictionary instead of
        <tt>constant/remapping</tt>

      - \par -scale \<factor\>
        Specify an alternative geometry scaling factor.
        The default is \b 1 (no scaling).

      - \par -solids
        Treat any solid cells present just like fluid cells.
        The default is to remove them.

Note
    - sub-domains (fluid | solid | porosity) are stored as separate domains
      within the CCM file. These are merged together to form a single mesh.
    - baffles are written as interfaces for later use

See also
    Foam::ccm::reader for more information about the File Locations


```

