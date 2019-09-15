# createBoxTurb

[source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/preProcessing/createBoxTurb/createBoxTurb.C/createBoxTurb.C)

```
Description
    Create a box of isotropic turbulence based on a user-specified
    energy spectrum.

    Based on the reference
    \verbatim
    Saad, T., Cline, D., Stoll, R., Sutherland, J.C.
    "Scalable Tools for Generating Synthetic Isotropic Turbulence with
    Arbitrary Spectra"
    AIAA Journal, Vol. 55, No. 1 (2017), pp. 327-331.
    \endverbatim

    The \c -createBlockMesh option creates a block mesh and exits, which
    can then be decomposed and the utility run in parallel.


```

