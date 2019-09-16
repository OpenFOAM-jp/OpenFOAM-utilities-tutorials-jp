# netgenNeutralToFoam

## Source

- [netgenNeutralToFoam.C](netgenNeutralToFoam.C) : 


## Discription from [netgenNeutralToFoam.C](netgenNeutralToFoam.C)

```
Description
    Convert a neutral file format (Netgen v4.4) to OpenFOAM.

    Example:

    9
      1.000000  1.000000  1.000000
      0.000000  1.000000  1.000000
      0.000000  0.000000  1.000000
      1.000000  0.000000  1.000000
      0.000000  1.000000  0.000000
      1.000000  1.000000  0.000000
      1.000000  0.000000  0.000000
      0.000000  0.000000  0.000000
      0.500000  0.500000  0.500000
    12
       1          7        8        9        3
       1          5        9        6        8
       1          5        9        2        1
       1          4        9        7        6
       1          7        8        6        9
       1          4        6        1        9
       1          5        9        8        2
       1          4        1        2        9
       1          1        6        5        9
       1          2        3        4        9
       1          8        9        3        2
       1          4        9        3        7
    12
       1            1        2        4
       1            3        4        2
       2            5        6        8
       2            7        8        6
       3            1        4        6
       3            7        6        4
       5            2        1        5
       5            6        5        1
       5            3        2        8
       5            5        8        2
       6            4        3        7
       6            8        7        3

NOTE:
    - reverse order of boundary faces using geometric test.
      (not very space efficient)
    - order of tet vertices only tested on one file.
    - all patch/cell/vertex numbers offset by one.


```

