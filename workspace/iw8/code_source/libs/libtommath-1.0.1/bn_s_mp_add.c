/*
==============
s_mp_add
==============
*/
int s_mp_add(mp_int *a, mp_int *b, mp_int *c)
{
  int used; 
  mp_int *v4; 
  int v5; 
  int v6; 
  int v10; 
  int result; 
  int v12; 
  unsigned int v13; 
  int v14; 
  unsigned int *dp; 
  unsigned int *v16; 
  unsigned int *i; 
  int v18; 
  int v19; 
  unsigned int v20; 
  __int64 v21; 
  unsigned int v22; 
  unsigned int v23; 
  _DWORD *v24; 
  __int64 j; 

  used = a->used;
  v4 = a;
  v5 = b->used;
  v6 = a->used;
  if ( a->used <= b->used )
    v6 = b->used;
  if ( used <= v5 )
  {
    v4 = b;
    if ( used <= v5 )
      v5 = a->used;
  }
  v10 = v6 + 1;
  if ( c->alloc >= v6 + 1 || (result = j_mp_grow(c, v10)) == 0 )
  {
    v12 = c->used;
    v13 = 0;
    c->used = v10;
    v14 = 0;
    dp = a->dp;
    v16 = b->dp;
    for ( i = c->dp; v14 < v5; v13 = v20 >> 28 )
    {
      v18 = *v16++;
      v19 = *dp++ + v18;
      ++v14;
      v20 = v13 + v19;
      *i++ = v20 & 0xFFFFFFF;
    }
    if ( v5 != v6 )
    {
      v21 = v14;
      if ( v14 < (__int64)v6 )
      {
        do
        {
          v22 = v4->dp[v21++];
          v23 = v13 + v22;
          *i++ = v23 & 0xFFFFFFF;
          v13 = v23 >> 28;
        }
        while ( v21 < v6 );
      }
    }
    *i = v13;
    v24 = i + 1;
    if ( c->used < v12 )
    {
      for ( j = (unsigned int)(v12 - c->used); j; --j )
        *v24++ = 0;
    }
    j_mp_clamp(c);
    return 0;
  }
  return result;
}

