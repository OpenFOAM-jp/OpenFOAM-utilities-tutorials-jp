/*---------------------------------------------------------------------------*\
  =========                 |
  \\      /  F ield         | OpenFOAM: The Open Source CFD Toolbox
   \\    /   O peration     |
    \\  /    A nd           | Copyright (C) 2004-2011 OpenCFD Ltd.
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
    surfaceConvert

Group
    grpSurfaceUtilities

Description
    Converts from one surface mesh format to another.

Usage
    \b surfaceConvert inputFile outputFile [OPTION]

    Options:
      - \par -clean
        Perform some surface checking/cleanup on the input surface

      - \par -scale \<scale\>
        Specify a scaling factor for writing the files

      - \par -group
        Orders faces by region

Note
    The filename extensions are used to determine the file format type.

\*---------------------------------------------------------------------------*/

#include "argList.H"
#include "fileName.H"
#include "triSurface.H"
#include "OFstream.H"
#include "OSspecific.H"
#include "Time.H"

using namespace Foam;


// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

int main(int argc, char *argv[])
{
    argList::addNote
    (
        "Convert between surface formats, using triSurface library components"
    );

    argList::noParallel();
    argList::addArgument("input", "The input surface file");
    argList::addArgument("output", "The output surface file");

    argList::addBoolOption
    (
        "clean",
        "Perform some surface checking/cleanup on the input surface"
    );
    argList::addBoolOption
    (
        "group",
        "Reorder faces into groups; one per region"
    );
    argList::addOption
    (
        "scale",
        "factor",
        "Input geometry scaling factor"
    );
    argList::addOption
    (
        "precision",
        "int",
        "Write to output with the specified precision"
    );
    argList::addOptionCompat("precision", {"writePrecision", 1812});

    argList args(argc, argv);

    {
        const unsigned prec = args.lookupOrDefault<unsigned>("precision", 0u);
        if (prec)
        {
            Info<< "Output write precision set to " << prec << endl;

            IOstream::defaultPrecision(prec);
            Sout.precision(prec);
        }
    }

    const fileName importName = args[1];
    const fileName exportName = args[2];

    if (importName == exportName)
    {
        FatalErrorInFunction
            << "Output file " << exportName << " would overwrite input file."
            << exit(FatalError);
    }

    // Check that reading/writing is supported
    if
    (
        !triSurface::canRead(importName, true)
     || !triSurface::canWriteType(exportName.ext(), true)
    )
    {
        return 1;
    }

    const scalar scaleFactor = args.opt<scalar>("scale", -1);

    Info<< "Reading : " << importName << endl;
    triSurface surf(importName, scaleFactor);

    Info<< "Read surface:" << endl;
    surf.writeStats(Info);
    Info<< endl;

    if (args.found("clean"))
    {
        Info<< "Cleaning up surface" << endl;
        surf.cleanup(true);

        Info<< "After cleaning up surface:" << endl;
        surf.writeStats(Info);
        Info<< endl;
    }

    const bool sortByRegion = args.found("group");
    if (sortByRegion)
    {
        Info<< "Reordering faces into groups; one per region." << endl;
    }
    else
    {
        Info<< "Maintaining face ordering" << endl;
    }

    Info<< "writing " << exportName;
    Info<< endl;

    surf.write(exportName, sortByRegion);

    Info<< "\nEnd\n" << endl;

    return 0;
}

// ************************************************************************* //
