/*
==============
mp_reduce_is_2k
==============
*/
__int64 mp_reduce_is_2k(mp_int *a)
{
  int v2; 
  int v3; 
  int v4; 
  int v5; 
  __int64 v6; 
  unsigned int v7; 
  int v8; 
  __int64 v9; 

  if ( a->used )
  {
    if ( a->used < 2 )
      return 1i64;
    v2 = j_mp_count_bits(a);
    v3 = 28;
    v4 = 1;
    v5 = 1;
    if ( v2 <= 28 )
      return 1i64;
    v6 = 1i64;
    while ( (v4 & a->dp[v6]) != 0 )
    {
      v7 = 2 * v4;
      ++v3;
      v8 = v5 + 1;
      v4 = 1;
      if ( v7 <= 0xFFFFFFF )
        v8 = v5;
      if ( v7 <= 0xFFFFFFF )
        v4 = v7;
      v5 = v8;
      v9 = v6 + 1;
      if ( v7 <= 0xFFFFFFF )
        v9 = v6;
      v6 = v9;
      if ( v3 >= v2 )
        return 1i64;
    }
  }
  return 0i64;
}

