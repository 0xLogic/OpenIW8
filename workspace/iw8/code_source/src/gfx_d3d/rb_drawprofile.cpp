/*
==============
RB_IsUsingAnyProfile
==============
*/

bool __fastcall RB_IsUsingAnyProfile()
{
  return ?RB_IsUsingAnyProfile@@YA_NXZ();
}

/*
==============
RB_DrawProfile
==============
*/

void __fastcall RB_DrawProfile(GfxCmdBufContext *gfxContext)
{
  ?RB_DrawProfile@@YAXUGfxCmdBufContext@@@Z(gfxContext);
}

/*
==============
RB_ProfileDevGui
==============
*/

void RB_ProfileDevGui(void)
{
  ?RB_ProfileDevGui@@YAXXZ();
}

/*
==============
RB_DrawProfileScript
==============
*/

void __fastcall RB_DrawProfileScript(GfxCmdBufContext *gfxContext)
{
  ?RB_DrawProfileScript@@YAXUGfxCmdBufContext@@@Z(gfxContext);
}

/*
==============
RB_GetNextProfileChild
==============
*/

int __fastcall RB_GetNextProfileChild(const scrContext_t *scrContext, int parentIndex, int prevChildIndex, int depth)
{
  return ?RB_GetNextProfileChild@@YAHAEBUscrContext_t@@HHH@Z(scrContext, parentIndex, prevChildIndex, depth);
}

/*
==============
RB_DrawProfileScriptLineAndChildren
==============
*/

void __fastcall RB_DrawProfileScriptLineAndChildren(GfxCmdBufContext *gfxContext, const scrContext_t *scrContext, int profileIndex, float *y, int depth)
{
  ?RB_DrawProfileScriptLineAndChildren@@YAXUGfxCmdBufContext@@AEBUscrContext_t@@HPEAMH@Z(gfxContext, scrContext, profileIndex, y, depth);
}

/*
==============
RB_DrawProfile2
==============
*/

void __fastcall RB_DrawProfile2(GfxCmdBufContext *gfxContext)
{
  ?RB_DrawProfile2@@YAXUGfxCmdBufContext@@@Z(gfxContext);
}

/*
==============
RB_DrawProfileScriptLine
==============
*/

void __fastcall RB_DrawProfileScriptLine(GfxCmdBufContext *gfxContext, const scrContext_t *scrContext, int profileIndex, float y, int tab)
{
  ?RB_DrawProfileScriptLine@@YAXUGfxCmdBufContext@@AEBUscrContext_t@@HMH@Z(gfxContext, scrContext, profileIndex, y, tab);
}

/*
==============
RB_ProfileInit
==============
*/

void RB_ProfileInit(void)
{
  ?RB_ProfileInit@@YAXXZ();
}

/*
==============
CompareAvgSelfTimes
==============
*/

__int64 __fastcall CompareAvgSelfTimes(const void *e0, const void *e1, __int64 a3, double _XMM3_8)
{
  unsigned __int64 v5; 
  char v7; 

  v5 = *(int *)e1;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2sd xmm0, xmm0, dword ptr [rdx+rax+58C8h]
    vxorpd  xmm3, xmm3, xmm3
    vmulsd  xmm1, xmm0, qword ptr [rcx+rax+58D8h]
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2sd xmm0, xmm0, dword ptr [rcx+rax+58C8h]
    vmulsd  xmm0, xmm0, qword ptr [rdx+rax+58D8h]
    vsubsd  xmm2, xmm1, xmm0
    vcomisd xmm2, xmm3
  }
  if ( !is_mul_ok(0x38ui64, v5) )
    return 0xFFFFFFFFi64;
  if ( ((unsigned __int128)(56 * (__int128)*(int *)e1) >> 64 != 0) | v7 )
    return (unsigned int)(v5 - *(_DWORD *)e0);
  return 1i64;
}

/*
==============
CompareAvgTotalTimes
==============
*/

__int64 __fastcall CompareAvgTotalTimes(const void *e0, const void *e1, __int64 a3, double _XMM3_8)
{
  unsigned __int64 v5; 
  char v7; 

  v5 = *(int *)e1;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2sd xmm0, xmm0, dword ptr [rdx+rax+58C8h]
    vxorpd  xmm3, xmm3, xmm3
    vmulsd  xmm1, xmm0, qword ptr [rcx+rax+58D0h]
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2sd xmm0, xmm0, dword ptr [rcx+rax+58C8h]
    vmulsd  xmm0, xmm0, qword ptr [rdx+rax+58D0h]
    vsubsd  xmm2, xmm1, xmm0
    vcomisd xmm2, xmm3
  }
  if ( !is_mul_ok(0x38ui64, v5) )
    return 0xFFFFFFFFi64;
  if ( ((unsigned __int128)(56 * (__int128)*(int *)e1) >> 64 != 0) | v7 )
    return (unsigned int)(v5 - *(_DWORD *)e0);
  return 1i64;
}

/*
==============
CompareMaxSelfTimes
==============
*/
__int64 CompareMaxSelfTimes(const void *e0, const void *e1)
{
  __int64 v4; 
  __int64 v5; 
  unsigned int v6; 
  bool v9; 
  unsigned int v10; 

  v4 = *(int *)e1;
  v5 = *(int *)e0;
  v6 = drawProfGlob.global[v4].maxSelf.value[0];
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vxorpd  xmm1, xmm1, xmm1
  }
  v9 = v6 < drawProfGlob.global[v5].maxSelf.value[0];
  v10 = v6 - drawProfGlob.global[v5].maxSelf.value[0];
  __asm
  {
    vcvtsi2sd xmm0, xmm0, eax
    vcomisd xmm0, xmm1
  }
  if ( v9 )
    return 0xFFFFFFFFi64;
  if ( v9 || v10 == 0 )
    return (unsigned int)(v4 - v5);
  return 1i64;
}

/*
==============
CompareMaxTimes
==============
*/
__int64 CompareMaxTimes(const void *e0, const void *e1)
{
  __int64 v4; 
  __int64 v5; 
  unsigned int v6; 
  bool v9; 
  unsigned int v10; 

  v4 = *(int *)e1;
  v5 = *(int *)e0;
  v6 = drawProfGlob.global[v4].max.value[0];
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vxorpd  xmm1, xmm1, xmm1
  }
  v9 = v6 < drawProfGlob.global[v5].max.value[0];
  v10 = v6 - drawProfGlob.global[v5].max.value[0];
  __asm
  {
    vcvtsi2sd xmm0, xmm0, eax
    vcomisd xmm0, xmm1
  }
  if ( v9 )
    return 0xFFFFFFFFi64;
  if ( v9 || v10 == 0 )
    return (unsigned int)(v4 - v5);
  return 1i64;
}

/*
==============
CompareSelfTimes
==============
*/
__int64 CompareSelfTimes(const void *e0, const void *e1)
{
  __int64 v2; 
  __int64 v3; 
  __int64 result; 

  v2 = *(int *)e1;
  v3 = *(int *)e0;
  result = drawProfGlob.global[v2].read.self.value[0] - drawProfGlob.global[v3].read.self.value[0];
  if ( !(_DWORD)result )
    return (unsigned int)(v2 - v3);
  return result;
}

/*
==============
CompareTotalTimes
==============
*/
__int64 CompareTotalTimes(const void *e0, const void *e1)
{
  __int64 v2; 
  __int64 v3; 
  __int64 result; 

  v2 = *(int *)e1;
  v3 = *(int *)e0;
  result = drawProfGlob.global[v2].read.total.value[0] - drawProfGlob.global[v3].read.total.value[0];
  if ( !(_DWORD)result )
    return (unsigned int)(v2 - v3);
  return result;
}

/*
==============
RB_AddProfileThread
==============
*/
void RB_AddProfileThread(int threadContext)
{
  ProfileStack *StackForContext; 
  ProfileAtom *p_total; 
  unsigned int v5; 

  StackForContext = Profile_GetStackForContext(threadContext);
  _RDX = &drawProfGlob.global[0].read.self;
  p_total = &StackForContext->prof_array[0].read.total;
  do
  {
    v5 = p_total[-1].value[0];
    p_total += 10;
    _RDX[-11].value[0] += v5;
    _RDX->value[0] += p_total[-9].value[0];
    _RDX[-1].value[0] += p_total[-10].value[0];
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2sd xmm0, xmm0, rax
      vaddsd  xmm0, xmm0, qword ptr [rdx-20h]
      vmovsd  qword ptr [rdx-20h], xmm0
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2sd xmm0, xmm0, rax
      vaddsd  xmm0, xmm0, qword ptr [rdx-28h]
      vmovsd  qword ptr [rdx-28h], xmm0
    }
    _RDX[-2].value[0] += p_total[-11].value[0];
    _RDX += 14;
  }
  while ( (__int64)_RDX < (__int64)&unk_1544A76E8 );
}

/*
==============
RB_DrawAllProfileBackgrounds
==============
*/
void RB_DrawAllProfileBackgrounds(GfxCmdBufContext *gfxContext, const ProfileSettings *profSettings, int rowCount)
{
  int v25; 
  __int64 v27; 
  int v32; 
  float fmt; 
  float fmta; 
  float v43; 
  float v44; 
  float v45; 
  float v46; 
  float v47; 
  float v48; 
  float v49; 
  float v50; 
  float v51; 
  float v52; 
  GfxCmdBufContext v53[7]; 
  char v54; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
  }
  _R14 = gfxContext;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
  }
  if ( profSettings && profSettings->infoCount != rowCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_drawprofile.cpp", 376, ASSERT_TYPE_ASSERT, "(profSettings == 0 || profSettings->infoCount == rowCount)", (const char *)&queryFormat, "profSettings == NULL || profSettings->infoCount == rowCount") )
    __debugbreak();
  __asm
  {
    vmovss  xmm1, cs:drawProfGlob.fontHeight
    vmovss  xmm7, cs:__real@3f800000
    vmulss  xmm6, xmm1, cs:__real@40a00000
    vmovups xmm0, xmmword ptr [r14]
    vmovss  xmm9, cs:__real@40000000
    vmovss  xmm10, cs:__real@42e40000
    vmovss  xmm11, cs:__real@41680000
    vmulss  xmm2, xmm11, cs:drawProfGlob.fontWidth
    vmovss  [rsp+0D8h+var_90], xmm7
    vmovss  [rsp+0D8h+var_98], xmm7
    vsubss  xmm4, xmm1, xmm9
    vmulss  xmm1, xmm10, cs:drawProfGlob.fontWidth
    vxorps  xmm8, xmm8, xmm8
    vmovss  [rsp+0D8h+var_A0], xmm8
    vmovss  [rsp+0D8h+var_A8], xmm8
    vmovss  dword ptr [rsp+0D8h+var_B0], xmm4
    vaddss  xmm3, xmm6, xmm7
    vmovss  dword ptr [rsp+0D8h+fmt], xmm1
    vmovups [rsp+0D8h+var_78], xmm0
  }
  RB_DrawStretchPic(v53, rgp.whiteMaterial, *(float *)&_XMM2, *(float *)&_XMM3, fmt, v43, v45, v47, v49, v51, 0xA5000000, GFX_PRIM_STATS_DEBUG);
  v25 = 0;
  if ( rowCount > 0 )
  {
    __asm { vmovss  xmm1, cs:drawProfGlob.fontHeight }
    v27 = 0i64;
    do
    {
      __asm { vaddss  xmm6, xmm6, xmm1 }
      if ( !profSettings || profSettings->profDrawInfo[v27].probeIndex )
      {
        __asm
        {
          vmovups xmm0, xmmword ptr [r14]
          vmulss  xmm2, xmm11, cs:drawProfGlob.fontWidth
          vsubss  xmm4, xmm1, xmm9
          vmulss  xmm1, xmm10, cs:drawProfGlob.fontWidth
        }
        v32 = (v25 & 1) != 0 ? 0x28 : 0;
        __asm
        {
          vmovss  [rsp+0D8h+var_90], xmm7
          vmovss  [rsp+0D8h+var_98], xmm7
          vmovss  [rsp+0D8h+var_A0], xmm8
          vmovss  [rsp+0D8h+var_A8], xmm8
          vmovss  dword ptr [rsp+0D8h+var_B0], xmm4
          vaddss  xmm3, xmm6, xmm7
          vmovss  dword ptr [rsp+0D8h+fmt], xmm1
          vmovups [rsp+0D8h+var_78], xmm0
        }
        RB_DrawStretchPic(v53, rgp.whiteMaterial, *(float *)&_XMM2, *(float *)&_XMM3, fmta, v44, v46, v48, v50, v52, v32 | ((v32 | ((((v25 & 1) != 0 ? 0x28 : 0) | 0xFFFFA500) << 8)) << 8), GFX_PRIM_STATS_DEBUG);
        __asm { vmovss  xmm1, cs:drawProfGlob.fontHeight }
      }
      ++v25;
      ++v27;
    }
    while ( v25 < rowCount );
  }
  _R11 = &v54;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
  }
}

/*
==============
RB_DrawProfile2
==============
*/
void RB_DrawProfile2(GfxCmdBufContext *gfxContext)
{
  GfxCmdBufContext v2; 

  if ( profile2->current.integer )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rcx]
      vmovups xmmword ptr [rsp+38h+var_18.source], xmm0
    }
    RB_DrawProfile2Overlay(&v2);
  }
}

/*
==============
RB_DrawProfile2Overlay
==============
*/
void RB_DrawProfile2Overlay(GfxCmdBufContext *gfxContext)
{
  int v3; 
  int v4; 
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  __int64 integer; 
  const ProfileSettings *v20; 
  int v31; 
  __int64 v32; 
  const ProfileDrawInfo *v34; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float v43; 
  float v44; 
  float v45; 
  float v46; 
  float v47; 
  GfxCmdBufContext v48; 

  _RBP = gfxContext;
  v3 = (backEndData->prof_index + 4) % 5u;
  v4 = g_prof2_history_update_times[(v3 + 4) % 5u];
  v5 = g_prof2_history_update_times[v3] - v4;
  if ( v5 )
  {
    if ( v4 )
    {
      v6 = (g_prof2_history_update_server_index[v3] + 4) % 5u;
      v7 = g_prof2_history_server_update_times[(v6 + 4) % 5u];
      v8 = g_prof2_history_server_update_times[v6] - v7;
      if ( v8 )
      {
        if ( v7 )
        {
          __asm
          {
            vmovups xmm0, xmmword ptr [rbp+0]
            vmovups [rsp+0A8h+var_48], xmm0
            vmovaps [rsp+0A8h+var_38], xmm6
          }
          RB_EndSurfaceIfNeeded(&v48);
          __asm
          {
            vmovss  xmm1, cs:drawProfGlob.fontWidth
            vmulss  xmm3, xmm1, cs:__real@42280000
            vmovups xmm0, xmmword ptr [rbp+0]
            vmovss  xmm4, cs:drawProfGlob.fontHeight
            vmulss  xmm2, xmm1, cs:__real@41180000
            vmulss  xmm6, xmm4, cs:__real@40a00000
          }
          integer = profile2->current.integer;
          __asm
          {
            vxorps  xmm1, xmm1, xmm1
            vmovups [rsp+0A8h+var_48], xmm0
            vmovss  xmm0, cs:__real@3f800000
            vmovss  [rsp+0A8h+var_60], xmm0
            vmovss  [rsp+0A8h+var_68], xmm0
            vmovss  [rsp+0A8h+var_70], xmm1
            vmovss  [rsp+0A8h+var_78], xmm1
            vmovss  dword ptr [rsp+0A8h+var_80], xmm4
            vmovss  dword ptr [rsp+0A8h+fmt], xmm3
            vmovaps xmm3, xmm6
          }
          v20 = (const ProfileSettings *)&s_profileArrays[integer + 42].defaultProbeIndex[1];
          RB_DrawStretchPic(&v48, rgp.whiteMaterial, *(float *)&_XMM2, *(float *)&_XMM3, fmt, v43, v44, v45, v46, v47, 0xAF000000, GFX_PRIM_STATS_DEBUG);
          __asm
          {
            vmovups xmm0, xmmword ptr [rbp+0]
            vaddss  xmm2, xmm6, cs:drawProfGlob.fontHeight
            vmovups [rsp+0A8h+var_48], xmm0
            vmovss  xmm0, cs:drawProfGlob.fontWidth
            vmulss  xmm3, xmm0, cs:__real@41200000
            vmovss  dword ptr [rsp+0A8h+fmt], xmm2
          }
          RB_DrawText(&v48, "Probe Name", drawProfGlob.font, *(float *)&_XMM3, fmta, drawProfGlob.labelColor);
          __asm
          {
            vmovups xmm0, xmmword ptr [rbp+0]
            vaddss  xmm2, xmm6, cs:drawProfGlob.fontHeight
            vmovups [rsp+0A8h+var_48], xmm0
            vmovss  xmm0, cs:drawProfGlob.fontWidth
            vmulss  xmm3, xmm0, cs:__real@42340000
            vmovss  dword ptr [rsp+0A8h+fmt], xmm2
          }
          RB_DrawText(&v48, " Total", drawProfGlob.font, *(float *)&_XMM3, fmtb, drawProfGlob.labelColor);
          __asm
          {
            vmovss  xmm0, cs:drawProfGlob.fontHeight
            vaddss  xmm6, xmm0, xmm6
          }
          if ( profile2->current.integer != 2 )
          {
            v31 = 0;
            if ( v20->infoCount > 0 )
            {
              v32 = 0i64;
              do
              {
                __asm { vmovups xmm0, xmmword ptr [rbp+0] }
                v34 = &v20->profDrawInfo[v32];
                __asm
                {
                  vmovaps xmm2, xmm6
                  vmovups [rsp+0A8h+var_48], xmm0
                }
                if ( v34->probeIndex <= 100 )
                  *(float *)&_XMM0 = RB_DrawProfile2Row(&v48, v34, *(float *)&_XMM2, v5, NULL, v3);
                else
                  *(float *)&_XMM0 = RB_DrawProfile2Row(&v48, v34, *(float *)&_XMM2, v8, NULL, v6);
                ++v31;
                ++v32;
                __asm { vmovaps xmm6, xmm0 }
              }
              while ( v31 < v20->infoCount );
            }
          }
          if ( v20->infoCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_drawprofile.cpp", 790, ASSERT_TYPE_ASSERT, "(profSettings->infoCount > 0)", (const char *)&queryFormat, "profSettings->infoCount > 0") )
            __debugbreak();
          if ( profile2->current.integer == 2 )
          {
            __asm
            {
              vmovups xmm0, xmmword ptr [rbp+0]
              vmovaps xmm2, xmm6
              vmovups [rsp+0A8h+var_48], xmm0
            }
            RB_DrawProfile2_FX(&v48, v20, *(float *)&_XMM2, v5, v3);
          }
          __asm
          {
            vmovups xmm0, xmmword ptr [rbp+0]
            vmovups [rsp+0A8h+var_48], xmm0
          }
          RB_EndSurfaceIfNeeded(&v48);
          __asm { vmovaps xmm6, [rsp+0A8h+var_38] }
        }
      }
    }
  }
}

/*
==============
RB_DrawProfile2Row
==============
*/

float __fastcall RB_DrawProfile2Row(GfxCmdBufContext *gfxContext, const ProfileDrawInfo *drawInfo, double y, int time_delta, const float *timeBudgetMS, int history_index)
{
  __int64 probeIndex; 
  __int64 v23; 
  const char *v37; 
  int indentation; 
  const char *v40; 
  int colorIndex; 
  int v42; 
  float v48; 
  float v49; 
  float v50; 
  float v51; 
  float v52; 
  float v53; 
  float v54; 
  float v55; 
  GfxCmdBufContext v56; 
  char v59; 

  probeIndex = drawInfo->probeIndex;
  __asm { vmovaps [rsp+98h+var_18], xmm6 }
  _RSI = gfxContext;
  __asm { vmovaps xmm6, xmm2 }
  if ( (_DWORD)probeIndex )
  {
    v23 = probeIndex;
    __asm
    {
      vmovaps [rsp+98h+var_28], xmm7
      vxorps  xmm7, xmm7, xmm7
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm7, xmm7, rva ?g_prof2_history@@3PAY0GM@HA[r9+rcx*4]; int (near * g_prof2_history)[108]
      vucomiss xmm7, xmm0
    }
    if ( probeIndex + 108i64 * history_index || *prof2_enumNames[probeIndex] == 95 )
    {
      _RAX = timeBudgetMS;
      if ( timeBudgetMS )
      {
        __asm
        {
          vmovss  xmm2, dword ptr [rax]
          vmovsd  xmm1, cs:?msecPerRawTimerTick@@3NA; double msecPerRawTimerTick
          vxorps  xmm0, xmm0, xmm0
          vcvtpd2ps xmm1, xmm1
          vcvtsi2ss xmm0, xmm0, dword ptr [rax+28h]
          vdivss  xmm1, xmm1, xmm0
          vmulss  xmm3, xmm1, xmm7
          vcomiss xmm3, xmm2
          vcvtss2sd xmm2, xmm2, xmm2
          vmovq   r8, xmm2
        }
        v37 = j_va("%s (%.2f ms)", prof2_enumNames[v23], _R8);
        __asm { vmovups xmm0, xmmword ptr [rsi] }
        indentation = drawInfo->indentation;
        __asm
        {
          vmovss  [rsp+98h+var_70], xmm7
          vmovaps xmm3, xmm6
          vmovups [rsp+98h+var_38], xmm0
        }
        *(float *)&_XMM0 = RB_DrawProfile2Value(&v56, indentation, 4, *(float *)&_XMM3, time_delta, v50, v37, 0, 0);
      }
      else
      {
        v40 = prof2_enumNames[v23];
        __asm { vmovups xmm0, xmmword ptr [rsi] }
        colorIndex = drawInfo->colorIndex;
        v42 = drawInfo->indentation;
        __asm
        {
          vmovss  [rsp+98h+var_70], xmm7
          vmovaps xmm3, xmm6
          vmovups [rsp+98h+var_38], xmm0
        }
        *(float *)&_XMM0 = RB_DrawProfile2Value(&v56, v42, colorIndex, *(float *)&_XMM3, time_delta, v51, v40, 0, 0);
      }
    }
    else
    {
      __asm { vmovaps xmm0, xmm6 }
    }
    __asm { vmovaps xmm7, [rsp+98h+var_28] }
  }
  else
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rcx]
      vmovss  xmm1, cs:drawProfGlob.fontWidth
      vmulss  xmm3, xmm1, cs:__real@42280000
      vmulss  xmm2, xmm1, cs:__real@41180000
      vmovups [rsp+98h+var_38], xmm0
      vmovss  xmm0, cs:__real@3f800000
      vmovss  [rsp+98h+var_50], xmm0
      vmovss  [rsp+98h+var_58], xmm0
      vmovss  xmm0, cs:drawProfGlob.fontHeight
      vxorps  xmm1, xmm1, xmm1
      vmovss  [rsp+98h+var_60], xmm1
      vmovss  dword ptr [rsp+98h+var_68], xmm1
      vmovss  [rsp+98h+var_70], xmm0
      vmovss  [rsp+98h+var_78], xmm3
      vmovaps xmm3, xmm6
    }
    RB_DrawStretchPic(&v56, rgp.whiteMaterial, *(float *)&_XMM2, *(float *)&_XMM3, v48, v49, v52, v53, v54, v55, 0xAF000000, GFX_PRIM_STATS_DEBUG);
    __asm { vaddss  xmm0, xmm6, cs:drawProfGlob.fontHeight }
  }
  _R11 = &v59;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
  return *(float *)&_XMM0;
}

