/*
==============
PipRect::CalcOverlap
==============
*/

bool __fastcall PipRect::CalcOverlap(PipRect *this, LocalClientNum_t localClientNum, float x0, float y0, float w, float h, rectDef_s *rect, vec4_t *inOutColor)
{
  return ?CalcOverlap@PipRect@@QEAA_NW4LocalClientNum_t@@MMMMPEAUrectDef_s@@AEATvec4_t@@@Z(this, localClientNum, x0, y0, w, h, rect, inOutColor);
}

/*
==============
CG_DrawVehicleReticle
==============
*/

void __fastcall CG_DrawVehicleReticle(LocalClientNum_t localClientNum, rectDef_s *rect, const vec4_t *color)
{
  ?CG_DrawVehicleReticle@@YAXW4LocalClientNum_t@@PEAUrectDef_s@@AEBTvec4_t@@@Z(localClientNum, rect, color);
}

/*
==============
CG_GetTargetPos
==============
*/

bool __fastcall CG_GetTargetPos(LocalClientNum_t localClientNum, int targetEntNum, vec3_t *outPos)
{
  return ?CG_GetTargetPos@@YA_NW4LocalClientNum_t@@HAEATvec3_t@@@Z(localClientNum, targetEntNum, outPos);
}

/*
==============
CG_InitVehicleReticle
==============
*/

