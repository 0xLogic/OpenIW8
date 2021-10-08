/*
==============
mp_rshd
==============
*/
void mp_rshd(mp_int *a, int b)
{
  __int64 v2; 
  int used; 
  unsigned int *dp; 
  int v6; 
  unsigned int *v7; 
  unsigned int v8; 

  v2 = b;
  if ( b > 0 )
  {
    used = a->used;
    if ( a->used > b )
    {
      dp = a->dp;
      v6 = 0;
      v7 = &dp[v2];
      if ( used - (int)v2 > 0 )
      {
        do
        {
          v8 = *v7++;
          *dp = v8;
          ++v6;
          used = a->used;
          ++dp;
        }
        while ( v6 < a->used - (int)v2 );
      }
      if ( v6 < used )
      {
        do
        {
          *dp++ = 0;
          used = a->used;
          ++v6;
        }
        while ( v6 < a->used );
      }
      a->used = used - v2;
    }
    else
    {
      j_mp_zero(a);
    }
  }
}

