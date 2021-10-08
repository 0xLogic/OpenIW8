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
  __int64 v31; 
  int v32; 
  signed __int64 v47; 
  __int64 v48; 
  unsigned __int64 v49; 
  char *v50; 
  int v51; 
  unsigned int *v52; 
  __int64 i; 
  unsigned int v54; 
  int v55; 
  char v56[8]; 
  char v57; 

  used = x->used;
  v5 = rho;
  v6 = n->used + 1;
  v54 = rho;
  v55 = used;
  if ( x->alloc < v6 )
  {
    result = j_mp_grow(x, v6);
    if ( result )
      return result;
    v5 = v54;
  }
  v9 = 0;
  v10 = 0;
  dp = x->dp;
  v12 = dp;
  v13 = v56;
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
    v19 = &v57;
    v18 = v16;
    v20 = v56;
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
        v5 = v54;
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
  _R10 = &v56[8 * v18];
  _RDI = &v56[8 * v18 + 8];
  if ( v18 + 1 <= v17 && v28 >= 8 )
  {
    v27 = v18 + 1;
    v31 = 8i64 * (v18 + 1);
    if ( &_RDI[v31] > &_R10[8 * v17] || &_RDI[8 * v17] < &_R10[v31] )
    {
      v32 = (int)v28 % 8;
      _RCX = 28i64;
      __asm { vmovq   xmm3, rcx }
      do
      {
        __asm
        {
          vmovdqu xmm0, xmmword ptr [r10]
          vpsrlq  xmm2, xmm0, xmm3
          vpaddq  xmm0, xmm2, xmmword ptr [rdi]
          vmovdqu xmmword ptr [rdi], xmm0
          vmovdqu xmm0, xmmword ptr [r10+10h]
          vpsrlq  xmm2, xmm0, xmm3
          vpaddq  xmm0, xmm2, xmmword ptr [rdi+10h]
          vmovdqu xmmword ptr [rdi+10h], xmm0
          vmovdqu xmm0, xmmword ptr [r10+20h]
          vpsrlq  xmm2, xmm0, xmm3
          vpaddq  xmm0, xmm2, xmmword ptr [rdi+20h]
          vmovdqu xmmword ptr [rdi+20h], xmm0
          vmovdqu xmm0, xmmword ptr [r10+30h]
          vpsrlq  xmm2, xmm0, xmm3
          vpaddq  xmm0, xmm2, xmmword ptr [rdi+30h]
          vmovdqu xmmword ptr [rdi+30h], xmm0
        }
        _RDI += 64;
        _R10 += 64;
        v27 += 8;
      }
      while ( v27 <= v17 - v32 );
    }
  }
  if ( v27 <= v17 )
  {
    v47 = _R10 - _RDI;
    v48 = (unsigned int)(v17 - v27 + 1);
    do
    {
      v49 = *(_QWORD *)&_RDI[v47];
      _RDI += 8;
      *((_QWORD *)_RDI - 1) += v49 >> 28;
      --v48;
    }
    while ( v48 );
  }
  v50 = &v56[8 * v16];
  if ( (int)v16 + 1 > 0 )
  {
    do
    {
      v51 = *(_DWORD *)v50;
      v50 += 8;
      ++v9;
      *dp++ = v51 & 0xFFFFFFF;
      LODWORD(v16) = n->used;
    }
    while ( v9 < n->used + 1 );
  }
  if ( v9 < v55 )
  {
    v52 = dp;
    for ( i = v55 - v9; i; --i )
      *v52++ = 0;
    LODWORD(v16) = n->used;
  }
  x->used = v16 + 1;
  j_mp_clamp(x);
  if ( j_mp_cmp_mag(x, n) == -1 )
    return 0;
  else
    return j_s_mp_sub(x, n, x);
}

