/*
==============
CG_LaserClearUnused
==============
*/

void __fastcall CG_LaserClearUnused(const LocalClientNum_t localClientNum)
{
  ?CG_LaserClearUnused@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_TrackingLaserBeamAdd
==============
*/

void __fastcall CG_TrackingLaserBeamAdd(const LocalClientNum_t localClientNum, const vec3_t *start, const vec3_t *end, const centity_t *owner, const Weapon *weapon, const bool isAlternate, const int shotIndex, const int trackedEntNum, const scr_string_t autoTargetEntTag, const vec3_t *tagOffset, const float aimSpreadAmount, const bool isSecondaryLaser)
{
  ?CG_TrackingLaserBeamAdd@@YAXW4LocalClientNum_t@@AEBTvec3_t@@1PEBUcentity_t@@AEBUWeapon@@_NHHW4scr_string_t@@1M4@Z(localClientNum, start, end, owner, weapon, isAlternate, shotIndex, trackedEntNum, autoTargetEntTag, tagOffset, aimSpreadAmount, isSecondaryLaser);
}

/*
==============
CG_LaserClearDeferredDrawPlayerRequests
==============
*/

void __fastcall CG_LaserClearDeferredDrawPlayerRequests(LocalClientNum_t localClientNum)
{
  ?CG_LaserClearDeferredDrawPlayerRequests@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_LaserBeamPreAddDObjUpdate
==============
*/

void __fastcall CG_LaserBeamPreAddDObjUpdate(LocalClientNum_t localClientNum, localEntity_s *le, const int entNum)
{
  ?CG_LaserBeamPreAddDObjUpdate@@YAXW4LocalClientNum_t@@PEAUlocalEntity_s@@H@Z(localClientNum, le, entNum);
}

/*
==============
CG_LaserDrawPlayerDeferredResult
==============
*/

bool __fastcall CG_LaserDrawPlayerDeferredResult(LocalClientNum_t localClientNum, const PlayerHandIndex hand)
{
  return ?CG_LaserDrawPlayerDeferredResult@@YA_NW4LocalClientNum_t@@W4PlayerHandIndex@@@Z(localClientNum, hand);
}

/*
==============
CG_Laser_DrawLasersCmd
==============
*/

void __fastcall CG_Laser_DrawLasersCmd(const void *const cmd)
{
  ?CG_Laser_DrawLasersCmd@@YAXQEBX@Z(cmd);
}

/*
==============
CG_LaserGetDefault
==============
*/

LaserDef *__fastcall CG_LaserGetDefault()
{
  return ?CG_LaserGetDefault@@YAPEAULaserDef@@XZ();
}

/*
==============
CG_ScriptedBeamDraw
==============
*/

void __fastcall CG_ScriptedBeamDraw(LocalClientNum_t localClientNum, localEntity_s *le)
{
  ?CG_ScriptedBeamDraw@@YAXW4LocalClientNum_t@@PEAUlocalEntity_s@@@Z(localClientNum, le);
}

/*
==============
CG_LaserDraw
==============
*/

bool __fastcall CG_LaserDraw(LocalClientNum_t localClientNum, LaserClient *laserClient, const LaserDef *laserDef, const playerState_s *ps, const vec3_t *localPlayerGunAngles, centity_t *cent, DObj *obj, const cpose_t *pose, const vec3_t *viewerPos, LaserLightEnum laserLightEnum, const Weapon *weapon, bool isAlternate, bool isPlayerView)
{
  return ?CG_LaserDraw@@YA_NW4LocalClientNum_t@@PEAULaserClient@@PEBULaserDef@@PEBUplayerState_s@@PEBTvec3_t@@PEAUcentity_t@@PEAUDObj@@PEBUcpose_t@@AEBT5@W4LaserLightEnum@@AEBUWeapon@@_N_N@Z(localClientNum, laserClient, laserDef, ps, localPlayerGunAngles, cent, obj, pose, viewerPos, laserLightEnum, weapon, isAlternate, isPlayerView);
}

/*
==============
CG_LaserDrawAll
==============
*/

void __fastcall CG_LaserDrawAll(LocalClientNum_t localClientNum, LaserCollisionWorld world)
{
  ?CG_LaserDrawAll@@YAXW4LocalClientNum_t@@W4LaserCollisionWorld@@@Z(localClientNum, world);
}

/*
==============
CG_LaserForceOnEnabled
==============
*/

bool __fastcall CG_LaserForceOnEnabled()
{
  return ?CG_LaserForceOnEnabled@@YA_NXZ();
}

/*
==============
CG_LaserBeamAdd
==============
*/

void __fastcall CG_LaserBeamAdd(const LocalClientNum_t localClientNum, const vec3_t *start, const vec3_t *end, const centity_t *owner, const Weapon *weapon, const bool isAlternate, const bool isSecondaryLaser)
{
  ?CG_LaserBeamAdd@@YAXW4LocalClientNum_t@@AEBTvec3_t@@1PEBUcentity_t@@AEBUWeapon@@_N4@Z(localClientNum, start, end, owner, weapon, isAlternate, isSecondaryLaser);
}

/*
==============
CG_LaserBeamIsWeaponValid
==============
*/

bool __fastcall CG_LaserBeamIsWeaponValid(LocalClientNum_t localClientNum, localEntity_s *le, const playerState_s *ps, const centity_t *cent)
{
  return ?CG_LaserBeamIsWeaponValid@@YA_NW4LocalClientNum_t@@PEAUlocalEntity_s@@PEBUplayerState_s@@PEBUcentity_t@@@Z(localClientNum, le, ps, cent);
}

/*
==============
CG_ScriptedLaserBeamAdd
==============
*/

void __fastcall CG_ScriptedLaserBeamAdd(const LocalClientNum_t localClientNum, const centity_t *owner, const scr_string_t ownerTag, int fxId, const int trackedEntNum, scr_string_t trackedEntTag)
{
  ?CG_ScriptedLaserBeamAdd@@YAXW4LocalClientNum_t@@PEBUcentity_t@@W4scr_string_t@@HHW43@@Z(localClientNum, owner, ownerTag, fxId, trackedEntNum, trackedEntTag);
}

/*
==============
CG_ScriptedBeamPreAddDObjUpdate
==============
*/

void __fastcall CG_ScriptedBeamPreAddDObjUpdate(LocalClientNum_t localClientNum, localEntity_s *le, const int entNum)
{
  ?CG_ScriptedBeamPreAddDObjUpdate@@YAXW4LocalClientNum_t@@PEAUlocalEntity_s@@H@Z(localClientNum, le, entNum);
}

/*
==============
CG_LaserBeamDraw
==============
*/

void __fastcall CG_LaserBeamDraw(LocalClientNum_t localClientNum, localEntity_s *le, const Weapon *weapon, bool isAlternate)
{
  ?CG_LaserBeamDraw@@YAXW4LocalClientNum_t@@PEAUlocalEntity_s@@AEBUWeapon@@_N@Z(localClientNum, le, weapon, isAlternate);
}

/*
==============
CG_LaserBeam_WhizbyPoint
==============
*/

bool __fastcall CG_LaserBeam_WhizbyPoint(LocalClientNum_t localClientNum, const vec3_t *start, const vec3_t *end, vec3_t *outPoint)
{
  return ?CG_LaserBeam_WhizbyPoint@@YA_NW4LocalClientNum_t@@AEBTvec3_t@@1AEAT2@@Z(localClientNum, start, end, outPoint);
}

/*
==============
CG_LaserResetAll
==============
*/

void __fastcall CG_LaserResetAll(LocalClientNum_t localClientNum)
{
  ?CG_LaserResetAll@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_Laser_AddDrawAllWorkers
==============
*/

void __fastcall CG_Laser_AddDrawAllWorkers(const LocalClientNum_t localClientNum, const LaserCollisionWorld world)
{
  ?CG_Laser_AddDrawAllWorkers@@YAXW4LocalClientNum_t@@W4LaserCollisionWorld@@@Z(localClientNum, world);
}

/*
==============
CG_LaserAddDeferredDrawPlayerRequest
==============
*/

void __fastcall CG_LaserAddDeferredDrawPlayerRequest(LocalClientNum_t localClientNum, const PlayerHandIndex hand, const playerState_s *ps, const vec3_t *localPlayerGunAngles, centity_t *cent, const vec3_t *viewerPos, LaserLightEnum inLaserLightEnum, const Weapon *weapon, bool isAlternate)
{
  ?CG_LaserAddDeferredDrawPlayerRequest@@YAXW4LocalClientNum_t@@W4PlayerHandIndex@@PEBUplayerState_s@@AEBTvec3_t@@PEAUcentity_t@@3W4LaserLightEnum@@AEBUWeapon@@_N@Z(localClientNum, hand, ps, localPlayerGunAngles, cent, viewerPos, inLaserLightEnum, weapon, isAlternate);
}

/*
==============
CG_LaserAdd
==============
*/

void __fastcall CG_LaserAdd(const LocalClientNum_t localClientNum, const int entnum, const team_t team)
{
  ?CG_LaserAdd@@YAXW4LocalClientNum_t@@HW4team_t@@@Z(localClientNum, entnum, team);
}

/*
==============
CG_LaserDrawPlayer
==============
*/

bool __fastcall CG_LaserDrawPlayer(LocalClientNum_t localClientNum, const playerState_s *ps, const vec3_t *localPlayerGunAngles, centity_t *cent, DObj *obj, cpose_t *pose, const vec3_t *viewerPos, LaserLightEnum inLaserLightEnum, const Weapon *weapon, bool isAlternate)
{
  return ?CG_LaserDrawPlayer@@YA_NW4LocalClientNum_t@@PEBUplayerState_s@@AEBTvec3_t@@PEAUcentity_t@@PEAUDObj@@PEAUcpose_t@@2W4LaserLightEnum@@AEBUWeapon@@_N@Z(localClientNum, ps, localPlayerGunAngles, cent, obj, pose, viewerPos, inLaserLightEnum, weapon, isAlternate);
}

/*
==============
CG_LaserShouldDeferLocalPlayerDraw
==============
*/

bool __fastcall CG_LaserShouldDeferLocalPlayerDraw()
{
  return ?CG_LaserShouldDeferLocalPlayerDraw@@YA_NXZ();
}

/*
==============
CG_LaserBeamCurveTargetIsOnTheLeft
==============
*/

bool __fastcall CG_LaserBeamCurveTargetIsOnTheLeft(localEntity_s *le, const BezierCurve *curve, const orientation_t *orient)
{
  return ?CG_LaserBeamCurveTargetIsOnTheLeft@@YA_NPEAUlocalEntity_s@@PEBUBezierCurve@@PEBUorientation_t@@@Z(le, curve, orient);
}

/*
==============
AddBeamCore
==============
*/
void AddBeamCore(LocalClientNum_t localClientNum, centity_t *cent, localEntity_s *le, const vec3_t *start, const vec3_t *end, const vec3_t *viewerPos, orientation_t *orient, const LaserDef *laserDef, const float laserRange, const BezierCurve *curve)
{
  __int64 v12; 
  float v13; 
  __int128 v14; 
  float v15; 
  float v16; 
  float v17; 
  __int128 v19; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  cg_t *LocalClientGlobals; 
  float laserLightBeginOffset; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  float v34; 
  float v35; 
  float v36; 
  unsigned int v37; 
  ParticleSystem *v38; 
  unsigned __int32 v39; 
  __int64 v40; 
  float v41; 
  __int128 v43; 
  float v44; 
  __int128 v48; 
  __m128 v; 
  __m128 v52; 
  __m128 v53; 
  __m128 v54; 
  __int128 v55; 
  __m128 v56; 
  __int128 v58; 
  float v61; 
  __int128 v63; 
  float v66; 
  Material *laserMaterial; 
  float v68; 
  float v69; 
  float v70; 
  float v71; 
  float v72; 
  float v73; 
  float v74; 
  float radius; 
  __m256i v76; 
  __m256i v77; 
  FxPostLight postLight; 
  FxBeam beam; 
  FXRegisteredDef def[2]; 
  float4 curvePoint1; 
  float4 endPos; 
  float4 startPos; 

  v12 = localClientNum;
  if ( !curve && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 1959, ASSERT_TYPE_ASSERT, "(curve)", (const char *)&queryFormat, "curve") )
    __debugbreak();
  v13 = end->v[0] - start->v[0];
  v14 = LODWORD(end->v[1]);
  v19 = v14;
  v15 = *(float *)&v14 - start->v[1];
  v16 = end->v[2];
  v17 = v16 - start->v[2];
  *(float *)&v19 = fsqrt((float)((float)(v15 * v15) + (float)(v13 * v13)) + (float)(v17 * v17));
  _XMM6 = v19;
  __asm
  {
    vcmpless xmm0, xmm6, cs:__real@80000000
    vblendvps xmm0, xmm6, xmm10, xmm0
  }
  v22 = v13 * (float)(1.0 / *(float *)&_XMM0);
  v23 = v15 * (float)(1.0 / *(float *)&_XMM0);
  v24 = v17 * (float)(1.0 / *(float *)&_XMM0);
  v25 = 0.0;
  if ( laserRange != 0.0 )
    v25 = (float)(*(float *)&v19 + laserDef->endOffsetOther) / laserRange;
  v26 = (float)((float)(fsqrt((float)((float)((float)(viewerPos->v[1] - *(float *)&v14) * (float)(viewerPos->v[1] - *(float *)&v14)) + (float)((float)(viewerPos->v[0] - end->v[0]) * (float)(viewerPos->v[0] - end->v[0]))) + (float)((float)(viewerPos->v[2] - v16) * (float)(viewerPos->v[2] - v16))) * laserDef->flarePct) * 0.0099999998) + 1.0;
  if ( v25 < 0.99900001 )
  {
    if ( laserDef->laserEndEffect.particleSystemDef )
    {
      def[0] = (FXRegisteredDef)laserDef->laserEndEffect.particleSystemDef;
      LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v12);
      FX_PlayOrientedEffect((LocalClientNum_t)v12, def, LocalClientGlobals->time, end, &orient->axis);
    }
    if ( laserDef->laserLight )
    {
      laserLightBeginOffset = laserDef->laserLightBeginOffset;
      v30 = *(float *)&v19 - laserDef->laserLightEndOffset;
      v29 = v30;
      if ( (float)(v30 - laserLightBeginOffset) < 4.0 )
      {
        v31 = (float)(v30 + laserLightBeginOffset) * 0.5;
        v29 = v31 + 2.0;
        laserLightBeginOffset = v31 - 2.0;
      }
      v32 = (float)(v22 * laserLightBeginOffset) + start->v[0];
      v33 = (float)(v23 * laserLightBeginOffset) + start->v[1];
      v34 = (float)(v22 * v29) + start->v[0];
      v35 = (float)(v23 * v29) + start->v[1];
      postLight.begin.v[2] = (float)(v24 * laserLightBeginOffset) + start->v[2];
      v36 = v26 * laserDef->laserLightRadius;
      postLight.end.v[2] = (float)(v24 * v29) + start->v[2];
      postLight.begin.v[1] = v33;
      postLight.radius = v36;
      v37 = (unsigned __int8)(int)(float)((float)(255.0 * laserDef->laserLightColor.v[0]) * laserDef->laserLightHdrColorScale.v[0]) | (((unsigned __int8)(int)(float)((float)(255.0 * laserDef->laserLightColor.v[1]) * laserDef->laserLightHdrColorScale.v[1]) | (((int)(float)((float)(255.0 * laserDef->laserLightColor.v[2]) * laserDef->laserLightHdrColorScale.v[2]) | 0xFFFFFF00) << 8)) << 8);
      postLight.material = laserDef->laserLightMaterial;
      postLight.color.packed = v37;
      postLight.begin.v[0] = v32;
      postLight.end.v[0] = v34;
      postLight.end.v[1] = v35;
      FX_PostLight_Add(&postLight);
    }
  }
  if ( laserDef->beamEffect.particleSystemDef )
  {
    if ( le->u.laser.pBeamEffect == PARTICLE_SYSTEM_INVALID_HANDLE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 2034, ASSERT_TYPE_ASSERT, "(le->u.laser.pBeamEffect)", (const char *)&queryFormat, "le->u.laser.pBeamEffect") )
      __debugbreak();
    v38 = NULL;
    v39 = 0;
    if ( g_particleSystemsGeneration[4096 * v12 + (le->u.laser.pBeamEffect & 0xFFF)].__all32 == le->u.laser.pBeamEffect )
      v39 = le->u.laser.pBeamEffect & 0xFFF;
    v40 = (v12 << 12) + v39;
    if ( g_particleSystems[0][v40] >= (ParticleSystem *)0x1000 )
      v38 = g_particleSystems[0][v40];
    if ( v38 )
    {
      v41 = start->v[0];
      HIDWORD(def[1].m_particleSystemDef) = 0;
      v43 = *(_OWORD *)&def[0].m_particleSystemDef;
      *(float *)&v43 = v41;
      _XMM4 = v43;
      v44 = end->v[0];
      __asm
      {
        vinsertps xmm4, xmm4, dword ptr [rdi+4], 10h
        vinsertps xmm4, xmm4, dword ptr [rdi+8], 20h ; ' '
      }
      *(__m128 *)&def[0].m_particleSystemDef = _XMM4;
      HIDWORD(def[1].m_particleSystemDef) = 0;
      v48 = *(_OWORD *)&def[0].m_particleSystemDef;
      *(float *)&v48 = v44;
      _XMM3 = v48;
      __asm
      {
        vinsertps xmm3, xmm3, dword ptr [rsi+4], 10h
        vinsertps xmm3, xmm3, dword ptr [rsi+8], 20h ; ' '
      }
      *(__m128 *)&def[0].m_particleSystemDef = _XMM3;
      v38->m_systemTransform.w.v = _XMM4;
      v = v38->m_systemTransform.z.v;
      endPos.v = _XMM3;
      v52 = _mm_shuffle_ps(v38->m_systemTransform.x.v, v38->m_systemTransform.y.v, 68);
      v53 = _mm_shuffle_ps(v38->m_systemTransform.x.v, v38->m_systemTransform.y.v, 238);
      v54 = _mm_shuffle_ps(v, _XMM4, 238);
      HIDWORD(def[1].m_particleSystemDef) = 0;
      v55 = *(_OWORD *)&def[0].m_particleSystemDef;
      startPos.v = _XMM4;
      v56 = _mm_shuffle_ps(v, _XMM4, 68);
      *(__m128 *)v76.m256i_i8 = _mm_shuffle_ps(v52, v56, 136);
      *(__m128 *)&v76.m256i_u64[2] = _mm_shuffle_ps(v52, v56, 221);
      *(__m128 *)v77.m256i_i8 = _mm_shuffle_ps(v53, v54, 136);
      *(__m256i *)v38->m_systemTransformTranspose.x.v.m128_f32 = v76;
      *(__m128 *)&v77.m256i_u64[2] = _mm_shuffle_ps(v53, v54, 221);
      *(__m256i *)v38->m_systemTransformTranspose.z.v.m128_f32 = v77;
      v58 = v55;
      *(float *)&v58 = curve->p1.v[0];
      _XMM3 = v58;
      __asm
      {
        vinsertps xmm3, xmm3, dword ptr [r12+10h], 10h
        vinsertps xmm3, xmm3, dword ptr [r12+14h], 20h ; ' '
      }
      v61 = curve->p2.v[0];
      *(__m128 *)&def[0].m_particleSystemDef = _XMM3;
      curvePoint1.v = _XMM3;
      HIDWORD(def[1].m_particleSystemDef) = 0;
      v63 = *(_OWORD *)&def[0].m_particleSystemDef;
      *(float *)&v63 = v61;
      _XMM3 = v63;
      __asm
      {
        vinsertps xmm3, xmm3, dword ptr [r12+1Ch], 10h
        vinsertps xmm3, xmm3, dword ptr [r12+20h], 20h ; ' '
      }
      *(_OWORD *)&def[0].m_particleSystemDef = _XMM3;
      ParticleSystem::SetBeamCurvePoints(v38, &startPos, &endPos, &curvePoint1, (const float4 *)def);
    }
  }
  else
  {
    v66 = start->v[1];
    laserMaterial = laserDef->laserMaterial;
    beam.begin.v[0] = start->v[0];
    v68 = start->v[2];
    beam.begin.v[1] = v66;
    v69 = end->v[0];
    beam.begin.v[2] = v68;
    v70 = end->v[1];
    beam.end.v[0] = v69;
    v71 = end->v[2];
    beam.end.v[1] = v70;
    v72 = laserDef->hdrColorScale.v[0] * laserDef->color.v[0];
    v73 = laserDef->hdrColorScale.v[2];
    beam.end.v[2] = v71;
    v74 = laserDef->hdrColorScale.v[1] * laserDef->color.v[1];
    beam.colors[0].v[2] = v73 * laserDef->color.v[2];
    beam.colors[1].v[2] = beam.colors[0].v[2];
    radius = laserDef->radius;
    beam.colors[1].v[3] = 1.0 - v25;
    beam.tracer.wiggleDist = radius * v26;
    beam.colors[0].v[0] = v72;
    beam.colors[0].v[1] = v74;
    beam.colors[0].v[3] = FLOAT_1_0;
    beam.colors[1].v[0] = v72;
    beam.colors[1].v[1] = v74;
    beam.radius = radius;
    *(_WORD *)&beam.type = 1;
    beam.material = laserMaterial;
    beam.segmentCount = 1;
    FX_Beam_Add(&beam);
  }
}

