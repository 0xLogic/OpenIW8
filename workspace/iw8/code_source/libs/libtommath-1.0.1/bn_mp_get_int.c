/*
==============
mp_get_int
==============
*/
__int64 mp_get_int(mp_int *a)
{
  __int64 result; 
  unsigned int *dp; 
  int v3; 
  int v4; 
  __int64 v5; 
  int v6; 
  __int64 v7; 
  unsigned int *v8; 

  result = (unsigned int)a->used;
  if ( (_DWORD)result )
  {
    dp = a->dp;
    v3 = 2;
    if ( (int)result < 2 )
      v3 = result;
    v4 = v3 - 1;
    v5 = v4;
    v6 = v4 - 1;
    v7 = v6;
    result = dp[v5];
    if ( v6 >= 0 )
    {
      v8 = &dp[v6];
      do
      {
        result = *v8-- | ((_DWORD)result << 28);
        --v7;
      }
      while ( v7 >= 0 );
    }
  }
  return result;
}