/*
==============
RB_DrawProfile2Total_FX
==============
*/

float __fastcall RB_DrawProfile2Total_FX(GfxCmdBufContext *gfxContext, int indentation, double y, int time_delta)
{
  const char *v34; 
  int v41; 
  char v52; 
  char v53; 
  const char *v54; 
  int v61; 
  char v68; 
  char v69; 
  const char *v70; 
  float v82; 
  float v83; 
  float v84; 
  GfxCmdBufContext v85; 

  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovaps [rsp+0B8h+var_38], xmm6
    vmovaps [rsp+0B8h+var_48], xmm7
    vxorps  xmm1, xmm1, xmm1
    vmovaps xmm6, xmm2
  }
  _R14 = gfxContext;
  __asm
  {
    vcvtsi2ss xmm0, xmm0, dword ptr [rdi+r13+134h]
    vcvtsi2ss xmm1, xmm1, dword ptr [rdi+r13+11Ch]
    vaddss  xmm3, xmm1, xmm0
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rdi+r13+138h]
    vaddss  xmm1, xmm3, xmm0
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rdi+r13+14Ch]
    vaddss  xmm2, xmm1, xmm0
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rdi+r13+150h]
    vaddss  xmm1, xmm2, xmm0
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rdi+r13+164h]
    vaddss  xmm7, xmm1, xmm0
    vxorps  xmm1, xmm1, xmm1
    vucomiss xmm7, xmm1
  }
  if ( v53 )
  {
    __asm { vmovaps xmm0, xmm6 }
  }
  else
  {
    __asm
    {
      vmovsd  xmm1, cs:__real@401b800000000000
      vmovq   rdx, xmm1
      vmovaps [rsp+0B8h+var_58], xmm8
    }
    v34 = j_va("FX UPDATE CPU TOTAL (%.2f ms)", *(double *)&_XMM1);
    __asm
    {
      vmovsd  xmm1, cs:?msecPerRawTimerTick@@3NA; double msecPerRawTimerTick
      vxorps  xmm0, xmm0, xmm0
      vcvtpd2ps xmm1, xmm1
      vcvtsi2ss xmm0, xmm0, dword ptr [rcx+28h]
      vdivss  xmm1, xmm1, xmm0
      vmulss  xmm2, xmm1, xmm7
      vcomiss xmm2, cs:__real@40dc0000
    }
    v41 = 4;
    __asm
    {
      vcomiss xmm2, cs:__real@40b00000
      vmovups xmm0, xmmword ptr [r14]
      vmovss  [rsp+0B8h+var_90], xmm7
      vmovaps xmm3, xmm6
      vmovups [rsp+0B8h+var_68], xmm0
    }
    *(float *)&_XMM0 = RB_DrawProfile2Value(&v85, indentation, 0, *(float *)&_XMM3, time_delta, v82, v34, 0, 0);
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, dword ptr [rdi+r13+15Ch]
      vxorps  xmm2, xmm2, xmm2
      vcvtsi2ss xmm2, xmm2, dword ptr [rdi+r13+154h]
      vaddss  xmm6, xmm2, xmm1
      vmovsd  xmm1, cs:__real@4009000000000000
      vmovq   rdx, xmm1
      vmovaps xmm8, xmm0
    }
    v54 = j_va("FX DRAW CPU TOTAL (%.2f ms)", _RDX);
    __asm
    {
      vmovsd  xmm1, cs:?msecPerRawTimerTick@@3NA; double msecPerRawTimerTick
      vxorps  xmm0, xmm0, xmm0
      vcvtpd2ps xmm1, xmm1
      vcvtsi2ss xmm0, xmm0, dword ptr [rcx+28h]
      vdivss  xmm1, xmm1, xmm0
      vmulss  xmm2, xmm1, xmm6
      vcomiss xmm2, cs:__real@40480000
    }
    if ( v52 | v53 )
    {
      __asm { vcomiss xmm2, cs:__real@40200000 }
      v61 = 0;
      if ( !(v52 | v53) )
        v61 = 12;
    }
    else
    {
      v61 = 4;
    }
    __asm
    {
      vmovups xmm0, xmmword ptr [r14]
      vmovss  [rsp+0B8h+var_90], xmm6
      vmovaps xmm3, xmm8
      vmovups [rsp+0B8h+var_68], xmm0
    }
    *(float *)&_XMM0 = RB_DrawProfile2Value(&v85, indentation, v61, *(float *)&_XMM3, time_delta, v83, v54, 0, 0);
    __asm
    {
      vmovsd  xmm1, cs:__real@4024000000000000
      vmovq   rdx, xmm1
      vmovaps xmm8, xmm0
      vaddss  xmm6, xmm6, xmm7
    }
    v70 = j_va("FX CPU TOTAL (%.2f ms)", _RDX);
    __asm
    {
      vmovsd  xmm2, cs:?msecPerRawTimerTick@@3NA; double msecPerRawTimerTick
      vxorps  xmm1, xmm1, xmm1
      vcvtpd2ps xmm2, xmm2
      vcvtsi2ss xmm1, xmm1, dword ptr [rcx+28h]
      vdivss  xmm2, xmm2, xmm1
      vmulss  xmm3, xmm2, xmm6
      vcomiss xmm3, cs:__real@41200000
    }
    if ( v68 | v69 )
    {
      __asm { vcomiss xmm3, cs:__real@41000000 }
      v41 = 0;
      if ( !(v68 | v69) )
        v41 = 12;
    }
    __asm
    {
      vmovups xmm0, xmmword ptr [r14]
      vmovss  [rsp+0B8h+var_90], xmm6
      vmovaps xmm3, xmm8
      vmovups [rsp+0B8h+var_68], xmm0
    }
    *(float *)&_XMM0 = RB_DrawProfile2Value(&v85, indentation, v41, *(float *)&_XMM3, time_delta, v84, v70, 0, 0);
    __asm { vmovaps xmm8, [rsp+0B8h+var_58] }
  }
  __asm
  {
    vmovaps xmm6, [rsp+0B8h+var_38]
    vmovaps xmm7, [rsp+0B8h+var_48]
  }
  return *(float *)&_XMM0;
}

/*
==============
RB_DrawProfile2Value
==============
*/

float __fastcall RB_DrawProfile2Value(GfxCmdBufContext *gfxContext, int indentation, int colorIndex, double y, int time_delta, float value, const char *name, int dmaMax, int stackMin)
{
  unsigned __int64 v15; 
  unsigned __int64 v28; 
  char v31; 
  GfxColor v32; 
  const char *v33; 
  const char *v46; 
  GfxColor v51; 
  const char *v52; 
  GfxColor v57; 
  const char *v58; 
  float v69; 
  float v70; 
  float v71; 
  float v72; 
  float v73; 
  float v74; 
  float v75; 
  float v76; 
  float v77; 
  float v78; 
  GfxCmdBufContext v79; 
  char dest[48]; 
  char v81; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
  }
  _RSI = gfxContext;
  __asm { vmovss  xmm8, [rsp+128h+arg_28] }
  v15 = colorIndex;
  __asm { vmovaps xmm7, xmm3 }
  Core_strncpy_truncate(dest, 0x2Fui64, name, 46i64 - indentation);
  __asm
  {
    vmovups xmm0, xmmword ptr [rsi]
    vmovss  xmm1, cs:drawProfGlob.fontWidth
    vmulss  xmm3, xmm1, cs:__real@42280000
    vmulss  xmm2, xmm1, cs:__real@41180000
    vmovups [rsp+128h+var_C8], xmm0
    vmovss  xmm0, cs:__real@3f800000
    vmovss  [rsp+128h+var_E0], xmm0
    vmovss  [rsp+128h+var_E8], xmm0
    vmovss  xmm0, cs:drawProfGlob.fontHeight
    vxorps  xmm6, xmm6, xmm6
    vmovss  [rsp+128h+var_F0], xmm6
    vmovss  [rsp+128h+var_F8], xmm6
    vmovss  [rsp+128h+var_100], xmm0
    vmovss  [rsp+128h+var_108], xmm3
    vmovaps xmm3, xmm7
  }
  RB_DrawStretchPic(&v79, rgp.whiteMaterial, *(float *)&_XMM2, *(float *)&_XMM3, v69, v74, v75, v76, v77, v78, 0xAF000000, GFX_PRIM_STATS_DEBUG);
  __asm
  {
    vmovups xmm0, xmmword ptr [rsi]
    vaddss  xmm1, xmm7, cs:drawProfGlob.fontHeight
    vmovups [rsp+128h+var_C8], xmm0
    vxorps  xmm0, xmm0, xmm0
  }
  v28 = v15 % 0xE;
  __asm
  {
    vcvtsi2ss xmm0, xmm0, ecx
    vmulss  xmm3, xmm0, cs:drawProfGlob.fontWidth
    vmovss  [rsp+128h+var_108], xmm1
  }
  RB_DrawText(&v79, dest, drawProfGlob.font, *(float *)&_XMM3, v70, drawProfGlob.textColorList[v28]);
  __asm { vucomiss xmm8, xmm6 }
  if ( !v31 || *name != 95 )
  {
    v32 = drawProfGlob.textColorList[v28];
    if ( profile2_mode->current.integer == 1 )
    {
      v33 = "%5.2f";
      __asm
      {
        vmovsd  xmm1, cs:?msecPerRawTimerTick@@3NA; double msecPerRawTimerTick
        vxorps  xmm0, xmm0, xmm0
        vcvtpd2ps xmm1, xmm1
        vcvtsi2ss xmm0, xmm0, dword ptr [rax+28h]
        vdivss  xmm1, xmm1, xmm0
        vmulss  xmm2, xmm8, xmm1
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm0, cs:__real@42c80000
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, [rsp+128h+arg_20]
        vdivss  xmm1, xmm0, xmm1
        vmulss  xmm2, xmm1, xmm8
      }
      v33 = "%5.2f%%";
    }
    __asm
    {
      vcvtss2sd xmm1, xmm2, xmm2
      vmovq   rdx, xmm1
    }
    v46 = j_va(v33, _RDX);
    __asm
    {
      vmovss  xmm1, cs:drawProfGlob.fontWidth
      vaddss  xmm2, xmm7, cs:drawProfGlob.fontHeight
      vmovups xmm0, xmmword ptr [rsi]
      vmulss  xmm3, xmm1, cs:__real@42340000
      vmovss  [rsp+128h+var_108], xmm2
      vmovups [rsp+128h+var_C8], xmm0
    }
    RB_DrawText(&v79, v46, drawProfGlob.font, *(float *)&_XMM3, v71, v32);
    if ( dmaMax )
    {
      v51 = drawProfGlob.textColorList[v28];
      v52 = j_va("% 5d", (unsigned int)dmaMax);
      __asm
      {
        vmovss  xmm1, cs:drawProfGlob.fontWidth
        vmovups xmm0, xmmword ptr [rsi]
        vaddss  xmm2, xmm7, cs:drawProfGlob.fontHeight
        vmulss  xmm3, xmm1, cs:__real@42b40000
        vmovss  [rsp+128h+var_108], xmm2
        vmovups [rsp+128h+var_C8], xmm0
      }
      RB_DrawText(&v79, v52, drawProfGlob.font, *(float *)&_XMM3, v72, v51);
    }
    if ( stackMin )
    {
      v57 = drawProfGlob.textColorList[v28];
      v58 = j_va("% 5d", (unsigned int)stackMin);
      __asm
      {
        vmovss  xmm1, cs:drawProfGlob.fontWidth
        vmovups xmm0, xmmword ptr [rsi]
        vaddss  xmm2, xmm7, cs:drawProfGlob.fontHeight
        vmulss  xmm3, xmm1, cs:__real@42c00000
        vmovss  [rsp+128h+var_108], xmm2
        vmovups [rsp+128h+var_C8], xmm0
      }
      RB_DrawText(&v79, v58, drawProfGlob.font, *(float *)&_XMM3, v73, v57);
    }
  }
  __asm { vaddss  xmm0, xmm7, cs:drawProfGlob.fontHeight }
  _R11 = &v81;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
  }
  return *(float *)&_XMM0;
}

/*
==============
RB_DrawProfile2_FX
==============
*/

