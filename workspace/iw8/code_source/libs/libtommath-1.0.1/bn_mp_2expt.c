/*
==============
mp_2expt
==============
*/
int mp_2expt(mp_int *a, int b)
{
  int result; 

  j_mp_zero(a);
  result = j_mp_grow(a, b / 28 + 1);
  if ( !result )
  {
    a->used = b / 28 + 1;
    a->dp[b / 28] = 1 << (b % 28);
    return 0;
  }
  return result;
}

