/*
==============
mp_add_d
==============
*/
int mp_add_d(mp_int *a, unsigned int b, mp_int *c)
{
  int v6; 
  int result; 
  int sign; 
  int v9; 
  int v10; 
  unsigned int *dp; 
  int v12; 
  int used; 
  int *v14; 
  unsigned int *v15; 
  unsigned int v16; 
  int *v17; 
  unsigned int v18; 
  int v19; 
  unsigned int v20; 
  __int64 i; 

  v6 = a->used + 1;
  if ( c->alloc >= v6 || (result = j_mp_grow(c, v6)) == 0 )
  {
    sign = a->sign;
    if ( sign == 1 && (a->used > 1 || *a->dp >= b) )
    {
      a->sign = 0;
      v9 = j_mp_sub_d(a, b, c);
      c->sign = 1;
      v10 = v9;
      a->sign = 1;
      j_mp_clamp(c);
      return v10;
    }
    else
    {
      dp = c->dp;
      v12 = 1;
      used = c->used;
      v14 = (int *)(dp + 1);
      if ( sign )
      {
        c->used = 1;
        if ( a->used == 1 )
          b -= *a->dp;
        *dp = b;
      }
      else
      {
        v15 = a->dp;
        v16 = *v15;
        v17 = (int *)(v15 + 1);
        v18 = (b + v16) >> 28;
        *dp = (b + v16) & 0xFFFFFFF;
        if ( a->used > 1 )
        {
          do
          {
            v19 = *v17++;
            ++v12;
            v20 = v18 + v19;
            *v14++ = v20 & 0xFFFFFFF;
            v18 = v20 >> 28;
          }
          while ( v12 < a->used );
        }
        *v14 = v18;
        ++v12;
        ++v14;
        c->used = a->used + 1;
      }
      c->sign = 0;
      if ( v12 < used )
      {
        for ( i = used - v12; i; --i )
          *v14++ = 0;
      }
      j_mp_clamp(c);
      return 0;
    }
  }
  return result;
}

