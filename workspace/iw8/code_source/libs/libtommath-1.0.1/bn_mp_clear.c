/*
==============
mp_clear
==============
*/
void mp_clear(mp_int *a)
{
  unsigned int *dp; 
  int v3; 
  __int64 v4; 

  dp = a->dp;
  if ( dp )
  {
    v3 = 0;
    if ( a->used > 0 )
    {
      v4 = 0i64;
      do
      {
        ++v4;
        ++v3;
        a->dp[v4 - 1] = 0;
      }
      while ( v3 < a->used );
      dp = a->dp;
    }
    ltc_free(dp);
    a->dp = NULL;
    *(_QWORD *)&a->used = 0i64;
    a->sign = 0;
  }
}

