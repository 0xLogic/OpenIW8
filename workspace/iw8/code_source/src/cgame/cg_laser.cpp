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
  __int64 v26; 
  bool v27; 
  bool v28; 
  unsigned __int32 v68; 
  __int64 v69; 
  Material *laserMaterial; 
  FxBeam beam; 
  FXRegisteredDef def[2]; 
  float4 curvePoint1; 
  float4 endPos; 
  float4 startPos; 
  char v138; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
    vmovaps xmmword ptr [rax-0A8h], xmm12
    vmovaps xmmword ptr [rax-0B8h], xmm13
    vmovaps xmmword ptr [rax-0C8h], xmm14
    vmovaps xmmword ptr [rax-0D8h], xmm15
  }
  _R12 = curve;
  _RDI = start;
  _RSI = end;
  _RBX = laserDef;
  v26 = localClientNum;
  v27 = curve == NULL;
  if ( !curve )
  {
    v28 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 1959, ASSERT_TYPE_ASSERT, "(curve)", (const char *)&queryFormat, "curve");
    v27 = !v28;
    if ( v28 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm10, cs:__real@3f800000
    vmovss  xmm7, dword ptr [rsi]
    vsubss  xmm5, xmm7, dword ptr [rdi]
    vmovss  xmm8, dword ptr [rsi+4]
    vsubss  xmm4, xmm8, dword ptr [rdi+4]
    vmovss  xmm9, dword ptr [rsi+8]
    vsubss  xmm3, xmm9, dword ptr [rdi+8]
    vmulss  xmm1, xmm4, xmm4
    vmulss  xmm0, xmm5, xmm5
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm6, xmm2, xmm2
    vcmpless xmm0, xmm6, cs:__real@80000000
    vblendvps xmm0, xmm6, xmm10, xmm0
    vdivss  xmm1, xmm10, xmm0
    vmulss  xmm13, xmm5, xmm1
    vmulss  xmm14, xmm4, xmm1
    vmulss  xmm15, xmm3, xmm1
    vmovss  xmm1, [rsp+248h+arg_40]
    vxorps  xmm11, xmm11, xmm11
    vucomiss xmm1, xmm11
  }
  if ( !v27 )
  {
    __asm
    {
      vaddss  xmm0, xmm6, dword ptr [rbx+28h]
      vdivss  xmm11, xmm0, xmm1
    }
  }
  __asm { vcomiss xmm11, cs:__real@3f7fbe77 }
  _RAX = viewerPos;
  __asm
  {
    vmovss  xmm0, dword ptr [rax]
    vmovss  xmm1, dword ptr [rax+4]
    vsubss  xmm3, xmm0, xmm7
    vmovss  xmm0, dword ptr [rax+8]
    vsubss  xmm2, xmm1, xmm8
    vmulss  xmm1, xmm3, xmm3
    vsubss  xmm4, xmm0, xmm9
    vmulss  xmm2, xmm2, xmm2
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm1, xmm2, xmm2
    vmulss  xmm3, xmm1, dword ptr [rbx+2Ch]
    vmulss  xmm0, xmm3, cs:__real@3c23d70a
    vaddss  xmm12, xmm0, xmm10
  }
  if ( laserDef->beamEffect.particleSystemDef )
  {
    if ( le->u.laser.pBeamEffect == PARTICLE_SYSTEM_INVALID_HANDLE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 2034, ASSERT_TYPE_ASSERT, "(le->u.laser.pBeamEffect)", (const char *)&queryFormat, "le->u.laser.pBeamEffect") )
      __debugbreak();
    _R10 = NULL;
    v68 = 0;
    if ( g_particleSystemsGeneration[4096 * v26 + (le->u.laser.pBeamEffect & 0xFFF)].__all32 == le->u.laser.pBeamEffect )
      v68 = le->u.laser.pBeamEffect & 0xFFF;
    v69 = (v26 << 12) + v68;
    if ( g_particleSystems[0][v69] >= (ParticleSystem *)0x1000 )
      _R10 = g_particleSystems[0][v69];
    if ( _R10 )
    {
      __asm { vmovss  xmm0, dword ptr [rdi] }
      HIDWORD(def[1].m_particleSystemDef) = 0;
      __asm
      {
        vmovups xmm4, xmmword ptr [rsp+248h+def.m_particleSystemDef]
        vmovss  xmm4, xmm4, xmm0
        vmovss  xmm0, dword ptr [rsi]
        vinsertps xmm4, xmm4, dword ptr [rdi+4], 10h
        vinsertps xmm4, xmm4, dword ptr [rdi+8], 20h ; ' '
        vmovups xmmword ptr [rsp+248h+def.m_particleSystemDef], xmm4
      }
      HIDWORD(def[1].m_particleSystemDef) = 0;
      __asm
      {
        vmovups xmm3, xmmword ptr [rsp+248h+def.m_particleSystemDef]
        vmovss  xmm3, xmm3, xmm0
        vinsertps xmm3, xmm3, dword ptr [rsi+4], 10h
        vinsertps xmm3, xmm3, dword ptr [rsi+8], 20h ; ' '
        vmovups xmmword ptr [rsp+248h+def.m_particleSystemDef], xmm3
        vmovups xmmword ptr [r10+30h], xmm4
        vmovups xmm1, xmmword ptr [r10+20h]
        vmovups xmmword ptr [rsp+248h+endPos.v], xmm3
        vmovups xmm3, xmmword ptr [r10]
        vshufps xmm6, xmm3, xmmword ptr [r10+10h], 44h ; 'D'
        vshufps xmm2, xmm3, xmmword ptr [r10+10h], 0EEh ; 'î'
        vmovups xmm0, xmm4
        vshufps xmm5, xmm1, xmm0, 0EEh ; 'î'
      }
      HIDWORD(def[1].m_particleSystemDef) = 0;
      __asm
      {
        vmovups xmm3, xmmword ptr [rsp+248h+def.m_particleSystemDef]
        vmovups xmmword ptr [rsp+248h+startPos.v], xmm4
        vshufps xmm4, xmm1, xmm4, 44h ; 'D'
        vshufps xmm0, xmm6, xmm4, 88h ; 'ˆ'
        vmovups xmmword ptr [rsp+248h+var_218], xmm0
        vshufps xmm1, xmm6, xmm4, 0DDh ; 'Ý'
        vmovups xmmword ptr [rsp+248h+var_218+10h], xmm1
        vshufps xmm0, xmm2, xmm5, 88h ; 'ˆ'
        vmovups xmmword ptr [rsp+248h+var_1F8], xmm0
        vmovups ymm0, [rsp+248h+var_218]
        vmovups ymmword ptr [r10+40h], ymm0
        vshufps xmm1, xmm2, xmm5, 0DDh ; 'Ý'
        vmovups xmmword ptr [rsp+248h+var_1F8+10h], xmm1
        vmovups ymm1, [rsp+248h+var_1F8]
        vmovups ymmword ptr [r10+60h], ymm1
        vmovss  xmm0, dword ptr [r12+0Ch]
        vmovss  xmm3, xmm3, xmm0
        vinsertps xmm3, xmm3, dword ptr [r12+10h], 10h
        vinsertps xmm3, xmm3, dword ptr [r12+14h], 20h ; ' '
        vmovss  xmm0, dword ptr [r12+18h]
        vmovups xmmword ptr [rsp+248h+def.m_particleSystemDef], xmm3
        vmovups xmmword ptr [rsp+248h+curvePoint1.v], xmm3
      }
      HIDWORD(def[1].m_particleSystemDef) = 0;
      __asm
      {
        vmovups xmm3, xmmword ptr [rsp+248h+def.m_particleSystemDef]
        vmovss  xmm3, xmm3, xmm0
        vinsertps xmm3, xmm3, dword ptr [r12+1Ch], 10h
        vinsertps xmm3, xmm3, dword ptr [r12+20h], 20h ; ' '
        vmovups xmmword ptr [rsp+248h+def.m_particleSystemDef], xmm3
        vmovups xmmword ptr [rsp+248h+def.m_particleSystemDef], xmm3
      }
      ParticleSystem::SetBeamCurvePoints(_R10, &startPos, &endPos, &curvePoint1, (const float4 *)def);
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rdi]
      vmovss  xmm1, dword ptr [rdi+4]
    }
    laserMaterial = laserDef->laserMaterial;
    __asm
    {
      vmovss  dword ptr [rsp+248h+beam.begin], xmm0
      vmovss  xmm0, dword ptr [rdi+8]
      vmovss  dword ptr [rsp+248h+beam.begin+4], xmm1
      vmovss  xmm1, dword ptr [rsi]
      vmovss  dword ptr [rsp+248h+beam.begin+8], xmm0
      vmovss  xmm0, dword ptr [rsi+4]
      vmovss  dword ptr [rsp+248h+beam.end], xmm1
      vmovss  xmm1, dword ptr [rsi+8]
      vmovss  dword ptr [rsp+248h+beam.end+4], xmm0
      vmovss  xmm0, dword ptr [rbx+54h]
      vmulss  xmm3, xmm0, dword ptr [rbx+44h]
      vmovss  xmm0, dword ptr [rbx+5Ch]
      vmovss  dword ptr [rsp+248h+beam.end+8], xmm1
      vmovss  xmm1, dword ptr [rbx+58h]
      vmulss  xmm2, xmm1, dword ptr [rbx+48h]
      vmulss  xmm1, xmm0, dword ptr [rbx+4Ch]
      vsubss  xmm0, xmm10, xmm11
      vmovss  dword ptr [rsp+248h+beam.colors+8], xmm1
      vmovss  dword ptr [rsp+248h+beam.colors+18h], xmm1
      vmovss  xmm1, dword ptr [rbx+20h]
      vmovss  dword ptr [rsp+248h+beam.colors+1Ch], xmm0
      vmulss  xmm0, xmm1, xmm12
      vmovss  dword ptr [rsp+248h+beam.___u9], xmm0
      vmovss  dword ptr [rsp+248h+beam.colors], xmm3
      vmovss  dword ptr [rsp+248h+beam.colors+4], xmm2
      vmovss  dword ptr [rsp+248h+beam.colors+0Ch], xmm10
      vmovss  dword ptr [rsp+248h+beam.colors+10h], xmm3
      vmovss  dword ptr [rsp+248h+beam.colors+14h], xmm2
      vmovss  [rsp+248h+beam.radius], xmm1
    }
    *(_WORD *)&beam.type = 1;
    beam.material = laserMaterial;
    beam.segmentCount = 1;
    FX_Beam_Add(&beam);
  }
  _R11 = &v138;
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
AddCore
==============
*/
bool AddCore(LocalClientNum_t localClientNum, centity_t *cent, orientation_t *orient, const vec3_t *laserEndPointTraceStartPos, const vec3_t *viewerPos, const vec3_t *localPlayerGunAngles, LaserLightEnum laserLightEnum, const LaserDef *laserDef, ParticleSystemHandle *outBeamEffectHandle, ParticleSystemHandle *outEndEffectHandle, unsigned __int8 *priorityMap, bool isPlayerView, const PlayerHandIndex playerHand, bool viewCenterInAds)
{
  __int64 v28; 
  bool v29; 
  const dvar_t *v30; 
  char v31; 
  int v32; 
  int v33; 
  cg_t *v34; 
  bool v35; 
  char v36; 
  int locational; 
  __int16 otherEntityNum; 
  char v62; 
  const vec3_t *v64; 
  const ParticleSystemDef *particleSystemDef; 
  ParticleSystemHandle v123; 
  __int16 v124; 
  unsigned int v126; 
  __int64 v129; 
  ParticleSystemHandle *v130; 
  ParticleSystemHandle v131; 
  ParticleSystem *ParticleSystemPointerUnsafe; 
  char v160; 
  bool v161; 
  const ParticleSystemDef *v175; 
  unsigned __int32 v176; 
  __int64 v178; 
  ParticleSystemHandle *v179; 
  cg_t *v180; 
  ParticleSystemHandle v181; 
  ParticleSystem *v182; 
  unsigned int v225; 
  int v228; 
  Material *laserLightMaterial; 
  bool result; 
  int *skipEntities; 
  __int64 skipEntityCount; 
  int v245; 
  Physics_WorldId worldId; 
  ParticleManager *v247; 
  int v248; 
  int v249[2]; 
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
  char v267; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-98h], xmm11
    vmovaps xmmword ptr [rax-0A8h], xmm12
    vmovaps xmmword ptr [rax-0B8h], xmm13
  }
  _RBX = laserDef;
  _R13 = orient;
  *(_QWORD *)angles.v = localPlayerGunAngles;
  systemOrientationQuat.v.m128_u64[0] = (unsigned __int64)priorityMap;
  start[0] = (vec3_t *)laserEndPointTraceStartPos;
  v28 = localClientNum;
  if ( !laserDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 316, ASSERT_TYPE_ASSERT, "(laserDef)", (const char *)&queryFormat, "laserDef") )
    __debugbreak();
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 317, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( !_R13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 318, ASSERT_TYPE_ASSERT, "(orient)", (const char *)&queryFormat, "orient") )
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
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v28);
  if ( (unsigned int)v28 >= 2 )
  {
    LODWORD(skipEntityCount) = 2;
    LODWORD(skipEntities) = v28;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", skipEntities, skipEntityCount) )
      __debugbreak();
  }
  v247 = &g_particleManager[v28];
  if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 326, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v29 = Com_GameMode_SupportsFeature(WEAPON_SLIDE);
  if ( !isPlayerView )
    goto LABEL_31;
  v30 = DCONST_DVARBOOL_bg_cameraUpdateOrderFix;
  if ( !DCONST_DVARBOOL_bg_cameraUpdateOrderFix && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_cameraUpdateOrderFix") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v30);
  if ( v30->current.enabled )
    v31 = 1;
  else
LABEL_31:
    v31 = 0;
  if ( v29 )
  {
    if ( isPlayerView )
      v32 = 4;
    else
      v32 = laserDef->clientCollision + 2;
  }
  else
  {
    v33 = 2;
    if ( v31 )
      v33 = 4;
    v32 = v33;
  }
  worldId = v32 + 3 * v28;
  v34 = CG_GetLocalClientGlobals((const LocalClientNum_t)v28);
  v245 = 1;
  v35 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&v34->predictedPlayerState.otherFlags, ACTIVE, 2u);
  if ( cent->nextState.eType == ET_ACTOR )
    v36 = v35 ^ ((cent->nextState.un.vehicleXModel & 2) != 0);
  else
    v36 = v35;
  memset_0(&results, 0, sizeof(results));
  __asm
  {
    vmovss  xmm11, dword ptr [r13+0]
    vmovss  xmm12, dword ptr [r13+4]
    vmovss  xmm13, dword ptr [r13+8]
    vmovss  xmm6, dword ptr [rbx+1Ch]
    vmovss  dword ptr [rsp+308h+curvePoint2.v], xmm11
    vmovss  dword ptr [rsp+308h+curvePoint2.v+4], xmm12
    vmovss  dword ptr [rsp+308h+curvePoint2.v+8], xmm13
  }
  if ( Com_GameMode_SupportsFeature(WEAPON_MANTLE_LADDER) || v31 || !isPlayerView )
  {
    locational = 1;
  }
  else
  {
    locational = 0;
    v245 = 0;
  }
  otherEntityNum = cent->nextState.otherEntityNum;
  v249[0] = cent->nextState.number;
  if ( otherEntityNum != 2047 )
    v249[1] = otherEntityNum;
  __asm
  {
    vmulss  xmm0, xmm6, dword ptr [r14]
    vmovaps [rsp+308h+var_58], xmm7
    vaddss  xmm1, xmm0, dword ptr [rdi]
    vmulss  xmm0, xmm6, dword ptr [r14+4]
    vmovaps [rsp+308h+var_68], xmm8
  }
  v248 = (otherEntityNum != 2047) + 1;
  __asm
  {
    vmovss  dword ptr [rsp+308h+end], xmm1
    vaddss  xmm1, xmm0, dword ptr [rdi+4]
    vmulss  xmm0, xmm6, dword ptr [r14+8]
    vmovss  dword ptr [rsp+308h+end+4], xmm1
    vaddss  xmm1, xmm0, dword ptr [rdi+8]
    vmovaps [rsp+308h+var_78], xmm9
    vmovaps [rsp+308h+var_88], xmm10
    vmovss  dword ptr [rsp+308h+end+8], xmm1
    vmovaps [rsp+308h+var_D8], xmm15
  }
  PhysicsQuery_LegacyTraceSkipEntities(worldId, &results, start[0], &end, &bounds_origin, v249, v248, 0, 41969953, locational, (unsigned __int8 *)systemOrientationQuat.v.m128_u64[0], All);
  if ( results.startsolid )
    goto LABEL_118;
  __asm { vmulss  xmm15, xmm6, [rsp+308h+results.fraction] }
  if ( isPlayerView )
    __asm { vmovss  xmm7, dword ptr [rbx+24h] }
  else
    __asm { vmovss  xmm7, dword ptr [rbx+28h] }
  __asm
  {
    vmovss  xmm9, cs:__real@3f800000
    vsubss  xmm2, xmm15, xmm7
    vmulss  xmm0, xmm2, dword ptr [r14]
    vaddss  xmm1, xmm0, dword ptr [rdi]
    vmulss  xmm0, xmm2, dword ptr [r14+4]
    vmovss  dword ptr [rsp+308h+origin], xmm1
    vaddss  xmm1, xmm0, dword ptr [rdi+4]
    vmulss  xmm0, xmm2, dword ptr [r14+8]
    vmovss  dword ptr [rsp+308h+origin+4], xmm1
    vaddss  xmm1, xmm0, dword ptr [rdi+8]
  }
  _RDI = viewerPos;
  __asm
  {
    vmovss  dword ptr [rsp+308h+origin+8], xmm1
    vxorps  xmm10, xmm10, xmm10
  }
  v62 = 0;
  if ( isPlayerView )
  {
    v62 = 0;
    if ( viewCenterInAds )
    {
      *(float *)&_XMM0 = CG_LaserScreenCenterFraction((const LocalClientNum_t)v28, &LocalClientGlobals->predictedPlayerState, playerHand);
      __asm
      {
        vcomiss xmm0, cs:THRESHOLD_TO_USE_SHOOTING_DIR
        vmovaps xmm8, xmm0
      }
      if ( !(v62 | v161) )
      {
        v64 = *(const vec3_t **)angles.v;
        if ( !*(_QWORD *)angles.v && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 402, ASSERT_TYPE_ASSERT, "(localPlayerGunAngles)", (const char *)&queryFormat, "localPlayerGunAngles") )
          __debugbreak();
        AngleVectors(v64, &angles, NULL, NULL);
        __asm
        {
          vmovss  xmm2, dword ptr [rdi]
          vmulss  xmm1, xmm6, dword ptr [rsp+308h+angles]
          vmovss  xmm3, dword ptr [rdi+4]
          vmovss  xmm4, dword ptr [rdi+8]
          vmovss  dword ptr [rsp+308h+start], xmm2
          vaddss  xmm2, xmm1, xmm2
          vmulss  xmm1, xmm6, dword ptr [rsp+308h+angles+4]
          vmovss  dword ptr [rsp+308h+startPos.v], xmm2
          vaddss  xmm2, xmm1, xmm3
          vmulss  xmm1, xmm6, [rsp+308h+var_180]
          vmovss  dword ptr [rsp+308h+startPos.v+4], xmm2
          vaddss  xmm2, xmm1, xmm4
          vmovss  dword ptr [rsp+308h+start+4], xmm3
          vmovss  dword ptr [rsp+308h+start+8], xmm4
          vmovss  dword ptr [rsp+308h+startPos.v+8], xmm2
        }
        PhysicsQuery_LegacyTraceSkipEntities(worldId, &results, (const vec3_t *)start, (const vec3_t *)&startPos, &bounds_origin, v249, v248, 0, 41969953, v245, (unsigned __int8 *)systemOrientationQuat.v.m128_u64[0], All);
        v62 = 0;
        if ( !results.startsolid )
        {
          __asm
          {
            vsubss  xmm1, xmm8, cs:THRESHOLD_TO_USE_SHOOTING_DIR
            vsubss  xmm0, xmm9, cs:THRESHOLD_TO_USE_SHOOTING_DIR
            vdivss  xmm0, xmm1, xmm0; val
            vxorps  xmm1, xmm1, xmm1; min
            vmovaps xmm2, xmm9; max
          }
          *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
          __asm
          {
            vmulss  xmm2, xmm6, [rsp+308h+results.fraction]
            vsubss  xmm4, xmm2, xmm7
            vmulss  xmm1, xmm4, dword ptr [rsp+308h+angles+4]
            vaddss  xmm6, xmm1, dword ptr [rsp+308h+start+4]
            vmulss  xmm2, xmm4, [rsp+308h+var_180]
            vaddss  xmm7, xmm2, dword ptr [rsp+308h+start+8]
            vmulss  xmm3, xmm4, dword ptr [rsp+308h+angles]
            vaddss  xmm5, xmm3, dword ptr [rsp+308h+start]
            vsubss  xmm1, xmm5, dword ptr [rsp+308h+origin]
            vmovaps xmm8, xmm0
            vmulss  xmm0, xmm1, xmm0
            vaddss  xmm2, xmm0, dword ptr [rsp+308h+origin]
            vsubss  xmm0, xmm6, dword ptr [rsp+308h+origin+4]
            vmulss  xmm1, xmm0, xmm8
            vsubss  xmm0, xmm7, dword ptr [rsp+308h+origin+8]
            vmovss  dword ptr [rsp+308h+origin], xmm2
            vaddss  xmm2, xmm1, dword ptr [rsp+308h+origin+4]
            vmulss  xmm1, xmm0, xmm8
            vmovss  dword ptr [rsp+308h+origin+4], xmm2
            vaddss  xmm2, xmm1, dword ptr [rsp+308h+origin+8]
            vmovss  dword ptr [rsp+308h+origin+8], xmm2
            vmovss  dword ptr [rsp+308h+startPos.v], xmm5
            vmovss  dword ptr [rsp+308h+startPos.v+4], xmm6
            vmovss  dword ptr [rsp+308h+startPos.v+8], xmm7
          }
        }
      }
    }
  }
  __asm
  {
    vmovss  xmm4, dword ptr [rsp+308h+origin+4]
    vsubss  xmm0, xmm4, dword ptr [r13+4]
    vmulss  xmm2, xmm0, dword ptr [r14+4]
    vmovss  xmm5, dword ptr [rsp+308h+origin]
    vsubss  xmm1, xmm5, dword ptr [r13+0]
    vmulss  xmm0, xmm1, dword ptr [r14]
    vmovss  xmm6, dword ptr [rsp+308h+origin+8]
    vsubss  xmm1, xmm6, dword ptr [r13+8]
    vaddss  xmm3, xmm2, xmm0
    vmulss  xmm0, xmm1, dword ptr [r14+8]
    vaddss  xmm2, xmm3, xmm0
    vcomiss xmm2, xmm10
  }
  if ( v62 )
  {
LABEL_118:
    result = 0;
    goto LABEL_119;
  }
  __asm
  {
    vmovaps [rsp+308h+var_C8], xmm14
    vmovss  xmm0, dword ptr [rdi]
    vmovss  xmm1, dword ptr [rdi+4]
    vsubss  xmm2, xmm1, xmm4
    vsubss  xmm3, xmm0, xmm5
    vmovss  xmm0, dword ptr [rdi+8]
    vmulss  xmm2, xmm2, xmm2
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm3, xmm2, xmm1
    vsubss  xmm4, xmm0, xmm6
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm1, xmm2, xmm2
  }
  if ( v36 )
    __asm { vmovss  xmm0, dword ptr [rbx+0A4h] }
  else
    __asm { vmovss  xmm0, dword ptr [rbx+2Ch] }
  particleSystemDef = laserDef->beamEffect.particleSystemDef;
  __asm { vmulss  xmm0, xmm0, xmm1 }
  v123 = *outBeamEffectHandle;
  v124 = *outBeamEffectHandle;
  __asm { vmulss  xmm1, xmm0, cs:__real@3c23d70a }
  v126 = 0;
  *(_QWORD *)angles.v = v28 << 12;
  __asm { vaddss  xmm14, xmm1, xmm9 }
  if ( g_particleSystemsGeneration[4096 * v28 + (v124 & 0xFFF)].__all32 == v123 )
    v126 = v123 & 0xFFF;
  _RDI = NULL;
  v129 = (v28 << 12) + v126;
  if ( g_particleSystems[0][v129] >= (ParticleSystem *)0x1000 )
    _RDI = g_particleSystems[0][v129];
  if ( particleSystemDef )
  {
    if ( _RDI )
    {
      if ( ParticleSystem::GetDef(_RDI) == particleSystemDef )
        goto LABEL_77;
      v130 = outBeamEffectHandle;
      ParticleManager::KillSystem(v247, *outBeamEffectHandle);
      *outBeamEffectHandle = PARTICLE_SYSTEM_INVALID_HANDLE;
      particleSystemDef = laserDef->beamEffect.particleSystemDef;
    }
    else
    {
      v130 = outBeamEffectHandle;
    }
    v131 = CG_AddBeamEffect(particleSystemDef, (LocalClientNum_t)v28, (const vec3_t *)&curvePoint2, &origin);
    *v130 = v131;
    ParticleSystemPointerUnsafe = Particle_GetParticleSystemPointerUnsafe((LocalClientNum_t)v28, v131);
    _RDI = ParticleSystemPointerUnsafe;
    if ( ParticleSystemPointerUnsafe )
    {
      ParticleSystemPointerUnsafe->m_flags |= 0x10000000ui64;
      __asm
      {
        vmovss  xmm13, dword ptr [rsp+308h+curvePoint2.v+8]
        vmovss  xmm12, dword ptr [rsp+308h+curvePoint2.v+4]
        vmovss  xmm11, dword ptr [rsp+308h+curvePoint2.v]
      }
LABEL_77:
      __asm { vmovss  xmm0, dword ptr [rsp+308h+origin] }
      curvePoint2.v.m128_i32[3] = 0;
      __asm
      {
        vmovups xmm4, xmmword ptr [rsp+308h+curvePoint2.v]
        vmovss  xmm4, xmm4, xmm11
        vinsertps xmm4, xmm4, xmm12, 10h
        vinsertps xmm4, xmm4, xmm13, 20h ; ' '
        vmovups xmmword ptr [rsp+308h+curvePoint2.v], xmm4
      }
      curvePoint2.v.m128_i32[3] = 0;
      __asm
      {
        vmovups xmm3, xmmword ptr [rsp+308h+curvePoint2.v]
        vmovss  xmm3, xmm3, xmm0
        vinsertps xmm3, xmm3, dword ptr [rsp+308h+origin+4], 10h
        vinsertps xmm3, xmm3, dword ptr [rsp+308h+origin+8], 20h
        vmovups xmmword ptr [rdi+30h], xmm4
        vmovups xmm1, xmmword ptr [rdi+20h]
        vmovups xmm0, xmm4
        vshufps xmm5, xmm1, xmm0, 0EEh ; 'î'
        vmovups xmmword ptr [rsp+308h+curvePoint2.v], xmm3
        vmovups xmmword ptr [rsp+308h+curvePoint2.v], xmm3
        vmovups xmm3, xmmword ptr [rdi]
        vshufps xmm6, xmm3, xmmword ptr [rdi+10h], 44h ; 'D'
        vshufps xmm2, xmm3, xmmword ptr [rdi+10h], 0EEh ; 'î'
        vmovups xmmword ptr [rsp+308h+startPos.v], xmm4
        vshufps xmm4, xmm1, xmm4, 44h ; 'D'
        vshufps xmm0, xmm6, xmm4, 88h ; 'ˆ'
        vshufps xmm1, xmm6, xmm4, 0DDh ; 'Ý'
        vmovups xmmword ptr [rsp+308h+beam.end], xmm1
        vmovups xmmword ptr [rsp+308h+beam.type], xmm0
        vshufps xmm0, xmm2, xmm5, 88h ; 'ˆ'
        vshufps xmm1, xmm2, xmm5, 0DDh ; 'Ý'
        vmovups xmmword ptr [rsp+308h+beam.colors], xmm0
        vmovups ymm0, ymmword ptr [rsp+308h+beam.type]
        vmovups xmmword ptr [rsp+308h+beam.colors+10h], xmm1
        vmovups ymm1, ymmword ptr [rsp+308h+beam.colors]
        vmovups ymmword ptr [rdi+40h], ymm0
        vmovups ymmword ptr [rdi+60h], ymm1
      }
      ParticleSystem::SetBeamCurvePoints(_RDI, &startPos, &curvePoint2, &startPos, &curvePoint2);
      AxisToQuat(&_R13->axis, (vec4_t *)start);
      __asm
      {
        vmovups xmm0, xmmword ptr [rsp+308h+start]
        vmovups xmmword ptr [rsp+308h+systemOrientationQuat.v], xmm0
      }
      ParticleSystem::SetSystemOrientation(_RDI, &systemOrientationQuat);
      goto LABEL_88;
    }
    Com_PrintWarning(21, "WARNING: Could not allocate effect %s\n", laserDef->beamEffect.particleSystemDef->name);
  }
  else
  {
    v160 = 0;
    v161 = _RDI == NULL;
    if ( _RDI )
    {
      ParticleManager::KillSystem(v247, v123);
      *outBeamEffectHandle = PARTICLE_SYSTEM_INVALID_HANDLE;
    }
    __asm
    {
      vmovss  xmm0, [rsp+308h+results.fraction]
      vcomiss xmm0, cs:__real@3f800347
    }
    beam.type = 1;
    beam.depthHack = isPlayerView;
    if ( !(v160 | v161) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 504, ASSERT_TYPE_ASSERT, "(traceResults.fraction <= 1.0001f)", (const char *)&queryFormat, "traceResults.fraction <= 1.0001f") )
      __debugbreak();
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+308h+origin]
      vmovss  xmm1, dword ptr [rsp+308h+origin+4]
      vmovss  dword ptr [rsp+308h+beam.end], xmm0
      vmovss  xmm0, dword ptr [rsp+308h+origin+8]
      vmovss  dword ptr [rsp+308h+beam.end+8], xmm0
      vmovss  xmm0, dword ptr [rbx+58h]
      vmulss  xmm2, xmm0, dword ptr [rbx+48h]
      vmovss  dword ptr [rsp+308h+beam.end+4], xmm1
      vmovss  xmm1, dword ptr [rbx+54h]
      vmulss  xmm3, xmm1, dword ptr [rbx+44h]
      vmovss  xmm1, dword ptr [rbx+5Ch]
      vmulss  xmm0, xmm1, dword ptr [rbx+4Ch]
      vmovss  dword ptr [rsp+308h+beam.colors+8], xmm0
      vmovss  dword ptr [rsp+308h+beam.colors+18h], xmm0
      vsubss  xmm0, xmm9, [rsp+308h+results.fraction]
      vmovss  dword ptr [rsp+308h+beam.colors+1Ch], xmm0
      vmovss  dword ptr [rsp+308h+beam.begin], xmm11
      vmovss  dword ptr [rsp+308h+beam.begin+4], xmm12
      vmovss  dword ptr [rsp+308h+beam.begin+8], xmm13
      vmovss  dword ptr [rsp+308h+beam.colors], xmm3
      vmovss  dword ptr [rsp+308h+beam.colors+4], xmm2
      vmovss  dword ptr [rsp+308h+beam.colors+0Ch], xmm9
      vmovss  dword ptr [rsp+308h+beam.colors+10h], xmm3
      vmovss  dword ptr [rsp+308h+beam.colors+14h], xmm2
    }
    if ( v36 )
      __asm { vmovss  xmm0, dword ptr [rbx+9Ch] }
    else
      __asm { vmovss  xmm0, dword ptr [rbx+20h] }
    __asm
    {
      vmovss  [rsp+308h+beam.radius], xmm0
      vmulss  xmm0, xmm0, xmm14
      vmovss  dword ptr [rsp+308h+beam.___u9], xmm0
    }
    Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_PARACHUTE_IDLE|WEAPON_LADDER_AIM);
    beam.material = laserDef->laserMaterial;
    beam.segmentCount = 1;
    FX_Beam_Add(&beam);
  }
