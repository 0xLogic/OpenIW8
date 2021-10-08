/*
==============
CG_HudLighting_ComErrorCleanup
==============
*/

void CG_HudLighting_ComErrorCleanup(void)
{
  ?CG_HudLighting_ComErrorCleanup@@YAXXZ();
}

/*
==============
CG_HudLighting_DrawRequest
==============
*/

void CG_HudLighting_DrawRequest(void)
{
  ?CG_HudLighting_DrawRequest@@YAXXZ();
}

/*
==============
CG_HudLighting_ArchiveState
==============
*/

void __fastcall CG_HudLighting_ArchiveState(MemoryFile *memFile, CG_HudLighting_State *hudLightingState)
{
  ?CG_HudLighting_ArchiveState@@YAXPEAUMemoryFile@@PEAUCG_HudLighting_State@@@Z(memFile, hudLightingState);
}

/*
==============
CG_HudLighting_Assign
==============
*/

void __fastcall CG_HudLighting_Assign(CG_HudLighting_State *outHudLightingState)
{
  ?CG_HudLighting_Assign@@YAXPEAUCG_HudLighting_State@@@Z(outHudLightingState);
}

/*
==============
CG_HudLighting_DrawBegin
==============
*/

void __fastcall CG_HudLighting_DrawBegin(LocalClientNum_t localClientIndex, const vec3_t *cameraOrigin, const tmat33_t<vec3_t> *cameraAxis)
{
  ?CG_HudLighting_DrawBegin@@YAXW4LocalClientNum_t@@AEBTvec3_t@@AEBT?$tmat33_t@Tvec3_t@@@@@Z(localClientIndex, cameraOrigin, cameraAxis);
}

/*
==============
CG_HudLighting_DrawEnd
==============
*/

void CG_HudLighting_DrawEnd(void)
{
  ?CG_HudLighting_DrawEnd@@YAXXZ();
}

/*
==============
CG_HudLighting_ApplyColorScaleOffset
==============
*/
void CG_HudLighting_ApplyColorScaleOffset(vec3_t *outColor, const vec3_t *inColor, GfxLit2DShaderMode mode, CG_HudLighting_LightType lightType)
{
  __int64 v8; 
  __int64 v10; 
  __int64 v11; 
  unsigned int v12; 
  bool v13; 
  __int64 v29; 
  __int64 v30; 
  __int64 v31; 
  __int64 v32; 
  __int64 v33; 
  __int64 v34; 
  char v37; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-28h], xmm6 }
  v8 = mode;
  _RSI = outColor;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
  }
  v10 = lightType;
  if ( mode >= GFXLIT2DSHADERMODE_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hud_lighting.cpp", 174, ASSERT_TYPE_ASSERT, "(mode < GFXLIT2DSHADERMODE_COUNT)", (const char *)&queryFormat, "mode < GFXLIT2DSHADERMODE_COUNT") )
    __debugbreak();
  v11 = 136 * v8;
  v12 = 0;
  v13 = 1;
  _RAX = *(__int64 *)((char *)&g_CG_HudLighting_Dvars.modes[0].lights[v10].lum.scale + v11);
  __asm { vmovss  xmm7, dword ptr [rax+28h] }
  _RAX = *(__int64 *)((char *)&g_CG_HudLighting_Dvars.modes[0].lights[v10].lum.offset + v11);
  __asm { vmovss  xmm8, dword ptr [rax+28h] }
  _R14 = *(__int64 *)((char *)&g_CG_HudLighting_Dvars.modes[0].lights[v10].color.scale + v11);
  do
  {
    if ( !v13 )
    {
      LODWORD(v32) = 3;
      LODWORD(v29) = v12;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v29, v32) )
        __debugbreak();
      LODWORD(v33) = 3;
      LODWORD(v30) = v12;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v30, v33) )
        __debugbreak();
      LODWORD(v34) = 3;
      LODWORD(v31) = v12;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v31, v34) )
        __debugbreak();
    }
    _RDI = (int)v12;
    __asm
    {
      vmovss  xmm0, dword ptr [r14+rdi*4+28h]
      vmulss  xmm1, xmm0, dword ptr [rbp+rdi*4+0]
      vmulss  xmm2, xmm1, xmm7
      vaddss  xmm3, xmm2, dword ptr [r15+rdi*4+28h]
      vaddss  xmm6, xmm3, xmm8
    }
    if ( v12 >= 3 )
    {
      LODWORD(v32) = 3;
      LODWORD(v29) = v12;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v29, v32) )
        __debugbreak();
    }
    ++v12;
    __asm { vmovss  dword ptr [rsi+rdi*4], xmm6 }
    v13 = v12 < 3;
  }
  while ( v12 != 3 );
  __asm { vmovaps xmm6, [rsp+88h+var_28] }
  _R11 = &v37;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm7, [rsp+88h+var_38]
  }
}

