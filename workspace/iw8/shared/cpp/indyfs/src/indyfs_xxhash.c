/*
==============
indyfs_XXH32
==============
*/
__int64 indyfs_XXH32(const void *input, unsigned __int64 len, unsigned int seed)
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
indyfs_XXH32_canonicalFromHash
==============
*/
void indyfs_XXH32_canonicalFromHash(indyfs_XXH32_canonical_t *dst, unsigned int hash)
{
  *dst = (indyfs_XXH32_canonical_t)_byteswap_ulong(hash);
}

/*
==============
indyfs_XXH32_copyState
==============
*/
void indyfs_XXH32_copyState(indyfs_XXH32_state_s *dstState, const indyfs_XXH32_state_s *srcState)
{
  *dstState = *srcState;
}

/*
==============
indyfs_XXH32_createState
==============
*/
indyfs_XXH32_state_s *indyfs_XXH32_createState()
{
  return (indyfs_XXH32_state_s *)malloc(0x30ui64);
}

/*
==============
indyfs_XXH32_digest
==============
*/
__int64 indyfs_XXH32_digest(const indyfs_XXH32_state_s *state_in)
{
  unsigned int *mem32; 
  unsigned int *v2; 
  int v3; 
  unsigned int v4; 
  unsigned int *i; 
  int v6; 
  unsigned __int64 v7; 
  unsigned __int64 v8; 
  int v9; 
  unsigned int v10; 

  mem32 = state_in->mem32;
  v2 = (unsigned int *)((char *)state_in->mem32 + state_in->memsize);
  if ( state_in->large_len )
    v3 = __ROL4__(state_in->v3, 12) + __ROL4__(state_in->v1, 1) + __ROL4__(state_in->v2, 7) + __ROL4__(state_in->v4, 18);
  else
    v3 = state_in->v3 + 374761393;
  v4 = state_in->total_len_32 + v3;
  for ( i = &state_in->mem32[1]; i <= v2; v4 = 668265263 * __ROL4__(v4 - v6, 17) )
  {
    v6 = 1028477379 * *mem32;
    ++i;
    ++mem32;
  }
  v7 = 0i64;
  v8 = (char *)v2 - (char *)mem32;
  if ( mem32 > v2 )
    v8 = 0i64;
  if ( v8 )
  {
    do
    {
      v9 = *(unsigned __int8 *)mem32;
      mem32 = (unsigned int *)((char *)mem32 + 1);
      ++v7;
      v4 = -1640531535 * __ROL4__(v4 + 374761393 * v9, 11);
    }
    while ( v7 < v8 );
  }
  v10 = -1028477379 * ((-2048144777 * (v4 ^ (v4 >> 15))) ^ ((-2048144777 * (v4 ^ (v4 >> 15))) >> 13));
  return v10 ^ HIWORD(v10);
}

/*
==============
indyfs_XXH32_freeState
==============
*/
__int64 indyfs_XXH32_freeState(indyfs_XXH32_state_s *statePtr)
{
  free(statePtr);
  return 0i64;
}

/*
==============
indyfs_XXH32_hashFromCanonical
==============
*/
__int64 indyfs_XXH32_hashFromCanonical(const indyfs_XXH32_canonical_t *src)
{
  return _byteswap_ulong((unsigned int)*src);
}

/*
==============
indyfs_XXH32_reset
==============
*/
__int64 indyfs_XXH32_reset(indyfs_XXH32_state_s *statePtr, unsigned int seed)
{
  __int64 result; 
  indyfs_XXH32_state_s v5; 

  v5.v3 = seed;
  *(_QWORD *)&v5.total_len_32 = 0i64;
  v5.memsize = 0;
  v5.v1 = seed + 606290984;
  v5.v2 = seed - 2048144777;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  v5.v4 = seed + 1640531535;
  result = 0i64;
  *(_OWORD *)v5.mem32 = _XMM0;
  *statePtr = v5;
  return result;
}

