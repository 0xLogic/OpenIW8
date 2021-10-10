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
void R_RegisterThermalDvars(void)
{
  vec3_t value; 
  vec3_t v1; 

  r_nightAndThermalVisionTweak = Dvar_RegisterBool("LKQMMNNQ", 0, 4u, "enable night/thermal vision tweak");
  r_nightAndThermalVision = Dvar_RegisterBool("LMQTPSLMPM", 0, 4u, "enable night/thermal vision");
  r_thermalAmbient = Dvar_RegisterFloat("MKRLKQQSTL", 70.0, -459.66998, 1000.0, 4u, "ambient temperature");
  r_thermalAmbientReflection = Dvar_RegisterFloat("LLKMPSPPSS", 0.80000001, 0.0, 1.0, 4u, "average world emissivity for computing thermal ambient reflection");
  r_thermalRadiationMin = Dvar_RegisterFloat("LPMPRMNQRO", -40.0, -459.66998, 1000.0, 4u, "thermal vision lowest temperature");
  r_thermalRadiationMax = Dvar_RegisterFloat("MKNTPMPOQK", 150.0, -459.66998, 1000.0, 4u, "thermal vision highest temperature");
  r_thermalCutoff = Dvar_RegisterFloat("LNRMORRPSM", -459.66998, -459.66998, 1000.0, 4u, "for night/thermal vision hybrid mode. temperature above cutoff show up in night/thermal vision goggle");
  r_thermalSurfaceNormalStrength = Dvar_RegisterFloat("OKPKTRQOMO", 2.0, 0.0, 100.0, 4u, "surface normal affect thermal radiation slightly");
  value.v[0] = FLOAT_0_2;
  value.v[1] = FLOAT_0_2;
  value.v[2] = FLOAT_0_2;
  v1.v[0] = FLOAT_1_0;
  v1.v[1] = FLOAT_1_0;
  v1.v[2] = FLOAT_1_0;
  r_thermalColdColor = Dvar_RegisterVec3("LTTSSORRTK", &value, 0.0, 1.0, 4u, "thermal vision false color for lowest temperature");
  r_thermalHotColor = Dvar_RegisterVec3("OMLONPSMQP", &v1, 0.0, 1.0, 4u, "thermal vision false color for highest temperature");
  r_thermalColorScale = Dvar_RegisterFloat("MQMLNPSQSM", 1.0, 0.0, 256.0, 4u, "thermal vision color scale");
  r_nightVisionExposureAdjustment = Dvar_RegisterFloat("TLLNPKNSS", 0.0, -5.0, 5.0, 4u, "exposure adjustment for vision vision");
  r_nightVisionMinExposureBias = Dvar_RegisterFloat("NPOTLLLTKK", 0.0, -5.0, 5.0, 4u, "min exposure bias for vision vision");
  r_nvgScopeForce = Dvar_RegisterBool("OKTNRPMPOS", 0, 4u, "Force NVG Scope");
  r_thermalSurfaceNormalStrengthMul = Dvar_RegisterFloat("MOLOPNLRPM", 0.2, 0.0, 1.0, 4u, "surface normal affect thermal radiation global scale");
  r_nightVisionIrAmbient = Dvar_RegisterFloat("NRSQQSPLL", 0.0, 0.0, 1024.0, 4u, "ambient infrared light");
  r_nightVisionIrDirect = Dvar_RegisterFloat("NPQTMORRNS", 150.0, 0.0, 1024.0, 4u, "ir direct lighting coeff");
  r_nightVisionIr2ndDiffuse = Dvar_RegisterFloat("LNRTSPSMTN", 1.0, 0.0, 1024.0, 4u, "ir patch secondary diffuse lighting coeff");
  r_nightVisionIr2ndSpecular = Dvar_RegisterFloat("LROLRKTLMS", 1.0, 0.0, 1024.0, 4u, "ir patch secondary specular lighting coeff");
}