/*
==============
AddCore
==============
*/
char AddCore(LocalClientNum_t localClientNum, centity_t *cent, orientation_t *orient, const vec3_t *laserEndPointTraceStartPos, const vec3_t *viewerPos, const vec3_t *localPlayerGunAngles, LaserLightEnum laserLightEnum, const LaserDef *laserDef, ParticleSystemHandle *outBeamEffectHandle, ParticleSystemHandle *outEndEffectHandle, unsigned __int8 *priorityMap, bool isPlayerView, const PlayerHandIndex playerHand, bool viewCenterInAds)
{
  __int64 v16; 
  bool v17; 
  const dvar_t *v18; 
  char v19; 
  int v20; 
  int v21; 
  cg_t *v22; 
  bool v23; 
  char v24; 
  float v25; 
  float v26; 
  float v27; 
  float range; 
  int locational; 
  __int16 otherEntityNum; 
  vec3_t *v31; 
  tmat33_t<vec3_t> *p_axis; 
  float v33; 
  float v34; 
  float v35; 
  float v36; 
  float endOffsetViewmodel; 
  float v38; 
  float v39; 
  float v40; 
  const vec3_t *v41; 
  float v42; 
  float v43; 
  double v44; 
  float v45; 
  float v46; 
  float flarePct_alt; 
  const ParticleSystemDef *particleSystemDef; 
  ParticleSystemHandle v49; 
  __int16 v50; 
  unsigned int v51; 
  float v52; 
  ParticleSystem *v53; 
  __int64 v54; 
  ParticleSystemHandle *v55; 
  ParticleSystemHandle v56; 
  ParticleSystem *ParticleSystemPointerUnsafe; 
  __m128 v; 
  __m128 v63; 
  __m128 v66; 
  __m128 v67; 
  __m128 v68; 
  __m128 v69; 
  __m128 v70; 
  __m256i v71; 
  float v72; 
  float v73; 
  float radius_alt; 
  const ParticleSystemDef *v75; 
  unsigned __int32 v76; 
  ParticleSystem *v77; 
  __int64 v78; 
  ParticleSystemHandle *v79; 
  cg_t *v80; 
  ParticleSystemHandle v81; 
  ParticleSystem *v82; 
  __m128 v84; 
  __m128 v87; 
  __m128 v88; 
  __m128 v89; 
  __m128 v90; 
  __m128 v91; 
  __m256i v92; 
  float laserLightBeginOffset; 
  float v94; 
  float v95; 
  float v96; 
  float v97; 
  float v98; 
  float v99; 
  float v100; 
  float laserLightRadius_alt; 
  Material *laserLightMaterial; 
  int *skipEntities; 
  __int64 skipEntityCount; 
  int v106; 
  Physics_WorldId worldId; 
  ParticleManager *v108; 
  int v109; 
  int v110[2]; 
  cg_t *LocalClientGlobals; 
  float4 systemOrientationQuat; 
  FxBeam beam; 
  FxPostLight postLight; 
  vec3_t origin; 
  float4 curvePoint2; 
  vec3_t angles; 
  float4 startPos; 
  vec3_t *start[2]; 
  vec3_t end; 
  trace_t results; 

  *(_QWORD *)angles.v = localPlayerGunAngles;
  systemOrientationQuat.v.m128_u64[0] = (unsigned __int64)priorityMap;
  start[0] = (vec3_t *)laserEndPointTraceStartPos;
  v16 = localClientNum;
  if ( !laserDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 316, ASSERT_TYPE_ASSERT, "(laserDef)", (const char *)&queryFormat, "laserDef") )
    __debugbreak();
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 317, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( !orient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 318, ASSERT_TYPE_ASSERT, "(orient)", (const char *)&queryFormat, "orient") )
    __debugbreak();
  if ( !outBeamEffectHandle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 319, ASSERT_TYPE_ASSERT, "(outBeamEffectHandle)", (const char *)&queryFormat, "outBeamEffectHandle") )
    __debugbreak();
  if ( !outEndEffectHandle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 320, ASSERT_TYPE_ASSERT, "(outEndEffectHandle)", (const char *)&queryFormat, "outEndEffectHandle") )
    __debugbreak();
  if ( (unsigned int)playerHand >= NUM_WEAPON_HANDS )
  {
    LODWORD(skipEntities) = playerHand;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 321, ASSERT_TYPE_ASSERT, "(unsigned)( playerHand ) < (unsigned)( NUM_WEAPON_HANDS )", "playerHand doesn't index NUM_WEAPON_HANDS\n\t%i not in [0, %i)", skipEntities, 2) )
      __debugbreak();
  }
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v16);
  if ( (unsigned int)v16 >= 2 )
  {
    LODWORD(skipEntityCount) = 2;
    LODWORD(skipEntities) = v16;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", skipEntities, skipEntityCount) )
      __debugbreak();
  }
  v108 = &g_particleManager[v16];
  if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 326, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v17 = Com_GameMode_SupportsFeature(WEAPON_SLIDE);
  if ( !isPlayerView )
    goto LABEL_31;
  v18 = DCONST_DVARBOOL_bg_cameraUpdateOrderFix;
  if ( !DCONST_DVARBOOL_bg_cameraUpdateOrderFix && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_cameraUpdateOrderFix") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v18);
  if ( v18->current.enabled )
    v19 = 1;
  else
LABEL_31:
    v19 = 0;
  if ( v17 )
  {
    if ( isPlayerView )
      v20 = 4;
    else
      v20 = laserDef->clientCollision + 2;
  }
  else
  {
    v21 = 2;
    if ( v19 )
      v21 = 4;
    v20 = v21;
  }
  worldId = v20 + 3 * v16;
  v22 = CG_GetLocalClientGlobals((const LocalClientNum_t)v16);
  v106 = 1;
  v23 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&v22->predictedPlayerState.otherFlags, ACTIVE, 2u);
  if ( cent->nextState.eType == ET_ACTOR )
    v24 = v23 ^ ((cent->nextState.un.vehicleXModel & 2) != 0);
  else
    v24 = v23;
  memset_0(&results, 0, sizeof(results));
  v25 = orient->origin.v[0];
  v26 = orient->origin.v[1];
  v27 = orient->origin.v[2];
  range = laserDef->range;
  curvePoint2.v.m128_i32[0] = LODWORD(orient->origin.v[0]);
  curvePoint2.v.m128_f32[1] = v26;
  curvePoint2.v.m128_f32[2] = v27;
  if ( Com_GameMode_SupportsFeature(WEAPON_MANTLE_LADDER) || v19 || !isPlayerView )
  {
    locational = 1;
  }
  else
  {
    locational = 0;
    v106 = 0;
  }
  otherEntityNum = cent->nextState.otherEntityNum;
  v110[0] = cent->nextState.number;
  if ( otherEntityNum != 2047 )
    v110[1] = otherEntityNum;
  v31 = start[0];
  p_axis = &orient->axis;
  v33 = range * orient->axis.m[0].v[1];
  v109 = (otherEntityNum != 2047) + 1;
  end.v[0] = (float)(range * orient->axis.m[0].v[0]) + start[0]->v[0];
  v34 = range * orient->axis.m[0].v[2];
  end.v[1] = v33 + start[0]->v[1];
  end.v[2] = v34 + start[0]->v[2];
  PhysicsQuery_LegacyTraceSkipEntities(worldId, &results, start[0], &end, &bounds_origin, v110, v109, 0, 41969953, locational, (unsigned __int8 *)systemOrientationQuat.v.m128_u64[0], All);
  if ( results.startsolid )
    return 0;
  v36 = range * results.fraction;
  v35 = range * results.fraction;
  if ( isPlayerView )
    endOffsetViewmodel = laserDef->endOffsetViewmodel;
  else
    endOffsetViewmodel = laserDef->endOffsetOther;
  v38 = (float)(v36 - endOffsetViewmodel) * orient->axis.m[0].v[1];
  origin.v[0] = (float)((float)(v36 - endOffsetViewmodel) * p_axis->m[0].v[0]) + v31->v[0];
  v39 = (float)(v36 - endOffsetViewmodel) * orient->axis.m[0].v[2];
  origin.v[1] = v38 + v31->v[1];
  origin.v[2] = v39 + v31->v[2];
  if ( isPlayerView && viewCenterInAds )
  {
    v40 = CG_LaserScreenCenterFraction((const LocalClientNum_t)v16, &LocalClientGlobals->predictedPlayerState, playerHand);
    if ( v40 > THRESHOLD_TO_USE_SHOOTING_DIR )
    {
      v41 = *(const vec3_t **)angles.v;
      if ( !*(_QWORD *)angles.v && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 402, ASSERT_TYPE_ASSERT, "(localPlayerGunAngles)", (const char *)&queryFormat, "localPlayerGunAngles") )
        __debugbreak();
      AngleVectors(v41, &angles, NULL, NULL);
      v42 = viewerPos->v[1];
      v43 = viewerPos->v[2];
      *(float *)start = viewerPos->v[0];
      startPos.v.m128_f32[0] = (float)(range * angles.v[0]) + *(float *)start;
      startPos.v.m128_f32[1] = (float)(range * angles.v[1]) + v42;
      *((float *)start + 1) = v42;
      *(float *)&start[1] = v43;
      startPos.v.m128_f32[2] = (float)(range * angles.v[2]) + v43;
      PhysicsQuery_LegacyTraceSkipEntities(worldId, &results, (const vec3_t *)start, (const vec3_t *)&startPos, &bounds_origin, v110, v109, 0, 41969953, v106, (unsigned __int8 *)systemOrientationQuat.v.m128_u64[0], All);
      if ( !results.startsolid )
      {
        v44 = I_fclamp((float)(v40 - THRESHOLD_TO_USE_SHOOTING_DIR) / (float)(1.0 - THRESHOLD_TO_USE_SHOOTING_DIR), 0.0, 1.0);
        v45 = (float)(range * results.fraction) - endOffsetViewmodel;
        origin.v[0] = (float)((float)((float)((float)(v45 * angles.v[0]) + *(float *)start) - origin.v[0]) * *(float *)&v44) + origin.v[0];
        origin.v[1] = (float)((float)((float)((float)(v45 * angles.v[1]) + *((float *)start + 1)) - origin.v[1]) * *(float *)&v44) + origin.v[1];
        origin.v[2] = (float)((float)((float)((float)(v45 * angles.v[2]) + *(float *)&start[1]) - origin.v[2]) * *(float *)&v44) + origin.v[2];
        startPos.v.m128_f32[0] = (float)(v45 * angles.v[0]) + *(float *)start;
        startPos.v.m128_f32[1] = (float)(v45 * angles.v[1]) + *((float *)start + 1);
        startPos.v.m128_f32[2] = (float)(v45 * angles.v[2]) + *(float *)&start[1];
      }
    }
  }
  if ( (float)((float)((float)((float)(origin.v[1] - orient->origin.v[1]) * orient->axis.m[0].v[1]) + (float)((float)(origin.v[0] - orient->origin.v[0]) * p_axis->m[0].v[0])) + (float)((float)(origin.v[2] - orient->origin.v[2]) * orient->axis.m[0].v[2])) < 0.0 )
    return 0;
  v46 = fsqrt((float)((float)((float)(viewerPos->v[1] - origin.v[1]) * (float)(viewerPos->v[1] - origin.v[1])) + (float)((float)(viewerPos->v[0] - origin.v[0]) * (float)(viewerPos->v[0] - origin.v[0]))) + (float)((float)(viewerPos->v[2] - origin.v[2]) * (float)(viewerPos->v[2] - origin.v[2])));
  if ( v24 )
    flarePct_alt = laserDef->flarePct_alt;
  else
    flarePct_alt = laserDef->flarePct;
  particleSystemDef = laserDef->beamEffect.particleSystemDef;
  v49 = *outBeamEffectHandle;
  v50 = *outBeamEffectHandle;
  v51 = 0;
  *(_QWORD *)angles.v = v16 << 12;
  v52 = (float)((float)(flarePct_alt * v46) * 0.0099999998) + 1.0;
  if ( g_particleSystemsGeneration[4096 * v16 + (v50 & 0xFFF)].__all32 == v49 )
    v51 = v49 & 0xFFF;
  v53 = NULL;
  v54 = (v16 << 12) + v51;
  if ( g_particleSystems[0][v54] >= (ParticleSystem *)0x1000 )
    v53 = g_particleSystems[0][v54];
  if ( particleSystemDef )
  {
    if ( v53 )
    {
      if ( ParticleSystem::GetDef(v53) == particleSystemDef )
        goto LABEL_77;
      v55 = outBeamEffectHandle;
      ParticleManager::KillSystem(v108, *outBeamEffectHandle);
      *outBeamEffectHandle = PARTICLE_SYSTEM_INVALID_HANDLE;
      particleSystemDef = laserDef->beamEffect.particleSystemDef;
    }
    else
    {
      v55 = outBeamEffectHandle;
    }
    v56 = CG_AddBeamEffect(particleSystemDef, (LocalClientNum_t)v16, (const vec3_t *)&curvePoint2, &origin);
    *v55 = v56;
    ParticleSystemPointerUnsafe = Particle_GetParticleSystemPointerUnsafe((LocalClientNum_t)v16, v56);
    v53 = ParticleSystemPointerUnsafe;
    if ( ParticleSystemPointerUnsafe )
    {
      ParticleSystemPointerUnsafe->m_flags |= 0x10000000ui64;
      v25 = curvePoint2.v.m128_f32[0];
LABEL_77:
      curvePoint2.v.m128_i32[3] = 0;
      v = curvePoint2.v;
      v.m128_f32[0] = v25;
      _XMM4 = v;
      __asm
      {
        vinsertps xmm4, xmm4, xmm12, 10h
        vinsertps xmm4, xmm4, xmm13, 20h ; ' '
      }
      curvePoint2.v = _XMM4;
      curvePoint2.v.m128_i32[3] = 0;
      v63 = curvePoint2.v;
      v63.m128_f32[0] = origin.v[0];
      _XMM3 = v63;
      __asm
      {
        vinsertps xmm3, xmm3, dword ptr [rsp+308h+origin+4], 10h
        vinsertps xmm3, xmm3, dword ptr [rsp+308h+origin+8], 20h
      }
      v53->m_systemTransform.w.v = _XMM4;
      v66 = v53->m_systemTransform.z.v;
      v67 = _mm_shuffle_ps(v66, _XMM4, 238);
      curvePoint2.v = _XMM3;
      v68 = _mm_shuffle_ps(v53->m_systemTransform.x.v, v53->m_systemTransform.y.v, 68);
      v69 = _mm_shuffle_ps(v53->m_systemTransform.x.v, v53->m_systemTransform.y.v, 238);
      startPos.v = _XMM4;
      v70 = _mm_shuffle_ps(v66, _XMM4, 68);
      *(__m128 *)beam.end.v = _mm_shuffle_ps(v68, v70, 221);
      *(__m128 *)&beam.type = _mm_shuffle_ps(v68, v70, 136);
      beam.colors[0] = (vec4_t)_mm_shuffle_ps(v69, v67, 136);
      beam.colors[1] = (vec4_t)_mm_shuffle_ps(v69, v67, 221);
      v71 = *(__m256i *)beam.colors[0].v;
      *(__m256i *)v53->m_systemTransformTranspose.x.v.m128_f32 = *(__m256i *)&beam.type;
      *(__m256i *)v53->m_systemTransformTranspose.z.v.m128_f32 = v71;
      ParticleSystem::SetBeamCurvePoints(v53, &startPos, &curvePoint2, &startPos, &curvePoint2);
      AxisToQuat(&orient->axis, (vec4_t *)start);
      systemOrientationQuat.v = *(__m128 *)start;
      ParticleSystem::SetSystemOrientation(v53, &systemOrientationQuat);
      goto LABEL_88;
    }
    Com_PrintWarning(21, "WARNING: Could not allocate effect %s\n", laserDef->beamEffect.particleSystemDef->name);
  }
  else
  {
    if ( v53 )
    {
      ParticleManager::KillSystem(v108, v49);
      *outBeamEffectHandle = PARTICLE_SYSTEM_INVALID_HANDLE;
    }
    beam.type = 1;
    beam.depthHack = isPlayerView;
    if ( results.fraction > 1.0001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 504, ASSERT_TYPE_ASSERT, "(traceResults.fraction <= 1.0001f)", (const char *)&queryFormat, "traceResults.fraction <= 1.0001f") )
      __debugbreak();
    beam.end.v[0] = origin.v[0];
    beam.end.v[2] = origin.v[2];
    v72 = laserDef->hdrColorScale.v[1] * laserDef->color.v[1];
    beam.end.v[1] = origin.v[1];
    v73 = laserDef->hdrColorScale.v[0] * laserDef->color.v[0];
    beam.colors[0].v[2] = laserDef->hdrColorScale.v[2] * laserDef->color.v[2];
    beam.colors[1].v[2] = beam.colors[0].v[2];
    beam.colors[1].v[3] = 1.0 - results.fraction;
    beam.begin.v[0] = v25;
    beam.begin.v[1] = v26;
    beam.begin.v[2] = v27;
    beam.colors[0].v[0] = v73;
    beam.colors[0].v[1] = v72;
    beam.colors[0].v[3] = FLOAT_1_0;
    beam.colors[1].v[0] = v73;
    beam.colors[1].v[1] = v72;
    if ( v24 )
      radius_alt = laserDef->radius_alt;
    else
      radius_alt = laserDef->radius;
    beam.radius = radius_alt;
    beam.tracer.wiggleDist = radius_alt * v52;
    Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_PARACHUTE_IDLE|WEAPON_LADDER_AIM);
    beam.material = laserDef->laserMaterial;
    beam.segmentCount = 1;
    FX_Beam_Add(&beam);
  }
LABEL_88:
  v75 = laserDef->laserEndEffect.particleSystemDef;
  v76 = 0;
  if ( g_particleSystemsGeneration[*(_QWORD *)angles.v + (*outEndEffectHandle & 0xFFF)].__all32 == *outEndEffectHandle )
    v76 = *outEndEffectHandle & 0xFFF;
  v77 = NULL;
  v78 = *(_QWORD *)angles.v + v76;
  if ( g_particleSystems[0][v78] >= (ParticleSystem *)0x1000 )
    v77 = g_particleSystems[0][v78];
  if ( !v75 )
  {
    if ( v77 )
    {
      ParticleManager::KillSystem(v108, *outEndEffectHandle);
      *outEndEffectHandle = PARTICLE_SYSTEM_INVALID_HANDLE;
    }
    goto LABEL_104;
  }
  if ( v77 )
  {
    if ( ParticleSystem::GetDef(v77) == v75 )
      goto LABEL_100;
    v79 = outEndEffectHandle;
    ParticleManager::KillSystem(v108, *outEndEffectHandle);
    *outEndEffectHandle = PARTICLE_SYSTEM_INVALID_HANDLE;
    v75 = laserDef->laserEndEffect.particleSystemDef;
  }
  else
  {
    v79 = outEndEffectHandle;
  }
  *(_QWORD *)angles.v = v75;
  v80 = CG_GetLocalClientGlobals((const LocalClientNum_t)v16);
  v81 = FX_PlayOrientedEffect((LocalClientNum_t)v16, (const FXRegisteredDef *)&angles, v80->time, &origin, &orient->axis);
  *v79 = v81;
  v82 = Particle_GetParticleSystemPointerUnsafe((LocalClientNum_t)v16, v81);
  v77 = v82;
  if ( v82 )
  {
    v82->m_flags |= 0x10000000ui64;
LABEL_100:
    curvePoint2.v.m128_i32[3] = 0;
    v84 = curvePoint2.v;
    v84.m128_f32[0] = origin.v[0];
    _XMM3 = v84;
    __asm
    {
      vinsertps xmm3, xmm3, dword ptr [rsp+308h+origin+4], 10h
      vinsertps xmm3, xmm3, dword ptr [rsp+308h+origin+8], 20h
    }
    v77->m_systemTransform.w.v = _XMM3;
    v87 = v77->m_systemTransform.z.v;
    v88 = _mm_shuffle_ps(v87, v77->m_systemTransform.w.v, 68);
    v89 = _mm_shuffle_ps(v87, v77->m_systemTransform.w.v, 238);
    curvePoint2.v = _XMM3;
    v90 = _mm_shuffle_ps(v77->m_systemTransform.x.v, v77->m_systemTransform.y.v, 68);
    v91 = _mm_shuffle_ps(v77->m_systemTransform.x.v, v77->m_systemTransform.y.v, 238);
    *(__m128 *)beam.end.v = _mm_shuffle_ps(v90, v88, 221);
    *(__m128 *)&beam.type = _mm_shuffle_ps(v90, v88, 136);
    beam.colors[0] = (vec4_t)_mm_shuffle_ps(v91, v89, 136);
    beam.colors[1] = (vec4_t)_mm_shuffle_ps(v91, v89, 221);
    v92 = *(__m256i *)beam.colors[0].v;
    *(__m256i *)v77->m_systemTransformTranspose.x.v.m128_f32 = *(__m256i *)&beam.type;
    *(__m256i *)v77->m_systemTransformTranspose.z.v.m128_f32 = v92;
    AxisToQuat(&orient->axis, (vec4_t *)&curvePoint2);
    startPos.v = curvePoint2.v;
    ParticleSystem::SetSystemOrientation(v77, &startPos);
    goto LABEL_104;
  }
  Com_PrintWarning(21, "WARNING: Could not allocate effect %s\n", laserDef->laserEndEffect.particleSystemDef->name);
LABEL_104:
  if ( laserDef->laserLight && laserLightEnum == LASER_LIGHT_ON )
  {
    laserLightBeginOffset = laserDef->laserLightBeginOffset;
    v94 = v35 - laserDef->laserLightEndOffset;
    if ( (results.contents & 0x2004000) != 0 )
      v94 = (float)(v35 - laserDef->laserLightEndOffset) + laserDef->laserLightBodyTweak;
    if ( (float)(v94 - laserLightBeginOffset) < 4.0 )
    {
      v95 = (float)(laserLightBeginOffset + v94) * 0.5;
      v94 = v95 + 2.0;
      laserLightBeginOffset = v95 - 2.0;
    }
    v96 = (float)(laserLightBeginOffset * p_axis->m[0].v[0]) + orient->origin.v[0];
    v97 = (float)(laserLightBeginOffset * orient->axis.m[0].v[1]) + orient->origin.v[1];
    v98 = (float)(v94 * p_axis->m[0].v[0]) + orient->origin.v[0];
    v99 = (float)(v94 * orient->axis.m[0].v[1]) + orient->origin.v[1];
    v100 = v94 * orient->axis.m[0].v[2];
    postLight.begin.v[2] = (float)(laserLightBeginOffset * orient->axis.m[0].v[2]) + orient->origin.v[2];
    postLight.end.v[2] = v100 + orient->origin.v[2];
    postLight.begin.v[0] = v96;
    postLight.begin.v[1] = v97;
    postLight.end.v[0] = v98;
    postLight.end.v[1] = v99;
    if ( v24 )
      laserLightRadius_alt = laserDef->laserLightRadius_alt;
    else
      laserLightRadius_alt = laserDef->laserLightRadius;
    postLight.radius = laserLightRadius_alt * v52;
    postLight.color.packed = (unsigned __int8)(int)(float)((float)(255.0 * laserDef->laserLightColor.v[0]) * laserDef->laserLightHdrColorScale.v[0]) | (((unsigned __int8)(int)(float)((float)(255.0 * laserDef->laserLightColor.v[1]) * laserDef->laserLightHdrColorScale.v[1]) | (((int)(float)((float)(255.0 * laserDef->laserLightColor.v[2]) * laserDef->laserLightHdrColorScale.v[2]) | 0xFFFFFF00) << 8)) << 8);
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_PARACHUTE_IDLE|WEAPON_LADDER_AIM) )
      laserLightMaterial = LocalClientGlobals->laserLightMaterial;
    else
      laserLightMaterial = cgMedia.laserLightMaterial;
    if ( laserDef->laserLightMaterial )
      laserLightMaterial = laserDef->laserLightMaterial;
    postLight.material = laserLightMaterial;
    FX_PostLight_Add(&postLight);
  }
  return 1;
}

/*
==============
CG_AddBeamEffect
==============
*/
__int64 CG_AddBeamEffect(const ParticleSystemDef *pBeamEffectDef, LocalClientNum_t localClientNum, const vec3_t *start, const vec3_t *end)
{
  __int64 v4; 
  float v8; 
  __m128 v; 
  cg_t *LocalClientGlobals; 
  ParticleSystemHandle v14; 
  float v15; 
  __m128 v17; 
  ParticleSystem *ParticleSystemPointerUnsafe; 
  __int64 spawnTimeMsec; 
  float4 endPos; 
  float4 emitterPos; 
  float4 emitterOrientationQuat; 

  v4 = localClientNum;
  if ( !pBeamEffectDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 148, ASSERT_TYPE_ASSERT, "(pBeamEffectDef)", (const char *)&queryFormat, "pBeamEffectDef") )
    __debugbreak();
  if ( (unsigned int)v4 >= 2 )
  {
    LODWORD(spawnTimeMsec) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", spawnTimeMsec, 2) )
      __debugbreak();
  }
  v8 = start->v[0];
  endPos.v.m128_i32[3] = 0;
  v = endPos.v;
  v.m128_f32[0] = v8;
  _XMM3 = v;
  __asm
  {
    vinsertps xmm3, xmm3, dword ptr [rsi+4], 10h
    vinsertps xmm3, xmm3, dword ptr [rsi+8], 20h ; ' '
  }
  endPos.v = _XMM3;
  emitterPos.v = _XMM3;
  emitterOrientationQuat.v = g_unit.v;
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v4);
  v14 = ParticleManager::AddSystem(&g_particleManager[v4], (LocalClientNum_t)v4, pBeamEffectDef, &emitterPos, &emitterOrientationQuat, LocalClientGlobals->time, PARTICLE_SYSTEM_FLAG_NONE, NULL, NULL);
  if ( v14 )
  {
    v15 = end->v[0];
    endPos.v.m128_i32[3] = 0;
    v17 = endPos.v;
    v17.m128_f32[0] = v15;
    _XMM3 = v17;
    __asm
    {
      vinsertps xmm3, xmm3, dword ptr [rbp+4], 10h
      vinsertps xmm3, xmm3, dword ptr [rbp+8], 20h ; ' '
    }
    endPos.v = _XMM3;
    ParticleSystemPointerUnsafe = Particle_GetParticleSystemPointerUnsafe((LocalClientNum_t)v4, v14);
    ParticleSystem::SetBeamPos(ParticleSystemPointerUnsafe, &emitterPos, &endPos);
  }
  else
  {
    Com_PrintWarning(21, "WARNING: Could not allocate effect %s\n", pBeamEffectDef->name);
  }
  return (unsigned int)v14;
}

