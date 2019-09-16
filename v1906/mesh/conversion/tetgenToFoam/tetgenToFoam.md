# tetgenToFoam

## Source

- [tetgenToFoam.C](tetgenToFoam.C) : 


## Discription from [tetgenToFoam.C](tetgenToFoam.C)

```
Description
    Convert tetgen .ele and .node and .face files to an OpenFOAM mesh.

    Make sure to use add boundary attributes to the smesh file
    (5 fifth column in the element section)
    and run tetgen with -f option.

    Sample smesh file:
    \verbatim
        # cube.smesh -- A 10x10x10 cube
        8 3
        1       0 0 0
        2       0 10 0
        3       10 10 0
        4       10 0 0
        5       0 0 10
        6       0 10 10
        7       10 10 10
        8       10 0 10
        6 1                 # 1 for boundary info present
        4       1 2 3 4 11  # region number 11
        4       5 6 7 8 21  # region number 21
        4       1 2 6 5 3
        4       4 3 7 8 43
        4       1 5 8 4 5
        4       2 6 7 3 65
        0
        0
    \endverbatim

Note
    - for some reason boundary faces point inwards. I just reverse them
      always. Might use some geometric check instead.
    - marked faces might not actually be boundary faces of mesh.
      This is hopefully handled now by first constructing without boundaries
      and then reconstructing with boundary faces.


```