void __fastcall CG_InitVehicleReticle(LocalClientNum_t localClientNum)
{
  ?CG_InitVehicleReticle@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_TargetsChanged
==============
*/

void __fastcall CG_TargetsChanged(LocalClientNum_t localClientNum, int num)
{
  ?CG_TargetsChanged@@YAXW4LocalClientNum_t@@H@Z(localClientNum, num);
}

/*
==============
CG_ReticleStartLockOn
==============
*/

void __fastcall CG_ReticleStartLockOn(LocalClientNum_t localClientNum, int targetEntNum, int msecDuration)
{
  ?CG_ReticleStartLockOn@@YAXW4LocalClientNum_t@@HH@Z(localClientNum, targetEntNum, msecDuration);
}

/*
==============
CG_DrawVehicleDebug
==============
*/

void __fastcall CG_DrawVehicleDebug(LocalClientNum_t localClientNum)
{
  ?CG_DrawVehicleDebug@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
Bounds_ScaleToMinEdgeSize2D
==============
*/

void __fastcall Bounds_ScaleToMinEdgeSize2D(Bounds *bounds, float minSize)
{
  ?Bounds_ScaleToMinEdgeSize2D@@YAXPEAUBounds@@M@Z(bounds, minSize);
}

/*
==============
CG_DrawVehicleTargets
==============
*/

void __fastcall CG_DrawVehicleTargets(LocalClientNum_t localClientNum, rectDef_s *rect, const vec4_t *color)
{
  ?CG_DrawVehicleTargets@@YAXW4LocalClientNum_t@@PEAUrectDef_s@@AEBTvec4_t@@@Z(localClientNum, rect, color);
}

/*
==============
Bounds_ScaleToMinEdgeSize2D
==============
*/
void Bounds_ScaleToMinEdgeSize2D(Bounds *bounds, float minSize)
{
  float v2; 
  float v3; 
  float v4; 

  v2 = minSize * 0.5;
  v3 = bounds->halfSize.v[1];
  v4 = bounds->halfSize.v[0];
  if ( v4 >= v3 )
  {
    bounds->halfSize.v[0] = (float)(v4 / v3) * v2;
    bounds->halfSize.v[1] = v2;
  }
  else
  {
    bounds->halfSize.v[1] = (float)(v3 / v4) * v2;
    bounds->halfSize.v[0] = v2;
  }
}

/*
==============
CG_DrawBouncingDiamond
==============
*/
void CG_DrawBouncingDiamond(LocalClientNum_t localClientNum, rectDef_s *rect, const vec4_t *color)
{
  cg_t *LocalClientGlobals; 
  const dvar_t *v7; 
  float value; 
  int vehReticleLockOnEntNum; 
  centity_t *Entity; 
  int vehReticleLockOnDuration; 
  float v12; 
  float v13; 
  double v14; 
  float v15; 
  float v16; 
  bool v17; 
  float v18; 
  float v19; 
  double v20; 
  float v21; 
  const dvar_t *v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  const dvar_t *v30; 
  float v31; 
  Material *material; 
  int vertAlign; 
  int horzAlign; 
  float v35; 
  float v36; 
  const ScreenPlacement *ActivePlacement; 
  vec3_t outPos; 
  float c; 
  float s; 
  vec3_t outOrg; 
  __int64 v42; 
  vec2_t outScreenPos; 

  v42 = -2i64;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v7 = DVARFLT_vehHudReticleBouncingRadius;
  if ( !DVARFLT_vehHudReticleBouncingRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHudReticleBouncingRadius") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  value = v7->current.value;
  vehReticleLockOnEntNum = LocalClientGlobals->vehReticleLockOnEntNum;
  if ( vehReticleLockOnEntNum == 2047 )
  {
    v15 = 0.0;
    v16 = 0.0;
  }
  else
  {
    if ( !CG_GetTargetPos(localClientNum, vehReticleLockOnEntNum, &outPos) )
    {
      Entity = CG_GetEntity(localClientNum, LocalClientGlobals->vehReticleLockOnEntNum);
      if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_hud.cpp", 890, ASSERT_TYPE_ASSERT, "(targetEnt)", (const char *)&queryFormat, "targetEnt") )
        __debugbreak();
      CG_GetPoseOrigin(&Entity->pose, &outPos);
    }
    RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
    outPos.v[0] = outPos.v[0] - outOrg.v[0];
    outPos.v[1] = outPos.v[1] - outOrg.v[1];
    outPos.v[2] = outPos.v[2] - outOrg.v[2];
    CG_WorldDirToScreenPosVirtualCentered(localClientNum, &outPos, &outScreenPos);
    vehReticleLockOnDuration = LocalClientGlobals->vehReticleLockOnDuration;
    if ( vehReticleLockOnDuration )
    {
      v12 = (float)(LocalClientGlobals->time - LocalClientGlobals->vehReticleLockOnStartTime) / (float)vehReticleLockOnDuration;
      I_fclamp(v12, 0.0, 1.0);
      v13 = v12;
    }
    else
    {
      v13 = FLOAT_1_0;
    }
    value = value - (float)(v13 * value);
    v14 = I_fclamp(v13 * 2.0, 0.0, 1.0);
    v15 = (float)((float)(outScreenPos.v[0] - 0.0) * *(float *)&v14) + 0.0;
    v16 = (float)((float)(outScreenPos.v[1] - 0.0) * *(float *)&v14) + 0.0;
    memset(&outOrg, 0, sizeof(outOrg));
  }
  if ( value == 0.0 )
  {
    LocalClientGlobals->vehReticleOffset.v[0] = v15;
    LocalClientGlobals->vehReticleOffset.v[1] = v16;
  }
  else
  {
    v17 = LocalClientGlobals->vehReticleVel.v[0] == 0.0 && LocalClientGlobals->vehReticleVel.v[1] == 0.0;
    v18 = LocalClientGlobals->vehReticleOffset.v[0] - v15;
    v19 = LocalClientGlobals->vehReticleOffset.v[1] - v16;
    if ( v17 || (float)((float)(v18 * v18) + (float)((float)(LocalClientGlobals->vehReticleOffset.v[1] - v16) * (float)(LocalClientGlobals->vehReticleOffset.v[1] - v16))) > (float)(value * value) )
    {
      v20 = I_random();
      FastSinCos((float)(*(float *)&v20 * 360.0) * 0.017453292, &s, &c);
      v21 = c;
      LocalClientGlobals->vehReticleVel.v[0] = s;
      LocalClientGlobals->vehReticleVel.v[1] = v21;
      v22 = DVARFLT_vehHudReticleBouncingSpeed;
      if ( !DVARFLT_vehHudReticleBouncingSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHudReticleBouncingSpeed") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v22);
      v23 = v22->current.value;
      v24 = v23 * LocalClientGlobals->vehReticleVel.v[0];
      LocalClientGlobals->vehReticleVel.v[0] = v24;
      v25 = v23 * LocalClientGlobals->vehReticleVel.v[1];
      LocalClientGlobals->vehReticleVel.v[1] = v25;
      v26 = (float)(v19 * v25) + (float)(v18 * v24);
      LODWORD(v27) = LODWORD(v25) ^ _xmm;
      if ( (float)((float)(v24 * v19) + (float)(COERCE_FLOAT(LODWORD(v25) ^ _xmm) * v18)) < v26 )
      {
        v26 = (float)(v24 * v19) + (float)(v27 * v18);
        LocalClientGlobals->vehReticleVel.v[0] = v27;
        LocalClientGlobals->vehReticleVel.v[1] = v24;
      }
      LODWORD(v28) = LODWORD(v24) ^ _xmm;
      if ( (float)((float)(v27 * v19) + (float)(v18 * COERCE_FLOAT(LODWORD(v24) ^ _xmm))) < v26 )
      {
        v26 = (float)(v27 * v19) + (float)(v18 * COERCE_FLOAT(LODWORD(v24) ^ _xmm));
        LocalClientGlobals->vehReticleVel.v[0] = v28;
        LocalClientGlobals->vehReticleVel.v[1] = v27;
      }
      if ( (float)((float)(v28 * v19) + (float)(v18 * v25)) < v26 )
      {
        LocalClientGlobals->vehReticleVel.v[0] = v25;
        LocalClientGlobals->vehReticleVel.v[1] = v28;
      }
    }
    v29 = (float)LocalClientGlobals->frametime * 0.001;
    LocalClientGlobals->vehReticleOffset.v[0] = (float)(v29 * LocalClientGlobals->vehReticleVel.v[0]) + LocalClientGlobals->vehReticleOffset.v[0];
    LocalClientGlobals->vehReticleOffset.v[1] = (float)(v29 * LocalClientGlobals->vehReticleVel.v[1]) + LocalClientGlobals->vehReticleOffset.v[1];
  }
  v30 = DVARFLT_vehHudReticleBouncingDiamondSize;
  if ( !DVARFLT_vehHudReticleBouncingDiamondSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHudReticleBouncingDiamondSize") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v30);
  v31 = v30->current.value;
  material = cgMedia.vehBouncingDiamondReticle;
  vertAlign = rect->vertAlign;
  horzAlign = rect->horzAlign;
  v35 = LocalClientGlobals->vehReticleOffset.v[1] - (float)(v31 * 0.5);
  v36 = LocalClientGlobals->vehReticleOffset.v[0] - (float)(v31 * 0.5);
  ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
  CL_DrawStretchPicWithoutSplitScreenScaling(ActivePlacement, v36, v35, v31, v31, horzAlign, vertAlign, 0.0, 0.0, 1.0, 1.0, color, material);
  memset(&outPos, 0, sizeof(outPos));
}

/*
==============
CG_DrawPipOnAStickReticle
==============
*/
void CG_DrawPipOnAStickReticle(LocalClientNum_t localClientNum, rectDef_s *rect, const vec4_t *color)
{
  __int64 v3; 
  cg_t *LocalClientGlobals; 
  centity_t *Entity; 
  const DObj *ClientDObj; 
  const Weapon *WeaponForEntity; 
  const dvar_t *v9; 
  float v10; 
  float v11; 
  __int128 v12; 
  float v16; 
  float v17; 
  const ScreenPlacement *ActivePlacement; 
  float v19; 
  float v20; 
  float v21; 
  double Float_Internal_DebugName; 
  float v23; 
  float v24; 
  double v25; 
  Material *vehHudLine; 
  int vertAlign; 
  int horzAlign; 
  float v29; 
  float v30; 
  double lineWidth; 
  vec4_t *v32; 
  double v33; 
  double v34; 
  Material *material; 
  int projectileSpeed; 
  vec4_t *v37; 
  int projectileSpeedUp; 
  vec2_t outScreenPos; 
  vec2_t v40; 
  vec3_t worldDir; 
  tmat33_t<vec3_t> outTagMat; 
  vec3_t outOrigin; 

  v3 = localClientNum;
  v37 = (vec4_t *)color;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  Entity = CG_GetEntity((const LocalClientNum_t)v3, LocalClientGlobals->predictedPlayerState.viewlocked_entNum);
  if ( (Entity->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_hud.cpp", 751, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  ClientDObj = Com_GetClientDObj(Entity->nextState.number, (LocalClientNum_t)v3);
  if ( !CgWeaponMap::ms_instance[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  WeaponForEntity = BG_GetWeaponForEntity(CgWeaponMap::ms_instance[v3], &Entity->nextState);
  BG_GetProjectileSpeed(WeaponForEntity, 0, &projectileSpeed, &projectileSpeedUp);
  if ( ClientDObj )
  {
    v9 = DVARBOOL_vehHudDrawPipOnStickWhenFreelooking;
    if ( !DVARBOOL_vehHudDrawPipOnStickWhenFreelooking && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHudDrawPipOnStickWhenFreelooking") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    if ( v9->current.enabled || GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.eFlags, GameModeFlagValues::ms_spValue, 0x1Cu) )
    {
      if ( CG_DObjGetWorldTagMatrix(&Entity->pose, ClientDObj, scr_const.tag_body, &outTagMat, &outOrigin) )
      {
        CG_WorldDirToScreenPosVirtualCentered((LocalClientNum_t)v3, outTagMat.m, &outScreenPos);
        worldDir.v[0] = (float)projectileSpeed * outTagMat.m[0].v[0];
        worldDir.v[1] = (float)projectileSpeed * outTagMat.m[0].v[1];
        worldDir.v[2] = (float)projectileSpeed * outTagMat.m[0].v[2];
        v10 = Entity->prevState.pos.trDelta.v[1];
        v11 = Entity->prevState.pos.trDelta.v[2];
        worldDir.v[0] = worldDir.v[0] + Entity->prevState.pos.trDelta.v[0];
        worldDir.v[2] = worldDir.v[2] + v11;
        worldDir.v[1] = worldDir.v[1] + v10;
        if ( CG_WorldDirToScreenPosVirtualCentered((LocalClientNum_t)v3, &worldDir, &v40) )
        {
          if ( !cgMedia.vehCenterCircle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_hud.cpp", 774, ASSERT_TYPE_ASSERT, "(cgMedia.vehCenterCircle)", (const char *)&queryFormat, "cgMedia.vehCenterCircle") )
            __debugbreak();
          if ( !cgMedia.vehMovingCircle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_hud.cpp", 775, ASSERT_TYPE_ASSERT, "(cgMedia.vehMovingCircle)", (const char *)&queryFormat, "cgMedia.vehMovingCircle") )
            __debugbreak();
          if ( !cgMedia.vehHudLine && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_hud.cpp", 776, ASSERT_TYPE_ASSERT, "(cgMedia.vehHudLine)", (const char *)&queryFormat, "cgMedia.vehHudLine") )
            __debugbreak();
          v12 = LODWORD(v40.v[1]);
          *(float *)&v12 = fsqrt((float)((float)(v40.v[1] - outScreenPos.v[1]) * (float)(v40.v[1] - outScreenPos.v[1])) + (float)((float)(v40.v[0] - outScreenPos.v[0]) * (float)(v40.v[0] - outScreenPos.v[0])));
          _XMM7 = v12;
          __asm
          {
            vcmpless xmm0, xmm7, cs:__real@80000000
            vblendvps xmm0, xmm7, xmm10, xmm0
          }
          v16 = (float)(v40.v[0] - outScreenPos.v[0]) * (float)(1.0 / *(float *)&_XMM0);
          v17 = (float)(v40.v[1] - outScreenPos.v[1]) * (float)(1.0 / *(float *)&_XMM0);
          ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)v3);
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_vehHudReticlePipOnAStickMovingCircle, "vehHudReticlePipOnAStickMovingCircle");
          v19 = *(float *)&_XMM0 * 0.5;
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_vehHudReticlePipOnAStickCenterCircle, "vehHudReticlePipOnAStickCenterCircle");
          v20 = *(float *)&_XMM0 * 0.5;
          *(float *)&v12 = (float)(*(float *)&_XMM0 * 0.5) + v19;
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_vehHudReticlePipOnAStickCenterCircleBuffer, "vehHudReticlePipOnAStickCenterCircleBuffer");
          v21 = *(float *)&v12 - *(float *)&_XMM0;
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_vehHudReticlePipOnAStickMovingCircleBuffer, "vehHudReticlePipOnAStickMovingCircleBuffer");
          if ( *(float *)&_XMM7 <= (float)(v21 - *(float *)&_XMM0) )
          {
            v32 = v37;
          }
          else
          {
            Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DVARFLT_vehHudReticlePipOnAStickCenterCircleBuffer, "vehHudReticlePipOnAStickCenterCircleBuffer");
            v23 = (float)((float)(v20 - *(float *)&Float_Internal_DebugName) * v16) + outScreenPos.v[0];
            v24 = (float)((float)(v20 - *(float *)&Float_Internal_DebugName) * v17) + outScreenPos.v[1];
            v25 = Dvar_GetFloat_Internal_DebugName(DVARFLT_vehHudReticlePipOnAStickMovingCircleBuffer, "vehHudReticlePipOnAStickMovingCircleBuffer");
            vehHudLine = cgMedia.vehHudLine;
            vertAlign = rect->vertAlign;
            horzAlign = rect->horzAlign;
            v29 = (float)((float)(*(float *)&v25 - v19) * v16) + v40.v[0];
            v30 = (float)((float)(*(float *)&v25 - v19) * v17) + v40.v[1];
            lineWidth = Dvar_GetFloat_Internal_DebugName(DVARFLT_vehHudLineWidth, "vehHudLineWidth");
            material = vehHudLine;
            v32 = v37;
            CG_Draw2DLine(ActivePlacement, v23, v24, v29, v30, *(float *)&lineWidth, horzAlign, vertAlign, v37, material);
          }
          v33 = Dvar_GetFloat_Internal_DebugName(DVARFLT_vehHudReticlePipOnAStickCenterCircle, "vehHudReticlePipOnAStickCenterCircle");
          CL_DrawStretchPicWithoutSplitScreenScaling(ActivePlacement, outScreenPos.v[0] - v20, outScreenPos.v[1] - v20, *(float *)&v33, *(float *)&v33, rect->horzAlign, rect->vertAlign, 0.0, 0.0, 1.0, 1.0, v32, cgMedia.vehCenterCircle);
          v34 = Dvar_GetFloat_Internal_DebugName(DVARFLT_vehHudReticlePipOnAStickMovingCircle, "vehHudReticlePipOnAStickMovingCircle");
          CL_DrawStretchPicWithoutSplitScreenScaling(ActivePlacement, v40.v[0] - v19, v40.v[1] - v19, *(float *)&v34, *(float *)&v34, rect->horzAlign, rect->vertAlign, 0.0, 0.0, 1.0, 1.0, v32, cgMedia.vehMovingCircle);
        }
      }
    }
  }
}

/*
==============
CG_DrawScaledRect
==============
*/
void CG_DrawScaledRect(LocalClientNum_t localClientNum, rectDef_s *rect, const vec4_t *color, Material *material, const Bounds *screenBounds, const targetInfo_t *targ, float size, float yaw, int time, PipRect *pipRect)
{
  int v12; 
  float v13; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float h; 
  int v21; 
  int v22; 
  int v23; 
  __int128 popRadiusOuter_low; 
  float v25; 
  float prevPopRadiusInnerWaitTime; 
  __int128 prevPopRadiusInnerWaitTime_low; 
  bool v32; 
  vec4_t v33; 
  int flags; 
  int vertAlign; 
  int horzAlign; 
  const ScreenPlacement *ActivePlacement; 
  float *v38; 
  __int64 v39; 
  __int64 v40; 
  float v41; 
  float v42; 
  float v43; 
  float v44; 
  int v45; 
  int v46; 
  float v47; 
  float v48; 
  float v49; 
  float v50; 
  float v51; 
  bool v52; 
  const ScreenPlacement *v53; 
  float c; 
  float s; 
  Material *v56; 
  __int64 v57; 
  vec4_t inOutColor; 
  int v59; 
  int v60; 
  float v61; 
  float v62; 
  __int128 v63; 
  int v64; 
  int v65; 
  float v66; 
  float v67; 
  __int128 v68; 
  int v69; 
  int v70; 
  float v71; 
  float v72; 
  __int128 v73; 
  int v74; 
  int v75; 
  float v76; 
  float v77; 
  __int128 v78; 
  float v79; 
  int v80; 
  float v81; 
  float v82; 
  __int128 v83; 
  float v84; 
  int v85; 
  float v86; 
  float v87; 
  __int128 v88; 
  int v89; 
  float v90; 
  float v91; 
  float v92; 
  __int128 v93; 
  int v94; 
  float v95; 
  float v96; 
  float v97; 
  __int128 v98; 

  v12 = 1;
  v13 = screenBounds->midPoint.v[1];
  _XMM4 = LODWORD(targ->delay);
  v15 = screenBounds->midPoint.v[0] - screenBounds->halfSize.v[0];
  v16 = v13 - screenBounds->halfSize.v[1];
  v17 = screenBounds->midPoint.v[0] + screenBounds->halfSize.v[0];
  v18 = v13 + screenBounds->halfSize.v[1];
  s = *(float *)&localClientNum;
  v19 = v17 - v15;
  h = v18 - v16;
  v56 = material;
  v57 = 0i64;
  if ( *(float *)&_XMM4 > 0.0 || (*(float *)&v21 = v15, *(float *)&v22 = v16, targ->popRadiusOuter != 0.0) )
  {
    v23 = time - targ->prevTime;
    *(float *)&v21 = v15;
    *(float *)&v22 = v16;
    if ( v23 < 100 )
    {
      popRadiusOuter_low = LODWORD(targ->popRadiusOuter);
      if ( *(float *)&popRadiusOuter_low != 0.0 )
      {
        v25 = fsqrt((float)((float)(v16 - targ->prevY) * (float)(v16 - targ->prevY)) + (float)((float)(v15 - targ->prevX) * (float)(v15 - targ->prevX)));
        if ( v25 >= COERCE_FLOAT(popRadiusOuter_low & _xmm) )
        {
          targ->popRadiusOuter = COERCE_FLOAT(popRadiusOuter_low & _xmm);
        }
        else
        {
          _XMM1 = LODWORD(targ->popRadiusOuter);
          if ( v25 < targ->popRadiusInner && *(float *)&popRadiusOuter_low > 0.0 )
          {
            *(float *)&_XMM0 = targ->popRadiusInnerWaitTime;
            if ( *(float *)&_XMM0 > 0.0 )
            {
              prevPopRadiusInnerWaitTime = targ->prevPopRadiusInnerWaitTime;
              if ( prevPopRadiusInnerWaitTime > 0.0 )
              {
                prevPopRadiusInnerWaitTime_low = LODWORD(targ->prevPopRadiusInnerWaitTime);
                *(float *)&prevPopRadiusInnerWaitTime_low = prevPopRadiusInnerWaitTime - (float)((float)v23 * 0.001);
                _XMM2 = prevPopRadiusInnerWaitTime_low;
                __asm { vmaxss  xmm0, xmm2, xmm11 }
              }
              targ->prevPopRadiusInnerWaitTime = *(float *)&_XMM0;
            }
            _XMM1 = popRadiusOuter_low;
            if ( targ->prevPopRadiusInnerWaitTime == 0.0 )
            {
              _XMM1 = popRadiusOuter_low ^ _xmm;
              targ->popRadiusOuter = COERCE_FLOAT(popRadiusOuter_low ^ _xmm);
            }
          }
          __asm
          {
            vcmpltss xmm0, xmm1, xmm11
            vblendvps xmm4, xmm4, xmm7, xmm0
          }
          v12 = 0;
          c = *(float *)&_XMM4;
          LOBYTE(v12) = *(float *)&_XMM1 >= 0.0;
        }
      }
      *(float *)&v21 = (float)(*(float *)&_XMM4 * targ->prevX) + (float)((float)(1.0 - *(float *)&_XMM4) * v15);
      *(float *)&v22 = (float)(*(float *)&_XMM4 * targ->prevY) + (float)((float)(1.0 - *(float *)&_XMM4) * v16);
      v19 = (float)(*(float *)&_XMM4 * targ->prevW) + (float)((float)(1.0 - *(float *)&_XMM4) * v19);
      h = (float)(*(float *)&_XMM4 * targ->prevH) + (float)((float)(1.0 - *(float *)&_XMM4) * h);
    }
  }
  c = *(float *)&v21;
  if ( (v21 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_hud.cpp", 277, ASSERT_TYPE_SANITY, "( !IS_NAN( x0 ) )", (const char *)&queryFormat, "!IS_NAN( x0 )") )
    __debugbreak();
  c = *(float *)&v22;
  if ( (v22 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_hud.cpp", 278, ASSERT_TYPE_SANITY, "( !IS_NAN( y0 ) )", (const char *)&queryFormat, "!IS_NAN( y0 )") )
    __debugbreak();
  c = v19;
  if ( (LODWORD(v19) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_hud.cpp", 279, ASSERT_TYPE_SANITY, "( !IS_NAN( w ) )", (const char *)&queryFormat, "!IS_NAN( w )") )
    __debugbreak();
  c = h;
  if ( (LODWORD(h) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_hud.cpp", 280, ASSERT_TYPE_SANITY, "( !IS_NAN( h ) )", (const char *)&queryFormat, "!IS_NAN( h )") )
    __debugbreak();
  targ->prevTime = time;
  if ( v12 )
  {
    targ->prevX = *(float *)&v21;
    targ->prevY = *(float *)&v22;
  }
  v32 = (targ->flags & 0x200) == 0;
  targ->prevW = v19;
  targ->prevH = h;
  if ( v32 )
    v33 = *color;
  else
    v33 = targ->color;
  inOutColor = v33;
  if ( PipRect::CalcOverlap(pipRect, SLODWORD(s), *(float *)&v21, *(float *)&v22, v19, h, rect, &inOutColor) )
  {
    flags = targ->flags;
    if ( (flags & 0x800) != 0 )
    {
      vertAlign = rect->vertAlign;
      horzAlign = rect->horzAlign;
      ActivePlacement = ScrPlace_GetActivePlacement(SLODWORD(s));
      CG_DrawRotatedPicWithoutSplitScreenScaling(ActivePlacement, *(float *)&v21, *(float *)&v22, v19, h, horzAlign, vertAlign, yaw, &inOutColor, v56);
      return;
    }
    v63 = _xmm;
    v68 = _xmm;
    v73 = _xmm;
    v78 = _xmm;
    v83 = _xmm;
    v88 = _xmm;
    v38 = (float *)&v63 + 2;
    v93 = _xmm;
    v79 = (float)(size * 0.33333334) + *(float *)&v21;
    v81 = v19 - (float)(size * 0.66666669);
    v84 = v79;
    v86 = v81;
    v39 = 4i64;
    v60 = v22;
    v65 = v22;
    v80 = v22;
    v98 = _xmm;
    v59 = v21;
    v61 = size * 0.33333334;
    v62 = size * 0.33333334;
    *(float *)&v64 = (float)(v19 + *(float *)&v21) - (float)(size * 0.33333334);
    v66 = size * 0.33333334;
    v67 = size * 0.33333334;
    v69 = v21;
    *(float *)&v70 = (float)(h + *(float *)&v22) - (float)(size * 0.33333334);
    v71 = size * 0.33333334;
    v72 = size * 0.33333334;
    v74 = v64;
    v75 = v70;
    v76 = size * 0.33333334;
    v77 = size * 0.33333334;
    v82 = size * 0.33333334;
    v85 = v70;
    v87 = size * 0.33333334;
    v89 = v21;
    v90 = (float)(size * 0.33333334) + *(float *)&v22;
    v91 = size * 0.33333334;
    v92 = h - (float)(size * 0.66666669);
    v94 = v64;
    v95 = v90;
    v96 = size * 0.33333334;
    v97 = v92;
    if ( (flags & 0x80u) == 0 )
      v39 = 8i64;
    v40 = SLODWORD(s);
    do
    {
      if ( yaw == 0.0 )
      {
        v44 = *(v38 - 5);
      }
      else
      {
        v41 = *(v38 - 6) - screenBounds->midPoint.v[0];
        v42 = *(v38 - 5) - screenBounds->midPoint.v[1];
        FastSinCos(yaw * 0.017453292, &s, &c);
        v43 = (float)((float)(v41 * c) - (float)(v42 * s)) + screenBounds->midPoint.v[0];
        v44 = (float)((float)(v42 * c) + (float)(v41 * s)) + screenBounds->midPoint.v[1];
        *(v38 - 5) = v44;
        *(v38 - 6) = v43;
      }
      v45 = rect->vertAlign;
      v46 = rect->horzAlign;
      v47 = v38[1];
      v48 = *v38;
      v49 = *(v38 - 1);
      v50 = *(v38 - 2);
      v51 = *(v38 - 3);
      if ( activeScreenPlacementMode )
      {
        if ( activeScreenPlacementMode == SCRMODE_DISPLAY )
        {
          v53 = &scrPlaceViewDisplay[v40];
          goto LABEL_50;
        }
        if ( activeScreenPlacementMode == SCRMODE_INVALID )
          v52 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
        else
          v52 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
        if ( v52 )
          __debugbreak();
      }
      v53 = &scrPlaceFull;
LABEL_50:
      CL_DrawRotatedStretchPicWithoutSplitScreenScaling(v53, *(v38 - 6), v44, *(v38 - 4), v51, v46, v45, v50, v49, v48, v47, yaw, 1, &inOutColor, v56);
      v38 += 8;
      ++v57;
    }
    while ( v57 < v39 );
  }
}

/*
==============
CG_DrawTargets_ClampScreenPosToEdges
==============
*/
__int64 CG_DrawTargets_ClampScreenPosToEdges(LocalClientNum_t localClientNum, vec2_t *inOutPoint)
{
  const ScreenPlacement *ActivePlacement; 
  const dvar_t *v4; 
  const ScreenPlacement *v5; 
  __int128 v6; 
  __int128 v7; 
  __int128 v8; 
  __int128 v9; 
  const dvar_t *v10; 
  const dvar_t *v11; 
  const dvar_t *v13; 
  __int128 v14; 
  __int128 v17; 
  float v20; 
  float v23; 
  float v25; 
  float v27; 
  __int64 result; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 

  ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
  v4 = DVARFLT_vehHudTargetScreenEdgeClampBufferLeft;
  v5 = ActivePlacement;
  v6 = LODWORD(ActivePlacement->realViewportSize.v[0]);
  *(float *)&v6 = (float)(ActivePlacement->realViewportSize.v[0] * ActivePlacement->scaleRealToVirtual.v[0]) * 0.5;
  v7 = v6;
  v8 = LODWORD(ActivePlacement->realViewportSize.v[1]);
  *(float *)&v8 = (float)(ActivePlacement->realViewportSize.v[1] * ActivePlacement->scaleRealToVirtual.v[1]) * 0.5;
  v9 = v8;
  if ( !DVARFLT_vehHudTargetScreenEdgeClampBufferLeft && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHudTargetScreenEdgeClampBufferLeft") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  v10 = DVARFLT_vehHudTargetScreenEdgeClampBufferRight;
  if ( !DVARFLT_vehHudTargetScreenEdgeClampBufferRight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHudTargetScreenEdgeClampBufferRight") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  CL_IsRenderingSplitScreen();
  v11 = DVARFLT_vehHudTargetScreenEdgeClampBufferTop;
  if ( !DVARFLT_vehHudTargetScreenEdgeClampBufferTop && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHudTargetScreenEdgeClampBufferTop") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  _XMM8 = v11->current.unsignedInt;
  v13 = DVARFLT_vehHudTargetScreenEdgeClampBufferBottom;
  if ( !DVARFLT_vehHudTargetScreenEdgeClampBufferBottom && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHudTargetScreenEdgeClampBufferBottom") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  v14 = v7;
  *(float *)&v14 = (float)(*(float *)&v7 * 2.0) - v5->virtualViewableMax.v[0];
  _XMM1 = v14;
  __asm { vmaxss  xmm3, xmm1, dword ptr [rdi+28h] }
  v17 = v9;
  *(float *)&v17 = (float)(*(float *)&v9 * 2.0) - v5->virtualViewableMax.v[1];
  _XMM0 = v17;
  __asm { vmaxss  xmm4, xmm0, dword ptr [rdi+2Ch] }
  v20 = inOutPoint->v[0];
  __asm
  {
    vmaxss  xmm1, xmm3, xmm7
    vmaxss  xmm0, xmm3, xmm6
  }
  v23 = *(float *)&_XMM1 - *(float *)&v7;
  __asm { vmaxss  xmm1, xmm8, xmm4 }
  v25 = *(float *)&v7 - *(float *)&_XMM0;
  _XMM0 = v13->current.unsignedInt;
  v27 = *(float *)&_XMM1 - *(float *)&v9;
  result = 0i64;
  __asm { vmaxss  xmm1, xmm0, xmm4 }
  v30 = *(float *)&v9 - *(float *)&_XMM1;
  if ( inOutPoint->v[0] >= v23 )
  {
    if ( v20 <= v25 )
      goto LABEL_18;
    v31 = v25 / v20;
    result = 3i64;
  }
  else
  {
    v31 = v23 / v20;
    result = 4i64;
  }
  v20 = v20 * v31;
  inOutPoint->v[1] = v31 * inOutPoint->v[1];
  inOutPoint->v[0] = v20;
LABEL_18:
  v32 = inOutPoint->v[1];
  if ( v32 >= v27 )
  {
    if ( v32 <= v30 )
      return result;
    v33 = v30 / v32;
    result = 2i64;
  }
  else
  {
    v33 = v27 / v32;
    result = 1i64;
  }
  inOutPoint->v[1] = v32 * v33;
  inOutPoint->v[0] = v20 * v33;
  return result;
}

/*
==============
CG_DrawVehicleDebug
==============
*/
void CG_DrawVehicleDebug(LocalClientNum_t localClientNum)
{
  const dvar_t *v1; 
  __int64 v2; 
  cg_t *LocalClientGlobals; 
  CgVehicleSystem *v4; 
  const centity_t *Entity; 
  VehicleClient *Client; 
  const ScreenPlacement *ActivePlacement; 
  GfxFont *FontHandle; 
  __int64 y; 
  __int64 horzAlign; 
  char dest[112]; 

  v1 = DCONST_DVARINT_bg_vehicleDebug;
  v2 = localClientNum;
  if ( !DCONST_DVARINT_bg_vehicleDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicleDebug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.integer )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v2);
    if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.eFlags, ACTIVE, 0xBu) && LocalClientGlobals->predictedPlayerState.viewlocked_entNum != 2047 )
    {
      if ( !(_BYTE)CgVehicleSystem::ms_allocatedType )
      {
        LODWORD(horzAlign) = v2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 406, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the vehicle system for localClientNum %d but the vehicle system type is not known\n", "ms_allocatedType != GameModeType::NONE", horzAlign) )
          __debugbreak();
      }
      if ( (unsigned int)v2 >= CgVehicleSystem::ms_allocatedCount )
      {
        LODWORD(horzAlign) = CgVehicleSystem::ms_allocatedCount;
        LODWORD(y) = v2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 407, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", y, horzAlign) )
          __debugbreak();
      }
      if ( !CgVehicleSystem::ms_vehicleSystemArray[v2] )
      {
        LODWORD(horzAlign) = v2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 408, ASSERT_TYPE_ASSERT, "(ms_vehicleSystemArray[localClientNum])", "%s\n\tTrying to access unallocated vehicle system for localClientNum %d\n", "ms_vehicleSystemArray[localClientNum]", horzAlign) )
          __debugbreak();
      }
      v4 = CgVehicleSystem::ms_vehicleSystemArray[v2];
      Entity = CG_GetEntity((const LocalClientNum_t)v2, LocalClientGlobals->predictedPlayerState.viewlocked_entNum);
      Client = CgVehicleSystem::GetClient(v4, Entity);
      ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)v2);
      FontHandle = UI_GetFontHandle(ActivePlacement, 6, 0.30000001);
      Com_sprintf(dest, 0x64ui64, "Speed: %f MPH", (float)(Client->localSpeed.v[0] * 0.056818184));
      UI_DrawText(ActivePlacement, dest, 100, FontHandle, 40.0, 280.0, 1, 1, 0.30000001, &colorGreen, 3);
      Com_sprintf(dest, 0x64ui64, "Slide: %f MPH", (float)(Client->localSpeed.v[1] * 0.056818184));
      UI_DrawText(ActivePlacement, dest, 100, FontHandle, 40.0, 292.0, 1, 1, 0.30000001, &colorGreen, 3);
    }
  }
}

/*
==============
CG_DrawVehicleReticle
==============
*/
void CG_DrawVehicleReticle(LocalClientNum_t localClientNum, rectDef_s *rect, const vec4_t *color)
{
  cg_t *LocalClientGlobals; 
  __int16 viewlocked_entNum; 
  centity_t *Entity; 
  CgWeaponMap *Instance; 
  unsigned __int16 weaponIdx; 
  bool v11; 
  WeaponDef **v12; 
  WeaponDef *v13; 
  __int64 v14; 
  unsigned int v15; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.eFlags, ACTIVE, 0xBu) )
  {
    viewlocked_entNum = LocalClientGlobals->predictedPlayerState.viewlocked_entNum;
    if ( viewlocked_entNum != 2047 )
    {
      Entity = CG_GetEntity(localClientNum, viewlocked_entNum);
      if ( (Entity->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_hud.cpp", 971, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
        __debugbreak();
      Instance = CgWeaponMap::GetInstance(localClientNum);
      weaponIdx = BG_GetWeaponForEntity(Instance, &Entity->nextState)->weaponIdx;
      if ( weaponIdx )
      {
        if ( weaponIdx > bg_lastParsedWeaponIndex )
        {
          v15 = bg_lastParsedWeaponIndex;
          LODWORD(v14) = weaponIdx;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v14, v15) )
            __debugbreak();
        }
        v11 = bg_weaponDefs[weaponIdx] == NULL;
        v12 = &bg_weaponDefs[weaponIdx];
        if ( v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
          __debugbreak();
        v13 = *v12;
        *(_WORD *)&rect->horzAlign = 514;
        if ( v13->activeReticleType == VEH_ACTIVE_RETICLE_PIP_ON_A_STICK )
        {
          CG_DrawPipOnAStickReticle(localClientNum, rect, color);
        }
        else if ( v13->activeReticleType == VEH_ACTIVE_RETICLE_BOUNCING_DIAMOND )
        {
          CG_DrawBouncingDiamond(localClientNum, rect, color);
        }
      }
    }
  }
}

/*
==============
CG_DrawVehicleTargets
==============
*/
void CG_DrawVehicleTargets(LocalClientNum_t localClientNum, rectDef_s *rect, const vec4_t *color)
{
  cg_t *LocalClientGlobals; 
  int v6; 
  __int64 v7; 
  float v8; 
  float v9; 
  float v10; 
  __int64 v12; 
  __int64 v13; 
  int clientNum; 
  centity_t *Entity; 
  int v16; 
  float v17; 
  float v18; 
  float v19; 
  cg_t *v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  __int128 v28; 
  float v29; 
  float v33; 
  float v34; 
  float v35; 
  float v39; 
  float v40; 
  float v41; 
  float v42; 
  int v43; 
  Material *v44; 
  const dvar_t *v45; 
  float h; 
  float v47; 
  float v48; 
  int v49; 
  int v50; 
  int vertAlign; 
  int horzAlign; 
  float v53; 
  float v54; 
  const ScreenPlacement *ActivePlacement; 
  const DObj *ClientDObj; 
  int v57; 
  int v58; 
  float v63; 
  float v68; 
  float v73; 
  float v75; 
  float v76; 
  float v77; 
  float v78; 
  __int128 v79; 
  float v81; 
  int v82; 
  const char **p_name; 
  unsigned int v84; 
  int v85; 
  int v86; 
  __int128 v87; 
  __int128 v88; 
  int v89; 
  __int128 v90; 
  __int128 v91; 
  __int128 v92; 
  __int128 v96; 
  float inOutColor; 
  Material *pipRect; 
  float *v100; 
  vec3_t outOrigin; 
  vec3_t outOrg; 
  vec4_t *colora; 
  __int64 v104; 
  PipRect v105; 
  __int64 v106; 
  vec3_t outScreenPos; 
  Bounds bounds; 
  vec3_t v109; 
  vec3_t worldDir; 
  vec3_t out; 
  vec4_t v112; 
  vec2_t v113; 
  tmat33_t<vec3_t> axis; 
  vec2_t in; 
  vec2_t v116; 
  vec3_t v117; 
  vec3_t v118; 
  vec2_t v119; 

  v106 = -2i64;
  colora = (vec4_t *)color;
  memset(&v105, 0, 17);
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v100 = (float *)LocalClientGlobals;
  *(_WORD *)&rect->horzAlign = 514;
  RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
  v6 = 0;
  v7 = 0i64;
  v104 = 0i64;
  v8 = outOrg.v[2];
  v9 = outOrg.v[1];
  v10 = outOrg.v[0];
  _XMM14 = 0i64;
  do
  {
    v12 = v7;
    v13 = (__int64)&LocalClientGlobals->targets[v12];
    if ( *(_DWORD *)v13 != 2047 && ((LocalClientGlobals->targets[v12].flags & 2) == 0 || CG_JavelinADS(localClientNum)) )
    {
      clientNum = LocalClientGlobals->predictedPlayerState.clientNum;
      if ( (clientNum || (*(_BYTE *)(v13 + 92) & 4) == 0) && (clientNum != 1 || (*(_BYTE *)(v13 + 92) & 8) == 0) && (clientNum != 2 || (*(_BYTE *)(v13 + 92) & 0x10) == 0) && (clientNum != 3 || (*(_BYTE *)(v13 + 92) & 0x20) == 0) )
      {
        Entity = CG_GetEntity(localClientNum, *(_DWORD *)v13);
        if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_hud.cpp", 466, ASSERT_TYPE_ASSERT, "(targetEnt)", (const char *)&queryFormat, "targetEnt") )
          __debugbreak();
        if ( (Entity->flags & 1) != 0 )
        {
          v16 = *(_DWORD *)(v13 + 92);
          if ( (v16 & 0xC040) != 0 )
          {
            AnglesToAxis(&Entity->pose.angles, &axis);
            v16 = *(_DWORD *)(v13 + 92);
          }
          if ( (v16 & 0x4000) != 0 )
          {
            MatrixTransformVector((const vec3_t *)(v13 + 4), &axis, &out);
            v16 = *(_DWORD *)(v13 + 92);
            v17 = out.v[2];
            v18 = out.v[1];
            v19 = out.v[0];
          }
          else
          {
            v19 = *(float *)(v13 + 4);
            out.v[0] = v19;
            v18 = *(float *)(v13 + 8);
            out.v[1] = v18;
            v17 = *(float *)(v13 + 12);
            out.v[2] = v17;
          }
          if ( (v16 & 0x8000) != 0 )
          {
            v20 = CG_GetLocalClientGlobals(localClientNum);
            v21 = v20->refdef.view.axis.m[0].v[1];
            v22 = v20->refdef.view.axis.m[0].v[0];
            v23 = v20->refdef.view.axis.m[0].v[2];
            v24 = (float)((float)(v22 * axis.m[2].v[0]) + (float)(v21 * axis.m[2].v[1])) + (float)(v23 * axis.m[2].v[2]);
            v25 = v23 * v24;
            v26 = axis.m[2].v[0] - (float)(v22 * v24);
            v28 = LODWORD(axis.m[2].v[1]);
            v27 = axis.m[2].v[1] - (float)(v21 * v24);
            v29 = axis.m[2].v[2] - v25;
            *(float *)&v28 = fsqrt((float)((float)(v27 * v27) + (float)(v26 * v26)) + (float)(v29 * v29));
            _XMM3 = v28;
            __asm
            {
              vcmpless xmm0, xmm3, cs:__real@80000000
              vblendvps xmm1, xmm3, xmm13, xmm0
            }
            v33 = (float)(1.0 / *(float *)&_XMM1) * v26;
            *(float *)&v28 = (float)(1.0 / *(float *)&_XMM1) * v27;
            v34 = (float)(1.0 / *(float *)&_XMM1) * v29;
            LODWORD(v35) = COERCE_UNSIGNED_INT64(I_fclamp((float)((float)(*(float *)&v28 * v20->refdef.view.axis.m[2].v[1]) + (float)(v33 * v20->refdef.view.axis.m[2].v[0])) + (float)(v34 * v20->refdef.view.axis.m[2].v[2]), -1.0, 1.0));
            *(float *)&v28 = (float)(*(float *)&v28 * v20->refdef.view.axis.m[1].v[1]) + (float)(v33 * v20->refdef.view.axis.m[1].v[0]);
            _XMM8 = LODWORD(FLOAT_N1_0);
            I_fclamp(*(float *)&v28 + (float)(v34 * v20->refdef.view.axis.m[1].v[2]), -1.0, 1.0);
            *(float *)&v28 = acosf_0(v35) * -57.295776;
            __asm
            {
              vcmpless xmm0, xmm14, xmm6
              vblendvps xmm0, xmm8, xmm13, xmm0
            }
            v39 = *(float *)&v28 * *(float *)&_XMM0;
            v9 = outOrg.v[1];
            v10 = outOrg.v[0];
            v6 = 0;
          }
          else
          {
            v39 = 0.0;
          }
          CG_GetPoseOrigin(&Entity->pose, &outOrigin);
          v40 = v19 + outOrigin.v[0];
          v41 = v18 + outOrigin.v[1];
          v42 = v17 + outOrigin.v[2];
          worldDir.v[0] = v40 - v10;
          worldDir.v[1] = v41 - v9;
          worldDir.v[2] = (float)(v17 + outOrigin.v[2]) - v8;
          CG_WorldDirToScreenPosVirtualCentered(localClientNum, &worldDir, (vec2_t *)&outScreenPos);
          if ( *(_DWORD *)(v13 + 20) == -1 || (v6 = CG_DrawTargets_ClampScreenPosToEdges(localClientNum, (vec2_t *)&outScreenPos)) == 0 || (v43 = *(_DWORD *)(v13 + 20), v43 == -1) )
          {
            v43 = *(_DWORD *)(v13 + 16);
            if ( v43 == -1 )
              goto LABEL_100;
          }
          v44 = CG_Draw_MaterialHandleForIndex(localClientNum, v43);
          if ( !v44 )
            goto LABEL_100;
          v45 = DVARFLT_vehHudTargetSize;
          if ( !DVARFLT_vehHudTargetSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHudTargetSize") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v45);
          h = v45->current.value;
          v47 = h * 0.5;
          v112 = *colora;
          if ( !v6 || *(_DWORD *)(v13 + 20) == -1 )
          {
            if ( (*(_DWORD *)(v13 + 92) & 0x440) != 0 )
            {
              *(_OWORD *)bounds.midPoint.v = _xmm_ff7fffff000000000000000000000000;
              bounds.halfSize.v[1] = FLOAT_N3_4028235e38;
              bounds.halfSize.v[2] = FLOAT_N3_4028235e38;
              ClientDObj = Com_GetClientDObj(Entity->nextState.number, localClientNum);
              if ( *(float *)(v13 + 80) < 0.0 )
              {
                DObjGetVisibleBounds(ClientDObj, (Bounds *)(v13 + 68));
                if ( *(float *)(v13 + 80) < 0.0 )
                {
                  if ( *(float *)(v13 + 24) <= 0.0 )
                  {
LABEL_42:
                    LocalClientGlobals = (cg_t *)v100;
LABEL_100:
                    memset(&outOrigin, 0, sizeof(outOrigin));
                    v6 = 0;
                    goto LABEL_101;
                  }
                  if ( (*(_DWORD *)(v13 + 92) & 0x400) == 0 )
                  {
                    LocalClientGlobals = (cg_t *)v100;
                    goto LABEL_100;
                  }
                }
              }
              v57 = *(_DWORD *)(v13 + 92);
              if ( (v57 & 0x40) != 0 )
              {
                if ( v39 != 0.0 )
                {
                  MatrixTransformVector((const vec3_t *)(v13 + 68), &axis, &v109);
                  v109.v[0] = (float)(v40 + v109.v[0]) - v10;
                  v109.v[1] = (float)(v41 + v109.v[1]) - v9;
                  v109.v[2] = (float)(v42 + v109.v[2]) - v8;
                  if ( !CG_WorldDirToScreenPosVirtualCentered(localClientNum, &v109, &v113) )
                  {
                    LocalClientGlobals = (cg_t *)v100;
                    goto LABEL_100;
                  }
                }
                v58 = 0;
                while ( 1 )
                {
                  _XMM4 = *(unsigned int *)(v13 + 80);
                  _XMM0 = v58 & 1;
                  __asm
                  {
                    vpcmpeqd xmm2, xmm0, xmm1
                    vblendvps xmm1, xmm4, xmm3, xmm2
                  }
                  v63 = *(float *)&_XMM1 + *(float *)(v13 + 68);
                  _XMM5 = *(unsigned int *)(v13 + 84);
                  _XMM0 = v58 & 2;
                  __asm
                  {
                    vpcmpeqd xmm2, xmm0, xmm1
                    vblendvps xmm1, xmm5, xmm3, xmm2
                  }
                  v68 = *(float *)&_XMM1 + *(float *)(v13 + 72);
                  _XMM4 = *(unsigned int *)(v13 + 88);
                  _XMM0 = v58 & 4;
                  __asm
                  {
                    vpcmpeqd xmm2, xmm0, xmm1
                    vblendvps xmm1, xmm4, xmm3, xmm2
                  }
                  v73 = *(float *)&_XMM1 + *(float *)(v13 + 76);
                  *(float *)&_XMM1 = (float)((float)((float)(v63 * axis.m[0].v[1]) + (float)(v68 * axis.m[1].v[1])) + (float)(v73 * axis.m[2].v[1])) + v41;
                  *(float *)&_XMM4 = (float)((float)((float)(v63 * axis.m[0].v[2]) + (float)(v68 * axis.m[1].v[2])) + (float)(v73 * axis.m[2].v[2])) + v42;
                  v117.v[0] = (float)((float)((float)((float)(v63 * axis.m[0].v[0]) + (float)(v68 * axis.m[1].v[0])) + (float)(v73 * axis.m[2].v[0])) + v40) - outOrg.v[0];
                  v9 = outOrg.v[1];
                  v117.v[1] = *(float *)&_XMM1 - outOrg.v[1];
                  v117.v[2] = *(float *)&_XMM4 - v8;
                  if ( !CG_WorldDirToScreenPosVirtualCentered(localClientNum, &v117, (vec2_t *)&outScreenPos) )
                    goto LABEL_42;
                  if ( v39 != 0.0 )
                  {
                    in.v[0] = outScreenPos.v[0] - v113.v[0];
                    in.v[1] = outScreenPos.v[1] - v113.v[1];
                    Vec2Rotate(&in, v39 * -0.017453292, &v116);
                    outScreenPos.v[0] = v116.v[0] + v113.v[0];
                    outScreenPos.v[1] = v116.v[1] + v113.v[1];
                  }
                  Bounds_AddPoint(&bounds, &outScreenPos);
                  if ( ++v58 >= 8 )
                  {
                    _XMM6 = LODWORD(bounds.halfSize.v[1]);
                    v75 = bounds.halfSize.v[0];
                    LocalClientGlobals = (cg_t *)v100;
                    goto LABEL_66;
                  }
                }
              }
              if ( (v57 & 0x400) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_hud.cpp", 614, ASSERT_TYPE_ASSERT, "(targ->flags & TARGETFLAG_DRAW_RECT)", (const char *)&queryFormat, "targ->flags & TARGETFLAG_DRAW_RECT") )
                __debugbreak();
              v76 = *(float *)(v13 + 24);
              if ( v76 <= 0.0 )
                v76 = fsqrt((float)((float)(*(float *)(v13 + 80) * *(float *)(v13 + 80)) + (float)(*(float *)(v13 + 84) * *(float *)(v13 + 84))) + (float)(*(float *)(v13 + 88) * *(float *)(v13 + 88)));
              worldDir.v[0] = v40 - v10;
              worldDir.v[1] = v41 - v9;
              worldDir.v[2] = v42 - v8;
              CG_WorldDirToScreenPosVirtualCentered(localClientNum, &worldDir, (vec2_t *)&outScreenPos);
              LocalClientGlobals = (cg_t *)v100;
              v77 = (float)(v76 * v100[6741]) + v41;
              v78 = (float)(v76 * v100[6742]) + v42;
              v118.v[0] = (float)((float)(v76 * v100[6740]) + v40) - v10;
              v118.v[1] = v77 - v9;
              v118.v[2] = v78 - v8;
              CG_WorldDirToScreenPosVirtualCentered(localClientNum, &v118, &v119);
              v79 = LODWORD(v119.v[1]);
              *(float *)&v79 = fsqrt((float)((float)(v119.v[1] - outScreenPos.v[1]) * (float)(v119.v[1] - outScreenPos.v[1])) + (float)((float)(v119.v[0] - outScreenPos.v[0]) * (float)(v119.v[0] - outScreenPos.v[0])));
              _XMM6 = v79;
              bounds.midPoint = outScreenPos;
              v75 = *(float *)&v79;
              bounds.halfSize.v[0] = *(float *)&v79;
              bounds.halfSize.v[1] = *(float *)&v79;
              bounds.halfSize.v[2] = *(float *)&v79;
LABEL_66:
              __asm { vminss  xmm0, xmm6, xmm7 }
              v81 = *(float *)&_XMM0 * 2.0;
              v82 = *(_DWORD *)(v13 + 28);
              if ( v82 > 0 && (float)v82 > v81 && (*(_DWORD *)(v13 + 92) & 0x100) != 0 )
              {
                v9 = outOrg.v[1];
                goto LABEL_100;
              }
              if ( v44->textureCount != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_hud.cpp", 639, ASSERT_TYPE_ASSERT, "( ( material->textureCount == 1 ) )", "( material->name ) = %s", v44->name) )
                __debugbreak();
              p_name = &v44->textureTable->image->name;
              if ( !p_name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_hud.cpp", 641, ASSERT_TYPE_ASSERT, "(image)", (const char *)&queryFormat, "image") )
                __debugbreak();
              if ( *((_BYTE *)p_name + 46) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_hud.cpp", 642, ASSERT_TYPE_ASSERT, "( ( image->semantic == TS_2D ) )", "( image->name ) = %s", *p_name) )
                __debugbreak();
              if ( *((_BYTE *)p_name + 48) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_hud.cpp", 643, ASSERT_TYPE_ASSERT, "( ( image->levelCount == 1 ) )", "( image->name ) = %s", *p_name) )
                __debugbreak();
              v84 = *((unsigned __int16 *)p_name + 18);
              v85 = *((unsigned __int16 *)p_name + 19);
              v86 = *(_DWORD *)(v13 + 28);
              if ( v86 > 0 && (v88 = 0i64, *(float *)&v88 = (float)v86, v87 = v88, v81 < *(float *)&v88) || (v89 = *(_DWORD *)(v13 + 32), v89 > 0) && (v90 = 0i64, *(float *)&v90 = (float)v89, v87 = v90, v81 > *(float *)&v90) )
              {
                if ( *(float *)&_XMM6 == 0.0 )
                {
LABEL_85:
                  v9 = outOrg.v[1];
                  goto LABEL_100;
                }
                v91 = v87;
                *(float *)&v91 = *(float *)&v87 * 0.5;
                if ( v75 >= *(float *)&_XMM6 )
                {
                  bounds.halfSize.v[0] = (float)(v75 / *(float *)&_XMM6) * *(float *)&v91;
                  bounds.halfSize.v[1] = *(float *)&v87 * 0.5;
                  _XMM2 = v91;
                }
                else
                {
                  v92 = _XMM6;
                  *(float *)&v92 = (float)(*(float *)&_XMM6 / v75) * (float)(*(float *)&v87 * 0.5);
                  _XMM2 = v92;
                  bounds.halfSize.v[1] = *(float *)&v92;
                  bounds.halfSize.v[0] = *(float *)&v87 * 0.5;
                }
                __asm { vminss  xmm0, xmm2, xmm3 }
              }
              if ( v84 < v85 )
                v85 = v84;
              v96 = 0i64;
              *(float *)&v96 = (float)v85;
              _XMM0 = v96;
              __asm { vminss  xmm1, xmm0, xmm8 }
              CG_DrawScaledRect(localClientNum, rect, colora, v44, &bounds, (const targetInfo_t *)v13, *(float *)&_XMM1, v39, LocalClientGlobals->time, &v105);
              goto LABEL_85;
            }
            if ( !PipRect::CalcOverlap(&v105, localClientNum, outScreenPos.v[0] - v47, outScreenPos.v[1] - v47, h, h, rect, &v112) )
            {
              LocalClientGlobals = (cg_t *)v100;
              goto LABEL_100;
            }
            vertAlign = rect->vertAlign;
            horzAlign = rect->horzAlign;
            v53 = outScreenPos.v[1] - v47;
            v54 = outScreenPos.v[0] - v47;
            ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
            pipRect = v44;
            inOutColor = v39;
          }
          else
          {
            v48 = 0.0;
            v49 = v6 - 2;
            if ( v49 )
            {
              v50 = v49 - 1;
              if ( v50 )
              {
                if ( v50 == 1 )
                  v48 = FLOAT_270_0;
              }
              else
              {
                v48 = FLOAT_90_0;
              }
            }
            else
            {
              v48 = FLOAT_180_0;
            }
            if ( !PipRect::CalcOverlap(&v105, localClientNum, outScreenPos.v[0] - v47, outScreenPos.v[1] - v47, h, h, rect, &v112) )
              goto LABEL_42;
            vertAlign = rect->vertAlign;
            horzAlign = rect->horzAlign;
            v53 = outScreenPos.v[1] - v47;
            v54 = outScreenPos.v[0] - v47;
            ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
            pipRect = v44;
            inOutColor = v48;
          }
          CG_DrawRotatedPicWithoutSplitScreenScaling(ActivePlacement, v54, v53, h, h, horzAlign, vertAlign, inOutColor, &v112, pipRect);
          LocalClientGlobals = (cg_t *)v100;
          goto LABEL_85;
        }
      }
    }
LABEL_101:
    v7 = v104 + 1;
    v104 = v7;
    v10 = outOrg.v[0];
  }
  while ( v7 < 64 );
  memset(&outOrg, 0, sizeof(outOrg));
}

/*
==============
CG_GetTargetPos
==============
*/
bool CG_GetTargetPos(LocalClientNum_t localClientNum, int targetEntNum, vec3_t *outPos)
{
  cg_t *LocalClientGlobals; 
  int v7; 
  __int64 v8; 
  targetInfo_t *i; 
  bool result; 
  centity_t *Entity; 
  __int64 v12; 
  __int64 p_offset; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  vec3_t outOrigin; 
  __int64 v20; 
  tmat33_t<vec3_t> axis; 
  char v22; 

  v20 = -2i64;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v7 = 0;
  v8 = 0i64;
  for ( i = LocalClientGlobals->targets; i->entNum != targetEntNum; ++i )
  {
    ++v7;
    if ( ++v8 >= 64 )
      return 0;
  }
  Entity = CG_GetEntity(localClientNum, targetEntNum);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_hud.cpp", 839, ASSERT_TYPE_ASSERT, "(targetEnt)", (const char *)&queryFormat, "targetEnt") )
    __debugbreak();
  v12 = v7;
  if ( (LocalClientGlobals->targets[v12].flags & 0x4000) != 0 )
  {
    AnglesToAxis(&Entity->pose.angles, &axis);
    p_offset = (__int64)&LocalClientGlobals->targets[v12].offset;
    if ( (char *)p_offset == &v22 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
      __debugbreak();
    v14 = *(float *)(p_offset + 4);
    v15 = *(float *)(p_offset + 8);
    v16 = (float)((float)(*(float *)p_offset * axis.m[0].v[0]) + (float)(v14 * axis.m[1].v[0])) + (float)(v15 * axis.m[2].v[0]);
    v17 = (float)((float)(*(float *)p_offset * axis.m[0].v[1]) + (float)(v14 * axis.m[1].v[1])) + (float)(v15 * axis.m[2].v[1]);
    v18 = (float)((float)(*(float *)p_offset * axis.m[0].v[2]) + (float)(v14 * axis.m[1].v[2])) + (float)(v15 * axis.m[2].v[2]);
  }
  else
  {
    v16 = LocalClientGlobals->targets[v12].offset.v[0];
    v17 = LocalClientGlobals->targets[v12].offset.v[1];
    v18 = LocalClientGlobals->targets[v12].offset.v[2];
  }
  CG_GetPoseOrigin(&Entity->pose, &outOrigin);
  outPos->v[0] = v16 + outOrigin.v[0];
  outPos->v[1] = v17 + outOrigin.v[1];
  outPos->v[2] = v18 + outOrigin.v[2];
  result = 1;
  memset(&outOrigin, 0, sizeof(outOrigin));
  return result;
}

/*
==============
CG_InitVehicleReticle
==============
*/
void CG_InitVehicleReticle(LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  LocalClientGlobals->vehReticleLockOnEntNum = 2047;
  LocalClientGlobals->vehReticleOffset = 0i64;
  LocalClientGlobals->vehReticleVel = 0i64;
}

/*
==============
CG_ReticleStartLockOn
==============
*/
void CG_ReticleStartLockOn(LocalClientNum_t localClientNum, int targetEntNum, int msecDuration)
{
  cg_t *LocalClientGlobals; 
  int time; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  time = LocalClientGlobals->time;
  LocalClientGlobals->vehReticleLockOnEntNum = targetEntNum;
  LocalClientGlobals->vehReticleLockOnStartTime = time;
  LocalClientGlobals->vehReticleLockOnDuration = msecDuration;
}

/*
==============
CG_TargetsChanged
==============
*/
void CG_TargetsChanged(LocalClientNum_t localClientNum, int num)
{
  __int128 v3; 
  __int64 v4; 
  cg_t *LocalClientGlobals; 
  const char *ConfigString; 
  __int64 v7; 
  int v8; 
  const char *v9; 
  int v10; 
  int v11; 
  int v12; 
  const char *v13; 
  __int64 v14; 
  const char *v15; 
  int v16; 
  const char *v17; 
  int v18; 
  const char *v19; 
  float v20; 
  const char *v22; 
  int v23; 
  const char *v24; 
  const char *v25; 
  float v26; 
  float v27; 
  float v28; 
  const char *v29; 
  float v30; 
  const char *v31; 
  int v32; 
  int v33; 
  int v34; 
  int v35; 
  int v36; 
  int v37; 
  int v38; 
  int v39; 
  int v40; 
  int v41; 
  __int128 v42; 

  v4 = num;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  ConfigString = CL_GetConfigString(v4);
  if ( (unsigned int)(v4 - 4014) >= 0x40 )
  {
    v33 = 64;
    v32 = v4 - 4014;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_hud.cpp", 1010, ASSERT_TYPE_ASSERT, "(unsigned)( targetIndex ) < (unsigned)( 64 )", "targetIndex doesn't index IW_MAX_TARGETS\n\t%i not in [0, %i)", v32, v33) )
      __debugbreak();
  }
  v7 = 120 * v4;
  if ( *ConfigString )
  {
    v8 = *(_DWORD *)((char *)LocalClientGlobals + v7 - 68952);
    v42 = v3;
    v9 = Info_ValueForKey(ConfigString, "ent");
    if ( *v9 )
      v10 = atoi(v9);
    else
      v10 = 2047;
    v11 = 0;
    *(_DWORD *)((char *)LocalClientGlobals + v7 - 68952) = v10;
    v12 = -1;
    if ( v10 != v8 )
    {
      *(_DWORD *)((char *)LocalClientGlobals + v7 - 68856) = -1;
      *(_QWORD *)((char *)LocalClientGlobals + v7 - 68884) = 0i64;
      *(_DWORD *)((char *)LocalClientGlobals + v7 - 68876) = 0;
      *(_DWORD *)((char *)LocalClientGlobals + v7 - 68872) = -8388609;
      *(_DWORD *)((char *)LocalClientGlobals + v7 - 68868) = -8388609;
      *(_DWORD *)((char *)LocalClientGlobals + v7 - 68864) = -8388609;
    }
    v13 = Info_ValueForKey(ConfigString, "offs");
    v14 = (__int64)LocalClientGlobals + v7 - 68948;
    *(_QWORD *)v14 = 0i64;
    *(_DWORD *)(v14 + 8) = 0;
    if ( *v13 )
      j_sscanf(v13, "%f %f %f", v14, (char *)LocalClientGlobals + v7 - 68944, (char *)LocalClientGlobals + v7 - 68940);
    v15 = Info_ValueForKey(ConfigString, "mat");
    if ( *v15 )
      v16 = atoi(v15);
    else
      v16 = -1;
    *(_DWORD *)((char *)LocalClientGlobals + v7 - 68936) = v16;
    v17 = Info_ValueForKey(ConfigString, "offmat");
    if ( *v17 )
      v18 = atoi(v17);
    else
      v18 = -1;
    *(_DWORD *)((char *)LocalClientGlobals + v7 - 68932) = v18;
    v19 = Info_ValueForKey(ConfigString, "entradius");
    v20 = FLOAT_N1_0;
    if ( *v19 )
    {
      *(double *)&_XMM0 = atof(v19);
      __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
    }
    else
    {
      *(float *)&_XMM1 = FLOAT_N1_0;
    }
    *(float *)((char *)LocalClientGlobals + v7 - 68928) = *(float *)&_XMM1;
    v22 = Info_ValueForKey(ConfigString, "minsize");
    if ( *v22 )
      v23 = atoi(v22);
    else
      v23 = -1;
    *(_DWORD *)((char *)LocalClientGlobals + v7 - 68924) = v23;
    v24 = Info_ValueForKey(ConfigString, "maxsize");
    if ( *v24 )
      v12 = atoi(v24);
    *(_DWORD *)((char *)LocalClientGlobals + v7 - 68920) = v12;
    v25 = Info_ValueForKey(ConfigString, "delay");
    if ( *v25 )
    {
      j_sscanf(v25, "%i %i %i %i", &v37, &v36, &v35, &v34);
      v26 = (float)v34 * 0.001;
      v20 = (float)v37 * 0.001;
      v27 = (float)v35;
      v28 = (float)v36;
    }
    else
    {
      v26 = 0.0;
      v27 = 0.0;
      v28 = 0.0;
    }
    *(float *)((char *)LocalClientGlobals + v7 - 68916) = v20;
    *(float *)((char *)LocalClientGlobals + v7 - 68908) = v28;
    *(float *)((char *)LocalClientGlobals + v7 - 68904) = v27;
    *(float *)((char *)LocalClientGlobals + v7 - 68912) = v26;
    v29 = Info_ValueForKey(ConfigString, "color");
    *(_QWORD *)((char *)LocalClientGlobals + v7 - 68900) = 0i64;
    *(_QWORD *)((char *)LocalClientGlobals + v7 - 68892) = 0i64;
    if ( *v29 )
    {
      j_sscanf(v29, "%d %d %d %d", &v38, &v39, &v40, &v41);
      *(float *)((char *)LocalClientGlobals + v7 - 68900) = (float)v38 * 0.0039215689;
      *(float *)((char *)LocalClientGlobals + v7 - 68896) = (float)v39 * 0.0039215689;
      v30 = (float)v41 * 0.0039215689;
      *(float *)((char *)LocalClientGlobals + v7 - 68892) = (float)v40 * 0.0039215689;
      *(float *)((char *)LocalClientGlobals + v7 - 68888) = v30;
    }
    v31 = Info_ValueForKey(ConfigString, "flags");
    if ( *v31 )
      v11 = atoi(v31);
    *(_DWORD *)((char *)LocalClientGlobals + v7 - 68860) = v11;
  }
  else
  {
    *(_DWORD *)((char *)LocalClientGlobals + v7 - 68952) = 2047;
  }
}

/*
==============
PipRect::CalcOverlap
==============
*/
char PipRect::CalcOverlap(PipRect *this, LocalClientNum_t localClientNum, float x0, float y0, float w, float h, rectDef_s *rect, vec4_t *inOutColor)
{
  cg_t *LocalClientGlobals; 
  const ScreenPlacement *ActivePlacement; 
  float v12; 
  float v13; 
  int vertAlign; 
  int horzAlign; 
  const ScreenPlacement *v16; 
  float v23; 
  float v26; 
  __m128 v28; 
  float x; 
  float wa; 
  float y; 
  float v32; 
  float v33; 
  float v34; 

  v34 = y0;
  v33 = x0;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( LocalClientGlobals->GetPIPScreenCoordinates(LocalClientGlobals, &x, &y, &wa, &v32) )
  {
    if ( !this->pipRectValid )
    {
      this->pipRectValid = 1;
      ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
      ScrPlace_ApplyRectWithoutSplitScreenScaling(ActivePlacement, &x, &y, &wa, &v32, 0, 0);
      v12 = x;
      v13 = y;
      this->pipX0 = x;
      this->pipX1 = v12 + wa;
      this->pipY1 = v13 + v32;
      this->pipY0 = v13;
    }
    vertAlign = rect->vertAlign;
    horzAlign = rect->horzAlign;
    v16 = ScrPlace_GetActivePlacement(localClientNum);
    ScrPlace_ApplyRectWithoutSplitScreenScaling(v16, &v33, &v34, &w, &h, horzAlign, vertAlign);
    _XMM9 = LODWORD(this->pipX0);
    if ( (float)(v33 + w) > *(float *)&_XMM9 )
    {
      _XMM2 = LODWORD(this->pipX1);
      if ( v33 < *(float *)&_XMM2 )
      {
        _XMM0 = LODWORD(this->pipY0);
        if ( (float)(v34 + h) > *(float *)&_XMM0 )
        {
          _XMM1 = LODWORD(this->pipY1);
          if ( v34 < *(float *)&_XMM1 )
          {
            __asm
            {
              vminss  xmm1, xmm1, xmm5
              vmaxss  xmm0, xmm0, xmm3
            }
            v23 = *(float *)&_XMM1 - *(float *)&_XMM0;
            __asm
            {
              vmaxss  xmm1, xmm9, xmm4
              vminss  xmm2, xmm2, xmm7
            }
            v26 = (float)(v23 * (float)(*(float *)&_XMM2 - *(float *)&_XMM1)) / (float)(w * h);
            if ( v26 > 0.99000001 )
              return 0;
            v28 = (__m128)LODWORD(FLOAT_1_0);
            v28.m128_f32[0] = 1.0 - v26;
            *(__m128 *)inOutColor = _mm128_mul_ps(_mm_shuffle_ps(v28, v28, 0), *(__m128 *)inOutColor);
          }
        }
      }
    }
  }
  return 1;
}