/*
==============
CG_AdjustLaserOrientationForViewmodel
==============
*/
void CG_AdjustLaserOrientationForViewmodel(LocalClientNum_t localClientNum, orientation_t *orientation)
{
  cg_t *LocalClientGlobals; 
  float v5; 
  float v6; 
  float v7; 
  __int128 v8; 
  __int128 v12; 
  __int128 v16; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  tmat44_t<vec4_t> out; 
  vec3_t outOrg; 
  tmat44_t<vec4_t> mtx; 
  tmat44_t<vec4_t> dst; 

  if ( !orientation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 241, ASSERT_TYPE_ASSERT, "(orientation)", (const char *)&queryFormat, "orientation") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v6 = LocalClientGlobals->refdef.view.depthHackFov.tanHalfFovX / LocalClientGlobals->refdef.view.fov.tanHalfFovX;
  v5 = v6;
  if ( v6 != 1.0 )
  {
    RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
    MatrixForViewer(&outOrg, &LocalClientGlobals->refdef.view.axis, &mtx);
    MatrixInverse44(&mtx, &dst);
    MatrixSet44(&out, &orientation->origin, &orientation->axis, 1.0);
    MatrixMultiply44(&out, &mtx, &out);
    v7 = v6 * out.m[0].v[2];
    out.m[3].v[2] = v6 * out.m[3].v[2];
    v8 = LODWORD(out.m[0].v[0]);
    *(float *)&v8 = fsqrt((float)((float)(*(float *)&v8 * *(float *)&v8) + (float)(out.m[0].v[1] * out.m[0].v[1])) + (float)(v7 * v7));
    _XMM3 = v8;
    __asm
    {
      vcmpless xmm0, xmm3, xmm7
      vblendvps xmm0, xmm3, xmm10, xmm0
    }
    out.m[0].v[0] = out.m[0].v[0] * (float)(1.0 / *(float *)&_XMM0);
    out.m[0].v[2] = v7 * (float)(1.0 / *(float *)&_XMM0);
    out.m[0].v[1] = out.m[0].v[1] * (float)(1.0 / *(float *)&_XMM0);
    v12 = LODWORD(out.m[1].v[0]);
    *(float *)&v12 = fsqrt((float)((float)(*(float *)&v12 * *(float *)&v12) + (float)(out.m[1].v[1] * out.m[1].v[1])) + (float)((float)(v5 * out.m[1].v[2]) * (float)(v5 * out.m[1].v[2])));
    _XMM3 = v12;
    __asm
    {
      vcmpless xmm0, xmm3, xmm7
      vblendvps xmm0, xmm3, xmm10, xmm0
    }
    out.m[1].v[0] = out.m[1].v[0] * (float)(1.0 / *(float *)&_XMM0);
    out.m[1].v[2] = (float)(v5 * out.m[1].v[2]) * (float)(1.0 / *(float *)&_XMM0);
    out.m[1].v[1] = out.m[1].v[1] * (float)(1.0 / *(float *)&_XMM0);
    v16 = LODWORD(out.m[2].v[0]);
    *(float *)&v16 = fsqrt((float)((float)(*(float *)&v16 * *(float *)&v16) + (float)(out.m[2].v[1] * out.m[2].v[1])) + (float)((float)(v5 * out.m[2].v[2]) * (float)(v5 * out.m[2].v[2])));
    _XMM3 = v16;
    __asm
    {
      vcmpless xmm0, xmm3, xmm7
      vblendvps xmm0, xmm3, xmm10, xmm0
    }
    out.m[2].v[0] = out.m[2].v[0] * (float)(1.0 / *(float *)&_XMM0);
    out.m[2].v[2] = (float)(v5 * out.m[2].v[2]) * (float)(1.0 / *(float *)&_XMM0);
    out.m[2].v[1] = out.m[2].v[1] * (float)(1.0 / *(float *)&_XMM0);
    MatrixMultiply44(&out, &dst, &out);
    v20 = out.m[0].v[1];
    orientation->axis.m[0].v[0] = out.m[0].v[0];
    *(float *)&_XMM0 = out.m[0].v[2];
    orientation->axis.m[0].v[1] = v20;
    v21 = out.m[1].v[0];
    orientation->axis.m[0].v[2] = *(float *)&_XMM0;
    *(float *)&_XMM0 = out.m[1].v[1];
    orientation->axis.m[1].v[0] = v21;
    v22 = out.m[1].v[2];
    orientation->axis.m[1].v[1] = *(float *)&_XMM0;
    *(float *)&_XMM0 = out.m[2].v[0];
    orientation->axis.m[1].v[2] = v22;
    v23 = out.m[2].v[1];
    orientation->axis.m[2].v[0] = *(float *)&_XMM0;
    *(float *)&_XMM0 = out.m[2].v[2];
    orientation->axis.m[2].v[1] = v23;
    v24 = out.m[3].v[0];
    orientation->axis.m[2].v[2] = *(float *)&_XMM0;
    *(float *)&_XMM0 = out.m[3].v[1];
    orientation->origin.v[0] = v24;
    orientation->origin.v[2] = out.m[3].v[2];
    orientation->origin.v[1] = *(float *)&_XMM0;
  }
}

/*
==============
CG_BeamCacheOwnerInfo
==============
*/
void CG_BeamCacheOwnerInfo(LocalClientNum_t localClientNum, localEntity_s *le, const int entNum, const bool isLocalPlayer)
{
  __int64 v4; 
  int ownerNum; 
  centity_t *Entity; 
  centity_t *v9; 
  cg_t *LocalClientGlobals; 
  const entityState_t *p_nextState; 
  const playerState_s *p_predictedPlayerState; 
  int number; 
  cg_t *v14; 
  DObj *ClientDObj; 
  cg_t *v16; 
  bool v17; 
  CgWeaponMap *v18; 
  const Weapon *ViewmodelWeapon; 
  const centity_t *v20; 

  v4 = localClientNum;
  if ( !le && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 2779, ASSERT_TYPE_ASSERT, "(le)", (const char *)&queryFormat, "le") )
    __debugbreak();
  if ( entNum == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 2780, ASSERT_TYPE_ASSERT, "(entNum != ENTITYNUM_NONE)", (const char *)&queryFormat, "entNum != ENTITYNUM_NONE") )
    __debugbreak();
  ownerNum = le->ownerNum;
  if ( ownerNum == entNum && ownerNum != 2047 )
  {
    Entity = CG_GetEntity((const LocalClientNum_t)v4, ownerNum);
    v9 = Entity;
    if ( Entity )
    {
      if ( (Entity->flags & 1) != 0 )
      {
        LOWORD(le->u.tracer.ballistics.ballisticInstance) = -258;
        LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v4);
        p_nextState = &v9->nextState;
        p_predictedPlayerState = NULL;
        number = v9->nextState.number;
        v14 = LocalClientGlobals;
        if ( number != LocalClientGlobals->predictedPlayerState.clientNum || LocalClientGlobals->renderingThirdPerson )
        {
          ClientDObj = Com_GetClientDObj(number, (LocalClientNum_t)v4);
        }
        else
        {
          p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
          if ( !LocalClientGlobals->m_weaponHand[0].viewModelDObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 2808, ASSERT_TYPE_ASSERT, "(weapHand->viewModelDObj)", (const char *)&queryFormat, "weapHand->viewModelDObj") )
            __debugbreak();
          ClientDObj = v14->m_weaponHand[0].viewModelDObj;
        }
        v16 = CG_GetLocalClientGlobals((const LocalClientNum_t)v4);
        v17 = p_predictedPlayerState && !v16->renderingThirdPerson;
        if ( !CgWeaponMap::ms_instance[v4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
          __debugbreak();
        v18 = CgWeaponMap::ms_instance[v4];
        if ( v17 )
          ViewmodelWeapon = BG_GetViewmodelWeapon(v18, p_predictedPlayerState);
        else
          ViewmodelWeapon = BG_GetWeaponForEntity(v18, &v9->nextState);
        le->u.laser.cache.isWeaponValid = memcmp_0(ViewmodelWeapon, &le->u.laser.weapon, 0x3Cui64) == 0;
        v20 = CG_BeamEntity_GetByOwner((const LocalClientNum_t)v4, v9);
        if ( v20 )
        {
          CG_GetPoseOrigin(&v20->pose, &le->u.laser.cache.beamEndPos);
        }
        else
        {
          *(_QWORD *)le->u.laser.cache.beamEndPos.v = 0i64;
          le->u.tracer.ballistics.tracerStartPos.v[1] = 0.0;
        }
        if ( ClientDObj )
        {
          CG_Utils_GetActiveWeaponBoneIndex((LocalClientNum_t)v4, ClientDObj, p_predictedPlayerState, p_nextState, WEAPON_HAND_DEFAULT, scr_const.tag_laser, &le->u.laser.cache.tagLaserIndex);
          CG_Utils_GetActiveWeaponBoneIndex((LocalClientNum_t)v4, ClientDObj, p_predictedPlayerState, p_nextState, WEAPON_HAND_DEFAULT, scr_const.tag_flash, (unsigned __int8 *)&le->u);
        }
      }
    }
  }
}

/*
==============
CG_GetBeamEntOrientation
==============
*/
char CG_GetBeamEntOrientation(LocalClientNum_t localClientNum, const centity_t *cent, const scr_string_t tag, orientation_t *outOrient)
{
  const centity_t *p_viewModelPose; 
  cg_t *LocalClientGlobals; 
  entityState_t *p_nextState; 
  int number; 
  const DObj *ClientDObj; 
  const dvar_t *v12; 
  unsigned __int8 inOutIndex; 
  int modelIndex; 

  p_viewModelPose = cent;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 2692, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( !outOrient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 2693, ASSERT_TYPE_ASSERT, "(outOrient)", (const char *)&queryFormat, "outOrient") )
    __debugbreak();
  inOutIndex = -2;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 2700, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  p_nextState = &p_viewModelPose->nextState;
  number = p_viewModelPose->nextState.number;
  if ( number != LocalClientGlobals->predictedPlayerState.clientNum || LocalClientGlobals->renderingThirdPerson )
  {
    ClientDObj = Com_GetClientDObj(number, localClientNum);
  }
  else
  {
    if ( !LocalClientGlobals->m_weaponHand[0].viewModelDObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 2706, ASSERT_TYPE_ASSERT, "(weapHand->viewModelDObj)", (const char *)&queryFormat, "weapHand->viewModelDObj") )
      __debugbreak();
    ClientDObj = LocalClientGlobals->m_weaponHand[0].viewModelDObj;
    p_viewModelPose = (const centity_t *)&LocalClientGlobals->viewModelPose;
  }
  if ( !ClientDObj )
    return 0;
  if ( !DObjGetBoneIndexInternal_53(ClientDObj, tag, &inOutIndex, &modelIndex) )
  {
    v12 = DVARBOOL_laserDebug;
    if ( !DVARBOOL_laserDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "laserDebug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    if ( v12->current.enabled )
      Com_PrintWarning(14, "Can't draw laser from ent #%i.  No \"TAG_FLASH\" or \"TAG_LASER\".\n", (unsigned int)p_nextState->number);
    return 0;
  }
  CG_DObjGetWorldBoneMatrix(&p_viewModelPose->pose, ClientDObj, inOutIndex, &outOrient->axis, &outOrient->origin);
  return 1;
}

/*
==============
CG_GetBeamOrient
==============
*/
char CG_GetBeamOrient(LocalClientNum_t localClientNum, const localEntity_s *le, const int entNum, DObj *obj, const cpose_t *pose, orientation_t *outOrient)
{
  orientation_t *v9; 
  scr_string_t attachedTag; 
  unsigned __int8 tagLaserIndex; 
  __int64 v13; 
  unsigned __int8 inOutIndex; 

  if ( !le && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 2183, ASSERT_TYPE_ASSERT, "(le)", (const char *)&queryFormat, "le") )
    __debugbreak();
  if ( (unsigned int)entNum >= 0x800 )
  {
    LODWORD(v13) = entNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 2184, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v13, 2048) )
      __debugbreak();
  }
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 2185, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 2186, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
    __debugbreak();
  v9 = outOrient;
  if ( !outOrient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 2187, ASSERT_TYPE_ASSERT, "(outOrient)", (const char *)&queryFormat, "outOrient") )
    __debugbreak();
  attachedTag = le->u.laser.attachedTag;
  if ( attachedTag )
  {
    inOutIndex = -2;
    if ( DObjGetBoneIndexInternal_53(obj, attachedTag, &inOutIndex, (int *)&outOrient) )
      goto LABEL_18;
  }
  else
  {
    tagLaserIndex = le->u.laser.cache.tagLaserIndex;
    inOutIndex = tagLaserIndex;
    if ( tagLaserIndex < 0xFEu )
      goto LABEL_19;
    tagLaserIndex = le->u.laser.cache.tagFlashIndex;
    inOutIndex = tagLaserIndex;
    if ( tagLaserIndex < 0xFEu )
      goto LABEL_19;
    if ( DObjGetBoneIndexInternal_53(obj, scr_const.tag_laser, &inOutIndex, (int *)&outOrient) || (inOutIndex = -2, DObjGetBoneIndexInternal_53(obj, scr_const.tag_flash, &inOutIndex, (int *)&outOrient)) )
    {
LABEL_18:
      tagLaserIndex = inOutIndex;
LABEL_19:
      CG_DObjGetWorldBoneMatrix(pose, obj, tagLaserIndex, &v9->axis, &v9->origin);
      return 1;
    }
    if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_laserDebug, "laserDebug") )
      Com_PrintWarning(14, "Can't draw laser from ent #%i.  No \"TAG_FLASH\" or \"TAG_LASER\".\n", (unsigned int)entNum);
  }
  return 0;
}

/*
==============
CG_GetLaserOrient
==============
*/
char CG_GetLaserOrient(LocalClientNum_t localClientNum, const playerState_s *ps, const centity_t *cent, DObj *obj, const cpose_t *pose, const Weapon *weapon, const bool isAlternate, const bool isPlayerView, const bool weaponIsDefault, orientation_t *outOrient)
{
  __int64 v10; 
  const cg_t *LocalClientGlobals; 
  unsigned int number; 
  CgWeaponMap *v16; 
  const characterInfo_t *CharacterInfo; 
  bool v18; 
  bool v19; 
  bool v20; 
  int ModelIndexForBoneIndex; 
  __int64 v23; 
  orientation_t *v24; 
  __int64 boneTag; 
  unsigned __int8 *index; 
  unsigned __int8 inOutIndex; 
  int modelIndex; 

  v10 = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !CgWeaponMap::ms_instance[v10] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  number = cent->nextState.number;
  v16 = CgWeaponMap::ms_instance[v10];
  if ( LocalClientGlobals->HasCharacterInfo((cg_t *)LocalClientGlobals, number) )
    CharacterInfo = CG_GetCharacterInfo(LocalClientGlobals, number);
  else
    CharacterInfo = NULL;
  v18 = BG_PlayerOrEntityDualWielding(v16, ps, &cent->nextState, CharacterInfo);
  v19 = isPlayerView;
  inOutIndex = -2;
  if ( !CG_Utils_GetWeaponAttachmentBoneIndex((LocalClientNum_t)v10, obj, weapon, isPlayerView, isAlternate, scr_const.tag_laser, &inOutIndex) )
  {
    v20 = weaponIsDefault;
    inOutIndex = -2;
    if ( !CG_Utils_GetWeaponBoneIndex((LocalClientNum_t)v10, obj, weapon, v19, weaponIsDefault, v18, WEAPON_HAND_DEFAULT, scr_const.tag_laser, &inOutIndex) )
    {
      inOutIndex = -2;
      if ( v18 || !CG_Utils_GetWeaponBoneIndex((LocalClientNum_t)v10, obj, weapon, v19, v20, 0, WEAPON_HAND_DEFAULT, scr_const.tag_flash, &inOutIndex) )
      {
        inOutIndex = -2;
        if ( !DObjGetBoneIndexInternal_53(obj, scr_const.tag_laser, &inOutIndex, &modelIndex) )
        {
          inOutIndex = -2;
          if ( v18 || !DObjGetBoneIndexInternal_53(obj, scr_const.tag_flash, &inOutIndex, &modelIndex) )
          {
            if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_laserDebug, "laserDebug") )
            {
              Com_PrintWarning(14, "Can't draw laser from ent #%i.  No \"TAG_FLASH\" or \"TAG_LASER\".\n", (unsigned int)cent->nextState.number);
              return 0;
            }
            return 0;
          }
        }
      }
    }
  }
  if ( !v19 && CharacterInfo )
  {
    ModelIndexForBoneIndex = DObjGetModelIndexForBoneIndex(obj, inOutIndex);
    v23 = ModelIndexForBoneIndex;
    if ( (unsigned int)ModelIndexForBoneIndex >= 0x20 )
    {
      LODWORD(index) = 32;
      LODWORD(boneTag) = ModelIndexForBoneIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 684, ASSERT_TYPE_ASSERT, "(unsigned)( modelIndex ) < (unsigned)( ( 32 ) )", "modelIndex doesn't index DOBJ_MAX_CHARACTER_SUBMODELS\n\t%i not in [0, %i)", boneTag, index) )
        __debugbreak();
    }
    if ( (unsigned int)(CharacterInfo->dobjModelTypes[v23] - 12) > 1 )
      return 0;
  }
  v24 = outOrient;
  CG_DObjGetWorldBoneMatrix(pose, obj, inOutIndex, &outOrient->axis, &outOrient->origin);
  if ( v19 )
    CG_AdjustLaserOrientationForViewmodel((LocalClientNum_t)v10, v24);
  return 1;
}

