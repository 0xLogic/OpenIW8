/*
==============
mp_cnt_lsb
==============
*/
__int64 mp_cnt_lsb(mp_int *a)
{
  __int64 result; 
  int v3; 
  __int64 used; 
  __int64 v5; 
  unsigned int *dp; 
  unsigned int v7; 
  char v8; 
  __int64 v9; 

  result = a->used;
  if ( (_DWORD)result )
  {
    v3 = 0;
    if ( (int)result > 0 )
    {
      used = a->used;
      v5 = 0i64;
      dp = a->dp;
      do
      {
        if ( *dp )
          break;
        ++v3;
        ++v5;
        ++dp;
      }
      while ( v5 < used );
    }
    v7 = a->dp[v3];
    result = (unsigned int)(28 * v3);
    if ( (v7 & 1) == 0 )
    {
      do
      {
        v8 = v7;
        v7 >>= 4;
        v9 = v8 & 0xF;
        result = (unsigned int)(lnz[v9] + result);
      }
      while ( !(_DWORD)v9 );
    }
  }
  return result;
}