LABEL_88:
  v175 = laserDef->laserEndEffect.particleSystemDef;
  v176 = 0;
  if ( g_particleSystemsGeneration[*(_QWORD *)angles.v + (*outEndEffectHandle & 0xFFF)].__all32 == *outEndEffectHandle )
    v176 = *outEndEffectHandle & 0xFFF;
  _RDI = NULL;
  v178 = *(_QWORD *)angles.v + v176;
  if ( g_particleSystems[0][v178] >= (ParticleSystem *)0x1000 )
    _RDI = g_particleSystems[0][v178];
  if ( !v175 )
  {
    if ( _RDI )
    {
      ParticleManager::KillSystem(v247, *outEndEffectHandle);
      *outEndEffectHandle = PARTICLE_SYSTEM_INVALID_HANDLE;
    }
    goto LABEL_104;
  }
  if ( _RDI )
  {
    if ( ParticleSystem::GetDef(_RDI) == v175 )
      goto LABEL_100;
    v179 = outEndEffectHandle;
    ParticleManager::KillSystem(v247, *outEndEffectHandle);
    *outEndEffectHandle = PARTICLE_SYSTEM_INVALID_HANDLE;
    v175 = laserDef->laserEndEffect.particleSystemDef;
  }
  else
  {
    v179 = outEndEffectHandle;
  }
  *(_QWORD *)angles.v = v175;
  v180 = CG_GetLocalClientGlobals((const LocalClientNum_t)v28);
  v181 = FX_PlayOrientedEffect((LocalClientNum_t)v28, (const FXRegisteredDef *)&angles, v180->time, &origin, &_R13->axis);
  *v179 = v181;
  v182 = Particle_GetParticleSystemPointerUnsafe((LocalClientNum_t)v28, v181);
  _RDI = v182;
  if ( v182 )
  {
    v182->m_flags |= 0x10000000ui64;
LABEL_100:
    __asm { vmovss  xmm0, dword ptr [rsp+308h+origin] }
    curvePoint2.v.m128_i32[3] = 0;
    __asm
    {
      vmovups xmm3, xmmword ptr [rsp+308h+curvePoint2.v]
      vmovss  xmm3, xmm3, xmm0
      vinsertps xmm3, xmm3, dword ptr [rsp+308h+origin+4], 10h
      vinsertps xmm3, xmm3, dword ptr [rsp+308h+origin+8], 20h
      vmovups xmmword ptr [rdi+30h], xmm3
      vmovups xmm1, xmmword ptr [rdi+20h]
      vshufps xmm4, xmm1, xmmword ptr [rdi+30h], 44h ; 'D'
      vshufps xmm5, xmm1, xmmword ptr [rdi+30h], 0EEh ; 'î'
      vmovups xmmword ptr [rsp+308h+curvePoint2.v], xmm3
      vmovups xmm3, xmmword ptr [rdi]
      vshufps xmm6, xmm3, xmmword ptr [rdi+10h], 44h ; 'D'
      vshufps xmm2, xmm3, xmmword ptr [rdi+10h], 0EEh ; 'î'
      vshufps xmm0, xmm6, xmm4, 88h ; 'ˆ'
      vshufps xmm1, xmm6, xmm4, 0DDh ; 'Ý'
      vmovups xmmword ptr [rsp+308h+beam.end], xmm1
      vmovups xmmword ptr [rsp+308h+beam.type], xmm0
      vshufps xmm0, xmm2, xmm5, 88h ; 'ˆ'
      vshufps xmm1, xmm2, xmm5, 0DDh ; 'Ý'
      vmovups xmmword ptr [rsp+308h+beam.colors], xmm0
      vmovups ymm0, ymmword ptr [rsp+308h+beam.type]
      vmovups xmmword ptr [rsp+308h+beam.colors+10h], xmm1
      vmovups ymm1, ymmword ptr [rsp+308h+beam.colors]
      vmovups ymmword ptr [rdi+40h], ymm0
      vmovups ymmword ptr [rdi+60h], ymm1
    }
    AxisToQuat(&_R13->axis, (vec4_t *)&curvePoint2);
    __asm
    {
      vmovups xmm0, xmmword ptr [rsp+308h+curvePoint2.v]
      vmovups xmmword ptr [rsp+308h+startPos.v], xmm0
    }
    ParticleSystem::SetSystemOrientation(_RDI, &startPos);
    goto LABEL_104;
  }
  Com_PrintWarning(21, "WARNING: Could not allocate effect %s\n", laserDef->laserEndEffect.particleSystemDef->name);