/*
==============
CG_HandleLaserFlags
==============
*/
void CG_HandleLaserFlags(LocalClientNum_t localClientNum, LaserClient *laserClient, centity_t *cent, orientation_t *orient)
{
  const dvar_t *v8; 
  __int128 unsignedInt; 
  const dvar_t *v10; 
  int integer; 
  int time; 
  int laserInterpTime; 
  cg_t *LocalClientGlobals; 
  float v15; 
  __int128 v16; 
  __int128 v17; 
  float v18; 
  int frametime; 
  unsigned __int8 flags; 
  unsigned __int8 v21; 
  __int128 v22; 
  unsigned int v25; 
  __m128 v27; 
  float v29; 
  float v30; 
  __int128 v31; 
  float v32; 
  tmat33_t<vec3_t> *p_axis; 
  unsigned __int8 v37; 
  vec4_t *p_laserInterpSourceQuat; 
  vec4_t *p_laserInterpDestQuat; 
  int v40; 
  float v41; 
  float v42; 
  float v43; 
  float v44; 
  __int128 v45; 
  float v48; 
  float v49; 
  int v50; 
  tmat33_t<vec3_t> *v51; 
  int v52; 
  double v53; 
  char v54; 
  vec3_t outOrg; 
  __int64 v56; 
  vec4_t out; 
  vec4_t result; 
  vec4_t vec; 
  vec4_t quat; 

  v56 = -2i64;
  if ( (cent->nextState.lerp.u.actor.flags & 0x1C) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 727, ASSERT_TYPE_ASSERT, "(cent->nextState.lerp.u.actor.flags & ( ( 1 << 2 ) | ( 1 << 3 ) | ( 1 << 4 ) ))", (const char *)&queryFormat, "cent->nextState.lerp.u.actor.flags & EF_ACTOR_LASER_FLAGS") )
    __debugbreak();
  v8 = DVARFLT_laserLockEyeOffset;
  if ( !DVARFLT_laserLockEyeOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "laserLockEyeOffset") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  unsignedInt = v8->current.unsignedInt;
  v10 = DVARINT_laserMaxInterpolationTime;
  if ( !DVARINT_laserMaxInterpolationTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "laserMaxInterpolationTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  integer = v10->current.integer;
  time = CG_GetLocalClientGlobals(localClientNum)->time;
  v54 = 0;
  laserInterpTime = 0;
  if ( time - laserClient->lastLaserUpdateTime > 200 )
  {
    laserClient->laserInterpTime = 0;
    laserClient->flags &= ~2u;
    v54 = 1;
  }
  laserClient->lastLaserUpdateTime = time;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
  v15 = (float)(*(float *)&unsignedInt * LocalClientGlobals->refdef.view.axis.m[2].v[0]) + outOrg.v[0];
  outOrg.v[0] = v15;
  v16 = unsignedInt;
  *(float *)&v16 = (float)(*(float *)&unsignedInt * LocalClientGlobals->refdef.view.axis.m[2].v[1]) + outOrg.v[1];
  v17 = v16;
  outOrg.v[1] = *(float *)&v16;
  v18 = (float)(*(float *)&unsignedInt * LocalClientGlobals->refdef.view.axis.m[2].v[2]) + outOrg.v[2];
  outOrg.v[2] = v18;
  frametime = LocalClientGlobals->frametime;
  flags = cent->nextState.lerp.u.actor.flags;
  if ( (flags & 4) != 0 )
  {
    if ( v54 )
    {
      AxisToQuat(&orient->axis, &laserClient->laserInterpSourceQuat);
      laserClient->laserInterpTime = 0;
      laserClient->flags |= 2u;
    }
    v21 = laserClient->flags;
    if ( (v21 & 2) != 0 )
    {
      laserInterpTime = laserClient->laserInterpTime;
    }
    else
    {
      laserClient->flags = v21 | 2;
      v22 = 0i64;
      *(float *)&v22 = (float)laserClient->laserInterpTime / (float)integer;
      _XMM1 = v22;
      __asm { vminss  xmm2, xmm1, xmm7; frac }
      QuatSlerp(&laserClient->laserInterpSourceQuat, &laserClient->laserInterpDestQuat, *(float *)&_XMM2, &laserClient->laserInterpSourceQuat);
    }
    v25 = laserInterpTime + frametime;
    laserClient->laserInterpTime = laserInterpTime + frametime;
    if ( laserInterpTime + frametime > integer )
    {
      laserClient->laserInterpTime = integer;
      v25 = integer;
    }
    v27 = _mm_cvtepi32_ps((__m128i)v25);
    v27.m128_f32[0] = v27.m128_f32[0] / _mm_cvtepi32_ps((__m128i)(unsigned int)integer).m128_f32[0];
    _XMM1 = v27;
    __asm { vminss  xmm8, xmm1, xmm7 }
    v29 = v15 - orient->origin.v[0];
    v31 = v17;
    v30 = *(float *)&v17 - orient->origin.v[1];
    v32 = v18 - orient->origin.v[2];
    *(float *)&v31 = fsqrt((float)((float)(v30 * v30) + (float)(v29 * v29)) + (float)(v32 * v32));
    _XMM3 = v31;
    __asm
    {
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm1, xmm3, xmm7, xmm0
    }
    vec.v[0] = (float)(1.0 / *(float *)&_XMM1) * v29;
    vec.v[1] = v30 * (float)(1.0 / *(float *)&_XMM1);
    vec.v[2] = v32 * (float)(1.0 / *(float *)&_XMM1);
    vectoangles((const vec3_t *)&vec, (vec3_t *)&out);
    AnglesToQuat((const vec3_t *)&out, &laserClient->laserInterpDestQuat);
    if ( *(float *)&_XMM8 == 1.0 )
    {
      QuatToAxis(&laserClient->laserInterpDestQuat, &orient->axis);
    }
    else
    {
      QuatSlerp(&laserClient->laserInterpSourceQuat, &laserClient->laserInterpDestQuat, *(float *)&_XMM8, &result);
      QuatToAxis(&result, &orient->axis);
    }
  }
  else if ( (flags & 8) != 0 )
  {
    p_axis = &orient->axis;
    AxisToQuat(&orient->axis, &out);
    v37 = laserClient->flags;
    p_laserInterpSourceQuat = &laserClient->laserInterpSourceQuat;
    p_laserInterpDestQuat = &laserClient->laserInterpDestQuat;
    if ( (v37 & 2) != 0 )
    {
      laserClient->flags = v37 & 0xFD;
      p_laserInterpSourceQuat->v[0] = p_laserInterpDestQuat->v[0];
      laserClient->laserInterpSourceQuat.v[1] = laserClient->laserInterpDestQuat.v[1];
      laserClient->laserInterpSourceQuat.v[2] = laserClient->laserInterpDestQuat.v[2];
      laserClient->laserInterpSourceQuat.v[3] = laserClient->laserInterpDestQuat.v[3];
      *p_laserInterpDestQuat = out;
      laserClient->laserInterpTime = 0;
    }
    if ( !VecNCompareCustomEpsilon(laserClient->laserInterpDestQuat.v, out.v, 0.001, 4) )
    {
      v40 = laserClient->laserInterpTime;
      p_laserInterpSourceQuat = &laserClient->laserInterpSourceQuat;
      if ( v40 )
      {
        v45 = 0i64;
        *(float *)&v45 = (float)v40 / (float)integer;
        _XMM1 = v45;
        __asm { vminss  xmm2, xmm1, cs:__real@3f800000; frac }
        QuatSlerp(&laserClient->laserInterpSourceQuat, &laserClient->laserInterpDestQuat, *(float *)&_XMM2, &result);
        *p_laserInterpSourceQuat = result;
        laserClient->laserInterpDestQuat = out;
        laserClient->laserInterpTime = 0;
      }
      else
      {
        v41 = out.v[0];
        p_laserInterpSourceQuat->v[0] = out.v[0];
        v42 = out.v[1];
        laserClient->laserInterpSourceQuat.v[1] = out.v[1];
        v43 = out.v[2];
        laserClient->laserInterpSourceQuat.v[2] = out.v[2];
        v44 = out.v[3];
        laserClient->laserInterpSourceQuat.v[3] = out.v[3];
        laserClient->laserInterpDestQuat.v[0] = v41;
        laserClient->laserInterpDestQuat.v[1] = v42;
        laserClient->laserInterpDestQuat.v[2] = v43;
        laserClient->laserInterpDestQuat.v[3] = v44;
        laserClient->laserInterpTime = integer;
      }
    }
    laserClient->laserInterpTime += frametime;
    if ( laserClient->laserInterpTime > integer )
      laserClient->laserInterpTime = integer;
    if ( (float)integer <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 864, ASSERT_TYPE_ASSERT, "(totalInterpTime > 0.f)", (const char *)&queryFormat, "totalInterpTime > 0.f") )
      __debugbreak();
    QuatSlerp(p_laserInterpSourceQuat, &laserClient->laserInterpDestQuat, (float)laserClient->laserInterpTime / (float)integer, &vec);
    QuatToAxis(&vec, p_axis);
  }
  else if ( (flags & 0x10) != 0 )
  {
    v48 = cent->nextState.lerp.u.actor.impactVector.v[1];
    v49 = cent->nextState.lerp.u.actor.impactVector.v[2];
    vec.v[0] = cent->nextState.lerp.u.actor.impactVector.v[0] - orient->origin.v[0];
    vec.v[1] = v48 - orient->origin.v[1];
    vec.v[2] = v49 - orient->origin.v[2];
    vectoangles((const vec3_t *)&vec, (vec3_t *)&out);
    AnglesToQuat((const vec3_t *)&out, &quat);
    v50 = laserClient->laserInterpTime;
    v51 = &orient->axis;
    if ( !v50 )
    {
      AxisToQuat(v51, &laserClient->laserInterpSourceQuat);
      v50 = laserClient->laserInterpTime;
    }
    v52 = frametime + v50;
    if ( v52 > 1000 )
      v52 = 1000;
    if ( v52 < 0 )
      v52 = 0;
    laserClient->laserInterpTime = v52;
    if ( 1000 == v52 )
      *(float *)&v53 = FLOAT_1_0;
    else
      v53 = I_fclamp((float)frametime / (float)(1000 - v52), 0.0, 1.0);
    QuatSlerp(&laserClient->laserInterpSourceQuat, &quat, *(float *)&v53, &result);
    QuatToAxis(&result, v51);
    laserClient->laserInterpSourceQuat = result;
  }
  memset(&outOrg, 0, sizeof(outOrg));
}

/*
==============
CG_LaserAdd
==============
*/
void CG_LaserAdd(const LocalClientNum_t localClientNum, const int entnum, const team_t team)
{
  __int64 v3; 
  int v6; 
  volatile int *v7; 
  __int64 v8; 
  __int64 v9; 
  LaserClient *v10; 
  int v11; 
  centity_t *Entity; 
  const CgWeaponMap *v13; 
  const cg_t *LocalClientGlobals; 
  CgWeaponSystem *v15; 
  const Weapon *Weapon; 
  bool v17; 
  unsigned __int8 flags; 
  unsigned __int8 v19; 
  __int64 v20; 
  __int64 v21; 

  v3 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 1228, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( g_laserCount ) ) + 0 ) )", "localClientNum doesn't index g_laserCount\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  v6 = 96;
  v7 = &g_laserCount[v3];
  if ( *(int *)v7 < 96 )
    v6 = *v7;
  if ( v6 < 0 )
  {
    LODWORD(v20) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 1236, ASSERT_TYPE_ASSERT, "( 0 ) <= ( laserCount ) && ( laserCount ) <= ( ( sizeof( *array_counter( g_lasers[localClientNum] ) ) + 0 ) )", "laserCount not in [0, ARRAY_COUNT( g_lasers[localClientNum] )]\n\t%i not in [%i, %i]", v20, 0i64, 96) )
      __debugbreak();
  }
  v8 = v6;
  if ( v6 > 0 )
  {
    v9 = 0i64;
    v10 = g_lasers[v3];
    while ( v10->entNum != entnum )
    {
      ++v9;
      ++v10;
      if ( v9 >= v8 )
        goto LABEL_13;
    }
    v10->flags &= ~4u;
    goto LABEL_21;
  }
LABEL_13:
  if ( ((unsigned __int8)v7 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&g_laserCount[v3]) )
    __debugbreak();
  v11 = _InterlockedExchangeAdd(v7, 1u);
  if ( v11 < 96 )
  {
    if ( (unsigned int)v11 >= 0x60 )
    {
      LODWORD(v21) = 96;
      LODWORD(v20) = v11;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 1278, ASSERT_TYPE_ASSERT, "(unsigned)( laserIndex ) < (unsigned)( (96) )", "laserIndex doesn't index MAX_LASERS\n\t%i not in [0, %i)", v20, v21) )
        __debugbreak();
    }
    v10 = &g_lasers[v3][v11];
    *(_QWORD *)&v10->laserInterpTime = 0i64;
    v10->flags = 0;
    *(_QWORD *)v10->beamEffect = 0i64;
    *(_QWORD *)v10->endEffect = 0i64;
LABEL_21:
    Entity = CG_GetEntity((const LocalClientNum_t)v3, entnum);
    if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 1297, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
      __debugbreak();
    if ( (Entity->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 1298, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
      __debugbreak();
    v10->entNum = entnum;
    v10->team = team;
    if ( Com_GameMode_SupportsFeature(WEAPON_BLAST_IMPACT) )
    {
      if ( Entity == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2018, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
        __debugbreak();
      if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&Entity->nextState.lerp.eFlags, GameModeFlagValues::ms_spValue, 0x13u) )
        v10->flags |= 1u;
    }
    if ( !CgWeaponMap::ms_instance[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
      __debugbreak();
    v13 = CgWeaponMap::ms_instance[v3];
    if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 1310, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v3);
    if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 1312, ASSERT_TYPE_ASSERT, "(cGameGlob)", (const char *)&queryFormat, "cGameGlob") )
      __debugbreak();
    if ( CgWeaponSystem::ms_allocatedType == WEAPONS_TYPE_NONE )
    {
      LODWORD(v21) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 530, ASSERT_TYPE_ASSERT, "(ms_allocatedType != CgWeaponsType::WEAPONS_TYPE_NONE)", "%s\n\tTrying to access the weapon system for localClientNum %d but the weapon system type is not known\n", "ms_allocatedType != CgWeaponsType::WEAPONS_TYPE_NONE", v21) )
        __debugbreak();
    }
    if ( (unsigned int)v3 >= CgWeaponSystem::ms_allocatedCount )
    {
      LODWORD(v21) = CgWeaponSystem::ms_allocatedCount;
      LODWORD(v20) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 531, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v20, v21) )
        __debugbreak();
    }
    if ( !CgWeaponSystem::ms_weaponSystemArray[v3] )
    {
      LODWORD(v21) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 532, ASSERT_TYPE_ASSERT, "(ms_weaponSystemArray[localClientNum])", "%s\n\tTrying to access unallocated weapon system for localClientNum %d\n", "ms_weaponSystemArray[localClientNum]", v21) )
        __debugbreak();
    }
    v15 = CgWeaponSystem::ms_weaponSystemArray[v3];
    if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 1314, ASSERT_TYPE_ASSERT, "(weaponSystem)", (const char *)&queryFormat, "weaponSystem") )
      __debugbreak();
    Weapon = CG_Laser_GetWeapon(Entity, LocalClientGlobals, v13);
    v17 = v15->IsWeaponWorldModelLoaded(v15, Weapon);
    flags = v10->flags;
    if ( v17 )
      v19 = flags & 0xF7;
    else
      v19 = flags | 8;
    v10->flags = v19;
  }
}

/*
==============
CG_LaserAddDeferredDrawPlayerRequest
==============
*/
void CG_LaserAddDeferredDrawPlayerRequest(LocalClientNum_t localClientNum, const PlayerHandIndex hand, const playerState_s *ps, const vec3_t *localPlayerGunAngles, centity_t *cent, const vec3_t *viewerPos, LaserLightEnum inLaserLightEnum, const Weapon *weapon, bool isAlternate)
{
  __int64 v9; 
  __int64 v11; 
  bool v13; 
  const dvar_t *v14; 
  bool v15; 
  const Weapon *ViewmodelWeapon; 
  const Weapon *v17; 
  __int64 v18; 
  __int64 v19; 
  LaserDef *outLaserDef; 

  v9 = localClientNum;
  v11 = hand;
  v13 = Com_GameMode_SupportsFeature(WEAPON_SLIDE);
  v14 = DCONST_DVARBOOL_bg_cameraUpdateOrderFix;
  v15 = v13;
  if ( !DCONST_DVARBOOL_bg_cameraUpdateOrderFix && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_cameraUpdateOrderFix") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  if ( (v15 || !v14->current.enabled) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 1422, ASSERT_TYPE_ASSERT, "(CG_LaserShouldDeferLocalPlayerDraw())", (const char *)&queryFormat, "CG_LaserShouldDeferLocalPlayerDraw()") )
    __debugbreak();
  if ( (_DWORD)v9 != s_currentDeferredLocalPlayerDrawRequestLocalClientNum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 1423, ASSERT_TYPE_ASSERT, "( localClientNum ) == ( s_currentDeferredLocalPlayerDrawRequestLocalClientNum )", "%s == %s\n\t%i, %i", "localClientNum", "s_currentDeferredLocalPlayerDrawRequestLocalClientNum", v9, s_currentDeferredLocalPlayerDrawRequestLocalClientNum) )
    __debugbreak();
  if ( (unsigned int)v11 >= 2 )
  {
    LODWORD(v19) = 2;
    LODWORD(v18) = v11;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 1424, ASSERT_TYPE_ASSERT, "(unsigned)( hand ) < (unsigned)( ( sizeof( *array_counter( s_deferredLocalPlayerDrawLayerRequests ) ) + 0 ) )", "hand doesn't index s_deferredLocalPlayerDrawLayerRequests\n\t%i not in [0, %i)", v18, v19) )
      __debugbreak();
  }
  if ( !CgWeaponMap::ms_instance[v9] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  ViewmodelWeapon = BG_GetViewmodelWeapon(CgWeaponMap::ms_instance[v9], ps);
  v17 = weapon;
  if ( memcmp_0(weapon, ViewmodelWeapon, 0x3Cui64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 1429, ASSERT_TYPE_ASSERT, "(BG_AreWeaponsEqual( weapon, BG_GetViewmodelWeapon( weaponMap, ps ) ))", (const char *)&queryFormat, "BG_AreWeaponsEqual( weapon, BG_GetViewmodelWeapon( weaponMap, ps ) )") )
    __debugbreak();
  s_deferredLocalPlayerDrawLayerRequests[v11].isValidRequest = 0;
  if ( CG_LaserDrawPlayer_CommonInternal((LocalClientNum_t)v9, ps, v17, &inLaserLightEnum, (const LaserDef **)&outLaserDef) )
  {
    s_deferredLocalPlayerDrawLayerRequests[v11].cent = cent;
    s_deferredLocalPlayerDrawLayerRequests[v11].isValidRequest = 1;
    s_deferredLocalPlayerDrawLayerRequests[v11].localClientNum = v9;
    s_deferredLocalPlayerDrawLayerRequests[v11].ps = ps;
    s_deferredLocalPlayerDrawLayerRequests[v11].localPlayerGunAngles.v[0] = localPlayerGunAngles->v[0];
    s_deferredLocalPlayerDrawLayerRequests[v11].localPlayerGunAngles.v[1] = localPlayerGunAngles->v[1];
    s_deferredLocalPlayerDrawLayerRequests[v11].localPlayerGunAngles.v[2] = localPlayerGunAngles->v[2];
    s_deferredLocalPlayerDrawLayerRequests[v11].viewOrigin.v[0] = viewerPos->v[0];
    s_deferredLocalPlayerDrawLayerRequests[v11].viewOrigin.v[1] = viewerPos->v[1];
    s_deferredLocalPlayerDrawLayerRequests[v11].viewOrigin.v[2] = viewerPos->v[2];
    s_deferredLocalPlayerDrawLayerRequests[v11].isAlternate = isAlternate;
    s_deferredLocalPlayerDrawLayerRequests[v11].laserDef = outLaserDef;
    s_deferredLocalPlayerDrawLayerRequests[v11].laserLightEnum = inLaserLightEnum;
  }
}

/*
==============
CG_LaserBeamAdd
==============
*/
void CG_LaserBeamAdd(const LocalClientNum_t localClientNum, const vec3_t *start, const vec3_t *end, const centity_t *owner, const Weapon *weapon, const bool isAlternate, const bool isSecondaryLaser)
{
  vec3_t tagOffset; 

  *(_QWORD *)&tagOffset.y = 0i64;
  tagOffset.v[0] = 0.0;
  CG_LaserBeamAddCommon(localClientNum, start, end, owner, (const scr_string_t)0, weapon, 0, isAlternate, LE_BEAM_TRACER_TYPE_FIRST, 2047, (const scr_string_t)0, &tagOffset, 0.0, isSecondaryLaser);
}

/*
==============
CG_LaserBeamAddCommon
==============
*/
void CG_LaserBeamAddCommon(const LocalClientNum_t localClientNum, const vec3_t *start, const vec3_t *end, const centity_t *owner, const scr_string_t ownerTag, const Weapon *weapon, const int fxId, const bool isAlternate, const leType_t type, const int trackedEntNum, const scr_string_t trackedEntTag, const vec3_t *tagOffset, const float aimSpreadAmount, const bool isSecondaryLaser)
{
  __int128 v14; 
  entityState_t *p_nextState; 
  localEntity_s *LaserLocalEntityByOwner; 
  leType_t v19; 
  float v20; 
  float v21; 
  CgDynamicMedia *CgDynamicMedia; 
  const ParticleSystemDef *m_particleSystemDef; 
  const LaserDef *FriendlyLaserType; 
  ParticleSystemHandle v25; 
  ParticleSystemHandle pBeamEffect; 
  const Weapon *v27; 
  scr_string_t tag_flash_2; 
  float v29; 
  const playerState_s *p_predictedPlayerState; 
  bitarray<64> *v31; 
  const characterInfo_t *CharacterInfo; 
  CgBallistics *System; 
  CgWeaponMap *Instance; 
  double Bullet; 
  int characterIndex; 
  cg_t *cgGlobals; 
  const entityState_t *entState; 
  cg_t *LocalClientGlobals; 
  bitarray<64> r_perks; 
  _BYTE v43[64]; 
  __m256i v44; 
  __m256i v45; 
  __int128 v46; 
  __int128 v47; 

  if ( !owner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 1797, ASSERT_TYPE_ASSERT, "(owner)", (const char *)&queryFormat, "owner") )
    __debugbreak();
  if ( !CG_LocalEntityTypeIsBeamTracer(type) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 1798, ASSERT_TYPE_ASSERT, "(CG_LocalEntityTypeIsBeamTracer( type ))", (const char *)&queryFormat, "CG_LocalEntityTypeIsBeamTracer( type )") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 1801, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  p_nextState = &owner->nextState;
  entState = &owner->nextState;
  LaserLocalEntityByOwner = CG_GetLaserLocalEntityByOwner(localClientNum, owner->nextState.number, type, isSecondaryLaser);
  if ( !LaserLocalEntityByOwner )
  {
    if ( type == LE_TRACKING_BEAM_TRACER_FIRST )
    {
      v19 = LE_BEAM_TRACER_TYPE_FIRST;
    }
    else
    {
      if ( type != LE_BEAM_TRACER_TYPE_FIRST )
        goto LABEL_16;
      v19 = LE_TRACKING_BEAM_TRACER_FIRST;
    }
    LaserLocalEntityByOwner = CG_GetLaserLocalEntityByOwner(localClientNum, p_nextState->number, v19, isSecondaryLaser);
  }
