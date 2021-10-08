/*
==============
IWString_EqualCI
==============
*/

bool __fastcall IWString_EqualCI(const char *text0, const char *text1)
{
  return ?IWString_EqualCI@@YA_NPEBD0@Z(text0, text1);
}

/*
==============
IWString_AnyUpper
==============
*/

bool __fastcall IWString_AnyUpper(const char *text)
{
  return ?IWString_AnyUpper@@YA_NPEBD@Z(text);
}

/*
==============
IWString_CompareCI
==============
*/

int __fastcall IWString_CompareCI(const char *text0, const char *text1)
{
  return ?IWString_CompareCI@@YAHPEBD0@Z(text0, text1);
}

/*
==============
IWString_IsUNCPath
==============
*/

bool __fastcall IWString_IsUNCPath(const char *path, unsigned __int64 pathLen)
{
  return ?IWString_IsUNCPath@@YA_NPEBD_K@Z(path, pathLen);
}

/*
==============
IWString_IsUNCPath
==============
*/
bool IWString_IsUNCPath(const char *path, unsigned __int64 pathLen)
{
  return pathLen >= 2 && (*path == 47 || *path == 92) && (path[1] == 47 || path[1] == 92);
}

/*
==============
IWString_AnyUpper
==============
*/
char IWString_AnyUpper(const char *text)
{
  int v1; 

  v1 = *text;
  if ( !*text )
    return 0;
  while ( (unsigned int)(v1 - 65) >= 0x1A )
  {
    v1 = *++text;
    if ( !v1 )
      return 0;
  }
  return 1;
}

/*
==============
IWString_CompareCI
==============
*/
__int64 IWString_CompareCI(const char *text0, const char *text1)
{
  int v2; 
  const char *v3; 
  __int64 result; 
  signed __int64 v5; 
  int v6; 

  v2 = *text0;
  v3 = text0;
  result = v2 + ((unsigned int)(v2 - 65) < 0x1A ? 0x20 : 0) - ((unsigned int)(*text1 - 65) < 0x1A ? 0x20 : 0) - *text1;
  if ( !(_DWORD)result )
  {
    v5 = text1 - text0;
    while ( v2 )
    {
      v6 = (v3++)[v5 + 1];
      v2 = *v3;
      result = v2 + ((unsigned int)(v2 - 65) < 0x1A ? 0x20 : 0) - ((unsigned int)(v6 - 65) < 0x1A ? 0x20 : 0) - v6;
      if ( (_DWORD)result )
        return result;
    }
    return 0i64;
  }
  return result;
}

/*
==============
IWString_EqualCI
==============
*/
char IWString_EqualCI(const char *text0, const char *text1)
{
  int v2; 
  const char *v3; 
  signed __int64 v4; 
  int v5; 

  v2 = *text0;
  v3 = text0;
  if ( v2 + ((unsigned int)(v2 - 65) < 0x1A ? 0x20 : 0) != *text1 + ((unsigned int)(*text1 - 65) < 0x1A ? 0x20 : 0) )
    return 0;
  v4 = text1 - text0;
  while ( v2 )
  {
    v5 = (v3++)[v4 + 1];
    v2 = *v3;
    if ( v2 + ((unsigned int)(v2 - 65) < 0x1A ? 0x20 : 0) != v5 + ((unsigned int)(v5 - 65) < 0x1A ? 0x20 : 0) )
      return 0;
  }
  return 1;
}