float __fastcall RB_DrawProfile2_FX(GfxCmdBufContext *gfxContext, const ProfileSettings *profSettings, double y, int time_delta, int history_index)
{
  int infoCount; 
  int v16; 
  int v17; 
  __int64 v18; 
  const ProfileDrawInfo *v23; 
  const ProfileDrawInfo *profDrawInfo; 
  __int64 v31; 
  int indentation; 
  float result; 
  char *fmt; 
  int v39; 
  GfxCmdBufContext v40; 
  char v45; 
  void *retaddr; 
  int v47; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-38h], xmm6 }
  _R12 = gfxContext;
  __asm { vmovaps xmm6, xmm2 }
  if ( !profSettings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_drawprofile.cpp", 643, ASSERT_TYPE_ASSERT, "(profSettings)", (const char *)&queryFormat, "profSettings") )
    __debugbreak();
  infoCount = profSettings->infoCount;
  v16 = 0;
  v17 = history_index;
  if ( infoCount > 0 )
  {
    v18 = 0i64;
    __asm
    {
      vmovaps xmmword ptr [rsp+0B0h+var_48+8], xmm7
      vmovss  xmm7, cs:__real@3fa00000
      vmovaps [rsp+0B0h+var_58+8], xmm8
      vmovss  xmm8, cs:__real@3f200000
      vmovaps [rsp+0B0h+var_68+8], xmm9
      vmovss  xmm9, cs:__real@40700000
      vmovaps xmmword ptr [rsp+40h], xmm10
      vmovss  xmm10, cs:__real@40200000
    }
    do
    {
      v23 = &profSettings->profDrawInfo[v18];
      switch ( v23->probeIndex )
      {
        case 'G':
          v39 = v17;
          fmt = (char *)&v47;
          __asm { vmovss  [rbp+4Fh+arg_0], xmm9 }
          break;
        case 'N':
        case 'Y':
          v39 = v17;
          fmt = (char *)&v47;
          __asm { vmovss  [rbp+4Fh+arg_0], xmm7 }
          break;
        case 'T':
        case 'U':
          v39 = v17;
          fmt = (char *)&v47;
          __asm { vmovss  [rbp+4Fh+arg_0], xmm8 }
          break;
        case 'W':
          v39 = v17;
          fmt = (char *)&v47;
          __asm { vmovss  [rbp+4Fh+arg_0], xmm10 }
          break;
        default:
          v39 = v17;
          fmt = NULL;
          break;
      }
      __asm
      {
        vmovups xmm0, xmmword ptr [r12]
        vmovaps xmm2, xmm6
        vmovups [rbp+4Fh+var_80], xmm0
      }
      *(float *)&_XMM0 = RB_DrawProfile2Row(&v40, v23, *(double *)&_XMM2, time_delta, (const float *)fmt, v39);
      infoCount = profSettings->infoCount;
      ++v16;
      ++v18;
      __asm { vmovaps xmm6, xmm0 }
    }
    while ( v16 < infoCount );
    __asm
    {
      vmovaps xmm10, xmmword ptr [rsp+40h]
      vmovaps xmm9, [rsp+0B0h+var_68+8]
      vmovaps xmm8, [rsp+0B0h+var_58+8]
      vmovaps xmm7, xmmword ptr [rsp+0B0h+var_48+8]
    }
  }
  profDrawInfo = profSettings->profDrawInfo;
  v31 = infoCount;
  if ( profDrawInfo[infoCount - 1].probeIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_drawprofile.cpp", 703, ASSERT_TYPE_ASSERT, "(profDrawInfo->probeIndex == PROF2_BLANK)", (const char *)&queryFormat, "profDrawInfo->probeIndex == PROF2_BLANK") )
    __debugbreak();
  __asm { vmovups xmm0, xmmword ptr [r12] }
  indentation = profDrawInfo[v31 - 1].indentation;
  __asm
  {
    vmovaps xmm2, xmm6
    vmovups [rbp+4Fh+var_80], xmm0
  }
  result = RB_DrawProfile2Total_FX(&v40, indentation, *(double *)&_XMM2, time_delta);
  _R11 = &v45;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
  return result;
}

/*
==============
RB_DrawProfile
==============
*/

void __fastcall RB_DrawProfile(GfxCmdBufContext *gfxContext, double _XMM1_8)
{
  const dvar_t *v9; 
  int integer; 
  int v12; 
  int v13; 
  const dvar_t **i; 
  ProfileReadable *p_read; 
  __int64 v16; 
  ProfileAtom *p_min; 
  __int64 v18; 
  int DisplayThread; 
  int j; 
  ProfileStack *StackForContext; 
  ProfileAtom *p_total; 
  unsigned int v24; 
  unsigned int *p_maxHits; 
  unsigned int v31; 
  unsigned int v32; 
  unsigned int v33; 
  int v35; 
  int *v43; 
  __int64 v50; 
  int EnumParity; 
  int *v52; 
  __int64 v59; 
  __int64 v60; 
  const char *v61; 
  unsigned __int64 v68; 
  const ProfileSettings *v78; 
  __int64 v83; 
  const ProfileDrawInfo *profDrawInfo; 
  float fmt; 
  float fmta; 
  float v89; 
  GfxCmdBufContext v91; 
  GfxCmdBufContext v92; 
  GfxCmdBufContext v93; 
  GfxCmdBufContext v94; 
  GfxCmdBufContext v95; 
  GfxCmdBufContext v96; 
  GfxCmdBufContext v97; 
  GfxCmdBufContext v98; 
  GfxCmdBufContext v99; 
  GfxCmdBufContext v100; 
  GfxCmdBufContext v101; 
  GfxCmdBufContext v102; 
  GfxCmdBufContext v103; 
  GfxCmdBufContext v104; 
  GfxCmdBufContext v105; 
  GfxCmdBufContext v106; 
  int v107[16]; 
  char dest[112]; 

  v9 = profile;
  _RSI = gfxContext;
  integer = profile->current.integer;
  if ( integer )
  {
    v12 = 0;
    if ( integer == 1 )
    {
      v13 = 0;
      for ( i = prof_probe; !(*i)->current.integer; ++i )
      {
        if ( (unsigned int)++v13 >= 0x10 )
          return;
      }
    }
    if ( profile_thread->modified || profile->modified )
    {
      memset_0(drawProfGlob.global, 0, sizeof(drawProfGlob.global));
      p_min = &drawProfGlob.global[0].min;
      v18 = 826i64;
      do
      {
        p_min->value[0] = -1;
        p_min += 14;
        --v18;
      }
      while ( v18 );
      Dvar_ClearModified(v9);
      Dvar_ClearModified(profile_thread);
    }
    else
    {
      p_read = &drawProfGlob.global[0].read;
      v16 = 826i64;
      do
      {
        *(_QWORD *)&p_read->hits = 0i64;
        p_read->self.value[0] = 0;
        p_read = (ProfileReadable *)((char *)p_read + 56);
        --v16;
      }
      while ( v16 );
    }
    DisplayThread = Profile_GetDisplayThread();
    if ( DisplayThread >= gfxCfg.threadContextCount )
    {
      for ( j = 0; j < gfxCfg.threadContextCount; ++j )
      {
        StackForContext = Profile_GetStackForContext(j);
        _RDX = &drawProfGlob.global[0].read.self;
        p_total = &StackForContext->prof_array[0].read.total;
        do
        {
          v24 = p_total[-1].value[0];
          p_total += 10;
          _RDX[-11].value[0] += v24;
          _RDX->value[0] += p_total[-9].value[0];
          _RDX[-1].value[0] += p_total[-10].value[0];
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2sd xmm0, xmm0, rax
            vaddsd  xmm0, xmm0, qword ptr [rdx-20h]
            vmovsd  qword ptr [rdx-20h], xmm0
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2sd xmm0, xmm0, rax
            vaddsd  xmm0, xmm0, qword ptr [rdx-28h]
            vmovsd  qword ptr [rdx-28h], xmm0
          }
          _RDX[-2].value[0] += p_total[-11].value[0];
          _RDX += 14;
        }
        while ( (__int64)_RDX < (__int64)&unk_1544A76E8 );
      }
    }
    else
    {
      RB_AddProfileThread(DisplayThread);
    }
    p_maxHits = &drawProfGlob.global[0].maxHits;
    do
    {
      ++*(p_maxHits - 7);
      v31 = p_maxHits[4];
      if ( p_maxHits[2] < v31 )
        p_maxHits[2] = v31;
      if ( p_maxHits[1] > v31 )
        p_maxHits[1] = v31;
      v32 = p_maxHits[3];
      if ( v32 > *p_maxHits )
        *p_maxHits = v32;
      v33 = p_maxHits[5];
      if ( *(p_maxHits - 1) < v33 )
        *(p_maxHits - 1) = v33;
      p_maxHits += 14;
    }
    while ( (__int64)p_maxHits < (__int64)&unk_1544A76D4 );
    __asm
    {
      vmovups xmm0, xmmword ptr [rsi]
      vmovups [rsp+280h+var_240], xmm0
    }
    RB_EndSurfaceIfNeeded(&v91);
    v35 = profile->current.integer;
    switch ( v35 )
    {
      case 1:
        __asm
        {
          vmovaps [rsp+280h+var_30], xmm6; jumptable 00000001423E94FB case 1
          vmovaps [rsp+280h+var_40], xmm7
          vmovaps [rsp+280h+var_50], xmm8
          vmovaps [rsp+280h+var_60], xmm9
          vmovups xmm9, xmmword ptr [rsi]
          vmovaps [rsp+280h+var_70], xmm10
          vmovups [rbp+180h+var_1D0], xmm9
          vmovaps [rsp+280h+var_80], xmm11
        }
        RB_EndSurfaceIfNeeded(&v98);
        v43 = v107;
        __asm
        {
          vmovss  xmm10, cs:__real@41680000
          vmovss  xmm0, cs:drawProfGlob.fontWidth
          vmovss  xmm7, cs:__real@42d00000
        }
        v107[0] = prof_probe[0]->current.integer;
        __asm
        {
          vxorps  xmm8, xmm8, xmm8
          vmulss  xmm6, xmm0, xmm10
        }
        v107[1] = prof_probe[1]->current.integer;
        v107[2] = prof_probe[2]->current.integer;
        v107[3] = prof_probe[3]->current.integer;
        v107[4] = prof_probe[4]->current.integer;
        v107[5] = prof_probe[5]->current.integer;
        v107[6] = prof_probe[6]->current.integer;
        v107[7] = prof_probe[7]->current.integer;
        v107[8] = prof_probe[8]->current.integer;
        v107[9] = prof_probe[9]->current.integer;
        v107[10] = prof_probe[10]->current.integer;
        v107[11] = prof_probe[11]->current.integer;
        v107[12] = prof_probe[12]->current.integer;
        v107[13] = prof_probe[13]->current.integer;
        v107[14] = prof_probe[14]->current.integer;
        v107[15] = prof_probe[15]->current.integer;
        __asm { vcvtsi2ss xmm8, xmm8, rcx }
        do
        {
          v50 = *v43;
          if ( (_DWORD)v50 )
          {
            EnumParity = Profile_GetEnumParity(v50);
            __asm
            {
              vmovss  dword ptr [rsp+280h+var_258], xmm8
              vmovss  dword ptr [rsp+280h+fmt], xmm6
              vmovups [rbp+180h+var_1C0], xmm9
            }
            RB_DrawProfileHistoryGraph(&v99, &drawProfGlob.global[v50].read, EnumParity, v12, fmt, v89);
            __asm { vaddss  xmm6, xmm6, xmm7 }
          }
          ++v12;
          ++v43;
        }
        while ( v12 < 16 );
        v52 = v107;
        __asm
        {
          vmovss  xmm0, cs:drawProfGlob.fontWidth
          vmovss  xmm11, cs:__real@3f000000
          vxorps  xmm8, xmm8, xmm8
          vmulss  xmm6, xmm0, xmm10
          vmovss  xmm10, cs:__real@42c80000
          vcvtsi2ss xmm8, xmm8, rcx
        }
        v59 = 16i64;
        do
        {
          v60 = *v52;
          if ( (_DWORD)v60 )
          {
            v61 = prof_enumNames[v60];
            __asm
            {
              vdivss  xmm0, xmm10, xmm0
              vaddss  xmm2, xmm0, xmm11
              vxorps  xmm1, xmm1, xmm1
              vmovss  xmm3, xmm1, xmm2
              vxorps  xmm0, xmm0, xmm0
              vroundss xmm4, xmm0, xmm3, 1
              vcvttss2si eax, xmm4
            }
            v68 = _EAX + 1;
            if ( v68 > 0x64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_drawprofile.cpp", 312, ASSERT_TYPE_ASSERT, "(charLimit <= ( sizeof( *array_counter( label ) ) + 0 ))", (const char *)&queryFormat, "charLimit <= ARRAY_COUNT( label )") )
              __debugbreak();
            Core_strncpy_truncate(dest, 0x64ui64, v61, v68);
            __asm
            {
              vmovaps xmm3, xmm6
              vmovss  dword ptr [rsp+280h+fmt], xmm8
              vmovdqa [rbp+180h+var_1B0], xmm9
            }
            RB_DrawText(&v100, dest, drawProfGlob.font, *(float *)&_XMM3, fmta, drawProfGlob.textColorList[0]);
            __asm
            {
              vmovss  xmm0, cs:drawProfGlob.fontWidth
              vaddss  xmm6, xmm6, xmm7
            }
          }
          ++v52;
          --v59;
        }
        while ( v59 );
        __asm { vmovdqa [rbp+180h+var_1A0], xmm9 }
        RB_EndSurfaceIfNeeded(&v101);
        _RSI = gfxContext;
        __asm
        {
          vmovaps xmm11, [rsp+280h+var_80]
          vmovaps xmm10, [rsp+280h+var_70]
          vmovaps xmm9, [rsp+280h+var_60]
          vmovaps xmm8, [rsp+280h+var_50]
          vmovaps xmm7, [rsp+280h+var_40]
          vmovaps xmm6, [rsp+280h+var_30]
        }
        break;
      case 2:
        __asm
        {
          vmovups xmm0, xmmword ptr [rsi]; jumptable 00000001423E94FB case 2
          vmovups [rsp+280h+var_230], xmm0
        }
        RB_DrawSlowProfileOverlay(&v92, (int (__fastcall *)(const void *, const void *))CompareSelfTimes);
        break;
      case 3:
        __asm
        {
          vmovups xmm0, xmmword ptr [rsi]; jumptable 00000001423E94FB case 3
          vmovups [rsp+280h+var_220], xmm0
        }
        RB_DrawSlowProfileOverlay(&v93, (int (__fastcall *)(const void *, const void *))CompareTotalTimes);
        break;
      case 4:
        __asm
        {
          vmovups xmm0, xmmword ptr [rsi]; jumptable 00000001423E94FB case 4
          vmovups [rsp+280h+var_210], xmm0
        }
        RB_DrawSlowProfileOverlay(&v94, (int (__fastcall *)(const void *, const void *))CompareAvgSelfTimes);
        break;
      case 5:
        __asm
        {
          vmovups xmm0, xmmword ptr [rsi]; jumptable 00000001423E94FB case 5
          vmovups [rbp+180h+var_200], xmm0
        }
        RB_DrawSlowProfileOverlay(&v95, (int (__fastcall *)(const void *, const void *))CompareAvgTotalTimes);
        break;
      case 6:
        __asm
        {
          vmovups xmm0, xmmword ptr [rsi]; jumptable 00000001423E94FB case 6
          vmovups [rbp+180h+var_1F0], xmm0
        }
        RB_DrawSlowProfileOverlay(&v96, (int (__fastcall *)(const void *, const void *))CompareMaxTimes);
        break;
      case 7:
        __asm
        {
          vmovups xmm0, xmmword ptr [rsi]; jumptable 00000001423E94FB case 7
          vmovups [rbp+180h+var_1E0], xmm0
        }
        RB_DrawSlowProfileOverlay(&v97, (int (__fastcall *)(const void *, const void *))CompareMaxSelfTimes);
        break;
      default:
        if ( !v35 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_drawprofile.cpp", 1083, ASSERT_TYPE_ASSERT, "(profile->current.integer != PROFPAGE_DISABLED)", (const char *)&queryFormat, "profile->current.integer != PROFPAGE_DISABLED") )
          __debugbreak();
        __asm
        {
          vmovups xmm0, xmmword ptr [rsi]
          vmovups [rbp+180h+var_190], xmm0
        }
        v78 = &s_profileArrays[profile->current.integer - 8];
        RB_DrawAllProfileBackgrounds(&v102, v78, v78->infoCount);
        __asm
        {
          vmovups xmm0, xmmword ptr [rsi]
          vmovups [rbp+180h+var_180], xmm0
        }
        RB_DrawProfileHistory(&v103, v78);
        __asm
        {
          vmovups xmm0, xmmword ptr [rsi]
          vmovups [rbp+180h+var_170], xmm0
        }
        *(float *)&_XMM0 = RB_DrawProfileLabels(&v104);
        __asm
        {
          vxorps  xmm1, xmm1, xmm1
          vmovss  cs:g_tally, xmm1
          vmovaps xmm3, xmm0
        }
        if ( v78->infoCount > 0 )
        {
          v83 = 0i64;
          do
          {
            profDrawInfo = v78->profDrawInfo;
            __asm
            {
              vmovups xmm0, xmmword ptr [rsi]
              vmovups [rbp+180h+var_160], xmm0
            }
            *(float *)&_XMM0 = RB_DrawProfileRow(&v105, profDrawInfo[v83].probeIndex, profDrawInfo[v83].indentation, *(float *)&_XMM3);
            ++v12;
            ++v83;
            __asm { vmovaps xmm3, xmm0 }
          }
          while ( v12 < v78->infoCount );
        }
        break;
    }
    __asm
    {
      vmovups xmm0, xmmword ptr [rsi]
      vmovups [rbp+180h+var_150], xmm0
    }
    RB_EndSurfaceIfNeeded(&v106);
  }
}

/*
==============
RB_DrawProfileGraphData
==============
*/

void __fastcall RB_DrawProfileGraphData(GfxCmdBufContext *gfxContext, int column, double y, double width, unsigned int min, unsigned int max, float avg, const volatile unsigned int *data, unsigned int numDataEntries)
{
  unsigned int v28; 
  char v41; 
  char v42; 
  char v43; 
  bool v61; 
  unsigned int v94; 
  double v120; 
  double v121; 
  double v122; 
  double v123; 
  GfxCmdBufContext v129; 
  GfxPointVertex v130; 
  unsigned int v134; 
  char v143; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
  }
  _R13 = gfxContext;
  __asm
  {
    vmovss  xmm1, cs:drawProfGlob.largeFontHeight
    vsubss  xmm9, xmm1, cs:__real@40000000
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, edx
    vmulss  xmm0, xmm0, cs:drawProfGlob.largeFontWidth
    vmovss  [rsp+178h+var_124], xmm0
    vmovss  [rsp+178h+var_11C], xmm3
    vmovss  [rsp+178h+var_120], xmm2
    vmovaps xmm10, xmm3
  }
  if ( numDataEntries < 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_drawprofile.cpp", 201, ASSERT_TYPE_ASSERT, "(numDataEntries >= 2)", (const char *)&queryFormat, "numDataEntries >= 2") )
    __debugbreak();
  v28 = 0;
  if ( numDataEntries != 1 )
  {
    __asm
    {
      vmovss  xmm5, [rsp+178h+arg_30]
      vmovaps [rsp+178h+var_38], xmm6
      vmovaps [rsp+178h+var_48], xmm7
      vmovaps [rsp+178h+var_58], xmm8
      vmovaps [rsp+178h+var_88], xmm11
      vmovaps [rsp+178h+var_98], xmm12
      vmovss  xmm12, cs:__real@3f800000
      vmovaps [rsp+178h+var_A8], xmm13
      vmovaps [rsp+178h+var_B8], xmm14
      vxorps  xmm0, xmm0, xmm0
      vxorps  xmm3, xmm3, xmm3
      vcvtsi2ss xmm3, xmm3, rbp
      vcvtsi2ss xmm0, xmm0, r14
      vdivss  xmm1, xmm12, xmm0
      vmovaps [rsp+178h+var_C8], xmm15
      vmovss  xmm15, cs:__real@437f0000
      vmovss  [rsp+178h+var_118], xmm1
      vmovss  [rsp+178h+var_128], xmm3
      vdivss  xmm4, xmm12, xmm3
      vxorps  xmm14, xmm14, xmm14
      vxorps  xmm6, xmm6, xmm6
    }
    do
    {
      __asm { vxorps  xmm0, xmm0, xmm0 }
      v43 = v41 | v42;
      __asm
      {
        vcomiss xmm3, xmm6
        vcvtsi2ss xmm0, xmm0, r8
        vsubss  xmm1, xmm0, xmm5
        vmulss  xmm2, xmm1, xmm4
        vmaxss  xmm0, xmm2, xmm6
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, rbx
        vminss  xmm11, xmm0, xmm12
        vsubss  xmm0, xmm1, xmm5
        vmulss  xmm2, xmm0, xmm4
        vmaxss  xmm1, xmm2, xmm6
        vminss  xmm13, xmm1, xmm12
      }
      if ( v41 | v42 )
      {
        __asm { vmovaps xmm8, xmm6 }
      }
      else
      {
        v43 = v41 | v42;
        __asm
        {
          vcomiss xmm9, xmm6
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, rcx
          vsubss  xmm0, xmm12, xmm0
          vmulss  xmm7, xmm0, xmm9
        }
        if ( v41 )
        {
          __asm
          {
            vcvtss2sd xmm0, xmm9, xmm9
            vmovsd  [rsp+178h+var_148], xmm0
            vxorpd  xmm0, xmm0, xmm0
            vmovsd  [rsp+178h+var_150], xmm0
          }
          v61 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 713, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%g, %g", v120, v122);
          v43 = !v61;
          if ( v61 )
            __debugbreak();
          __asm { vmovss  xmm3, [rsp+178h+var_128] }
        }
        __asm
        {
          vmaxss  xmm0, xmm7, xmm6
          vminss  xmm8, xmm0, xmm9
        }
      }
      __asm { vcomiss xmm3, xmm6 }
      if ( v43 )
      {
        __asm { vmovaps xmm7, xmm6 }
      }
      else
      {
        __asm
        {
          vcomiss xmm9, xmm6
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, rcx
          vsubss  xmm0, xmm12, xmm0
          vmulss  xmm7, xmm0, xmm9
        }
        if ( v41 )
        {
          __asm
          {
            vcvtss2sd xmm0, xmm9, xmm9
            vmovsd  [rsp+178h+var_148], xmm0
            vxorpd  xmm0, xmm0, xmm0
            vmovsd  [rsp+178h+var_150], xmm0
          }
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 713, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%g, %g", v121, v123) )
            __debugbreak();
        }
        __asm
        {
          vmaxss  xmm0, xmm7, xmm6
          vminss  xmm7, xmm0, xmm9
        }
      }
      __asm
      {
        vxorps  xmm2, xmm2, xmm2
        vcvtsi2ss xmm2, xmm2, rax
        vaddss  xmm0, xmm2, xmm12
        vmulss  xmm1, xmm0, [rsp+178h+var_118]
        vmulss  xmm2, xmm2, [rsp+178h+var_118]
        vmulss  xmm0, xmm2, [rsp+178h+var_11C]
        vaddss  xmm2, xmm8, [rsp+178h+var_120]
        vmovss  xmm8, cs:__real@3f000000
        vmulss  xmm10, xmm1, xmm10
        vaddss  xmm1, xmm0, [rsp+178h+var_124]
        vsubss  xmm0, xmm12, xmm11
        vmovss  [rsp+178h+var_F8], xmm1
        vmulss  xmm1, xmm0, xmm15
        vaddss  xmm3, xmm1, xmm8
        vmovss  [rsp+178h+var_F4], xmm2
        vxorps  xmm2, xmm2, xmm2
        vmovss  xmm0, xmm2, xmm3
        vroundss xmm1, xmm14, xmm0, 1
        vcvttss2si edi, xmm1
        vmovss  [rsp+178h+var_F0], xmm6
      }
      if ( _EDI > 255 )
        _EDI = 255;
      if ( _EDI < 0 )
        LOBYTE(_EDI) = 0;
      __asm
      {
        vmulss  xmm0, xmm11, xmm15
        vaddss  xmm2, xmm0, xmm8
        vroundss xmm0, xmm14, xmm2, 1
        vcvttss2si ebx, xmm0
      }
      if ( _EBX > 255 )
        _EBX = 255;
      if ( _EBX < 0 )
        LOBYTE(_EBX) = 0;
      __asm
      {
        vaddss  xmm0, xmm10, [rsp+178h+var_124]
        vaddss  xmm1, xmm7, [rsp+178h+var_120]
      }
      v94 = (unsigned __int8)_EBX | (((unsigned __int8)_EDI | 0xFFFF0000) << 8);
      __asm
      {
        vmovss  [rsp+178h+var_E8], xmm0
        vsubss  xmm0, xmm12, xmm13
        vmovss  [rsp+178h+var_E4], xmm1
        vmulss  xmm1, xmm0, xmm15
        vaddss  xmm3, xmm1, xmm8
        vxorps  xmm2, xmm2, xmm2
        vmovss  xmm0, xmm2, xmm3
        vroundss xmm1, xmm14, xmm0, 1
        vcvttss2si edi, xmm1
      }
      *(_DWORD *)v130.color = v94;
      __asm { vmovss  [rsp+178h+var_E0], xmm6 }
      if ( _EDI > 255 )
        _EDI = 255;
      if ( _EDI < 0 )
        LOBYTE(_EDI) = 0;
      __asm
      {
        vmulss  xmm0, xmm13, xmm15
        vaddss  xmm2, xmm0, xmm8
        vroundss xmm0, xmm14, xmm2, 1
        vcvttss2si ebx, xmm0
      }
      if ( _EBX > 255 )
        _EBX = 255;
      if ( _EBX < 0 )
        LOBYTE(_EBX) = 0;
      __asm { vmovups xmm0, xmmword ptr [r13+0] }
      v134 = (unsigned __int8)_EBX | (((unsigned __int8)_EDI | 0xFFFF0000) << 8);
      __asm { vmovups [rsp+178h+var_108], xmm0 }
      RB_DrawLines2D(&v129, 2, 2, &v130);
      __asm
      {
        vmovss  xmm3, [rsp+178h+var_128]
        vmovss  xmm10, [rsp+178h+var_11C]
        vmovss  xmm5, [rsp+178h+arg_30]
      }
      ++v28;
      __asm { vdivss  xmm4, xmm12, xmm3 }
    }
    while ( v28 < numDataEntries - 1 );
    __asm
    {
      vmovaps xmm15, [rsp+178h+var_C8]
      vmovaps xmm14, [rsp+178h+var_B8]
      vmovaps xmm13, [rsp+178h+var_A8]
      vmovaps xmm12, [rsp+178h+var_98]
      vmovaps xmm11, [rsp+178h+var_88]
      vmovaps xmm8, [rsp+178h+var_58]
      vmovaps xmm7, [rsp+178h+var_48]
      vmovaps xmm6, [rsp+178h+var_38]
    }
  }
  _R11 = &v143;
  __asm
  {
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
  }
}

/*
==============
RB_DrawProfileHistory
==============
*/
void RB_DrawProfileHistory(GfxCmdBufContext *gfxContext, const ProfileSettings *profSettings)
{
  int v13; 
  int integer; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  int v23; 
  int v24; 
  int v25; 
  int v26; 
  int v27; 
  int v28; 
  int v29; 
  int *v33; 
  __int64 v37; 
  int EnumParity; 
  int *v40; 
  __int64 v47; 
  __int64 v48; 
  const char *v49; 
  unsigned __int64 v57; 
  float fmt; 
  float fmta; 
  float v70; 
  GfxCmdBufContext v71; 
  int v72[16]; 
  char dest[112]; 
  char v74; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmmword ptr [rax-88h], xmm11
    vmovups xmm0, xmmword ptr [rcx]
  }
  _R14 = gfxContext;
  __asm { vmovups [rsp+180h+var_150], xmm0 }
  RB_EndSurfaceIfNeeded(&v71);
  v13 = 0;
  integer = prof_probe[0]->current.integer;
  if ( !integer )
  {
    if ( profSettings )
      integer = profSettings->defaultProbeIndex[0];
    else
      integer = 0;
  }
  v72[0] = integer;
  v15 = prof_probe[1]->current.integer;
  if ( !v15 )
  {
    if ( profSettings )
      v15 = profSettings->defaultProbeIndex[1];
    else
      v15 = 0;
  }
  v72[1] = v15;
  v16 = prof_probe[2]->current.integer;
  if ( !v16 )
  {
    if ( profSettings )
      v16 = profSettings->defaultProbeIndex[2];
    else
      v16 = 0;
  }
  v72[2] = v16;
  v17 = prof_probe[3]->current.integer;
  if ( !v17 )
  {
    if ( profSettings )
      v17 = profSettings->defaultProbeIndex[3];
    else
      v17 = 0;
  }
  v72[3] = v17;
  v18 = prof_probe[4]->current.integer;
  if ( !v18 )
  {
    if ( profSettings )
      v18 = profSettings->defaultProbeIndex[4];
    else
      v18 = 0;
  }
  v72[4] = v18;
  v19 = prof_probe[5]->current.integer;
  if ( !v19 )
  {
    if ( profSettings )
      v19 = profSettings->defaultProbeIndex[5];
    else
      v19 = 0;
  }
  v72[5] = v19;
  v20 = prof_probe[6]->current.integer;
  if ( !v20 )
  {
    if ( profSettings )
      v20 = profSettings->defaultProbeIndex[6];
    else
      v20 = 0;
  }
  v72[6] = v20;
  v21 = prof_probe[7]->current.integer;
  if ( !v21 )
  {
    if ( profSettings )
      v21 = profSettings->defaultProbeIndex[7];
    else
      v21 = 0;
  }
  v72[7] = v21;
  v22 = prof_probe[8]->current.integer;
  if ( !v22 )
  {
    if ( profSettings )
      v22 = profSettings->defaultProbeIndex[8];
    else
      v22 = 0;
  }
  v72[8] = v22;
  v23 = prof_probe[9]->current.integer;
  if ( !v23 )
  {
    if ( profSettings )
      v23 = profSettings->defaultProbeIndex[9];
    else
      v23 = 0;
  }
  v72[9] = v23;
  v24 = prof_probe[10]->current.integer;
  if ( !v24 )
  {
    if ( profSettings )
      v24 = profSettings->defaultProbeIndex[10];
    else
      v24 = 0;
  }
  v72[10] = v24;
  v25 = prof_probe[11]->current.integer;
  if ( !v25 )
  {
    if ( profSettings )
      v25 = profSettings->defaultProbeIndex[11];
    else
      v25 = 0;
  }
  v72[11] = v25;
  v26 = prof_probe[12]->current.integer;
  if ( !v26 )
  {
    if ( profSettings )
      v26 = profSettings->defaultProbeIndex[12];
    else
      v26 = 0;
  }
  v72[12] = v26;
  v27 = prof_probe[13]->current.integer;
  if ( !v27 )
  {
    if ( profSettings )
      v27 = profSettings->defaultProbeIndex[13];
    else
      v27 = 0;
  }
  v72[13] = v27;
  v28 = prof_probe[14]->current.integer;
  if ( !v28 )
  {
    if ( profSettings )
      v28 = profSettings->defaultProbeIndex[14];
    else
      v28 = 0;
  }
  v72[14] = v28;
  v29 = prof_probe[15]->current.integer;
  if ( !v29 )
  {
    if ( profSettings )
      v29 = profSettings->defaultProbeIndex[15];
    else
      v29 = 0;
  }
  __asm
  {
    vmovss  xmm9, cs:__real@41680000
    vmovss  xmm0, cs:drawProfGlob.fontWidth
    vmovss  xmm8, cs:__real@42d00000
  }
  v72[15] = v29;
  v33 = v72;
  __asm
  {
    vxorps  xmm7, xmm7, xmm7
    vcvtsi2ss xmm7, xmm7, rcx
    vmulss  xmm6, xmm0, xmm9
  }
  do
  {
    v37 = *v33;
    if ( (_DWORD)v37 )
    {
      EnumParity = Profile_GetEnumParity(v37);
      __asm
      {
        vmovups xmm0, xmmword ptr [r14]
        vmovss  dword ptr [rsp+180h+var_158], xmm7
        vmovss  dword ptr [rsp+180h+fmt], xmm6
        vmovups [rsp+180h+var_150], xmm0
      }
      RB_DrawProfileHistoryGraph(&v71, &drawProfGlob.global[v37].read, EnumParity, v13, fmt, v70);
      __asm { vaddss  xmm6, xmm6, xmm8 }
    }
    ++v13;
    ++v33;
  }
  while ( v13 < 16 );
  v40 = v72;
  __asm
  {
    vmovss  xmm0, cs:drawProfGlob.fontWidth
    vmovss  xmm10, cs:__real@42c80000
    vmovss  xmm11, cs:__real@3f000000
    vmulss  xmm6, xmm0, xmm9
    vxorps  xmm9, xmm9, xmm9
    vcvtsi2ss xmm9, xmm9, rcx
  }
  v47 = 16i64;
  do
  {
    v48 = *v40;
    if ( (_DWORD)v48 )
    {
      v49 = prof_enumNames[v48];
      __asm
      {
        vmovups xmm7, xmmword ptr [r14]
        vdivss  xmm0, xmm10, xmm0
        vaddss  xmm2, xmm0, xmm11
        vxorps  xmm1, xmm1, xmm1
        vmovss  xmm3, xmm1, xmm2
        vxorps  xmm0, xmm0, xmm0
        vroundss xmm4, xmm0, xmm3, 1
        vcvttss2si eax, xmm4
      }
      v57 = _EAX + 1;
      if ( v57 > 0x64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_drawprofile.cpp", 312, ASSERT_TYPE_ASSERT, "(charLimit <= ( sizeof( *array_counter( label ) ) + 0 ))", (const char *)&queryFormat, "charLimit <= ARRAY_COUNT( label )") )
        __debugbreak();
      Core_strncpy_truncate(dest, 0x64ui64, v49, v57);
      __asm
      {
        vmovaps xmm3, xmm6
        vmovss  dword ptr [rsp+180h+fmt], xmm9
        vmovdqa [rsp+180h+var_150], xmm7
      }
      RB_DrawText(&v71, dest, drawProfGlob.font, *(float *)&_XMM3, fmta, drawProfGlob.textColorList[0]);
      __asm
      {
        vmovss  xmm0, cs:drawProfGlob.fontWidth
        vaddss  xmm6, xmm6, xmm8
      }
    }
    ++v40;
    --v47;
  }
  while ( v47 );
  __asm
  {
    vmovups xmm0, xmmword ptr [r14]
    vmovups [rsp+180h+var_150], xmm0
  }
  RB_EndSurfaceIfNeeded(&v71);
  _R11 = &v74;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
  }
}

/*
==============
RB_DrawProfileHistoryGraph
==============
*/
void RB_DrawProfileHistoryGraph(GfxCmdBufContext *gfxContext, const ProfileReadable *read, int parity, int probeIndex, float x, float y)
{
  __int64 v19; 
  __int64 v20; 
  unsigned __int64 historyCount; 
  int v35; 
  int v39; 
  signed int v41; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float v74; 
  float v75; 
  float v76; 
  float v77; 
  float v78; 
  float v79; 
  float v80; 
  float v81; 
  float v82; 
  float v83; 
  float v84; 
  float v85; 
  float v86; 
  float v87; 
  float v88; 
  GfxCmdBufContext v89[4]; 
  char v92; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-18h], xmm6 }
  _RBX = read;
  __asm { vmovaps xmmword ptr [rax-28h], xmm7 }
  _RBP = gfxContext;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovaps [rsp+0F8h+var_88], xmm13
  }
  v19 = probeIndex;
  if ( !read && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_drawprofile.cpp", 265, ASSERT_TYPE_ASSERT, "(read)", (const char *)&queryFormat, "read") )
    __debugbreak();
  v20 = v19;
  _R14 = &drawProfGlob;
  if ( drawProfGlob.log[v20].parity != parity )
  {
    historyCount = drawProfGlob.log[v20].historyCount;
    drawProfGlob.log[v20].historyCount = historyCount + 1;
    __asm { vmovsd  xmm0, qword ptr [rbx] }
    _RDX = v20 * 1208 + 12 * (historyCount % 0x64);
    __asm { vmovsd  qword ptr [rdx+r14+64h], xmm0 }
    *(unsigned int *)((char *)drawProfGlob.log[0].history[0].self.value + _RDX) = _RBX->self.value[0];
    drawProfGlob.log[v20].parity = parity;
  }
  __asm
  {
    vmovups xmm0, xmmword ptr [rbp+0]
    vmovss  xmm6, cs:__real@3f800000
    vmovss  xmm8, cs:__real@42800000
    vmovss  xmm12, [rsp+0F8h+arg_28]
    vmovss  xmm13, [rsp+0F8h+arg_20]
    vsubss  xmm3, xmm12, cs:drawProfGlob.fontHeight
    vmovss  [rsp+0F8h+var_B0], xmm6
    vmovss  [rsp+0F8h+var_B8], xmm6
    vmovups [rsp+0F8h+var_98], xmm0
    vaddss  xmm0, xmm8, cs:drawProfGlob.fontHeight
    vxorps  xmm7, xmm7, xmm7
    vmovss  [rsp+0F8h+var_C0], xmm7
    vmovss  [rsp+0F8h+var_C8], xmm7
    vmovss  dword ptr [rsp+0F8h+var_D0], xmm0
    vmovss  xmm0, cs:__real@42c80000
    vmovaps [rsp+0F8h+var_48], xmm9
    vmovaps xmm2, xmm13
    vmovss  dword ptr [rsp+0F8h+fmt], xmm0
    vmovaps [rsp+0F8h+var_58], xmm10
  }
  RB_DrawStretchPic(v89, rgp.whiteMaterial, *(float *)&_XMM2, *(float *)&_XMM3, fmt, v74, v77, v80, v83, v86, 0x55000000u, GFX_PRIM_STATS_DEBUG);
  Sys_GetValue(0);
  v35 = drawProfGlob.log[v20].historyCount;
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, ebx
    vmulss  xmm2, xmm8, dword ptr [rax+8B4Ch]
  }
  v39 = 0;
  __asm { vdivss  xmm11, xmm2, xmm1 }
  if ( v35 - 100 >= 0 )
    v39 = v35 - 100;
  v41 = v39;
  if ( v39 < v35 )
  {
    __asm
    {
      vaddss  xmm10, xmm13, cs:__real@42c60000
      vaddss  xmm9, xmm12, xmm8
    }
    do
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, ecx
        vsubss  xmm2, xmm10, xmm0
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, rax
        vmulss  xmm1, xmm0, xmm11
        vcomiss xmm1, xmm6
      }
      if ( v41 >= (unsigned int)(100 * (v41 / 100)) )
        __asm { vminss  xmm1, xmm1, xmm8 }
      else
        __asm { vmovaps xmm1, xmm6 }
      __asm
      {
        vmovups xmm0, xmmword ptr [rbp+0]
        vmovss  [rsp+0F8h+var_B0], xmm6
        vmovss  [rsp+0F8h+var_B8], xmm6
        vmovss  [rsp+0F8h+var_C0], xmm7
        vmovss  [rsp+0F8h+var_C8], xmm7
        vmovss  dword ptr [rsp+0F8h+var_D0], xmm1
        vsubss  xmm3, xmm9, xmm1
        vmovss  dword ptr [rsp+0F8h+fmt], xmm6
        vmovups [rsp+0F8h+var_98], xmm0
      }
      RB_DrawStretchPic(v89, rgp.whiteMaterial, *(float *)&_XMM2, *(float *)&_XMM3, fmta, v75, v78, v81, v84, v87, 0xFF00FFFF, GFX_PRIM_STATS_DEBUG);
      v35 = drawProfGlob.log[v20].historyCount;
      ++v41;
    }
    while ( v41 < v35 );
  }
  if ( v39 < v35 )
  {
    __asm
    {
      vaddss  xmm10, xmm13, cs:__real@42c60000
      vaddss  xmm9, xmm12, xmm8
    }
    do
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, ecx
        vsubss  xmm2, xmm10, xmm0
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, rax
        vmulss  xmm1, xmm0, xmm11
        vcomiss xmm1, xmm6
      }
      if ( v39 >= (unsigned int)(100 * (v39 / 100)) )
        __asm { vminss  xmm1, xmm1, xmm8 }
      else
        __asm { vmovaps xmm1, xmm6 }
      __asm
      {
        vmovups xmm0, xmmword ptr [rbp+0]
        vmovss  [rsp+0F8h+var_B0], xmm6
        vmovss  [rsp+0F8h+var_B8], xmm6
        vmovss  [rsp+0F8h+var_C0], xmm7
        vmovss  [rsp+0F8h+var_C8], xmm7
        vmovss  dword ptr [rsp+0F8h+var_D0], xmm1
        vsubss  xmm3, xmm9, xmm1
        vmovss  dword ptr [rsp+0F8h+fmt], xmm6
        vmovups [rsp+0F8h+var_98], xmm0
      }
      RB_DrawStretchPic(v89, rgp.whiteMaterial, *(float *)&_XMM2, *(float *)&_XMM3, fmtb, v76, v79, v82, v85, v88, 0xFF0000FF, GFX_PRIM_STATS_DEBUG);
      ++v39;
    }
    while ( v39 < drawProfGlob.log[v20].historyCount );
  }
  __asm { vmovaps xmm10, [rsp+0F8h+var_58] }
  _R11 = &v92;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm9, [rsp+0F8h+var_48]
  }
}

