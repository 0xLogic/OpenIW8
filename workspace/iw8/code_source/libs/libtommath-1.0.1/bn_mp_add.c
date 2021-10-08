/*
==============
mp_add
==============
*/
int mp_add(mp_int *a, mp_int *b, mp_int *c)
{
  int sign; 
  int v5; 
  mp_int *v9; 
  mp_int *v10; 

  sign = a->sign;
  v5 = b->sign;
  if ( sign == v5 )
  {
    c->sign = sign;
    return j_s_mp_add(a, b, c);
  }
  else
  {
    if ( j_mp_cmp_mag(a, b) == -1 )
    {
      c->sign = v5;
      v9 = a;
      v10 = b;
    }
    else
    {
      c->sign = sign;
      v9 = b;
      v10 = a;
    }
    return j_s_mp_sub(v10, v9, c);
  }
}

