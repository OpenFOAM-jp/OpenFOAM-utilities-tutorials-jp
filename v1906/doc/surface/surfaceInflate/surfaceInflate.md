# surfaceInflate

[source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/surface/surfaceInflate/surfaceInflate.C/surfaceInflate.C)

```
Description
    Inflates surface. WIP. Checks for overlaps and locally lowers
    inflation distance

Usage
    - surfaceInflate [OPTION]

    \param -checkSelfIntersection \n
    Includes checks for self-intersection.

    \param -nSmooth
    Specify number of smoothing iterations

    \param -featureAngle
    Specify a feature angle


    E.g. inflate surface by 20mm with 1.5 safety factor:
        surfaceInflate DTC-scaled.obj 0.02 1.5 -featureAngle 45 -nSmooth 2


```

