/*
==============
mp_dr_reduce
==============
*/
int mp_dr_reduce(mp_int *x, mp_int *n, unsigned int k)
{
  __int64 used; 
  __int64 v5; 
  int result; 
  unsigned int *dp; 
  unsigned __int64 v9; 
  unsigned int *v10; 
  __int64 v11; 
  __int64 v12; 
  unsigned __int64 v13; 
  int v14; 
  _DWORD *i; 

  used = (unsigned int)n->used;
  v5 = k;
  if ( x->alloc >= 2 * (int)used || (result = j_mp_grow(x, 2 * used)) == 0 )
  {
    while ( 1 )
    {
      dp = x->dp;
      LODWORD(v9) = 0;
      v10 = &dp[(int)used];
      if ( (int)used > 0 )
      {
        v11 = used;
        do
        {
          v12 = *v10++;
          v13 = (unsigned int)v9 + *dp + v5 * v12;
          v9 = v13 >> 28;
          *dp++ = v13 & 0xFFFFFFF;
          --v11;
        }
        while ( v11 );
      }
      *dp = v9;
      v14 = used + 1;
      for ( i = dp + 1; v14 < x->used; ++v14 )
        *i++ = 0;
      j_mp_clamp(x);
      if ( j_mp_cmp_mag(x, n) == -1 )
        break;
      result = j_s_mp_sub(x, n, x);
      if ( result )
        return result;
    }
    return 0;
  }
  return result;
}

