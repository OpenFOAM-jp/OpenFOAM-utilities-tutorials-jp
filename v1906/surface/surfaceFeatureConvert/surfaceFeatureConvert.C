/*---------------------------------------------------------------------------*\
  =========                 |
  \\      /  F ield         | OpenFOAM: The Open Source CFD Toolbox
   \\    /   O peration     |
    \\  /    A nd           | Copyright (C) 2004-2010, 2015 OpenCFD Ltd.
     \\/     M anipulation  |
-------------------------------------------------------------------------------
                            | Copyright (C) 2011-2015 OpenFOAM Foundation
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
    surfaceFeatureConvert

Group
    grpSurfaceUtilities

Description
    Convert between edgeMesh formats.

\*---------------------------------------------------------------------------*/

#include "argList.H"
#include "Time.H"

#include "edgeMesh.H"

using namespace Foam;

// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //


int main(int argc, char *argv[])
{
    argList::addNote
    (
        "Convert between edgeMesh formats"
    );
    argList::noParallel();
    argList::addArgument("input", "The input edge file");
    argList::addArgument("output", "The output edge file");
    argList::addOption
    (
        "scale",
        "factor",
        "Geometry scaling factor - default is 1"
    );

    argList args(argc, argv);
    Time runTime(args.rootPath(), args.caseName());

    const fileName importName = args[1];
    const fileName exportName = args[2];

    // Disable inplace editing
    if (importName == exportName)
    {
        FatalErrorInFunction
            << "Output file " << exportName << " would overwrite input file."
            << exit(FatalError);
    }

    // Check that reading/writing is supported
    if
    (
        !edgeMesh::canReadType(importName.ext(), true)
     || !edgeMesh::canWriteType(exportName.ext(), true)
    )
    {
        return 1;
    }

    edgeMesh mesh(importName);

    Info<< "\nRead edgeMesh " << importName << nl;
    mesh.writeStats(Info);
    Info<< nl
        << "\nwriting " << exportName;

    scalar scaleFactor = 0;
    if (args.readIfPresent("scale", scaleFactor) && scaleFactor > 0)
    {
        Info<< " with scaling " << scaleFactor << endl;
        mesh.scalePoints(scaleFactor);
    }
    else
    {
        Info<< " without scaling" << endl;
    }

    mesh.write(exportName);
    mesh.writeStats(Info);

    Info<< "\nEnd\n" << endl;

    return 0;
}


// ************************************************************************* //
