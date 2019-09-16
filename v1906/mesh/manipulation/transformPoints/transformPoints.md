# transformPoints

## Source

- [transformPoints.C](transformPoints.C) : 


## Discription from [transformPoints.C](transformPoints.C)

```
Description
    Transforms the mesh points in the polyMesh directory according to the
    translate, rotate and scale options.

Usage
    Options are:

    -translate vector
        Translates the points by the given vector before rotations

    -rotate (vector vector)
        Rotates the points from the first vector to the second,

    -rotate-angle (vector angle)
        Rotate angle degrees about vector axis.

     or -yawPitchRoll (yawdegrees pitchdegrees rolldegrees)
     or -rollPitchYaw (rolldegrees pitchdegrees yawdegrees)

    -scale scalar|vector
        Scales the points by the given scalar or vector.

    The any or all of the three options may be specified and are processed
    in the above order.

    With -rotateFields (in combination with -rotate/yawPitchRoll/rollPitchYaw)
    it will also read & transform vector & tensor fields.

Note
    roll (rotation about x)
    pitch (rotation about y)
    yaw (rotation about z)


```

