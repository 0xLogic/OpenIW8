/*
==============
mp_mul_d
==============
*/
int mp_mul_d(mp_int *a, unsigned int b, mp_int *c)
{
  __int64 v3; 
  int v6; 
  int result; 
  int used; 
  unsigned __int64 v9; 
  int v10; 
  unsigned int *dp; 
  unsigned int *i; 
  __int64 v13; 
  unsigned __int64 v14; 
  _DWORD *v15; 
  int v16; 
  __int64 j; 

  v3 = b;
  v6 = a->used + 1;
  if ( c->alloc >= v6 || (result = j_mp_grow(c, v6)) == 0 )
  {
    used = c->used;
    c->sign = a->sign;
    LODWORD(v9) = 0;
    v10 = 0;
    dp = a->dp;
    for ( i = c->dp; v10 < a->used; ++i )
    {
      v13 = *dp++;
      ++v10;
      v14 = (unsigned int)v9 + v3 * v13;
      *i = v14 & 0xFFFFFFF;
      v9 = v14 >> 28;
    }
    *i = v9;
    v15 = i + 1;
    v16 = v10 + 1;
    if ( v16 < used )
    {
      for ( j = used - v16; j; --j )
        *v15++ = 0;
    }
    c->used = a->used + 1;
    j_mp_clamp(c);
    return 0;
  }
  return result;
}

