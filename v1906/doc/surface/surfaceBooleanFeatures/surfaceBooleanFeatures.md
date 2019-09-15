# surfaceBooleanFeatures

[source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/surface/surfaceBooleanFeatures/surfaceBooleanFeatures.C/surfaceBooleanFeatures.C)

```
Description
    Generates the extendedFeatureEdgeMesh for the interface between a boolean
    operation on two surfaces.

    Assumes that the orientation of the surfaces is correct:
    - if the operation is union or intersection, that both surface's normals
      (n) have the same orientation with respect to a point, i.e. surfaces
      A and B are orientated the same with respect to point x:

    \verbatim
       _______
      |       |--> n
      |    ___|___             x
      |A  |   |   |--> n
      |___|___|  B|
          |       |
          |_______|

    \endverbatim

    - if the operation is a subtraction, the surfaces should be oppositely
    oriented with respect to a point, i.e. for (A - B), then B's orientation
    should be such that x is "inside", and A's orientation such that x is
    "outside"

    \verbatim
       _______
      |       |--> n
      |    ___|___             x
      |A  |   |   |
      |___|___|  B|
          |  n <--|
          |_______|

    \endverbatim

    When the operation is peformed - for union, all of the edges generates where
    one surfaces cuts another are all "internal" for union, and "external" for
    intersection, (B - A) and (A - B).
    This has been assumed, formal (dis)proof is invited.


```

