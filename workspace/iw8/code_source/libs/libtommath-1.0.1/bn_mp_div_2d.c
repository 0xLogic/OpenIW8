/*
==============
mp_div_2d
==============
*/
int mp_div_2d(mp_int *a, int b, mp_int *c, mp_int *d)
{
  int result; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  unsigned int *i; 
  unsigned int v14; 
  int v15; 

  result = j_mp_copy(a, c);
  v9 = result;
  if ( b > 0 )
  {
    if ( !result && (!d || (result = j_mp_mod_2d(a, b, d)) == 0) )
    {
      if ( b >= 28 )
        j_mp_rshd(c, b / 28);
      v10 = b % 28;
      if ( v10 )
      {
        v11 = 0;
        v12 = c->used - 1;
        for ( i = &c->dp[v12]; v12 >= 0; --v12 )
        {
          v14 = *i--;
          v15 = (v11 << (28 - v10)) | (v14 >> v10);
          v11 = ((1 << v10) - 1) & v14;
          i[1] = v15;
        }
      }
      j_mp_clamp(c);
      return 0;
    }
  }
  else
  {
    if ( d )
      j_mp_zero(d);
    return v9;
  }
  return result;
}

