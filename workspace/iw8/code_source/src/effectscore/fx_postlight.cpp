/*
==============
FX_PostLight_GetInfo
==============
*/

FxPostLightInfo *__fastcall FX_PostLight_GetInfo()
{
  return ?FX_PostLight_GetInfo@@YAPEAUFxPostLightInfo@@XZ();
}

/*
==============
FX_PostLight_GenerateVerts
==============
*/

void __fastcall FX_PostLight_GenerateVerts(GfxCodeSurfGlob *codeSurfGlob, const FxPostLightInfo *postLightInfoAddr, const FxGenerateVertsCmd *cmd)
{
  ?FX_PostLight_GenerateVerts@@YAXPEAUGfxCodeSurfGlob@@PEBUFxPostLightInfo@@PEBUFxGenerateVertsCmd@@@Z(codeSurfGlob, postLightInfoAddr, cmd);
}

/*
==============
FX_PostLight_Add
==============
*/

void __fastcall FX_PostLight_Add(FxPostLight *postLight)
{
  ?FX_PostLight_Add@@YAXPEAUFxPostLight@@@Z(postLight);
}

/*
==============
FX_PostLight_Begin
==============
*/

void FX_PostLight_Begin(void)
{
  ?FX_PostLight_Begin@@YAXXZ();
}

/*
==============
FX_PostLight_Add
==============
*/
void FX_PostLight_Add(FxPostLight *postLight)
{
  int v2; 

  _RDI = postLight;
  if ( ((unsigned __int8)&g_postLightInfo.postLightCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &g_postLightInfo.postLightCount) )
    __debugbreak();
  v2 = _InterlockedExchangeAdd(&g_postLightInfo.postLightCount, 1u);
  if ( v2 < 96 )
  {
    __asm { vmovups ymm0, ymmword ptr [rdi] }
    _RCX = 5i64 * v2;
    _RAX = &g_postLightInfo;
    __asm
    {
      vmovups ymmword ptr [rax+rcx*8], ymm0
      vmovsd  xmm1, qword ptr [rdi+20h]
      vmovsd  qword ptr [rax+rcx*8+20h], xmm1
    }
  }
  else
  {
    if ( ((unsigned __int64)&g_postLightInfo.postLightCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &g_postLightInfo.postLightCount) )
      __debugbreak();
    _InterlockedDecrement(&g_postLightInfo.postLightCount);
  }
}

/*
==============
FX_PostLight_Begin
==============
*/
void FX_PostLight_Begin(void)
{
  g_postLightInfo.postLightCount = 0;
}

