/*
==============
mp_lcm
==============
*/
int mp_lcm(mp_int *a, mp_int *b, mp_int *c)
{
  int result; 
  int v7; 
  mp_int ca; 
  mp_int mp; 

  result = j_mp_init_multi(&mp, &ca, 0i64);
  if ( !result )
  {
    v7 = j_mp_gcd(a, b, &mp);
    if ( !v7 )
    {
      if ( j_mp_cmp_mag(a, b) == -1 )
      {
        v7 = j_mp_div(a, &mp, &ca, NULL);
        if ( !v7 )
          goto LABEL_8;
      }
      else
      {
        v7 = j_mp_div(b, &mp, &ca, NULL);
        if ( !v7 )
        {
          b = a;
LABEL_8:
          v7 = j_mp_mul(b, &ca, c);
          c->sign = 0;
        }
      }
    }
    j_mp_clear_multi(&mp, &ca, 0i64);
    return v7;
  }
  return result;
}

