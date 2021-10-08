/*
==============
mp_abs
==============
*/
int mp_abs(mp_int *a, mp_int *b)
{
  int result; 

  if ( a == b || (result = j_mp_copy(a, b)) == 0 )
  {
    b->sign = 0;
    return 0;
  }
  return result;
}