/*
==============
indyfs_XXH32_update
==============
*/
__int64 indyfs_XXH32_update(indyfs_XXH32_state_s *state_in, const void *input, unsigned __int64 len)
{
  char *v4; 
  __int64 memsize; 
  char *v6; 
  int v7; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 
  unsigned int v12; 
  unsigned int v13; 
  unsigned int v14; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 

  v4 = (char *)input + len;
  memsize = state_in->memsize;
  v6 = (char *)input;
  v7 = len;
  state_in->total_len_32 += len;
  state_in->large_len |= len >= 0x10 || state_in->total_len_32 >= 0x10;
  if ( memsize + len >= 0x10 )
  {
    if ( (_DWORD)memsize )
    {
      memcpy_0((char *)state_in->mem32 + memsize, input, (unsigned int)(16 - memsize));
      v8 = 16 - state_in->memsize;
      v9 = state_in->v2;
      state_in->v1 = -1640531535 * __ROL4__(state_in->v1 - 2048144777 * state_in->mem32[0], 13);
      v10 = -1640531535 * __ROL4__(v9 - 2048144777 * state_in->mem32[1], 13);
      v11 = state_in->v3;
      state_in->v2 = v10;
      v12 = -1640531535 * __ROL4__(v11 - 2048144777 * state_in->mem32[2], 13);
      v13 = state_in->v4;
      state_in->v3 = v12;
      v14 = 2048144777 * state_in->mem32[3];
      state_in->memsize = 0;
      state_in->v4 = -1640531535 * __ROL4__(v13 - v14, 13);
      v6 += v8;
    }
    if ( v6 <= v4 - 16 )
    {
      v15 = state_in->v1;
      v16 = state_in->v2;
      v17 = state_in->v3;
      v18 = state_in->v4;
      do
      {
        v15 = -1640531535 * __ROL4__(v15 - 2048144777 * *(_DWORD *)v6, 13);
        v16 = -1640531535 * __ROL4__(v16 - 2048144777 * *((_DWORD *)v6 + 1), 13);
        v19 = 2048144777 * *((_DWORD *)v6 + 3);
        v20 = __ROL4__(v17 - 2048144777 * *((_DWORD *)v6 + 2), 13);
        v6 += 16;
        v17 = -1640531535 * v20;
        v18 = -1640531535 * __ROL4__(v18 - v19, 13);
      }
      while ( v6 <= v4 - 16 );
      state_in->v1 = v15;
      state_in->v2 = v16;
      state_in->v3 = v17;
      state_in->v4 = v18;
    }
    if ( v6 < v4 )
    {
      memcpy_0(state_in->mem32, v6, v4 - v6);
      state_in->memsize = (_DWORD)v4 - (_DWORD)v6;
    }
  }
  else
  {
    memcpy_0((char *)state_in->mem32 + memsize, input, len);
    state_in->memsize += v7;
  }
  return 0i64;
}

/*
==============
indyfs_XXH64
==============
*/
unsigned __int64 indyfs_XXH64(const void *input, unsigned __int64 len, unsigned __int64 seed)
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
indyfs_XXH64_canonicalFromHash
==============
*/
void indyfs_XXH64_canonicalFromHash(indyfs_XXH64_canonical_t *dst, unsigned __int64 hash)
{
  *dst = (indyfs_XXH64_canonical_t)_byteswap_uint64(hash);
}

/*
==============
indyfs_XXH64_copyState
==============
*/
void indyfs_XXH64_copyState(indyfs_XXH64_state_s *dstState, const indyfs_XXH64_state_s *srcState)
{
  *dstState = *srcState;
}

/*
==============
indyfs_XXH64_createState
==============
*/
indyfs_XXH64_state_s *indyfs_XXH64_createState()
{
  return (indyfs_XXH64_state_s *)malloc(0x58ui64);
}

