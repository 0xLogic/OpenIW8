/*
==============
I_StartsWith
==============
*/

bool __fastcall I_StartsWith(const char *str, const char *prefix)
{
  return ?I_StartsWith@@YA_NPEBD0@Z(str, prefix);
}

/*
==============
I_EndsWithi
==============
*/

bool __fastcall I_EndsWithi(const char *str, const char *suffix)
{
  return ?I_EndsWithi@@YA_NPEBD0@Z(str, suffix);
}

/*
==============
I_atoui64_hex
==============
*/

unsigned __int64 __fastcall I_atoui64_hex(const char *str)
{
  return ?I_atoui64_hex@@YA_KPEBD@Z(str);
}

/*
==============
I_atoi64
==============
*/

__int64 __cdecl I_atoi64(const char *String)
{
  return ?I_atoi64@@YA_JPEBD@Z(String);
}

/*
==============
Com_vsprintfPos
==============
*/

int __fastcall Com_vsprintfPos(char *dest, const unsigned __int64 destSize, int *destPos, const char *fmt, char *args)
{
  return ?Com_vsprintfPos@@YAHPEIAD_KPEIAHPEIBDPEAD@Z(dest, destSize, destPos, fmt, args);
}

/*
==============
I_StartsAndEndsWithi
==============
*/

bool __fastcall I_StartsAndEndsWithi(const char *str, const char *prefix, const char *suffix)
{
  return ?I_StartsAndEndsWithi@@YA_NPEBD00@Z(str, prefix, suffix);
}

/*
==============
I_StartsAndEndsWith
==============
*/

bool __fastcall I_StartsAndEndsWith(const char *str, const char *prefix, const char *suffix)
{
  return ?I_StartsAndEndsWith@@YA_NPEBD00@Z(str, prefix, suffix);
}

/*
==============
I_StartsWithi
==============
*/

bool __fastcall I_StartsWithi(const char *str, const char *prefix)
{
  return ?I_StartsWithi@@YA_NPEBD0@Z(str, prefix);
}

/*
==============
Com_vsprintfPos_truncate
==============
*/

int __fastcall Com_vsprintfPos_truncate(char *dest, const unsigned __int64 destSize, int *destPos, const char *fmt, char *args)
{
  return ?Com_vsprintfPos_truncate@@YAHPEIAD_KPEIAHPEIBDPEAD@Z(dest, destSize, destPos, fmt, args);
}

/*
==============
Com_sprintfPos
==============
*/

int Com_sprintfPos(char *dest, const unsigned __int64 destSize, int *destPos, const char *fmt, ...)
{
  return ?Com_sprintfPos@@YAHPEIAD_KPEIAHPEIBDZZ(dest, destSize, destPos, fmt);
}

/*
==============
I_EndsWith
==============
*/

bool __fastcall I_EndsWith(const char *str, const char *suffix)
{
  return ?I_EndsWith@@YA_NPEBD0@Z(str, suffix);
}

/*
==============
I_atoui64
==============
*/

unsigned __int64 __fastcall I_atoui64(const char *str)
{
  return ?I_atoui64@@YA_KPEBD@Z(str);
}

/*
==============
Com_sprintfPos_truncate
==============
*/

int Com_sprintfPos_truncate(char *dest, const unsigned __int64 destSize, int *destPos, const char *fmt, ...)
{
  return ?Com_sprintfPos_truncate@@YAHPEIAD_KPEIAHPEIBDZZ(dest, destSize, destPos, fmt);
}

