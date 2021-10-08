/*
==============
fast_s_mp_mul_digs
==============
*/
int fast_s_mp_mul_digs(mp_int *a, mp_int *b, mp_int *c, int digs)
{
  int v4; 
  mp_int *v5; 
  int result; 
  int used; 
  int v10; 
  unsigned __int64 v11; 
  int v12; 
  unsigned int *dp; 
  __int64 v14; 
  unsigned int *v15; 
  int v16; 
  int v17; 
  __int64 v18; 
  unsigned int *v19; 
  unsigned int *v20; 
  __int64 v21; 
  __int64 v22; 
  int v23; 
  int v24; 
  int v25; 
  unsigned int *v26; 
  __int64 i; 
  int Src[512]; 

  v4 = digs;
  v5 = c;
  if ( c->alloc >= digs || (result = j_mp_grow(c, digs)) == 0 )
  {
    used = a->used;
    if ( v4 >= b->used + a->used )
      v4 = b->used + a->used;
    v10 = 0;
    v11 = 0i64;
    v12 = 0;
    if ( v4 > 0 )
    {
      dp = b->dp;
      v14 = 0i64;
      v15 = a->dp;
      v16 = b->used - 1;
      do
      {
        v17 = v16;
        if ( v16 >= v12 )
          v17 = v12;
        v18 = (unsigned int)(used - (v12 - v17));
        v19 = &v15[v12 - v17];
        if ( (int)v18 >= v17 + 1 )
          v18 = (unsigned int)(v17 + 1);
        v20 = &dp[v17];
        if ( (int)v18 > 0 )
        {
          do
          {
            v21 = *v20--;
            v22 = *v19++;
            v11 += v22 * v21;
            --v18;
          }
          while ( v18 );
        }
        ++v12;
        v23 = v11 & 0xFFFFFFF;
        v11 >>= 28;
        Src[v14++] = v23;
      }
      while ( v14 < v4 );
      v5 = c;
    }
    v24 = v5->used;
    v25 = v4 + 1;
    v26 = v5->dp;
    v5->used = v4;
    if ( v4 + 1 > 0 )
    {
      memcpy_0(v26, Src, 4i64 * v25);
      v26 += v25;
      v10 = v4 + 1;
    }
    if ( v10 < v24 )
    {
      for ( i = v24 - v10; i; --i )
        *v26++ = 0;
    }
    j_mp_clamp(v5);
    return 0;
  }
  return result;
}

