/*
==============
R_DeRegisterNetworkDvars
==============
*/

void R_DeRegisterNetworkDvars(void)
{
  ?R_DeRegisterNetworkDvars@@YAXXZ();
}

/*
==============
R_CheckDvarModified
==============
*/

bool __fastcall R_CheckDvarModified(const dvar_t *dvar)
{
  return ?R_CheckDvarModified@@YA_NPEBUdvar_t@@@Z(dvar);
}

/*
==============
R_RegisterDvars
==============
*/

void R_RegisterDvars(void)
{
  ?R_RegisterDvars@@YAXXZ();
}

/*
==============
R_GetRenderMemModeName
==============
*/

const char *__fastcall R_GetRenderMemModeName(const RenderMemMode renderMemMode)
{
  return ?R_GetRenderMemModeName@@YAPEBDW4RenderMemMode@@@Z(renderMemMode);
}

/*
==============
R_UnregisterGameDvars
==============
*/

void R_UnregisterGameDvars(void)
{
  ?R_UnregisterGameDvars@@YAXXZ();
}

/*
==============
R_RegisterNetworkDvars
==============
*/

void R_RegisterNetworkDvars(void)
{
  ?R_RegisterNetworkDvars@@YAXXZ();
}

/*
==============
R_RegisterGameDvars
==============
*/

void R_RegisterGameDvars(void)
{
  ?R_RegisterGameDvars@@YAXXZ();
}

/*
==============
R_UpdateDvarGameModeDefaults
==============
*/

void R_UpdateDvarGameModeDefaults(void)
{
  ?R_UpdateDvarGameModeDefaults@@YAXXZ();
}

/*
==============
R_CheckDvarModified
==============
*/
char R_CheckDvarModified(const dvar_t *dvar)
{
  if ( !dvar->modified )
    return 0;
  Dvar_ClearModified(dvar);
  return 1;
}

/*
==============
R_DeRegisterNetworkDvars
==============
*/
void R_DeRegisterNetworkDvars(void)
{
  DVARFLT_r_umbraAccurateOcclusionThreshold = Dvar_Deregister(DVARFLT_r_umbraAccurateOcclusionThreshold);
  DVARFLT_r_umbraMinObjectContribution = Dvar_Deregister(DVARFLT_r_umbraMinObjectContribution);
  DVARFLT_r_umbraShadowAccurateOcclusionThreshold = Dvar_Deregister(DVARFLT_r_umbraShadowAccurateOcclusionThreshold);
  DVARFLT_r_umbraMinShadowObjectContribution = Dvar_Deregister(DVARFLT_r_umbraMinShadowObjectContribution);
  DVARBOOL_r_gpuCullTriOcclusionUmbra = Dvar_Deregister(DVARBOOL_r_gpuCullTriOcclusionUmbra);
  DVARBOOL_r_gpuCullTriClusterOcclusionUmbra = Dvar_Deregister(DVARBOOL_r_gpuCullTriClusterOcclusionUmbra);
  DVARFLT_r_reactiveMotionPlayerRadius = Dvar_Deregister(DVARFLT_r_reactiveMotionPlayerRadius);
  DVARFLT_r_reactiveMotionPlayerPushFrequency = Dvar_Deregister(DVARFLT_r_reactiveMotionPlayerPushFrequency);
  DVARFLT_r_reactiveMotionPlayerPushAmplitude = Dvar_Deregister(DVARFLT_r_reactiveMotionPlayerPushAmplitude);
  DVARFLT_r_reactiveMotionPlayerPushDecay = Dvar_Deregister(DVARFLT_r_reactiveMotionPlayerPushDecay);
  DVARFLT_r_reactiveMotionPlayerHeightAdjust = Dvar_Deregister(DVARFLT_r_reactiveMotionPlayerHeightAdjust);
  DVARFLT_r_reactiveMotionActorRadius = Dvar_Deregister(DVARFLT_r_reactiveMotionActorRadius);
  DVARFLT_r_reactiveMotionActorVelocityMax = Dvar_Deregister(DVARFLT_r_reactiveMotionActorVelocityMax);
  DVARFLT_r_reactiveMotionVelocityTailScale = Dvar_Deregister(DVARFLT_r_reactiveMotionVelocityTailScale);
  DVARFLT_r_reactiveMotionEffectorStrengthScale = Dvar_Deregister(DVARFLT_r_reactiveMotionEffectorStrengthScale);
  DVARBOOL_r_drawSun = Dvar_Deregister(DVARBOOL_r_drawSun);
  DVARBOOL_r_volumetrics = Dvar_Deregister(DVARBOOL_r_volumetrics);
  DVARFLT_r_sdfShadowPenumbra = Dvar_Deregister(DVARFLT_r_sdfShadowPenumbra);
  DVARFLT_r_tessellationFactor = Dvar_Deregister(DVARFLT_r_tessellationFactor);
  DVARFLT_r_tessellationCutoffDistance = Dvar_Deregister(DVARFLT_r_tessellationCutoffDistance);
  DVARFLT_r_tessellationCutoffFalloff = Dvar_Deregister(DVARFLT_r_tessellationCutoffFalloff);
  DVARBOOL_r_enableNoTessBuckets = Dvar_Deregister(DVARBOOL_r_enableNoTessBuckets);
  DVARFLT_sm_sunSampleSizeNear = Dvar_Deregister(DVARFLT_sm_sunSampleSizeNear);
  DVARINT_sm_sunCascadeSizeMultiplier1 = Dvar_Deregister(DVARINT_sm_sunCascadeSizeMultiplier1);
  DVARINT_sm_sunCascadeSizeMultiplier2 = Dvar_Deregister(DVARINT_sm_sunCascadeSizeMultiplier2);
  DVARINT_sm_roundRobinPrioritySpotShadows = Dvar_Deregister(DVARINT_sm_roundRobinPrioritySpotShadows);
  DVARINT_sm_spotUpdateLimit = Dvar_Deregister(DVARINT_sm_spotUpdateLimit);
  DVARINT_sm_spotUpdateLimitDynLight = Dvar_Deregister(DVARINT_sm_spotUpdateLimitDynLight);
  DVARBOOL_sm_spotUpdateMoreDynEnt = Dvar_Deregister(DVARBOOL_sm_spotUpdateMoreDynEnt);
  DVARBOOL_sm_spotUpdateMoreDynObj = Dvar_Deregister(DVARBOOL_sm_spotUpdateMoreDynObj);
  DVARINT_sm_spotShadowScoreSystem = Dvar_Deregister(DVARINT_sm_spotShadowScoreSystem);
  DVARFLT_sm_spotShadowScore0Min = Dvar_Deregister(DVARFLT_sm_spotShadowScore0Min);
  DVARFLT_sm_spotShadowSampleExtra0 = Dvar_Deregister(DVARFLT_sm_spotShadowSampleExtra0);
  DVARFLT_sm_sunShadowScaleSingleLQ = Dvar_Deregister(DVARFLT_sm_sunShadowScaleSingleLQ);
  DVARBOOL_sm_sunFarShadows = Dvar_Deregister(DVARBOOL_sm_sunFarShadows);
  DVARINT_sm_sunDistantShadows = Dvar_Deregister(DVARINT_sm_sunDistantShadows);
  DVARINT_sm_firstForceCacheSModelPartition = Dvar_Deregister(DVARINT_sm_firstForceCacheSModelPartition);
  DVARFLT_sm_spotDistCull = Dvar_Deregister(DVARFLT_sm_spotDistCull);
  DVARFLT_r_vertexDeformCutOffDist = Dvar_Deregister(DVARFLT_r_vertexDeformCutOffDist);
  DVARFLT_r_vertexDeformFadeDist = Dvar_Deregister(DVARFLT_r_vertexDeformFadeDist);
  DVARFLT_r_st_lodDistanceScale = Dvar_Deregister(DVARFLT_r_st_lodDistanceScale);
  DVARINT_r_compressedSunShadowFiltering = Dvar_Deregister(DVARINT_r_compressedSunShadowFiltering);
  DVARFLT_r_compressedSunShadowFilteringMaxRadius = Dvar_Deregister(DVARFLT_r_compressedSunShadowFilteringMaxRadius);
  DVARFLT_r_compressedSunShadowFilteringFarZ = Dvar_Deregister(DVARFLT_r_compressedSunShadowFilteringFarZ);
  DVARBOOL_r_compressedSunShadowClipPlanes = Dvar_Deregister(DVARBOOL_r_compressedSunShadowClipPlanes);
  DVARFLT_r_sunIntensityHeatOverride = Dvar_Deregister(DVARFLT_r_sunIntensityHeatOverride);
  DVARINT_r_precomputedSkyIlluminationRadialDistance = Dvar_Deregister(DVARINT_r_precomputedSkyIlluminationRadialDistance);
  DVARINT_r_waveWaterEnable = Dvar_Deregister(DVARINT_r_waveWaterEnable);
}

/*
==============
R_GetRenderMemModeName
==============
*/
const char *R_GetRenderMemModeName(const RenderMemMode renderMemMode)
{
  __int64 v1; 
  int v4; 

  v1 = renderMemMode;
  if ( (unsigned int)renderMemMode >= 4 )
  {
    v4 = 4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dvars.cpp", 4611, ASSERT_TYPE_ASSERT, "(unsigned)( renderMemMode ) < (unsigned)( ( sizeof( *array_counter( r_renderMemModeNames ) ) + 0 ) - 1 )", "renderMemMode doesn't index ARRAY_COUNT( r_renderMemModeNames ) - 1\n\t%i not in [0, %i)", renderMemMode, v4) )
      __debugbreak();
  }
  return r_renderMemModeNames[v1];
}

