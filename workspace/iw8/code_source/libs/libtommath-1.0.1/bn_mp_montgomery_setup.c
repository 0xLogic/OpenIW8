/*
==============
mp_montgomery_setup
==============
*/
__int64 mp_montgomery_setup(mp_int *n, unsigned int *rho)
{
  unsigned int v3; 
  int v5; 

  v3 = *n->dp;
  if ( (v3 & 1) == 0 )
    return 4294967293i64;
  v5 = (2 - v3 * (v3 + ((2 * (_BYTE)v3 + 4) & 8))) * (v3 + ((2 * (_BYTE)v3 + 4) & 8));
  *rho = (v5 * (2 - v3 * v5) * (v3 * v5 * (2 - v3 * v5) - 2)) & 0xFFFFFFF;
  return 0i64;
}

