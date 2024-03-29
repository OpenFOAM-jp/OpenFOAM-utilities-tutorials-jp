/*---------------------------------------------------------------------------*\
  =========                 |
  \\      /  F ield         | OpenFOAM: The Open Source CFD Toolbox
   \\    /   O peration     |
    \\  /    A nd           | Copyright (C) 2009-2011 OpenCFD Ltd.
     \\/     M anipulation  |
-------------------------------------------------------------------------------
                            | Copyright (C) 2012-2017 OpenFOAM Foundation
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

\*---------------------------------------------------------------------------*/

#include "initialPointsMethod.H"
#include "addToRunTimeSelectionTable.H"

// * * * * * * * * * * * * * * Static Data Members * * * * * * * * * * * * * //

namespace Foam
{
defineTypeNameAndDebug(initialPointsMethod, 0);
defineRunTimeSelectionTable(initialPointsMethod, dictionary);
}

// * * * * * * * * * * * * * * * * Constructors  * * * * * * * * * * * * * * //

Foam::initialPointsMethod::initialPointsMethod
(
    const word& type,
    const dictionary& initialPointsDict,
    const Time& runTime,
    Random& rndGen,
    const conformationSurfaces& geometryToConformTo,
    const cellShapeControl& cellShapeControls,
    const autoPtr<backgroundMeshDecomposition>& decomposition
)
:
    dictionary(initialPointsDict),
    runTime_(runTime),
    rndGen_(rndGen),
    geometryToConformTo_(geometryToConformTo),
    cellShapeControls_(cellShapeControls),
    decomposition_(decomposition),
    detailsDict_(optionalSubDict(type + "Coeffs")),
    minimumSurfaceDistanceCoeffSqr_
    (
        sqr
        (
            initialPointsDict.get<scalar>("minimumSurfaceDistanceCoeff")
        )
    ),
    fixInitialPoints_(initialPointsDict.get<bool>("fixInitialPoints"))
{}


// * * * * * * * * * * * * * * * * * Selectors * * * * * * * * * * * * * * * //

Foam::autoPtr<Foam::initialPointsMethod> Foam::initialPointsMethod::New
(
    const dictionary& initialPointsDict,
    const Time& runTime,
    Random& rndGen,
    const conformationSurfaces& geometryToConformTo,
    const cellShapeControl& cellShapeControls,
    const autoPtr<backgroundMeshDecomposition>& decomposition
)
{
    const word methodName(initialPointsDict.get<word>("initialPointsMethod"));

    Info<< nl << "Selecting initialPointsMethod "
        << methodName << endl;

    auto cstrIter = dictionaryConstructorTablePtr_->cfind(methodName);

    if (!cstrIter.found())
    {
        FatalErrorInFunction
            << "Unknown initialPointsMethod type "
            << methodName << nl << nl
            << "Valid initialPointsMethod types :" << endl
            << dictionaryConstructorTablePtr_->sortedToc()
            << exit(FatalError);
    }

    return
        autoPtr<initialPointsMethod>
        (
            cstrIter()
            (
                initialPointsDict,
                runTime,
                rndGen,
                geometryToConformTo,
                cellShapeControls,
                decomposition
            )
        );
}


// ************************************************************************* //
