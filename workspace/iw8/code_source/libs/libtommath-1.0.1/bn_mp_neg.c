/*
==============
mp_neg
==============
*/
int mp_neg(mp_int *a, mp_int *b)
{
  int result; 
  int v5; 

  if ( a == b || (result = j_mp_copy(a, b)) == 0 )
  {
    v5 = 0;
    if ( b->used )
      LOBYTE(v5) = a->sign == 0;
    b->sign = v5;
    return 0;
  }
  return result;
}

