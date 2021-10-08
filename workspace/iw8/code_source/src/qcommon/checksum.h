/*
==============
Com_FastCRC32
==============
*/

unsigned int __fastcall Com_FastCRC32(const unsigned __int8 *buffer, unsigned __int64 length, unsigned int initialVal)
{
  return ?Com_FastCRC32@@YAIPEBE_KI@Z(buffer, length, initialVal);
}

/*
==============
Com_BlockChecksumKey32
==============
*/

unsigned int __fastcall Com_BlockChecksumKey32(const void *buffer, unsigned __int64 length, unsigned int initialVal)
{
  return ?Com_BlockChecksumKey32@@YAIPEBX_KI@Z(buffer, length, initialVal);
}

/*
==============
Com_FastCRC32
==============
*/
__int64 Com_FastCRC32(const unsigned __int8 *buffer, unsigned __int64 length, unsigned int initialVal)
{
  unsigned __int64 v3; 
  unsigned int i; 
  __int64 v5; 

  v3 = length;
  for ( i = ~initialVal; v3; --v3 )
  {
    v5 = *buffer++;
    i = (i >> 8) ^ g_crc32Table[v5 ^ (unsigned __int8)i];
  }
  return ~i;
}

/*
==============
Com_BlockChecksumKey32
==============
*/
__int64 Com_BlockChecksumKey32(const void *buffer, unsigned __int64 length, unsigned int initialVal)
{
  unsigned int i; 
  __int64 v5; 

  for ( i = ~initialVal; length; --length )
  {
    v5 = *(unsigned __int8 *)buffer;
    buffer = (char *)buffer + 1;
    i = (i >> 8) ^ g_crc32Table[v5 ^ (unsigned __int8)i];
  }
  return ~i;
}

