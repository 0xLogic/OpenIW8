/*
==============
RB_IsSunEnabled
==============
*/

bool __fastcall RB_IsSunEnabled()
{
  return ?RB_IsSunEnabled@@YA_NXZ();
}

/*
==============
RB_DrawSunPostEffects
==============
*/

void __fastcall RB_DrawSunPostEffects(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo)
{
  ?RB_DrawSunPostEffects@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@@Z(gfxContext, viewInfo);
}

/*
==============
RB_AllocSunSpriteQueries
==============
*/

void RB_AllocSunSpriteQueries(void)
{
  ?RB_AllocSunSpriteQueries@@YAXXZ();
}

/*
==============
RB_DrawSun
==============
*/

void __fastcall RB_DrawSun(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo)
{
  ?RB_DrawSun@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@@Z(gfxContext, viewInfo);
}

/*
==============
RB_AddSunEffects
==============
*/
void RB_AddSunEffects(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, SunFlareDynamic *sunFlare)
{
  bool v9; 
  bool v10; 
  GfxWorld *world; 
  GfxCmdBufState *v25; 
  bool v34; 
  char v35; 
  GfxCmdBufContext v40; 
  GfxCmdBufState *state[2]; 
  GfxViewport outViewport; 
  char v46; 

  __asm { vmovaps [rsp+0B8h+var_28], xmm6 }
  _RBX = sunFlare;
  _RSI = viewInfo;
  _RDI = gfxContext;
  if ( !rgp.world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_sky.cpp", 157, ASSERT_TYPE_ASSERT, "(rgp.world)", (const char *)&queryFormat, "rgp.world") )
    __debugbreak();
  v9 = _RBX == NULL;
  if ( !_RBX )
  {
    v10 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_sky.cpp", 158, ASSERT_TYPE_ASSERT, "(sunFlare)", (const char *)&queryFormat, "sunFlare");
    v9 = !v10;
    if ( v10 )
      __debugbreak();
  }
  _RAX = rgp.world;
  _RCX = _RDI->source;
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vmovss  xmm1, dword ptr [rax+3AD8h]
    vmulss  xmm2, xmm1, dword ptr [rcx+2A3Ch]
    vmovss  xmm0, dword ptr [rcx+2A40h]
    vmulss  xmm3, xmm0, dword ptr [rax+3ADCh]
    vmovss  xmm0, dword ptr [rcx+2A44h]
    vmulss  xmm1, xmm0, dword ptr [rax+3AE0h]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vcomiss xmm2, xmm6
    vmovss  dword ptr [rbx+14h], xmm2
  }
  if ( !v9 )
  {
    world = rgp.world;
    __asm
    {
      vmovaps [rsp+0B8h+var_38], xmm7
      vmovaps [rsp+0B8h+var_48], xmm8
      vmovups xmm8, xmmword ptr [rdi]
      vmovups xmmword ptr [rsp+0B8h+state], xmm8
    }
    if ( !rgp.world )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_sky.cpp", 45, ASSERT_TYPE_ASSERT, "(rgp.world)", (const char *)&queryFormat, "rgp.world") )
        __debugbreak();
      world = rgp.world;
    }
    __asm
    {
      vmovss  xmm7, cs:?rg@@3Ur_globals_t@@A.sunspriteSizeOverride; r_globals_t rg
      vcomiss xmm7, xmm6
    }
    if ( world->sun.spriteMaterial )
    {
      __asm { vcomiss xmm7, xmm6 }
      if ( world->sun.spriteMaterial )
      {
        __asm { vmovdqa [rsp+0B8h+var_88], xmm8 }
        RB_EndSurfaceIfNeeded(&v40);
        __asm { vmovdqa [rsp+0B8h+var_88], xmm8 }
        RB_SetTessTechnique(&v40, rgp.world->sun.spriteMaterial, TECHNIQUE_EMISSIVE, GFX_PRIM_STATS_COUNT_GEO);
        __asm { vmovdqa [rsp+0B8h+var_88], xmm8 }
        RB_SetIdentity(&v40);
        __asm { vcomiss xmm6, dword ptr [rsi+9ACh] }
        v25 = state[1];
        if ( v35 )
        {
          __asm
          {
            vmovss  xmm2, cs:__real@3f7c0000; depthBoundsMax
            vxorps  xmm1, xmm1, xmm1; depthBoundsMin
          }
          R_SetDepthBoundsEnable(state[1], *(const float *)&_XMM1, *(const float *)&_XMM2);
        }
        __asm { vmovq   rcx, xmm8; source }
        R_GetViewport(_RCX, &outViewport);
        __asm
        {
          vmulss  xmm1, xmm7, cs:__real@3b088889
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, rax
          vmulss  xmm2, xmm1, xmm0
          vmovaps xmm3, xmm2
          vmovdqa xmmword ptr [rsp+0B8h+state], xmm8
        }
        v34 = RB_TessSunBillboard((GfxCmdBufContext *)state, &rgp.world->sun.sunFxPosition, *(float *)&_XMM2, *(float *)&_XMM3, (GfxColor)-1);
        v35 = 0;
        if ( v34 )
        {
          __asm { vmovdqa xmmword ptr [rsp+0B8h+state], xmm8 }
          RB_EndTessSurfaceInternal((GfxCmdBufContext *)state, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_sky.cpp(73)");
        }
        __asm { vcomiss xmm6, dword ptr [rsi+9ACh] }
        if ( v35 )
          R_SetDepthBoundsDisable(v25);
      }
    }
    __asm
    {
      vmovaps xmm7, [rsp+0B8h+var_38]
      vmovaps xmm8, [rsp+0B8h+var_48]
    }
  }
  _R11 = &v46;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
}

