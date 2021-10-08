/*
==============
mp_sub_d
==============
*/
int mp_sub_d(mp_int *a, unsigned int b, mp_int *c)
{
  int v6; 
  int result; 
  int v8; 
  int used; 
  int v10; 
  unsigned int *dp; 
  unsigned int *v12; 
  int v13; 
  unsigned int v14; 
  int *v15; 
  int *v16; 
  unsigned int i; 
  int v18; 
  unsigned int v19; 
  __int64 j; 

  v6 = a->used + 1;
  if ( c->alloc < v6 )
  {
    result = j_mp_grow(c, v6);
    if ( result )
      return result;
  }
  if ( a->sign == 1 )
  {
    a->sign = 0;
    v8 = j_mp_add_d(a, b, c);
    c->sign = 1;
    a->sign = 1;
    j_mp_clamp(c);
    return v8;
  }
  used = a->used;
  v10 = c->used;
  dp = a->dp;
  v12 = c->dp;
  if ( a->used == 1 )
  {
    if ( *dp > b )
      goto LABEL_7;
LABEL_16:
    if ( used == 1 )
      b -= *dp;
    *v12 = b;
    v13 = 1;
    c->sign = 1;
    v16 = (int *)(v12 + 1);
    c->used = 1;
    goto LABEL_9;
  }
  if ( !used )
    goto LABEL_16;
LABEL_7:
  c->sign = 0;
  v13 = 1;
  c->used = a->used;
  v14 = *dp;
  v15 = (int *)(dp + 1);
  *v12 = (v14 - b) & 0xFFFFFFF;
  v16 = (int *)(v12 + 1);
  for ( i = (v14 - b) >> 31; v13 < a->used; i = v19 >> 31 )
  {
    v18 = *v15++;
    ++v13;
    v19 = v18 - i;
    *v16++ = v19 & 0xFFFFFFF;
  }
LABEL_9:
  if ( v13 < v10 )
  {
    for ( j = v10 - v13; j; --j )
      *v16++ = 0;
  }
  j_mp_clamp(c);
  return 0;
}