/*
==============
FX_PostLight_GenerateVerts
==============
*/
void FX_PostLight_GenerateVerts(GfxCodeSurfGlob *codeSurfGlob, const FxPostLightInfo *postLightInfoAddr, const FxGenerateVertsCmd *cmd)
{
  GfxCodeSurfGlob *v16; 
  volatile int postLightCount; 
  int v18; 
  bool v23; 
  unsigned __int64 v24; 
  unsigned __int64 v26; 
  bool v30; 
  unsigned int vertIndexBase; 
  int vertIndexOffset; 
  int v76; 
  __int64 v118; 
  r_double_index_t *v138; 
  int v139; 
  r_double_index_t *v140; 
  unsigned __int16 v141; 
  int v142; 
  int v143; 
  __int16 v144; 
  int v145; 
  __int16 v146; 
  unsigned __int16 v147; 
  double v161; 
  r_double_index_t v162; 
  r_double_index_t v163; 
  r_double_index_t v164; 
  float s; 
  float c; 
  unsigned int v167; 
  unsigned int argOffset; 
  unsigned __int64 v172; 
  r_double_index_t *indices; 
  GfxCodeSurfGlob *codeSurfGloba; 
  GfxCodeSurfBuffers outBuffers; 
  GfxCodeSurfArgs codeSurfArgs; 
  vec3_t src; 
  vec3_t dst; 
  char v179[88]; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-0B8h], xmm13
  }
  codeSurfGloba = codeSurfGlob;
  _RBX = cmd;
  v16 = codeSurfGlob;
  if ( !postLightInfoAddr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_postlight.cpp", 37, ASSERT_TYPE_ASSERT, "(postLightInfo)", (const char *)&queryFormat, "postLightInfo") )
    __debugbreak();
  postLightCount = postLightInfoAddr->postLightCount;
  v18 = 96;
  __asm
  {
    vmovss  xmm6, dword ptr [rbx+30h]
    vmovss  xmm7, dword ptr [rbx+34h]
    vmovss  xmm13, dword ptr [rbx+38h]
    vmovss  [rsp+220h+var_1DC], xmm6
  }
  if ( postLightCount < 96 )
    v18 = postLightCount;
  __asm
  {
    vmovss  dword ptr [rsp+220h+var_1D8], xmm7
    vmovss  dword ptr [rsp+220h+var_1D8+4], xmm13
  }
  if ( v18 )
  {
    _RBX = &postLightInfoAddr->postLights[0].color.array[2];
    v23 = 0;
    __asm { vmovaps [rsp+220h+var_68+8], xmm8 }
    v24 = 0i64;
    __asm
    {
      vmovaps [rsp+220h+var_78+8], xmm9
      vmovss  xmm9, cs:__real@3b808081
      vmovaps [rsp+220h+var_88+8], xmm10
      vmovaps [rsp+220h+var_98+8], xmm11
      vmovaps [rsp+220h+var_A8+8], xmm12
      vmovaps [rsp+220h+var_C8+8], xmm14
    }
    v26 = v18;
    __asm
    {
      vmovaps [rsp+220h+var_D8+8], xmm15
      vmovss  xmm15, cs:__real@3f490fdb
    }
    v172 = v18;
    do
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbx-6]
        vcomiss xmm0, cs:__real@3a83126f
      }
      if ( v23 )
      {
        __asm
        {
          vcvtss2sd xmm0, xmm0, xmm0
          vmovsd  qword ptr [rsp+220h+var_1F8], xmm0
        }
        v30 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_postlight.cpp", 57, ASSERT_TYPE_ASSERT, "( ( postLight->radius >= 0.001f ) )", "( postLight->radius ) = %g", v161);
        v23 = 0;
        if ( v30 )
          __debugbreak();
        v26 = v172;
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rbx-12h]
        vsubss  xmm10, xmm0, dword ptr [rbx-1Eh]
        vmovss  xmm0, dword ptr [rbx-0Eh]
        vsubss  xmm11, xmm0, dword ptr [rbx-1Ah]
        vmovss  xmm0, dword ptr [rbx-0Ah]
        vsubss  xmm12, xmm0, dword ptr [rbx-16h]
        vmulss  xmm1, xmm11, xmm11
        vmulss  xmm0, xmm10, xmm10
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm12, xmm12
        vaddss  xmm14, xmm2, xmm1
        vcomiss xmm14, cs:__real@38d1b717
      }
      if ( !v23 )
      {
        if ( !R_ReserveVertCodeSurfBuffers(&outBuffers, v16, 0x10u, 0x54u, 2u) )
          break;
        __asm
        {
          vmovss  xmm0, dword ptr [rbx-1Eh]
          vmovss  xmm1, dword ptr [rbx-1Ah]
        }
        vertIndexBase = outBuffers.vertIndexBase;
        vertIndexOffset = outBuffers.vertIndexOffset;
        __asm
        {
          vsubss  xmm8, xmm0, xmm6
          vmovss  xmm0, dword ptr [rbx-16h]
        }
        indices = outBuffers.indices;
        __asm { vsubss  xmm6, xmm0, xmm13 }
        v167 = outBuffers.vertIndexBase;
        argOffset = outBuffers.argOffset;
        __asm { vsubss  xmm7, xmm1, xmm7 }
        _RAX = R_CodeSurfArgsIter_Begin(v16, outBuffers.argOffset);
        __asm
        {
          vmovss  xmm2, cs:__real@3f800000
          vdivss  xmm0, xmm2, dword ptr [rbx-6]
          vsqrtss xmm1, xmm14, xmm14
          vmovss  dword ptr [rax+0Ch], xmm0
          vmovss  dword ptr [rax], xmm8
          vmovss  dword ptr [rax+4], xmm7
          vmovss  dword ptr [rax+8], xmm6
          vdivss  xmm0, xmm2, xmm14
          vmovss  dword ptr [rax+1Ch], xmm0
          vcmpless xmm0, xmm1, cs:__real@80000000
          vblendvps xmm0, xmm1, xmm2, xmm0
          vdivss  xmm2, xmm2, xmm0
          vmulss  xmm0, xmm10, xmm2
          vmovss  dword ptr [rbp+120h+src], xmm0
          vmulss  xmm0, xmm2, xmm12
          vmulss  xmm1, xmm11, xmm2
          vmovss  dword ptr [rax+10h], xmm10
          vmovss  dword ptr [rax+14h], xmm11
          vmovss  dword ptr [rax+18h], xmm12
          vmovss  xmm13, dword ptr [rbx-6]
          vmovss  dword ptr [rbp+120h+src+8], xmm0
          vmovss  dword ptr [rbp+120h+src+4], xmm1
        }
        PerpendicularVector(&src, &dst);
        __asm
        {
          vmovss  xmm2, dword ptr [rbp+120h+src+8]
          vmovss  xmm5, dword ptr [rbp+120h+dst+8]
          vmovss  xmm4, dword ptr [rbp+120h+dst+4]
          vmovss  xmm6, dword ptr [rbp+120h+src+4]
          vmulss  xmm0, xmm2, xmm4
          vmulss  xmm1, xmm6, xmm5
          vsubss  xmm11, xmm1, xmm0
          vmulss  xmm1, xmm2, dword ptr [rbp+120h+dst]
          vmulss  xmm0, xmm5, dword ptr [rbp+120h+src]
          vmulss  xmm2, xmm4, dword ptr [rbp+120h+src]
          vsubss  xmm12, xmm1, xmm0
          vmulss  xmm1, xmm6, dword ptr [rbp+120h+dst]
          vsubss  xmm14, xmm2, xmm1
          vmulss  xmm10, xmm13, cs:__real@3fb504f3
        }
        v76 = 0;
        _RSI = R_CodeSurfVertIter_Begin(v16, vertIndexBase + vertIndexOffset);
        _R15 = v179;
        _R14 = &_RSI->color.v[2];
        do
        {
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, r12d
            vmulss  xmm0, xmm0, xmm15; radians
          }
          FastSinCos(*(const float *)&_XMM0, &s, &c);
          __asm
          {
            vmulss  xmm5, xmm10, [rsp+220h+s]
            vmulss  xmm2, xmm5, dword ptr [rbp+120h+dst]
            vmulss  xmm4, xmm10, [rsp+220h+c]
            vmulss  xmm1, xmm11, xmm4
            vaddss  xmm8, xmm2, xmm1
            vmulss  xmm1, xmm5, dword ptr [rbp+120h+dst+4]
            vmulss  xmm3, xmm12, xmm4
            vaddss  xmm7, xmm3, xmm1
            vmulss  xmm1, xmm5, dword ptr [rbp+120h+dst+8]
            vmulss  xmm3, xmm13, dword ptr [rbp+120h+src]
            vmulss  xmm2, xmm14, xmm4
            vaddss  xmm6, xmm2, xmm1
            vaddss  xmm0, xmm8, xmm3
            vmovss  dword ptr [r15-8], xmm0
            vmovss  [rsp+220h+c], xmm4
            vmulss  xmm4, xmm13, dword ptr [rbp+120h+src+4]
            vaddss  xmm1, xmm7, xmm4
            vmovss  dword ptr [r15-4], xmm1
            vsubss  xmm1, xmm8, xmm3
            vaddss  xmm2, xmm1, dword ptr [rbx-1Eh]
            vmovss  [rsp+220h+s], xmm5
            vmulss  xmm5, xmm13, dword ptr [rbp+120h+src+8]
            vmovss  dword ptr [rsi], xmm2
            vaddss  xmm0, xmm6, xmm5
            vmovss  dword ptr [r15], xmm0
            vsubss  xmm0, xmm7, xmm4
            vaddss  xmm1, xmm0, dword ptr [rbx-1Ah]
            vmovss  dword ptr [r14-14h], xmm1
            vsubss  xmm2, xmm6, xmm5
            vaddss  xmm0, xmm2, dword ptr [rbx-16h]
            vmovss  dword ptr [r14-10h], xmm0
          }
          _R14[3] = 0.0;
          _R14 += 12;
          _R15 += 12;
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, eax
            vmulss  xmm1, xmm0, xmm9
            vmovss  dword ptr [r14-38h], xmm1
          }
          ++_RSI;
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, eax
            vmulss  xmm1, xmm0, xmm9
            vmovss  dword ptr [r14-34h], xmm1
          }
          ++v76;
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, eax
            vmulss  xmm1, xmm0, xmm9
            vmovss  dword ptr [r14-30h], xmm1
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, eax
            vmulss  xmm1, xmm0, xmm9
            vmovss  dword ptr [r14-2Ch], xmm1
          }
        }
        while ( v76 != 8 );
        _RCX = &_RSI->color.v[2];
        v118 = 8i64;
        _RDX = v179;
        do
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rdx-8]
            vaddss  xmm1, xmm0, dword ptr [rbx-1Eh]
            vmovss  xmm2, dword ptr [rdx-4]
            vmovss  dword ptr [rsi], xmm1
            vaddss  xmm0, xmm2, dword ptr [rbx-1Ah]
            vmovss  dword ptr [rcx-14h], xmm0
            vmovss  xmm1, dword ptr [rbx-16h]
            vaddss  xmm2, xmm1, dword ptr [rdx]
            vmovss  dword ptr [rcx-10h], xmm2
          }
          _RCX[3] = 0.0;
          _RCX += 12;
          ++_RSI;
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, eax
            vmulss  xmm1, xmm0, xmm9
            vmovss  dword ptr [rcx-38h], xmm1
          }
          _RDX += 12;
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, eax
            vmulss  xmm1, xmm0, xmm9
            vmovss  dword ptr [rcx-34h], xmm1
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, eax
            vmulss  xmm1, xmm0, xmm9
            vmovss  dword ptr [rcx-30h], xmm1
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, eax
            vmulss  xmm1, xmm0, xmm9
            vmovss  dword ptr [rcx-2Ch], xmm1
          }
          --v118;
        }
        while ( v118 );
        v138 = indices;
        v139 = 0;
        v140 = indices;
        do
        {
          v141 = vertIndexOffset + v139;
          v142 = v139++;
          v162.value[0] = v141;
          v162.value[1] = vertIndexOffset + v139 % 8;
          *v140 = v162;
          v162.value[0] = v141 + 8;
          v162.value[1] = v141 + 8;
          v140[1] = v162;
          v162.value[0] = vertIndexOffset + v139 % 8;
          v162.value[1] = v162.value[0] + 8;
          v140[2] = v162;
          v140 += 3;
        }
        while ( v142 != 7 );
        v143 = 0;
        do
        {
          v144 = vertIndexOffset + v143;
          v143 += 2;
          v163.value[0] = v144 + 2;
          v163.value[1] = v144 + 1;
          *v140 = v163;
          v163.value[0] = vertIndexOffset;
          v163.value[1] = v144 + 3;
          v140[1] = v163;
          v163.value[0] = v144 + 2;
          v163.value[1] = vertIndexOffset;
          v140[2] = v163;
          v140 += 3;
        }
        while ( v143 != 6 );
        v145 = 0;
        do
        {
          v146 = vertIndexOffset + v145;
          v164.value[0] = vertIndexOffset + 8;
          v147 = vertIndexOffset + v145 + 9;
          v145 += 2;
          v164.value[1] = v147;
          v140 += 3;
          v140[-3] = v164;
          v164.value[1] = vertIndexOffset + 8;
          v164.value[0] = v146 + 10;
          v140[-2] = v164;
          v164.value[1] = v146 + 11;
          v140[-1] = v164;
        }
        while ( v145 != 6 );
        v16 = codeSurfGloba;
        codeSurfArgs.material = *(Material **)(_RBX + 2);
        codeSurfArgs.vertIndexBase = v167;
        codeSurfArgs.argOffset = argOffset;
        codeSurfArgs.fxName = "PostLight";
        codeSurfArgs.indices = v138;
        codeSurfArgs.indexCount = 84;
        codeSurfArgs.argCount = 2;
        codeSurfArgs.sortOrder = 0;
        codeSurfArgs.flags = 0;
        R_AddCodeSurf(codeSurfGloba, &codeSurfArgs);
        v26 = v172;
        __asm
        {
          vmovss  xmm6, [rsp+220h+var_1DC]
          vmovss  xmm7, dword ptr [rsp+220h+var_1D8]
          vmovss  xmm13, dword ptr [rsp+220h+var_1D8+4]
        }
      }
      ++v24;
      _RBX += 40;
      v23 = v24 < v26;
    }
    while ( v24 != v26 );
    __asm
    {
      vmovaps xmm14, [rsp+220h+var_C8+8]
      vmovaps xmm12, [rsp+220h+var_A8+8]
      vmovaps xmm11, [rsp+220h+var_98+8]
      vmovaps xmm10, [rsp+220h+var_88+8]
      vmovaps xmm9, [rsp+220h+var_78+8]
      vmovaps xmm8, [rsp+220h+var_68+8]
      vmovaps xmm15, [rsp+220h+var_D8+8]
    }
  }
  __asm
  {
    vmovaps xmm6, [rsp+220h+var_48+8]
    vmovaps xmm7, [rsp+220h+var_58+8]
    vmovaps xmm13, [rsp+220h+var_B8+8]
  }
}

/*
==============
FX_PostLight_GetInfo
==============
*/
FxPostLightInfo *FX_PostLight_GetInfo()
{
  return &g_postLightInfo;
}

