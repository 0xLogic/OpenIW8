/*
==============
mp_reduce_is_2k_l
==============
*/
__int64 mp_reduce_is_2k_l(mp_int *a)
{
  __int64 used; 
  unsigned int v6; 
  int v7; 
  int v8; 
  __int64 v13; 
  __int64 v29; 
  unsigned int *dp; 
  int v31; 

  used = a->used;
  if ( !(_DWORD)used )
    return 0i64;
  if ( (_DWORD)used == 1 )
    return 1i64;
  if ( (int)used <= 1 )
    return 0i64;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  if ( (int)used > 0 && (unsigned int)used >= 8 )
  {
    __asm
    {
      vpxor   xmm4, xmm4, xmm4
      vpxor   xmm5, xmm5, xmm5
    }
    _XMM6 = _xmm;
    _XMM7 = _xmm;
    v13 = 0i64;
    do
    {
      __asm
      {
        vpcmpeqd xmm3, xmm6, xmmword ptr [r8+rax*4]
        vpaddd  xmm1, xmm7, xmm4
        vpand   xmm2, xmm1, xmm3
        vpandn  xmm0, xmm3, xmm4
        vpcmpeqd xmm3, xmm6, xmmword ptr [r8+rax*4+10h]
        vpaddd  xmm1, xmm7, xmm5
        vpor    xmm4, xmm2, xmm0
      }
      v13 += 8i64;
      v7 += 8;
      __asm
      {
        vpand   xmm2, xmm1, xmm3
        vpandn  xmm0, xmm3, xmm5
        vpor    xmm5, xmm2, xmm0
      }
    }
    while ( v13 < (int)used - (int)used % 8 );
    __asm
    {
      vpaddd  xmm1, xmm5, xmm4
      vpsrldq xmm0, xmm1, 8
      vpaddd  xmm2, xmm1, xmm0
      vpsrldq xmm0, xmm2, 4
      vpaddd  xmm0, xmm2, xmm0
    }
    v8 = _XMM0;
  }
  v29 = v7;
  if ( v7 < used )
  {
    dp = a->dp;
    do
    {
      v31 = v8 + 1;
      if ( dp[v29] != 0xFFFFFFF )
        v31 = v8;
      ++v29;
      v8 = v31;
    }
    while ( v29 < used );
  }
  LOBYTE(v6) = v8 >= (int)used / 2;
  return v6;
}

