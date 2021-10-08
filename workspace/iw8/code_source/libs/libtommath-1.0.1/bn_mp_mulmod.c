/*
==============
mp_mulmod
==============
*/
int mp_mulmod(mp_int *a, mp_int *b, mp_int *c, mp_int *d)
{
  int result; 
  int v9; 
  mp_int aa; 

  result = j_mp_init_size(&aa, c->used);
  if ( !result )
  {
    v9 = j_mp_mul(a, b, &aa);
    if ( !v9 )
      v9 = j_mp_mod(&aa, c, d);
    j_mp_clear(&aa);
    return v9;
  }
  return result;
}