LABEL_104:
  if ( laserDef->laserLight && laserLightEnum == LASER_LIGHT_ON )
  {
    __asm
    {
      vmovss  xmm10, dword ptr [rbx+6Ch]
      vsubss  xmm9, xmm15, dword ptr [rbx+70h]
    }
    if ( (results.contents & 0x2004000) != 0 )
      __asm { vaddss  xmm9, xmm9, dword ptr [rbx+74h] }
    __asm
    {
      vsubss  xmm0, xmm9, xmm10
      vcomiss xmm0, cs:__real@40800000
      vmulss  xmm0, xmm10, dword ptr [r14]
      vaddss  xmm6, xmm0, dword ptr [r13+0]
      vmulss  xmm0, xmm10, dword ptr [r14+4]
      vaddss  xmm3, xmm0, dword ptr [r13+4]
      vmulss  xmm0, xmm9, dword ptr [r14]
      vaddss  xmm4, xmm0, dword ptr [r13+0]
      vmulss  xmm1, xmm9, dword ptr [r14+4]
      vaddss  xmm2, xmm1, dword ptr [r13+4]
      vmulss  xmm0, xmm10, dword ptr [r14+8]
      vaddss  xmm1, xmm0, dword ptr [r13+8]
      vmulss  xmm0, xmm9, dword ptr [r14+8]
      vmovss  dword ptr [rsp+308h+postLight.begin+8], xmm1
      vaddss  xmm1, xmm0, dword ptr [r13+8]
      vmovss  dword ptr [rsp+308h+postLight.end+8], xmm1
      vmovss  dword ptr [rsp+308h+postLight.begin], xmm6
      vmovss  dword ptr [rsp+308h+postLight.begin+4], xmm3
      vmovss  dword ptr [rsp+308h+postLight.end], xmm4
      vmovss  dword ptr [rsp+308h+postLight.end+4], xmm2
    }
    if ( v36 )
      __asm { vmovss  xmm0, dword ptr [rbx+0A0h] }
    else
      __asm { vmovss  xmm0, dword ptr [rbx+68h] }
    __asm
    {
      vmovss  xmm3, cs:__real@437f0000
      vmulss  xmm0, xmm0, xmm14
      vmovss  [rsp+308h+postLight.radius], xmm0
      vmulss  xmm0, xmm3, dword ptr [rbx+80h]
      vmulss  xmm1, xmm0, dword ptr [rbx+90h]
      vcvttss2si eax, xmm1
      vmulss  xmm1, xmm3, dword ptr [rbx+7Ch]
      vmulss  xmm2, xmm1, dword ptr [rbx+8Ch]
      vmulss  xmm1, xmm3, dword ptr [rbx+78h]
    }
    v225 = _EAX | 0xFFFFFF00;
    __asm
    {
      vcvttss2si eax, xmm2
      vmulss  xmm2, xmm1, dword ptr [rbx+88h]
    }
    v228 = (unsigned __int8)_EAX | (v225 << 8);
    __asm { vcvttss2si eax, xmm2 }
    postLight.color.packed = (unsigned __int8)_EAX | (v228 << 8);
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_PARACHUTE_IDLE|WEAPON_LADDER_AIM) )
      laserLightMaterial = LocalClientGlobals->laserLightMaterial;
    else
      laserLightMaterial = cgMedia.laserLightMaterial;
    if ( laserDef->laserLightMaterial )
      laserLightMaterial = laserDef->laserLightMaterial;
    postLight.material = laserLightMaterial;
    FX_PostLight_Add(&postLight);
  }
  __asm { vmovaps xmm14, [rsp+308h+var_C8] }
  result = 1;
LABEL_119:
  __asm
  {
    vmovaps xmm15, [rsp+308h+var_D8]
    vmovaps xmm10, [rsp+308h+var_88]
    vmovaps xmm9, [rsp+308h+var_78]
    vmovaps xmm8, [rsp+308h+var_68]
    vmovaps xmm7, [rsp+308h+var_58]
  }
  _R11 = &v267;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
  }
  return result;
}

/*
==============
CG_AddBeamEffect
==============
*/
__int64 CG_AddBeamEffect(const ParticleSystemDef *pBeamEffectDef, LocalClientNum_t localClientNum, const vec3_t *start, const vec3_t *end)
{
  __int64 v4; 
  cg_t *LocalClientGlobals; 
  ParticleSystemHandle v15; 
  ParticleSystem *ParticleSystemPointerUnsafe; 
  __int64 spawnTimeMsec; 
  float4 endPos; 
  float4 emitterPos; 
  float4 emitterOrientationQuat; 

  v4 = localClientNum;
  _RBP = end;
  _RSI = start;
  if ( !pBeamEffectDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 148, ASSERT_TYPE_ASSERT, "(pBeamEffectDef)", (const char *)&queryFormat, "pBeamEffectDef") )
    __debugbreak();
  if ( (unsigned int)v4 >= 2 )
  {
    LODWORD(spawnTimeMsec) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", spawnTimeMsec, 2) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm1, dword ptr [rsi]
    vmovups xmm0, xmmword ptr cs:?g_unit@@3Ufloat4@@B.v; float4 const g_unit
  }
  endPos.v.m128_i32[3] = 0;
  __asm
  {
    vmovups xmm3, xmmword ptr [rsp+50h]
    vmovss  xmm3, xmm3, xmm1
    vinsertps xmm3, xmm3, dword ptr [rsi+4], 10h
    vinsertps xmm3, xmm3, dword ptr [rsi+8], 20h ; ' '
    vmovups xmmword ptr [rsp+50h], xmm3
    vmovups xmmword ptr [rsp+0B8h+emitterPos.v], xmm3
    vmovdqa xmmword ptr [rsp+0B8h+emitterOrientationQuat.v], xmm0
  }
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v4);
  v15 = ParticleManager::AddSystem(&g_particleManager[v4], (LocalClientNum_t)v4, pBeamEffectDef, &emitterPos, &emitterOrientationQuat, LocalClientGlobals->time, PARTICLE_SYSTEM_FLAG_NONE, NULL, NULL);
  if ( v15 )
  {
    __asm { vmovss  xmm0, dword ptr [rbp+0] }
    endPos.v.m128_i32[3] = 0;
    __asm
    {
      vmovups xmm3, xmmword ptr [rsp+50h]
      vmovss  xmm3, xmm3, xmm0
      vinsertps xmm3, xmm3, dword ptr [rbp+4], 10h
      vinsertps xmm3, xmm3, dword ptr [rbp+8], 20h ; ' '
      vmovups xmmword ptr [rsp+50h], xmm3
      vmovups xmmword ptr [rsp+50h], xmm3
    }
    ParticleSystemPointerUnsafe = Particle_GetParticleSystemPointerUnsafe((LocalClientNum_t)v4, v15);
    ParticleSystem::SetBeamPos(ParticleSystemPointerUnsafe, &emitterPos, &endPos);
  }
  else
  {
    Com_PrintWarning(21, "WARNING: Could not allocate effect %s\n", pBeamEffectDef->name);
  }
  return (unsigned int)v15;
}

/*
==============
CG_AdjustLaserOrientationForViewmodel
==============
*/
void CG_AdjustLaserOrientationForViewmodel(LocalClientNum_t localClientNum, orientation_t *orientation)
{
  char v14; 
  tmat44_t<vec4_t> out; 
  vec3_t outOrg; 
  tmat44_t<vec4_t> mtx; 
  tmat44_t<vec4_t> dst; 
  char vars0; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm10
  }
  _RDI = orientation;
  if ( !orientation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 241, ASSERT_TYPE_ASSERT, "(orientation)", (const char *)&queryFormat, "orientation") )
    __debugbreak();
  __asm { vmovss  xmm10, cs:__real@3f800000 }
  _RBX = CG_GetLocalClientGlobals(localClientNum);
  __asm
  {
    vmovss  xmm0, dword ptr [rax+696Ch]
    vdivss  xmm7, xmm0, dword ptr [rcx]
    vucomiss xmm7, xmm10
  }
  if ( !v14 )
  {
    __asm
    {
      vmovaps xmmword ptr [rsp+160h+var_18+8], xmm6
      vmovaps xmmword ptr [rsp+160h+var_38+8], xmm8
      vmovaps [rsp+160h+var_48+8], xmm9
    }
    RefdefView_GetOrg(&_RBX->refdef.view, &outOrg);
    MatrixForViewer(&outOrg, &_RBX->refdef.view.axis, &mtx);
    MatrixInverse44(&mtx, &dst);
    __asm { vmovaps xmm3, xmm10; scale }
    MatrixSet44(&out, &_RDI->origin, &_RDI->axis, *(float *)&_XMM3);
    MatrixMultiply44(&out, &mtx, &out);
    __asm
    {
      vmovss  xmm4, dword ptr [rsp+160h+out]
      vmovss  xmm5, dword ptr [rsp+160h+out+4]
      vmulss  xmm6, xmm7, dword ptr [rsp+160h+out+8]
      vmulss  xmm8, xmm7, dword ptr [rsp+160h+out+18h]
      vmulss  xmm9, xmm7, dword ptr [rsp+160h+out+28h]
      vmulss  xmm2, xmm7, dword ptr [rsp+160h+out+38h]
      vmovss  xmm7, cs:__real@80000000
      vmovss  dword ptr [rsp+160h+out+38h], xmm2
      vmulss  xmm0, xmm5, xmm5
      vmulss  xmm1, xmm4, xmm4
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm6, xmm6
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm3, xmm2, xmm2
      vcmpless xmm0, xmm3, xmm7
      vblendvps xmm0, xmm3, xmm10, xmm0
      vdivss  xmm2, xmm10, xmm0
      vmulss  xmm0, xmm4, xmm2
      vmovss  xmm4, dword ptr [rsp+160h+out+10h]
      vmovss  dword ptr [rsp+160h+out], xmm0
      vmulss  xmm1, xmm5, xmm2
      vmovss  xmm5, dword ptr [rsp+160h+out+14h]
      vmulss  xmm0, xmm6, xmm2
      vmovss  dword ptr [rsp+160h+out+8], xmm0
      vmovss  dword ptr [rsp+160h+out+4], xmm1
      vmulss  xmm0, xmm5, xmm5
      vmulss  xmm1, xmm4, xmm4
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm8, xmm8
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm3, xmm2, xmm2
      vcmpless xmm0, xmm3, xmm7
      vblendvps xmm0, xmm3, xmm10, xmm0
      vdivss  xmm2, xmm10, xmm0
      vmulss  xmm0, xmm4, xmm2
      vmovss  xmm4, dword ptr [rsp+160h+out+20h]
      vmovss  dword ptr [rsp+160h+out+10h], xmm0
      vmulss  xmm1, xmm5, xmm2
      vmovss  xmm5, dword ptr [rsp+160h+out+24h]
      vmulss  xmm0, xmm8, xmm2
      vmovss  dword ptr [rsp+160h+out+18h], xmm0
      vmovss  dword ptr [rsp+160h+out+14h], xmm1
      vmulss  xmm0, xmm5, xmm5
      vmulss  xmm1, xmm4, xmm4
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm9, xmm9
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm3, xmm2, xmm2
      vcmpless xmm0, xmm3, xmm7
      vblendvps xmm0, xmm3, xmm10, xmm0
      vdivss  xmm2, xmm10, xmm0
      vmulss  xmm0, xmm4, xmm2
      vmovss  dword ptr [rsp+160h+out+20h], xmm0
      vmulss  xmm0, xmm9, xmm2
      vmulss  xmm1, xmm5, xmm2
      vmovss  dword ptr [rsp+160h+out+28h], xmm0
      vmovss  dword ptr [rsp+160h+out+24h], xmm1
    }
    MatrixMultiply44(&out, &dst, &out);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+160h+out]
      vmovss  xmm1, dword ptr [rsp+160h+out+4]
      vmovaps xmm9, [rsp+160h+var_48+8]
      vmovaps xmm8, xmmword ptr [rsp+160h+var_38+8]
      vmovaps xmm6, xmmword ptr [rsp+160h+var_18+8]
      vmovss  dword ptr [rdi+0Ch], xmm0
      vmovss  xmm0, dword ptr [rsp+160h+out+8]
      vmovss  dword ptr [rdi+10h], xmm1
      vmovss  xmm1, dword ptr [rsp+160h+out+10h]
      vmovss  dword ptr [rdi+14h], xmm0
      vmovss  xmm0, dword ptr [rsp+160h+out+14h]
      vmovss  dword ptr [rdi+18h], xmm1
      vmovss  xmm1, dword ptr [rsp+160h+out+18h]
      vmovss  dword ptr [rdi+1Ch], xmm0
      vmovss  xmm0, dword ptr [rsp+160h+out+20h]
      vmovss  dword ptr [rdi+20h], xmm1
      vmovss  xmm1, dword ptr [rsp+160h+out+24h]
      vmovss  dword ptr [rdi+24h], xmm0
      vmovss  xmm0, dword ptr [rsp+160h+out+28h]
      vmovss  dword ptr [rdi+28h], xmm1
      vmovss  xmm1, dword ptr [rsp+160h+out+30h]
      vmovss  dword ptr [rdi+2Ch], xmm0
      vmovss  xmm0, dword ptr [rsp+160h+out+34h]
      vmovss  dword ptr [rdi], xmm1
      vmovss  xmm1, dword ptr [rsp+160h+out+38h]
      vmovss  dword ptr [rdi+8], xmm1
      vmovss  dword ptr [rdi+4], xmm0
    }
  }
  _R11 = &vars0;
  __asm
  {
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm10, xmmword ptr [r11-50h]
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
  const dvar_t *v17; 
  int time; 
  int laserInterpTime; 
  cg_t *LocalClientGlobals; 
  int frametime; 
  unsigned __int8 flags; 
  unsigned __int8 v30; 
  char v60; 
  tmat33_t<vec3_t> *p_axis; 
  unsigned __int8 v63; 
  bool v79; 
  int v92; 
  tmat33_t<vec3_t> *v93; 
  int v94; 
  char v110; 
  vec3_t outOrg; 
  __int64 v112; 
  vec4_t out; 
  vec4_t result; 
  vec4_t vec; 
  vec4_t quat; 
  char v117; 
  void *retaddr; 

  _RAX = &retaddr;
  v112 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
  }
  _R13 = cent;
  _RBX = laserClient;
  if ( (cent->nextState.lerp.u.actor.flags & 0x1C) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 727, ASSERT_TYPE_ASSERT, "(cent->nextState.lerp.u.actor.flags & ( ( 1 << 2 ) | ( 1 << 3 ) | ( 1 << 4 ) ))", (const char *)&queryFormat, "cent->nextState.lerp.u.actor.flags & EF_ACTOR_LASER_FLAGS") )
    __debugbreak();
  _RDI = DVARFLT_laserLockEyeOffset;
  if ( !DVARFLT_laserLockEyeOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "laserLockEyeOffset") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm { vmovss  xmm6, dword ptr [rdi+28h] }
  v17 = DVARINT_laserMaxInterpolationTime;
  if ( !DVARINT_laserMaxInterpolationTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "laserMaxInterpolationTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v17);
  _ER14 = v17->current.integer;
  time = CG_GetLocalClientGlobals(localClientNum)->time;
  v110 = 0;
  laserInterpTime = 0;
  if ( time - _RBX->lastLaserUpdateTime > 200 )
  {
    _RBX->laserInterpTime = 0;
    _RBX->flags &= ~2u;
    v110 = 1;
  }
  _RBX->lastLaserUpdateTime = time;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
  __asm
  {
    vmulss  xmm0, xmm6, dword ptr [rdi+695Ch]
    vaddss  xmm9, xmm0, dword ptr [rsp+130h+outOrg]
    vmovss  dword ptr [rsp+130h+outOrg], xmm9
    vmulss  xmm0, xmm6, dword ptr [rdi+6960h]
    vaddss  xmm10, xmm0, dword ptr [rsp+130h+outOrg+4]
    vmovss  dword ptr [rsp+130h+outOrg+4], xmm10
    vmulss  xmm0, xmm6, dword ptr [rdi+6964h]
    vaddss  xmm6, xmm0, dword ptr [rsp+130h+outOrg+8]
    vmovss  dword ptr [rsp+130h+outOrg+8], xmm6
  }
  frametime = LocalClientGlobals->frametime;
  flags = _R13->nextState.lerp.u.actor.flags;
  if ( (flags & 4) != 0 )
  {
    if ( v110 )
    {
      AxisToQuat(&orient->axis, &_RBX->laserInterpSourceQuat);
      _RBX->laserInterpTime = 0;
      _RBX->flags |= 2u;
    }
    v30 = _RBX->flags;
    __asm { vmovss  xmm7, cs:__real@3f800000 }
    if ( (v30 & 2) != 0 )
    {
      laserInterpTime = _RBX->laserInterpTime;
    }
    else
    {
      _RBX->flags = v30 | 2;
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, dword ptr [rbx+2Ch]
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, r14d
        vdivss  xmm1, xmm1, xmm0
        vminss  xmm2, xmm1, xmm7; frac
      }
      QuatSlerp(&_RBX->laserInterpSourceQuat, &_RBX->laserInterpDestQuat, *(float *)&_XMM2, &_RBX->laserInterpSourceQuat);
    }
    _EAX = laserInterpTime + frametime;
    _RBX->laserInterpTime = laserInterpTime + frametime;
    if ( laserInterpTime + frametime > _ER14 )
    {
      _RBX->laserInterpTime = _ER14;
      _EAX = _ER14;
    }
    __asm
    {
      vmovd   xmm1, eax
      vcvtdq2ps xmm1, xmm1
      vmovd   xmm0, r14d
      vcvtdq2ps xmm0, xmm0
      vdivss  xmm1, xmm1, xmm0
      vminss  xmm8, xmm1, xmm7
      vsubss  xmm4, xmm9, dword ptr [rsi]
      vsubss  xmm5, xmm10, dword ptr [rsi+4]
      vsubss  xmm6, xmm6, dword ptr [rsi+8]
      vmulss  xmm1, xmm5, xmm5
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm6, xmm6
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm3, xmm2, xmm2
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm1, xmm3, xmm7, xmm0
      vdivss  xmm2, xmm7, xmm1
      vmulss  xmm0, xmm2, xmm4
      vmovss  dword ptr [rbp+57h+vec], xmm0
      vmulss  xmm1, xmm5, xmm2
      vmovss  dword ptr [rbp+57h+vec+4], xmm1
      vmulss  xmm0, xmm6, xmm2
      vmovss  dword ptr [rbp+57h+vec+8], xmm0
    }
    vectoangles((const vec3_t *)&vec, (vec3_t *)&out);
    AnglesToQuat((const vec3_t *)&out, &_RBX->laserInterpDestQuat);
    __asm { vucomiss xmm8, xmm7 }
    if ( v60 )
    {
      QuatToAxis(&_RBX->laserInterpDestQuat, &orient->axis);
    }
    else
    {
      __asm { vmovaps xmm2, xmm8; frac }
      QuatSlerp(&_RBX->laserInterpSourceQuat, &_RBX->laserInterpDestQuat, *(float *)&_XMM2, &result);
      QuatToAxis(&result, &orient->axis);
    }
  }
  else if ( (flags & 8) != 0 )
  {
    p_axis = &orient->axis;
    AxisToQuat(&orient->axis, &out);
    v63 = _RBX->flags;
    _RDI = &_RBX->laserInterpSourceQuat;
    _RSI = _RBX->laserInterpDestQuat.v;
    if ( (v63 & 2) != 0 )
    {
      _RBX->flags = v63 & 0xFD;
      _RDI->v[0] = *_RSI;
      __asm
      {
        vmovss  xmm0, dword ptr [rsi+4]
        vmovss  dword ptr [rdi+4], xmm0
        vmovss  xmm1, dword ptr [rsi+8]
        vmovss  dword ptr [rdi+8], xmm1
        vmovss  xmm0, dword ptr [rsi+0Ch]
        vmovss  dword ptr [rdi+0Ch], xmm0
        vmovups xmm1, xmmword ptr [rbp+57h+out]
        vmovups xmmword ptr [rsi], xmm1
      }
      _RBX->laserInterpTime = 0;
    }
    __asm { vmovss  xmm2, cs:__real@3a83126f; epsilon }
    if ( !VecNCompareCustomEpsilon(_RBX->laserInterpDestQuat.v, out.v, *(float *)&_XMM2, 4) )
    {
      _RDI = &_RBX->laserInterpSourceQuat;
      if ( _RBX->laserInterpTime )
      {
        __asm
        {
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, eax
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, r14d
          vdivss  xmm1, xmm1, xmm0
          vminss  xmm2, xmm1, cs:__real@3f800000; frac
        }
        QuatSlerp(&_RBX->laserInterpSourceQuat, &_RBX->laserInterpDestQuat, *(float *)&_XMM2, &result);
        __asm
        {
          vmovups xmm0, xmmword ptr [rbp+57h+result]
          vmovups xmmword ptr [rdi], xmm0
          vmovups xmm0, xmmword ptr [rbp+57h+out]
          vmovups xmmword ptr [rbx+1Ch], xmm0
        }
        _RBX->laserInterpTime = 0;
      }
      else
      {
        __asm
        {
          vmovss  xmm3, dword ptr [rbp+57h+out]
          vmovss  dword ptr [rdi], xmm3
          vmovss  xmm2, dword ptr [rbp+57h+out+4]
          vmovss  dword ptr [rdi+4], xmm2
          vmovss  xmm1, dword ptr [rbp+57h+out+8]
          vmovss  dword ptr [rdi+8], xmm1
          vmovss  xmm0, dword ptr [rbp+57h+out+0Ch]
          vmovss  dword ptr [rdi+0Ch], xmm0
          vmovss  dword ptr [rbx+1Ch], xmm3
          vmovss  dword ptr [rbx+20h], xmm2
          vmovss  dword ptr [rbx+24h], xmm1
          vmovss  dword ptr [rbx+28h], xmm0
        }
        _RBX->laserInterpTime = _ER14;
      }
    }
    _RBX->laserInterpTime += frametime;
    v79 = _RBX->laserInterpTime <= (unsigned int)_ER14;
    if ( _RBX->laserInterpTime > _ER14 )
      _RBX->laserInterpTime = _ER14;
    __asm
    {
      vxorps  xmm6, xmm6, xmm6
      vcvtsi2ss xmm6, xmm6, r14d
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm6, xmm0
    }
    if ( v79 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 864, ASSERT_TYPE_ASSERT, "(totalInterpTime > 0.f)", (const char *)&queryFormat, "totalInterpTime > 0.f") )
      __debugbreak();
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [rbx+2Ch]
      vdivss  xmm2, xmm0, xmm6; frac
    }
    QuatSlerp(_RDI, &_RBX->laserInterpDestQuat, *(float *)&_XMM2, &vec);
    QuatToAxis(&vec, p_axis);
  }
  else if ( (flags & 0x10) != 0 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [r13+1F4h]
      vmovss  xmm1, dword ptr [r13+1F8h]
      vmovss  xmm2, dword ptr [r13+1FCh]
      vsubss  xmm0, xmm0, dword ptr [rsi]
      vmovss  dword ptr [rbp+57h+vec], xmm0
      vsubss  xmm1, xmm1, dword ptr [rsi+4]
      vmovss  dword ptr [rbp+57h+vec+4], xmm1
      vsubss  xmm0, xmm2, dword ptr [rsi+8]
      vmovss  dword ptr [rbp+57h+vec+8], xmm0
    }
    vectoangles((const vec3_t *)&vec, (vec3_t *)&out);
    AnglesToQuat((const vec3_t *)&out, &quat);
    v92 = _RBX->laserInterpTime;
    v93 = &orient->axis;
    if ( !v92 )
    {
      AxisToQuat(v93, &_RBX->laserInterpSourceQuat);
      v92 = _RBX->laserInterpTime;
    }
    v94 = frametime + v92;
    if ( v94 > 1000 )
      v94 = 1000;
    if ( v94 < 0 )
      v94 = 0;
    _RBX->laserInterpTime = v94;
    if ( 1000 == v94 )
    {
      __asm { vmovss  xmm0, cs:__real@3f800000 }
    }
    else
    {
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, r12d
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, ecx
        vdivss  xmm0, xmm1, xmm0; val
        vmovss  xmm2, cs:__real@3f800000; max
        vxorps  xmm1, xmm1, xmm1; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    }
    __asm { vmovaps xmm2, xmm0; frac }
    QuatSlerp(&_RBX->laserInterpSourceQuat, &quat, *(float *)&_XMM2, &result);
    QuatToAxis(&result, v93);
    __asm
    {
      vmovups xmm0, xmmword ptr [rbp+57h+result]
      vmovups xmmword ptr [rbx+0Ch], xmm0
    }
  }
  memset(&outOrg, 0, sizeof(outOrg));
  _R11 = &v117;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
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
  float v9; 
  vec3_t tagOffset; 

  *(_QWORD *)&tagOffset.y = 0i64;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rsp+98h+var_38], xmm0
    vmovss  dword ptr [rsp+98h+var_28], xmm0
  }
  CG_LaserBeamAddCommon(localClientNum, start, end, owner, (const scr_string_t)0, weapon, 0, isAlternate, LE_BEAM_TRACER_TYPE_FIRST, 2047, (const scr_string_t)0, &tagOffset, v9, isSecondaryLaser);
}

