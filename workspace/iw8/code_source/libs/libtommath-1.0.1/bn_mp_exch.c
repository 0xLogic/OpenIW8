/*
==============
mp_exch
==============
*/
void mp_exch(mp_int *a, mp_int *b)
{
  __int128 v2; 
  unsigned int *dp; 

  v2 = *(_OWORD *)&a->used;
  dp = a->dp;
  *a = *b;
  *(_OWORD *)&b->used = v2;
  b->dp = dp;
}