/*
==============
Com_sprintfPos
==============
*/
__int64 Com_sprintfPos(char *dest, const unsigned __int64 destSize, int *destPos, const char *fmt, ...)
{
  __int64 v8; 
  __int64 v9; 
  unsigned int v10; 
  __int64 v12; 
  va_list va; 

  va_start(va, fmt);
  if ( *destPos < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_string.cpp", 37, ASSERT_TYPE_ASSERT, "(*destPos >= 0)", (const char *)&queryFormat, "*destPos >= 0") )
    __debugbreak();
  if ( *destPos >= (unsigned int)(destSize - 1) )
  {
    LODWORD(v12) = *destPos;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_string.cpp", 38, ASSERT_TYPE_ASSERT, "(unsigned)( *destPos ) < (unsigned)( destSize - 1 )", "*destPos doesn't index destSize - 1\n\t%i not in [0, %i)", v12, destSize - 1) )
      __debugbreak();
  }
  v8 = *destPos;
  v9 = destSize - v8;
  v10 = Com_vsprintf(&dest[v8], destSize - v8, fmt, va);
  dest[destSize - 1] = 0;
  if ( v10 == v9 || v10 == -1 )
  {
    *destPos = truncate_cast<int,unsigned __int64>(destSize - 1);
    return v10;
  }
  else
  {
    *destPos += v10;
    return v10;
  }
}

/*
==============
Com_sprintfPos_truncate
==============
*/
__int64 Com_sprintfPos_truncate(char *dest, const unsigned __int64 destSize, int *destPos, const char *fmt, ...)
{
  unsigned __int64 v4; 
  unsigned __int64 v6; 
  char *v7; 
  unsigned __int64 v9; 
  unsigned int v10; 
  va_list va; 

  va_start(va, fmt);
  v4 = *destPos;
  v6 = destSize - 1;
  v7 = &dest[destSize - 1];
  if ( v4 < destSize - 1 )
  {
    v9 = destSize - v4;
    v10 = Com_vsprintf_truncate(&dest[v4], v9, v9, fmt, va);
    *v7 = 0;
    if ( v10 == v9 || v10 == -1 )
    {
      *destPos = truncate_cast<int,unsigned __int64>(v6);
      return v10;
    }
    else
    {
      *destPos += v10;
      return v10;
    }
  }
  else
  {
    *v7 = 0;
    return 0xFFFFFFFFi64;
  }
}

/*
==============
Com_vsprintfPos
==============
*/
__int64 Com_vsprintfPos(char *dest, const unsigned __int64 destSize, int *destPos, const char *fmt, char *args)
{
  __int64 v9; 
  __int64 v10; 
  unsigned int v11; 
  __int64 v13; 
  int v14; 

  if ( *destPos < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_string.cpp", 37, ASSERT_TYPE_ASSERT, "(*destPos >= 0)", (const char *)&queryFormat, "*destPos >= 0") )
    __debugbreak();
  if ( *destPos >= (unsigned int)(destSize - 1) )
  {
    v14 = destSize - 1;
    LODWORD(v13) = *destPos;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_string.cpp", 38, ASSERT_TYPE_ASSERT, "(unsigned)( *destPos ) < (unsigned)( destSize - 1 )", "*destPos doesn't index destSize - 1\n\t%i not in [0, %i)", v13, v14) )
      __debugbreak();
  }
  v9 = *destPos;
  v10 = destSize - v9;
  v11 = Com_vsprintf(&dest[v9], destSize - v9, fmt, args);
  dest[destSize - 1] = 0;
  if ( v11 == v10 || v11 == -1 )
    *destPos = truncate_cast<int,unsigned __int64>(destSize - 1);
  else
    *destPos += v11;
  return v11;
}

/*
==============
Com_vsprintfPos_truncate
==============
*/
__int64 Com_vsprintfPos_truncate(char *dest, const unsigned __int64 destSize, int *destPos, const char *fmt, char *args)
{
  unsigned __int64 v5; 
  unsigned __int64 v6; 
  char *v7; 
  unsigned __int64 v10; 
  unsigned int v11; 

  v5 = *destPos;
  v6 = destSize - 1;
  v7 = &dest[destSize - 1];
  if ( v5 < destSize - 1 )
  {
    v10 = destSize - v5;
    v11 = Com_vsprintf_truncate(&dest[v5], v10, v10, fmt, args);
    *v7 = 0;
    if ( v11 == v10 || v11 == -1 )
      *destPos = truncate_cast<int,unsigned __int64>(v6);
    else
      *destPos += v11;
    return v11;
  }
  else
  {
    *v7 = 0;
    return 0xFFFFFFFFi64;
  }
}

/*
==============
I_EndsWith
==============
*/
bool I_EndsWith(const char *str, const char *suffix)
{
  __int64 v2; 
  __int64 v3; 

  if ( !str )
    return 0;
  if ( !suffix )
    return 0;
  v2 = -1i64;
  v3 = -1i64;
  do
    ++v3;
  while ( str[v3] );
  do
    ++v2;
  while ( suffix[v2] );
  return (int)v2 <= (int)v3 && I_strncmp(&str[(int)v3 - (__int64)(int)v2], suffix, (int)v2) == 0;
}

/*
==============
I_EndsWithi
==============
*/
bool I_EndsWithi(const char *str, const char *suffix)
{
  __int64 v2; 
  __int64 v3; 

  if ( !str )
    return 0;
  if ( !suffix )
    return 0;
  v2 = -1i64;
  v3 = -1i64;
  do
    ++v3;
  while ( str[v3] );
  do
    ++v2;
  while ( suffix[v2] );
  return (int)v2 <= (int)v3 && I_strnicmp(&str[(int)v3 - (__int64)(int)v2], suffix, (int)v2) == 0;
}

/*
==============
I_StartsAndEndsWith
==============
*/
bool I_StartsAndEndsWith(const char *str, const char *prefix, const char *suffix)
{
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 

  if ( !str )
    return 0;
  if ( !prefix )
    return 0;
  v5 = -1i64;
  v6 = -1i64;
  do
    ++v6;
  while ( prefix[v6] );
  if ( I_strncmp(str, prefix, (int)v6) )
    return 0;
  if ( !suffix )
    return 0;
  v7 = -1i64;
  do
    ++v7;
  while ( str[v7] );
  do
    ++v5;
  while ( suffix[v5] );
  return (int)v5 <= (int)v7 && !I_strncmp(&str[(int)v7 - (__int64)(int)v5], suffix, (int)v5);
}

/*
==============
I_StartsAndEndsWithi
==============
*/
bool I_StartsAndEndsWithi(const char *str, const char *prefix, const char *suffix)
{
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 

  if ( !str )
    return 0;
  if ( !prefix )
    return 0;
  v5 = -1i64;
  v6 = -1i64;
  do
    ++v6;
  while ( prefix[v6] );
  if ( I_strnicmp(str, prefix, (int)v6) )
    return 0;
  if ( !suffix )
    return 0;
  v7 = -1i64;
  do
    ++v7;
  while ( str[v7] );
  do
    ++v5;
  while ( suffix[v5] );
  return (int)v5 <= (int)v7 && !I_strnicmp(&str[(int)v7 - (__int64)(int)v5], suffix, (int)v5);
}

/*
==============
I_StartsWith
==============
*/
bool I_StartsWith(const char *str, const char *prefix)
{
  __int64 v2; 

  if ( !str || !prefix )
    return 0;
  v2 = -1i64;
  do
    ++v2;
  while ( prefix[v2] );
  return I_strncmp(str, prefix, (int)v2) == 0;
}

/*
==============
I_StartsWithi
==============
*/
bool I_StartsWithi(const char *str, const char *prefix)
{
  __int64 v2; 

  if ( !str || !prefix )
    return 0;
  v2 = -1i64;
  do
    ++v2;
  while ( prefix[v2] );
  return I_strnicmp(str, prefix, (int)v2) == 0;
}

/*
==============
I_atoi64
==============
*/

__int64 __cdecl I_atoi64(const char *String)
{
  return _atoi64(String);
}

/*
==============
I_atoui64
==============
*/
unsigned __int64 I_atoui64(const char *str)
{
  return _strtoui64(str, NULL, 10);
}

/*
==============
I_atoui64_hex
==============
*/
unsigned __int64 I_atoui64_hex(const char *str)
{
  return _strtoui64(str, NULL, 16);
}

