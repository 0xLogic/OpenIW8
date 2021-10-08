/*
==============
StringTable_HashString
==============
*/

int __fastcall StringTable_HashString(const char *string)
{
  return ?StringTable_HashString@@YAHPEBD@Z(string);
}

/*
==============
StringTable_HashString
==============
*/
__int64 StringTable_HashString(const char *string)
{
  const char *v1; 
  unsigned int v2; 
  int i; 
  int v4; 

  v1 = string;
  v2 = 0;
  for ( i = tolower(*string); i; i = tolower(v4) )
  {
    v4 = *++v1;
    v2 = i + 31 * v2;
  }
  return v2;
}

