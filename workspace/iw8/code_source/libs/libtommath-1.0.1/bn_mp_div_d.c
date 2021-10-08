/*
==============
mp_div_d
==============
*/
int mp_div_d(mp_int *a, unsigned int b, mp_int *c, unsigned int *d)
{
  unsigned __int64 v4; 
  int result; 
  int v9; 
  int used; 
  unsigned __int64 v11; 
  __int64 i; 
  unsigned __int64 v13; 
  unsigned __int64 v14; 
  mp_int aa; 

  v4 = b;
  if ( !b )
    return -3;
  if ( b == 1 || !a->used )
  {
    if ( d )
      *d = 0;
    if ( c )
      return j_mp_copy(a, c);
    return 0;
  }
  if ( ((b - 1) & b) == 0 )
  {
    v9 = 0;
    while ( (_DWORD)v4 != 1 << v9 )
    {
      if ( ++v9 >= 28 )
        goto LABEL_9;
    }
    if ( d )
      *d = ((1 << v9) - 1) & *a->dp;
    if ( c )
      return j_mp_div_2d(a, v9, c, NULL);
    return 0;
  }
LABEL_9:
  if ( (_DWORD)v4 == 3 )
    return j_mp_div_3(a, c, d);
  result = j_mp_init_size(&aa, a->used);
  if ( !result )
  {
    used = a->used;
    v11 = 0i64;
    aa.sign = a->sign;
    aa.used = used;
    for ( i = used - 1; i >= 0; aa.dp[i--] = v14 )
    {
      v13 = (v11 << 28) | a->dp[i];
      v11 = v13;
      if ( v13 < v4 )
      {
        LODWORD(v14) = 0;
      }
      else
      {
        v14 = v13 / v4;
        v11 = v13 - v4 * (unsigned int)(v13 / v4);
      }
    }
    if ( d )
      *d = v11;
    if ( c )
    {
      j_mp_clamp(&aa);
      j_mp_exch(&aa, c);
    }
    j_mp_clear(&aa);
    return 0;
  }
  return result;
}

