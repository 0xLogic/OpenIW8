/*
==============
mp_sqr
==============
*/
int mp_sqr(mp_int *a, mp_int *b)
{
  int used; 
  int result; 

  used = a->used;
  if ( a->used < TOOM_SQR_CUTOFF )
  {
    if ( used < KARATSUBA_SQR_CUTOFF )
    {
      if ( 2 * used >= 511 || used >= 128 )
      {
        result = j_s_mp_sqr(a, b);
        b->sign = 0;
      }
      else
      {
        result = j_fast_s_mp_sqr(a, b);
        b->sign = 0;
      }
    }
    else
    {
      result = j_mp_karatsuba_sqr(a, b);
      b->sign = 0;
    }
  }
  else
  {
    result = j_mp_toom_sqr(a, b);
    b->sign = 0;
  }
  return result;
}