/*
==============
CG_LaserBeamAddCommon
==============
*/
void CG_LaserBeamAddCommon(const LocalClientNum_t localClientNum, const vec3_t *start, const vec3_t *end, const centity_t *owner, const scr_string_t ownerTag, const Weapon *weapon, const int fxId, const bool isAlternate, const leType_t type, const int trackedEntNum, const scr_string_t trackedEntTag, const vec3_t *tagOffset, const float aimSpreadAmount, const bool isSecondaryLaser)
{
  entityState_t *p_nextState; 
  leType_t v19; 
  bool v20; 
  CgDynamicMedia *CgDynamicMedia; 
  const ParticleSystemDef *m_particleSystemDef; 
  const LaserDef *FriendlyLaserType; 
  ParticleSystemHandle v37; 
  ParticleSystemHandle pBeamEffect; 
  scr_string_t tag_flash_2; 
  const playerState_s *p_predictedPlayerState; 
  bitarray<64> *v53; 
  const characterInfo_t *CharacterInfo; 
  CgBallistics *System; 
  CgWeaponMap *Instance; 
  int characterIndex; 
  int characterIndexa; 
  int characterIndexb; 
  int characterIndexc; 
  int characterIndexd; 
  int characterIndexe; 
  int characterIndexf; 
  cg_t *cgGlobals; 
  const entityState_t *entState; 
  cg_t *LocalClientGlobals; 
  bitarray<64> r_perks; 
  _DWORD v81[16]; 
  __m256i v82; 

  if ( !owner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 1797, ASSERT_TYPE_ASSERT, "(owner)", (const char *)&queryFormat, "owner") )
    __debugbreak();
  if ( !CG_LocalEntityTypeIsBeamTracer(type) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 1798, ASSERT_TYPE_ASSERT, "(CG_LocalEntityTypeIsBeamTracer( type ))", (const char *)&queryFormat, "CG_LocalEntityTypeIsBeamTracer( type )") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 1801, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  p_nextState = &owner->nextState;
  entState = &owner->nextState;
  _RDI = CG_GetLaserLocalEntityByOwner(localClientNum, owner->nextState.number, type, isSecondaryLaser);
  if ( !_RDI )
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
    _RDI = CG_GetLaserLocalEntityByOwner(localClientNum, p_nextState->number, v19, isSecondaryLaser);
  }
LABEL_16:
  BezierCurve::BezierCurve((BezierCurve *)&v81[7]);
  BezierCurve::BezierCurve((BezierCurve *)((char *)&v82.m256i_u64[1] + 4));
  memset_0(v81, 0, 0x90ui64);
  v20 = _RDI == NULL;
  if ( _RDI )
  {
    __asm { vmovups ymm0, ymmword ptr [rdi+48h] }
    pBeamEffect = _RDI->u.laser.pBeamEffect;
    __asm
    {
      vmovups ymmword ptr [rbp+70h+var_F0], ymm0
      vmovups ymm1, ymmword ptr [rdi+68h]
      vmovups ymmword ptr [rbp+70h+var_F0+20h], ymm1
      vmovups ymm0, ymmword ptr [rdi+88h]
      vmovups ymmword ptr [rbp-40h], ymm0
      vmovups ymm1, ymmword ptr [rdi+0A8h]
      vmovups ymmword ptr [rbp+70h+var_A4+14h], ymm1
      vmovups xmm0, xmmword ptr [rdi+0C8h]
      vmovups [rbp+70h+var_70], xmm0
    }
  }
  else
  {
    _RDI = end;
    __asm
    {
      vmovss  xmm0, dword ptr [rdi]
      vsubss  xmm3, xmm0, dword ptr [rbx]
      vmovss  xmm1, dword ptr [rdi+4]
      vsubss  xmm2, xmm1, dword ptr [rbx+4]
      vmovss  xmm0, dword ptr [rdi+8]
      vsubss  xmm4, xmm0, dword ptr [rbx+8]
      vmulss  xmm2, xmm2, xmm2
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm2, xmm3, xmm0
      vcvtss2sd xmm1, xmm2, xmm2
      vcomisd xmm1, cs:__real@3eb0c6f7a0b5ed8d
    }
    if ( v20 && type != LE_BEAM_SCRIPTED )
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
    v37 = (unsigned int)CG_AddBeamEffect(m_particleSystemDef, localClientNum, start, end);
    if ( v37 == PARTICLE_SYSTEM_INVALID_HANDLE )
      return;
    _RDI = CG_AllocLocalEntity(localClientNum);
    pBeamEffect = v37;
    if ( !_RDI )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 1864, ASSERT_TYPE_ASSERT, "(le)", (const char *)&queryFormat, "le") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 1874, ASSERT_TYPE_SANITY, "( le )", (const char *)&queryFormat, "le") )
        __debugbreak();
    }
  }
  __asm { vmovaps [rsp+170h+var_50], xmm6 }
  if ( pBeamEffect == PARTICLE_SYSTEM_INVALID_HANDLE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 1875, ASSERT_TYPE_SANITY, "( beamEffect )", (const char *)&queryFormat, "beamEffect") )
    __debugbreak();
  _RDI->leType = type;
  memset_0(&_RDI->u, 0, 0x88ui64);
  memset_0(&_RDI->u.laser.cache.lastTimeTargetWasToTheLeft, 0, 0x6Cui64);
  _RBX = weapon;
  tag_flash_2 = 0;
  _RDI->u.tracer.colors[0].v[2] = 3.4028235e38;
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+70h+var_F0]
    vmovups ymmword ptr [rdi+48h], ymm0
    vmovups ymm1, ymmword ptr [rbp+70h+var_F0+20h]
    vmovups ymmword ptr [rdi+68h], ymm1
    vmovups ymm0, ymmword ptr [rbp-40h]
    vmovups ymmword ptr [rdi+88h], ymm0
    vmovups ymm1, ymmword ptr [rbp+70h+var_A4+14h]
    vmovups ymmword ptr [rdi+0A8h], ymm1
    vmovups xmm0, [rbp+70h+var_70]
    vmovups xmmword ptr [rdi+0C8h], xmm0
    vxorps  xmm6, xmm6, xmm6
  }
  if ( weapon->weaponIdx && BG_IsBeamWeapon(weapon, isAlternate) )
  {
    characterIndex = p_nextState->number;
    p_predictedPlayerState = NULL;
    v53 = NULL;
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
        v53 = (bitarray<64> *)CharacterInfo;
    }
    if ( p_predictedPlayerState )
    {
      r_perks = p_predictedPlayerState->perks;
    }
    else if ( v53 )
    {
      r_perks = v53[347];
    }
    else
    {
      r_perks = 0i64;
    }
    System = CgBallistics::GetSystem(localClientNum);
    Instance = CgWeaponMap::GetInstance(localClientNum);
    p_nextState = (entityState_t *)entState;
    *(double *)&_XMM0 = BG_GetBulletRange<CgBallisticInstance>(Instance, System, p_predictedPlayerState, entState, &r_perks, weapon, isAlternate);
    _RBX = weapon;
    __asm { vmovaps xmm6, xmm0 }
  }
  _RDI->ownerNum = p_nextState->number;
  __asm
  {
    vmovups ymm1, ymmword ptr [rbx]
    vmovups ymmword ptr [rdi+100h], ymm1
    vmovups xmm2, xmmword ptr [rbx+20h]
    vmovups xmmword ptr [rdi+120h], xmm2
    vmovsd  xmm1, qword ptr [rbx+30h]
    vmovsd  qword ptr [rdi+130h], xmm1
  }
  *(_DWORD *)&_RDI->u.laser.weapon.weaponCamo = *(_DWORD *)&_RBX->weaponCamo;
  _RDI->u.laser.isAlternate = isAlternate;
  __asm
  {
    vmovss  dword ptr [rdi+0FCh], xmm6
    vmovaps xmm6, [rsp+170h+var_50]
  }
  _RDI->u.laser.isClientEmitter = p_nextState->number == LocalClientGlobals->predictedPlayerState.clientNum;
  _RDI->u.laser.isSecondaryLaser = isSecondaryLaser;
  _RDI->addTime = LocalClientGlobals->time;
  _RDI->endTime = 0x7FFFFFFF;
  _RDI->pos.trBase.v[0] = start->v[0];
  _RDI->pos.trBase.v[1] = start->v[1];
  _RDI->pos.trBase.v[2] = start->v[2];
  _RDI->pos.trDelta.v[0] = end->v[0];
  _RDI->pos.trDelta.v[1] = end->v[1];
  _RDI->pos.trDelta.v[2] = end->v[2];
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+20h]
    vmovss  [rsp+170h+characterIndex], xmm0
  }
  if ( (characterIndexa & 0x7F800000) == 2139095040 )
    goto LABEL_67;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+24h]
    vmovss  [rsp+170h+characterIndex], xmm0
  }
  if ( (characterIndexb & 0x7F800000) == 2139095040 )
    goto LABEL_67;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+28h]
    vmovss  [rsp+170h+characterIndex], xmm0
  }
  if ( (characterIndexc & 0x7F800000) == 2139095040 )
  {
LABEL_67:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 1908, ASSERT_TYPE_SANITY, "( !IS_NAN( ( le->pos.trBase )[0] ) && !IS_NAN( ( le->pos.trBase )[1] ) && !IS_NAN( ( le->pos.trBase )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( le->pos.trBase )[0] ) && !IS_NAN( ( le->pos.trBase )[1] ) && !IS_NAN( ( le->pos.trBase )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+2Ch]
    vmovss  [rsp+170h+characterIndex], xmm0
  }
  if ( (characterIndexd & 0x7F800000) == 2139095040 )
    goto LABEL_68;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+30h]
    vmovss  [rsp+170h+characterIndex], xmm0
  }
  if ( (characterIndexe & 0x7F800000) == 2139095040 )
    goto LABEL_68;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+34h]
    vmovss  [rsp+170h+characterIndex], xmm0
  }
  if ( (characterIndexf & 0x7F800000) == 2139095040 )
  {
LABEL_68:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 1909, ASSERT_TYPE_SANITY, "( !IS_NAN( ( le->pos.trDelta )[0] ) && !IS_NAN( ( le->pos.trDelta )[1] ) && !IS_NAN( ( le->pos.trDelta )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( le->pos.trDelta )[0] ) && !IS_NAN( ( le->pos.trDelta )[1] ) && !IS_NAN( ( le->pos.trDelta )[2] )") )
      __debugbreak();
  }
  __asm { vmovss  xmm0, [rbp+70h+aimSpreadAmount] }
  _RDI->u.laser.trackedEntNum = trackedEntNum;
  _RDI->u.laser.trackedEntTag = trackedEntTag;
  _RDI->u.laser.pBeamEffect = pBeamEffect;
  if ( isSecondaryLaser )
    tag_flash_2 = scr_const.tag_flash_2;
  _RDI->u.laser.attachedTag = tag_flash_2;
  _RDI->u.tracer.colors[1].xyz = *tagOffset;
  _RDI->u.laser.ownerTag = ownerTag;
  __asm { vmovss  dword ptr [rdi+0F8h], xmm0 }
}

