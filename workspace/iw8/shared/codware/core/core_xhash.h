/*
==============
DB_HASH_INTERNAL
==============
*/

unsigned __int64 __fastcall DB_HASH_INTERNAL(const char *str, unsigned __int64 i, unsigned __int64 v)
{
  return ?DB_HASH_INTERNAL@@YA_KPEBD_K1@Z(str, i, v);
}

/*
==============
DB_HASH_INTERNAL
==============
*/
unsigned __int64 DB_HASH_INTERNAL(const char *str, unsigned __int64 i, unsigned __int64 v)
{
  char v4; 
  int v5; 
  unsigned __int64 result; 
  unsigned __int64 v7; 

  if ( str && (v4 = str[i]) != 0 )
  {
    v5 = v4 + 32;
    if ( (unsigned __int8)(v4 - 65) > 0x19u )
      v5 = v4;
    return DB_HASH_INTERNAL(str, i + 1, (0x100000001B3i64 * (v ^ v5)) & 0x7FFFFFFFFFFFFFFFi64);
  }
  else
  {
    v7 = v & 0x7FFFFFFFFFFFFFFFi64;
    result = 0i64;
    if ( i )
      return v7;
  }
  return result;
}

