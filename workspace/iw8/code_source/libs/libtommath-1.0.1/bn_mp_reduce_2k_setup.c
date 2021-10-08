/*
==============
mp_reduce_2k_setup
==============
*/
int mp_reduce_2k_setup(mp_int *a, unsigned int *d)
{
  int result; 
  int v5; 
  int v6; 
  mp_int aa; 

  result = j_mp_init(&aa);
  if ( !result )
  {
    v5 = j_mp_count_bits(a);
    v6 = j_mp_2expt(&aa, v5);
    if ( v6 || (v6 = j_s_mp_sub(&aa, a, &aa)) != 0 )
    {
      j_mp_clear(&aa);
      return v6;
    }
    else
    {
      *d = *aa.dp;
      j_mp_clear(&aa);
      return 0;
    }
  }
  return result;
}

