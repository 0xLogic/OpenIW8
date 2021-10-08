/*
==============
mp_sub
==============
*/
int mp_sub(mp_int *a, mp_int *b, mp_int *c)
{
  int sign; 
  mp_int *v8; 
  mp_int *v9; 

  sign = a->sign;
  if ( sign == b->sign )
  {
    if ( j_mp_cmp_mag(a, b) == -1 )
    {
      v8 = a;
      v9 = b;
      c->sign = sign == 0;
    }
    else
    {
      c->sign = sign;
      v8 = b;
      v9 = a;
    }
    return j_s_mp_sub(v9, v8, c);
  }
  else
  {
    c->sign = sign;
    return j_s_mp_add(a, b, c);
  }
}

