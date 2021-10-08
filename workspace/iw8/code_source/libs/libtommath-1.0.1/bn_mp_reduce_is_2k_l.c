/*
==============
mp_reduce_is_2k_l
==============
*/
__int64 mp_reduce_is_2k_l(mp_int *a)
{
  __int64 used; 
  unsigned int v8; 
  int v9; 
  __int64 v15; 
  __int64 v33; 
  unsigned int *dp; 
  int v35; 

  used = a->used;
  if ( !(_DWORD)used )
    return 0i64;
  if ( (_DWORD)used == 1 )
    return 1i64;
  if ( (int)used <= 1 )
    return 0i64;
  v8 = 0;
  v9 = 0;
  _ER8 = 0;
  if ( (int)used > 0 && (unsigned int)used >= 8 )
  {
    __asm
    {
      vmovaps [rsp+28h+var_18], xmm6
      vmovaps [rsp+28h+var_28], xmm7
      vpxor   xmm4, xmm4, xmm4
      vpxor   xmm5, xmm5, xmm5
      vmovdqu xmm6, cs:__xmm@0fffffff0fffffff0fffffff0fffffff
      vmovdqu xmm7, cs:__xmm@00000001000000010000000100000001
    }
    v15 = 0i64;
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
      v15 += 8i64;
      v9 += 8;
      __asm
      {
        vpand   xmm2, xmm1, xmm3
        vpandn  xmm0, xmm3, xmm5
        vpor    xmm5, xmm2, xmm0
      }
    }
    while ( v15 < (int)used - (int)used % 8 );
    __asm
    {
      vmovaps xmm7, [rsp+28h+var_28]
      vmovaps xmm6, [rsp+28h+var_18]
      vpaddd  xmm1, xmm5, xmm4
      vpsrldq xmm0, xmm1, 8
      vpaddd  xmm2, xmm1, xmm0
      vpsrldq xmm0, xmm2, 4
      vpaddd  xmm0, xmm2, xmm0
      vmovd   r8d, xmm0
    }
  }
  v33 = v9;
  if ( v9 < used )
  {
    dp = a->dp;
    do
    {
      v35 = _ER8 + 1;
      if ( dp[v33] != 0xFFFFFFF )
        v35 = _ER8;
      ++v33;
      _ER8 = v35;
    }
    while ( v33 < used );
  }
  LOBYTE(v8) = _ER8 >= (int)used / 2;
  return v8;
}