/*
==============
RB_DrawProfileLabels
==============
*/
float RB_DrawProfileLabels(GfxCmdBufContext *gfxContext)
{
  float v60; 
  float v61; 
  float v62; 
  float v63; 
  float v64; 
  float v65; 
  float v66; 
  float v67; 
  float v68; 
  float v69; 
  float v70; 
  float v71; 
  float v72; 
  GfxCmdBufContext v73; 

  __asm
  {
    vmovss  xmm1, cs:drawProfGlob.fontHeight
    vmovups xmm0, xmmword ptr [rcx]
  }
  _RBX = gfxContext;
  __asm
  {
    vmovaps [rsp+50h+var_10], xmm6
    vmulss  xmm6, xmm1, cs:__real@40a00000
    vaddss  xmm2, xmm1, xmm6
    vmovss  xmm1, cs:drawProfGlob.fontWidth
    vmulss  xmm3, xmm1, cs:__real@41700000
    vmovss  [rsp+50h+var_30], xmm2
    vmovups [rbp+var_20], xmm0
  }
  RB_DrawText(&v73, "Probe Name", drawProfGlob.font, *(float *)&_XMM3, v60, drawProfGlob.labelColor);
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx]
    vaddss  xmm2, xmm6, cs:drawProfGlob.fontHeight
    vmovups [rbp+var_20], xmm0
    vmovss  xmm0, cs:drawProfGlob.fontWidth
    vmulss  xmm3, xmm0, cs:__real@425c0000
    vmovss  [rsp+50h+var_30], xmm2
  }
  RB_DrawText(&v73, "  Self", drawProfGlob.font, *(float *)&_XMM3, v61, drawProfGlob.labelColor);
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx]
    vaddss  xmm2, xmm6, cs:drawProfGlob.fontHeight
    vmovups [rbp+var_20], xmm0
    vmovss  xmm0, cs:drawProfGlob.fontWidth
    vmulss  xmm3, xmm0, cs:__real@42740000
    vmovss  [rsp+50h+var_30], xmm2
  }
  RB_DrawText(&v73, " Total", drawProfGlob.font, *(float *)&_XMM3, v62, drawProfGlob.labelColor);
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx]
    vaddss  xmm2, xmm6, cs:drawProfGlob.fontHeight
    vmovups [rbp+var_20], xmm0
    vmovss  xmm0, cs:drawProfGlob.fontWidth
    vmulss  xmm3, xmm0, cs:__real@42860000
    vmovss  [rsp+50h+var_30], xmm2
  }
  RB_DrawText(&v73, " AvSlf", drawProfGlob.font, *(float *)&_XMM3, v63, drawProfGlob.labelColor);
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx]
    vaddss  xmm2, xmm6, cs:drawProfGlob.fontHeight
    vmovups [rbp+var_20], xmm0
    vmovss  xmm0, cs:drawProfGlob.fontWidth
    vmulss  xmm3, xmm0, cs:__real@42920000
    vmovss  [rsp+50h+var_30], xmm2
  }
  RB_DrawText(&v73, " MaxSlf", drawProfGlob.font, *(float *)&_XMM3, v64, drawProfGlob.labelColor);
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx]
    vaddss  xmm2, xmm6, cs:drawProfGlob.fontHeight
    vmovups [rbp+var_20], xmm0
    vmovss  xmm0, cs:drawProfGlob.fontWidth
    vmulss  xmm3, xmm0, cs:__real@42a00000
    vmovss  [rsp+50h+var_30], xmm2
  }
  RB_DrawText(&v73, "  Tally", drawProfGlob.font, *(float *)&_XMM3, v65, drawProfGlob.labelColor);
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx]
    vaddss  xmm2, xmm6, cs:drawProfGlob.fontHeight
    vmovups [rbp+var_20], xmm0
    vmovss  xmm0, cs:drawProfGlob.fontWidth
    vmulss  xmm3, xmm0, cs:__real@42ae0000
    vmovss  [rsp+50h+var_30], xmm2
  }
  RB_DrawText(&v73, " AvTot", drawProfGlob.font, *(float *)&_XMM3, v66, drawProfGlob.labelColor);
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx]
    vaddss  xmm2, xmm6, cs:drawProfGlob.fontHeight
    vmovups [rbp+var_20], xmm0
    vmovss  xmm0, cs:drawProfGlob.fontWidth
    vmulss  xmm3, xmm0, cs:__real@42ba0000
    vmovss  [rsp+50h+var_30], xmm2
  }
  RB_DrawText(&v73, "   Min", drawProfGlob.font, *(float *)&_XMM3, v67, drawProfGlob.labelColor);
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx]
    vaddss  xmm2, xmm6, cs:drawProfGlob.fontHeight
    vmovups [rbp+var_20], xmm0
    vmovss  xmm0, cs:drawProfGlob.fontWidth
    vmulss  xmm3, xmm0, cs:__real@42c60000
    vmovss  [rsp+50h+var_30], xmm2
  }
  RB_DrawText(&v73, "    Max", drawProfGlob.font, *(float *)&_XMM3, v68, drawProfGlob.labelColor);
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx]
    vaddss  xmm2, xmm6, cs:drawProfGlob.fontHeight
    vmovups [rbp+var_20], xmm0
    vmovss  xmm0, cs:drawProfGlob.fontWidth
    vmulss  xmm3, xmm0, cs:__real@42d40000
    vmovss  [rsp+50h+var_30], xmm2
  }
  RB_DrawText(&v73, "  Hit", drawProfGlob.font, *(float *)&_XMM3, v69, drawProfGlob.labelColor);
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx]
    vaddss  xmm2, xmm6, cs:drawProfGlob.fontHeight
    vmovups [rbp+var_20], xmm0
    vmovss  xmm0, cs:drawProfGlob.fontWidth
    vmulss  xmm3, xmm0, cs:__real@42de0000
    vmovss  [rsp+50h+var_30], xmm2
  }
  RB_DrawText(&v73, "  AvH", drawProfGlob.font, *(float *)&_XMM3, v70, drawProfGlob.labelColor);
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx]
    vaddss  xmm2, xmm6, cs:drawProfGlob.fontHeight
    vmovups [rbp+var_20], xmm0
    vmovss  xmm0, cs:drawProfGlob.fontWidth
    vmulss  xmm3, xmm0, cs:__real@42e80000
    vmovss  [rsp+50h+var_30], xmm2
  }
  RB_DrawText(&v73, "   ApH", drawProfGlob.font, *(float *)&_XMM3, v71, drawProfGlob.labelColor);
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx]
    vaddss  xmm2, xmm6, cs:drawProfGlob.fontHeight
    vmovups [rbp+var_20], xmm0
    vmovss  xmm0, cs:drawProfGlob.fontWidth
    vmulss  xmm3, xmm0, cs:__real@42f40000
    vmovss  [rsp+50h+var_30], xmm2
  }
  RB_DrawText(&v73, "  MaxH", drawProfGlob.font, *(float *)&_XMM3, v72, drawProfGlob.labelColor);
  __asm
  {
    vaddss  xmm0, xmm6, cs:drawProfGlob.fontHeight
    vmovaps xmm6, [rsp+50h+var_10]
  }
  return *(float *)&_XMM0;
}

/*
==============
RB_DrawProfileRow
==============
*/

