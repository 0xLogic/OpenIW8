/*
==============
mp_invmod
==============
*/
int mp_invmod(mp_int *a, mp_int *b, mp_int *c)
{
  if ( b->sign == 1 || !b->used )
    return -3;
  if ( b->used > 0 && (*(_BYTE *)b->dp & 1) != 0 && j_mp_cmp_d(b, 1u) )
    return j_fast_mp_invmod(a, b, c);
  return j_mp_invmod_slow(a, b, c);
}

