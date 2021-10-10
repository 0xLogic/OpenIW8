/*
==============
fast_s_mp_sqr
==============
*/
int fast_s_mp_sqr(mp_int *a, mp_int *b)
{
  mp_int *v2; 
  int v3; 
  mp_int *v4; 
  int result; 
  unsigned __int64 v6; 
  unsigned __int64 v7; 
  int v8; 
  __int64 v9; 
  int used; 
  __int64 v11; 
  unsigned int *dp; 
  int v13; 
  int v14; 
  __int64 v15; 
  int v16; 
  unsigned int *v17; 
  unsigned int *v18; 
  int v19; 
  __int64 v20; 
  __int64 v21; 
  __int64 v22; 
  unsigned __int64 v23; 
  int v24; 
  int v25; 
  int v26; 
  unsigned int *v27; 
  __int64 v28; 
  int v29; 
  __int64 v38; 
  int v39; 
  __int64 i; 
  int v41; 
  __int128 v44[128]; 

  v2 = b;
  v3 = 2 * a->used;
  v4 = a;
  v41 = v3;
  if ( b->alloc < v3 )
  {
    result = j_mp_grow(b, v3);
    if ( result )
      return result;
    v4 = a;
  }
  v6 = 0i64;
  v7 = 0i64;
  v8 = 0;
  v9 = v3;
  if ( v3 > 0 )
  {
    used = v4->used;
    v11 = 0i64;
    dp = v4->dp;
    v13 = v4->used - 1;
    do
    {
      v14 = v13;
      if ( v13 >= v8 )
        v14 = v8;
      v15 = 0i64;
      v16 = used - (v8 - v14);
      v17 = &dp[v8 - v14];
      v18 = &dp[v14];
      if ( v16 >= v14 + 1 )
        v16 = v14 + 1;
      v19 = (v14 - (v8 - v14) + 1) >> 1;
      if ( v16 < v19 )
        v19 = v16;
      if ( v19 > 0 )
      {
        v20 = (unsigned int)v19;
        do
        {
          v21 = *v18--;
          v22 = *v17++;
          v15 += v22 * v21;
          --v20;
        }
        while ( v20 );
      }
      v23 = v7 + 2 * v15;
      if ( (v8 & 1) == 0 )
        v23 += dp[(__int64)v8 >> 1] * (unsigned __int64)dp[(__int64)v8 >> 1];
      ++v8;
      v24 = v23 & 0xFFFFFFF;
      v7 = v23 >> 28;
      *((_DWORD *)v44 + v11++) = v24;
    }
    while ( v11 < v9 );
    v3 = v41;
    v2 = b;
  }
  v25 = 0;
  v26 = v2->used;
  v27 = v2->dp;
  v2->used = 2 * a->used;
  if ( v3 > 0 && (unsigned int)v3 >= 0x10 )
  {
    v28 = v3 - 1;
    if ( v27 > (unsigned int *)v44 + v28 || &v27[v28] < (unsigned int *)v44 )
    {
      v29 = v3 - (v3 & 0xF);
      do
      {
        _XMM0 = v44[v6 / 4];
        __asm { vpand   xmm1, xmm0, xmm2 }
        _XMM0 = v44[v6 / 4 + 1];
        *(_OWORD *)v27 = _XMM1;
        __asm { vpand   xmm1, xmm0, xmm2 }
        _XMM0 = v44[v6 / 4 + 2];
        *((_OWORD *)v27 + 1) = _XMM1;
        __asm { vpand   xmm1, xmm0, xmm2 }
        _XMM0 = v44[v6 / 4 + 3];
        *((_OWORD *)v27 + 2) = _XMM1;
        __asm { vpand   xmm1, xmm0, xmm2 }
        *((_OWORD *)v27 + 3) = _XMM1;
        v27 += 16;
        v25 += 16;
        v6 += 16i64;
      }
      while ( (__int64)v6 < v29 );
    }
  }
  v38 = v25;
  if ( v25 < v9 )
  {
    v25 = v9;
    do
    {
      v39 = *((_DWORD *)v44 + v38++);
      *v27++ = v39 & 0xFFFFFFF;
    }
    while ( v38 < v9 );
  }
  if ( v25 < v26 )
  {
    for ( i = v26 - v25; i; --i )
      *v27++ = 0;
  }
  j_mp_clamp(v2);
  return 0;
}

