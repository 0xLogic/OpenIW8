/*
==============
DDL_XXH32
==============
*/
__int64 DDL_XXH32(const void *input, unsigned __int64 len, unsigned int seed)
{
  char *v3; 
  char *v4; 
  unsigned int v5; 
  unsigned int v6; 
  unsigned int v7; 
  int v8; 
  int v9; 
  int v10; 
  unsigned int v11; 
  char *i; 
  int v13; 
  unsigned __int64 v14; 
  unsigned __int64 v15; 
  int v16; 
  unsigned int v17; 

  v3 = (char *)input + len;
  v4 = (char *)input;
  if ( len < 0x10 )
  {
    v10 = seed + 374761393;
  }
  else
  {
    v5 = seed + 606290984;
    v6 = seed - 2048144777;
    v7 = seed + 1640531535;
    do
    {
      v5 = -1640531535 * __ROL4__(v5 - 2048144777 * *(_DWORD *)v4, 13);
      v6 = -1640531535 * __ROL4__(v6 - 2048144777 * *((_DWORD *)v4 + 1), 13);
      v8 = 2048144777 * *((_DWORD *)v4 + 3);
      v9 = __ROL4__(seed - 2048144777 * *((_DWORD *)v4 + 2), 13);
      v4 += 16;
      seed = -1640531535 * v9;
      v7 = -1640531535 * __ROL4__(v7 - v8, 13);
    }
    while ( v4 <= v3 - 16 );
    v10 = __ROL4__(v5, 1) + __ROL4__(v6, 7) + __ROL4__(seed, 12) + __ROL4__(v7, 18);
  }
  v11 = len + v10;
  for ( i = v4 + 4; i <= v3; v11 = 668265263 * __ROL4__(v11 - v13, 17) )
  {
    v13 = 1028477379 * *(_DWORD *)v4;
    v4 = i;
    i += 4;
  }
  v14 = 0i64;
  v15 = v3 - v4;
  if ( v4 > v3 )
    v15 = 0i64;
  if ( v15 )
  {
    do
    {
      v16 = (unsigned __int8)*v4++;
      ++v14;
      v11 = -1640531535 * __ROL4__(v11 + 374761393 * v16, 11);
    }
    while ( v14 < v15 );
  }
  v17 = -1028477379 * ((-2048144777 * (v11 ^ (v11 >> 15))) ^ ((-2048144777 * (v11 ^ (v11 >> 15))) >> 13));
  return v17 ^ HIWORD(v17);
}

/*
==============
DDL_XXH64
==============
*/
unsigned __int64 DDL_XXH64(const void *input, unsigned __int64 len, unsigned __int64 seed)
{
  char *v3; 
  char *v5; 
  unsigned __int64 v6; 
  unsigned __int64 v7; 
  unsigned __int64 v8; 
  unsigned __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  unsigned __int64 v12; 
  char *i; 
  __int64 v14; 
  __int64 v15; 
  unsigned __int64 v16; 
  unsigned __int64 v17; 
  __int64 v18; 
  unsigned __int64 v19; 

  v3 = (char *)input + len;
  v5 = (char *)input;
  if ( len < 0x20 )
  {
    v12 = seed + len + 0x27D4EB2F165667C5i64;
  }
  else
  {
    v6 = seed + 0x60EA27EEADC0B5D6i64;
    v7 = seed - 0x3D4D51C2D82B14B1i64;
    v8 = seed + 0x61C8864E7A143579i64;
    do
    {
      v6 = 0x9E3779B185EBCA87ui64 * __ROL8__(0xC2B2AE3D27D4EB4Fui64 * *(_QWORD *)v5 + v6, 31);
      v9 = 0xC2B2AE3D27D4EB4Fui64 * *((_QWORD *)v5 + 2) + seed;
      v10 = __ROL8__(0xC2B2AE3D27D4EB4Fui64 * *((_QWORD *)v5 + 1) + v7, 31);
      v11 = *((_QWORD *)v5 + 3);
      v5 += 32;
      v7 = 0x9E3779B185EBCA87ui64 * v10;
      v8 = 0x9E3779B185EBCA87ui64 * __ROL8__(0xC2B2AE3D27D4EB4Fui64 * v11 + v8, 31);
      seed = 0x9E3779B185EBCA87ui64 * __ROL8__(v9, 31);
    }
    while ( v5 <= v3 - 32 );
    v12 = len + 0x9E3779B185EBCA87ui64 * ((0x9E3779B185EBCA87ui64 * __ROL8__(0xC2B2AE3D27D4EB4Fui64 * v8, 31)) ^ (0x9E3779B185EBCA87ui64 * ((0x9E3779B185EBCA87ui64 * __ROL8__(0xC2B2AE3D27D4EB4Fui64 * seed, 31)) ^ (0x9E3779B185EBCA87ui64 * ((0x9E3779B185EBCA87ui64 * __ROL8__(0xC2B2AE3D27D4EB4Fui64 * v7, 31)) ^ (0x9E3779B185EBCA87ui64 * ((0x9E3779B185EBCA87ui64 * __ROL8__(0xC2B2AE3D27D4EB4Fui64 * v6, 31)) ^ (__ROL8__(v6, 1) + __ROL8__(v7, 7) + __ROL8__(seed, 12) + __ROL8__(v8, 18))) - 0x7A1435883D4D519Di64)) - 0x7A1435883D4D519Di64)) - 0x7A1435883D4D519Di64)) - 0x7A1435883D4D519Di64;
  }
  for ( i = v5 + 8; i <= v3; v12 = 0x9E3779B185EBCA87ui64 * __ROL8__((0x9E3779B185EBCA87ui64 * __ROL8__(0xC2B2AE3D27D4EB4Fui64 * v14, 31)) ^ v12, 27) - 0x7A1435883D4D519Di64 )
  {
    v14 = *(_QWORD *)v5;
    v5 = i;
    i += 8;
  }
  if ( v5 + 4 <= v3 )
  {
    v15 = *(unsigned int *)v5;
    v5 += 4;
    v12 = 0xC2B2AE3D27D4EB4Fui64 * __ROL8__((0x9E3779B185EBCA87ui64 * v15) ^ v12, 23) + 0x165667B19E3779F9i64;
  }
  v16 = 0i64;
  v17 = v3 - v5;
  if ( v5 > v3 )
    v17 = 0i64;
  if ( v17 )
  {
    do
    {
      v18 = (unsigned __int8)*v5++;
      ++v16;
      v12 = 0x9E3779B185EBCA87ui64 * __ROL8__((0x27D4EB2F165667C5i64 * v18) ^ v12, 11);
    }
    while ( v16 < v17 );
  }
  v19 = 0x165667B19E3779F9i64 * ((0xC2B2AE3D27D4EB4Fui64 * (v12 ^ (v12 >> 33))) ^ ((0xC2B2AE3D27D4EB4Fui64 * (v12 ^ (v12 >> 33))) >> 29));
  return v19 ^ HIDWORD(v19);
}

/*
==============
XXH_versionNumber
==============
*/
__int64 XXH_versionNumber()
{
  return 602i64;
}

