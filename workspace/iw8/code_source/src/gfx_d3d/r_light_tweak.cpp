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
  __int64 v13; 
  __int64 v14; 

  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_28], xmm7
  }
  _RDI = outVec;
  __asm { vmovss  xmm7, cs:__real@3b808081 }
  for ( i = 0; i != 3; ++i )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm6, xmm0, xmm7
    }
    if ( i >= 3 )
    {
      LODWORD(v14) = 3;
      LODWORD(v13) = i;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v13, v14) )
        __debugbreak();
    }
    __asm { vmovss  dword ptr [rdi], xmm6 }
    _RDI = (vec3_t *)((char *)_RDI + 4);
    ++color;
  }
  __asm
  {
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm7, [rsp+68h+var_28]
  }
}

/*
==============
R_LightTweak_AngleChanged
==============
*/

bool __fastcall R_LightTweak_AngleChanged(double tolerance)
{
  bool result; 

  __asm
  {
    vmovaps [rsp+18h+var_18], xmm6
    vmovaps xmm5, xmm0
  }
  if ( !r_lightTweakEnable->current.enabled )
    goto LABEL_5;
  _RAX = r_lightTweakSunPitch;
  __asm
  {
    vmovss  xmm4, cs:__real@3b360b61
    vxorps  xmm6, xmm6, xmm6
    vmovss  xmm1, dword ptr [rax+28h]
    vsubss  xmm2, xmm1, dword ptr [rax+48h]
    vmulss  xmm3, xmm2, xmm4
    vaddss  xmm1, xmm3, cs:__real@3f000000
    vroundss xmm2, xmm6, xmm1, 1
    vsubss  xmm0, xmm3, xmm2
    vmulss  xmm1, xmm0, cs:__real@43b40000
    vandps  xmm1, xmm1, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm1, xmm5
  }
  if ( r_lightTweakEnable->current.enabled )
    goto LABEL_4;
  _RAX = r_lightTweakSunHeading;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+28h]
    vsubss  xmm1, xmm0, dword ptr [rax+48h]
    vmulss  xmm4, xmm1, xmm4
    vaddss  xmm2, xmm4, cs:__real@3f000000
    vroundss xmm3, xmm6, xmm2, 1
    vsubss  xmm0, xmm4, xmm3
    vmulss  xmm1, xmm0, cs:__real@43b40000
    vandps  xmm1, xmm1, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm1, xmm5
  }
  if ( r_lightTweakEnable->current.enabled )
  {
LABEL_4:
    result = 1;
    __asm { vmovaps xmm6, [rsp+18h+var_18] }
  }
  else
  {
LABEL_5:
    __asm { vmovaps xmm6, [rsp+18h+var_18] }
    return 0;
  }
  return result;
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
  _RAX = r_lightTweakSunLight;
  __asm { vmovss  xmm0, dword ptr [rax+28h] }
  return *(float *)&_XMM0;
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