/*
==============
CG_LaserBeamCurveInterpolate
==============
*/

void __fastcall CG_LaserBeamCurveInterpolate(const BezierCurve *baseCurve, const BezierCurve *targetCurve, double interpRate, BezierCurve *outCurve)
{
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+0Ch]
    vsubss  xmm3, xmm0, dword ptr [rcx]
    vmovss  xmm0, dword ptr [rcx+14h]
    vmovss  xmm1, dword ptr [rcx+10h]
    vmovss  xmm5, dword ptr [rdx]
    vmovss  xmm4, dword ptr [rdx+4]
    vmovaps xmmword ptr [r11-18h], xmm6
    vmovss  xmm6, dword ptr [rdx+10h]
    vmovaps xmmword ptr [r11-28h], xmm7
    vmovss  xmm7, dword ptr [rdx+8]
    vmovss  [rsp+0C8h+var_C8], xmm2
    vmovss  xmm2, dword ptr [rdx+0Ch]
    vmovaps xmmword ptr [r11-38h], xmm8
    vmovss  xmm8, dword ptr [rdx+14h]
    vmovaps xmmword ptr [r11-48h], xmm9
    vsubss  xmm9, xmm1, dword ptr [rcx+4]
    vmovss  xmm1, dword ptr [rcx+1Ch]
    vmovaps xmmword ptr [r11-58h], xmm10
    vsubss  xmm10, xmm0, dword ptr [rcx+8]
    vmovss  xmm0, dword ptr [rcx+18h]
    vmovaps xmmword ptr [r11-68h], xmm11
    vmovaps xmmword ptr [r11-78h], xmm12
    vmovaps [rsp+0C8h+var_88], xmm13
    vmovaps [rsp+0C8h+var_98], xmm14
    vmovaps [rsp+0C8h+var_A8], xmm15
    vsubss  xmm0, xmm0, dword ptr [rcx+24h]
    vmovss  xmm12, dword ptr [rdx+18h]
    vmovss  xmm11, dword ptr [rdx+24h]
    vmovss  xmm14, dword ptr [rdx+1Ch]
    vmovss  xmm13, dword ptr [rdx+28h]
    vmovss  xmm15, dword ptr [rdx+2Ch]
    vmovss  [rsp+0C8h+var_C4], xmm0
    vsubss  xmm0, xmm1, dword ptr [rcx+28h]
    vmovss  [rsp+0C8h+var_C0], xmm0
    vmovss  xmm0, dword ptr [rcx+20h]
    vsubss  xmm0, xmm0, dword ptr [rcx+2Ch]
    vmovss  [rsp+0C8h+var_B8], xmm0
    vmovss  xmm0, dword ptr [rdx+20h]
    vmovss  dword ptr [r9], xmm5
  }
  *(_QWORD *)&outCurve->p0.y = *(_QWORD *)&targetCurve->p0.y;
  __asm
  {
    vmovss  [rsp+0C8h+var_BC], xmm0
    vsubss  xmm0, xmm2, xmm5
    vsubss  xmm1, xmm0, xmm3
    vmulss  xmm2, xmm1, [rsp+0C8h+var_C8]
    vaddss  xmm3, xmm2, xmm3
    vaddss  xmm0, xmm3, xmm5
    vmovss  dword ptr [r9+0Ch], xmm0
    vsubss  xmm1, xmm6, xmm4
    vsubss  xmm2, xmm1, xmm9
    vmulss  xmm0, xmm2, [rsp+0C8h+var_C8]
    vaddss  xmm3, xmm0, xmm9
    vaddss  xmm1, xmm3, dword ptr [r9+4]
    vmovss  dword ptr [r9+10h], xmm1
    vsubss  xmm0, xmm8, xmm7
    vmovss  xmm7, [rsp+0C8h+var_C8]
    vsubss  xmm2, xmm0, xmm10
    vmulss  xmm1, xmm2, xmm7
    vaddss  xmm3, xmm1, xmm10
    vaddss  xmm0, xmm3, dword ptr [r9+8]
    vmovss  dword ptr [r9+14h], xmm0
    vmovss  xmm0, dword ptr [rdx+24h]
    vsubss  xmm1, xmm0, dword ptr [rcx+24h]
    vmulss  xmm2, xmm1, xmm7
    vaddss  xmm6, xmm2, dword ptr [rcx+24h]
    vmovss  dword ptr [r9+24h], xmm6
    vmovss  xmm0, dword ptr [rdx+28h]
    vsubss  xmm1, xmm0, dword ptr [rcx+28h]
    vmulss  xmm2, xmm1, xmm7
    vaddss  xmm3, xmm2, dword ptr [rcx+28h]
    vmovss  dword ptr [r9+28h], xmm3
    vmovss  xmm0, dword ptr [rdx+2Ch]
    vsubss  xmm1, xmm0, dword ptr [rcx+2Ch]
    vmulss  xmm2, xmm1, xmm7
    vaddss  xmm3, xmm2, dword ptr [rcx+2Ch]
    vsubss  xmm0, xmm12, xmm11
    vsubss  xmm1, xmm0, [rsp+0C8h+var_C4]
    vmovss  dword ptr [r9+2Ch], xmm3
    vmulss  xmm2, xmm1, xmm7
    vaddss  xmm3, xmm2, [rsp+0C8h+var_C4]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmovaps xmm12, xmmword ptr [r11-78h]
    vaddss  xmm0, xmm3, xmm6
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovss  dword ptr [r9+18h], xmm0
    vsubss  xmm1, xmm14, xmm13
    vsubss  xmm2, xmm1, [rsp+0C8h+var_C0]
    vmovaps xmm13, [rsp+0C8h+var_88]
    vmovaps xmm14, [rsp+0C8h+var_98]
    vmulss  xmm0, xmm2, xmm7
    vaddss  xmm3, xmm0, [rsp+0C8h+var_C0]
    vaddss  xmm1, xmm3, dword ptr [r9+28h]
    vmovss  xmm0, [rsp+0C8h+var_BC]
    vsubss  xmm0, xmm0, xmm15
    vsubss  xmm2, xmm0, [rsp+0C8h+var_B8]
    vmovaps xmm15, [rsp+0C8h+var_A8]
    vmovss  dword ptr [r9+1Ch], xmm1
    vmulss  xmm1, xmm2, xmm7
    vaddss  xmm3, xmm1, [rsp+0C8h+var_B8]
    vaddss  xmm0, xmm3, dword ptr [r9+2Ch]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovss  dword ptr [r9+20h], xmm0
  }
}

/*
==============
CG_LaserBeamCurveTargetIsOnTheLeft
==============
*/
bool CG_LaserBeamCurveTargetIsOnTheLeft(localEntity_s *le, const BezierCurve *curve, const orientation_t *orient)
{
  _RDI = curve;
  if ( !le && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 2233, ASSERT_TYPE_ASSERT, "(le)", (const char *)&queryFormat, "le") )
    __debugbreak();
  if ( le->u.laser.trackedEntNum == 2047 )
    return 1;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+28h]
    vsubss  xmm1, xmm0, dword ptr [rdi+4]
    vmulss  xmm3, xmm1, dword ptr [rsi+1Ch]
    vmovss  xmm2, dword ptr [rdi+24h]
    vsubss  xmm0, xmm2, dword ptr [rdi]
    vmulss  xmm1, xmm0, dword ptr [rsi+18h]
    vmovss  xmm2, dword ptr [rdi+2Ch]
    vsubss  xmm0, xmm2, dword ptr [rdi+8]
    vaddss  xmm4, xmm3, xmm1
    vmulss  xmm1, xmm0, dword ptr [rsi+20h]
    vaddss  xmm3, xmm4, xmm1
    vxorps  xmm2, xmm2, xmm2
    vcomiss xmm3, xmm2
  }
  return le->u.laser.trackedEntNum >= 0x7FFu;
}

/*
==============
CG_LaserBeamCurveUpdate
==============
*/

void __fastcall CG_LaserBeamCurveUpdate(const LocalClientNum_t localClientNum, localEntity_s *le, const orientation_t *orient, double laserRange, const vec3_t *intendedBeamEnd, const int attackerEntNum, const int targetEntNum, BezierCurve *outActualCurve)
{
  cg_t *LocalClientGlobals; 
  unsigned int clientNum; 
  int time; 
  CgHandler *Handler; 
  bool Path; 
  scr_string_t trackedEntTag; 
  char v58; 
  char v59; 
  unsigned int trackedEntNum; 
  char v71; 
  float outCollisionPos; 
  float v103; 
  cg_t *v104; 
  BezierCurve curve; 
  char v106; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
  }
  _RDI = le;
  __asm { vmovaps xmm10, xmm3 }
  if ( !le && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 2336, ASSERT_TYPE_ASSERT, "(le)", (const char *)&queryFormat, "le") )
    __debugbreak();
  if ( !orient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 2337, ASSERT_TYPE_ASSERT, "(orient)", (const char *)&queryFormat, "orient") )
    __debugbreak();
  if ( !outActualCurve && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 2338, ASSERT_TYPE_ASSERT, "(outActualCurve)", (const char *)&queryFormat, "outActualCurve") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v104 = LocalClientGlobals;
  clientNum = LocalClientGlobals->predictedPlayerState.clientNum;
  time = LocalClientGlobals->time;
  if ( attackerEntNum == clientNum )
    time -= LocalClientGlobals->predictedPlayerState.deltaTime;
  BezierCurve::BezierCurve(&curve);
  __asm { vmovss  xmm6, dword ptr [rdi+0F8h] }
  Handler = CgHandler::getHandler(localClientNum);
  __asm
  {
    vxorps  xmm9, xmm9, xmm9
    vmovss  [rsp+190h+var_140], xmm9
    vmovss  dword ptr [rsp+190h+outCollisionPos], xmm6
  }
  Path = BG_SplineTracer_FindPath(Handler, (Physics_WorldId)(3 * localClientNum + 2), attackerEntNum, targetEntNum, orient, intendedBeamEnd, outCollisionPos, 1, BOOL_VALUE, 0, v103, &curve);
  _RAX = v104;
  __asm
  {
    vmovss  xmm11, cs:__real@3a83126f
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rax+65E4h]
    vmulss  xmm2, xmm0, xmm11
  }
  if ( attackerEntNum != clientNum )
    goto LABEL_16;
  __asm { vcomiss xmm2, xmm11 }
  if ( attackerEntNum <= clientNum )
    goto LABEL_16;
  __asm
  {
    vmovss  xmm1, dword ptr [rdi+0D0h]
    vucomiss xmm1, cs:__real@7f7fffff
  }
  if ( attackerEntNum == clientNum )
  {
LABEL_16:
    __asm { vxorps  xmm8, xmm8, xmm8 }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rax+1E4h]
      vsubss  xmm1, xmm0, xmm1
      vandps  xmm1, xmm1, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vdivss  xmm8, xmm1, xmm2
    }
  }
  _RBX = DCONST_DVARFLT_splinetracer_noCollisionPathSearchMaxAngularVelocity;
  if ( !DCONST_DVARFLT_splinetracer_noCollisionPathSearchMaxAngularVelocity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "splinetracer_noCollisionPathSearchMaxAngularVelocity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  if ( attackerEntNum == clientNum && Path )
    __asm { vcomiss xmm8, dword ptr [rbx+28h] }
  if ( !orient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 2294, ASSERT_TYPE_ASSERT, "(orient)", (const char *)&queryFormat, "orient") )
    __debugbreak();
  trackedEntTag = 0;
  if ( time - _RDI->u.laser.cache.lastRenderTime > 100 )
  {
    _RDI->u.laser.cache.interpStartTime = time;
    *(_QWORD *)&_RDI->u.laser.cache.lastTrackedEntNum = 2047i64;
    _RDI->u.laser.cache.lastTimeTargetWasToTheLeft = 0;
    _RDI->u.tracer.ballistics.tracerStartPos.v[2] = 0.0;
    _RDI->u.laser.cache.lastCurveWasExtreme = 0;
    _RDI->u.tracer.colors[0].v[2] = 3.4028235e38;
    if ( _RDI->u.laser.trackedEntNum == 2047 )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+90h+curve.p0]
        vmovups xmm1, xmmword ptr [rbp+90h+curve.p2+8]
        vmovups ymmword ptr [rdi+64h], ymm0
        vmovups xmmword ptr [rdi+84h], xmm1
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm1, dword ptr [rbp+90h+curve.p0]
        vmovss  xmm3, dword ptr [rbp+90h+curve.p0+4]
        vmovss  xmm4, dword ptr [rbp+90h+curve.p0+8]
        vmovss  dword ptr [rdi+64h], xmm1
        vmovss  dword ptr [rdi+68h], xmm3
        vmovss  dword ptr [rdi+6Ch], xmm4
        vmovss  dword ptr [rdi+70h], xmm1
        vmovss  dword ptr [rdi+74h], xmm3
        vmovss  dword ptr [rdi+78h], xmm4
        vmulss  xmm0, xmm10, dword ptr [r12+0Ch]
        vaddss  xmm2, xmm0, xmm1
        vmovss  dword ptr [rdi+88h], xmm2
        vmulss  xmm0, xmm10, dword ptr [r12+10h]
        vaddss  xmm1, xmm0, xmm3
        vmovss  dword ptr [rdi+8Ch], xmm1
        vmulss  xmm0, xmm10, dword ptr [r12+14h]
        vaddss  xmm1, xmm0, xmm4
        vmovss  dword ptr [rdi+90h], xmm1
        vmovss  dword ptr [rdi+7Ch], xmm2
      }
      LODWORD(_RDI->u.tracer.ballistics.lastDir.v[0]) = _RDI->u.tracer.ballistics.simStartTime;
      LODWORD(_RDI->u.tracer.ballistics.lastDir.v[1]) = _RDI->u.tracer.ballistics.simFinishTime;
    }
    __asm
    {
      vmovups ymm0, ymmword ptr [rdi+64h]
      vmovups xmm1, xmmword ptr [rdi+84h]
      vmovups ymmword ptr [rdi+94h], ymm0
      vmovups xmmword ptr [rdi+0B4h], xmm1
    }
  }
  _RBX = DCONST_DVARFLT_splinetracer_catchUpTime;
  if ( !DCONST_DVARFLT_splinetracer_catchUpTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "splinetracer_catchUpTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vmulss  xmm1, xmm0, cs:__real@447a0000
    vcvttss2si esi, xmm1
  }
  if ( _ESI <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 2420, ASSERT_TYPE_ASSERT, "(catchUpTime > 0)", (const char *)&queryFormat, "catchUpTime > 0") )
    __debugbreak();
  _RBX = DCONST_DVARFLT_splinetracer_catchUpTimeReductionStartAngularVelocity;
  if ( !DCONST_DVARFLT_splinetracer_catchUpTimeReductionStartAngularVelocity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "splinetracer_catchUpTimeReductionStartAngularVelocity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm7, dword ptr [rbx+28h] }
  _RBX = DCONST_DVARFLT_splinetracer_catchUpTimeReductionEndAngularVelocity;
  if ( !DCONST_DVARFLT_splinetracer_catchUpTimeReductionEndAngularVelocity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "splinetracer_catchUpTimeReductionEndAngularVelocity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vmovss  xmm6, cs:__real@3f800000
    vmaxss  xmm1, xmm0, xmm7
    vcomiss xmm8, xmm1
  }
  if ( v58 | v59 )
  {
    __asm { vcomiss xmm8, xmm7 }
    if ( !(v58 | v59) )
    {
      __asm
      {
        vsubss  xmm1, xmm1, xmm7
        vcomiss xmm1, xmm11
      }
      if ( v58 )
      {
        __asm { vmovaps xmm0, xmm6 }
      }
      else
      {
        __asm
        {
          vsubss  xmm0, xmm8, xmm7
          vdivss  xmm0, xmm0, xmm1; val
          vmovaps xmm1, xmm9; min
          vmovaps xmm2, xmm6; max
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      }
      __asm
      {
        vsubss  xmm1, xmm6, xmm0
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, esi
        vmulss  xmm1, xmm1, xmm0
        vcvttss2si esi, xmm1
      }
    }
  }
  else
  {
    _ESI = 0;
  }
  trackedEntNum = _RDI->u.laser.trackedEntNum;
  if ( trackedEntNum == 2047 )
  {
    v71 = 1;
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+90h+curve.p3+4]
      vsubss  xmm1, xmm0, dword ptr [rbp+90h+curve.p0+4]
      vmulss  xmm3, xmm1, dword ptr [r12+1Ch]
      vmovss  xmm2, dword ptr [rbp+90h+curve.p3]
      vsubss  xmm0, xmm2, dword ptr [rbp+90h+curve.p0]
      vmulss  xmm1, xmm0, dword ptr [r12+18h]
      vmovss  xmm2, dword ptr [rbp+90h+curve.p3+8]
      vsubss  xmm0, xmm2, dword ptr [rbp+90h+curve.p0+8]
      vaddss  xmm4, xmm3, xmm1
      vmulss  xmm1, xmm0, dword ptr [r12+20h]
      vaddss  xmm3, xmm4, xmm1
      vcomiss xmm3, xmm9
    }
    v71 = trackedEntNum >= 0x7FF;
  }
  if ( trackedEntNum == _RDI->u.laser.cache.lastTrackedEntNum && _RDI->u.laser.trackedEntTag == _RDI->u.laser.cache.lastTrackedEntTag && v71 == _RDI->u.laser.cache.lastTimeTargetWasToTheLeft && LODWORD(_RDI->u.tracer.ballistics.tracerStartPos.v[2]) == 1 && !_RDI->u.laser.cache.lastCurveWasExtreme )
  {
    _RBX = &_RDI->u.laser.cache.baseCurve;
  }
  else
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [rdi+94h]
      vmovups xmm1, xmmword ptr [rdi+0B4h]
    }
    _RBX = &_RDI->u.laser.cache.baseCurve;
    _RDI->u.laser.cache.interpStartTime = time;
    __asm
    {
      vmovups ymmword ptr [rbx], ymm0
      vmovups xmmword ptr [rbx+20h], xmm1
    }
  }
  if ( _ESI )
  {
    __asm
    {
      vxorps  xmm2, xmm2, xmm2
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm2, xmm2, eax
      vcvtsi2ss xmm0, xmm0, esi
      vdivss  xmm0, xmm2, xmm0; val
      vmovaps xmm2, xmm6; max
      vmovaps xmm1, xmm9; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm { vmovaps xmm6, xmm0 }
  }
  __asm { vmovaps xmm2, xmm6; interpRate }
  CG_LaserBeamCurveInterpolate(_RBX, &curve, *(double *)&_XMM2, outActualCurve);
  _RDI->u.laser.cache.lastCurveWasExtreme = 0;
  _RDI->u.laser.cache.lastTimeTargetWasToTheLeft = v71;
  LODWORD(_RDI->u.tracer.ballistics.tracerStartPos.v[2]) = 1;
  __asm
  {
    vmovups ymm0, ymmword ptr [r8]
    vmovups ymmword ptr [rdi+94h], ymm0
    vmovups xmm1, xmmword ptr [r8+20h]
  }
  _RDI->u.laser.cache.lastTrackedEntNum = targetEntNum;
  __asm { vmovups xmmword ptr [rdi+0B4h], xmm1 }
  if ( targetEntNum != 2047 )
    trackedEntTag = _RDI->u.laser.trackedEntTag;
  _RDI->u.laser.cache.lastTrackedEntTag = trackedEntTag;
  _RDI->u.laser.cache.lastRenderTime = time;
  _RDI->u.tracer.colors[0].v[2] = v104->predictedPlayerState.viewangles.v[1];
  _R11 = &v106;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
  }
}

