# postChannel

## Source

- [postChannel.C](postChannel.C) : 
- [channelIndex.C](channelIndex.C) : 
- [channelIndexTemplates.C](channelIndexTemplates.C) : 
- [calculateFields.H](calculateFields.H) : 
- [readTransportProperties.H](readTransportProperties.H) : 
- [collapse.H](collapse.H) : 
- [channelIndex.H](channelIndex.H) : 
- [readFields.H](readFields.H) : 


## Discription from [postChannel.C](postChannel.C)

```
Description
    Post-process data from channel flow calculations.

    For each time: calculate: txx, txy,tyy, txy,
    eps, prod, vorticity, enstrophy and helicity. Assuming that the mesh
    is periodic in the x and z directions, collapse Umeanx, Umeany, txx,
    txy and tyy to a line and print them as standard output.


```