float __fastcall RB_DrawProfileRow(GfxCmdBufContext *gfxContext, int probeIndex, int indentation, double y)
{
  __int64 v11; 
  __int64 v14; 
  char v39; 
  int v43; 
  unsigned int v47; 
  const char *v53; 
  const char *v63; 
  const char *v73; 
  const char *v83; 
  const char *v92; 
  const char *v99; 
  const char *v109; 
  const char *v119; 
  const char *v124; 
  char v129; 
  const char *v133; 
  const char *v135; 
  const char *v144; 
  const char *v149; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float fmtd; 
  float fmte; 
  float fmtf; 
  float fmtg; 
  float fmth; 
  float fmti; 
  float fmtj; 
  float fmtk; 
  float fmtl; 
  GfxCmdBufContext v171; 
  char dest[48]; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm { vmovaps xmmword ptr [r11-58h], xmm7 }
  v11 = indentation;
  _RSI = gfxContext;
  __asm { vmovaps xmm7, xmm3 }
  if ( probeIndex )
  {
    __asm
    {
      vmovaps xmmword ptr [r11-48h], xmm6
      vmovaps xmmword ptr [r11-68h], xmm8
    }
    v14 = probeIndex;
    __asm
    {
      vmovaps xmmword ptr [r11-78h], xmm9
      vmovaps xmmword ptr [r11-98h], xmm11
    }
    _RDI = &drawProfGlob.global[probeIndex];
    if ( !_RDI->sequence && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_drawprofile.cpp", 449, ASSERT_TYPE_ASSERT, "(global->sequence)", (const char *)&queryFormat, "global->sequence") )
      __debugbreak();
    __asm { vmovaps [rsp+110h+var_88+8], xmm10 }
    _RAX = Sys_GetValue(0);
    __asm
    {
      vmovd   xmm1, dword ptr [rdi]
      vcvtdq2pd xmm1, xmm1
      vmovss  xmm0, dword ptr [rax+8B4Ch]
      vcvtss2sd xmm0, xmm0, xmm0
      vmulsd  xmm2, xmm0, qword ptr [rdi+10h]
      vdivsd  xmm2, xmm2, xmm1
      vcvtsd2ss xmm6, xmm2, xmm2
    }
    _RAX = Sys_GetValue(0);
    _ECX = _RDI->sequence;
    __asm
    {
      vmovd   xmm1, ecx
      vmovss  xmm0, dword ptr [rax+8B4Ch]
      vcvtss2sd xmm0, xmm0, xmm0
      vmulsd  xmm2, xmm0, qword ptr [rdi+8]
      vcvtdq2pd xmm1, xmm1
      vdivsd  xmm2, xmm2, xmm1
      vxorps  xmm1, xmm1, xmm1
      vmovd   xmm0, ecx
      vcvtsi2ss xmm1, xmm1, rax
      vcvtdq2ps xmm0, xmm0
      vdivss  xmm8, xmm1, xmm0
      vxorps  xmm9, xmm9, xmm9
      vucomiss xmm8, xmm9
      vcvtsd2ss xmm11, xmm2, xmm2
    }
    if ( v39 )
      __asm { vxorps  xmm10, xmm10, xmm10 }
    else
      __asm { vdivss  xmm10, xmm11, xmm8 }
    Core_strncpy_truncate(dest, 0x29ui64, prof_enumNames[v14], 40 - v11);
    __asm
    {
      vmovups xmm0, xmmword ptr [rsi]
      vaddss  xmm2, xmm7, cs:drawProfGlob.fontHeight
    }
    v43 = 192;
    if ( !(_DWORD)v11 )
      v43 = 255;
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, r15d
      vmulss  xmm3, xmm1, cs:drawProfGlob.fontWidth
    }
    v47 = v43 | ((v43 | ((v43 | 0xFFFFFF00) << 8)) << 8);
    __asm
    {
      vmovss  dword ptr [rsp+110h+fmt], xmm2
      vmovups xmmword ptr [rsp+110h+var_E8.state], xmm0
    }
    RB_DrawText(&v171, dest, drawProfGlob.font, *(float *)&_XMM3, fmt, (const GfxColor)v47);
    Sys_GetValue(0);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rcx
      vmulss  xmm1, xmm0, dword ptr [rax+8B4Ch]
      vcvtss2sd xmm1, xmm1, xmm1
      vmovq   rdx, xmm1
    }
    v53 = j_va("%6.2f", _RDX);
    __asm
    {
      vmovss  xmm1, cs:drawProfGlob.fontWidth
      vmovups xmm0, xmmword ptr [rsi]
      vaddss  xmm2, xmm7, cs:drawProfGlob.fontHeight
      vmulss  xmm3, xmm1, cs:__real@425c0000
      vmovss  dword ptr [rsp+110h+fmt], xmm2
      vmovups xmmword ptr [rsp+110h+var_E8.state], xmm0
    }
    RB_DrawText(&v171, v53, drawProfGlob.font, *(float *)&_XMM3, fmta, (const GfxColor)v47);
    Sys_GetValue(0);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rcx
      vmulss  xmm1, xmm0, dword ptr [rax+8B4Ch]
      vcvtss2sd xmm1, xmm1, xmm1
      vmovq   rdx, xmm1
    }
    v63 = j_va("%6.2f", _RDX);
    __asm
    {
      vmovss  xmm1, cs:drawProfGlob.fontWidth
      vmovups xmm0, xmmword ptr [rsi]
      vaddss  xmm2, xmm7, cs:drawProfGlob.fontHeight
      vmulss  xmm3, xmm1, cs:__real@42740000
      vmovss  dword ptr [rsp+110h+fmt], xmm2
      vmovups xmmword ptr [rsp+110h+var_E8.state], xmm0
    }
    RB_DrawText(&v171, v63, drawProfGlob.font, *(float *)&_XMM3, fmtb, (const GfxColor)v47);
    __asm
    {
      vmovss  xmm0, cs:__real@41f00000
      vcmpltss xmm1, xmm0, xmm6
      vblendvps xmm6, xmm6, xmm9, xmm1
      vcvtss2sd xmm1, xmm6, xmm6
      vmovq   rdx, xmm1
    }
    v73 = j_va("%6.2f", _RDX);
    __asm
    {
      vmovups xmm0, xmmword ptr [rsi]
      vaddss  xmm2, xmm7, cs:drawProfGlob.fontHeight
      vmovups xmmword ptr [rsp+110h+var_E8.state], xmm0
      vmovss  xmm1, cs:drawProfGlob.fontWidth
      vmulss  xmm3, xmm1, cs:__real@42860000
      vmovss  dword ptr [rsp+110h+fmt], xmm2
    }
    RB_DrawText(&v171, v73, drawProfGlob.font, *(float *)&_XMM3, fmtc, (const GfxColor)v47);
    Sys_GetValue(0);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rcx
      vmulss  xmm1, xmm0, dword ptr [rax+8B4Ch]
      vcvtss2sd xmm1, xmm1, xmm1
      vmovq   rdx, xmm1
    }
    v83 = j_va("%7.2f", _RDX);
    __asm
    {
      vmovss  xmm1, cs:drawProfGlob.fontWidth
      vmovups xmm0, xmmword ptr [rsi]
      vaddss  xmm2, xmm7, cs:drawProfGlob.fontHeight
      vmulss  xmm3, xmm1, cs:__real@42920000
      vmovss  dword ptr [rsp+110h+fmt], xmm2
      vmovups xmmword ptr [rsp+110h+var_E8.state], xmm0
    }
    RB_DrawText(&v171, v83, drawProfGlob.font, *(float *)&_XMM3, fmtd, (const GfxColor)v47);
    __asm
    {
      vmovss  xmm0, cs:g_tally
      vaddss  xmm1, xmm0, xmm6
      vmovss  cs:g_tally, xmm1
      vcvtss2sd xmm1, xmm1, xmm1
      vmovq   rdx, xmm1
    }
    v92 = j_va("%6.2f", _RDX);
    __asm
    {
      vmovss  xmm1, cs:drawProfGlob.fontWidth
      vmovups xmm0, xmmword ptr [rsi]
      vaddss  xmm2, xmm7, cs:drawProfGlob.fontHeight
      vmulss  xmm3, xmm1, cs:__real@42a00000
      vmovss  dword ptr [rsp+110h+fmt], xmm2
      vmovups xmmword ptr [rsp+110h+var_E8.state], xmm0
    }
    RB_DrawText(&v171, v92, drawProfGlob.font, *(float *)&_XMM3, fmte, (const GfxColor)v47);
    __asm
    {
      vcvtss2sd xmm1, xmm11, xmm11
      vmovq   rdx, xmm1
    }
    v99 = j_va("%6.2f", _RDX);
    __asm
    {
      vmovss  xmm1, cs:drawProfGlob.fontWidth
      vmovups xmm0, xmmword ptr [rsi]
      vaddss  xmm2, xmm7, cs:drawProfGlob.fontHeight
      vmulss  xmm3, xmm1, cs:__real@42ae0000
      vmovss  dword ptr [rsp+110h+fmt], xmm2
      vmovups xmmword ptr [rsp+110h+var_E8.state], xmm0
    }
    RB_DrawText(&v171, v99, drawProfGlob.font, *(float *)&_XMM3, fmtf, (const GfxColor)v47);
    Sys_GetValue(0);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, r12
      vmulss  xmm1, xmm0, dword ptr [rax+8B4Ch]
      vcvtss2sd xmm1, xmm1, xmm1
      vmovq   rdx, xmm1
    }
    v109 = j_va("%6.2f", _RDX);
    __asm
    {
      vmovups xmm0, xmmword ptr [rsi]
      vaddss  xmm2, xmm7, cs:drawProfGlob.fontHeight
      vmovss  xmm1, cs:drawProfGlob.fontWidth
      vmulss  xmm3, xmm1, cs:__real@42ba0000
      vmovss  dword ptr [rsp+110h+fmt], xmm2
      vmovups xmmword ptr [rsp+110h+var_E8.state], xmm0
    }
    RB_DrawText(&v171, v109, drawProfGlob.font, *(float *)&_XMM3, fmtg, (const GfxColor)v47);
    Sys_GetValue(0);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rdx
      vmulss  xmm1, xmm0, dword ptr [rax+8B4Ch]
      vcvtss2sd xmm1, xmm1, xmm1
      vmovq   rdx, xmm1
    }
    v119 = j_va("%7.2f", _RDX);
    __asm
    {
      vmovss  xmm1, cs:drawProfGlob.fontWidth
      vmovups xmm0, xmmword ptr [rsi]
      vaddss  xmm2, xmm7, cs:drawProfGlob.fontHeight
      vmulss  xmm3, xmm1, cs:__real@42c60000
      vmovss  dword ptr [rsp+110h+fmt], xmm2
      vmovups xmmword ptr [rsp+110h+var_E8.state], xmm0
    }
    RB_DrawText(&v171, v119, drawProfGlob.font, *(float *)&_XMM3, fmth, (const GfxColor)v47);
    v124 = j_va("%5u", _RDI->read.hits);
    __asm
    {
      vmovss  xmm1, cs:drawProfGlob.fontWidth
      vmovups xmm0, xmmword ptr [rsi]
      vaddss  xmm2, xmm7, cs:drawProfGlob.fontHeight
      vmulss  xmm3, xmm1, cs:__real@42d40000
      vmovss  dword ptr [rsp+110h+fmt], xmm2
      vmovups xmmword ptr [rsp+110h+var_E8.state], xmm0
    }
    RB_DrawText(&v171, v124, drawProfGlob.font, *(float *)&_XMM3, fmti, (const GfxColor)v47);
    __asm
    {
      vucomiss xmm8, xmm9
      vmovaps xmm11, [rsp+110h+var_98+8]
      vmovaps xmm6, [rsp+110h+var_48+8]
      vcvtss2sd xmm1, xmm8, xmm8
    }
    if ( v39 )
      goto LABEL_12;
    __asm { vcomiss xmm8, cs:__real@41200000 }
    v133 = "%5.1f";
    if ( !v129 )
LABEL_12:
      v133 = "%5.0f";
    __asm { vmovq   rdx, xmm1 }
    v135 = j_va(v133, _RDX);
    __asm
    {
      vmovss  xmm1, cs:drawProfGlob.fontWidth
      vmovups xmm0, xmmword ptr [rsi]
      vaddss  xmm2, xmm7, cs:drawProfGlob.fontHeight
      vmulss  xmm3, xmm1, cs:__real@42de0000
      vmovss  dword ptr [rsp+110h+fmt], xmm2
      vmovups xmmword ptr [rsp+110h+var_E8.state], xmm0
    }
    RB_DrawText(&v171, v135, drawProfGlob.font, *(float *)&_XMM3, fmtj, (const GfxColor)v47);
    __asm
    {
      vucomiss xmm8, xmm9
      vmovaps xmm9, [rsp+110h+var_78+8]
      vmovaps xmm8, [rsp+110h+var_68+8]
    }
    if ( v39 )
    {
      v144 = "      ";
    }
    else
    {
      __asm
      {
        vcvtss2sd xmm1, xmm10, xmm10
        vmovq   rdx, xmm1
      }
      v144 = j_va("%6.2f", _RDX);
    }
    __asm
    {
      vmovss  xmm1, cs:drawProfGlob.fontWidth
      vmovups xmm0, xmmword ptr [rsi]
      vaddss  xmm2, xmm7, cs:drawProfGlob.fontHeight
      vmulss  xmm3, xmm1, cs:__real@42e80000
      vmovss  dword ptr [rsp+110h+fmt], xmm2
      vmovups xmmword ptr [rsp+110h+var_E8.state], xmm0
    }
    RB_DrawText(&v171, v144, drawProfGlob.font, *(float *)&_XMM3, fmtk, (const GfxColor)v47);
    v149 = j_va("%5u", _RDI->maxHits);
    __asm
    {
      vmovss  xmm1, cs:drawProfGlob.fontWidth
      vmovups xmm0, xmmword ptr [rsi]
      vaddss  xmm2, xmm7, cs:drawProfGlob.fontHeight
      vmulss  xmm3, xmm1, cs:__real@42f40000
      vmovss  dword ptr [rsp+110h+fmt], xmm2
      vmovups xmmword ptr [rsp+110h+var_E8.state], xmm0
    }
    RB_DrawText(&v171, v149, drawProfGlob.font, *(float *)&_XMM3, fmtl, (const GfxColor)v47);
    __asm { vmovaps xmm10, [rsp+110h+var_88+8] }
  }
  __asm
  {
    vaddss  xmm0, xmm7, cs:drawProfGlob.fontHeight
    vmovaps xmm7, [rsp+110h+var_58+8]
  }
  return *(float *)&_XMM0;
}

