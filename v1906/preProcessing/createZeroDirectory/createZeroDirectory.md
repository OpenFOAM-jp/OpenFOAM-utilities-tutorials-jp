# createZeroDirectory

## Source

- [solverTemplate.C](solverTemplate.C) : 
- [boundaryInfo.C](boundaryInfo.C) : 
- [caseInfo.C](caseInfo.C) : 
- [createZeroDirectory.C](createZeroDirectory.C) : 
- [boundaryTemplates.C](boundaryTemplates.C) : 
- [boundaryTemplates.H](boundaryTemplates.H) : 
- [caseInfo.H](caseInfo.H) : 
- [solverTemplate.H](solverTemplate.H) : 
- [boundaryInfo.H](boundaryInfo.H) : 


## Discription from [createZeroDirectory.C](createZeroDirectory.C)

```
Description
    Creates a zero directory with fields appropriate for the chosen solver and
    turbulence model. Operates on both single and multi-region cases.

Usage
    The set-up is configured using a 'caseProperties' dictionary, located under
    the $FOAM_CASE/system (or system/regionName if multi-region) directory.
    This consists of a lists of initial and boundary conditions, e.g.

    \verbatim
    initialConditions
    {
        U           uniform (0 0 0);
        p           uniform 0;
    }

    boundaryConditions
    {
        topWall
        {
            category        wall;
            patches         (movingWall);
            type            noSlip;
            options
            {
                wallFunction    highReynolds;
                motion          moving;
            };
            values
            {
                U           uniform (1 0 0);
            }
        }

        walls
        {
            category        wall;
            patches         (fixedWalls);
            type            noSlip;
            options
            {
                wallFunction    highReynolds;
                motion          stationary;
            };
        }
    }
    \endverbatim


```

