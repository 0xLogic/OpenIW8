/*
==============
Com_ClearErrors
==============
*/

void Com_ClearErrors(void)
{
  ?Com_ClearErrors@@YAXXZ();
}

/*
==============
Com_ClearErrors
==============
*/
void Com_ClearErrors(void)
{
  Com_ClearErrorMessage();
  Com_MapLoadErrors_ClearFinalizedCount();
}

