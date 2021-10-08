/*
==============
XXHash_Hash64
==============
*/

unsigned __int64 __fastcall XXHash_Hash64(const void *data, unsigned __int64 dataSize, unsigned __int64 seed)
{
  return ?XXHash_Hash64@@YA_KPEBX_K1@Z(data, dataSize, seed);
}

/*
==============
XXHash_Hash64
==============
*/
unsigned __int64 XXHash_Hash64(const void *data, unsigned __int64 dataSize, unsigned __int64 seed)
{
  char *v3; 
  unsigned __int64 v4; 
  unsigned __int64 v5; 
  char *v6; 
  unsigned __int64 v7; 
  unsigned __int64 v8; 
  unsigned __int64 v9; 

  v3 = (char *)data + dataSize;
  v4 = seed + 0x60EA27EEADC0B5D6i64;
  v5 = seed + 0x61C8864E7A143579i64;
  v6 = (char *)data;
  v7 = seed - 0x3D4D51C2D82B14B1i64;
  if ( dataSize < 0x20 )
  {
    v8 = seed + dataSize + 0x27D4EB2F165667C5i64;
  }
  else
  {
    if ( data )
    {
      do
      {
        if ( v6 > v3 - 32 )
          break;
        v4 = 0x9E3779B185EBCA87ui64 * __ROL8__(0xC2B2AE3D27D4EB4Fui64 * *(_QWORD *)v6 + v4, 31);
        v7 = 0x9E3779B185EBCA87ui64 * __ROL8__(0xC2B2AE3D27D4EB4Fui64 * *((_QWORD *)v6 + 1) + v7, 31);
        v5 = 0x9E3779B185EBCA87ui64 * __ROL8__(0xC2B2AE3D27D4EB4Fui64 * *((_QWORD *)v6 + 3) + v5, 31);
        seed = 0x9E3779B185EBCA87ui64 * __ROL8__(0xC2B2AE3D27D4EB4Fui64 * *((_QWORD *)v6 + 2) + seed, 31);
        v6 += 32;
      }
      while ( v6 );
    }
    v8 = dataSize + 0x9E3779B185EBCA87ui64 * ((0x9E3779B185EBCA87ui64 * __ROL8__(0xC2B2AE3D27D4EB4Fui64 * v5, 31)) ^ (0x9E3779B185EBCA87ui64 * ((0x9E3779B185EBCA87ui64 * __ROL8__(0xC2B2AE3D27D4EB4Fui64 * seed, 31)) ^ (0x9E3779B185EBCA87ui64 * ((0x9E3779B185EBCA87ui64 * __ROL8__(0xC2B2AE3D27D4EB4Fui64 * v7, 31)) ^ (0x9E3779B185EBCA87ui64 * ((0x9E3779B185EBCA87ui64 * __ROL8__(0xC2B2AE3D27D4EB4Fui64 * v4, 31)) ^ (__ROL8__(v4, 1) + __ROL8__(v7, 7) + __ROL8__(seed, 12) + __ROL8__(v5, 18))) - 0x7A1435883D4D519Di64)) - 0x7A1435883D4D519Di64)) - 0x7A1435883D4D519Di64)) - 0x7A1435883D4D519Di64;
  }
  if ( v6 )
  {
    while ( v6 <= v3 - 8 )
    {
      v8 = 0x9E3779B185EBCA87ui64 * __ROL8__((0x9E3779B185EBCA87ui64 * __ROL8__(0xC2B2AE3D27D4EB4Fui64 * *(_QWORD *)v6, 31)) ^ v8, 27) - 0x7A1435883D4D519Di64;
      v6 += 8;
      if ( !v6 )
        goto LABEL_16;
    }
    while ( v6 <= v3 - 4 )
    {
      v8 = 0x165667B19E3779F9i64 - 0x3D4D51C2D82B14B1i64 * __ROL8__((0x9E3779B185EBCA87ui64 * *(unsigned int *)v6) ^ v8, 23);
      v6 += 4;
      if ( !v6 )
        goto LABEL_16;
    }
    do
    {
      if ( v6 > v3 - 1 )
        break;
      v8 = 0x9E3779B185EBCA87ui64 * __ROL8__((0x27D4EB2F165667C5i64 * (unsigned __int8)*v6++) ^ v8, 11);
    }
    while ( v6 );
  }
LABEL_16:
  v9 = 0x165667B19E3779F9i64 * ((0xC2B2AE3D27D4EB4Fui64 * (v8 ^ (v8 >> 33))) ^ ((0xC2B2AE3D27D4EB4Fui64 * (v8 ^ (v8 >> 33))) >> 29));
  return v9 ^ HIDWORD(v9);
}