/*
==============
CG_HudLighting_ArchiveState
==============
*/
void CG_HudLighting_ArchiveState(MemoryFile *memFile, CG_HudLighting_State *hudLightingState)
{
  MemFile_ArchiveData(memFile, 4, hudLightingState);
  MemFile_ArchiveData(memFile, 12, &hudLightingState->forceAdditiveColor);
  MemFile_ArchiveData(memFile, 12, &hudLightingState->forceAdditiveColorStart);
  MemFile_ArchiveData(memFile, 12, &hudLightingState->forceAdditiveColorEnd);
  MemFile_ArchiveData(memFile, 4, &hudLightingState->forceAdditiveChangeTime);
  MemFile_ArchiveData(memFile, 4, &hudLightingState->forceAdditiveChangeDuration);
}

/*
==============
CG_HudLighting_Assign
==============
*/
void CG_HudLighting_Assign(CG_HudLighting_State *outHudLightingState)
{
  DebugWipe(outHudLightingState, 0x30ui64);
  *(_QWORD *)&outHudLightingState->lightChangeTime = 0i64;
  *(_QWORD *)&outHudLightingState->forceAdditiveColor.y = 0i64;
  *(_QWORD *)outHudLightingState->forceAdditiveColorStart.v = 0i64;
  *(_QWORD *)&outHudLightingState->forceAdditiveColorStart.z = 0i64;
  *(_QWORD *)&outHudLightingState->forceAdditiveColorEnd.y = 0i64;
  *(_QWORD *)&outHudLightingState->forceAdditiveChangeTime = 0i64;
}