/*
==============
RB_AllocSunSpriteQueries
==============
*/

void __fastcall RB_AllocSunSpriteQueries(__int64 a1, __int64 a2, __int64 a3, double _XMM3_8)
{
  int v4; 
  unsigned __int16 *v5; 
  unsigned __int16 v6; 

  if ( !sunQueryInited )
  {
    v4 = 0;
    v5 = (unsigned __int16 *)&unk_1544B52C0;
    do
    {
      __asm { vxorps  xmm3, xmm3, xmm3; depthBias }
      v6 = RB_AllocOcclusionQuery((LocalClientNum_t)v4++, NULL, 0, *(float *)&_XMM3_8);
      *v5 = v6;
      v5 += 14;
    }
    while ( v4 < 2 );
    sunQueryInited = 1;
  }
}

/*
==============
RB_DrawSun
==============
*/
void RB_DrawSun(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo)
{
  __int64 clientIndex; 
  __int64 v9; 
  unsigned int maxClientRenderViews; 
  GfxCmdBufContext v11; 

  clientIndex = viewInfo->clientIndex;
  _RDI = gfxContext;
  if ( (!RB_IsSunEnabled() || !sunQueryInited) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_sky.cpp", 221, ASSERT_TYPE_ASSERT, "(RB_IsSunEnabled() && sunQueryInited)", (const char *)&queryFormat, "RB_IsSunEnabled() && sunQueryInited") )
    __debugbreak();
  if ( (unsigned int)clientIndex >= gfxCfg.maxClientRenderViews )
  {
    maxClientRenderViews = gfxCfg.maxClientRenderViews;
    LODWORD(v9) = clientIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_sky.cpp", 223, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( gfxCfg.maxClientRenderViews )", "localClientNum doesn't index gfxCfg.maxClientRenderViews\n\t%i not in [0, %i)", v9, maxClientRenderViews) )
      __debugbreak();
  }
  __asm { vmovups xmm0, xmmword ptr [rdi] }
  _RBX = &sunFlareArray[clientIndex];
  __asm { vmovups xmmword ptr [rsp+58h+var_18.source], xmm0 }
  RB_SetIdentity(&v11);
  if ( _RBX->occlusionQueryHandle == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_sky.cpp", 229, ASSERT_TYPE_ASSERT, "(sunFlare->occlusionQueryHandle != 0xffff)", (const char *)&queryFormat, "sunFlare->occlusionQueryHandle != OQ_HANDLE_NONE") )
    __debugbreak();
  if ( !rgp.world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_sky.cpp", 233, ASSERT_TYPE_ASSERT, "(rgp.world)", (const char *)&queryFormat, "rgp.world") )
    __debugbreak();
  RB_SetOcclusionQueryPosition(_RBX->occlusionQueryHandle, &rgp.world->sun.sunFxPosition);
  *(double *)&_XMM0 = RB_GetOcclusionQueryVisibility(_RBX->occlusionQueryHandle);
  __asm
  {
    vmovups xmm1, xmmword ptr [rdi]
    vmovups xmmword ptr [rsp+58h+var_18.source], xmm1
    vmovss  dword ptr [rbx+10h], xmm0
  }
  RB_AddSunEffects(&v11, viewInfo, _RBX);
  __asm
  {
    vmovups xmm0, xmmword ptr [rdi]
    vmovups xmmword ptr [rsp+58h+var_18.source], xmm0
  }
  RB_EndSurfaceIfNeeded(&v11);
}

/*
==============
RB_DrawSunFlare
==============
*/
void RB_DrawSunFlare(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, SunFlareDynamic *sunFlare, int frameTime)
{
  char v28; 
  bool v29; 
  bool v32; 
  bool v34; 
  GfxCmdBufState *v46; 
  bool v53; 
  char v54; 
  double v58; 
  double v59; 
  double v60; 
  GfxCmdBufContext v61; 
  GfxCmdBufState *state[2]; 
  GfxViewport outViewport; 

  _RBX = sunFlare;
  _RSI = viewInfo;
  _RBP = gfxContext;
  if ( !sunFlare && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_sky.cpp", 124, ASSERT_TYPE_ASSERT, "(sunFlare)", (const char *)&queryFormat, "sunFlare") )
    __debugbreak();
  _RAX = rgp.world;
  if ( rgp.world->sun.flareMaterial )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+14h]
      vmovss  xmm2, dword ptr [rax+3A98h]
      vcomiss xmm0, xmm2
    }
    if ( rgp.world->sun.flareMaterial )
    {
      __asm
      {
        vmovss  xmm3, dword ptr [rax+3AA0h]
        vcomiss xmm0, xmm3
        vmovaps [rsp+0F8h+var_38], xmm6
        vmovaps [rsp+0F8h+var_48], xmm7
        vmovaps [rsp+0F8h+var_58], xmm8
        vmovaps [rsp+0F8h+var_68], xmm9
        vmovss  xmm9, cs:__real@3f800000
        vmovaps [rsp+0F8h+var_78], xmm10
        vmovaps [rsp+0F8h+var_88], xmm11
        vxorps  xmm6, xmm6, xmm6
        vmovaps xmm7, xmm9
        vmovss  xmm0, dword ptr [rax+3AA4h]
        vcomiss xmm0, xmm6
        vmovss  xmm1, dword ptr [rbx]
        vcomiss xmm1, xmm6
        vmulss  xmm0, xmm7, dword ptr [rax+3A9Ch]
        vmulss  xmm10, xmm7, dword ptr [rax+3AA4h]
        vaddss  xmm11, xmm0, dword ptr [rax+3A94h]
        vmovss  xmm0, dword ptr [rbx+10h]
        vcomiss xmm0, xmm6
        vmovss  xmm1, dword ptr [rbx+10h]; fGoal
        vmovss  xmm0, dword ptr [rbx]; fCurrent
      }
      *(double *)&_XMM0 = R_UpdateOverTime(*(float *)&_XMM0, *(float *)&_XMM1, rgp.world->sun.flareFadeInTime, rgp.world->sun.flareFadeOutTime, frameTime);
      __asm
      {
        vcomiss xmm0, xmm6
        vmovss  dword ptr [rbx], xmm0
      }
      if ( v28 )
      {
        __asm
        {
          vcvtss2sd xmm0, xmm0, xmm0
          vmovsd  [rsp+0F8h+var_D0], xmm0
        }
        v32 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_sky.cpp", 148, ASSERT_TYPE_ASSERT, "( ( sunFlare->flareIntensity >= 0.0f ) )", "( sunFlare->flareIntensity ) = %g", v58);
        v28 = 0;
        v29 = !v32;
        if ( v32 )
          __debugbreak();
      }
      __asm { vcomiss xmm10, xmm6 }
      if ( v28 )
      {
        __asm
        {
          vcvtss2sd xmm0, xmm10, xmm10
          vmovsd  [rsp+0F8h+var_D0], xmm0
        }
        v34 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_sky.cpp", 149, ASSERT_TYPE_ASSERT, "( ( alpha >= 0.0f ) )", "( alpha ) = %g", v59);
        v28 = 0;
        v29 = !v34;
        if ( v34 )
          __debugbreak();
      }
      __asm
      {
        vmulss  xmm7, xmm10, dword ptr [rbx]
        vcomiss xmm7, xmm6
        vmovups xmm8, xmmword ptr [rbp+0]
        vmovaps xmm10, [rsp+0F8h+var_78]
        vmovups xmmword ptr [rsp+0F8h+state], xmm8
      }
      if ( v28 )
        goto LABEL_24;
      __asm { vcomiss xmm7, xmm9 }
      if ( !(v28 | v29) )
      {
LABEL_24:
        __asm
        {
          vcvtss2sd xmm0, xmm7, xmm7
          vmovsd  [rsp+0F8h+var_D0], xmm0
        }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_sky.cpp", 90, ASSERT_TYPE_ASSERT, "( ( alpha >= 0 && alpha <= 1 ) )", "( alpha ) = %g", v60) )
          __debugbreak();
      }
      __asm
      {
        vmulss  xmm0, xmm7, cs:__real@437f0000
        vaddss  xmm2, xmm0, cs:__real@3f000000
        vmovaps xmm9, [rsp+0F8h+var_68]
        vmovaps xmm7, [rsp+0F8h+var_48]
        vxorps  xmm0, xmm0, xmm0
        vroundss xmm4, xmm0, xmm2, 1
        vcvttss2si ebx, xmm4
      }
      if ( (_BYTE)_EBX )
      {
        __asm { vmovdqa [rsp+0F8h+var_C8], xmm8 }
        RB_EndSurfaceIfNeeded(&v61);
        __asm { vmovdqa [rsp+0F8h+var_C8], xmm8 }
        RB_SetIdentity(&v61);
        __asm { vmovdqa [rsp+0F8h+var_C8], xmm8 }
        RB_SetTessTechnique(&v61, rgp.world->sun.flareMaterial, TECHNIQUE_EMISSIVE, GFX_PRIM_STATS_COUNT_GEO);
        v46 = state[1];
        __asm
        {
          vcomiss xmm6, dword ptr [rsi+9ACh]
          vmovq   rcx, xmm8; source
        }
        R_GetViewport(_RCX, &outViewport);
        __asm
        {
          vmulss  xmm1, xmm11, cs:__real@3b088889
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, rax
          vmulss  xmm2, xmm1, xmm0
          vmovaps xmm3, xmm2
          vmovdqa xmmword ptr [rsp+0F8h+state], xmm8
        }
        v53 = RB_TessSunBillboard((GfxCmdBufContext *)state, &rgp.world->sun.sunFxPosition, *(float *)&_XMM2, *(float *)&_XMM3, (GfxColor)((unsigned __int8)_EBX | (((unsigned __int8)_EBX | ((_EBX | 0xFFFFFF00) << 8)) << 8)));
        v54 = 0;
        if ( v53 )
        {
          __asm { vmovdqa xmmword ptr [rsp+0F8h+state], xmm8 }
          RB_EndTessSurfaceInternal((GfxCmdBufContext *)state, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_sky.cpp(109)");
        }
        __asm { vcomiss xmm6, dword ptr [rsi+9ACh] }
        if ( v54 )
          R_SetDepthBoundsDisable(v46);
      }
      __asm
      {
        vmovaps xmm8, [rsp+0F8h+var_58]
        vmovaps xmm6, [rsp+0F8h+var_38]
        vmovaps xmm11, [rsp+0F8h+var_88]
      }
    }
  }
}

