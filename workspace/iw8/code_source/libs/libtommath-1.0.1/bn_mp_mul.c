/*
==============
mp_mul
==============
*/
int mp_mul(mp_int *a, mp_int *b, mp_int *c)
{
  int v3; 
  BOOL v5; 
  int used; 
  int result; 
  int v8; 

  v3 = 0;
  v5 = a->sign != b->sign;
  used = a->used;
  if ( a->used >= b->used )
    used = b->used;
  if ( used < TOOM_MUL_CUTOFF )
  {
    if ( used < KARATSUBA_MUL_CUTOFF )
    {
      v8 = b->used + a->used + 1;
      if ( v8 >= 512 || used > 256 )
        result = j_s_mp_mul_digs(a, b, c, v8);
      else
        result = j_fast_s_mp_mul_digs(a, b, c, v8);
    }
    else
    {
      result = j_mp_karatsuba_mul(a, b, c);
    }
  }
  else
  {
    result = j_mp_toom_mul(a, b, c);
  }
  if ( c->used > 0 )
    v3 = v5;
  c->sign = v3;
  return result;
}

