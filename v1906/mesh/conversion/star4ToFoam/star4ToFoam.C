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
    star4ToFoam

Group
    grpMeshConversionUtilities

Description
    Convert a STARCD/PROSTAR (v4) mesh into OpenFOAM format.

Usage
    \b star4ToFoam [OPTION] prostarMesh

    Options:
      - \par -ascii
        Write in ASCII format instead of binary

      - \par -scale \<factor\>
        Specify an alternative geometry scaling factor.
        The default is \b 0.001 (scale \em [mm] to \em [m]).

      - \par -solids
        Treat any solid cells present just like fluid cells.
        The default is to discard them.

Note
    Baffles are written as interfaces for later use

See also
    Foam::cellTable, Foam::meshReader and Foam::fileFormats::STARCDMeshReader

\*---------------------------------------------------------------------------*/

#include "argList.H"
#include "Time.H"
#include "STARCDMeshReader.H"
#include "OFstream.H"

using namespace Foam;

// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

int main(int argc, char *argv[])
{
    argList::addNote
    (
        "Convert STARCD/PROSTAR (v4) mesh to OpenFOAM"
    );

    argList::noParallel();
    argList::addArgument("prefix", "The prefix for the input PROSTAR files");
    argList::addBoolOption
    (
        "ascii",
        "Write in ASCII instead of binary format"
    );
    argList::addOption
    (
        "scale",
        "factor",
        "Geometry scaling factor - default is 0.001 ([mm] to [m])"
    );
    argList::addBoolOption
    (
        "solids",
        "Retain solid cells and treat like fluid cells"
    );


    argList args(argc, argv);
    Time runTime(args.rootPath(), args.caseName());

    // Binary output, unless otherwise specified
    const IOstream::streamFormat format =
    (
        args.found("ascii")
      ? IOstream::ASCII
      : IOstream::BINARY
    );

    // Increase the precision of the points data
    IOstream::defaultPrecision(max(10u, IOstream::defaultPrecision()));


    // Remove extensions and/or trailing '.'
    const fileName prefix = fileName(args[1]).lessExt();


    fileFormats::STARCDMeshReader reader
    (
        prefix,
        runTime,
        // Default rescale from [mm] to [m]
        args.opt<scalar>("scale", 0.001),
        args.found("solids")
    );


    autoPtr<polyMesh> mesh = reader.mesh(runTime);
    reader.writeMesh(mesh(), format);


    Info<< "\nEnd\n" << endl;

    return 0;
}

// ************************************************************************* //