/*
==============
RB_DrawSunPostEffects
==============
*/
void RB_DrawSunPostEffects(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo)
{
  __int64 clientIndex; 
  SunFlareDynamic *v6; 
  int lastTime; 
  int time; 
  int v9; 
  GfxCmdBufContext v11; 

  clientIndex = viewInfo->clientIndex;
  _RSI = gfxContext;
  if ( (unsigned int)clientIndex >= gfxCfg.maxClientRenderViews && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_sky.cpp", 266, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( gfxCfg.maxClientRenderViews )", "localClientNum doesn't index gfxCfg.maxClientRenderViews\n\t%i not in [0, %i)", clientIndex, gfxCfg.maxClientRenderViews) )
    __debugbreak();
  __asm
  {
    vmovups xmm0, xmmword ptr [rsi]
    vmovups xmmword ptr [rsp+58h+var_18.source], xmm0
  }
  v6 = &sunFlareArray[clientIndex];
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_sky.cpp", 246, ASSERT_TYPE_ASSERT, "(sunFlare)", (const char *)&queryFormat, "sunFlare") )
    __debugbreak();
  lastTime = v6->lastTime;
  if ( lastTime && (time = v11.source->sceneDef.time, lastTime <= time) )
    v9 = time - lastTime;
  else
    v9 = 10;
  __asm { vmovups xmm0, xmmword ptr [rsi] }
  v6->lastTime = v11.source->sceneDef.time;
  __asm { vmovups xmmword ptr [rsp+58h+var_18.source], xmm0 }
  RB_DrawSunFlare(&v11, viewInfo, v6, v9);
}

