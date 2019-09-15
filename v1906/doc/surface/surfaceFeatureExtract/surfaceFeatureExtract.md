# surfaceFeatureExtract

[source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/surface/surfaceFeatureExtract/surfaceFeatureExtract.C/surfaceFeatureExtract.C)

```
Description
    Extracts and writes surface features to file. All but the basic feature
    extraction is a work-in-progress.

    The extraction process is driven by the \a system/surfaceFeatureExtractDict
    dictionary, but the \a -dict option can be used to define an alternative
    location.

    The \a system/surfaceFeatureExtractDict dictionary contains entries
    for each extraction process.
    The name of the individual dictionary is used to load the input surface
    (found under \a constant/triSurface) and also as the basename for the
    output.

    If the \c surfaces entry is present in a sub-dictionary, it has absolute
    precedence over a surface name deduced from the dictionary name.
    If the dictionary name itself does not have an extension, the \c surfaces
    entry becomes mandatory since in this case the dictionary name cannot
    represent an input surface file (ie, there is no file extension).
    The \c surfaces entry is a wordRe list, which allows loading and
    combining of multiple surfaces. Any exactly specified surface names must
    exist, but surfaces selected via regular expressions need not exist.
    The selection mechanism preserves order and is without duplicates.
    For example,
    \verbatim
    dictName
    {
        surfaces    (surface1.stl "other.*" othersurf.obj);
        ...
    }
    \endverbatim

    When loading surfaces, the points/faces/regions of each surface are
    normally offset to create an aggregated surface. No merging of points
    or faces is done. The optional entry \c loadingOption can be used to
    adjust the treatment of the regions when loading single or multiple files,
    with selections according to the Foam::triSurfaceLoader::loadingOption
    enumeration.
    \verbatim
    dictName
    {
        // Optional treatment of surface regions when loading
        // (single, file, offset, merge)
        loadingOption   file;
        ...
    }
    \endverbatim
    The \c loadingOption is primarily used in combination with the
    \c intersectionMethod (specifically its \c region option).
    The default \c loadingOption is normally \c offset,
    but this changes to \c file if the \c intersectionMethod
    \c region is being used.

    Once surfaces have been loaded, the first stage is to extract
    features according to the specified \c extractionMethod with values
    as per the following table:
    \table
        extractionMethod   | Description
        none               | No feature extraction
        extractFromFile    | Load features from the file named in featureEdgeFile
        extractFromSurface | Extract features from surface geometry
    \endtable

    There are a few entries that influence the extraction behaviour:
    \verbatim
        // File to use for extractFromFile input
        featureEdgeFile     "FileName"

        // Mark edges whose adjacent surface normals are at an angle less
        // than includedAngle as features
        // - 0  : selects no edges
        // - 180: selects all edges
        includedAngle       120;

        // Do not mark region edges
        geometricTestOnly   yes;
    \endverbatim

    This initial set of edges can be trimmed:
    \verbatim
        trimFeatures
        {
            // Remove features with fewer than the specified number of edges
            minElem         0;

            // Remove features shorter than the specified cumulative length
            minLen          0.0;
        }
    \endverbatim

    and subsetted
    \verbatim
    subsetFeatures
    {
        // Use a plane to select feature edges (normal)(basePoint)
        // Only keep edges that intersect the plane
        plane           (1 0 0)(0 0 0);

        // Select feature edges using a box // (minPt)(maxPt)
        // Only keep edges inside the box:
        insideBox       (0 0 0)(1 1 1);

        // Only keep edges outside the box:
        outsideBox      (0 0 0)(1 1 1);

        // Keep nonManifold edges (edges with >2 connected faces where
        // the faces form more than two different normal planes)
        nonManifoldEdges yes;

        // Keep open edges (edges with 1 connected face)
        openEdges       yes;
    }
    \endverbatim

    Subsequently, additional features can be added from another file:
    \verbatim
        addFeatures
        {
            // Add (without merging) another extendedFeatureEdgeMesh
            name        axZ.extendedFeatureEdgeMesh;
        }
    \endverbatim

    The intersectionMethod provides a final means of adding additional
    features. These are loosely termed "self-intersection", since it
    detects the face/face intersections of the loaded surface or surfaces.

    \table
        intersectionMethod | Description
        none    | Do nothing
        self    | All face/face intersections
        region  | Limit face/face intersections to those between different regions.
    \endtable
    The optional \c tolerance tuning parameter is available for handling
    the face/face intersections, but should normally not be touched.

    As well as the normal extendedFeatureEdgeMesh written,
    other items can be selected with boolean switches:

    \table
        Output option | Description
        closeness | Output the closeness of surface elements to other surface elements.
        curvature | Output surface curvature
        featureProximity | Output the proximity of feature points and edges to another
        writeObj  | Write features to OBJ format for postprocessing
        writeVTK  | Write closeness/curvature/proximity fields as VTK for postprocessing
    \endtable

Note
   Although surfaceFeatureExtract can do many things, there are still a fair
   number of corner cases where it may not produce the desired result.

```

