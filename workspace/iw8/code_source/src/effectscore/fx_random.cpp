/*
==============
FX_RandomDir
==============
*/

void __fastcall FX_RandomDir(int seed, vec3_t *dir)
{
  ?FX_RandomDir@@YAXHAEATvec3_t@@@Z(seed, dir);
}

/*
==============
FX_InitRandom
==============
*/

void FX_InitRandom(void)
{
  ?FX_InitRandom@@YAXXZ();
}

/*
==============
FX_InitRandom
==============
*/
void FX_InitRandom(void)
{
  ;
}

/*
==============
FX_RandomDir
==============
*/
void FX_RandomDir(int seed, vec3_t *dir)
{
  char v30; 
  double v41; 
  double v42; 
  double v43; 
  double v44; 
  double v45; 
  char v47; 
  void *retaddr; 
  float c; 
  float s; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-18h], xmm6 }
  _RSI = fx_randomTable;
  __asm { vmovaps xmmword ptr [rax-28h], xmm7 }
  _RDI = dir;
  __asm { vmovaps xmmword ptr [rax-38h], xmm8 }
  _RBX = seed;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovss  xmm9, cs:__real@3f800000
    vmovss  xmm0, dword ptr [rsi+rbx*4+28h]
    vmulss  xmm1, xmm0, cs:__real@40000000
    vsubss  xmm8, xmm1, xmm9
    vcomiss xmm8, cs:__real@bf800000
    vcomiss xmm8, xmm9
    vcvtss2sd xmm0, xmm8, xmm8
    vmovsd  [rsp+98h+var_70], xmm0
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_random.cpp", 2162, ASSERT_TYPE_ASSERT, "( ( height >= -1.0f && height <= 1.0f ) )", "( height ) = %g", v41) )
    __debugbreak();
  __asm
  {
    vmulss  xmm7, xmm8, xmm8
    vsubss  xmm0, xmm9, xmm7
    vsqrtss xmm6, xmm0, xmm0
    vmovss  xmm0, dword ptr [rsi+rbx*4+24h]
    vmulss  xmm0, xmm0, cs:__real@40c90fdb; radians
  }
  FastSinCos(*(const float *)&_XMM0, &s, &c);
  __asm
  {
    vmovss  xmm0, [rsp+98h+c]
    vmovss  xmm1, [rsp+98h+s]
    vmulss  xmm3, xmm1, xmm6
    vmulss  xmm4, xmm0, xmm6
    vmulss  xmm1, xmm3, xmm3
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm1, xmm1, xmm0
    vaddss  xmm5, xmm1, xmm7
    vsubss  xmm2, xmm5, xmm9
    vandps  xmm2, xmm2, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm2, cs:__real@3b03126f
    vmovss  dword ptr [rdi], xmm4
    vmovss  dword ptr [rdi+4], xmm3
    vmovss  dword ptr [rdi+8], xmm8
  }
  if ( !v30 )
  {
    __asm
    {
      vsqrtss xmm0, xmm5, xmm5
      vcvtss2sd xmm1, xmm0, xmm0
      vmovsd  [rsp+98h+var_58], xmm1
      vcvtss2sd xmm2, xmm8, xmm8
      vmovsd  [rsp+98h+var_60], xmm2
      vcvtss2sd xmm3, xmm3, xmm3
      vmovsd  [rsp+98h+var_68], xmm3
      vcvtss2sd xmm0, xmm4, xmm4
      vmovsd  [rsp+98h+var_70], xmm0
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_random.cpp", 2172, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( dir ) )", "(%g, %g, %g) len %g", v42, v43, v44, v45) )
      __debugbreak();
  }
  __asm { vmovaps xmm7, [rsp+98h+var_28] }
  _R11 = &v47;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
}