/*
==============
RB_IsSunEnabled
==============
*/
bool RB_IsSunEnabled()
{
  return rg.drawSun && rgp.world && rgp.world->sun.hasValidData;
}

/*
==============
RB_TessSunBillboard
==============
*/

bool __fastcall RB_TessSunBillboard(GfxCmdBufContext *gfxContext, const vec3_t *sunPos, double widthInPixels, double heightInPixels, GfxColor color)
{
  bool result; 
  float v21; 
  float v22; 
  float v23; 
  bool v24; 
  unsigned int v25[3]; 
  GfxViewport v26; 
  GfxCmdBufContext v27; 
  GfxViewport v28; 
  char v29; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-28h], xmm6
    vmovaps xmmword ptr [r11-38h], xmm7
    vmovaps xmmword ptr [r11-48h], xmm8
    vmovups xmm6, xmmword ptr [rcx]
    vmovq   rcx, xmm6; source
    vmovaps xmm8, xmm3
    vmovaps xmm7, xmm2
  }
  R_GetViewport(_RCX, &v28);
  __asm
  {
    vmovups xmm0, [rsp+0F8h+var_68]
    vmovdqa [rsp+0F8h+var_88], xmm0
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rsp+0F8h+var_C0], xmm0
    vmovss  [rsp+0F8h+var_D0], xmm8
    vmovss  [rsp+0F8h+var_D8], xmm7
    vmovdqa [rsp+0F8h+var_78], xmm6
  }
  RB_TessRectBillboard(&v27, sunPos, 0, 0, v21, v22, color, v23, &v26, 0, v25, &v24);
  result = v25[0] != 0;
  _R11 = &v29;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
  }
  return result;
}

