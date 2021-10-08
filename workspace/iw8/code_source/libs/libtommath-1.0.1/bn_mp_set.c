/*
==============
mp_set
==============
*/
void mp_set(mp_int *a, unsigned int b)
{
  j_mp_zero(a);
  *a->dp = b & 0xFFFFFFF;
  a->used = *a->dp != 0;
}