/*
==============
indyfs_XXH64_digest
==============
*/
unsigned __int64 indyfs_XXH64_digest(const indyfs_XXH64_state_s *state_in)
{
  unsigned __int64 *mem64; 
  unsigned __int64 total_len; 
  unsigned __int64 *v3; 
  unsigned __int64 v4; 
  unsigned __int64 *i; 
  unsigned __int64 v6; 
  __int64 v7; 
  unsigned __int64 v8; 
  unsigned __int64 v9; 
  __int64 v10; 
  unsigned __int64 v11; 

  mem64 = state_in->mem64;
  total_len = state_in->total_len;
  v3 = (unsigned __int64 *)((char *)state_in->mem64 + state_in->memsize);
  if ( state_in->total_len < 0x20 )
    v4 = state_in->v3 + total_len + 0x27D4EB2F165667C5i64;
  else
    v4 = total_len + 0x9E3779B185EBCA87ui64 * ((0x9E3779B185EBCA87ui64 * __ROL8__(0xC2B2AE3D27D4EB4Fui64 * state_in->v4, 31)) ^ (0x9E3779B185EBCA87ui64 * ((0x9E3779B185EBCA87ui64 * __ROL8__(0xC2B2AE3D27D4EB4Fui64 * state_in->v3, 31)) ^ (0x9E3779B185EBCA87ui64 * ((0x9E3779B185EBCA87ui64 * __ROL8__(0xC2B2AE3D27D4EB4Fui64 * state_in->v2, 31)) ^ (0x9E3779B185EBCA87ui64 * ((0x9E3779B185EBCA87ui64 * __ROL8__(0xC2B2AE3D27D4EB4Fui64 * state_in->v1, 31)) ^ (__ROL8__(state_in->v1, 1) + __ROL8__(state_in->v2, 7) + __ROL8__(state_in->v3, 12) + __ROL8__(state_in->v4, 18))) - 0x7A1435883D4D519Di64)) - 0x7A1435883D4D519Di64)) - 0x7A1435883D4D519Di64)) - 0x7A1435883D4D519Di64;
  for ( i = &state_in->mem64[1]; i <= v3; v4 = 0x9E3779B185EBCA87ui64 * __ROL8__((0x9E3779B185EBCA87ui64 * __ROL8__(v6, 31)) ^ v4, 27) - 0x7A1435883D4D519Di64 )
  {
    ++i;
    v6 = 0xC2B2AE3D27D4EB4Fui64 * *mem64++;
  }
  if ( (unsigned __int64 *)((char *)mem64 + 4) <= v3 )
  {
    v7 = *(unsigned int *)mem64;
    mem64 = (unsigned __int64 *)((char *)mem64 + 4);
    v4 = 0xC2B2AE3D27D4EB4Fui64 * __ROL8__((0x9E3779B185EBCA87ui64 * v7) ^ v4, 23) + 0x165667B19E3779F9i64;
  }
  v8 = 0i64;
  v9 = (char *)v3 - (char *)mem64;
  if ( mem64 > v3 )
    v9 = 0i64;
  if ( v9 )
  {
    do
    {
      v10 = *(unsigned __int8 *)mem64;
      mem64 = (unsigned __int64 *)((char *)mem64 + 1);
      ++v8;
      v4 = 0x9E3779B185EBCA87ui64 * __ROL8__((0x27D4EB2F165667C5i64 * v10) ^ v4, 11);
    }
    while ( v8 < v9 );
  }
  v11 = 0x165667B19E3779F9i64 * ((0xC2B2AE3D27D4EB4Fui64 * (v4 ^ (v4 >> 33))) ^ ((0xC2B2AE3D27D4EB4Fui64 * (v4 ^ (v4 >> 33))) >> 29));
  return v11 ^ HIDWORD(v11);
}

/*
==============
indyfs_XXH64_freeState
==============
*/
__int64 indyfs_XXH64_freeState(indyfs_XXH64_state_s *statePtr)
{
  free(statePtr);
  return 0i64;
}

/*
==============
indyfs_XXH64_hashFromCanonical
==============
*/
unsigned __int64 indyfs_XXH64_hashFromCanonical(const indyfs_XXH64_canonical_t *src)
{
  return _byteswap_uint64((unsigned __int64)*src);
}

/*
==============
indyfs_XXH64_reset
==============
*/

