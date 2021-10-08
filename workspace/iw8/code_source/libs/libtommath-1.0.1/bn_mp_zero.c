/*
==============
mp_zero
==============
*/
void mp_zero(mp_int *a)
{
  unsigned int *dp; 
  int v2; 

  dp = a->dp;
  v2 = 0;
  a->sign = 0;
  for ( a->used = 0; v2 < a->alloc; ++v2 )
    *dp++ = 0;
}

