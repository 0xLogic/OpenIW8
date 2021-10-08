/*
==============
s_mp_sub
==============
*/
int s_mp_sub(mp_int *a, mp_int *b, mp_int *c)
{
  int used; 
  __int64 v6; 
  int result; 
  int v9; 
  unsigned int v10; 
  int v11; 
  unsigned int *dp; 
  unsigned int *v13; 
  unsigned int *v14; 
  __int64 v15; 
  int v16; 
  int v17; 
  unsigned int v18; 
  signed __int64 v19; 
  __int64 v20; 
  unsigned int v21; 
  __int64 i; 

  used = a->used;
  v6 = (unsigned int)b->used;
  if ( c->alloc >= a->used || (result = j_mp_grow(c, used)) == 0 )
  {
    v9 = c->used;
    v10 = 0;
    c->used = used;
    v11 = 0;
    dp = b->dp;
    v13 = c->dp;
    v14 = a->dp;
    if ( (int)v6 > 0 )
    {
      v11 = v6;
      v15 = v6;
      do
      {
        v16 = *v14++;
        v17 = v16 - *dp++;
        v18 = v17 - v10;
        *v13++ = v18 & 0xFFFFFFF;
        v10 = v18 >> 31;
        --v15;
      }
      while ( v15 );
    }
    if ( v11 < used )
    {
      v19 = (char *)v14 - (char *)v13;
      v20 = (unsigned int)(used - v11);
      do
      {
        v21 = *(unsigned int *)((char *)v13 + v19) - v10;
        *v13++ = v21 & 0xFFFFFFF;
        v10 = v21 >> 31;
        --v20;
      }
      while ( v20 );
    }
    if ( c->used < v9 )
    {
      for ( i = (unsigned int)(v9 - c->used); i; --i )
        *v13++ = 0;
    }
    j_mp_clamp(c);
    return 0;
  }
  return result;
}