LABEL_16:
  BezierCurve::BezierCurve((BezierCurve *)&v43[28]);
  BezierCurve::BezierCurve((BezierCurve *)((char *)&v44.m256i_u64[1] + 4));
  memset_0(v43, 0, 0x90ui64);
  if ( LaserLocalEntityByOwner )
  {
    pBeamEffect = LaserLocalEntityByOwner->u.laser.pBeamEffect;
    *(__m256i *)v43 = *(__m256i *)&LaserLocalEntityByOwner->u.tracer.ballistics.ballisticInstance;
    *(__m256i *)&v43[32] = *(__m256i *)&LaserLocalEntityByOwner->u.laser.cache.baseCurve.p0.y;
    v44 = *(__m256i *)LaserLocalEntityByOwner->u.laser.cache.baseCurve.p3.v;
    v45 = *(__m256i *)&LaserLocalEntityByOwner->u.laser.cache.lastCurve.p1.z;
    v46 = *(_OWORD *)&LaserLocalEntityByOwner->u.laser.cache.lastTrackedEntTag;
  }
  else
  {
    v20 = end->v[1] - start->v[1];
    v21 = end->v[2] - start->v[2];
    if ( (float)((float)((float)(v20 * v20) + (float)((float)(end->v[0] - start->v[0]) * (float)(end->v[0] - start->v[0]))) + (float)(v21 * v21)) <= 0.000001 && type != LE_BEAM_SCRIPTED )
      return;
    if ( fxId )
    {
      CgDynamicMedia = CgDynamicMedia::GetCgDynamicMedia();
      m_particleSystemDef = CgDynamicMedia::GetFx(CgDynamicMedia, fxId)->m_particleSystemDef;
    }
    else
    {
      FriendlyLaserType = BG_GetFriendlyLaserType(weapon, 0, 1);
      if ( !FriendlyLaserType )
        return;
      m_particleSystemDef = FriendlyLaserType->beamEffect.particleSystemDef;
      if ( !m_particleSystemDef )
        return;
    }
    v25 = (unsigned int)CG_AddBeamEffect(m_particleSystemDef, localClientNum, start, end);
    if ( v25 == PARTICLE_SYSTEM_INVALID_HANDLE )
      return;
    LaserLocalEntityByOwner = CG_AllocLocalEntity(localClientNum);
    pBeamEffect = v25;
    if ( !LaserLocalEntityByOwner )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 1864, ASSERT_TYPE_ASSERT, "(le)", (const char *)&queryFormat, "le") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 1874, ASSERT_TYPE_SANITY, "( le )", (const char *)&queryFormat, "le") )
        __debugbreak();
    }
  }
  v47 = v14;
  if ( pBeamEffect == PARTICLE_SYSTEM_INVALID_HANDLE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 1875, ASSERT_TYPE_SANITY, "( beamEffect )", (const char *)&queryFormat, "beamEffect") )
    __debugbreak();
  LaserLocalEntityByOwner->leType = type;
  memset_0(&LaserLocalEntityByOwner->u, 0, 0x88ui64);
  memset_0(&LaserLocalEntityByOwner->u.laser.cache.lastTimeTargetWasToTheLeft, 0, 0x6Cui64);
  v27 = weapon;
  tag_flash_2 = 0;
  LaserLocalEntityByOwner->u.tracer.colors[0].v[2] = 3.4028235e38;
  *(__m256i *)&LaserLocalEntityByOwner->u.tracer.ballistics.ballisticInstance = *(__m256i *)v43;
  *(__m256i *)&LaserLocalEntityByOwner->u.laser.cache.baseCurve.p0.y = *(__m256i *)&v43[32];
  *(__m256i *)LaserLocalEntityByOwner->u.laser.cache.baseCurve.p3.v = v44;
  *(__m256i *)&LaserLocalEntityByOwner->u.laser.cache.lastCurve.p1.z = v45;
  *(_OWORD *)&LaserLocalEntityByOwner->u.laser.cache.lastTrackedEntTag = v46;
  v29 = 0.0;
  if ( weapon->weaponIdx && BG_IsBeamWeapon(weapon, isAlternate) )
  {
    characterIndex = p_nextState->number;
    p_predictedPlayerState = NULL;
    v31 = NULL;
    cgGlobals = CG_GetLocalClientGlobals(localClientNum);
    if ( !cgGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 1733, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    if ( cgGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 1736, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( characterIndex == cgGlobals->predictedPlayerState.clientNum )
    {
      p_predictedPlayerState = &cgGlobals->predictedPlayerState;
    }
    else
    {
      CharacterInfo = CG_GetCharacterInfo(cgGlobals, characterIndex);
      if ( CharacterInfo && CharacterInfo->infoValid )
        v31 = (bitarray<64> *)CharacterInfo;
    }
    if ( p_predictedPlayerState )
    {
      r_perks = p_predictedPlayerState->perks;
    }
    else if ( v31 )
    {
      r_perks = v31[347];
    }
    else
    {
      r_perks = 0i64;
    }
    System = CgBallistics::GetSystem(localClientNum);
    Instance = CgWeaponMap::GetInstance(localClientNum);
    p_nextState = (entityState_t *)entState;
    Bullet = BG_GetBulletRange<CgBallisticInstance>(Instance, System, p_predictedPlayerState, entState, &r_perks, weapon, isAlternate);
    v27 = weapon;
    v29 = *(float *)&Bullet;
  }
  LaserLocalEntityByOwner->ownerNum = p_nextState->number;
  *(__m256i *)&LaserLocalEntityByOwner->u.laser.weapon.weaponIdx = *(__m256i *)&v27->weaponIdx;
  *(_OWORD *)&LaserLocalEntityByOwner->u.laser.weapon.attachmentVariationIndices[5] = *(_OWORD *)&v27->attachmentVariationIndices[5];
  *(double *)&LaserLocalEntityByOwner->u.laser.weapon.attachmentVariationIndices[21] = *(double *)&v27->attachmentVariationIndices[21];
  *(_DWORD *)&LaserLocalEntityByOwner->u.laser.weapon.weaponCamo = *(_DWORD *)&v27->weaponCamo;
  LaserLocalEntityByOwner->u.laser.isAlternate = isAlternate;
  LaserLocalEntityByOwner->u.tracer.colors[3].v[1] = v29;
  LaserLocalEntityByOwner->u.laser.isClientEmitter = p_nextState->number == LocalClientGlobals->predictedPlayerState.clientNum;
  LaserLocalEntityByOwner->u.laser.isSecondaryLaser = isSecondaryLaser;
  LaserLocalEntityByOwner->addTime = LocalClientGlobals->time;
  LaserLocalEntityByOwner->endTime = 0x7FFFFFFF;
  LaserLocalEntityByOwner->pos.trBase.v[0] = start->v[0];
  LaserLocalEntityByOwner->pos.trBase.v[1] = start->v[1];
  LaserLocalEntityByOwner->pos.trBase.v[2] = start->v[2];
  LaserLocalEntityByOwner->pos.trDelta.v[0] = end->v[0];
  LaserLocalEntityByOwner->pos.trDelta.v[1] = end->v[1];
  LaserLocalEntityByOwner->pos.trDelta.v[2] = end->v[2];
  if ( ((LODWORD(LaserLocalEntityByOwner->pos.trBase.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(LaserLocalEntityByOwner->pos.trBase.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(LaserLocalEntityByOwner->pos.trBase.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 1908, ASSERT_TYPE_SANITY, "( !IS_NAN( ( le->pos.trBase )[0] ) && !IS_NAN( ( le->pos.trBase )[1] ) && !IS_NAN( ( le->pos.trBase )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( le->pos.trBase )[0] ) && !IS_NAN( ( le->pos.trBase )[1] ) && !IS_NAN( ( le->pos.trBase )[2] )") )
    __debugbreak();
  if ( ((LODWORD(LaserLocalEntityByOwner->pos.trDelta.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(LaserLocalEntityByOwner->pos.trDelta.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(LaserLocalEntityByOwner->pos.trDelta.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 1909, ASSERT_TYPE_SANITY, "( !IS_NAN( ( le->pos.trDelta )[0] ) && !IS_NAN( ( le->pos.trDelta )[1] ) && !IS_NAN( ( le->pos.trDelta )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( le->pos.trDelta )[0] ) && !IS_NAN( ( le->pos.trDelta )[1] ) && !IS_NAN( ( le->pos.trDelta )[2] )") )
    __debugbreak();
  LaserLocalEntityByOwner->u.laser.trackedEntNum = trackedEntNum;
  LaserLocalEntityByOwner->u.laser.trackedEntTag = trackedEntTag;
  LaserLocalEntityByOwner->u.laser.pBeamEffect = pBeamEffect;
  if ( isSecondaryLaser )
    tag_flash_2 = scr_const.tag_flash_2;
  LaserLocalEntityByOwner->u.laser.attachedTag = tag_flash_2;
  LaserLocalEntityByOwner->u.tracer.colors[1].xyz = *tagOffset;
  LaserLocalEntityByOwner->u.laser.ownerTag = ownerTag;
  LaserLocalEntityByOwner->u.tracer.colors[3].v[0] = aimSpreadAmount;
}

/*
==============
CG_LaserBeamCurveInterpolate
==============
*/
void CG_LaserBeamCurveInterpolate(const BezierCurve *baseCurve, const BezierCurve *targetCurve, const float interpRate, BezierCurve *outCurve)
{
  float v4; 
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v21; 
  float v22; 
  float v23; 

  v4 = baseCurve->p1.v[0] - baseCurve->p0.v[0];
  v5 = targetCurve->p0.v[0];
  v6 = targetCurve->p0.v[1];
  v7 = targetCurve->p1.v[1];
  v8 = targetCurve->p0.v[2];
  v9 = targetCurve->p1.v[0];
  v10 = targetCurve->p1.v[2];
  v11 = baseCurve->p1.v[1] - baseCurve->p0.v[1];
  v12 = baseCurve->p1.v[2] - baseCurve->p0.v[2];
  v13 = targetCurve->p2.v[0];
  v14 = targetCurve->p3.v[0];
  v15 = targetCurve->p2.v[1];
  v16 = targetCurve->p3.v[1];
  v17 = targetCurve->p3.v[2];
  v21 = baseCurve->p2.v[0] - baseCurve->p3.v[0];
  v22 = baseCurve->p2.v[1] - baseCurve->p3.v[1];
  v23 = baseCurve->p2.v[2] - baseCurve->p3.v[2];
  v18 = targetCurve->p2.v[2];
  outCurve->p0.v[0] = targetCurve->p0.v[0];
  *(_QWORD *)&outCurve->p0.y = *(_QWORD *)&targetCurve->p0.y;
  outCurve->p1.v[0] = (float)((float)((float)((float)(v9 - v5) - v4) * interpRate) + v4) + v5;
  outCurve->p1.v[1] = (float)((float)((float)((float)(v7 - v6) - v11) * interpRate) + v11) + outCurve->p0.v[1];
  outCurve->p1.v[2] = (float)((float)((float)((float)(v10 - v8) - v12) * interpRate) + v12) + outCurve->p0.v[2];
  v19 = (float)((float)(targetCurve->p3.v[0] - baseCurve->p3.v[0]) * interpRate) + baseCurve->p3.v[0];
  outCurve->p3.v[0] = v19;
  outCurve->p3.v[1] = (float)((float)(targetCurve->p3.v[1] - baseCurve->p3.v[1]) * interpRate) + baseCurve->p3.v[1];
  outCurve->p3.v[2] = (float)((float)(targetCurve->p3.v[2] - baseCurve->p3.v[2]) * interpRate) + baseCurve->p3.v[2];
  outCurve->p2.v[0] = (float)((float)((float)((float)(v13 - v14) - v21) * interpRate) + v21) + v19;
  outCurve->p2.v[1] = (float)((float)((float)((float)(v15 - v16) - v22) * interpRate) + v22) + outCurve->p3.v[1];
  outCurve->p2.v[2] = (float)((float)((float)((float)(v18 - v17) - v23) * interpRate) + v23) + outCurve->p3.v[2];
}

/*
==============
CG_LaserBeamCurveTargetIsOnTheLeft
==============
*/
bool CG_LaserBeamCurveTargetIsOnTheLeft(localEntity_s *le, const BezierCurve *curve, const orientation_t *orient)
{
  if ( !le && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 2233, ASSERT_TYPE_ASSERT, "(le)", (const char *)&queryFormat, "le") )
    __debugbreak();
  return le->u.laser.trackedEntNum == 2047 || (float)((float)((float)((float)(curve->p3.v[1] - curve->p0.v[1]) * orient->axis.m[1].v[1]) + (float)((float)(curve->p3.v[0] - curve->p0.v[0]) * orient->axis.m[1].v[0])) + (float)((float)(curve->p3.v[2] - curve->p0.v[2]) * orient->axis.m[1].v[2])) >= 0.0;
}

/*
==============
CG_LaserBeamCurveUpdate
==============
*/
void CG_LaserBeamCurveUpdate(const LocalClientNum_t localClientNum, localEntity_s *le, const orientation_t *orient, const float laserRange, const vec3_t *intendedBeamEnd, const int attackerEntNum, const int targetEntNum, BezierCurve *outActualCurve)
{
  cg_t *LocalClientGlobals; 
  int clientNum; 
  int time; 
  float v15; 
  CgHandler *Handler; 
  bool Path; 
  float v18; 
  float v19; 
  const dvar_t *v20; 
  int ownerNum; 
  CgHandler *v22; 
  int v23; 
  __int32 v24; 
  double v25; 
  char v26; 
  int i; 
  int curveType; 
  float v29; 
  CgHandler *v30; 
  int v31; 
  CgHandler *v32; 
  int v33; 
  scr_string_t trackedEntTag; 
  __int128 v35; 
  float v36; 
  float v37; 
  float v38; 
  float v39; 
  __int128 v40; 
  const dvar_t *v41; 
  int v42; 
  const dvar_t *v43; 
  float value; 
  const dvar_t *v45; 
  float v47; 
  float v49; 
  double v50; 
  int trackedEntNum; 
  bool v52; 
  int interpStartTime; 
  BezierCurve *p_baseCurve; 
  __m256i v55; 
  __int128 v56; 
  __int64 v57; 
  __int128 v58; 
  bool v59; 
  char v60; 
  int v61; 
  int v62; 
  cg_t *v63; 
  vec3_t outCollisionPos; 
  BezierCurve curve; 
  BezierCurve outCurve; 

  if ( !le && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 2336, ASSERT_TYPE_ASSERT, "(le)", (const char *)&queryFormat, "le") )
    __debugbreak();
  if ( !orient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 2337, ASSERT_TYPE_ASSERT, "(orient)", (const char *)&queryFormat, "orient") )
    __debugbreak();
  if ( !outActualCurve && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 2338, ASSERT_TYPE_ASSERT, "(outActualCurve)", (const char *)&queryFormat, "outActualCurve") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v63 = LocalClientGlobals;
  clientNum = LocalClientGlobals->predictedPlayerState.clientNum;
  time = LocalClientGlobals->time;
  v62 = time;
  if ( attackerEntNum == clientNum )
  {
    time -= LocalClientGlobals->predictedPlayerState.deltaTime;
    v62 = time;
  }
  v61 = 1;
  v59 = 0;
  BezierCurve::BezierCurve(&curve);
  v15 = le->u.tracer.colors[3].v[0];
  Handler = CgHandler::getHandler(localClientNum);
  Path = BG_SplineTracer_FindPath(Handler, (Physics_WorldId)(3 * localClientNum + 2), attackerEntNum, targetEntNum, orient, intendedBeamEnd, v15, 1, BOOL_VALUE, 0, 0.0, &curve);
  if ( attackerEntNum != clientNum || (float)((float)v63->frametime * 0.001) <= 0.001 || (v18 = le->u.tracer.colors[0].v[2], v18 == 3.4028235e38) )
    v19 = 0.0;
  else
    v19 = COERCE_FLOAT(COERCE_UNSIGNED_INT(v63->predictedPlayerState.viewangles.v[1] - v18) & _xmm) / (float)((float)v63->frametime * 0.001);
  v20 = DCONST_DVARFLT_splinetracer_noCollisionPathSearchMaxAngularVelocity;
  if ( !DCONST_DVARFLT_splinetracer_noCollisionPathSearchMaxAngularVelocity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "splinetracer_noCollisionPathSearchMaxAngularVelocity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v20);
  if ( attackerEntNum == clientNum && Path && v19 < v20->current.value )
  {
    ownerNum = le->ownerNum;
    v22 = CgHandler::getHandler(localClientNum);
    v23 = ownerNum;
    v24 = 3 * localClientNum + 2;
    if ( BG_SplineTracer_HasCollisionOnPath(v22, (Physics_WorldId)v24, v23, targetEntNum, 1, &curve, &outCollisionPos) )
    {
      v25 = BG_SplineTracer_CalculateExtremeCurveMultiplier(fsqrt((float)((float)((float)(orient->origin.v[1] - outCollisionPos.v[1]) * (float)(orient->origin.v[1] - outCollisionPos.v[1])) + (float)((float)(orient->origin.v[0] - outCollisionPos.v[0]) * (float)(orient->origin.v[0] - outCollisionPos.v[0]))) + (float)((float)(orient->origin.v[2] - outCollisionPos.v[2]) * (float)(orient->origin.v[2] - outCollisionPos.v[2]))));
      BezierCurve::BezierCurve(&outCurve);
      v26 = 0;
      v60 = 0;
      for ( i = 0; i < 2; ++i )
      {
        if ( v26 )
          break;
        curveType = 2;
        while ( 1 )
        {
          v29 = le->u.tracer.colors[3].v[0];
          v30 = CgHandler::getHandler(localClientNum);
          BG_SplineTracer_FindPath(v30, (Physics_WorldId)v24, attackerEntNum, targetEntNum, orient, intendedBeamEnd, v29, 1, (const SplineTracerCurveType)curveType, i > 0, *(const float *)&v25, &outCurve);
          v31 = le->ownerNum;
          v32 = CgHandler::getHandler(localClientNum);
          v33 = v31;
          v24 = 3 * localClientNum + 2;
          if ( !BG_SplineTracer_HasCollisionOnPath(v32, (Physics_WorldId)v24, v33, targetEntNum, 0, &outCurve, &outCollisionPos) )
            break;
          if ( ++curveType >= 6 )
          {
            v26 = v60;
            goto LABEL_31;
          }
        }
        v26 = 1;
        v61 = curveType;
        curve = outCurve;
        v60 = 1;
        v59 = i > 0;
LABEL_31:
        ;
      }
      time = v62;
    }
  }
  if ( !orient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 2294, ASSERT_TYPE_ASSERT, "(orient)", (const char *)&queryFormat, "orient") )
    __debugbreak();
  trackedEntTag = 0;
  if ( time - le->u.laser.cache.lastRenderTime > 100 )
  {
    le->u.laser.cache.interpStartTime = time;
    *(_QWORD *)&le->u.laser.cache.lastTrackedEntNum = 2047i64;
    le->u.laser.cache.lastTimeTargetWasToTheLeft = 0;
    le->u.tracer.ballistics.tracerStartPos.v[2] = 0.0;
    le->u.laser.cache.lastCurveWasExtreme = 0;
    le->u.tracer.colors[0].v[2] = 3.4028235e38;
    if ( le->u.laser.trackedEntNum == 2047 )
    {
      v35 = *(_OWORD *)&curve.p2.z;
      *(__m256i *)le->u.laser.cache.baseCurve.p0.v = *(__m256i *)curve.p0.v;
      *(_OWORD *)&le->u.laser.cache.baseCurve.p2.z = v35;
    }
    else
    {
      v36 = curve.p0.v[0];
      v37 = curve.p0.v[1];
      v38 = curve.p0.v[2];
      le->u.tracer.ballistics.startPos.v[2] = curve.p0.v[0];
      le->u.tracer.ballistics.simStartPos.v[0] = v37;
      le->u.tracer.ballistics.simStartPos.v[1] = v38;
      le->u.tracer.ballistics.simStartPos.v[2] = v36;
      le->u.tracer.ballistics.simFinishPos.v[0] = v37;
      le->u.tracer.ballistics.simFinishPos.v[1] = v38;
      v39 = (float)(laserRange * orient->axis.m[0].v[0]) + v36;
      le->u.tracer.ballistics.lastDir.v[2] = v39;
      le->u.laser.cache.baseCurve.p3.v[1] = (float)(laserRange * orient->axis.m[0].v[1]) + v37;
      le->u.laser.cache.baseCurve.p3.v[2] = (float)(laserRange * orient->axis.m[0].v[2]) + v38;
      le->u.tracer.ballistics.simFinishPos.v[2] = v39;
      LODWORD(le->u.tracer.ballistics.lastDir.v[0]) = le->u.tracer.ballistics.simStartTime;
      LODWORD(le->u.tracer.ballistics.lastDir.v[1]) = le->u.tracer.ballistics.simFinishTime;
    }
    v40 = *(_OWORD *)&le->u.laser.cache.baseCurve.p2.z;
    *(__m256i *)le->u.laser.cache.lastCurve.p0.v = *(__m256i *)le->u.laser.cache.baseCurve.p0.v;
    *(_OWORD *)&le->u.laser.cache.lastCurve.p2.z = v40;
  }
  v41 = DCONST_DVARFLT_splinetracer_catchUpTime;
  if ( !DCONST_DVARFLT_splinetracer_catchUpTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "splinetracer_catchUpTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v41);
  v42 = (int)(float)(v41->current.value * 1000.0);
  if ( v42 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 2420, ASSERT_TYPE_ASSERT, "(catchUpTime > 0)", (const char *)&queryFormat, "catchUpTime > 0") )
    __debugbreak();
  v43 = DCONST_DVARFLT_splinetracer_catchUpTimeReductionStartAngularVelocity;
  if ( !DCONST_DVARFLT_splinetracer_catchUpTimeReductionStartAngularVelocity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "splinetracer_catchUpTimeReductionStartAngularVelocity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v43);
  value = v43->current.value;
  v45 = DCONST_DVARFLT_splinetracer_catchUpTimeReductionEndAngularVelocity;
  if ( !DCONST_DVARFLT_splinetracer_catchUpTimeReductionEndAngularVelocity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "splinetracer_catchUpTimeReductionEndAngularVelocity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v45);
  _XMM0 = v45->current.unsignedInt;
  v47 = FLOAT_1_0;
  __asm { vmaxss  xmm1, xmm0, xmm7 }
  if ( v19 <= *(float *)&_XMM1 )
  {
    if ( v19 > value )
    {
      v49 = *(float *)&_XMM1 - value;
      if ( v49 >= 0.001 )
        v50 = I_fclamp((float)(v19 - value) / v49, 0.0, 1.0);
      else
        *(float *)&v50 = FLOAT_1_0;
      v42 = (int)(float)((float)(1.0 - *(float *)&v50) * (float)v42);
    }
  }
  else
  {
    v42 = 0;
  }
  trackedEntNum = le->u.laser.trackedEntNum;
  v52 = trackedEntNum == 2047 || (float)((float)((float)((float)(curve.p3.v[1] - curve.p0.v[1]) * orient->axis.m[1].v[1]) + (float)((float)(curve.p3.v[0] - curve.p0.v[0]) * orient->axis.m[1].v[0])) + (float)((float)(curve.p3.v[2] - curve.p0.v[2]) * orient->axis.m[1].v[2])) >= 0.0;
  if ( trackedEntNum == le->u.laser.cache.lastTrackedEntNum && le->u.laser.trackedEntTag == le->u.laser.cache.lastTrackedEntTag && v52 == le->u.laser.cache.lastTimeTargetWasToTheLeft && v61 == LODWORD(le->u.tracer.ballistics.tracerStartPos.v[2]) && v59 == le->u.laser.cache.lastCurveWasExtreme )
  {
    interpStartTime = le->u.laser.cache.interpStartTime;
    p_baseCurve = &le->u.laser.cache.baseCurve;
  }
  else
  {
    v55 = *(__m256i *)le->u.laser.cache.lastCurve.p0.v;
    v56 = *(_OWORD *)&le->u.laser.cache.lastCurve.p2.z;
    p_baseCurve = &le->u.laser.cache.baseCurve;
    le->u.laser.cache.interpStartTime = time;
    *(__m256i *)le->u.laser.cache.baseCurve.p0.v = v55;
    *(_OWORD *)&le->u.laser.cache.baseCurve.p2.z = v56;
    interpStartTime = time;
  }
  if ( v42 )
    LODWORD(v47) = COERCE_UNSIGNED_INT64(I_fclamp((float)(time - interpStartTime) / (float)v42, 0.0, 1.0));
  CG_LaserBeamCurveInterpolate(p_baseCurve, &curve, v47, outActualCurve);
  le->u.laser.cache.lastCurveWasExtreme = v59;
  le->u.laser.cache.lastTimeTargetWasToTheLeft = v52;
  LODWORD(le->u.tracer.ballistics.tracerStartPos.v[2]) = v61;
  *(__m256i *)le->u.laser.cache.lastCurve.p0.v = *(__m256i *)v57;
  v58 = *(_OWORD *)(v57 + 32);
  le->u.laser.cache.lastTrackedEntNum = targetEntNum;
  *(_OWORD *)&le->u.laser.cache.lastCurve.p2.z = v58;
  if ( targetEntNum != 2047 )
    trackedEntTag = le->u.laser.trackedEntTag;
  le->u.laser.cache.lastTrackedEntTag = trackedEntTag;
  le->u.laser.cache.lastRenderTime = time;
  le->u.tracer.colors[0].v[2] = v63->predictedPlayerState.viewangles.v[1];
}

/*
==============
CG_LaserBeamDraw
==============
*/
void CG_LaserBeamDraw(LocalClientNum_t localClientNum, localEntity_s *le, const Weapon *weapon, bool isAlternate)
{
  LaserDef *FriendlyLaserType; 
  const char *WeaponName; 
  cg_t *LocalClientGlobals; 
  centity_t *Entity; 
  int number; 
  DObj *ClientDObj; 
  const cpose_t *p_pose; 
  cg_t *v14; 
  targetAssistBehavior_t TargetAssistBehavior; 
  targetAssistType_t TargetAssistType; 
  char v17; 
  bool v18; 
  float range; 
  bool v20; 
  int locational; 
  unsigned __int8 *priorityMap; 
  float v23; 
  float v24; 
  int v25; 
  unsigned __int8 *WeaponPriorityMap; 
  char v28; 
  vec3_t outOrg; 
  int outTargetEntNum; 
  Weapon *weapona; 
  __int64 v32; 
  vec3_t end; 
  vec3_t start; 
  vec3_t forward; 
  vec3_t outTargetPos; 
  BezierCurve outActualCurve; 
  vec3_t angles; 
  vec3_t viewOffset; 
  orientation_t orient; 
  trace_t results; 
  char output[1024]; 

  v32 = -2i64;
  weapona = (Weapon *)weapon;
  FriendlyLaserType = (LaserDef *)BG_GetFriendlyLaserType(weapon, 0, 1);
  if ( !FriendlyLaserType )
  {
    WeaponName = BG_GetWeaponName(weapon, output, 0x400u);
    Com_PrintWarning(17, "WARNING: CG_LaserBeamDraw using default Laser for weapon \"%s\".\n", WeaponName);
    FriendlyLaserType = cgMedia.laserDefault;
    if ( !cgMedia.laserDefault && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 2502, (AssertType)(LODWORD(cgMedia.laserDefault) + 1), "( laserDef )", (const char *)&queryFormat, "laserDef") )
      __debugbreak();
  }
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 2505, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  viewOffset = LocalClientGlobals->refdef.viewOffset;
  Entity = CG_GetEntity(localClientNum, le->ownerNum);
  number = Entity->nextState.number;
  if ( number != LocalClientGlobals->predictedPlayerState.clientNum || LocalClientGlobals->renderingThirdPerson )
  {
    ClientDObj = Com_GetClientDObj(number, localClientNum);
    p_pose = &Entity->pose;
  }
  else
  {
    if ( !LocalClientGlobals->m_weaponHand[0].viewModelDObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 2515, ASSERT_TYPE_ASSERT, "(weapHand->viewModelDObj)", (const char *)&queryFormat, "weapHand->viewModelDObj") )
      __debugbreak();
    ClientDObj = LocalClientGlobals->m_weaponHand[0].viewModelDObj;
    p_pose = &LocalClientGlobals->viewModelPose;
  }
  if ( ClientDObj && le->u.laser.cache.isWeaponValid && CG_GetBeamOrient(localClientNum, le, le->ownerNum, ClientDObj, p_pose, &orient) )
  {
    v14 = CG_GetLocalClientGlobals(localClientNum);
    if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 2543, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    start = orient.origin;
    outTargetEntNum = 2047;
    v28 = 0;
    TargetAssistBehavior = BG_GetTargetAssistBehavior(&le->u.laser.weapon, le->u.laser.isAlternate);
    TargetAssistType = BG_GetTargetAssistType(&le->u.laser.weapon, le->u.laser.isAlternate);
    if ( TargetAssistBehavior && TargetAssistBehavior != TARGET_ASSISTBEHAVE_COUNT || (TargetAssistType & 0xFFFFFFFD) != 0 )
    {
      v17 = 1;
      if ( le->leType != LE_BEAM_TRACER_TYPE_FIRST )
      {
        v18 = CG_LaserBeamDrawCurvedBeam(localClientNum, le, &outTargetPos, &outTargetEntNum);
        goto LABEL_28;
      }
    }
    else
    {
      v17 = 0;
    }
    v18 = 0;
LABEL_28:
    range = le->u.tracer.colors[3].v[1];
    if ( range == 0.0 )
      range = FriendlyLaserType->range;
    if ( v18 )
    {
      end = outTargetPos;
LABEL_42:
      BezierCurve::BezierCurve(&outActualCurve);
      if ( v28 )
      {
        outActualCurve.p0 = start;
        outActualCurve.p1 = start;
        outActualCurve.p2 = end;
        outActualCurve.p3 = end;
      }
      else
      {
        CG_LaserBeamCurveUpdate(localClientNum, le, &orient, range, &end, Entity->nextState.number, outTargetEntNum, &outActualCurve);
        end = outActualCurve.p3;
      }
      *(__m256i *)&results.fraction = *(__m256i *)orient.origin.v;
      *(_OWORD *)&results.contents = *(_OWORD *)&orient.axis.row1.z;
      AddBeamCore(localClientNum, Entity, le, &start, &end, &viewOffset, (orientation_t *)&results, FriendlyLaserType, range, &outActualCurve);
      return;
    }
    v20 = CG_BeamEntity_GetByOwner(localClientNum, Entity) != NULL;
    if ( v17 )
    {
      if ( Entity->nextState.number == v14->predictedPlayerState.clientNum )
      {
        RefdefView_GetOrg(&v14->refdef.view, &outOrg);
        *(_QWORD *)angles.v = *(_QWORD *)v14->gunAnglesExtrapolated.v;
        angles.v[2] = 0.0;
        AngleVectors(&angles, &forward, NULL, NULL);
        outTargetPos.v[0] = (float)(range * forward.v[0]) + outOrg.v[0];
        outTargetPos.v[1] = (float)(range * forward.v[1]) + outOrg.v[1];
        outTargetPos.v[2] = (float)(range * forward.v[2]) + outOrg.v[2];
        memset_0(&results, 0, sizeof(results));
        locational = Com_GameMode_SupportsFeature(WEAPON_MANTLE_LADDER);
        priorityMap = BG_GetWeaponPriorityMap(weapona, isAlternate);
        PhysicsQuery_LegacyTrace((Physics_WorldId)(3 * localClientNum + 2), &results, &outOrg, &outTargetPos, &bounds_origin, Entity->nextState.number, 0, 41970017, locational, priorityMap, All);
        if ( !results.startsolid )
        {
          end.v[0] = (float)((float)(range * results.fraction) * forward.v[0]) + outOrg.v[0];
          v23 = (float)((float)(range * results.fraction) * forward.v[1]) + outOrg.v[1];
          v24 = (float)((float)(range * results.fraction) * forward.v[2]) + outOrg.v[2];
LABEL_41:
          end.v[1] = v23;
          end.v[2] = v24;
          memset(&outOrg, 0, sizeof(outOrg));
          goto LABEL_42;
        }
LABEL_39:
        memset(&outOrg, 0, sizeof(outOrg));
        return;
      }
      if ( v20 )
      {
        end.v[0] = le->u.laser.cache.beamEndPos.v[0];
        v23 = le->u.tracer.ballistics.tracerStartPos.v[0];
        v24 = le->u.tracer.ballistics.tracerStartPos.v[1];
        goto LABEL_41;
      }
    }
    memset_0(&results, 0, sizeof(results));
    end.v[0] = (float)(range * orient.axis.m[0].v[0]) + start.v[0];
    end.v[1] = (float)(range * orient.axis.m[0].v[1]) + start.v[1];
    end.v[2] = (float)(range * orient.axis.m[0].v[2]) + start.v[2];
    v25 = Com_GameMode_SupportsFeature(WEAPON_MANTLE_LADDER);
    WeaponPriorityMap = BG_GetWeaponPriorityMap(weapona, isAlternate);
    PhysicsQuery_LegacyTrace((Physics_WorldId)(3 * localClientNum + 2), &results, &start, &end, &bounds_origin, Entity->nextState.number, 0, 41970017, v25, WeaponPriorityMap, All);
    if ( !results.startsolid )
    {
      end.v[0] = (float)((float)(range * results.fraction) * orient.axis.m[0].v[0]) + start.v[0];
      v23 = (float)((float)(range * results.fraction) * orient.axis.m[0].v[1]) + start.v[1];
      v24 = (float)((float)(range * results.fraction) * orient.axis.m[0].v[2]) + start.v[2];
      v28 = 1;
      goto LABEL_41;
    }
    goto LABEL_39;
  }
}

/*
==============
CG_LaserBeamDrawCurvedBeam
==============
*/
bool CG_LaserBeamDrawCurvedBeam(LocalClientNum_t localClientNum, localEntity_s *le, vec3_t *outTargetPos, int *outTargetEntNum)
{
  int trackedEntNum; 
  cg_t *LocalClientGlobals; 
  int clientNum; 
  const DObj *ClientDObj; 
  float v12; 
  float v13; 
  scr_string_t tag_torso; 
  char v15; 
  const cpose_t *Pose; 
  float v17; 
  float v18; 
  float v19; 
  bool result; 
  unsigned __int8 inOutIndex[4]; 
  LocalClientNum_t localClientNuma; 
  int modelIndex; 
  vec3_t in1; 
  vec3_t out; 
  tmat43_t<vec3_t> outTagMat; 

  localClientNuma = localClientNum;
  if ( (!CG_LocalEntityTypeIsBeamTracer(le->leType) || le->leType == LE_BEAM_TRACER_TYPE_FIRST) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 2117, ASSERT_TYPE_ASSERT, "(CG_LocalEntityTypeIsBeamTracer( le->leType ) && ( le->leType != LE_BEAM_TRACER ))", (const char *)&queryFormat, "CG_LocalEntityTypeIsBeamTracer( le->leType ) && ( le->leType != LE_BEAM_TRACER )") )
    __debugbreak();
  if ( !outTargetEntNum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 2118, ASSERT_TYPE_ASSERT, "(outTargetEntNum)", (const char *)&queryFormat, "outTargetEntNum") )
    __debugbreak();
  *(_QWORD *)outTargetPos->v = 0i64;
  outTargetPos->v[2] = 0.0;
  *outTargetEntNum = 2047;
  trackedEntNum = le->u.laser.trackedEntNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  clientNum = LocalClientGlobals->predictedPlayerState.clientNum;
  if ( trackedEntNum == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 2129, ASSERT_TYPE_ASSERT, "(trackedEntNum != ENTITYNUM_NONE)", (const char *)&queryFormat, "trackedEntNum != ENTITYNUM_NONE") )
    __debugbreak();
  ClientDObj = Com_GetClientDObj(trackedEntNum, localClientNum);
  if ( clientNum == trackedEntNum && !CG_View_IsKillCamView(localClientNuma) && LocalClientGlobals != (cg_t *)-807496i64 )
    ClientDObj = LocalClientGlobals->m_weaponHand[0].viewModelDObj;
  if ( !ClientDObj )
    return 0;
  if ( clientNum == trackedEntNum )
  {
    v12 = 0.0;
    in1.v[0] = 0.0;
    in1.v[1] = 0.0;
  }
  else
  {
    v13 = le->u.tracer.colors[1].v[1];
    in1.v[0] = le->u.tracer.colors[1].v[0];
    v12 = le->u.tracer.colors[1].v[2];
    in1.v[1] = v13;
  }
  tag_torso = scr_const.tag_torso;
  in1.v[2] = v12;
  if ( clientNum != trackedEntNum )
    tag_torso = le->u.laser.trackedEntTag;
  inOutIndex[0] = -2;
  v15 = 1;
  if ( !DObjGetBoneIndexInternal_53(ClientDObj, tag_torso, inOutIndex, &modelIndex) )
  {
    inOutIndex[0] = -2;
    v15 = 0;
    if ( !DObjGetBoneIndexInternal_53(ClientDObj, scr_const.tag_origin, inOutIndex, &modelIndex) )
      return 0;
  }
  Pose = CG_GetPose(localClientNuma, trackedEntNum);
  CG_DObjGetWorldBoneMatrix(Pose, ClientDObj, inOutIndex[0], (tmat33_t<vec3_t> *)&outTagMat, &outTagMat.m[3]);
  if ( v15 )
  {
    MatrixTransformVector43(&in1, &outTagMat, &out);
    v17 = out.v[2];
    v18 = out.v[1];
    v19 = out.v[0];
  }
  else
  {
    v19 = outTagMat.m[3].v[0];
    v18 = outTagMat.m[3].v[1];
    v17 = outTagMat.m[3].v[2];
  }
  *outTargetEntNum = trackedEntNum;
  result = 1;
  outTargetPos->v[0] = v19;
  outTargetPos->v[1] = v18;
  outTargetPos->v[2] = v17;
  return result;
}

/*
==============
CG_LaserBeamIsWeaponValid
==============
*/
bool CG_LaserBeamIsWeaponValid(LocalClientNum_t localClientNum, localEntity_s *le, const playerState_s *ps, const centity_t *cent)
{
  __int64 v4; 
  cg_t *LocalClientGlobals; 
  bool v9; 
  bool v10; 
  const BgWeaponMap **v11; 
  const BgWeaponMap *v12; 
  const Weapon *ViewmodelWeapon; 

  v4 = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v9 = ps && !LocalClientGlobals->renderingThirdPerson;
  v10 = CgWeaponMap::ms_instance[v4] == NULL;
  v11 = (const BgWeaponMap **)&CgWeaponMap::ms_instance[v4];
  if ( v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v12 = *v11;
  if ( v9 )
    ViewmodelWeapon = BG_GetViewmodelWeapon(v12, ps);
  else
    ViewmodelWeapon = BG_GetWeaponForEntity(v12, &cent->nextState);
  return memcmp_0(ViewmodelWeapon, &le->u.laser.weapon, 0x3Cui64) == 0;
}

/*
==============
CG_LaserBeamPreAddDObjUpdate
==============
*/
void CG_LaserBeamPreAddDObjUpdate(LocalClientNum_t localClientNum, localEntity_s *le, const int entNum)
{
  int clientNum; 

  if ( !le && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 2842, ASSERT_TYPE_ASSERT, "(le)", (const char *)&queryFormat, "le") )
    __debugbreak();
  if ( !CG_LocalEntityTypeIsBeamTracer(le->leType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 2843, ASSERT_TYPE_ASSERT, "(CG_LocalEntityTypeIsBeamTracer( le->leType ))", (const char *)&queryFormat, "CG_LocalEntityTypeIsBeamTracer( le->leType )") )
    __debugbreak();
  clientNum = CG_GetLocalClientGlobals(localClientNum)->predictedPlayerState.clientNum;
  if ( clientNum != entNum )
  {
    if ( entNum == 2048 )
      entNum = clientNum;
    CG_BeamCacheOwnerInfo(localClientNum, le, entNum, clientNum == entNum);
  }
}

/*
==============
CG_LaserBeam_WhizbyPoint
==============
*/
bool CG_LaserBeam_WhizbyPoint(LocalClientNum_t localClientNum, const vec3_t *start, const vec3_t *end, vec3_t *outPoint)
{
  float v7; 
  float v8; 
  __int128 v9; 
  float v10; 
  cg_t *LocalClientGlobals; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  bool result; 
  vec3_t outOrg; 
  __int64 v25; 

  v25 = -2i64;
  v7 = end->v[0] - start->v[0];
  v9 = LODWORD(end->v[1]);
  v8 = end->v[1] - start->v[1];
  v10 = end->v[2] - start->v[2];
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
  *(float *)&v9 = fsqrt((float)((float)(v8 * v8) + (float)(v7 * v7)) + (float)(v10 * v10));
  _XMM1 = v9;
  __asm
  {
    vcmpless xmm0, xmm1, cs:__real@80000000
    vblendvps xmm1, xmm1, xmm2, xmm0
  }
  v15 = v7 * (float)(1.0 / *(float *)&_XMM1);
  v16 = v8 * (float)(1.0 / *(float *)&_XMM1);
  v17 = v10 * (float)(1.0 / *(float *)&_XMM1);
  v18 = (float)((float)(v16 * (float)(outOrg.v[1] - start->v[1])) + (float)(v15 * (float)(outOrg.v[0] - start->v[0]))) + (float)(v17 * (float)(outOrg.v[2] - start->v[2]));
  v19 = (float)(v18 * v15) + start->v[0];
  outPoint->v[0] = v19;
  *(float *)&v9 = (float)(v18 * v16) + start->v[1];
  outPoint->v[1] = *(float *)&v9;
  *(float *)&_XMM1 = (float)(v18 * v17) + start->v[2];
  outPoint->v[2] = *(float *)&_XMM1;
  v20 = (float)((float)((float)(*(float *)&v9 - start->v[1]) * (float)(*(float *)&v9 - start->v[1])) + (float)((float)(v19 - start->v[0]) * (float)(v19 - start->v[0]))) + (float)((float)(*(float *)&_XMM1 - start->v[2]) * (float)(*(float *)&_XMM1 - start->v[2]));
  v21 = end->v[1] - start->v[1];
  v22 = end->v[2] - start->v[2];
  if ( v20 > (float)((float)((float)(v21 * v21) + (float)((float)(end->v[0] - start->v[0]) * (float)(end->v[0] - start->v[0]))) + (float)(v22 * v22)) )
  {
    outPoint->v[0] = end->v[0];
    outPoint->v[1] = end->v[1];
    outPoint->v[2] = end->v[2];
  }
  result = 1;
  memset(&outOrg, 0, sizeof(outOrg));
  return result;
}

/*
==============
CG_LaserClearDeferredDrawPlayerRequests
==============
*/
void CG_LaserClearDeferredDrawPlayerRequests(LocalClientNum_t localClientNum)
{
  s_currentDeferredLocalPlayerDrawRequestLocalClientNum = localClientNum;
  memset_0(s_deferredLocalPlayerDrawLayerRequests, 0, sizeof(s_deferredLocalPlayerDrawLayerRequests));
}

/*
==============
CG_LaserClearUnused
==============
*/
void CG_LaserClearUnused(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  volatile int v2; 
  int v3; 
  __int64 v4; 
  LaserClient *v5; 
  unsigned __int8 flags; 
  __int64 v7; 
  __int64 v8; 
  int v10; 
  int v11; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v10 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 1161, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( g_laserCount ) ) + 0 ) )", "localClientNum doesn't index g_laserCount\n\t%i not in [0, %i)", localClientNum, v10) )
      __debugbreak();
  }
  if ( g_laserCount[v1] )
  {
    if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 1166, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
      __debugbreak();
    v2 = 96;
    if ( g_laserCount[v1] < 96 )
      v2 = g_laserCount[v1];
    g_laserCount[v1] = v2;
    if ( g_laserCount[v1] < 0 || (unsigned __int64)(int)g_laserCount[v1] > 0x60 )
    {
      v11 = 96;
      LODWORD(v8) = g_laserCount[v1];
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 1174, ASSERT_TYPE_ASSERT, "( 0 ) <= ( g_laserCount[localClientNum] ) && ( g_laserCount[localClientNum] ) <= ( ( sizeof( *array_counter( g_lasers[localClientNum] ) ) + 0 ) )", "g_laserCount[localClientNum] not in [0, ARRAY_COUNT( g_lasers[localClientNum] )]\n\t%i not in [%i, %i]", v8, 0i64, v11) )
        __debugbreak();
    }
    v3 = g_laserCount[v1] - 1;
    v4 = v3;
    if ( v3 >= 0 )
    {
      v5 = &g_lasers[v1][v3];
      do
      {
        flags = v5->flags;
        if ( (flags & 4) != 0 )
        {
          CG_LaserClientEffectCleanUpAll((const LocalClientNum_t)v1, v5);
          v7 = 96 * v1 + (int)g_laserCount[v1];
          *(__m256i *)&v5->entNum = *(__m256i *)&g_lasers[0][v7 - 1].entNum;
          *(__m256i *)&v5->laserInterpDestQuat.xyz.y = *(__m256i *)&g_lasers[0][v7 - 1].laserInterpDestQuat.xyz.y;
          v5->endEffect[1] = g_lasers[0][v7 - 1].endEffect[1];
          --g_laserCount[v1];
        }
        else
        {
          v5->flags = flags | 4;
        }
        --v5;
        --v4;
      }
      while ( v4 >= 0 );
    }
    if ( g_laserCount[v1] < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 1194, ASSERT_TYPE_ASSERT, "(g_laserCount[localClientNum] >= 0)", (const char *)&queryFormat, "g_laserCount[localClientNum] >= 0") )
      __debugbreak();
  }
}