__int64 __fastcall indyfs_XXH64_reset(indyfs_XXH64_state_s *statePtr, unsigned __int64 seed, double _XMM2_8)
{
  __int64 result; 
  __m256i v7; 
  __m256i v8; 
  double v9; 

  v7.m256i_i64[3] = seed;
  v7.m256i_i64[0] = 0i64;
  v7.m256i_i64[1] = seed + 0x60EA27EEADC0B5D6i64;
  v7.m256i_i64[2] = seed - 0x3D4D51C2D82B14B1i64;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&v8.m256i_u64[2] = _XMM0;
  *(__m256i *)&statePtr->total_len = v7;
  *(_OWORD *)v8.m256i_i8 = seed + 0x61C8864E7A143579i64;
  result = 0i64;
  *(__m256i *)&statePtr->v4 = v8;
  __asm { vpxor   xmm2, xmm2, xmm2 }
  *(_OWORD *)&statePtr->mem64[3] = _XMM2;
  *(double *)&statePtr->reserved[1] = v9;
  return result;
}

/*
==============
indyfs_XXH64_update
==============
*/
__int64 indyfs_XXH64_update(indyfs_XXH64_state_s *state_in, const void *input, unsigned __int64 len)
{
  char *v4; 
  __int64 memsize; 
  int v6; 
  char *v7; 
  unsigned int v9; 
  unsigned __int64 v10; 
  unsigned __int64 v11; 
  unsigned __int64 v12; 
  unsigned __int64 v13; 
  unsigned __int64 v14; 
  unsigned __int64 v15; 
  __int64 v16; 
  __int64 v17; 

  v4 = (char *)input + len;
  memsize = state_in->memsize;
  v6 = len;
  v7 = (char *)input;
  state_in->total_len += len;
  if ( memsize + len >= 0x20 )
  {
    if ( (_DWORD)memsize )
    {
      memcpy_0((char *)state_in->mem64 + memsize, input, (unsigned int)(32 - memsize));
      v9 = 32 - state_in->memsize;
      state_in->v1 = 0x9E3779B185EBCA87ui64 * __ROL8__(state_in->v1 - 0x3D4D51C2D82B14B1i64 * state_in->mem64[0], 31);
      state_in->v2 = 0x9E3779B185EBCA87ui64 * __ROL8__(state_in->v2 - 0x3D4D51C2D82B14B1i64 * state_in->mem64[1], 31);
      state_in->v3 = 0x9E3779B185EBCA87ui64 * __ROL8__(state_in->v3 - 0x3D4D51C2D82B14B1i64 * state_in->mem64[2], 31);
      v10 = 0xC2B2AE3D27D4EB4Fui64 * state_in->mem64[3];
      state_in->memsize = 0;
      state_in->v4 = 0x9E3779B185EBCA87ui64 * __ROL8__(state_in->v4 + v10, 31);
      v7 += v9;
    }
    if ( v7 + 32 <= v4 )
    {
      v11 = state_in->v1;
      v12 = state_in->v2;
      v13 = state_in->v3;
      v14 = state_in->v4;
      do
      {
        v11 = 0x9E3779B185EBCA87ui64 * __ROL8__(0xC2B2AE3D27D4EB4Fui64 * *(_QWORD *)v7 + v11, 31);
        v15 = 0xC2B2AE3D27D4EB4Fui64 * *((_QWORD *)v7 + 2) + v13;
        v16 = __ROL8__(0xC2B2AE3D27D4EB4Fui64 * *((_QWORD *)v7 + 1) + v12, 31);
        v17 = *((_QWORD *)v7 + 3);
        v7 += 32;
        v12 = 0x9E3779B185EBCA87ui64 * v16;
        v14 = 0x9E3779B185EBCA87ui64 * __ROL8__(0xC2B2AE3D27D4EB4Fui64 * v17 + v14, 31);
        v13 = 0x9E3779B185EBCA87ui64 * __ROL8__(v15, 31);
      }
      while ( v7 <= v4 - 32 );
      state_in->v1 = v11;
      state_in->v2 = v12;
      state_in->v3 = v13;
      state_in->v4 = v14;
    }
    if ( v7 < v4 )
    {
      memcpy_0(state_in->mem64, v7, v4 - v7);
      state_in->memsize = (_DWORD)v4 - (_DWORD)v7;
    }
    return 0i64;
  }
  else
  {
    memcpy_0((char *)state_in->mem64 + memsize, input, len);
    state_in->memsize += v6;
    return 0i64;
  }
}

/*
==============
indyfs_XXH_versionNumber
==============
*/
__int64 indyfs_XXH_versionNumber()
{
  return 602i64;
}

