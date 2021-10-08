/*
==============
R_ThermalParamsFromDvars
==============
*/

void __fastcall R_ThermalParamsFromDvars(GfxViewInfo *viewInfo)
{
  ?R_ThermalParamsFromDvars@@YAXPEAUGfxViewInfo@@@Z(viewInfo);
}

/*
==============
R_ThermalResetSSRFade
==============
*/

void R_ThermalResetSSRFade(void)
{
  ?R_ThermalResetSSRFade@@YAXXZ();
}

/*
==============
R_RegisterThermalDvars
==============
*/

void R_RegisterThermalDvars(void)
{
  ?R_RegisterThermalDvars@@YAXXZ();
}

/*
==============
R_SetupNightAndThermalVision
==============
*/

void __fastcall R_SetupNightAndThermalVision(GfxViewInfo *viewInfo)
{
  ?R_SetupNightAndThermalVision@@YAXPEAUGfxViewInfo@@@Z(viewInfo);
}

/*
==============
R_RegisterThermalDvars
==============
*/
void R_RegisterThermalDvars()
{
  const dvar_t *v10; 
  const dvar_t *v15; 
  const dvar_t *v19; 
  const dvar_t *v26; 
  const dvar_t *v35; 
  const dvar_t *v39; 
  const dvar_t *v43; 
  const dvar_t *v54; 
  vec3_t value; 
  vec3_t v70; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm10
  }
  r_nightAndThermalVisionTweak = Dvar_RegisterBool("LKQMMNNQ", 0, 4u, "enable night/thermal vision tweak");
  __asm
  {
    vmovss  xmm6, cs:__real@447a0000
    vmovss  xmm7, cs:__real@c3e5d5c2
    vmovss  xmm1, cs:__real@428c0000; value
  }
  r_nightAndThermalVision = Dvar_RegisterBool("LMQTPSLMPM", 0, 4u, "enable night/thermal vision");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vmovaps xmm2, xmm7; min
  }
  v10 = Dvar_RegisterFloat("MKRLKQQSTL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "ambient temperature");
  __asm
  {
    vmovss  xmm10, cs:__real@3f800000
    vmovss  xmm1, cs:__real@3f4ccccd; value
  }
  r_thermalAmbient = v10;
  __asm
  {
    vmovaps xmm3, xmm10; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v15 = Dvar_RegisterFloat("LLKMPSPPSS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "average world emissivity for computing thermal ambient reflection");
  __asm { vmovss  xmm1, cs:__real@c2200000; value }
  r_thermalAmbientReflection = v15;
  __asm
  {
    vmovaps xmm3, xmm6; max
    vmovaps xmm2, xmm7; min
  }
  v19 = Dvar_RegisterFloat("LPMPRMNQRO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "thermal vision lowest temperature");
  __asm { vmovss  xmm1, cs:__real@43160000; value }
  r_thermalRadiationMin = v19;
  __asm
  {
    vmovaps xmm3, xmm6; max
    vmovaps xmm2, xmm7; min
  }
  r_thermalRadiationMax = Dvar_RegisterFloat("MKNTPMPOQK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "thermal vision highest temperature");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vmovaps xmm2, xmm7; min
    vmovaps xmm1, xmm7; value
  }
  v26 = Dvar_RegisterFloat("LNRMORRPSM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "for night/thermal vision hybrid mode. temperature above cutoff show up in night/thermal vision goggle");
  __asm
  {
    vmovss  xmm3, cs:__real@42c80000; max
    vmovss  xmm1, cs:__real@40000000; value
  }
  r_thermalCutoff = v26;
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vmovss  xmm8, cs:__real@3e4ccccd
  }
  r_thermalSurfaceNormalStrength = Dvar_RegisterFloat("OKPKTRQOMO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "surface normal affect thermal radiation slightly");
  __asm
  {
    vmovss  dword ptr [rsp+0A8h+value], xmm8
    vmovss  dword ptr [rsp+0A8h+value+4], xmm8
    vmovss  dword ptr [rsp+0A8h+value+8], xmm8
    vmovss  dword ptr [rsp+0A8h+var_68], xmm10
    vmovss  dword ptr [rsp+0A8h+var_68+4], xmm10
    vmovss  dword ptr [rsp+0A8h+var_68+8], xmm10
    vmovaps xmm3, xmm10; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  r_thermalColdColor = Dvar_RegisterVec3("LTTSSORRTK", &value, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "thermal vision false color for lowest temperature");
  __asm
  {
    vmovaps xmm3, xmm10; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v35 = Dvar_RegisterVec3("OMLONPSMQP", &v70, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "thermal vision false color for highest temperature");
  __asm { vmovss  xmm3, cs:__real@43800000; max }
  r_thermalHotColor = v35;
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm10; value
  }
  v39 = Dvar_RegisterFloat("MQMLNPSQSM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "thermal vision color scale");
  __asm
  {
    vmovss  xmm3, cs:__real@40a00000; max
    vmovss  xmm2, cs:__real@c0a00000; min
  }
  r_thermalColorScale = v39;
  __asm { vxorps  xmm1, xmm1, xmm1; value }
  v43 = Dvar_RegisterFloat("TLLNPKNSS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "exposure adjustment for vision vision");
  __asm
  {
    vmovss  xmm3, cs:__real@40a00000; max
    vmovss  xmm2, cs:__real@c0a00000; min
  }
  r_nightVisionExposureAdjustment = v43;
  __asm { vxorps  xmm1, xmm1, xmm1; value }
  r_nightVisionMinExposureBias = Dvar_RegisterFloat("NPOTLLLTKK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "min exposure bias for vision vision");
  r_nvgScopeForce = Dvar_RegisterBool("OKTNRPMPOS", 0, 4u, "Force NVG Scope");
  __asm
  {
    vmovaps xmm3, xmm10; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm8; value
    vmovss  xmm6, cs:__real@44800000
  }
  r_thermalSurfaceNormalStrengthMul = Dvar_RegisterFloat("MOLOPNLRPM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "surface normal affect thermal radiation global scale");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  v54 = Dvar_RegisterFloat("NRSQQSPLL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "ambient infrared light");
  __asm { vmovss  xmm1, cs:__real@43160000; value }
  r_nightVisionIrAmbient = v54;
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  r_nightVisionIrDirect = Dvar_RegisterFloat("NPQTMORRNS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "ir direct lighting coeff");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm10; value
  }
  r_nightVisionIr2ndDiffuse = Dvar_RegisterFloat("LNRTSPSMTN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "ir patch secondary diffuse lighting coeff");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm10; value
  }
  r_nightVisionIr2ndSpecular = Dvar_RegisterFloat("LROLRKTLMS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "ir patch secondary specular lighting coeff");
  _R11 = &retaddr;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm10, xmmword ptr [r11-48h]
  }
}

/*
==============
R_SetupNightAndThermalVision
==============
*/
void R_SetupNightAndThermalVision(GfxViewInfo *viewInfo)
{
  unsigned int v46; 
  bool v66; 
  GfxImage *thermalRadiationLut; 
  GfxImage *blackImage; 
  char v97; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-18h], xmm6 }
  _RBX = viewInfo;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovaps [rsp+0C8h+var_88], xmm13
  }
  if ( (unsigned int)(r_debugShaderMaterial->current.integer - 38) <= 1 )
    viewInfo->thermalParams.useNightAndThermalVisionCombo = 0;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+5DCh]
    vmovss  xmm5, cs:__real@42000000
    vmovss  xmm6, cs:__real@3f0e38e4
    vmovss  xmm7, cs:__real@43889333
    vmovss  xmm13, cs:__real@3f800000
    vsubss  xmm1, xmm0, xmm5
    vmulss  xmm2, xmm1, xmm6
    vaddss  xmm0, xmm2, xmm7
    vxorps  xmm8, xmm8, xmm8
    vmaxss  xmm4, xmm0, xmm8
    vmovss  xmm0, dword ptr [rcx+5E4h]
    vsubss  xmm1, xmm0, xmm5
    vmovss  xmm0, dword ptr [rcx+5E8h]
    vmulss  xmm2, xmm1, xmm6
    vsubss  xmm1, xmm0, xmm5
    vaddss  xmm3, xmm2, xmm7
    vmulss  xmm2, xmm1, xmm6
    vmaxss  xmm10, xmm3, xmm8
    vaddss  xmm0, xmm10, cs:__real@41000000
    vaddss  xmm3, xmm2, xmm7
    vmaxss  xmm1, xmm3, xmm8
    vmaxss  xmm12, xmm1, xmm0
    vmulss  xmm0, xmm4, dword ptr [rcx+5E0h]
    vmovss  dword ptr [rcx+1970h], xmm4
    vmovss  dword ptr [rcx+1974h], xmm10
    vmovss  dword ptr [rcx+197Ch], xmm0
    vsubss  xmm2, xmm12, xmm10
    vdivss  xmm11, xmm13, xmm2
    vmovss  dword ptr [rcx+1978h], xmm11
    vmovss  xmm0, dword ptr [rcx+618h]
    vsubss  xmm1, xmm0, xmm5
    vmovss  xmm0, cs:?rg@@3Ur_globals_t@@A.thermalSurfaceNormalStrengthMul; r_globals_t rg
    vmulss  xmm2, xmm1, xmm6
    vmulss  xmm1, xmm0, dword ptr [rcx+5F4h]
    vaddss  xmm3, xmm2, xmm7
    vmovss  xmm2, dword ptr [rcx+5F8h]
  }
  _RSI = 0i64;
  _RDI = &viewInfo->input;
  __asm
  {
    vmaxss  xmm9, xmm3, xmm8
    vmovss  dword ptr [rcx+1988h], xmm9
    vmovss  dword ptr [rcx+1984h], xmm1
    vmovss  dword ptr [rcx+198Ch], xmm2
  }
  v46 = 0;
  if ( viewInfo->thermalParams.useNightAndThermalVisionCombo )
  {
    LOBYTE(v46) = viewInfo->thermalParams.useScopedNVG;
    ++v46;
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+61Ch]
    vsubss  xmm1, xmm0, xmm5
    vmovq   xmm0, qword ptr [rcx+620h]
    vmulss  xmm2, xmm1, xmm6
    vaddss  xmm3, xmm2, xmm7
    vmovq   xmm1, rsi
    vpcmpeqq xmm2, xmm0, xmm1
  }
  viewInfo->input.sceneConstants.thermalMode = v46;
  __asm
  {
    vblendvps xmm6, xmm13, xmm8, xmm2
    vmaxss  xmm7, xmm3, xmm8
  }
  *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_r_thermalEmissivityDefault, "r_thermalEmissivityDefault");
  __asm
  {
    vmovss  dword ptr [rbx+1994h], xmm0
    vsubss  xmm0, xmm7, xmm10
    vmulss  xmm1, xmm0, xmm11
    vminss  xmm2, xmm1, xmm13
    vmaxss  xmm0, xmm2, xmm8
    vmovss  dword ptr [rbx+199Ch], xmm0
    vmovss  dword ptr [rbx+1990h], xmm7
    vmovss  dword ptr [rbx+1998h], xmm6
  }
  *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_r_thermalEmissivity_Decal, "r_thermalEmissivity_Decal");
  __asm
  {
    vmulss  xmm2, xmm0, cs:__real@3f400000
    vaddss  xmm1, xmm2, cs:__real@3e200000
    vmaxss  xmm3, xmm1, cs:__real@3dcccccd
    vaddss  xmm0, xmm2, cs:__real@3eb00000
    vminss  xmm1, xmm0, xmm13
    vsubss  xmm2, xmm1, xmm3
    vmovss  dword ptr [rbx+19B4h], xmm2
    vmovss  dword ptr [rbx+19B0h], xmm3
  }
  *(_QWORD *)&_RBX->input.sceneConstants.thermalParamDecalVolume.xyz.z = 0i64;
  v66 = !_RBX->thermalParams.useNightAndThermalVisionCombo;
  if ( _RBX->thermalParams.useNightAndThermalVisionCombo )
  {
    _RAX = r_nightVisionIrDirect;
    __asm { vmovss  xmm8, dword ptr [rax+28h] }
    _RAX = r_nightVisionIr2ndSpecular;
    __asm { vmovss  xmm0, dword ptr [rax+28h] }
    _RAX = r_nightVisionIr2ndDiffuse;
    __asm { vmovss  xmm1, dword ptr [rax+28h] }
    _RAX = r_nightVisionIrAmbient;
    __asm { vmovss  xmm2, dword ptr [rax+28h] }
  }
  else
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vxorps  xmm1, xmm1, xmm1
      vxorps  xmm2, xmm2, xmm2
    }
  }
  __asm
  {
    vcomiss xmm9, xmm10
    vmovss  dword ptr [rbx+19A0h], xmm2
    vmovss  dword ptr [rbx+19A4h], xmm1
    vmovss  dword ptr [rbx+19A8h], xmm0
    vmovss  dword ptr [rbx+19ACh], xmm8
    vcomiss xmm9, xmm12
  }
  if ( v66 )
  {
    __asm
    {
      vsubss  xmm0, xmm9, xmm10
      vmulss  xmm1, xmm0, xmm11
    }
  }
  else
  {
    __asm { vmovss  xmm1, cs:__real@49800000 }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+5F0h]
    vmovss  dword ptr [rdi+14D4h], xmm0
    vmovss  dword ptr [rdi+14D0h], xmm1
  }
  *(_QWORD *)&_RDI->sceneConstants.nightThermalVisionWeight.xyz.z = 0i64;
  __asm
  {
    vmovss  xmm3, dword ptr [rbx+614h]
    vmulss  xmm2, xmm3, dword ptr [rbx+5FCh]
    vmulss  xmm1, xmm3, dword ptr [rbx+600h]
    vmulss  xmm0, xmm3, dword ptr [rbx+604h]
    vmovss  dword ptr [rdi+14E0h], xmm2
    vmovss  dword ptr [rdi+14E4h], xmm1
    vmovss  dword ptr [rdi+14E8h], xmm0
    vmovss  dword ptr [rdi+14ECh], xmm3
    vmovss  xmm4, dword ptr [rbx+614h]
    vmulss  xmm2, xmm4, dword ptr [rbx+608h]
    vmulss  xmm1, xmm4, dword ptr [rbx+60Ch]
    vmulss  xmm0, xmm4, dword ptr [rbx+610h]
    vmovss  dword ptr [rdi+14F0h], xmm2
    vmovss  dword ptr [rdi+14F4h], xmm1
    vmovss  dword ptr [rdi+14F8h], xmm0
    vmovss  dword ptr [rdi+14FCh], xmm4
  }
  thermalRadiationLut = (GfxImage *)_RBX->thermalParams.thermalRadiationLut;
  blackImage = rgp.blackImage;
  if ( thermalRadiationLut )
    blackImage = thermalRadiationLut;
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  _R11 = &v97;
  _RDI->codeImages[54] = blackImage;
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
R_ThermalParamsFromDvars
==============
*/
void R_ThermalParamsFromDvars(GfxViewInfo *viewInfo)
{
  *(_WORD *)&viewInfo->thermalParams.useNightAndThermalVisionCombo = rg.useNightAndThermalVisionCombo;
  __asm
  {
    vmovss  xmm0, cs:?rg@@3Ur_globals_t@@A.nightVisionExposureAdjustment; r_globals_t rg
    vmovss  dword ptr [rcx+5D4h], xmm0
    vmovss  xmm1, cs:?rg@@3Ur_globals_t@@A.nightVisionMinExposureBias; r_globals_t rg
    vmovss  dword ptr [rcx+5D8h], xmm1
    vmovss  xmm0, cs:?rg@@3Ur_globals_t@@A.thermalAmbient; r_globals_t rg
    vmovss  dword ptr [rcx+5DCh], xmm0
    vmovss  xmm1, cs:?rg@@3Ur_globals_t@@A.thermalAmbientReflection; r_globals_t rg
    vmovss  dword ptr [rcx+5E0h], xmm1
    vmovss  xmm0, cs:?rg@@3Ur_globals_t@@A.thermalRadiationMin; r_globals_t rg
    vmovss  dword ptr [rcx+5E4h], xmm0
    vmovss  xmm1, cs:?rg@@3Ur_globals_t@@A.thermalRadiationMax; r_globals_t rg
    vmovss  dword ptr [rcx+5E8h], xmm1
    vmovss  xmm0, cs:?rg@@3Ur_globals_t@@A.lightIntensityScopeScreen; r_globals_t rg
    vmovss  dword ptr [rcx+5ECh], xmm0
    vmovss  xmm1, cs:?rg@@3Ur_globals_t@@A.thermalSurfaceNormalStrength; r_globals_t rg
    vmovss  dword ptr [rcx+5F4h], xmm1
    vmovss  xmm0, cs:?rg@@3Ur_globals_t@@A.thermalCutoff; r_globals_t rg
    vmovss  dword ptr [rcx+618h], xmm0
    vmovss  xmm1, cs:?rg@@3Ur_globals_t@@A.thermalFog; r_globals_t rg
    vmovss  dword ptr [rcx+61Ch], xmm1
    vmovss  xmm0, dword ptr cs:?rg@@3Ur_globals_t@@A.thermalColdColor; r_globals_t rg
    vmovss  dword ptr [rcx+5FCh], xmm0
    vmovss  xmm1, dword ptr cs:?rg@@3Ur_globals_t@@A.thermalColdColor+4; r_globals_t rg
    vmovss  dword ptr [rcx+600h], xmm1
    vmovss  xmm0, dword ptr cs:?rg@@3Ur_globals_t@@A.thermalColdColor+8; r_globals_t rg
    vmovss  dword ptr [rcx+604h], xmm0
    vmovss  xmm1, dword ptr cs:?rg@@3Ur_globals_t@@A.thermalHotColor; r_globals_t rg
    vmovss  dword ptr [rcx+608h], xmm1
    vmovss  xmm0, dword ptr cs:?rg@@3Ur_globals_t@@A.thermalHotColor+4; r_globals_t rg
    vmovss  dword ptr [rcx+60Ch], xmm0
    vmovss  xmm1, dword ptr cs:?rg@@3Ur_globals_t@@A.thermalHotColor+8; r_globals_t rg
    vmovss  dword ptr [rcx+610h], xmm1
    vmovss  xmm0, dword ptr [rcx+614h]
    vmovss  cs:?rg@@3Ur_globals_t@@A.thermalColorScale, xmm0; r_globals_t rg
  }
  viewInfo->thermalParams.thermalRadiationLut = NULL;
}

/*
==============
R_ThermalResetSSRFade
==============
*/
void R_ThermalResetSSRFade(void)
{
  __int64 v0; 
  __int64 v1; 
  unsigned __int64 v2; 

  v0 = 0i64;
  v1 = 0i64;
  v2 = 0i64;
  do
  {
    if ( v2 >= 2 )
    {
      j___report_rangecheckfailure(v0);
      JUMPOUT(0x1420D8E25i64);
    }
    s_prevUseNightAndThermalVisionCombo[v1] = 0;
    v0 = (unsigned int)(v0 + 1);
    s_nightAndThermalVisionSSRFade[v2] = 0.0;
    ++v1;
    ++v2;
  }
  while ( (unsigned int)v0 < 2 );
}