void __fastcall R_LightTweak_InitDvars(__int64 a1, __int64 a2, double _XMM2_8)
{
  const dvar_t *v12; 
  float flags; 
  float flagsa; 
  float description; 

  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_28], xmm7
    vmovss  xmm6, cs:__real@3f800000
    vmovss  xmm3, cs:__real@43960000; max
  }
  r_lightTweakEnable = Dvar_RegisterBool("NPRKOOLRPL", 0, 0x44u, "Apply sun tweaks to the active sun");
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm6; value
  }
  r_lightTweakSunLight = Dvar_RegisterFloat("LMPKPQPRMK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x4044u, "Sunlight illuminance in kilo-lux");
  __asm
  {
    vxorps  xmm3, xmm3, xmm3; b
    vmovaps xmm2, xmm6; g
    vxorps  xmm1, xmm1, xmm1; r
    vmovss  [rsp+68h+flags], xmm6
  }
  v12 = Dvar_RegisterColor("NQQQKTMONT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flags, 0x4044u, "Sun color in gamma sRGB");
  __asm
  {
    vmovss  xmm3, cs:__real@42b40000; max
    vmovss  xmm2, cs:__real@c2b40000; min
  }
  r_lightTweakSunColor = v12;
  __asm
  {
    vxorps  xmm1, xmm1, xmm1; value
    vmovss  xmm6, cs:__real@43340000
    vmovss  xmm7, cs:__real@c3340000
  }
  r_lightTweakSunPitch = Dvar_RegisterFloat("NTTSPKPRPQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x4044u, "Sun pitch in degrees -90 is noon.");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vmovaps xmm2, xmm7; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  r_lightTweakSunHeading = Dvar_RegisterFloat("NNNMKNQNTK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x4044u, "Sun heading in degrees");
  __asm
  {
    vmovss  dword ptr [rsp+68h+description], xmm6
    vxorps  xmm3, xmm3, xmm3; z
    vxorps  xmm2, xmm2, xmm2; y
    vxorps  xmm1, xmm1, xmm1; x
    vmovss  [rsp+68h+flags], xmm7
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm7, [rsp+68h+var_28]
  }
  r_lightTweakSkyRotationAngles = Dvar_RegisterVec3("LQRNQTTST", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsa, description, 0x4045u, "Rotation angles to apply to the sky (pitch, yaw, roll).  These can be copied to spawnarg of \"skyrotation\" for either worldspawn or light stages.");
}

/*
==============
R_LightTweak_Update
==============
*/
void R_LightTweak_Update(GfxLight *primaryLights, GfxStageInfo *stageInfo)
{
  bool v7; 
  bool v8; 
  DvarValue v34; 

  _RBX = stageInfo;
  if ( !stageInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_light_tweak.cpp", 218, ASSERT_TYPE_ASSERT, "(stageInfo)", (const char *)&queryFormat, "stageInfo") )
    __debugbreak();
  R_LightTweak_UpdateSun(primaryLights, _RBX);
  _RCX = r_lightTweakSkyRotationAngles;
  v7 = r_lightTweakSkyRotationAngles == NULL;
  if ( !r_lightTweakSkyRotationAngles )
  {
    v8 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_light_tweak.cpp", 201, ASSERT_TYPE_ASSERT, "(r_lightTweakSkyRotationAngles)", (const char *)&queryFormat, "r_lightTweakSkyRotationAngles");
    v7 = !v8;
    if ( v8 )
      __debugbreak();
    _RCX = r_lightTweakSkyRotationAngles;
  }
  __asm
  {
    vmovss  xmm2, dword ptr [rbx+1Ch]
    vucomiss xmm2, dword ptr [rcx+48h]
  }
  if ( !v7 )
    goto LABEL_11;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+4Ch]
    vucomiss xmm0, dword ptr [rbx+20h]
  }
  if ( !v7 )
    goto LABEL_11;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+50h]
    vucomiss xmm0, dword ptr [rbx+24h]
  }
  if ( !v7 )
  {
LABEL_11:
    __asm
    {
      vmovss  xmm1, cs:__real@3b360b61
      vmulss  xmm3, xmm1, dword ptr [rbx+24h]
      vmulss  xmm4, xmm1, dword ptr [rbx+20h]
      vmovss  xmm5, cs:__real@3f000000
      vmovaps [rsp+68h+var_18], xmm7
      vmulss  xmm7, xmm2, xmm1
      vaddss  xmm1, xmm3, xmm5
      vmovaps [rsp+68h+var_28], xmm8
      vxorps  xmm8, xmm8, xmm8
      vroundss xmm2, xmm8, xmm1, 1
      vaddss  xmm1, xmm4, xmm5
      vsubss  xmm0, xmm3, xmm2
      vmulss  xmm3, xmm0, cs:__real@43b40000; z
      vroundss xmm2, xmm8, xmm1, 1
      vsubss  xmm0, xmm4, xmm2
      vmulss  xmm2, xmm0, cs:__real@43b40000; y
      vaddss  xmm4, xmm7, xmm5
      vroundss xmm5, xmm8, xmm4, 1
      vsubss  xmm1, xmm7, xmm5
      vmulss  xmm1, xmm1, cs:__real@43b40000; x
    }
    Dvar_SetVec3_Internal(_RCX, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
    _RCX = r_lightTweakSkyRotationAngles;
    __asm
    {
      vmovups xmm0, xmmword ptr [rcx+28h]
      vmovups [rsp+68h+var_38], xmm0
    }
    Dvar_ChangeResetValue(r_lightTweakSkyRotationAngles, &v34);
    Dvar_ClearModified(r_lightTweakSkyRotationAngles);
    _RCX = r_lightTweakSkyRotationAngles;
    __asm
    {
      vmovaps xmm8, [rsp+68h+var_28]
      vmovaps xmm7, [rsp+68h+var_18]
    }
  }
  LODWORD(_RBX->activeStage.skyRotationAngles.v[0]) = _RCX->current.integer;
  _RBX->activeStage.skyRotationAngles.v[1] = _RCX->current.vector.v[1];
  _RBX->activeStage.skyRotationAngles.v[2] = _RCX->current.vector.v[2];
}

