/*
==============
CompareStates
==============
*/

int __fastcall CompareStates(const void *c1, const void *c2)
{
  return ?CompareStates@@YAHPEBX0@Z(c1, c2);
}

/*
==============
CompareAliases
==============
*/

int __fastcall CompareAliases(const void *c1, const void *c2)
{
  return ?CompareAliases@@YAHPEBX0@Z(c1, c2);
}

/*
==============
CompareBlendtreeAliases
==============
*/

int __fastcall CompareBlendtreeAliases(const void *c1, const void *c2)
{
  return ?CompareBlendtreeAliases@@YAHPEBX0@Z(c1, c2);
}

/*
==============
CompareAliases
==============
*/
__int64 CompareAliases(const void *c1, const void *c2)
{
  if ( *(_DWORD *)c1 >= *(_DWORD *)c2 )
    return *(_DWORD *)c1 > *(_DWORD *)c2;
  else
    return 0xFFFFFFFFi64;
}

/*
==============
CompareBlendtreeAliases
==============
*/
__int64 CompareBlendtreeAliases(const void *c1, const void *c2)
{
  if ( *(_DWORD *)c1 >= *(_DWORD *)c2 )
    return *(_DWORD *)c1 > *(_DWORD *)c2;
  else
    return 0xFFFFFFFFi64;
}

/*
==============
CompareStates
==============
*/
__int64 CompareStates(const void *c1, const void *c2)
{
  if ( *(_DWORD *)c1 >= *(_DWORD *)c2 )
    return *(_DWORD *)c1 > *(_DWORD *)c2;
  else
    return 0xFFFFFFFFi64;
}

