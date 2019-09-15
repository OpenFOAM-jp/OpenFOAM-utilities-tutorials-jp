# plot3dToFoam

[source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/conversion/plot3dToFoam/plot3dToFoam.C/plot3dToFoam.C)

```
Description
    Plot3d mesh (ascii/formatted format) converter.

    Work in progress! Handles ascii multiblock (and optionally singleBlock)
    format.
    By default expects blanking. Use -noBlank if none.
    Use -2D \a thickness if 2D.

    Niklas Nordin has experienced a problem with lefthandedness of the blocks.
    The code should detect this automatically - see hexBlock::readPoints but
    if this goes wrong just set the blockHandedness_ variable to 'right'
    always.


```