/*
==============
R_LightTweak_UpdateSun
==============
*/
void R_LightTweak_UpdateSun(GfxLight *primaryLights, GfxStageInfo *stageInfo)
{
  __int64 ActivePrimarySunLight; 
  GfxLight *v10; 
  char v14; 
  char v15; 
  bool v59; 
  bool v60; 
  bool v61; 
  float fmt; 
  DvarValue v74; 
  vec3_t angles; 
  char v81; 

  __asm { vmovaps [rsp+0D8h+var_58], xmm14 }
  ActivePrimarySunLight = R_GetActivePrimarySunLight(stageInfo);
  __asm { vxorps  xmm14, xmm14, xmm14 }
  if ( g_tweakPrimaryLightIndex != (_DWORD)ActivePrimarySunLight )
  {
    if ( g_tweakPrimaryLightIndex )
    {
      v10 = &primaryLights[g_tweakPrimaryLightIndex];
      if ( v10->type != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_light_tweak.cpp", 128, ASSERT_TYPE_ASSERT, "(primaryLight->type == 1)", (const char *)&queryFormat, "primaryLight->type == GFX_LIGHT_TYPE_DIR") )
        __debugbreak();
      Dvar_Reset(r_lightTweakSunLight, DVAR_SOURCE_INTERNAL);
      Dvar_Reset(r_lightTweakSunColor, DVAR_SOURCE_INTERNAL);
      Dvar_Reset(r_lightTweakSunPitch, DVAR_SOURCE_INTERNAL);
      Dvar_Reset(r_lightTweakSunHeading, DVAR_SOURCE_INTERNAL);
      R_SetSunLightFromDvars(v10);
    }
    if ( (_DWORD)ActivePrimarySunLight )
    {
      __asm
      {
        vmovaps [rsp+0D8h+var_28], xmm6
        vmovaps [rsp+0D8h+var_38], xmm7
        vmovaps [rsp+0D8h+var_48], xmm13
        vmovaps [rsp+0D8h+var_68], xmm15
      }
      _RBX = &primaryLights[ActivePrimarySunLight];
      if ( _RBX->type != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_light_tweak.cpp", 142, ASSERT_TYPE_ASSERT, "(primaryLight->type == 1)", (const char *)&queryFormat, "primaryLight->type == GFX_LIGHT_TYPE_DIR") )
        __debugbreak();
      Dvar_SetBool_Internal(r_lightTweakEnable, 0);
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+10h]
        vmulss  xmm1, xmm0, cs:__real@40490fdb; value
      }
      Dvar_SetFloat_Internal(r_lightTweakSunLight, *(float *)&_XMM1);
      __asm
      {
        vmovss  xmm3, dword ptr [rbx+18h]
        vmovss  xmm4, dword ptr [rbx+14h]
        vmovss  xmm5, dword ptr [rbx+1Ch]
        vmovss  xmm15, cs:__real@3f800000
        vsubss  xmm0, xmm4, xmm3
        vcmpless xmm1, xmm14, xmm0
        vblendvps xmm2, xmm3, xmm4, xmm1
        vsubss  xmm0, xmm2, xmm5
        vcmpless xmm1, xmm14, xmm0
        vblendvps xmm0, xmm5, xmm2, xmm1
        vcomiss xmm0, xmm14
        vmovss  [rsp+0D8h+var_A8], xmm2
        vmovss  [rsp+0D8h+var_A8], xmm0
      }
      if ( v14 | v15 )
      {
        __asm
        {
          vmovss  xmm2, [rsp+0D8h+var_A8]
          vmovss  xmm7, [rsp+0D8h+var_A8]
          vmovss  xmm6, [rsp+0D8h+var_A8]
        }
      }
      else
      {
        __asm
        {
          vdivss  xmm0, xmm15, xmm0
          vmulss  xmm2, xmm4, xmm0
          vmulss  xmm6, xmm3, xmm0
          vmulss  xmm7, xmm5, xmm0
        }
      }
      __asm { vcomiss xmm2, cs:__real@3b4d2e1c }
      if ( v14 | v15 )
      {
        __asm { vmulss  xmm13, xmm2, cs:__real@414eb852 }
      }
      else
      {
        __asm
        {
          vmovss  xmm1, cs:__real@3ed55555; Y
          vmovaps xmm0, xmm2; X
        }
        *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
        __asm
        {
          vmulss  xmm1, xmm0, cs:__real@3f870a3d
          vsubss  xmm13, xmm1, cs:__real@3d6147ae
        }
      }
      __asm { vcomiss xmm6, cs:__real@3b4d2e1c }
      if ( v14 | v15 )
      {
        __asm { vmulss  xmm6, xmm6, cs:__real@414eb852 }
      }
      else
      {
        __asm
        {
          vmovss  xmm1, cs:__real@3ed55555; Y
          vmovaps xmm0, xmm6; X
        }
        *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
        __asm
        {
          vmulss  xmm1, xmm0, cs:__real@3f870a3d
          vsubss  xmm6, xmm1, cs:__real@3d6147ae
        }
      }
      __asm { vcomiss xmm7, cs:__real@3b4d2e1c }
      if ( v14 | v15 )
      {
        __asm { vmulss  xmm3, xmm7, cs:__real@414eb852 }
      }
      else
      {
        __asm
        {
          vmovss  xmm1, cs:__real@3ed55555; Y
          vmovaps xmm0, xmm7; X
        }
        *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
        __asm
        {
          vmulss  xmm1, xmm0, cs:__real@3f870a3d
          vsubss  xmm3, xmm1, cs:__real@3d6147ae; b
        }
      }
      __asm
      {
        vmovaps xmm2, xmm6; g
        vmovaps xmm1, xmm13; r
        vmovss  dword ptr [rsp+0D8h+fmt], xmm15
      }
      Dvar_SetColor_Internal(r_lightTweakSunColor, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmt);
      vectosignedangles(&_RBX->dir, &angles);
      __asm { vmovss  xmm1, dword ptr [rsp+0D8h+angles]; value }
      Dvar_SetFloat_Internal(r_lightTweakSunPitch, *(float *)&_XMM1);
      __asm { vmovss  xmm1, dword ptr [rsp+0D8h+angles+4]; value }
      Dvar_SetFloat_Internal(r_lightTweakSunHeading, *(float *)&_XMM1);
      _RCX = r_lightTweakSunLight;
      __asm
      {
        vmovups xmm0, xmmword ptr [rcx+28h]
        vmovups [rsp+0D8h+var_98], xmm0
      }
      Dvar_ChangeResetValue(r_lightTweakSunLight, &v74);
      _RCX = r_lightTweakSunColor;
      __asm
      {
        vmovups xmm0, xmmword ptr [rcx+28h]
        vmovups [rsp+0D8h+var_98], xmm0
      }
      Dvar_ChangeResetValue(r_lightTweakSunColor, &v74);
      _RCX = r_lightTweakSunPitch;
      __asm
      {
        vmovups xmm0, xmmword ptr [rcx+28h]
        vmovups [rsp+0D8h+var_98], xmm0
      }
      Dvar_ChangeResetValue(r_lightTweakSunPitch, &v74);
      _RCX = r_lightTweakSunHeading;
      __asm
      {
        vmovups xmm0, xmmword ptr [rcx+28h]
        vmovups [rsp+0D8h+var_98], xmm0
      }
      Dvar_ChangeResetValue(r_lightTweakSunHeading, &v74);
      Dvar_ClearModified(r_lightTweakSunLight);
      Dvar_ClearModified(r_lightTweakSunColor);
      Dvar_ClearModified(r_lightTweakSunPitch);
      Dvar_ClearModified(r_lightTweakSunHeading);
      __asm
      {
        vmovaps xmm15, [rsp+0D8h+var_68]
        vmovaps xmm13, [rsp+0D8h+var_48]
        vmovaps xmm7, [rsp+0D8h+var_38]
        vmovaps xmm6, [rsp+0D8h+var_28]
      }
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
    v59 = R_CheckDvarModified(r_lightTweakSunLight);
    v60 = R_CheckDvarModified(r_lightTweakSunColor) || v59;
    v61 = R_CheckDvarModified(r_lightTweakSunPitch) || v60;
    if ( v61 | R_CheckDvarModified(r_lightTweakSunHeading) )
      Dvar_SetBool_Internal(r_lightTweakEnable, 1);
    if ( r_lightTweakEnable->current.enabled )
    {
      g_tweakLightsReset = 0;
      R_SetSunLightFromDvars(&primaryLights[ActivePrimarySunLight]);
    }
    else if ( !g_tweakLightsReset )
    {
      _RDI = &primaryLights[ActivePrimarySunLight];
      if ( _RDI->type != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_light_tweak.cpp", 70, ASSERT_TYPE_ASSERT, "(primaryLight->type == 1)", (const char *)&queryFormat, "primaryLight->type == GFX_LIGHT_TYPE_DIR") )
        __debugbreak();
      R_GetVec3FromByteArray((const unsigned __int8 *)&r_lightTweakSunColor->reset, &_RDI->colorLinearSrgb);
      GammaToLinearColor_Srgb(&_RDI->colorLinearSrgb);
      ColorNormalizeLuminance(&_RDI->colorLinearSrgb);
      _RAX = r_lightTweakSunLight;
      __asm
      {
        vmovss  dword ptr [rsp+0D8h+var_98+8], xmm14
        vmovss  xmm0, dword ptr [rax+48h]
        vmulss  xmm1, xmm0, cs:__real@3ea2f983
      }
      _RAX = r_lightTweakSunPitch;
      __asm
      {
        vmovss  dword ptr [rdi+10h], xmm1
        vmovss  xmm0, dword ptr [rax+48h]
      }
      _RAX = r_lightTweakSunHeading;
      __asm
      {
        vmovss  dword ptr [rsp+0D8h+var_98], xmm0
        vmovss  xmm1, dword ptr [rax+48h]
        vmovss  dword ptr [rsp+0D8h+var_98+4], xmm1
      }
      AngleVectors((const vec3_t *)&v74, &_RDI->dir, NULL, NULL);
      g_tweakLightsReset = 1;
    }
  }
  _R11 = &v81;
  __asm { vmovaps xmm14, xmmword ptr [r11-40h] }
}

/*
==============
R_SetSunLightFromDvars
==============
*/
void R_SetSunLightFromDvars(GfxLight *primaryLight)
{
  vec3_t angles; 

  _RDI = primaryLight;
  if ( primaryLight->type != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_light_tweak.cpp", 56, ASSERT_TYPE_ASSERT, "(primaryLight->type == 1)", (const char *)&queryFormat, "primaryLight->type == GFX_LIGHT_TYPE_DIR") )
    __debugbreak();
  R_GetVec3FromByteArray((const unsigned __int8 *)&r_lightTweakSunColor->current, &_RDI->colorLinearSrgb);
  GammaToLinearColor_Srgb(&_RDI->colorLinearSrgb);
  ColorNormalizeLuminance(&_RDI->colorLinearSrgb);
  _RAX = r_lightTweakSunLight;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+28h]
    vmulss  xmm1, xmm0, cs:__real@3ea2f983
  }
  _RAX = r_lightTweakSunPitch;
  __asm
  {
    vmovss  dword ptr [rdi+10h], xmm1
    vmovss  xmm0, dword ptr [rax+28h]
  }
  _RAX = r_lightTweakSunHeading;
  __asm
  {
    vmovss  dword ptr [rsp+58h+angles], xmm0
    vxorps  xmm0, xmm0, xmm0
    vmovss  dword ptr [rsp+58h+angles+8], xmm0
    vmovss  xmm1, dword ptr [rax+28h]
    vmovss  dword ptr [rsp+58h+angles+4], xmm1
  }
  AngleVectors(&angles, &_RDI->dir, NULL, NULL);
}

