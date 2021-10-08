/*
==============
mp_reduce_setup
==============
*/
int mp_reduce_setup(mp_int *a, mp_int *b)
{
  int result; 

  result = j_mp_2expt(a, 56 * b->used);
  if ( !result )
    return j_mp_div(a, b, a, NULL);
  return result;
}

