# foamRestoreFields

[source](github.com/OpenFOAM-jp/OpenFOAM-utilities-tutorials-jp/blob/master/v1906/miscellaneous/foamRestoreFields/foamRestoreFields.C/foamRestoreFields.C)

```
Description
    Restore field names by removing the ending.
    The fields are selected automatically or can be specified as optional
    command arguments.

    The operation 'mean' renames files ending with 'Mean' and makes
    a backup of existing names, using the '.orig' ending.

    The operation 'orig' renames files ending with '.orig'.

Usage
    \b foamRestoreFields [OPTION]

    Options:
      - \par -method mean | orig
        The renaming method.

      - \par -processor
        Use processor directories, taking information from processor0/

      - \par -dry-run
        Test without actually moving/renaming files.

      - \par -verbose
        Additional verbosity.


```