/*
==============
CG_HudLighting_CalcLight
==============
*/
void CG_HudLighting_CalcLight(vec3_t *outDiffuseColor, vec3_t *outLightDir, vec3_t *outSpecHalfAngleDir, const vec3_t *cameraOrigin, const tmat33_t<vec3_t> *worldToViewAxis, const GfxLight *light)
{
  unsigned __int8 type; 
  vec3_t out; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-38h], xmm6
    vmovaps [rsp+0B8h+var_48], xmm7
    vmovaps xmmword ptr [r11-58h], xmm8
    vmovaps xmmword ptr [r11-78h], xmm10
  }
  _RBX = light;
  _RDI = outDiffuseColor;
  _RSI = cameraOrigin;
  __asm { vmovss  xmm10, cs:__real@80000000 }
  _R14 = outSpecHalfAngleDir;
  _RBP = outLightDir;
  if ( light->type )
  {
    AxisTransformVec3(worldToViewAxis, &light->dir, &out);
    __asm
    {
      vmovss  xmm6, dword ptr [rsp+0B8h+out+4]
      vmovss  xmm5, dword ptr [rsp+0B8h+out]
      vmovss  xmm4, dword ptr [rsp+0B8h+out+8]
      vmovss  xmm8, cs:__real@3f800000
    }
    type = light->type;
    __asm
    {
      vmulss  xmm0, xmm6, xmm6
      vmulss  xmm1, xmm5, xmm5
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm4, xmm4
      vaddss  xmm0, xmm2, xmm1
      vsqrtss xmm3, xmm0, xmm0
      vcmpless xmm0, xmm3, xmm10
      vblendvps xmm0, xmm3, xmm8, xmm0
      vdivss  xmm2, xmm8, xmm0
      vmulss  xmm0, xmm5, xmm2
      vmulss  xmm1, xmm6, xmm2
      vmovss  dword ptr [rsp+0B8h+out], xmm0
      vmulss  xmm0, xmm4, xmm2
      vmovss  dword ptr [rsp+0B8h+out+8], xmm0
      vmovss  dword ptr [rsp+0B8h+out+4], xmm1
      vmovaps xmm6, xmm8
    }
    if ( (unsigned __int8)(type - 2) <= 1u )
    {
      __asm
      {
        vmovaps [rsp+0B8h+var_68], xmm9
        vmovss  xmm0, dword ptr [rsi]
        vsubss  xmm4, xmm0, dword ptr [rbx+38h]
        vmovss  xmm1, dword ptr [rsi+4]
        vsubss  xmm7, xmm1, dword ptr [rbx+3Ch]
        vmovss  xmm0, dword ptr [rsi+8]
        vsubss  xmm9, xmm0, dword ptr [rbx+40h]
        vmulss  xmm2, xmm7, xmm7
        vmulss  xmm1, xmm4, xmm4
        vmulss  xmm0, xmm9, xmm9
        vaddss  xmm3, xmm2, xmm1
        vaddss  xmm2, xmm3, xmm0
        vsqrtss xmm5, xmm2, xmm2
        vdivss  xmm1, xmm5, dword ptr [rbx+44h]
        vminss  xmm0, xmm1, xmm8
        vsubss  xmm6, xmm8, xmm0
      }
      if ( type == 2 )
      {
        __asm
        {
          vcmpless xmm0, xmm5, xmm10
          vblendvps xmm0, xmm5, xmm8, xmm0
          vdivss  xmm5, xmm8, xmm0
          vmulss  xmm1, xmm4, xmm5
          vmulss  xmm2, xmm1, dword ptr [rbx+20h]
          vmulss  xmm0, xmm7, xmm5
          vmulss  xmm3, xmm0, dword ptr [rbx+24h]
          vmulss  xmm0, xmm9, xmm5
          vmulss  xmm1, xmm0, dword ptr [rbx+28h]
          vmovss  xmm0, dword ptr [rbx+64h]
          vaddss  xmm4, xmm3, xmm2
          vmovss  xmm3, dword ptr [rbx+60h]
          vaddss  xmm2, xmm4, xmm1
          vxorps  xmm5, xmm2, cs:__xmm@80000000800000008000000080000000
          vsubss  xmm2, xmm0, xmm3
          vxorps  xmm1, xmm1, xmm1
          vucomiss xmm2, xmm1
          vcmpltss xmm0, xmm5, xmm3
          vblendvps xmm6, xmm6, xmm1, xmm0
        }
      }
      __asm { vmovaps xmm9, [rsp+0B8h+var_68] }
    }
    __asm
    {
      vmulss  xmm2, xmm6, dword ptr [rbx+10h]
      vmulss  xmm0, xmm2, dword ptr [rbx+14h]
      vmovss  dword ptr [rdi], xmm0
      vmulss  xmm1, xmm2, dword ptr [rbx+18h]
      vmovss  dword ptr [rdi+4], xmm1
      vmulss  xmm0, xmm2, dword ptr [rbx+1Ch]
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm8, cs:__real@3f800000
      vxorps  xmm0, xmm0, xmm0
      vmovss  dword ptr [rsp+0B8h+out], xmm0
      vmovss  dword ptr [rsp+0B8h+out+4], xmm0
      vmovss  dword ptr [rsp+0B8h+out+8], xmm8
    }
    *(_QWORD *)outDiffuseColor->v = 0i64;
  }
  __asm
  {
    vmovss  dword ptr [rdi+8], xmm0
    vmovss  xmm6, dword ptr [rsp+0B8h+out+4]
    vmovss  xmm5, dword ptr [rsp+0B8h+out+8]
    vmovss  xmm7, dword ptr [rsp+0B8h+out]
    vaddss  xmm4, xmm8, xmm7
    vmulss  xmm0, xmm4, xmm4
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm3, xmm2, xmm2
    vcmpless xmm0, xmm3, xmm10
    vblendvps xmm0, xmm3, xmm8, xmm0
    vdivss  xmm2, xmm8, xmm0
    vmulss  xmm3, xmm2, xmm4
    vmovss  dword ptr [r14+8], xmm3
    vmulss  xmm1, xmm2, xmm6
    vmovss  dword ptr [r14], xmm1
    vmulss  xmm0, xmm2, xmm5
    vmovss  dword ptr [r14+4], xmm0
    vmovss  dword ptr [rbp+0], xmm6
    vmovss  dword ptr [rbp+4], xmm5
    vmovss  dword ptr [rbp+8], xmm7
    vmovaps xmm6, [rsp+0B8h+var_38]
    vmovaps xmm7, [rsp+0B8h+var_48]
    vmovaps xmm8, [rsp+0B8h+var_58]
    vmovaps xmm10, [rsp+0B8h+var_78]
  }
}

