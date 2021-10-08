/*
==============
mp_copy
==============
*/
int mp_copy(mp_int *a, mp_int *b)
{
  int result; 
  int used; 
  unsigned int *dp; 
  int v7; 
  unsigned int *i; 
  unsigned int v9; 

  if ( a == b )
    return 0;
  if ( b->alloc >= a->used || (result = j_mp_grow(b, a->used)) == 0 )
  {
    used = a->used;
    dp = a->dp;
    v7 = 0;
    for ( i = b->dp; v7 < a->used; ++i )
    {
      v9 = *dp++;
      *i = v9;
      ++v7;
      used = a->used;
    }
    if ( v7 < b->used )
    {
      do
      {
        *i++ = 0;
        ++v7;
      }
      while ( v7 < b->used );
      used = a->used;
    }
    b->used = used;
    b->sign = a->sign;
    return 0;
  }
  return result;
}

