/*---------------------------------------------------------------------------*\
  =========                 |
  \\      /  F ield         | OpenFOAM: The Open Source CFD Toolbox
   \\    /   O peration     |
    \\  /    A nd           |
     \\/     M anipulation  |
-------------------------------------------------------------------------------
                            | Copyright (C) 2016-2017 Wikki Ltd
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

Class
    Foam::processorFaMeshes

Description
    Container for processor mesh addressing.

Author
    Zeljko Tukovic, FSB Zagreb

SourceFiles
    processorFaMeshes.C

\*---------------------------------------------------------------------------*/

#ifndef processorFaMeshes_H
#define processorFaMeshes_H

#include "PtrList.H"
#include "fvMesh.H"
#include "faMesh.H"
#include "IOobjectList.H"
#include "labelIOList.H"

// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

namespace Foam
{

/*---------------------------------------------------------------------------*\
                     Class processorFaMeshes Declaration
\*---------------------------------------------------------------------------*/

class processorFaMeshes
{
    // Private data

        //- List of processor finite volume meshes
        const PtrList<fvMesh>& fvMeshes_;

        //- List of processor finite area meshes
        PtrList<faMesh> meshes_;

        //- List of processor point addressing lists
        PtrList<labelIOList> pointProcAddressing_;

        //- List of processor face addressing lists
        PtrList<labelIOList> edgeProcAddressing_;

        //- List of processor cell addressing lists
        PtrList<labelIOList> faceProcAddressing_;

        //- List of processor boundary addressing lists
        PtrList<labelIOList> boundaryProcAddressing_;


    // Private Member Functions

        //- Read all meshes
        void read();

        //- No copy construct
        processorFaMeshes(const processorFaMeshes&) = delete;

        //- No copy assignment
        void operator=(const processorFaMeshes&) = delete;


public:

    // Constructors

        //- Construct from components
        processorFaMeshes(const PtrList<fvMesh>& processorFvMeshes);


    // Member Functions

        //- Update the meshes based on the mesh files saved in
        //  time directories
//         fvMesh::readUpdateState readUpdate();

        //- Reconstruct point position after motion in parallel
//         void reconstructPoints(faMesh& mesh);

        PtrList<faMesh>& meshes()
        {
            return meshes_;
        }
        const PtrList<labelIOList>& pointProcAddressing() const
        {
            return pointProcAddressing_;
        }
        PtrList<labelIOList>& edgeProcAddressing()
        {
            return edgeProcAddressing_;
        }
        const PtrList<labelIOList>& faceProcAddressing() const
        {
            return faceProcAddressing_;
        }
        const PtrList<labelIOList>& boundaryProcAddressing() const
        {
            return boundaryProcAddressing_;
        }
};


// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

} // End namespace Foam

// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

#endif

// ************************************************************************* //