/*
==============
CG_HudLighting_ComErrorCleanup
==============
*/
void CG_HudLighting_ComErrorCleanup(void)
{
  memset_0(&s_CG_HudLighting_Private, 0, sizeof(s_CG_HudLighting_Private));
  g_CG_HudLighting_Public.enable = 0;
}

/*
==============
CG_HudLighting_DrawBegin
==============
*/
void CG_HudLighting_DrawBegin(LocalClientNum_t localClientIndex, const vec3_t *cameraOrigin, const tmat33_t<vec3_t> *cameraAxis)
{
  _RBX = cameraAxis;
  _RDI = cameraOrigin;
  if ( s_CG_HudLighting_Private.drawContext.began && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hud_lighting.cpp", 189, ASSERT_TYPE_ASSERT, "(!s_CG_HudLighting_Private.drawContext.began)", (const char *)&queryFormat, "!s_CG_HudLighting_Private.drawContext.began") )
    __debugbreak();
  DebugWipe(&s_CG_HudLighting_Private, 0xBCui64);
  s_CG_HudLighting_Private.drawContext.began = 1;
  if ( g_CG_HudLighting_Public.enable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hud_lighting.cpp", 195, ASSERT_TYPE_ASSERT, "(!CG_HudLighting_IsEnabled())", (const char *)&queryFormat, "!CG_HudLighting_IsEnabled()") )
    __debugbreak();
  s_CG_HudLighting_Private.drawContext.localClientIndex = localClientIndex;
  g_CG_HudLighting_Public.enable = 1;
  __asm
  {
    vmovsd  xmm0, qword ptr [rdi]
    vmovsd  qword ptr cs:s_CG_HudLighting_Private.drawContext.cameraOrigin, xmm0
  }
  s_CG_HudLighting_Private.drawContext.cameraOrigin.v[2] = _RDI->v[2];
  __asm
  {
    vmovups ymm0, ymmword ptr [rbx]
    vmovups ymmword ptr cs:s_CG_HudLighting_Private.drawContext.cameraAxis, ymm0
  }
  s_CG_HudLighting_Private.drawContext.cameraAxis.m[2].v[2] = _RBX->m[2].v[2];
}

/*
==============
CG_HudLighting_DrawEnd
==============
*/
void CG_HudLighting_DrawEnd(void)
{
  if ( !s_CG_HudLighting_Private.drawContext.began && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hud_lighting.cpp", 209, ASSERT_TYPE_ASSERT, "(s_CG_HudLighting_Private.drawContext.began)", (const char *)&queryFormat, "s_CG_HudLighting_Private.drawContext.began") )
    __debugbreak();
  if ( !g_CG_HudLighting_Public.enable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hud_lighting.cpp", 212, ASSERT_TYPE_ASSERT, "(CG_HudLighting_IsEnabled())", (const char *)&queryFormat, "CG_HudLighting_IsEnabled()") )
    __debugbreak();
  g_CG_HudLighting_Public.enable = 0;
  DebugWipe(&s_CG_HudLighting_Private, 0xBCui64);
  s_CG_HudLighting_Private.drawContext.began = 0;
}

/*
==============
CG_HudLighting_DrawRequest
==============
*/
void CG_HudLighting_DrawRequest()
{
  __int64 localClientIndex; 
  int frametime; 
  GfxLight *primaryLights; 
  GfxLit2DShaderMode v20; 
  int v21; 
  int forceAdditiveChangeTime; 
  int v99; 
  int v100; 
  GfxLit2DShaderState::ModeState *v134; 
  GfxLight *light; 
  __int64 v136; 
  vec3_t outSpecHalfAngleDir; 
  vec3_t outLightDir; 
  vec3_t outDiffuseColor; 
  vec3_t inColor; 
  vec3_t v147; 
  vec3_t v148; 
  vec3_t v149; 
  tmat33_t<vec3_t> out; 

  if ( !g_CG_HudLighting_Public.enable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hud_lighting.cpp", 234, ASSERT_TYPE_ASSERT, "(g_CG_HudLighting_Public.enable)", (const char *)&queryFormat, "g_CG_HudLighting_Public.enable") )
    __debugbreak();
  if ( !s_CG_HudLighting_Private.drawContext.began && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hud_lighting.cpp", 235, ASSERT_TYPE_ASSERT, "(s_CG_HudLighting_Private.drawContext.began)", (const char *)&queryFormat, "s_CG_HudLighting_Private.drawContext.began") )
    __debugbreak();
  if ( !frontEndDataOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hud_lighting.cpp", 239, ASSERT_TYPE_ASSERT, "(frontEndDataOut)", (const char *)&queryFormat, "frontEndDataOut") )
    __debugbreak();
  if ( !frontEndDataOut->hudLightingRequested )
  {
    __asm
    {
      vmovaps [rsp+1B0h+var_30], xmm6
      vmovaps [rsp+1B0h+var_40], xmm7
      vmovaps [rsp+1B0h+var_50], xmm8
      vmovaps [rsp+1B0h+var_60], xmm9
      vmovaps [rsp+1B0h+var_70], xmm10
    }
    frontEndDataOut->hudLightingRequested = 1;
    localClientIndex = s_CG_HudLighting_Private.drawContext.localClientIndex;
    __asm
    {
      vmovaps [rsp+1B0h+var_80], xmm11
      vmovaps [rsp+1B0h+var_90], xmm12
      vmovaps [rsp+1B0h+var_A0], xmm13
    }
    if ( s_CG_HudLighting_Private.drawContext.localClientIndex >= (unsigned int)cg_t::ms_allocatedCount )
    {
      LODWORD(light) = s_CG_HudLighting_Private.drawContext.localClientIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_t::ms_allocatedCount )", "localClientNum doesn't index cg_t::ms_allocatedCount\n\t%i not in [0, %i)", light, cg_t::ms_allocatedCount) )
        __debugbreak();
    }
    if ( !cg_t::ms_cgArray[localClientIndex] )
    {
      LODWORD(v136) = localClientIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1167, ASSERT_TYPE_ASSERT, "(cg_t::ms_cgArray[localClientNum])", "%s\n\tTrying to access unallocated client globals for localClientNum %d\n", "cg_t::ms_cgArray[localClientNum]", v136) )
        __debugbreak();
    }
    if ( cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN )
    {
      LODWORD(v136) = localClientIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1168, ASSERT_TYPE_ASSERT, "(cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client globals for localClientNum %d but the client global type is not known\n", "cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN", v136) )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, dword ptr cs:s_CG_HudLighting_Private.drawContext.cameraOrigin
      vmovss  xmm1, dword ptr cs:s_CG_HudLighting_Private.drawContext.cameraOrigin+4
      vmovss  xmm6, cs:__real@3f000000
    }
    _RDI = cg_t::ms_cgArray[localClientIndex];
    __asm
    {
      vmovss  dword ptr [rbp+0B0h+inColor], xmm0
      vmovss  xmm0, dword ptr cs:s_CG_HudLighting_Private.drawContext.cameraOrigin+8
      vmovss  dword ptr [rbp+0B0h+inColor+4], xmm1
      vmovss  xmm1, cs:__real@41c00000
    }
    frametime = _RDI->frametime;
    __asm
    {
      vmovss  dword ptr [rbp+0B0h+inColor+8], xmm0
      vmovss  dword ptr [rbp+0B0h+inColor+8], xmm6
      vmovss  [rbp+0B0h+var_124], xmm1
      vmovss  [rbp+0B0h+var_120], xmm1
      vmovss  [rbp+0B0h+var_11C], xmm1
      vmovss  dword ptr [rbp+0B0h+inColor], xmm6
      vmovss  dword ptr [rbp+0B0h+inColor+4], xmm6
    }
    AxisTranspose(&s_CG_HudLighting_Private.drawContext.cameraAxis, &out);
    if ( !rgp.world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hud_lighting.cpp", 259, ASSERT_TYPE_ASSERT, "(rgp.world)", (const char *)&queryFormat, "rgp.world") )
      __debugbreak();
    primaryLights = rgp.world->primaryLights;
    if ( !comWorld.isInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_bsp_api.h", 21, ASSERT_TYPE_ASSERT, "(comWorld.isInUse)", (const char *)&queryFormat, "comWorld.isInUse") )
      __debugbreak();
    if ( !comWorld.primaryLightCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hud_lighting.cpp", 261, ASSERT_TYPE_ASSERT, "(primaryLightIndex < Com_GetPrimaryLightCount())", (const char *)&queryFormat, "primaryLightIndex < Com_GetPrimaryLightCount()") )
      __debugbreak();
    CG_HudLighting_CalcLight(&outDiffuseColor, &outLightDir, &outSpecHalfAngleDir, &s_CG_HudLighting_Private.drawContext.cameraOrigin, &out, primaryLights);
    __asm { vmovss  xmm7, cs:__real@40000000 }
    v20 = GFXLIT2DSHADERMODE_BASIC;
    if ( _RDI->hudLightingState.lightChangeTime <= 0 )
    {
      __asm
      {
        vmovss  xmm8, dword ptr [rsp+1B0h+outSpecHalfAngleDir+8]
        vmovss  xmm9, dword ptr [rsp+1B0h+outSpecHalfAngleDir+4]
        vmovss  xmm10, dword ptr [rsp+1B0h+outSpecHalfAngleDir]
        vmovss  xmm11, dword ptr [rsp+1B0h+outLightDir+8]
        vmovss  xmm12, dword ptr [rsp+1B0h+outLightDir+4]
        vmovss  xmm13, dword ptr [rsp+1B0h+outLightDir]
      }
    }
    else
    {
      __asm { vmovaps [rsp+1B0h+var_B0], xmm14 }
      if ( !comWorld.isInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_bsp_api.h", 21, ASSERT_TYPE_ASSERT, "(comWorld.isInUse)", (const char *)&queryFormat, "comWorld.isInUse") )
        __debugbreak();
      if ( !comWorld.primaryLightCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hud_lighting.cpp", 270, ASSERT_TYPE_ASSERT, "(previousPrimaryLightIndex < Com_GetPrimaryLightCount())", (const char *)&queryFormat, "previousPrimaryLightIndex < Com_GetPrimaryLightCount()") )
        __debugbreak();
      CG_HudLighting_CalcLight(&v147, &v148, &v149, &s_CG_HudLighting_Private.drawContext.cameraOrigin, &out, primaryLights);
      v21 = 0;
      __asm
      {
        vmovss  xmm8, cs:__real@3f800000
        vxorps  xmm0, xmm0, xmm0
        vxorps  xmm1, xmm1, xmm1
      }
      if ( _RDI->hudLightingState.lightChangeTime - frametime > 0 )
        v21 = _RDI->hudLightingState.lightChangeTime - frametime;
      __asm { vcvtsi2ss xmm1, xmm1, ecx }
      _RDI->hudLightingState.lightChangeTime = v21;
      __asm
      {
        vcvtsi2ss xmm0, xmm0, cs:?s_CG_HudLighting_interpTime@@3HA; int s_CG_HudLighting_interpTime
        vmovsd  xmm10, qword ptr cs:?s_CG_HudLighting_fallbackLightDir@@3Tvec3_t@@A; vec3_t s_CG_HudLighting_fallbackLightDir
        vdivss  xmm5, xmm1, xmm0
        vmovss  xmm1, dword ptr [rbp+0B0h+var_118]
        vsubss  xmm0, xmm1, dword ptr [rsp+1B0h+outDiffuseColor]
        vmulss  xmm2, xmm0, xmm5
        vaddss  xmm0, xmm2, dword ptr [rsp+1B0h+outDiffuseColor]
        vmovss  [rsp+1B0h+var_170], xmm0
        vmovss  xmm0, dword ptr [rbp+0B0h+var_118+4]
        vsubss  xmm1, xmm0, dword ptr [rsp+1B0h+outDiffuseColor+4]
        vmulss  xmm2, xmm1, xmm5
        vaddss  xmm0, xmm2, dword ptr [rsp+1B0h+outDiffuseColor+4]
        vmovss  [rsp+1B0h+var_16C], xmm0
        vmovss  xmm0, dword ptr [rbp+0B0h+var_118+8]
        vsubss  xmm1, xmm0, dword ptr [rsp+1B0h+outDiffuseColor+8]
        vmulss  xmm2, xmm1, xmm5
        vaddss  xmm0, xmm2, dword ptr [rsp+1B0h+outDiffuseColor+8]
        vmovss  [rsp+1B0h+var_168], xmm0
        vmovss  xmm0, dword ptr [rbp+0B0h+var_108]
        vsubss  xmm1, xmm0, dword ptr [rsp+1B0h+outLightDir]
        vmovss  xmm0, dword ptr [rbp+0B0h+var_108+4]
        vmulss  xmm2, xmm1, xmm5
        vsubss  xmm1, xmm0, dword ptr [rsp+1B0h+outLightDir+4]
        vaddss  xmm9, xmm2, dword ptr [rsp+1B0h+outLightDir]
        vmovss  xmm0, dword ptr [rbp+0B0h+var_108+8]
        vmulss  xmm2, xmm1, xmm5
        vsubss  xmm1, xmm0, dword ptr [rsp+1B0h+outLightDir+8]
        vaddss  xmm11, xmm2, dword ptr [rsp+1B0h+outLightDir+4]
        vmulss  xmm2, xmm1, xmm5
        vaddss  xmm4, xmm2, dword ptr [rsp+1B0h+outLightDir+8]
        vmulss  xmm0, xmm9, xmm9
        vmulss  xmm3, xmm11, xmm11
        vmulss  xmm1, xmm4, xmm4
        vaddss  xmm2, xmm3, xmm0
        vaddss  xmm0, xmm2, xmm1
        vcomiss xmm0, cs:__real@3a83126f
        vsqrtss xmm1, xmm0, xmm0
        vcmpless xmm0, xmm1, cs:__real@80000000
        vblendvps xmm0, xmm1, xmm8, xmm0
        vdivss  xmm1, xmm8, xmm0
        vmulss  xmm12, xmm11, xmm1
        vmulss  xmm11, xmm4, xmm1
        vmulss  xmm13, xmm9, xmm1
        vmovss  xmm0, dword ptr [rbp+0B0h+var_F8]
        vsubss  xmm1, xmm0, dword ptr [rsp+1B0h+outSpecHalfAngleDir]
        vmovss  xmm0, dword ptr [rbp+0B0h+var_F8+4]
        vmulss  xmm2, xmm1, xmm5
        vsubss  xmm1, xmm0, dword ptr [rsp+1B0h+outSpecHalfAngleDir+4]
        vaddss  xmm9, xmm2, dword ptr [rsp+1B0h+outSpecHalfAngleDir]
        vmovss  xmm0, dword ptr [rbp+0B0h+var_F8+8]
        vmulss  xmm2, xmm1, xmm5
        vsubss  xmm1, xmm0, dword ptr [rsp+1B0h+outSpecHalfAngleDir+8]
        vaddss  xmm4, xmm2, dword ptr [rsp+1B0h+outSpecHalfAngleDir+4]
        vmulss  xmm2, xmm1, xmm5
        vaddss  xmm14, xmm2, dword ptr [rsp+1B0h+outSpecHalfAngleDir+8]
        vmulss  xmm0, xmm9, xmm9
        vmulss  xmm3, xmm4, xmm4
        vmulss  xmm1, xmm14, xmm14
        vaddss  xmm2, xmm3, xmm0
        vaddss  xmm0, xmm2, xmm1
        vcomiss xmm0, cs:__real@3a83126f
        vsqrtss xmm1, xmm0, xmm0
        vcmpless xmm0, xmm1, cs:__real@80000000
        vblendvps xmm0, xmm1, xmm8, xmm0
        vdivss  xmm1, xmm8, xmm0
        vmulss  xmm10, xmm9, xmm1
        vmulss  xmm9, xmm4, xmm1
        vmulss  xmm8, xmm14, xmm1
        vmovaps xmm14, [rsp+1B0h+var_B0]
        vsubss  xmm0, xmm5, xmm6
        vmulss  xmm2, xmm0, xmm7
        vandps  xmm2, xmm2, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vmulss  xmm0, xmm2, [rsp+1B0h+var_170]
        vmulss  xmm1, xmm2, [rsp+1B0h+var_16C]
        vmovss  dword ptr [rsp+1B0h+outDiffuseColor], xmm0
        vmulss  xmm0, xmm2, [rsp+1B0h+var_168]
        vmovss  dword ptr [rsp+1B0h+outDiffuseColor+8], xmm0
        vmovss  dword ptr [rsp+1B0h+outDiffuseColor+4], xmm1
      }
    }
    forceAdditiveChangeTime = _RDI->hudLightingState.forceAdditiveChangeTime;
    _RSI = &_RDI->hudLightingState.forceAdditiveColor;
    if ( forceAdditiveChangeTime > 0 )
    {
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, dword ptr [rdi+59F20h]
      }
      v99 = forceAdditiveChangeTime - frametime;
      v100 = 0;
      if ( v99 > 0 )
        v100 = v99;
      _RDI->hudLightingState.forceAdditiveChangeTime = v100;
      __asm
      {
        vmovss  xmm3, dword ptr [rdi+59F10h]
        vcvtsi2ss xmm1, xmm1, eax
        vdivss  xmm6, xmm1, xmm0
        vmovss  xmm0, dword ptr [rdi+59F04h]
        vsubss  xmm1, xmm0, xmm3
        vmulss  xmm2, xmm1, xmm6
        vaddss  xmm3, xmm2, xmm3
        vmovss  dword ptr [rsi], xmm3
        vmovss  xmm4, dword ptr [rdi+59F14h]
        vmovss  xmm0, dword ptr [rdi+59F08h]
        vsubss  xmm1, xmm0, xmm4
        vmulss  xmm2, xmm1, xmm6
        vaddss  xmm3, xmm2, xmm4
        vmovss  dword ptr [rdi+59EFCh], xmm3
        vmovss  xmm5, dword ptr [rdi+59F18h]
        vmovss  xmm0, dword ptr [rdi+59F0Ch]
        vsubss  xmm1, xmm0, xmm5
        vmulss  xmm2, xmm1, xmm6
        vaddss  xmm3, xmm2, xmm5
        vmovss  dword ptr [rdi+59F00h], xmm3
      }
    }
    DebugWipe(&s_CG_HudLighting_Private.drawContext.shaderState, 0x84ui64);
    _RAX = g_CG_HudLighting_Dvars.fadeSharpness;
    __asm
    {
      vmovaps xmm6, [rsp+1B0h+var_30]
      vmulss  xmm1, xmm13, xmm7
      vmovaps xmm13, [rsp+1B0h+var_A0]
      vmovss  xmm0, dword ptr [rax+28h]
      vmovss  cs:s_CG_HudLighting_Private.drawContext.shaderState.fadeSharpness, xmm0
      vmulss  xmm0, xmm12, xmm7
      vmovaps xmm12, [rsp+1B0h+var_90]
      vmovss  dword ptr cs:s_CG_HudLighting_Private.drawContext.shaderState.lightDirX2+4, xmm0
      vmulss  xmm0, xmm10, xmm7
      vmovaps xmm10, [rsp+1B0h+var_70]
      vmovss  dword ptr cs:s_CG_HudLighting_Private.drawContext.shaderState.lightDirX2, xmm1
      vmulss  xmm1, xmm11, xmm7
      vmovaps xmm11, [rsp+1B0h+var_80]
      vmovss  dword ptr cs:s_CG_HudLighting_Private.drawContext.shaderState.specHalfAngleDirX2, xmm0
      vmulss  xmm0, xmm8, xmm7
      vmovaps xmm8, [rsp+1B0h+var_50]
      vmovss  dword ptr cs:s_CG_HudLighting_Private.drawContext.shaderState.lightDirX2+8, xmm1
      vmulss  xmm1, xmm9, xmm7
      vmovaps xmm9, [rsp+1B0h+var_60]
      vmovaps xmm7, [rsp+1B0h+var_40]
      vmovss  dword ptr cs:s_CG_HudLighting_Private.drawContext.shaderState.specHalfAngleDirX2+8, xmm0
      vmovss  dword ptr cs:s_CG_HudLighting_Private.drawContext.shaderState.specHalfAngleDirX2+4, xmm1
    }
    do
    {
      v134 = &s_CG_HudLighting_Private.drawContext.shaderState.modes[v20];
      if ( (unsigned int)v20 >= GFXLIT2DSHADERMODE_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hud_lighting.cpp", 90, ASSERT_TYPE_ASSERT, "(mode < ( sizeof( *array_counter( g_CG_HudLighting_Dvars.modes ) ) + 0 ))", (const char *)&queryFormat, "mode < ARRAY_COUNT( g_CG_HudLighting_Dvars.modes )") )
        __debugbreak();
      LODWORD(v134->specExponent) = g_CG_HudLighting_Dvars.modes[v20].specExponent->current.integer;
      CG_HudLighting_ApplyColorScaleOffset(&s_CG_HudLighting_Private.drawContext.shaderState.modes[v20].ambientColor, &inColor, v20, CG_HUDLIGHTING_LIGHTTYPE_AMBIENT);
      CG_HudLighting_ApplyColorScaleOffset(&v134->diffuseColor, &outDiffuseColor, v20, CG_HUDLIGHTING_LIGHTTYPE_DIFFUSE);
      CG_HudLighting_ApplyColorScaleOffset(&v134->specColor, &outDiffuseColor, v20, CG_HUDLIGHTING_LIGHTTYPE_SPEC);
      CG_HudLighting_ApplyColorScaleOffset(&v134->additiveColor, _RSI, v20++, CG_HUDLIGHTING_LIGHTTYPE_ADDITIVE);
    }
    while ( v20 != GFXLIT2DSHADERMODE_COUNT );
  }
}

