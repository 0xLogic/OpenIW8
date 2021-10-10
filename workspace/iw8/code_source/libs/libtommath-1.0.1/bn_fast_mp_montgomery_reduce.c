/*
==============
fast_mp_montgomery_reduce
==============
*/
int fast_mp_montgomery_reduce(mp_int *x, mp_int *n, unsigned int rho)
{
  int used; 
  unsigned int v5; 
  int v6; 
  int result; 
  int v9; 
  int v10; 
  unsigned int *dp; 
  unsigned int *v12; 
  char *v13; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  int v17; 
  int v18; 
  char *v19; 
  char *v20; 
  __int64 v21; 
  unsigned int *v22; 
  char *v23; 
  __int64 v24; 
  __int64 v25; 
  __int64 v26; 
  int v27; 
  unsigned int v28; 
  char *v29; 
  char *v30; 
  __int64 v31; 
  int v32; 
  signed __int64 v45; 
  __int64 v46; 
  unsigned __int64 v47; 
  char *v48; 
  int v49; 
  unsigned int *v50; 
  __int64 i; 
  unsigned int v52; 
  int v53; 
  char v54[8]; 
  char v55; 

  used = x->used;
  v5 = rho;
  v6 = n->used + 1;
  v52 = rho;
  v53 = used;
  if ( x->alloc < v6 )
  {
    result = j_mp_grow(x, v6);
    if ( result )
      return result;
    v5 = v52;
  }
  v9 = 0;
  v10 = 0;
  dp = x->dp;
  v12 = dp;
  v13 = v54;
  if ( x->used > 0 )
  {
    v10 = x->used;
    v14 = (unsigned int)x->used;
    do
    {
      v15 = *v12++;
      *(_QWORD *)v13 = v15;
      v13 += 8;
      --v14;
    }
    while ( v14 );
  }
  v16 = n->used;
  v17 = 2 * v16 + 1;
  if ( v10 < v17 )
    memset(v13, 0, 8i64 * (v17 - v10));
  v18 = 0;
  if ( (int)v16 > 0 )
  {
    v19 = &v55;
    v18 = v16;
    v20 = v54;
    v21 = (unsigned int)v16;
    do
    {
      v22 = n->dp;
      v23 = v20;
      if ( (int)v16 > 0 )
      {
        v24 = (*((_DWORD *)v19 - 2) * v5) & 0xFFFFFFF;
        v25 = (unsigned int)v16;
        do
        {
          v26 = *v22++;
          *(_QWORD *)v23 += v24 * v26;
          v23 += 8;
          --v25;
        }
        while ( v25 );
        v5 = v52;
      }
      v20 += 8;
      *(_QWORD *)v19 += *((_QWORD *)v19 - 1) >> 28;
      v19 += 8;
      --v21;
    }
    while ( v21 );
  }
  v27 = v18 + 1;
  v28 = v17 - v18;
  v29 = &v54[8 * v18];
  v30 = &v54[8 * v18 + 8];
  if ( v18 + 1 <= v17 && v28 >= 8 )
  {
    v27 = v18 + 1;
    v31 = 8i64 * (v18 + 1);
    if ( &v30[v31] > &v29[8 * v17] || &v30[8 * v17] < &v29[v31] )
    {
      v32 = (int)v28 % 8;
      do
      {
        _XMM0 = *(_OWORD *)v29;
        __asm
        {
          vpsrlq  xmm2, xmm0, xmm3
          vpaddq  xmm0, xmm2, xmmword ptr [rdi]
        }
        *(_OWORD *)v30 = _XMM0;
        _XMM0 = *((_OWORD *)v29 + 1);
        __asm
        {
          vpsrlq  xmm2, xmm0, xmm3
          vpaddq  xmm0, xmm2, xmmword ptr [rdi+10h]
        }
        *((_OWORD *)v30 + 1) = _XMM0;
        _XMM0 = *((_OWORD *)v29 + 2);
        __asm
        {
          vpsrlq  xmm2, xmm0, xmm3
          vpaddq  xmm0, xmm2, xmmword ptr [rdi+20h]
        }
        *((_OWORD *)v30 + 2) = _XMM0;
        _XMM0 = *((_OWORD *)v29 + 3);
        __asm
        {
          vpsrlq  xmm2, xmm0, xmm3
          vpaddq  xmm0, xmm2, xmmword ptr [rdi+30h]
        }
        *((_OWORD *)v30 + 3) = _XMM0;
        v30 += 64;
        v29 += 64;
        v27 += 8;
      }
      while ( v27 <= v17 - v32 );
    }
  }
  if ( v27 <= v17 )
  {
    v45 = v29 - v30;
    v46 = (unsigned int)(v17 - v27 + 1);
    do
    {
      v47 = *(_QWORD *)&v30[v45];
      v30 += 8;
      *((_QWORD *)v30 - 1) += v47 >> 28;
      --v46;
    }
    while ( v46 );
  }
  v48 = &v54[8 * v16];
  if ( (int)v16 + 1 > 0 )
  {
    do
    {
      v49 = *(_DWORD *)v48;
      v48 += 8;
      ++v9;
      *dp++ = v49 & 0xFFFFFFF;
      LODWORD(v16) = n->used;
    }
    while ( v9 < n->used + 1 );
  }
  if ( v9 < v53 )
  {
    v50 = dp;
    for ( i = v53 - v9; i; --i )
      *v50++ = 0;
    LODWORD(v16) = n->used;
  }
  x->used = v16 + 1;
  j_mp_clamp(x);
  if ( j_mp_cmp_mag(x, n) == -1 )
    return 0;
  else
    return j_s_mp_sub(x, n, x);
}

