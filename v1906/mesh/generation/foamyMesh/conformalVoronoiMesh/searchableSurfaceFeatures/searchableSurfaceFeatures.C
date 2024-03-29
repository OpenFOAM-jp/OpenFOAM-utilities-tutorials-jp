/*---------------------------------------------------------------------------*\
  =========                 |
  \\      /  F ield         | OpenFOAM: The Open Source CFD Toolbox
   \\    /   O peration     |
    \\  /    A nd           |
     \\/     M anipulation  |
-------------------------------------------------------------------------------
                            | Copyright (C) 2013-2015 OpenFOAM Foundation
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

#include "searchableSurfaceFeatures.H"

// * * * * * * * * * * * * * * Static Data Members * * * * * * * * * * * * * //

namespace Foam
{
defineTypeNameAndDebug(searchableSurfaceFeatures, 0);
defineRunTimeSelectionTable(searchableSurfaceFeatures, dict);
}


// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

Foam::autoPtr<Foam::searchableSurfaceFeatures>
Foam::searchableSurfaceFeatures::New
(
    const searchableSurface& surface,
    const dictionary& dict
)
{
    const word featuresType = surface.type() + "Features";

    auto cstrIter = dictConstructorTablePtr_->cfind(featuresType);

    if (!cstrIter.found())
    {
        FatalErrorInFunction
            << "Unknown searchableSurfaceFeatures type "
            << featuresType << nl << nl
            << "Valid searchableSurfaceFeatures types :" << endl
            << dictConstructorTablePtr_->sortedToc()
            << exit(FatalError);
    }

    return autoPtr<searchableSurfaceFeatures>(cstrIter()(surface, dict));
}


// * * * * * * * * * * * * * * * * Constructors  * * * * * * * * * * * * * * //

Foam::searchableSurfaceFeatures::searchableSurfaceFeatures
(
    const searchableSurface& surface,
    const dictionary& dict
)
:
    surface_(surface),
    dict_(dict)
{}


// * * * * * * * * * * * * * * * * Destructor  * * * * * * * * * * * * * * * //

Foam::searchableSurfaceFeatures::~searchableSurfaceFeatures()
{}


// * * * * * * * * * * * * * * * Member Functions  * * * * * * * * * * * * * //


// ************************************************************************* //
