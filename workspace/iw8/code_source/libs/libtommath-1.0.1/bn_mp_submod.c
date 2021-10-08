/*
==============
mp_submod
==============
*/
int mp_submod(mp_int *a, mp_int *b, mp_int *c, mp_int *d)
{
  int result; 
  int v9; 
  mp_int aa; 

  result = j_mp_init(&aa);
  if ( !result )
  {
    v9 = j_mp_sub(a, b, &aa);
    if ( !v9 )
      v9 = j_mp_mod(&aa, c, d);
    j_mp_clear(&aa);
    return v9;
  }
  return result;
}