/*
==============
CG_LaserBeamDraw
==============
*/
void CG_LaserBeamDraw(LocalClientNum_t localClientNum, localEntity_s *le, const Weapon *weapon, bool isAlternate)
{
  const char *WeaponName; 
  centity_t *Entity; 
  int number; 
  DObj *ClientDObj; 
  const cpose_t *p_pose; 
  targetAssistBehavior_t TargetAssistBehavior; 
  targetAssistType_t TargetAssistType; 
  char v26; 
  char v27; 
  bool v28; 
  bool v32; 
  int v41; 
  unsigned __int8 *priorityMap; 
  int v57; 
  unsigned __int8 *WeaponPriorityMap; 
  int locational; 
  char v80; 
  vec3_t outOrg; 
  int outTargetEntNum; 
  Weapon *weapona; 
  __int64 v84; 
  vec3_t end; 
  vec3_t start; 
  vec3_t forward; 
  vec3_t outTargetPos; 
  BezierCurve outActualCurve; 
  vec3_t angles; 
  vec3_t v91; 
  orientation_t orient; 
  trace_t results; 
  char output[1024]; 
  void *retaddr; 

  _RAX = &retaddr;
  v84 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
  }
  weapona = (Weapon *)weapon;
  _RBX = le;
  _R15 = (LaserDef *)BG_GetFriendlyLaserType(weapon, 0, 1);
  if ( !_R15 )
  {
    WeaponName = BG_GetWeaponName(weapon, output, 0x400u);
    Com_PrintWarning(17, "WARNING: CG_LaserBeamDraw using default Laser for weapon \"%s\".\n", WeaponName);
    _R15 = cgMedia.laserDefault;
    if ( !cgMedia.laserDefault && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 2502, (AssertType)(LODWORD(cgMedia.laserDefault) + 1), "( laserDef )", (const char *)&queryFormat, "laserDef") )
      __debugbreak();
  }
  _RDI = CG_GetLocalClientGlobals(localClientNum);
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 2505, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+699Ch]
    vmovss  [rbp+520h+var_510], xmm0
    vmovss  xmm1, dword ptr [rdi+69A0h]
    vmovss  [rbp+520h+var_50C], xmm1
    vmovss  xmm0, dword ptr [rdi+69A4h]
    vmovss  [rbp+520h+var_508], xmm0
  }
  Entity = CG_GetEntity(localClientNum, _RBX->ownerNum);
  number = Entity->nextState.number;
  if ( number != _RDI->predictedPlayerState.clientNum || _RDI->renderingThirdPerson )
  {
    ClientDObj = Com_GetClientDObj(number, localClientNum);
    p_pose = &Entity->pose;
  }
  else
  {
    if ( !_RDI->m_weaponHand[0].viewModelDObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 2515, ASSERT_TYPE_ASSERT, "(weapHand->viewModelDObj)", (const char *)&queryFormat, "weapHand->viewModelDObj") )
      __debugbreak();
    ClientDObj = _RDI->m_weaponHand[0].viewModelDObj;
    p_pose = &_RDI->viewModelPose;
  }
  if ( ClientDObj && _RBX->u.laser.cache.isWeaponValid && CG_GetBeamOrient(localClientNum, _RBX, _RBX->ownerNum, ClientDObj, p_pose, &orient) )
  {
    _R13 = CG_GetLocalClientGlobals(localClientNum);
    if ( !_R13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 2543, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+520h+orient.origin]
      vmovss  dword ptr [rbp+520h+start], xmm0
      vmovss  xmm1, dword ptr [rbp+520h+orient.origin+4]
      vmovss  dword ptr [rbp+520h+start+4], xmm1
      vmovss  xmm0, dword ptr [rbp+520h+orient.origin+8]
      vmovss  dword ptr [rbp+520h+start+8], xmm0
    }
    outTargetEntNum = 2047;
    v80 = 0;
    TargetAssistBehavior = BG_GetTargetAssistBehavior(&_RBX->u.laser.weapon, _RBX->u.laser.isAlternate);
    TargetAssistType = BG_GetTargetAssistType(&_RBX->u.laser.weapon, _RBX->u.laser.isAlternate);
    if ( TargetAssistBehavior && TargetAssistBehavior != TARGET_ASSISTBEHAVE_COUNT || (TargetAssistType & 0xFFFFFFFD) != 0 )
    {
      v26 = 1;
      if ( _RBX->leType != LE_BEAM_TRACER_TYPE_FIRST )
      {
        v28 = CG_LaserBeamDrawCurvedBeam(localClientNum, _RBX, &outTargetPos, &outTargetEntNum);
        goto LABEL_28;
      }
    }
    else
    {
      v26 = 0;
    }
    v28 = 0;
    v27 = 1;
LABEL_28:
    __asm
    {
      vmovss  xmm6, dword ptr [rbx+0FCh]
      vxorps  xmm7, xmm7, xmm7
      vucomiss xmm6, xmm7
    }
    if ( v27 )
      __asm { vmovss  xmm6, dword ptr [r15+1Ch] }
    if ( v28 )
    {
      __asm
      {
        vmovsd  xmm0, qword ptr [rbp+520h+outTargetPos]
        vmovsd  qword ptr [rbp+520h+end], xmm0
      }
      end.v[2] = outTargetPos.v[2];
LABEL_42:
      BezierCurve::BezierCurve(&outActualCurve);
      if ( v80 )
      {
        __asm
        {
          vmovss  xmm2, dword ptr [rbp+520h+start]
          vmovss  dword ptr [rbp+520h+outActualCurve.p0], xmm2
          vmovss  xmm1, dword ptr [rbp+520h+start+4]
          vmovss  dword ptr [rbp+520h+outActualCurve.p0+4], xmm1
          vmovss  xmm0, dword ptr [rbp+520h+start+8]
          vmovss  dword ptr [rbp+520h+outActualCurve.p0+8], xmm0
          vmovss  dword ptr [rbp+520h+outActualCurve.p1], xmm2
          vmovss  dword ptr [rbp+520h+outActualCurve.p1+4], xmm1
          vmovss  dword ptr [rbp+520h+outActualCurve.p1+8], xmm0
          vmovss  xmm2, dword ptr [rbp+520h+end]
          vmovss  dword ptr [rbp+520h+outActualCurve.p2], xmm2
          vmovss  xmm1, dword ptr [rbp+520h+end+4]
          vmovss  dword ptr [rbp+520h+outActualCurve.p2+4], xmm1
          vmovss  xmm0, dword ptr [rbp+520h+end+8]
          vmovss  dword ptr [rbp+520h+outActualCurve.p2+8], xmm0
          vmovss  dword ptr [rbp+520h+outActualCurve.p3], xmm2
          vmovss  dword ptr [rbp+520h+outActualCurve.p3+4], xmm1
          vmovss  dword ptr [rbp+520h+outActualCurve.p3+8], xmm0
        }
      }
      else
      {
        __asm { vmovaps xmm3, xmm6; laserRange }
        CG_LaserBeamCurveUpdate(localClientNum, _RBX, &orient, *(double *)&_XMM3, &end, Entity->nextState.number, outTargetEntNum, &outActualCurve);
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+520h+outActualCurve.p3]
          vmovss  dword ptr [rbp+520h+end], xmm0
          vmovss  xmm1, dword ptr [rbp+520h+outActualCurve.p3+4]
          vmovss  dword ptr [rbp+520h+end+4], xmm1
          vmovss  xmm0, dword ptr [rbp+520h+outActualCurve.p3+8]
          vmovss  dword ptr [rbp+520h+end+8], xmm0
        }
      }
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+520h+orient.origin]
        vmovups ymmword ptr [rbp+520h+results.fraction], ymm0
        vmovups xmm1, xmmword ptr [rbp+520h+orient.axis+14h]
        vmovups xmmword ptr [rbp+520h+results.contents], xmm1
        vmovss  [rsp+620h+locational], xmm6
      }
      AddBeamCore(localClientNum, Entity, _RBX, &start, &end, &v91, (orientation_t *)&results, _R15, *(const float *)&locational, &outActualCurve);
      goto LABEL_46;
    }
    v32 = CG_BeamEntity_GetByOwner(localClientNum, Entity) != NULL;
    if ( v26 )
    {
      if ( Entity->nextState.number == _R13->predictedPlayerState.clientNum )
      {
        RefdefView_GetOrg(&_R13->refdef.view, &outOrg);
        __asm
        {
          vmovss  xmm0, dword ptr [r13+49DFCh]
          vmovss  dword ptr [rbp+520h+angles], xmm0
          vmovss  xmm1, dword ptr [r13+49E00h]
          vmovss  dword ptr [rbp+520h+angles+4], xmm1
          vmovss  dword ptr [rbp+520h+angles+8], xmm7
        }
        AngleVectors(&angles, &forward, NULL, NULL);
        __asm
        {
          vmulss  xmm1, xmm6, dword ptr [rbp+520h+forward]
          vaddss  xmm2, xmm1, dword ptr [rsp+620h+outOrg]
          vmovss  dword ptr [rbp+520h+outTargetPos], xmm2
          vmulss  xmm1, xmm6, dword ptr [rbp+520h+forward+4]
          vaddss  xmm2, xmm1, dword ptr [rsp+620h+outOrg+4]
          vmovss  dword ptr [rbp+520h+outTargetPos+4], xmm2
          vmulss  xmm1, xmm6, dword ptr [rbp+520h+forward+8]
          vaddss  xmm2, xmm1, dword ptr [rsp+620h+outOrg+8]
          vmovss  dword ptr [rbp+520h+outTargetPos+8], xmm2
        }
        memset_0(&results, 0, sizeof(results));
        v41 = Com_GameMode_SupportsFeature(WEAPON_MANTLE_LADDER);
        priorityMap = BG_GetWeaponPriorityMap(weapona, isAlternate);
        PhysicsQuery_LegacyTrace((Physics_WorldId)(3 * localClientNum + 2), &results, &outOrg, &outTargetPos, &bounds_origin, Entity->nextState.number, 0, 41970017, v41, priorityMap, All);
        if ( !results.startsolid )
        {
          __asm
          {
            vmulss  xmm3, xmm6, [rbp+520h+results.fraction]
            vmulss  xmm1, xmm3, dword ptr [rbp+520h+forward]
            vaddss  xmm2, xmm1, dword ptr [rsp+620h+outOrg]
            vmovss  dword ptr [rbp+520h+end], xmm2
            vmulss  xmm0, xmm3, dword ptr [rbp+520h+forward+4]
            vaddss  xmm1, xmm0, dword ptr [rsp+620h+outOrg+4]
            vmulss  xmm2, xmm3, dword ptr [rbp+520h+forward+8]
            vaddss  xmm0, xmm2, dword ptr [rsp+620h+outOrg+8]
          }
LABEL_41:
          __asm
          {
            vmovss  dword ptr [rbp+520h+end+4], xmm1
            vmovss  dword ptr [rbp+520h+end+8], xmm0
          }
          memset(&outOrg, 0, sizeof(outOrg));
          goto LABEL_42;
        }
LABEL_39:
        memset(&outOrg, 0, sizeof(outOrg));
        goto LABEL_46;
      }
      if ( v32 )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+4Ch]
          vmovss  dword ptr [rbp+520h+end], xmm0
          vmovss  xmm1, dword ptr [rbx+50h]
          vmovss  xmm0, dword ptr [rbx+54h]
        }
        goto LABEL_41;
      }
    }
    memset_0(&results, 0, sizeof(results));
    __asm
    {
      vmulss  xmm1, xmm6, dword ptr [rbp+520h+orient.axis]
      vaddss  xmm2, xmm1, dword ptr [rbp+520h+start]
      vmovss  dword ptr [rbp+520h+end], xmm2
      vmulss  xmm1, xmm6, dword ptr [rbp+520h+orient.axis+4]
      vaddss  xmm2, xmm1, dword ptr [rbp+520h+start+4]
      vmovss  dword ptr [rbp+520h+end+4], xmm2
      vmulss  xmm1, xmm6, dword ptr [rbp+520h+orient.axis+8]
      vaddss  xmm2, xmm1, dword ptr [rbp+520h+start+8]
      vmovss  dword ptr [rbp+520h+end+8], xmm2
    }
    v57 = Com_GameMode_SupportsFeature(WEAPON_MANTLE_LADDER);
    WeaponPriorityMap = BG_GetWeaponPriorityMap(weapona, isAlternate);
    PhysicsQuery_LegacyTrace((Physics_WorldId)(3 * localClientNum + 2), &results, &start, &end, &bounds_origin, Entity->nextState.number, 0, 41970017, v57, WeaponPriorityMap, All);
    if ( !results.startsolid )
    {
      __asm
      {
        vmulss  xmm3, xmm6, [rbp+520h+results.fraction]
        vmulss  xmm1, xmm3, dword ptr [rbp+520h+orient.axis]
        vaddss  xmm2, xmm1, dword ptr [rbp+520h+start]
        vmovss  dword ptr [rbp+520h+end], xmm2
        vmulss  xmm0, xmm3, dword ptr [rbp+520h+orient.axis+4]
        vaddss  xmm1, xmm0, dword ptr [rbp+520h+start+4]
        vmulss  xmm2, xmm3, dword ptr [rbp+520h+orient.axis+8]
        vaddss  xmm0, xmm2, dword ptr [rbp+520h+start+8]
      }
      v80 = 1;
      goto LABEL_41;
    }
    goto LABEL_39;
  }
