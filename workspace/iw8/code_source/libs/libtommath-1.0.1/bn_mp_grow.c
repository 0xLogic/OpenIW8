/*
==============
mp_grow
==============
*/
__int64 mp_grow(mp_int *a, int size)
{
  int v3; 
  unsigned int *v4; 
  __int64 alloc; 
  __int64 v7; 

  if ( a->alloc < size )
  {
    v3 = 64 - size % 32 + size;
    v4 = (unsigned int *)ltc_realloc(a->dp, 4i64 * v3);
    if ( !v4 )
      return 4294967294i64;
    a->dp = v4;
    alloc = a->alloc;
    a->alloc = v3;
    if ( (int)alloc < v3 )
    {
      v7 = alloc;
      do
      {
        ++v7;
        LODWORD(alloc) = alloc + 1;
        a->dp[v7 - 1] = 0;
      }
      while ( (int)alloc < a->alloc );
    }
  }
  return 0i64;
}

