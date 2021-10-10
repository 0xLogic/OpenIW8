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
void R_RegisterDvars(void)
{
  bool v0; 
  unsigned int v1; 
  double TrilinearWindow; 
  double AnisoWindow; 
  int DefaultRenderMemMode; 
  XB3ConsoleType XB3ConsoleType; 
  int v6; 
  XB3ConsoleType v7; 
  int SdrDefaultColorimetry; 
  const char *description; 
  vec3_t v10; 
  vec4_t value; 

  Dvar_BeginPermanentRegistration();
  DCONST_DVARBOOL_r_draw_frustum = Dvar_RegisterBool("r_draw_frustum", 0, 0x40004u, "Draw the frustum using debug lines");
  DVARBOOL_killswitch_reset_cinematic_status_size = Dvar_RegisterBool("MSMTMNTLMQ", 1, 0, "Killswitch for the reset of cinematic status size");
  DCONST_DVARBOOL_g_drawDefaultStaticModels = Dvar_RegisterBool("g_drawDefaultStaticModels", 0, 0x40004u, "Static default xmodels (the big red FX placeholder) are not rendered by default. Enabling this affects transient performance.");
  DCONST_DVARFLT_r_sceneModelAccurateLODRadiusThreshold = Dvar_RegisterFloat("r_sceneModelAccurateLODRadiusThreshold", 60.0, 1.0, 10000.0, 0x40004u, "Calculate accurate LOD distances only for scene models with a radius larger than this value");
  DVARFLT_r_ugbUsageRatioStartBiasLodDistanceThreshold = Dvar_RegisterFloat("LROOQPKSOQ", 0.5, 0.0, 1.0, 0, "Usage Ratio at which we start scaling distance ");
  DVARFLT_r_ugbUsageRatioMaxDistanceScaler = Dvar_RegisterFloat("LTPONKTQLN", 0.1, 0.0, 1.0, 0, "Max scaler to apply to distance to bias towards lower lods");
  DVARFLT_r_ugbDistanceScalerAmortizer = Dvar_RegisterFloat("MLKOSLONLQ", 0.1, 0.0, 1.0, 0, "This is so that scaling to does not fluctuate too much from frame to frame");
  DCONST_DVARINT_r_presentImmediateThreshold = Dvar_RegisterInt("r_presentImmediateThreshold", 20, 0, 100, 0x40004u, "The immediate threshold for presenting, as a percentage (from 0 to 100) of screen coverage in scanlines.");
  DVARBOOL_r_hudOutlineEnable = Dvar_RegisterBool("NMROQRRONQ", 0, 0x44u, "Enables hud outline effect.");
  DCONST_DVARBOOL_r_hudOutlineCS = Dvar_RegisterBool("r_hudOutlineCS", 1, 0x40004u, "Draws hud outline effect to scene buffer");
  DCONST_DVARBOOL_r_hudOutlineDebugTweakForceEnable = Dvar_RegisterBool("r_hudOutlineDebugTweakForceEnable", 0, 0x40004u, "For debugging only, turn hud outline on for all entities.");
  DCONST_DVARINT_r_hudOutlineDebugTweakForceMode = Dvar_RegisterInt("r_hudOutlineDebugTweakForceMode", -1, -1, 2, 0x40004u, "For debugging only, force hud outline mode for all entities");
  DCONST_DVARINT_r_hudOutlineDebugTweakLineWidth = Dvar_RegisterInt("r_hudOutlineDebugTweakLineWidth", 2, 0, 16, 0x40004u, "For debugging only, force hud line width for all entities");
  DCONST_DVARBOOL_r_hudOutlineDebugTweakDrawOccluded = Dvar_RegisterBool("r_hudOutlineDebugTweakDrawOccluded", 1, 0x40004u, "For debugging only, force draw occluded for all entities.");
  DCONST_DVARBOOL_r_hudOutlineDebugTweakDrawNonOccluded = Dvar_RegisterBool("r_hudOutlineDebugTweakDrawNonOccluded", 1, 0x40004u, "For debugging only, force draw non-occluded for all entities.");
  DVARFLT_r_hudOutlineWidth = Dvar_RegisterFloat("MKOQSSQKLL", 1.0, 0.0, 10.0, 0x44u, "Set the width of the Hud Outline");
  DVARVEC4_r_hudOutlineColorInScope = Dvar_RegisterVec4("MPLQQOTMSP", 0.0, 0.0, 1.0, 1.0, 0.0, 1.0, 0x44u, "The outline pixels inside the scope will be recolorized to this color");
  DVARVEC4_r_hudOutlineColorInScopeFoe = Dvar_RegisterVec4("MKMNNOKRSP", 0.0, 0.0, 1.0, 1.0, 0.0, 1.0, 0x44u, "The outline pixels inside the scope will be recolorized to this color");
  DVARVEC4_r_hudOutlineColorOutScope = Dvar_RegisterVec4("LOKPRQTTQK", 1.0, 1.0, 1.0, 1.0, 0.0, 1.0, 0x44u, "The outline pixels outside the scope will be modulated by this color");
  DVARVEC4_r_hudOutlineFillColor0 = Dvar_RegisterVec4("LRMPROLMKN", 0.89999998, 0.89999998, 0.89999998, 0.5, 0.0, 1.0, 0x44u, "This color is multiplied by the outline color on some horizontal lines.");
  DVARVEC4_r_hudOutlineFillColor1 = Dvar_RegisterVec4("NTOSKSTKQQ", 0.60000002, 0.60000002, 0.60000002, 0.5, 0.0, 1.0, 0x44u, "This color is multiplied by the outline color on some horizontal lines.");
  DVARVEC4_r_hudOutlineOccludedOutlineColor = Dvar_RegisterVec4("NSNOLMTLLL", 1.0, 1.0, 1.0, 1.0, 0.0, 1.0, 0x44u, "The outline color of pixels that are depth occluded");
  DVARVEC4_r_hudOutlineOccludedInlineColor = Dvar_RegisterVec4("LSRTPRNOLS", 1.0, 1.0, 1.0, 0.89999998, 0.0, 1.0, 0x44u, "The interior lines color of pixels that are depth occluded");
  DVARVEC4_r_hudOutlineOccludedInteriorColor = Dvar_RegisterVec4("LNNOSQKRTP", 0.69999999, 0.69999999, 0.69999999, 0.25, 0.0, 1.0, 0x44u, "The interior fill color of pixels that are depth occluded");
  DVARFLT_r_hudOutlineOccludedColorFromFill = Dvar_RegisterFloat("RKSQOKQNK", 0.0, 0.0, 1.0, 0x44u, "Amount of color from non occluded outline color to use for occluded color");
  DVARBOOL_r_brCircleOutlineEnabled = Dvar_RegisterBool("OLPPQTQPSR", 1, 0x44u, "Enable BR Circle draw via hud outline");
  DVARVEC4_r_brCircleOutlineColor = Dvar_RegisterVec4("QNTNNSMKR", 0.60000002, 0.60000002, 0.34999999, 0.89999998, 0.0, 1000.0, 0x44u, "BR Circle rgb color and intensity");
  DVARFLT_r_brCircleOutlineThickness = Dvar_RegisterFloat("MLQRRTPPLQ", 40.0, 0.0, 1000.0, 0x44u, "BR Circle thickness");
  DVARFLT_r_shimmerEffectTimeOff = Dvar_RegisterFloat("MTSLMPMTTM", 5.0, 0.0, 16.0, 0x44u, "Amount of time the interior fill is off.");
  DVARFLT_r_shimmerEffectTimeOn = Dvar_RegisterFloat("MSTTNLLRLS", 1.0, 0.0, 16.0, 0x44u, "Amount of time interior fill is on.");
  DVARFLT_r_shimmerEffectFarDistance = Dvar_RegisterFloat("LKSOROSOQK", 1000.0, 10.0, 10000.0, 0x44u, "Distance at which to use far parameters.");
  DVARFLT_r_shimmerEffectInteriorFillIntensityNear = Dvar_RegisterFloat("LKQMTLKPMM", 0.2, 0.0, 1.0, 0x44u, "Used to scale intensity at near distance.");
  DVARFLT_r_shimmerEffectInteriorFillIntensityFar = Dvar_RegisterFloat("NTRTRQMQNL", 0.75, 0.0, 1.0, 0x44u, "Used to scale intensity at far distance.");
  DVARFLT_r_shimmerEffectColorAnimIntensity = Dvar_RegisterFloat("NMSNTQSMLL", 0.40000001, 0.0, 1.0, 0x44u, "Amount of modulation of color during animation ( 1.0 means none ).");
  DVARFLT_r_shimmerEffectInteriorLineStrength = Dvar_RegisterFloat("MROQPTNONR", 0.75, 0.0, 16.0, 0x44u, "Intensity scale for interior lines.");
  DVARFLT_r_shimmerEffectExteriorLineStrength = Dvar_RegisterFloat("NQQLKRLTSN", 1.0, 0.0, 16.0, 0x44u, "Intensity scale for exterior lines.");
  DVARFLT_r_snapshotEffectAlphaIntensity = Dvar_RegisterFloat("LSTKPKPRSO", 1.0, 0.0, 4.0, 0x44u, "Global scale for intensity of snapshot effect");
  DVARFLT_r_hudOutlineThermalPowerForeground = Dvar_RegisterFloat("RLNOTPQPK", 0.34, 0.0099999998, 10.0, 0x44u, "Power curve applied to foreground thermal pixels");
  DVARFLT_r_hudOutlineThermalPowerBackground = Dvar_RegisterFloat("MRQTKQSMR", 1.63, 0.0099999998, 10.0, 0x44u, "Power curve applied to background thermal pixels");
  DVARFLT_r_hudOutlineThermalNoiseScaleFG = Dvar_RegisterFloat("NSRQQKNSNR", 0.44, 0.0, 20.0, 0x44u, "Noise scale for entities.");
  DVARFLT_r_hudOutlineThermalNoiseScaleBG = Dvar_RegisterFloat("LRPNLRLPMT", 0.090999998, 0.0, 20.0, 0x44u, "Noise scale for scene.");
  DVARVEC4_r_hudOutlineThermalDarkColorEnemy = Dvar_RegisterVec4("LQRKORLQML", 2.97, 1.79, 0.81999999, 1.0, 0.0, 10.0, 0x44u, "The dark color for enemies.");
  DVARVEC4_r_hudOutlineThermalBrightColorEnemy = Dvar_RegisterVec4("NTNOPTNMPP", 1.35, 0.17, 0.22, 1.0, 0.0, 10.0, 0x44u, "The bright color for enemies.");
  DVARVEC4_r_hudOutlineThermalDarkColorFriend = Dvar_RegisterVec4("MPKOKPNLN", 0.20999999, 0.58999997, 0.73000002, 1.0, 0.0, 10.0, 0x44u, "The dark color for friends.");
  DVARVEC4_r_hudOutlineThermalBrightColorFriend = Dvar_RegisterVec4("LTTSTKSPNT", 0.23, 0.31999999, 0.47999999, 1.0, 0.0, 10.0, 0x44u, "The bright color for friends.");
  DVARVEC4_r_hudOutlineThermalDarkColorBackground = Dvar_RegisterVec4("OKQKMLSMPN", 0.11, 0.23999999, 0.34, 1.0, 0.0, 10.0, 0x44u, "The dark color for the background.");
  DVARVEC4_r_hudOutlineThermalBrightColorBackground = Dvar_RegisterVec4("NSSMRLPRPL", 0.25, 0.62, 0.77999997, 1.0, 0.0, 10.0, 0x44u, "The bright color for the background.");
  DVARFLT_r_hudOutlineVRScopeThermalPowerForeground = Dvar_RegisterFloat("MKOPMKKPOS", 0.41, 0.0099999998, 10.0, 0x44u, "Power curve applied to foreground thermal pixels");
  DVARFLT_r_hudOutlineVRScopeThermalPowerBackground = Dvar_RegisterFloat("MNLLLPQSP", 0.82999998, 0.0099999998, 10.0, 0x44u, "Power curve applied to background thermal pixels");
  DVARFLT_r_hudOutlineVRScopeThermalNoiseScaleFG = Dvar_RegisterFloat("MNNRTQNNNT", 0.125, 0.0, 20.0, 0x44u, "Noise scale for entities.");
  DVARFLT_r_hudOutlineVRScopeThermalNoiseScaleBG = Dvar_RegisterFloat("QQMRRKSLP", 0.125, 0.0, 20.0, 0x44u, "Noise scale for scene.");
  DVARVEC4_r_hudOutlineVRScopeThermalDarkColorEnemy = Dvar_RegisterVec4("MRMMQQKQKN", 1.03, 0.98000002, 0.56999999, 1.0, 0.0, 10.0, 0x44u, "The dark color for enemies.");
  DVARVEC4_r_hudOutlineVRScopeThermalBrightColorEnemy = Dvar_RegisterVec4("LQQOQNNMT", 1.29, 0.41999999, 0.28, 1.0, 0.0, 10.0, 0x44u, "The bright color for enemies.");
  DVARVEC4_r_hudOutlineVRScopeThermalDarkColorFriend = Dvar_RegisterVec4("OMROPMNPTT", 0.20999999, 0.58999997, 0.73000002, 1.0, 0.0, 10.0, 0x44u, "The dark color for friends.");
  DVARVEC4_r_hudOutlineVRScopeThermalBrightColorFriend = Dvar_RegisterVec4("MLMRSONLSL", 0.23, 0.31999999, 0.47999999, 1.0, 0.0, 10.0, 0x44u, "The bright color for friends.");
  DVARVEC4_r_hudOutlineVRScopeThermalDarkColorBackground = Dvar_RegisterVec4("MMTLNMQKTT", 0.19, 0.30000001, 0.25999999, 1.0, 0.0, 10.0, 0x44u, "The dark color for the background.");
  DVARVEC4_r_hudOutlineVRScopeThermalBrightColorBackground = Dvar_RegisterVec4("MSOLOMSKNN", 0.25, 0.5, 0.56, 1.0, 0.0, 10.0, 0x44u, "The bright color for the background.");
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
  DVARBOOL_r_sceneResSquareRatio = Dvar_RegisterBool("NOSNORMOSQ", 0, 4u, "Uses square ratio dynamic resolution steps.");
  DVARFLT_r_sceneResDynamicTarget = Dvar_RegisterFloat("RTOOKRTNO", 16.67, 0.0, 100.0, 0, "Target frame time in ms for dynamic scene resolution.");
  DVARFLT_r_sceneResLodScaleMax = Dvar_RegisterFloat("NLSORKMPKT", 0.0, 0.0, 1.0, 1u, "LOD Scale multiplier at lowest sceneRes");
  DVARFLT_r_sceneResLodScale = Dvar_RegisterFloat("NQSOKPOQOT", 0.0, 0.0, 1.0, 1u, "Current LOD Scale multiplier");
  DVARFLT_r_sceneResLodTemporal = Dvar_RegisterFloat("MQLOPKSOTR", 0.98500001, 0.0, 1.0, 1u, "LOD Scale multiplier temporal blending factor");
  DCONST_DVARINT_r_sceneResLodScaleDelay = Dvar_RegisterInt("r_sceneResLodScaleDelay", 15, -1, 512, 0x40004u, "Delay in frames between possible LODScale changes. Use -1 to override automated system and use r_sceneResLodScale directly.");
  DVARFLT_r_sceneResMinContributionScale = Dvar_RegisterFloat("MKTMRSKPTS", 1.0, 0.0, 4.0, 1u, "Current minimum screen contribution scale multiplier");
  DVARFLT_r_sceneResMinContributionScaleMax = Dvar_RegisterFloat("LRPMOPMPO", 1.0, 1.0, 4.0, 1u, "screen contribution scale multiplier at lowest sceneRes");
  DCONST_DVARVEC4_r_sceneResDynamicThreshold = Dvar_RegisterVec4("r_sceneResDynamicThreshold", 0.001, 0.0099999998, 0.0, 0.97000003, 0.0, 100.0, 0x40004u, "Assorted thresholds for automatic resolution scaling.");
  DCONST_DVARVEC4_r_sceneResDynamicTune = Dvar_RegisterVec4("r_sceneResDynamicTune", 0.015, 0.0, 0.0, 0.0, 0.0, 100.0, 0x40004u, "Assorted tuning values for automatic resolution scaling.");
  DVARBOOL_r_frontendWaitWorkerCmdsOnlyOfType = Dvar_RegisterBool("RRNOPTNLL", 1, 0, "When enabled the renderer frontend on the main thread uses Sys_WaitWorkerCmdsOnlyOfType instead of Sys_WaitWorkerCmdsOfType to wait for outstanding worker commdands.");
  DVARBOOL_r_defaultBigMapFrontendWaitWorkerCmdsOnlyOfType = Dvar_RegisterBool("LSOMOKRRSK", 0, 0, "The default setting for the r_frontendWaitWorkerCmdsOnlyOfType dvar when in a big map.");
  DCONST_DVARBOOL_r_splitscreenVelocityRendering = Dvar_RegisterBool("r_splitscreenVelocityRendering", 1, 0x40004u, "Use Velocity Rendering features in splitscreen (mblur, smaa, etc).");
  DCONST_DVARBOOL_r_splitscreenSingleSunShadow = Dvar_RegisterBool("r_splitscreenSingleSunShadow", 1, 0x40004u, "Use just the near shadow cascade (disabling the far and distant cascades) but cover the far cascade.");
  DCONST_DVARBOOL_r_splitscreenAUOUDisabled = Dvar_RegisterBool("r_splitscreenAUOUDisabled", 0, 0x40004u, "Disable the frame alternating of Umbra occlusion updates for splitscreen (forcing an update per-viewport each frame)");
  DCONST_DVARFLT_r_splitscreenAUOUForceUpdateOffsetThreshold = Dvar_RegisterFloat("r_splitscreenAUOUForceUpdateOffsetThreshold", 170.0, 0.0, 10000.0, 0x40004u, "Over this distance in a single per frame will force an occlusion update");
  DCONST_DVARFLT_r_splitscreenAUOUForceUpdateDotThreshold = Dvar_RegisterFloat("r_splitscreenAUOUForceUpdateDotThreshold", 0.98000002, 0.0, 1.0, 0x40004u, "Dot with prev axis under this value will force an occlusion update");
  DCONST_DVARFLT_r_splitscreenAUOUScaleXDotThresholdMin = Dvar_RegisterFloat("r_splitscreenAUOUScaleXDotThresholdMin", 0.99989998, 0.0, 1.0, 0x40004u, "Dot with prev axis under this value will begin ramping towards the r_splitscreenAUOUScaleXMax");
  DCONST_DVARFLT_r_splitscreenAUOUScaleXDotThresholdMax = Dvar_RegisterFloat("r_splitscreenAUOUScaleXDotThresholdMax", 0.99800003, 0.0, 1.0, 0x40004u, "Dot with prev axis under this value will clamp to r_splitscreenAUOUScaleXMax");
  DCONST_DVARFLT_r_splitscreenAUOUScaleXMin = Dvar_RegisterFloat("r_splitscreenAUOUScaleXMin", 0.89999998, 0.5, 1.0, 0x40004u, "The Umbra projection X scale used when above r_splitscreenAUOUScaleXDotThresholdMin");
  DCONST_DVARFLT_r_splitscreenAUOUScaleXMax = Dvar_RegisterFloat("r_splitscreenAUOUScaleXMax", 0.75, 0.5, 1.0, 0x40004u, "The Umbra projection X scale used when below r_splitscreenAUOUScaleXDotThresholdMax");
  DCONST_DVARFLT_r_splitscreenAUOUScaleY = Dvar_RegisterFloat("r_splitscreenAUOUScaleY", 0.89999998, 0.0, 1.0, 0x40004u, "The Umbra projection Y scale");
  DCONST_DVARINT_r_mbRadialMargin = Dvar_RegisterInt("r_mbRadialMargin", 0, 0, 10, 0x40004u, "Safe margin for mbRadialPS in pixels");
  DVARBOOL_r_showReactiveMotionSModels = Dvar_RegisterBool("LSMKNMTLLN", 1, 0, "Toggle rendering of reactive motion static models.");
  DVARBOOL_r_reactiveMotionEffectorDebugDraw = Dvar_RegisterBool("MPNNROTONS", 0, 4u, "Enable debug drawing of effector spheres");
  DVARBOOL_r_reactiveMotionPivotDebugDraw = Dvar_RegisterBool("OKLOPQOOK", 0, 4u, "Enable debug drawing of reactive motoin pivots");
  DVARBOOL_r_reactiveMotionForceCpuCalc = Dvar_RegisterBool("MOLONLMRT", 0, 4u, "Force CPU parts calc over GPU");
  DVARBOOL_r_reactiveMotionClutter = Dvar_RegisterBool("MTMOPKMRLQ", 1, 4u, "Enable reactive motion for clutter");
  DVARBOOL_r_showSplinedSModels = Dvar_RegisterBool("MRTPTQNKQL", 1, 0, "Toggle rendering of splined static models.");
  DVARBOOL_r_vertexDeformForceCullSunShadows = Dvar_RegisterBool("NNNONTLLNN", 1, 4u, "Force models with vertex deformation to always cull in sun shadows");
  DVARBOOL_r_vertexDeformForceCullSpotShadows = Dvar_RegisterBool("QMOROTSKT", 1, 4u, "Force models with vertex deformation to always cull in spot shadows");
  DCONST_DVARFLT_r_sunShadowProjectedBoundsCullThreshold = Dvar_RegisterFloat("r_sunShadowProjectedBoundsCullThreshold", 0.015, 0.0, 1.0, 0x40004u, "Cull objects in far and distant sun shadow cascades if the approximated screen space projection is less than this fraction of the screen");
  DVARBOOL_r_umbraExclusive = Dvar_RegisterBool("NSQOPNTOPL", 1, 0x44u, "Toggle Umbra for exclusive static culling (disables static portal dpvs)");
  DVARFLT_r_specularColorScale = Dvar_RegisterFloat("NRQSSSNTSQ", 1.0, 0.0, 1024.0, 4u, "Set greater than 1 to brighten specular highlights");
  DVARFLT_r_diffuseColorScale = Dvar_RegisterFloat("LNROSLQKON", 1.0, 0.0, 1024.0, 4u, "Globally scale the diffuse color of all point lights");
  DCONST_DVARBOOL_r_debugLodInfo = Dvar_RegisterBool("r_debugLodInfo", 0, 0x40004u, "When enabled, lod info is spammed to the logfile.");
  DVARBOOL_r_sortMaterials = Dvar_RegisterBool("NPSRPPPPTO", 0, 4u, "force material sorting.");
  DVARINT_r_refImageDraw = Dvar_RegisterEnum("LRRPTTOPPO", r_refImageDrawNames, 0, 0x44u, "Draw Debug Reference Image.");
  DVARVEC4_r_refImageBounds = Dvar_RegisterVec4("LOTLSMRPTP", 0.0, 0.0, -1.0, -1.0, -1.0, 4096.0, 0x44u, "Reference Image Bounds (x=left, y=top, z=width (negative=auto), w=height (negative=auto).");
  DVARFLT_r_refImageStopsAdjust = Dvar_RegisterFloat("NTLLNTRNTM", 0.0, -20.0, 20.0, 0x44u, "djust ref-image color map intensity based on stops of lights.");
  DVARINT_r_refShaderRenderStage = Dvar_RegisterEnum("MRKPMLQRLK", r_refShaderStageNames, 0, 4u, "Draw Reference Testcard Shader.");
  DCONST_DVARFLT_r_refShaderBackgroundAlpha = Dvar_RegisterFloat("r_refShaderBackgroundAlpha", 1.0, 0.0, 1.0, 0x40004u, "Alpha of ref shader background.");
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
  DVARFLT_r_precomputedSkyMultiplier = Dvar_RegisterFloat("LKMPRNTMOO", 1.0, 0.0, 10.0, 4u, "Precomputed sky multiplier");
  DVARFLT_r_precomputedSunMultiplier = Dvar_RegisterFloat("OKRNQTRNOT", 1.0, 0.0, 10.0, 4u, "Precomputed sun multiplier");
  DVARBOOL_r_ui_receive_postfx = Dvar_RegisterBool("NKRONMQOKP", 1, 4u, "Allow UI elements to receive postFX");
  DVARFLT_r_corpse_lighting_hack = Dvar_RegisterFloat("MRPTLLLPRL", 8.0, 0.0, 64.0, 0x44u, "enable corpse lightgrid hack. 0 = disabled. > 0 = enabled and also used as Z offset");
  DCONST_DVARFLT_r_character_lighting_hack = Dvar_RegisterFloat("r_character_lighting_hack", 40.0, 0.0, 128.0, 0x40004u, "enable character lightgrid hack. 0 = disabled. > 0 = enabled and also used as Z offset");
  DCONST_DVARFLT_r_scope_relief_hip_movement_scale = Dvar_RegisterFloat("r_scope_relief_hip_movement_scale", 1.0, 0.0, 16.0, 0x40004u, "eye relief moment scale at hip");
  DCONST_DVARFLT_r_scope_relief_hip_movement_clamp = Dvar_RegisterFloat("r_scope_relief_hip_movement_clamp", 0.5, 0.0, 1.0, 0x40004u, "eye relief moment clamp at hip");
  DCONST_DVARINT_r_sunshadow_maxCacheRefreshPerFrame = Dvar_RegisterInt("r_sunshadow_maxCacheRefreshPerFrame", 3, 1, 1000, 0x40004u, "Maximum number of GfxCacheSunShadow to refresh per frame");
  DVARBOOL_r_sunshadow_preCacheEnabled = Dvar_RegisterBool("NPSSLTOOSN", 1, 0, "Enable pre caching of GfxCacheSunShadow tiles that will be overlapped imminently");
  DCONST_DVARFLT_r_sunshadow_preCacheThreshold = Dvar_RegisterFloat("r_sunshadow_preCacheThreshold", 0.333, 0.0, 0.5, 0x40004u, "Distance from edge of a non-overlapped GfxCacheSunShadow tile before pre caching will occur, in a % of cache tile size");
  DCONST_DVARBOOL_r_streamerUseGrayDefaultColor = Dvar_RegisterBool("r_streamerUseGrayDefaultColor", 0, 0x40004u, "Override streamer default checker image with gray color, and default nog.");
  DCONST_DVARBOOL_r_pureIRLightHack = Dvar_RegisterBool("r_pureIRLightHack", 0, 0x40004u, "Move all VFX light intensity to IR and set visible light intensity = 0 if it has ir light set in Comet.");
  DCONST_DVARFLT_r_thermalEmissivityDefault = Dvar_RegisterFloat("r_thermalEmissivityDefault", 0.0, 0.0, 1.0, 0x40004u, "0 = use albedo, 1 = use metalness");
  DCONST_DVARFLT_r_thermalFog = Dvar_RegisterFloat("r_thermalFog", 70.0, 0.0, 128.0, 0x40004u, "Thermal fog radiation");
  DCONST_DVARFLT_r_thermalEmissivity_Decal = Dvar_RegisterFloat("r_thermalEmissivity_Decal", 0.80000001, 0.1, 1.0, 0x40004u, "average thermal emissivity for decal volume");
  DCONST_DVARFLT_r_thermalPlayerFadeDistanceStart_tweak = Dvar_RegisterFloat("r_thermalPlayerFadeDistanceStart_tweak", 0.0, 0.0, 10000000.0, 0x40004u, "DEV ONLY. When viewing other players through thermal optics, the distance at which players' temperature starts fading. Use this to iterate in-game, set final value in attachment GDT.");
  DCONST_DVARFLT_r_thermalPlayerFadeDistanceEnd_tweak = Dvar_RegisterFloat("r_thermalPlayerFadeDistanceEnd_tweak", 0.0, 0.0, 10000000.0, 0x40004u, "DEV ONLY. When viewing other players through thermal optics, the distance at which players' temperature fully fades away. Use this to iterate in-game, set final value in attachment GDT.");
  DCONST_DVARFLT_r_fogSubsamplingSensitivity = Dvar_RegisterFloat("r_fogSubsamplingSensitivity", 0.25, 0.0, 1.0, 0x40004u, "Sensitivity of fog subsampling.");
  DCONST_DVARINT_sm_spotShadowSampleCountMin = Dvar_RegisterInt("sm_spotShadowSampleCountMin", 3, 2, 16, 0x40004u, "spot shadow score sample count min");
  DCONST_DVARINT_sm_spotShadowSampleCountMax = Dvar_RegisterInt("sm_spotShadowSampleCountMax", 6, 2, 16, 0x40004u, "spot shadow score sample count max");
  DCONST_DVARFLT_sm_spotShadowSampleDistance = Dvar_RegisterFloat("sm_spotShadowSampleDistance", 120.0, 1.0, 1200.0, 0x40004u, "spot shadow score sample distance");
  DCONST_DVARFLT_sm_spotShadowSampleBegin = Dvar_RegisterFloat("sm_spotShadowSampleBegin", 0.1, 0.0, 1.0, 0x40004u, "spot shadow score sample begin");
  DCONST_DVARFLT_sm_spotShadowSampleEnd = Dvar_RegisterFloat("sm_spotShadowSampleEnd", 0.89999998, 0.0, 1.0, 0x40004u, "spot shadow score sample end");
  DCONST_DVARFLT_sm_spotShadowSampleLargeLightThreshold0 = Dvar_RegisterFloat("sm_spotShadowSampleLargeLightThreshold0", 380.0, 0.0, 4096.0, 0x40004u, "light radius exceed sm_spotShadowSampleLargeLightThreshold0 need extra samples");
  DCONST_DVARFLT_sm_spotShadowSampleLargeLightThreshold1 = Dvar_RegisterFloat("sm_spotShadowSampleLargeLightThreshold1", 560.0, 0.0, 4096.0, 0x40004u, "light radius exceed sm_spotShadowSampleLargeLightThreshold1 need more extra samples");
  DCONST_DVARFLT_sm_spotShadowScore1Min = Dvar_RegisterFloat("sm_spotShadowScore1Min", 0.1, 0.0, 1.0, 0x40004u, "spot shadow score1 min");
  DCONST_DVARFLT_sm_spotShadowScore1ConstA = Dvar_RegisterFloat("sm_spotShadowScore1ConstA", 360.0, 1.0, 60000.0, 0x40004u, "spot shadow distance score1 constantA");
  DCONST_DVARFLT_sm_spotShadowScore1ConstB = Dvar_RegisterFloat("sm_spotShadowScore1ConstB", 3600.0, 1.0, 60000.0, 0x40004u, "spot shadow distance score1 constantB");
  DCONST_DVARFLT_sm_spotShadowScore2Min = Dvar_RegisterFloat("sm_spotShadowScore2Min", 0.0, 0.0, 1.0, 0x40004u, "spot shadow score2 min");
  DCONST_DVARFLT_sm_spotShadowScore2ConstA = Dvar_RegisterFloat("sm_spotShadowScore2ConstA", 10.0, 0.0, 16384.0, 0x40004u, "spot shadow score2 constantA");
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
  DCONST_DVARBOOL_sm_sunvisPrepassIndirect = Dvar_RegisterBool("sm_sunvisPrepassIndirect", 1, 0x40004u, "Use indirect dispatch for prepass-culled sunvis pass");
  DCONST_DVARFLT_sm_sunvisPrepassGlobalTileRangeLimit = Dvar_RegisterFloat("sm_sunvisPrepassGlobalTileRangeLimit", 1000.0, 0.0, 3.4028235e38, 0x40004u, "Depth range limit for a screen tile assigned to GLOBAL cascade");
  DCONST_DVARBOOL_r_spotBeforeSun = Dvar_RegisterBool("r_spotBeforeSun", 0, 0x40004u, "Draw spot shadows before sun shadows");
  DCONST_DVARINT_r_suppressLight = Dvar_RegisterInt("r_suppressLight", 0, 0, 0x2000, 0x40004u, "turn off a selected primary light");
  DCONST_DVARFLT_sm_showOverlayDistance = Dvar_RegisterFloat("sm_showOverlayDistance", 0.0, 0.0, 262144.0, 0x40004u, "spot shadow overlay draw distance");
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
  DVARBOOL_r_casEnabled = Dvar_RegisterBool("NLKOPSOSOK", 0, 0, "Activates Contrast Adaptive Sharpening");
  DVARFLT_r_casStrength = Dvar_RegisterFloat("LTQLMSLNPQ", 0.80000001, 0.0, 1.0, 0, "Strength for Contrast Adaptive Sharpening");
  DCONST_DVARINT_r_lui_setImageFiltering = Dvar_RegisterInt("r_lui_setImageFiltering", 0, 0, 2, 0x40004u, "LUI setImageFIltering override, 0 = no override, 1 = force nearest, 2 = force linear");
  DCONST_DVARVEC4_r_wireframeColor = Dvar_RegisterVec4("r_wireframeColor", 1.0, 1.0, 1.0, 1.0, 0.0, 100.0, 0x40004u, "Color of wireframe lines.");
  v0 = Com_IsRunningTestmonkey() == 1;
  v1 = v0 << 6;
  if ( v0 )
    Dvar_SetBool_Internal(DVARBOOL_r_autoSceneRes, 0);
  r_cinematic = Dvar_RegisterBool("MPOOTPQLL", 0, 0x40u, "Enable cinematic rendering mode (higher quality at reduced framerate).");
  value = (vec4_t)_xmm;
  r_zPlanes = Dvar_RegisterVec4("OMNONNMOTP", &value, 1.1754944e-38, 3.4028235e38, 0x40u, "[viewmodel_znear, viewmodel_zfar, scene_znear, scene_zfar]");
  R_RegisterSunDvars();
  R_RegisterSSAODvars();
  R_RegisterSSRDvars();
  R_RegisterEyeSensorDvars();
  R_TG_RegisterDvars();
  r_maxEmblemPaints = Dvar_RegisterInt("MKSLSOSQON", 8, 0, 78, 4u, "Max emblem composite jobs per frame");
  r_maxDebugStringDistance = Dvar_RegisterFloat("SKRQOPQQN", 0.0, 0.0, 35000.0, 0, "Max distance from camera beyond which debug strings will not draw. 0 for unlimited.");
  r_minDebugStringDistance = Dvar_RegisterFloat("MMRKRSQROP", 0.0, 0.0, 35000.0, 0, "Minimum distance from camera before debug strings will draw.");
  r_debugTextScaling = Dvar_RegisterFloat("LNQTOTSQQT", 1.0, 1.0, 16.0, 0, "Increases the debug text look-over scaling.");
  r_depthScanEffectEnable = Dvar_RegisterBool("LSORSSTOSK", 0, 0x40u, "Enable depth scan effect");
  r_depthScanOverlayEffect = Dvar_RegisterBool("LPQMKKOMNT", 0, 0x40u, "Enable depth scan full screen overlay");
  r_depthScanDistance = Dvar_RegisterFloat("MLPTMNQLTN", 0.0, 0.0, 10000.0, 0x40u, "The depth from the camera at which the depth scan area appears");
  r_depthScanThickness = Dvar_RegisterFloat("MPNPLTKNQK", 0.0, 0.0, 10000.0, 0x40u, "The thickness of the scan area");
  r_depthScanOutlineThickness = Dvar_RegisterFloat("NKNPMMRQKO", 0.0, 0.0, 10000.0, 0x40u, "The thickness of the scan outline");
  r_depthScanOverlayStrength = Dvar_RegisterFloat("NTKMMLKST", 0.0, 0.0, 1.0, 0x40u, "Controls blending of overlay on the scan area");
  r_depthScanColor = Dvar_RegisterVec4("NQSKNTTTQN", &colorBlackBlank, 0.0, 3.4028235e38, 0x40u, "HDR color of the scan area. Increase for more bloom!");
  r_depthScanOverlayColor = Dvar_RegisterVec4("NNLKQPQSSP", &colorBlackBlank, 0.0, 1.0, 0x40u, "LDR Color of screen space overlay pattern. Alpha controls strength.");
  r_depthScanOutlineColor = Dvar_RegisterVec4("MNOOQSTKQN", &colorBlackBlank, 0.0, 3.4028235e38, 0x40u, "HDR color of the scan area outline. Increase for more bloom!");
  r_depthScanScrollParams = Dvar_RegisterVec4("MOOMLTQTLL", &colorBlackBlank, 0.0, 10.0, 0x40u, "Depth scan overlay scrolling params: UV scroll vector, UV Scale");
  r_depthScanScopeStencil = Dvar_RegisterBool("NQRLRSQMRS", 0, 0x40u, "Use scope stenciling for depth scan post fx");
  r_secondaryDiffuseScale = Dvar_RegisterFloat("MNPSTNRLMS", 1.0, 0.0, 1024.0, 4u, "Scale factor for secondary diffuse reflection (dev only)");
  r_secondarySpecularScale = Dvar_RegisterFloat("MTLNTSOKQL", 1.0, 0.0, 1024.0, 4u, "Scale factor for secondary specular reflection (dev only)");
  r_globalSecondarySelfVisScale = Dvar_RegisterFloat("MTSTOMNOL", 1.0, 0.0, 4.0, 4u, "Global scale for the self visibility for secondary lighting (debug shader only)");
  r_rimLightingLerp = Dvar_RegisterFloat("MLRKNQPRMN", 1.0, 0.0, 1.0, 4u, "Rim lighting lerp factor: 0=No Rim Lighting, 1=Full Rim Lighting (debug shader only)");
  r_shaderLodSecondarySpecular = Dvar_RegisterFloat("LRLSQPKNL", 0.5, 0.0, 5.0, 0x40u, "Gloss threshold for HQ secondary specular (in internal mip range)");
  r_shaderLodSecondarySpecularDurango = Dvar_RegisterFloat("LOSKLQNMQR", 0.5, 0.0, 5.0, 0x40u, "Gloss threshold for HQ secondary specular (in internal mip range)");
  r_ignore = Dvar_RegisterInt("MONSNMPSQK", 0, 0x80000000, 0x7FFFFFFF, 0, "used for debugging anything");
  r_ignoref = Dvar_RegisterFloat("MKQQOKLSTK", 0.0, -3.4028235e38, 3.4028235e38, 0, "used for debugging anything");
  r_effectLightingAsync = Dvar_RegisterBool("NQKRTLNOMR", 1, 4u, "Do effect lighting on async compute");
  r_blacklevel = Dvar_RegisterFloat("LSNOMRTLRR", 0.0, -0.99000001, 0.99000001, 0, "Black level (negative brightens output)");
  r_blacklevelDisable = Dvar_RegisterBool("MOQPKPQMP", 0, 4u, "Disable the r_blacklevel dvar, forcing it to 0.");
  r_texFilter = Dvar_RegisterEnum("NSPQOSROQP", r_texFilterNames, 3, 0, "Material texture filtering quality.");
  r_texFilterMipMode = Dvar_RegisterEnum("OLLKNMRRLO", r_texFilterMipModeNames, 2, 4u, "Allows disabling mipmaps on all material textures.");
  r_texFilterMipBias = Dvar_RegisterFloat("NRQPOOTKSK", 0.0, -16.0, 15.99, 4u, "Change the mipmap bias for material textures.");
  r_nearPlaneFadeDistance = Dvar_RegisterFloat("MQTLLRKRSR", 3.0, 0.000099999997, 20.0, 4u, "Distance of near plane fade.");
  TrilinearWindow = R_GetTrilinearWindow(0xCu);
  if ( R_FindTrilinearWindowID(*(float *)&TrilinearWindow) != 12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dvars.cpp", 2930, ASSERT_TYPE_ASSERT, "(R_FindTrilinearWindowID( defaultTrilinearWindow ) == GFX_TRILINEAR_WINDOW_DEFAULT)", (const char *)&queryFormat, "R_FindTrilinearWindowID( defaultTrilinearWindow ) == GFX_TRILINEAR_WINDOW_DEFAULT") )
    __debugbreak();
  r_texFilterTrilinearWindow = Dvar_RegisterFloat("MOPTOMPOSR", *(float *)&TrilinearWindow, 0.0, 1.0, 4u, "Window over which trilinear filtering blends between mips.  A value of 1.0 is a linear blend, and a value of 0 is the minimal blend.  Smaller values are more efficient but result in a sharper transition between mip levels.");
  AnisoWindow = R_GetAnisoWindow(6u);
  if ( R_FindAnisoWindowID(*(float *)&AnisoWindow) != 6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dvars.cpp", 2935, ASSERT_TYPE_ASSERT, "(R_FindAnisoWindowID( defaultAnisoWindow ) == GFX_ANISO_WINDOW_DEFAULT)", (const char *)&queryFormat, "R_FindAnisoWindowID( defaultAnisoWindow ) == GFX_ANISO_WINDOW_DEFAULT") )
    __debugbreak();
  r_texFilterAnisoWindow = Dvar_RegisterFloat("SSTQKMQN", *(float *)&AnisoWindow, 0.0, 1.0, 4u, "Window over how aniso ratios are clamped to integer values between mips.  A value of 1.0 is a clamp-to-ceiling, and a value of 0 is clamp-to-floor.  Smaller values are more efficient but result in lower quality filtering between mip levels.");
  r_texFilterAnisoBias = Dvar_RegisterFloat("QTQTLPRTK", 0.0, 0.0, 2.0, 4u, "Bias used when computing anisotropy ratio.  Higher values are more efficient at the expense of filtering quality.");
  r_fullbright = Dvar_RegisterBool("MTROSKKNSL", 0, 4u, "Toggles rendering without lighting");
  r_debugShaderMaterial = Dvar_RegisterEnum("OLMOKRLMNT", debugShaderMaterialNames, 0, 0x44u, "Enable shader material debug views");
  r_debugShaderLighting = Dvar_RegisterEnum("NOOTNOKSQM", debugShaderLightingNames, 0, 0x44u, "Enable shader lighting debug views");
  r_debugShaderTexture = Dvar_RegisterEnum("TQOQQPTTL", debugShaderTextureNames, 0, 0x44u, "Enable shader texture debug views");
  r_debugShaderPerf = Dvar_RegisterEnum("MQMQQTSTNN", debugShaderPerfNames, 0, 0x44u, "Enable shader performance debug views");
  r_debugShaderOptimumTexelDensity = Dvar_RegisterFloat("OMSKKSTSTL", 32.0, 4.0, 64.0, 4u, "Set optimum texel density (texel/inch) for Texel Density Debug Shader.");
  r_debugShaderBlend = Dvar_RegisterFloat("QPMRLPMQL", 1.0, 0.0, 1.0, 4u, "Set shader debug view blend ratio.");
  r_debugShaderDiffuseColor = Dvar_RegisterVec3("MSMLONNMTP", 255.0, 255.0, 255.0, -1.0, 255.0, 4u, "Debug shader diffuse override color");
  r_debugShaderSpecularColor = Dvar_RegisterVec3("MSPTSONRNK", 255.0, 255.0, 255.0, -1.0, 255.0, 4u, "Debug shader specular override color");
  r_debugShaderGloss = Dvar_RegisterFloat("ROLTQTPKK", 255.0, -1.0, 255.0, 4u, "Debug shader gloss override value");
  r_debugShaderDNSGValues = Dvar_RegisterVec4("OKQPMSQOPS", -1.0, -1.0, -1.0, -1.0, -1.0, 1.0, 4u, "Debug shader combined diffuse, normal, spec, gloss value.");
  r_debugShaderLightAttMode = Dvar_RegisterInt("MQMQRKQLQK", 1, 0, 2, 4u, "Debug shader light attenuation mode : 0 - S1 1 - IW7 2 - PBR");
  r_debugShaderMetalnessMode = Dvar_RegisterInt("NONLOTLOLN", 1, 0, 2, 4u, "Debug shader metalness PBR mode : 0 - OFF  1 - ON  2 - Show FusedAlebdoAndSpec and Metallicity");
  r_debugShaderCullMode = Dvar_RegisterInt("PROQOPLNR", 1, 0, 1, 4u, "Debug shader render primitive cull mode. Switches culling visualization : 0 - coarse 1 - fine");
  r_debugShaderGlossCurve = Dvar_RegisterFloat("LKQPMKPQNL", 0.5, 0.0, 4.0, 4u, "GGX Max Spec");
  r_debugShaderBentC = Dvar_RegisterBool("MQQNROLTLS", 1, 4u, "Use Bent Cones");
  r_debugShaderBentCLightAngRadiiOff = Dvar_RegisterFloat("MKPKKPMTQK", 0.001, 0.0, 0.25, 4u, "Bent Cones : Area Light angular radius offset");
  r_debugShaderReflectionPassthrough = Dvar_RegisterBool("NMPMLOTTQP", 0, 4u, "Use view direction instead of reflection direction for reflection probe reflections");
  r_debugShaderGlossinessBandsValues = Dvar_RegisterVec4("TQQOKLKOK", 0.2, 0.40000001, 0.60000002, 0.80000001, 0.0, 1.0, 4u, "Thresholds for glossiness bands display.");
  r_debugShaderTemperatureBandsValues = Dvar_RegisterVec4("SPNPMPPRO", 32.0, 95.0, 100.0, 1000.0, 0.0, 1500.0, 4u, "Thresholds for temperature bands display.");
  r_debugShaderFocus = Dvar_RegisterInt("LMOPMPNNSO", 0, 0, 6532, 4u, "Focus index for F+ debug.");
  r_debugShaderLightmapDensity = Dvar_RegisterVec3("MMNNKNTOKQ", 0.35350001, 0.5, 2.0, 0.0, 64.0, 4u, "Set optimum lightmap density (texel/inch) for LMap Density Debug Shader + minimum and maximum factors.");
  r_debugShaderYUVPackingMipMapOffset = Dvar_RegisterFloat("NSOOKSMMSQ", 1.0, 0.0, 20.0, 1.0, 4u, "Lower resolution channel (CrCb/UV) mipmap offset for YUV packing.");
  r_debugShaderNOGPackingMipMapOffset = Dvar_RegisterFloat("OMPKRNQSLK", 1.0, 0.0, 20.0, 1.0, 4u, "Lower resolution channel (occlusion) mipmap offset for NOG packing.");
  r_debugShaderTweaks = Dvar_RegisterVec4("LQSRNRQPRT", 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 4u, "Debug shader multi-purpose value tweak for development.");
  r_debugGPUPipeline = Dvar_RegisterEnum("LLLKNOMPSL", debugGPUPipelineNames, 0, 0x44u, "GPU / instancing pipeline - debug modes");
  r_debugShaderDiffuseBRDF = Dvar_RegisterEnum("NSPQQRPLOO", debugShaderDiffuseBRDFNames, 0, 4u, "Debug shader diffuse BRDF");
  r_debugShaderSpecularBRDF = Dvar_RegisterEnum("MLKTOMQKSL", debugShaderSpecularBRDFNames, 0, 4u, "Debug shader specular BRDF");
  r_debugShaderGGXGeom = Dvar_RegisterEnum("NTQLOQOS", debugShaderGGXGeomNames, 0, 4u, "Debug shader GGX geometry (shadow/masking) term");
  r_debugTextureOverlay = Dvar_RegisterEnum("NPPKKMQOMO", debugTextureOverlayNames, 0, 4u, "Debug Texture Overlay");
  r_debugTextureOverlayRect = Dvar_RegisterVec4("LMSTTKORSK", 0.0, 0.0, 1.0, 1.0, 0.0, 1.0, 4u, "Debug Texture Overlay Window");
  r_debugTextureOverlayBlend = Dvar_RegisterFloat("LPQOQOTMOL", 1.0, 0.0, 1.0, 0.1, 4u, "Debug Texture Overlay Opacity");
  r_debugTextureOverlayMip = Dvar_RegisterInt("MKKNRSRMRM", 0, 0, 16, 4u, "Debug Texture Overlay Mip Level");
  r_debugAssetCost = Dvar_RegisterEnum("MOMTKOPROM", r_debugAssetCostNames, 0, 0x44u, "Draw Asset Costs.");
  r_debugUav = Dvar_RegisterBool("NSNPSLNLLP", 0, 0, "For local debugging. See cs_debug_uav.hlsl for more info.");
  r_debugOverdrawOverlay = Dvar_RegisterBool("OKRQPTQNPN", 0, 4u, "Enables shader to visualize overdraw");
  r_identifyOldMaterial = Dvar_RegisterBool("LRKPOKNKRM", 1, 4u, "Materials flagged as old show up in color pink");
  r_oldMaterialEmissive = Dvar_RegisterFloat("PRLKTLTQN", 0.0, 0.0, 1024.0, 4u, "Pink Emissive intensity for old materials.");
  r_lodScale = Dvar_RegisterFloat("MPLORMMQPT", 1.0, 0.5, 2.0, 0, "Scale the level of detail distance for all XModels (larger reduces detail)");
  r_lodBias = Dvar_RegisterFloat("QLQPPSRK", 0.0, -1000.0, 0.0, 0, "Bias the level of detail distance for all XModels (negative increases detail)");
  r_lodOutStaticRamp = Dvar_RegisterBool("LMSLOSMKTT", 0, 4u, "Allow 'r_lodScale' and 'r_lodBias' to effect the LOD-out distance of static XModels, not just LOD switches.");
  r_skinnedLodBias = Dvar_RegisterFloat("NSPMTTPLRO", 0.0, 0.0, 5000.0, 3u, "Bias the level of detail distance for skinned models only");
  r_skinnedLodBiasStep = Dvar_RegisterFloat("LKSPMSTKMK", 500.0, 1.0, 10000.0, 4u, "LOD bias distance to add with each frame we're over the skinned cache threshold");
  r_skinnedLodBiasDecay = Dvar_RegisterFloat("LMKPKOTROK", 250.0, 0.0, 10000.0, 4u, "Rate, in units per seconds, at which the bias decays");
  r_skinnedSubdivLodBias = Dvar_RegisterFloat("MSSKROSOKP", 0.0, 0.0, 5000.0, 3u, "Bias the level of detail distance for skinned subdiv models only");
  r_skinnedSubdivLodBiasStep = Dvar_RegisterFloat("NRQLTOMPLT", 1000.0, 1.0, 10000.0, 4u, "LOD bias distance to add with each frame we're over the skinned subdiv cache threshold");
  r_skinnedSubdivLodBiasDecay = Dvar_RegisterFloat("OLMNOPRRL", 100.0, 0.0, 10000.0, 4u, "Rate, in units per seconds, at which the bias decays");
  r_skinnedSubdivLODThreshold = Dvar_RegisterVec2("NLQLSQRNNL", 0.80000001, 0.62, 0.050000001, 1.0, 0, "Threshold at which we start reducing LOD's of dynamic/entity models with subdiv");
  r_sceneSurfsLodBias = Dvar_RegisterFloat("MTPPMPMTQP", 0.0, 0.0, 5000.0, 3u, "Bias the level of detail distance for dynamic/entity models only");
  r_sceneSurfsLodBiasStep = Dvar_RegisterFloat("RQLSPRTTL", 1200.0, 1.0, 10000.0, 4u, "LOD bias distance to add with each frame we're over the scene surfs threshold");
  r_sceneSurfsLodBiasDecay = Dvar_RegisterFloat("MKPPTQMNQN", 250.0, 0.0, 10000.0, 4u, "Rate, in units per seconds, at which the bias decays");
  r_sceneSurfsLODThreshold = Dvar_RegisterVec2("MLOROPNTP", 0.92000002, 0.80000001, 0.050000001, 1.0, 0, "Threshold at which we start reducing LOD's of dynamic/entity models");
  DefaultRenderMemMode = R_GetDefaultRenderMemMode();
  r_renderMemMode = Dvar_RegisterEnum("PKNSROLQK", r_renderMemModeNames, DefaultRenderMemMode, 0, "Simulate the texture streaming behavior of other platforms");
  r_subdiv = Dvar_RegisterBool("LMRSLTQLKN", 1, 0, "Enables Catmull Clark surface subdivision.");
  r_subdivLimit = Dvar_RegisterInt("MLKRKRSQQM", 3, 0, 8, 0, "Set the maximum Catmull Clark subdivision level.");
  r_adaptiveSubdiv = Dvar_RegisterEnum("LPNRKRNNQP", adaptiveSubdivNames, 1, 0, "Enables screen space Catmull Clark adaptive tessellation.  If disabled, models tessellate to their designed subdivision level.");
  r_adaptiveSubdivBaseFactor = Dvar_RegisterFloat("MTQTSPMTOP", 1.5, 0.0099999998, 10.0, 0x40u, "Screen space Catmull Clark adaptive tessellation factor for the base model.  Smaller values mean more tessellation.");
  r_adaptiveSubdivPatchFactor = Dvar_RegisterFloat("QMSKSNLNK", 0.5, 0.001, 2.0, 0, "Screen space Catmull Clark adaptive tessellation factor for individual patches.  Smaller values mean more tessellation.");
  r_zfar = Dvar_RegisterFloat("MNKLKSPRT", 0.0, 0.0, 3.4028235e38, 4u, "Change the distance at which culling fog reaches 100% opacity; 0 is off");
  r_fog = Dvar_RegisterBool("LTOKRMRTMM", 1, 0x44u, "Set to 0 to disable fog");
  r_polygonOffsetScale = Dvar_RegisterFloat("MRSPSKSNKL", -1.0, -4.0, 0.0, 0, "Offset scale for decal polygons; bigger values z-fight less but poke through walls more");
  r_polygonOffsetBias = Dvar_RegisterInt("NQSTMPNSRM", -1, -4096, 0, 0, "Offset bias for decal polygons; bigger values z-fight less but poke through walls more");
  r_polygonOffsetClamp = Dvar_RegisterFloat("MLPNTNOSQM", 0.0, 0.0, 8192.0, 0, "Offset clamp for decal polygons; bigger values z-fight less but poke through walls more");
  r_artUseTweaks = Dvar_RegisterBool("MRKLKLNQKN", 0, 0x44u, "Tells the game that art tweaks is enabled and script is in control (as opposed to ColorEd).");
  r_lightGridDrawDebugVolumes = Dvar_RegisterBool("MPTORROPSS", 0, 4u, "Draw lightgrid bounding volumes");
  r_lightGridDebugPosLocked = Dvar_RegisterBool("NLOLPSPLKT", 0, 0, "Lock light grid debug position");
  r_useCameraPositionForViewModelLightGridSampling = Dvar_RegisterBool("LQSQRPPNQR", 1, 0, "Use camera position to sample lightgrid for viewmodel");
  r_lightGridTempSmoothingFactor = Dvar_RegisterFloat("NLOTLQMORR", 0.89999998, 0.0, 1.0, 0x40u, "Temporal smoothing factor for lightgrid sampling (0 = disable temporal smoothing)");
  r_fallbackProbeDebug = Dvar_RegisterBool("NMOOTRKLKR", 0, 4u, "Set fallback probe data to be red.");
  r_fallbackProbeUseCustomSample = Dvar_RegisterBool("NTSQPNPMOO", 0, 4u, "Enable/disable fallback probe custom sample\n");
  r_fallbackProbeSamplePos = Dvar_RegisterVec3("LRSMQMLQNQ", 131072.0, 131072.0, 131072.0, -131072.0, 131072.0, 4u, "Fallback probe sample location.\n");
  r_lgvSamplingSafeZone = Dvar_RegisterFloat("NPOMMSROSL", 0.1, 0.0, 0.25, 4u, "Safezone for sampling lightgrid volumes");
  v10.v[0] = 0.0;
  v10.v[1] = 0.0;
  v10.v[2] = 0.0;
  r_lgvViewModelSamplingOffset = Dvar_RegisterVec3("MKNOSRKSKL", &v10, -3.4028235e38, 3.4028235e38, 0x44u, "Sampling offset for view model.");
  r_lgvEvalMode = Dvar_RegisterEnum("NLROTMNPKO", lgvEvalModeNames, 0, 4u, "LGV Evaluation mode");
  r_lgvMaxProbes = Dvar_RegisterInt("LTMMNRMOPM", 0, 0, 4096, 0x40u, "Max LGV probes per dynamic model (0 = disable using a max)");
  r_lgvDrawVolumes = Dvar_RegisterEnum("NPKKSKNOSQ", lgvDrawVolumesModeNames, 0, 4u, "Draw LGV volume around objects");
  r_lgvDrawProbes = Dvar_RegisterEnum("NLLTRMLMKO", lgvDrawProbesModeNames, 0, 4u, "Draw LGV probes");
  r_lgvDebugOverlay = Dvar_RegisterBool("QNOOONMRO", 0, 4u, "Show LGV Debug Overlay (Stats)");
  r_lgvDebugSmodelId = Dvar_RegisterInt("MSQSSSLLQP", 0, 0, 0x200000, 4u, "Draw LGV volume and probes for a specific static models (0: all)");
  r_lgvDebugEnt = Dvar_RegisterInt("MLMNOSMSPT", -1, -1, 0x2000, 4u, "Draw LGV volume and probes for a specific entity");
  r_lgvDumpXModels = Dvar_RegisterInt("SPRNTNKT", 0, 0, 16, 4u, "Dump XModels with minimum specified dimension.");
  r_lgvForceUseEntityBounds = Dvar_RegisterBool("MMQKLRPNSL", 0, 4u, "Force scene ent to use entity bounds");
  r_lgvForceXModelDensity = Dvar_RegisterFloat("MNMQSKLNQN", 0.0, 0.0, 1024.0, 4u, "Force XModel LGV Density");
  r_lgvForceExplodeModels = Dvar_RegisterBool("LNSQSMQNON", 0, 4u, "Force scene entity to allocate one volume per model");
  r_lgvDebugEvalFreq = Dvar_RegisterEnum("LOQKRRSMPO", lgvEvalFreqNames, 0, 4u, "LGV evaluation frequency (affects debug rendering only!)");
  r_lgvDebugBasisType = Dvar_RegisterEnum("LPLRTMPLLK", lgvBasisTypeNames, 0, 4u, "LGV basis type (affects debug rendering only!)");
  r_lgvDebugOcclusionMode = Dvar_RegisterEnum("MPKSSMQMQQ", lgvOcclusionModeNames, 0, 4u, "LGV Occlusion calculation mode (affects debug rendering only!)");
  r_lgvThinOverridePushOff = Dvar_RegisterFloat("TQNTKSLSN", 8.0, 0.0, 64.0, 4u, "Push off amount for thin objects, like doors when sampling lightgrid");
  r_lgvThinOverrideShrink = Dvar_RegisterFloat("NQKNPNTRMN", 0.25, 0.1, 1.0, 4u, "Shrinks LGV Volume around a thin object, so you don't have as much bleeding of lighting");
  r_lgvThinOverrideStable = Dvar_RegisterInt("NKKOQNKOPP", -1, -1, 1, 4u, "-1 means use the defaults, 0 means force to animate with camera and 1 means force stable and not animate");
  r_lgvThinOverride = Dvar_RegisterBool("OMQMNPMRQM", 0, 4u, "Toggles r_lgvThinOverride PushOff, Shrink and Stable");
  r_lgvThinDisable = Dvar_RegisterBool("NNKKTSSOOM", 0, 4u, "Disables all thing modifiers");
  r_lgvBoostWidth = Dvar_RegisterInt("LSSSKMRMSM", -1, -1, 1, 4u, "Boosts width of dynamic models, second smallest dimension, -1 uses model settings, 0/1 globally turn off/on");
  v10.v[0] = 0.0;
  v10.v[1] = 0.0;
  v10.v[2] = 0.0;
  r_lgvDebugEntSamplingOffset = Dvar_RegisterVec3("NLSOSLSORR", &v10, -3.4028235e38, 3.4028235e38, 4u, "Sampling offset of entity num specified in r_lgvDebugEnt");
  r_gpuCopyPerFrameBudgetMB = Dvar_RegisterFloat("PLLNLOTON", 10.0, 0.0, 1000.0, 4u, "Amount of data that can be copied per-frame by the GPU copier (in MB, can be fractional)");
  r_gpuCopyPerFrameCommandsBudget = Dvar_RegisterInt("LQNTQSSNSS", 400, 1, 1000000, 4u, "Number of commands that can be processed per-frame by the GPU copier");
  r_dlsDebugLight = Dvar_RegisterEnum("NNOMNQKLQO", dlsDebugLightNames, 0, 4u, "Debug lights for dynamic lightset");
  r_dlsDebugIntensity = Dvar_RegisterFloat("MOPMOSRKQP", 1.0, 1.0, 10.0, 4u, "Intensity when lightset are over-ridden");
  r_dlsDebugMode = Dvar_RegisterEnum("MSQLNPRML", dlsDebugModeNames, 2, 4u, "Debug modes for dynamic lightset");
  r_dlsDebugVisualize = Dvar_RegisterBool("QKOTOPPSS", 0, 4u, "Visualize each of the dynamic lightset basis functions");
  r_dlsDebugLightsetRender = Dvar_RegisterInt("LSQTRMMTOK", -1, -1, 256, 4u, "Visualize the non-zero primary lights for a dynamic lightset basis function");
  r_dlsDebugDisableTemporalSmoothingPulse = Dvar_RegisterBool("TKQMPKOSR", 0, 4u, "If dynamic lightset has a sudden change it disables temporal smoothing temporarily so that dynamic models don't fade out. This disables this, in case there is flickering");
  r_enablePrecomputedSkyIllumination = Dvar_RegisterBool("LMQMNMSSPN", 1, 4u, "Enable precomputed sky illumination");
  r_enablePrecomputedSkyIlluminationMask = Dvar_RegisterBool("PMPRKOQNN", 1, 4u, "Enable precomputed sky illumination mask");
  r_showPrecomputedSkyIlluminationMask = Dvar_RegisterBool("NQMRQKSRPP", 0, 4u, "Show precomputed sky illumination mask");
  r_mdaoBoneInfluenceRadiusScale = Dvar_RegisterFloat("LOKPNNNNSO", 10.0, 1.0, 50.0, 0, "Scale for the bone influence radius for mdao");
  r_mdaoOccluderCullDistance = Dvar_RegisterFloat("OKKTPRPONL", 1000.0, 1.0, 16384.0, 0, "Culling distance for mdao occluders");
  r_mdaoOccluderFadeOutStartDistance = Dvar_RegisterFloat("LPKPSMMQOL", 900.0, 1.0, 16384.0, 0, "Fade out distance for mdao occluders");
  r_mdaoMinBoneBoundsToOcclude = Dvar_RegisterFloat("NOOTPPOPSQ", 150.0, 25.0, 16384.0, 0, "Minimum volume of the bone collider to create occluders for");
  r_mdaoCapsuleStrength = Dvar_RegisterFloat("LSRLSMKMTP", 0.64999998, 0.0, 1.0, 0, "MDAO strength for capsule occluders");
  r_mdaoDrawOccluders = Dvar_RegisterBool("MRQTRLKMTN", 0, 0, "Draws the entity occluder ellipsoids used as MDAO casters");
  r_mdaoShowBuffer = Dvar_RegisterBool("MOPRLRTMSK", 0, 4u, "Debug draw MDAO buffer");
  r_mdaoVolumeStrength = Dvar_RegisterFloat("NMLNMRNNKQ", 0.89999998, 0.0, 1.0, 0, "MDAO strength for volume occluders");
  r_lightIntensityScopeScreen = Dvar_RegisterFloat("OLQOMOOMRP", 0.36000001, 0.0099999998, 1.0, 0x40u, "Scope screen brightness ( 0.18 - gray paper )");
  r_lightIntensityAutoScale = Dvar_RegisterFloat("MLRKRSTMRO", 1.0, 0.001, 1000.0, 0x40u, "Dynamic light intensity global scale for tonemapping compensation");
  r_lightIntensityAutoScaleMin = Dvar_RegisterFloat("NSSOKNLRPQ", 0.001, 0.001, 1.0, 0x40u, "Lower bound for dynamic light tonemapping compensation scale");
  r_lightIntensityAutoScaleMax = Dvar_RegisterFloat("TROPRPKTK", 1000.0, 1.0, 1000.0, 0x40u, "Upper bound for dynamic light tonemapping compensation scale");
  r_VFXOmniLightFalloffEnable = Dvar_RegisterBool("RNNNLQSRS", 0, 4u, "Enable override for VFX Light falloff scale for omni lights.");
  r_VFXOmniLightFalloff = Dvar_RegisterFloat("MLPKPLMNLT", 0.5, 0.0, 1.0, 4u, "VFX Light falloff scale for omni lights. On top of physical falloff. 0.0 - no falloff 1.0 - smooth falloff starts at light center.");
  r_VFXSpotLightFalloffEnable = Dvar_RegisterBool("TMKMSLQSR", 0, 4u, "Enable override for VFX Light falloff scale for spot lights.");
  r_VFXSpotLightFalloff = Dvar_RegisterFloat("NNPPONORK", 0.2, 0.0, 1.0, 4u, "VFX Light falloff scale for omni lights. On top of physical falloff. 0.0 - no falloff 1.0 - smooth falloff starts at light center.");
  r_del_oof = Dvar_RegisterBool("MNNLNMSSRM", 0, 4u, "Use deferred effect lighting out-of-frustum with global voxel tree");
  r_lightMap = Dvar_RegisterEnum("TSNNNOLOQ", colorMapNames, 1, 4u, "Replace all lightmaps with pure black or pure white");
  XB3ConsoleType = Sys_GetXB3ConsoleType();
  v6 = 0;
  if ( XB3ConsoleType == XB3_CONSOLE_SCORPIO )
    v6 = 4;
  r_mode = Dvar_RegisterEnum("LTPQTTPSOR", s_displayModes, v6, 0x804u, "Display mode");
  r_magnifierEnable = Dvar_RegisterBool("MPMTTQMONR", 0, 4u, "Enable magnifier");
  r_magnifierParams = Dvar_RegisterVec4("LOQQSTLPSK", 2.0, 2.0, 0.25, 0.25, 0.0, 20.0, 4u, "Magnifier parameters. Specifies the (x, y) scale and the (z, w) offset");
  r_postAA = Dvar_RegisterEnum("MQOMSSQRRQ", r_antialiasingModeNames, 3, v1, "Post process antialiasing mode");
  r_screenShotPixelOffset = Dvar_RegisterVec4("LPKQOLROKL", 0.0, 0.0, 0.0, 0.0, -100.0, 100.0, 4u, "Subpixel offset, set by screenshot machine");
  r_smaaFilmicStrength = Dvar_RegisterFloat("NLQKNTQSNT", 1.0, 0.0, 1.0, 0, "Strength of the filmic temporal effect. Set to 0 to revert to regular non-filmic SMAA.");
  r_smaaQuincunx = Dvar_RegisterBool("NONPSOKLR", 1, 4u, "Enables Quincunx for SMAA T2x modes, which trades texture detail for better antialiasing results.");
  r_smaaTransMask = Dvar_RegisterBool("PMKRPQLPM", 1, 4u, "Enables a mask to attenuate TAA effect on transparent objects.");
  r_smaaUpsampleMode = Dvar_RegisterEnum("NSQSKRKPOM", r_smaaTemporalUpsampleModeNames, 1, 4u, "Temporal upsampling mode, active if using SMAA T2x or Filmic SMAA T2x.");
  r_smaaGradientAdjust = Dvar_RegisterFloat("NSLRSQLMSL", 1.0, 0.0, 2.0, 0x40u, "Corrects supersampling derivatives (trades texture details / aliasing).");
  r_smaaDynamicSubpixelPattern = Dvar_RegisterEnum("MRMPTNMLP", smaaDynamicSubsamplePatternNames, 0, 4u, "Changes subpixel pattern in motion.");
  r_smaaDynamicSubpixelPatternDistance = Dvar_RegisterFloat("NMLLTNKPMK", 100.0, 5.0, 1000.0, 0x40u, "Distance at which a 1 pixel-sized motion will trigger this feature.");
  r_temporalSamplingEnable = Dvar_RegisterBool("MKLQLQLQNO", 1, 0x44u, "Enables/disables temporal sampling techniques");
  r_vrs = Dvar_RegisterEnum("MSSRRPRTL", vrsModeNames, 2, 0, "Enables variable-rate-shading techniques.");
  r_vrsQualityThreshold = Dvar_RegisterFloat("LSMRSQSST", 0.1, 0.0, 1.0, 0x40u, "Controls VRS quality threshold ( 0.0 - highest quality, 1.0 - lowest quality )");
  r_vrsDebugForceSamplingRate = Dvar_RegisterInt("MPQOMSTLLS", -1, -1, 2, 4u, "Force specific sampling rate ( -1 default, 0 - force 1s/4p, 1 - force 2s/4p, 2 - force 4s/4p");
  r_vrsDebugFrameSamplePattern = Dvar_RegisterInt("MQKSPMRKQL", -1, -1, 4, 4u, "Show specific frame VRS sampling pattern ( -1 to enable rotating patterns).");
  r_halfResEmissivePSCopy = Dvar_RegisterBool("NQNQSLSMMQ", 0, 4u, "Enables MSAA Pixel Shader Copy.");
  r_halfResEmissive = Dvar_RegisterBool("MPRNRNTNNQ", 0, 0, "Enables offscreen buffer pass for half-res particle rendering.");
  r_volumeLightScatterDebug = Dvar_RegisterInt("MRPORMPTKP", 0, 0, 4, 0, "Enables volumetric light scattering debug rendering");
  r_volumeLightScatterScriptIntensity = Dvar_RegisterFloat("MNOLLPSQSS", 1.0, 0.0, 1.0, 0x40u, "Script control for volumetric light scattering intensity");
  r_volumetricsDisableHack = Dvar_RegisterBool("OLONSLNOPK", 1, 4u, "Temporary dvar to disable volumetrics while vision sets are disabled.");
  r_volumetricDepth = Dvar_RegisterVec4("MPOKKOPMTN", 128.0, 384.0, 640.0, 1024.0, 1.0, 4096.0, 0x40u, "Volumetric cascade depth ranges [nearest, near, far, distant]");
  r_volumetricZOffsetBias = Dvar_RegisterFloat("LPSQKOLTLS", 0.0, 0.0, 20.0, 0x40u, "Volumetric z offset bias");
  r_volumetricsAttenuationClamp = Dvar_RegisterFloat("OLNKQKOTLK", 0.00019999999, 0.0, 10.0, 0x40u, "Light attenuation value clamp for volumetric lighting calculation");
  r_volumetricsBulbAttenClamp = Dvar_RegisterFloat("MRRMSTNPMR", 1.0, 1.0, 3.4028235e38, 0x40u, "(Hack) Max bulbRadius of area lights to correct volumetrics attenuation (1.0 to disable).");
  r_volumetricsDensityTemporalFactor = Dvar_RegisterFloat("LSLPORSMRK", 0.94999999, 0.0, 1.0, 0x40u, "Interpolation factor for density temporal blur");
  r_volumetricsScatterTemporalFactor = Dvar_RegisterFloat("MLNONSKNKO", 0.94999999, 0.0, 1.0, 0x40u, "Interpolation factor for scattering temporal blur");
  r_volumetricsAmbientTemporalFactor = Dvar_RegisterFloat("LSRSKPMRSM", 0.94999999, 0.0, 1.0, 0x40u, "Interpolation factor for ambient temporal blur");
  r_volumetricsParticleIter = Dvar_RegisterInt("MRKTMQLPLR", 100, 0, 1000, 0x40u, "Particle loop limit per dispatch.");
  r_volumetricsParticleNoise = Dvar_RegisterEnum("LSKNTKKQSP", r_volumetricsParticleNoiseNames, 0, 0, "Apply noise to volumetric particle shapes / density.");
  r_volumetricsAmbientBlur = Dvar_RegisterFloat("LTKPMMQONS", 0.0, 0.0, 16.0, 0x40u, "Volumetric lightgrid color blur radius in texels.");
  r_volumetricsUseCUMask = Dvar_RegisterBool("OKRTQNSQMQ", 0, 4u, "Enable volumetric CU masking for async overlaps");
  r_volumetricsWaveLimit = Dvar_RegisterInt("NKNSKKLNMN", 2, 0, 10, 0x40u, "Wavefront limit for volumetric passes.");
  r_volumetricsDebug = Dvar_RegisterInt("SSQTTKLKQ", 0, 0, 1, 4u, "Volumetrics debug");
  r_volumetricsGamma = Dvar_RegisterFloat("NKTLSLKQS", 1.0, 0.0, 32.0, 4u, "Volumetrics Variance Temporal Gamma param");
  r_fogHeightMapBBoxMin = Dvar_RegisterVec2("MOMOSTNNQ", -64565.898, -51990.801, -3.4028235e38, 3.4028235e38, 0x44u, "Bounding box min of current map volumetric heightfield");
  r_fogHeightMapBBoxMax = Dvar_RegisterVec2("NOMOROLLMQ", 64826.102, 77401.203, -3.4028235e38, 3.4028235e38, 0x44u, "Bounding box max of current map volumetric heightfield");
  r_fogHeightMapScale = Dvar_RegisterVec3("QQQOTOROT", 0.0, 14814.5, 0.0, -3.4028235e38, 3.4028235e38, 0x44u, "Scales for volumetric height map.X - start fog scale, Y - end fog scale, Z - density scale");
  r_debugDrawVolumetricParticles = Dvar_RegisterBool("RPSQSRMPO", 0, 0, "Draw volumetric particle ellipsoids as wireframe.");
  r_transShadowEnable = Dvar_RegisterBool("NRLNMQROLR", 1, 0x44u, "Enable translucent shadows");
  r_transShadowPrevFrameMaskLerpFactor = Dvar_RegisterFloat("PQPNNMOM", 0.5, 0.0, 1.0, 0x40u, "Lerp factor for temporal anti aliasing of translucent shadows, higher is softer");
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
  r_debugDrawTransientLights = Dvar_RegisterEnum("TONNONQRM", r_debugDrawTransientLightsNames, 0, 0, "Draw lights assigned to transient files");
  r_debugDrawLightsDrawRadius = Dvar_RegisterFloat("MSORPSLLMO", 2500.0, 0.0, 50000.0, 0, "Max distance from camera to draw debug light info");
  r_debugDrawLightsDrawDetailRadius = Dvar_RegisterFloat("MLTTSQNQTR", 250.0, 0.0, 10000.0, 0, "Max distance from camera to draw debug light detailed info");
  r_debugDrawLightsFilterShadowCasters = Dvar_RegisterEnum("QPTPKRRPL", r_debugDrawLightsFilterShadowCastersNames, 1, 0, "Additional debug draw light filtering");
  R_LightTweak_InitDvars();
  r_tension_enable = Dvar_RegisterBool("OKLPRRQSQM", 1, 0x44u, "Toggles tension");
  r_blendshape_enable = Dvar_RegisterBool("MTMKPNKPNM", 1, 0x44u, "Toggles blendshapes");
  r_blendshape_debug = Dvar_RegisterInt("RTPQMSTRQ", -1, -1, 2047, 0x44u, "Entity number to debug/force blendshape weights");
  r_blendshape_debug_index = Dvar_RegisterInt("NLKNMRLTLN", 0, 0, 1024, 0x44u, "Blendshape weight index to debug/force; all others will be 0");
  r_blendshape_debug_value = Dvar_RegisterFloat("MKLTQOSNPM", 1.0, 0.0, 1.0, 0x44u, "Blendshape weight value to use for debug/force");
  r_drawPrimHistogram = Dvar_RegisterBool("LMOPLTRPNK", 0, 4u, "Draws a histogram of the sizes of each primitive batch");
  r_debugDrawCinematicFrames = Dvar_RegisterBool("LNOPOLNSPM", 0, 4u, "Draws a cinematic frame images on screen");
  r_smp_backend = Dvar_RegisterBool("NQLOOOOQPN", 1, 0, "Process renderer back end in a separate thread");
  r_smp_worker = Dvar_RegisterBool("LRLLOSTTOR", 1, 0, "Process renderer front end in a separate thread");
  r_smp_workers_count = Dvar_RegisterInt("MTRSOQKOSK", -1, -1, 3, 0, "Current number of workers currently running. -1 for automatic value");
  r_sunshadowmap_cmdbuf_worker = Dvar_RegisterBool("OMTMTQKNSR", 1, 4u, "Process shadowmap command buffer in a separate thread");
  r_cmdbuf_worker = Dvar_RegisterBool("MTSPTMRLRO", 1, 4u, "Process command buffer in a separate thread");
  r_cmdbuf_handoff = Dvar_RegisterBool("NKRMKSLMSS", 1, 0, "Allow the backend thread to take over partially executed command buffer jobs.");
  r_cmdbuf_wait_us = Dvar_RegisterInt("NQKSNKLLO", 100, 0, 0x7FFFFFFF, 0, "Time in us the backend can wait for a command buffer job to abort before starting on other worker commands.");
  r_fogCircleTweaks = Dvar_RegisterBool("LKRORRMNKR", 0, 4u, "Enable fog circle tweaks from dvar");
  r_fogCircle = Dvar_RegisterVec4("OLNQTLPOMK", 0.0, 0.0, 300.0, 900.0, -3.4028235e38, 3.4028235e38, 0, "Overrides circle position (xy), circle radius (z) and circle height (w). Needs r_fogCircleTweaks");
  r_fogCircleInset = Dvar_RegisterFloat("NSKPQSOPMP", 0.0, -3.4028235e38, 3.4028235e38, 0, "Circle fog inset");
  r_fogCircleHeightFalloff = Dvar_RegisterVec2("PNSNPNRKN", 10000.0, 1000.0, 0.0, 3.4028235e38, 0, "Overrides circle falloffs: distance fog - x, volumetric - y. Needs r_fogCircleTweaks");
  r_fogCircleVolumetricParams = Dvar_RegisterVec2("MSPQTOOKSK", 0.001, 1.0, 0.0, 3.4028235e38, 0, "Overrides circle volumetrics params: density - x, scale - y. Needs r_fogCircleTweaks");
  r_fogCircleVolumetricInnerColor = Dvar_RegisterVec3("OMQTMPKQNT", 0.1, 0.5, 0.1, 0.0, 3.4028235e38, 0, "Overrides circle inner color for volumetric. Needs r_fogCircleTweaks");
  r_fogCircleVolumetricOuterColor = Dvar_RegisterVec3("NTQSLQMOKK", 0.1, 0.5, 0.1, 0.0, 3.4028235e38, 0, "Overrides circle outer color for volumetric. Needs r_fogCircleTweaks");
  r_fogCircleDistanceParams = Dvar_RegisterVec3("LQMRSRQQLT", 0.1, 1.0, 50.0, 0.0, 3.4028235e38, 0, "Overrides circle distance params: density - x, scale - y, half plane - z. Needs r_fogCircleTweaks");
  r_fogCircleDistanceInnerColor = Dvar_RegisterVec3("NNLSQNKROK", 0.0, 2.0, 0.0, 0.0, 3.4028235e38, 0, "Overrides circle inner color for distance fog. Needs r_fogCircleTweaks");
  r_fogCircleDistanceOuterColor = Dvar_RegisterVec3("LLPRTKKKTT", 0.0, 2.0, 0.0, 0.0, 3.4028235e38, 0, "Overrides circle outer color for distance fog. Needs r_fogCircleTweaks");
  r_fogCirclePerceptualTint = Dvar_RegisterVec4("LLMNPNKLQQ", 0.36000001, 0.34, 0.059999999, 1.0, 0.0, 3.4028235e38, 0, "Overrides circle fog scattering bias - rgb and intensity (HACK). Needs r_fogCircleTweaks");
  r_fogCircleOuterColorDistance = Dvar_RegisterFloat("NNROPNTOTT", 1000.0, 0.0, 3.4028235e38, 0, "Overrides circle fog outer color distance. Needs r_fogCircleTweaks");
  r_fogCircleSkyDistanceMultiplier = Dvar_RegisterFloat("NTTRNSKOTR", 10.0, 0.0099999998, 3.4028235e38, 0, "Overrides circle fog sky distance multiplier. Needs r_fogCircleTweaks");
  r_fogCircleDistanceFogBlend = Dvar_RegisterVec2("LOOSRMPSPQ", 0.0, 0.0, 0.0, 1.0, 0, "Overrides circle fog blend with distance fog. Needs r_fogCircleTweaks");
  r_fogCircleDistanceHeightBlend = Dvar_RegisterFloat("TKRNNLOKT", 1000.0, 0.0099999998, 3.4028235e38, 0, "Circle distance fog height blend");
  r_fogCircleDistanceHeightViewBlend = Dvar_RegisterFloat("OMQMRMTTRM", 3000.0, 0.0099999998, 3.4028235e38, 0, "Circle distance fog height blend by view ray start");
  r_fogCircleDistanceHeightBlendStart = Dvar_RegisterFloat("MMPMKQMLKT", 3000.0, 0.0099999998, 3.4028235e38, 0, "Circle distance fog start of height blend");
  r_fogCircleFogDensityScale = Dvar_RegisterFloat("LQOMOOLPO", 1.0, -3.4028235e38, 3.4028235e38, 0, "Circle fog density scale");
  r_fogCircleFogDensityBias = Dvar_RegisterFloat("NQSNQQNRMN", 0.0, -3.4028235e38, 3.4028235e38, 0, "Circle fog density bias");
  r_fogCircleFogDensityNoiseScale = Dvar_RegisterFloat("TPKKNSMRQ", 1.0, -3.4028235e38, 3.4028235e38, 0, "Circle fog density noise scale");
  r_fogCircleFogDensityNoiseBias = Dvar_RegisterFloat("STTMOMSQL", 0.0, -3.4028235e38, 3.4028235e38, 0, "Circle fog density noise bias");
  r_fogCircleFogDensityTiling = Dvar_RegisterVec2("NTTMPOQNTL", 1.0, 1.0, -3.4028235e38, 3.4028235e38, 0, "Circle fog density noise tiling");
  r_fogCircleFogDensityScrollingSpeed = Dvar_RegisterVec2("NRNMNOTPSS", 1.0, 1.0, -3.4028235e38, 3.4028235e38, 0, "Circle fog density noise scrolling speed");
  r_vrsEnabled = Dvar_RegisterBool("MPOPRKKSM", 0, 0, "Enable Variable Rate Shading");
  r_vrsMaskEnabled = Dvar_RegisterBool("LOSKTOORPK", 1, 0, "Enable VRS Mask");
  r_vrsMaskPreview = Dvar_RegisterBool("NONLNTKTQL", 0, 0, "Preview VRS Mask");
  r_vrsMaskPixelThreshold = Dvar_RegisterFloat("LQLTLOTSO", 0.050000001, 0.0, 1.0, 4u, "VRS Mask - Pixel Threshold - value that describes size of the areas. The higher the value, the Shading Rate areas are larger.");
  r_vrsMaskNeighborhoodThreshold = Dvar_RegisterFloat("QTNRSKKNS", 0.050000001, 0.0, 0.2, 4u, "VRS Mask - Neighborhood Threshold - the value from which the shading rate 4x4 is appeared");
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
  r_vsync = Dvar_RegisterBool("MPPNRRRPMP", 1, 0, "Enable v-sync before drawing the next frame to avoid 'tearing' artifacts.");
  r_slopTarget = Dvar_RegisterFloat("LKTKTLMSP", 10.0, 0.0, 20.0, 0, "The target duration in ms between the gpu queueing a flip and the corresponding vsync");
  r_longFrameBackoff = Dvar_RegisterInt("LKKRPNKMMR", 4, 0, 0x7FFFFFFF, 0, "The number of frames to back off of performing gpu latency delay after a long frame");
  r_longFrameSlop = Dvar_RegisterFloat("OQTQQQPTP", 3.0, 0.0, 20.0, 0, "The slop duration threshold in ms at which a frame is considered a long frame");
  r_longWorkFrames = Dvar_RegisterInt("MMTPRTNMQP", 4, 0, 0x7FFFFFFF, 0, "If the calculated work duration for the previous frame is longer than this number of frames, give up on delaying this frame.");
  r_slopDelayReduction = Dvar_RegisterFloat("LTNTLNRNOS", 0.0, 0.0, 20.0, 0, "Duration in milliseconds to always reduce the computed frontend delay duration to make up for inaccuracies in the computation. Slightly increases latency but also increases the chance of the frontend delay preventing the main thread from hitting 60 fps.");
  r_delayForSlop = Dvar_RegisterBool("PQOSMMLLK", 1, 0, "Controls whether frontend is delayed to hit the frame slop target.");
  r_ringFractionForFlush = Dvar_RegisterFloat("MPRTTKLMNP", 0.30000001, 0.0, 1.0, 4u, "Portion of ring buffer size to allocate before fencing. Lower fraction leads to more fences, higher fraction leads to higher chance for stalls.");
  r_clear = Dvar_RegisterEnum("QMORRTR", r_clearNames, 1, 0, "Controls how the color buffer is cleared");
  r_clearColor = Dvar_RegisterColor("NNNKPKRMQS", 0.5, 0.75, 1.0, 1.0, 0, "Color to clear the screen to when clearing the frame buffer");
  r_clearColor2 = Dvar_RegisterColor("PNQQLROTO", 1.0, 0.5, 0.0, 1.0, 0, "Color to clear every second frame to (for use during development)");
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
  r_spotLightEntityShadows = Dvar_RegisterBool("TLMMOPMSK", 0, 0x40u, "Enable entity shadows for FX spot lights.");
  r_spotLightShadowsPolygonOffset = Dvar_RegisterFloat("LSQMOMSSPS", 1.0, 0.0, 16.0, 4u, "Set spot light shadow polygon offset scaling.");
  r_offloadPrimaryLights = Dvar_RegisterEnum("NKLSLKPSSS", r_offloadPrimaryLightsNames, 1, 0x40u, "Enable transient primary lights");
  r_primaryLightMotionDebug = Dvar_RegisterInt("MNSPTPSLLR", 0, 0, 6500, 4u, "For debugging primary light motion");
  r_primaryLightMotionDetect = Dvar_RegisterEnum("NKKPQSTMRL", r_primaryLightMotionDetectNames, 1, 0x40u, "Enable primary light motion detect for skipping unnecessary shadowmap update");
  r_primaryLightMotionDetectUseSkinnedModel = Dvar_RegisterBool("LPPMLLTRNT", 1, 0x40u, "A skinned model always trigger motion for primary lights");
  r_primaryLightMotionDetectSizeMin = Dvar_RegisterFloat("NNMTMKQPPM", 0.1, 0.0, 262144.0, 0x40u, "Smallest object size for triggering primary light motion detector");
  r_primaryLightMotionDetectSizeMax = Dvar_RegisterFloat("MMLQOTLKOQ", 4096.0, 0.0, 262144.0, 0x40u, "Largest object size for triggering primary light motion detector");
  r_lightSensorMode = Dvar_RegisterEnum("NTSPRTSSTT", r_lightSensorModeNames, 2, 4u, "Light sensor mode");
  r_sunShadowParams = Dvar_RegisterVec4("LRLKLRNRTS", 8.0, 0.0, 1.0, 0.0, -1024.0, 1024.0, 0x40u, "Sun Shadow : x = cascade blend fraction, y = back-face terminator threshold, z = polygonOffsetScale, w = back-face cull scale");
  r_compressedSunShadowBiasScale = Dvar_RegisterFloat("NLTNTKLQNQ", 8.0, 0.0, 128.0, 0, "Shadow bias scale for compressed sun shadow (relative to 0-th cascade).");
  r_compressedSunShadowDebug = Dvar_RegisterInt("OKNTKOPMOK", 0, 0, 3, 0, "Compressed sun shadow debug: 0-no debug, 1-CSM only, 2-disable CSM, 3-compressed cascades.");
  r_compressedSunShadowFilteringMaxRadiusDebug = Dvar_RegisterFloat("MLMLSNTTOO", 0.0, 0.0, 32.0, 0, "Compressed sun shadow debug filtering radius.");
  r_compressedSunShadowFilteringFarZDebug = Dvar_RegisterFloat("MLLTPQNOSN", 0.0, 0.0, 65536.0, 0, "Compressed sun shadow debug filtering far plane.");
  r_compressedSunShadowOverlay = Dvar_RegisterInt("MROKNLSORL", 0, 0, 2, 0, "Show CSM overlay: 0-none, 1-data, 2-streaming.");
  r_compressedSunShadowStreamingDebug = Dvar_RegisterInt("LLLPTRKPSO", 0, 0, 2, 0, "CSM streaming debug modes: 1-disable at runtime, 2-force defragmentation.");
  r_drawWater = Dvar_RegisterBool("LRMSSOOQQP", 1, 0, "Enable water animation");
  r_lockPvs = Dvar_RegisterBool("LSLKMNMRLK", 0, 4u, "Lock the viewpoint used for determining what is visible to the current position and direction");
  r_skipPvs = Dvar_RegisterBool("MONNPSNOQO", 0, 4u, "Skipt the determination of what is in the potentially visible set (disables most drawing)");
  r_portalBevels = Dvar_RegisterFloat("MOMNLTOPQN", 0.69999999, 0.0, 1.0, 0, "Helps cull geometry by angles of portals that are acute when projected onto the screen, value is the cosine of the angle");
  r_portalBevelsOnly = Dvar_RegisterBool("NQOPMRKQTL", 0, 0, "Use screen-space bounding box of portals rather than the actual shape of the portal projected onto the screen");
  r_singleCell = Dvar_RegisterBool("MSMMLQQNSS", 0, 4u, "Only draw things in the same cell as the camera.  Most useful for seeing how big the current cell is.");
  r_portalWalkLimit = Dvar_RegisterInt("MRTKQSPSQS", 0, 0, 100, 4u, "Stop portal recursion after this many iterations.  Useful for debugging portal errors.");
  r_portalMinClipArea = Dvar_RegisterFloat("LLPKRNMQQN", 0.02, 0.0, 1.0, 0, "Don't clip child portals by a parent portal smaller than this fraction of the screen area.");
  r_portalMinRecurseDepth = Dvar_RegisterInt("NRSQNNQOLK", 2, 0, 100, 4u, "Ignore r_portalMinClipArea for portals with fewer than this many parent portals.");
  r_materialLodOverride = Dvar_RegisterInt("MQKLMPORMS", 0, -1, 1, 4u, "Override material lod (-1 to disable override)");
  r_materialLodMin = Dvar_RegisterInt("MLQPQQRPQM", 0, 0, 2, 4u, "Minimum material lod");
  r_materialLod0SizeThresholdOverride = Dvar_RegisterFloat("NMLSKNTTQQ", -1.0, -1.0, 5.0, 4u, "Size threshold for material lod 0.");
  r_showPortals = Dvar_RegisterInt("QQLNLMOTM", 0, 0, 3, 4u, "Show portals for debugging");
  r_showPortalsOverview = Dvar_RegisterFloat("NNQPOMPOPT", 0.0, 0.0, 262144.0, 4u, "Render 2d XY portal overlay scaled to fit to this distance.  Useful for debugging portal errors.");
  r_showAabbTrees = Dvar_RegisterInt("LPPRPNQSKM", 0, 0, 3, 4u, "Show axis-aligned bounding box trees used in potentially visibile set determination. 1 shows hierarchy, 2 shows world surfaces, 3 shows both.");
  r_showSModelNames = Dvar_RegisterBool("TPKSLNKQR", 0, 4u, "Show static model names");
  r_umbra = Dvar_RegisterEnum("LQQKQROPSL", r_umbraModeNames, 1, 4u, "Umbra-based visibility culling mode.");
  r_umbraShadows = Dvar_RegisterEnum("MNSPPRQLLM", r_umbraShadowModeNames, 1, 4u, "Umbra-based shadow caster visibility culling mode.");
  r_umbraShadowCasters = Dvar_RegisterBool("LSSLKOQPMQ", 0, 0x40u, "Enables Umbra-based shadow caster culling.");
  r_umbraQueryParts = Dvar_RegisterVec2("LLQTMQKQMR", 4.0, 1.0, 1.0, 16.0, 4u, "The number of parts the Umbra query frustum is broken into for async query processing.");
  r_umbraDynamicDpvsSMP = Dvar_RegisterBool("MTLPRKSSRL", 1, 4u, "Toggle SMP processing of dynamic object culling via Umbra.");
  r_umbraSpotShadowSelection = Dvar_RegisterEnum("LMLQLLPSSR", r_umbraSpotShadowSelectionNames, 1, 0x44u, "Umbra culling for shadowed spot selection.");
  r_umbraCullDynLights = Dvar_RegisterEnum("PNSPTQSLN", r_umbraCullDynLightsNames, 1, 4u, "Toggle Umbra culling for dynamic lighting.");
  r_umbraDistance = Dvar_RegisterFloat("OLSOMMTQSM", 0.0, 0.0, 3.4028235e38, 4u, "Tolerance for 'uncertainty' in camera translation.  Drives the 'distance' parameter in Umbra queries.");
  r_umbraAllowGameVisibilityOffset = Dvar_RegisterBool("MKPSQQQTPR", 0, 4u, "If false, will an assert() will be triggered if Game Code provides an Umbra visibility query offset.  This may have severe performance implications and must be used very carefully.");
  r_umbraInvertStaticVisibility = Dvar_RegisterBool("NORQMNPOOP", 0, 4u, "Inverts the visibility results returned by Umbra, for all render objects baked in the tome.");
  r_umbraMergeBspTransientVisibility = Dvar_RegisterBool("LOPKTKKSTK", 1, 4u, "Apply transient visibility to umbra bsp visibility results");
  r_umbraShowOverlay = Dvar_RegisterBool("MNLSTLNTRQ", 0, 4u, "Toggles debug overlay of umbra occlusion buffer.");
  r_umbraDebugView = Dvar_RegisterEnum("MTRLMPOMQP", r_sceneViewNames, 0, 4u, "Selects scene view for umbra debug displays.");
  r_umbraShowOverlayDisplaySizeScale = Dvar_RegisterFloat("NKTRSSLRQN", 2.0, 1.0, 20.0, 4u, "Scales the size at which the overlay is shown on screen.");
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
  r_showFrustumGridDebug = Dvar_RegisterInt("MLQPKQNRKK", 0, 0, 6, 4u, "Show frustum grid buffer used for decals [mask 1-2, word range 3-4, cluster 5-6]");
  r_frustumLightProxyMargin = Dvar_RegisterFloat("LRQMQTLORK", 32.0, 0.001, 3.4028235e38, 4u, "Margin of error for determining whether inside proxy volume");
  r_frustumLightProxyUseMeshCheck = Dvar_RegisterBool("QPLLSOQKQ", 0, 4u, "Use accurate per tri check if camera is inside proxy mesh.");
  r_frustumLightProxyDebugExpand = Dvar_RegisterFloat("QKMOLSRRT", 0.0, -64.0, 64.0, 4u, "Expansion of proxy in world space for debugging");
  r_frustumLightProxyConsExpand = Dvar_RegisterFloat("SPPMKPQR", 7.0, 0.0, 64.0, 4u, "Expansion of proxy XY in clip space of target half texels");
  r_frustumLightProxyUseStencil = Dvar_RegisterBool("MPMKMOQSSP", 0, 4u, "Use dual pass stencil method for light proxies.");
  r_frustumLightUseZBinning = Dvar_RegisterBool("LTRKNKNRTK", 1, 4u, "Use ZBinning for F+ Proxies.");
  r_showFrustumLightsProxies = Dvar_RegisterInt("NOKRRTKOLO", 0, 0, 2, 4u, "Show frustum lights proxy geometry for forward+, 1 = All, 2 = only r_chooseFrustumLightProxy");
  r_chooseFrustumLightProxy = Dvar_RegisterInt("MLSTOLNMP", 0, 0, 127, 4u, "Choose which frustum-indexed light to render");
  r_showFrustumLightsDebug = Dvar_RegisterEnum("LMMMLLLPLN", r_showFrustumLightsDebugNames, 0, 4u, "Show frustum lights buffer used for forward+");
  r_showFrustumLightsMinIndexDebug = Dvar_RegisterInt("SOKTNRLSL", 0, 0, 31, 4u, "Choose which vol frustum slice use for start");
  r_showFrustumLightsMaxIndexDebug = Dvar_RegisterInt("NOLQRKTPRT", 31, 0, 31, 4u, "Choose which vol frustum slice use for end");
  r_showFrustumLightsDebugBlend = Dvar_RegisterFloat("SMRKKRKMS", 1.0, 0.0, 1.0, 4u, "Alpha blend frustum lights buffer");
  r_gpuMemoryPriority = Dvar_RegisterInt("PPQLLTMQL", 5, 5, 10, 0x44u, "Sets the priority of non-coherent GPU memory traffic vs. other traffic such as CPU, Audio, and IO device traffic.");
  r_floatzCopyCompressed = Dvar_RegisterBool("NPNOLOTRMK", 1, 4u, "Use a compute shader to copy compressed depth data to $floatz");
  r_lod0Dist = Dvar_RegisterFloat("QTSTQORQL", -1.0, -1.0, 3.4028235e38, 4u, "Distance for level of detail 0");
  r_lod1Dist = Dvar_RegisterFloat("MLMPLMKLRQ", -1.0, -1.0, 3.4028235e38, 4u, "Distance for level of detail 1");
  r_lod2Dist = Dvar_RegisterFloat("MLMPSMLTLP", -1.0, -1.0, 3.4028235e38, 4u, "Distance for level of detail 2");
  r_lod3Dist = Dvar_RegisterFloat("NMTKSTSLK", -1.0, -1.0, 3.4028235e38, 4u, "Distance for level of detail 3");
  r_lod4Dist = Dvar_RegisterFloat("LLSRLOLPPR", -1.0, -1.0, 3.4028235e38, 4u, "Distance for level of detail 4");
  r_lod5Dist = Dvar_RegisterFloat("LPONNKKRQ", -1.0, -1.0, 3.4028235e38, 4u, "Distance for level of detail 5");
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
  sm_sunStageBoundsFeather = Dvar_RegisterFloat("MMOPPTKQMO", 0.0099999998, 0.0, 1.0, 0x44u, "threshold for geos behind sun shadowmap far plane to fallback to static shadow");
  sm_sunPoissonFiltering = Dvar_RegisterBool("MTQRRSOMTT", 0, 0x40u, "Enable noisy shadow filtering for sun shadowmaps.");
  sm_spotAllow = Dvar_RegisterBool("NQKKOONQPR", 1, 4u, "Allow spot shadow mapping");
  sm_spotEnable = Dvar_RegisterBool("RNPPKQOTN", 1, 0x44u, "Enable spot shadow mapping from script");
  sm_spotDynamics = Dvar_RegisterBool("NOOOPPSMNO", 1, 0x40u, "Enable dynamic shadow casters for spot shadows");
  sm_spotSModelTargetLOD = Dvar_RegisterInt("OKSOTLNPQQ", 1, -1, 5, 0, "Stops updating spotshadow cache for static models that have this LOD or lower (more detailed). -1 = this feature is off.");
  sm_spotHTileMask = Dvar_RegisterBool("LQKRMORNPQ", 1, 0, "Enable htile mask. This will improve performance when only small percentage of spot shadow map changes. Console only.");
  r_showSunStage = Dvar_RegisterBool("MNMPRSTTSN", 0, 4u, "Debug draw sun stage trigger volumes.");
  r_debugDrawSunBounds = Dvar_RegisterBool("MMLRSMLSSK", 0, 4u, "Draw the sun shadow projection bounding box");
  sm_minSpotLightScore = Dvar_RegisterFloat("MRMPNPSOMS", 0.5, 0.0, 100.0, 0, "Minimum score (based on intensity, radius, and position relative to the camera) for a spot light to have shadow maps.");
  sm_dynlightAllSModels = Dvar_RegisterBool("NPLLLLSLMN", 0, 0x44u, "Enable, from script, rendering all static models in dynamic light volume when shadow mapping");
  sm_dynlightAllDModels = Dvar_RegisterBool("MMSTLSTOQK", 0, 0x44u, "Enable, from script, rendering all dynamic models in dynamic light volume when shadow mapping");
  sm_lightScore_eyeProjectDist = Dvar_RegisterFloat("LLNKNQLRTP", 64.0, 0.0, 96000.0, 0x44u, "When picking shadows for primary lights, measure distance from a point this far in front of the camera.");
  sm_lightScore_spotProjectFrac = Dvar_RegisterFloat("LPKSQRROQ", 0.125, 0.0, 1.0, 0x44u, "When picking shadows for primary lights, measure distance to a point this fraction of the light's radius along it's shadow direction.");
  sm_showOverlay = Dvar_RegisterEnum("MRMSTLMQTN", sm_showOverlayNames, 0, 4u, "Show shadow map overlay");
  sm_showOverlayDepthBounds = Dvar_RegisterVec2("MKQTLOMPOT", 0.25, 0.75, 0.0, 1.0, 4u, "Near and far depth values for the shadow map overlay");
  sm_showOverlayFocus = Dvar_RegisterInt("MRSPQMKQRR", 0, 0, 65, 4u, "Shadow map to focus on when displaying the shadow map overlay ( Useful when there are a large number of shadowed lights )");
  sm_showOverlayCompressionDebug = Dvar_RegisterInt("OLMMPTQOLS", 0, 0, 1, 4u, "Shadow map compression data display mode: 0 - depth, 1-traversal count.");
  sm_showOverlayCsmPrepassDebug = Dvar_RegisterInt("OLQRLLQRSR", 1, 1, 12, 4u, "Minimum CSM prepass depth.");
  sm_showOverlayMip = Dvar_RegisterInt("NRMPSRRNMT", 0, 0, 16, 4u, "Mindepth mip for overlay (0 = fullres shadow depth)");
  sm_showOverlayViewmodel = Dvar_RegisterBool("LKNMMKPOR", 0, 4u, "Show the viewmodel shadow depth for near cascade");
  sm_showOverlayTransShadow = Dvar_RegisterBool("NKQMPTTQRN", 0, 4u, "Show the TranslucentShadowMask");
  sm_cachedSunShadowDebugShowCachePartition = Dvar_RegisterInt("LRLPPMSOTO", 0, 0, 1, 0x44u, "Select shadow map tile cache partition to show in overlay mode");
  sm_polygonOffsetScale = Dvar_RegisterFloat("NSRPRMLSTR", 2.0, -65536.0, 65536.0, 4u, "Shadow map offset scale");
  sm_polygonOffsetBias = Dvar_RegisterInt("LSOSQNSQPM", 0, -65536, 0x10000, 4u, "Shadow map offset bias");
  sm_polygonOffsetClamp = Dvar_RegisterFloat("OTKOTTTRS", 0.0, 0.0, 8192.0, 4u, "Shadow map offset clamp");
  sm_strictCull = Dvar_RegisterBool("MTNQQLTKQT", 1, 0x44u, "Strict shadow map cull");
  sm_fastSunShadow = Dvar_RegisterBool("NMOSNONTK", 1, 4u, "Fast sun shadow");
  sm_sunMoving = Dvar_RegisterBool("LLNTKRPPQK", 0, 0x40u, "Indicates that the sun is animated and disables sun shadow cache processing.");
  sm_debugFastSunShadow = Dvar_RegisterBool("LSKOKQMMLT", 0, 4u, "Debug fast sun shadow");
  sm_roundRobinPrioritySpotShadowsMax = Dvar_RegisterInt("OKKTMLKNNR", 16, 0, 16, 0, "How many lights can receive dynamic shadows (w/ round robin updates) Limits sm_roundRobinPrioritySpotShadows.");
  sm_spotUpdateLimitMax = Dvar_RegisterInt("SRKPNTSRM", 8, 0, 8, 0, "Maximum number of spot shadows to update per frame (limits sm_spotUpdateLimit)");
  sm_spotShadowCulling = Dvar_RegisterEnum("MSSMKNPMOO", sm_spotShadowCullingModes, 2, 0x44u, "0 = legacy culling ( no line light ), 1 = respect line light, 2 = respect line light + using optimized view volume ( default )");
  sm_cachedSunShadowLODBias = Dvar_RegisterFloat("OKQKMQMTRQ", 1.0, 0.0, 4.0, 0x44u, "LOD bias scale for static model shadow cache. Sets the bias between prev partition end and current partition end.");
  r_animBoundsWarn = Dvar_RegisterEnum("LQSKPOKSOK", r_animBoundsWarnModes, 1, 4u, "Warn when model bounds are estimated far off from their actual animated values.");
  r_animBoundsScale = Dvar_RegisterFloat("OLPSPKNKMQ", 1.0, 0.0, 500.0, 4u, "Scale animated xmodel bounds by the given factor");
  r_animEstimatedBoundsScale = Dvar_RegisterFloat("QNRPNRLNM", 1.0, 0.0, 500.0, 4u, "Scale animated xmodel estimated bounds by the given factor");
  sm_forceLinear = Dvar_RegisterBool("NMOTMSSKOS", 0, 4u, "Force shadow sampling to be linear");
  sm_projStepSize = Dvar_RegisterFloat("MNKPKSPRMO", 0.25, 0.0, 1.0, 4u, "Step size for XB2 shadow map projection sampling.");
  r_blur = Dvar_RegisterFloat("MLKPNOMPST", 0.0, 0.0, 32.0, 4u, "Dev tweak to blur the screen");
  r_blurAALimit = Dvar_RegisterFloat("MORPOLQMSK", 0.25, 0.0, 2.0, 4u, "Dev tweak At which blur radius can we disable AA");
  r_blurMipStepLimit = Dvar_RegisterFloat("NLMQNNTTMM", 1.0, 0.0, 2.0, 4u, "Dev tweak At which blur radius can we drop mip");
  r_distortion = Dvar_RegisterBool("NNKRMTSNPL", 1, 4u, "Enable distortion");
  r_dof_enable = Dvar_RegisterBool("OQSPSSNRT", 1, 0, "Enable the depth of field effect");
  r_dof_tweak = Dvar_RegisterEnum("NTMOSTPSM", s_dofTweakNames, 0, 4u, "Use dvars to set the depth of field effect; overrides r_dof_enable");
  r_dof_scope_mode = Dvar_RegisterEnum("NSQOOQNQTM", r_dofScopeModeNames, 1, 0x40u, "Depth of Fields mode for scope lens");
  r_dof_physical_enable = Dvar_RegisterBool("MRSTKSMMP", 1, 0x44u, "enable physical camera controls (using aperture priority) ");
  r_dof_physical_filmDiagonal = Dvar_RegisterFloat("RMRSOQSQL", 43.200001, 1.6, 87.910004, 4u, "Diagonal size of the film/sensor (mm). The bigger the sensor size, the bigger the circle of confusion (which means stronger blurring at all distances). Defaults to full-frame 35mm");
  r_dof_physical_accurateFov = Dvar_RegisterBool("LNLKRSOKML", 1, 0x44u, "Enable physical fov (but still based on cg_fov). This will make the fov to subtlety change depending on the focus distance");
  r_dof_physical_hipEnable = Dvar_RegisterBool("RMNRQNKMK", 0, 0x44u, "Enable hyperfocal mode");
  r_dof_physical_hipFstop = Dvar_RegisterFloat("LOPPQMRSNT", 8.0, 0.125, 30.0, 0x44u, "Aperture of the camera for the scene in the hyperfocal mode");
  r_dof_physical_hipSharpCocDiameter = Dvar_RegisterFloat("LPSPQQMMNR", 0.029999999, 0.000099999997, 1.0, 0x44u, "Defines what circle of confusion can be considered sharp (mm). Defaults to 0.03mm, generally accepted value for 35mm");
  r_dof_physical_hipFocusSpeed = Dvar_RegisterVec4("SONPKLQPK", 1.5, 8.0, 2.0, 2.0, 0.0099999998, 32.0, 0x44u, "Hyperfocal mode focus speed (focus dist. far to near, focus dist. near to far, aperture opening, aperture closing)");
  r_dof_physical_fstop = Dvar_RegisterFloat("LMMLPTTTK", 22.0, 0.125, 30.0, 4u, "Aperture of the camera for the scene. Lower f-stop yields a shallower depth of field. Typical values range from f/1 to f/22. Rare extremes are f/0.75 and f/32");
  r_dof_physical_focusDistance = Dvar_RegisterFloat("LRSPNPPPTP", 29.301001, 0.0, 30000.0, 4u, "Distance to the plane in focus for the scene");
  r_dof_physical_viewModelFstop = Dvar_RegisterFloat("NOTLPKOSO", 30.0, 0.125, 30.0, 4u, "Aperture of the camera for the view model. Lower f-stop yields a shallower depth of field. Typical values range from f/1 to f/22. Rare extremes are f/0.75 and f/32");
  r_dof_physical_viewModelFocusDistance = Dvar_RegisterFloat("OLOPMPMMOT", 20.0, 0.0, 100.0, 4u, "Distance to the plane in focus for the view model");
  r_dof_physical_adsFocusSpeed = Dvar_RegisterVec4("MOQONRPQOT", 8.0, 12.0, 2.0, 2.0, 0.0099999998, 32.0, 4u, "ADS focus speed (focus dist. far to near, focus dist. near to far, aperture opening, aperture closing)");
  r_dof_physical_adsMinFstop = Dvar_RegisterFloat("NTPTNSQRK", 1.4, 0.125, 30.0, 4u, "ADS minimum f-stop (optimal aperture and focus distance are automatically calculated for this mode)");
  r_dof_physical_adsMaxFstop = Dvar_RegisterFloat("OKRMSSLMMO", 22.0, 0.125, 30.0, 4u, "ADS maximum f-stop (optimal aperture and focus distance are automatically calculated for this mode)");
  r_dof_physical_minFocusDistance = Dvar_RegisterFloat("SLSMSSTQP", 9.0, 0.0, 100.0, 0x44u, "Minimum focus distance (inches)");
  r_dof_physical_maxCocDiameter = Dvar_RegisterFloat("OSRSSRQOS", 14.5, 4.0, 32.0, 4u, "Maximum circle of confusion diameter (virtual units, might be clamped for bokeh dof)");
  r_dof_filter_fireflySuppression = Dvar_RegisterFloat("LNTNPRQSNL", 0.050000001, 0.0, 1.0, 0x40u, "Allows to suppress small features that might cause flickering when expanded by the dof");
  r_dof_filter_bokehEdgeSharpness = Dvar_RegisterFloat("MSTLTQKSNS", 0.125, 0.0, 1.0, 0x40u, "Bokeh edge sharpness (halfres circular bokeh only)");
  r_dof_filter_sharpen = Dvar_RegisterFloat("LRNPKOQSKM", 0.25, 0.0, 1.0, 0x40u, "Sharpens the bokeh effect with an unsharp mask (halfres circular bokeh only)");
  r_dof_filter_temporalFilter = Dvar_RegisterBool("LTMOMNTNNN", 1, 4u, "Toggles temporal filter (circular bokeh only)");
  r_dof_filter_backgroundReconstruction = Dvar_RegisterBool("NQLLRKPRPR", 1, 0x40u, "Toggles dof background reconstruction for blurred objects on top of sharp backgrounds (circular bokeh only)");
  v7 = Sys_GetXB3ConsoleType();
  r_dof_filter_preset = Dvar_RegisterEnum("OMQRTSKPOS", r_dofModePresetNames, v7 == XB3_CONSOLE_SCORPIO, 4u, "Changes dof sampling quality");
  r_dof_filter_fullres = Dvar_RegisterBool("RLKSLTQMQ", 1, 4u, "Toggles bokeh fullres mode");
  r_dof_physical_distanceMeter = Dvar_RegisterBool("POKSKSOMO", 0, 0, "Enable physical depth of field debug information");
  r_vignetteUseTweaks = Dvar_RegisterBool("NPRQLNTRTK", 0, 4u, "Use vignette tweak dvars");
  r_vignetteTweakIntensity = Dvar_RegisterFloat("MPNORSMRPR", 0.0, 0.0, 1.0, 4u, "Vignette effect intensity");
  r_vignetteTweakSquareAspectRatio = Dvar_RegisterBool("LPSOLLSTTS", 0, 4u, "Vignette use square aspect ratio");
  r_vignetteTweakSize = Dvar_RegisterVec2("TLTRLOSTT", 1.0, 1.0, 0.0, 10.0, 4u, "Vignette x and y size");
  r_vignetteTweakFalloff = Dvar_RegisterFloat("MMQLSKSKTO", 1.0, 0.0, 10.0, 4u, "Vignette falloff size");
  r_vignetteTweakFalloffStart = Dvar_RegisterFloat("LSLLLMORKM", 0.0, 0.0, 10.0, 4u, "Vignette falloff start position");
  r_vignetteTweakBoxSize = Dvar_RegisterVec2("LMSPNQOPNK", 0.0, 0.0, 0.0, 2.0, 4u, "Vignette Box Size");
  r_vignetteTweakOffset = Dvar_RegisterVec2("NTLLQPKLTT", 0.0, 0.0, -2.0, 2.0, 4u, "Vignette Position Offset");
  r_vignetteVisionSetLerpDuration = Dvar_RegisterFloat("OMPSKRMROL", 0.0, 0.0, 10.0, 4u, "Vignette vision set lerp duration in seconds");
  r_daltonizeForceMode = Dvar_RegisterEnum("MTSKONMSOO", daltonizeModeNames, 0, 4u, "Selects the Daltonize mode, overriding the gamer profile setting if not 0/None.");
  r_daltonizeIntensity = Dvar_RegisterFloat("ONKRLLRSP", 0.75, 0.0, 1.0, 4u, "Scene daltonize correction strength.");
  r_daltonizeUIIntensity = Dvar_RegisterFloat("LQQQTRQRLN", 1.0, 0.0, 1.0, 4u, "UI daltonize correction strength.");
  r_colorblindMode = Dvar_RegisterEnum("PPLNNTNTP", daltonizeModeNames, 0, 4u, "Selects the Colorblind simulation mode");
  r_colorTable = Dvar_RegisterEnum("NPTLTMLLMN", colorTableNames, 0, 4u, "Selects the set of colors used for text markup");
  r_colorGradingEnable = Dvar_RegisterBool("NRKSTMPPQK", 1, 4u, "Enable color grading.");
  r_colorGradingClutEnable = Dvar_RegisterBool("PKKOSROQM", 1, 4u, "Enable CLUT color grading.");
  r_colorGradingAnalyticalEnable = Dvar_RegisterBool("LSLQOMPPOK", 1, 4u, "Enable analytical color grading.");
  r_disablePIP = Dvar_RegisterBool("MQTPKKPOKT", 1, 4u, "Force disable PIP");
  r_showPIPTexture = Dvar_RegisterBool("TTTKKTKPR", 0, 4u, "Display the current PIP texture on the HUD for debug purposes");
  r_showLightmap = Dvar_RegisterInt("MMMLSPLMOL", -1, -1, 255, 4u, "Display specified lightmap texture. -1 = none, valid index = draw single lightmap, invalid index = draw all of them");
  r_showHeightmap = Dvar_RegisterBool("LNQTKNKRRQ", 0, 4u, "Display heightmap texture.");
  r_showHeightmapScale = Dvar_RegisterFloat("NTRSRSLLKS", 1.0, 1.0, 100.0, 4u, "Display heightmap texture zoom-in scale.");
  r_showFogSpline = Dvar_RegisterInt("OKPKTMOSSO", -1, -1, 9, 4u, "Display specified fog spline texture. -1 = none, 0 = draw fog spline, 1 = draw all blendset assets, >1 = blendset index+2");
  r_fogSplineForceUpdate = Dvar_RegisterBool("LPLKRKQOPP", 0, 0, "Force fog spline blend to be generated each frame");
  r_font_cache_debug_display = Dvar_RegisterBool("MNPLQPMLNT", 0, 4u, "Display the current fontcache texture on the HUD for debug purposes");
  r_profMaterial = Dvar_RegisterEnum("OMMOTLTTQ", r_profMaterialNames, 0, 0, "Enable profile material names.");
  r_outdoorFeather = Dvar_RegisterFloat("LQKORRQMLR", 8.0, -3.4028235e38, 3.4028235e38, 0x40u, "Outdoor z-feathering value");
  Dvar_SetModified(r_outdoorFeather);
  r_sun_from_dvars = Dvar_RegisterBool("NNTTKSKSKK", 0, 4u, "Set sun flare values from dvars rather than the level");
  r_flareDrawOrder = Dvar_RegisterEnum("MNQQPKKMSM", r_flareDrawOrderNames, 1, 0, "flare draw order");
  r_flareOcclusionScale = Dvar_RegisterFloat("MKQQQTPRST", 1.0, 0.0, 1.0, 0, "scales flare opacity");
  r_flareOcclusionMin = Dvar_RegisterFloat("OMOOMOSMNT", 0.0, 0.0, 1.0, 0, "flare opacity min value");
  r_flareOcclusionExtinctionBias = Dvar_RegisterFloat("MTOMPPQPNR", 0.5, -1.0, 1.0, 0, "flare opacity extinction bias");
  r_flareDrawThresholdEV = Dvar_RegisterFloat("LOLSPQKKQK", -8.0, -20.0, 20.0, 0, "flare draw threshold EV relative to average scene luminance");
  r_flareHalfres = Dvar_RegisterBool("NOQOSRSKON", 1, 4u, "Draw flares at half res (requires r_vrs 2).");
  r_atlasAnimFPS = Dvar_RegisterInt("MSQTTSOKRN", 15, 1, 120, 4u, "Speed to animate atlased 2d materials");
  com_statmon = Dvar_RegisterBool("NQKOQPQOLN", 0, 0, "Draw stats monitor");
  r_SkinnedCacheSize = Dvar_RegisterInt("STLRTMLSP", 737280, 0, 0x200000, 0, "size of skin cache");
  r_SkinnedCacheCorpseThreshold = Dvar_RegisterFloat("OMLRMTTPQN", 0.85000002, 0.5, 1.0, 0, "Threshold at which we start culling corpses");
  r_SkinnedCacheLODThreshold = Dvar_RegisterVec2("NSORRORRM", 0.92000002, 0.62, 0.050000001, 1.0, 0, "Threshold at which we start reducing LOD's of skinned models");
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
  prof_probeMaxMsec = Dvar_RegisterInt("LRLQSNNKNL", 30, 1, 1000, 0, "Height of each profile probe graph, in milliseconds");
  prof_sortTime = Dvar_RegisterFloat("OMOTNNTTPO", 2.0, 0.1, 1000.0, 0, "Time in seconds between resort profiles");
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
  r_camoTweakTintColor = Dvar_RegisterColor("NPSTTOPQTS", 1.0, 1.0, 1.0, 1.0, 0x40u, "Color to override camo tint when tweak is enabled.");
  r_tessellationOverride = Dvar_RegisterInt("LROORPNKNN", -1, -1, 2, 0x40u, "Overrides r_tessellation. -1 = No Override 0 = NoTess 1 = NearTess 2 = AllTess");
  r_tessellation = Dvar_RegisterEnum("MMNMQTSOSP", r_tessellationNames, 1, 0, "Enables tessellation of world geometry, with an optional cutoff distance.");
  r_tessellationForceFlushesOnShaderStageChanges = Dvar_RegisterBool("LMTNLRSPSN", 0, 0x40u, "Force partialPS flush when switching in/out of T&D stages. Emergency last resort for XB t&d crashes.");
  r_drawTessellatedWorld = Dvar_RegisterBool("OKNMROOQTS", 1, 4u, "Draw tessellated world surfaces");
  r_tessellationLodBias = Dvar_RegisterFloat("NNMPPPMOSR", 0.5, -20.0, 20.0, 4u, "Displacement map lod bias.");
  r_tessellationHeightAuto = Dvar_RegisterBool("SQTTTTNQP", 1, 4u, "Correctly auto scale displacement heights for layers to grow as texture is stretched over larger surface areas to preserve feature proportions.");
  r_tessellationHeightScale = Dvar_RegisterFloat("OKOSKLQSPS", 1.0, 0.0, 100.0, 4u, "Displacement height scale factor.");
  r_tessellationHybrid = Dvar_RegisterFloat("LPTSOPRMQL", 1.0, 0.0, 10.0, 4u, "Hybrid per pixel displacement scale.");
  r_tessellationEyeScale = Dvar_RegisterFloat("ONSPMLPMK", 0.0625, 0.0, 1.0, 4u, "Scale applied due to eye * object normal for less tessellation on facing polygons.");
  r_subdomainLimit = Dvar_RegisterInt("MRMRQNPPOT", 3, 0, 3, 0, "Maximum number of extra tessellation subdivisions using instancing (max tess amts are 0:64, 1:128, 2:192, 3:256, max instances used are 0:1, 1:4, 2:9, 3:12)");
  r_subdomainScale = Dvar_RegisterFloat("NNONNSLOPM", 1.0, 0.0, 1000.0, 0, "Scales the extra subdivision amount (for values < 1, not all instanced sub triangles will draw).");
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
  r_allowHDR = Dvar_RegisterBool("MTONTNKOKR", 1, 0, "Use HDR output if HDR TV is detected.");
  r_colorimetryUniversalTonemapExposureAdjust = Dvar_RegisterFloat("LLLOMMRTOO", 0.0, -20.0, 20.0, 0, "(Debug) Universal tonemap additional exposure adjustment (in EV)");
  r_hdrFilmGrainStrengthScale = Dvar_RegisterFloat("LKPPLTOMQ", 0.40000001, 0.0, 2.0, 0, "Film grain strength adjustment in HDR mode");
  r_forceHDRCapable = Dvar_RegisterBool("LNKOKNKNRL", 0, 0, "Force HDR capable even if monitor does not support it");
  r_universalClutForceUpdate = Dvar_RegisterBool("NPQKPOQOLT", 0, 0, "Force universal CLUT to be generated each frame");
  r_uiClutForceUpdate = Dvar_RegisterBool("MQPRRLOQLO", 0, 0, "Force UI CLUT to be generated each frame");
  r_uiClutEnabledInShaders = Dvar_RegisterBool("MRNNSKOOLO", 1, 0, "Use UI CLUT in ui shaders");
  r_radiometricScale = Dvar_RegisterFloat("PLRMKOOOP", -1.0, -3.0, 4096.0, 4u, "Per-frame radiometric scale (-1: use sceneExposure, -2: use tonemapExposure, -3: use sceneAvgKiloNits )");
  r_universalTonemapUseAcesRrt = Dvar_RegisterFloat("MKLOPMQRPS", 1.0, 0.0, 1.0, 0, "Apply ACES RRT in universal tonemap");
  r_universalTonemapAcesRedModifier = Dvar_RegisterFloat("NSMPRLQKNR", 0.0, 0.0, 1.0, 0, "ACES RRT red modifier weight");
  r_displayMappingHdrLuminanceSource = Dvar_RegisterEnum("LRMQSLPTMP", r_displayMappingHdrSourceNames, 0, 0, "Where to get the HDR diplay luminance data from");
  r_displayMappingHdrGamma = Dvar_RegisterFloat("LOSQPPNNRT", 1.0, 0.5, 1.5, 0, "Gamma value applied in HDR mode");
  r_displayMappingHdrMinLum = Dvar_RegisterFloat("MRRNPSMQTS", 0.0, 0.0, 0.2, 0, "Darkest value we will output on an HDR display in PQ");
  r_displayMappingHdrMaxLum = Dvar_RegisterFloat("NTNOQQSQLM", 0.80000001, 0.60000002, 1.0, 0, "Brightest value we will output on an HDR display in PQ");
  r_displayMappingSdrGamma = Dvar_RegisterFloat("LPOSSQMTTQ", 1.0, 0.0, 2.0, 0, "Gamma value applied in SDR mode");
  r_displayMappingSdrMinLum = Dvar_RegisterFloat("LSSNQRQSST", 0.0, 0.0, 1.0, 0, "Darkest value we will output on an SDR display (0-1)");
  r_displayMappingSdrMaxLum = Dvar_RegisterFloat("MTNPRPNTTT", 1.0, 0.0, 1.0, 0, "Brightest value we will output on an SDR display (0-1)");
  r_displayMappingSdrTargetLum = Dvar_RegisterFloat("MQKRSLOPMM", 333.0, 0.0, 2000.0, 0, "Max luminance of target SDR Display in cd/m2");
  r_displayMappingSdrEmulationMaxLum = Dvar_RegisterFloat("LPKPPSSTON", 0.0, 0.0, 2000.0, 0, "Emulate an SDR display on HDR device when non-zero. The value is the intensity in cd/m2 we will output for SDR value of 1.0");
  r_displayMappingSdrUseBlacklevel = Dvar_RegisterBool("MOMSNOKSSP", 1, 0, "Use legacy r_blacklevel in universal pipeline SDR mode");
  r_hdrUIMaxLum = Dvar_RegisterFloat("NSKKNPRMOQ", 300.0, 0.0, 1500.0, 0, "Maximum luminance of SDR UI elments when rendered in HDR mode (cd/m2)");
  r_hdrToSdr = Dvar_RegisterBool("MPNQPKSLSS", 1, 4u, "Process SDR swap chain when in HDR on XB3 for GameDVR");
  r_mbViewModelEnable = Dvar_RegisterBool("LONSLMNROK", 1, 0x44u, "Enable motion-blur on the view-model.");
  r_mbWorldEnable = Dvar_RegisterBool("LRNMQRTPM", 1, 0x44u, "Enable motion-blur on world (everything but viewmodel).");
  r_mbPostfxMaxNumSamples = Dvar_RegisterInt("NQTPSMTLQM", 15, 0, 32, 0x44u, "motionblur postfx sample count");
  r_mbEnable = Dvar_RegisterEnum("LPSPNKLRPO", r_mbEnableNames, 0, 0x44u, "toggle on/off high quality motion blur");
  r_mbEnableA = Dvar_RegisterBool("MKNMSLSLRL", 1, 0, "archive toggle on/off high quality motion blur");
  r_mbVelocityScale = Dvar_RegisterFloat("NMORQOTSK", 1.0, 0.0, 8.0, 0x44u, "Scale velocity used for motion blur");
  r_mbVelocityScaleViewModel = Dvar_RegisterFloat("RMLOTKMMM", 1.0, 0.0, 8.0, 0x44u, "Scale velocity used for viewmodel motion blur");
  r_mbVelocityFpsCompensation = Dvar_RegisterBool("LNQSSLTOSP", 1, 4u, "Enables FPS motion blur compensation, for low and high fps to have a matching effect");
  r_mbRadialOverrideStrength = Dvar_RegisterFloat("LSOPQMRPNR", 0.0, 0.0, 1.0, 0x44u, "Radial Blur Override Strength");
  r_mbRadialOverrideRadius = Dvar_RegisterFloat("NKTRSSTMRQ", 0.0, -1.0, 1.0, 0x44u, "Radial Blur Override Radius");
  r_mbRadialOverrideDistortion = Dvar_RegisterFloat("MLTTMLTKOR", 0.0, -1.0, 1.0, 0x44u, "Radial Blur Override Distortion");
  r_mbRadialOverrideChromaticAberration = Dvar_RegisterFloat("OMRQKMSSPP", 0.0, 0.0, 1.0, 0x44u, "Radial Blur Override Chromatic Aberration");
  r_mbRadialOverrideFocusDir = Dvar_RegisterFloat("TMTNNMTLL", 0.0, 0.0, 1.0, 0x44u, "Radial Blur Override Focus direction");
  r_mbRadialOverrideAngleAttenuation = Dvar_RegisterFloat("LMLTRQKKTL", 0.0, 0.0, 1.0, 0x44u, "Radial Blur Override Angle attenuation for positional blur");
  r_mbRadialMinAllowedBlurDistance = Dvar_RegisterFloat("LNLLSQTRLM", 1.5, 0.0039215689, 2.0, 4u, "Radial Blur min blur distance - used to tweak trivial case performance - in texel scale");
  r_mbRadialOverridePositionActive = Dvar_RegisterBool("NSSPMPLRQL", 0, 0x44u, "Toggle on/off radial blur world space position.");
  r_mbRadialOverridePosition = Dvar_RegisterVec3("MKRSSOQLML", 0.0, 0.0, 0.0, -131072.0, 131072.0, 0x44u, "Set radial blur worlds space position.");
  r_lensProfileOverrideMode = Dvar_RegisterEnum("NPORSPPNOK", s_lensProfileModes, 0, 0x44u, "Physical lens profile override");
  r_lensProfileOverrideFocalLength = Dvar_RegisterFloat("OQSOKOKRQ", 0.0, 0.0, 50.0, 0x44u, "Physical lens profile focal length override");
  r_lensProfileOverrideAperture = Dvar_RegisterFloat("MQPLMMMPRT", 0.125, 0.125, 30.0, 0x44u, "Physical lens profile aperture override");
  r_lensProfileOverrideScale = Dvar_RegisterFloat("LTKQTLPOLT", 1.0, 0.1, 2.0, 0x44u, "Physical lens profile scale override");
  r_lensProfileOverrideUVScale = Dvar_RegisterFloat("LNNQQMNNPM", 1.0, 0.1, 2.0, 0x44u, "Physical lens profile UV scale override");
  r_ssrPositionCorrection = Dvar_RegisterFloat("MPPMOTSLNN", 1.0, -2.0, 2.0, 0x44u, "Screen space reflection position correction blend factor");
  r_ssrFadeInDuration = Dvar_RegisterFloat("LMTMRLMOT", 0.050000001, 0.0099999998, 1.0, 0x44u, "Duration of the screen-space reflection fade-in, which occurs whenever the reflection source buffer is invalidated due to view changes (in particular, dual-view scope transitions).");
  r_ssrFadeInStrength = Dvar_RegisterFloat("MLMMSONQMQ", 2.0, 0.0, 10.0, 0x44u, "Strength of the screen-space reflection fade-in.");
  r_shieldEffectHitTimeMS = Dvar_RegisterFloat("NKMKNNLOTK", 800.0, 0.0, 20000.0, 0x44u, "How long the hit effect lasts.");
  r_useShadowGeomOpt = Dvar_RegisterBool("LRTMOMKOLS", 1, 4u, "Enable iwlit shadow geometry optimization. It only works when we have the data generated in iwlit.");
  r_useLightAABBTree = Dvar_RegisterBool("MMTRTMPLON", 1, 4u, "Lookup AABB BVH tree to speed up LinkEntityToPrimaryLights.");
  r_linkLightWarningThreshold = Dvar_RegisterInt("MLRRQLNRNP", 32, 0, 6500, 0, "Print warning when an entity is linked to too many primary lights. This is a potential CPU & GPU performance problem.");
  r_balanceOpaqueLists = Dvar_RegisterBool("NLQSRKOKKK", 1, 4u, "Split opaque into multiple draw lists.");
  r_delayAddSceneModels = Dvar_RegisterBool("NNSSPPRQKM", 1, 4u, "Add DObjs and brushes to GfxScene in a separate worker command");
  r_debugTextSize = Dvar_RegisterFloat("NLRSKKKTOT", 16.0, 1.0, 200.0, 0, "Size of texts drawn by R_AddScaledDebugString");
  r_randomFailConstantBuffer = Dvar_RegisterFloat("MKMKNOSNLL", 0.0, 0.0, 1.0, 4u, "Constant buffer failure rate");
  r_randomFailLinearHeap = Dvar_RegisterFloat("LLMMPQMLSO", 0.0, 0.0, 1.0, 4u, "Linear Heap failure rate");
  r_useWarpRasterizer = Dvar_RegisterBool("NNQLTQRQPQ", 0, 0, "Use Warp software rasterizer.");
  r_emissive_surf_vert_limit = Dvar_RegisterInt("RLTQMLOM", 0x8000, 1024, 0x20000, 4u, "Vert limit for geo-trails and beams, sprites use quad rendering");
  r_scope_tweak = Dvar_RegisterBool("OLMMSNSSQP", 0, 0, "Enable weapon scope lens effect tweak");
  r_scope_inner = Dvar_RegisterFloat("MRTRSQPSLP", 0.30000001, 0.0, 1.0, 0, "Scope inner ring size");
  r_scope_outer = Dvar_RegisterFloat("LQNNOLMRNM", 0.5, 0.0, 1.0, 0, "Scope outer ring size");
  r_scope_inner_mag = Dvar_RegisterFloat("OOTNPSNKR", 1.2, 1.0, 3.0, 0, "Scope inner disk magnification");
  r_scope_outer_mag = Dvar_RegisterFloat("MSNLTPOLQS", 1.0, 1.0, 3.0, 0, "Scope outter ring magnification");
  r_scope_radius = Dvar_RegisterFloat("NNSKPNQKMT", 1.64, 0.0, 5.0, 0, "Scope lens radius");
  r_scope_fade_start = Dvar_RegisterFloat("LONOSQTRRM", 0.75, 0.0, 1.0, 0, "for fadding out scope distortion effect");
  r_scope_fade_end = Dvar_RegisterFloat("NOLNSPRNKR", 1.0, 0.0, 1.0, 0, "for fadding out scope distortion effect.");
  r_scope_color_red = Dvar_RegisterFloat("NROQSQQOMK", 1.0, 0.0, 1.0, 0, "Scope color red");
  r_scope_color_green = Dvar_RegisterFloat("NPPORKQMQK", 1.0, 0.0, 1.0, 0, "Scope color green");
  r_scope_color_blue = Dvar_RegisterFloat("LTLOTQPLQP", 1.0, 0.0, 1.0, 0, "Scope color blue");
  r_scope_color_brightness = Dvar_RegisterFloat("NRLOROTOMM", 1.0, 0.0, 4.0, 0, "Scope brightness");
  r_scope_relief_focus = Dvar_RegisterFloat("OOSLSMSNP", 2.0, 0.0, 50.0, 0, "Correct scope relif effect distance");
  r_scope_relief_focus_scale = Dvar_RegisterFloat("MLRSPLKTPQ", 0.80000001, 0.1, 10.0, 0, "Scope relif map UV scale at correct eye relief distance");
  r_scope_relief_outoffocus = Dvar_RegisterFloat("PSQSNMTNM", 10.0, 0.000099999997, 50.0, 0, "Worse scope relief effect distance");
  r_scope_relief_outoffocus_scale = Dvar_RegisterFloat("OLNTLSSNP", 2.0, 0.1, 10.0, 0, "Scope relif map UV scale at wrong eye relief distance");
  r_scope_relief_movement_scale_min = Dvar_RegisterFloat("LPSRPRNLPO", 0.5, 0.0, 8.0, 0, "Scope eye relief effect bone movement UV offset scale during idle");
  r_scope_relief_movement_scale_max = Dvar_RegisterFloat("RRONLOPKS", 1.0, 0.0, 8.0, 0, "Scope eye relief effect bone movement UV offset scale in full speed");
  r_scope_relief_movement_clamp = Dvar_RegisterFloat("MQONPTSPMO", 0.30000001, 0.0, 1.0, 0, "Maximum eye relief offset bone movement");
  r_scope_relief_sway_freq_min = Dvar_RegisterFloat("MOOQTPPMKP", 0.5, 0.0, 10.0, 0, "Scope relif effect random sway frequence during idle");
  r_scope_relief_sway_amount_min = Dvar_RegisterFloat("RTQKLKNLR", 0.0099999998, 0.0, 0.050000001, 0, "Scope relif effect random sway movement during idle");
  r_scope_relief_sway_freq_max = Dvar_RegisterFloat("LTNNLPNOLT", 3.0, 1.0, 10.0, 0, "Scope relif effect random sway frequence in full speed");
  r_scope_relief_sway_amount_max = Dvar_RegisterFloat("LQKTMQSTQN", 0.02, 0.0, 0.050000001, 0, "Scope relif effect random sway movement in full speed");
  r_scope_relief_sway_screendelta = Dvar_RegisterFloat("QTTLONPKS", 0.30000001, 0.000099999997, 1.0, 0, "for normalizing bone movement in screen space.");
  r_scope_relief_sway_framedelta = Dvar_RegisterFloat("LTTLOLKPQP", 0.050000001, 0.000099999997, 1.0, 0, "for normalizing bone movement delta between frames, in screen space.");
  r_scope_relief_sway_cameradelta = Dvar_RegisterFloat("PTOTPLMNR", 1.0, 0.0, 8.0, 0, "for normalizing camera position change between frames, in world space.");
  r_scope_relief_mul_aspect_ratio = Dvar_RegisterBool("MLPMKONLSM", 1, 0, "relief map UV offset multiply camera aspect ratio.");
  r_scope_relief_sway_freq_x = Dvar_RegisterFloat("MQMSQPPSMR", 1.3, 0.5, 2.0, 0, "random sway ping-pong frequency scale for X axis.");
  r_scope_relief_sway_freq_y = Dvar_RegisterFloat("PPQKNQNTO", 1.1, 0.5, 2.0, 0, "random sway ping-pong frequency scale for Y axis.");
  r_gpuCopyFrameBudget = Dvar_RegisterInt("NSMNKSTNLL", 10485760, 0, 0x40000000, 0, "Per-frame budget for gpu copy operations (in bytes)");
  r_useShellshockPostfx = Dvar_RegisterBool("LSSQNNPMTT", 1, 0, "Use the in engine shellshock effect system");
  description = j_va("draw UI render to texture overlay. 0 = all textures, 1 - %d = selected texture, > %d = disabled.", 8i64, 8i64);
  r_rtt_showOverlay = Dvar_RegisterInt("MTMLPNPTTM", 9, 0, 255, 4u, description);
  r_flushCommandListsAt_Flags = Dvar_RegisterInt("NPNPOQLRRP", 0, 0, 127, 0, "Flags for where to flush command lists. See R_FlushCommandListsAt_Flags for the list.");
  r_ui_grayscale_blur = Dvar_RegisterBool("MTKKTTOK", 1, 0, "run UI scene blur in grayscale");
  r_ui_scale_scene_range = Dvar_RegisterVec2("MNMRPKQNKQ", 0.25, 0.25, 0.0, 4.0, 0, "UI blur effect scene luminance range.");
  r_ui_scale_range_min = Dvar_RegisterFloat("LKPKOSQSRS", 0.25, 0.0, 1.0, 0, "UI blur effect range.");
  R_RegisterDecalVolumesDvars();
  R_ST_RegisterDvars();
  Dvar_EndPermanentRegistration();
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
  DCONST_DVARMPFLT_r_sunsprite_size_override = Dvar_RegisterFloat("LLPRKNTOS", -1.0, -1.0, 1000.0, v0, "[DconstMP] Override the .sun file for the sunsprite size; diameter in pixels at 640x480 and 80 fov, -1 means off");
  FX_RegisterGameDvars();
}

/*
==============
R_RegisterNetworkDvars
==============
*/
void R_RegisterNetworkDvars(void)
{
  char ActiveGameMode; 
  unsigned int v1; 
  unsigned int flags; 
  char v3; 
  unsigned int v4; 
  char v5; 
  unsigned int v6; 
  char v7; 
  unsigned int v8; 
  char v9; 
  unsigned int v10; 
  char v11; 
  unsigned int v12; 
  bool v13; 
  unsigned int v14; 
  unsigned int v15; 
  unsigned int v16; 
  unsigned int v17; 
  unsigned int v18; 
  unsigned int v19; 
  unsigned int v20; 
  unsigned int v21; 
  unsigned int v22; 
  char v23; 
  unsigned int v24; 
  unsigned int v25; 
  char v26; 
  unsigned int v27; 
  unsigned int v28; 
  unsigned int v29; 
  unsigned int v30; 
  unsigned int v31; 
  unsigned int v32; 
  char v33; 
  unsigned int v34; 
  unsigned int v35; 
  unsigned int v36; 
  unsigned int v37; 
  unsigned int v38; 
  unsigned int v39; 
  unsigned int v40; 
  char v41; 
  unsigned int v42; 
  char v43; 
  unsigned int v44; 
  char v45; 
  unsigned int v46; 
  unsigned int v47; 
  unsigned int v48; 
  unsigned int v49; 
  char v50; 
  unsigned int v51; 
  char v52; 
  unsigned int v53; 
  char v54; 
  unsigned int v55; 
  unsigned int v56; 
  unsigned int v57; 
  unsigned int v58; 
  unsigned int v59; 
  unsigned int v60; 
  unsigned int v61; 
  char v62; 
  unsigned int v63; 
  unsigned int v64; 

  ActiveGameMode = Com_GameMode_GetActiveGameMode();
  v1 = 68;
  flags = 68;
  if ( ActiveGameMode != 1 )
    flags = 140;
  DVARFLT_r_umbraAccurateOcclusionThreshold = Dvar_RegisterFloat("NKLMONNPNN", 256.0, -1.0, 100000.0, flags, "The distance (in inches) to which accurate occlusion information is gathered. -1.0 = deduced automatically.");
  v3 = Com_GameMode_GetActiveGameMode();
  v4 = 68;
  if ( v3 != 1 )
    v4 = 140;
  DVARFLT_r_umbraMinObjectContribution = Dvar_RegisterFloat("PKKMTTRQO", 20.0, 0.0, 100.0, v4, "The minimum pixel contribution to the scene view at which a given piece of static geometry will be culled out.");
  v5 = Com_GameMode_GetActiveGameMode();
  v6 = 68;
  if ( v5 != 1 )
    v6 = 140;
  DVARFLT_r_umbraShadowAccurateOcclusionThreshold = Dvar_RegisterFloat("MKSKRRMQMN", 2048.0, -1.0, 100000.0, v6, "The distance (in inches) to which accurate shadow caster occlusion information is gathered. -1.0 = deduced automatically.");
  v7 = Com_GameMode_GetActiveGameMode();
  v8 = 68;
  if ( v7 != 1 )
    v8 = 140;
  DVARFLT_r_umbraMinShadowObjectContribution = Dvar_RegisterFloat("MKRPMLRRLS", 1.0, 0.0, 100.0, v8, "The minimum pixel contribution to the shadow map tile view at which a given piece of static geometry will be culled out.");
  v9 = Com_GameMode_GetActiveGameMode();
  v10 = 68;
  if ( v9 != 1 )
    v10 = 140;
  DVARBOOL_r_gpuCullTriOcclusionUmbra = Dvar_RegisterBool("LSLMOQSNTL", 0, v10, "Toggles GPU triangle occlusion culling for smodels against UMBRA occlusion image");
  v11 = Com_GameMode_GetActiveGameMode();
  v12 = 68;
  if ( v11 != 1 )
    v12 = 140;
  DVARBOOL_r_gpuCullTriClusterOcclusionUmbra = Dvar_RegisterBool("SQPOKKMP", 0, v12, "Toggles GPU occlusion culling for smodels against UMBRA occlusion image");
  v13 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  v14 = 68;
  if ( !v13 )
    v14 = 140;
  DVARFLT_r_reactiveMotionPlayerRadius = Dvar_RegisterFloat("MKPPNSLNQQ", 40.0, 0.0, 100.0, v14, "Radial distance from the player that influences reactive motion models (inches)");
  v13 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  v15 = 68;
  if ( !v13 )
    v15 = 140;
  DVARFLT_r_reactiveMotionPlayerPushFrequency = Dvar_RegisterFloat("QQNKRMKPQ", 8.8999996, 0.1, 20.0, v15, "The spring motion frequency (speed) imparted by the player on reactive motion models");
  v13 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  v16 = 68;
  if ( !v13 )
    v16 = 140;
  DVARFLT_r_reactiveMotionPlayerPushAmplitude = Dvar_RegisterFloat("NKOSNKPNKL", 10.0, 1.0, 100.0, v16, "The spring motion amplitude (strength) imparted by the player on reactive motion models");
  v13 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  v17 = 68;
  if ( !v13 )
    v17 = 140;
  DVARFLT_r_reactiveMotionPlayerPushDecay = Dvar_RegisterFloat("MTORLPNK", 0.99800003, 0.80000001, 0.99989998, v17, "The spring motion decay (falloff) imparted by the player on reactive motion models");
  v13 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  v18 = 68;
  if ( !v13 )
    v18 = 140;
  DVARFLT_r_reactiveMotionPlayerHeightAdjust = Dvar_RegisterFloat("OLPRLSRQLM", 0.0, -100.0, 100.0, v18, "Amount to adjust the vertical distance of the effector from the player position (inches)");
  v13 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  v19 = 68;
  if ( !v13 )
    v19 = 140;
  DVARFLT_r_reactiveMotionActorRadius = Dvar_RegisterFloat("MPLOLNMSRO", 40.0, 0.0, 100.0, v19, "Radial distance from the ai characters that influences reactive motion models (inches)");
  v13 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  v20 = 68;
  if ( !v13 )
    v20 = 140;
  DVARFLT_r_reactiveMotionActorVelocityMax = Dvar_RegisterFloat("NMQSKQNQLR", 10.0, 0.0, 50.0, v20, "AI velocity considered the maximum when determining the length of motion tails (inches/sec)");
  v13 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  v21 = 68;
  if ( !v13 )
    v21 = 140;
  DVARFLT_r_reactiveMotionVelocityTailScale = Dvar_RegisterFloat("NQQSKRQMTS", 2.0, 0.0, 10.0, v21, "Additional scale for the velocity-based motion tails, as a factor of the effector radius");
  v13 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  v22 = 68;
  if ( !v13 )
    v22 = 140;
  DVARFLT_r_reactiveMotionEffectorStrengthScale = Dvar_RegisterFloat("NSKKMRPOQQ", 50.0, 0.0, 1000.0, v22, "Additional scale for the effector influence, as a factor of the model part distance from the effector center and model part extents");
  v23 = Com_GameMode_GetActiveGameMode();
  v24 = 4;
  v25 = 4;
  if ( v23 != 1 )
    v25 = 140;
  DVARBOOL_r_drawSun = Dvar_RegisterBool("LTROMKSMSS", 1, v25, "Enable sun effects");
  v26 = Com_GameMode_GetActiveGameMode();
  v27 = 64;
  v28 = 64;
  if ( v26 != 1 )
    v28 = 140;
  DVARBOOL_r_volumetrics = Dvar_RegisterBool("QPLMKRON", 1, v28, "Enable volumetric fog rendering");
  v13 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  v29 = 64;
  if ( !v13 )
    v29 = 140;
  DVARFLT_r_sdfShadowPenumbra = Dvar_RegisterFloat("MTKPSMMLLR", 0.0, 0.0, 1.0, v29, "Baked sun shadow penumbra width - 0 is sharpest, 1 is softest");
  v13 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  v30 = 68;
  if ( !v13 )
    v30 = 140;
  DVARFLT_r_tessellationFactor = Dvar_RegisterFloat("NOSQLKNSQO", 60.0, 0.0, 200.0, v30, "Target edge length, based on dividing full window height by this factor, for dynamic tessellation.  Use zero to disable tessellation.");
  v13 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  v31 = 68;
  if ( !v13 )
    v31 = 140;
  DVARFLT_r_tessellationCutoffDistance = Dvar_RegisterFloat("LMNOQSTMKN", 960.0, 0.0, 10000.0, v31, "Distance at which world geometry ceases to tessellate.");
  v13 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  v32 = 68;
  if ( !v13 )
    v32 = 140;
  DVARFLT_r_tessellationCutoffFalloff = Dvar_RegisterFloat("TSPOQPTMS", 320.0, 0.0, 10000.0, v32, "Range over which tessellation is faded out, up to the cutoff.");
  v33 = Com_GameMode_GetActiveGameMode();
  v34 = 68;
  if ( v33 != 1 )
    v34 = 140;
  DVARBOOL_r_enableNoTessBuckets = Dvar_RegisterBool("LTKPSMSTQO", 1, v34, "Enables placing triangles that don't need tessellation into additional draw calls using non-tessellated shaders.");
  v13 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  v35 = 68;
  if ( !v13 )
    v35 = 140;
  DVARFLT_sm_sunSampleSizeNear = Dvar_RegisterFloat("NPONLLLSPL", 0.25, 0.015625, 32.0, v35, "Shadow sample size");
  v13 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  v36 = 64;
  if ( !v13 )
    v36 = 140;
  DVARINT_sm_sunCascadeSizeMultiplier1 = Dvar_RegisterInt("LSNRQTOKRR", 2, 1, 8, v36, "Far cascade size multiplier: 2^n times near cascade size.");
  v13 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  v37 = 64;
  if ( !v13 )
    v37 = 140;
  DVARINT_sm_sunCascadeSizeMultiplier2 = Dvar_RegisterInt("NTLKNLNPLK", 2, 1, 8, v37, "Distant cascade size multiplier: 2^n times far cascade size.");
  v13 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  v38 = 68;
  if ( !v13 )
    v38 = 140;
  DVARINT_sm_roundRobinPrioritySpotShadows = Dvar_RegisterInt("MROOOROPKL", 4, 0, 16, v38, "How many lights can receive dynamic shadows (w/ round robin updates).");
  v13 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  v39 = 68;
  if ( !v13 )
    v39 = 140;
  DVARINT_sm_spotUpdateLimit = Dvar_RegisterInt("LTQMSPKRKO", 4, 0, 8, v39, "Maximum number of spot shadows to update per frame");
  v13 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  v40 = 68;
  if ( !v13 )
    v40 = 140;
  DVARINT_sm_spotUpdateLimitDynLight = Dvar_RegisterInt("LLNMKLQQP", 2, 0, 6, v40, "Maximum number of spot shadows to update per frame");
  v41 = Com_GameMode_GetActiveGameMode();
  v42 = 68;
  if ( v41 != 1 )
    v42 = 140;
  DVARBOOL_sm_spotUpdateMoreDynEnt = Dvar_RegisterBool("NRSOTSLSSO", 0, v42, "Reserve GPU resource for dynents visible in any spot shadow");
  v43 = Com_GameMode_GetActiveGameMode();
  v44 = 68;
  if ( v43 != 1 )
    v44 = 140;
  DVARBOOL_sm_spotUpdateMoreDynObj = Dvar_RegisterBool("RSLTKLOS", 0, v44, "Always render dynamic objects for selected lights with castDynamicShadow enabled");
  v45 = Com_GameMode_GetActiveGameMode();
  v46 = 68;
  if ( v45 != 1 )
    v46 = 140;
  DVARINT_sm_spotShadowScoreSystem = Dvar_RegisterEnum("MNQKPNLOPT", sm_spotShadowScoreSystemNames, 0, v46, "Spotshadow light score system");
  v13 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  v47 = 4;
  if ( !v13 )
    v47 = 140;
  DVARFLT_sm_spotShadowScore0Min = Dvar_RegisterFloat("NMSPMRQSMS", 0.1, 0.0, 1.0, v47, "spot shadow score0 min");
  v13 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  v48 = 4;
  if ( !v13 )
    v48 = 140;
  DVARFLT_sm_spotShadowSampleExtra0 = Dvar_RegisterFloat("NLOOTLTMMQ", 0.0, 0.0, 1.0, v48, "add additional spot shadow score samples at outter corners");
  v13 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  v49 = 64;
  if ( !v13 )
    v49 = 140;
  DVARFLT_sm_sunShadowScaleSingleLQ = Dvar_RegisterFloat("NSMRSOKML", 1.0, 0.0099999998, 8.0, v49, "Scale to apply to the sun shadow size when using the near cascade only (covering far) and while using the low quality path (splitscreen, etc).");
  v50 = Com_GameMode_GetActiveGameMode();
  v51 = 64;
  if ( v50 != 1 )
    v51 = 140;
  DVARBOOL_sm_sunFarShadows = Dvar_RegisterBool("SONQQSQRQ", 1, v51, "Enable 2nd shadow cascade for flagged objects");
  v52 = Com_GameMode_GetActiveGameMode();
  v53 = 64;
  if ( v52 != 1 )
    v53 = 140;
  DVARINT_sm_sunDistantShadows = Dvar_RegisterEnum("TMNTMTQRM", SM_SUN_DISTANCE_SHADOWS_NAMES, 0, v53, "Enable 3rd shadow cascade for flagged objects");
  v54 = Com_GameMode_GetActiveGameMode();
  v55 = 68;
  if ( v54 != 1 )
    v55 = 140;
  DVARINT_sm_firstForceCacheSModelPartition = Dvar_RegisterEnum("NKPRRSKNOP", sm_firstForceCacheSModelPartitionNames, 1, v55, "Force the caching of animated static models from this partition onwards");
  v13 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  v56 = 68;
  if ( !v13 )
    v56 = 140;
  DVARFLT_sm_spotDistCull = Dvar_RegisterFloat("LKOLRONRNQ", 0.0, 0.0, 262144.0, v56, "Distance cull spot shadows. 0 = no culling.");
  v13 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  v57 = 68;
  if ( !v13 )
    v57 = 140;
  DVARFLT_r_vertexDeformCutOffDist = Dvar_RegisterFloat("LTMPKRLLNM", 512.0, 1.0, 100000.0, v57, "Cut Off Dist for the camera to switch off smodel vertex deformations and allow for culling and caching");
  v13 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  v58 = 68;
  if ( !v13 )
    v58 = 140;
  DVARFLT_r_vertexDeformFadeDist = Dvar_RegisterFloat("OLPNKQKKTT", 256.0, 1.0, 100000.0, v58, "Fade Dist for the camera to start blending away smodel vertex deformations");
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v24 = 140;
  DVARFLT_r_st_lodDistanceScale = Dvar_RegisterFloat("SRQLQNLMK", 1.0, 0.0, 10.0, v24, "Distance scale for terrain LOD - when this increases, detail at a given distance is reduced");
  v13 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  v59 = 64;
  if ( !v13 )
    v59 = 140;
  DVARINT_r_compressedSunShadowFiltering = Dvar_RegisterInt("QSLRKRNKL", 1, 0, 2, v59, "Compressed sun shadow filtering: 0-disabled, 1-Vogel disk sampling, 2-Vogel disk sampling (valid auto parameters).");
  v13 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  v60 = 64;
  if ( !v13 )
    v60 = 140;
  DVARFLT_r_compressedSunShadowFilteringMaxRadius = Dvar_RegisterFloat("QSTSONPTR", 0.0, 0.0, 32.0, v60, "Compressed sun shadow debug filtering radius.");
  v13 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  v61 = 64;
  if ( !v13 )
    v61 = 140;
  DVARFLT_r_compressedSunShadowFilteringFarZ = Dvar_RegisterFloat("NORMLOSRMM", 0.0, 0.0, 65536.0, v61, "Compressed sun shadow debug filtering far plane.");
  v62 = Com_GameMode_GetActiveGameMode();
  v63 = 64;
  if ( v62 != 1 )
    v63 = 140;
  DVARBOOL_r_compressedSunShadowClipPlanes = Dvar_RegisterBool("LQLMTQMMKQ", 0, v63, "Use compressed sun shadow to compute sun shadow clip planes.");
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v1 = 140;
  DVARFLT_r_sunIntensityHeatOverride = Dvar_RegisterFloat("NSSMQLPRNT", 0.0, 0.0, 1024.0, v1, "override sun light intensity_heat");
  v13 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  v64 = 64;
  if ( !v13 )
    v64 = 140;
  DVARINT_r_precomputedSkyIlluminationRadialDistance = Dvar_RegisterInt("LSLKRQNSQS", 4500, 0, 0x40000000, v64, "Distance where full sky transition happens, zero disables");
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v27 = 140;
  DVARINT_r_waveWaterEnable = Dvar_RegisterEnum("MTRRKPRML", r_waveWaterEnableNames, 0, v27, "Enables wave water float z (> 0) or wave water SSR (>1)");
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
void R_UpdateDvarGameModeDefaults(void)
{
  const dvar_t *VarByName; 
  const dvar_t *v9; 

  *(float *)&_XMM6 = FLOAT_1_0;
  LODWORD(_XMM7) = 0;
  if ( Com_GameMode_SupportsFeature(WEAPON_LADDER_VAULT|0x80) )
  {
    _XMM0 = (unsigned int)Sys_GetXB3ConsoleType();
    __asm { vpcmpeqd xmm3, xmm0, xmm1 }
    _XMM1 = LODWORD(FLOAT_0_40000001);
    __asm { vblendvps xmm7, xmm1, xmm2, xmm3 }
    _XMM0 = (unsigned int)Sys_GetXB3ConsoleType();
    __asm { vpcmpeqd xmm3, xmm0, xmm1 }
    _XMM1 = LODWORD(FLOAT_1_1);
    __asm { vblendvps xmm6, xmm1, xmm2, xmm3 }
  }
  VarByName = Dvar_FindVarByName("NLSORKMPKT");
  if ( !VarByName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dvars.cpp", 4552, ASSERT_TYPE_ASSERT, "(sceneResLodScaleMax)", (const char *)&queryFormat, "sceneResLodScaleMax") )
    __debugbreak();
  if ( !VarByName->modified )
  {
    Dvar_SetFloat_Internal(VarByName, *(float *)&_XMM7);
    Dvar_ClearModified(VarByName);
  }
  v9 = Dvar_FindVarByName("LRPMOPMPO");
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dvars.cpp", 4560, ASSERT_TYPE_ASSERT, "(sceneResMinContributionScaleMax)", (const char *)&queryFormat, "sceneResMinContributionScaleMax") )
    __debugbreak();
  if ( !v9->modified )
  {
    Dvar_SetFloat_Internal(v9, *(float *)&_XMM6);
    Dvar_ClearModified(v9);
  }
}

