# noise

[source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/postProcessing/noise/noise.C/noise.C)

```
Description
    Perform noise analysis of pressure data.

    The utility provides a light wrapper around the run-time selectable
    noise model.  Current options include:
    - point, and
    - surface noise.

Usage
    \verbatim
    noiseModel      surfaceNoise; // pointNoise

    surfaceNoiseCoeffs
    {
        windowModel     Hanning;

        HanningCoeffs
        {
            // Window overlap percentage
            overlapPercent  50;
            symmetric       yes;
            extended        yes;

            // Optional number of windows, default = all available
            nWindow         5;
        }


        // Input files list
        files       ("postProcessing/faceSource1/surface/patch/patch.case";)

        // Surface reader
        reader      ensight;

        // Surface writer
        writer      ensight;

        // Collate times for ensight output
        // - ensures geometry is only written once
        writeOptions
        {
            ensight
            {
                collateTimes true;
            }
        }

        // Number of samples in sampling window, default = 2^16 (=65536)
        N               4096;

        // Write interval for FFT data, default = 1
        fftWriteInterval 100;
    }
    \endverbatim


See also
    noiseFFT.H
    noiseModel.H
    windowModel.H


```