/*
==============
R_SetupNightAndThermalVision
==============
*/
void R_SetupNightAndThermalVision(GfxViewInfo *viewInfo)
{
  __int128 thermalAmbientTemperature_low; 
  float value; 
  __int128 thermalRadiationMin_low; 
  __int128 v8; 
  __int128 v9; 
  __int128 thermalRadiationMax_low; 
  __int128 v12; 
  __int128 v13; 
  float v18; 
  __int128 thermalCutoff_low; 
  GfxCmdBufInput *p_input; 
  unsigned int v23; 
  __int128 thermalFog_low; 
  __int128 v30; 
  __int128 v34; 
  __int128 v35; 
  __int128 v39; 
  float v41; 
  float v42; 
  float v43; 
  float v44; 
  float thermalColorScale; 
  float v46; 
  float v47; 
  float v48; 
  float v49; 
  float v50; 
  const GfxImage *thermalRadiationLut; 
  GfxImage *blackImage; 

  if ( (unsigned int)(r_debugShaderMaterial->current.integer - 38) <= 1 )
    viewInfo->thermalParams.useNightAndThermalVisionCombo = 0;
  _XMM13 = LODWORD(FLOAT_1_0);
  thermalAmbientTemperature_low = LODWORD(viewInfo->thermalParams.thermalAmbientTemperature);
  *(float *)&thermalAmbientTemperature_low = (float)((float)(viewInfo->thermalParams.thermalAmbientTemperature - 32.0) * 0.55555558) + 273.14999;
  _XMM0 = thermalAmbientTemperature_low;
  value = 0.0;
  __asm { vmaxss  xmm4, xmm0, xmm8 }
  thermalRadiationMin_low = LODWORD(viewInfo->thermalParams.thermalRadiationMin);
  *(float *)&thermalRadiationMin_low = (float)(viewInfo->thermalParams.thermalRadiationMin - 32.0) * 0.55555558;
  v8 = thermalRadiationMin_low;
  thermalRadiationMax_low = LODWORD(viewInfo->thermalParams.thermalRadiationMax);
  *(float *)&thermalRadiationMax_low = viewInfo->thermalParams.thermalRadiationMax - 32.0;
  v9 = thermalRadiationMax_low;
  v12 = v8;
  *(float *)&v12 = *(float *)&v8 + 273.14999;
  _XMM3 = v12;
  v13 = v9;
  __asm { vmaxss  xmm10, xmm3, xmm8 }
  *(float *)&v13 = (float)(*(float *)&v9 * 0.55555558) + 273.14999;
  _XMM3 = v13;
  __asm
  {
    vmaxss  xmm1, xmm3, xmm8
    vmaxss  xmm12, xmm1, xmm0
  }
  *(float *)&_XMM0 = *(float *)&_XMM4 * viewInfo->thermalParams.thermalAmbientReflection;
  viewInfo->input.sceneConstants.thermalAmbient.v[0] = *(float *)&_XMM4;
  viewInfo->input.sceneConstants.thermalAmbient.v[1] = *(float *)&_XMM10;
  viewInfo->input.sceneConstants.thermalAmbient.v[3] = *(float *)&_XMM0;
  v18 = 1.0 / (float)(*(float *)&_XMM12 - *(float *)&_XMM10);
  viewInfo->input.sceneConstants.thermalAmbient.v[2] = v18;
  thermalCutoff_low = LODWORD(viewInfo->thermalParams.thermalCutoff);
  *(float *)&_XMM1 = rg.thermalSurfaceNormalStrengthMul * viewInfo->thermalParams.thermalSurfaceNormalStrength;
  *(float *)&thermalCutoff_low = (float)((float)(viewInfo->thermalParams.thermalCutoff - 32.0) * 0.55555558) + 273.14999;
  _XMM3 = thermalCutoff_low;
  *(float *)&v8 = viewInfo->thermalParams.thermalAOStrength;
  p_input = &viewInfo->input;
  __asm { vmaxss  xmm9, xmm3, xmm8 }
  viewInfo->input.sceneConstants.thermalStrength.v[1] = *(float *)&_XMM9;
  viewInfo->input.sceneConstants.thermalStrength.v[0] = *(float *)&_XMM1;
  viewInfo->input.sceneConstants.thermalStrength.v[2] = *(float *)&v8;
  v23 = 0;
  if ( viewInfo->thermalParams.useNightAndThermalVisionCombo )
  {
    LOBYTE(v23) = viewInfo->thermalParams.useScopedNVG;
    ++v23;
  }
  thermalFog_low = LODWORD(viewInfo->thermalParams.thermalFog);
  _XMM0 = (unsigned __int64)viewInfo->thermalParams.thermalRadiationLut;
  *(float *)&thermalFog_low = (float)((float)(viewInfo->thermalParams.thermalFog - 32.0) * 0.55555558) + 273.14999;
  _XMM3 = thermalFog_low;
  __asm { vpcmpeqq xmm2, xmm0, xmm1 }
  viewInfo->input.sceneConstants.thermalMode = v23;
  __asm
  {
    vblendvps xmm6, xmm13, xmm8, xmm2
    vmaxss  xmm7, xmm3, xmm8
  }
  *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_r_thermalEmissivityDefault, "r_thermalEmissivityDefault");
  viewInfo->input.sceneConstants.thermalEmissivity.v[1] = *(float *)&_XMM0;
  v30 = _XMM7;
  *(float *)&v30 = (float)(*(float *)&_XMM7 - *(float *)&_XMM10) * v18;
  _XMM1 = v30;
  __asm
  {
    vminss  xmm2, xmm1, xmm13
    vmaxss  xmm0, xmm2, xmm8
  }
  viewInfo->input.sceneConstants.thermalEmissivity.v[3] = *(float *)&_XMM0;
  viewInfo->input.sceneConstants.thermalEmissivity.v[0] = *(float *)&_XMM7;
  viewInfo->input.sceneConstants.thermalEmissivity.v[2] = *(float *)&_XMM6;
  *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_r_thermalEmissivity_Decal, "r_thermalEmissivity_Decal");
  v35 = _XMM0;
  *(float *)&v35 = *(float *)&_XMM0 * 0.75;
  v34 = v35;
  *(float *)&v35 = (float)(*(float *)&_XMM0 * 0.75) + 0.15625;
  _XMM1 = v35;
  __asm { vmaxss  xmm3, xmm1, cs:__real@3dcccccd }
  v39 = v34;
  *(float *)&v39 = *(float *)&v34 + 0.34375;
  _XMM0 = v39;
  __asm { vminss  xmm1, xmm0, xmm13 }
  viewInfo->input.sceneConstants.thermalParamDecalVolume.v[1] = *(float *)&_XMM1 - *(float *)&_XMM3;
  viewInfo->input.sceneConstants.thermalParamDecalVolume.v[0] = *(float *)&_XMM3;
  *(_QWORD *)&viewInfo->input.sceneConstants.thermalParamDecalVolume.xyz.z = 0i64;
  if ( viewInfo->thermalParams.useNightAndThermalVisionCombo )
  {
    value = r_nightVisionIrDirect->current.value;
    v41 = r_nightVisionIr2ndSpecular->current.value;
    v42 = r_nightVisionIr2ndDiffuse->current.value;
    v43 = r_nightVisionIrAmbient->current.value;
  }
  else
  {
    v41 = 0.0;
    v42 = 0.0;
    v43 = 0.0;
  }
  viewInfo->input.sceneConstants.infrared.v[0] = v43;
  viewInfo->input.sceneConstants.infrared.v[1] = v42;
  viewInfo->input.sceneConstants.infrared.v[2] = v41;
  viewInfo->input.sceneConstants.infrared.v[3] = value;
  if ( *(float *)&_XMM9 >= *(float *)&_XMM10 )
  {
    if ( *(float *)&_XMM9 <= *(float *)&_XMM12 )
      v44 = (float)(*(float *)&_XMM9 - *(float *)&_XMM10) * v18;
    else
      v44 = FLOAT_1048576_0;
  }
  else
  {
    v44 = FLOAT_N1048576_0;
  }
  p_input->sceneConstants.nightThermalVisionWeight.v[1] = viewInfo->thermalParams.thermalFogExtinctionWeight;
  p_input->sceneConstants.nightThermalVisionWeight.v[0] = v44;
  *(_QWORD *)&p_input->sceneConstants.nightThermalVisionWeight.xyz.z = 0i64;
  thermalColorScale = viewInfo->thermalParams.thermalColorScale;
  v46 = thermalColorScale * viewInfo->thermalParams.thermalColdColor.v[1];
  v47 = thermalColorScale * viewInfo->thermalParams.thermalColdColor.v[2];
  p_input->sceneConstants.thermalColdColor.v[0] = thermalColorScale * viewInfo->thermalParams.thermalColdColor.v[0];
  p_input->sceneConstants.thermalColdColor.v[1] = v46;
  p_input->sceneConstants.thermalColdColor.v[2] = v47;
  p_input->sceneConstants.thermalColdColor.v[3] = thermalColorScale;
  v48 = viewInfo->thermalParams.thermalColorScale;
  v49 = v48 * viewInfo->thermalParams.thermalHotColor.v[1];
  v50 = v48 * viewInfo->thermalParams.thermalHotColor.v[2];
  p_input->sceneConstants.thermalHotColor.v[0] = v48 * viewInfo->thermalParams.thermalHotColor.v[0];
  p_input->sceneConstants.thermalHotColor.v[1] = v49;
  p_input->sceneConstants.thermalHotColor.v[2] = v50;
  p_input->sceneConstants.thermalHotColor.v[3] = v48;
  thermalRadiationLut = viewInfo->thermalParams.thermalRadiationLut;
  blackImage = rgp.blackImage;
  if ( thermalRadiationLut )
    blackImage = (GfxImage *)thermalRadiationLut;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codeImages[54] = blackImage;
}

