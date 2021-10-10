/*
==============
R_LightTweak_Enabled
==============
*/

bool __fastcall R_LightTweak_Enabled()
{
  return ?R_LightTweak_Enabled@@YA_NXZ();
}

/*
==============
R_LightTweak_GetSunGameIntensity
==============
*/

double __fastcall R_LightTweak_GetSunGameIntensity()
{
  double result; 

  *(float *)&result = ?R_LightTweak_GetSunGameIntensity@@YAMXZ();
  return result;
}

/*
==============
R_LightTweak_GetSunColorGammaSrgb
==============
*/

void __fastcall R_LightTweak_GetSunColorGammaSrgb(vec3_t *outSunColorGammaSrgb)
{
  ?R_LightTweak_GetSunColorGammaSrgb@@YAXAEATvec3_t@@@Z(outSunColorGammaSrgb);
}

/*
==============
R_LightTweak_InitDvars
==============
*/

void R_LightTweak_InitDvars(void)
{
  ?R_LightTweak_InitDvars@@YAXXZ();
}

/*
==============
R_LightTweak_Update
==============
*/

void __fastcall R_LightTweak_Update(GfxLight *primaryLights, GfxStageInfo *stageInfo)
{
  ?R_LightTweak_Update@@YAXPEAUGfxLight@@PEAUGfxStageInfo@@@Z(primaryLights, stageInfo);
}

/*
==============
R_LightTweak_AngleChanged
==============
*/

bool __fastcall R_LightTweak_AngleChanged(const float tolerance)
{
  return ?R_LightTweak_AngleChanged@@YA_NM@Z(tolerance);
}

/*
==============
R_LightTweak_Init
==============
*/

void R_LightTweak_Init(void)
{
  ?R_LightTweak_Init@@YAXXZ();
}

/*
==============
R_GetVec3FromByteArray
==============
*/
void R_GetVec3FromByteArray(const unsigned __int8 *color, vec3_t *outVec)
{
  unsigned int i; 
  float v5; 
  __int64 v6; 
  __int64 v7; 

  for ( i = 0; i != 3; ++i )
  {
    v5 = (float)*color * 0.0039215689;
    if ( i >= 3 )
    {
      LODWORD(v7) = 3;
      LODWORD(v6) = i;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v6, v7) )
        __debugbreak();
    }
    outVec->v[0] = v5;
    outVec = (vec3_t *)((char *)outVec + 4);
    ++color;
  }
}

/*
==============
R_LightTweak_AngleChanged
==============
*/
bool R_LightTweak_AngleChanged(const float tolerance)
{
  if ( !r_lightTweakEnable->current.enabled )
    return 0;
  _XMM6 = 0i64;
  __asm { vroundss xmm2, xmm6, xmm1, 1 }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(r_lightTweakSunPitch->current.value - r_lightTweakSunPitch->reset.value) * 0.0027777778) - *(float *)&_XMM2) * 360.0) & _xmm) > tolerance )
    return 1;
  __asm { vroundss xmm3, xmm6, xmm2, 1 }
  return COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(r_lightTweakSunHeading->current.value - r_lightTweakSunHeading->reset.value) * 0.0027777778) - *(float *)&_XMM3) * 360.0) & _xmm) > tolerance;
}

/*
==============
R_LightTweak_Enabled
==============
*/
__int64 R_LightTweak_Enabled()
{
  return r_lightTweakEnable->current.color[0];
}

/*
==============
R_LightTweak_GetSunColorGammaSrgb
==============
*/
void R_LightTweak_GetSunColorGammaSrgb(vec3_t *outSunColorGammaSrgb)
{
  R_GetVec3FromByteArray((const unsigned __int8 *)&r_lightTweakSunColor->current, outSunColorGammaSrgb);
}

/*
==============
R_LightTweak_GetSunGameIntensity
==============
*/
float R_LightTweak_GetSunGameIntensity()
{
  return r_lightTweakSunLight->current.value;
}

/*
==============
R_LightTweak_Init
==============
*/
void R_LightTweak_Init(void)
{
  g_tweakPrimaryLightIndex = 0;
}

