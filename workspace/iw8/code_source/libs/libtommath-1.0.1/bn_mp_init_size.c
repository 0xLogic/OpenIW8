/*
==============
mp_init_size
==============
*/
__int64 mp_init_size(mp_int *a, int size)
{
  int v3; 
  __int64 v4; 
  unsigned int *v5; 
  unsigned int **p_dp; 
  unsigned int *v7; 
  int v9; 
  unsigned int *v10; 
  int v11; 
  int v12; 
  unsigned int *v13; 
  unsigned __int64 i; 
  __int64 j; 

  v3 = 64 - size % 32 + size;
  v4 = v3;
  v5 = (unsigned int *)ltc_malloc(4i64 * v3);
  a->dp = v5;
  p_dp = &a->dp;
  v7 = v5;
  if ( !v5 )
    return 4294967294i64;
  a->alloc = v3;
  a->used = 0;
  v9 = 0;
  a->sign = 0;
  if ( v3 > 0 && (unsigned int)v3 >= 4 )
  {
    v10 = &v5[v3 - 1];
    if ( v7 > (unsigned int *)p_dp || v10 < (unsigned int *)p_dp )
    {
      v11 = v3 - (v3 & 3);
      do
        v9 += 4;
      while ( v9 < v11 );
      v12 = v11 + 3;
      v13 = v7;
      for ( i = (unsigned __int64)(16i64 * (v12 / 4)) >> 2; i; --i )
        *v13++ = 0;
    }
  }
  for ( j = v9; j < v4; (*p_dp)[j++] = 0 )
    ;
  return 0i64;
}