/*
==============
CG_LaserClientEffectCleanUp
==============
*/
void CG_LaserClientEffectCleanUp(const LocalClientNum_t localClientNum, LaserClient *laserClient, const PlayerHandIndex laserHandIndex)
{
  __int64 v3; 
  __int64 v4; 
  ParticleSystemHandle v6; 
  ParticleManager *v7; 
  ParticleSystemHandle v8; 
  __int64 v9; 
  __int64 v10; 

  v3 = localClientNum;
  v4 = laserHandIndex;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 919, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( !laserClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 920, ASSERT_TYPE_ASSERT, "(laserClient)", (const char *)&queryFormat, "laserClient") )
    __debugbreak();
  if ( (unsigned int)v4 >= 2 )
  {
    LODWORD(v10) = 2;
    LODWORD(v9) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 921, ASSERT_TYPE_ASSERT, "(unsigned)( laserHandIndex ) < (unsigned)( NUM_WEAPON_HANDS )", "laserHandIndex doesn't index NUM_WEAPON_HANDS\n\t%i not in [0, %i)", v9, v10) )
      __debugbreak();
  }
  if ( (unsigned int)v3 >= 2 )
  {
    LODWORD(v10) = 2;
    LODWORD(v9) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v9, v10) )
      __debugbreak();
  }
  v6 = laserClient->beamEffect[v4];
  v7 = &g_particleManager[v3];
  if ( v6 )
  {
    ParticleManager::KillSystem(v7, v6);
    laserClient->beamEffect[v4] = PARTICLE_SYSTEM_INVALID_HANDLE;
  }
  v8 = laserClient->endEffect[v4];
  if ( v8 )
  {
    ParticleManager::KillSystem(v7, v8);
    laserClient->endEffect[v4] = PARTICLE_SYSTEM_INVALID_HANDLE;
  }
}

/*
==============
CG_LaserClientEffectCleanUpAll
==============
*/
void CG_LaserClientEffectCleanUpAll(const LocalClientNum_t localClientNum, LaserClient *laserClient)
{
  ParticleSystemHandle *endEffect; 
  ParticleManager *v5; 
  int i; 
  ParticleSystemHandle v7; 
  __int64 v8; 
  __int64 v9; 

  endEffect = laserClient->endEffect;
  v5 = &g_particleManager[localClientNum];
  for ( i = 0; i < 2; ++i )
  {
    if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
    {
      LODWORD(v9) = 2;
      LODWORD(v8) = localClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 919, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v8, v9) )
        __debugbreak();
    }
    if ( !laserClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 920, ASSERT_TYPE_ASSERT, "(laserClient)", (const char *)&queryFormat, "laserClient") )
      __debugbreak();
    if ( (unsigned int)i >= 2 )
    {
      LODWORD(v9) = 2;
      LODWORD(v8) = i;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 921, ASSERT_TYPE_ASSERT, "(unsigned)( laserHandIndex ) < (unsigned)( NUM_WEAPON_HANDS )", "laserHandIndex doesn't index NUM_WEAPON_HANDS\n\t%i not in [0, %i)", v8, v9) )
        __debugbreak();
    }
    if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
    {
      LODWORD(v9) = 2;
      LODWORD(v8) = localClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v8, v9) )
        __debugbreak();
    }
    v7 = *((_DWORD *)endEffect - 2);
    if ( v7 )
    {
      ParticleManager::KillSystem(v5, v7);
      *((_DWORD *)endEffect - 2) = 0;
    }
    if ( *endEffect )
    {
      ParticleManager::KillSystem(v5, *endEffect);
      *endEffect = PARTICLE_SYSTEM_INVALID_HANDLE;
    }
    ++endEffect;
  }
}