/*
==============
RB_DrawProfileScript
==============
*/
void RB_DrawProfileScript(GfxCmdBufContext *gfxContext)
{
  const scrContext_t *ScriptContext; 
  SourceBufferInfo *SourceBufferLookup; 
  const ProfileScript *v15; 
  __int64 *v23; 
  int *v67; 
  __int64 v68; 
  const char *buf; 
  unsigned __int64 v76; 
  GfxColor v77; 
  char *v78; 
  __int128 *v80; 
  GfxColor v84; 
  const char *v90; 
  GfxColor v95; 
  const char *v101; 
  GfxColor v106; 
  const char *v112; 
  GfxColor v118; 
  const char *v121; 
  GfxColor v128; 
  const char *v131; 
  GfxColor v138; 
  const char *v141; 
  GfxColor v158; 
  const char *v166; 
  GfxColor v171; 
  const char *v177; 
  GfxColor v182; 
  const char *v189; 
  const scrContext_t *v194; 
  const ProfileScript *v195; 
  const ProfileScript *v198; 
  int v233; 
  __int64 integer; 
  __int64 v236; 
  __int64 v237; 
  char *v238; 
  bool enabled; 
  const ProfileScript *ProfileConst; 
  __int64 v283; 
  volatile unsigned int *totalTime; 
  int v287; 
  char *v288; 
  __int64 v289; 
  GfxColor v307; 
  const char *v313; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float fmtd; 
  float fmte; 
  float fmtf; 
  float fmtg; 
  float fmth; 
  float fmti; 
  float fmtj; 
  float fmtk; 
  float fmtl; 
  float fmtm; 
  float fmtn; 
  float fmto; 
  float fmtp; 
  float fmtq; 
  float fmtr; 
  float fmts; 
  float fmtt; 
  float fmtu; 
  float fmtv; 
  float fmtw; 
  float fmtx; 
  float fmty; 
  float fmtz; 
  float fmtba; 
  float fmtbb; 
  float fmtbc; 
  float fmtbd; 
  float fmtbe; 
  float fmtbf; 
  float fmtbg; 
  float fmtbh; 
  float fmtbi; 
  float fmtbj; 
  float v367; 
  float v368; 
  GfxColor v369; 
  float v370; 
  float v371; 
  float v372; 
  float v373; 
  float v374; 
  float v375; 
  float v376; 
  float v377; 
  float v378; 
  float v379; 
  float v380; 
  float v381; 
  float v382; 
  float v383; 
  float v384; 
  float v385; 
  float v386; 
  float v387; 
  float v388; 
  float v389; 
  float v390; 
  float v391; 
  float v392; 
  float v393; 
  float v394; 
  float v395; 
  float v396; 
  float v397; 
  GfxCmdBufContext v398; 
  GfxCmdBufContext v399; 
  GfxCmdBufContext v400; 
  GfxCmdBufContext v401; 
  GfxCmdBufContext v402; 
  GfxCmdBufContext v403; 
  GfxCmdBufContext v404; 
  GfxCmdBufContext v405; 
  GfxCmdBufContext v406; 
  __int128 v407; 
  __int128 v408; 
  GfxCmdBufContext v409; 
  GfxCmdBufContext v410; 
  GfxCmdBufContext v411; 
  GfxCmdBufContext v412; 
  GfxCmdBufContext v413; 
  GfxCmdBufContext v414; 
  GfxCmdBufContext v415; 
  GfxCmdBufContext v416; 
  GfxCmdBufContext v417; 
  GfxCmdBufContext v418; 
  GfxCmdBufContext v419; 
  GfxCmdBufContext v420; 
  GfxCmdBufContext v421; 
  GfxCmdBufContext v422; 
  GfxCmdBufContext v423; 
  GfxCmdBufContext v424; 
  GfxCmdBufContext v425; 
  GfxCmdBufContext v426; 
  GfxCmdBufContext v427; 
  GfxCmdBufContext v428; 
  GfxCmdBufContext v429; 
  GfxCmdBufContext v430; 
  GfxCmdBufContext v431; 
  GfxCmdBufContext v432; 
  GfxCmdBufContext v433; 
  GfxCmdBufContext v434; 
  GfxCmdBufContext v435; 
  GfxCmdBufContext v436; 
  GfxCmdBufContext v437; 
  GfxCmdBufContext v438; 
  char v441; 
  void *retaddr; 
  int v443; 
  const scrContext_t *v444; 
  const ProfileScript *v445; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-48h], xmm6 }
  _RDI = gfxContext;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
    vmovaps xmmword ptr [rax-0A8h], xmm12
    vmovaps xmmword ptr [rax-0B8h], xmm13
  }
  if ( profile_script->current.enabled || profile_script_hierarchical->current.enabled )
  {
    if ( profile_script_instance->current.integer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_drawprofile.cpp", 1232, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "RB_DrawProfileScript_GetScriptContext: Invalid script instance.") )
      __debugbreak();
    v444 = ScriptContext_GetFromInstance(SCRIPTINSTANCE_SERVER);
    enabled = profile_script_hierarchical->current.enabled;
    ProfileConst = ScriptContext_GetProfileConst(v444);
    __asm
    {
      vmovss  xmm0, cs:__real@41f00000
      vmovss  xmm7, cs:__real@3f800000
      vmovups xmm1, xmmword ptr [rdi]
      vmovss  xmm9, cs:__real@40000000
      vmovss  xmm10, cs:__real@42e40000
      vmovss  xmm11, cs:__real@41680000
      vmulss  xmm2, xmm11, cs:drawProfGlob.fontWidth
      vmovss  [rsp+3C0h+var_378], xmm7
      vmovss  [rsp+3C0h+var_380], xmm7
      vmovss  [rbp+2C0h+arg_0], xmm0
      vmovss  xmm0, cs:drawProfGlob.fontHeight
      vsubss  xmm3, xmm0, xmm9
      vmulss  xmm0, xmm10, cs:drawProfGlob.fontWidth
      vxorps  xmm8, xmm8, xmm8
      vmovss  [rsp+3C0h+var_388], xmm8
      vmovss  [rsp+3C0h+var_390], xmm8
      vmovss  [rsp+3C0h+var_398], xmm3
      vmovss  xmm3, cs:__real@41f80000
      vmovss  dword ptr [rsp+3C0h+fmt], xmm0
    }
    v445 = ProfileConst;
    __asm { vmovups [rbp+2C0h+var_190], xmm1 }
    RB_DrawStretchPic(&v427, rgp.whiteMaterial, *(float *)&_XMM2, *(float *)&_XMM3, fmtbb, v372, v378, v384, v390, v396, 0xA5000000, GFX_PRIM_STATS_DEBUG);
    __asm
    {
      vmovss  xmm1, cs:drawProfGlob.fontHeight
      vaddss  xmm2, xmm1, [rbp+2C0h+arg_0]
      vmovups xmm0, xmmword ptr [rdi]
      vmovss  xmm12, cs:__real@41980000
      vmulss  xmm3, xmm12, cs:drawProfGlob.fontWidth
      vmovss  dword ptr [rsp+3C0h+fmt], xmm2
      vmovups [rbp+2C0h+var_180], xmm0
    }
    RB_DrawText(&v428, "Probe Name", drawProfGlob.font, *(float *)&_XMM3, fmtbc, drawProfGlob.labelColor);
    __asm
    {
      vmovss  xmm1, cs:drawProfGlob.fontHeight
      vaddss  xmm2, xmm1, [rbp+2C0h+arg_0]
      vmovups xmm0, xmmword ptr [rdi]
      vmovss  xmm13, cs:__real@425c0000
      vmulss  xmm3, xmm13, cs:drawProfGlob.fontWidth
      vmovss  dword ptr [rsp+3C0h+fmt], xmm2
      vmovups [rbp+2C0h+var_170], xmm0
    }
    RB_DrawText(&v429, " Current", drawProfGlob.font, *(float *)&_XMM3, fmtbd, drawProfGlob.labelColor);
    __asm
    {
      vmovups xmm0, xmmword ptr [rdi]
      vmovss  xmm1, cs:drawProfGlob.fontHeight
      vaddss  xmm2, xmm1, [rbp+2C0h+arg_0]
      vmovups [rbp+2C0h+var_160], xmm0
      vmovss  xmm0, cs:drawProfGlob.fontWidth
      vmulss  xmm3, xmm0, cs:__real@42820000
      vmovss  dword ptr [rsp+3C0h+fmt], xmm2
    }
    RB_DrawText(&v430, " Avg", drawProfGlob.font, *(float *)&_XMM3, fmtbe, drawProfGlob.labelColor);
    __asm
    {
      vmovups xmm0, xmmword ptr [rdi]
      vmovss  xmm1, cs:drawProfGlob.fontHeight
      vaddss  xmm2, xmm1, [rbp+2C0h+arg_0]
      vmovups [rbp+2C0h+var_150], xmm0
      vmovss  xmm0, cs:drawProfGlob.fontWidth
      vmulss  xmm3, xmm0, cs:__real@42960000
      vmovss  dword ptr [rsp+3C0h+fmt], xmm2
    }
    RB_DrawText(&v431, " Max", drawProfGlob.font, *(float *)&_XMM3, fmtbf, drawProfGlob.labelColor);
    __asm
    {
      vmovups xmm0, xmmword ptr [rdi]
      vmovss  xmm1, cs:drawProfGlob.fontHeight
      vaddss  xmm2, xmm1, [rbp+2C0h+arg_0]
      vmovups [rbp+2C0h+var_140], xmm0
      vmovss  xmm0, cs:drawProfGlob.fontWidth
      vmulss  xmm3, xmm0, cs:__real@42aa0000
      vmovss  dword ptr [rsp+3C0h+fmt], xmm2
    }
    RB_DrawText(&v432, "  Total", drawProfGlob.font, *(float *)&_XMM3, fmtbg, drawProfGlob.labelColor);
    v283 = (__int64)v445;
    __asm
    {
      vmovss  xmm0, [rbp+2C0h+arg_0]
      vaddss  xmm2, xmm0, cs:drawProfGlob.fontHeight
      vmovss  [rbp+2C0h+arg_0], xmm2
    }
    totalTime = v445->totalTime;
    v287 = 0;
    v288 = v445->profileScriptNames[0];
    v289 = 0i64;
    __asm { vxorps  xmm6, xmm6, xmm6 }
    do
    {
      if ( (!enabled || *(_BYTE *)(v289 + v283 + 39428) == 0xFF) && *v288 )
      {
        __asm { vmovups xmm0, xmmword ptr [rdi] }
        if ( enabled )
        {
          __asm { vmovups [rbp+2C0h+var_130], xmm0 }
          RB_DrawProfileScriptLineAndChildren(&v433, v444, v287, (float *)&v443, 0);
        }
        else
        {
          __asm
          {
            vmovaps xmm3, xmm2
            vmovups [rbp+2C0h+var_120], xmm0
          }
          RB_DrawProfileScriptLine(&v434, v444, v287, *(float *)&_XMM3, 0);
        }
        __asm
        {
          vmovss  xmm0, [rbp+2C0h+arg_0]
          vaddss  xmm1, xmm0, cs:drawProfGlob.fontHeight
        }
        v283 = (__int64)v445;
        __asm
        {
          vmovss  [rbp+2C0h+arg_0], xmm1
          vmovss  xmm2, [rbp+2C0h+arg_0]
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, rax
          vaddss  xmm6, xmm6, xmm0
        }
      }
      ++v287;
      ++v289;
      ++totalTime;
      v288 += 20;
    }
    while ( v287 < 128 );
    __asm
    {
      vmovss  xmm1, cs:drawProfGlob.fontHeight
      vmovups xmm0, xmmword ptr [rdi]
      vmulss  xmm4, xmm10, cs:drawProfGlob.fontWidth
      vmovss  [rsp+3C0h+var_378], xmm7
      vmovss  [rsp+3C0h+var_380], xmm7
      vmovss  [rsp+3C0h+var_388], xmm8
      vsubss  xmm5, xmm1, xmm9
      vmovss  [rsp+3C0h+var_390], xmm8
      vaddss  xmm3, xmm2, xmm7
      vmulss  xmm2, xmm11, cs:drawProfGlob.fontWidth
      vmovss  [rsp+3C0h+var_398], xmm5
      vmovss  dword ptr [rsp+3C0h+fmt], xmm4
      vmovups [rbp+2C0h+var_110], xmm0
    }
    RB_DrawStretchPic(&v435, rgp.whiteMaterial, *(float *)&_XMM2, *(float *)&_XMM3, fmtbh, v373, v379, v385, v391, v397, 0xA5000000, GFX_PRIM_STATS_DEBUG);
    if ( enabled )
    {
      __asm
      {
        vmovss  xmm1, cs:drawProfGlob.fontHeight
        vaddss  xmm2, xmm1, [rbp+2C0h+arg_0]
        vmovups xmm0, xmmword ptr [rdi]
        vmulss  xmm3, xmm12, cs:drawProfGlob.fontWidth
        vmovss  dword ptr [rsp+3C0h+fmt], xmm2
        vmovups [rbp+2C0h+var_100], xmm0
      }
      RB_DrawText(&v436, "TOTAL", drawProfGlob.font, *(float *)&_XMM3, fmtbi, drawProfGlob.textColorList[0]);
      v307 = drawProfGlob.textColorList[0];
      _RAX = Sys_GetValue(0);
      __asm
      {
        vmovss  xmm0, dword ptr [rax+8B4Ch]
        vmulss  xmm1, xmm0, xmm6
        vcvtss2sd xmm1, xmm1, xmm1
        vmovq   rdx, xmm1
      }
      v313 = j_va("%6.2f", _RDX);
      __asm
      {
        vmovss  xmm1, cs:drawProfGlob.fontHeight
        vaddss  xmm2, xmm1, [rbp+2C0h+arg_0]
        vmovups xmm0, xmmword ptr [rdi]
        vmulss  xmm3, xmm13, cs:drawProfGlob.fontWidth
        vmovss  dword ptr [rsp+3C0h+fmt], xmm2
        vmovups [rbp+2C0h+var_F0], xmm0
      }
      RB_DrawText(&v437, v313, drawProfGlob.font, *(float *)&_XMM3, fmtbj, v307);
      __asm
      {
        vmovss  xmm0, [rbp+2C0h+arg_0]
        vaddss  xmm1, xmm0, cs:drawProfGlob.fontHeight
        vmovss  [rbp+2C0h+arg_0], xmm1
      }
    }
  }
  else if ( profile_script_by_file->current.enabled )
  {
    ScriptContext = RB_DrawProfileScript_GetScriptContext();
    SourceBufferLookup = Scr_GetSourceBufferLookup(ScriptContext);
    if ( SourceBufferLookup )
    {
      __asm
      {
        vmovaps xmmword ptr [rsp+3C0h+var_C8+8], xmm14
        vmovaps xmmword ptr [rsp+2F0h], xmm15
      }
      v15 = ScriptContext_GetProfileConst(ScriptContext);
      __asm
      {
        vmovss  xmm0, cs:__real@41f00000
        vmovss  xmm6, cs:__real@3f800000
        vmovups xmm1, xmmword ptr [rdi]
        vmovss  xmm9, cs:__real@40000000
        vmovss  xmm10, cs:__real@42e40000
        vmovss  xmm11, cs:__real@41680000
        vmulss  xmm2, xmm11, cs:drawProfGlob.fontWidth
      }
      v23 = (__int64 *)v15;
      __asm
      {
        vmovss  [rsp+3C0h+var_378], xmm6
        vmovss  [rsp+3C0h+var_380], xmm6
        vmovss  [rbp+2C0h+arg_0], xmm0
        vmovss  xmm0, cs:drawProfGlob.fontHeight
        vsubss  xmm3, xmm0, xmm9
        vmulss  xmm0, xmm10, cs:drawProfGlob.fontWidth
        vxorps  xmm7, xmm7, xmm7
        vmovss  [rsp+3C0h+var_388], xmm7
        vmovss  [rsp+3C0h+var_390], xmm7
        vmovss  [rsp+3C0h+var_398], xmm3
        vmovss  xmm3, cs:__real@41f80000
        vmovss  dword ptr [rsp+3C0h+fmt], xmm0
        vmovups [rsp+3C0h+var_368+8], xmm1
      }
      RB_DrawStretchPic(&v398, rgp.whiteMaterial, *(float *)&_XMM2, *(float *)&_XMM3, fmt, v367, v374, v380, v386, v392, 0xA5000000, GFX_PRIM_STATS_DEBUG);
      __asm
      {
        vmovss  xmm1, cs:drawProfGlob.fontHeight
        vaddss  xmm2, xmm1, [rbp+2C0h+arg_0]
        vmovups xmm0, xmmword ptr [rdi]
        vmovss  xmm8, cs:__real@41700000
        vmulss  xmm3, xmm8, cs:drawProfGlob.fontWidth
        vmovss  dword ptr [rsp+3C0h+fmt], xmm2
        vmovups xmmword ptr [rsp+3C0h+var_358+8], xmm0
      }
      RB_DrawText(&v399, " File", drawProfGlob.font, *(float *)&_XMM3, fmta, drawProfGlob.labelColor);
      __asm
      {
        vmovss  xmm1, cs:drawProfGlob.fontHeight
        vaddss  xmm2, xmm1, [rbp+2C0h+arg_0]
        vmovups xmm0, xmmword ptr [rdi]
        vmovss  xmm13, cs:__real@423c0000
        vmulss  xmm3, xmm13, cs:drawProfGlob.fontWidth
        vmovss  dword ptr [rsp+3C0h+fmt], xmm2
        vmovups [rbp+2C0h+var_340], xmm0
      }
      RB_DrawText(&v400, "Current", drawProfGlob.font, *(float *)&_XMM3, fmtb, drawProfGlob.labelColor);
      __asm
      {
        vmovss  xmm1, cs:drawProfGlob.fontHeight
        vaddss  xmm2, xmm1, [rbp+2C0h+arg_0]
        vmovups xmm0, xmmword ptr [rdi]
        vmovss  xmm14, cs:__real@426c0000
        vmulss  xmm3, xmm14, cs:drawProfGlob.fontWidth
        vmovss  dword ptr [rsp+3C0h+fmt], xmm2
        vmovups [rbp+2C0h+var_330], xmm0
      }
      RB_DrawText(&v401, "Avg", drawProfGlob.font, *(float *)&_XMM3, fmtc, drawProfGlob.labelColor);
      __asm
      {
        vmovss  xmm1, cs:drawProfGlob.fontHeight
        vaddss  xmm2, xmm1, [rbp+2C0h+arg_0]
        vmovups xmm0, xmmword ptr [rdi]
        vmovss  xmm12, cs:__real@428e0000
        vmulss  xmm3, xmm12, cs:drawProfGlob.fontWidth
        vmovss  dword ptr [rsp+3C0h+fmt], xmm2
        vmovups [rbp+2C0h+var_320], xmm0
      }
      RB_DrawText(&v402, "Max", drawProfGlob.font, *(float *)&_XMM3, fmtd, drawProfGlob.labelColor);
      __asm
      {
        vmovss  xmm1, cs:drawProfGlob.fontHeight
        vaddss  xmm2, xmm1, [rbp+2C0h+arg_0]
        vmovups xmm0, xmmword ptr [rdi]
        vmovss  xmm15, cs:__real@42a60000
        vmulss  xmm3, xmm15, cs:drawProfGlob.fontWidth
        vmovss  dword ptr [rsp+3C0h+fmt], xmm2
        vmovups [rbp+2C0h+var_310], xmm0
      }
      RB_DrawText(&v403, "BuiltIn", drawProfGlob.font, *(float *)&_XMM3, fmte, drawProfGlob.labelColor);
      __asm
      {
        vmovups xmm0, xmmword ptr [rdi]
        vmovss  xmm1, cs:drawProfGlob.fontHeight
        vaddss  xmm2, xmm1, [rbp+2C0h+arg_0]
        vmovups [rbp+2C0h+var_300], xmm0
        vmovss  xmm0, cs:drawProfGlob.fontWidth
        vmulss  xmm3, xmm0, cs:__real@42be0000
        vmovss  dword ptr [rsp+3C0h+fmt], xmm2
      }
      RB_DrawText(&v404, "NonBuiltIn", drawProfGlob.font, *(float *)&_XMM3, fmtf, drawProfGlob.labelColor);
      __asm
      {
        vmovups xmm0, xmmword ptr [rdi]
        vmovss  xmm1, cs:drawProfGlob.fontHeight
        vaddss  xmm2, xmm1, [rbp+2C0h+arg_0]
        vmovups [rbp+2C0h+var_2F0], xmm0
        vmovss  xmm0, cs:drawProfGlob.fontWidth
        vmulss  xmm3, xmm0, cs:__real@42d60000
        vmovss  dword ptr [rsp+3C0h+fmt], xmm2
      }
      RB_DrawText(&v405, "Total", drawProfGlob.font, *(float *)&_XMM3, fmtg, drawProfGlob.labelColor);
      __asm
      {
        vmovss  xmm0, [rbp+2C0h+arg_0]
        vmovss  xmm1, cs:drawProfGlob.fontHeight
        vaddss  xmm2, xmm0, xmm1
        vmovss  [rbp+2C0h+arg_0], xmm2
      }
      v67 = (int *)v23 + 9921;
      v68 = 32i64;
      do
      {
        _RSI = &SourceBufferLookup[*v67];
        __asm { vucomiss xmm7, dword ptr [rsi+6Ch] }
        if ( _RSI )
        {
          __asm
          {
            vmovups xmm0, xmmword ptr [rdi]
            vmovss  [rsp+3C0h+var_378], xmm6
            vmovss  [rsp+3C0h+var_380], xmm6
            vmovss  [rsp+3C0h+var_388], xmm7
            vmovups [rbp+2C0h+var_2E0], xmm0
            vmulss  xmm0, xmm10, cs:drawProfGlob.fontWidth
            vsubss  xmm4, xmm1, xmm9
            vmovss  [rsp+3C0h+var_390], xmm7
            vaddss  xmm3, xmm2, xmm6
            vmulss  xmm2, xmm11, cs:drawProfGlob.fontWidth
            vmovss  [rsp+3C0h+var_398], xmm4
            vmovss  dword ptr [rsp+3C0h+fmt], xmm0
          }
          RB_DrawStretchPic(&v406, rgp.whiteMaterial, *(float *)&_XMM2, *(float *)&_XMM3, fmth, v368, v375, v381, v387, v393, 0xA5000000, GFX_PRIM_STATS_DEBUG);
          buf = _RSI->buf;
          v76 = -1i64;
          do
            ++v76;
          while ( buf[v76] );
          if ( v76 <= 0x21 )
          {
            __asm { vmovups xmm0, xmmword ptr [rdi] }
            v80 = &v408;
            __asm { vmovups [rbp+2C0h+var_2C0], xmm0 }
            v369 = drawProfGlob.textColorList[0];
          }
          else
          {
            v77 = drawProfGlob.textColorList[0];
            v78 = j_va("...%s", &buf[v76 - 30]);
            __asm
            {
              vmovups xmm0, xmmword ptr [rdi]
              vmovups [rbp+2C0h+var_2D0], xmm0
            }
            v369 = v77;
            v80 = &v407;
            buf = v78;
          }
          __asm
          {
            vmovss  xmm1, cs:drawProfGlob.fontHeight
            vaddss  xmm2, xmm1, [rbp+2C0h+arg_0]
            vmulss  xmm3, xmm8, cs:drawProfGlob.fontWidth
            vmovss  dword ptr [rsp+3C0h+fmt], xmm2
          }
          RB_DrawText((GfxCmdBufContext *)v80, buf, drawProfGlob.font, *(float *)&_XMM3, fmti, v369);
          v84 = drawProfGlob.textColorList[0];
          Sys_GetValue(0);
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, dword ptr [rsi+60h]
            vmulss  xmm1, xmm0, dword ptr [rax+8B4Ch]
            vcvtss2sd xmm1, xmm1, xmm1
            vmovq   rdx, xmm1
          }
          v90 = j_va("%6.2f", _RDX);
          __asm
          {
            vmovss  xmm1, cs:drawProfGlob.fontHeight
            vaddss  xmm2, xmm1, [rbp+2C0h+arg_0]
            vmovups xmm0, xmmword ptr [rdi]
            vmulss  xmm3, xmm13, cs:drawProfGlob.fontWidth
            vmovss  dword ptr [rsp+3C0h+fmt], xmm2
            vmovups [rbp+2C0h+var_2B0], xmm0
          }
          RB_DrawText(&v409, v90, drawProfGlob.font, *(float *)&_XMM3, fmtj, v84);
          v95 = drawProfGlob.textColorList[0];
          Sys_GetValue(0);
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, dword ptr [rsi+64h]
            vmulss  xmm1, xmm0, dword ptr [rax+8B4Ch]
            vcvtss2sd xmm1, xmm1, xmm1
            vmovq   rdx, xmm1
          }
          v101 = j_va("%6.2f", _RDX);
          __asm
          {
            vmovss  xmm1, cs:drawProfGlob.fontHeight
            vaddss  xmm2, xmm1, [rbp+2C0h+arg_0]
            vmovups xmm0, xmmword ptr [rdi]
            vmulss  xmm3, xmm14, cs:drawProfGlob.fontWidth
            vmovss  dword ptr [rsp+3C0h+fmt], xmm2
            vmovups [rbp+2C0h+var_2A0], xmm0
          }
          RB_DrawText(&v410, v101, drawProfGlob.font, *(float *)&_XMM3, fmtk, v95);
          v106 = drawProfGlob.textColorList[0];
          Sys_GetValue(0);
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, dword ptr [rsi+68h]
            vmulss  xmm1, xmm0, dword ptr [rax+8B4Ch]
            vcvtss2sd xmm1, xmm1, xmm1
            vmovq   rdx, xmm1
          }
          v112 = j_va("%6.2f", _RDX);
          __asm
          {
            vmovss  xmm1, cs:drawProfGlob.fontHeight
            vaddss  xmm2, xmm1, [rbp+2C0h+arg_0]
            vmovups xmm0, xmmword ptr [rdi]
            vmulss  xmm3, xmm12, cs:drawProfGlob.fontWidth
            vmovss  dword ptr [rsp+3C0h+fmt], xmm2
            vmovups [rbp+2C0h+var_290], xmm0
          }
          RB_DrawText(&v411, v112, drawProfGlob.font, *(float *)&_XMM3, fmtl, v106);
          __asm { vmovss  xmm1, dword ptr [rsi+70h] }
          v118 = drawProfGlob.textColorList[0];
          __asm
          {
            vcvtss2sd xmm1, xmm1, xmm1
            vmovq   rdx, xmm1
          }
          v121 = j_va("%8.0f", _RDX);
          __asm
          {
            vmovups xmm0, xmmword ptr [rdi]
            vmovss  xmm1, cs:drawProfGlob.fontHeight
            vaddss  xmm2, xmm1, [rbp+2C0h+arg_0]
            vmulss  xmm3, xmm15, cs:drawProfGlob.fontWidth
            vmovups [rbp+2C0h+var_280], xmm0
            vmovss  dword ptr [rsp+3C0h+fmt], xmm2
          }
          RB_DrawText(&v412, v121, drawProfGlob.font, *(float *)&_XMM3, fmtm, v118);
          __asm
          {
            vmovss  xmm0, dword ptr [rsi+6Ch]
            vsubss  xmm1, xmm0, dword ptr [rsi+70h]
          }
          v128 = drawProfGlob.textColorList[0];
          __asm
          {
            vcvtss2sd xmm1, xmm1, xmm1
            vmovq   rdx, xmm1
          }
          v131 = j_va("%8.0f", _RDX);
          __asm
          {
            vmovups xmm0, xmmword ptr [rdi]
            vmovss  xmm1, cs:drawProfGlob.fontHeight
            vaddss  xmm2, xmm1, [rbp+2C0h+arg_0]
            vmovups [rbp+2C0h+var_270], xmm0
            vmovss  xmm0, cs:drawProfGlob.fontWidth
            vmulss  xmm3, xmm0, cs:__real@42be0000
            vmovss  dword ptr [rsp+3C0h+fmt], xmm2
          }
          RB_DrawText(&v413, v131, drawProfGlob.font, *(float *)&_XMM3, fmtn, v128);
          __asm { vmovss  xmm1, dword ptr [rsi+6Ch] }
          v138 = drawProfGlob.textColorList[0];
          __asm
          {
            vcvtss2sd xmm1, xmm1, xmm1
            vmovq   rdx, xmm1
          }
          v141 = j_va("%8.0f", _RDX);
          __asm
          {
            vmovups xmm0, xmmword ptr [rdi]
            vmovss  xmm1, cs:drawProfGlob.fontHeight
            vaddss  xmm2, xmm1, [rbp+2C0h+arg_0]
            vmovups [rbp+2C0h+var_260], xmm0
            vmovss  xmm0, cs:drawProfGlob.fontWidth
            vmulss  xmm3, xmm0, cs:__real@42d60000
            vmovss  dword ptr [rsp+3C0h+fmt], xmm2
          }
          RB_DrawText(&v414, v141, drawProfGlob.font, *(float *)&_XMM3, fmto, v138);
          __asm
          {
            vmovss  xmm0, [rbp+2C0h+arg_0]
            vmovss  xmm1, cs:drawProfGlob.fontHeight
            vaddss  xmm2, xmm0, xmm1
            vmovss  [rbp+2C0h+arg_0], xmm2
          }
        }
        ++v67;
        --v68;
      }
      while ( v68 );
      __asm
      {
        vmovups xmm0, xmmword ptr [rdi]
        vmovss  [rsp+3C0h+var_378], xmm6
        vmovss  [rsp+3C0h+var_380], xmm6
        vaddss  xmm2, xmm2, xmm1
        vmovss  [rsp+3C0h+var_388], xmm7
        vmovups [rbp+2C0h+var_250], xmm0
        vmulss  xmm0, xmm10, cs:drawProfGlob.fontWidth
        vsubss  xmm4, xmm1, xmm9
        vmovss  [rsp+3C0h+var_390], xmm7
        vmovss  [rbp+2C0h+arg_0], xmm2
        vaddss  xmm3, xmm2, xmm6
        vmulss  xmm2, xmm11, cs:drawProfGlob.fontWidth
        vmovss  [rsp+3C0h+var_398], xmm4
        vmovss  dword ptr [rsp+3C0h+fmt], xmm0
      }
      RB_DrawStretchPic(&v415, rgp.whiteMaterial, *(float *)&_XMM2, *(float *)&_XMM3, fmtp, v370, v376, v382, v388, v394, 0xA5000000, GFX_PRIM_STATS_DEBUG);
      __asm
      {
        vmovss  xmm1, cs:drawProfGlob.fontHeight
        vaddss  xmm2, xmm1, [rbp+2C0h+arg_0]
        vmovups xmm0, xmmword ptr [rdi]
        vmulss  xmm3, xmm8, cs:drawProfGlob.fontWidth
        vmovss  dword ptr [rsp+3C0h+fmt], xmm2
        vmovups [rbp+2C0h+var_240], xmm0
      }
      RB_DrawText(&v416, "Total", drawProfGlob.font, *(float *)&_XMM3, fmtq, drawProfGlob.textColorList[0]);
      v158 = drawProfGlob.textColorList[0];
      Sys_GetValue(0);
      __asm
      {
        vmovaps xmm15, xmmword ptr [rsp+2F0h]
        vmovss  xmm6, cs:__real@5f800000
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, rcx
      }
      if ( v23[77943] < 0 )
        __asm { vaddss  xmm0, xmm0, xmm6 }
      __asm
      {
        vmulss  xmm0, xmm0, dword ptr [rax+8B4Ch]
        vcvtss2sd xmm1, xmm0, xmm0
        vmovq   rdx, xmm1
      }
      v166 = j_va("%6.2f", _RDX);
      __asm
      {
        vmovss  xmm1, cs:drawProfGlob.fontHeight
        vaddss  xmm2, xmm1, [rbp+2C0h+arg_0]
        vmovups xmm0, xmmword ptr [rdi]
        vmulss  xmm3, xmm13, cs:drawProfGlob.fontWidth
        vmovss  dword ptr [rsp+3C0h+fmt], xmm2
        vmovups [rbp+2C0h+var_230], xmm0
      }
      RB_DrawText(&v417, v166, drawProfGlob.font, *(float *)&_XMM3, fmtr, v158);
      v171 = drawProfGlob.textColorList[0];
      Sys_GetValue(0);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, rcx
      }
      if ( v23[77944] < 0 )
        __asm { vaddss  xmm0, xmm0, xmm6 }
      __asm
      {
        vmulss  xmm0, xmm0, dword ptr [rax+8B4Ch]
        vcvtss2sd xmm1, xmm0, xmm0
        vmovq   rdx, xmm1
      }
      v177 = j_va("%6.2f", _RDX);
      __asm
      {
        vmovss  xmm1, cs:drawProfGlob.fontHeight
        vaddss  xmm2, xmm1, [rbp+2C0h+arg_0]
        vmovups xmm0, xmmword ptr [rdi]
        vmulss  xmm3, xmm14, cs:drawProfGlob.fontWidth
        vmovss  dword ptr [rsp+3C0h+fmt], xmm2
        vmovups [rbp+2C0h+var_220], xmm0
      }
      RB_DrawText(&v418, v177, drawProfGlob.font, *(float *)&_XMM3, fmts, v171);
      v182 = drawProfGlob.textColorList[0];
      Sys_GetValue(0);
      __asm
      {
        vmovaps xmm14, xmmword ptr [rsp+3C0h+var_C8+8]
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, rdx
      }
      if ( v23[77945] < 0 )
        __asm { vaddss  xmm0, xmm0, xmm6 }
      __asm
      {
        vmulss  xmm0, xmm0, dword ptr [rax+8B4Ch]
        vcvtss2sd xmm1, xmm0, xmm0
        vmovq   rdx, xmm1
      }
      v189 = j_va("%6.2f", _RDX);
      __asm
      {
        vmovss  xmm1, cs:drawProfGlob.fontHeight
        vaddss  xmm2, xmm1, [rbp+2C0h+arg_0]
        vmovups xmm0, xmmword ptr [rdi]
        vmulss  xmm3, xmm12, cs:drawProfGlob.fontWidth
        vmovss  dword ptr [rsp+3C0h+fmt], xmm2
        vmovups [rbp+2C0h+var_210], xmm0
      }
      RB_DrawText(&v419, v189, drawProfGlob.font, *(float *)&_XMM3, fmtt, v182);
    }
  }
  else if ( profile_script_graph->current.enabled )
  {
    v194 = RB_DrawProfileScript_GetScriptContext();
    v195 = ScriptContext_GetProfileConst(v194);
    __asm
    {
      vmovss  xmm0, cs:__real@42200000
      vmovups xmm1, xmmword ptr [rdi]
    }
    v198 = v195;
    __asm
    {
      vmovss  [rbp+2C0h+arg_0], xmm0
      vmovss  xmm0, cs:drawProfGlob.largeFontHeight
      vsubss  xmm4, xmm0, cs:__real@40000000
      vmovss  xmm0, cs:__real@3f800000
      vmovss  [rsp+3C0h+var_378], xmm0
      vmovss  [rsp+3C0h+var_380], xmm0
      vmovups [rbp+2C0h+var_200], xmm1
      vmovss  xmm1, cs:drawProfGlob.largeFontWidth
      vmulss  xmm3, xmm1, cs:__real@42e40000
      vmulss  xmm2, xmm1, cs:__real@41680000
      vxorps  xmm6, xmm6, xmm6
      vmovss  [rsp+3C0h+var_388], xmm6
      vmovss  [rsp+3C0h+var_390], xmm6
      vmovss  [rsp+3C0h+var_398], xmm4
      vmovss  dword ptr [rsp+3C0h+fmt], xmm3
      vmovss  xmm3, cs:__real@42240000
    }
    RB_DrawStretchPic(&v420, rgp.whiteMaterial, *(float *)&_XMM2, *(float *)&_XMM3, fmtu, v371, v377, v383, v389, v395, 0xA5000000, GFX_PRIM_STATS_DEBUG);
    __asm
    {
      vmovups xmm0, xmmword ptr [rdi]
      vmovss  xmm1, cs:drawProfGlob.largeFontHeight
      vaddss  xmm2, xmm1, [rbp+2C0h+arg_0]
      vmovups [rbp+2C0h+var_1F0], xmm0
      vmovss  xmm0, cs:drawProfGlob.largeFontWidth
      vmulss  xmm3, xmm0, cs:__real@41000000
      vmovss  dword ptr [rsp+3C0h+fmt], xmm2
    }
    RB_DrawText(&v421, "Probe Name", drawProfGlob.largeFont, *(float *)&_XMM3, fmtv, drawProfGlob.labelColor);
    __asm
    {
      vmovups xmm0, xmmword ptr [rdi]
      vmovss  xmm1, cs:drawProfGlob.largeFontHeight
      vaddss  xmm2, xmm1, [rbp+2C0h+arg_0]
      vmovups [rbp+2C0h+var_1E0], xmm0
      vmovss  xmm0, cs:drawProfGlob.largeFontWidth
      vmulss  xmm3, xmm0, cs:__real@42300000
      vmovss  dword ptr [rsp+3C0h+fmt], xmm2
    }
    RB_DrawText(&v422, " Current", drawProfGlob.largeFont, *(float *)&_XMM3, fmtw, drawProfGlob.labelColor);
    __asm
    {
      vmovups xmm0, xmmword ptr [rdi]
      vmovss  xmm1, cs:drawProfGlob.largeFontHeight
      vaddss  xmm2, xmm1, [rbp+2C0h+arg_0]
      vmovups [rbp+2C0h+var_1D0], xmm0
      vmovss  xmm0, cs:drawProfGlob.largeFontWidth
      vmulss  xmm3, xmm0, cs:__real@42580000
      vmovss  dword ptr [rsp+3C0h+fmt], xmm2
    }
    RB_DrawText(&v423, " Avg", drawProfGlob.largeFont, *(float *)&_XMM3, fmtx, drawProfGlob.labelColor);
    __asm
    {
      vmovups xmm0, xmmword ptr [rdi]
      vmovss  xmm1, cs:drawProfGlob.largeFontHeight
      vaddss  xmm2, xmm1, [rbp+2C0h+arg_0]
      vmovups [rbp+2C0h+var_1C0], xmm0
      vmovss  xmm0, cs:drawProfGlob.largeFontWidth
      vmulss  xmm3, xmm0, cs:__real@42800000
      vmovss  dword ptr [rsp+3C0h+fmt], xmm2
    }
    RB_DrawText(&v424, " Max", drawProfGlob.largeFont, *(float *)&_XMM3, fmty, drawProfGlob.labelColor);
    __asm
    {
      vmovups xmm0, xmmword ptr [rdi]
      vmovss  xmm1, cs:drawProfGlob.largeFontHeight
      vaddss  xmm2, xmm1, [rbp+2C0h+arg_0]
      vmovups [rbp+2C0h+var_1B0], xmm0
      vmovss  xmm0, cs:drawProfGlob.largeFontWidth
      vmulss  xmm3, xmm0, cs:__real@42940000
      vmovss  dword ptr [rsp+3C0h+fmt], xmm2
    }
    RB_DrawText(&v425, "  Total", drawProfGlob.largeFont, *(float *)&_XMM3, fmtz, drawProfGlob.labelColor);
    __asm { vmovss  xmm0, [rbp+2C0h+arg_0] }
    v233 = 128;
    __asm
    {
      vaddss  xmm1, xmm0, cs:drawProfGlob.largeFontHeight
      vmovss  [rbp+2C0h+arg_0], xmm1
    }
    integer = profile_script_graph_row->current.integer;
    if ( (int)integer + 25 < 128 )
      v233 = integer + 25;
    if ( integer < v233 )
    {
      v236 = v233 - integer;
      v237 = (__int64)&v198->totalTime[integer];
      v238 = v198->profileScriptNames[integer];
      do
      {
        if ( *v238 )
        {
          __asm
          {
            vmovups xmm0, xmmword ptr [rdi]
            vmovups [rbp+2C0h+var_1A0], xmm0
            vmovss  dword ptr [rsp+3C0h+fmt], xmm1
          }
          RB_DrawProfileScriptLineWithGraph(&v426, v194, integer, 4, fmtba, 0);
          __asm
          {
            vmovss  xmm0, [rbp+2C0h+arg_0]
            vaddss  xmm1, xmm0, cs:drawProfGlob.largeFontHeight
            vmovss  [rbp+2C0h+arg_0], xmm1
            vmovss  xmm1, [rbp+2C0h+arg_0]
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, rax
            vaddss  xmm6, xmm6, xmm0
          }
        }
        LODWORD(integer) = integer + 1;
        v237 += 4i64;
        v238 += 20;
        --v236;
      }
      while ( v236 );
    }
  }
  __asm
  {
    vmovups xmm0, xmmword ptr [rdi]
    vmovups [rbp+2C0h+var_E0], xmm0
  }
  RB_EndSurfaceIfNeeded(&v438);
  _R11 = &v441;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
  }
}

