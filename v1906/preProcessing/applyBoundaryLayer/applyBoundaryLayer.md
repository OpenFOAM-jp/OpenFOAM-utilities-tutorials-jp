# applyBoundaryLayer

## Source

- [applyBoundaryLayer.C](applyBoundaryLayer.C) : 
- [createFields.H](createFields.H) : 


## Discription from [applyBoundaryLayer.C](applyBoundaryLayer.C)

```
Description
    Apply a simplified boundary-layer model to the velocity and
    turbulence fields based on the 1/7th power-law.

    The uniform boundary-layer thickness is either provided via the -ybl option
    or calculated as the average of the distance to the wall scaled with
    the thickness coefficient supplied via the option -Cbl.  If both options
    are provided -ybl is used.

    Compressible modes is automatically selected based on the existence of the
    "thermophysicalProperties" dictionary required to construct the
    thermodynamics package.


```

