/*---------------------------------------------------------------------------*\
  =========                 |
  \\      /  F ield         | OpenFOAM: The Open Source CFD Toolbox
   \\    /   O peration     |
    \\  /    A nd           | Copyright (C) 2004-2011, 2016 OpenCFD Ltd.
     \\/     M anipulation  |
-------------------------------------------------------------------------------
                            | Copyright (C) 2011-2016 OpenFOAM Foundation
-------------------------------------------------------------------------------
License
    This file is part of OpenFOAM.

    OpenFOAM is free software: you can redistribute it and/or modify it
    under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    OpenFOAM is distributed in the hope that it will be useful, but WITHOUT
    ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
    FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
    for more details.

    You should have received a copy of the GNU General Public License
    along with OpenFOAM.  If not, see <http://www.gnu.org/licenses/>.

Application
    insideCells

Group
    grpMeshManipulationUtilities

Description
    Create a cellSet for cells with their centres 'inside' the defined
    surface.
    Requires surface to be closed and singly connected.

\*---------------------------------------------------------------------------*/

#include "argList.H"
#include "Time.H"
#include "polyMesh.H"
#include "triSurface.H"
#include "triSurfaceSearch.H"
#include "cellSet.H"
#include "globalMeshData.H"

using namespace Foam;

// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //


int main(int argc, char *argv[])
{
    argList::addNote
    (
        "Create a cellSet for cells with their centres 'inside' the defined"
        " surface.\n"
        "Surface must be closed and singly connected."
    );

    argList::addArgument("surfaceFile");
    argList::addArgument("cellSet");

    #include "setRootCase.H"
    #include "createTime.H"
    #include "createPolyMesh.H"

    const fileName surfName = args[1];
    const fileName setName  = args[2];

    // Read surface
    Info<< "Reading surface from " << surfName << endl;
    triSurface surf(surfName);

    // Destination cellSet.
    cellSet insideCells(mesh, setName, IOobject::NO_READ);


    // Construct search engine on surface
    triSurfaceSearch querySurf(surf);

    boolList inside(querySurf.calcInside(mesh.cellCentres()));

    forAll(inside, celli)
    {
        if (inside[celli])
        {
            insideCells.insert(celli);
        }
    }


    Info<< "Selected " << returnReduce(insideCells.size(), sumOp<label>())
        << " of " << mesh.globalData().nTotalCells()
        << " cells" << nl << nl
        << "Writing selected cells to cellSet " << insideCells.name()
        << nl << nl
        << "Use this cellSet e.g. with subsetMesh : " << nl << nl
        << "    subsetMesh " << insideCells.name()
        << nl << endl;

    insideCells.write();

    Info<< "End\n" << endl;

    return 0;
}


// ************************************************************************* //
