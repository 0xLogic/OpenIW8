/*
==============
mp_cmp
==============
*/
int mp_cmp(mp_int *a, mp_int *b)
{
  int sign; 
  mp_int *v3; 
  int result; 

  sign = a->sign;
  v3 = b;
  if ( sign == b->sign )
  {
    if ( sign == 1 )
    {
      b = a;
      a = v3;
    }
    return j_mp_cmp_mag(a, b);
  }
  else
  {
    result = 1;
    if ( sign == 1 )
      return -1;
  }
  return result;
}

