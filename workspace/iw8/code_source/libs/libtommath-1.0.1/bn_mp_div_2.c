/*
==============
mp_div_2
==============
*/
int mp_div_2(mp_int *a, mp_int *b)
{
  int result; 
  __int64 used; 
  int v6; 
  int v7; 
  int v8; 
  unsigned int *dp; 
  unsigned int *v10; 
  __int64 v11; 
  unsigned int v12; 
  int v13; 
  unsigned int *v14; 
  __int64 i; 

  if ( b->alloc >= a->used || (result = j_mp_grow(b, a->used)) == 0 )
  {
    used = a->used;
    v6 = 0;
    v7 = b->used;
    b->used = used;
    v8 = used - 1;
    dp = b->dp;
    v10 = &a->dp[used - 1];
    v11 = (__int64)&dp[used - 1];
    if ( (int)used - 1 >= 0 )
    {
      do
      {
        v12 = *v10;
        v11 -= 4i64;
        --v10;
        v13 = (v6 << 27) | (v12 >> 1);
        v6 = v12 & 1;
        *(_DWORD *)(v11 + 4) = v13;
        --v8;
      }
      while ( v8 >= 0 );
      LODWORD(used) = b->used;
      dp = b->dp;
    }
    v14 = &dp[(int)used];
    if ( (int)used < v7 )
    {
      for ( i = (unsigned int)(v7 - used); i; --i )
        *v14++ = 0;
    }
    b->sign = a->sign;
    j_mp_clamp(b);
    return 0;
  }
  return result;
}