/*
==============
CG_LaserDraw
==============
*/
bool CG_LaserDraw(LocalClientNum_t localClientNum, LaserClient *laserClient, const LaserDef *laserDef, const playerState_s *ps, const vec3_t *localPlayerGunAngles, centity_t *cent, DObj *obj, const cpose_t *pose, const vec3_t *viewerPos, LaserLightEnum laserLightEnum, const Weapon *weapon, bool isAlternate, bool isPlayerView)
{
  entityType_s eType; 
  const cg_t *LocalClientGlobals; 
  unsigned int number; 
  const characterInfo_t *CharacterInfo; 

  if ( laserClient )
  {
    if ( cent == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1921, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
      __debugbreak();
    eType = cent->nextState.eType;
    if ( ((eType - 1) & 0xFFED) != 0 || eType == ET_ITEM )
      goto LABEL_14;
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 1139, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    number = cent->nextState.number;
    if ( LocalClientGlobals->HasCharacterInfo((cg_t *)LocalClientGlobals, number) && (CharacterInfo = CG_GetCharacterInfo(LocalClientGlobals, number)) != NULL && CharacterInfo->dualWielding )
      CG_LaserDrawSingle(localClientNum, laserClient, WEAPON_HAND_LEFT, laserDef, ps, localPlayerGunAngles, cent, obj, pose, viewerPos, laserLightEnum, weapon, isAlternate, isPlayerView);
    else
LABEL_14:
      CG_LaserClientEffectCleanUp(localClientNum, laserClient, WEAPON_HAND_LEFT);
  }
  return CG_LaserDrawSingle(localClientNum, laserClient, WEAPON_HAND_DEFAULT, laserDef, ps, localPlayerGunAngles, cent, obj, pose, viewerPos, laserLightEnum, weapon, isAlternate, isPlayerView);
}

/*
==============
CG_LaserDrawAll
==============
*/
void CG_LaserDrawAll(LocalClientNum_t localClientNum, LaserCollisionWorld world)
{
  __int64 v2; 
  int v3; 
  bool v4; 
  bool v5; 
  cg_t *LocalClientGlobals; 
  float v7; 
  cg_t_vtbl *v8; 
  __int64 clientNum; 
  const characterInfo_t *CharacterInfo; 
  __int64 v11; 
  const CgWeaponMap *Instance; 
  LaserClient *laserClient; 
  vec3_t *viewOffset; 
  int viewOffseta; 
  __int64 checkLaserVisibility; 
  int usingNightVision; 
  vec3_t v19; 

  v2 = localClientNum;
  v3 = 96;
  if ( g_laserCount[localClientNum] < 96 )
    v3 = g_laserCount[localClientNum];
  if ( (unsigned int)v3 > 0x60 )
  {
    usingNightVision = 96;
    viewOffseta = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 1564, ASSERT_TYPE_ASSERT, "( 0 ) <= ( laserCount ) && ( laserCount ) <= ( (96) )", "laserCount not in [0, MAX_LASERS]\n\t%i not in [%i, %i]", viewOffseta, 0i64, usingNightVision) )
      __debugbreak();
  }
  if ( v3 )
  {
    v4 = 0;
    v5 = Com_GameMode_SupportsFeature(WEAPON_BLAST_IMPACT);
    if ( v5 )
      v4 = CG_LookingThroughNightVision((const LocalClientNum_t)v2);
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v2);
    v7 = LocalClientGlobals->refdef.viewOffset.v[1];
    v8 = LocalClientGlobals->__vftable;
    clientNum = LocalClientGlobals->predictedPlayerState.clientNum;
    v19.v[0] = LocalClientGlobals->refdef.viewOffset.v[0];
    v19.v[2] = LocalClientGlobals->refdef.viewOffset.v[2];
    v19.v[1] = v7;
    if ( v8->IsMP(LocalClientGlobals) )
    {
      if ( (unsigned int)clientNum >= LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified )
      {
        LODWORD(checkLaserVisibility) = LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified;
        LODWORD(viewOffset) = clientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 12, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", viewOffset, checkLaserVisibility) )
          __debugbreak();
      }
      CharacterInfo = (const characterInfo_t *)(*(_QWORD *)&LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[62] + 14792 * clientNum);
    }
    else
    {
      CharacterInfo = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)LocalClientGlobals, clientNum);
    }
    v11 = v3;
    Instance = CgWeaponMap::GetInstance((const LocalClientNum_t)v2);
    if ( v3 > 0 )
    {
      laserClient = g_lasers[v2];
      do
      {
        if ( (laserClient->flags & 4) == 0 )
          CG_Laser_DrawAll_Single((const LocalClientNum_t)v2, world, LocalClientGlobals, Instance, CharacterInfo, &v19, v5, v4, laserClient);
        ++laserClient;
        --v11;
      }
      while ( v11 );
    }
  }
}

/*
==============
CG_LaserDrawPlayer
==============
*/
bool CG_LaserDrawPlayer(LocalClientNum_t localClientNum, const playerState_s *ps, const vec3_t *localPlayerGunAngles, centity_t *cent, DObj *obj, cpose_t *pose, const vec3_t *viewerPos, LaserLightEnum inLaserLightEnum, const Weapon *weapon, bool isAlternate)
{
  DObj *v14; 
  cpose_t *v15; 
  const Weapon *v16; 
  DObj *v17; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 1384, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 1385, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  v14 = obj;
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 1386, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  v15 = pose;
  if ( !pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 1387, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
    __debugbreak();
  v16 = weapon;
  if ( !CG_LaserDrawPlayer_CommonInternal(localClientNum, ps, weapon, &inLaserLightEnum, (const LaserDef **)&obj) )
    return 0;
  v17 = obj;
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 1391, ASSERT_TYPE_ASSERT, "(laserDef)", (const char *)&queryFormat, "laserDef") )
    __debugbreak();
  return CG_LaserDrawSingle(localClientNum, NULL, WEAPON_HAND_DEFAULT, (const LaserDef *)v17, ps, localPlayerGunAngles, cent, v14, v15, viewerPos, inLaserLightEnum, v16, isAlternate, 1);
}

/*
==============
CG_LaserDrawPlayerDeferredResult
==============
*/
bool CG_LaserDrawPlayerDeferredResult(LocalClientNum_t localClientNum, const PlayerHandIndex hand)
{
  __int64 v3; 
  DeferredLocalPlayerDrawLaserRequest *v4; 
  cg_t *LocalClientGlobals; 
  CgWeaponMap *Instance; 
  const Weapon *weapon; 
  const WeaponHand *ViewModelHand; 
  const cpose_t *pose; 
  vec3_t *localPlayerGunAngles; 
  centity_t *cent; 

  v3 = hand;
  if ( localClientNum != s_currentDeferredLocalPlayerDrawRequestLocalClientNum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 1456, ASSERT_TYPE_ASSERT, "( localClientNum ) == ( s_currentDeferredLocalPlayerDrawRequestLocalClientNum )", "%s == %s\n\t%i, %i", "localClientNum", "s_currentDeferredLocalPlayerDrawRequestLocalClientNum", localClientNum, s_currentDeferredLocalPlayerDrawRequestLocalClientNum) )
    __debugbreak();
  if ( (unsigned int)v3 >= 2 )
  {
    LODWORD(cent) = 2;
    LODWORD(localPlayerGunAngles) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 1457, ASSERT_TYPE_ASSERT, "(unsigned)( hand ) < (unsigned)( ( sizeof( *array_counter( s_deferredLocalPlayerDrawLayerRequests ) ) + 0 ) )", "hand doesn't index s_deferredLocalPlayerDrawLayerRequests\n\t%i not in [0, %i)", localPlayerGunAngles, cent) )
      __debugbreak();
  }
  v4 = &s_deferredLocalPlayerDrawLayerRequests[v3];
  if ( !v4->isValidRequest )
    return 0;
  if ( !v4->laserDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 1465, ASSERT_TYPE_ASSERT, "(request.laserDef)", (const char *)&queryFormat, "request.laserDef") )
    __debugbreak();
  if ( !v4->ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 1466, ASSERT_TYPE_ASSERT, "(request.ps)", (const char *)&queryFormat, "request.ps") )
    __debugbreak();
  if ( !v4->cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 1467, ASSERT_TYPE_ASSERT, "(request.cent)", (const char *)&queryFormat, "request.cent") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 1470, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  Instance = CgWeaponMap::GetInstance(localClientNum);
  if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 1472, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  weapon = BG_GetViewmodelWeapon(Instance, v4->ps);
  ViewModelHand = cg_t::GetViewModelHand(LocalClientGlobals, (const PlayerHandIndex)v3);
  if ( !ViewModelHand && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 1475, ASSERT_TYPE_ASSERT, "(weapHand)", (const char *)&queryFormat, "weapHand") )
    __debugbreak();
  if ( !ViewModelHand->viewModelDObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 1476, ASSERT_TYPE_ASSERT, "(weapHand->viewModelDObj)", (const char *)&queryFormat, "weapHand->viewModelDObj") )
    __debugbreak();
  pose = CG_GetViewModelPoseForHand(localClientNum, (PlayerHandIndex)v3);
  if ( !pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 1478, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
    __debugbreak();
  return CG_LaserDrawSingle(localClientNum, NULL, WEAPON_HAND_DEFAULT, v4->laserDef, v4->ps, &v4->localPlayerGunAngles, v4->cent, ViewModelHand->viewModelDObj, pose, &v4->viewOrigin, v4->laserLightEnum, weapon, v4->isAlternate, 1);
}

/*
==============
CG_LaserDrawPlayer_CommonInternal
==============
*/
bool CG_LaserDrawPlayer_CommonInternal(LocalClientNum_t localClientNum, const playerState_s *ps, const Weapon *weapon, LaserLightEnum *inOutLaserLightEnum, const LaserDef **outLaserDef)
{
  cg_t *LocalClientGlobals; 
  CgHandler *Handler; 
  unsigned __int64 weaponState; 
  __int64 v12; 
  bool v13; 
  const LaserDef *FriendlyLaserType; 
  LaserDef *laserDefault; 
  const LaserDef *v16; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 1331, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( Com_GameMode_SupportsFeature(WEAPON_SCOPE_TOGGLE_OFF|WEAPON_OFFHAND_END|0x80) )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 1337, ASSERT_TYPE_ASSERT, "(cGameGlob)", (const char *)&queryFormat, "cGameGlob") )
      __debugbreak();
    Handler = CgHandler::getHandler(localClientNum);
    if ( !BG_PlayerUsesNVGHalfADS(ps, Handler) && LocalClientGlobals->dualViewScope )
      return 0;
  }
  weaponState = ps->weapState[0].weaponState;
  if ( (unsigned int)weaponState <= 0x32 )
  {
    v12 = 0x4000000001FBEi64;
    if ( _bittest64(&v12, weaponState) )
      return 0;
  }
  v13 = CG_LookingThroughNightVision(localClientNum);
  FriendlyLaserType = BG_GetFriendlyLaserType(weapon, 1, 0);
  *outLaserDef = FriendlyLaserType;
  if ( !FriendlyLaserType )
  {
    laserDefault = cgMedia.laserDefault;
    *outLaserDef = cgMedia.laserDefault;
    if ( !laserDefault && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 1362, ASSERT_TYPE_ASSERT, "(outLaserDef)", (const char *)&queryFormat, "outLaserDef") )
      __debugbreak();
  }
  v16 = *outLaserDef;
  if ( (*outLaserDef)->laserLightNvgOnly && !v13 )
  {
    *inOutLaserLightEnum = LASER_LIGHT_OFF;
    v16 = *outLaserDef;
  }
  return !v16->nightvisionOnly || v13;
}

/*
==============
CG_LaserDrawSingle
==============
*/
char CG_LaserDrawSingle(LocalClientNum_t localClientNum, LaserClient *laserClient, const PlayerHandIndex laserHandIndex, const LaserDef *laserDef, const playerState_s *ps, const vec3_t *localPlayerGunAngles, centity_t *cent, DObj *obj, const cpose_t *pose, const vec3_t *viewerPos, LaserLightEnum laserLightEnum, const Weapon *weapon, bool isAlternate, bool isPlayerView)
{
  __int128 v14; 
  __int128 v15; 
  __int128 v16; 
  PlayerHandIndex v19; 
  const cpose_t *v20; 
  bool weaponIsDefault; 
  cg_t *LocalClientGlobals; 
  const cg_t *v23; 
  unsigned int number; 
  const characterInfo_t *CharacterInfo; 
  centity_t *v26; 
  __int16 otherEntityNum; 
  centity_t *Entity; 
  __int64 v30; 
  ParticleSystemHandle *p_beamEffect; 
  ParticleSystemHandle *p_endEffect; 
  cg_t *v33; 
  WeaponHand *m_weaponHand; 
  float v35; 
  const cg_t *v36; 
  const characterInfo_t *v37; 
  Bounds *v38; 
  float v39; 
  float v40; 
  float v41; 
  float v42; 
  const dvar_t *v43; 
  bool viewCenterInAds; 
  unsigned __int8 *priorityMap; 
  char v46; 
  unsigned __int8 outBoneIndex[3]; 
  PlayerHandIndex laserHandIndexa; 
  PlayerHandIndex playerHand; 
  scr_string_t outTagName; 
  Weapon *r_weapon; 
  LaserDef *v52; 
  vec3_t *v53; 
  vec3_t *v54; 
  vec3_t outHitPoint; 
  vec3_t v56; 
  vec3_t v57; 
  orientation_t outOrigin; 
  Bounds bounds; 
  __int128 v60; 
  __int128 v61; 
  __int128 v62; 

  v19 = laserHandIndex;
  v20 = pose;
  v54 = (vec3_t *)viewerPos;
  r_weapon = (Weapon *)weapon;
  v52 = (LaserDef *)laserDef;
  laserHandIndexa = laserHandIndex;
  v53 = (vec3_t *)localPlayerGunAngles;
  *(_QWORD *)v57.v = pose;
  if ( ps && !localPlayerGunAngles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 951, ASSERT_TYPE_ASSERT, "(!ps || localPlayerGunAngles)", (const char *)&queryFormat, "!ps || localPlayerGunAngles") )
    __debugbreak();
  playerHand = WEAPON_HAND_DEFAULT;
  if ( laserClient )
  {
    weaponIsDefault = (laserClient->flags & 8) != 0;
  }
  else
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 964, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    if ( !isPlayerView && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 965, ASSERT_TYPE_ASSERT, "(isPlayerView)", (const char *)&queryFormat, "isPlayerView") )
      __debugbreak();
    weaponIsDefault = LocalClientGlobals->playerWeaponInfo.isWeaponDefault;
    v20 = *(const cpose_t **)v57.v;
  }
  if ( v19 == WEAPON_HAND_LEFT )
  {
    v23 = CG_GetLocalClientGlobals(localClientNum);
    if ( !v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 705, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    number = cent->nextState.number;
    if ( v23->HasCharacterInfo((cg_t *)v23, number) )
    {
      CharacterInfo = CG_GetCharacterInfo(v23, number);
      if ( CharacterInfo )
      {
LABEL_24:
        TagPair::TagPair((TagPair *)&v56, scr_const.tag_laser, scr_const.tag_flash);
        outBoneIndex[0] = -2;
        if ( TagPair::GetTagNameAndBoneIndexForCharacter((TagPair *)&v56, obj, CharacterInfo, CHAR_MODEL_WEAPON_HELD_LEFT, &outTagName, outBoneIndex) )
        {
          CG_DObjGetWorldBoneMatrix(*(const cpose_t **)v57.v, obj, outBoneIndex[0], &outOrigin.axis, &outOrigin.origin);
          v19 = laserHandIndexa;
          goto LABEL_26;
        }
        v19 = laserHandIndexa;
        goto LABEL_33;
      }
    }
    else
    {
      CharacterInfo = NULL;
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 708, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
      __debugbreak();
    goto LABEL_24;
  }
  if ( CG_GetLaserOrient(localClientNum, ps, cent, obj, v20, r_weapon, isAlternate, isPlayerView, weaponIsDefault, &outOrigin) )
  {
LABEL_26:
    if ( !laserClient )
    {
      v33 = CG_GetLocalClientGlobals(localClientNum);
      if ( !v33 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 1019, ASSERT_TYPE_ASSERT, "(cGameGlob)", (const char *)&queryFormat, "cGameGlob") )
        __debugbreak();
      m_weaponHand = v33->m_weaponHand;
      if ( v33 == (cg_t *)-807496i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 1022, ASSERT_TYPE_ASSERT, "(weapHand)", (const char *)&queryFormat, "weapHand") )
        __debugbreak();
      if ( !m_weaponHand->viewModelDObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 1023, ASSERT_TYPE_ASSERT, "(weapHand->viewModelDObj)", (const char *)&queryFormat, "weapHand->viewModelDObj") )
        __debugbreak();
      if ( m_weaponHand->viewModelDObj == obj )
      {
        p_beamEffect = &v33->laserInfo[0].beamEffect;
        p_endEffect = &v33->laserInfo[0].endEffect;
      }
      else
      {
        if ( v33->m_weaponHand[1].viewModelDObj != obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 1032, ASSERT_TYPE_ASSERT, "(cGameGlob->GetViewModelHand( WEAPON_HAND_LEFT )->viewModelDObj == obj)", (const char *)&queryFormat, "cGameGlob->GetViewModelHand( WEAPON_HAND_LEFT )->viewModelDObj == obj") )
          __debugbreak();
        p_beamEffect = &v33->laserInfo[1].beamEffect;
        playerHand = WEAPON_HAND_LEFT;
        p_endEffect = &v33->laserInfo[1].endEffect;
      }
LABEL_60:
      if ( ps )
      {
        v35 = ps->origin.v[1];
        v57.v[0] = ps->origin.v[0];
        v57.v[2] = ps->origin.v[2];
        v57.v[1] = v35;
      }
      else
      {
        if ( !cent || cent->nextState.eType != ET_PLAYER )
        {
          outHitPoint = outOrigin.origin;
LABEL_77:
          v43 = DVARBOOL_laserDebug;
          if ( !DVARBOOL_laserDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "laserDebug") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v43);
          if ( v43->current.enabled )
          {
            CG_DebugStar(&outHitPoint, &colorGreen, 0, 0);
            CG_DebugStar(&outOrigin.origin, &colorBlue, 0, 0);
            v56.v[0] = (float)(DEBUG_RAY_LENGTH * outOrigin.axis.m[0].v[0]) + outHitPoint.v[0];
            v56.v[1] = (float)(DEBUG_RAY_LENGTH * outOrigin.axis.m[0].v[1]) + outHitPoint.v[1];
            v56.v[2] = (float)(DEBUG_RAY_LENGTH * outOrigin.axis.m[0].v[2]) + outHitPoint.v[2];
            CG_DebugLine(&outHitPoint, &v56, &colorRed, 0, 0);
          }
          viewCenterInAds = isPlayerView && BG_IsWeaponLaserEndViewCenterInAds(r_weapon, isAlternate);
          priorityMap = BG_GetWeaponPriorityMap(r_weapon, isAlternate);
          v46 = AddCore(localClientNum, cent, &outOrigin, &outHitPoint, v54, v53, laserLightEnum, v52, p_beamEffect, p_endEffect, priorityMap, isPlayerView, playerHand, viewCenterInAds);
          if ( !v46 )
          {
            if ( laserClient )
              CG_LaserClientEffectCleanUp(localClientNum, laserClient, laserHandIndexa);
          }
          return v46;
        }
        CG_GetPoseOrigin(&cent->pose, &v57);
      }
      v62 = v14;
      v61 = v15;
      v60 = v16;
      v36 = CG_GetLocalClientGlobals(localClientNum);
      v37 = CG_GetCharacterInfo(v36, cent->nextState.number);
      v38 = (Bounds *)BG_Suit_GetBounds(v37->suitIndex, PM_EFF_STANCE_DEFAULT);
      v39 = COERCE_FLOAT(*(_OWORD *)v38->midPoint.v) + v57.v[0];
      bounds = *v38;
      v40 = (float)(bounds.midPoint.v[2] + v57.v[2]) - bounds.halfSize.v[2];
      v41 = (float)(bounds.midPoint.v[1] + v57.v[1]) - bounds.halfSize.v[1];
      bounds.midPoint.v[0] = v39;
      bounds.midPoint.v[1] = bounds.midPoint.v[1] + v57.v[1];
      bounds.midPoint.v[2] = bounds.midPoint.v[2] + v57.v[2];
      if ( outOrigin.origin.v[0] < (float)(v39 - bounds.halfSize.v[0]) || outOrigin.origin.v[0] > (float)(v39 + bounds.halfSize.v[0]) || outOrigin.origin.v[1] < v41 || outOrigin.origin.v[1] > (float)(bounds.midPoint.v[1] + bounds.halfSize.v[1]) || outOrigin.origin.v[2] < v40 || outOrigin.origin.v[2] > (float)(bounds.midPoint.v[2] + bounds.halfSize.v[2]) )
      {
        LODWORD(v56.v[0]) = LODWORD(outOrigin.axis.m[0].v[0]) ^ _xmm;
        LODWORD(v56.v[2]) = LODWORD(outOrigin.axis.m[0].v[2]) ^ _xmm;
        LODWORD(v56.v[1]) = LODWORD(outOrigin.axis.m[0].v[1]) ^ _xmm;
        if ( IntersectRayBounds(&outOrigin.origin, &v56, &bounds, (float *)&outTagName, &outHitPoint) )
        {
          outHitPoint.v[0] = (float)(PULL_BACK_DISTANCE * v56.v[0]) + outHitPoint.v[0];
          outHitPoint.v[1] = (float)(PULL_BACK_DISTANCE * v56.v[1]) + outHitPoint.v[1];
          v42 = (float)(PULL_BACK_DISTANCE * v56.v[2]) + outHitPoint.v[2];
        }
        else
        {
          outHitPoint.v[0] = (float)(PULL_BACK_DISTANCE_0 * v56.v[0]) + outOrigin.origin.v[0];
          outHitPoint.v[1] = (float)(PULL_BACK_DISTANCE_0 * v56.v[1]) + outOrigin.origin.v[1];
          v42 = (float)(PULL_BACK_DISTANCE_0 * v56.v[2]) + outOrigin.origin.v[2];
        }
        outHitPoint.v[2] = v42;
      }
      else
      {
        outHitPoint = outOrigin.origin;
      }
      goto LABEL_77;
    }
    if ( cent->nextState.eType == ET_ACTOR && (cent->nextState.lerp.u.actor.flags & 0x1C) != 0 )
    {
      v26 = cent;
    }
    else
    {
      otherEntityNum = cent->nextState.otherEntityNum;
      if ( otherEntityNum == 2047 )
        goto LABEL_44;
      Entity = CG_GetEntity(localClientNum, otherEntityNum);
      if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 1001, ASSERT_TYPE_ASSERT, "(pOwnerEnt)", (const char *)&queryFormat, "pOwnerEnt") )
        __debugbreak();
      if ( Entity->nextState.eType != ET_ACTOR || (Entity->nextState.lerp.u.actor.flags & 0x1C) == 0 )
        goto LABEL_44;
      v26 = Entity;
    }
    CG_HandleLaserFlags(localClientNum, laserClient, v26, &outOrigin);
LABEL_44:
    v30 = v19;
    p_beamEffect = &laserClient->beamEffect[v19];
    p_endEffect = &laserClient->endEffect[v30];
    goto LABEL_60;
  }
LABEL_33:
  if ( laserClient )
    CG_LaserClientEffectCleanUp(localClientNum, laserClient, v19);
  return 0;
}

/*
==============
CG_LaserForceOnEnabled
==============
*/
__int64 CG_LaserForceOnEnabled()
{
  const dvar_t *v0; 

  v0 = DVARBOOL_laserForceOn;
  if ( !DVARBOOL_laserForceOn && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "laserForceOn") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  return v0->current.color[0];
}

/*
==============
CG_LaserGetDefault
==============
*/
LaserDef *CG_LaserGetDefault()
{
  return cgMedia.laserDefault;
}

/*
==============
CG_LaserResetAll
==============
*/
void CG_LaserResetAll(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  int v2; 
  int v3; 
  LaserClient *v4; 
  __int64 v5; 
  int v7; 
  int v8; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v7 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 1200, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( g_laserCount ) ) + 0 ) )", "localClientNum doesn't index g_laserCount\n\t%i not in [0, %i)", localClientNum, v7) )
      __debugbreak();
  }
  if ( g_laserCount[v1] )
  {
    if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 1205, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
      __debugbreak();
    v2 = 96;
    if ( g_laserCount[v1] < 96 )
      v2 = g_laserCount[v1];
    if ( v2 < 0 )
    {
      v8 = 96;
      LODWORD(v5) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 1213, ASSERT_TYPE_ASSERT, "( 0 ) <= ( laserCount ) && ( laserCount ) <= ( ( sizeof( *array_counter( g_lasers[localClientNum] ) ) + 0 ) )", "laserCount not in [0, ARRAY_COUNT( g_lasers[localClientNum] )]\n\t%i not in [%i, %i]", v5, 0i64, v8) )
        __debugbreak();
    }
    v3 = v2 - 1;
    if ( v3 >= 0 )
    {
      v4 = &g_lasers[v1][v3];
      do
      {
        CG_LaserClientEffectCleanUpAll((const LocalClientNum_t)v1, v4--);
        --v3;
      }
      while ( v3 >= 0 );
    }
    g_laserCount[v1] = 0;
  }
}