/*
==============
RB_DrawProfileScriptLine
==============
*/

void __fastcall RB_DrawProfileScriptLine(GfxCmdBufContext *gfxContext, const scrContext_t *scrContext, int profileIndex, double y)
{
  const char *v12; 
  bool v13; 
  bool v14; 
  GfxColor v30; 
  const char *v31; 
  GfxColor v41; 
  const char *v49; 
  GfxColor v54; 
  const char *v60; 
  GfxColor v65; 
  const char *v73; 
  GfxColor v78; 
  const char *v84; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float fmtd; 
  float fmte; 
  float fmtf; 
  float v100; 
  float v101; 
  float v102; 
  float v103; 
  float v104; 
  GfxCmdBufContext v105; 
  GfxCmdBufContext v106; 
  GfxCmdBufContext v107; 
  GfxCmdBufContext v108; 
  GfxCmdBufContext v109; 
  GfxCmdBufContext v110; 
  GfxCmdBufContext v111; 
  char v112; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-28h], xmm6 }
  _R15 = gfxContext;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmm8, xmm3
  }
  _RBP = profileIndex;
  _RSI = ScriptContext_GetProfileConst(scrContext);
  v12 = _RSI->profileScriptNames[_RBP];
  v13 = *v12 == 0;
  if ( !*v12 )
  {
    v14 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_drawprofile.cpp", 1120, ASSERT_TYPE_ASSERT, "(name[0])", (const char *)&queryFormat, "name[0]");
    v13 = !v14;
    if ( v14 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+rbp*4+0E00h]
    vxorps  xmm6, xmm6, xmm6
    vcomiss xmm0, xmm6
  }
  if ( v13 )
  {
    __asm { vxorps  xmm7, xmm7, xmm7 }
  }
  else
  {
    __asm
    {
      vmovss  xmm1, dword ptr [rsi+rbp*4+0E00h]
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
      vdivss  xmm7, xmm1, xmm0
    }
  }
  __asm
  {
    vmovss  xmm1, cs:drawProfGlob.fontHeight
    vsubss  xmm5, xmm1, cs:__real@40000000
    vmovss  xmm1, cs:__real@3f800000
    vmovups xmm0, xmmword ptr [r15]
    vmovss  [rsp+118h+var_D0], xmm1
    vmovss  [rsp+118h+var_D8], xmm1
    vmovss  [rsp+118h+var_E0], xmm6
    vmovups [rsp+118h+var_B8], xmm0
    vmovss  xmm0, cs:drawProfGlob.fontWidth
    vmulss  xmm4, xmm0, cs:__real@42e40000
    vmulss  xmm2, xmm0, cs:__real@41680000
    vmovss  [rsp+118h+var_E8], xmm6
    vmovss  dword ptr [rsp+118h+var_F0], xmm5
    vaddss  xmm3, xmm8, xmm1
    vmovss  dword ptr [rsp+118h+fmt], xmm4
  }
  RB_DrawStretchPic(&v105, rgp.whiteMaterial, *(float *)&_XMM2, *(float *)&_XMM3, fmt, v100, v101, v102, v103, v104, 0xA5000000, GFX_PRIM_STATS_DEBUG);
  v30 = drawProfGlob.textColorList[0];
  v31 = j_va("%02d", (unsigned int)_RBP);
  __asm
  {
    vmovups xmm0, xmmword ptr [r15]
    vaddss  xmm2, xmm8, cs:drawProfGlob.fontHeight
    vmovups [rsp+118h+var_A8], xmm0
    vmovss  xmm0, cs:drawProfGlob.fontWidth
    vmulss  xmm3, xmm0, cs:__real@41700000
    vmovss  dword ptr [rsp+118h+fmt], xmm2
  }
  RB_DrawText(&v106, v31, drawProfGlob.font, *(float *)&_XMM3, fmta, v30);
  __asm
  {
    vmovups xmm0, xmmword ptr [r15]
    vaddss  xmm2, xmm8, cs:drawProfGlob.fontHeight
    vmovups [rsp+118h+var_98], xmm0
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm3, xmm0, cs:drawProfGlob.fontWidth
    vmovss  dword ptr [rsp+118h+fmt], xmm2
  }
  RB_DrawText(&v107, v12, drawProfGlob.font, *(float *)&_XMM3, fmtb, drawProfGlob.textColorList[0]);
  v41 = drawProfGlob.textColorList[0];
  _RAX = Sys_GetValue(0);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  xmm1, dword ptr [rax+8B4Ch]
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm1, xmm0, xmm1
    vcvtss2sd xmm1, xmm1, xmm1
    vmovq   rdx, xmm1
  }
  v49 = j_va("%6.2f", _RDX);
  __asm
  {
    vmovups xmm0, xmmword ptr [r15]
    vaddss  xmm2, xmm8, cs:drawProfGlob.fontHeight
    vmovups [rsp+118h+var_88], xmm0
    vmovss  xmm0, cs:drawProfGlob.fontWidth
    vmulss  xmm3, xmm0, cs:__real@425c0000
    vmovss  dword ptr [rsp+118h+fmt], xmm2
  }
  RB_DrawText(&v108, v49, drawProfGlob.font, *(float *)&_XMM3, fmtc, v41);
  v54 = drawProfGlob.textColorList[0];
  _RAX = Sys_GetValue(0);
  __asm
  {
    vmovss  xmm0, dword ptr [rax+8B4Ch]
    vmulss  xmm1, xmm0, xmm7
    vcvtss2sd xmm1, xmm1, xmm1
    vmovq   rdx, xmm1
  }
  v60 = j_va("%6.2f", _RDX);
  __asm
  {
    vmovups xmm0, xmmword ptr [r15]
    vaddss  xmm2, xmm8, cs:drawProfGlob.fontHeight
    vmovups [rsp+118h+var_78], xmm0
    vmovss  xmm0, cs:drawProfGlob.fontWidth
    vmulss  xmm3, xmm0, cs:__real@42820000
    vmovss  dword ptr [rsp+118h+fmt], xmm2
  }
  RB_DrawText(&v109, v60, drawProfGlob.font, *(float *)&_XMM3, fmtd, v54);
  v65 = drawProfGlob.textColorList[0];
  _RAX = Sys_GetValue(0);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  xmm1, dword ptr [rax+8B4Ch]
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm1, xmm0, xmm1
    vcvtss2sd xmm1, xmm1, xmm1
    vmovq   rdx, xmm1
  }
  v73 = j_va("%6.2f", _RDX);
  __asm
  {
    vmovups xmm0, xmmword ptr [r15]
    vaddss  xmm2, xmm8, cs:drawProfGlob.fontHeight
    vmovups [rsp+118h+var_68], xmm0
    vmovss  xmm0, cs:drawProfGlob.fontWidth
    vmulss  xmm3, xmm0, cs:__real@42960000
    vmovss  dword ptr [rsp+118h+fmt], xmm2
  }
  RB_DrawText(&v110, v73, drawProfGlob.font, *(float *)&_XMM3, fmte, v65);
  v78 = drawProfGlob.textColorList[0];
  _RAX = Sys_GetValue(0);
  __asm
  {
    vmovss  xmm0, dword ptr [rax+8B4Ch]
    vmulss  xmm0, xmm0, dword ptr [rsi+rbp*4+0E00h]
    vcvtss2sd xmm1, xmm0, xmm0
    vmovq   rdx, xmm1
  }
  v84 = j_va("%8.0f", _RDX);
  __asm
  {
    vmovups xmm0, xmmword ptr [r15]
    vaddss  xmm2, xmm8, cs:drawProfGlob.fontHeight
    vmovups [rsp+118h+var_58], xmm0
    vmovss  xmm0, cs:drawProfGlob.fontWidth
    vmulss  xmm3, xmm0, cs:__real@42aa0000
    vmovss  dword ptr [rsp+118h+fmt], xmm2
  }
  RB_DrawText(&v111, v84, drawProfGlob.font, *(float *)&_XMM3, fmtf, v78);
  _R11 = &v112;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