/*
==============
R_RegisterDvars
==============
*/
void R_RegisterDvars()
{
  const dvar_t *v20; 
  const dvar_t *v24; 
  const dvar_t *v35; 
  const dvar_t *v46; 
  const dvar_t *v69; 
  const dvar_t *v73; 
  const dvar_t *v81; 
  const dvar_t *v85; 
  const dvar_t *v89; 
  const dvar_t *v93; 
  const dvar_t *v97; 
  const dvar_t *v104; 
  const dvar_t *v108; 
  const dvar_t *v112; 
  const dvar_t *v116; 
  const dvar_t *v120; 
  const dvar_t *v124; 
  const dvar_t *v128; 
  const dvar_t *v135; 
  const dvar_t *v139; 
  const dvar_t *v143; 
  const dvar_t *v147; 
  const dvar_t *v151; 
  const dvar_t *v155; 
  const dvar_t *v159; 
  const dvar_t *v166; 
  const dvar_t *v171; 
  const dvar_t *v176; 
  const dvar_t *v181; 
  const dvar_t *v185; 
  const dvar_t *v200; 
  const dvar_t *v207; 
  const dvar_t *v211; 
  const dvar_t *v216; 
  const dvar_t *v223; 
  const dvar_t *v227; 
  const dvar_t *v231; 
  const dvar_t *v239; 
  const dvar_t *v261; 
  const dvar_t *v278; 
  const dvar_t *v295; 
  const dvar_t *v299; 
  const dvar_t *v304; 
  const dvar_t *v308; 
  const dvar_t *v312; 
  const dvar_t *v325; 
  const dvar_t *v329; 
  const dvar_t *v336; 
  const dvar_t *v340; 
  const dvar_t *v347; 
  bool v365; 
  unsigned int v366; 
  const dvar_t *v372; 
  const dvar_t *v413; 
  const dvar_t *v417; 
  const dvar_t *v430; 
  const dvar_t *v464; 
  const dvar_t *v482; 
  const dvar_t *v514; 
  const dvar_t *v533; 
  const dvar_t *v537; 
  const dvar_t *v541; 
  const dvar_t *v548; 
  int DefaultRenderMemMode; 
  const dvar_t *v562; 
  const dvar_t *v588; 
  const dvar_t *v597; 
  const dvar_t *v603; 
  const dvar_t *v614; 
  const dvar_t *v618; 
  const dvar_t *v623; 
  const dvar_t *v627; 
  const dvar_t *v634; 
  const dvar_t *v638; 
  const dvar_t *v642; 
  const dvar_t *v646; 
  XB3ConsoleType XB3ConsoleType; 
  int v657; 
  const dvar_t *v689; 
  const dvar_t *v693; 
  const dvar_t *v697; 
  const dvar_t *v718; 
  const dvar_t *v723; 
  const dvar_t *v728; 
  const dvar_t *v740; 
  const dvar_t *v753; 
  const dvar_t *v758; 
  const dvar_t *v762; 
  const dvar_t *v766; 
  const dvar_t *v770; 
  const dvar_t *v775; 
  const dvar_t *v787; 
  const dvar_t *v792; 
  const dvar_t *v798; 
  const dvar_t *v808; 
  const dvar_t *v812; 
  const dvar_t *v816; 
  const dvar_t *v820; 
  const dvar_t *v824; 
  const dvar_t *v828; 
  const dvar_t *v832; 
  const dvar_t *v836; 
  const dvar_t *v843; 
  const dvar_t *v863; 
  const dvar_t *v873; 
  const dvar_t *v882; 
  const dvar_t *v889; 
  const dvar_t *v921; 
  const dvar_t *v931; 
  const dvar_t *v935; 
  const dvar_t *v939; 
  const dvar_t *v943; 
  const dvar_t *v947; 
  const dvar_t *v960; 
  const dvar_t *v990; 
  const dvar_t *v1004; 
  const dvar_t *v1013; 
  const dvar_t *v1017; 
  const dvar_t *v1021; 
  const dvar_t *v1025; 
  const dvar_t *v1029; 
  const dvar_t *v1034; 
  const dvar_t *v1038; 
  const dvar_t *v1045; 
  const dvar_t *v1054; 
  const dvar_t *v1058; 
  XB3ConsoleType v1062; 
  const dvar_t *v1080; 
  const dvar_t *v1084; 
  const dvar_t *v1106; 
  const dvar_t *v1110; 
  const dvar_t *v1117; 
  const dvar_t *v1133; 
  const dvar_t *v1137; 
  int SdrDefaultColorimetry; 
  const dvar_t *v1148; 
  const dvar_t *v1164; 
  const dvar_t *v1168; 
  const dvar_t *v1181; 
  const dvar_t *v1185; 
  const dvar_t *v1196; 
  const dvar_t *v1203; 
  const dvar_t *v1207; 
  const dvar_t *v1220; 
  const dvar_t *v1232; 
  const dvar_t *v1243; 
  const dvar_t *v1247; 
  const dvar_t *v1255; 
  const dvar_t *v1275; 
  const dvar_t *v1279; 
  const dvar_t *v1283; 
  const dvar_t *v1302; 
  const dvar_t *v1309; 
  const dvar_t *v1327; 
  const dvar_t *v1334; 
  const dvar_t *v1338; 
  const dvar_t *v1342; 
  const dvar_t *v1346; 
  const dvar_t *v1359; 
  const char *v1363; 
  float flags; 
  float flagsa; 
  float flagsb; 
  float flagsc; 
  float flagsd; 
  float flagse; 
  float flagsf; 
  float flagsg; 
  float flagsh; 
  float flagsi; 
  float flagsj; 
  float flagsk; 
  float flagsl; 
  float flagsm; 
  float flagsn; 
  float flagso; 
  float flagsp; 
  float flagsq; 
  float flagsr; 
  float flagss; 
  float flagst; 
  float flagsu; 
  float flagsv; 
  float flagsw; 
  float flagsx; 
  float flagsy; 
  float flagsz; 
  float flagsba; 
  float flagsbb; 
  float flagsbc; 
  float flagsbd; 
  float flagsbe; 
  float flagsbf; 
  float flagsbg; 
  float flagsbh; 
  float flagsbi; 
  float flagsbj; 
  float flagsbk; 
  float flagsbl; 
  float flagsbm; 
  float flagsbn; 
  float flagsbo; 
  float flagsbp; 
  float flagsbq; 
  float flagsbr; 
  float flagsbs; 
  float flagsbt; 
  float flagsbu; 
  float flagsbv; 
  float flagsbw; 
  float flagsbx; 
  float flagsby; 
  float flagsbz; 
  float flagsca; 
  float flagscb; 
  float flagscc; 
  float flagscd; 
  float flagsce; 
  float flagscf; 
  float flagscg; 
  float flagsch; 
  float flagsci; 
  float flagscj; 
  float flagsck; 
  float flagscl; 
  float flagscm; 
  float flagscn; 
  float flagsco; 
  float flagscp; 
  float flagscq; 
  float flagscr; 
  float description; 
  float descriptiona; 
  float descriptionb; 
  float descriptionc; 
  float descriptiond; 
  float descriptione; 
  float descriptionf; 
  float descriptiong; 
  float descriptionh; 
  float descriptioni; 
  float descriptionj; 
  float descriptionk; 
  float descriptionl; 
  float descriptionm; 
  float descriptionn; 
  float descriptiono; 
  float descriptionp; 
  float descriptionq; 
  float descriptionr; 
  float descriptions; 
  float descriptiont; 
  float descriptionu; 
  float descriptionv; 
  float descriptionw; 
  float descriptionx; 
  float descriptiony; 
  float descriptionz; 
  float descriptionba; 
  float descriptionbb; 
  float descriptionbc; 
  float descriptionbd; 
  float descriptionbe; 
  float descriptionbf; 
  float descriptionbg; 
  float descriptionbh; 
  float descriptionbi; 
  float descriptionbj; 
  float descriptionbk; 
  float descriptionbl; 
  float descriptionbm; 
  float descriptionbn; 
  float descriptionbo; 
  float descriptionbp; 
  float descriptionbq; 
  float descriptionbr; 
  float descriptionbs; 
  float descriptionbt; 
  float descriptionbu; 
  float descriptionbv; 
  float max; 
  float maxa; 
  float maxb; 
  float maxc; 
  float maxd; 
  float maxe; 
  float maxf; 
  float maxg; 
  float maxh; 
  float maxi; 
  float maxj; 
  float maxk; 
  float maxl; 
  float maxm; 
  float maxn; 
  float maxo; 
  float maxp; 
  float maxq; 
  float maxr; 
  float maxs; 
  float maxt; 
  float maxu; 
  float maxv; 
  float maxw; 
  float maxx; 
  float maxy; 
  float maxz; 
  float maxba; 
  float maxbb; 
  float maxbc; 
  float maxbd; 
  float maxbe; 
  float maxbf; 
  float maxbg; 
  float maxbh; 
  float maxbi; 
  float maxbj; 
  float maxbk; 
  vec3_t v1541; 
  vec4_t value; 
  char v1543; 
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
    vmovaps xmmword ptr [rax-98h], xmm12
    vmovaps xmmword ptr [rax-0A8h], xmm13
    vmovaps xmmword ptr [rax-0B8h], xmm14
    vmovaps xmmword ptr [rax-0C8h], xmm15
  }
  Dvar_BeginPermanentRegistration();
  DCONST_DVARBOOL_r_draw_frustum = Dvar_RegisterBool("r_draw_frustum", 0, 0x40004u, "Draw the frustum using debug lines");
  DVARBOOL_killswitch_reset_cinematic_status_size = Dvar_RegisterBool("MSMTMNTLMQ", 1, 0, "Killswitch for the reset of cinematic status size");
  __asm
  {
    vmovss  xmm14, cs:__real@3f800000
    vmovss  xmm3, cs:__real@461c4000; max
    vmovss  xmm1, cs:__real@42700000; value
  }
  DCONST_DVARBOOL_g_drawDefaultStaticModels = Dvar_RegisterBool("g_drawDefaultStaticModels", 0, 0x40004u, "Static default xmodels (the big red FX placeholder) are not rendered by default. Enabling this affects transient performance.");
  __asm
  {
    vmovaps xmm2, xmm14; min
    vmovss  xmm6, cs:__real@3f000000
  }
  DCONST_DVARFLT_r_sceneModelAccurateLODRadiusThreshold = Dvar_RegisterFloat("r_sceneModelAccurateLODRadiusThreshold", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Calculate accurate LOD distances only for scene models with a radius larger than this value");
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm6; value
    vxorps  xmm15, xmm15, xmm15
  }
  v20 = Dvar_RegisterFloat("LROOQPKSOQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Usage Ratio at which we start scaling distance ");
  __asm { vmovss  xmm1, cs:__real@3dcccccd; value }
  DVARFLT_r_ugbUsageRatioStartBiasLodDistanceThreshold = v20;
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v24 = Dvar_RegisterFloat("LTPONKTQLN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Max scaler to apply to distance to bias towards lower lods");
  __asm { vmovss  xmm1, cs:__real@3dcccccd; value }
  DVARFLT_r_ugbUsageRatioMaxDistanceScaler = v24;
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_r_ugbDistanceScalerAmortizer = Dvar_RegisterFloat("MLKOSLONLQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "This is so that scaling to does not fluctuate too much from frame to frame");
  DCONST_DVARINT_r_presentImmediateThreshold = Dvar_RegisterInt("r_presentImmediateThreshold", 20, 0, 100, 0x40004u, "The immediate threshold for presenting, as a percentage (from 0 to 100) of screen coverage in scanlines.");
  DVARBOOL_r_hudOutlineEnable = Dvar_RegisterBool("NMROQRRONQ", 0, 0x44u, "Enables hud outline effect.");
  DCONST_DVARBOOL_r_hudOutlineCS = Dvar_RegisterBool("r_hudOutlineCS", 1, 0x40004u, "Draws hud outline effect to scene buffer");
  DCONST_DVARBOOL_r_hudOutlineDebugTweakForceEnable = Dvar_RegisterBool("r_hudOutlineDebugTweakForceEnable", 0, 0x40004u, "For debugging only, turn hud outline on for all entities.");
  DCONST_DVARINT_r_hudOutlineDebugTweakForceMode = Dvar_RegisterInt("r_hudOutlineDebugTweakForceMode", -1, -1, 2, 0x40004u, "For debugging only, force hud outline mode for all entities");
  DCONST_DVARINT_r_hudOutlineDebugTweakLineWidth = Dvar_RegisterInt("r_hudOutlineDebugTweakLineWidth", 2, 0, 16, 0x40004u, "For debugging only, force hud line width for all entities");
  DCONST_DVARBOOL_r_hudOutlineDebugTweakDrawOccluded = Dvar_RegisterBool("r_hudOutlineDebugTweakDrawOccluded", 1, 0x40004u, "For debugging only, force draw occluded for all entities.");
  __asm { vmovss  xmm12, cs:__real@41200000 }
  DCONST_DVARBOOL_r_hudOutlineDebugTweakDrawNonOccluded = Dvar_RegisterBool("r_hudOutlineDebugTweakDrawNonOccluded", 1, 0x40004u, "For debugging only, force draw non-occluded for all entities.");
  __asm
  {
    vmovaps xmm3, xmm12; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm14; value
  }
  DVARFLT_r_hudOutlineWidth = Dvar_RegisterFloat("MKOQSSQKLL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x44u, "Set the width of the Hud Outline");
  __asm
  {
    vmovss  [rsp+148h+max], xmm14
    vmovss  dword ptr [rsp+148h+description], xmm15
    vmovaps xmm3, xmm14; z
    vxorps  xmm2, xmm2, xmm2; y
    vxorps  xmm1, xmm1, xmm1; x
    vmovss  [rsp+148h+flags], xmm14
  }
  v35 = Dvar_RegisterVec4("MPLQQOTMSP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flags, description, max, 0x44u, "The outline pixels inside the scope will be recolorized to this color");
  __asm
  {
    vmovss  [rsp+148h+max], xmm14
    vmovss  dword ptr [rsp+148h+description], xmm15
    vmovaps xmm3, xmm14; z
    vxorps  xmm2, xmm2, xmm2; y
    vxorps  xmm1, xmm1, xmm1; x
    vmovss  [rsp+148h+flags], xmm14
  }
  DVARVEC4_r_hudOutlineColorInScope = v35;
  DVARVEC4_r_hudOutlineColorInScopeFoe = Dvar_RegisterVec4("MKMNNOKRSP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsa, descriptiona, maxa, 0x44u, "The outline pixels inside the scope will be recolorized to this color");
  __asm
  {
    vmovss  [rsp+148h+max], xmm14
    vmovss  dword ptr [rsp+148h+description], xmm15
    vmovaps xmm3, xmm14; z
    vmovaps xmm2, xmm14; y
    vmovaps xmm1, xmm14; x
    vmovss  [rsp+148h+flags], xmm14
  }
  DVARVEC4_r_hudOutlineColorOutScope = Dvar_RegisterVec4("LOKPRQTTQK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsb, descriptionb, maxb, 0x44u, "The outline pixels outside the scope will be modulated by this color");
  __asm
  {
    vmovss  xmm7, cs:__real@3f666666
    vmovss  [rsp+148h+max], xmm14
    vmovss  dword ptr [rsp+148h+description], xmm15
    vmovaps xmm3, xmm7; z
    vmovaps xmm2, xmm7; y
    vmovaps xmm1, xmm7; x
    vmovss  [rsp+148h+flags], xmm6
  }
  v46 = Dvar_RegisterVec4("LRMPROLMKN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsc, descriptionc, maxc, 0x44u, "This color is multiplied by the outline color on some horizontal lines.");
  __asm
  {
    vmovss  [rsp+148h+max], xmm14
    vmovss  dword ptr [rsp+148h+description], xmm15
    vmovss  [rsp+148h+flags], xmm6
    vmovss  xmm6, cs:__real@3f19999a
    vmovaps xmm3, xmm6; z
    vmovaps xmm2, xmm6; y
    vmovaps xmm1, xmm6; x
  }
  DVARVEC4_r_hudOutlineFillColor0 = v46;
  DVARVEC4_r_hudOutlineFillColor1 = Dvar_RegisterVec4("NTOSKSTKQQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsd, descriptiond, maxd, 0x44u, "This color is multiplied by the outline color on some horizontal lines.");
  __asm
  {
    vmovss  [rsp+148h+max], xmm14
    vmovss  dword ptr [rsp+148h+description], xmm15
    vmovaps xmm3, xmm14; z
    vmovaps xmm2, xmm14; y
    vmovaps xmm1, xmm14; x
    vmovss  [rsp+148h+flags], xmm14
  }
  DVARVEC4_r_hudOutlineOccludedOutlineColor = Dvar_RegisterVec4("NSNOLMTLLL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagse, descriptione, maxe, 0x44u, "The outline color of pixels that are depth occluded");
  __asm
  {
    vmovss  [rsp+148h+max], xmm14
    vmovss  dword ptr [rsp+148h+description], xmm15
    vmovaps xmm3, xmm14; z
    vmovaps xmm2, xmm14; y
    vmovaps xmm1, xmm14; x
    vmovss  [rsp+148h+flags], xmm7
    vmovss  xmm0, cs:__real@3e800000
  }
  DVARVEC4_r_hudOutlineOccludedInlineColor = Dvar_RegisterVec4("LSRTPRNOLS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsf, descriptionf, maxf, 0x44u, "The interior lines color of pixels that are depth occluded");
  __asm
  {
    vmovss  [rsp+148h+max], xmm14
    vmovss  dword ptr [rsp+148h+description], xmm15
    vmovss  [rsp+148h+flags], xmm0
    vmovss  xmm0, cs:__real@3f333333
    vmovaps xmm3, xmm0; z
    vmovaps xmm2, xmm0; y
    vmovaps xmm1, xmm0; x
  }
  DVARVEC4_r_hudOutlineOccludedInteriorColor = Dvar_RegisterVec4("LNNOSQKRTP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsg, descriptiong, maxg, 0x44u, "The interior fill color of pixels that are depth occluded");
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  DVARFLT_r_hudOutlineOccludedColorFromFill = Dvar_RegisterFloat("RKSQOKQNK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x44u, "Amount of color from non occluded outline color to use for occluded color");
  __asm { vmovss  xmm9, cs:__real@447a0000 }
  DVARBOOL_r_brCircleOutlineEnabled = Dvar_RegisterBool("OLPPQTQPSR", 1, 0x44u, "Enable BR Circle draw via hud outline");
  __asm
  {
    vmovss  xmm3, cs:__real@3eb33333; z
    vmovss  [rsp+148h+max], xmm9
    vmovss  dword ptr [rsp+148h+description], xmm15
    vmovaps xmm2, xmm6; y
    vmovaps xmm1, xmm6; x
    vmovss  [rsp+148h+flags], xmm7
  }
  v69 = Dvar_RegisterVec4("QNTNNSMKR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsh, descriptionh, maxh, 0x44u, "BR Circle rgb color and intensity");
  __asm { vmovss  xmm1, cs:__real@42200000; value }
  DVARVEC4_r_brCircleOutlineColor = v69;
  __asm
  {
    vmovaps xmm3, xmm9; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v73 = Dvar_RegisterFloat("MLQRRTPPLQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x44u, "BR Circle thickness");
  __asm
  {
    vmovss  xmm6, cs:__real@41800000
    vmovss  xmm1, cs:__real@40a00000; value
  }
  DVARFLT_r_brCircleOutlineThickness = v73;
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_r_shimmerEffectTimeOff = Dvar_RegisterFloat("MTSLMPMTTM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x44u, "Amount of time the interior fill is off.");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm14; value
  }
  v81 = Dvar_RegisterFloat("MSTTNLLRLS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x44u, "Amount of time interior fill is on.");
  __asm { vmovss  xmm3, cs:__real@461c4000; max }
  DVARFLT_r_shimmerEffectTimeOn = v81;
  __asm
  {
    vmovaps xmm2, xmm12; min
    vmovaps xmm1, xmm9; value
  }
  v85 = Dvar_RegisterFloat("LKSOROSOQK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x44u, "Distance at which to use far parameters.");
  __asm { vmovss  xmm1, cs:__real@3e4ccccd; value }
  DVARFLT_r_shimmerEffectFarDistance = v85;
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v89 = Dvar_RegisterFloat("LKQMTLKPMM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x44u, "Used to scale intensity at near distance.");
  __asm { vmovss  xmm1, cs:__real@3f400000; value }
  DVARFLT_r_shimmerEffectInteriorFillIntensityNear = v89;
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v93 = Dvar_RegisterFloat("NTRTRQMQNL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x44u, "Used to scale intensity at far distance.");
  __asm { vmovss  xmm1, cs:__real@3ecccccd; value }
  DVARFLT_r_shimmerEffectInteriorFillIntensityFar = v93;
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v97 = Dvar_RegisterFloat("NMSNTQSMLL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x44u, "Amount of modulation of color during animation ( 1.0 means none ).");
  __asm { vmovss  xmm1, cs:__real@3f400000; value }
  DVARFLT_r_shimmerEffectColorAnimIntensity = v97;
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_r_shimmerEffectInteriorLineStrength = Dvar_RegisterFloat("MROQPTNONR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x44u, "Intensity scale for interior lines.");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm14; value
  }
  v104 = Dvar_RegisterFloat("NQQLKRLTSN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x44u, "Intensity scale for exterior lines.");
  __asm { vmovss  xmm3, cs:__real@40800000; max }
  DVARFLT_r_shimmerEffectExteriorLineStrength = v104;
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm14; value
  }
  v108 = Dvar_RegisterFloat("LSTKPKPRSO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x44u, "Global scale for intensity of snapshot effect");
  __asm
  {
    vmovss  xmm2, cs:__real@3c23d70a; min
    vmovss  xmm1, cs:__real@3eae147b; value
  }
  DVARFLT_r_snapshotEffectAlphaIntensity = v108;
  __asm { vmovaps xmm3, xmm12; max }
  v112 = Dvar_RegisterFloat("RLNOTPQPK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x44u, "Power curve applied to foreground thermal pixels");
  __asm
  {
    vmovss  xmm2, cs:__real@3c23d70a; min
    vmovss  xmm1, cs:__real@3fd0a3d7; value
  }
  DVARFLT_r_hudOutlineThermalPowerForeground = v112;
  __asm { vmovaps xmm3, xmm12; max }
  v116 = Dvar_RegisterFloat("MRQTKQSMR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x44u, "Power curve applied to background thermal pixels");
  __asm
  {
    vmovss  xmm3, cs:__real@41a00000; max
    vmovss  xmm1, cs:__real@3ee147ae; value
  }
  DVARFLT_r_hudOutlineThermalPowerBackground = v116;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  v120 = Dvar_RegisterFloat("NSRQQKNSNR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x44u, "Noise scale for entities.");
  __asm
  {
    vmovss  xmm3, cs:__real@41a00000; max
    vmovss  xmm1, cs:__real@3dba5e35; value
  }
  DVARFLT_r_hudOutlineThermalNoiseScaleFG = v120;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  v124 = Dvar_RegisterFloat("LRPNLRLPMT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x44u, "Noise scale for scene.");
  __asm
  {
    vmovss  xmm3, cs:__real@3f51eb85; z
    vmovss  xmm2, cs:__real@3fe51eb8; y
    vmovss  xmm1, cs:__real@403e147b; x
  }
  DVARFLT_r_hudOutlineThermalNoiseScaleBG = v124;
  __asm
  {
    vmovss  [rsp+148h+max], xmm12
    vmovss  dword ptr [rsp+148h+description], xmm15
    vmovss  [rsp+148h+flags], xmm14
  }
  v128 = Dvar_RegisterVec4("LQRKORLQML", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsi, descriptioni, maxi, 0x44u, "The dark color for enemies.");
  __asm
  {
    vmovss  xmm3, cs:__real@3e6147ae; z
    vmovss  xmm2, cs:__real@3e2e147b; y
    vmovss  xmm1, cs:__real@3faccccd; x
  }
  DVARVEC4_r_hudOutlineThermalDarkColorEnemy = v128;
  __asm
  {
    vmovss  [rsp+148h+max], xmm12
    vmovss  dword ptr [rsp+148h+description], xmm15
    vmovss  [rsp+148h+flags], xmm14
  }
  DVARVEC4_r_hudOutlineThermalBrightColorEnemy = Dvar_RegisterVec4("NTNOPTNMPP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsj, descriptionj, maxj, 0x44u, "The bright color for enemies.");
  __asm
  {
    vmovss  xmm3, cs:__real@3f3ae148; z
    vmovss  xmm2, cs:__real@3f170a3d; y
    vmovss  xmm1, cs:__real@3e570a3d; x
    vmovss  [rsp+148h+max], xmm12
    vmovss  dword ptr [rsp+148h+description], xmm15
    vmovss  [rsp+148h+flags], xmm14
  }
  v135 = Dvar_RegisterVec4("MPKOKPNLN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsk, descriptionk, maxk, 0x44u, "The dark color for friends.");
  __asm
  {
    vmovss  xmm3, cs:__real@3ef5c28f; z
    vmovss  xmm2, cs:__real@3ea3d70a; y
    vmovss  xmm1, cs:__real@3e6b851f; x
  }
  DVARVEC4_r_hudOutlineThermalDarkColorFriend = v135;
  __asm
  {
    vmovss  [rsp+148h+max], xmm12
    vmovss  dword ptr [rsp+148h+description], xmm15
    vmovss  [rsp+148h+flags], xmm14
  }
  v139 = Dvar_RegisterVec4("LTTSTKSPNT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsl, descriptionl, maxl, 0x44u, "The bright color for friends.");
  __asm
  {
    vmovss  xmm3, cs:__real@3eae147b; z
    vmovss  xmm2, cs:__real@3e75c28f; y
    vmovss  xmm1, cs:__real@3de147ae; x
  }
  DVARVEC4_r_hudOutlineThermalBrightColorFriend = v139;
  __asm
  {
    vmovss  [rsp+148h+max], xmm12
    vmovss  dword ptr [rsp+148h+description], xmm15
    vmovss  [rsp+148h+flags], xmm14
  }
  v143 = Dvar_RegisterVec4("OKQKMLSMPN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsm, descriptionm, maxm, 0x44u, "The dark color for the background.");
  __asm
  {
    vmovss  xmm3, cs:__real@3f47ae14; z
    vmovss  xmm2, cs:__real@3f1eb852; y
    vmovss  xmm1, cs:__real@3e800000; x
  }
  DVARVEC4_r_hudOutlineThermalDarkColorBackground = v143;
  __asm
  {
    vmovss  [rsp+148h+max], xmm12
    vmovss  dword ptr [rsp+148h+description], xmm15
    vmovss  [rsp+148h+flags], xmm14
  }
  v147 = Dvar_RegisterVec4("NSSMRLPRPL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsn, descriptionn, maxn, 0x44u, "The bright color for the background.");
  __asm
  {
    vmovss  xmm2, cs:__real@3c23d70a; min
    vmovss  xmm1, cs:__real@3ed1eb85; value
  }
  DVARVEC4_r_hudOutlineThermalBrightColorBackground = v147;
  __asm { vmovaps xmm3, xmm12; max }
  v151 = Dvar_RegisterFloat("MKOPMKKPOS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x44u, "Power curve applied to foreground thermal pixels");
  __asm
  {
    vmovss  xmm2, cs:__real@3c23d70a; min
    vmovss  xmm1, cs:__real@3f547ae1; value
  }
  DVARFLT_r_hudOutlineVRScopeThermalPowerForeground = v151;
  __asm { vmovaps xmm3, xmm12; max }
  v155 = Dvar_RegisterFloat("MNLLLPQSP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x44u, "Power curve applied to background thermal pixels");
  __asm
  {
    vmovss  xmm3, cs:__real@41a00000; max
    vmovss  xmm1, cs:__real@3e000000; value
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_r_hudOutlineVRScopeThermalPowerBackground = v155;
  v159 = Dvar_RegisterFloat("MNNRTQNNNT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x44u, "Noise scale for entities.");
  __asm
  {
    vmovss  xmm3, cs:__real@41a00000; max
    vmovss  xmm1, cs:__real@3e000000; value
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_r_hudOutlineVRScopeThermalNoiseScaleFG = v159;
  DVARFLT_r_hudOutlineVRScopeThermalNoiseScaleBG = Dvar_RegisterFloat("QQMRRKSLP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x44u, "Noise scale for scene.");
  __asm
  {
    vmovss  xmm3, cs:__real@3f11eb85; z
    vmovss  xmm2, cs:__real@3f7ae148; y
    vmovss  xmm1, cs:__real@3f83d70a; x
    vmovss  [rsp+148h+max], xmm12
    vmovss  dword ptr [rsp+148h+description], xmm15
    vmovss  [rsp+148h+flags], xmm14
  }
  v166 = Dvar_RegisterVec4("MRMMQQKQKN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagso, descriptiono, maxo, 0x44u, "The dark color for enemies.");
  __asm
  {
    vmovss  xmm3, cs:__real@3e8f5c29; z
    vmovss  xmm2, cs:__real@3ed70a3d; y
    vmovss  xmm1, cs:__real@3fa51eb8; x
    vmovaps xmm0, xmm12
    vmovss  [rsp+148h+max], xmm0
    vmovss  dword ptr [rsp+148h+description], xmm15
    vmovss  [rsp+148h+flags], xmm14
  }
  DVARVEC4_r_hudOutlineVRScopeThermalDarkColorEnemy = v166;
  v171 = Dvar_RegisterVec4("LQQOQNNMT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsp, descriptionp, maxp, 0x44u, "The bright color for enemies.");
  __asm
  {
    vmovss  xmm3, cs:__real@3f3ae148; z
    vmovss  xmm2, cs:__real@3f170a3d; y
    vmovss  xmm1, cs:__real@3e570a3d; x
    vmovaps xmm0, xmm12
    vmovss  [rsp+148h+max], xmm0
    vmovss  dword ptr [rsp+148h+description], xmm15
    vmovss  [rsp+148h+flags], xmm14
  }
  DVARVEC4_r_hudOutlineVRScopeThermalBrightColorEnemy = v171;
  v176 = Dvar_RegisterVec4("OMROPMNPTT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsq, descriptionq, maxq, 0x44u, "The dark color for friends.");
  __asm
  {
    vmovss  xmm3, cs:__real@3ef5c28f; z
    vmovss  xmm2, cs:__real@3ea3d70a; y
    vmovss  xmm1, cs:__real@3e6b851f; x
    vmovaps xmm10, xmm12
    vmovss  [rsp+148h+max], xmm10
    vmovss  dword ptr [rsp+148h+description], xmm15
    vmovss  [rsp+148h+flags], xmm14
  }
  DVARVEC4_r_hudOutlineVRScopeThermalDarkColorFriend = v176;
  v181 = Dvar_RegisterVec4("MLMRSONLSL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsr, descriptionr, maxr, 0x44u, "The bright color for friends.");
  __asm
  {
    vmovss  xmm3, cs:__real@3e851eb8; z
    vmovss  xmm2, cs:__real@3e99999a; y
    vmovss  xmm1, cs:__real@3e428f5c; x
    vmovss  [rsp+148h+max], xmm10
    vmovss  dword ptr [rsp+148h+description], xmm15
    vmovss  [rsp+148h+flags], xmm14
  }
  DVARVEC4_r_hudOutlineVRScopeThermalBrightColorFriend = v181;
  v185 = Dvar_RegisterVec4("MMTLNMQKTT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagss, descriptions, maxs, 0x44u, "The dark color for the background.");
  __asm
  {
    vmovss  xmm7, cs:__real@3f000000
    vmovss  xmm3, cs:__real@3f0f5c29; z
    vmovss  xmm1, cs:__real@3e800000; x
    vmovss  [rsp+148h+max], xmm10
    vmovss  dword ptr [rsp+148h+description], xmm15
    vmovaps xmm2, xmm7; y
    vmovss  [rsp+148h+flags], xmm14
  }
  DVARVEC4_r_hudOutlineVRScopeThermalDarkColorBackground = v185;
  DVARVEC4_r_hudOutlineVRScopeThermalBrightColorBackground = Dvar_RegisterVec4("MSOLOMSKNN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagst, descriptiont, maxt, 0x44u, "The bright color for the background.");
  DCONST_DVARBOOL_r_useBrightnessForUI = Dvar_RegisterBool("r_useBrightnessForUI", 0, 0x40004u, "Use brightness / calibration settings for UI rendering");
  DVARINT_r_scopeOverrideTransitionMode = Dvar_RegisterEnum("LPRNOKPONK", g_scopeOverrideTransitionModeNames, 0, 0x44u, "Debuging test for tuning the scope transition mode.");
  DCONST_DVARBOOL_r_esram = Dvar_RegisterBool("r_esram", 1, 0x40004u, "Enable ESRAM usage.");
  DCONST_DVARBOOL_r_esramColor = Dvar_RegisterBool("r_esramColor", 1, 0x40004u, "Use ESRAM for the main scene color buffer.");
  DCONST_DVARBOOL_r_esramColorPrepass = Dvar_RegisterBool("r_esramColorPrepass", 0, 0x40004u, "Use ESRAM for the main scene color prepass (ID, Velocity) buffer.");
  DCONST_DVARBOOL_r_esramDepth = Dvar_RegisterBool("r_esramDepth", 1, 0x40004u, "Use ESRAM for the main scene depth buffer.");
  DCONST_DVARBOOL_r_esramColorMSAA = Dvar_RegisterBool("r_esramColorMSAA", 1, 0x40004u, "Use ESRAM for the half res scene 4xMSAA color buffer.");
  DCONST_DVARBOOL_r_esramAlphaMSAA = Dvar_RegisterBool("r_esramAlphaMSAA", 0, 0x40004u, "Use ESRAM for the half res scene 4xMSAA alpha buffer.");
  DCONST_DVARBOOL_r_esramDepthMSAA = Dvar_RegisterBool("r_esramDepthMSAA", 1, 0x40004u, "Use ESRAM for the half res scene 4xMSAA depth buffer.");
  DCONST_DVARBOOL_r_esramShadow = Dvar_RegisterBool("r_esramShadow", 1, 0x40004u, "Use ESRAM for shadow-maps.");
  DCONST_DVARBOOL_r_esramShadowTrans = Dvar_RegisterBool("r_esramShadowTrans", 0, 0x40004u, "Use ESRAM for translucent shadow-maps.");
  DCONST_DVARBOOL_r_esramPostFX = Dvar_RegisterBool("r_esramPostFX", 1, 0x40004u, "Use ESRAM for post-effects.");
  DCONST_DVARINT_r_dccColor = Dvar_RegisterEnum("r_dccColor", g_dccNames, 0, 0x40004u, "Use delta color compression for the main scene color buffer.");
  DCONST_DVARINT_r_dccFloatZ = Dvar_RegisterEnum("r_dccFloatZ", g_dccNames, 1, 0x40004u, "Use delta color compression for floatz rendertargets.");
  DCONST_DVARINT_r_dccEmissive = Dvar_RegisterEnum("r_dccEmissive", g_dccNames, 1, 0x40004u, "Use delta color compression for half-res emissives.");
  DCONST_DVARINT_r_dccMbDof = Dvar_RegisterEnum("r_dccMbDof", g_dccNames, 1, 0x40004u, "Use delta color compression for motionblur and dof destination.");
  DCONST_DVARINT_r_dccPostFX = Dvar_RegisterEnum("r_dccPostFX", g_dccNames, 0, 0x40004u, "Use delta color compression for post-effects.");
  DCONST_DVARINT_r_dccPostAA = Dvar_RegisterEnum("r_dccPostAA", g_dccNames, 1, 0x40004u, "Use delta color compression for post AA.");
  DCONST_DVARBOOL_r_disableImageCacheEvictionQueue = Dvar_RegisterBool("r_disableImageCacheEvictionQueue", 0, 0x40004u, "db_disableImageCacheEvictionQueue");
  DCONST_DVARINT_r_tessellationSlice = Dvar_RegisterInt("r_tessellationSlice", 8, 1, 8, 0x40004u, "Divide tessellation buffer into N slices to improve parallelism.");
  DVARBOOL_r_printAnimTreeOnBoundsTooSmall = Dvar_RegisterBool("MOMOKRTQPT", 0, 4u, "Additionally print the anim tree when warnign that bounds are too small");
  DCONST_DVARBOOL_r_patchCountAllowed = Dvar_RegisterBool("r_patchCountAllowed", 1, 0x40004u, "Enable run-time setting of patch count per draw call.");
  DCONST_DVARINT_r_subdivPatchCount = Dvar_RegisterInt("r_subdivPatchCount", 2, 1, 16, 0x40004u, "Patches per thread group for sub-division surfaces.");
  DCONST_DVARINT_r_displacementPatchCount = Dvar_RegisterInt("r_displacementPatchCount", 2, 1, 16, 0x40004u, "Patches per thread group for displacement surfaces.");
  DCONST_DVARINT_r_defaultPatchCount = Dvar_RegisterInt("r_defaultPatchCount", 0, 0, 16, 0x40004u, "Patches per thread group for all other surfaces.");
  DCONST_DVARBOOL_r_gpuLateAllocParamCacheAllowed = Dvar_RegisterBool("r_gpuLateAllocParamCacheAllowed", 1, 0x40004u, "Enable late allocation of parameter cache.");
  DCONST_DVARINT_r_gpuLateAllocParamCacheSubdiv = Dvar_RegisterInt("r_gpuLateAllocParamCacheSubdiv", 10, 0, 63, 0x40004u, "Late allocation of parameter cache value for sub-div materials.");
  DCONST_DVARINT_r_gpuLateAllocParamCacheSubdivDepthOnly = Dvar_RegisterInt("r_gpuLateAllocParamCacheSubdivDepthOnly", 8, 0, 63, 0x40004u, "Late allocation of parameter cache value for depth-only sub-div materials.");
  DCONST_DVARINT_r_gpuLateAllocParamCacheBSP = Dvar_RegisterInt("r_gpuLateAllocParamCacheBSP", 0, 0, 63, 0x40004u, "Late allocation of parameter cache value for displacement materials.");
  DCONST_DVARINT_r_gpuLateAllocParamCacheBSPDepthOnly = Dvar_RegisterInt("r_gpuLateAllocParamCacheBSPDepthOnly", 0, 0, 63, 0x40004u, "Late allocation of parameter cache value for depth-only displacement materials.");
  DCONST_DVARINT_r_gpuLateAllocParamCacheST = Dvar_RegisterInt("r_gpuLateAllocParamCacheST", 0, 0, 63, 0x40004u, "Late allocation of parameter cache value for super terrain materials.");
  DCONST_DVARINT_r_gpuLateAllocParamCacheSTDepthOnly = Dvar_RegisterInt("r_gpuLateAllocParamCacheSTDepthOnly", 0, 0, 63, 0x40004u, "Late allocation of parameter cache value for depth-only super terrain materials.");
  DCONST_DVARINT_r_gpuLateAllocParamCacheEffects = Dvar_RegisterInt("r_gpuLateAllocParamCacheEffects", 22, 0, 63, 0x40004u, "Late allocation of parameter cache value for effect materials.");
  DCONST_DVARINT_r_gpuLateAllocParamCacheDefault = Dvar_RegisterInt("r_gpuLateAllocParamCacheDefault", 12, 0, 63, 0x40004u, "Late allocation of parameter cache value for all other materials.");
  DCONST_DVARINT_r_gpuLateAllocParamCacheDefaultDepthOnly = Dvar_RegisterInt("r_gpuLateAllocParamCacheDefaultDepthOnly", 8, 0, 63, 0x40004u, "Late allocation of parameter cache value for all other depth-only materials.");
  DCONST_DVARBOOL_r_gpuVSWaveLimitAllowed = Dvar_RegisterBool("r_gpuVSWaveLimitAllowed", 0, 0x40004u, "Enable VS limit.");
  DCONST_DVARINT_r_gpuVSWaveLimitSubdiv = Dvar_RegisterInt("r_gpuVSWaveLimitSubdiv", 0, 0, 63, 0x40004u, "VS Wave limit value (x16) for sub-div materials.");
  DCONST_DVARINT_r_gpuVSWaveLimitSubdivDepthOnly = Dvar_RegisterInt("r_gpuVSWaveLimitSubdivDepthOnly", 0, 0, 63, 0x40004u, "VS Wave limit value (x16) for depth-only sub-div materials.");
  DCONST_DVARINT_r_gpuVSWaveLimitBSP = Dvar_RegisterInt("r_gpuVSWaveLimitBSP", 0, 0, 63, 0x40004u, "VS Wave limit value (x16) for BSP materials.");
  DCONST_DVARINT_r_gpuVSWaveLimitBSPDepthOnly = Dvar_RegisterInt("r_gpuVSWaveLimitBSPDepthOnly", 0, 0, 63, 0x40004u, "VS Wave limit value (x16) depth-only BSP materials.");
  DCONST_DVARINT_r_gpuVSWaveLimitST = Dvar_RegisterInt("r_gpuVSWaveLimitST", 0, 0, 63, 0x40004u, "VS Wave limit value (x16) for super terrain materials.");
  DCONST_DVARINT_r_gpuVSWaveLimitSTDepthOnly = Dvar_RegisterInt("r_gpuVSWaveLimitSTDepthOnly", 0, 0, 63, 0x40004u, "VS Wave limit value (x16) depth-only super terrain materials.");
  DCONST_DVARINT_r_gpuVSWaveLimitEffects = Dvar_RegisterInt("r_gpuVSWaveLimitEffects", 0, 0, 63, 0x40004u, "VS Wave limit value (x16) for effect materials.");
  DCONST_DVARINT_r_gpuVSWaveLimitDefault = Dvar_RegisterInt("r_gpuVSWaveLimitDefault", 0, 0, 63, 0x40004u, "VS Wave limit value (x16) for all other materials.");
  DCONST_DVARINT_r_gpuVSWaveLimitDefaultDepthOnly = Dvar_RegisterInt("r_gpuVSWaveLimitDefaultDepthOnly", 0, 0, 63, 0x40004u, "VS Wave limit value (x16) for all other depth-only materials.");
  DCONST_DVARBOOL_r_gpuPSWaveLimitAllowed = Dvar_RegisterBool("r_gpuPSWaveLimitAllowed", 0, 0x40004u, "Enable PS limit.");
  DCONST_DVARINT_r_gpuPSWaveLimitSubdiv = Dvar_RegisterInt("r_gpuPSWaveLimitSubdiv", 0, 0, 63, 0x40004u, "PS Wave limit value (x16) for sub-div materials.");
  DCONST_DVARINT_r_gpuPSWaveLimitSubdivDepthOnly = Dvar_RegisterInt("r_gpuPSWaveLimitSubdivDepthOnly", 0, 0, 63, 0x40004u, "PS Wave limit value (x16) for depth-only sub-div materials.");
  DCONST_DVARINT_r_gpuPSWaveLimitBSP = Dvar_RegisterInt("r_gpuPSWaveLimitBSP", 0, 0, 63, 0x40004u, "PS Wave limit value (x16) for BSP materials.");
  DCONST_DVARINT_r_gpuPSWaveLimitBSPDepthOnly = Dvar_RegisterInt("r_gpuPSWaveLimitBSPDepthOnly", 0, 0, 63, 0x40004u, "PS Wave limit value (x16) depth-only BSP materials.");
  DCONST_DVARINT_r_gpuPSWaveLimitST = Dvar_RegisterInt("r_gpuPSWaveLimitST", 0, 0, 63, 0x40004u, "PS Wave limit value (x16) for super terrain materials.");
  DCONST_DVARINT_r_gpuPSWaveLimitSTDepthOnly = Dvar_RegisterInt("r_gpuPSWaveLimitSTDepthOnly", 0, 0, 63, 0x40004u, "PS Wave limit value (x16) depth-only super terrain materials.");
  DCONST_DVARINT_r_gpuPSWaveLimitEffects = Dvar_RegisterInt("r_gpuPSWaveLimitEffects", 0, 0, 63, 0x40004u, "PS Wave limit value (x16) for effect materials.");
  DCONST_DVARINT_r_gpuPSWaveLimitDefault = Dvar_RegisterInt("r_gpuPSWaveLimitDefault", 0, 0, 63, 0x40004u, "PS Wave limit value (x16) for all other materials.");
  DCONST_DVARINT_r_gpuPSWaveLimitDefaultDepthOnly = Dvar_RegisterInt("r_gpuPSWaveLimitDefaultDepthOnly", 0, 0, 63, 0x40004u, "PS Wave limit value (x16) for all other depth-only materials.");
  DCONST_DVARBOOL_r_gpuCpGroupedDrawsAllowed = Dvar_RegisterBool("r_gpuCpGroupedDrawsAllowed", 1, 0x40004u, "Enable CP Grouped Draws.");
  DCONST_DVARBOOL_r_gpuCpGroupedDrawsForShadowsAndDepthPrepasses = Dvar_RegisterBool("r_gpuCpGroupedDrawsForShadowsAndDepthPrepasses", 0, 0x40004u, "Allow For Shadows and Depth Prepass Draws.");
  DCONST_DVARBOOL_r_gpuCpGroupedDrawsForDepthPrepassMaterial = Dvar_RegisterBool("r_gpuCpGroupedDrawsForDepthPrepassMaterial", 1, 0x40004u, "Allow For Draws Using Global Depth Prepass Material.");
  DCONST_DVARBOOL_r_gpuShaderPrecacheAllowed = Dvar_RegisterBool("r_gpuShaderPrecacheAllowed", 0, 0x40004u, "Enable shader precaching.");
  DCONST_DVARBOOL_r_gpuVSPrecacheAllowed = Dvar_RegisterBool("r_gpuVSPrecacheAllowed", 0, 0x40004u, "Enable VS precaching.");
  DCONST_DVARBOOL_r_gpuPSPrecacheAllowed = Dvar_RegisterBool("r_gpuPSPrecacheAllowed", 0, 0x40004u, "Enable PS precaching.");
  DCONST_DVARBOOL_r_gpuCULimitAllowed = Dvar_RegisterBool("r_gpuCULimitAllowed", 0, 0x40004u, "Enable CU limit for VS/HS/DS.");
  DCONST_DVARINT_r_gpuDepthOnlyCULimit = Dvar_RegisterInt("r_gpuDepthOnlyCULimit", 4, 1, 8, 0x40004u, "CU limit on VS/HS/DS during depth only passes.");
  DVARINT_r_requiredCubemapSize = Dvar_RegisterInt("LQKKPSLSKL", 128, 1, 4096, 4u, "Required cubemap size.");
  DVARINT_r_reflectionProbeRenderTargetSize = Dvar_RegisterInt("LRPKORNQON", 1024, 1, 0x2000, 4u, "Reflection probe render target size.");
  DVARINT_r_reflectionProbeCompressionMaxMipLevels = Dvar_RegisterInt("NKPLSKPRPK", 8, 3, 16, 4u, "Reflection probe compression max mip levels.");
  DVARINT_r_tracerMaxMips = Dvar_RegisterInt("NSQQNSTTTQ", 2, 0, 15, 1u, "Tracer max mip count. Controls distance trace quality vs. performance.");
  DCONST_DVARINT_r_sceneResNative = Dvar_RegisterEnum("r_sceneResNative", r_sceneResNativeNames, 0, 0x40004u, "Render at native display res. Overrides dynamic scene resolution.");
  DVARBOOL_r_sceneResDynamic = Dvar_RegisterBool("NPPSOKOPLP", 1, 0, "Activate dynamic scene resolution");
  DVARINT_r_sceneRes = Dvar_RegisterInt("SOPRNKQTK", 0, 0, 15, 1u, "Dynamic scene resolution.");
  DCONST_DVARBOOL_r_fuzzSceneRes = Dvar_RegisterBool("r_fuzzSceneRes", 0, 0x40004u, "Randomly changes r_sceneRes each frame, to help identify rendering bugs.");
  DVARBOOL_r_autoSceneRes = Dvar_RegisterBool("NORTRORSRN", 0, 4u, "Enable automatic adjustment of r_sceneRes using frame statistics.");
  DVARINT_r_sceneResMin = Dvar_RegisterInt("LTTSMMPPKS", 0, 0, 15, 1u, "Minimum dynamic scene resolution setting.");
  DVARINT_r_sceneResMax = Dvar_RegisterInt("MSLLOSOLPO", 0, 0, 15, 1u, "Maximum dynamic scene resolution setting.");
  __asm
  {
    vmovss  xmm8, cs:__real@42c80000
    vmovss  xmm1, cs:__real@41855c29; value
  }
  DVARBOOL_r_sceneResSquareRatio = Dvar_RegisterBool("NOSNORMOSQ", 0, 4u, "Uses square ratio dynamic resolution steps.");
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_r_sceneResDynamicTarget = Dvar_RegisterFloat("RTOOKRTNO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Target frame time in ms for dynamic scene resolution.");
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  DVARFLT_r_sceneResLodScaleMax = Dvar_RegisterFloat("NLSORKMPKT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 1u, "LOD Scale multiplier at lowest sceneRes");
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  v200 = Dvar_RegisterFloat("NQSOKPOQOT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 1u, "Current LOD Scale multiplier");
  __asm { vmovss  xmm1, cs:__real@3f7c28f6; value }
  DVARFLT_r_sceneResLodScale = v200;
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_r_sceneResLodTemporal = Dvar_RegisterFloat("MQLOPKSOTR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 1u, "LOD Scale multiplier temporal blending factor");
  __asm { vmovss  xmm3, cs:__real@40800000; max }
  DCONST_DVARINT_r_sceneResLodScaleDelay = Dvar_RegisterInt("r_sceneResLodScaleDelay", 15, -1, 512, 0x40004u, "Delay in frames between possible LODScale changes. Use -1 to override automated system and use r_sceneResLodScale directly.");
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm14; value
  }
  v207 = Dvar_RegisterFloat("MKTMRSKPTS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 1u, "Current minimum screen contribution scale multiplier");
  __asm { vmovss  xmm3, cs:__real@40800000; max }
  DVARFLT_r_sceneResMinContributionScale = v207;
  __asm
  {
    vmovaps xmm2, xmm14; min
    vmovaps xmm1, xmm14; value
  }
  v211 = Dvar_RegisterFloat("LRPMOPMPO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 1u, "screen contribution scale multiplier at lowest sceneRes");
  __asm
  {
    vmovss  xmm0, cs:__real@3f7851ec
    vmovss  xmm2, cs:__real@3c23d70a; y
    vmovss  xmm1, cs:__real@3a83126f; x
  }
  DVARFLT_r_sceneResMinContributionScaleMax = v211;
  __asm
  {
    vmovss  [rsp+148h+max], xmm8
    vmovss  dword ptr [rsp+148h+description], xmm15
    vxorps  xmm3, xmm3, xmm3; z
    vmovss  [rsp+148h+flags], xmm0
  }
  v216 = Dvar_RegisterVec4("r_sceneResDynamicThreshold", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsu, descriptionu, maxu, 0x40004u, "Assorted thresholds for automatic resolution scaling.");
  __asm { vmovss  xmm1, cs:__real@3c75c28f; x }
  DCONST_DVARVEC4_r_sceneResDynamicThreshold = v216;
  __asm
  {
    vmovss  [rsp+148h+max], xmm8
    vmovss  dword ptr [rsp+148h+description], xmm15
    vxorps  xmm3, xmm3, xmm3; z
    vxorps  xmm2, xmm2, xmm2; y
    vmovss  [rsp+148h+flags], xmm15
  }
  DCONST_DVARVEC4_r_sceneResDynamicTune = Dvar_RegisterVec4("r_sceneResDynamicTune", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsv, descriptionv, maxv, 0x40004u, "Assorted tuning values for automatic resolution scaling.");
  DVARBOOL_r_frontendWaitWorkerCmdsOnlyOfType = Dvar_RegisterBool("RRNOPTNLL", 1, 0, "When enabled the renderer frontend on the main thread uses Sys_WaitWorkerCmdsOnlyOfType instead of Sys_WaitWorkerCmdsOfType to wait for outstanding worker commdands.");
  DVARBOOL_r_defaultBigMapFrontendWaitWorkerCmdsOnlyOfType = Dvar_RegisterBool("LSOMOKRRSK", 0, 0, "The default setting for the r_frontendWaitWorkerCmdsOnlyOfType dvar when in a big map.");
  DCONST_DVARBOOL_r_splitscreenVelocityRendering = Dvar_RegisterBool("r_splitscreenVelocityRendering", 1, 0x40004u, "Use Velocity Rendering features in splitscreen (mblur, smaa, etc).");
  DCONST_DVARBOOL_r_splitscreenSingleSunShadow = Dvar_RegisterBool("r_splitscreenSingleSunShadow", 1, 0x40004u, "Use just the near shadow cascade (disabling the far and distant cascades) but cover the far cascade.");
  __asm
  {
    vmovss  xmm3, cs:__real@461c4000; max
    vmovss  xmm1, cs:__real@432a0000; value
  }
  DCONST_DVARBOOL_r_splitscreenAUOUDisabled = Dvar_RegisterBool("r_splitscreenAUOUDisabled", 0, 0x40004u, "Disable the frame alternating of Umbra occlusion updates for splitscreen (forcing an update per-viewport each frame)");
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  v223 = Dvar_RegisterFloat("r_splitscreenAUOUForceUpdateOffsetThreshold", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Over this distance in a single per frame will force an occlusion update");
  __asm { vmovss  xmm1, cs:__real@3f7ae148; value }
  DCONST_DVARFLT_r_splitscreenAUOUForceUpdateOffsetThreshold = v223;
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v227 = Dvar_RegisterFloat("r_splitscreenAUOUForceUpdateDotThreshold", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Dot with prev axis under this value will force an occlusion update");
  __asm { vmovss  xmm1, cs:__real@3f7ff972; value }
  DCONST_DVARFLT_r_splitscreenAUOUForceUpdateDotThreshold = v227;
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v231 = Dvar_RegisterFloat("r_splitscreenAUOUScaleXDotThresholdMin", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Dot with prev axis under this value will begin ramping towards the r_splitscreenAUOUScaleXMax");
  __asm { vmovss  xmm1, cs:__real@3f7f7cee; value }
  DCONST_DVARFLT_r_splitscreenAUOUScaleXDotThresholdMin = v231;
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARFLT_r_splitscreenAUOUScaleXDotThresholdMax = Dvar_RegisterFloat("r_splitscreenAUOUScaleXDotThresholdMax", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Dot with prev axis under this value will clamp to r_splitscreenAUOUScaleXMax");
  __asm
  {
    vmovss  xmm8, cs:__real@3f666666
    vmovaps xmm1, xmm8; value
    vmovaps xmm3, xmm14; max
    vmovaps xmm2, xmm7; min
  }
  v239 = Dvar_RegisterFloat("r_splitscreenAUOUScaleXMin", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The Umbra projection X scale used when above r_splitscreenAUOUScaleXDotThresholdMin");
  __asm { vmovss  xmm1, cs:__real@3f400000; value }
  DCONST_DVARFLT_r_splitscreenAUOUScaleXMin = v239;
  __asm
  {
    vmovaps xmm3, xmm14; max
    vmovaps xmm2, xmm7; min
  }
  DCONST_DVARFLT_r_splitscreenAUOUScaleXMax = Dvar_RegisterFloat("r_splitscreenAUOUScaleXMax", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The Umbra projection X scale used when below r_splitscreenAUOUScaleXDotThresholdMax");
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm8; value
  }
  DCONST_DVARFLT_r_splitscreenAUOUScaleY = Dvar_RegisterFloat("r_splitscreenAUOUScaleY", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The Umbra projection Y scale");
  DCONST_DVARINT_r_mbRadialMargin = Dvar_RegisterInt("r_mbRadialMargin", 0, 0, 10, 0x40004u, "Safe margin for mbRadialPS in pixels");
  DVARBOOL_r_showReactiveMotionSModels = Dvar_RegisterBool("LSMKNMTLLN", 1, 0, "Toggle rendering of reactive motion static models.");
  DVARBOOL_r_reactiveMotionEffectorDebugDraw = Dvar_RegisterBool("MPNNROTONS", 0, 4u, "Enable debug drawing of effector spheres");
  DVARBOOL_r_reactiveMotionPivotDebugDraw = Dvar_RegisterBool("OKLOPQOOK", 0, 4u, "Enable debug drawing of reactive motoin pivots");
  DVARBOOL_r_reactiveMotionForceCpuCalc = Dvar_RegisterBool("MOLONLMRT", 0, 4u, "Force CPU parts calc over GPU");
  DVARBOOL_r_reactiveMotionClutter = Dvar_RegisterBool("MTMOPKMRLQ", 1, 4u, "Enable reactive motion for clutter");
  DVARBOOL_r_showSplinedSModels = Dvar_RegisterBool("MRTPTQNKQL", 1, 0, "Toggle rendering of splined static models.");
  DVARBOOL_r_vertexDeformForceCullSunShadows = Dvar_RegisterBool("NNNONTLLNN", 1, 4u, "Force models with vertex deformation to always cull in sun shadows");
  __asm { vmovss  xmm1, cs:__real@3c75c28f; value }
  DVARBOOL_r_vertexDeformForceCullSpotShadows = Dvar_RegisterBool("QMOROTSKT", 1, 4u, "Force models with vertex deformation to always cull in spot shadows");
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARFLT_r_sunShadowProjectedBoundsCullThreshold = Dvar_RegisterFloat("r_sunShadowProjectedBoundsCullThreshold", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Cull objects in far and distant sun shadow cascades if the approximated screen space projection is less than this fraction of the screen");
  __asm { vmovss  xmm12, cs:__real@44800000 }
  DVARBOOL_r_umbraExclusive = Dvar_RegisterBool("NSQOPNTOPL", 1, 0x44u, "Toggle Umbra for exclusive static culling (disables static portal dpvs)");
  __asm
  {
    vmovaps xmm3, xmm12; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm14; value
  }
  DVARFLT_r_specularColorScale = Dvar_RegisterFloat("NRQSSSNTSQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Set greater than 1 to brighten specular highlights");
  __asm
  {
    vmovaps xmm3, xmm12; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm14; value
  }
  DVARFLT_r_diffuseColorScale = Dvar_RegisterFloat("LNROSLQKON", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Globally scale the diffuse color of all point lights");
  DCONST_DVARBOOL_r_debugLodInfo = Dvar_RegisterBool("r_debugLodInfo", 0, 0x40004u, "When enabled, lod info is spammed to the logfile.");
  DVARBOOL_r_sortMaterials = Dvar_RegisterBool("NPSRPPPPTO", 0, 4u, "force material sorting.");
  __asm { vmovss  xmm0, cs:__real@45800000 }
  DVARINT_r_refImageDraw = Dvar_RegisterEnum("LRRPTTOPPO", r_refImageDrawNames, 0, 0x44u, "Draw Debug Reference Image.");
  __asm
  {
    vmovss  [rsp+148h+max], xmm0
    vmovss  xmm0, cs:__real@bf800000
    vmovss  dword ptr [rsp+148h+description], xmm0
    vmovaps xmm3, xmm0; z
    vxorps  xmm2, xmm2, xmm2; y
    vxorps  xmm1, xmm1, xmm1; x
    vmovss  [rsp+148h+flags], xmm0
  }
  v261 = Dvar_RegisterVec4("LOTLSMRPTP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsw, descriptionw, maxw, 0x44u, "Reference Image Bounds (x=left, y=top, z=width (negative=auto), w=height (negative=auto).");
  __asm
  {
    vmovss  xmm9, cs:__real@41a00000
    vmovss  xmm2, cs:__real@c1a00000; min
  }
  DVARVEC4_r_refImageBounds = v261;
  __asm
  {
    vmovaps xmm3, xmm9; max
    vxorps  xmm1, xmm1, xmm1; value
  }
  DVARFLT_r_refImageStopsAdjust = Dvar_RegisterFloat("NTLLNTRNTM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x44u, "djust ref-image color map intensity based on stops of lights.");
  DVARINT_r_refShaderRenderStage = Dvar_RegisterEnum("MRKPMLQRLK", r_refShaderStageNames, 0, 4u, "Draw Reference Testcard Shader.");
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm14; value
  }
  DCONST_DVARFLT_r_refShaderBackgroundAlpha = Dvar_RegisterFloat("r_refShaderBackgroundAlpha", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Alpha of ref shader background.");
  DCONST_DVARBOOL_r_refShaderDrawColorCube = Dvar_RegisterBool("r_refShaderDrawColorCube", 1, 0x40004u, "Draw color cube in ref shader.");
  DCONST_DVARBOOL_r_refShaderDrawGradient = Dvar_RegisterBool("r_refShaderDrawGradient", 1, 0x40004u, "Draw gradient in ref shader.");
  DCONST_DVARBOOL_r_refShaderDrawColorGradients = Dvar_RegisterBool("r_refShaderDrawColorGradients", 1, 0x40004u, "Draw color gradients in ref shader.");
  DCONST_DVARBOOL_r_refShaderDrawMinMaxSwatches = Dvar_RegisterBool("r_refShaderDrawMinMaxSwatches", 1, 0x40004u, "Draw min/max calibration swatches in ref shader.");
  DCONST_DVARBOOL_r_refShaderDrawLimitedRangeSwatches = Dvar_RegisterBool("r_refShaderDrawLimitedRangeSwatches", 1, 0x40004u, "Draw Rec.709 Limited Range swatches in ref shader.");
  DCONST_DVARBOOL_r_refShaderDrawColorChecker = Dvar_RegisterBool("r_refShaderDrawColorChecker", 1, 0x40004u, "Draw color checker in ref shader.");
  DCONST_DVARBOOL_r_refShaderDrawCieDiagram = Dvar_RegisterBool("r_refShaderDrawCieDiagram", 1, 0x40004u, "Draw CIE 1931 diagram in ref shader.");
  DVARINT_r_scopeBufferSizeDivisorX = Dvar_RegisterInt("MRMTONLNRL", 4, 1, 64, 1u, "scope buffer size divisor X");
  DVARINT_r_scopeBufferSizeDivisorY = Dvar_RegisterInt("QPQSLLTNS", 4, 1, 64, 1u, "scope buffer size divisor Y");
  DVARINT_r_scopeBufferSizeMin = Dvar_RegisterInt("LSNMSLSMP", 64, 32, 512, 1u, "scope buffer minimum size");
  __asm
  {
    vmovaps xmm3, xmm10; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm14; value
  }
  DVARFLT_r_precomputedSkyMultiplier = Dvar_RegisterFloat("LKMPRNTMOO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Precomputed sky multiplier");
  __asm
  {
    vmovaps xmm3, xmm10; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm14; value
  }
  DVARFLT_r_precomputedSunMultiplier = Dvar_RegisterFloat("OKRNQTRNOT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Precomputed sun multiplier");
  __asm
  {
    vmovss  xmm3, cs:__real@42800000; max
    vmovss  xmm1, cs:__real@41000000; value
  }
  DVARBOOL_r_ui_receive_postfx = Dvar_RegisterBool("NKRONMQOKP", 1, 4u, "Allow UI elements to receive postFX");
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  v278 = Dvar_RegisterFloat("MRPTLLLPRL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x44u, "enable corpse lightgrid hack. 0 = disabled. > 0 = enabled and also used as Z offset");
  __asm
  {
    vmovss  xmm3, cs:__real@43000000; max
    vmovss  xmm1, cs:__real@42200000; value
  }
  DVARFLT_r_corpse_lighting_hack = v278;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  DCONST_DVARFLT_r_character_lighting_hack = Dvar_RegisterFloat("r_character_lighting_hack", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "enable character lightgrid hack. 0 = disabled. > 0 = enabled and also used as Z offset");
  __asm
  {
    vmovaps xmm11, xmm6
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm14; value
  }
  DCONST_DVARFLT_r_scope_relief_hip_movement_scale = Dvar_RegisterFloat("r_scope_relief_hip_movement_scale", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "eye relief moment scale at hip");
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm7; value
  }
  DCONST_DVARFLT_r_scope_relief_hip_movement_clamp = Dvar_RegisterFloat("r_scope_relief_hip_movement_clamp", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "eye relief moment clamp at hip");
  DCONST_DVARINT_r_sunshadow_maxCacheRefreshPerFrame = Dvar_RegisterInt("r_sunshadow_maxCacheRefreshPerFrame", 3, 1, 1000, 0x40004u, "Maximum number of GfxCacheSunShadow to refresh per frame");
  DVARBOOL_r_sunshadow_preCacheEnabled = Dvar_RegisterBool("NPSSLTOOSN", 1, 0, "Enable pre caching of GfxCacheSunShadow tiles that will be overlapped imminently");
  __asm
  {
    vmovss  xmm1, cs:__real@3eaa7efa; value
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARFLT_r_sunshadow_preCacheThreshold = Dvar_RegisterFloat("r_sunshadow_preCacheThreshold", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Distance from edge of a non-overlapped GfxCacheSunShadow tile before pre caching will occur, in a % of cache tile size");
  DCONST_DVARBOOL_r_streamerUseGrayDefaultColor = Dvar_RegisterBool("r_streamerUseGrayDefaultColor", 0, 0x40004u, "Override streamer default checker image with gray color, and default nog.");
  DCONST_DVARBOOL_r_pureIRLightHack = Dvar_RegisterBool("r_pureIRLightHack", 0, 0x40004u, "Move all VFX light intensity to IR and set visible light intensity = 0 if it has ir light set in Comet.");
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  v295 = Dvar_RegisterFloat("r_thermalEmissivityDefault", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "0 = use albedo, 1 = use metalness");
  __asm
  {
    vmovss  xmm3, cs:__real@43000000; max
    vmovss  xmm1, cs:__real@428c0000; value
  }
  DCONST_DVARFLT_r_thermalEmissivityDefault = v295;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  v299 = Dvar_RegisterFloat("r_thermalFog", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Thermal fog radiation");
  __asm
  {
    vmovss  xmm13, cs:__real@3dcccccd
    vmovss  xmm1, cs:__real@3f4ccccd; value
  }
  DCONST_DVARFLT_r_thermalFog = v299;
  __asm
  {
    vmovaps xmm3, xmm14; max
    vmovaps xmm2, xmm13; min
  }
  v304 = Dvar_RegisterFloat("r_thermalEmissivity_Decal", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "average thermal emissivity for decal volume");
  __asm { vmovss  xmm3, cs:__real@4b189680; max }
  DCONST_DVARFLT_r_thermalEmissivity_Decal = v304;
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  v308 = Dvar_RegisterFloat("r_thermalPlayerFadeDistanceStart_tweak", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "DEV ONLY. When viewing other players through thermal optics, the distance at which players' temperature starts fading. Use this to iterate in-game, set final value in attachment GDT.");
  __asm { vmovss  xmm3, cs:__real@4b189680; max }
  DCONST_DVARFLT_r_thermalPlayerFadeDistanceStart_tweak = v308;
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  v312 = Dvar_RegisterFloat("r_thermalPlayerFadeDistanceEnd_tweak", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "DEV ONLY. When viewing other players through thermal optics, the distance at which players' temperature fully fades away. Use this to iterate in-game, set final value in attachment GDT.");
  __asm { vmovss  xmm1, cs:__real@3e800000; value }
  DCONST_DVARFLT_r_thermalPlayerFadeDistanceEnd_tweak = v312;
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARFLT_r_fogSubsamplingSensitivity = Dvar_RegisterFloat("r_fogSubsamplingSensitivity", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Sensitivity of fog subsampling.");
  DCONST_DVARINT_sm_spotShadowSampleCountMin = Dvar_RegisterInt("sm_spotShadowSampleCountMin", 3, 2, 16, 0x40004u, "spot shadow score sample count min");
  __asm
  {
    vmovss  xmm3, cs:__real@44960000; max
    vmovss  xmm1, cs:__real@42f00000; value
  }
  DCONST_DVARINT_sm_spotShadowSampleCountMax = Dvar_RegisterInt("sm_spotShadowSampleCountMax", 6, 2, 16, 0x40004u, "spot shadow score sample count max");
  __asm { vmovaps xmm2, xmm14; min }
  DCONST_DVARFLT_sm_spotShadowSampleDistance = Dvar_RegisterFloat("sm_spotShadowSampleDistance", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "spot shadow score sample distance");
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm13; value
  }
  DCONST_DVARFLT_sm_spotShadowSampleBegin = Dvar_RegisterFloat("sm_spotShadowSampleBegin", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "spot shadow score sample begin");
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm8; value
  }
  v325 = Dvar_RegisterFloat("sm_spotShadowSampleEnd", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "spot shadow score sample end");
  __asm
  {
    vmovss  xmm3, cs:__real@45800000; max
    vmovss  xmm1, cs:__real@43be0000; value
  }
  DCONST_DVARFLT_sm_spotShadowSampleEnd = v325;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  v329 = Dvar_RegisterFloat("sm_spotShadowSampleLargeLightThreshold0", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "light radius exceed sm_spotShadowSampleLargeLightThreshold0 need extra samples");
  __asm
  {
    vmovss  xmm3, cs:__real@45800000; max
    vmovss  xmm1, cs:__real@440c0000; value
  }
  DCONST_DVARFLT_sm_spotShadowSampleLargeLightThreshold0 = v329;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  DCONST_DVARFLT_sm_spotShadowSampleLargeLightThreshold1 = Dvar_RegisterFloat("sm_spotShadowSampleLargeLightThreshold1", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "light radius exceed sm_spotShadowSampleLargeLightThreshold1 need more extra samples");
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm13; value
  }
  v336 = Dvar_RegisterFloat("sm_spotShadowScore1Min", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "spot shadow score1 min");
  __asm
  {
    vmovss  xmm3, cs:__real@476a6000; max
    vmovss  xmm1, cs:__real@43b40000; value
  }
  DCONST_DVARFLT_sm_spotShadowScore1Min = v336;
  __asm { vmovaps xmm2, xmm14; min }
  v340 = Dvar_RegisterFloat("sm_spotShadowScore1ConstA", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "spot shadow distance score1 constantA");
  __asm
  {
    vmovss  xmm3, cs:__real@476a6000; max
    vmovss  xmm1, cs:__real@45610000; value
  }
  DCONST_DVARFLT_sm_spotShadowScore1ConstA = v340;
  __asm { vmovaps xmm2, xmm14; min }
  DCONST_DVARFLT_sm_spotShadowScore1ConstB = Dvar_RegisterFloat("sm_spotShadowScore1ConstB", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "spot shadow distance score1 constantB");
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  v347 = Dvar_RegisterFloat("sm_spotShadowScore2Min", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "spot shadow score2 min");
  __asm { vmovss  xmm3, cs:__real@46800000; max }
  DCONST_DVARFLT_sm_spotShadowScore2Min = v347;
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm10; value
  }
  DCONST_DVARFLT_sm_spotShadowScore2ConstA = Dvar_RegisterFloat("sm_spotShadowScore2ConstA", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "spot shadow score2 constantA");
  DCONST_DVARBOOL_r_lowResOverlays = Dvar_RegisterBool("r_lowResOverlays", 1, 0x40004u, "Render overlays at low resolution");
  DCONST_DVARBOOL_r_disableCompositeOverlays = Dvar_RegisterBool("r_disableCompositeOverlays", 0, 0x40004u, "disable overlays in composite shader");
  DCONST_DVARBOOL_r_spDirectionalDamageIndicatorsLowRes = Dvar_RegisterBool("r_spDirectionalDamageIndicatorsLowRes", 1, 0x40004u, "Render directional damage indicators at low resolution in SP. requires r_lowResOverlays");
  DCONST_DVARBOOL_r_mpDirectionalDamageIndicatorsLowRes = Dvar_RegisterBool("r_mpDirectionalDamageIndicatorsLowRes", 1, 0x40004u, "Render directional damage indicators at low resolution in MP. requires r_lowResoverlays");
  DCONST_DVARBOOL_r_compositePixelgrid = Dvar_RegisterBool("r_compositePixelgrid", 1, 0x40004u, "enables composite pixel grid elements");
  DCONST_DVARBOOL_r_disableCompositePixelgrid = Dvar_RegisterBool("r_disableCompositePixelgrid", 0, 0x40004u, "disable pixelgrid overlays in composite shader");
  DCONST_DVARBOOL_r_offscreenReticles = Dvar_RegisterBool("r_offscreenReticles", 1, 0x40004u, "render reticles flagged with ReceivePostFXComposite to offscreen buffer");
  DCONST_DVARBOOL_r_disableReticleComposite = Dvar_RegisterBool("r_disableReticleComposite", 0, 0x40004u, "Disables compositing of reticles in composite pass");
  DCONST_DVARBOOL_r_resummarizePrepass = Dvar_RegisterBool("r_resummarizePrepass", 0, 0x40004u, "Resummarize HiZ after prepass");
  DCONST_DVARBOOL_r_resummarizeSunCacheBSP = Dvar_RegisterBool("r_resummarizeSunCacheBSP", 0, 0x40004u, "Resummarize HiZ after sun cache bsp");
  DCONST_DVARBOOL_r_resummarizeSunCacheFinal = Dvar_RegisterBool("r_resummarizeSunCacheFinal", 0, 0x40004u, "Resummarize HiZ after sun cache final");
  DCONST_DVARBOOL_r_resummarizeSunCascadeBegin = Dvar_RegisterBool("r_resummarizeSunCascadeBegin", 0, 0x40004u, "Resummarize HiZ before sun cascades");
  DCONST_DVARBOOL_r_resummarizeSunCascadeEnd = Dvar_RegisterBool("r_resummarizeSunCascadeEnd", 0, 0x40004u, "Resummarize HiZ after sun cascades");
  DCONST_DVARBOOL_r_resummarizeSunCascadeCustom = Dvar_RegisterBool("r_resummarizeSunCascadeCustom", 0, 0x40004u, "Resummarize HiZ for sun cascades in a separate pass after all draws");
  DCONST_DVARBOOL_r_resolveSunCacheBSP = Dvar_RegisterBool("r_resolveSunCacheBSP", 1, 0x40004u, "Resolve depth after sun cache bsp");
  DCONST_DVARBOOL_r_resolveSunCacheFinal = Dvar_RegisterBool("r_resolveSunCacheFinal", 1, 0x40004u, "Resolve depth after sun cache final");
  DCONST_DVARBOOL_r_resolveSunCascade = Dvar_RegisterBool("r_resolveSunCascade", 1, 0x40004u, "Resolve depth after sun cascades");
  DCONST_DVARBOOL_r_resolveSunCascadeViewmodel = Dvar_RegisterBool("r_resolveSunCascadeViewmodel", 0, 0x40004u, "Resolve depth after sun cascade before viewmodel copy");
  DCONST_DVARBOOL_r_resolveSunCascadeCustom = Dvar_RegisterBool("r_resolveSunCascadeCustom", 0, 0x40004u, "Resolve depth for sun cascades in a separate pass after all draws");
  DCONST_DVARBOOL_sm_sunCascadeHtile = Dvar_RegisterBool("sm_sunCascadeHtile", 0, 0x40004u, "Enable htile for sun cascade depth");
  DCONST_DVARBOOL_sm_sunCascadeHtileUseCacheHiZ = Dvar_RegisterBool("sm_sunCascadeHtileUseCacheHiZ", 0, 0x40004u, "Copy HiZ from the cache");
  DCONST_DVARBOOL_sm_sunBspBlitCS = Dvar_RegisterBool("sm_sunBspBlitCS", 0, 0x40004u, "Blit sun bsp-to-final cache depth w/ cs");
  DCONST_DVARBOOL_sm_sunBlitCS = Dvar_RegisterBool("sm_sunBlitCS", 1, 0x40004u, "Blit sun cache to cascade w/ async cs");
  DCONST_DVARBOOL_sm_sunDepthCopy = Dvar_RegisterBool("sm_sunDepthCopy", 0, 0x40004u, "Create viewmodel cascade as a depth buffer");
  DCONST_DVARBOOL_sm_sunSafeCopy = Dvar_RegisterBool("sm_sunSafeCopy", 0, 0x40004u, "Fill untouched regions of depth copy for sanity");
  DCONST_DVARBOOL_sm_sunCompressedCopy = Dvar_RegisterBool("sm_sunCompressedCopy", 0, 0x40004u, "Use compressed depth blit to copy viewmodel cascade");
  DCONST_DVARBOOL_sm_sunvisPrepass = Dvar_RegisterBool("sm_sunvisPrepass", 1, 0x40004u, "Prepass cull deferred sunvis");
  __asm
  {
    vmovss  xmm8, cs:__real@7f7fffff
    vmovss  xmm1, cs:__real@447a0000; value
  }
  DCONST_DVARBOOL_sm_sunvisPrepassIndirect = Dvar_RegisterBool("sm_sunvisPrepassIndirect", 1, 0x40004u, "Use indirect dispatch for prepass-culled sunvis pass");
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARFLT_sm_sunvisPrepassGlobalTileRangeLimit = Dvar_RegisterFloat("sm_sunvisPrepassGlobalTileRangeLimit", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Depth range limit for a screen tile assigned to GLOBAL cascade");
  DCONST_DVARBOOL_r_spotBeforeSun = Dvar_RegisterBool("r_spotBeforeSun", 0, 0x40004u, "Draw spot shadows before sun shadows");
  __asm { vmovss  xmm3, cs:__real@48800000; max }
  DCONST_DVARINT_r_suppressLight = Dvar_RegisterInt("r_suppressLight", 0, 0, 0x2000, 0x40004u, "turn off a selected primary light");
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  DCONST_DVARFLT_sm_showOverlayDistance = Dvar_RegisterFloat("sm_showOverlayDistance", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "spot shadow overlay draw distance");
  DCONST_DVARBOOL_r_volumetricsA = Dvar_RegisterBool("r_volumetricsA", 1, 0x40004u, "Enable volumetric fog renderings.");
  DVARBOOL_r_scopedNVGFade = Dvar_RegisterBool("NLQNNKSRLP", 1, 0, "slowly power on/off scoped NVG");
  DVARBOOL_r_rtt_dirtycheck = Dvar_RegisterBool("OTRLKTPNR", 1, 0, "RTT drawlist dirty check");
  DVARINT_r_evictPrimaryLightActiveCache = Dvar_RegisterInt("LSTQROTOLP", 0, 0, 0x10000, 0, "Evict spot shadow active cache for selected light");
  DVARINT_r_evictPrimaryLightStaleCache = Dvar_RegisterInt("NTSSRTTPMS", 0, 0, 0x10000, 0, "Evict spot shadow stale cache for selected light");
  DVARINT_r_evictPrimaryLightCache = Dvar_RegisterInt("MKPPTNNORL", 0, 0, 0x10000, 0, "Evict spot shadow active & stale cache for selected light");
  DVARINT_r_forceSpotShadowUpdateBSP = Dvar_RegisterInt("PKTSLMMNL", 0, 0, 0x10000, 0, "force spot shadow update BSP");
  DVARINT_r_forceSpotShadowUpdateSModel = Dvar_RegisterInt("LKTNLSTTMM", 0, 0, 0x10000, 0, "force spot shadow update BSP");
  DCONST_DVARBOOL_sm_spotHTileMaskCache = Dvar_RegisterBool("sm_spotHTileMaskCache", 1, 0x40004u, "enable/disable masked cache");
  DCONST_DVARINT_sm_spotShadowOverlayTarget = Dvar_RegisterInt("sm_spotShadowOverlayTarget", 0, -2, 0x4000, 0x40004u, "0 = no filter, > 0 = only the selected light, -1 = all dyn shadowmaps, -2 = all static only shadowmaps");
  DVARBOOL_r_showXModelRemoteConsole = Dvar_RegisterBool("NTTOKPMPRT", 0, 0, "print out all xmodel info in remote console");
  __asm { vmovss  xmm1, cs:__real@3f4ccccd; value }
  DVARBOOL_r_casEnabled = Dvar_RegisterBool("NLKOPSOSOK", 0, 0, "Activates Contrast Adaptive Sharpening");
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_r_casStrength = Dvar_RegisterFloat("LTQLMSLNPQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Strength for Contrast Adaptive Sharpening");
  __asm { vmovss  xmm0, cs:__real@42c80000 }
  DCONST_DVARINT_r_lui_setImageFiltering = Dvar_RegisterInt("r_lui_setImageFiltering", 0, 0, 2, 0x40004u, "LUI setImageFIltering override, 0 = no override, 1 = force nearest, 2 = force linear");
  __asm
  {
    vmovss  [rsp+148h+max], xmm0
    vmovss  dword ptr [rsp+148h+description], xmm15
    vmovaps xmm3, xmm14; z
    vmovaps xmm2, xmm14; y
    vmovaps xmm1, xmm14; x
    vmovss  [rsp+148h+flags], xmm14
  }
  DCONST_DVARVEC4_r_wireframeColor = Dvar_RegisterVec4("r_wireframeColor", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsx, descriptionx, maxx, 0x40004u, "Color of wireframe lines.");
  v365 = Com_IsRunningTestmonkey() == 1;
  v366 = v365 << 6;
  if ( v365 )
    Dvar_SetBool_Internal(DVARBOOL_r_autoSceneRes, 0);
  __asm
  {
    vmovups xmm0, cs:__xmm@461c40004080000043fa00003dcccccd
    vmovss  xmm2, cs:__real@00800000; min
  }
  r_cinematic = Dvar_RegisterBool("MPOOTPQLL", 0, 0x40u, "Enable cinematic rendering mode (higher quality at reduced framerate).");
  __asm
  {
    vmovaps xmm3, xmm8; max
    vmovups xmmword ptr [rsp+148h+value], xmm0
  }
  r_zPlanes = Dvar_RegisterVec4("OMNONNMOTP", &value, *(float *)&_XMM2, *(float *)&_XMM3, 0x40u, "[viewmodel_znear, viewmodel_zfar, scene_znear, scene_zfar]");
  R_RegisterSunDvars();
  R_RegisterSSAODvars();
  R_RegisterSSRDvars();
  R_RegisterEyeSensorDvars();
  R_TG_RegisterDvars();
  __asm { vmovss  xmm3, cs:__real@4708b800; max }
  r_maxEmblemPaints = Dvar_RegisterInt("MKSLSOSQON", 8, 0, 78, 4u, "Max emblem composite jobs per frame");
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  v372 = Dvar_RegisterFloat("SKRQOPQQN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Max distance from camera beyond which debug strings will not draw. 0 for unlimited.");
  __asm { vmovss  xmm3, cs:__real@4708b800; max }
  r_maxDebugStringDistance = v372;
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  r_minDebugStringDistance = Dvar_RegisterFloat("MMRKRSQROP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Minimum distance from camera before debug strings will draw.");
  __asm
  {
    vmovaps xmm3, xmm11; max
    vmovaps xmm2, xmm14; min
    vmovaps xmm1, xmm14; value
  }
  r_debugTextScaling = Dvar_RegisterFloat("LNQTOTSQQT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Increases the debug text look-over scaling.");
  r_depthScanEffectEnable = Dvar_RegisterBool("LSORSSTOSK", 0, 0x40u, "Enable depth scan effect");
  __asm { vmovss  xmm13, cs:__real@461c4000 }
  r_depthScanOverlayEffect = Dvar_RegisterBool("LPQMKKOMNT", 0, 0x40u, "Enable depth scan full screen overlay");
  __asm
  {
    vmovaps xmm3, xmm13; max
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  r_depthScanDistance = Dvar_RegisterFloat("MLPTMNQLTN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40u, "The depth from the camera at which the depth scan area appears");
  __asm
  {
    vmovaps xmm3, xmm13; max
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  r_depthScanThickness = Dvar_RegisterFloat("MPNPLTKNQK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40u, "The thickness of the scan area");
  __asm
  {
    vmovaps xmm3, xmm13; max
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  r_depthScanOutlineThickness = Dvar_RegisterFloat("NKNPMMRQKO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40u, "The thickness of the scan outline");
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  r_depthScanOverlayStrength = Dvar_RegisterFloat("NTKMMLKST", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40u, "Controls blending of overlay on the scan area");
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  r_depthScanColor = Dvar_RegisterVec4("NQSKNTTTQN", &colorBlackBlank, *(float *)&_XMM2, *(float *)&_XMM3, 0x40u, "HDR color of the scan area. Increase for more bloom!");
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  r_depthScanOverlayColor = Dvar_RegisterVec4("NNLKQPQSSP", &colorBlackBlank, *(float *)&_XMM2, *(float *)&_XMM3, 0x40u, "LDR Color of screen space overlay pattern. Alpha controls strength.");
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  r_depthScanOutlineColor = Dvar_RegisterVec4("MNOOQSTKQN", &colorBlackBlank, *(float *)&_XMM2, *(float *)&_XMM3, 0x40u, "HDR color of the scan area outline. Increase for more bloom!");
  __asm
  {
    vmovaps xmm3, xmm10; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  r_depthScanScrollParams = Dvar_RegisterVec4("MOOMLTQTLL", &colorBlackBlank, *(float *)&_XMM2, *(float *)&_XMM3, 0x40u, "Depth scan overlay scrolling params: UV scroll vector, UV Scale");
  r_depthScanScopeStencil = Dvar_RegisterBool("NQRLRSQMRS", 0, 0x40u, "Use scope stenciling for depth scan post fx");
  __asm
  {
    vmovaps xmm3, xmm12; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm14; value
  }
  r_secondaryDiffuseScale = Dvar_RegisterFloat("MNPSTNRLMS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Scale factor for secondary diffuse reflection (dev only)");
  __asm
  {
    vmovaps xmm3, xmm12; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm14; value
    vmovss  xmm6, cs:__real@40800000
  }
  r_secondarySpecularScale = Dvar_RegisterFloat("MTLNTSOKQL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Scale factor for secondary specular reflection (dev only)");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm14; value
  }
  r_globalSecondarySelfVisScale = Dvar_RegisterFloat("MTSTOMNOL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Global scale for the self visibility for secondary lighting (debug shader only)");
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm14; value
  }
  v413 = Dvar_RegisterFloat("MLRKNQPRMN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Rim lighting lerp factor: 0=No Rim Lighting, 1=Full Rim Lighting (debug shader only)");
  __asm { vmovss  xmm3, cs:__real@40a00000; max }
  r_rimLightingLerp = v413;
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm7; value
  }
  v417 = Dvar_RegisterFloat("LRLSQPKNL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40u, "Gloss threshold for HQ secondary specular (in internal mip range)");
  __asm
  {
    vmovss  xmm3, cs:__real@40a00000; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm7; value
  }
  r_shaderLodSecondarySpecular = v417;
  r_shaderLodSecondarySpecularDurango = Dvar_RegisterFloat("LOSKLQNMQR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40u, "Gloss threshold for HQ secondary specular (in internal mip range)");
  __asm
  {
    vmovss  xmm2, cs:__real@ff7fffff; min
    vmovaps xmm3, xmm8; max
    vxorps  xmm1, xmm1, xmm1; value
  }
  r_ignore = Dvar_RegisterInt("MONSNMPSQK", 0, 0x80000000, 0x7FFFFFFF, 0, "used for debugging anything");
  r_ignoref = Dvar_RegisterFloat("MKQQOKLSTK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "used for debugging anything");
  __asm
  {
    vmovss  xmm3, cs:__real@3f7d70a4; max
    vmovss  xmm2, cs:__real@bf7d70a4; min
  }
  r_effectLightingAsync = Dvar_RegisterBool("NQKRTLNOMR", 1, 4u, "Do effect lighting on async compute");
  __asm { vxorps  xmm1, xmm1, xmm1; value }
  r_blacklevel = Dvar_RegisterFloat("LSNOMRTLRR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Black level (negative brightens output)");
  r_blacklevelDisable = Dvar_RegisterBool("MOQPKPQMP", 0, 4u, "Disable the r_blacklevel dvar, forcing it to 0.");
  r_texFilter = Dvar_RegisterEnum("NSPQOSROQP", r_texFilterNames, 3, 0, "Material texture filtering quality.");
  __asm
  {
    vmovss  xmm3, cs:__real@417fd70a; max
    vmovss  xmm2, cs:__real@c1800000; min
  }
  r_texFilterMipMode = Dvar_RegisterEnum("OLLKNMRRLO", r_texFilterMipModeNames, 2, 4u, "Allows disabling mipmaps on all material textures.");
  __asm { vxorps  xmm1, xmm1, xmm1; value }
  v430 = Dvar_RegisterFloat("NRQPOOTKSK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Change the mipmap bias for material textures.");
  __asm
  {
    vmovss  xmm2, cs:__real@38d1b717; min
    vmovss  xmm1, cs:__real@40400000; value
  }
  r_texFilterMipBias = v430;
  __asm { vmovaps xmm3, xmm9; max }
  r_nearPlaneFadeDistance = Dvar_RegisterFloat("MQTLLRKRSR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Distance of near plane fade.");
  *(double *)&_XMM0 = R_GetTrilinearWindow(0xCu);
  __asm { vmovaps xmm8, xmm0 }
  if ( R_FindTrilinearWindowID(*(float *)&_XMM0) != 12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dvars.cpp", 2930, ASSERT_TYPE_ASSERT, "(R_FindTrilinearWindowID( defaultTrilinearWindow ) == GFX_TRILINEAR_WINDOW_DEFAULT)", (const char *)&queryFormat, "R_FindTrilinearWindowID( defaultTrilinearWindow ) == GFX_TRILINEAR_WINDOW_DEFAULT") )
    __debugbreak();
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm8; value
  }
  r_texFilterTrilinearWindow = Dvar_RegisterFloat("MOPTOMPOSR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Window over which trilinear filtering blends between mips.  A value of 1.0 is a linear blend, and a value of 0 is the minimal blend.  Smaller values are more efficient but result in a sharper transition between mip levels.");
  *(double *)&_XMM0 = R_GetAnisoWindow(6u);
  __asm { vmovaps xmm8, xmm0 }
  if ( R_FindAnisoWindowID(*(float *)&_XMM0) != 6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dvars.cpp", 2935, ASSERT_TYPE_ASSERT, "(R_FindAnisoWindowID( defaultAnisoWindow ) == GFX_ANISO_WINDOW_DEFAULT)", (const char *)&queryFormat, "R_FindAnisoWindowID( defaultAnisoWindow ) == GFX_ANISO_WINDOW_DEFAULT") )
    __debugbreak();
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm8; value
    vmovss  xmm11, cs:__real@40000000
  }
  r_texFilterAnisoWindow = Dvar_RegisterFloat("SSTQKMQN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Window over how aniso ratios are clamped to integer values between mips.  A value of 1.0 is a clamp-to-ceiling, and a value of 0 is clamp-to-floor.  Smaller values are more efficient but result in lower quality filtering between mip levels.");
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  r_texFilterAnisoBias = Dvar_RegisterFloat("QTQTLPRTK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Bias used when computing anisotropy ratio.  Higher values are more efficient at the expense of filtering quality.");
  r_fullbright = Dvar_RegisterBool("MTROSKKNSL", 0, 4u, "Toggles rendering without lighting");
  r_debugShaderMaterial = Dvar_RegisterEnum("OLMOKRLMNT", debugShaderMaterialNames, 0, 0x44u, "Enable shader material debug views");
  r_debugShaderLighting = Dvar_RegisterEnum("NOOTNOKSQM", debugShaderLightingNames, 0, 0x44u, "Enable shader lighting debug views");
  r_debugShaderTexture = Dvar_RegisterEnum("TQOQQPTTL", debugShaderTextureNames, 0, 0x44u, "Enable shader texture debug views");
  __asm
  {
    vmovss  xmm14, cs:__real@42000000
    vmovss  xmm3, cs:__real@42800000; max
  }
  r_debugShaderPerf = Dvar_RegisterEnum("MQMQQTSTNN", debugShaderPerfNames, 0, 0x44u, "Enable shader performance debug views");
  __asm
  {
    vmovaps xmm2, xmm6; min
    vmovaps xmm1, xmm14; value
    vmovss  xmm8, cs:__real@3f800000
  }
  r_debugShaderOptimumTexelDensity = Dvar_RegisterFloat("OMSKKSTSTL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Set optimum texel density (texel/inch) for Texel Density Debug Shader.");
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm8; value
    vmovss  xmm6, cs:__real@437f0000
  }
  r_debugShaderBlend = Dvar_RegisterFloat("QPMRLPMQL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Set shader debug view blend ratio.");
  __asm
  {
    vmovss  xmm0, cs:__real@bf800000
    vmovss  dword ptr [rsp+148h+description], xmm6
    vmovaps xmm3, xmm6; z
    vmovaps xmm2, xmm6; y
    vmovaps xmm1, xmm6; x
    vmovss  [rsp+148h+flags], xmm0
    vmovss  xmm0, cs:__real@bf800000
  }
  r_debugShaderDiffuseColor = Dvar_RegisterVec3("MSMLONNMTP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsy, descriptiony, 4u, "Debug shader diffuse override color");
  __asm
  {
    vmovss  dword ptr [rsp+148h+description], xmm6
    vmovaps xmm3, xmm6; z
    vmovaps xmm2, xmm6; y
    vmovaps xmm1, xmm6; x
    vmovss  [rsp+148h+flags], xmm0
  }
  v464 = Dvar_RegisterVec3("MSPTSONRNK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsz, descriptionz, 4u, "Debug shader specular override color");
  __asm { vmovss  xmm2, cs:__real@bf800000; min }
  r_debugShaderSpecularColor = v464;
  __asm
  {
    vmovaps xmm3, xmm6; max
    vmovaps xmm1, xmm6; value
    vmovss  xmm0, cs:__real@bf800000
  }
  r_debugShaderGloss = Dvar_RegisterFloat("ROLTQTPKK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Debug shader gloss override value");
  __asm
  {
    vmovss  [rsp+148h+max], xmm8
    vmovss  dword ptr [rsp+148h+description], xmm0
    vmovaps xmm3, xmm0; z
    vmovaps xmm2, xmm0; y
    vmovaps xmm1, xmm0; x
    vmovss  [rsp+148h+flags], xmm0
  }
  r_debugShaderDNSGValues = Dvar_RegisterVec4("OKQPMSQOPS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsba, descriptionba, maxy, 4u, "Debug shader combined diffuse, normal, spec, gloss value.");
  r_debugShaderLightAttMode = Dvar_RegisterInt("MQMQRKQLQK", 1, 0, 2, 4u, "Debug shader light attenuation mode : 0 - S1 1 - IW7 2 - PBR");
  r_debugShaderMetalnessMode = Dvar_RegisterInt("NONLOTLOLN", 1, 0, 2, 4u, "Debug shader metalness PBR mode : 0 - OFF  1 - ON  2 - Show FusedAlebdoAndSpec and Metallicity");
  __asm { vmovss  xmm3, cs:__real@40800000; max }
  r_debugShaderCullMode = Dvar_RegisterInt("PROQOPLNR", 1, 0, 1, 4u, "Debug shader render primitive cull mode. Switches culling visualization : 0 - coarse 1 - fine");
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm7; value
  }
  r_debugShaderGlossCurve = Dvar_RegisterFloat("LKQPMKPQNL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "GGX Max Spec");
  __asm
  {
    vmovss  xmm3, cs:__real@3e800000; max
    vmovss  xmm1, cs:__real@3a83126f; value
  }
  r_debugShaderBentC = Dvar_RegisterBool("MQQNROLTLS", 1, 4u, "Use Bent Cones");
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  r_debugShaderBentCLightAngRadiiOff = Dvar_RegisterFloat("MKPKKPMTQK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Bent Cones : Area Light angular radius offset");
  __asm
  {
    vmovss  xmm0, cs:__real@3f4ccccd
    vmovss  xmm3, cs:__real@3f19999a; z
    vmovss  xmm2, cs:__real@3ecccccd; y
    vmovss  xmm1, cs:__real@3e4ccccd; x
  }
  r_debugShaderReflectionPassthrough = Dvar_RegisterBool("NMPMLOTTQP", 0, 4u, "Use view direction instead of reflection direction for reflection probe reflections");
  __asm
  {
    vmovss  [rsp+148h+max], xmm8
    vmovss  dword ptr [rsp+148h+description], xmm15
    vmovss  [rsp+148h+flags], xmm0
  }
  v482 = Dvar_RegisterVec4("TQQOKLKOK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsbb, descriptionbb, maxz, 4u, "Thresholds for glossiness bands display.");
  __asm
  {
    vmovss  xmm0, cs:__real@44bb8000
    vmovss  xmm3, cs:__real@42c80000; z
    vmovss  xmm2, cs:__real@42be0000; y
  }
  r_debugShaderGlossinessBandsValues = v482;
  __asm
  {
    vmovss  [rsp+148h+max], xmm0
    vmovss  xmm0, cs:__real@447a0000
    vmovss  dword ptr [rsp+148h+description], xmm15
    vmovaps xmm1, xmm14; x
    vmovss  [rsp+148h+flags], xmm0
  }
  r_debugShaderTemperatureBandsValues = Dvar_RegisterVec4("SPNPMPPRO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsbc, descriptionbc, maxba, 4u, "Thresholds for temperature bands display.");
  __asm
  {
    vmovss  xmm0, cs:__real@42800000
    vmovss  xmm1, cs:__real@3eb4fdf4; x
  }
  r_debugShaderFocus = Dvar_RegisterInt("LMOPMPNNSO", 0, 0, 6532, 4u, "Focus index for F+ debug.");
  __asm
  {
    vmovss  dword ptr [rsp+148h+description], xmm0
    vmovaps xmm3, xmm11; z
    vmovaps xmm2, xmm7; y
    vmovss  [rsp+148h+flags], xmm15
  }
  r_debugShaderLightmapDensity = Dvar_RegisterVec3("MMNNKNTOKQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsbd, descriptionbd, 4u, "Set optimum lightmap density (texel/inch) for LMap Density Debug Shader + minimum and maximum factors.");
  __asm
  {
    vmovaps xmm3, xmm9; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm8; value
    vmovss  [rsp+148h+flags], xmm8
  }
  r_debugShaderYUVPackingMipMapOffset = Dvar_RegisterFloat("NSOOKSMMSQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsbe, 4u, "Lower resolution channel (CrCb/UV) mipmap offset for YUV packing.");
  __asm
  {
    vmovss  [rsp+148h+flags], xmm8
    vmovaps xmm3, xmm9; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm8; value
  }
  r_debugShaderNOGPackingMipMapOffset = Dvar_RegisterFloat("OMPKRNQSLK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsbf, 4u, "Lower resolution channel (occlusion) mipmap offset for NOG packing.");
  __asm
  {
    vmovss  [rsp+148h+max], xmm8
    vmovss  dword ptr [rsp+148h+description], xmm15
    vxorps  xmm3, xmm3, xmm3; z
    vxorps  xmm2, xmm2, xmm2; y
    vxorps  xmm1, xmm1, xmm1; x
    vmovss  [rsp+148h+flags], xmm15
  }
  r_debugShaderTweaks = Dvar_RegisterVec4("LQSRNRQPRT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsbg, descriptionbe, maxbb, 4u, "Debug shader multi-purpose value tweak for development.");
  r_debugGPUPipeline = Dvar_RegisterEnum("LLLKNOMPSL", debugGPUPipelineNames, 0, 0x44u, "GPU / instancing pipeline - debug modes");
  r_debugShaderDiffuseBRDF = Dvar_RegisterEnum("NSPQQRPLOO", debugShaderDiffuseBRDFNames, 0, 4u, "Debug shader diffuse BRDF");
  r_debugShaderSpecularBRDF = Dvar_RegisterEnum("MLKTOMQKSL", debugShaderSpecularBRDFNames, 0, 4u, "Debug shader specular BRDF");
  r_debugShaderGGXGeom = Dvar_RegisterEnum("NTQLOQOS", debugShaderGGXGeomNames, 0, 4u, "Debug shader GGX geometry (shadow/masking) term");
  r_debugTextureOverlay = Dvar_RegisterEnum("NPPKKMQOMO", debugTextureOverlayNames, 0, 4u, "Debug Texture Overlay");
  __asm
  {
    vmovss  [rsp+148h+max], xmm8
    vmovss  dword ptr [rsp+148h+description], xmm15
    vmovaps xmm3, xmm8; z
    vxorps  xmm2, xmm2, xmm2; y
    vxorps  xmm1, xmm1, xmm1; x
    vmovss  [rsp+148h+flags], xmm8
    vmovss  xmm0, cs:__real@3dcccccd
  }
  r_debugTextureOverlayRect = Dvar_RegisterVec4("LMSTTKORSK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsbh, descriptionbf, maxbc, 4u, "Debug Texture Overlay Window");
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm8; value
    vmovss  [rsp+148h+flags], xmm0
  }
  r_debugTextureOverlayBlend = Dvar_RegisterFloat("LPQOQOTMOL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsbi, 4u, "Debug Texture Overlay Opacity");
  r_debugTextureOverlayMip = Dvar_RegisterInt("MKKNRSRMRM", 0, 0, 16, 4u, "Debug Texture Overlay Mip Level");
  r_debugAssetCost = Dvar_RegisterEnum("MOMTKOPROM", r_debugAssetCostNames, 0, 0x44u, "Draw Asset Costs.");
  r_debugUav = Dvar_RegisterBool("NSNPSLNLLP", 0, 0, "For local debugging. See cs_debug_uav.hlsl for more info.");
  r_debugOverdrawOverlay = Dvar_RegisterBool("OKRQPTQNPN", 0, 4u, "Enables shader to visualize overdraw");
  r_identifyOldMaterial = Dvar_RegisterBool("LRKPOKNKRM", 1, 4u, "Materials flagged as old show up in color pink");
  __asm
  {
    vmovaps xmm3, xmm12; max
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  r_oldMaterialEmissive = Dvar_RegisterFloat("PRLKTLTQN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Pink Emissive intensity for old materials.");
  __asm
  {
    vmovaps xmm3, xmm11; max
    vmovaps xmm2, xmm7; min
    vmovaps xmm1, xmm8; value
  }
  v514 = Dvar_RegisterFloat("MPLORMMQPT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Scale the level of detail distance for all XModels (larger reduces detail)");
  __asm { vmovss  xmm2, cs:__real@c47a0000; min }
  r_lodScale = v514;
  __asm
  {
    vxorps  xmm3, xmm3, xmm3; max
    vxorps  xmm1, xmm1, xmm1; value
  }
  r_lodBias = Dvar_RegisterFloat("QLQPPSRK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Bias the level of detail distance for all XModels (negative increases detail)");
  __asm { vmovss  xmm6, cs:__real@459c4000 }
  r_lodOutStaticRamp = Dvar_RegisterBool("LMSLOSMKTT", 0, 4u, "Allow 'r_lodScale' and 'r_lodBias' to effect the LOD-out distance of static XModels, not just LOD switches.");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  r_skinnedLodBias = Dvar_RegisterFloat("NSPMTTPLRO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 3u, "Bias the level of detail distance for skinned models only");
  __asm
  {
    vmovss  xmm12, cs:__real@43fa0000
    vmovaps xmm1, xmm12; value
    vmovaps xmm3, xmm13; max
    vmovaps xmm2, xmm8; min
    vmovss  xmm9, cs:__real@437a0000
  }
  r_skinnedLodBiasStep = Dvar_RegisterFloat("LKSPMSTKMK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "LOD bias distance to add with each frame we're over the skinned cache threshold");
  __asm
  {
    vmovaps xmm3, xmm13; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm9; value
  }
  r_skinnedLodBiasDecay = Dvar_RegisterFloat("LMKPKOTROK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Rate, in units per seconds, at which the bias decays");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  v533 = Dvar_RegisterFloat("MSSKROSOKP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 3u, "Bias the level of detail distance for skinned subdiv models only");
  __asm { vmovss  xmm1, cs:__real@447a0000; value }
  r_skinnedSubdivLodBias = v533;
  __asm
  {
    vmovaps xmm3, xmm13; max
    vmovaps xmm2, xmm8; min
  }
  v537 = Dvar_RegisterFloat("NRQLTOMPLT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "LOD bias distance to add with each frame we're over the skinned subdiv cache threshold");
  __asm { vmovss  xmm1, cs:__real@42c80000; value }
  r_skinnedSubdivLodBiasStep = v537;
  __asm
  {
    vmovaps xmm3, xmm13; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v541 = Dvar_RegisterFloat("OLMNOPRRL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Rate, in units per seconds, at which the bias decays");
  __asm
  {
    vmovss  xmm3, cs:__real@3d4ccccd; min
    vmovss  xmm2, cs:__real@3f1eb852; y
    vmovss  xmm1, cs:__real@3f4ccccd; x
  }
  r_skinnedSubdivLodBiasDecay = v541;
  __asm { vmovss  [rsp+148h+flags], xmm8 }
  r_skinnedSubdivLODThreshold = Dvar_RegisterVec2("NLQLSQRNNL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsbj, 0, "Threshold at which we start reducing LOD's of dynamic/entity models with subdiv");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  v548 = Dvar_RegisterFloat("MTPPMPMTQP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 3u, "Bias the level of detail distance for dynamic/entity models only");
  __asm { vmovss  xmm1, cs:__real@44960000; value }
  r_sceneSurfsLodBias = v548;
  __asm
  {
    vmovaps xmm3, xmm13; max
    vmovaps xmm2, xmm8; min
  }
  r_sceneSurfsLodBiasStep = Dvar_RegisterFloat("RQLSPRTTL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "LOD bias distance to add with each frame we're over the scene surfs threshold");
  __asm
  {
    vmovaps xmm3, xmm13; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm9; value
  }
  r_sceneSurfsLodBiasDecay = Dvar_RegisterFloat("MKPPTQMNQN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Rate, in units per seconds, at which the bias decays");
  __asm
  {
    vmovss  xmm3, cs:__real@3d4ccccd; min
    vmovss  xmm2, cs:__real@3f4ccccd; y
    vmovss  xmm1, cs:__real@3f6b851f; x
    vmovss  [rsp+148h+flags], xmm8
  }
  r_sceneSurfsLODThreshold = Dvar_RegisterVec2("MLOROPNTP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsbk, 0, "Threshold at which we start reducing LOD's of dynamic/entity models");
  DefaultRenderMemMode = R_GetDefaultRenderMemMode();
  r_renderMemMode = Dvar_RegisterEnum("PKNSROLQK", r_renderMemModeNames, DefaultRenderMemMode, 0, "Simulate the texture streaming behavior of other platforms");
  r_subdiv = Dvar_RegisterBool("LMRSLTQLKN", 1, 0, "Enables Catmull Clark surface subdivision.");
  r_subdivLimit = Dvar_RegisterInt("MLKRKRSQQM", 3, 0, 8, 0, "Set the maximum Catmull Clark subdivision level.");
  __asm
  {
    vmovss  xmm2, cs:__real@3c23d70a; min
    vmovss  xmm1, cs:__real@3fc00000; value
  }
  r_adaptiveSubdiv = Dvar_RegisterEnum("LPNRKRNNQP", adaptiveSubdivNames, 1, 0, "Enables screen space Catmull Clark adaptive tessellation.  If disabled, models tessellate to their designed subdivision level.");
  __asm { vmovaps xmm3, xmm10; max }
  v562 = Dvar_RegisterFloat("MTQTSPMTOP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40u, "Screen space Catmull Clark adaptive tessellation factor for the base model.  Smaller values mean more tessellation.");
  __asm
  {
    vmovss  xmm2, cs:__real@3a83126f; min
    vmovss  xmm1, cs:__real@3f000000; value
  }
  r_adaptiveSubdivBaseFactor = v562;
  __asm
  {
    vmovaps xmm3, xmm11; max
    vmovss  xmm7, cs:__real@7f7fffff
  }
  r_adaptiveSubdivPatchFactor = Dvar_RegisterFloat("QMSKSNLNK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Screen space Catmull Clark adaptive tessellation factor for individual patches.  Smaller values mean more tessellation.");
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  r_zfar = Dvar_RegisterFloat("MNKLKSPRT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Change the distance at which culling fog reaches 100% opacity; 0 is off");
  __asm { vmovss  xmm2, cs:__real@c0800000; min }
  r_fog = Dvar_RegisterBool("LTOKRMRTMM", 1, 0x44u, "Set to 0 to disable fog");
  __asm
  {
    vxorps  xmm3, xmm3, xmm3; max
    vmovss  xmm1, cs:__real@bf800000; value
  }
  r_polygonOffsetScale = Dvar_RegisterFloat("MRSPSKSNKL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Offset scale for decal polygons; bigger values z-fight less but poke through walls more");
  __asm { vmovss  xmm3, cs:__real@46000000; max }
  r_polygonOffsetBias = Dvar_RegisterInt("NQSTMPNSRM", -1, -4096, 0, 0, "Offset bias for decal polygons; bigger values z-fight less but poke through walls more");
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  r_polygonOffsetClamp = Dvar_RegisterFloat("MLPNTNOSQM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Offset clamp for decal polygons; bigger values z-fight less but poke through walls more");
  r_artUseTweaks = Dvar_RegisterBool("MRKLKLNQKN", 0, 0x44u, "Tells the game that art tweaks is enabled and script is in control (as opposed to ColorEd).");
  r_lightGridDrawDebugVolumes = Dvar_RegisterBool("MPTORROPSS", 0, 4u, "Draw lightgrid bounding volumes");
  r_lightGridDebugPosLocked = Dvar_RegisterBool("NLOLPSPLKT", 0, 0, "Lock light grid debug position");
  __asm { vmovss  xmm1, cs:__real@3f666666; value }
  r_useCameraPositionForViewModelLightGridSampling = Dvar_RegisterBool("LQSQRPPNQR", 1, 0, "Use camera position to sample lightgrid for viewmodel");
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  r_lightGridTempSmoothingFactor = Dvar_RegisterFloat("NLOTLQMORR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40u, "Temporal smoothing factor for lightgrid sampling (0 = disable temporal smoothing)");
  r_fallbackProbeDebug = Dvar_RegisterBool("NMOOTRKLKR", 0, 4u, "Set fallback probe data to be red.");
  __asm
  {
    vmovss  xmm0, cs:__real@48000000
    vmovss  xmm15, cs:__real@c8000000
  }
  r_fallbackProbeUseCustomSample = Dvar_RegisterBool("NTSQPNPMOO", 0, 4u, "Enable/disable fallback probe custom sample\n");
  __asm
  {
    vmovss  dword ptr [rsp+148h+description], xmm0
    vmovaps xmm3, xmm0; z
    vmovaps xmm2, xmm0; y
    vmovaps xmm1, xmm0; x
    vmovss  [rsp+148h+flags], xmm15
  }
  r_fallbackProbeSamplePos = Dvar_RegisterVec3("LRSMQMLQNQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsbl, descriptionbg, 4u, "Fallback probe sample location.\n");
  __asm
  {
    vmovss  xmm3, cs:__real@3e800000; max
    vmovss  xmm1, cs:__real@3dcccccd; value
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm6, xmm6, xmm6
  }
  v588 = Dvar_RegisterFloat("NPOMMSROSL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Safezone for sampling lightgrid volumes");
  __asm { vmovss  xmm2, cs:__real@ff7fffff; min }
  r_lgvSamplingSafeZone = v588;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vmovss  dword ptr [rsp+148h+var_F8], xmm6
    vmovss  dword ptr [rsp+148h+var_F8+4], xmm6
    vmovss  dword ptr [rsp+148h+var_F8+8], xmm6
  }
  r_lgvViewModelSamplingOffset = Dvar_RegisterVec3("MKNOSRKSKL", &v1541, *(float *)&_XMM2, *(float *)&_XMM3, 0x44u, "Sampling offset for view model.");
  r_lgvEvalMode = Dvar_RegisterEnum("NLROTMNPKO", lgvEvalModeNames, 0, 4u, "LGV Evaluation mode");
  r_lgvMaxProbes = Dvar_RegisterInt("LTMMNRMOPM", 0, 0, 4096, 0x40u, "Max LGV probes per dynamic model (0 = disable using a max)");
  r_lgvDrawVolumes = Dvar_RegisterEnum("NPKKSKNOSQ", lgvDrawVolumesModeNames, 0, 4u, "Draw LGV volume around objects");
  r_lgvDrawProbes = Dvar_RegisterEnum("NLLTRMLMKO", lgvDrawProbesModeNames, 0, 4u, "Draw LGV probes");
  r_lgvDebugOverlay = Dvar_RegisterBool("QNOOONMRO", 0, 4u, "Show LGV Debug Overlay (Stats)");
  r_lgvDebugSmodelId = Dvar_RegisterInt("MSQSSSLLQP", 0, 0, 0x200000, 4u, "Draw LGV volume and probes for a specific static models (0: all)");
  r_lgvDebugEnt = Dvar_RegisterInt("MLMNOSMSPT", -1, -1, 0x2000, 4u, "Draw LGV volume and probes for a specific entity");
  r_lgvDumpXModels = Dvar_RegisterInt("SPRNTNKT", 0, 0, 16, 4u, "Dump XModels with minimum specified dimension.");
  __asm { vmovss  xmm3, cs:__real@44800000; max }
  r_lgvForceUseEntityBounds = Dvar_RegisterBool("MMQKLRPNSL", 0, 4u, "Force scene ent to use entity bounds");
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  r_lgvForceXModelDensity = Dvar_RegisterFloat("MNMQSKLNQN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Force XModel LGV Density");
  r_lgvForceExplodeModels = Dvar_RegisterBool("LNSQSMQNON", 0, 4u, "Force scene entity to allocate one volume per model");
  r_lgvDebugEvalFreq = Dvar_RegisterEnum("LOQKRRSMPO", lgvEvalFreqNames, 0, 4u, "LGV evaluation frequency (affects debug rendering only!)");
  r_lgvDebugBasisType = Dvar_RegisterEnum("LPLRTMPLLK", lgvBasisTypeNames, 0, 4u, "LGV basis type (affects debug rendering only!)");
  __asm
  {
    vmovss  xmm3, cs:__real@42800000; max
    vmovss  xmm1, cs:__real@41000000; value
  }
  r_lgvDebugOcclusionMode = Dvar_RegisterEnum("MPKSSMQMQQ", lgvOcclusionModeNames, 0, 4u, "LGV Occlusion calculation mode (affects debug rendering only!)");
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  v597 = Dvar_RegisterFloat("TQNTKSLSN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Push off amount for thin objects, like doors when sampling lightgrid");
  __asm
  {
    vmovss  xmm2, cs:__real@3dcccccd; min
    vmovss  xmm1, cs:__real@3e800000; value
  }
  r_lgvThinOverridePushOff = v597;
  __asm { vmovaps xmm3, xmm8; max }
  r_lgvThinOverrideShrink = Dvar_RegisterFloat("NQKNPNTRMN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Shrinks LGV Volume around a thin object, so you don't have as much bleeding of lighting");
  r_lgvThinOverrideStable = Dvar_RegisterInt("NKKOQNKOPP", -1, -1, 1, 4u, "-1 means use the defaults, 0 means force to animate with camera and 1 means force stable and not animate");
  r_lgvThinOverride = Dvar_RegisterBool("OMQMNPMRQM", 0, 4u, "Toggles r_lgvThinOverride PushOff, Shrink and Stable");
  r_lgvThinDisable = Dvar_RegisterBool("NNKKTSSOOM", 0, 4u, "Disables all thing modifiers");
  __asm { vmovss  xmm2, cs:__real@ff7fffff; min }
  r_lgvBoostWidth = Dvar_RegisterInt("LSSSKMRMSM", -1, -1, 1, 4u, "Boosts width of dynamic models, second smallest dimension, -1 uses model settings, 0/1 globally turn off/on");
  __asm
  {
    vmovaps xmm3, xmm7; max
    vmovss  dword ptr [rsp+148h+var_F8], xmm6
    vmovss  dword ptr [rsp+148h+var_F8+4], xmm6
    vmovss  dword ptr [rsp+148h+var_F8+8], xmm6
  }
  v603 = Dvar_RegisterVec3("NLSOSLSORR", &v1541, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Sampling offset of entity num specified in r_lgvDebugEnt");
  __asm
  {
    vmovss  xmm7, cs:__real@41200000
    vmovss  xmm3, cs:__real@447a0000; max
  }
  r_lgvDebugEntSamplingOffset = v603;
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm7; value
  }
  r_gpuCopyPerFrameBudgetMB = Dvar_RegisterFloat("PLLNLOTON", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Amount of data that can be copied per-frame by the GPU copier (in MB, can be fractional)");
  r_gpuCopyPerFrameCommandsBudget = Dvar_RegisterInt("LQNTQSSNSS", 400, 1, 1000000, 4u, "Number of commands that can be processed per-frame by the GPU copier");
  r_dlsDebugLight = Dvar_RegisterEnum("NNOMNQKLQO", dlsDebugLightNames, 0, 4u, "Debug lights for dynamic lightset");
  __asm
  {
    vmovaps xmm3, xmm7; max
    vmovaps xmm2, xmm8; min
    vmovaps xmm1, xmm8; value
  }
  r_dlsDebugIntensity = Dvar_RegisterFloat("MOPMOSRKQP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Intensity when lightset are over-ridden");
  r_dlsDebugMode = Dvar_RegisterEnum("MSQLNPRML", dlsDebugModeNames, 2, 4u, "Debug modes for dynamic lightset");
  r_dlsDebugVisualize = Dvar_RegisterBool("QKOTOPPSS", 0, 4u, "Visualize each of the dynamic lightset basis functions");
  r_dlsDebugLightsetRender = Dvar_RegisterInt("LSQTRMMTOK", -1, -1, 256, 4u, "Visualize the non-zero primary lights for a dynamic lightset basis function");
  r_dlsDebugDisableTemporalSmoothingPulse = Dvar_RegisterBool("TKQMPKOSR", 0, 4u, "If dynamic lightset has a sudden change it disables temporal smoothing temporarily so that dynamic models don't fade out. This disables this, in case there is flickering");
  r_enablePrecomputedSkyIllumination = Dvar_RegisterBool("LMQMNMSSPN", 1, 4u, "Enable precomputed sky illumination");
  r_enablePrecomputedSkyIlluminationMask = Dvar_RegisterBool("PMPRKOQNN", 1, 4u, "Enable precomputed sky illumination mask");
  __asm { vmovss  xmm3, cs:__real@42480000; max }
  r_showPrecomputedSkyIlluminationMask = Dvar_RegisterBool("NQMRQKSRPP", 0, 4u, "Show precomputed sky illumination mask");
  __asm
  {
    vmovaps xmm2, xmm8; min
    vmovaps xmm1, xmm7; value
  }
  v614 = Dvar_RegisterFloat("LOKPNNNNSO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Scale for the bone influence radius for mdao");
  __asm
  {
    vmovss  xmm3, cs:__real@46800000; max
    vmovss  xmm1, cs:__real@447a0000; value
  }
  r_mdaoBoneInfluenceRadiusScale = v614;
  __asm { vmovaps xmm2, xmm8; min }
  v618 = Dvar_RegisterFloat("OKKTPRPONL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Culling distance for mdao occluders");
  __asm
  {
    vmovss  xmm7, cs:__real@44610000
    vmovss  xmm3, cs:__real@46800000; max
  }
  r_mdaoOccluderCullDistance = v618;
  __asm
  {
    vmovaps xmm2, xmm8; min
    vmovaps xmm1, xmm7; value
  }
  v623 = Dvar_RegisterFloat("LPKPSMMQOL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Fade out distance for mdao occluders");
  __asm
  {
    vmovss  xmm3, cs:__real@46800000; max
    vmovss  xmm2, cs:__real@41c80000; min
    vmovss  xmm1, cs:__real@43160000; value
  }
  r_mdaoOccluderFadeOutStartDistance = v623;
  v627 = Dvar_RegisterFloat("NOOTPPOPSQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Minimum volume of the bone collider to create occluders for");
  __asm { vmovss  xmm1, cs:__real@3f266666; value }
  r_mdaoMinBoneBoundsToOcclude = v627;
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  r_mdaoCapsuleStrength = Dvar_RegisterFloat("LSRLSMKMTP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "MDAO strength for capsule occluders");
  r_mdaoDrawOccluders = Dvar_RegisterBool("MRQTRLKMTN", 0, 0, "Draws the entity occluder ellipsoids used as MDAO casters");
  __asm { vmovss  xmm1, cs:__real@3f666666; value }
  r_mdaoShowBuffer = Dvar_RegisterBool("MOPRLRTMSK", 0, 4u, "Debug draw MDAO buffer");
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v634 = Dvar_RegisterFloat("NMLNMRNNKQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "MDAO strength for volume occluders");
  __asm
  {
    vmovss  xmm2, cs:__real@3c23d70a; min
    vmovss  xmm1, cs:__real@3eb851ec; value
  }
  r_mdaoVolumeStrength = v634;
  __asm { vmovaps xmm3, xmm8; max }
  v638 = Dvar_RegisterFloat("OLQOMOOMRP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40u, "Scope screen brightness ( 0.18 - gray paper )");
  __asm
  {
    vmovss  xmm3, cs:__real@447a0000; max
    vmovss  xmm2, cs:__real@3a83126f; min
  }
  r_lightIntensityScopeScreen = v638;
  __asm { vmovaps xmm1, xmm8; value }
  v642 = Dvar_RegisterFloat("MLRKRSTMRO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40u, "Dynamic light intensity global scale for tonemapping compensation");
  __asm { vmovss  xmm2, cs:__real@3a83126f; min }
  r_lightIntensityAutoScale = v642;
  __asm
  {
    vmovaps xmm3, xmm8; max
    vmovaps xmm1, xmm2; value
  }
  v646 = Dvar_RegisterFloat("NSSOKNLRPQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40u, "Lower bound for dynamic light tonemapping compensation scale");
  __asm { vmovss  xmm3, cs:__real@447a0000; max }
  r_lightIntensityAutoScaleMin = v646;
  __asm
  {
    vmovaps xmm2, xmm8; min
    vmovaps xmm1, xmm3; value
  }
  r_lightIntensityAutoScaleMax = Dvar_RegisterFloat("TROPRPKTK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40u, "Upper bound for dynamic light tonemapping compensation scale");
  __asm { vmovss  xmm1, cs:__real@3f000000; value }
  r_VFXOmniLightFalloffEnable = Dvar_RegisterBool("RNNNLQSRS", 0, 4u, "Enable override for VFX Light falloff scale for omni lights.");
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  r_VFXOmniLightFalloff = Dvar_RegisterFloat("MLPKPLMNLT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "VFX Light falloff scale for omni lights. On top of physical falloff. 0.0 - no falloff 1.0 - smooth falloff starts at light center.");
  __asm { vmovss  xmm1, cs:__real@3e4ccccd; value }
  r_VFXSpotLightFalloffEnable = Dvar_RegisterBool("TMKMSLQSR", 0, 4u, "Enable override for VFX Light falloff scale for spot lights.");
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  r_VFXSpotLightFalloff = Dvar_RegisterFloat("NNPPONORK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "VFX Light falloff scale for omni lights. On top of physical falloff. 0.0 - no falloff 1.0 - smooth falloff starts at light center.");
  r_del_oof = Dvar_RegisterBool("MNNLNMSSRM", 0, 4u, "Use deferred effect lighting out-of-frustum with global voxel tree");
  r_lightMap = Dvar_RegisterEnum("TSNNNOLOQ", colorMapNames, 1, 4u, "Replace all lightmaps with pure black or pure white");
  XB3ConsoleType = Sys_GetXB3ConsoleType();
  v657 = 0;
  if ( XB3ConsoleType == XB3_CONSOLE_SCORPIO )
    v657 = 4;
  r_mode = Dvar_RegisterEnum("LTPQTTPSOR", s_displayModes, v657, 0x804u, "Display mode");
  __asm { vmovss  xmm0, cs:__real@41a00000 }
  r_magnifierEnable = Dvar_RegisterBool("MPMTTQMONR", 0, 4u, "Enable magnifier");
  __asm
  {
    vmovss  [rsp+148h+max], xmm0
    vmovss  xmm0, cs:__real@3e800000
    vmovaps xmm3, xmm0; z
    vmovss  dword ptr [rsp+148h+description], xmm6
    vmovaps xmm2, xmm11; y
    vmovaps xmm1, xmm11; x
    vmovss  [rsp+148h+flags], xmm0
  }
  r_magnifierParams = Dvar_RegisterVec4("LOQQSTLPSK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsbm, descriptionbh, maxbd, 4u, "Magnifier parameters. Specifies the (x, y) scale and the (z, w) offset");
  __asm { vmovss  xmm0, cs:__real@42c80000 }
  r_postAA = Dvar_RegisterEnum("MQOMSSQRRQ", r_antialiasingModeNames, 3, v366, "Post process antialiasing mode");
  __asm
  {
    vmovss  [rsp+148h+max], xmm0
    vmovss  xmm0, cs:__real@c2c80000
    vmovss  dword ptr [rsp+148h+description], xmm0
    vxorps  xmm3, xmm3, xmm3; z
    vxorps  xmm2, xmm2, xmm2; y
    vxorps  xmm1, xmm1, xmm1; x
    vmovss  [rsp+148h+flags], xmm6
  }
  r_screenShotPixelOffset = Dvar_RegisterVec4("LPKQOLROKL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsbn, descriptionbi, maxbe, 4u, "Subpixel offset, set by screenshot machine");
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm8; value
  }
  r_smaaFilmicStrength = Dvar_RegisterFloat("NLQKNTQSNT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Strength of the filmic temporal effect. Set to 0 to revert to regular non-filmic SMAA.");
  r_smaaQuincunx = Dvar_RegisterBool("NONPSOKLR", 1, 4u, "Enables Quincunx for SMAA T2x modes, which trades texture detail for better antialiasing results.");
  r_smaaTransMask = Dvar_RegisterBool("PMKRPQLPM", 1, 4u, "Enables a mask to attenuate TAA effect on transparent objects.");
  r_smaaUpsampleMode = Dvar_RegisterEnum("NSQSKRKPOM", r_smaaTemporalUpsampleModeNames, 1, 4u, "Temporal upsampling mode, active if using SMAA T2x or Filmic SMAA T2x.");
  __asm
  {
    vmovaps xmm3, xmm11; max
    vmovaps xmm11, xmm8
    vmovaps xmm1, xmm11; value
    vxorps  xmm2, xmm2, xmm2; min
  }
  r_smaaGradientAdjust = Dvar_RegisterFloat("NSLRSQLMSL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40u, "Corrects supersampling derivatives (trades texture details / aliasing).");
  __asm
  {
    vmovss  xmm3, cs:__real@447a0000; max
    vmovss  xmm2, cs:__real@40a00000; min
    vmovss  xmm1, cs:__real@42c80000; value
  }
  r_smaaDynamicSubpixelPattern = Dvar_RegisterEnum("MRMPTNMLP", smaaDynamicSubsamplePatternNames, 0, 4u, "Changes subpixel pattern in motion.");
  r_smaaDynamicSubpixelPatternDistance = Dvar_RegisterFloat("NMLLTNKPMK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40u, "Distance at which a 1 pixel-sized motion will trigger this feature.");
  r_temporalSamplingEnable = Dvar_RegisterBool("MKLQLQLQNO", 1, 0x44u, "Enables/disables temporal sampling techniques");
  __asm { vmovss  xmm1, cs:__real@3dcccccd; value }
  r_vrs = Dvar_RegisterEnum("MSSRRPRTL", vrsModeNames, 2, 0, "Enables variable-rate-shading techniques.");
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  r_vrsQualityThreshold = Dvar_RegisterFloat("LSMRSQSST", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40u, "Controls VRS quality threshold ( 0.0 - highest quality, 1.0 - lowest quality )");
  r_vrsDebugForceSamplingRate = Dvar_RegisterInt("MPQOMSTLLS", -1, -1, 2, 4u, "Force specific sampling rate ( -1 default, 0 - force 1s/4p, 1 - force 2s/4p, 2 - force 4s/4p");
  r_vrsDebugFrameSamplePattern = Dvar_RegisterInt("MQKSPMRKQL", -1, -1, 4, 4u, "Show specific frame VRS sampling pattern ( -1 to enable rotating patterns).");
  r_halfResEmissivePSCopy = Dvar_RegisterBool("NQNQSLSMMQ", 0, 4u, "Enables MSAA Pixel Shader Copy.");
  r_halfResEmissive = Dvar_RegisterBool("MPRNRNTNNQ", 0, 0, "Enables offscreen buffer pass for half-res particle rendering.");
  r_volumeLightScatterDebug = Dvar_RegisterInt("MRPORMPTKP", 0, 0, 4, 0, "Enables volumetric light scattering debug rendering");
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm11; value
  }
  r_volumeLightScatterScriptIntensity = Dvar_RegisterFloat("MNOLLPSQSS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40u, "Script control for volumetric light scattering intensity");
  __asm
  {
    vmovss  xmm0, cs:__real@45800000
    vmovss  xmm3, cs:__real@44200000; z
    vmovss  xmm2, cs:__real@43c00000; y
    vmovss  xmm1, cs:__real@43000000; x
  }
  r_volumetricsDisableHack = Dvar_RegisterBool("OLONSLNOPK", 1, 4u, "Temporary dvar to disable volumetrics while vision sets are disabled.");
  __asm
  {
    vmovss  [rsp+148h+max], xmm0
    vmovss  xmm0, cs:__real@44800000
    vmovss  dword ptr [rsp+148h+description], xmm11
    vmovss  [rsp+148h+flags], xmm0
  }
  v689 = Dvar_RegisterVec4("MPOKKOPMTN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsbo, descriptionbj, maxbf, 0x40u, "Volumetric cascade depth ranges [nearest, near, far, distant]");
  __asm { vmovss  xmm3, cs:__real@41a00000; max }
  r_volumetricDepth = v689;
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  v693 = Dvar_RegisterFloat("LPSQKOLTLS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40u, "Volumetric z offset bias");
  __asm
  {
    vmovss  xmm3, cs:__real@41200000; max
    vmovss  xmm1, cs:__real@3951b717; value
  }
  r_volumetricZOffsetBias = v693;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  v697 = Dvar_RegisterFloat("OLNKQKOTLK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40u, "Light attenuation value clamp for volumetric lighting calculation");
  __asm { vmovss  xmm3, cs:__real@7f7fffff; max }
  r_volumetricsAttenuationClamp = v697;
  __asm
  {
    vmovaps xmm2, xmm11; min
    vmovaps xmm1, xmm11; value
    vmovss  xmm6, cs:__real@3f733333
  }
  r_volumetricsBulbAttenClamp = Dvar_RegisterFloat("MRRMSTNPMR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40u, "(Hack) Max bulbRadius of area lights to correct volumetrics attenuation (1.0 to disable).");
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm6; value
  }
  r_volumetricsDensityTemporalFactor = Dvar_RegisterFloat("LSLPORSMRK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40u, "Interpolation factor for density temporal blur");
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm6; value
  }
  r_volumetricsScatterTemporalFactor = Dvar_RegisterFloat("MLNONSKNKO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40u, "Interpolation factor for scattering temporal blur");
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm6; value
  }
  r_volumetricsAmbientTemporalFactor = Dvar_RegisterFloat("LSRSKPMRSM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40u, "Interpolation factor for ambient temporal blur");
  r_volumetricsParticleIter = Dvar_RegisterInt("MRKTMQLPLR", 100, 0, 1000, 0x40u, "Particle loop limit per dispatch.");
  __asm { vmovss  xmm3, cs:__real@41800000; max }
  r_volumetricsParticleNoise = Dvar_RegisterEnum("LSKNTKKQSP", r_volumetricsParticleNoiseNames, 0, 0, "Apply noise to volumetric particle shapes / density.");
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
    vxorps  xmm6, xmm6, xmm6
  }
  r_volumetricsAmbientBlur = Dvar_RegisterFloat("LTKPMMQONS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40u, "Volumetric lightgrid color blur radius in texels.");
  r_volumetricsUseCUMask = Dvar_RegisterBool("OKRTQNSQMQ", 0, 4u, "Enable volumetric CU masking for async overlaps");
  r_volumetricsWaveLimit = Dvar_RegisterInt("NKNSKKLNMN", 2, 0, 10, 0x40u, "Wavefront limit for volumetric passes.");
  r_volumetricsDebug = Dvar_RegisterInt("SSQTTKLKQ", 0, 0, 1, 4u, "Volumetrics debug");
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm8; value
  }
  v718 = Dvar_RegisterFloat("NKTLSLKQS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Volumetrics Variance Temporal Gamma param");
  __asm
  {
    vmovss  xmm0, cs:__real@7f7fffff
    vmovss  xmm3, cs:__real@ff7fffff; min
    vmovss  xmm2, cs:__real@c74b16cd; y
    vmovss  xmm1, cs:__real@c77c35e6; x
  }
  r_volumetricsGamma = v718;
  __asm { vmovss  [rsp+148h+flags], xmm0 }
  v723 = Dvar_RegisterVec2("MOMOSTNNQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsbp, 0x44u, "Bounding box min of current map volumetric heightfield");
  __asm
  {
    vmovss  xmm0, cs:__real@7f7fffff
    vmovss  xmm3, cs:__real@ff7fffff; min
    vmovss  xmm2, cs:__real@47972c9a; y
    vmovss  xmm1, cs:__real@477d3a1a; x
  }
  r_fogHeightMapBBoxMin = v723;
  __asm { vmovss  [rsp+148h+flags], xmm0 }
  v728 = Dvar_RegisterVec2("NOMOROLLMQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsbq, 0x44u, "Bounding box max of current map volumetric heightfield");
  __asm
  {
    vmovss  xmm0, cs:__real@7f7fffff
    vmovss  xmm2, cs:__real@46677a00; y
  }
  r_fogHeightMapBBoxMax = v728;
  __asm
  {
    vmovss  dword ptr [rsp+148h+description], xmm0
    vmovss  xmm0, cs:__real@ff7fffff
    vxorps  xmm3, xmm3, xmm3; z
    vxorps  xmm1, xmm1, xmm1; x
    vmovss  [rsp+148h+flags], xmm0
  }
  r_fogHeightMapScale = Dvar_RegisterVec3("QQQOTOROT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsbr, descriptionbk, 0x44u, "Scales for volumetric height map.X - start fog scale, Y - end fog scale, Z - density scale");
  r_debugDrawVolumetricParticles = Dvar_RegisterBool("RPSQSRMPO", 0, 0, "Draw volumetric particle ellipsoids as wireframe.");
  __asm { vmovss  xmm1, cs:__real@3f000000; value }
  r_transShadowEnable = Dvar_RegisterBool("NRLNMQROLR", 1, 0x44u, "Enable translucent shadows");
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  r_transShadowPrevFrameMaskLerpFactor = Dvar_RegisterFloat("PQPNNMOM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40u, "Lerp factor for temporal anti aliasing of translucent shadows, higher is softer");
  r_reflectionProbeForceNoParallax = Dvar_RegisterBool("NOMKLMQLKM", 0, 4u, "Force disable parallax correction for reflection probe (debug shader only)");
  r_showTris = Dvar_RegisterEnum("NTQPKNSMTL", r_showTrisNames, 0, 4u, "Show triangle outlines");
  r_showTrisDepthTest = Dvar_RegisterBool("NTSKQMQQK", 0, 4u, "Hide wireframe behind scene depth");
  r_showTrisPip = Dvar_RegisterBool("PMKLNKMOM", 0, 4u, "ShowTris is displayed picture-in-picture");
  r_showRenderFeatureCounts = Dvar_RegisterEnum("LLSQQKNSMP", showRenderFeatureCountsNames, 0, 4u, "Render Feature count for each rendered entity");
  r_showTriCounts = Dvar_RegisterBool("MOSSSSPKTQ", 0, 4u, "Triangle count for each rendered entity");
  r_showSurfCounts = Dvar_RegisterBool("PQRRQSPLR", 0, 4u, "Surface count for each rendered entity");
  r_showVertCounts = Dvar_RegisterBool("MTMTKSSRLK", 0, 4u, "Vertex count for each entity");
  r_showXModelRanking = Dvar_RegisterEnum("LSTLTMNPMM", r_showXModelRankingTypes, 0, 4u, "Show the xmodel rankings based on drawcalls");
  r_showXModelRankingFilterMode = Dvar_RegisterEnum("LPRSKMOPML", r_showXModelFilterModes, 0, 4u, "Filter certain types from models from results");
  r_showXModelRankingOffset = Dvar_RegisterInt("MMTQSMKRON", 0, 0, 300, 4u, "Offsets from the first rank. You can look at lower ranks this way");
  r_showXModelRankingStopUpdate = Dvar_RegisterBool("OKMRLQMNPT", 0, 4u, "Stop updating rankings");
  r_showModelNames = Dvar_RegisterBool("NSTRMKLRKS", 0, 4u, "Model names displayed with each model");
  r_showModelLODs = Dvar_RegisterEnum("MKRLTQQQK", s_showModelLODsNames, 0, 4u, "Model LOD number displayed with each model");
  r_showModelLODOutDist = Dvar_RegisterBool("MRNSTNTRNT", 0, 4u, "Model LOD out distance displayed with each model");
  r_xdebug = Dvar_RegisterEnum("QSNKQRPPN", xdebugNames, 0, 4u, "xmodel/xanim debug rendering");
  r_xdebugPack = Dvar_RegisterEnum("MLNOKQRSK", xdebugPackNames, 0, 4u, "xmodel packed positions debug rendering");
  r_modelRadiusPackWarn = Dvar_RegisterBool("NNNTNSMOS", 1, 4u, "enabled radius for packing too small and radius too big warnings");
  r_debugDrawLights = Dvar_RegisterEnum("NKMQSMKSNQ", r_debugDrawLightsNames, 0, 0, "Draw light debug info");
  __asm
  {
    vmovss  xmm3, cs:__real@47435000; max
    vmovss  xmm1, cs:__real@451c4000; value
  }
  r_debugDrawTransientLights = Dvar_RegisterEnum("TONNONQRM", r_debugDrawTransientLightsNames, 0, 0, "Draw lights assigned to transient files");
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  v740 = Dvar_RegisterFloat("MSORPSLLMO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Max distance from camera to draw debug light info");
  __asm { vmovss  xmm3, cs:__real@461c4000; max }
  r_debugDrawLightsDrawRadius = v740;
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm9; value
  }
  r_debugDrawLightsDrawDetailRadius = Dvar_RegisterFloat("MLTTSQNQTR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Max distance from camera to draw debug light detailed info");
  r_debugDrawLightsFilterShadowCasters = Dvar_RegisterEnum("QPTPKRRPL", r_debugDrawLightsFilterShadowCastersNames, 1, 0, "Additional debug draw light filtering");
  R_LightTweak_InitDvars();
  r_tension_enable = Dvar_RegisterBool("OKLPRRQSQM", 1, 0x44u, "Toggles tension");
  r_blendshape_enable = Dvar_RegisterBool("MTMKPNKPNM", 1, 0x44u, "Toggles blendshapes");
  r_blendshape_debug = Dvar_RegisterInt("RTPQMSTRQ", -1, -1, 2047, 0x44u, "Entity number to debug/force blendshape weights");
  r_blendshape_debug_index = Dvar_RegisterInt("NLKNMRLTLN", 0, 0, 1024, 0x44u, "Blendshape weight index to debug/force; all others will be 0");
  __asm
  {
    vmovaps xmm9, xmm8
    vmovaps xmm3, xmm9; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm9; value
  }
  r_blendshape_debug_value = Dvar_RegisterFloat("MKLTQOSNPM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x44u, "Blendshape weight value to use for debug/force");
  r_drawPrimHistogram = Dvar_RegisterBool("LMOPLTRPNK", 0, 4u, "Draws a histogram of the sizes of each primitive batch");
  r_debugDrawCinematicFrames = Dvar_RegisterBool("LNOPOLNSPM", 0, 4u, "Draws a cinematic frame images on screen");
  r_smp_backend = Dvar_RegisterBool("NQLOOOOQPN", 1, 0, "Process renderer back end in a separate thread");
  r_smp_worker = Dvar_RegisterBool("LRLLOSTTOR", 1, 0, "Process renderer front end in a separate thread");
  r_smp_workers_count = Dvar_RegisterInt("MTRSOQKOSK", -1, -1, 3, 0, "Current number of workers currently running. -1 for automatic value");
  r_sunshadowmap_cmdbuf_worker = Dvar_RegisterBool("OMTMTQKNSR", 1, 4u, "Process shadowmap command buffer in a separate thread");
  r_cmdbuf_worker = Dvar_RegisterBool("MTSPTMRLRO", 1, 4u, "Process command buffer in a separate thread");
  r_cmdbuf_handoff = Dvar_RegisterBool("NKRMKSLMSS", 1, 0, "Allow the backend thread to take over partially executed command buffer jobs.");
  r_cmdbuf_wait_us = Dvar_RegisterInt("NQKSNKLLO", 100, 0, 0x7FFFFFFF, 0, "Time in us the backend can wait for a command buffer job to abort before starting on other worker commands.");
  __asm
  {
    vmovss  xmm0, cs:__real@7f7fffff
    vmovss  xmm3, cs:__real@43960000; z
  }
  r_fogCircleTweaks = Dvar_RegisterBool("LKRORRMNKR", 0, 4u, "Enable fog circle tweaks from dvar");
  __asm
  {
    vmovss  [rsp+148h+max], xmm0
    vmovss  xmm0, cs:__real@ff7fffff
    vmovss  dword ptr [rsp+148h+description], xmm0
    vxorps  xmm2, xmm2, xmm2; y
    vxorps  xmm1, xmm1, xmm1; x
    vmovss  [rsp+148h+flags], xmm7
  }
  v753 = Dvar_RegisterVec4("OLNQTLPOMK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsbs, descriptionbl, maxbg, 0, "Overrides circle position (xy), circle radius (z) and circle height (w). Needs r_fogCircleTweaks");
  __asm
  {
    vmovss  xmm7, cs:__real@7f7fffff
    vmovss  xmm2, cs:__real@ff7fffff; min
  }
  r_fogCircle = v753;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm1, xmm1, xmm1; value
  }
  v758 = Dvar_RegisterFloat("NSKPQSOPMP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Circle fog inset");
  __asm
  {
    vmovss  xmm2, cs:__real@447a0000; y
    vmovss  xmm1, cs:__real@461c4000; x
  }
  r_fogCircleInset = v758;
  __asm
  {
    vxorps  xmm3, xmm3, xmm3; min
    vmovss  [rsp+148h+flags], xmm7
  }
  v762 = Dvar_RegisterVec2("PNSNPNRKN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsbt, 0, "Overrides circle falloffs: distance fog - x, volumetric - y. Needs r_fogCircleTweaks");
  __asm { vmovss  xmm1, cs:__real@3a83126f; x }
  r_fogCircleHeightFalloff = v762;
  __asm
  {
    vxorps  xmm3, xmm3, xmm3; min
    vmovaps xmm2, xmm9; y
    vmovss  [rsp+148h+flags], xmm7
  }
  v766 = Dvar_RegisterVec2("MSPQTOOKSK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsbu, 0, "Overrides circle volumetrics params: density - x, scale - y. Needs r_fogCircleTweaks");
  __asm
  {
    vmovss  xmm3, cs:__real@3dcccccd; z
    vmovss  xmm2, cs:__real@3f000000; y
  }
  r_fogCircleVolumetricParams = v766;
  __asm
  {
    vmovss  dword ptr [rsp+148h+description], xmm7
    vmovaps xmm1, xmm3; x
    vmovss  [rsp+148h+flags], xmm6
  }
  v770 = Dvar_RegisterVec3("OMQTMPKQNT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsbv, descriptionbm, 0, "Overrides circle inner color for volumetric. Needs r_fogCircleTweaks");
  __asm
  {
    vmovss  xmm3, cs:__real@3dcccccd; z
    vmovss  xmm2, cs:__real@3f000000; y
  }
  r_fogCircleVolumetricInnerColor = v770;
  __asm
  {
    vmovaps xmm0, xmm7
    vmovss  dword ptr [rsp+148h+description], xmm0
    vmovaps xmm1, xmm3; x
    vmovss  [rsp+148h+flags], xmm6
  }
  v775 = Dvar_RegisterVec3("NTQSLQMOKK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsbw, descriptionbn, 0, "Overrides circle outer color for volumetric. Needs r_fogCircleTweaks");
  __asm
  {
    vmovss  xmm3, cs:__real@42480000; z
    vmovss  xmm1, cs:__real@3dcccccd; x
  }
  r_fogCircleVolumetricOuterColor = v775;
  __asm
  {
    vmovss  dword ptr [rsp+148h+description], xmm7
    vmovaps xmm2, xmm9; y
    vmovss  [rsp+148h+flags], xmm6
  }
  r_fogCircleDistanceParams = Dvar_RegisterVec3("LQMRSRQQLT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsbx, descriptionbo, 0, "Overrides circle distance params: density - x, scale - y, half plane - z. Needs r_fogCircleTweaks");
  __asm
  {
    vmovss  dword ptr [rsp+148h+description], xmm7
    vmovss  xmm7, cs:__real@40000000
    vmovaps xmm2, xmm7; y
    vxorps  xmm3, xmm3, xmm3; z
    vxorps  xmm1, xmm1, xmm1; x
    vmovss  [rsp+148h+flags], xmm6
    vmovss  xmm0, cs:__real@7f7fffff
  }
  r_fogCircleDistanceInnerColor = Dvar_RegisterVec3("NNLSQNKROK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsby, descriptionbp, 0, "Overrides circle inner color for distance fog. Needs r_fogCircleTweaks");
  __asm
  {
    vmovss  dword ptr [rsp+148h+description], xmm0
    vxorps  xmm3, xmm3, xmm3; z
    vmovaps xmm2, xmm7; y
    vxorps  xmm1, xmm1, xmm1; x
    vmovss  [rsp+148h+flags], xmm6
  }
  v787 = Dvar_RegisterVec3("LLPRTKKKTT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsbz, descriptionbq, 0, "Overrides circle outer color for distance fog. Needs r_fogCircleTweaks");
  __asm
  {
    vmovss  xmm0, cs:__real@7f7fffff
    vmovss  xmm3, cs:__real@3d75c28f; z
    vmovss  xmm2, cs:__real@3eae147b; y
    vmovss  xmm1, cs:__real@3eb851ec; x
  }
  r_fogCircleDistanceOuterColor = v787;
  __asm
  {
    vmovss  [rsp+148h+max], xmm0
    vmovss  dword ptr [rsp+148h+description], xmm6
    vmovss  [rsp+148h+flags], xmm9
  }
  v792 = Dvar_RegisterVec4("LLMNPNKLQQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsca, descriptionbr, maxbh, 0, "Overrides circle fog scattering bias - rgb and intensity (HACK). Needs r_fogCircleTweaks");
  __asm
  {
    vmovss  xmm6, cs:__real@7f7fffff
    vmovss  xmm1, cs:__real@447a0000; value
  }
  r_fogCirclePerceptualTint = v792;
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm8, xmm8, xmm8
  }
  v798 = Dvar_RegisterFloat("NNROPNTOTT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Overrides circle fog outer color distance. Needs r_fogCircleTweaks");
  __asm
  {
    vmovss  xmm2, cs:__real@3c23d70a; min
    vmovss  xmm1, cs:__real@41200000; value
  }
  r_fogCircleOuterColorDistance = v798;
  __asm { vmovaps xmm3, xmm6; max }
  r_fogCircleSkyDistanceMultiplier = Dvar_RegisterFloat("NTTRNSKOTR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Overrides circle fog sky distance multiplier. Needs r_fogCircleTweaks");
  __asm
  {
    vxorps  xmm3, xmm3, xmm3; min
    vxorps  xmm2, xmm2, xmm2; y
    vxorps  xmm1, xmm1, xmm1; x
    vmovss  [rsp+148h+flags], xmm9
  }
  r_fogCircleDistanceFogBlend = Dvar_RegisterVec2("LOOSRMPSPQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagscb, 0, "Overrides circle fog blend with distance fog. Needs r_fogCircleTweaks");
  __asm
  {
    vmovss  xmm2, cs:__real@3c23d70a; min
    vmovss  xmm1, cs:__real@447a0000; value
    vmovaps xmm3, xmm6; max
  }
  v808 = Dvar_RegisterFloat("TKRNNLOKT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Circle distance fog height blend");
  __asm
  {
    vmovss  xmm2, cs:__real@3c23d70a; min
    vmovss  xmm1, cs:__real@453b8000; value
  }
  r_fogCircleDistanceHeightBlend = v808;
  __asm { vmovaps xmm3, xmm6; max }
  v812 = Dvar_RegisterFloat("OMQMRMTTRM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Circle distance fog height blend by view ray start");
  __asm
  {
    vmovss  xmm2, cs:__real@3c23d70a; min
    vmovss  xmm1, cs:__real@453b8000; value
  }
  r_fogCircleDistanceHeightViewBlend = v812;
  __asm { vmovaps xmm3, xmm6; max }
  v816 = Dvar_RegisterFloat("MMPMKQMLKT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Circle distance fog start of height blend");
  __asm { vmovss  xmm2, cs:__real@ff7fffff; min }
  r_fogCircleDistanceHeightBlendStart = v816;
  __asm
  {
    vmovaps xmm3, xmm6; max
    vmovaps xmm1, xmm9; value
  }
  v820 = Dvar_RegisterFloat("LQOMOOLPO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Circle fog density scale");
  __asm { vmovss  xmm2, cs:__real@ff7fffff; min }
  r_fogCircleFogDensityScale = v820;
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm1, xmm1, xmm1; value
  }
  v824 = Dvar_RegisterFloat("NQSNQQNRMN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Circle fog density bias");
  __asm { vmovss  xmm2, cs:__real@ff7fffff; min }
  r_fogCircleFogDensityBias = v824;
  __asm
  {
    vmovaps xmm3, xmm6; max
    vmovaps xmm1, xmm9; value
  }
  v828 = Dvar_RegisterFloat("TPKKNSMRQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Circle fog density noise scale");
  __asm { vmovss  xmm2, cs:__real@ff7fffff; min }
  r_fogCircleFogDensityNoiseScale = v828;
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm1, xmm1, xmm1; value
  }
  v832 = Dvar_RegisterFloat("STTMOMSQL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Circle fog density noise bias");
  __asm { vmovss  xmm3, cs:__real@ff7fffff; min }
  r_fogCircleFogDensityNoiseBias = v832;
  __asm
  {
    vmovaps xmm2, xmm9; y
    vmovaps xmm1, xmm9; x
    vmovss  [rsp+148h+flags], xmm6
  }
  v836 = Dvar_RegisterVec2("NTTMPOQNTL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagscc, 0, "Circle fog density noise tiling");
  __asm { vmovss  xmm3, cs:__real@ff7fffff; min }
  r_fogCircleFogDensityTiling = v836;
  __asm
  {
    vmovaps xmm2, xmm9; y
    vmovaps xmm1, xmm9; x
    vmovss  [rsp+148h+flags], xmm6
  }
  r_fogCircleFogDensityScrollingSpeed = Dvar_RegisterVec2("NRNMNOTPSS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagscd, 0, "Circle fog density noise scrolling speed");
  r_vrsEnabled = Dvar_RegisterBool("MPOPRKKSM", 0, 0, "Enable Variable Rate Shading");
  r_vrsMaskEnabled = Dvar_RegisterBool("LOSKTOORPK", 1, 0, "Enable VRS Mask");
  __asm { vmovss  xmm1, cs:__real@3d4ccccd; value }
  r_vrsMaskPreview = Dvar_RegisterBool("NONLNTKTQL", 0, 0, "Preview VRS Mask");
  __asm
  {
    vmovaps xmm3, xmm9; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v843 = Dvar_RegisterFloat("LQLTLOTSO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "VRS Mask - Pixel Threshold - value that describes size of the areas. The higher the value, the Shading Rate areas are larger.");
  __asm
  {
    vmovss  xmm3, cs:__real@3e4ccccd; max
    vmovss  xmm1, cs:__real@3d4ccccd; value
  }
  r_vrsMaskPixelThreshold = v843;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  r_vrsMaskNeighborhoodThreshold = Dvar_RegisterFloat("QTNRSKKNS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "VRS Mask - Neighborhood Threshold - the value from which the shading rate 4x4 is appeared");
  r_vrsMaskMotionBlurEnabled = Dvar_RegisterBool("LMMLLPKMMP", 1, 0, "Enable motion blur for VRS Mask");
  r_vrsMaskMotionBlurIntensity = Dvar_RegisterInt("NMLQKSMPP", 0, 0, 3, 4u, "VRS Mask - Motion blur intensity");
  r_vrsMaskDofEnabled = Dvar_RegisterBool("LKTKRTORTL", 1, 0, "Enable DOF for VRS Mask");
  r_vrsMaskDofIntensity = Dvar_RegisterInt("NQLMQTRKKT", 2, 1, 3, 4u, "VRS Mask - DOF intensity");
  r_vrsMaskOpaqueDrawListsEnabled = Dvar_RegisterBool("NTSKPNLLRM", 1, 0, "Enable VRS Mask for opaque drawlists");
  r_vrsMaskDecalDrawListsEnabled = Dvar_RegisterBool("MTLMMKKLTQ", 1, 0, "Enable VRS Mask for decal drawlists");
  r_vrsMaskTransparentDrawListsEnabled = Dvar_RegisterBool("QMNPLONMP", 1, 0, "Enable VRS Mask for transparent drawlists");
  r_vrsMaskPostProcessingEnabled = Dvar_RegisterBool("NKNTTSNQOL", 1, 0, "Enable VRS Mask for post processing  --not implemented yet--");
  r_vrsPrepassEnabled = Dvar_RegisterBool("NPOLPLRNOK", 0, 0, "Enable Variable Rate Shading for Prepass - (both for VRS Mask and Shading Rate DX12)");
  r_vrsDrawGunEnabled = Dvar_RegisterBool("NNPPPPOQRO", 0, 0, "Enable Variable Rate Shading for Draw gun - (both for VRS Mask and Shading Rate DX12)");
  __asm
  {
    vmovss  xmm6, cs:__real@41a00000
    vmovss  xmm1, cs:__real@41200000; value
  }
  r_vsync = Dvar_RegisterBool("MPPNRRRPMP", 1, 0, "Enable v-sync before drawing the next frame to avoid 'tearing' artifacts.");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  r_slopTarget = Dvar_RegisterFloat("LKTKTLMSP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "The target duration in ms between the gpu queueing a flip and the corresponding vsync");
  __asm { vmovss  xmm1, cs:__real@40400000; value }
  r_longFrameBackoff = Dvar_RegisterInt("LKKRPNKMMR", 4, 0, 0x7FFFFFFF, 0, "The number of frames to back off of performing gpu latency delay after a long frame");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  r_longFrameSlop = Dvar_RegisterFloat("OQTQQQPTP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "The slop duration threshold in ms at which a frame is considered a long frame");
  r_longWorkFrames = Dvar_RegisterInt("MMTPRTNMQP", 4, 0, 0x7FFFFFFF, 0, "If the calculated work duration for the previous frame is longer than this number of frames, give up on delaying this frame.");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  r_slopDelayReduction = Dvar_RegisterFloat("LTNTLNRNOS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Duration in milliseconds to always reduce the computed frontend delay duration to make up for inaccuracies in the computation. Slightly increases latency but also increases the chance of the frontend delay preventing the main thread from hitting 60 fps.");
  r_delayForSlop = Dvar_RegisterBool("PQOSMMLLK", 1, 0, "Controls whether frontend is delayed to hit the frame slop target.");
  __asm
  {
    vmovss  xmm1, cs:__real@3e99999a; value
    vmovaps xmm3, xmm9; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  r_ringFractionForFlush = Dvar_RegisterFloat("MPRTTKLMNP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Portion of ring buffer size to allocate before fencing. Lower fraction leads to more fences, higher fraction leads to higher chance for stalls.");
  __asm
  {
    vmovss  xmm2, cs:__real@3f400000; g
    vmovss  xmm1, cs:__real@3f000000; r
  }
  r_clear = Dvar_RegisterEnum("QMORRTR", r_clearNames, 1, 0, "Controls how the color buffer is cleared");
  __asm
  {
    vmovaps xmm3, xmm9; b
    vmovss  [rsp+148h+flags], xmm9
  }
  v863 = Dvar_RegisterColor("NNNKPKRMQS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsce, 0, "Color to clear the screen to when clearing the frame buffer");
  __asm { vmovss  xmm2, cs:__real@3f000000; g }
  r_clearColor = v863;
  __asm
  {
    vxorps  xmm3, xmm3, xmm3; b
    vmovaps xmm1, xmm9; r
    vmovss  [rsp+148h+flags], xmm9
  }
  r_clearColor2 = Dvar_RegisterColor("PNQQLROTO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagscf, 0, "Color to clear every second frame to (for use during development)");
  r_drawWorld = Dvar_RegisterBool("PNOMMSROQ", 1, 4u, "Enable world rendering");
  r_drawEntities = Dvar_RegisterBool("QPNTOMTML", 1, 4u, "Enable entity rendering");
  r_drawPoly = Dvar_RegisterBool("NPOORKPMMM", 1, 4u, "Enable poly rendering");
  r_drawDynEnts = Dvar_RegisterBool("MSROPPQTRL", 1, 4u, "Enable dynamic entity rendering");
  r_drawBModels = Dvar_RegisterBool("MKLPRMMKQM", 1, 4u, "Enable brush model rendering");
  r_drawSModels = Dvar_RegisterBool("RKPSSQLPT", 1, 4u, "Enable static model rendering");
  r_drawXModels = Dvar_RegisterBool("OLLQKNPKLM", 1, 4u, "Enable xmodel rendering");
  r_drawSkinnedModels = Dvar_RegisterBool("LPKRQTQLOS", 1, 4u, "Enable skinned model rendering");
  r_drawRigidModels = Dvar_RegisterBool("NRPMLRTQTN", 1, 4u, "Enable rigid model rendering");
  r_drawTransDecalSurfs = Dvar_RegisterEnum("LKSTMMRNRQ", r_drawTransDecalSurfsNames, 0, 4u, "Toggle rendering of decal and trans surfaces from different sources");
  r_drawOpaqueSurfs = Dvar_RegisterEnum("MRONOKPKNS", r_drawOpaqueSurfsNames, 0, 4u, "Toggle rendering of opaque surfaces from different sources");
  r_drawUmbraOccluders = Dvar_RegisterEnum("NMPMLSKTMR", r_drawUmbraOccluderNames, 0, 4u, "Toggle filtering of Umbra occluders and targets (static models & BSP only)");
  r_smodelsCollectionTransientVisibility = Dvar_RegisterBool("LQSKTTRRP", 1, 4u, "Enable static model collections transient visibility");
  r_usePrebuiltSpotShadow = Dvar_RegisterEnum("SNMKKNPTQ", r_cachedSpotShadowNames, 1, 4u, "Enable pre-built spot shadow map rendering");
  r_usePrebuiltSunShadow = Dvar_RegisterEnum("OMKTSMSOS", r_cachedSunShadowNames, 1, 0x44u, "Enable pre-built sun shadow map rendering");
  r_cachedSunShadowMaxTilesPerFrame = Dvar_RegisterInt("LONTLRQKN", 1, 1, 10, 0x40u, "Maximum number of shadow map cache tiles updated per frame. Lower means less overhead but shadow data might be stale.");
  r_cachedSunShadowForceInvalidSModel = Dvar_RegisterBool("NNQPMRTNLO", 0, 4u, "Force cached smodel shadows to be considered invalid and draw every frame");
  r_shadowTileResolution = Dvar_RegisterEnum("NTKRPRKMOK", r_shadowTileResolutionNames, 1, 0, "Resolution of shadow map tiles.");
  r_dpvsFilterDebug = Dvar_RegisterBool("MSRMRTNQMO", 0, 4u, "Filter all entities to all cells (debug)");
  r_primaryOmniLightPerPixelLimit = Dvar_RegisterInt("MKPQPLPPPK", 64, 0, 64, 0x40u, "Maximum number of primary omni lights drawn per pixel simultaneously");
  r_primarySpotLightPerPixelLimit = Dvar_RegisterInt("LMTTPRQQMN", 64, 0, 64, 0x40u, "Maximum number of primary spot lights drawn per pixel simultaneously");
  r_dynamicOmniLightLimit = Dvar_RegisterInt("MPRMNMQQKR", 32, 0, 32, 0x40u, "Maximum number of dynamic omni lights drawn simultaneously");
  r_dynamicSpotLightLimit = Dvar_RegisterInt("MPTNKKPKRK", 32, 0, 32, 0x40u, "Maximum number of dynamic spot lights drawn simultaneously");
  r_spotLightShadows = Dvar_RegisterBool("NLNLPMSNLP", 1, 4u, "Enable shadows for spot lights.");
  __asm { vmovss  xmm3, cs:__real@41800000; max }
  r_spotLightEntityShadows = Dvar_RegisterBool("TLMMOPMSK", 0, 0x40u, "Enable entity shadows for FX spot lights.");
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm9; value
  }
  r_spotLightShadowsPolygonOffset = Dvar_RegisterFloat("LSQMOMSSPS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Set spot light shadow polygon offset scaling.");
  r_offloadPrimaryLights = Dvar_RegisterEnum("NKLSLKPSSS", r_offloadPrimaryLightsNames, 1, 0x40u, "Enable transient primary lights");
  r_primaryLightMotionDebug = Dvar_RegisterInt("MNSPTPSLLR", 0, 0, 6500, 4u, "For debugging primary light motion");
  r_primaryLightMotionDetect = Dvar_RegisterEnum("NKKPQSTMRL", r_primaryLightMotionDetectNames, 1, 0x40u, "Enable primary light motion detect for skipping unnecessary shadowmap update");
  __asm
  {
    vmovss  xmm3, cs:__real@48800000; max
    vmovss  xmm1, cs:__real@3dcccccd; value
  }
  r_primaryLightMotionDetectUseSkinnedModel = Dvar_RegisterBool("LPPMLLTRNT", 1, 0x40u, "A skinned model always trigger motion for primary lights");
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  v873 = Dvar_RegisterFloat("NNMTMKQPPM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40u, "Smallest object size for triggering primary light motion detector");
  __asm
  {
    vmovss  xmm3, cs:__real@48800000; max
    vmovss  xmm1, cs:__real@45800000; value
  }
  r_primaryLightMotionDetectSizeMin = v873;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  r_primaryLightMotionDetectSizeMax = Dvar_RegisterFloat("MMLQOTLKOQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40u, "Largest object size for triggering primary light motion detector");
  __asm
  {
    vmovss  xmm0, cs:__real@44800000
    vmovss  xmm1, cs:__real@41000000; x
  }
  r_lightSensorMode = Dvar_RegisterEnum("NTSPRTSSTT", r_lightSensorModeNames, 2, 4u, "Light sensor mode");
  __asm
  {
    vmovss  [rsp+148h+max], xmm0
    vmovss  xmm0, cs:__real@c4800000
    vmovss  dword ptr [rsp+148h+description], xmm0
    vmovaps xmm3, xmm9; z
    vxorps  xmm2, xmm2, xmm2; y
    vmovss  [rsp+148h+flags], xmm8
  }
  v882 = Dvar_RegisterVec4("LRLKLRNRTS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagscg, descriptionbs, maxbi, 0x40u, "Sun Shadow : x = cascade blend fraction, y = back-face terminator threshold, z = polygonOffsetScale, w = back-face cull scale");
  __asm
  {
    vmovss  xmm3, cs:__real@43000000; max
    vmovss  xmm1, cs:__real@41000000; value
  }
  r_sunShadowParams = v882;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  r_compressedSunShadowBiasScale = Dvar_RegisterFloat("NLTNTKLQNQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Shadow bias scale for compressed sun shadow (relative to 0-th cascade).");
  r_compressedSunShadowDebug = Dvar_RegisterInt("OKNTKOPMOK", 0, 0, 3, 0, "Compressed sun shadow debug: 0-no debug, 1-CSM only, 2-disable CSM, 3-compressed cascades.");
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  v889 = Dvar_RegisterFloat("MLMLSNTTOO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Compressed sun shadow debug filtering radius.");
  __asm { vmovss  xmm3, cs:__real@47800000; max }
  r_compressedSunShadowFilteringMaxRadiusDebug = v889;
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  r_compressedSunShadowFilteringFarZDebug = Dvar_RegisterFloat("MLLTPQNOSN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Compressed sun shadow debug filtering far plane.");
  r_compressedSunShadowOverlay = Dvar_RegisterInt("MROKNLSORL", 0, 0, 2, 0, "Show CSM overlay: 0-none, 1-data, 2-streaming.");
  r_compressedSunShadowStreamingDebug = Dvar_RegisterInt("LLLPTRKPSO", 0, 0, 2, 0, "CSM streaming debug modes: 1-disable at runtime, 2-force defragmentation.");
  r_drawWater = Dvar_RegisterBool("LRMSSOOQQP", 1, 0, "Enable water animation");
  r_lockPvs = Dvar_RegisterBool("LSLKMNMRLK", 0, 4u, "Lock the viewpoint used for determining what is visible to the current position and direction");
  __asm { vmovss  xmm1, cs:__real@3f333333; value }
  r_skipPvs = Dvar_RegisterBool("MONNPSNOQO", 0, 4u, "Skipt the determination of what is in the potentially visible set (disables most drawing)");
  __asm
  {
    vmovaps xmm3, xmm9; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  r_portalBevels = Dvar_RegisterFloat("MOMNLTOPQN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Helps cull geometry by angles of portals that are acute when projected onto the screen, value is the cosine of the angle");
  r_portalBevelsOnly = Dvar_RegisterBool("NQOPMRKQTL", 0, 0, "Use screen-space bounding box of portals rather than the actual shape of the portal projected onto the screen");
  r_singleCell = Dvar_RegisterBool("MSMMLQQNSS", 0, 4u, "Only draw things in the same cell as the camera.  Most useful for seeing how big the current cell is.");
  __asm { vmovss  xmm1, cs:__real@3ca3d70a; value }
  r_portalWalkLimit = Dvar_RegisterInt("MRTKQSPSQS", 0, 0, 100, 4u, "Stop portal recursion after this many iterations.  Useful for debugging portal errors.");
  __asm
  {
    vmovaps xmm3, xmm9; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  r_portalMinClipArea = Dvar_RegisterFloat("LLPKRNMQQN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Don't clip child portals by a parent portal smaller than this fraction of the screen area.");
  r_portalMinRecurseDepth = Dvar_RegisterInt("NRSQNNQOLK", 2, 0, 100, 4u, "Ignore r_portalMinClipArea for portals with fewer than this many parent portals.");
  r_materialLodOverride = Dvar_RegisterInt("MQKLMPORMS", 0, -1, 1, 4u, "Override material lod (-1 to disable override)");
  __asm
  {
    vmovss  xmm2, cs:__real@bf800000; min
    vmovss  xmm3, cs:__real@40a00000; max
  }
  r_materialLodMin = Dvar_RegisterInt("MLQPQQRPQM", 0, 0, 2, 4u, "Minimum material lod");
  __asm { vmovaps xmm1, xmm2; value }
  r_materialLod0SizeThresholdOverride = Dvar_RegisterFloat("NMLSKNTTQQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Size threshold for material lod 0.");
  __asm { vmovss  xmm3, cs:__real@48800000; max }
  r_showPortals = Dvar_RegisterInt("QQLNLMOTM", 0, 0, 3, 4u, "Show portals for debugging");
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  r_showPortalsOverview = Dvar_RegisterFloat("NNQPOMPOPT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Render 2d XY portal overlay scaled to fit to this distance.  Useful for debugging portal errors.");
  r_showAabbTrees = Dvar_RegisterInt("LPPRPNQSKM", 0, 0, 3, 4u, "Show axis-aligned bounding box trees used in potentially visibile set determination. 1 shows hierarchy, 2 shows world surfaces, 3 shows both.");
  r_showSModelNames = Dvar_RegisterBool("TPKSLNKQR", 0, 4u, "Show static model names");
  r_umbra = Dvar_RegisterEnum("LQQKQROPSL", r_umbraModeNames, 1, 4u, "Umbra-based visibility culling mode.");
  r_umbraShadows = Dvar_RegisterEnum("MNSPPRQLLM", r_umbraShadowModeNames, 1, 4u, "Umbra-based shadow caster visibility culling mode.");
  __asm
  {
    vmovss  xmm3, cs:__real@3f800000; min
    vmovss  xmm0, cs:__real@41800000
    vmovss  xmm1, cs:__real@40800000; x
  }
  r_umbraShadowCasters = Dvar_RegisterBool("LSSLKOQPMQ", 0, 0x40u, "Enables Umbra-based shadow caster culling.");
  __asm
  {
    vmovaps xmm2, xmm3; y
    vmovss  [rsp+148h+flags], xmm0
  }
  r_umbraQueryParts = Dvar_RegisterVec2("LLQTMQKQMR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsch, 4u, "The number of parts the Umbra query frustum is broken into for async query processing.");
  r_umbraDynamicDpvsSMP = Dvar_RegisterBool("MTLPRKSSRL", 1, 4u, "Toggle SMP processing of dynamic object culling via Umbra.");
  r_umbraSpotShadowSelection = Dvar_RegisterEnum("LMLQLLPSSR", r_umbraSpotShadowSelectionNames, 1, 0x44u, "Umbra culling for shadowed spot selection.");
  __asm { vmovss  xmm3, cs:__real@7f7fffff; max }
  r_umbraCullDynLights = Dvar_RegisterEnum("PNSPTQSLN", r_umbraCullDynLightsNames, 1, 4u, "Toggle Umbra culling for dynamic lighting.");
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  r_umbraDistance = Dvar_RegisterFloat("OLSOMMTQSM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Tolerance for 'uncertainty' in camera translation.  Drives the 'distance' parameter in Umbra queries.");
  r_umbraAllowGameVisibilityOffset = Dvar_RegisterBool("MKPSQQQTPR", 0, 4u, "If false, will an assert() will be triggered if Game Code provides an Umbra visibility query offset.  This may have severe performance implications and must be used very carefully.");
  r_umbraInvertStaticVisibility = Dvar_RegisterBool("NORQMNPOOP", 0, 4u, "Inverts the visibility results returned by Umbra, for all render objects baked in the tome.");
  r_umbraMergeBspTransientVisibility = Dvar_RegisterBool("LOPKTKKSTK", 1, 4u, "Apply transient visibility to umbra bsp visibility results");
  r_umbraShowOverlay = Dvar_RegisterBool("MNLSTLNTRQ", 0, 4u, "Toggles debug overlay of umbra occlusion buffer.");
  __asm { vmovss  xmm2, cs:__real@3f800000; min }
  r_umbraDebugView = Dvar_RegisterEnum("MTRLMPOMQP", r_sceneViewNames, 0, 4u, "Selects scene view for umbra debug displays.");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vmovaps xmm1, xmm7; value
  }
  r_umbraShowOverlayDisplaySizeScale = Dvar_RegisterFloat("NKTRSSLRQN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Scales the size at which the overlay is shown on screen.");
  r_umbraShowViewCells = Dvar_RegisterBool("MRMLRKPLLO", 0, 4u, "Toggles debug lines for current view cell");
  r_umbraShowPortals = Dvar_RegisterBool("MROMNNRLSL", 0, 4u, "Toggles debug lines for portals traversed in query");
  r_umbraShowVisibilityLines = Dvar_RegisterBool("MKQQRPRSPR", 0, 4u, "Toggles debug lines from view location to visible objects. Most useful in conjunction with a locked PVS (r_lockPvs).");
  r_umbraShowObjectBounds = Dvar_RegisterBool("MONTMKTTS", 0, 4u, "Toggles debug lines for bounds of visible objects");
  r_umbraShowVisibleVolume = Dvar_RegisterBool("MLPRPSLKLM", 0, 4u, "Toggles debug lines for volume PVS");
  r_flushUnifiedGeoBuffers = Dvar_RegisterBool("OLNMKQTQQQ", 0, 4u, "Triggers a flush on the geometry buffers");
  r_gpuCullTriSModels = Dvar_RegisterBool("TNNLTKSOS", 1, 4u, "Toggles GPU triangle culling for static models");
  r_gpuCullTriRigidModels = Dvar_RegisterBool("SKKROLPNS", 1, 4u, "Toggles GPU triangle culling for rigid models");
  r_gpuCullTriSkinnedModels = Dvar_RegisterBool("NMOKNPSSNP", 1, 4u, "Toggles GPU triangle culling for skinned models");
  r_gpuCullTriOcclusion = Dvar_RegisterBool("MQOKOKQKLS", 1, 4u, "Toggles GPU triangle occlusion culling for smodels");
  r_gpuCullTriClusterSModels = Dvar_RegisterBool("OMNQSQLSNS", 1, 4u, "Toggles GPU triangle cluster culling for static models");
  r_gpuCullTriClusterRigidModels = Dvar_RegisterBool("LNMKTOMKMS", 1, 4u, "Toggles GPU triangle cluster culling for rigid models");
  r_gpuCullTriClusterSkinnedModels = Dvar_RegisterBool("MKLSLMSPKT", 1, 4u, "Toggles GPU triangle cluster culling for skinned models");
  r_gpuCullTriClusterOcclusion = Dvar_RegisterBool("MKKMTPRTLQ", 1, 4u, "Toggles GPU triangle occlusion cluster culling for smodels");
  r_gpuCullOcclusion = Dvar_RegisterBool("LSSLQQNKQP", 1, 4u, "Toggles second gpu pipeline pass to occlusion cull in lit pass.");
  r_gpuCulling = Dvar_RegisterBool("NOMPOPPSTQ", 1, 4u, "Master switch for gpu culling. Toggles all gpu culling on or off");
  r_gpuCullTriMinThreshold = Dvar_RegisterInt("RPRLRNQKM", 16, 0, 64, 4u, "Disable triangle culling for cluster if we have less than or equal to this threshold of triangles.");
  r_gpuCullClusterMinThreshold = Dvar_RegisterInt("NROKSRLPNP", 1, 0, 64, 4u, "Disable cluster culling for submesh if we have less than or equal to this threshold of clusters.");
  r_gpuCullReusePrepassVisData = Dvar_RegisterBool("NPRMPOLNTS", 1, 4u, "Toggle specialized occlusion only cluster and triangle culling in the lit pass that reuses prepass results.");
  r_gpuCullUseVisBufferPrepass = Dvar_RegisterBool("MMKQPKOOSL", 1, 4u, "Toggle uase of camera visibility buffer prepass for pixel perfect triangle culling.");
  r_gpuCullClusterDepthMipBias = Dvar_RegisterInt("OLPLKRLNK", 2, 0, 4, 4u, "When sampling cluster depth for occlusion, bias mip level lower for increased culling accuracy.");
  r_gpuCullTriDepthMipBias = Dvar_RegisterInt("NSKMLOMLPT", 1, 0, 4, 4u, "When sampling triangle depth for occlusion, bias mip level lower for increased culling accuracy.");
  r_gpShowStats = Dvar_RegisterEnum("OTOTKNQL", r_gpShowStatsNames, 0, 4u, "Toggles gpu pipeline stats if cg_drawFps >= 3");
  r_showStats = Dvar_RegisterEnum("NSKMOPPKNK", r_showStatsNames, 0, 4u, "Toggles renderer stats if cg_drawFps >= 3.");
  r_umbraShowOverlayNDC = Dvar_RegisterEnum("OMKSNPNNQT", r_umbraShowOverlayNDCNames, 0, 4u, "Toggles debug overlay (NDC) of umbra occlusion buffer.");
  r_showCull = Dvar_RegisterEnum("LQRKMLSSST", r_sceneViewNames, 33, 4u, "Show model bounds for culled geo. Green=visible, Red=culled");
  r_showCullMode = Dvar_RegisterEnum("OKNKRQRKMM", r_showCullModeNames, 0, 4u, "Render mode for the 'r_showCull' debug drawing");
  r_showCullBModels = Dvar_RegisterBool("NSMOQPQOOR", 1, 4u, "Show culled brush model bounds when r_showCull enabled.");
  r_showCullBSP = Dvar_RegisterBool("NPNSPKTTPM", 1, 4u, "Show culled bsp surf bounds when r_showCull enabled.");
  r_showCullSModels = Dvar_RegisterBool("NLLKRPRMRS", 0, 4u, "Show visible static model bounds in green.");
  r_showCullXModels = Dvar_RegisterBool("SKRNNTKQL", 0, 4u, "Show culled xmodel bounds when r_showCull enabled.");
  r_showCullVolumetrics = Dvar_RegisterBool("MQKOTOLTQM", 0, 4u, "Show culled volumetric bounds (camera only). Green=visible, Red=culled");
  __asm
  {
    vmovss  xmm3, cs:__real@7f7fffff; max
    vmovss  xmm2, cs:__real@3a83126f; min
  }
  r_showFrustumGridDebug = Dvar_RegisterInt("MLQPKQNRKK", 0, 0, 6, 4u, "Show frustum grid buffer used for decals [mask 1-2, word range 3-4, cluster 5-6]");
  __asm { vmovaps xmm1, xmm14; value }
  r_frustumLightProxyMargin = Dvar_RegisterFloat("LRQMQTLORK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Margin of error for determining whether inside proxy volume");
  __asm
  {
    vmovss  xmm3, cs:__real@42800000; max
    vmovss  xmm2, cs:__real@c2800000; min
  }
  r_frustumLightProxyUseMeshCheck = Dvar_RegisterBool("QPLLSOQKQ", 0, 4u, "Use accurate per tri check if camera is inside proxy mesh.");
  __asm { vxorps  xmm1, xmm1, xmm1; value }
  v921 = Dvar_RegisterFloat("QKMOLSRRT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Expansion of proxy in world space for debugging");
  __asm
  {
    vmovss  xmm3, cs:__real@42800000; max
    vmovss  xmm1, cs:__real@40e00000; value
  }
  r_frustumLightProxyDebugExpand = v921;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  r_frustumLightProxyConsExpand = Dvar_RegisterFloat("SPPMKPQR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Expansion of proxy XY in clip space of target half texels");
  r_frustumLightProxyUseStencil = Dvar_RegisterBool("MPMKMOQSSP", 0, 4u, "Use dual pass stencil method for light proxies.");
  r_frustumLightUseZBinning = Dvar_RegisterBool("LTRKNKNRTK", 1, 4u, "Use ZBinning for F+ Proxies.");
  r_showFrustumLightsProxies = Dvar_RegisterInt("NOKRRTKOLO", 0, 0, 2, 4u, "Show frustum lights proxy geometry for forward+, 1 = All, 2 = only r_chooseFrustumLightProxy");
  r_chooseFrustumLightProxy = Dvar_RegisterInt("MLSTOLNMP", 0, 0, 127, 4u, "Choose which frustum-indexed light to render");
  r_showFrustumLightsDebug = Dvar_RegisterEnum("LMMMLLLPLN", r_showFrustumLightsDebugNames, 0, 4u, "Show frustum lights buffer used for forward+");
  r_showFrustumLightsMinIndexDebug = Dvar_RegisterInt("SOKTNRLSL", 0, 0, 31, 4u, "Choose which vol frustum slice use for start");
  r_showFrustumLightsMaxIndexDebug = Dvar_RegisterInt("NOLQRKTPRT", 31, 0, 31, 4u, "Choose which vol frustum slice use for end");
  __asm
  {
    vmovss  xmm3, cs:__real@3f800000; max
    vmovaps xmm1, xmm3; value
    vxorps  xmm2, xmm2, xmm2; min
  }
  r_showFrustumLightsDebugBlend = Dvar_RegisterFloat("SMRKKRKMS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Alpha blend frustum lights buffer");
  r_gpuMemoryPriority = Dvar_RegisterInt("PPQLLTMQL", 5, 5, 10, 0x44u, "Sets the priority of non-coherent GPU memory traffic vs. other traffic such as CPU, Audio, and IO device traffic.");
  __asm
  {
    vmovss  xmm2, cs:__real@bf800000; min
    vmovss  xmm3, cs:__real@7f7fffff; max
  }
  r_floatzCopyCompressed = Dvar_RegisterBool("NPNOLOTRMK", 1, 4u, "Use a compute shader to copy compressed depth data to $floatz");
  __asm { vmovaps xmm1, xmm2; value }
  v931 = Dvar_RegisterFloat("QTSTQORQL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Distance for level of detail 0");
  __asm
  {
    vmovss  xmm2, cs:__real@bf800000; min
    vmovss  xmm3, cs:__real@7f7fffff; max
  }
  r_lod0Dist = v931;
  __asm { vmovaps xmm1, xmm2; value }
  v935 = Dvar_RegisterFloat("MLMPLMKLRQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Distance for level of detail 1");
  __asm
  {
    vmovss  xmm2, cs:__real@bf800000; min
    vmovss  xmm3, cs:__real@7f7fffff; max
  }
  r_lod1Dist = v935;
  __asm { vmovaps xmm1, xmm2; value }
  v939 = Dvar_RegisterFloat("MLMPSMLTLP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Distance for level of detail 2");
  __asm
  {
    vmovss  xmm2, cs:__real@bf800000; min
    vmovss  xmm3, cs:__real@7f7fffff; max
  }
  r_lod2Dist = v939;
  __asm { vmovaps xmm1, xmm2; value }
  v943 = Dvar_RegisterFloat("NMTKSTSLK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Distance for level of detail 3");
  __asm
  {
    vmovss  xmm2, cs:__real@bf800000; min
    vmovss  xmm3, cs:__real@7f7fffff; max
  }
  r_lod3Dist = v943;
  __asm { vmovaps xmm1, xmm2; value }
  v947 = Dvar_RegisterFloat("LLSRLOLPPR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Distance for level of detail 4");
  __asm
  {
    vmovss  xmm2, cs:__real@bf800000; min
    vmovss  xmm3, cs:__real@7f7fffff; max
  }
  r_lod4Dist = v947;
  __asm { vmovaps xmm1, xmm2; value }
  r_lod5Dist = Dvar_RegisterFloat("LPONNKKRQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Distance for level of detail 5");
  r_forceLod = Dvar_RegisterEnum("QKLNRLQLS", r_forceLodNames, 6, 4u, "Force all level of detail to this level");
  r_clampLod = Dvar_RegisterEnum("LSPMNNNPKO", r_clampLodNames, 6, 4u, "Clamps the LOD chain to this LOD level and below.");
  r_forceLodToColLod = Dvar_RegisterBool("MOQLSLTLKM", 0, 4u, "Force level of detail to the col lod");
  r_drawPassTrans = Dvar_RegisterBool("SRKMTKMRT", 1, 4u, "Draw trans pass");
  r_drawPassEmissive = Dvar_RegisterBool("SOSNNLTSM", 1, 4u, "Draw emissive pass");
  r_drawShadowBeforePrepass = Dvar_RegisterBool("MMSRPPKMQP", 1, 4u, "Draw shadows before prepass");
  sm_sunSplitscreen = Dvar_RegisterEnum("OLSOQRKNLO", r_sunShadowsNames, 0, 0x44u, "DEPRECATED. Can't be removed because of gamerprofile.cpp lock");
  sm_sunAllow = Dvar_RegisterBool("MTLMSQMNTR", 1, 4u, "Allow sun shadow mapping.");
  sm_sunViewmodelHack = Dvar_RegisterBool("NSNTLRRRP", 1, 4u, "Disable viewmodel shadows from viewmodel rendering");
  sm_sunEnable = Dvar_RegisterBool("MQRQQONQSL", 1, 0x44u, "Enable sun shadow mapping from script.");
  sm_sunClip = Dvar_RegisterBool("LTPMKRMKKQ", 0, 4u, "Enable sun shadow pancakes.");
  sm_sunDynamics = Dvar_RegisterBool("NTKSTPSPPK", 1, 0x40u, "Enable dynamic shadow casters for sun shadows");
  sm_sunStageBounds = Dvar_RegisterBool("MQLRQNRRPR", 1, 0x44u, "Clamp the sun shadow near / far clip around the active stage trigger bounds.");
  __asm
  {
    vmovss  xmm3, cs:__real@3f800000; max
    vmovss  xmm1, cs:__real@3c23d70a; value
    vxorps  xmm2, xmm2, xmm2; min
  }
  sm_sunStageBoundsFeather = Dvar_RegisterFloat("MMOPPTKQMO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x44u, "threshold for geos behind sun shadowmap far plane to fallback to static shadow");
  sm_sunPoissonFiltering = Dvar_RegisterBool("MTQRRSOMTT", 0, 0x40u, "Enable noisy shadow filtering for sun shadowmaps.");
  sm_spotAllow = Dvar_RegisterBool("NQKKOONQPR", 1, 4u, "Allow spot shadow mapping");
  sm_spotEnable = Dvar_RegisterBool("RNPPKQOTN", 1, 0x44u, "Enable spot shadow mapping from script");
  sm_spotDynamics = Dvar_RegisterBool("NOOOPPSMNO", 1, 0x40u, "Enable dynamic shadow casters for spot shadows");
  sm_spotSModelTargetLOD = Dvar_RegisterInt("OKSOTLNPQQ", 1, -1, 5, 0, "Stops updating spotshadow cache for static models that have this LOD or lower (more detailed). -1 = this feature is off.");
  sm_spotHTileMask = Dvar_RegisterBool("LQKRMORNPQ", 1, 0, "Enable htile mask. This will improve performance when only small percentage of spot shadow map changes. Console only.");
  r_showSunStage = Dvar_RegisterBool("MNMPRSTTSN", 0, 4u, "Debug draw sun stage trigger volumes.");
  __asm
  {
    vmovss  xmm3, cs:__real@42c80000; max
    vmovss  xmm1, cs:__real@3f000000; value
  }
  r_debugDrawSunBounds = Dvar_RegisterBool("MMLRSMLSSK", 0, 4u, "Draw the sun shadow projection bounding box");
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  sm_minSpotLightScore = Dvar_RegisterFloat("MRMPNPSOMS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Minimum score (based on intensity, radius, and position relative to the camera) for a spot light to have shadow maps.");
  sm_dynlightAllSModels = Dvar_RegisterBool("NPLLLLSLMN", 0, 0x44u, "Enable, from script, rendering all static models in dynamic light volume when shadow mapping");
  sm_dynlightAllDModels = Dvar_RegisterBool("MMSTLSTOQK", 0, 0x44u, "Enable, from script, rendering all dynamic models in dynamic light volume when shadow mapping");
  __asm
  {
    vmovss  xmm3, cs:__real@47bb8000; max
    vmovss  xmm1, cs:__real@42800000; value
    vxorps  xmm2, xmm2, xmm2; min
  }
  v960 = Dvar_RegisterFloat("LLNKNQLRTP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x44u, "When picking shadows for primary lights, measure distance from a point this far in front of the camera.");
  __asm
  {
    vmovss  xmm3, cs:__real@3f800000; max
    vmovss  xmm1, cs:__real@3e000000; value
  }
  sm_lightScore_eyeProjectDist = v960;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  sm_lightScore_spotProjectFrac = Dvar_RegisterFloat("LPKSQRROQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x44u, "When picking shadows for primary lights, measure distance to a point this fraction of the light's radius along it's shadow direction.");
  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vmovss  xmm2, cs:__real@3f400000; y
    vmovss  xmm1, cs:__real@3e800000; x
  }
  sm_showOverlay = Dvar_RegisterEnum("MRMSTLMQTN", sm_showOverlayNames, 0, 4u, "Show shadow map overlay");
  __asm
  {
    vxorps  xmm3, xmm3, xmm3; min
    vmovss  [rsp+148h+flags], xmm0
  }
  sm_showOverlayDepthBounds = Dvar_RegisterVec2("MKQTLOMPOT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsci, 4u, "Near and far depth values for the shadow map overlay");
  sm_showOverlayFocus = Dvar_RegisterInt("MRSPQMKQRR", 0, 0, 65, 4u, "Shadow map to focus on when displaying the shadow map overlay ( Useful when there are a large number of shadowed lights )");
  sm_showOverlayCompressionDebug = Dvar_RegisterInt("OLMMPTQOLS", 0, 0, 1, 4u, "Shadow map compression data display mode: 0 - depth, 1-traversal count.");
  sm_showOverlayCsmPrepassDebug = Dvar_RegisterInt("OLQRLLQRSR", 1, 1, 12, 4u, "Minimum CSM prepass depth.");
  sm_showOverlayMip = Dvar_RegisterInt("NRMPSRRNMT", 0, 0, 16, 4u, "Mindepth mip for overlay (0 = fullres shadow depth)");
  sm_showOverlayViewmodel = Dvar_RegisterBool("LKNMMKPOR", 0, 4u, "Show the viewmodel shadow depth for near cascade");
  sm_showOverlayTransShadow = Dvar_RegisterBool("NKQMPTTQRN", 0, 4u, "Show the TranslucentShadowMask");
  __asm
  {
    vmovss  xmm3, cs:__real@47800000; max
    vmovss  xmm2, cs:__real@c7800000; min
  }
  sm_cachedSunShadowDebugShowCachePartition = Dvar_RegisterInt("LRLPPMSOTO", 0, 0, 1, 0x44u, "Select shadow map tile cache partition to show in overlay mode");
  __asm { vmovaps xmm1, xmm7; value }
  sm_polygonOffsetScale = Dvar_RegisterFloat("NSRPRMLSTR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Shadow map offset scale");
  __asm { vmovss  xmm3, cs:__real@46000000; max }
  sm_polygonOffsetBias = Dvar_RegisterInt("LSOSQNSQPM", 0, -65536, 0x10000, 4u, "Shadow map offset bias");
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  sm_polygonOffsetClamp = Dvar_RegisterFloat("OTKOTTTRS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Shadow map offset clamp");
  sm_strictCull = Dvar_RegisterBool("MTNQQLTKQT", 1, 0x44u, "Strict shadow map cull");
  sm_fastSunShadow = Dvar_RegisterBool("NMOSNONTK", 1, 4u, "Fast sun shadow");
  sm_sunMoving = Dvar_RegisterBool("LLNTKRPPQK", 0, 0x40u, "Indicates that the sun is animated and disables sun shadow cache processing.");
  sm_debugFastSunShadow = Dvar_RegisterBool("LSKOKQMMLT", 0, 4u, "Debug fast sun shadow");
  sm_roundRobinPrioritySpotShadowsMax = Dvar_RegisterInt("OKKTMLKNNR", 16, 0, 16, 0, "How many lights can receive dynamic shadows (w/ round robin updates) Limits sm_roundRobinPrioritySpotShadows.");
  sm_spotUpdateLimitMax = Dvar_RegisterInt("SRKPNTSRM", 8, 0, 8, 0, "Maximum number of spot shadows to update per frame (limits sm_spotUpdateLimit)");
  __asm
  {
    vmovss  xmm6, cs:__real@3f800000
    vmovss  xmm3, cs:__real@40800000; max
  }
  sm_spotShadowCulling = Dvar_RegisterEnum("MSSMKNPMOO", sm_spotShadowCullingModes, 2, 0x44u, "0 = legacy culling ( no line light ), 1 = respect line light, 2 = respect line light + using optimized view volume ( default )");
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm6; value
  }
  sm_cachedSunShadowLODBias = Dvar_RegisterFloat("OKQKMQMTRQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x44u, "LOD bias scale for static model shadow cache. Sets the bias between prev partition end and current partition end.");
  r_animBoundsWarn = Dvar_RegisterEnum("LQSKPOKSOK", r_animBoundsWarnModes, 1, 4u, "Warn when model bounds are estimated far off from their actual animated values.");
  __asm
  {
    vmovaps xmm3, xmm12; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm6; value
  }
  r_animBoundsScale = Dvar_RegisterFloat("OLPSPKNKMQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Scale animated xmodel bounds by the given factor");
  __asm
  {
    vmovaps xmm3, xmm12; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm6; value
  }
  r_animEstimatedBoundsScale = Dvar_RegisterFloat("QNRPNRLNM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Scale animated xmodel estimated bounds by the given factor");
  __asm { vmovss  xmm1, cs:__real@3e800000; value }
  sm_forceLinear = Dvar_RegisterBool("NMOTMSSKOS", 0, 4u, "Force shadow sampling to be linear");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  sm_projStepSize = Dvar_RegisterFloat("MNKPKSPRMO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Step size for XB2 shadow map projection sampling.");
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  v990 = Dvar_RegisterFloat("MLKPNOMPST", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Dev tweak to blur the screen");
  __asm { vmovss  xmm1, cs:__real@3e800000; value }
  r_blur = v990;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  r_blurAALimit = Dvar_RegisterFloat("MORPOLQMSK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Dev tweak At which blur radius can we disable AA");
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm6; value
  }
  r_blurMipStepLimit = Dvar_RegisterFloat("NLMQNNTTMM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Dev tweak At which blur radius can we drop mip");
  r_distortion = Dvar_RegisterBool("NNKRMTSNPL", 1, 4u, "Enable distortion");
  r_dof_enable = Dvar_RegisterBool("OQSPSSNRT", 1, 0, "Enable the depth of field effect");
  r_dof_tweak = Dvar_RegisterEnum("NTMOSTPSM", s_dofTweakNames, 0, 4u, "Use dvars to set the depth of field effect; overrides r_dof_enable");
  r_dof_scope_mode = Dvar_RegisterEnum("NSQOOQNQTM", r_dofScopeModeNames, 1, 0x40u, "Depth of Fields mode for scope lens");
  __asm
  {
    vmovss  xmm3, cs:__real@42afd1ec; max
    vmovss  xmm2, cs:__real@3fcccccd; min
    vmovss  xmm1, cs:__real@422ccccd; value
  }
  r_dof_physical_enable = Dvar_RegisterBool("MRSTKSMMP", 1, 0x44u, "enable physical camera controls (using aperture priority) ");
  r_dof_physical_filmDiagonal = Dvar_RegisterFloat("RMRSOQSQL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Diagonal size of the film/sensor (mm). The bigger the sensor size, the bigger the circle of confusion (which means stronger blurring at all distances). Defaults to full-frame 35mm");
  r_dof_physical_accurateFov = Dvar_RegisterBool("LNLKRSOKML", 1, 0x44u, "Enable physical fov (but still based on cg_fov). This will make the fov to subtlety change depending on the focus distance");
  __asm
  {
    vmovss  xmm8, cs:__real@41f00000
    vmovss  xmm2, cs:__real@3e000000; min
    vmovss  xmm1, cs:__real@41000000; value
  }
  r_dof_physical_hipEnable = Dvar_RegisterBool("RMNRQNKMK", 0, 0x44u, "Enable hyperfocal mode");
  __asm { vmovaps xmm3, xmm8; max }
  v1004 = Dvar_RegisterFloat("LOPPQMRSNT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x44u, "Aperture of the camera for the scene in the hyperfocal mode");
  __asm
  {
    vmovss  xmm2, cs:__real@38d1b717; min
    vmovss  xmm1, cs:__real@3cf5c28f; value
  }
  r_dof_physical_hipFstop = v1004;
  __asm { vmovaps xmm3, xmm6; max }
  r_dof_physical_hipSharpCocDiameter = Dvar_RegisterFloat("LPSPQQMMNR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x44u, "Defines what circle of confusion can be considered sharp (mm). Defaults to 0.03mm, generally accepted value for 35mm");
  __asm
  {
    vmovss  xmm0, cs:__real@3c23d70a
    vmovss  xmm10, cs:__real@3fc00000
    vmovss  xmm2, cs:__real@41000000; y
    vmovss  [rsp+148h+max], xmm14
    vmovss  dword ptr [rsp+148h+description], xmm0
    vmovaps xmm1, xmm10; x
    vmovaps xmm3, xmm7; z
    vmovss  [rsp+148h+flags], xmm7
  }
  v1013 = Dvar_RegisterVec4("SONPKLQPK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagscj, descriptionbt, maxbj, 0x44u, "Hyperfocal mode focus speed (focus dist. far to near, focus dist. near to far, aperture opening, aperture closing)");
  __asm
  {
    vmovss  xmm2, cs:__real@3e000000; min
    vmovss  xmm1, cs:__real@41b00000; value
  }
  r_dof_physical_hipFocusSpeed = v1013;
  __asm { vmovaps xmm3, xmm8; max }
  v1017 = Dvar_RegisterFloat("LMMLPTTTK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Aperture of the camera for the scene. Lower f-stop yields a shallower depth of field. Typical values range from f/1 to f/22. Rare extremes are f/0.75 and f/32");
  __asm
  {
    vmovss  xmm3, cs:__real@46ea6000; max
    vmovss  xmm1, cs:__real@41ea6873; value
  }
  r_dof_physical_fstop = v1017;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  v1021 = Dvar_RegisterFloat("LRSPNPPPTP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Distance to the plane in focus for the scene");
  __asm { vmovss  xmm2, cs:__real@3e000000; min }
  r_dof_physical_focusDistance = v1021;
  __asm
  {
    vmovaps xmm3, xmm8; max
    vmovaps xmm1, xmm8; value
  }
  v1025 = Dvar_RegisterFloat("NOTLPKOSO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Aperture of the camera for the view model. Lower f-stop yields a shallower depth of field. Typical values range from f/1 to f/22. Rare extremes are f/0.75 and f/32");
  __asm
  {
    vmovss  xmm3, cs:__real@42c80000; max
    vmovss  xmm1, cs:__real@41a00000; value
  }
  r_dof_physical_viewModelFstop = v1025;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  v1029 = Dvar_RegisterFloat("OLOPMPMMOT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Distance to the plane in focus for the view model");
  __asm
  {
    vmovss  xmm0, cs:__real@3c23d70a
    vmovss  xmm2, cs:__real@41400000; y
    vmovss  xmm1, cs:__real@41000000; x
  }
  r_dof_physical_viewModelFocusDistance = v1029;
  __asm
  {
    vmovss  [rsp+148h+max], xmm14
    vmovss  dword ptr [rsp+148h+description], xmm0
    vmovaps xmm3, xmm7; z
    vmovss  [rsp+148h+flags], xmm7
  }
  v1034 = Dvar_RegisterVec4("MOQONRPQOT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsck, descriptionbu, maxbk, 4u, "ADS focus speed (focus dist. far to near, focus dist. near to far, aperture opening, aperture closing)");
  __asm
  {
    vmovss  xmm2, cs:__real@3e000000; min
    vmovss  xmm1, cs:__real@3fb33333; value
  }
  r_dof_physical_adsFocusSpeed = v1034;
  __asm { vmovaps xmm3, xmm8; max }
  v1038 = Dvar_RegisterFloat("NTPTNSQRK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "ADS minimum f-stop (optimal aperture and focus distance are automatically calculated for this mode)");
  __asm
  {
    vmovss  xmm2, cs:__real@3e000000; min
    vmovss  xmm1, cs:__real@41b00000; value
  }
  r_dof_physical_adsMinFstop = v1038;
  __asm { vmovaps xmm3, xmm8; max }
  r_dof_physical_adsMaxFstop = Dvar_RegisterFloat("OKRMSSLMMO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "ADS maximum f-stop (optimal aperture and focus distance are automatically calculated for this mode)");
  __asm
  {
    vmovss  xmm3, cs:__real@42c80000; max
    vmovss  xmm1, cs:__real@41100000; value
    vxorps  xmm2, xmm2, xmm2; min
  }
  v1045 = Dvar_RegisterFloat("SLSMSSTQP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x44u, "Minimum focus distance (inches)");
  __asm
  {
    vmovss  xmm2, cs:__real@40800000; min
    vmovss  xmm1, cs:__real@41680000; value
  }
  r_dof_physical_minFocusDistance = v1045;
  __asm
  {
    vmovaps xmm3, xmm14; max
    vmovss  xmm12, cs:__real@3d4ccccd
  }
  r_dof_physical_maxCocDiameter = Dvar_RegisterFloat("OSRSSRQOS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Maximum circle of confusion diameter (virtual units, might be clamped for bokeh dof)");
  __asm
  {
    vmovaps xmm7, xmm6
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm12; value
  }
  v1054 = Dvar_RegisterFloat("LNTNPRQSNL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40u, "Allows to suppress small features that might cause flickering when expanded by the dof");
  __asm { vmovss  xmm1, cs:__real@3e000000; value }
  r_dof_filter_fireflySuppression = v1054;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v1058 = Dvar_RegisterFloat("MSTLTQKSNS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40u, "Bokeh edge sharpness (halfres circular bokeh only)");
  __asm { vmovss  xmm1, cs:__real@3e800000; value }
  r_dof_filter_bokehEdgeSharpness = v1058;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  r_dof_filter_sharpen = Dvar_RegisterFloat("LRNPKOQSKM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40u, "Sharpens the bokeh effect with an unsharp mask (halfres circular bokeh only)");
  r_dof_filter_temporalFilter = Dvar_RegisterBool("LTMOMNTNNN", 1, 4u, "Toggles temporal filter (circular bokeh only)");
  r_dof_filter_backgroundReconstruction = Dvar_RegisterBool("NQLLRKPRPR", 1, 0x40u, "Toggles dof background reconstruction for blurred objects on top of sharp backgrounds (circular bokeh only)");
  v1062 = Sys_GetXB3ConsoleType();
  r_dof_filter_preset = Dvar_RegisterEnum("OMQRTSKPOS", r_dofModePresetNames, v1062 == XB3_CONSOLE_SCORPIO, 4u, "Changes dof sampling quality");
  r_dof_filter_fullres = Dvar_RegisterBool("RLKSLTQMQ", 1, 4u, "Toggles bokeh fullres mode");
  r_dof_physical_distanceMeter = Dvar_RegisterBool("POKSKSOMO", 0, 0, "Enable physical depth of field debug information");
  r_vignetteUseTweaks = Dvar_RegisterBool("NPRQLNTRTK", 0, 4u, "Use vignette tweak dvars");
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  r_vignetteTweakIntensity = Dvar_RegisterFloat("MPNORSMRPR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Vignette effect intensity");
  __asm { vmovss  xmm14, cs:__real@41200000 }
  r_vignetteTweakSquareAspectRatio = Dvar_RegisterBool("LPSOLLSTTS", 0, 4u, "Vignette use square aspect ratio");
  __asm
  {
    vxorps  xmm3, xmm3, xmm3; min
    vmovaps xmm2, xmm7; y
    vmovaps xmm1, xmm7; x
    vmovss  [rsp+148h+flags], xmm14
  }
  r_vignetteTweakSize = Dvar_RegisterVec2("TLTRLOSTT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagscl, 4u, "Vignette x and y size");
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm7; value
  }
  r_vignetteTweakFalloff = Dvar_RegisterFloat("MMQLSKSKTO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Vignette falloff size");
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
    vmovss  xmm14, cs:__real@40000000
  }
  r_vignetteTweakFalloffStart = Dvar_RegisterFloat("LSLLLMORKM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Vignette falloff start position");
  __asm
  {
    vxorps  xmm3, xmm3, xmm3; min
    vxorps  xmm2, xmm2, xmm2; y
    vxorps  xmm1, xmm1, xmm1; x
    vmovss  [rsp+148h+flags], xmm14
  }
  v1080 = Dvar_RegisterVec2("LMSPNQOPNK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagscm, 4u, "Vignette Box Size");
  __asm { vmovss  xmm3, cs:__real@c0000000; min }
  r_vignetteTweakBoxSize = v1080;
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; y
    vxorps  xmm1, xmm1, xmm1; x
    vmovss  [rsp+148h+flags], xmm14
  }
  v1084 = Dvar_RegisterVec2("NTLLQPKLTT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagscn, 4u, "Vignette Position Offset");
  __asm { vmovss  xmm3, cs:__real@41200000; max }
  r_vignetteTweakOffset = v1084;
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  r_vignetteVisionSetLerpDuration = Dvar_RegisterFloat("OMPSKRMROL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Vignette vision set lerp duration in seconds");
  __asm { vmovss  xmm1, cs:__real@3f400000; value }
  r_daltonizeForceMode = Dvar_RegisterEnum("MTSKONMSOO", daltonizeModeNames, 0, 4u, "Selects the Daltonize mode, overriding the gamer profile setting if not 0/None.");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  r_daltonizeIntensity = Dvar_RegisterFloat("ONKRLLRSP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Scene daltonize correction strength.");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm6; value
  }
  r_daltonizeUIIntensity = Dvar_RegisterFloat("LQQQTRQRLN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "UI daltonize correction strength.");
  r_colorblindMode = Dvar_RegisterEnum("PPLNNTNTP", daltonizeModeNames, 0, 4u, "Selects the Colorblind simulation mode");
  r_colorTable = Dvar_RegisterEnum("NPTLTMLLMN", colorTableNames, 0, 4u, "Selects the set of colors used for text markup");
  r_colorGradingEnable = Dvar_RegisterBool("NRKSTMPPQK", 1, 4u, "Enable color grading.");
  r_colorGradingClutEnable = Dvar_RegisterBool("PKKOSROQM", 1, 4u, "Enable CLUT color grading.");
  r_colorGradingAnalyticalEnable = Dvar_RegisterBool("LSLQOMPPOK", 1, 4u, "Enable analytical color grading.");
  r_disablePIP = Dvar_RegisterBool("MQTPKKPOKT", 1, 4u, "Force disable PIP");
  r_showPIPTexture = Dvar_RegisterBool("TTTKKTKPR", 0, 4u, "Display the current PIP texture on the HUD for debug purposes");
  r_showLightmap = Dvar_RegisterInt("MMMLSPLMOL", -1, -1, 255, 4u, "Display specified lightmap texture. -1 = none, valid index = draw single lightmap, invalid index = draw all of them");
  __asm { vmovss  xmm3, cs:__real@42c80000; max }
  r_showHeightmap = Dvar_RegisterBool("LNQTKNKRRQ", 0, 4u, "Display heightmap texture.");
  __asm
  {
    vmovaps xmm2, xmm6; min
    vmovaps xmm1, xmm6; value
  }
  r_showHeightmapScale = Dvar_RegisterFloat("NTRSRSLLKS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Display heightmap texture zoom-in scale.");
  r_showFogSpline = Dvar_RegisterInt("OKPKTMOSSO", -1, -1, 9, 4u, "Display specified fog spline texture. -1 = none, 0 = draw fog spline, 1 = draw all blendset assets, >1 = blendset index+2");
  r_fogSplineForceUpdate = Dvar_RegisterBool("LPLKRKQOPP", 0, 0, "Force fog spline blend to be generated each frame");
  r_font_cache_debug_display = Dvar_RegisterBool("MNPLQPMLNT", 0, 4u, "Display the current fontcache texture on the HUD for debug purposes");
  __asm
  {
    vmovss  xmm3, cs:__real@7f7fffff; max
    vmovss  xmm2, cs:__real@ff7fffff; min
    vmovss  xmm1, cs:__real@41000000; value
  }
  r_profMaterial = Dvar_RegisterEnum("OMMOTLTTQ", r_profMaterialNames, 0, 0, "Enable profile material names.");
  r_outdoorFeather = Dvar_RegisterFloat("LQKORRQMLR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40u, "Outdoor z-feathering value");
  Dvar_SetModified(r_outdoorFeather);
  r_sun_from_dvars = Dvar_RegisterBool("NNTTKSKSKK", 0, 4u, "Set sun flare values from dvars rather than the level");
  r_flareDrawOrder = Dvar_RegisterEnum("MNQQPKKMSM", r_flareDrawOrderNames, 1, 0, "flare draw order");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm6; value
  }
  r_flareOcclusionScale = Dvar_RegisterFloat("MKQQQTPRST", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "scales flare opacity");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  v1106 = Dvar_RegisterFloat("OMOOMOSMNT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "flare opacity min value");
  __asm
  {
    vmovss  xmm2, cs:__real@bf800000; min
    vmovss  xmm1, cs:__real@3f000000; value
  }
  r_flareOcclusionMin = v1106;
  __asm { vmovaps xmm3, xmm6; max }
  v1110 = Dvar_RegisterFloat("MTOMPPQPNR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "flare opacity extinction bias");
  __asm
  {
    vmovss  xmm3, cs:__real@41a00000; max
    vmovss  xmm2, cs:__real@c1a00000; min
    vmovss  xmm1, cs:__real@c1000000; value
  }
  r_flareOcclusionExtinctionBias = v1110;
  r_flareDrawThresholdEV = Dvar_RegisterFloat("LOLSPQKKQK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "flare draw threshold EV relative to average scene luminance");
  r_flareHalfres = Dvar_RegisterBool("NOQOSRSKON", 1, 4u, "Draw flares at half res (requires r_vrs 2).");
  r_atlasAnimFPS = Dvar_RegisterInt("MSQTTSOKRN", 15, 1, 120, 4u, "Speed to animate atlased 2d materials");
  com_statmon = Dvar_RegisterBool("NQKOQPQOLN", 0, 0, "Draw stats monitor");
  __asm
  {
    vmovss  xmm2, cs:__real@3f000000; min
    vmovss  xmm1, cs:__real@3f59999a; value
  }
  r_SkinnedCacheSize = Dvar_RegisterInt("STLRTMLSP", 737280, 0, 0x200000, 0, "size of skin cache");
  __asm { vmovaps xmm3, xmm6; max }
  v1117 = Dvar_RegisterFloat("OMLRMTTPQN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Threshold at which we start culling corpses");
  __asm
  {
    vmovss  xmm2, cs:__real@3f1eb852; y
    vmovss  xmm1, cs:__real@3f6b851f; x
  }
  r_SkinnedCacheCorpseThreshold = v1117;
  __asm
  {
    vmovaps xmm3, xmm12; min
    vmovss  [rsp+148h+flags], xmm6
  }
  r_SkinnedCacheLODThreshold = Dvar_RegisterVec2("NSORRORRM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsco, 0, "Threshold at which we start reducing LOD's of skinned models");
  R_WarnInitDvars();
  prof_probe[0] = Dvar_RegisterEnum("MTLLSRMMQN", prof_enumNames, 0, 0, "Profile probe");
  prof_probe[1] = Dvar_RegisterEnum("SNTMPMSNK", prof_enumNames, 0, 0, "Profile probe");
  prof_probe[2] = Dvar_RegisterEnum("NKQLQKKQTN", prof_enumNames, 0, 0, "Profile probe");
  prof_probe[3] = Dvar_RegisterEnum("TSSTSLMQK", prof_enumNames, 0, 0, "Profile probe");
  prof_probe[4] = Dvar_RegisterEnum("NMLLNMTLMN", prof_enumNames, 0, 0, "Profile probe");
  prof_probe[5] = Dvar_RegisterEnum("LLNSRKTQTK", prof_enumNames, 0, 0, "Profile probe");
  prof_probe[6] = Dvar_RegisterEnum("NNQLKPRPPN", prof_enumNames, 0, 0, "Profile probe");
  prof_probe[7] = Dvar_RegisterEnum("LMSSONSLMK", prof_enumNames, 0, 0, "Profile probe");
  prof_probe[8] = Dvar_RegisterEnum("NPLKRSPTSN", prof_enumNames, 0, 0, "Profile probe");
  prof_probe[9] = Dvar_RegisterEnum("LONSLQQPPK", prof_enumNames, 0, 0, "Profile probe");
  prof_probe[10] = Dvar_RegisterEnum("MRSKKRKMNK", prof_enumNames, 0, 0, "Profile probe");
  prof_probe[11] = Dvar_RegisterEnum("PPRRMMNQR", prof_enumNames, 0, 0, "Profile probe");
  prof_probe[12] = Dvar_RegisterEnum("MTMTRTSQQK", prof_enumNames, 0, 0, "Profile probe");
  prof_probe[13] = Dvar_RegisterEnum("RKROPKRTR", prof_enumNames, 0, 0, "Profile probe");
  prof_probe[14] = Dvar_RegisterEnum("NKRTPMRKTK", prof_enumNames, 0, 0, "Profile probe");
  prof_probe[15] = Dvar_RegisterEnum("SPRLRTMMR", prof_enumNames, 0, 0, "Profile probe");
  __asm
  {
    vmovss  xmm3, cs:__real@447a0000; max
    vmovss  xmm2, cs:__real@3dcccccd; min
  }
  prof_probeMaxMsec = Dvar_RegisterInt("LRLQSNNKNL", 30, 1, 1000, 0, "Height of each profile probe graph, in milliseconds");
  __asm { vmovaps xmm1, xmm14; value }
  prof_sortTime = Dvar_RegisterFloat("OMOTNNTTPO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Time in seconds between resort profiles");
  profile_script = Dvar_RegisterBool("OLQLTNRTS", 0, 0, "Enable profile scripts");
  profile_script_hierarchical = Dvar_RegisterBool("NRLRKNLNRM", 0, 0, "Toggle hierarchical drawing of script profiling");
  profile_script_by_file = Dvar_RegisterBool("LSOQPRPTOR", 0, 0, "Enable profile scripts by source file");
  profile_script_graph = Dvar_RegisterBool("MSNQMTKMLR", 0, 0, "Toggle graph script profiling");
  profile_script_graph_row = Dvar_RegisterInt("MOPSPOKORQ", 0, 0, 128, 0, "Height of each profile probe graph, in milliseconds");
  profile_script_instance = Dvar_RegisterInt("LPTPLNKRLM", 0, 0, 0, 0, "0 for server script; 1 for client script");
  r_staticModelDumpLodInfo = Dvar_RegisterBool("NKRNLTPMQM", 0, 0, "Dump static model info for the next frame.");
  r_showAmbientSModels = Dvar_RegisterBool("NKMPNOOMTQ", 1, 0, "Toggle rendering of ambient static models.");
  r_showModelLMapSModels = Dvar_RegisterBool("PSPLSNSNT", 1, 0, "Toggle rendering of model lightmap static models.");
  r_materialPSODevOnDemand = Dvar_RegisterBool("NQSSRKMLMQ", 0, 0, "Only build dev PSOs on demand, preventing in-game hickups for unused techniques; Turn this off to prepare all debug techniques for development.");
  r_materialPSODevASync = Dvar_RegisterBool("NLQRQNTOQ", 1, 0, "When dev PSOs are requested, wake up PSO workers. Debug draws will be skipped until they are ready.");
  R_ReflectionProbe_RegisterDvars();
  R_RegisterThermalDvars();
  r_enableCamoTweaks = Dvar_RegisterBool("MRKLLLTSNK", 0, 0x40u, "Enable tweak override for camo tint color.");
  __asm
  {
    vmovaps xmm3, xmm6; b
    vmovaps xmm2, xmm6; g
    vmovaps xmm1, xmm6; r
    vmovss  [rsp+148h+flags], xmm6
  }
  r_camoTweakTintColor = Dvar_RegisterColor("NPSTTOPQTS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagscp, 0x40u, "Color to override camo tint when tweak is enabled.");
  r_tessellationOverride = Dvar_RegisterInt("LROORPNKNN", -1, -1, 2, 0x40u, "Overrides r_tessellation. -1 = No Override 0 = NoTess 1 = NearTess 2 = AllTess");
  r_tessellation = Dvar_RegisterEnum("MMNMQTSOSP", r_tessellationNames, 1, 0, "Enables tessellation of world geometry, with an optional cutoff distance.");
  r_tessellationForceFlushesOnShaderStageChanges = Dvar_RegisterBool("LMTNLRSPSN", 0, 0x40u, "Force partialPS flush when switching in/out of T&D stages. Emergency last resort for XB t&d crashes.");
  __asm
  {
    vmovss  xmm3, cs:__real@41a00000; max
    vmovss  xmm2, cs:__real@c1a00000; min
    vmovss  xmm1, cs:__real@3f000000; value
  }
  r_drawTessellatedWorld = Dvar_RegisterBool("OKNMROOQTS", 1, 4u, "Draw tessellated world surfaces");
  r_tessellationLodBias = Dvar_RegisterFloat("NNMPPPMOSR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Displacement map lod bias.");
  __asm { vmovss  xmm3, cs:__real@42c80000; max }
  r_tessellationHeightAuto = Dvar_RegisterBool("SQTTTTNQP", 1, 4u, "Correctly auto scale displacement heights for layers to grow as texture is stretched over larger surface areas to preserve feature proportions.");
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm6; value
  }
  v1133 = Dvar_RegisterFloat("OKOSKLQSPS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Displacement height scale factor.");
  __asm { vmovss  xmm3, cs:__real@41200000; max }
  r_tessellationHeightScale = v1133;
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm6; value
  }
  v1137 = Dvar_RegisterFloat("LPTSOPRMQL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Hybrid per pixel displacement scale.");
  __asm { vmovss  xmm1, cs:__real@3d800000; value }
  r_tessellationHybrid = v1137;
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  r_tessellationEyeScale = Dvar_RegisterFloat("ONSPMLPMK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Scale applied due to eye * object normal for less tessellation on facing polygons.");
  __asm { vmovss  xmm3, cs:__real@447a0000; max }
  r_subdomainLimit = Dvar_RegisterInt("MRMRQNPPOT", 3, 0, 3, 0, "Maximum number of extra tessellation subdivisions using instancing (max tess amts are 0:64, 1:128, 2:192, 3:256, max instances used are 0:1, 1:4, 2:9, 3:12)");
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm6; value
  }
  r_subdomainScale = Dvar_RegisterFloat("NNONNSLOPM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Scales the extra subdivision amount (for values < 1, not all instanced sub triangles will draw).");
  r_deviceDebug = Dvar_RegisterBool("r_deviceDebug", 0, 0, "Create D3D11/12 device with debug flags.");
  r_deviceDebugBreaks = Dvar_RegisterInt("QNOOSMOKL", 0, 0, 2, 0, "PC: 0 = no breaks; 1 = on error; 2 = on warning. XB3: 0 = no breaks; 1 = breaks.");
  r_gpuHangDebug = Dvar_RegisterBool("LRTLMQPLMN", 1, 0, "Enable vendor specific gpu hang analysis.");
  r_gpuHangDebugFlush = Dvar_RegisterInt("NPORSPRRQR", 0, 0, 1024, 0, "Flush immediate context after every 'current.value' render tasks when enabled. Set to 1 to flush at every task; Set to 0 to disable.");
  r_gpuHangDebugSync = Dvar_RegisterBool("MOKRPKKRPM", 0, 0, "Always sync cpu with gpu every frame.");
  r_deviceProfile = Dvar_RegisterBool("NQRMSLTKTP", 0, 0, "Create D3D11 device with profile flags.");
  r_rtFormatValidation = Dvar_RegisterBool("LLKLOMTMNS", 0, 0, "Validate render target formats.");
  r_bindingValidation = Dvar_RegisterBool("LNQKOMTMKM", 0, 0, "Validate transient resource bindings.");
  r_printBarrierActions = Dvar_RegisterBool("PSSQNTNRN", 0, 0, "Print Xbox hardware actions corresponding to resource barrier transitions");
  r_hdrSpotmeter = Dvar_RegisterBool("LSQOMQRTR", 0, 4u, "Perform HDR spot meter measurement of luminance and color in center of screen");
  R_HDRScopes_RegisterDvars();
  r_useComputeSkinning = Dvar_RegisterBool("MLTKKKQMSN", 1, 0, "Enables compute shader (GPU) skinning.");
  r_smpCompute = Dvar_RegisterBool("NNNSPLTKLL", 1, 0, "Enables processing frontend compute cmds on a worker thread; requires r_asyncCompute enabled.");
  r_smpComputeInSplitScreen = Dvar_RegisterBool("NPKPSPQOPK", 0, 0, "Enables processing frontend compute cmds on a worker thread in splitscreen; requires r_asyncCompute and r_smpCompute enabled.");
  r_asyncCompute = Dvar_RegisterBool("MTPOKSNNRL", 1, 0, "Enables submitting GPU compute shader workloads on async compute pipes, allowing overlap with graphics workloads.");
  r_primBisect = Dvar_RegisterBool("LNKSLMMRNQ", 0, 0, "Enables limiting the range of drawn primitives, for debugging.");
  r_primBegin = Dvar_RegisterInt("SRSNLTKTN", 0, 0, 1000000, 0, "Beginning of the range of drawn primitives, inclusive.");
  r_primEnd = Dvar_RegisterInt("NTMRRKOQLN", 1000000, 0, 1000000, 0, "End of the range range of drawn primitives, inclusive.");
  FX_RegisterDvars();
  SdrDefaultColorimetry = R_GetSdrDefaultColorimetry();
  r_colorimetrySdr = Dvar_RegisterEnum("OKMKNSQTTO", r_colorimetrySdrNames, SdrDefaultColorimetry, 0, "SDR Colorimetry");
  __asm
  {
    vmovss  xmm3, cs:__real@41a00000; max
    vmovss  xmm2, cs:__real@c1a00000; min
  }
  r_allowHDR = Dvar_RegisterBool("MTONTNKOKR", 1, 0, "Use HDR output if HDR TV is detected.");
  __asm { vxorps  xmm1, xmm1, xmm1; value }
  v1148 = Dvar_RegisterFloat("LLLOMMRTOO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "(Debug) Universal tonemap additional exposure adjustment (in EV)");
  __asm { vmovss  xmm1, cs:__real@3ecccccd; value }
  r_colorimetryUniversalTonemapExposureAdjust = v1148;
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  r_hdrFilmGrainStrengthScale = Dvar_RegisterFloat("LKPPLTOMQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Film grain strength adjustment in HDR mode");
  r_forceHDRCapable = Dvar_RegisterBool("LNKOKNKNRL", 0, 0, "Force HDR capable even if monitor does not support it");
  r_universalClutForceUpdate = Dvar_RegisterBool("NPQKPOQOLT", 0, 0, "Force universal CLUT to be generated each frame");
  r_uiClutForceUpdate = Dvar_RegisterBool("MQPRRLOQLO", 0, 0, "Force UI CLUT to be generated each frame");
  __asm
  {
    vmovss  xmm3, cs:__real@45800000; max
    vmovss  xmm2, cs:__real@c0400000; min
    vmovss  xmm1, cs:__real@bf800000; value
  }
  r_uiClutEnabledInShaders = Dvar_RegisterBool("MRNNSKOOLO", 1, 0, "Use UI CLUT in ui shaders");
  r_radiometricScale = Dvar_RegisterFloat("PLRMKOOOP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Per-frame radiometric scale (-1: use sceneExposure, -2: use tonemapExposure, -3: use sceneAvgKiloNits )");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm6; value
  }
  r_universalTonemapUseAcesRrt = Dvar_RegisterFloat("MKLOPMQRPS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Apply ACES RRT in universal tonemap");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  r_universalTonemapAcesRedModifier = Dvar_RegisterFloat("NSMPRLQKNR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "ACES RRT red modifier weight");
  __asm { vmovss  xmm2, cs:__real@3f000000; min }
  r_displayMappingHdrLuminanceSource = Dvar_RegisterEnum("LRMQSLPTMP", r_displayMappingHdrSourceNames, 0, 0, "Where to get the HDR diplay luminance data from");
  __asm
  {
    vmovaps xmm3, xmm10; max
    vmovaps xmm1, xmm6; value
  }
  v1164 = Dvar_RegisterFloat("LOSQPPNNRT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Gamma value applied in HDR mode");
  __asm { vmovss  xmm3, cs:__real@3e4ccccd; max }
  r_displayMappingHdrGamma = v1164;
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  v1168 = Dvar_RegisterFloat("MRRNPSMQTS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Darkest value we will output on an HDR display in PQ");
  __asm
  {
    vmovss  xmm2, cs:__real@3f19999a; min
    vmovss  xmm1, cs:__real@3f4ccccd; value
  }
  r_displayMappingHdrMinLum = v1168;
  __asm { vmovaps xmm3, xmm6; max }
  r_displayMappingHdrMaxLum = Dvar_RegisterFloat("NTNOQQSQLM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Brightest value we will output on an HDR display in PQ");
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm6; value
  }
  r_displayMappingSdrGamma = Dvar_RegisterFloat("LPOSSQMTTQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Gamma value applied in SDR mode");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  r_displayMappingSdrMinLum = Dvar_RegisterFloat("LSSNQRQSST", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Darkest value we will output on an SDR display (0-1)");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm6; value
  }
  v1181 = Dvar_RegisterFloat("MTNPRPNTTT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Brightest value we will output on an SDR display (0-1)");
  __asm
  {
    vmovss  xmm3, cs:__real@44fa0000; max
    vmovss  xmm1, cs:__real@43a68000; value
  }
  r_displayMappingSdrMaxLum = v1181;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  v1185 = Dvar_RegisterFloat("MQKRSLOPMM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Max luminance of target SDR Display in cd/m2");
  __asm { vmovss  xmm3, cs:__real@44fa0000; max }
  r_displayMappingSdrTargetLum = v1185;
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  r_displayMappingSdrEmulationMaxLum = Dvar_RegisterFloat("LPKPPSSTON", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Emulate an SDR display on HDR device when non-zero. The value is the intensity in cd/m2 we will output for SDR value of 1.0");
  __asm
  {
    vmovss  xmm3, cs:__real@44bb8000; max
    vmovss  xmm1, cs:__real@43960000; value
  }
  r_displayMappingSdrUseBlacklevel = Dvar_RegisterBool("MOMSNOKSSP", 1, 0, "Use legacy r_blacklevel in universal pipeline SDR mode");
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  r_hdrUIMaxLum = Dvar_RegisterFloat("NSKKNPRMOQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Maximum luminance of SDR UI elments when rendered in HDR mode (cd/m2)");
  r_hdrToSdr = Dvar_RegisterBool("MPNQPKSLSS", 1, 4u, "Process SDR swap chain when in HDR on XB3 for GameDVR");
  r_mbViewModelEnable = Dvar_RegisterBool("LONSLMNROK", 1, 0x44u, "Enable motion-blur on the view-model.");
  r_mbWorldEnable = Dvar_RegisterBool("LRNMQRTPM", 1, 0x44u, "Enable motion-blur on world (everything but viewmodel).");
  r_mbPostfxMaxNumSamples = Dvar_RegisterInt("NQTPSMTLQM", 15, 0, 32, 0x44u, "motionblur postfx sample count");
  r_mbEnable = Dvar_RegisterEnum("LPSPNKLRPO", r_mbEnableNames, 0, 0x44u, "toggle on/off high quality motion blur");
  __asm { vmovss  xmm3, cs:__real@41000000; max }
  r_mbEnableA = Dvar_RegisterBool("MKNMSLSLRL", 1, 0, "archive toggle on/off high quality motion blur");
  __asm
  {
    vmovaps xmm11, xmm6
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm11; value
  }
  v1196 = Dvar_RegisterFloat("NMORQOTSK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x44u, "Scale velocity used for motion blur");
  __asm { vmovss  xmm3, cs:__real@41000000; max }
  r_mbVelocityScale = v1196;
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm11; value
  }
  r_mbVelocityScaleViewModel = Dvar_RegisterFloat("RMLOTKMMM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x44u, "Scale velocity used for viewmodel motion blur");
  r_mbVelocityFpsCompensation = Dvar_RegisterBool("LNQSSLTOSP", 1, 4u, "Enables FPS motion blur compensation, for low and high fps to have a matching effect");
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  v1203 = Dvar_RegisterFloat("LSOPQMRPNR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x44u, "Radial Blur Override Strength");
  __asm { vmovss  xmm2, cs:__real@bf800000; min }
  r_mbRadialOverrideStrength = v1203;
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm1, xmm1, xmm1; value
  }
  v1207 = Dvar_RegisterFloat("NKTRSSTMRQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x44u, "Radial Blur Override Radius");
  __asm { vmovss  xmm2, cs:__real@bf800000; min }
  r_mbRadialOverrideRadius = v1207;
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm1, xmm1, xmm1; value
  }
  r_mbRadialOverrideDistortion = Dvar_RegisterFloat("MLTTMLTKOR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x44u, "Radial Blur Override Distortion");
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  r_mbRadialOverrideChromaticAberration = Dvar_RegisterFloat("OMRQKMSSPP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x44u, "Radial Blur Override Chromatic Aberration");
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  r_mbRadialOverrideFocusDir = Dvar_RegisterFloat("TMTNNMTLL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x44u, "Radial Blur Override Focus direction");
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  v1220 = Dvar_RegisterFloat("LMLTRQKKTL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x44u, "Radial Blur Override Angle attenuation for positional blur");
  __asm { vmovss  xmm2, cs:__real@3b808081; min }
  r_mbRadialOverrideAngleAttenuation = v1220;
  __asm
  {
    vmovaps xmm3, xmm14; max
    vmovaps xmm1, xmm10; value
  }
  r_mbRadialMinAllowedBlurDistance = Dvar_RegisterFloat("LNLLSQTRLM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Radial Blur min blur distance - used to tweak trivial case performance - in texel scale");
  __asm { vmovss  xmm0, cs:__real@48000000 }
  r_mbRadialOverridePositionActive = Dvar_RegisterBool("NSSPMPLRQL", 0, 0x44u, "Toggle on/off radial blur world space position.");
  __asm
  {
    vmovss  dword ptr [rsp+148h+description], xmm0
    vxorps  xmm3, xmm3, xmm3; z
    vxorps  xmm2, xmm2, xmm2; y
    vxorps  xmm1, xmm1, xmm1; x
    vmovss  [rsp+148h+flags], xmm15
  }
  r_mbRadialOverridePosition = Dvar_RegisterVec3("MKRSSOQLML", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagscq, descriptionbv, 0x44u, "Set radial blur worlds space position.");
  __asm { vmovss  xmm6, cs:__real@42480000 }
  r_lensProfileOverrideMode = Dvar_RegisterEnum("NPORSPPNOK", s_lensProfileModes, 0, 0x44u, "Physical lens profile override");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  v1232 = Dvar_RegisterFloat("OQSOKOKRQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x44u, "Physical lens profile focal length override");
  __asm { vmovss  xmm2, cs:__real@3e000000; min }
  r_lensProfileOverrideFocalLength = v1232;
  __asm
  {
    vmovaps xmm3, xmm8; max
    vmovaps xmm1, xmm2; value
    vmovss  xmm10, cs:__real@3dcccccd
  }
  r_lensProfileOverrideAperture = Dvar_RegisterFloat("MQPLMMMPRT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x44u, "Physical lens profile aperture override");
  __asm
  {
    vmovaps xmm3, xmm14; max
    vmovaps xmm2, xmm10; min
    vmovaps xmm1, xmm11; value
  }
  r_lensProfileOverrideScale = Dvar_RegisterFloat("LTKQTLPOLT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x44u, "Physical lens profile scale override");
  __asm
  {
    vmovaps xmm3, xmm14; max
    vmovaps xmm2, xmm10; min
    vmovaps xmm1, xmm11; value
  }
  v1243 = Dvar_RegisterFloat("LNNQQMNNPM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x44u, "Physical lens profile UV scale override");
  __asm { vmovss  xmm2, cs:__real@c0000000; min }
  r_lensProfileOverrideUVScale = v1243;
  __asm
  {
    vmovaps xmm3, xmm14; max
    vmovaps xmm1, xmm11; value
  }
  v1247 = Dvar_RegisterFloat("MPPMOTSLNN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x44u, "Screen space reflection position correction blend factor");
  __asm { vmovss  xmm2, cs:__real@3c23d70a; min }
  r_ssrPositionCorrection = v1247;
  __asm
  {
    vmovaps xmm3, xmm11; max
    vmovaps xmm1, xmm12; value
    vmovss  xmm7, cs:__real@41200000
  }
  r_ssrFadeInDuration = Dvar_RegisterFloat("LMTMRLMOT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x44u, "Duration of the screen-space reflection fade-in, which occurs whenever the reflection source buffer is invalidated due to view changes (in particular, dual-view scope transitions).");
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm14; value
  }
  v1255 = Dvar_RegisterFloat("MLMMSONQMQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x44u, "Strength of the screen-space reflection fade-in.");
  __asm
  {
    vmovss  xmm3, cs:__real@469c4000; max
    vmovss  xmm1, cs:__real@44480000; value
  }
  r_ssrFadeInStrength = v1255;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  r_shieldEffectHitTimeMS = Dvar_RegisterFloat("NKMKNNLOTK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x44u, "How long the hit effect lasts.");
  r_useShadowGeomOpt = Dvar_RegisterBool("LRTMOMKOLS", 1, 4u, "Enable iwlit shadow geometry optimization. It only works when we have the data generated in iwlit.");
  r_useLightAABBTree = Dvar_RegisterBool("MMTRTMPLON", 1, 4u, "Lookup AABB BVH tree to speed up LinkEntityToPrimaryLights.");
  r_linkLightWarningThreshold = Dvar_RegisterInt("MLRRQLNRNP", 32, 0, 6500, 0, "Print warning when an entity is linked to too many primary lights. This is a potential CPU & GPU performance problem.");
  r_balanceOpaqueLists = Dvar_RegisterBool("NLQSRKOKKK", 1, 4u, "Split opaque into multiple draw lists.");
  __asm
  {
    vmovss  xmm3, cs:__real@43480000; max
    vmovss  xmm1, cs:__real@41800000; value
  }
  r_delayAddSceneModels = Dvar_RegisterBool("NNSSPPRQKM", 1, 4u, "Add DObjs and brushes to GfxScene in a separate worker command");
  __asm { vmovaps xmm2, xmm11; min }
  r_debugTextSize = Dvar_RegisterFloat("NLRSKKKTOT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Size of texts drawn by R_AddScaledDebugString");
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  r_randomFailConstantBuffer = Dvar_RegisterFloat("MKMKNOSNLL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Constant buffer failure rate");
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  r_randomFailLinearHeap = Dvar_RegisterFloat("LLMMPQMLSO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Linear Heap failure rate");
  r_useWarpRasterizer = Dvar_RegisterBool("NNQLTQRQPQ", 0, 0, "Use Warp software rasterizer.");
  r_emissive_surf_vert_limit = Dvar_RegisterInt("RLTQMLOM", 0x8000, 1024, 0x20000, 4u, "Vert limit for geo-trails and beams, sprites use quad rendering");
  __asm { vmovss  xmm1, cs:__real@3e99999a; value }
  r_scope_tweak = Dvar_RegisterBool("OLMMSNSSQP", 0, 0, "Enable weapon scope lens effect tweak");
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovss  xmm8, cs:__real@3f000000
  }
  r_scope_inner = Dvar_RegisterFloat("MRTRSQPSLP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Scope inner ring size");
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm8; value
  }
  v1275 = Dvar_RegisterFloat("LQNNOLMRNM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Scope outer ring size");
  __asm
  {
    vmovss  xmm3, cs:__real@40400000; max
    vmovss  xmm1, cs:__real@3f99999a; value
  }
  r_scope_outer = v1275;
  __asm { vmovaps xmm2, xmm11; min }
  v1279 = Dvar_RegisterFloat("OOTNPSNKR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Scope inner disk magnification");
  __asm { vmovss  xmm3, cs:__real@40400000; max }
  r_scope_inner_mag = v1279;
  __asm
  {
    vmovaps xmm2, xmm11; min
    vmovaps xmm1, xmm11; value
  }
  v1283 = Dvar_RegisterFloat("MSNLTPOLQS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Scope outter ring magnification");
  __asm
  {
    vmovss  xmm3, cs:__real@40a00000; max
    vmovss  xmm1, cs:__real@3fd1eb85; value
  }
  r_scope_outer_mag = v1283;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  r_scope_radius = Dvar_RegisterFloat("NNSKPNQKMT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Scope lens radius");
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovss  xmm1, cs:__real@3f400000; value
  }
  r_scope_fade_start = Dvar_RegisterFloat("LONOSQTRRM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "for fadding out scope distortion effect");
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm11; value
  }
  r_scope_fade_end = Dvar_RegisterFloat("NOLNSPRNKR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "for fadding out scope distortion effect.");
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm11; value
  }
  r_scope_color_red = Dvar_RegisterFloat("NROQSQQOMK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Scope color red");
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm11; value
  }
  r_scope_color_green = Dvar_RegisterFloat("NPPORKQMQK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Scope color green");
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm11; value
  }
  v1302 = Dvar_RegisterFloat("LTLOTQPLQP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Scope color blue");
  __asm { vmovss  xmm3, cs:__real@40800000; max }
  r_scope_color_blue = v1302;
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm11; value
  }
  r_scope_color_brightness = Dvar_RegisterFloat("NRLOROTOMM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Scope brightness");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm14; value
  }
  v1309 = Dvar_RegisterFloat("OOSLSMSNP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Correct scope relif effect distance");
  __asm { vmovss  xmm1, cs:__real@3f4ccccd; value }
  r_scope_relief_focus = v1309;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vmovaps xmm2, xmm10; min
  }
  r_scope_relief_focus_scale = Dvar_RegisterFloat("MLRSPLKTPQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Scope relif map UV scale at correct eye relief distance");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vmovss  xmm6, cs:__real@38d1b717
    vmovaps xmm2, xmm6; min
    vmovaps xmm1, xmm7; value
  }
  r_scope_relief_outoffocus = Dvar_RegisterFloat("PSQSNMTNM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Worse scope relief effect distance");
  __asm
  {
    vmovaps xmm3, xmm7; max
    vmovaps xmm2, xmm10; min
    vmovaps xmm1, xmm14; value
    vmovss  xmm10, cs:__real@41000000
  }
  r_scope_relief_outoffocus_scale = Dvar_RegisterFloat("OLNTLSSNP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Scope relif map UV scale at wrong eye relief distance");
  __asm
  {
    vmovaps xmm3, xmm10; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm8; value
  }
  r_scope_relief_movement_scale_min = Dvar_RegisterFloat("LPSRPRNLPO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Scope eye relief effect bone movement UV offset scale during idle");
  __asm
  {
    vmovaps xmm3, xmm10; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm11; value
  }
  v1327 = Dvar_RegisterFloat("RRONLOPKS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Scope eye relief effect bone movement UV offset scale in full speed");
  __asm { vmovss  xmm1, cs:__real@3e99999a; value }
  r_scope_relief_movement_scale_max = v1327;
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  r_scope_relief_movement_clamp = Dvar_RegisterFloat("MQONPTSPMO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Maximum eye relief offset bone movement");
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm8; value
  }
  v1334 = Dvar_RegisterFloat("MOOQTPPMKP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Scope relif effect random sway frequence during idle");
  __asm { vmovss  xmm1, cs:__real@3c23d70a; value }
  r_scope_relief_sway_freq_min = v1334;
  __asm
  {
    vmovaps xmm3, xmm12; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v1338 = Dvar_RegisterFloat("RTQKLKNLR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Scope relif effect random sway movement during idle");
  __asm { vmovss  xmm1, cs:__real@40400000; value }
  r_scope_relief_sway_amount_min = v1338;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vmovaps xmm2, xmm11; min
  }
  v1342 = Dvar_RegisterFloat("LTNNLPNOLT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Scope relif effect random sway frequence in full speed");
  __asm { vmovss  xmm1, cs:__real@3ca3d70a; value }
  r_scope_relief_sway_freq_max = v1342;
  __asm
  {
    vmovaps xmm3, xmm12; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v1346 = Dvar_RegisterFloat("LQKTMQSTQN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Scope relif effect random sway movement in full speed");
  __asm { vmovss  xmm1, cs:__real@3e99999a; value }
  r_scope_relief_sway_amount_max = v1346;
  __asm
  {
    vmovaps xmm3, xmm11; max
    vmovaps xmm2, xmm6; min
  }
  r_scope_relief_sway_screendelta = Dvar_RegisterFloat("QTTLONPKS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "for normalizing bone movement in screen space.");
  __asm
  {
    vmovaps xmm3, xmm11; max
    vmovaps xmm2, xmm6; min
    vmovaps xmm1, xmm12; value
  }
  r_scope_relief_sway_framedelta = Dvar_RegisterFloat("LTTLOLKPQP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "for normalizing bone movement delta between frames, in screen space.");
  __asm
  {
    vmovaps xmm3, xmm10; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm11; value
  }
  r_scope_relief_sway_cameradelta = Dvar_RegisterFloat("PTOTPLMNR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "for normalizing camera position change between frames, in world space.");
  __asm { vmovss  xmm1, cs:__real@3fa66666; value }
  r_scope_relief_mul_aspect_ratio = Dvar_RegisterBool("MLPMKONLSM", 1, 0, "relief map UV offset multiply camera aspect ratio.");
  __asm
  {
    vmovaps xmm3, xmm14; max
    vmovaps xmm2, xmm8; min
  }
  v1359 = Dvar_RegisterFloat("MQMSQPPSMR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "random sway ping-pong frequency scale for X axis.");
  __asm { vmovss  xmm1, cs:__real@3f8ccccd; value }
  r_scope_relief_sway_freq_x = v1359;
  __asm
  {
    vmovaps xmm3, xmm14; max
    vmovaps xmm2, xmm8; min
  }
  r_scope_relief_sway_freq_y = Dvar_RegisterFloat("PPQKNQNTO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "random sway ping-pong frequency scale for Y axis.");
  r_gpuCopyFrameBudget = Dvar_RegisterInt("NSMNKSTNLL", 10485760, 0, 0x40000000, 0, "Per-frame budget for gpu copy operations (in bytes)");
  r_useShellshockPostfx = Dvar_RegisterBool("LSSQNNPMTT", 1, 0, "Use the in engine shellshock effect system");
  v1363 = j_va("draw UI render to texture overlay. 0 = all textures, 1 - %d = selected texture, > %d = disabled.", 8i64, 8i64);
  r_rtt_showOverlay = Dvar_RegisterInt("MTMLPNPTTM", 9, 0, 255, 4u, v1363);
  r_flushCommandListsAt_Flags = Dvar_RegisterInt("NPNPOQLRRP", 0, 0, 127, 0, "Flags for where to flush command lists. See R_FlushCommandListsAt_Flags for the list.");
  r_ui_grayscale_blur = Dvar_RegisterBool("MTKKTTOK", 1, 0, "run UI scene blur in grayscale");
  __asm
  {
    vmovss  xmm6, cs:__real@3e800000
    vmovss  xmm0, cs:__real@40800000
    vxorps  xmm3, xmm3, xmm3; min
    vmovaps xmm2, xmm6; y
    vmovaps xmm1, xmm6; x
    vmovss  [rsp+148h+flags], xmm0
  }
  r_ui_scale_scene_range = Dvar_RegisterVec2("MNMRPKQNKQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagscr, 0, "UI blur effect scene luminance range.");
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm6; value
  }
  r_ui_scale_range_min = Dvar_RegisterFloat("LKPKOSQSRS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "UI blur effect range.");
  R_RegisterDecalVolumesDvars();
  R_ST_RegisterDvars();
  Dvar_EndPermanentRegistration();
  _R11 = &v1543;
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
    vmovaps xmm14, xmmword ptr [r11-90h]
    vmovaps xmm15, xmmword ptr [r11-0A0h]
  }
}

/*
==============
R_RegisterGameDvars
==============
*/
void R_RegisterGameDvars(void)
{
  unsigned int v0; 

  if ( !(unsigned __int8)Com_GameMode_GetActiveGameMode() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dvars.cpp", 4504, ASSERT_TYPE_ASSERT, "(Com_GameMode_GetActiveGameMode() != GameModeType::NONE)", "%s\n\tThese dvars must be registered after game mode creation", "Com_GameMode_GetActiveGameMode() != GameModeType::NONE") )
    __debugbreak();
  v0 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v0 = 262276;
  Com_GameMode_GetActiveGameMode();
  __asm
  {
    vmovss  xmm1, cs:__real@bf800000; value
    vmovss  xmm3, cs:__real@447a0000; max
    vmovaps xmm2, xmm1; min
  }
  DCONST_DVARMPFLT_r_sunsprite_size_override = Dvar_RegisterFloat("LLPRKNTOS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v0, "[DconstMP] Override the .sun file for the sunsprite size; diameter in pixels at 640x480 and 80 fov, -1 means off");
  FX_RegisterGameDvars();
}

/*
==============
R_RegisterNetworkDvars
==============
*/
void R_RegisterNetworkDvars()
{
  char ActiveGameMode; 
  unsigned int v10; 
  unsigned int flags; 
  char v13; 
  unsigned int v16; 
  char v19; 
  unsigned int v22; 
  char v24; 
  unsigned int v26; 
  char v30; 
  unsigned int v31; 
  char v32; 
  unsigned int v33; 
  bool v35; 
  unsigned int v36; 
  unsigned int v42; 
  unsigned int v44; 
  unsigned int v51; 
  unsigned int v53; 
  unsigned int v57; 
  unsigned int v60; 
  unsigned int v65; 
  unsigned int v70; 
  char v72; 
  unsigned int v73; 
  unsigned int v74; 
  char v75; 
  unsigned int v76; 
  unsigned int v77; 
  unsigned int v78; 
  unsigned int v84; 
  unsigned int v88; 
  unsigned int v92; 
  char v94; 
  unsigned int v95; 
  unsigned int v99; 
  unsigned int v100; 
  unsigned int v101; 
  unsigned int v102; 
  unsigned int v103; 
  unsigned int v104; 
  char v105; 
  unsigned int v106; 
  char v107; 
  unsigned int v108; 
  char v109; 
  unsigned int v110; 
  unsigned int v112; 
  unsigned int v115; 
  unsigned int v121; 
  char v123; 
  unsigned int v124; 
  char v125; 
  unsigned int v126; 
  char v127; 
  unsigned int v128; 
  unsigned int v130; 
  unsigned int v134; 
  unsigned int v137; 
  unsigned int v144; 
  unsigned int v146; 
  unsigned int v150; 
  char v153; 
  unsigned int v154; 
  unsigned int v158; 
  const dvar_t *v159; 
  char v167; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm8
    vmovaps xmmword ptr [rax-38h], xmm9
    vmovaps xmmword ptr [rax-48h], xmm10
    vmovaps xmmword ptr [rax-58h], xmm12
  }
  ActiveGameMode = Com_GameMode_GetActiveGameMode();
  __asm
  {
    vmovss  xmm12, cs:__real@47c35000
    vmovss  xmm2, cs:__real@bf800000; min
    vmovss  xmm1, cs:__real@43800000; value
  }
  v10 = 68;
  flags = 68;
  if ( ActiveGameMode != 1 )
    flags = 140;
  __asm { vmovaps xmm3, xmm12; max }
  DVARFLT_r_umbraAccurateOcclusionThreshold = Dvar_RegisterFloat("NKLMONNPNN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flags, "The distance (in inches) to which accurate occlusion information is gathered. -1.0 = deduced automatically.");
  v13 = Com_GameMode_GetActiveGameMode();
  __asm
  {
    vmovss  xmm8, cs:__real@42c80000
    vmovss  xmm1, cs:__real@41a00000; value
  }
  v16 = 68;
  if ( v13 != 1 )
    v16 = 140;
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_r_umbraMinObjectContribution = Dvar_RegisterFloat("PKKMTTRQO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v16, "The minimum pixel contribution to the scene view at which a given piece of static geometry will be culled out.");
  v19 = Com_GameMode_GetActiveGameMode();
  __asm
  {
    vmovss  xmm2, cs:__real@bf800000; min
    vmovss  xmm1, cs:__real@45000000; value
  }
  v22 = 68;
  if ( v19 != 1 )
    v22 = 140;
  __asm { vmovaps xmm3, xmm12; max }
  DVARFLT_r_umbraShadowAccurateOcclusionThreshold = Dvar_RegisterFloat("MKSKRRMQMN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v22, "The distance (in inches) to which accurate shadow caster occlusion information is gathered. -1.0 = deduced automatically.");
  v24 = Com_GameMode_GetActiveGameMode();
  __asm { vmovss  xmm10, cs:__real@3f800000 }
  v26 = 68;
  if ( v24 != 1 )
    v26 = 140;
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm10; value
  }
  DVARFLT_r_umbraMinShadowObjectContribution = Dvar_RegisterFloat("MKRPMLRRLS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v26, "The minimum pixel contribution to the shadow map tile view at which a given piece of static geometry will be culled out.");
  v30 = Com_GameMode_GetActiveGameMode();
  v31 = 68;
  if ( v30 != 1 )
    v31 = 140;
  DVARBOOL_r_gpuCullTriOcclusionUmbra = Dvar_RegisterBool("LSLMOQSNTL", 0, v31, "Toggles GPU triangle occlusion culling for smodels against UMBRA occlusion image");
  v32 = Com_GameMode_GetActiveGameMode();
  v33 = 68;
  if ( v32 != 1 )
    v33 = 140;
  DVARBOOL_r_gpuCullTriClusterOcclusionUmbra = Dvar_RegisterBool("SQPOKKMP", 0, v33, "Toggles GPU occlusion culling for smodels against UMBRA occlusion image");
  __asm { vmovss  xmm1, cs:__real@42200000; value }
  v35 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  v36 = 68;
  if ( !v35 )
    v36 = 140;
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_r_reactiveMotionPlayerRadius = Dvar_RegisterFloat("MKPPNSLNQQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v36, "Radial distance from the player that influences reactive motion models (inches)");
  __asm
  {
    vmovss  xmm3, cs:__real@41a00000; max
    vmovss  xmm2, cs:__real@3dcccccd; min
    vmovss  xmm1, cs:__real@410e6666; value
  }
  v35 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  v42 = 68;
  if ( !v35 )
    v42 = 140;
  DVARFLT_r_reactiveMotionPlayerPushFrequency = Dvar_RegisterFloat("QQNKRMKPQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v42, "The spring motion frequency (speed) imparted by the player on reactive motion models");
  __asm { vmovss  xmm9, cs:__real@41200000 }
  v35 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  v44 = 68;
  if ( !v35 )
    v44 = 140;
  __asm
  {
    vmovaps xmm3, xmm8; max
    vmovaps xmm2, xmm10; min
    vmovaps xmm1, xmm9; value
  }
  DVARFLT_r_reactiveMotionPlayerPushAmplitude = Dvar_RegisterFloat("NKOSNKPNKL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v44, "The spring motion amplitude (strength) imparted by the player on reactive motion models");
  __asm
  {
    vmovss  xmm3, cs:__real@3f7ff972; max
    vmovss  xmm2, cs:__real@3f4ccccd; min
    vmovss  xmm1, cs:__real@3f7f7cee; value
  }
  v35 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  v51 = 68;
  if ( !v35 )
    v51 = 140;
  DVARFLT_r_reactiveMotionPlayerPushDecay = Dvar_RegisterFloat("MTORLPNK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v51, "The spring motion decay (falloff) imparted by the player on reactive motion models");
  __asm { vmovss  xmm2, cs:__real@c2c80000; min }
  v35 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  v53 = 68;
  if ( !v35 )
    v53 = 140;
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm1, xmm1, xmm1; value
  }
  DVARFLT_r_reactiveMotionPlayerHeightAdjust = Dvar_RegisterFloat("OLPRLSRQLM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v53, "Amount to adjust the vertical distance of the effector from the player position (inches)");
  __asm { vmovss  xmm1, cs:__real@42200000; value }
  v35 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  v57 = 68;
  if ( !v35 )
    v57 = 140;
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_r_reactiveMotionActorRadius = Dvar_RegisterFloat("MPLOLNMSRO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v57, "Radial distance from the ai characters that influences reactive motion models (inches)");
  v35 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  v60 = 68;
  __asm { vmovss  xmm3, cs:__real@42480000; max }
  if ( !v35 )
    v60 = 140;
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm9; value
  }
  DVARFLT_r_reactiveMotionActorVelocityMax = Dvar_RegisterFloat("NMQSKQNQLR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v60, "AI velocity considered the maximum when determining the length of motion tails (inches/sec)");
  __asm { vmovss  xmm1, cs:__real@40000000; value }
  v35 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  v65 = 68;
  if ( !v35 )
    v65 = 140;
  __asm
  {
    vmovaps xmm3, xmm9; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_r_reactiveMotionVelocityTailScale = Dvar_RegisterFloat("NQQSKRQMTS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v65, "Additional scale for the velocity-based motion tails, as a factor of the effector radius");
  __asm
  {
    vmovss  xmm3, cs:__real@447a0000; max
    vmovss  xmm1, cs:__real@42480000; value
  }
  v35 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  v70 = 68;
  if ( !v35 )
    v70 = 140;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  DVARFLT_r_reactiveMotionEffectorStrengthScale = Dvar_RegisterFloat("NSKKMRPOQQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v70, "Additional scale for the effector influence, as a factor of the model part distance from the effector center and model part extents");
  v72 = Com_GameMode_GetActiveGameMode();
  v73 = 4;
  v74 = 4;
  if ( v72 != 1 )
    v74 = 140;
  DVARBOOL_r_drawSun = Dvar_RegisterBool("LTROMKSMSS", 1, v74, "Enable sun effects");
  v75 = Com_GameMode_GetActiveGameMode();
  v76 = 64;
  v77 = 64;
  if ( v75 != 1 )
    v77 = 140;
  DVARBOOL_r_volumetrics = Dvar_RegisterBool("QPLMKRON", 1, v77, "Enable volumetric fog rendering");
  v35 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  v78 = 64;
  if ( !v35 )
    v78 = 140;
  __asm
  {
    vmovaps xmm3, xmm10; max
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  DVARFLT_r_sdfShadowPenumbra = Dvar_RegisterFloat("MTKPSMMLLR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v78, "Baked sun shadow penumbra width - 0 is sharpest, 1 is softest");
  __asm
  {
    vmovss  xmm3, cs:__real@43480000; max
    vmovss  xmm1, cs:__real@42700000; value
  }
  v35 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  v84 = 68;
  if ( !v35 )
    v84 = 140;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  DVARFLT_r_tessellationFactor = Dvar_RegisterFloat("NOSQLKNSQO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v84, "Target edge length, based on dividing full window height by this factor, for dynamic tessellation.  Use zero to disable tessellation.");
  __asm
  {
    vmovss  xmm3, cs:__real@461c4000; max
    vmovss  xmm1, cs:__real@44700000; value
  }
  v35 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  v88 = 68;
  if ( !v35 )
    v88 = 140;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  DVARFLT_r_tessellationCutoffDistance = Dvar_RegisterFloat("LMNOQSTMKN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v88, "Distance at which world geometry ceases to tessellate.");
  __asm
  {
    vmovss  xmm3, cs:__real@461c4000; max
    vmovss  xmm1, cs:__real@43a00000; value
  }
  v35 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  v92 = 68;
  if ( !v35 )
    v92 = 140;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  DVARFLT_r_tessellationCutoffFalloff = Dvar_RegisterFloat("TSPOQPTMS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v92, "Range over which tessellation is faded out, up to the cutoff.");
  v94 = Com_GameMode_GetActiveGameMode();
  v95 = 68;
  if ( v94 != 1 )
    v95 = 140;
  DVARBOOL_r_enableNoTessBuckets = Dvar_RegisterBool("LTKPSMSTQO", 1, v95, "Enables placing triangles that don't need tessellation into additional draw calls using non-tessellated shaders.");
  __asm
  {
    vmovss  xmm3, cs:__real@42000000; max
    vmovss  xmm2, cs:__real@3c800000; min
    vmovss  xmm1, cs:__real@3e800000; value
  }
  v35 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  v99 = 68;
  if ( !v35 )
    v99 = 140;
  DVARFLT_sm_sunSampleSizeNear = Dvar_RegisterFloat("NPONLLLSPL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v99, "Shadow sample size");
  v35 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  v100 = 64;
  if ( !v35 )
    v100 = 140;
  DVARINT_sm_sunCascadeSizeMultiplier1 = Dvar_RegisterInt("LSNRQTOKRR", 2, 1, 8, v100, "Far cascade size multiplier: 2^n times near cascade size.");
  v35 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  v101 = 64;
  if ( !v35 )
    v101 = 140;
  DVARINT_sm_sunCascadeSizeMultiplier2 = Dvar_RegisterInt("NTLKNLNPLK", 2, 1, 8, v101, "Distant cascade size multiplier: 2^n times far cascade size.");
  v35 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  v102 = 68;
  if ( !v35 )
    v102 = 140;
  DVARINT_sm_roundRobinPrioritySpotShadows = Dvar_RegisterInt("MROOOROPKL", 4, 0, 16, v102, "How many lights can receive dynamic shadows (w/ round robin updates).");
  v35 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  v103 = 68;
  if ( !v35 )
    v103 = 140;
  DVARINT_sm_spotUpdateLimit = Dvar_RegisterInt("LTQMSPKRKO", 4, 0, 8, v103, "Maximum number of spot shadows to update per frame");
  v35 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  v104 = 68;
  if ( !v35 )
    v104 = 140;
  DVARINT_sm_spotUpdateLimitDynLight = Dvar_RegisterInt("LLNMKLQQP", 2, 0, 6, v104, "Maximum number of spot shadows to update per frame");
  v105 = Com_GameMode_GetActiveGameMode();
  v106 = 68;
  if ( v105 != 1 )
    v106 = 140;
  DVARBOOL_sm_spotUpdateMoreDynEnt = Dvar_RegisterBool("NRSOTSLSSO", 0, v106, "Reserve GPU resource for dynents visible in any spot shadow");
  v107 = Com_GameMode_GetActiveGameMode();
  v108 = 68;
  if ( v107 != 1 )
    v108 = 140;
  DVARBOOL_sm_spotUpdateMoreDynObj = Dvar_RegisterBool("RSLTKLOS", 0, v108, "Always render dynamic objects for selected lights with castDynamicShadow enabled");
  v109 = Com_GameMode_GetActiveGameMode();
  v110 = 68;
  if ( v109 != 1 )
    v110 = 140;
  DVARINT_sm_spotShadowScoreSystem = Dvar_RegisterEnum("MNQKPNLOPT", sm_spotShadowScoreSystemNames, 0, v110, "Spotshadow light score system");
  __asm { vmovss  xmm1, cs:__real@3dcccccd; value }
  v35 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  v112 = 4;
  if ( !v35 )
    v112 = 140;
  __asm
  {
    vmovaps xmm3, xmm10; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_sm_spotShadowScore0Min = Dvar_RegisterFloat("NMSPMRQSMS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v112, "spot shadow score0 min");
  v35 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  v115 = 4;
  if ( !v35 )
    v115 = 140;
  __asm
  {
    vmovaps xmm3, xmm10; max
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  DVARFLT_sm_spotShadowSampleExtra0 = Dvar_RegisterFloat("NLOOTLTMMQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v115, "add additional spot shadow score samples at outter corners");
  __asm
  {
    vmovss  xmm3, cs:__real@41000000; max
    vmovss  xmm2, cs:__real@3c23d70a; min
  }
  v35 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  v121 = 64;
  if ( !v35 )
    v121 = 140;
  __asm { vmovaps xmm1, xmm10; value }
  DVARFLT_sm_sunShadowScaleSingleLQ = Dvar_RegisterFloat("NSMRSOKML", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v121, "Scale to apply to the sun shadow size when using the near cascade only (covering far) and while using the low quality path (splitscreen, etc).");
  v123 = Com_GameMode_GetActiveGameMode();
  v124 = 64;
  if ( v123 != 1 )
    v124 = 140;
  DVARBOOL_sm_sunFarShadows = Dvar_RegisterBool("SONQQSQRQ", 1, v124, "Enable 2nd shadow cascade for flagged objects");
  v125 = Com_GameMode_GetActiveGameMode();
  v126 = 64;
  if ( v125 != 1 )
    v126 = 140;
  DVARINT_sm_sunDistantShadows = Dvar_RegisterEnum("TMNTMTQRM", SM_SUN_DISTANCE_SHADOWS_NAMES, 0, v126, "Enable 3rd shadow cascade for flagged objects");
  v127 = Com_GameMode_GetActiveGameMode();
  v128 = 68;
  if ( v127 != 1 )
    v128 = 140;
  DVARINT_sm_firstForceCacheSModelPartition = Dvar_RegisterEnum("NKPRRSKNOP", sm_firstForceCacheSModelPartitionNames, 1, v128, "Force the caching of animated static models from this partition onwards");
  __asm { vmovss  xmm3, cs:__real@48800000; max }
  v35 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  v130 = 68;
  if ( !v35 )
    v130 = 140;
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  DVARFLT_sm_spotDistCull = Dvar_RegisterFloat("LKOLRONRNQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v130, "Distance cull spot shadows. 0 = no culling.");
  __asm { vmovss  xmm1, cs:__real@44000000; value }
  v35 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  v134 = 68;
  if ( !v35 )
    v134 = 140;
  __asm
  {
    vmovaps xmm3, xmm12; max
    vmovaps xmm2, xmm10; min
  }
  DVARFLT_r_vertexDeformCutOffDist = Dvar_RegisterFloat("LTMPKRLLNM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v134, "Cut Off Dist for the camera to switch off smodel vertex deformations and allow for culling and caching");
  v35 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  v137 = 68;
  if ( !v35 )
    v137 = 140;
  __asm
  {
    vmovss  xmm1, cs:__real@43800000; value
    vmovaps xmm3, xmm12; max
    vmovaps xmm2, xmm10; min
  }
  DVARFLT_r_vertexDeformFadeDist = Dvar_RegisterFloat("OLPNKQKKTT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v137, "Fade Dist for the camera to start blending away smodel vertex deformations");
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v73 = 140;
  __asm
  {
    vmovaps xmm3, xmm9; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm10; value
  }
  DVARFLT_r_st_lodDistanceScale = Dvar_RegisterFloat("SRQLQNLMK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v73, "Distance scale for terrain LOD - when this increases, detail at a given distance is reduced");
  v35 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  v144 = 64;
  if ( !v35 )
    v144 = 140;
  DVARINT_r_compressedSunShadowFiltering = Dvar_RegisterInt("QSLRKRNKL", 1, 0, 2, v144, "Compressed sun shadow filtering: 0-disabled, 1-Vogel disk sampling, 2-Vogel disk sampling (valid auto parameters).");
  __asm { vmovss  xmm3, cs:__real@42000000; max }
  v35 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  v146 = 64;
  if ( !v35 )
    v146 = 140;
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  DVARFLT_r_compressedSunShadowFilteringMaxRadius = Dvar_RegisterFloat("QSTSONPTR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v146, "Compressed sun shadow debug filtering radius.");
  __asm { vmovss  xmm3, cs:__real@47800000; max }
  v35 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  v150 = 64;
  if ( !v35 )
    v150 = 140;
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  DVARFLT_r_compressedSunShadowFilteringFarZ = Dvar_RegisterFloat("NORMLOSRMM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v150, "Compressed sun shadow debug filtering far plane.");
  v153 = Com_GameMode_GetActiveGameMode();
  v154 = 64;
  if ( v153 != 1 )
    v154 = 140;
  DVARBOOL_r_compressedSunShadowClipPlanes = Dvar_RegisterBool("LQLMTQMMKQ", 0, v154, "Use compressed sun shadow to compute sun shadow clip planes.");
  __asm { vmovss  xmm3, cs:__real@44800000; max }
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v10 = 140;
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  DVARFLT_r_sunIntensityHeatOverride = Dvar_RegisterFloat("NSSMQLPRNT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v10, "override sun light intensity_heat");
  v35 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  v158 = 64;
  if ( !v35 )
    v158 = 140;
  DVARINT_r_precomputedSkyIlluminationRadialDistance = Dvar_RegisterInt("LSLKRQNSQS", 4500, 0, 0x40000000, v158, "Distance where full sky transition happens, zero disables");
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v76 = 140;
  v159 = Dvar_RegisterEnum("MTRRKPRML", r_waveWaterEnableNames, 0, v76, "Enables wave water float z (> 0) or wave water SSR (>1)");
  __asm { vmovaps xmm6, [rsp+88h+var_18] }
  _R11 = &v167;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-20h]
    vmovaps xmm9, xmmword ptr [r11-30h]
    vmovaps xmm10, xmmword ptr [r11-40h]
    vmovaps xmm12, xmmword ptr [r11-50h]
  }
  DVARINT_r_waveWaterEnable = v159;
}

/*
==============
R_UnregisterGameDvars
==============
*/
void R_UnregisterGameDvars(void)
{
  DCONST_DVARMPFLT_r_sunsprite_size_override = Dvar_Deregister(DCONST_DVARMPFLT_r_sunsprite_size_override);
  FX_UnregisterGameDvars();
}

/*
==============
R_UpdateDvarGameModeDefaults
==============
*/
void R_UpdateDvarGameModeDefaults()
{
  const dvar_t *VarByName; 
  const dvar_t *v19; 

  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovss  xmm6, cs:__real@3f800000
    vmovaps [rsp+58h+var_28], xmm7
    vxorps  xmm7, xmm7, xmm7
  }
  if ( Com_GameMode_SupportsFeature(WEAPON_LADDER_VAULT|0x80) )
  {
    _EAX = Sys_GetXB3ConsoleType();
    __asm
    {
      vmovss  xmm2, cs:__real@3e4ccccd
      vmovd   xmm0, eax
    }
    _EBX = 1;
    __asm
    {
      vmovd   xmm1, ebx
      vpcmpeqd xmm3, xmm0, xmm1
      vmovss  xmm1, cs:__real@3ecccccd
      vblendvps xmm7, xmm1, xmm2, xmm3
    }
    _EAX = Sys_GetXB3ConsoleType();
    __asm
    {
      vmovss  xmm2, cs:__real@3f99999a
      vmovd   xmm1, ebx
      vmovd   xmm0, eax
      vpcmpeqd xmm3, xmm0, xmm1
      vmovss  xmm1, cs:__real@3f8ccccd
      vblendvps xmm6, xmm1, xmm2, xmm3
    }
  }
  VarByName = Dvar_FindVarByName("NLSORKMPKT");
  if ( !VarByName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dvars.cpp", 4552, ASSERT_TYPE_ASSERT, "(sceneResLodScaleMax)", (const char *)&queryFormat, "sceneResLodScaleMax") )
    __debugbreak();
  if ( !VarByName->modified )
  {
    __asm { vmovaps xmm1, xmm7; value }
    Dvar_SetFloat_Internal(VarByName, *(float *)&_XMM1);
    Dvar_ClearModified(VarByName);
  }
  v19 = Dvar_FindVarByName("LRPMOPMPO");
  if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dvars.cpp", 4560, ASSERT_TYPE_ASSERT, "(sceneResMinContributionScaleMax)", (const char *)&queryFormat, "sceneResMinContributionScaleMax") )
    __debugbreak();
  if ( !v19->modified )
  {
    __asm { vmovaps xmm1, xmm6; value }
    Dvar_SetFloat_Internal(v19, *(float *)&_XMM1);
    Dvar_ClearModified(v19);
  }
  __asm
  {
    vmovaps xmm6, [rsp+58h+var_18]
    vmovaps xmm7, [rsp+58h+var_28]
  }
}