LABEL_46:
  __asm
  {
    vmovaps xmm6, xmmword ptr [rsp+620h+var_58+8]
    vmovaps xmm7, [rsp+620h+var_68+8]
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
  scr_string_t tag_torso; 
  char v17; 
  const cpose_t *Pose; 
  bool result; 
  unsigned __int8 inOutIndex[4]; 
  LocalClientNum_t localClientNuma; 
  int modelIndex; 
  vec3_t in1; 
  vec3_t out; 
  tmat43_t<vec3_t> outTagMat; 

  localClientNuma = localClientNum;
  _R14 = outTargetPos;
  _RBX = le;
  if ( (!CG_LocalEntityTypeIsBeamTracer(le->leType) || _RBX->leType == LE_BEAM_TRACER_TYPE_FIRST) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 2117, ASSERT_TYPE_ASSERT, "(CG_LocalEntityTypeIsBeamTracer( le->leType ) && ( le->leType != LE_BEAM_TRACER ))", (const char *)&queryFormat, "CG_LocalEntityTypeIsBeamTracer( le->leType ) && ( le->leType != LE_BEAM_TRACER )") )
    __debugbreak();
  if ( !outTargetEntNum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 2118, ASSERT_TYPE_ASSERT, "(outTargetEntNum)", (const char *)&queryFormat, "outTargetEntNum") )
    __debugbreak();
  *(_QWORD *)_R14->v = 0i64;
  _R14->v[2] = 0.0;
  *outTargetEntNum = 2047;
  trackedEntNum = _RBX->u.laser.trackedEntNum;
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
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vmovss  dword ptr [rbp+57h+in1], xmm0
      vmovss  dword ptr [rbp+57h+in1+4], xmm0
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+0D8h]
      vmovss  xmm1, dword ptr [rbx+0DCh]
      vmovss  dword ptr [rbp+57h+in1], xmm0
      vmovss  xmm0, dword ptr [rbx+0E0h]
      vmovss  dword ptr [rbp+57h+in1+4], xmm1
    }
  }
  tag_torso = scr_const.tag_torso;
  __asm { vmovss  dword ptr [rbp+57h+in1+8], xmm0 }
  if ( clientNum != trackedEntNum )
    tag_torso = _RBX->u.laser.trackedEntTag;
  inOutIndex[0] = -2;
  v17 = 1;
  if ( !DObjGetBoneIndexInternal_53(ClientDObj, tag_torso, inOutIndex, &modelIndex) )
  {
    inOutIndex[0] = -2;
    v17 = 0;
    if ( !DObjGetBoneIndexInternal_53(ClientDObj, scr_const.tag_origin, inOutIndex, &modelIndex) )
      return 0;
  }
  Pose = CG_GetPose(localClientNuma, trackedEntNum);
  CG_DObjGetWorldBoneMatrix(Pose, ClientDObj, inOutIndex[0], (tmat33_t<vec3_t> *)&outTagMat, &outTagMat.m[3]);
  if ( v17 )
  {
    MatrixTransformVector43(&in1, &outTagMat, &out);
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+57h+out+8]
      vmovss  xmm1, dword ptr [rbp+57h+out+4]
      vmovss  xmm2, dword ptr [rbp+57h+out]
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm2, dword ptr [rbp+57h+outOrigin]
      vmovss  xmm1, dword ptr [rbp+57h+outOrigin+4]
      vmovss  xmm0, dword ptr [rbp+57h+outOrigin+8]
    }
  }
  *outTargetEntNum = trackedEntNum;
  result = 1;
  __asm
  {
    vmovss  dword ptr [r14], xmm2
    vmovss  dword ptr [r14+4], xmm1
    vmovss  dword ptr [r14+8], xmm0
  }
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
  cg_t *LocalClientGlobals; 
  char v68; 
  char v69; 
  bool result; 
  vec3_t outOrg; 
  __int64 v78; 
  char v80; 
  void *retaddr; 

  _RAX = &retaddr;
  v78 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm10
    vmovaps xmmword ptr [rax-58h], xmm11
  }
  _RBX = outPoint;
  _RSI = end;
  __asm
  {
    vmovss  xmm0, dword ptr [r8]
    vsubss  xmm11, xmm0, dword ptr [rdx]
    vmovss  xmm0, dword ptr [r8+4]
    vsubss  xmm10, xmm0, dword ptr [rdx+4]
    vmovss  xmm0, dword ptr [r8+8]
    vsubss  xmm6, xmm0, dword ptr [rdx+8]
  }
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+98h+outOrg]
    vsubss  xmm8, xmm0, dword ptr [rdi]
    vmovss  xmm1, dword ptr [rsp+98h+outOrg+4]
    vsubss  xmm4, xmm1, dword ptr [rdi+4]
    vmovss  xmm0, dword ptr [rsp+98h+outOrg+8]
    vsubss  xmm7, xmm0, dword ptr [rdi+8]
    vmulss  xmm2, xmm10, xmm10
    vmulss  xmm1, xmm11, xmm11
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm6, xmm6
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm1, xmm2, xmm2
    vcmpless xmm0, xmm1, cs:__real@80000000
    vmovss  xmm2, cs:__real@3f800000
    vblendvps xmm1, xmm1, xmm2, xmm0
    vdivss  xmm0, xmm2, xmm1
    vmulss  xmm3, xmm11, xmm0
    vmulss  xmm5, xmm10, xmm0
    vmulss  xmm6, xmm6, xmm0
    vmulss  xmm1, xmm5, xmm4
    vmulss  xmm0, xmm3, xmm8
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, xmm7
    vaddss  xmm4, xmm2, xmm1
    vmulss  xmm0, xmm4, xmm3
    vaddss  xmm2, xmm0, dword ptr [rdi]
    vmovss  dword ptr [rbx], xmm2
    vmulss  xmm1, xmm4, xmm5
    vaddss  xmm3, xmm1, dword ptr [rdi+4]
    vmovss  dword ptr [rbx+4], xmm3
    vmulss  xmm0, xmm4, xmm6
    vaddss  xmm1, xmm0, dword ptr [rdi+8]
    vmovss  dword ptr [rbx+8], xmm1
    vsubss  xmm2, xmm2, dword ptr [rdi]
    vsubss  xmm0, xmm3, dword ptr [rdi+4]
    vsubss  xmm3, xmm1, dword ptr [rdi+8]
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm7, xmm2, xmm1
    vmovss  xmm8, dword ptr [rsi]
    vsubss  xmm3, xmm8, dword ptr [rdi]
    vmovss  xmm0, dword ptr [rsi+4]
    vsubss  xmm2, xmm0, dword ptr [rdi+4]
    vmovss  xmm1, dword ptr [rsi+8]
    vsubss  xmm4, xmm1, dword ptr [rdi+8]
    vmulss  xmm2, xmm2, xmm2
    vmulss  xmm0, xmm3, xmm3
    vaddss  xmm3, xmm2, xmm0
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm2, xmm3, xmm1
    vcomiss xmm7, xmm2
  }
  if ( !(v68 | v69) )
  {
    __asm { vmovss  dword ptr [rbx], xmm8 }
    _RBX->v[1] = _RSI->v[1];
    _RBX->v[2] = _RSI->v[2];
  }
  result = 1;
  memset(&outOrg, 0, sizeof(outOrg));
  _R11 = &v80;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, [rsp+98h+var_28]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm10, xmmword ptr [r11-40h]
    vmovaps xmm11, xmmword ptr [r11-50h]
  }
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
  unsigned __int8 flags; 
  __int64 v11; 
  int v13; 
  int v14; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v13 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 1161, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( g_laserCount ) ) + 0 ) )", "localClientNum doesn't index g_laserCount\n\t%i not in [0, %i)", localClientNum, v13) )
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
      v14 = 96;
      LODWORD(v11) = g_laserCount[v1];
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 1174, ASSERT_TYPE_ASSERT, "( 0 ) <= ( g_laserCount[localClientNum] ) && ( g_laserCount[localClientNum] ) <= ( ( sizeof( *array_counter( g_lasers[localClientNum] ) ) + 0 ) )", "g_laserCount[localClientNum] not in [0, ARRAY_COUNT( g_lasers[localClientNum] )]\n\t%i not in [%i, %i]", v11, 0i64, v14) )
        __debugbreak();
    }
    v3 = g_laserCount[v1] - 1;
    v4 = v3;
    if ( v3 >= 0 )
    {
      _RBP = g_lasers;
      _RBX = &g_lasers[v1][v3];
      do
      {
        flags = _RBX->flags;
        if ( (flags & 4) != 0 )
        {
          CG_LaserClientEffectCleanUpAll((const LocalClientNum_t)v1, _RBX);
          _RAX = 96 * v1 + (int)g_laserCount[v1];
          __asm
          {
            vmovups ymm0, ymmword ptr [rax+rbp-44h]
            vmovups ymmword ptr [rbx], ymm0
            vmovups ymm1, ymmword ptr [rax+rbp-24h]
            vmovups ymmword ptr [rbx+20h], ymm1
          }
          _RBX->endEffect[1] = g_lasers[0][_RAX - 1].endEffect[1];
          --g_laserCount[v1];
        }
        else
        {
          _RBX->flags = flags | 4;
        }
        --_RBX;
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
  cg_t_vtbl *v9; 
  __int64 clientNum; 
  const characterInfo_t *CharacterInfo; 
  __int64 v13; 
  const CgWeaponMap *Instance; 
  LaserClient *laserClient; 
  vec3_t *viewOffset; 
  int viewOffseta; 
  __int64 checkLaserVisibility; 
  int usingNightVision; 
  vec3_t v21; 

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
    _RSI = CG_GetLocalClientGlobals((const LocalClientNum_t)v2);
    __asm
    {
      vmovss  xmm0, dword ptr [rax+699Ch]
      vmovss  xmm1, dword ptr [rax+69A0h]
    }
    v9 = _RSI->__vftable;
    clientNum = _RSI->predictedPlayerState.clientNum;
    __asm
    {
      vmovss  dword ptr [rsp+98h+var_40], xmm0
      vmovss  xmm0, dword ptr [rax+69A4h]
      vmovss  dword ptr [rsp+98h+var_40+8], xmm0
      vmovss  dword ptr [rsp+98h+var_40+4], xmm1
    }
    if ( v9->IsMP(_RSI) )
    {
      if ( (unsigned int)clientNum >= _RSI[1].predictedPlayerState.rxvOmnvars[64].timeModified )
      {
        LODWORD(checkLaserVisibility) = _RSI[1].predictedPlayerState.rxvOmnvars[64].timeModified;
        LODWORD(viewOffset) = clientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 12, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", viewOffset, checkLaserVisibility) )
          __debugbreak();
      }
      CharacterInfo = (const characterInfo_t *)(*(_QWORD *)&_RSI[1].predictedPlayerState.rxvOmnvars[62] + 14792 * clientNum);
    }
    else
    {
      CharacterInfo = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)_RSI, clientNum);
    }
    v13 = v3;
    Instance = CgWeaponMap::GetInstance((const LocalClientNum_t)v2);
    if ( v3 > 0 )
    {
      laserClient = g_lasers[v2];
      do
      {
        if ( (laserClient->flags & 4) == 0 )
          CG_Laser_DrawAll_Single((const LocalClientNum_t)v2, world, _RSI, Instance, CharacterInfo, &v21, v5, v4, laserClient);
        ++laserClient;
        --v13;
      }
      while ( v13 );
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
bool CG_LaserDrawSingle(LocalClientNum_t localClientNum, LaserClient *laserClient, const PlayerHandIndex laserHandIndex, const LaserDef *laserDef, const playerState_s *ps, const vec3_t *localPlayerGunAngles, centity_t *cent, DObj *obj, const cpose_t *pose, const vec3_t *viewerPos, LaserLightEnum laserLightEnum, const Weapon *weapon, bool isAlternate, bool isPlayerView)
{
  PlayerHandIndex v20; 
  const cpose_t *v21; 
  bool weaponIsDefault; 
  cg_t *LocalClientGlobals; 
  const cg_t *v24; 
  unsigned int number; 
  const characterInfo_t *CharacterInfo; 
  centity_t *v27; 
  __int16 otherEntityNum; 
  centity_t *Entity; 
  __int64 v31; 
  ParticleSystemHandle *p_beamEffect; 
  ParticleSystemHandle *p_endEffect; 
  cg_t *v34; 
  WeaponHand *m_weaponHand; 
  const cg_t *v42; 
  const characterInfo_t *v43; 
  char v44; 
  char v45; 
  const dvar_t *v86; 
  bool viewCenterInAds; 
  unsigned __int8 *priorityMap; 
  bool v96; 
  unsigned __int8 outBoneIndex[3]; 
  PlayerHandIndex laserHandIndexa; 
  PlayerHandIndex playerHand; 
  scr_string_t outTagName; 
  Weapon *r_weapon; 
  LaserDef *v102; 
  vec3_t *v103; 
  vec3_t *v104; 
  vec3_t outHitPoint; 
  vec3_t v106; 
  vec3_t v107; 
  orientation_t outOrigin; 
  Bounds bounds; 

  _R12 = ps;
  v20 = laserHandIndex;
  v21 = pose;
  v104 = (vec3_t *)viewerPos;
  r_weapon = (Weapon *)weapon;
  v102 = (LaserDef *)laserDef;
  laserHandIndexa = laserHandIndex;
  v103 = (vec3_t *)localPlayerGunAngles;
  *(_QWORD *)v107.v = pose;
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
    v21 = *(const cpose_t **)v107.v;
  }
  if ( v20 == WEAPON_HAND_LEFT )
  {
    v24 = CG_GetLocalClientGlobals(localClientNum);
    if ( !v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 705, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    number = cent->nextState.number;
    if ( v24->HasCharacterInfo((cg_t *)v24, number) )
    {
      CharacterInfo = CG_GetCharacterInfo(v24, number);
      if ( CharacterInfo )
      {
LABEL_24:
        TagPair::TagPair((TagPair *)&v106, scr_const.tag_laser, scr_const.tag_flash);
        outBoneIndex[0] = -2;
        if ( TagPair::GetTagNameAndBoneIndexForCharacter((TagPair *)&v106, obj, CharacterInfo, CHAR_MODEL_WEAPON_HELD_LEFT, &outTagName, outBoneIndex) )
        {
          CG_DObjGetWorldBoneMatrix(*(const cpose_t **)v107.v, obj, outBoneIndex[0], &outOrigin.axis, &outOrigin.origin);
          v20 = laserHandIndexa;
          goto LABEL_26;
        }
        v20 = laserHandIndexa;
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
  if ( CG_GetLaserOrient(localClientNum, ps, cent, obj, v21, r_weapon, isAlternate, isPlayerView, weaponIsDefault, &outOrigin) )
  {
LABEL_26:
    if ( !laserClient )
    {
      v34 = CG_GetLocalClientGlobals(localClientNum);
      if ( !v34 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 1019, ASSERT_TYPE_ASSERT, "(cGameGlob)", (const char *)&queryFormat, "cGameGlob") )
        __debugbreak();
      m_weaponHand = v34->m_weaponHand;
      if ( v34 == (cg_t *)-807496i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 1022, ASSERT_TYPE_ASSERT, "(weapHand)", (const char *)&queryFormat, "weapHand") )
        __debugbreak();
      if ( !m_weaponHand->viewModelDObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 1023, ASSERT_TYPE_ASSERT, "(weapHand->viewModelDObj)", (const char *)&queryFormat, "weapHand->viewModelDObj") )
        __debugbreak();
      if ( m_weaponHand->viewModelDObj == obj )
      {
        p_beamEffect = &v34->laserInfo[0].beamEffect;
        p_endEffect = &v34->laserInfo[0].endEffect;
      }
      else
      {
        if ( v34->m_weaponHand[1].viewModelDObj != obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 1032, ASSERT_TYPE_ASSERT, "(cGameGlob->GetViewModelHand( WEAPON_HAND_LEFT )->viewModelDObj == obj)", (const char *)&queryFormat, "cGameGlob->GetViewModelHand( WEAPON_HAND_LEFT )->viewModelDObj == obj") )
          __debugbreak();
        p_beamEffect = &v34->laserInfo[1].beamEffect;
        playerHand = WEAPON_HAND_LEFT;
        p_endEffect = &v34->laserInfo[1].endEffect;
      }
LABEL_60:
      if ( ps )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [r12+30h]
          vmovss  xmm1, dword ptr [r12+34h]
          vmovss  dword ptr [rbp+90h+var_D0], xmm0
          vmovss  xmm0, dword ptr [r12+38h]
          vmovss  dword ptr [rbp+90h+var_D0+8], xmm0
          vmovss  dword ptr [rbp+90h+var_D0+4], xmm1
        }
      }
      else
      {
        if ( !cent || cent->nextState.eType != ET_PLAYER )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+90h+outOrigin]
            vmovss  xmm1, dword ptr [rbp+90h+outOrigin+4]
            vmovss  dword ptr [rbp+90h+outHitPoint], xmm0
            vmovss  xmm0, dword ptr [rbp+90h+outOrigin+8]
            vmovss  dword ptr [rbp+90h+outHitPoint+8], xmm0
            vmovss  dword ptr [rbp+90h+outHitPoint+4], xmm1
          }
