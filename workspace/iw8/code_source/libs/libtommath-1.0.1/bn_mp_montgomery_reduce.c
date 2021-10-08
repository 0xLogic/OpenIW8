/*
==============
mp_montgomery_reduce
==============
*/
int mp_montgomery_reduce(mp_int *x, mp_int *n, unsigned int rho)
{
  int v6; 
  int result; 
  int v8; 
  int used; 
  __int64 v10; 
  unsigned int *dp; 
  unsigned __int64 v12; 
  unsigned int *v13; 
  int v14; 
  unsigned int *v15; 
  __int64 v16; 
  __int64 v17; 
  unsigned __int64 v18; 
  int v19; 

  v6 = 2 * n->used + 1;
  if ( v6 < 512 && n->used < 256 )
    return j_fast_mp_montgomery_reduce(x, n, rho);
  if ( x->alloc >= v6 || (result = j_mp_grow(x, v6)) == 0 )
  {
    x->used = v6;
    v8 = 0;
    used = n->used;
    if ( n->used > 0 )
    {
      v10 = 0i64;
      do
      {
        dp = x->dp;
        LODWORD(v12) = 0;
        v13 = n->dp;
        v14 = 0;
        v15 = &dp[v8];
        v16 = (rho * dp[v10]) & 0xFFFFFFF;
        if ( used > 0 )
        {
          do
          {
            ++v14;
            v17 = *v13++;
            v18 = (unsigned int)v12 + *v15 + v16 * v17;
            *v15++ = v18 & 0xFFFFFFF;
            used = n->used;
            v12 = v18 >> 28;
          }
          while ( v14 < n->used );
        }
        if ( (_DWORD)v12 )
        {
          do
          {
            v19 = *v15++;
            *(v15 - 1) = (v12 + v19) & 0xFFFFFFF;
            LODWORD(v12) = (unsigned int)(v12 + v19) >> 28;
          }
          while ( (_DWORD)v12 );
          used = n->used;
        }
        ++v8;
        ++v10;
      }
      while ( v8 < used );
    }
    j_mp_clamp(x);
    j_mp_rshd(x, n->used);
    if ( j_mp_cmp_mag(x, n) == -1 )
      return 0;
    else
      return j_s_mp_sub(x, n, x);
  }
  return result;
}