/*
==============
R_ThermalParamsFromDvars
==============
*/
void R_ThermalParamsFromDvars(GfxViewInfo *viewInfo)
{
  *(_WORD *)&viewInfo->thermalParams.useNightAndThermalVisionCombo = rg.useNightAndThermalVisionCombo;
  viewInfo->thermalParams.nightVisionExposureAdjustment = rg.nightVisionExposureAdjustment;
  viewInfo->thermalParams.nightVisionMinExposureBias = rg.nightVisionMinExposureBias;
  viewInfo->thermalParams.thermalAmbientTemperature = rg.thermalAmbient;
  viewInfo->thermalParams.thermalAmbientReflection = rg.thermalAmbientReflection;
  viewInfo->thermalParams.thermalRadiationMin = rg.thermalRadiationMin;
  viewInfo->thermalParams.thermalRadiationMax = rg.thermalRadiationMax;
  viewInfo->thermalParams.lightIntensityScreen = rg.lightIntensityScopeScreen;
  viewInfo->thermalParams.thermalSurfaceNormalStrength = rg.thermalSurfaceNormalStrength;
  viewInfo->thermalParams.thermalCutoff = rg.thermalCutoff;
  viewInfo->thermalParams.thermalFog = rg.thermalFog;
  viewInfo->thermalParams.thermalColdColor = rg.thermalColdColor;
  viewInfo->thermalParams.thermalHotColor = rg.thermalHotColor;
  rg.thermalColorScale = viewInfo->thermalParams.thermalColorScale;
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