RB_DrawProfileScriptLineAndChildren
==============
*/
void RB_DrawProfileScriptLineAndChildren(GfxCmdBufContext *gfxContext, const scrContext_t *scrContext, int profileIndex, float *y, int depth)
{
  __int64 v5; 
  unsigned int v11; 
  const ProfileScript *ProfileConst; 
  unsigned int v13; 
  int v14; 
  __int64 v15; 
  char *i; 
  GfxCmdBufContext v20[3]; 

  v5 = profileIndex;
  _R14 = y;
  _R12 = gfxContext;
  if ( !y && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_drawprofile.cpp", 1189, ASSERT_TYPE_ASSERT, "(y)", (const char *)&queryFormat, "y") )
    __debugbreak();
  __asm
  {
    vmovups xmm0, xmmword ptr [r12]
    vmovss  xmm3, dword ptr [r14]
    vmovups [rsp+68h+var_38], xmm0
  }
  RB_DrawProfileScriptLine(v20, scrContext, v5, *(float *)&_XMM3, 2 * depth);
  v11 = -1;
  while ( 2 )
  {
    ProfileConst = ScriptContext_GetProfileConst(scrContext);
    v13 = v11 >> 31;
    v14 = 0;
    v15 = 0i64;
    for ( i = ProfileConst->profileScriptNames[0]; ; i += 20 )
    {
      if ( !*i || v15 == v5 || ProfileConst->parentIndex[v15] != (_DWORD)v5 )
        goto LABEL_11;
      if ( (_BYTE)v13 )
        break;
      LOBYTE(v13) = v15 == v11;
LABEL_11:
      ++v14;
      if ( ++v15 >= 128 )
        return;
    }
    if ( v14 >= 0 )
    {
      __asm
      {
        vmovss  xmm0, cs:drawProfGlob.fontHeight
        vaddss  xmm1, xmm0, dword ptr [r14]
        vmovups xmm0, xmmword ptr [r12]
        vmovups [rsp+68h+var_38], xmm0
        vmovss  dword ptr [r14], xmm1
      }
      RB_DrawProfileScriptLineAndChildren(v20, scrContext, v14, _R14, depth + 1);
      v11 = v14;
      continue;
    }
    break;
  }
}

/*
==============
RB_DrawProfileScriptLineWithGraph
==============
*/
void RB_DrawProfileScriptLineWithGraph(GfxCmdBufContext *gfxContext, const scrContext_t *scrContext, int profileIndex, int column, float y)
{
  const char *v13; 
  bool v14; 
  bool v15; 
  GfxColor v31; 
  const char *v32; 
  GfxColor v43; 
  const char *v51; 
  GfxColor v57; 
  const char *v63; 
  GfxColor v69; 
  const char *v77; 
  GfxColor v83; 
  const char *v89; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float fmtd; 
  float fmte; 
  float fmtf; 
  float v109; 
  unsigned int v110; 
  float v111; 
  float v112; 
  float v113; 
  float v114; 
  float v115; 
  GfxCmdBufContext v116; 
  GfxCmdBufContext v117; 
  GfxCmdBufContext v118; 
  GfxCmdBufContext v119; 
  GfxCmdBufContext v120; 
  GfxCmdBufContext v121; 
  GfxCmdBufContext v122; 
  GfxCmdBufContext v123; 
  char v124; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-28h], xmm6 }
  _R15 = gfxContext;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
  }
  _RBP = profileIndex;
  _RSI = ScriptContext_GetProfileConst(scrContext);
  v13 = _RSI->profileScriptNames[_RBP];
  v14 = *v13 == 0;
  if ( !*v13 )
  {
    v15 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_drawprofile.cpp", 1142, ASSERT_TYPE_ASSERT, "(name[0])", (const char *)&queryFormat, "name[0]");
    v14 = !v15;
    if ( v15 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+rbp*4+0E00h]
    vxorps  xmm7, xmm7, xmm7
    vcomiss xmm0, xmm7
  }
  if ( v14 )
  {
    __asm { vxorps  xmm8, xmm8, xmm8 }
  }
  else
  {
    __asm
    {
      vmovss  xmm1, dword ptr [rsi+rbp*4+0E00h]
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
      vdivss  xmm8, xmm1, xmm0
    }
  }
  __asm
  {
    vmovss  xmm1, cs:drawProfGlob.largeFontHeight
    vsubss  xmm5, xmm1, cs:__real@40000000
    vmovss  xmm1, cs:__real@3f800000
    vmovups xmm0, xmmword ptr [r15]
    vmovss  xmm6, [rsp+128h+arg_20]
    vmovss  [rsp+128h+var_E0], xmm1
    vmovss  [rsp+128h+var_E8], xmm1
    vmovss  dword ptr [rsp+128h+var_F0], xmm7
    vmovups [rsp+128h+var_C8], xmm0
    vmovss  xmm0, cs:drawProfGlob.largeFontWidth
    vmulss  xmm4, xmm0, cs:__real@42e40000
    vmulss  xmm2, xmm0, cs:__real@41680000
    vmovss  [rsp+128h+var_F8], xmm7
    vmovss  dword ptr [rsp+128h+var_100], xmm5
    vaddss  xmm3, xmm6, xmm1
    vmovss  dword ptr [rsp+128h+fmt], xmm4
  }
  RB_DrawStretchPic(&v116, rgp.whiteMaterial, *(float *)&_XMM2, *(float *)&_XMM3, fmt, v109, v111, v113, v114, v115, 0xA5000000, GFX_PRIM_STATS_DEBUG);
  v31 = drawProfGlob.textColorList[0];
  v32 = j_va("%02d", (unsigned int)_RBP);
  __asm
  {
    vmovups xmm0, xmmword ptr [r15]
    vaddss  xmm2, xmm6, cs:drawProfGlob.largeFontHeight
    vmovups [rsp+128h+var_B8], xmm0
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, r13d
    vmulss  xmm3, xmm0, cs:drawProfGlob.largeFontWidth
    vmovss  dword ptr [rsp+128h+fmt], xmm2
  }
  RB_DrawText(&v117, v32, drawProfGlob.largeFont, *(float *)&_XMM3, fmta, v31);
  __asm
  {
    vmovups xmm0, xmmword ptr [r15]
    vaddss  xmm2, xmm6, cs:drawProfGlob.largeFontHeight
    vmovups [rsp+128h+var_A8], xmm0
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, ecx
    vmulss  xmm3, xmm0, cs:drawProfGlob.largeFontWidth
    vmovss  dword ptr [rsp+128h+fmt], xmm2
  }
  RB_DrawText(&v118, v13, drawProfGlob.largeFont, *(float *)&_XMM3, fmtb, drawProfGlob.textColorList[0]);
  v43 = drawProfGlob.textColorList[0];
  _RAX = Sys_GetValue(0);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  xmm1, dword ptr [rax+8B4Ch]
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm1, xmm0, xmm1
    vcvtss2sd xmm1, xmm1, xmm1
    vmovq   rdx, xmm1
  }
  v51 = j_va("%6.2f", _RDX);
  __asm
  {
    vmovups xmm0, xmmword ptr [r15]
    vaddss  xmm2, xmm6, cs:drawProfGlob.largeFontHeight
    vmovups [rsp+128h+var_98], xmm0
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, ecx
    vmulss  xmm3, xmm0, cs:drawProfGlob.largeFontWidth
    vmovss  dword ptr [rsp+128h+fmt], xmm2
  }
  RB_DrawText(&v119, v51, drawProfGlob.largeFont, *(float *)&_XMM3, fmtc, v43);
  v57 = drawProfGlob.textColorList[0];
  _RAX = Sys_GetValue(0);
  __asm
  {
    vmovss  xmm0, dword ptr [rax+8B4Ch]
    vmulss  xmm1, xmm0, xmm8
    vcvtss2sd xmm1, xmm1, xmm1
    vmovq   rdx, xmm1
  }
  v63 = j_va("%6.2f", _RDX);
  __asm
  {
    vmovups xmm0, xmmword ptr [r15]
    vaddss  xmm2, xmm6, cs:drawProfGlob.largeFontHeight
    vmovups [rsp+128h+var_88], xmm0
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, ecx
    vmulss  xmm3, xmm0, cs:drawProfGlob.largeFontWidth
    vmovss  dword ptr [rsp+128h+fmt], xmm2
  }
  RB_DrawText(&v120, v63, drawProfGlob.largeFont, *(float *)&_XMM3, fmtd, v57);
  v69 = drawProfGlob.textColorList[0];
  _RAX = Sys_GetValue(0);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  xmm1, dword ptr [rax+8B4Ch]
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm1, xmm0, xmm1
    vcvtss2sd xmm1, xmm1, xmm1
    vmovq   rdx, xmm1
  }
  v77 = j_va("%6.2f", _RDX);
  __asm
  {
    vmovups xmm0, xmmword ptr [r15]
    vaddss  xmm2, xmm6, cs:drawProfGlob.largeFontHeight
    vmovups [rsp+128h+var_78], xmm0
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, ecx
    vmulss  xmm3, xmm0, cs:drawProfGlob.largeFontWidth
    vmovss  dword ptr [rsp+128h+fmt], xmm2
  }
  RB_DrawText(&v121, v77, drawProfGlob.largeFont, *(float *)&_XMM3, fmte, v69);
  v83 = drawProfGlob.textColorList[0];
  _RAX = Sys_GetValue(0);
  __asm
  {
    vmovss  xmm0, dword ptr [rax+8B4Ch]
    vmulss  xmm0, xmm0, dword ptr [rsi+rbp*4+0E00h]
    vcvtss2sd xmm1, xmm0, xmm0
    vmovq   rdx, xmm1
  }
  v89 = j_va("%8.0f", _RDX);
  __asm
  {
    vmovups xmm0, xmmword ptr [r15]
    vaddss  xmm2, xmm6, cs:drawProfGlob.largeFontHeight
    vmovups [rsp+128h+var_68], xmm0
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, ecx
    vmulss  xmm3, xmm0, cs:drawProfGlob.largeFontWidth
    vmovss  dword ptr [rsp+128h+fmt], xmm2
  }
  RB_DrawText(&v122, v89, drawProfGlob.largeFont, *(float *)&_XMM3, fmtf, v83);
  __asm
  {
    vmovups xmm0, xmmword ptr [r15]
    vmovss  xmm3, cs:__real@43c80000
    vmovss  [rsp+128h+var_F8], xmm8
  }
  v110 = _RSI->maxTime[_RBP];
  __asm
  {
    vmovups [rsp+128h+var_58], xmm0
    vmovaps xmm2, xmm6
  }
  RB_DrawProfileGraphData(&v123, column + 80, *(double *)&_XMM2, *(double *)&_XMM3, 0, v110, v112, _RSI->history[_RBP], 0x40u);
  _R11 = &v124;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
RB_DrawProfileScript_GetScriptContext
==============
*/
scrContext_t *RB_DrawProfileScript_GetScriptContext()
{
  if ( profile_script_instance->current.integer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_drawprofile.cpp", 1232, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "RB_DrawProfileScript_GetScriptContext: Invalid script instance.") )
    __debugbreak();
  return ScriptContext_GetFromInstance(SCRIPTINSTANCE_SERVER);
}

/*
==============
RB_DrawSlowProfileOverlay
==============
*/

void __fastcall RB_DrawSlowProfileOverlay(GfxCmdBufContext *gfxContext, int (__fastcall *compare)(const void *, const void *), double _XMM2_8)
{
  unsigned int v12; 
  int *v35; 
  int *v38; 
  int v42; 
  __int64 v46; 
  int EnumParity; 
  int *v48; 
  __int64 v55; 
  __int64 v56; 
  const char *v57; 
  unsigned __int64 v64; 
  int *sortedProbeIndices; 
  int i; 
  int v69; 
  float fmt; 
  float fmta; 
  float v80; 
  GfxCmdBufContext v81; 
  int v82[16]; 
  char dest[112]; 
  char v84; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
  }
  _R12 = gfxContext;
  v12 = Sys_Milliseconds();
  _RDX = prof_sortTime;
  __asm
  {
    vxorps  xmm2, xmm2, xmm2
    vmovss  xmm0, dword ptr [rdx+28h]
    vmulss  xmm1, xmm0, cs:__real@447a0000
    vcvtsi2ss xmm2, xmm2, ecx
    vcomiss xmm2, xmm1
  }
  if ( v12 >= drawProfGlob.lastSortTime || (int)(v12 - drawProfGlob.lastSortTime) < 0 )
  {
    __asm { vmovdqu xmm2, cs:__xmm@00000003000000020000000100000000 }
    drawProfGlob.lastSortTime = v12;
    _R8 = &drawProfGlob.sortedProbeIndices[8];
    _ECX = 0;
    _EDX = 8;
    do
    {
      _EAX = _EDX - 4;
      __asm
      {
        vmovd   xmm0, ecx
        vpshufd xmm0, xmm0, 0
        vpaddd  xmm1, xmm0, xmm2
        vmovdqu xmmword ptr [r8-20h], xmm1
        vmovd   xmm0, eax
        vpshufd xmm0, xmm0, 0
        vpaddd  xmm1, xmm0, xmm2
        vmovdqu xmmword ptr [r8-10h], xmm1
        vmovd   xmm0, edx
        vpshufd xmm0, xmm0, 0
        vpaddd  xmm1, xmm0, xmm2
        vmovdqu xmmword ptr [r8], xmm1
      }
      _EAX = _EDX + 4;
      _ECX += 16;
      __asm
      {
        vmovd   xmm0, eax
        vpshufd xmm0, xmm0, 0
        vpaddd  xmm1, xmm0, xmm2
      }
      _EDX += 16;
      __asm { vmovdqu xmmword ptr [r8+10h], xmm1 }
      _R8 += 16;
    }
    while ( _EDX < 824 );
    if ( _ECX < 826 )
    {
      v35 = &drawProfGlob.sortedProbeIndices[_ECX];
      do
        *v35++ = _ECX++;
      while ( _ECX < 826 );
    }
    qsort(drawProfGlob.sortedProbeIndices, 0x33Aui64, 4ui64, (_CoreCrtNonSecureSearchSortCompareFunction)compare);
  }
  __asm
  {
    vmovups xmm0, xmmword ptr [r12]
    vmovups [rsp+190h+var_160], xmm0
  }
  RB_DrawAllProfileBackgrounds(&v81, NULL, profile_rowcount->current.integer);
  __asm
  {
    vmovups xmm11, xmmword ptr [r12]
    vmovups [rsp+190h+var_160], xmm11
  }
  RB_EndSurfaceIfNeeded(&v81);
  v38 = v82;
  __asm
  {
    vmovss  xmm9, cs:__real@41680000
    vmovss  xmm0, cs:drawProfGlob.fontWidth
    vmovss  xmm7, cs:__real@42d00000
  }
  v42 = 0;
  v82[0] = prof_probe[0]->current.integer;
  __asm
  {
    vxorps  xmm8, xmm8, xmm8
    vmulss  xmm6, xmm0, xmm9
  }
  v82[1] = prof_probe[1]->current.integer;
  v82[2] = prof_probe[2]->current.integer;
  v82[3] = prof_probe[3]->current.integer;
  v82[4] = prof_probe[4]->current.integer;
  v82[5] = prof_probe[5]->current.integer;
  v82[6] = prof_probe[6]->current.integer;
  v82[7] = prof_probe[7]->current.integer;
  v82[8] = prof_probe[8]->current.integer;
  v82[9] = prof_probe[9]->current.integer;
  v82[10] = prof_probe[10]->current.integer;
  v82[11] = prof_probe[11]->current.integer;
  v82[12] = prof_probe[12]->current.integer;
  v82[13] = prof_probe[13]->current.integer;
  v82[14] = prof_probe[14]->current.integer;
  v82[15] = prof_probe[15]->current.integer;
  __asm { vcvtsi2ss xmm8, xmm8, rcx }
  do
  {
    v46 = *v38;
    if ( (_DWORD)v46 )
    {
      EnumParity = Profile_GetEnumParity(v46);
      __asm
      {
        vmovss  dword ptr [rsp+190h+var_168], xmm8
        vmovss  dword ptr [rsp+190h+fmt], xmm6
        vmovups [rsp+190h+var_160], xmm11
      }
      RB_DrawProfileHistoryGraph(&v81, &drawProfGlob.global[v46].read, EnumParity, v42, fmt, v80);
      __asm { vaddss  xmm6, xmm6, xmm7 }
    }
    ++v42;
    ++v38;
  }
  while ( v42 < 16 );
  v48 = v82;
  __asm
  {
    vmovss  xmm0, cs:drawProfGlob.fontWidth
    vmovss  xmm10, cs:__real@3f000000
    vxorps  xmm8, xmm8, xmm8
    vcvtsi2ss xmm8, xmm8, rcx
    vmulss  xmm6, xmm0, xmm9
    vmovss  xmm9, cs:__real@42c80000
  }
  v55 = 16i64;
  do
  {
    v56 = *v48;
    if ( (_DWORD)v56 )
    {
      v57 = prof_enumNames[v56];
      __asm
      {
        vdivss  xmm0, xmm9, xmm0
        vaddss  xmm2, xmm0, xmm10
        vxorps  xmm1, xmm1, xmm1
        vmovss  xmm3, xmm1, xmm2
        vxorps  xmm0, xmm0, xmm0
        vroundss xmm4, xmm0, xmm3, 1
        vcvttss2si eax, xmm4
      }
      v64 = _EAX + 1;
      if ( v64 > 0x64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_drawprofile.cpp", 312, ASSERT_TYPE_ASSERT, "(charLimit <= ( sizeof( *array_counter( label ) ) + 0 ))", (const char *)&queryFormat, "charLimit <= ARRAY_COUNT( label )") )
        __debugbreak();
      Core_strncpy_truncate(dest, 0x64ui64, v57, v64);
      __asm
      {
        vmovaps xmm3, xmm6
        vmovss  dword ptr [rsp+190h+fmt], xmm8
        vmovdqa [rsp+190h+var_160], xmm11
      }
      RB_DrawText(&v81, dest, drawProfGlob.font, *(float *)&_XMM3, fmta, drawProfGlob.textColorList[0]);
      __asm
      {
        vmovss  xmm0, cs:drawProfGlob.fontWidth
        vaddss  xmm6, xmm6, xmm7
      }
    }
    ++v48;
    --v55;
  }
  while ( v55 );
  __asm { vmovdqa [rsp+190h+var_160], xmm11 }
  RB_EndSurfaceIfNeeded(&v81);
  __asm { vmovups [rsp+190h+var_160], xmm11 }
  *(float *)&_XMM0 = RB_DrawProfileLabels(&v81);
  sortedProbeIndices = drawProfGlob.sortedProbeIndices;
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vmovss  cs:g_tally, xmm1
  }
  for ( i = 0; i < profile_rowcount->current.integer; ++i )
  {
    v69 = *sortedProbeIndices;
    __asm
    {
      vmovaps xmm3, xmm0
      vmovups [rsp+190h+var_160], xmm11
    }
    *(float *)&_XMM0 = RB_DrawProfileRow(&v81, v69, 0, *(double *)&_XMM3);
    ++sortedProbeIndices;
  }
  _R11 = &v84;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
  }
}

/*
==============
RB_GetNextProfileChild
==============
*/
__int64 RB_GetNextProfileChild(const scrContext_t *scrContext, int parentIndex, int prevChildIndex, int depth)
{
  __int64 v4; 
  __int64 v5; 
  const ProfileScript *ProfileConst; 
  unsigned int v7; 
  unsigned int v8; 
  __int64 v9; 
  char *i; 

  v4 = prevChildIndex;
  v5 = parentIndex;
  ProfileConst = ScriptContext_GetProfileConst(scrContext);
  v7 = (unsigned int)v4 >> 31;
  v8 = 0;
  v9 = 0i64;
  for ( i = ProfileConst->profileScriptNames[0]; ; i += 20 )
  {
    if ( !*i || v9 == v5 || ProfileConst->parentIndex[v9] != (_DWORD)v5 )
      goto LABEL_7;
    if ( (_BYTE)v7 )
      break;
    LOBYTE(v7) = v9 == v4;
LABEL_7:
    ++v8;
    if ( ++v9 >= 128 )
      return 0xFFFFFFFFi64;
  }
  return v8;
}

/*
==============
RB_IsUsingAnyProfile
==============
*/
char RB_IsUsingAnyProfile()
{
  int integer; 
  int v1; 
  const dvar_t **i; 

  integer = profile->current.integer;
  if ( !integer )
    return 0;
  if ( integer == 1 )
  {
    v1 = 0;
    for ( i = prof_probe; !(*i)->current.integer; ++i )
    {
      if ( (unsigned int)++v1 >= 0x10 )
        return 0;
    }
  }
  return 1;
}

/*
==============
RB_ProfileDevGui
==============
*/
void RB_ProfileDevGui(void)
{
  ;
}

/*
==============
RB_ProfileInit
==============
*/

void __fastcall RB_ProfileInit(double _XMM0_8)
{
  drawProfGlob.font = R_RegisterFont("fonts/fira_mono_regular.ttf", 16);
  R_TextWidth("#", 1, drawProfGlob.font);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmovss  cs:drawProfGlob.fontWidth, xmm0
  }
  R_TextHeight(drawProfGlob.font);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmovss  cs:drawProfGlob.fontHeight, xmm0
  }
  drawProfGlob.largeFont = R_RegisterFont("fonts/fira_mono_regular.ttf", 32);
  R_TextWidth("#", 1, drawProfGlob.largeFont);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmovss  cs:drawProfGlob.largeFontWidth, xmm0
  }
  R_TextHeight(drawProfGlob.largeFont);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
  }
  drawProfGlob.textColorList[0].packed = -1;
  drawProfGlob.textColorList[1].packed = -10053172;
  drawProfGlob.textColorList[2].packed = -39271;
  __asm { vmovss  cs:drawProfGlob.largeFontHeight, xmm0 }
  drawProfGlob.textColorList[3].packed = -6697780;
  drawProfGlob.textColorList[4].packed = -16776961;
  drawProfGlob.textColorList[5].packed = -6697729;
  drawProfGlob.textColorList[6].packed = -16724737;
  drawProfGlob.textColorList[7].packed = -3355393;
  drawProfGlob.textColorList[8].packed = -39220;
  drawProfGlob.textColorList[9].packed = -26113;
  drawProfGlob.textColorList[10].packed = -3342337;
  drawProfGlob.textColorList[11].packed = -6697984;
  drawProfGlob.textColorList[12].packed = -16711681;
  drawProfGlob.textColorList[13].packed = -65536;
  drawProfGlob.labelColor.packed = -16711681;
  memset_0(drawProfGlob.log, 0, sizeof(drawProfGlob.log));
  drawProfGlob.lastSortTime = 0;
}

