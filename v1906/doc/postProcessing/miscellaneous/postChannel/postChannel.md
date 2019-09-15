# postChannel

[source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/postProcessing/miscellaneous/postChannel/postChannel.C/postChannel.C)

```
Description
    Post-process data from channel flow calculations.

    For each time: calculate: txx, txy,tyy, txy,
    eps, prod, vorticity, enstrophy and helicity. Assuming that the mesh
    is periodic in the x and z directions, collapse Umeanx, Umeany, txx,
    txy and tyy to a line and print them as standard output.


```

