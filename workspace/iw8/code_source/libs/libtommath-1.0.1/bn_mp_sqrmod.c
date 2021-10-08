/*
==============
mp_sqrmod
==============
*/
int mp_sqrmod(mp_int *a, mp_int *b, mp_int *c)
{
  int result; 
  int v7; 
  mp_int aa; 

  result = j_mp_init(&aa);
  if ( !result )
  {
    v7 = j_mp_sqr(a, &aa);
    if ( !v7 )
      v7 = j_mp_mod(&aa, b, c);
    j_mp_clear(&aa);
    return v7;
  }
  return result;
}

