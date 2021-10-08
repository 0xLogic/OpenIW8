/*
==============
indyfs_strlcat
==============
*/

unsigned __int64 __fastcall indyfs_strlcat(char *dest, const char *src, unsigned __int64 destSize)
{
  return ?indyfs_strlcat@@YA_KPEADPEBD_K@Z(dest, src, destSize);
}

/*
==============
indyfs_strlcpy
==============
*/

unsigned __int64 __fastcall indyfs_strlcpy(char *dest, const char *src, unsigned __int64 destSize)
{
  return ?indyfs_strlcpy@@YA_KPEADPEBD_K@Z(dest, src, destSize);
}

/*
==============
indyfs_string_startswith
==============
*/

bool __fastcall indyfs_string_startswith(const char *str, const char *prefix)
{
  return ?indyfs_string_startswith@@YA_NPEBD0@Z(str, prefix);
}

/*
==============
indyfs_string_endswith
==============
*/

bool __fastcall indyfs_string_endswith(const char *str, const char *suffix)
{
  return ?indyfs_string_endswith@@YA_NPEBD0@Z(str, suffix);
}

/*
==============
indyfs_string_endswith
==============
*/
char indyfs_string_endswith(const char *str, const char *suffix)
{
  unsigned __int64 v2; 
  unsigned __int64 v4; 
  unsigned __int64 v6; 
  const char *v7; 
  const char *v8; 

  v2 = -1i64;
  v4 = -1i64;
  do
    ++v4;
  while ( str[v4] );
  do
    ++v2;
  while ( suffix[v2] );
  if ( v4 >= v2 )
  {
    v6 = 0i64;
    if ( !v2 )
      return 1;
    v7 = &suffix[v2 - 1];
    v8 = &str[v4 - v2 - (_QWORD)suffix];
    while ( v7[(_QWORD)v8] == *v7 )
    {
      ++v6;
      --v7;
      if ( v6 >= v2 )
        return 1;
    }
  }
  return 0;
}

/*
==============
indyfs_string_startswith
==============
*/
bool indyfs_string_startswith(const char *str, const char *prefix)
{
  size_t v2; 

  v2 = -1i64;
  do
    ++v2;
  while ( prefix[v2] );
  return strncmp(str, prefix, v2) == 0;
}

/*
==============
indyfs_strlcat
==============
*/
const char *indyfs_strlcat(char *dest, const char *src, unsigned __int64 destSize)
{
  char *v4; 
  const char *v5; 
  unsigned __int64 i; 
  signed __int64 v7; 
  unsigned __int64 v8; 
  __int64 v9; 

  v4 = dest;
  v5 = src;
  for ( i = destSize; i; ++v4 )
  {
    --i;
    if ( !*v4 )
      break;
  }
  v7 = v4 - dest;
  v8 = destSize - (v4 - dest);
  if ( v8 )
  {
    if ( *src )
    {
      do
      {
        if ( v8 != 1 )
        {
          *v4++ = *v5;
          --v8;
        }
        ++v5;
      }
      while ( *v5 );
    }
    *v4 = 0;
    return &v5[v7 - (_QWORD)src];
  }
  else
  {
    v9 = -1i64;
    do
      ++v9;
    while ( src[v9] );
    return (const char *)(v7 + v9);
  }
}

/*
==============
indyfs_strlcpy
==============
*/
__int64 indyfs_strlcpy(char *dest, const char *src, unsigned __int64 destSize)
{
  const char *v3; 
  unsigned __int64 v4; 
  char v5; 

  v3 = src;
  if ( !destSize )
    goto LABEL_8;
  v4 = destSize - 1;
  if ( destSize == 1 )
    goto LABEL_7;
  while ( 1 )
  {
    v5 = *v3++;
    *dest++ = v5;
    if ( !v5 )
      break;
    if ( !--v4 )
      goto LABEL_7;
  }
  if ( !v4 )
  {
LABEL_7:
    *dest = 0;
LABEL_8:
    while ( *v3++ )
      ;
  }
  return v3 - src - 1;
}

