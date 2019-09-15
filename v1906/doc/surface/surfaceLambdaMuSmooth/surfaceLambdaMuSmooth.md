# surfaceLambdaMuSmooth

[source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/surface/surfaceLambdaMuSmooth/surfaceLambdaMuSmooth.C/surfaceLambdaMuSmooth.C)

```
Description
    Smooth a surface using lambda/mu smoothing.

    To get laplacian smoothing, set lambda to the relaxation factor and mu to
    zero.

    Provide an edgeMesh file containing points that are not to be moved during
    smoothing in order to preserve features.

    lambda/mu smoothing: G. Taubin, IBM Research report Rc-19923 (02/01/95)
    "A signal processing approach to fair surface design"


```