/*
==============
CG_LaserScreenCenterFraction
==============
*/
float CG_LaserScreenCenterFraction(const LocalClientNum_t localClientNum, const playerState_s *ps, const PlayerHandIndex playerHand)
{
  __int64 v3; 
  __int64 v5; 
  CgWeaponMap *v6; 
  double v7; 
  const Weapon *Weapon; 
  bool v9; 
  float v10; 
  int weaponState; 
  int v12; 
  int v13; 
  double v14; 
  float v15; 
  int v16; 
  double v17; 
  double v18; 
  double v19; 
  __int64 shotCount; 
  int *fireTime; 
  int v23; 
  int fireDelay; 

  v3 = localClientNum;
  v5 = playerHand;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 186, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 187, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (unsigned int)v5 >= 2 )
  {
    LODWORD(fireTime) = 2;
    LODWORD(shotCount) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 188, ASSERT_TYPE_ASSERT, "(unsigned)( playerHand ) < (unsigned)( NUM_WEAPON_HANDS )", "playerHand doesn't index NUM_WEAPON_HANDS\n\t%i not in [0, %i)", shotCount, fireTime) )
      __debugbreak();
  }
  if ( !CgWeaponMap::ms_instance[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v6 = CgWeaponMap::ms_instance[v3];
  v7 = BG_WeaponADSFractionAffectedByReload(v6, ps);
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 885, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 886, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  Weapon = BgWeaponMap::GetWeapon(v6, ps->weapCommon.weaponHandle);
  v9 = !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x22u) && (GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x11u) || GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x1Bu));
  v10 = (float)((float)(*(float *)&v7 * *(float *)&v7) * *(float *)&v7) * *(float *)&v7;
  weaponState = ps->weapState[v5].weaponState;
  if ( weaponState == 17 )
  {
    v12 = BG_PlayerDualWielding(ps);
    v13 = BG_RechamberTime(ps, Weapon, v9, v12 == 1);
    v14 = I_fclamp((float)(v13 - ps->weapState[v5].weaponTime) / (float)v13, 0.0, 1.0);
    v15 = (float)((float)((float)(*(float *)&v14 * 12.0) * *(float *)&v14) - (float)(*(float *)&v14 * 12.0)) + 1.0;
LABEL_29:
    v18 = I_fclamp(v15, 0.0, 1.0);
    v10 = v10 * *(float *)&v18;
    goto LABEL_30;
  }
  if ( weaponState == 16 && ((BG_GetWeaponFireType(Weapon, v9) - 1) & 0xFFFFFFFD) == 0 )
  {
    v16 = BG_PlayerDualWielding(ps);
    BG_GetFireTime(v6, ps, Weapon, v9, v16 == 1, ps->weapState[v5].weaponShotCount, &v23, &fireDelay);
    v17 = I_fclamp((float)(v23 - ps->weapState[v5].weaponTime) / (float)v23, 0.0, 1.0);
    v15 = (float)((float)((float)(*(float *)&v17 * 12.0) * *(float *)&v17) - (float)(*(float *)&v17 * 12.0)) + 1.0;
    goto LABEL_29;
  }
LABEL_30:
  v19 = I_fclamp((float)((float)((float)(ps->mountState.mountFraction * 12.0) * ps->mountState.mountFraction) - (float)(ps->mountState.mountFraction * 12.0)) + 1.0, 0.0, 1.0);
  return *(float *)&v19 * v10;
}

/*
==============
CG_LaserShouldDeferLocalPlayerDraw
==============
*/
bool CG_LaserShouldDeferLocalPlayerDraw()
{
  bool v0; 
  const dvar_t *v1; 
  bool v2; 

  v0 = Com_GameMode_SupportsFeature(WEAPON_SLIDE);
  v1 = DCONST_DVARBOOL_bg_cameraUpdateOrderFix;
  v2 = v0;
  if ( !DCONST_DVARBOOL_bg_cameraUpdateOrderFix && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_cameraUpdateOrderFix") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  return !v2 && v1->current.enabled;
}

/*
==============
CG_Laser_AddDrawAllWorkers
==============
*/
void CG_Laser_AddDrawAllWorkers(const LocalClientNum_t localClientNum, const LaserCollisionWorld world)
{
  __int64 v2; 
  int v4; 
  unsigned __int8 v5; 
  unsigned __int8 v6; 
  unsigned __int8 v7; 
  unsigned __int8 *p_flags; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  int data[2]; 
  unsigned __int8 v13; 
  char v14; 
  int v15[2]; 
  unsigned __int8 v16; 
  unsigned __int8 v17; 

  v2 = localClientNum;
  if ( Sys_ExistsWorkerCmdsOfType(WRKCMD_DRAW_LASERS) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 1611, ASSERT_TYPE_ASSERT, "(!Sys_ExistsWorkerCmdsOfType( WRKCMD_DRAW_LASERS ))", (const char *)&queryFormat, "!Sys_ExistsWorkerCmdsOfType( WRKCMD_DRAW_LASERS )") )
    __debugbreak();
  v4 = 96;
  if ( g_laserCount[v2] < 96 )
    v4 = g_laserCount[v2];
  if ( v4 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,int>(int)", "unsigned", (unsigned __int8)v4, "signed", v4) )
    __debugbreak();
  if ( (unsigned __int8)v4 > 0x60u )
  {
    LODWORD(v11) = 96;
    LODWORD(v10) = (unsigned __int8)v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 1619, ASSERT_TYPE_ASSERT, "( laserCount ) <= ( (96) )", "laserCount not in [0, MAX_LASERS]\n\t%u not in [0, %u]", v10, v11) )
      __debugbreak();
  }
  if ( (unsigned int)v2 >= 2 )
  {
    LODWORD(v11) = 2;
    LODWORD(v10) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 1620, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_laserDrawBatches ) ) + 0 ) )", "localClientNum doesn't index s_laserDrawBatches\n\t%i not in [0, %i)", v10, v11) )
      __debugbreak();
  }
  if ( (_BYTE)v4 )
  {
    v5 = 0;
    v6 = 0;
    v7 = 0;
    p_flags = &g_lasers[v2][0].flags;
    do
    {
      if ( (*p_flags & 4) == 0 )
      {
        if ( v7 >= 0xCu )
        {
          LODWORD(v11) = 12;
          LODWORD(v10) = v7;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 1642, ASSERT_TYPE_ASSERT, "(unsigned)( currentBatchIndex ) < (unsigned)( ( sizeof( *array_counter( s_laserDrawBatches[localClientNum] ) ) + 0 ) )", "currentBatchIndex doesn't index s_laserDrawBatches[localClientNum]\n\t%i not in [0, %i)", v10, v11) )
            __debugbreak();
        }
        if ( v5 >= 8u )
        {
          LODWORD(v11) = 8;
          LODWORD(v10) = v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 1643, ASSERT_TYPE_ASSERT, "(unsigned)( localLaserIndex ) < (unsigned)( ( sizeof( *array_counter( s_laserDrawBatches[localClientNum][currentBatchIndex] ) ) + 0 ) )", "localLaserIndex doesn't index s_laserDrawBatches[localClientNum][currentBatchIndex]\n\t%i not in [0, %i)", v10, v11) )
            __debugbreak();
        }
        v9 = v5++;
        s_laserDrawBatches[v2][v7][v9] = v6;
        if ( v5 == 8 )
        {
          data[0] = v2;
          data[1] = world;
          v13 = v7;
          v14 = 8;
          Sys_AddWorkerCmd(WRKCMD_DRAW_LASERS, data);
          ++v7;
          v5 = 0;
        }
      }
      ++v6;
      p_flags += 68;
    }
    while ( v6 < (unsigned __int8)v4 );
    if ( v5 )
    {
      v15[0] = v2;
      v15[1] = world;
      v16 = v7;
      v17 = v5;
      Sys_AddWorkerCmd(WRKCMD_DRAW_LASERS, v15);
    }
  }
}

/*
==============
CG_Laser_DrawAll_Single
==============
*/
void CG_Laser_DrawAll_Single(const LocalClientNum_t localClientNum, const LaserCollisionWorld world, const cg_t *const cgameGlob, const CgWeaponMap *const weaponMap, const characterInfo_t *const ci, const vec3_t *viewOffset, bool checkLaserVisibility, const bool usingNightVision, LaserClient *const laserClient)
{
  bool v14; 
  centity_t *cent; 
  const Weapon *v16; 
  team_t team; 
  team_t v18; 
  const Weapon *weapon; 
  const LaserDef *FriendlyLaserType; 
  LaserDef *laserDefault; 
  int v22; 
  bool v23; 
  BOOL laserLightEnum; 
  DObj *obj; 
  int handle; 
  const Weapon *laserClienta; 

  if ( (laserClient->flags & 4) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 1502, ASSERT_TYPE_ASSERT, "(0 == (laserClient->flags & LASER_CLIENT_REMOVED))", (const char *)&queryFormat, "0 == (laserClient->flags & LASER_CLIENT_REMOVED)") )
    __debugbreak();
  v14 = usingNightVision || (laserClient->flags & 1) != 0;
  handle = laserClient->entNum;
  cent = CG_GetEntity(localClientNum, handle);
  if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 1509, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  v16 = CG_Laser_GetWeapon(cent, cgameGlob, weaponMap);
  team = laserClient->team;
  laserClienta = v16;
  v18 = ci->team;
  if ( cgameGlob == (const cg_t *const)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 163, ASSERT_TYPE_ASSERT, "(playerState)", (const char *)&queryFormat, "playerState") )
    __debugbreak();
  if ( cent == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 164, ASSERT_TYPE_ASSERT, "(otherEntityState)", (const char *)&queryFormat, "otherEntityState") )
    __debugbreak();
  if ( v18 && v18 == team )
  {
    weapon = laserClienta;
    FriendlyLaserType = BG_GetFriendlyLaserType(laserClienta, 0, 0);
  }
  else
  {
    weapon = laserClienta;
    FriendlyLaserType = BG_GetEnemyLaserType(laserClienta, 0);
  }
  laserDefault = (LaserDef *)FriendlyLaserType;
  if ( !FriendlyLaserType )
    laserDefault = cgMedia.laserDefault;
  if ( world == LASER_COLLISION_ALL || ((v22 = 0, !laserDefault->clientCollision) ? (v23 = world == LASER_COLLISION_PRED) : (v23 = world == LASER_COLLISION_AUTH), LOBYTE(v22) = v23, v22) )
  {
    if ( checkLaserVisibility )
    {
      laserLightEnum = usingNightVision && laserDefault->laserLightNvgOnly;
      if ( !v14 )
      {
        CG_LaserClientEffectCleanUpAll(localClientNum, laserClient);
        return;
      }
    }
    else
    {
      laserLightEnum = 1;
    }
    obj = Com_GetClientDObj(handle, localClientNum);
    CG_LaserDraw(localClientNum, laserClient, laserDefault, NULL, NULL, cent, obj, &cent->pose, viewOffset, (LaserLightEnum)laserLightEnum, weapon, cent->nextState.inAltWeaponMode, 0);
  }
}

/*
==============
CG_Laser_DrawLasersCmd
==============
*/
void CG_Laser_DrawLasersCmd(const void *const cmd)
{
  unsigned __int8 v2; 
  unsigned __int8 v3; 
  bool v4; 
  bool usingNightVision; 
  cg_t *LocalClientGlobals; 
  float v7; 
  int clientNum; 
  const characterInfo_t *CharacterInfo; 
  __int64 v10; 
  const characterInfo_t *v11; 
  const CgWeaponMap *v12; 
  unsigned __int8 i; 
  vec3_t *viewOffset; 
  __int64 checkLaserVisibility; 
  vec3_t v16; 

  if ( !cmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 1665, ASSERT_TYPE_ASSERT, "(laserCmd)", (const char *)&queryFormat, "laserCmd") )
    __debugbreak();
  if ( *(_DWORD *)cmd >= 2u )
  {
    LODWORD(viewOffset) = *(_DWORD *)cmd;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 1667, ASSERT_TYPE_ASSERT, "(unsigned)( laserCmd->localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_laserDrawBatches ) ) + 0 ) )", "laserCmd->localClientNum doesn't index s_laserDrawBatches\n\t%i not in [0, %i)", viewOffset, 2) )
      __debugbreak();
  }
  v2 = *((_BYTE *)cmd + 8);
  if ( v2 >= 0xCu )
  {
    LODWORD(checkLaserVisibility) = 12;
    LODWORD(viewOffset) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 1668, ASSERT_TYPE_ASSERT, "(unsigned)( laserCmd->batchIndex ) < (unsigned)( ( sizeof( *array_counter( s_laserDrawBatches[laserCmd->localClientNum] ) ) + 0 ) )", "laserCmd->batchIndex doesn't index s_laserDrawBatches[laserCmd->localClientNum]\n\t%i not in [0, %i)", viewOffset, checkLaserVisibility) )
      __debugbreak();
  }
  v3 = *((_BYTE *)cmd + 9);
  if ( v3 > 8u )
  {
    LODWORD(checkLaserVisibility) = 8;
    LODWORD(viewOffset) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 1669, ASSERT_TYPE_ASSERT, "( laserCmd->count ) <= ( ( sizeof( *array_counter( s_laserDrawBatches[laserCmd->localClientNum][laserCmd->batchIndex] ) ) + 0 ) )", "laserCmd->count not in [0, ARRAY_COUNT( s_laserDrawBatches[laserCmd->localClientNum][laserCmd->batchIndex] )]\n\t%u not in [0, %u]", viewOffset, checkLaserVisibility) )
      __debugbreak();
  }
  v4 = Com_GameMode_SupportsFeature(WEAPON_BLAST_IMPACT);
  usingNightVision = v4 && CG_LookingThroughNightVision(*(const LocalClientNum_t *)cmd);
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)*(_DWORD *)cmd);
  v7 = LocalClientGlobals->refdef.viewOffset.v[1];
  clientNum = LocalClientGlobals->predictedPlayerState.clientNum;
  v16.v[0] = LocalClientGlobals->refdef.viewOffset.v[0];
  v16.v[2] = LocalClientGlobals->refdef.viewOffset.v[2];
  v16.v[1] = v7;
  CharacterInfo = CG_GetCharacterInfo(LocalClientGlobals, clientNum);
  v10 = *(int *)cmd;
  v11 = CharacterInfo;
  if ( !CgWeaponMap::ms_instance[v10] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v12 = CgWeaponMap::ms_instance[v10];
  for ( i = 0; i < *((_BYTE *)cmd + 9); ++i )
    CG_Laser_DrawAll_Single(*(const LocalClientNum_t *)cmd, *((const LaserCollisionWorld *)cmd + 1), LocalClientGlobals, v12, v11, &v16, v4, usingNightVision, &g_lasers[*(int *)cmd][s_laserDrawBatches[*(int *)cmd][*((unsigned __int8 *)cmd + 8)][i]]);
}

/*
==============
CG_Laser_GetWeapon
==============
*/
Weapon *CG_Laser_GetWeapon(const centity_t *cent, const cg_t *const cgameGlob, const CgWeaponMap *const weaponMap)
{
  int number; 
  const characterInfo_t *CharacterInfo; 
  Weapon *result; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 905, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 906, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 907, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 908, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  number = cent->nextState.number;
  if ( !cgameGlob->HasCharacterInfo((cg_t *)cgameGlob, number) )
    return (Weapon *)BG_GetWeaponForEntity(weaponMap, &cent->nextState);
  CharacterInfo = CG_GetCharacterInfo(cgameGlob, number);
  if ( !CharacterInfo )
    return (Weapon *)BG_GetWeaponForEntity(weaponMap, &cent->nextState);
  result = &CharacterInfo->dobjExecutionWeapon;
  if ( !result->weaponIdx )
    return (Weapon *)BG_GetWeaponForEntity(weaponMap, &cent->nextState);
  return result;
}

/*
==============
CG_ScriptedBeamDraw
==============
*/
void CG_ScriptedBeamDraw(LocalClientNum_t localClientNum, localEntity_s *le)
{
  __int64 v2; 
  centity_t *Entity; 
  const centity_t *v5; 
  const centity_t *v6; 
  __m128 v; 
  __m128 v12; 
  ParticleSystem *v15; 
  unsigned __int32 v16; 
  __int64 v17; 
  __m128 v18; 
  __m128 v19; 
  __m128 v20; 
  __m128 v21; 
  __m128 v22; 
  __m128 v23; 
  __m256i v24; 
  __m256i v25; 
  float4 endPos; 
  float4 startPos; 
  orientation_t outOrient; 
  orientation_t v29; 

  v2 = localClientNum;
  Entity = CG_GetEntity(localClientNum, le->ownerNum);
  v5 = CG_GetEntity((const LocalClientNum_t)v2, Entity->nextState.otherEntityNum);
  v6 = CG_GetEntity((const LocalClientNum_t)v2, le->u.laser.trackedEntNum);
  if ( CG_GetBeamEntOrientation((LocalClientNum_t)v2, v5, (const scr_string_t)le->u.laser.ownerTag, &outOrient) && CG_GetBeamEntOrientation((LocalClientNum_t)v2, v6, (const scr_string_t)le->u.laser.trackedEntTag, &v29) )
  {
    endPos.v.m128_i32[3] = 0;
    v = endPos.v;
    v.m128_f32[0] = outOrient.origin.v[0];
    _XMM3 = v;
    __asm
    {
      vinsertps xmm3, xmm3, dword ptr [rsp+128h+outOrient.origin+4], 10h
      vinsertps xmm3, xmm3, dword ptr [rsp+128h+outOrient.origin+8], 20h
    }
    endPos.v = _XMM3;
    startPos.v = _XMM3;
    endPos.v.m128_i32[3] = 0;
    v12 = endPos.v;
    v12.m128_f32[0] = v29.origin.v[0];
    _XMM3 = v12;
    __asm
    {
      vinsertps xmm3, xmm3, dword ptr [rsp+128h+var_68.origin+4], 10h
      vinsertps xmm3, xmm3, dword ptr [rsp+128h+var_68.origin+8], 20h
    }
    endPos.v = _XMM3;
    if ( le->u.laser.pBeamEffect == PARTICLE_SYSTEM_INVALID_HANDLE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 2766, ASSERT_TYPE_ASSERT, "(le->u.laser.pBeamEffect)", (const char *)&queryFormat, "le->u.laser.pBeamEffect") )
      __debugbreak();
    v15 = NULL;
    v16 = 0;
    if ( g_particleSystemsGeneration[4096 * v2 + (le->u.laser.pBeamEffect & 0xFFF)].__all32 == le->u.laser.pBeamEffect )
      v16 = le->u.laser.pBeamEffect & 0xFFF;
    v17 = (v2 << 12) + v16;
    if ( g_particleSystems[0][v17] >= (ParticleSystem *)0x1000 )
      v15 = g_particleSystems[0][v17];
    if ( v15 )
    {
      ParticleSystem::SetBeamPos(v15, &startPos, &endPos);
      v18 = startPos.v;
      v15->m_systemTransform.w = (float4)startPos.v;
      v19 = v15->m_systemTransform.z.v;
      v20 = _mm_shuffle_ps(v15->m_systemTransform.x.v, v15->m_systemTransform.y.v, 68);
      v21 = _mm_shuffle_ps(v15->m_systemTransform.x.v, v15->m_systemTransform.y.v, 238);
      v22 = _mm_shuffle_ps(v19, v18, 68);
      v23 = _mm_shuffle_ps(v19, v18, 238);
      *(__m128 *)&v24.m256i_u64[2] = _mm_shuffle_ps(v20, v22, 221);
      *(__m128 *)v24.m256i_i8 = _mm_shuffle_ps(v20, v22, 136);
      *(__m128 *)v25.m256i_i8 = _mm_shuffle_ps(v21, v23, 136);
      *(__m128 *)&v25.m256i_u64[2] = _mm_shuffle_ps(v21, v23, 221);
      *(__m256i *)v15->m_systemTransformTranspose.x.v.m128_f32 = v24;
      *(__m256i *)v15->m_systemTransformTranspose.z.v.m128_f32 = v25;
    }
  }
}

/*
==============
CG_ScriptedBeamPreAddDObjUpdate
==============
*/
void CG_ScriptedBeamPreAddDObjUpdate(LocalClientNum_t localClientNum, localEntity_s *le, const int entNum)
{
  int clientNum; 

  if ( !le && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 2869, ASSERT_TYPE_ASSERT, "(le)", (const char *)&queryFormat, "le") )
    __debugbreak();
  if ( le->leType != LE_BEAM_SCRIPTED && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 2870, ASSERT_TYPE_ASSERT, "(le->leType == LE_BEAM_SCRIPTED)", (const char *)&queryFormat, "le->leType == LE_BEAM_SCRIPTED") )
    __debugbreak();
  clientNum = CG_GetLocalClientGlobals(localClientNum)->predictedPlayerState.clientNum;
  if ( clientNum != entNum )
  {
    if ( entNum == 2048 )
      entNum = clientNum;
    CG_BeamCacheOwnerInfo(localClientNum, le, entNum, clientNum == entNum);
  }
}

/*
==============
CG_ScriptedLaserBeamAdd
==============
*/
void CG_ScriptedLaserBeamAdd(const LocalClientNum_t localClientNum, const centity_t *owner, const scr_string_t ownerTag, int fxId, const int trackedEntNum, scr_string_t trackedEntTag)
{
  const cpose_t *PoseExtended; 
  const cpose_t *v11; 
  vec3_t end; 
  vec3_t outOrigin; 
  __int64 v14; 
  vec3_t tagOffset; 

  v14 = -2i64;
  tagOffset.v[0] = 0.0;
  *(_QWORD *)&tagOffset.y = 0i64;
  PoseExtended = CG_GetPoseExtended(localClientNum, owner->nextState.number, 0);
  CG_GetPoseOrigin(PoseExtended, &outOrigin);
  v11 = CG_GetPoseExtended(localClientNum, trackedEntNum, 0);
  CG_GetPoseOrigin(v11, &end);
  CG_LaserBeamAddCommon(localClientNum, &outOrigin, &end, owner, ownerTag, &NULL_WEAPON, fxId, 0, LE_BEAM_SCRIPTED, trackedEntNum, trackedEntTag, &tagOffset, 90.0, 0);
  memset(&end, 0, sizeof(end));
  memset(&outOrigin, 0, sizeof(outOrigin));
}

/*
==============
CG_TrackingLaserBeamAdd
==============
*/
void CG_TrackingLaserBeamAdd(const LocalClientNum_t localClientNum, const vec3_t *start, const vec3_t *end, const centity_t *owner, const Weapon *weapon, const bool isAlternate, const int shotIndex, const int trackedEntNum, const scr_string_t autoTargetEntTag, const vec3_t *tagOffset, const float aimSpreadAmount, const bool isSecondaryLaser)
{
  leType_t type; 

  type = CG_GetLocalEntityTypeForTrackingBeamTracer(shotIndex);
  CG_LaserBeamAddCommon(localClientNum, start, end, owner, (const scr_string_t)0, weapon, 0, isAlternate, type, trackedEntNum, autoTargetEntTag, tagOffset, aimSpreadAmount, isSecondaryLaser);
}

