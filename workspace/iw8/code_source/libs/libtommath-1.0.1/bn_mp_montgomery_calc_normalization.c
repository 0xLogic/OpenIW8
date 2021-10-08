/*
==============
mp_montgomery_calc_normalization
==============
*/
int mp_montgomery_calc_normalization(mp_int *a, mp_int *b)
{
  int v4; 
  int result; 
  int v6; 

  v4 = j_mp_count_bits(b) % 28;
  if ( b->used <= 1 )
  {
    v4 = 1;
    j_mp_set(a, 1u);
  }
  else
  {
    result = j_mp_2expt(a, 28 * b->used + v4 - 29);
    if ( result )
      return result;
  }
  v6 = v4 - 1;
  if ( v6 >= 28 )
    return 0;
  while ( 1 )
  {
    result = j_mp_mul_2(a, a);
    if ( result )
      break;
    if ( j_mp_cmp_mag(a, b) != -1 )
    {
      result = j_s_mp_sub(a, b, a);
      if ( result )
        break;
    }
    if ( ++v6 >= 28 )
      return 0;
  }
  return result;
}