/*
==============
R_LightTweak_InitDvars
==============
*/
void R_LightTweak_InitDvars(void)
{
  r_lightTweakEnable = Dvar_RegisterBool("NPRKOOLRPL", 0, 0x44u, "Apply sun tweaks to the active sun");
  r_lightTweakSunLight = Dvar_RegisterFloat("LMPKPQPRMK", 1.0, 0.0, 300.0, 0x4044u, "Sunlight illuminance in kilo-lux");
  r_lightTweakSunColor = Dvar_RegisterColor("NQQQKTMONT", 0.0, 1.0, 0.0, 1.0, 0x4044u, "Sun color in gamma sRGB");
  r_lightTweakSunPitch = Dvar_RegisterFloat("NTTSPKPRPQ", 0.0, -90.0, 90.0, 0x4044u, "Sun pitch in degrees -90 is noon.");
  r_lightTweakSunHeading = Dvar_RegisterFloat("NNNMKNQNTK", 0.0, -180.0, 180.0, 0x4044u, "Sun heading in degrees");
  r_lightTweakSkyRotationAngles = Dvar_RegisterVec3("LQRNQTTST", 0.0, 0.0, 0.0, -180.0, 180.0, 0x4045u, "Rotation angles to apply to the sky (pitch, yaw, roll).  These can be copied to spawnarg of \"skyrotation\" for either worldspawn or light stages.");
}

/*
==============
R_LightTweak_Update
==============
*/
void R_LightTweak_Update(GfxLight *primaryLights, GfxStageInfo *stageInfo)
{
  const dvar_t *v4; 
  float v5; 
  float v6; 
  float v9; 
  DvarValue current; 

  if ( !stageInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_light_tweak.cpp", 218, ASSERT_TYPE_ASSERT, "(stageInfo)", (const char *)&queryFormat, "stageInfo") )
    __debugbreak();
  R_LightTweak_UpdateSun(primaryLights, stageInfo);
  v4 = r_lightTweakSkyRotationAngles;
  if ( !r_lightTweakSkyRotationAngles )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_light_tweak.cpp", 201, ASSERT_TYPE_ASSERT, "(r_lightTweakSkyRotationAngles)", (const char *)&queryFormat, "r_lightTweakSkyRotationAngles") )
      __debugbreak();
    v4 = r_lightTweakSkyRotationAngles;
  }
  v5 = stageInfo->activeStage.skyRotationAngles.v[0];
  if ( v5 != v4->reset.value || v4->reset.vector.v[1] != stageInfo->activeStage.skyRotationAngles.v[1] || v4->reset.vector.v[2] != stageInfo->activeStage.skyRotationAngles.v[2] )
  {
    v6 = v5 * 0.0027777778;
    _XMM8 = 0i64;
    __asm { vroundss xmm2, xmm8, xmm1, 1 }
    v9 = (float)((float)(0.0027777778 * stageInfo->activeStage.skyRotationAngles.v[2]) - *(float *)&_XMM2) * 360.0;
    __asm
    {
      vroundss xmm2, xmm8, xmm1, 1
      vroundss xmm5, xmm8, xmm4, 1
    }
    Dvar_SetVec3_Internal(v4, (float)(v6 - *(float *)&_XMM5) * 360.0, (float)((float)(0.0027777778 * stageInfo->activeStage.skyRotationAngles.v[1]) - *(float *)&_XMM2) * 360.0, v9);
    current = r_lightTweakSkyRotationAngles->current;
    Dvar_ChangeResetValue(r_lightTweakSkyRotationAngles, &current);
    Dvar_ClearModified(r_lightTweakSkyRotationAngles);
    v4 = r_lightTweakSkyRotationAngles;
  }
  LODWORD(stageInfo->activeStage.skyRotationAngles.v[0]) = v4->current.integer;
  stageInfo->activeStage.skyRotationAngles.v[1] = v4->current.vector.v[1];
  stageInfo->activeStage.skyRotationAngles.v[2] = v4->current.vector.v[2];
}

