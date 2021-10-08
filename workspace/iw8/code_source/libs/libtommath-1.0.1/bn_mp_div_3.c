/*
==============
mp_div_3
==============
*/
int mp_div_3(mp_int *a, mp_int *c, unsigned int *d)
{
  int result; 
  int used; 
  unsigned __int64 v8; 
  __int64 i; 
  unsigned __int64 v10; 
  unsigned __int64 v11; 
  unsigned __int64 v12; 
  mp_int aa; 

  result = j_mp_init_size(&aa, a->used);
  if ( !result )
  {
    used = a->used;
    v8 = 0i64;
    aa.sign = a->sign;
    aa.used = used;
    for ( i = used - 1; i >= 0; aa.dp[i--] = v11 )
    {
      v10 = (v8 << 28) | a->dp[i];
      v8 = v10;
      if ( v10 < 3 )
      {
        LODWORD(v11) = 0;
      }
      else
      {
        v11 = (89478485 * v10) >> 28;
        v8 = -3i64 * v11 + v10;
        if ( v8 >= 3 )
        {
          v12 = v8 / 3;
          v8 %= 3ui64;
          LODWORD(v11) = v12 + v11;
        }
      }
    }
    if ( d )
      *d = v8;
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

