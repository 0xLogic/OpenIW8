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
  __int64 v5; 
  __int64 v7; 
  __int64 v8; 
  signed int v9; 
  bool v10; 
  float value; 
  float v12; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  float v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 
  __int64 v21; 
  __int64 v22; 

  v5 = mode;
  v7 = lightType;
  if ( mode >= GFXLIT2DSHADERMODE_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hud_lighting.cpp", 174, ASSERT_TYPE_ASSERT, "(mode < GFXLIT2DSHADERMODE_COUNT)", (const char *)&queryFormat, "mode < GFXLIT2DSHADERMODE_COUNT") )
    __debugbreak();
  v8 = 136 * v5;
  v9 = 0;
  v10 = 1;
  value = (*(const dvar_t **)((char *)&g_CG_HudLighting_Dvars.modes[0].lights[v7].lum.scale + v8))->current.value;
  v12 = (*(const dvar_t **)((char *)&g_CG_HudLighting_Dvars.modes[0].lights[v7].lum.offset + v8))->current.value;
  v13 = *(__int64 *)((char *)&g_CG_HudLighting_Dvars.modes[0].lights[v7].color.scale + v8);
  v14 = *(__int64 *)((char *)&g_CG_HudLighting_Dvars.modes[0].lights[v7].color.offset + v8);
  do
  {
    if ( !v10 )
    {
      LODWORD(v20) = 3;
      LODWORD(v17) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v17, v20) )
        __debugbreak();
      LODWORD(v21) = 3;
      LODWORD(v18) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v18, v21) )
        __debugbreak();
      LODWORD(v22) = 3;
      LODWORD(v19) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v19, v22) )
        __debugbreak();
    }
    v15 = v9;
    v16 = (float)((float)((float)(*(float *)(v13 + 4i64 * v9 + 40) * inColor->v[v9]) * value) + *(float *)(v14 + 4i64 * v9 + 40)) + v12;
    if ( (unsigned int)v9 >= 3 )
    {
      LODWORD(v20) = 3;
      LODWORD(v17) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v17, v20) )
        __debugbreak();
    }
    ++v9;
    outColor->v[v15] = v16;
    v10 = (unsigned int)v9 < 3;
  }
  while ( v9 != 3 );
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
  float v10; 
  unsigned __int8 type; 
  __int128 v12; 
  float v17; 
  __int128 v18; 
  __int128 v19; 
  float v20; 
  __int128 v24; 
  float cosHalfFovOuter; 
  __int128 v28; 
  float v30; 
  __int128 v33; 
  __int128 v36; 
  float v38; 
  float v39; 
  __int128 v40; 
  float v41; 
  float v42; 
  __int128 v43; 
  vec3_t out; 

  if ( light->type )
  {
    AxisTransformVec3(worldToViewAxis, &light->dir, &out);
    v10 = FLOAT_1_0;
    type = light->type;
    v12 = LODWORD(out.v[0]);
    *(float *)&v12 = fsqrt((float)((float)(*(float *)&v12 * *(float *)&v12) + (float)(out.v[1] * out.v[1])) + (float)(out.v[2] * out.v[2]));
    _XMM3 = v12;
    __asm
    {
      vcmpless xmm0, xmm3, xmm10
      vblendvps xmm0, xmm3, xmm8, xmm0
    }
    out.v[0] = out.v[0] * (float)(1.0 / *(float *)&_XMM0);
    out.v[2] = out.v[2] * (float)(1.0 / *(float *)&_XMM0);
    out.v[1] = out.v[1] * (float)(1.0 / *(float *)&_XMM0);
    *(float *)&_XMM6 = FLOAT_1_0;
    if ( (unsigned __int8)(type - 2) <= 1u )
    {
      v17 = cameraOrigin->v[0] - light->origin.v[0];
      v19 = LODWORD(cameraOrigin->v[1]);
      *(float *)&v19 = cameraOrigin->v[1] - light->origin.v[1];
      v18 = v19;
      v20 = cameraOrigin->v[2] - light->origin.v[2];
      *(float *)&v19 = fsqrt((float)((float)(*(float *)&v19 * *(float *)&v19) + (float)(v17 * v17)) + (float)(v20 * v20));
      _XMM5 = v19;
      *(float *)&v19 = *(float *)&v19 / light->radius;
      _XMM1 = v19;
      __asm { vminss  xmm0, xmm1, xmm8 }
      v24 = LODWORD(FLOAT_1_0);
      *(float *)&v24 = 1.0 - *(float *)&_XMM0;
      _XMM6 = v24;
      if ( type == 2 )
      {
        __asm
        {
          vcmpless xmm0, xmm5, xmm10
          vblendvps xmm0, xmm5, xmm8, xmm0
        }
        v28 = v18;
        cosHalfFovOuter = light->cosHalfFovOuter;
        *(float *)&v28 = (float)((float)((float)(*(float *)&v18 * (float)(1.0 / *(float *)&_XMM0)) * light->dir.v[1]) + (float)((float)(v17 * (float)(1.0 / *(float *)&_XMM0)) * light->dir.v[0])) + (float)((float)(v20 * (float)(1.0 / *(float *)&_XMM0)) * light->dir.v[2]);
        _XMM5 = v28 ^ _xmm;
        v30 = light->cosHalfFovInner - cosHalfFovOuter;
        if ( v30 == 0.0 )
        {
          __asm
          {
            vcmpltss xmm0, xmm5, xmm3
            vblendvps xmm6, xmm6, xmm1, xmm0
          }
        }
        else
        {
          v33 = v28 ^ _xmm;
          *(float *)&v33 = *(float *)&_XMM5 - cosHalfFovOuter;
          _XMM0 = v33;
          __asm { vmaxss  xmm0, xmm0, xmm1 }
          v36 = _XMM0;
          *(float *)&v36 = *(float *)&_XMM0 / v30;
          _XMM1 = v36;
          __asm { vminss  xmm2, xmm1, xmm8 }
          *(float *)&_XMM6 = *(float *)&_XMM6 * *(float *)&_XMM2;
        }
      }
    }
    v38 = *(float *)&_XMM6 * light->intensity;
    outDiffuseColor->v[0] = v38 * light->colorLinearSrgb.v[0];
    outDiffuseColor->v[1] = v38 * light->colorLinearSrgb.v[1];
    v39 = v38 * light->colorLinearSrgb.v[2];
  }
  else
  {
    v10 = FLOAT_1_0;
    v39 = 0.0;
    out.v[0] = 0.0;
    out.v[1] = 0.0;
    out.v[2] = FLOAT_1_0;
    *(_QWORD *)outDiffuseColor->v = 0i64;
  }
  outDiffuseColor->v[2] = v39;
  v40 = LODWORD(out.v[1]);
  v41 = out.v[2];
  v42 = out.v[0];
  v43 = v40;
  *(float *)&v43 = fsqrt((float)((float)(*(float *)&v40 * *(float *)&v40) + (float)((float)(v10 + out.v[0]) * (float)(v10 + out.v[0]))) + (float)(v41 * v41));
  _XMM3 = v43;
  __asm
  {
    vcmpless xmm0, xmm3, xmm10
    vblendvps xmm0, xmm3, xmm8, xmm0
  }
  outSpecHalfAngleDir->v[2] = (float)(v10 / *(float *)&_XMM0) * (float)(v10 + out.v[0]);
  outSpecHalfAngleDir->v[0] = (float)(v10 / *(float *)&_XMM0) * *(float *)&v40;
  outSpecHalfAngleDir->v[1] = (float)(v10 / *(float *)&_XMM0) * v41;
  outLightDir->v[0] = *(float *)&v40;
  outLightDir->v[1] = v41;
  outLightDir->v[2] = v42;
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
  if ( s_CG_HudLighting_Private.drawContext.began && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hud_lighting.cpp", 189, ASSERT_TYPE_ASSERT, "(!s_CG_HudLighting_Private.drawContext.began)", (const char *)&queryFormat, "!s_CG_HudLighting_Private.drawContext.began") )
    __debugbreak();
  DebugWipe(&s_CG_HudLighting_Private, 0xBCui64);
  s_CG_HudLighting_Private.drawContext.began = 1;
  if ( g_CG_HudLighting_Public.enable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hud_lighting.cpp", 195, ASSERT_TYPE_ASSERT, "(!CG_HudLighting_IsEnabled())", (const char *)&queryFormat, "!CG_HudLighting_IsEnabled()") )
    __debugbreak();
  s_CG_HudLighting_Private.drawContext.localClientIndex = localClientIndex;
  g_CG_HudLighting_Public.enable = 1;
  s_CG_HudLighting_Private.drawContext.cameraOrigin = *cameraOrigin;
  s_CG_HudLighting_Private.drawContext.cameraAxis = *cameraAxis;
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
  __int128 v0; 
  __int128 v1; 
  __int128 v2; 
  __int128 v3; 
  __int128 v4; 
  __int128 v5; 
  __int128 v6; 
  __int128 v7; 
  __int128 v8; 
  __int64 localClientIndex; 
  cg_t *v10; 
  int frametime; 
  GfxLight *primaryLights; 
  GfxLit2DShaderMode v13; 
  int v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  __int128 v19; 
  float v20; 
  float v21; 
  float v22; 
  float v26; 
  float v27; 
  float v28; 
  __int128 v29; 
  float v30; 
  float v31; 
  float v32; 
  float v36; 
  int forceAdditiveChangeTime; 
  vec3_t *p_forceAdditiveColor; 
  float forceAdditiveChangeDuration; 
  int v40; 
  int v41; 
  float v42; 
  GfxLit2DShaderState::ModeState *v43; 
  GfxLight *light; 
  __int64 v45; 
  vec3_t outSpecHalfAngleDir; 
  vec3_t outLightDir; 
  vec3_t outDiffuseColor; 
  vec3_t inColor; 
  float v50; 
  float v51; 
  float v52; 
  vec3_t v53; 
  vec3_t v54; 
  vec3_t v55; 
  tmat33_t<vec3_t> out; 
  __int128 v57; 
  __int128 v58; 
  __int128 v59; 
  __int128 v60; 
  __int128 v61; 
  __int128 v62; 
  __int128 v63; 
  __int128 v64; 
  __int128 v65; 

  if ( !g_CG_HudLighting_Public.enable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hud_lighting.cpp", 234, ASSERT_TYPE_ASSERT, "(g_CG_HudLighting_Public.enable)", (const char *)&queryFormat, "g_CG_HudLighting_Public.enable") )
    __debugbreak();
  if ( !s_CG_HudLighting_Private.drawContext.began && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hud_lighting.cpp", 235, ASSERT_TYPE_ASSERT, "(s_CG_HudLighting_Private.drawContext.began)", (const char *)&queryFormat, "s_CG_HudLighting_Private.drawContext.began") )
    __debugbreak();
  if ( !frontEndDataOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hud_lighting.cpp", 239, ASSERT_TYPE_ASSERT, "(frontEndDataOut)", (const char *)&queryFormat, "frontEndDataOut") )
    __debugbreak();
  if ( !frontEndDataOut->hudLightingRequested )
  {
    v65 = v0;
    v64 = v1;
    v63 = v2;
    v62 = v3;
    v61 = v4;
    frontEndDataOut->hudLightingRequested = 1;
    localClientIndex = s_CG_HudLighting_Private.drawContext.localClientIndex;
    v60 = v5;
    v59 = v6;
    v58 = v7;
    if ( s_CG_HudLighting_Private.drawContext.localClientIndex >= (unsigned int)cg_t::ms_allocatedCount )
    {
      LODWORD(light) = s_CG_HudLighting_Private.drawContext.localClientIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_t::ms_allocatedCount )", "localClientNum doesn't index cg_t::ms_allocatedCount\n\t%i not in [0, %i)", light, cg_t::ms_allocatedCount) )
        __debugbreak();
    }
    if ( !cg_t::ms_cgArray[localClientIndex] )
    {
      LODWORD(v45) = localClientIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1167, ASSERT_TYPE_ASSERT, "(cg_t::ms_cgArray[localClientNum])", "%s\n\tTrying to access unallocated client globals for localClientNum %d\n", "cg_t::ms_cgArray[localClientNum]", v45) )
        __debugbreak();
    }
    if ( cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN )
    {
      LODWORD(v45) = localClientIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1168, ASSERT_TYPE_ASSERT, "(cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client globals for localClientNum %d but the client global type is not known\n", "cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN", v45) )
        __debugbreak();
    }
    v10 = cg_t::ms_cgArray[localClientIndex];
    inColor.v[0] = s_CG_HudLighting_Private.drawContext.cameraOrigin.v[0];
    inColor.v[1] = s_CG_HudLighting_Private.drawContext.cameraOrigin.v[1];
    frametime = v10->frametime;
    inColor.v[2] = FLOAT_0_5;
    v50 = FLOAT_24_0;
    v51 = FLOAT_24_0;
    v52 = FLOAT_24_0;
    inColor.v[0] = FLOAT_0_5;
    inColor.v[1] = FLOAT_0_5;
    AxisTranspose(&s_CG_HudLighting_Private.drawContext.cameraAxis, &out);
    if ( !rgp.world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hud_lighting.cpp", 259, ASSERT_TYPE_ASSERT, "(rgp.world)", (const char *)&queryFormat, "rgp.world") )
      __debugbreak();
    primaryLights = rgp.world->primaryLights;
    if ( !comWorld.isInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_bsp_api.h", 21, ASSERT_TYPE_ASSERT, "(comWorld.isInUse)", (const char *)&queryFormat, "comWorld.isInUse") )
      __debugbreak();
    if ( !comWorld.primaryLightCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hud_lighting.cpp", 261, ASSERT_TYPE_ASSERT, "(primaryLightIndex < Com_GetPrimaryLightCount())", (const char *)&queryFormat, "primaryLightIndex < Com_GetPrimaryLightCount()") )
      __debugbreak();
    CG_HudLighting_CalcLight(&outDiffuseColor, &outLightDir, &outSpecHalfAngleDir, &s_CG_HudLighting_Private.drawContext.cameraOrigin, &out, primaryLights);
    v13 = GFXLIT2DSHADERMODE_BASIC;
    if ( v10->hudLightingState.lightChangeTime <= 0 )
    {
      v31 = outSpecHalfAngleDir.v[2];
      v32 = outSpecHalfAngleDir.v[1];
      v30 = outSpecHalfAngleDir.v[0];
      v21 = outLightDir.v[2];
      v22 = outLightDir.v[1];
      v20 = outLightDir.v[0];
    }
    else
    {
      v57 = v8;
      if ( !comWorld.isInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_bsp_api.h", 21, ASSERT_TYPE_ASSERT, "(comWorld.isInUse)", (const char *)&queryFormat, "comWorld.isInUse") )
        __debugbreak();
      if ( !comWorld.primaryLightCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hud_lighting.cpp", 270, ASSERT_TYPE_ASSERT, "(previousPrimaryLightIndex < Com_GetPrimaryLightCount())", (const char *)&queryFormat, "previousPrimaryLightIndex < Com_GetPrimaryLightCount()") )
        __debugbreak();
      CG_HudLighting_CalcLight(&v53, &v54, &v55, &s_CG_HudLighting_Private.drawContext.cameraOrigin, &out, primaryLights);
      v14 = 0;
      if ( v10->hudLightingState.lightChangeTime - frametime > 0 )
        v14 = v10->hudLightingState.lightChangeTime - frametime;
      v10->hudLightingState.lightChangeTime = v14;
      v15 = (float)v14 / (float)s_CG_HudLighting_interpTime;
      v19 = LODWORD(v54.v[1]);
      v16 = (float)((float)(v54.v[0] - outLightDir.v[0]) * v15) + outLightDir.v[0];
      v17 = (float)((float)(v54.v[1] - outLightDir.v[1]) * v15) + outLightDir.v[1];
      v18 = (float)((float)(v54.v[2] - outLightDir.v[2]) * v15) + outLightDir.v[2];
      *(float *)&v19 = (float)((float)(v17 * v17) + (float)(v16 * v16)) + (float)(v18 * v18);
      if ( *(float *)&v19 >= 0.001 )
      {
        *(float *)&v19 = fsqrt(*(float *)&v19);
        _XMM1 = v19;
        __asm
        {
          vcmpless xmm0, xmm1, cs:__real@80000000
          vblendvps xmm0, xmm1, xmm8, xmm0
        }
        v22 = v17 * (float)(1.0 / *(float *)&_XMM0);
        v21 = v18 * (float)(1.0 / *(float *)&_XMM0);
        v20 = v16 * (float)(1.0 / *(float *)&_XMM0);
      }
      else
      {
        outLightDir = s_CG_HudLighting_fallbackLightDir;
        v20 = outLightDir.v[0];
        v21 = s_CG_HudLighting_fallbackLightDir.v[2];
        LODWORD(v22) = _mm_shuffle_ps((__m128)*(unsigned __int64 *)s_CG_HudLighting_fallbackLightDir.v, (__m128)*(unsigned __int64 *)s_CG_HudLighting_fallbackLightDir.v, 85).m128_u32[0];
      }
      v29 = LODWORD(v55.v[1]);
      v26 = (float)((float)(v55.v[0] - outSpecHalfAngleDir.v[0]) * v15) + outSpecHalfAngleDir.v[0];
      v27 = (float)((float)(v55.v[1] - outSpecHalfAngleDir.v[1]) * v15) + outSpecHalfAngleDir.v[1];
      v28 = (float)((float)(v55.v[2] - outSpecHalfAngleDir.v[2]) * v15) + outSpecHalfAngleDir.v[2];
      *(float *)&v29 = (float)((float)(v27 * v27) + (float)(v26 * v26)) + (float)(v28 * v28);
      if ( *(float *)&v29 >= 0.001 )
      {
        *(float *)&v29 = fsqrt(*(float *)&v29);
        _XMM1 = v29;
        __asm
        {
          vcmpless xmm0, xmm1, cs:__real@80000000
          vblendvps xmm0, xmm1, xmm8, xmm0
        }
        v30 = v26 * (float)(1.0 / *(float *)&_XMM0);
        v32 = v27 * (float)(1.0 / *(float *)&_XMM0);
        v31 = v28 * (float)(1.0 / *(float *)&_XMM0);
      }
      else
      {
        outSpecHalfAngleDir = s_CG_HudLighting_fallbackLightDir;
        v30 = outSpecHalfAngleDir.v[0];
        v31 = s_CG_HudLighting_fallbackLightDir.v[2];
        LODWORD(v32) = _mm_shuffle_ps((__m128)*(unsigned __int64 *)s_CG_HudLighting_fallbackLightDir.v, (__m128)*(unsigned __int64 *)s_CG_HudLighting_fallbackLightDir.v, 85).m128_u32[0];
      }
      v36 = (float)(v15 - 0.5) * 2.0;
      outDiffuseColor.v[0] = COERCE_FLOAT(LODWORD(v36) & _xmm) * (float)((float)((float)(v53.v[0] - outDiffuseColor.v[0]) * v15) + outDiffuseColor.v[0]);
      outDiffuseColor.v[2] = COERCE_FLOAT(LODWORD(v36) & _xmm) * (float)((float)((float)(v53.v[2] - outDiffuseColor.v[2]) * v15) + outDiffuseColor.v[2]);
      outDiffuseColor.v[1] = COERCE_FLOAT(LODWORD(v36) & _xmm) * (float)((float)((float)(v53.v[1] - outDiffuseColor.v[1]) * v15) + outDiffuseColor.v[1]);
    }
    forceAdditiveChangeTime = v10->hudLightingState.forceAdditiveChangeTime;
    p_forceAdditiveColor = &v10->hudLightingState.forceAdditiveColor;
    if ( forceAdditiveChangeTime > 0 )
    {
      forceAdditiveChangeDuration = (float)v10->hudLightingState.forceAdditiveChangeDuration;
      v40 = forceAdditiveChangeTime - frametime;
      v41 = 0;
      if ( v40 > 0 )
        v41 = v40;
      v10->hudLightingState.forceAdditiveChangeTime = v41;
      v42 = (float)v41 / forceAdditiveChangeDuration;
      p_forceAdditiveColor->v[0] = (float)((float)(v10->hudLightingState.forceAdditiveColorStart.v[0] - v10->hudLightingState.forceAdditiveColorEnd.v[0]) * v42) + v10->hudLightingState.forceAdditiveColorEnd.v[0];
      v10->hudLightingState.forceAdditiveColor.v[1] = (float)((float)(v10->hudLightingState.forceAdditiveColorStart.v[1] - v10->hudLightingState.forceAdditiveColorEnd.v[1]) * v42) + v10->hudLightingState.forceAdditiveColorEnd.v[1];
      v10->hudLightingState.forceAdditiveColor.v[2] = (float)((float)(v10->hudLightingState.forceAdditiveColorStart.v[2] - v10->hudLightingState.forceAdditiveColorEnd.v[2]) * v42) + v10->hudLightingState.forceAdditiveColorEnd.v[2];
    }
    DebugWipe(&s_CG_HudLighting_Private.drawContext.shaderState, 0x84ui64);
    LODWORD(s_CG_HudLighting_Private.drawContext.shaderState.fadeSharpness) = g_CG_HudLighting_Dvars.fadeSharpness->current.integer;
    s_CG_HudLighting_Private.drawContext.shaderState.lightDirX2.v[1] = v22 * 2.0;
    s_CG_HudLighting_Private.drawContext.shaderState.lightDirX2.v[0] = v20 * 2.0;
    s_CG_HudLighting_Private.drawContext.shaderState.specHalfAngleDirX2.v[0] = v30 * 2.0;
    s_CG_HudLighting_Private.drawContext.shaderState.lightDirX2.v[2] = v21 * 2.0;
    s_CG_HudLighting_Private.drawContext.shaderState.specHalfAngleDirX2.v[2] = v31 * 2.0;
    s_CG_HudLighting_Private.drawContext.shaderState.specHalfAngleDirX2.v[1] = v32 * 2.0;
    do
    {
      v43 = &s_CG_HudLighting_Private.drawContext.shaderState.modes[v13];
      if ( (unsigned int)v13 >= GFXLIT2DSHADERMODE_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hud_lighting.cpp", 90, ASSERT_TYPE_ASSERT, "(mode < ( sizeof( *array_counter( g_CG_HudLighting_Dvars.modes ) ) + 0 ))", (const char *)&queryFormat, "mode < ARRAY_COUNT( g_CG_HudLighting_Dvars.modes )") )
        __debugbreak();
      LODWORD(v43->specExponent) = g_CG_HudLighting_Dvars.modes[v13].specExponent->current.integer;
      CG_HudLighting_ApplyColorScaleOffset(&s_CG_HudLighting_Private.drawContext.shaderState.modes[v13].ambientColor, &inColor, v13, CG_HUDLIGHTING_LIGHTTYPE_AMBIENT);
      CG_HudLighting_ApplyColorScaleOffset(&v43->diffuseColor, &outDiffuseColor, v13, CG_HUDLIGHTING_LIGHTTYPE_DIFFUSE);
      CG_HudLighting_ApplyColorScaleOffset(&v43->specColor, &outDiffuseColor, v13, CG_HUDLIGHTING_LIGHTTYPE_SPEC);
      CG_HudLighting_ApplyColorScaleOffset(&v43->additiveColor, p_forceAdditiveColor, v13++, CG_HUDLIGHTING_LIGHTTYPE_ADDITIVE);
    }
    while ( v13 != GFXLIT2DSHADERMODE_COUNT );
  }
}

