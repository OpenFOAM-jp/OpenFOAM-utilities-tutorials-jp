# splitMeshRegions

[source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/mesh/manipulation/splitMeshRegions/splitMeshRegions.C/splitMeshRegions.C)

```
Description
    Splits mesh into multiple regions.

    Each region is defined as a domain whose cells can all be reached by
    cell-face-cell walking without crossing
    - boundary faces
    - additional faces from faceset (-blockedFaces faceSet).
    - any face between differing cellZones (-cellZones)

    Output is:
    - volScalarField with regions as different scalars (-detectOnly)
            or
    - mesh with multiple regions and mapped patches. These patches
      either cover the whole interface between two region (default) or
      only part according to faceZones (-useFaceZones)
            or
    - mesh with cells put into cellZones (-makeCellZones)

    Note:
    - cellZonesOnly does not do a walk and uses the cellZones only. Use
    this if you don't mind having disconnected domains in a single region.
    This option requires all cells to be in one (and one only) cellZone.

    - cellZonesFileOnly behaves like -cellZonesOnly but reads the cellZones
    from the specified file. This allows one to explicitly specify the region
    distribution and still have multiple cellZones per region.

    - prefixRegion prefixes all normal patches with region name (interface
    (patches already have region name prefix)

    - Should work in parallel.
    cellZones can differ on either side of processor boundaries in which case
    the faces get moved from processor patch to directMapped patch. Not
    the faces get moved from processor patch to mapped patch. Not
    very well tested.

    - If a cell zone gets split into more than one region it can detect
    the largest matching region (-sloppyCellZones). This will accept any
    region that covers more than 50% of the zone. It has to be a subset
    so cannot have any cells in any other zone.

    - If explicitly a single region has been selected (-largestOnly or
      -insidePoint) its region name will be either
        - name of a cellZone it matches to or
        - "largestOnly" respectively "insidePoint" or
        - polyMesh::defaultRegion if additionally -overwrite
          (so it will overwrite the input mesh!)

    - writes maps like decomposePar back to original mesh:
        - pointRegionAddressing : for every point in this region the point in
        the original mesh
        - cellRegionAddressing  :   ,,      cell                ,,  cell    ,,
        - faceRegionAddressing  :   ,,      face                ,,  face in
        the original mesh + 'turning index'. For a face in the same orientation
        this is the original facelabel+1, for a turned face this is -facelabel-1
        - boundaryRegionAddressing : for every patch in this region the
        patch in the original mesh (or -1 if added patch)


```

