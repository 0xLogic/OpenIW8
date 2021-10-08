/*
==============
mp_reduce_2k_l
==============
*/
int mp_reduce_2k_l(mp_int *a, mp_int *n, mp_int *d)
{
  int result; 
  int v7; 
  int i; 
  mp_int aa; 

  result = j_mp_init(&aa);
  if ( !result )
  {
    v7 = j_mp_count_bits(n);
    for ( i = j_mp_div_2d(a, v7, &aa, a); !i; i = j_mp_div_2d(a, v7, &aa, a) )
    {
      i = j_mp_mul(&aa, d, &aa);
      if ( i )
        break;
      i = j_s_mp_add(a, &aa, a);
      if ( i )
        break;
      if ( j_mp_cmp_mag(a, n) == -1 )
        break;
      i = j_s_mp_sub(a, n, a);
      if ( i )
        break;
    }
    j_mp_clear(&aa);
    return i;
  }
  return result;
}