/*
==============
R_LightTweak_UpdateSun
==============
*/
void R_LightTweak_UpdateSun(GfxLight *primaryLights, GfxStageInfo *stageInfo)
{
  __int128 v2; 
  __int128 v3; 
  __int128 v4; 
  __int128 v5; 
  __int64 ActivePrimarySunLight; 
  GfxLight *v9; 
  GfxLight *v10; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  bool v24; 
  bool v25; 
  bool v26; 
  GfxLight *v27; 
  const dvar_t *v28; 
  DvarValue current; 
  vec3_t angles; 
  __int128 v31; 
  __int128 v32; 
  __int128 v33; 
  __int128 v34; 

  ActivePrimarySunLight = R_GetActivePrimarySunLight(stageInfo);
  _XMM14 = 0i64;
  if ( g_tweakPrimaryLightIndex != (_DWORD)ActivePrimarySunLight )
  {
    if ( g_tweakPrimaryLightIndex )
    {
      v9 = &primaryLights[g_tweakPrimaryLightIndex];
      if ( v9->type != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_light_tweak.cpp", 128, ASSERT_TYPE_ASSERT, "(primaryLight->type == 1)", (const char *)&queryFormat, "primaryLight->type == GFX_LIGHT_TYPE_DIR") )
        __debugbreak();
      Dvar_Reset(r_lightTweakSunLight, DVAR_SOURCE_INTERNAL);
      Dvar_Reset(r_lightTweakSunColor, DVAR_SOURCE_INTERNAL);
      Dvar_Reset(r_lightTweakSunPitch, DVAR_SOURCE_INTERNAL);
      Dvar_Reset(r_lightTweakSunHeading, DVAR_SOURCE_INTERNAL);
      R_SetSunLightFromDvars(v9);
    }
    if ( (_DWORD)ActivePrimarySunLight )
    {
      v34 = v2;
      v33 = v3;
      v32 = v4;
      v31 = v5;
      v10 = &primaryLights[ActivePrimarySunLight];
      if ( v10->type != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_light_tweak.cpp", 142, ASSERT_TYPE_ASSERT, "(primaryLight->type == 1)", (const char *)&queryFormat, "primaryLight->type == GFX_LIGHT_TYPE_DIR") )
        __debugbreak();
      Dvar_SetBool_Internal(r_lightTweakEnable, 0);
      Dvar_SetFloat_Internal(r_lightTweakSunLight, v10->intensity * 3.1415927);
      _XMM3 = LODWORD(v10->colorLinearSrgb.v[1]);
      _XMM5 = LODWORD(v10->colorLinearSrgb.v[2]);
      __asm
      {
        vcmpless xmm1, xmm14, xmm0
        vblendvps xmm2, xmm3, xmm4, xmm1
        vcmpless xmm1, xmm14, xmm0
        vblendvps xmm0, xmm5, xmm2, xmm1
      }
      if ( *(float *)&_XMM0 <= 0.0 )
      {
        v18 = *(float *)&_XMM0;
        v20 = *(float *)&_XMM0;
        v19 = *(float *)&_XMM0;
      }
      else
      {
        v17 = 1.0 / *(float *)&_XMM0;
        v18 = v10->colorLinearSrgb.v[0] * v17;
        v19 = *(float *)&_XMM3 * v17;
        v20 = *(float *)&_XMM5 * v17;
      }
      if ( v18 > 0.0031308001 )
        v21 = (float)(powf_0(v18, 0.41666666) * 1.0549999) - 0.055;
      else
        v21 = v18 * 12.92;
      if ( v19 > 0.0031308001 )
        v22 = (float)(powf_0(v19, 0.41666666) * 1.0549999) - 0.055;
      else
        v22 = v19 * 12.92;
      if ( v20 > 0.0031308001 )
        v23 = (float)(powf_0(v20, 0.41666666) * 1.0549999) - 0.055;
      else
        v23 = v20 * 12.92;
      Dvar_SetColor_Internal(r_lightTweakSunColor, v21, v22, v23, 1.0);
      vectosignedangles(&v10->dir, &angles);
      Dvar_SetFloat_Internal(r_lightTweakSunPitch, angles.v[0]);
      Dvar_SetFloat_Internal(r_lightTweakSunHeading, angles.v[1]);
      current = r_lightTweakSunLight->current;
      Dvar_ChangeResetValue(r_lightTweakSunLight, &current);
      current = r_lightTweakSunColor->current;
      Dvar_ChangeResetValue(r_lightTweakSunColor, &current);
      current = r_lightTweakSunPitch->current;
      Dvar_ChangeResetValue(r_lightTweakSunPitch, &current);
      current = r_lightTweakSunHeading->current;
      Dvar_ChangeResetValue(r_lightTweakSunHeading, &current);
      Dvar_ClearModified(r_lightTweakSunLight);
      Dvar_ClearModified(r_lightTweakSunColor);
      Dvar_ClearModified(r_lightTweakSunPitch);
      Dvar_ClearModified(r_lightTweakSunHeading);
    }
    g_tweakPrimaryLightIndex = ActivePrimarySunLight;
    g_tweakLightsReset = 1;
  }
  if ( (_DWORD)ActivePrimarySunLight )
  {
    if ( !r_lightTweakEnable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_light_tweak.cpp", 86, ASSERT_TYPE_ASSERT, "(r_lightTweakEnable)", (const char *)&queryFormat, "r_lightTweakEnable") )
      __debugbreak();
    if ( !r_lightTweakSunLight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_light_tweak.cpp", 87, ASSERT_TYPE_ASSERT, "(r_lightTweakSunLight)", (const char *)&queryFormat, "r_lightTweakSunLight") )
      __debugbreak();
    if ( !r_lightTweakSunColor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_light_tweak.cpp", 88, ASSERT_TYPE_ASSERT, "(r_lightTweakSunColor)", (const char *)&queryFormat, "r_lightTweakSunColor") )
      __debugbreak();
    if ( !r_lightTweakSunPitch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_light_tweak.cpp", 89, ASSERT_TYPE_ASSERT, "(r_lightTweakSunPitch)", (const char *)&queryFormat, "r_lightTweakSunPitch") )
      __debugbreak();
    if ( !r_lightTweakSunHeading && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_light_tweak.cpp", 90, ASSERT_TYPE_ASSERT, "(r_lightTweakSunHeading)", (const char *)&queryFormat, "r_lightTweakSunHeading") )
      __debugbreak();
    v24 = R_CheckDvarModified(r_lightTweakSunLight);
    v25 = R_CheckDvarModified(r_lightTweakSunColor) || v24;
    v26 = R_CheckDvarModified(r_lightTweakSunPitch) || v25;
    if ( v26 | R_CheckDvarModified(r_lightTweakSunHeading) )
      Dvar_SetBool_Internal(r_lightTweakEnable, 1);
    if ( r_lightTweakEnable->current.enabled )
    {
      g_tweakLightsReset = 0;
      R_SetSunLightFromDvars(&primaryLights[ActivePrimarySunLight]);
    }
    else if ( !g_tweakLightsReset )
    {
      v27 = &primaryLights[ActivePrimarySunLight];
      if ( v27->type != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_light_tweak.cpp", 70, ASSERT_TYPE_ASSERT, "(primaryLight->type == 1)", (const char *)&queryFormat, "primaryLight->type == GFX_LIGHT_TYPE_DIR") )
        __debugbreak();
      R_GetVec3FromByteArray((const unsigned __int8 *)&r_lightTweakSunColor->reset, &v27->colorLinearSrgb);
      GammaToLinearColor_Srgb(&v27->colorLinearSrgb);
      ColorNormalizeLuminance(&v27->colorLinearSrgb);
      current.vector.v[2] = 0.0;
      v28 = r_lightTweakSunPitch;
      v27->intensity = r_lightTweakSunLight->reset.value * 0.31830987;
      current.integer = v28->reset.integer;
      LODWORD(current.vector.v[1]) = r_lightTweakSunHeading->reset.integer;
      AngleVectors((const vec3_t *)&current, &v27->dir, NULL, NULL);
      g_tweakLightsReset = 1;
    }
  }
}

/*
==============
R_SetSunLightFromDvars
==============
*/
void R_SetSunLightFromDvars(GfxLight *primaryLight)
{
  const dvar_t *v2; 
  vec3_t angles; 

  if ( primaryLight->type != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_light_tweak.cpp", 56, ASSERT_TYPE_ASSERT, "(primaryLight->type == 1)", (const char *)&queryFormat, "primaryLight->type == GFX_LIGHT_TYPE_DIR") )
    __debugbreak();
  R_GetVec3FromByteArray((const unsigned __int8 *)&r_lightTweakSunColor->current, &primaryLight->colorLinearSrgb);
  GammaToLinearColor_Srgb(&primaryLight->colorLinearSrgb);
  ColorNormalizeLuminance(&primaryLight->colorLinearSrgb);
  v2 = r_lightTweakSunPitch;
  primaryLight->intensity = r_lightTweakSunLight->current.value * 0.31830987;
  LODWORD(angles.v[0]) = v2->current.integer;
  angles.v[2] = 0.0;
  LODWORD(angles.v[1]) = r_lightTweakSunHeading->current.integer;
  AngleVectors(&angles, &primaryLight->dir, NULL, NULL);
}

