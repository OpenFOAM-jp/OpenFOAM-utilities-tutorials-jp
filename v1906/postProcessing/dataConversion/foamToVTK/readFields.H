/*---------------------------------------------------------------------------*\
  =========                 |
  \\      /  F ield         | OpenFOAM: The Open Source CFD Toolbox
   \\    /   O peration     |
    \\  /    A nd           | Copyright (C) 2004-2010, 2016-2018 OpenCFD Ltd.
     \\/     M anipulation  |
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

InClass
    Foam::readFields

Description
    Helper routines for reading a field or fields, optionally with
    a mesh subset (using fvMeshSubsetProxy).

SourceFiles
    readFields.C

\*---------------------------------------------------------------------------*/

#ifndef readFields_H
#define readFields_H

#include "fvMeshSubsetProxy.H"
#include "IOobjectList.H"
#include "PtrList.H"

// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

namespace Foam
{

//- Get the field or return nullptr
template<class GeoField>
tmp<GeoField> getField
(
    const IOobject* io,
    const typename GeoField::Mesh& mesh,
    const bool syncPar
);


//- Get the field and subset it, or return nullptr
template<class GeoField>
tmp<GeoField> getField
(
    const IOobject* io,
    const fvMeshSubsetProxy& proxy,
    const bool syncPar
);


//- Get the named field from the objects, or return nullptr.
template<class GeoField>
tmp<GeoField> getField
(
    const typename GeoField::Mesh& mesh,
    const IOobjectList& objects,
    const word& fieldName,
    const bool syncPar
);


//- Get the named field from the objects and subset it, or return nullptr
template<class GeoField>
tmp<GeoField> getField
(
    const fvMeshSubsetProxy& proxy,
    const IOobjectList& objects,
    const word& fieldName,
    const bool syncPar
);


//- Read the fields, and return as a pointer list
template<class GeoField>
PtrList<const GeoField> readFields
(
    const typename GeoField::Mesh& mesh,
    const IOobjectList& objects,
    const wordRes& selection
);


//- Read the fields, optionally subset, and return as a pointer list
template<class GeoField>
PtrList<const GeoField> readFields
(
    const fvMeshSubsetProxy& proxy,
    const IOobjectList& objects,
    const wordRes& selection
);


} // End namespace Foam

// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

#ifdef NoRepository
    #include "readFields.C"
#endif

// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

#endif

// ************************************************************************* //
