/*---------------------------------------------------------------------------*\
  =========                 |
  \\      /  F ield         | OpenFOAM: The Open Source CFD Toolbox
   \\    /   O peration     |
    \\  /    A nd           |
     \\/     M anipulation  |
-------------------------------------------------------------------------------
                            | Copyright (C) 2012-2015 OpenFOAM Foundation
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

#include "cellSizeCalculationType.H"
#include "addToRunTimeSelectionTable.H"
#include "triSurfaceMesh.H"

// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

namespace Foam
{
    defineTypeNameAndDebug(cellSizeCalculationType, 0);
    defineRunTimeSelectionTable(cellSizeCalculationType, dictionary);
}

// * * * * * * * * * * * * * * * * Constructors  * * * * * * * * * * * * * * //

Foam::cellSizeCalculationType::cellSizeCalculationType
(
    const word& type,
    const dictionary& cellSizeCalculationTypeDict,
    const triSurfaceMesh& surface,
    const scalar& defaultCellSize
)
:
    cellSizeCalculationTypeDict_(cellSizeCalculationTypeDict),
    surface_(surface),
    defaultCellSize_(defaultCellSize)
{}


// * * * * * * * * * * * * * * * * * Selectors * * * * * * * * * * * * * * * //

Foam::autoPtr<Foam::cellSizeCalculationType> Foam::cellSizeCalculationType::New
(
    const dictionary& cellSizeCalculationTypeDict,
    const triSurfaceMesh& surface,
    const scalar& defaultCellSize
)
{
    const word calculationType
    (
        cellSizeCalculationTypeDict.get<word>("cellSizeCalculationType")
    );

    Info<< indent << "Selecting cellSizeCalculationType "
        << calculationType << endl;

    auto cstrIter = dictionaryConstructorTablePtr_->cfind(calculationType);

    if (!cstrIter.found())
    {
        FatalErrorInFunction
            << "Unknown cellSizeCalculationType type "
            << calculationType << nl << nl
            << "Valid cellSizeCalculationType types :" << endl
            << dictionaryConstructorTablePtr_->sortedToc()
            << exit(FatalError);
    }

    return autoPtr<cellSizeCalculationType>
    (
        cstrIter()(cellSizeCalculationTypeDict, surface, defaultCellSize)
    );
}


// ************************************************************************* //
