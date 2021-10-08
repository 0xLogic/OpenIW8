/*
==============
mp_mod_d
==============
*/
int mp_mod_d(mp_int *a, unsigned int b, unsigned int *c)
{
  return j_mp_div_d(a, b, NULL, c);
}