LABEL_76:
          v86 = DVARBOOL_laserDebug;
          if ( !DVARBOOL_laserDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "laserDebug") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v86);
          if ( v86->current.enabled )
          {
            CG_DebugStar(&outHitPoint, &colorGreen, 0, 0);
            CG_DebugStar(&outOrigin.origin, &colorBlue, 0, 0);
            __asm
            {
              vmovss  xmm3, cs:DEBUG_RAY_LENGTH
              vmulss  xmm1, xmm3, dword ptr [rbp+90h+outTagMat]
              vaddss  xmm2, xmm1, dword ptr [rbp+90h+outHitPoint]
              vmulss  xmm1, xmm3, dword ptr [rbp+90h+outTagMat+4]
              vmovss  [rbp+90h+var_E0.m_primaryTagName], xmm2
              vaddss  xmm2, xmm1, dword ptr [rbp+90h+outHitPoint+4]
              vmulss  xmm1, xmm3, dword ptr [rbp+90h+outTagMat+8]
              vmovss  [rbp+90h+var_E0.m_fallbackTagName], xmm2
              vaddss  xmm2, xmm1, dword ptr [rbp+90h+outHitPoint+8]
              vmovss  [rbp+90h+var_D8], xmm2
            }
            CG_DebugLine(&outHitPoint, &v106, &colorRed, 0, 0);
          }
          viewCenterInAds = isPlayerView && BG_IsWeaponLaserEndViewCenterInAds(r_weapon, isAlternate);
          priorityMap = BG_GetWeaponPriorityMap(r_weapon, isAlternate);
          v96 = AddCore(localClientNum, cent, &outOrigin, &outHitPoint, v104, v103, laserLightEnum, v102, p_beamEffect, p_endEffect, priorityMap, isPlayerView, playerHand, viewCenterInAds);
          if ( !v96 )
          {
            if ( laserClient )
              CG_LaserClientEffectCleanUp(localClientNum, laserClient, laserHandIndexa);
          }
          return v96;
        }
        CG_GetPoseOrigin(&cent->pose, &v107);
      }
      __asm
      {
        vmovaps [rsp+190h+var_50], xmm6
        vmovaps [rsp+190h+var_60], xmm7
        vmovaps [rsp+190h+var_70], xmm8
      }
      v42 = CG_GetLocalClientGlobals(localClientNum);
      v43 = CG_GetCharacterInfo(v42, cent->nextState.number);
      _RAX = BG_Suit_GetBounds(v43->suitIndex, PM_EFF_STANCE_DEFAULT);
      __asm
      {
        vmovups xmm0, xmmword ptr [rax]
        vaddss  xmm5, xmm0, dword ptr [rbp+90h+var_D0]
        vmovups xmmword ptr [rbp+90h+bounds.midPoint], xmm0
        vmovsd  xmm6, qword ptr [rax+10h]
        vmovss  xmm0, dword ptr [rbp+90h+bounds.midPoint+4]
        vaddss  xmm4, xmm0, dword ptr [rbp+90h+var_D0+4]
        vmovss  xmm0, dword ptr [rbp+90h+bounds.midPoint+8]
        vaddss  xmm3, xmm0, dword ptr [rbp+90h+var_D0+8]
        vsubss  xmm2, xmm5, dword ptr [rbp+90h+bounds.halfSize]
        vaddss  xmm1, xmm5, dword ptr [rbp+90h+bounds.halfSize]
        vmovsd  qword ptr [rbp+90h+bounds.halfSize+4], xmm6
        vsubss  xmm8, xmm3, dword ptr [rbp+90h+bounds.halfSize+8]
        vsubss  xmm7, xmm4, xmm6
        vmovss  dword ptr [rbp+90h+bounds.midPoint], xmm5
        vmovss  xmm5, dword ptr [rbp+90h+outOrigin]
        vcomiss xmm5, xmm2
        vmovss  dword ptr [rbp+90h+bounds.midPoint+4], xmm4
        vmovss  dword ptr [rbp+90h+bounds.midPoint+8], xmm3
        vaddss  xmm3, xmm3, dword ptr [rbp+90h+bounds.halfSize+8]
        vaddss  xmm4, xmm4, xmm6
        vmovaps xmm6, [rsp+190h+var_50]
      }
      if ( v44 )
        goto LABEL_71;
      __asm { vcomiss xmm5, xmm1 }
      if ( !(v44 | v45) )
        goto LABEL_71;
      __asm
      {
        vmovss  xmm1, dword ptr [rbp+90h+outOrigin+4]
        vcomiss xmm1, xmm7
        vcomiss xmm1, xmm4
      }
      if ( !(v44 | v45) )
        goto LABEL_71;
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+90h+outOrigin+8]
        vcomiss xmm0, xmm8
        vcomiss xmm0, xmm3
      }
      if ( v44 | v45 )
      {
        __asm
        {
          vmovss  dword ptr [rbp+90h+outHitPoint], xmm5
          vmovss  dword ptr [rbp+90h+outHitPoint+4], xmm1
          vmovss  dword ptr [rbp+90h+outHitPoint+8], xmm0
        }
      }
      else
      {
LABEL_71:
        __asm
        {
          vmovss  xmm3, dword ptr cs:__xmm@80000000800000008000000080000000
          vmovss  xmm0, dword ptr [rbp+90h+outTagMat]
          vmovss  xmm2, dword ptr [rbp+90h+outTagMat+4]
          vxorps  xmm1, xmm0, xmm3
          vxorps  xmm0, xmm2, xmm3
          vmovss  [rbp+90h+var_E0.m_primaryTagName], xmm1
          vmovss  xmm1, dword ptr [rbp+90h+outTagMat+8]
          vxorps  xmm2, xmm1, xmm3
          vmovss  [rbp+90h+var_D8], xmm2
          vmovss  [rbp+90h+var_E0.m_fallbackTagName], xmm0
        }
        if ( IntersectRayBounds(&outOrigin.origin, &v106, &bounds, (float *)&outTagName, &outHitPoint) )
        {
          __asm
          {
            vmovss  xmm4, cs:PULL_BACK_DISTANCE
            vmulss  xmm3, xmm4, [rbp+90h+var_E0.m_fallbackTagName]
            vmulss  xmm2, xmm4, [rbp+90h+var_E0.m_primaryTagName]
            vaddss  xmm2, xmm2, dword ptr [rbp+90h+outHitPoint]
            vmovss  dword ptr [rbp+90h+outHitPoint], xmm2
            vaddss  xmm2, xmm3, dword ptr [rbp+90h+outHitPoint+4]
            vmulss  xmm3, xmm4, [rbp+90h+var_D8]
            vmovss  dword ptr [rbp+90h+outHitPoint+4], xmm2
            vaddss  xmm2, xmm3, dword ptr [rbp+90h+outHitPoint+8]
          }
        }
        else
        {
          __asm
          {
            vmovss  xmm3, cs:PULL_BACK_DISTANCE_0
            vmulss  xmm1, xmm3, [rbp+90h+var_E0.m_primaryTagName]
            vaddss  xmm2, xmm1, dword ptr [rbp+90h+outOrigin]
            vmulss  xmm1, xmm3, [rbp+90h+var_E0.m_fallbackTagName]
            vmovss  dword ptr [rbp+90h+outHitPoint], xmm2
            vaddss  xmm2, xmm1, dword ptr [rbp+90h+outOrigin+4]
            vmulss  xmm1, xmm3, [rbp+90h+var_D8]
            vmovss  dword ptr [rbp+90h+outHitPoint+4], xmm2
            vaddss  xmm2, xmm1, dword ptr [rbp+90h+outOrigin+8]
          }
        }
        __asm { vmovss  dword ptr [rbp+90h+outHitPoint+8], xmm2 }
      }
      __asm
      {
        vmovaps xmm7, [rsp+190h+var_60]
        vmovaps xmm8, [rsp+190h+var_70]
      }
      goto LABEL_76;
    }
    if ( cent->nextState.eType == ET_ACTOR && (cent->nextState.lerp.u.actor.flags & 0x1C) != 0 )
    {
      v27 = cent;
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
      v27 = Entity;
    }
    CG_HandleLaserFlags(localClientNum, laserClient, v27, &outOrigin);
LABEL_44:
    v31 = v20;
    p_beamEffect = &laserClient->beamEffect[v20];
    p_endEffect = &laserClient->endEffect[v31];
    goto LABEL_60;
  }
LABEL_33:
  if ( laserClient )
    CG_LaserClientEffectCleanUp(localClientNum, laserClient, v20);
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
  __int64 v6; 
  __int64 v8; 
  CgWeaponMap *v9; 
  const Weapon *Weapon; 
  bool v12; 
  int weaponState; 
  int v18; 
  int v30; 
  __int64 shotCount; 
  int *fireTime; 
  int v57; 
  int fireDelay; 

  v6 = localClientNum;
  _RBX = ps;
  __asm
  {
    vmovaps [rsp+88h+var_38], xmm6
    vmovaps [rsp+88h+var_48], xmm7
  }
  v8 = playerHand;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 186, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 187, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (unsigned int)v8 >= 2 )
  {
    LODWORD(fireTime) = 2;
    LODWORD(shotCount) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 188, ASSERT_TYPE_ASSERT, "(unsigned)( playerHand ) < (unsigned)( NUM_WEAPON_HANDS )", "playerHand doesn't index NUM_WEAPON_HANDS\n\t%i not in [0, %i)", shotCount, fireTime) )
      __debugbreak();
  }
  if ( !CgWeaponMap::ms_instance[v6] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v9 = CgWeaponMap::ms_instance[v6];
  *(double *)&_XMM0 = BG_WeaponADSFractionAffectedByReload(v9, _RBX);
  __asm { vmovaps xmm6, xmm0 }
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 885, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 886, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  Weapon = BgWeaponMap::GetWeapon(v9, _RBX->weapCommon.weaponHandle);
  v12 = !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&_RBX->weapCommon.weapFlags, ACTIVE, 0x22u) && (GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&_RBX->weapCommon.weapFlags, ACTIVE, 0x11u) || GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&_RBX->weapCommon.weapFlags, ACTIVE, 0x1Bu));
  __asm
  {
    vmulss  xmm0, xmm6, xmm6
    vmulss  xmm1, xmm0, xmm6
    vmulss  xmm7, xmm1, xmm6
    vmovss  xmm6, cs:__real@3f800000
  }
  weaponState = _RBX->weapState[v8].weaponState;
  if ( weaponState == 17 )
  {
    v18 = BG_PlayerDualWielding(_RBX);
    BG_RechamberTime(_RBX, Weapon, v12, v18 == 1);
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm1, xmm1, ecx
      vcvtsi2ss xmm0, xmm0, eax
      vdivss  xmm0, xmm1, xmm0; val
      vxorps  xmm1, xmm1, xmm1; min
      vmovaps xmm2, xmm6; max
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmulss  xmm1, xmm0, cs:__real@41400000
      vmulss  xmm0, xmm1, xmm0
      vsubss  xmm1, xmm0, xmm1
      vaddss  xmm0, xmm1, xmm6
    }
LABEL_29:
    __asm
    {
      vmovaps xmm2, xmm6; max
      vxorps  xmm1, xmm1, xmm1; min
    }
    I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm { vmulss  xmm7, xmm7, xmm0 }
    goto LABEL_30;
  }
  if ( weaponState == 16 && ((BG_GetWeaponFireType(Weapon, v12) - 1) & 0xFFFFFFFD) == 0 )
  {
    v30 = BG_PlayerDualWielding(_RBX);
    BG_GetFireTime(v9, _RBX, Weapon, v12, v30 == 1, _RBX->weapState[v8].weaponShotCount, &v57, &fireDelay);
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, [rsp+88h+arg_0]
      vcvtsi2ss xmm1, xmm1, eax
      vdivss  xmm0, xmm1, xmm0; val
      vxorps  xmm1, xmm1, xmm1; min
      vmovaps xmm2, xmm6; max
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmulss  xmm1, xmm0, cs:__real@41400000
      vmulss  xmm0, xmm1, xmm0
      vsubss  xmm3, xmm0, xmm1
      vaddss  xmm0, xmm3, xmm6; val
    }
    goto LABEL_29;
  }
LABEL_30:
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+4C0h]
    vmulss  xmm3, xmm0, cs:__real@41400000
    vmulss  xmm0, xmm3, xmm0
    vsubss  xmm3, xmm0, xmm3
    vaddss  xmm0, xmm3, xmm6; val
    vmovaps xmm2, xmm6; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovaps xmm6, [rsp+88h+var_38]
    vmulss  xmm0, xmm0, xmm7
    vmovaps xmm7, [rsp+88h+var_48]
  }
  return *(float *)&_XMM0;
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
  int clientNum; 
  const characterInfo_t *CharacterInfo; 
  __int64 v12; 
  const characterInfo_t *v13; 
  const CgWeaponMap *v14; 
  unsigned __int8 i; 
  vec3_t *viewOffset; 
  __int64 checkLaserVisibility; 
  vec3_t v18; 

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
  _RSI = CG_GetLocalClientGlobals((const LocalClientNum_t)*(_DWORD *)cmd);
  __asm
  {
    vmovss  xmm0, dword ptr [rax+699Ch]
    vmovss  xmm1, dword ptr [rax+69A0h]
  }
  clientNum = _RSI->predictedPlayerState.clientNum;
  __asm
  {
    vmovss  dword ptr [rsp+98h+var_48], xmm0
    vmovss  xmm0, dword ptr [rax+69A4h]
    vmovss  dword ptr [rsp+98h+var_48+8], xmm0
    vmovss  dword ptr [rsp+98h+var_48+4], xmm1
  }
  CharacterInfo = CG_GetCharacterInfo(_RSI, clientNum);
  v12 = *(int *)cmd;
  v13 = CharacterInfo;
  if ( !CgWeaponMap::ms_instance[v12] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v14 = CgWeaponMap::ms_instance[v12];
  for ( i = 0; i < *((_BYTE *)cmd + 9); ++i )
    CG_Laser_DrawAll_Single(*(const LocalClientNum_t *)cmd, *((const LaserCollisionWorld *)cmd + 1), _RSI, v14, v13, &v18, v4, usingNightVision, &g_lasers[*(int *)cmd][s_laserDrawBatches[*(int *)cmd][*((unsigned __int8 *)cmd + 8)][i]]);
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
  __int64 v3; 
  centity_t *Entity; 
  const centity_t *v6; 
  const centity_t *v7; 
  unsigned __int32 v20; 
  __int64 v21; 
  float4 endPos; 
  float4 startPos; 
  orientation_t outOrient; 
  orientation_t v41; 

  v3 = localClientNum;
  Entity = CG_GetEntity(localClientNum, le->ownerNum);
  v6 = CG_GetEntity((const LocalClientNum_t)v3, Entity->nextState.otherEntityNum);
  v7 = CG_GetEntity((const LocalClientNum_t)v3, le->u.laser.trackedEntNum);
  if ( CG_GetBeamEntOrientation((LocalClientNum_t)v3, v6, (const scr_string_t)le->u.laser.ownerTag, &outOrient) && CG_GetBeamEntOrientation((LocalClientNum_t)v3, v7, (const scr_string_t)le->u.laser.trackedEntTag, &v41) )
  {
    __asm { vmovss  xmm0, dword ptr [rsp+128h+outOrient.origin] }
    endPos.v.m128_i32[3] = 0;
    __asm
    {
      vmovups xmm3, xmmword ptr [rsp+70h]
      vmovss  xmm3, xmm3, xmm0
      vinsertps xmm3, xmm3, dword ptr [rsp+128h+outOrient.origin+4], 10h
      vinsertps xmm3, xmm3, dword ptr [rsp+128h+outOrient.origin+8], 20h
      vmovss  xmm0, dword ptr [rsp+128h+var_68.origin]
      vmovups xmmword ptr [rsp+70h], xmm3
      vmovups xmmword ptr [rsp+128h+startPos.v], xmm3
    }
    endPos.v.m128_i32[3] = 0;
    __asm
    {
      vmovups xmm3, xmmword ptr [rsp+70h]
      vmovss  xmm3, xmm3, xmm0
      vinsertps xmm3, xmm3, dword ptr [rsp+128h+var_68.origin+4], 10h
      vinsertps xmm3, xmm3, dword ptr [rsp+128h+var_68.origin+8], 20h
      vmovups xmmword ptr [rsp+70h], xmm3
      vmovups xmmword ptr [rsp+70h], xmm3
    }
    if ( le->u.laser.pBeamEffect == PARTICLE_SYSTEM_INVALID_HANDLE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_laser.cpp", 2766, ASSERT_TYPE_ASSERT, "(le->u.laser.pBeamEffect)", (const char *)&queryFormat, "le->u.laser.pBeamEffect") )
      __debugbreak();
    _RBX = NULL;
    v20 = 0;
    if ( g_particleSystemsGeneration[4096 * v3 + (le->u.laser.pBeamEffect & 0xFFF)].__all32 == le->u.laser.pBeamEffect )
      v20 = le->u.laser.pBeamEffect & 0xFFF;
    v21 = (v3 << 12) + v20;
    if ( g_particleSystems[0][v21] >= (ParticleSystem *)0x1000 )
      _RBX = g_particleSystems[0][v21];
    if ( _RBX )
    {
      __asm { vmovaps [rsp+128h+var_28], xmm6 }
      ParticleSystem::SetBeamPos(_RBX, &startPos, &endPos);
      __asm
      {
        vmovups xmm0, xmmword ptr [rsp+128h+startPos.v]
        vmovups xmmword ptr [rbx+30h], xmm0
        vmovups xmm1, xmmword ptr [rbx+20h]
        vmovups xmm3, xmmword ptr [rbx]
        vshufps xmm6, xmm3, xmmword ptr [rbx+10h], 44h ; 'D'
        vshufps xmm2, xmm3, xmmword ptr [rbx+10h], 0EEh ; 'î'
        vshufps xmm4, xmm1, xmm0, 44h ; 'D'
        vshufps xmm5, xmm1, xmm0, 0EEh ; 'î'
        vshufps xmm0, xmm6, xmm4, 88h ; 'ˆ'
        vshufps xmm1, xmm6, xmm4, 0DDh ; 'Ý'
        vmovaps xmm6, [rsp+128h+var_28]
        vmovups xmmword ptr [rsp+128h+var_F8+10h], xmm1
        vmovups xmmword ptr [rsp+128h+var_F8], xmm0
        vshufps xmm0, xmm2, xmm5, 88h ; 'ˆ'
        vshufps xmm1, xmm2, xmm5, 0DDh ; 'Ý'
        vmovups xmmword ptr [rsp+128h+var_D8], xmm0
        vmovups ymm0, [rsp+128h+var_F8]
        vmovups xmmword ptr [rsp+128h+var_D8+10h], xmm1
        vmovups ymm1, [rsp+128h+var_D8]
        vmovups ymmword ptr [rbx+40h], ymm0
        vmovups ymmword ptr [rbx+60h], ymm1
      }
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
  const cpose_t *v14; 
  float v16; 
  vec3_t end; 
  vec3_t outOrigin; 
  __int64 v19; 
  vec3_t tagOffset; 
  void *retaddr; 

  _R11 = &retaddr;
  v19 = -2i64;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  dword ptr [r11-40h], xmm0
  }
  *(_QWORD *)&tagOffset.y = 0i64;
  PoseExtended = CG_GetPoseExtended(localClientNum, owner->nextState.number, 0);
  CG_GetPoseOrigin(PoseExtended, &outOrigin);
  v14 = CG_GetPoseExtended(localClientNum, trackedEntNum, 0);
  CG_GetPoseOrigin(v14, &end);
  __asm
  {
    vmovss  xmm0, cs:__real@42b40000
    vmovss  [rsp+0D8h+var_78], xmm0
  }
  CG_LaserBeamAddCommon(localClientNum, &outOrigin, &end, owner, ownerTag, &NULL_WEAPON, fxId, 0, LE_BEAM_SCRIPTED, trackedEntNum, trackedEntTag, &tagOffset, v16, 0);
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
  float v18; 

  type = CG_GetLocalEntityTypeForTrackingBeamTracer(shotIndex);
  __asm
  {
    vmovss  xmm0, [rsp+78h+aimSpreadAmount]
    vmovss  [rsp+78h+var_18], xmm0
  }
  CG_LaserBeamAddCommon(localClientNum, start, end, owner, (const scr_string_t)0, weapon, 0, isAlternate, type, trackedEntNum, autoTargetEntTag, tagOffset, v18, isSecondaryLaser);
}

