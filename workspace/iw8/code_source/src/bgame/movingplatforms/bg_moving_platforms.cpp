/*
==============
BGMovingPlatformClient::ShouldAdjustWalkable
==============
*/

int __fastcall BGMovingPlatformClient::ShouldAdjustWalkable(BGMovingPlatformClient *this, const playerState_s *ps, const WorldUpReferenceFrame *refFrame, const trace_t *trace)
{
  return ?ShouldAdjustWalkable@BGMovingPlatformClient@@QEBAHPEBUplayerState_s@@PEBVWorldUpReferenceFrame@@PEBUtrace_t@@@Z(this, ps, refFrame, trace);
}

/*
==============
BGMovingPlatformClient::StartMantle
==============
*/

void __fastcall BGMovingPlatformClient::StartMantle(BGMovingPlatformClient *this, playerState_s *ps, int endGroundEnt)
{
  ?StartMantle@BGMovingPlatformClient@@QEBAXPEAUplayerState_s@@H@Z(this, ps, endGroundEnt);
}

/*
==============
BGMovingPlatformClient::CorrectPlatformPenetration
==============
*/

int __fastcall BGMovingPlatformClient::CorrectPlatformPenetration(BGMovingPlatformClient *this, const pmove_t *const pm, trace_t *const inOutTrace, vec3_t *outCorrectedOrigin, bool allowPhysicsTeleport)
{
  return ?CorrectPlatformPenetration@BGMovingPlatformClient@@QEBAHQEBVpmove_t@@QEAUtrace_t@@AEATvec3_t@@_N@Z(this, pm, inOutTrace, outCorrectedOrigin, allowPhysicsTeleport);
}

/*
==============
BGMovingPlatformClient::SetHandler
==============
*/

void __fastcall BGMovingPlatformClient::SetHandler(BGMovingPlatformClient *this, const BgHandler *handler)
{
  ?SetHandler@BGMovingPlatformClient@@QEAAXPEBVBgHandler@@@Z(this, handler);
}

/*
==============
BGMovingPlatforms::UpdateHeight
==============
*/

void __fastcall BGMovingPlatforms::UpdateHeight(float *height, const playerState_s *ps, BgHandler *handler, const vec3_t *playerOrigin, const vec3_t *platformOrigin, const vec3_t *platformAngles, const vec3_t *deltaAngles, const vec3_t *deltaOrigin)
{
  ?UpdateHeight@BGMovingPlatforms@@SAXPEAMPEBUplayerState_s@@PEAVBgHandler@@AEBTvec3_t@@3333@Z(height, ps, handler, playerOrigin, platformOrigin, platformAngles, deltaAngles, deltaOrigin);
}

/*
==============
BGMovingPlatformClient::PenetrationEntityHandler
==============
*/

int __fastcall BGMovingPlatformClient::PenetrationEntityHandler(BGMovingPlatformClient *this, const playerState_s *ps, const vec3_t *pos, const Bounds *bounds, int entNum, int brushId, const vec3_t *brushOrigin, const vec3_t *brushAngles, int contentMask, vec3_t *outPenetration, bool allowPhysicsTeleport)
{
  return ?PenetrationEntityHandler@BGMovingPlatformClient@@QEBAHPEBUplayerState_s@@AEBTvec3_t@@PEBUBounds@@HH11HAEAT3@_N@Z(this, ps, pos, bounds, entNum, brushId, brushOrigin, brushAngles, contentMask, outPenetration, allowPhysicsTeleport);
}

/*
==============
BGMovingPlatformClient::GetPlatformOriginAndAngles
==============
*/

int __fastcall BGMovingPlatformClient::GetPlatformOriginAndAngles(BGMovingPlatformClient *this, const playerState_s *ps, vec3_t *outOrigin, vec3_t *outAngles)
{
  return ?GetPlatformOriginAndAngles@BGMovingPlatformClient@@QEBAHPEBUplayerState_s@@AEATvec3_t@@1@Z(this, ps, outOrigin, outAngles);
}

/*
==============
BGMovingPlatformClient::GetMoverEntityInfoFromPs
==============
*/

int __fastcall BGMovingPlatformClient::GetMoverEntityInfoFromPs(BGMovingPlatformClient *this, const playerState_s *ps, BGMovingPlatformClient::MoverInfo *info)
{
  return ?GetMoverEntityInfoFromPs@BGMovingPlatformClient@@IEBAHPEBUplayerState_s@@PEAUMoverInfo@1@@Z(this, ps, info);
}

/*
==============
BGMovingPlatforms::~BGMovingPlatforms
==============
*/

void __fastcall BGMovingPlatforms::~BGMovingPlatforms(BGMovingPlatforms *this)
{
  ??1BGMovingPlatforms@@UEAA@XZ(this);
}

/*
==============
BGMovingPlatforms::IsOnMovingPlatform
==============
*/

int __fastcall BGMovingPlatforms::IsOnMovingPlatform(const playerState_s *ps)
{
  return ?IsOnMovingPlatform@BGMovingPlatforms@@SAHPEBUplayerState_s@@@Z(ps);
}

/*
==============
BGMovingPlatformClient::UpdateInternalTransforms
==============
*/

void __fastcall BGMovingPlatformClient::UpdateInternalTransforms(BGMovingPlatformClient *this, pmove_t *pm, const tmat43_t<vec3_t> *startTransform, const tmat43_t<vec3_t> *endTransform, vec3_t *outAppliedAngles)
{
  ?UpdateInternalTransforms@BGMovingPlatformClient@@MEAAXPEAVpmove_t@@AEBT?$tmat43_t@Tvec3_t@@@@1AEATvec3_t@@@Z(this, pm, startTransform, endTransform, outAppliedAngles);
}

/*
==============
BGMovingPlatformClient::NeedToResolveCollision
==============
*/

int __fastcall BGMovingPlatformClient::NeedToResolveCollision(BGMovingPlatformClient *this, const playerState_s *ps)
{
  return ?NeedToResolveCollision@BGMovingPlatformClient@@QEBAHPEBUplayerState_s@@@Z(this, ps);
}

/*
==============
BGMovingPlatforms::ShouldPerformGroundTraceFallback
==============
*/

int __fastcall BGMovingPlatforms::ShouldPerformGroundTraceFallback(pmove_t *pm, trace_t *trace)
{
  return ?ShouldPerformGroundTraceFallback@BGMovingPlatforms@@CAHPEAVpmove_t@@PEAUtrace_t@@@Z(pm, trace);
}

/*
==============
BGMovingPlatformClient::UpdatePlayerAngles
==============
*/

void __fastcall BGMovingPlatformClient::UpdatePlayerAngles(BGMovingPlatformClient *this, playerState_s *ps, const vec3_t *delta, const vec3_t *platformAngles, vec3_t *outAppliedDelta, int useImprovedAlgorithm)
{
  ?UpdatePlayerAngles@BGMovingPlatformClient@@IEAAXPEAUplayerState_s@@AEBTvec3_t@@1AEAT3@H@Z(this, ps, delta, platformAngles, outAppliedDelta, useImprovedAlgorithm);
}

/*
==============
BGMovingPlatforms::UpdatePoint
==============
*/

void __fastcall BGMovingPlatforms::UpdatePoint(vec3_t *point, const vec3_t *platformOrigin, const vec3_t *platformAngles, const vec3_t *deltaAngles, const vec3_t *deltaOrigin)
{
  ?UpdatePoint@BGMovingPlatforms@@SAXAEATvec3_t@@AEBT2@111@Z(point, platformOrigin, platformAngles, deltaAngles, deltaOrigin);
}

/*
==============
BGMovingPlatforms::UpdateDirection
==============
*/

void __fastcall BGMovingPlatforms::UpdateDirection(vec3_t *dir, const vec3_t *platformAngles, const vec3_t *deltaAngles)
{
  ?UpdateDirection@BGMovingPlatforms@@SAXAEATvec3_t@@AEBT2@1@Z(dir, platformAngles, deltaAngles);
}

/*
==============
BGMovingPlatforms::IsMoverOptimized
==============
*/

bool __fastcall BGMovingPlatforms::IsMoverOptimized(const entityState_t *const mover)
{
  return ?IsMoverOptimized@BGMovingPlatforms@@SA_NQEBUentityState_t@@@Z(mover);
}

/*
==============
BGMovingPlatformClient::GetPlatformPenetration
==============
*/

int __fastcall BGMovingPlatformClient::GetPlatformPenetration(BGMovingPlatformClient *this, const playerState_s *ps, const vec3_t *pos, const Bounds *bounds, int tracemask, vec3_t *outPenetration, bool allowPhysicsTeleport)
{
  return ?GetPlatformPenetration@BGMovingPlatformClient@@QEBAHPEBUplayerState_s@@AEBTvec3_t@@PEBUBounds@@HAEAT3@_N@Z(this, ps, pos, bounds, tracemask, outPenetration, allowPhysicsTeleport);
}

/*
==============
BGMovingPlatforms::DoesPenetractionExceedBounds
==============
*/

int __fastcall BGMovingPlatforms::DoesPenetractionExceedBounds(const Bounds *bounds, const vec3_t *normal)
{
  return ?DoesPenetractionExceedBounds@BGMovingPlatforms@@SAHPEBUBounds@@AEBTvec3_t@@@Z(bounds, normal);
}

/*
==============
BGMovingPlatformClient::BGMovingPlatformClient
==============
*/

void __fastcall BGMovingPlatformClient::BGMovingPlatformClient(BGMovingPlatformClient *this, const BgHandler *handler, LocalClientNum_t localClientNum)
{
  ??0BGMovingPlatformClient@@QEAA@PEBVBgHandler@@W4LocalClientNum_t@@@Z(this, handler, localClientNum);
}

/*
==============
BGMovingPlatformClient::InitPMove
==============
*/

void __fastcall BGMovingPlatformClient::InitPMove(BGMovingPlatformClient *this, int clientID)
{
  ?InitPMove@BGMovingPlatformClient@@QEAAXH@Z(this, clientID);
}

/*
==============
BGMovingPlatforms::IsMovingPlatform
==============
*/

int __fastcall BGMovingPlatforms::IsMovingPlatform(int entityNum)
{
  return ?IsMovingPlatform@BGMovingPlatforms@@SAHH@Z(entityNum);
}

/*
==============
BGMovingPlatforms::GetBestPlatformUp
==============
*/

void __fastcall BGMovingPlatforms::GetBestPlatformUp(const playerState_s *const ps, const vec3_t *platformAngles, vec3_t *outBestUp, vec4_t *outBestUpQuat)
{
  ?GetBestPlatformUp@BGMovingPlatforms@@SAXQEBUplayerState_s@@AEBTvec3_t@@PEAT3@PEATvec4_t@@@Z(ps, platformAngles, outBestUp, outBestUpQuat);
}

/*
==============
BGMovingPlatforms::IsPlatformType
==============
*/

int __fastcall BGMovingPlatforms::IsPlatformType(int eType)
{
  return ?IsPlatformType@BGMovingPlatforms@@SAHH@Z(eType);
}

/*
==============
BGMovingPlatformClient::AdjustWishVelocityForLadder
==============
*/

void __fastcall BGMovingPlatformClient::AdjustWishVelocityForLadder(BGMovingPlatformClient *this, const pmove_t *pm, pml_t *pml, const vec3_t *right, float ladderScale, float upscale, float scale, float scaleConst, vec3_t *inOutWishVel, const vec3_t *ladderNormal)
{
  ?AdjustWishVelocityForLadder@BGMovingPlatformClient@@QEBAXPEBVpmove_t@@PEAUpml_t@@AEBTvec3_t@@MMMMAEAT4@2@Z(this, pm, pml, right, ladderScale, upscale, scale, scaleConst, inOutWishVel, ladderNormal);
}

/*
==============
BGMovingPlatformClient::BGMovingPlatformClient
==============
*/

void __fastcall BGMovingPlatformClient::BGMovingPlatformClient(BGMovingPlatformClient *this, LocalClientNum_t localClientNum)
{
  ??0BGMovingPlatformClient@@QEAA@W4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
BGMovingPlatforms::SetEntityOnMovingPlatform
==============
*/

void __fastcall BGMovingPlatforms::SetEntityOnMovingPlatform(const playerState_s *ps, entityState_t *es)
{
  ?SetEntityOnMovingPlatform@BGMovingPlatforms@@SAXPEBUplayerState_s@@PEAUentityState_t@@@Z(ps, es);
}

/*
==============
BGMovingPlatforms::SetAlternateCollision
==============
*/

void __fastcall BGMovingPlatforms::SetAlternateCollision(playerState_s *ps, const BgHandler *handler)
{
  ?SetAlternateCollision@BGMovingPlatforms@@SAXPEAUplayerState_s@@PEBVBgHandler@@@Z(ps, handler);
}

/*
==============
BGMovingPlatformClient::ShouldMelee
==============
*/

int __fastcall BGMovingPlatformClient::ShouldMelee(BGMovingPlatformClient *this, const playerState_s *ps, const entityState_t *targetES)
{
  return ?ShouldMelee@BGMovingPlatformClient@@QEBAHPEBUplayerState_s@@PEBUentityState_t@@@Z(this, ps, targetES);
}

/*
==============
BGMovingPlatforms::BGMovingPlatforms
==============
*/

void __fastcall BGMovingPlatforms::BGMovingPlatforms(BGMovingPlatforms *this)
{
  ??0BGMovingPlatforms@@QEAA@XZ(this);
}

/*
==============
BGMovingPlatformClient::UpdatePrePmove
==============
*/

void __fastcall BGMovingPlatformClient::UpdatePrePmove(BGMovingPlatformClient *this, pmove_t *pm)
{
  ?UpdatePrePmove@BGMovingPlatformClient@@QEAAXPEAVpmove_t@@@Z(this, pm);
}

/*
==============
BGMovingPlatformClient::ResolvePlatformUp
==============
*/

int __fastcall BGMovingPlatformClient::ResolvePlatformUp(BGMovingPlatformClient *this, const playerState_s *ps, vec3_t *outUp)
{
  return ?ResolvePlatformUp@BGMovingPlatformClient@@QEBAHPEBUplayerState_s@@AEATvec3_t@@@Z(this, ps, outUp);
}

/*
==============
BGMovingPlatforms::InitPlayerTraceData
==============
*/

void __fastcall BGMovingPlatforms::InitPlayerTraceData(const playerState_s *ps, TraceData *data)
{
  ?InitPlayerTraceData@BGMovingPlatforms@@SAXPEBUplayerState_s@@PEAUTraceData@@@Z(ps, data);
}

/*
==============
BGMovingPlatforms::GroundTraceFallback
==============
*/

void __fastcall BGMovingPlatforms::GroundTraceFallback(pmove_t *pm, trace_t *trace, const vec3_t *start, const vec3_t *end)
{
  ?GroundTraceFallback@BGMovingPlatforms@@CAXPEAVpmove_t@@PEAUtrace_t@@AEBTvec3_t@@2@Z(pm, trace, start, end);
}

/*
==============
BGMovingPlatforms::IsEntityOnMovingPlatform
==============
*/

int __fastcall BGMovingPlatforms::IsEntityOnMovingPlatform(const entityState_t *es)
{
  return ?IsEntityOnMovingPlatform@BGMovingPlatforms@@SAHPEBUentityState_t@@@Z(es);
}

/*
==============
BGMovingPlatforms::GroundTrace
==============
*/

void __fastcall BGMovingPlatforms::GroundTrace(pmove_t *pm, trace_t *trace, const vec3_t *start, const vec3_t *end, const vec3_t *base, int resolvePlatformUp)
{
  ?GroundTrace@BGMovingPlatforms@@SAXPEAVpmove_t@@PEAUtrace_t@@AEBTvec3_t@@22H@Z(pm, trace, start, end, base, resolvePlatformUp);
}

/*
==============
BGMovingPlatformClient::BGMovingPlatformClient
==============
*/
void BGMovingPlatformClient::BGMovingPlatformClient(BGMovingPlatformClient *this, const BgHandler *handler, LocalClientNum_t localClientNum)
{
  this->m_bgHandler = handler;
  this->__vftable = (BGMovingPlatformClient_vtbl *)&BGMovingPlatformClient::`vftable';
  this->m_localClientNum = localClientNum;
  this->m_contactEnt = 2047;
}

/*
==============
BGMovingPlatformClient::BGMovingPlatformClient
==============
*/
void BGMovingPlatformClient::BGMovingPlatformClient(BGMovingPlatformClient *this, LocalClientNum_t localClientNum)
{
  this->m_bgHandler = NULL;
  this->__vftable = (BGMovingPlatformClient_vtbl *)&BGMovingPlatformClient::`vftable';
  this->m_localClientNum = localClientNum;
  this->m_contactEnt = 2047;
}

/*
==============
BGMovingPlatforms::BGMovingPlatforms
==============
*/
void BGMovingPlatforms::BGMovingPlatforms(BGMovingPlatforms *this)
{
  this->__vftable = (BGMovingPlatforms_vtbl *)&BGMovingPlatforms::`vftable';
}

/*
==============
BGMovingPlatforms::~BGMovingPlatforms
==============
*/
void BGMovingPlatforms::~BGMovingPlatforms(BGMovingPlatforms *this)
{
  this->__vftable = (BGMovingPlatforms_vtbl *)&BGMovingPlatforms::`vftable';
}

/*
==============
BGMovingPlatformClient::AdjustWishVelocityForLadder
==============
*/
void BGMovingPlatformClient::AdjustWishVelocityForLadder(BGMovingPlatformClient *this, const pmove_t *pm, pml_t *pml, const vec3_t *right, float ladderScale, float upscale, float scale, float scaleConst, vec3_t *inOutWishVel, const vec3_t *ladderNormal)
{
  playerState_s *ps; 
  const dvar_t *v18; 
  char v22; 
  char v23; 
  tmat33_t<vec3_t> axis; 
  BGMovingPlatformClient::MoverInfo info; 

  ps = pm->ps;
  _RBP = pml;
  _RBX = inOutWishVel;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\movingplatforms\\bg_moving_platforms.cpp", 241, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( BGMovingPlatformPS::IsOnMovingPlatform(&ps->movingPlatforms) )
  {
    v18 = DCONST_DVARMPBOOL_ladderEnableEnhanced;
    if ( !DCONST_DVARMPBOOL_ladderEnableEnhanced && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ladderEnableEnhanced") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v18);
    if ( v18->current.enabled )
    {
      Com_PrintWarning(14, "WARNING: Player on moving platform and ladder.  Custom ladder movement not supported with dvar 'ladderEnableEnhanced 1'.\n");
    }
    else if ( BGMovingPlatformClient::GetMoverEntityInfoFromPs(pm->movingPlatforms, pm->ps, &info) )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+0E8h+info.angles]
        vmovaps [rsp+0E8h+var_28], xmm6
        vxorps  xmm6, xmm6, xmm6
        vucomiss xmm0, xmm6
        vmovaps [rsp+0E8h+var_58], xmm9
      }
      AnglesToAxis(&info.angles, &axis);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+0E8h+axis+20h]
        vcomiss xmm0, xmm6
      }
      if ( v22 | v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\movingplatforms\\bg_moving_platforms.cpp", 703, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Ladder collision is upside down. Upside down ladders are not supported.") )
        __debugbreak();
      __asm { vmovss  xmm9, [rsp+0E8h+scale] }
      if ( !Dvar_GetBool_Internal_DebugName(DCONST_DVARMPBOOL_ladderEnableEnhanced, "ladderEnableEnhanced") || Dvar_GetBool_Internal_DebugName(DCONST_DVARMPBOOL_ladderEnableStrafe, "ladderEnableStrafe") )
      {
        __asm
        {
          vmovaps [rsp+0E8h+var_38], xmm7
          vmovaps [rsp+0E8h+var_48], xmm8
        }
        Vec3Cross(&axis.m[2], ladderNormal, axis.m);
        _EAX = pm->cmd.rightmove;
        __asm
        {
          vmovss  xmm6, dword ptr [rsp+0E8h+axis]
          vmovss  xmm7, dword ptr [rsp+0E8h+axis+4]
          vmovss  xmm8, dword ptr [rsp+0E8h+axis+8]
          vmulss  xmm1, xmm6, xmm6
          vmulss  xmm0, xmm7, xmm7
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm8, xmm8
          vaddss  xmm0, xmm2, xmm1
          vmovss  xmm2, dword ptr [rbp+10h]
          vmovss  xmm1, cs:__real@3f800000
          vsqrtss xmm3, xmm0, xmm0
          vcmpless xmm0, xmm3, cs:__real@80000000
          vblendvps xmm0, xmm3, xmm1, xmm0
          vmovss  xmm3, dword ptr [rbp+14h]
          vdivss  xmm5, xmm1, xmm0
          vmovss  xmm0, dword ptr [rbp+0Ch]
          vmulss  xmm1, xmm0, xmm0
          vmulss  xmm0, xmm2, xmm2
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm0, xmm9, [rsp+0E8h+scaleConst]
          vmulss  xmm1, xmm3, xmm3
          vaddss  xmm2, xmm2, xmm1
          vsqrtss xmm4, xmm2, xmm2
          vmulss  xmm2, xmm6, xmm5
          vmovd   xmm1, eax
          vcvtdq2ps xmm1, xmm1
          vmulss  xmm1, xmm1, xmm0
          vmulss  xmm3, xmm4, xmm1
          vmulss  xmm0, xmm7, xmm5
          vmovaps xmm7, [rsp+0E8h+var_38]
          vmulss  xmm1, xmm8, xmm5
          vmovaps xmm8, [rsp+0E8h+var_48]
          vmulss  xmm5, xmm1, xmm3
          vmulss  xmm4, xmm2, xmm3
          vmulss  xmm6, xmm0, xmm3
          vmovss  dword ptr [rbx+8], xmm5
          vmovss  dword ptr [rbx], xmm4
          vmovss  dword ptr [rbx+4], xmm6
        }
      }
      else
      {
        __asm
        {
          vmovss  xmm4, dword ptr [rbx]
          vmovss  xmm6, dword ptr [rbx+4]
          vmovss  xmm5, dword ptr [rbx+8]
        }
      }
      _EAX = pm->cmd.forwardmove;
      __asm
      {
        vmovss  xmm0, [rsp+0E8h+ladderScale]
        vmulss  xmm1, xmm0, [rsp+0E8h+upscale]
        vmulss  xmm2, xmm1, xmm9
        vmovaps xmm9, [rsp+0E8h+var_58]
        vmovd   xmm0, eax
        vcvtdq2ps xmm0, xmm0
        vmulss  xmm3, xmm2, xmm0
        vmulss  xmm2, xmm3, dword ptr [rsp+0E8h+axis+18h]
        vaddss  xmm0, xmm2, xmm4
        vmulss  xmm2, xmm3, dword ptr [rsp+0E8h+axis+1Ch]
        vmovss  dword ptr [rbx], xmm0
        vaddss  xmm0, xmm2, xmm6
        vmulss  xmm2, xmm3, dword ptr [rsp+0E8h+axis+20h]
        vmovss  dword ptr [rbx+4], xmm0
        vaddss  xmm0, xmm2, xmm5
        vmovss  dword ptr [rbx+8], xmm0
        vmovaps xmm6, [rsp+0E8h+var_28]
      }
    }
  }
}

/*
==============
BGMovingPlatformClient::CorrectPlatformPenetration
==============
*/
__int64 BGMovingPlatformClient::CorrectPlatformPenetration(BGMovingPlatformClient *this, const pmove_t *const pm, trace_t *const inOutTrace, vec3_t *outCorrectedOrigin, bool allowPhysicsTeleport)
{
  BGMovingPlatformClient *movingPlatforms; 
  int contentMask; 
  __int64 result; 
  const Bounds *bounds; 
  vec3_t pos; 
  vec3_t outPenetration; 
  vec3_t brushAngles; 
  vec3_t brushOrigin; 
  int brushId; 
  int entNum; 

  _RBX = pm->ps;
  movingPlatforms = pm->movingPlatforms;
  contentMask = pm->tracemask;
  bounds = pm->bounds;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+30h]
    vmovss  dword ptr [rsp+180h+pos], xmm0
    vmovss  xmm1, dword ptr [rbx+34h]
    vmovss  dword ptr [rsp+180h+pos+4], xmm1
    vmovss  xmm0, dword ptr [rbx+38h]
    vmovss  dword ptr [rsp+180h+pos+8], xmm0
  }
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\movingplatforms\\bg_moving_platforms.cpp", 241, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  __asm
  {
    vmovaps [rsp+180h+var_40], xmm6
    vmovaps [rsp+180h+var_50], xmm7
    vmovaps [rsp+180h+var_60], xmm8
  }
  if ( BGMovingPlatformPS::IsOnMovingPlatform(&_RBX->movingPlatforms) )
  {
    if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\movingplatforms\\bg_moving_platforms.cpp", 241, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( BGMovingPlatformPS::IsOnMovingPlatform(&_RBX->movingPlatforms) && movingPlatforms->GetMoverEntityInfo(movingPlatforms, _RBX->movingPlatforms.m_movingPlatformEntity, (BGMovingPlatformClient::MoverInfo *)&brushAngles) && BGMovingPlatformClient::PenetrationEntityHandler(movingPlatforms, _RBX, &pos, bounds, entNum, brushId, &brushOrigin, &brushAngles, contentMask, &outPenetration, allowPhysicsTeleport) )
    {
      _RDX = pm->bounds;
      __asm
      {
        vmovss  xmm8, dword ptr [rsp+180h+var_108]
        vmovss  xmm3, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vmovss  xmm4, cs:__real@3e000000
        vmovss  xmm0, dword ptr [rdx+0Ch]
        vsubss  xmm0, xmm0, xmm4
        vandps  xmm1, xmm8, xmm3
        vcomiss xmm1, xmm0
      }
    }
  }
  result = 0i64;
  __asm
  {
    vmovaps xmm8, [rsp+180h+var_60]
    vmovaps xmm7, [rsp+180h+var_50]
    vmovaps xmm6, [rsp+180h+var_40]
  }
  return result;
}

/*
==============
BGMovingPlatforms::DoesPenetractionExceedBounds
==============
*/
_BOOL8 BGMovingPlatforms::DoesPenetractionExceedBounds(const Bounds *bounds, const vec3_t *normal)
{
  char v2; 
  char v3; 

  __asm
  {
    vmovss  xmm1, dword ptr [rdx]
    vmovss  xmm3, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm0, dword ptr [rcx+0Ch]
    vmovss  xmm4, cs:__real@3e000000
    vandps  xmm1, xmm1, xmm3
    vsubss  xmm0, xmm0, xmm4
    vcomiss xmm1, xmm0
  }
  if ( !(v2 | v3) )
    return 1i64;
  __asm
  {
    vmovss  xmm2, dword ptr [rdx+4]
    vmovss  xmm0, dword ptr [rcx+10h]
    vandps  xmm2, xmm2, xmm3
    vsubss  xmm1, xmm0, xmm4
    vcomiss xmm2, xmm1
  }
  if ( !(v2 | v3) )
    return 1i64;
  __asm
  {
    vmovss  xmm2, dword ptr [rdx+8]
    vmovss  xmm0, dword ptr [rcx+14h]
    vandps  xmm2, xmm2, xmm3
    vsubss  xmm1, xmm0, xmm4
    vcomiss xmm2, xmm1
  }
  return !(v2 | v3);
}

/*
==============
BGMovingPlatforms::GetBestPlatformUp
==============
*/
void BGMovingPlatforms::GetBestPlatformUp(const playerState_s *const ps, const vec3_t *platformAngles, vec3_t *outBestUp, vec4_t *outBestUpQuat)
{
  unsigned int v24; 
  bool v26; 
  bool v27; 
  bool v29; 
  bool v32; 
  bool v33; 
  char v78; 
  bool v94; 
  bool v125; 
  bool v142; 
  __int64 v172; 
  double v173; 
  double v174; 
  double v175; 
  double v176; 
  double v177; 
  __int64 v178; 
  double v179; 
  double v180; 
  double v181; 
  double v182; 
  double v183; 
  double v184; 
  double v185; 
  double v186; 
  double v187; 
  double v188; 
  double v189; 
  double v190; 
  double v191; 
  double v192; 
  double v193; 
  double v194; 
  double v195; 
  double v196; 
  double v197; 
  double v198; 
  double v199; 
  tmat33_t<vec3_t> outProjectedPoint; 
  vec3_t right; 
  vec3_t forward; 
  tmat33_t<vec3_t> axis; 
  char v204; 
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
  }
  _RSI = outBestUp;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\movingplatforms\\bg_moving_platforms.cpp", 169, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !_RSI && !outBestUpQuat && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\movingplatforms\\bg_moving_platforms.cpp", 170, ASSERT_TYPE_ASSERT, "(outBestUp || outBestUpQuat)", (const char *)&queryFormat, "outBestUp || outBestUpQuat") )
    __debugbreak();
  AnglesToAxis(platformAngles, &axis);
  __asm
  {
    vmovss  xmm12, cs:__real@bf800000
    vmovss  xmm7, dword ptr [rbp+0A0h+axis+18h]
    vmovss  xmm8, dword ptr [rbp+0A0h+axis+1Ch]
    vmovss  xmm9, dword ptr [rbp+0A0h+axis+20h]
    vmovss  xmm13, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm11, dword ptr cs:__xmm@80000000800000008000000080000000
  }
  v24 = 0;
  _RDI = &axis.m[0].v[2];
  v26 = 1;
  v27 = 1;
  __asm { vxorps  xmm14, xmm14, xmm14 }
  do
  {
    if ( !v26 )
    {
      LODWORD(v178) = 3;
      LODWORD(v172) = v24;
      v29 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v172, v178);
      v27 = !v29;
      if ( v29 )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm10, dword ptr [rdi]
      vandps  xmm6, xmm10, xmm13
      vcomiss xmm6, xmm12
    }
    if ( !v27 )
    {
      v32 = v24 < 3;
      if ( v24 >= 3 )
      {
        LODWORD(v178) = 3;
        LODWORD(v172) = v24;
        v33 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v172, v178);
        v32 = 0;
        if ( v33 )
          __debugbreak();
      }
      __asm
      {
        vcomiss xmm10, xmm14
        vmovss  xmm7, dword ptr [rdi-8]
        vmovss  xmm8, dword ptr [rdi-4]
        vmovss  xmm9, dword ptr [rdi]
      }
      if ( v32 )
      {
        __asm
        {
          vxorps  xmm7, xmm7, xmm11
          vxorps  xmm8, xmm8, xmm11
          vxorps  xmm9, xmm9, xmm11
        }
      }
      __asm { vmovaps xmm12, xmm6 }
    }
    ++v24;
    _RDI += 3;
    v26 = v24 < 3;
    v27 = v24 <= 3;
  }
  while ( (int)v24 < 3 );
  __asm
  {
    vmovss  xmm10, cs:__real@3f800000
    vmovss  xmm12, cs:__real@3b03126f
  }
  if ( _RSI )
  {
    __asm
    {
      vmulss  xmm1, xmm7, xmm7
      vmulss  xmm0, xmm8, xmm8
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm9, xmm9
      vaddss  xmm3, xmm2, xmm1
      vsubss  xmm0, xmm3, xmm10
      vandps  xmm0, xmm0, xmm13
      vcomiss xmm0, xmm12
      vmovss  dword ptr [rsi], xmm7
      vmovss  dword ptr [rsi+4], xmm8
      vmovss  dword ptr [rsi+8], xmm9
      vsqrtss xmm0, xmm3, xmm3
      vcvtss2sd xmm1, xmm0, xmm0
      vmovsd  [rsp+1A0h+var_160], xmm1
      vcvtss2sd xmm2, xmm9, xmm9
      vmovsd  [rsp+1A0h+var_168], xmm2
      vcvtss2sd xmm3, xmm8, xmm8
      vmovsd  [rsp+1A0h+var_170], xmm3
      vcvtss2sd xmm0, xmm7, xmm7
      vmovsd  [rsp+1A0h+var_178], xmm0
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\movingplatforms\\bg_moving_platforms.cpp", 198, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( *outBestUp ) )", "(%g, %g, %g) len %g", v173, v179, v184, v189) )
      __debugbreak();
  }
  if ( outBestUpQuat )
  {
    AngleVectors(&ps->viewangles, &forward, &right, NULL);
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+0A0h+right]
      vmovss  xmm2, dword ptr [rbp+0A0h+right+4]
      vxorps  xmm1, xmm0, xmm11
      vxorps  xmm0, xmm2, xmm11
      vmovss  dword ptr [rbp+0A0h+right], xmm1
      vmovss  xmm1, dword ptr [rbp+0A0h+right+8]
      vxorps  xmm2, xmm1, xmm11
      vmulss  xmm1, xmm7, dword ptr [rbp+0A0h+forward]
      vmovss  dword ptr [rbp+0A0h+right+4], xmm0
      vmulss  xmm0, xmm8, dword ptr [rbp+0A0h+forward+4]
      vmovss  dword ptr [rbp+0A0h+right+8], xmm2
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm9, dword ptr [rbp+0A0h+forward+8]
      vaddss  xmm3, xmm2, xmm1
      vandps  xmm3, xmm3, xmm13
      vsubss  xmm0, xmm3, xmm10
      vmovss  dword ptr [rbp+0A0h+planeNormal+8], xmm9
      vmovss  xmm9, cs:__real@3a83126f
      vandps  xmm0, xmm0, xmm13
      vcomiss xmm0, xmm9
      vmovss  dword ptr [rsp+1A0h+planeNormal], xmm7
      vmovss  dword ptr [rsp+1A0h+planeNormal+4], xmm8
    }
    if ( v26 )
    {
      ProjectPointOnPlane(&right, &outProjectedPoint.m[2], &outProjectedPoint.m[1]);
      __asm
      {
        vmovss  xmm5, dword ptr [rsp+1A0h+cross]
        vmovss  xmm6, dword ptr [rsp+1A0h+cross+4]
        vmovss  xmm4, dword ptr [rsp+1A0h+cross+8]
        vmulss  xmm1, xmm5, xmm5
        vmulss  xmm0, xmm6, xmm6
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm4, xmm4
        vaddss  xmm0, xmm2, xmm1
        vsqrtss xmm3, xmm0, xmm0
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm0, xmm3, xmm10, xmm0
        vdivss  xmm2, xmm10, xmm0
        vmulss  xmm0, xmm5, xmm2
        vmovss  dword ptr [rsp+1A0h+cross], xmm0
        vmulss  xmm0, xmm4, xmm2
        vmulss  xmm1, xmm6, xmm2
        vmovss  dword ptr [rsp+1A0h+cross+8], xmm0
        vmovss  dword ptr [rsp+1A0h+cross+4], xmm1
      }
      Vec3Cross(&outProjectedPoint.m[1], &outProjectedPoint.m[2], outProjectedPoint.m);
      __asm
      {
        vmovss  xmm6, dword ptr [rsp+1A0h+outProjectedPoint]
        vmovss  xmm7, dword ptr [rsp+1A0h+outProjectedPoint+4]
        vmovss  xmm8, dword ptr [rsp+1A0h+outProjectedPoint+8]
        vmulss  xmm1, xmm6, xmm6
        vmulss  xmm0, xmm7, xmm7
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm8, xmm8
        vaddss  xmm3, xmm2, xmm1
        vsubss  xmm0, xmm3, xmm10
        vandps  xmm0, xmm0, xmm13
        vcomiss xmm0, xmm12
      }
      if ( v78 )
        goto LABEL_31;
      __asm
      {
        vsqrtss xmm0, xmm3, xmm3
        vcvtss2sd xmm1, xmm0, xmm0
        vmovsd  [rsp+1A0h+var_160], xmm1
        vcvtss2sd xmm2, xmm8, xmm8
        vmovsd  [rsp+1A0h+var_168], xmm2
        vcvtss2sd xmm3, xmm7, xmm7
        vmovsd  [rsp+1A0h+var_170], xmm3
        vcvtss2sd xmm0, xmm6, xmm6
        vmovsd  [rsp+1A0h+var_178], xmm0
      }
      v125 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\movingplatforms\\bg_moving_platforms.cpp", 223, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( axis[0] ) )", "(%g, %g, %g) len %g", v175, v181, v186, v191);
      v78 = 0;
      if ( !v125 )
        goto LABEL_31;
    }
    else
    {
      ProjectPointOnPlane(&forward, &outProjectedPoint.m[2], outProjectedPoint.m);
      __asm
      {
        vmovss  xmm5, dword ptr [rsp+1A0h+outProjectedPoint]
        vmovss  xmm6, dword ptr [rsp+1A0h+outProjectedPoint+4]
        vmovss  xmm4, dword ptr [rsp+1A0h+outProjectedPoint+8]
        vmulss  xmm1, xmm5, xmm5
        vmulss  xmm0, xmm6, xmm6
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm4, xmm4
        vaddss  xmm0, xmm2, xmm1
        vsqrtss xmm3, xmm0, xmm0
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm0, xmm3, xmm10, xmm0
        vdivss  xmm2, xmm10, xmm0
        vmulss  xmm0, xmm5, xmm2
        vmovss  dword ptr [rsp+1A0h+outProjectedPoint], xmm0
        vmulss  xmm0, xmm4, xmm2
        vmulss  xmm1, xmm6, xmm2
        vmovss  dword ptr [rsp+1A0h+outProjectedPoint+8], xmm0
        vmovss  dword ptr [rsp+1A0h+outProjectedPoint+4], xmm1
      }
      Vec3Cross(&outProjectedPoint.m[2], outProjectedPoint.m, &outProjectedPoint.m[1]);
      __asm
      {
        vmovss  xmm4, dword ptr [rsp+1A0h+cross]
        vmovss  xmm3, dword ptr [rsp+1A0h+cross+4]
        vmovss  xmm5, dword ptr [rsp+1A0h+cross+8]
        vmulss  xmm1, xmm4, xmm4
        vmulss  xmm0, xmm3, xmm3
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm5, xmm5
        vaddss  xmm1, xmm2, xmm1
        vsubss  xmm0, xmm1, xmm10
        vandps  xmm0, xmm0, xmm13
        vcomiss xmm0, xmm12
      }
      if ( v78 )
        goto LABEL_32;
      __asm
      {
        vsqrtss xmm0, xmm1, xmm1
        vcvtss2sd xmm1, xmm0, xmm0
        vmovsd  [rsp+1A0h+var_160], xmm1
        vcvtss2sd xmm2, xmm5, xmm5
        vmovsd  [rsp+1A0h+var_168], xmm2
        vcvtss2sd xmm3, xmm3, xmm3
        vmovsd  [rsp+1A0h+var_170], xmm3
        vcvtss2sd xmm0, xmm4, xmm4
        vmovsd  [rsp+1A0h+var_178], xmm0
      }
      v94 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\movingplatforms\\bg_moving_platforms.cpp", 216, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( axis[1] ) )", "(%g, %g, %g) len %g", v174, v180, v185, v190);
      v78 = 0;
      if ( !v94 )
      {
LABEL_31:
        __asm
        {
          vmovss  xmm5, dword ptr [rsp+1A0h+cross+8]
          vmovss  xmm3, dword ptr [rsp+1A0h+cross+4]
          vmovss  xmm4, dword ptr [rsp+1A0h+cross]
        }
LABEL_32:
        __asm
        {
          vmovss  xmm6, dword ptr [rsp+1A0h+outProjectedPoint]
          vmovss  xmm7, dword ptr [rsp+1A0h+outProjectedPoint+4]
          vmovss  xmm8, dword ptr [rsp+1A0h+outProjectedPoint+8]
          vmulss  xmm1, xmm6, xmm4
          vmulss  xmm0, xmm7, xmm3
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm8, xmm5
          vaddss  xmm1, xmm2, xmm1
          vandps  xmm0, xmm1, xmm13
          vcomiss xmm0, xmm9
        }
        if ( !v78 )
        {
          __asm
          {
            vcvtss2sd xmm0, xmm1, xmm1
            vmovsd  [rsp+1A0h+var_148], xmm0
            vcvtss2sd xmm1, xmm5, xmm5
            vmovsd  [rsp+1A0h+var_150], xmm1
            vcvtss2sd xmm2, xmm3, xmm3
            vmovsd  [rsp+1A0h+var_158], xmm2
            vcvtss2sd xmm3, xmm4, xmm4
            vmovsd  [rsp+1A0h+var_160], xmm3
            vcvtss2sd xmm4, xmm8, xmm8
            vmovsd  [rsp+1A0h+var_168], xmm4
            vcvtss2sd xmm5, xmm7, xmm7
            vmovsd  [rsp+1A0h+var_170], xmm5
            vcvtss2sd xmm6, xmm6, xmm6
            vmovsd  [rsp+1A0h+var_178], xmm6
          }
          v142 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\movingplatforms\\bg_moving_platforms.cpp", 225, ASSERT_TYPE_ASSERT, "( Vec3IsOrthogonal( axis[0], axis[1] ) )", "v0:%g %g %g, v1:%g %g %g, dot product: %g", v176, v182, v187, v192, v194, v196, v198);
          v78 = 0;
          if ( v142 )
            __debugbreak();
        }
        __asm
        {
          vmovss  xmm3, dword ptr [rsp+1A0h+planeNormal]
          vmovss  xmm6, dword ptr [rsp+1A0h+outProjectedPoint]
          vmovss  xmm4, dword ptr [rsp+1A0h+planeNormal+4]
          vmovss  xmm7, dword ptr [rsp+1A0h+outProjectedPoint+4]
          vmovss  xmm5, dword ptr [rbp+0A0h+planeNormal+8]
          vmovss  xmm8, dword ptr [rsp+1A0h+outProjectedPoint+8]
          vmulss  xmm1, xmm3, xmm6
          vmulss  xmm0, xmm4, xmm7
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm0, xmm5, xmm8
          vaddss  xmm0, xmm2, xmm0
          vandps  xmm1, xmm0, xmm13
          vcomiss xmm1, xmm9
        }
        if ( !v78 )
        {
          __asm
          {
            vcvtss2sd xmm1, xmm5, xmm5
            vcvtss2sd xmm2, xmm4, xmm4
            vcvtss2sd xmm0, xmm0, xmm0
            vmovsd  [rsp+1A0h+var_148], xmm0
            vmovsd  [rsp+1A0h+var_150], xmm1
            vmovsd  [rsp+1A0h+var_158], xmm2
            vcvtss2sd xmm3, xmm3, xmm3
            vmovsd  [rsp+1A0h+var_160], xmm3
            vcvtss2sd xmm4, xmm8, xmm8
            vmovsd  [rsp+1A0h+var_168], xmm4
            vcvtss2sd xmm5, xmm7, xmm7
            vmovsd  [rsp+1A0h+var_170], xmm5
            vcvtss2sd xmm6, xmm6, xmm6
            vmovsd  [rsp+1A0h+var_178], xmm6
          }
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\movingplatforms\\bg_moving_platforms.cpp", 226, ASSERT_TYPE_ASSERT, "( Vec3IsOrthogonal( axis[0], axis[2] ) )", "v0:%g %g %g, v1:%g %g %g, dot product: %g", v177, v183, v188, v193, v195, v197, v199) )
            __debugbreak();
        }
        AxisToQuat(&outProjectedPoint, outBestUpQuat);
        goto LABEL_39;
      }
    }
    __debugbreak();
    goto LABEL_31;
  }
LABEL_39:
  _R11 = &v204;
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
  }
}

/*
==============
BGMovingPlatformClient::GetMoverEntityInfoFromPs
==============
*/
__int64 BGMovingPlatformClient::GetMoverEntityInfoFromPs(BGMovingPlatformClient *this, const playerState_s *ps, BGMovingPlatformClient::MoverInfo *info)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\movingplatforms\\bg_moving_platforms.cpp", 241, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( BGMovingPlatformPS::IsOnMovingPlatform(&ps->movingPlatforms) )
    return ((__int64 (__fastcall *)(BGMovingPlatformClient *, _QWORD, BGMovingPlatformClient::MoverInfo *))this->GetMoverEntityInfo)(this, (unsigned int)ps->movingPlatforms.m_movingPlatformEntity, info);
  else
    return 0i64;
}

/*
==============
BGMovingPlatformClient::GetPlatformOriginAndAngles
==============
*/
__int64 BGMovingPlatformClient::GetPlatformOriginAndAngles(BGMovingPlatformClient *this, const playerState_s *ps, vec3_t *outOrigin, vec3_t *outAngles)
{
  int v8; 
  __int64 result; 
  int v16[8]; 

  _RDI = outAngles;
  _RBX = outOrigin;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\movingplatforms\\bg_moving_platforms.cpp", 241, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( BGMovingPlatformPS::IsOnMovingPlatform(&ps->movingPlatforms) )
    v8 = this->GetMoverEntityInfo(this, ps->movingPlatforms.m_movingPlatformEntity, (BGMovingPlatformClient::MoverInfo *)v16);
  else
    v8 = 0;
  if ( v8 )
  {
    __asm
    {
      vmovss  xmm0, [rsp+88h+var_4C]
      vmovss  xmm1, [rsp+88h+var_48]
      vmovss  dword ptr [rbx], xmm0
      vmovss  xmm0, [rsp+88h+var_44]
      vmovss  dword ptr [rbx+4], xmm1
      vmovss  xmm1, [rsp+88h+var_58]
      vmovss  dword ptr [rbx+8], xmm0
      vmovss  xmm0, [rsp+88h+var_54]
      vmovss  dword ptr [rdi], xmm1
      vmovss  xmm1, [rsp+88h+var_50]
      vmovss  dword ptr [rdi+8], xmm1
      vmovss  dword ptr [rdi+4], xmm0
    }
    return 1i64;
  }
  else
  {
    *(_QWORD *)_RBX->v = 0i64;
    result = 0i64;
    _RBX->v[2] = 0.0;
    *(_QWORD *)_RDI->v = 0i64;
    _RDI->v[2] = 0.0;
  }
  return result;
}

/*
==============
BGMovingPlatformClient::GetPlatformPenetration
==============
*/
_BOOL8 BGMovingPlatformClient::GetPlatformPenetration(BGMovingPlatformClient *this, const playerState_s *ps, const vec3_t *pos, const Bounds *bounds, int tracemask, vec3_t *outPenetration, bool allowPhysicsTeleport)
{
  vec3_t brushAngles; 
  vec3_t brushOrigin; 
  int brushId; 
  int entNum; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\movingplatforms\\bg_moving_platforms.cpp", 241, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !BGMovingPlatformPS::IsOnMovingPlatform(&ps->movingPlatforms) )
    return 0i64;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\movingplatforms\\bg_moving_platforms.cpp", 241, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return BGMovingPlatformPS::IsOnMovingPlatform(&ps->movingPlatforms) && this->GetMoverEntityInfo(this, ps->movingPlatforms.m_movingPlatformEntity, (BGMovingPlatformClient::MoverInfo *)&brushAngles) && BGMovingPlatformClient::PenetrationEntityHandler(this, ps, pos, bounds, entNum, brushId, &brushOrigin, &brushAngles, tracemask, outPenetration, allowPhysicsTeleport);
}

/*
==============
BGMovingPlatforms::GroundTrace
==============
*/
void BGMovingPlatforms::GroundTrace(pmove_t *pm, trace_t *trace, const vec3_t *start, const vec3_t *end, const vec3_t *base, int resolvePlatformUp)
{
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64> otherFlags; 
  playerState_s *ps; 
  playerState_s *v28; 
  const dvar_t *v71; 
  char v77; 
  char v80; 
  BGMovingPlatformClient *movingPlatforms; 
  vec3_t enda; 
  vec3_t outBestUp; 
  vec3_t starta; 
  WorldUpReferenceFrame v86; 
  vec3_t platformAngles; 
  void *retaddr; 

  _R11 = &retaddr;
  _RSI = trace;
  _R12 = end;
  _R14 = start;
  otherFlags = pm->ps->otherFlags;
  _R15 = base;
  __asm
  {
    vmovaps xmmword ptr [r11-0A8h], xmm12
    vmovaps xmmword ptr [r11-0B8h], xmm13
  }
  if ( BG_UsingNewPlayerCollision() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\movingplatforms\\bg_moving_platforms.cpp", 295, ASSERT_TYPE_ASSERT, "(!BG_UsingNewPlayerCollision())", (const char *)&queryFormat, "!BG_UsingNewPlayerCollision()") )
    __debugbreak();
  __asm
  {
    vmovss  xmm13, cs:__real@3f800000
    vxorps  xmm12, xmm12, xmm12
  }
  if ( !resolvePlatformUp )
    goto LABEL_22;
  ps = pm->ps;
  movingPlatforms = pm->movingPlatforms;
  WorldUpReferenceFrame::WorldUpReferenceFrame(&v86, ps, movingPlatforms->m_bgHandler);
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\movingplatforms\\bg_moving_platforms.cpp", 241, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !BGMovingPlatformPS::IsOnMovingPlatform(&ps->movingPlatforms) || !movingPlatforms->GetMoverEntityInfo(movingPlatforms, ps->movingPlatforms.m_movingPlatformEntity, (BGMovingPlatformClient::MoverInfo *)&platformAngles) || v86.m_axisAdjusted )
  {
    __asm
    {
      vmovss  dword ptr [rsp+190h+outBestUp], xmm12
      vmovss  dword ptr [rsp+190h+outBestUp+4], xmm12
      vmovss  dword ptr [rsp+190h+outBestUp+8], xmm13
    }
    WorldUpReferenceFrame::ApplyReferenceFrameToVector(&v86, &outBestUp);
LABEL_22:
    __asm
    {
      vmovss  xmm0, dword ptr [r14]
      vmovss  xmm1, dword ptr [r14+4]
      vmovss  dword ptr [rsp+190h+start], xmm0
      vmovss  xmm0, dword ptr [r14+8]
      vmovss  dword ptr [rsp+190h+start+4], xmm1
      vmovss  xmm1, dword ptr [r12]
      vmovss  dword ptr [rbp+90h+start+8], xmm0
      vmovss  xmm0, dword ptr [r12+4]
      vmovss  dword ptr [rsp+190h+end], xmm1
      vmovss  xmm1, dword ptr [r12+8]
      vmovss  dword ptr [rsp+190h+end+4], xmm0
      vmovss  dword ptr [rsp+190h+end+8], xmm1
    }
    goto LABEL_23;
  }
  __asm
  {
    vmovaps [rsp+190h+var_40], xmm6
    vmovaps [rsp+190h+var_50], xmm7
    vmovaps [rsp+190h+var_60], xmm8
    vmovaps [rsp+190h+var_70], xmm9
    vmovaps [rsp+190h+var_80], xmm10
    vmovaps [rsp+190h+var_90], xmm11
  }
  BGMovingPlatforms::GetBestPlatformUp(ps, &platformAngles, &outBestUp, NULL);
  __asm
  {
    vmovss  xmm11, dword ptr [r15]
    vmovss  xmm10, dword ptr [r15+4]
    vmovss  xmm9, dword ptr [r15+8]
    vmovss  xmm0, dword ptr [r14]
  }
  v28 = pm->ps;
  __asm
  {
    vmovaps xmm8, [rsp+190h+var_60]
    vmovaps xmm7, [rsp+190h+var_50]
    vmovaps xmm6, [rsp+190h+var_40]
    vsubss  xmm3, xmm0, xmm11
    vmovss  xmm0, dword ptr [r14+4]
    vsubss  xmm1, xmm0, xmm10
    vmovss  xmm0, dword ptr [r14+8]
    vsubss  xmm4, xmm0, xmm9
    vmulss  xmm2, xmm1, xmm1
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm5, xmm2, xmm2
    vmulss  xmm0, xmm5, dword ptr [rsp+190h+outBestUp]
    vmovss  xmm2, dword ptr [r12]
    vaddss  xmm1, xmm0, xmm11
    vmulss  xmm0, xmm5, dword ptr [rsp+190h+outBestUp+4]
    vmovss  dword ptr [rsp+190h+start], xmm1
    vaddss  xmm1, xmm0, xmm10
    vmulss  xmm0, xmm5, dword ptr [rsp+190h+outBestUp+8]
    vsubss  xmm5, xmm2, xmm11
    vmovss  dword ptr [rsp+190h+start+4], xmm1
    vaddss  xmm1, xmm0, xmm9
    vmovss  xmm0, dword ptr [r12+4]
    vsubss  xmm3, xmm0, xmm10
    vmovss  dword ptr [rbp+90h+start+8], xmm1
    vmovss  xmm1, dword ptr [r12+8]
    vsubss  xmm4, xmm1, xmm9
    vmulss  xmm1, xmm4, xmm4
    vmulss  xmm2, xmm3, xmm3
    vmulss  xmm0, xmm5, xmm5
    vaddss  xmm3, xmm2, xmm0
    vaddss  xmm2, xmm3, xmm1
    vsqrtss xmm0, xmm2, xmm2
    vxorps  xmm4, xmm0, cs:__xmm@80000000800000008000000080000000
    vmulss  xmm1, xmm4, dword ptr [rsp+190h+outBestUp]
    vmulss  xmm0, xmm4, dword ptr [rsp+190h+outBestUp+4]
    vaddss  xmm2, xmm1, xmm11
    vmovaps xmm11, [rsp+190h+var_90]
    vaddss  xmm1, xmm0, xmm10
    vmovaps xmm10, [rsp+190h+var_80]
    vmovss  dword ptr [rsp+190h+end], xmm2
    vmulss  xmm2, xmm4, dword ptr [rsp+190h+outBestUp+8]
    vaddss  xmm0, xmm2, xmm9
    vmovaps xmm9, [rsp+190h+var_70]
    vmovss  dword ptr [rsp+190h+end+8], xmm0
    vmovss  dword ptr [rsp+190h+end+4], xmm1
  }
  if ( !v28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\movingplatforms\\bg_moving_platforms.cpp", 261, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB|0x100) )
    goto LABEL_20;
  v71 = DVARBOOL_playerCharacterCollisionVehicleAngleWallFix;
  if ( !DVARBOOL_playerCharacterCollisionVehicleAngleWallFix && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerCharacterCollisionVehicleAngleWallFix") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v71);
  if ( !v71->current.enabled || BGMovingPlatformPS::IsNewRockingMoverCollisionEnabled() )
LABEL_20:
    GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::SetFlagInternal(&v28->otherFlags, ACTIVE, 0xEu);
LABEL_23:
  BgTrace::LegacyPlayerTrace(pm->m_trace, pm, _RSI, &starta, &enda, pm->bounds, pm->ps->clientNum, pm->tracemask, 0);
  pm->ps->otherFlags = otherFlags;
  __asm
  {
    vmovss  xmm1, dword ptr [rsi]
    vucomiss xmm1, xmm12
    vmovaps xmm12, [rsp+190h+var_A0]
  }
  if ( v80 )
  {
    v77 = 0;
    if ( !_RSI->startsolid )
    {
      v77 = 0;
      if ( !_RSI->allsolid )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [r15]
          vucomiss xmm0, dword ptr [r14]
        }
        if ( _RSI->allsolid )
          goto LABEL_29;
        __asm
        {
          vmovss  xmm0, dword ptr [r15+4]
          vucomiss xmm0, dword ptr [r14+4]
        }
        if ( _RSI->allsolid )
          goto LABEL_29;
        __asm
        {
          vmovss  xmm0, dword ptr [r15+8]
          vucomiss xmm0, dword ptr [r14+8]
        }
        if ( _RSI->allsolid )
        {
LABEL_29:
          BgTrace::LegacyPlayerTrace(pm->m_trace, pm, _RSI, base, &enda, pm->bounds, pm->ps->clientNum, pm->tracemask, 0);
          pm->ps->otherFlags = otherFlags;
          __asm { vmovss  xmm1, dword ptr [rsi] }
        }
      }
    }
  }
  __asm
  {
    vcomiss xmm1, xmm13
    vmovaps xmm13, [rsp+190h+var_B0]
  }
  if ( v77 && pm->refFrame.m_axisAdjusted )
  {
    *(double *)&_XMM0 = WorldUpReferenceFrame::GetUpContribution(&pm->refFrame, &_RSI->normal);
    __asm { vcomiss xmm0, cs:__real@3f333333 }
    if ( v77 | v80 )
      BGMovingPlatforms::GroundTraceFallback(pm, _RSI, &starta, &enda);
  }
}

/*
==============
BGMovingPlatforms::GroundTraceFallback
==============
*/
void BGMovingPlatforms::GroundTraceFallback(pmove_t *pm, trace_t *trace, const vec3_t *start, const vec3_t *end)
{
  char v45; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-28h], xmm6
    vmovaps xmmword ptr [r11-38h], xmm7
    vmovaps xmmword ptr [r11-48h], xmm8
    vmovaps xmmword ptr [r11-58h], xmm9
    vmovaps xmmword ptr [r11-68h], xmm10
    vmovaps xmmword ptr [r11-0A8h], xmm14
    vmovaps xmmword ptr [r11-0B8h], xmm15
    vmovss  xmm3, dword ptr [r8]
    vmovss  xmm0, dword ptr [r9]
    vmovss  xmm4, dword ptr [r8+4]
    vmovss  xmm1, dword ptr [r9+4]
    vmovss  xmm5, dword ptr [r8+8]
    vmovss  xmm7, dword ptr [rdx+10h]
    vmovss  xmm8, dword ptr [rdx+14h]
    vmovss  xmm9, dword ptr [rdx+18h]
    vsubss  xmm14, xmm0, xmm3
    vmovss  xmm0, dword ptr [r9+8]
    vsubss  xmm6, xmm0, xmm5
    vsubss  xmm15, xmm1, xmm4
    vmulss  xmm0, xmm14, xmm7
    vmulss  xmm1, xmm15, xmm8
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, xmm9
    vaddss  xmm0, xmm2, xmm1
    vxorps  xmm10, xmm10, xmm10
    vcomiss xmm0, xmm10
    vmovss  dword ptr [rsp+160h+start], xmm3
    vmovss  dword ptr [rsp+160h+start+4], xmm4
    vmovss  dword ptr [rsp+160h+start+8], xmm5
    vmovss  [rsp+160h+var_110], xmm6
    vmovss  dword ptr [rbp+60h+v0], xmm7
    vmovss  dword ptr [rbp+60h+v0+4], xmm8
    vmovss  dword ptr [rbp+60h+v0+8], xmm9
  }
  _R11 = &v45;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm14, xmmword ptr [r11-90h]
    vmovaps xmm15, xmmword ptr [r11-0A0h]
  }
}

/*
==============
BGMovingPlatformClient::InitPMove
==============
*/
void BGMovingPlatformClient::InitPMove(BGMovingPlatformClient *this, int clientID)
{
  this->m_clientID = clientID;
  this->m_contactEnt = 2047;
}

/*
==============
BGMovingPlatforms::InitPlayerTraceData
==============
*/
void BGMovingPlatforms::InitPlayerTraceData(const playerState_s *ps, TraceData *data)
{
  *(_WORD *)&data->getPenetration = 0;
  data->ignoreWorld = 0;
  data->removePitchAndRollRotations = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0xEu);
}

/*
==============
BGMovingPlatforms::IsEntityOnMovingPlatform
==============
*/
__int64 BGMovingPlatforms::IsEntityOnMovingPlatform(const entityState_t *es)
{
  if ( !es || ((es->eType - 1) & 0xFFEF) != 0 )
    return 0i64;
  else
    return es->lerp.u.player.playerFlags & 1;
}

/*
==============
BGMovingPlatforms::IsMoverOptimized
==============
*/
bool BGMovingPlatforms::IsMoverOptimized(const entityState_t *const mover)
{
  const dvar_t *v1; 

  v1 = DCONST_DVARBOOL_movingPlatformForceOptimized;
  if ( !DCONST_DVARBOOL_movingPlatformForceOptimized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "movingPlatformForceOptimized") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  return v1->current.enabled || (mover->staticState.general.xmodel & 0x20) != 0;
}

/*
==============
BGMovingPlatforms::IsMovingPlatform
==============
*/
_BOOL8 BGMovingPlatforms::IsMovingPlatform(int entityNum)
{
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 144, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  return entityNum >= (int)ComCharacterLimits::ms_gameData.m_staticEntityCount && (unsigned int)entityNum < 0x7FE;
}

/*
==============
BGMovingPlatforms::IsOnMovingPlatform
==============
*/
int BGMovingPlatforms::IsOnMovingPlatform(const playerState_s *ps)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\movingplatforms\\bg_moving_platforms.cpp", 241, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return BGMovingPlatformPS::IsOnMovingPlatform(&ps->movingPlatforms);
}

/*
==============
BGMovingPlatforms::IsPlatformType
==============
*/
_BOOL8 BGMovingPlatforms::IsPlatformType(int eType)
{
  return ((eType - 6) & 0xFFFFFFF7) == 0;
}

/*
==============
BGMovingPlatformClient::NeedToResolveCollision
==============
*/
_BOOL8 BGMovingPlatformClient::NeedToResolveCollision(BGMovingPlatformClient *this, const playerState_s *ps)
{
  return !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 5u) && ps->pm_type != 1 && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 6u);
}

/*
==============
BGMovingPlatformClient::PenetrationEntityHandler
==============
*/
_BOOL8 BGMovingPlatformClient::PenetrationEntityHandler(BGMovingPlatformClient *this, const playerState_s *ps, const vec3_t *pos, const Bounds *bounds, int entNum, int brushId, const vec3_t *brushOrigin, const vec3_t *brushAngles, int contentMask, vec3_t *outPenetration, bool allowPhysicsTeleport)
{
  hkMonitorStream *Value; 
  hkMonitorStream *v14; 
  __int64 v15; 
  unsigned int physicsInstanceId; 
  const BgHandler *m_bgHandler; 
  BOOL v33; 
  double updateBroadphaseIfNecessary; 
  vec3_t *posa; 
  vec3_t *angles; 
  Bounds *boundsa; 
  bool penetrating; 
  bool penetratingBrushBasis; 
  playerState_s *psa; 
  Bounds *v42; 
  vec3_t *v43; 
  vec3_t *penetration; 
  __int64 v45; 
  hkMonitorStream *v46; 
  vec3_t v1; 
  vec4_t quat; 
  vec3_t v49; 

  v45 = -2i64;
  v42 = (Bounds *)bounds;
  v43 = (vec3_t *)pos;
  psa = (playerState_s *)ps;
  _RDI = brushOrigin;
  penetration = outPenetration;
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v14 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtPM_PenetrationEntityHandler");
  v46 = v14;
  v15 = this->m_bgHandler->GetPhysicsWorldId((BgHandler *)this->m_bgHandler);
  physicsInstanceId = *(_DWORD *)((__int64)this->m_bgHandler->GetPhysicsObject((BgHandler *)this->m_bgHandler, entNum, this->m_localClientNum) + 4 * v15 + 4);
  m_bgHandler = this->m_bgHandler;
  m_bgHandler->IsClient((BgHandler *)m_bgHandler);
  m_bgHandler->GetEntityOrigin((BgHandler *)m_bgHandler, entNum, &v1);
  this->m_bgHandler->GetEntityAngles((BgHandler *)this->m_bgHandler, entNum, &v49);
  penetrating = 0;
  penetratingBrushBasis = 0;
  if ( physicsInstanceId != -1 )
  {
    if ( Sys_IsServerUserMoveWorker() )
    {
      __asm { vmovss  xmm2, cs:__real@3a83126f; epsilon }
      if ( !VecNCompareCustomEpsilon(brushOrigin->v, v1.v, *(float *)&_XMM2, 3) )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+8]
          vcvtss2sd xmm0, xmm0, xmm0
          vmovss  xmm1, dword ptr [rdi+4]
          vcvtss2sd xmm1, xmm1, xmm1
          vmovss  xmm4, dword ptr [rdi]
          vcvtss2sd xmm4, xmm4, xmm4
          vmovss  xmm5, [rsp+128h+var_78]
          vcvtss2sd xmm5, xmm5, xmm5
          vmovss  xmm3, [rsp+128h+var_7C]
          vcvtss2sd xmm3, xmm3, xmm3
          vmovss  xmm2, [rsp+128h+v1]
          vcvtss2sd xmm2, xmm2, xmm2
          vmovsd  [rsp+128h+bounds], xmm0
          vmovsd  [rsp+128h+angles], xmm1
          vmovsd  [rsp+128h+pos], xmm4
          vmovsd  qword ptr [rsp+128h+updateBroadphaseIfNecessary], xmm5
          vmovq   r9, xmm3
          vmovq   r8, xmm2
        }
        Com_Printf(34, "PenetrationEntityHandler: Moving from %f %f %f to %f %f %f\n", *(double *)&_XMM2, *(double *)&_XMM3, updateBroadphaseIfNecessary, *(double *)&posa, *(double *)&angles, *(double *)&boundsa);
      }
    }
    if ( allowPhysicsTeleport )
    {
      AnglesToQuat(brushAngles, &quat);
      Physics_WarpInstanceTo((Physics_WorldId)v15, physicsInstanceId, brushOrigin, &quat, 1);
    }
    PhysicsQuery_LegacyPenetrationTest((Physics_WorldId)v15, psa, &penetrating, &penetratingBrushBasis, penetration, v43, NULL, v42, contentMask, physicsInstanceId, brushAngles, psa->clientNum, 0);
    if ( allowPhysicsTeleport )
    {
      AnglesToQuat(&v49, &quat);
      Physics_WarpInstanceTo((Physics_WorldId)v15, physicsInstanceId, &v1, &quat, 1);
    }
  }
  v33 = penetrating;
  if ( v14 )
    hkMonitorStream::timerEnd(v14, "Et");
  return v33;
}

/*
==============
BGMovingPlatformClient::ResolvePlatformUp
==============
*/
__int64 BGMovingPlatformClient::ResolvePlatformUp(BGMovingPlatformClient *this, const playerState_s *ps, vec3_t *outUp)
{
  WorldUpReferenceFrame v7; 
  vec3_t platformAngles; 

  WorldUpReferenceFrame::WorldUpReferenceFrame(&v7, ps, this->m_bgHandler);
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\movingplatforms\\bg_moving_platforms.cpp", 241, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( BGMovingPlatformPS::IsOnMovingPlatform(&ps->movingPlatforms) && this->GetMoverEntityInfo(this, ps->movingPlatforms.m_movingPlatformEntity, (BGMovingPlatformClient::MoverInfo *)&platformAngles) && !v7.m_axisAdjusted )
  {
    BGMovingPlatforms::GetBestPlatformUp(ps, &platformAngles, outUp, NULL);
    return 1i64;
  }
  else
  {
    outUp->v[2] = 1.0;
    *(_QWORD *)outUp->v = 0i64;
    WorldUpReferenceFrame::ApplyReferenceFrameToVector(&v7, outUp);
    return 0i64;
  }
}

/*
==============
BGMovingPlatforms::SetAlternateCollision
==============
*/
void BGMovingPlatforms::SetAlternateCollision(playerState_s *ps, const BgHandler *handler)
{
  const dvar_t *v3; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\movingplatforms\\bg_moving_platforms.cpp", 261, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB|0x100) )
    goto LABEL_10;
  v3 = DVARBOOL_playerCharacterCollisionVehicleAngleWallFix;
  if ( !DVARBOOL_playerCharacterCollisionVehicleAngleWallFix && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerCharacterCollisionVehicleAngleWallFix") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( !v3->current.enabled || BGMovingPlatformPS::IsNewRockingMoverCollisionEnabled() )
LABEL_10:
    GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::SetFlagInternal(&ps->otherFlags, ACTIVE, 0xEu);
}

/*
==============
BGMovingPlatforms::SetEntityOnMovingPlatform
==============
*/
void BGMovingPlatforms::SetEntityOnMovingPlatform(const playerState_s *ps, entityState_t *es)
{
  int v4; 
  __int16 playerFlags; 
  __int16 v6; 
  __int16 v7; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\movingplatforms\\bg_moving_platforms.cpp", 241, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v4 = BGMovingPlatformPS::IsOnMovingPlatform(&ps->movingPlatforms);
  playerFlags = es->lerp.u.player.playerFlags;
  v6 = playerFlags & 0xFFFE;
  v7 = playerFlags | 1;
  if ( !v4 )
    v7 = v6;
  es->lerp.u.player.playerFlags = v7;
}

/*
==============
BGMovingPlatformClient::SetHandler
==============
*/
void BGMovingPlatformClient::SetHandler(BGMovingPlatformClient *this, const BgHandler *handler)
{
  this->m_bgHandler = handler;
}

/*
==============
BGMovingPlatformClient::ShouldAdjustWalkable
==============
*/
_BOOL8 BGMovingPlatformClient::ShouldAdjustWalkable(BGMovingPlatformClient *this, const playerState_s *ps, const WorldUpReferenceFrame *refFrame, const trace_t *trace)
{
  char v7; 
  vec3_t up; 
  BGMovingPlatformClient::MoverInfo info; 

  *(double *)&_XMM0 = WorldUpReferenceFrame::GetUpContribution((WorldUpReferenceFrame *)refFrame, &trace->normal);
  __asm { vcomiss xmm0, cs:__real@3f333333 }
  if ( !v7 )
    return 0i64;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\movingplatforms\\bg_moving_platforms.cpp", 241, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !BGMovingPlatformPS::IsOnMovingPlatform(&ps->movingPlatforms) )
    return 0i64;
  if ( !BGMovingPlatformClient::GetMoverEntityInfoFromPs(this, ps, &info) )
    return 0i64;
  AngleVectors(&info.angles, NULL, NULL, &up);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+88h+up+4]
    vmovss  xmm1, dword ptr [rsp+88h+up]
    vmulss  xmm2, xmm1, dword ptr [rdi]
    vmulss  xmm3, xmm0, dword ptr [rdi+4]
    vmovss  xmm0, dword ptr [rsp+88h+up+8]
    vmulss  xmm1, xmm0, dword ptr [rdi+8]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vcomiss xmm2, cs:__real@3f333333
  }
  return !v7;
}

/*
==============
BGMovingPlatformClient::ShouldMelee
==============
*/
_BOOL8 BGMovingPlatformClient::ShouldMelee(BGMovingPlatformClient *this, const playerState_s *ps, const entityState_t *targetES)
{
  int groundEntityNum; 
  BGMovingPlatformPS *p_movingPlatforms; 

  groundEntityNum = targetES->groundEntityNum;
  p_movingPlatforms = &ps->movingPlatforms;
  return groundEntityNum == ps->movingPlatforms.m_movingPlatformEntity || !BGMovingPlatforms::IsMovingPlatform(groundEntityNum) && !BGMovingPlatformPS::IsOnMovingPlatform(p_movingPlatforms);
}

/*
==============
BGMovingPlatforms::ShouldPerformGroundTraceFallback
==============
*/
_BOOL8 BGMovingPlatforms::ShouldPerformGroundTraceFallback(pmove_t *pm, trace_t *trace)
{
  WorldUpReferenceFramePM *p_refFrame; 
  char v4; 
  char v5; 

  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vcomiss xmm0, dword ptr [rdx]
  }
  p_refFrame = &pm->refFrame;
  if ( !p_refFrame->m_axisAdjusted )
    return 0i64;
  *(double *)&_XMM0 = WorldUpReferenceFrame::GetUpContribution(p_refFrame, &trace->normal);
  __asm { vcomiss xmm0, cs:__real@3f333333 }
  return (v4 | v5) != 0;
}

/*
==============
BGMovingPlatformClient::StartMantle
==============
*/
void BGMovingPlatformClient::StartMantle(BGMovingPlatformClient *this, playerState_s *ps, int endGroundEnt)
{
  int IsMovingPlatform; 
  BGMovingPlatformPS *p_movingPlatforms; 

  IsMovingPlatform = BGMovingPlatforms::IsMovingPlatform(endGroundEnt);
  p_movingPlatforms = &ps->movingPlatforms;
  if ( IsMovingPlatform )
  {
    BGMovingPlatformPS::ClearMoverID(p_movingPlatforms, ps, this->m_bgHandler);
    BGMovingPlatformPS::SetMoverEntityID(&ps->movingPlatforms, ps, this->m_bgHandler, ps->movingPlatforms.m_movingPlatformEntity, endGroundEnt, 0, 0);
  }
  else if ( BGMovingPlatformPS::IsOnMovingPlatform(p_movingPlatforms) )
  {
    BGMovingPlatformPS::ClearMoverID(&ps->movingPlatforms, ps, this->m_bgHandler);
  }
}

/*
==============
BGMovingPlatforms::UpdateDirection
==============
*/
void BGMovingPlatforms::UpdateDirection(vec3_t *dir, const vec3_t *platformAngles, const vec3_t *deltaAngles)
{
  char v4; 
  const vec3_t *v6; 
  vec3_t *v7; 
  vec3_t angles; 
  vec3_t in1; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> out; 

  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm0, dword ptr [rcx]
  }
  v6 = platformAngles;
  v7 = dir;
  if ( !v4 )
    goto LABEL_4;
  __asm { vucomiss xmm0, dword ptr [rcx+4] }
  if ( !v4 )
    goto LABEL_4;
  __asm { vucomiss xmm0, dword ptr [rcx+8] }
  if ( !v4 )
  {
LABEL_4:
    __asm
    {
      vmovss  xmm0, dword ptr [rdx]
      vsubss  xmm1, xmm0, dword ptr [r8]
      vmovss  xmm2, dword ptr [rdx+4]
      vsubss  xmm0, xmm2, dword ptr [r8+4]
      vmovss  dword ptr [rsp+0A8h+angles], xmm1
      vmovss  xmm1, dword ptr [rdx+8]
      vsubss  xmm2, xmm1, dword ptr [r8+8]
      vmovss  dword ptr [rsp+0A8h+angles+8], xmm2
      vmovss  dword ptr [rsp+0A8h+angles+4], xmm0
    }
    AnglesToAxis(&angles, &axis);
    MatrixTranspose(&axis, &out);
    MatrixTransformVector(v7, &out, &in1);
    AnglesToAxis(v6, &axis);
    MatrixTransformVector(&in1, &axis, v7);
  }
}

/*
==============
BGMovingPlatforms::UpdateHeight
==============
*/
void BGMovingPlatforms::UpdateHeight(float *height, const playerState_s *ps, BgHandler *handler, const vec3_t *playerOrigin, const vec3_t *platformOrigin, const vec3_t *platformAngles, const vec3_t *deltaAngles, const vec3_t *deltaOrigin)
{
  vec3_t point; 
  vec3_t angles; 
  vec3_t up; 
  WorldUpReferenceFrame v34; 

  __asm { vmovaps [rsp+0D8h+var_48], xmm6 }
  _RBP = platformAngles;
  _RDI = playerOrigin;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+0]
    vsubss  xmm1, xmm0, dword ptr [rsi]
    vmovss  xmm2, dword ptr [rbp+4]
    vsubss  xmm0, xmm2, dword ptr [rsi+4]
    vmovss  dword ptr [rsp+0D8h+angles], xmm1
    vmovss  xmm1, dword ptr [rbp+8]
    vsubss  xmm2, xmm1, dword ptr [rsi+8]
  }
  _R13 = height;
  __asm
  {
    vmovss  dword ptr [rsp+0D8h+angles+8], xmm2
    vmovss  dword ptr [rsp+0D8h+angles+4], xmm0
  }
  AngleVectors(&angles, NULL, NULL, &up);
  __asm
  {
    vmovss  xmm5, dword ptr [rdi+4]
    vmovss  xmm3, dword ptr [rdi]
    vmulss  xmm1, xmm5, dword ptr [rsp+0D8h+up+4]
    vmovss  xmm4, dword ptr [rdi+8]
    vmulss  xmm0, xmm3, dword ptr [rsp+0D8h+up]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm4, dword ptr [rsp+0D8h+up+8]
    vaddss  xmm2, xmm2, xmm1
    vsubss  xmm6, xmm2, dword ptr [r13+0]
    vmovss  dword ptr [rsp+0D8h+point], xmm3
    vmovss  dword ptr [rsp+0D8h+point+4], xmm5
    vmovss  dword ptr [rsp+0D8h+point+8], xmm4
  }
  BGMovingPlatforms::UpdatePoint(&point, platformOrigin, platformAngles, deltaAngles, deltaOrigin);
  WorldUpReferenceFrame::WorldUpReferenceFrame(&v34, ps, handler);
  *(double *)&_XMM0 = WorldUpReferenceFrame::GetUpContribution(&v34, &point);
  __asm
  {
    vsubss  xmm1, xmm0, xmm6
    vmovss  dword ptr [r13+0], xmm1
    vmovaps xmm6, [rsp+0D8h+var_48]
  }
}

/*
==============
BGMovingPlatformClient::UpdateInternalTransforms
==============
*/
void BGMovingPlatformClient::UpdateInternalTransforms(BGMovingPlatformClient *this, pmove_t *pm, const tmat43_t<vec3_t> *startTransform, const tmat43_t<vec3_t> *endTransform, vec3_t *outAppliedAngles)
{
  const dvar_t *v16; 
  char v17; 
  vec3_t platformAngles; 
  vec3_t angles; 
  vec3_t v27; 
  vec3_t deltaOrigin; 
  vec3_t in1; 
  tmat33_t<vec3_t> in; 
  tmat33_t<vec3_t> out; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> in2; 

  _RSI = (const tmat33_t<vec3_t> *)endTransform;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\movingplatforms\\bg_moving_platforms.cpp", 850, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  _RDI = pm->ps;
  *(_QWORD *)outAppliedAngles->v = 0i64;
  outAppliedAngles->v[2] = 0.0;
  MatrixTranspose((const tmat33_t<vec3_t> *)startTransform, &out);
  MatrixMultiply(&out, _RSI, &axis);
  AxisToAngles(&axis, &angles);
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+24h]
    vsubss  xmm1, xmm0, dword ptr [r15+24h]
    vmovss  xmm2, dword ptr [rsi+28h]
    vsubss  xmm0, xmm2, dword ptr [r15+28h]
    vmovss  dword ptr [rsp+170h+deltaOrigin], xmm1
    vmovss  xmm1, dword ptr [rsi+2Ch]
    vsubss  xmm2, xmm1, dword ptr [r15+2Ch]
    vmovss  dword ptr [rsp+170h+deltaOrigin+8], xmm2
    vmovss  dword ptr [rsp+170h+deltaOrigin+4], xmm0
  }
  AxisToAngles((const tmat33_t<vec3_t> *)startTransform, &platformAngles);
  v16 = DCONST_DVARMPBOOL_moving_platform_improved_aim_new;
  if ( !DCONST_DVARMPBOOL_moving_platform_improved_aim_new && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "moving_platform_improved_aim_new") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v16);
  BGMovingPlatformClient::UpdatePlayerAngles(this, _RDI, &angles, &platformAngles, outAppliedAngles, v16->current.color[0]);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm0, dword ptr [rdi+3Ch]
  }
  if ( !v17 )
    goto LABEL_10;
  __asm { vucomiss xmm0, dword ptr [rdi+40h] }
  if ( !v17 )
    goto LABEL_10;
  __asm { vucomiss xmm0, dword ptr [rdi+44h] }
  if ( !v17 )
  {
LABEL_10:
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+170h+platformAngles]
      vsubss  xmm1, xmm0, dword ptr [rsp+170h+angles]
      vmovss  xmm2, dword ptr [rsp+170h+platformAngles+4]
      vsubss  xmm0, xmm2, dword ptr [rsp+170h+angles+4]
      vmovss  dword ptr [rsp+170h+var_110], xmm1
      vmovss  xmm1, dword ptr [rsp+170h+platformAngles+8]
      vsubss  xmm2, xmm1, dword ptr [rsp+170h+angles+8]
      vmovss  dword ptr [rsp+170h+var_110+8], xmm2
      vmovss  dword ptr [rsp+170h+var_110+4], xmm0
    }
    AnglesToAxis(&v27, &in);
    MatrixTranspose(&in, &in2);
    MatrixTransformVector(&_RDI->velocity, &in2, &in1);
    AnglesToAxis(&platformAngles, &in);
    MatrixTransformVector(&in1, &in, &_RDI->velocity);
  }
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RDI->pm_flags, ACTIVE, 5u) )
    BGMovingPlatforms::UpdatePoint(&_RDI->mantleState.startPosition, &startTransform->m[3], &platformAngles, &angles, &deltaOrigin);
}

/*
==============
BGMovingPlatformClient::UpdatePlayerAngles
==============
*/
void BGMovingPlatformClient::UpdatePlayerAngles(BGMovingPlatformClient *this, playerState_s *ps, const vec3_t *delta, const vec3_t *platformAngles, vec3_t *outAppliedDelta, int useImprovedAlgorithm)
{
  int HasValidWorldUpInPs; 
  bool v20; 
  bool v90; 
  float v0; 
  vec3_t angles; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> in; 
  WorldUpReferenceFrame v103; 
  tmat33_t<vec3_t> out; 
  tmat33_t<vec3_t> in2; 

  _RSI = outAppliedDelta;
  _RBX = delta;
  _RDI = ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\movingplatforms\\bg_moving_platforms.cpp", 538, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vmovss  xmm1, dword ptr [rbx+4]
    vmovss  [rsp+190h+v0], xmm0
    vmovss  xmm0, dword ptr [rbx+8]
    vmovss  [rsp+190h+var_158], xmm0
    vmovss  [rsp+190h+var_15C], xmm1
  }
  *(_QWORD *)outAppliedDelta->v = 0i64;
  outAppliedDelta->v[2] = 0.0;
  HasValidWorldUpInPs = WorldUpReferenceFrame::HasValidWorldUpInPs(_RDI);
  if ( !HasValidWorldUpInPs )
  {
    __asm { vmovss  xmm2, cs:__real@3a83126f; epsilon }
    if ( !VecNCompareCustomEpsilon(&v0, vec3_origin.v, *(float *)&_XMM2, (unsigned __int8)HasValidWorldUpInPs + 3) )
    {
      __asm
      {
        vmovaps [rsp+190h+var_40], xmm6
        vmovaps [rsp+190h+var_70], xmm9
      }
      v20 = Com_GameMode_SupportsFeature(WEAPON_SLIDE|0x80);
      __asm
      {
        vmovss  xmm2, dword ptr [rdi+5Ch]
        vxorps  xmm6, xmm6, xmm6
      }
      if ( v20 )
      {
        __asm
        {
          vucomiss xmm2, cs:__real@3f800000
          vmovss  xmm0, [rsp+190h+v0]
          vmovss  xmm1, [rsp+190h+var_15C]
          vmulss  xmm3, xmm0, xmm2
          vmovss  xmm0, [rsp+190h+var_158]
          vmulss  xmm4, xmm0, xmm2
          vmulss  xmm5, xmm1, xmm2
          vmovss  [rsp+190h+var_158], xmm4
          vmovss  [rsp+190h+v0], xmm3
          vmovss  [rsp+190h+var_15C], xmm5
        }
      }
      else
      {
        __asm
        {
          vucomiss xmm2, xmm6
          vmovss  xmm3, [rsp+190h+v0]
          vmovss  xmm5, [rsp+190h+var_15C]
          vmovss  xmm4, [rsp+190h+var_158]
        }
      }
      __asm
      {
        vucomiss xmm3, xmm6
        vmovss  xmm9, cs:__real@43b40000
      }
      if ( v20 )
      {
        if ( useImprovedAlgorithm )
        {
          __asm
          {
            vaddss  xmm0, xmm3, dword ptr [r14]
            vaddss  xmm1, xmm5, dword ptr [r14+4]
            vmovss  dword ptr [rsp+190h+angles], xmm0
            vaddss  xmm0, xmm4, dword ptr [r14+8]
            vmovaps [rsp+190h+var_50], xmm7
            vmovaps [rsp+190h+var_60], xmm8
            vmovss  dword ptr [rsp+190h+angles+8], xmm0
            vmovss  dword ptr [rsp+190h+angles+4], xmm1
          }
          AnglesToAxis(&_RDI->viewangles, &axis);
          WorldUpReferenceFrame::WorldUpReferenceFrame(&v103, _RDI, this->m_bgHandler);
          WorldUpReferenceFrame::ApplyReferenceFrameToAxis(&v103, &axis);
          AnglesToAxis(platformAngles, &in);
          AnglesToAxis(&angles, &in2);
          MatrixTranspose(&in, &out);
          MatrixMultiply(&axis, &out, &in);
          MatrixMultiply(&in, &in2, &axis);
          WorldUpReferenceFrame::RemoveReferenceFrameFromVector(&v103, axis.m);
          vectoangles(axis.m, &angles);
          __asm
          {
            vmovss  xmm7, cs:__real@3f000000
            vmovss  xmm4, cs:__real@3b360b61
            vmovss  xmm0, dword ptr [rsp+190h+angles]
            vsubss  xmm3, xmm0, dword ptr [rdi+1D8h]
            vmovss  xmm1, dword ptr [rsp+190h+angles+4]
            vmovss  xmm2, dword ptr [rsp+190h+angles+8]
            vmovss  xmm6, cs:__real@43360b61
            vmovss  dword ptr [rsi], xmm3
            vsubss  xmm0, xmm1, dword ptr [rdi+1DCh]
            vmovss  dword ptr [rsi+4], xmm0
            vsubss  xmm1, xmm2, dword ptr [rdi+1E0h]
            vmovss  dword ptr [rsi+8], xmm1
            vaddss  xmm0, xmm3, dword ptr [rdi+0B4h]
            vmovss  dword ptr [rdi+0B4h], xmm0
            vmovss  xmm1, dword ptr [rsi+4]
            vaddss  xmm0, xmm1, dword ptr [rdi+0B8h]
            vmovss  dword ptr [rdi+0B8h], xmm0
            vmulss  xmm3, xmm4, dword ptr [rdi+0B4h]
            vaddss  xmm1, xmm3, xmm7
            vxorps  xmm8, xmm8, xmm8
            vroundss xmm2, xmm8, xmm1, 1
            vsubss  xmm0, xmm3, xmm2
            vmulss  xmm1, xmm0, xmm9
            vmovss  dword ptr [rdi+0B4h], xmm1
            vmulss  xmm3, xmm4, dword ptr [rdi+0B8h]
            vaddss  xmm1, xmm3, xmm7
            vroundss xmm2, xmm8, xmm1, 1
            vsubss  xmm0, xmm3, xmm2
            vmulss  xmm1, xmm0, xmm9
            vmovss  dword ptr [rdi+0B8h], xmm1
            vmulss  xmm0, xmm6, dword ptr [rdi+0B4h]
            vaddss  xmm3, xmm0, xmm7
            vroundss xmm0, xmm8, xmm3, 1
            vcvttss2si eax, xmm0
            vxorps  xmm1, xmm1, xmm1
            vcvtsi2ss xmm1, xmm1, ecx
            vmulss  xmm4, xmm1, cs:__real@37800000
            vaddss  xmm2, xmm4, xmm7
            vroundss xmm3, xmm8, xmm2, 1
            vsubss  xmm0, xmm4, xmm3
            vmulss  xmm1, xmm0, xmm9
            vmovss  dword ptr [rdi+0B4h], xmm1
            vmulss  xmm0, xmm6, dword ptr [rdi+0B8h]
            vaddss  xmm3, xmm0, xmm7
            vroundss xmm0, xmm8, xmm3, 1
            vcvttss2si eax, xmm0
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, ecx
            vmulss  xmm4, xmm0, cs:__real@37800000
            vaddss  xmm2, xmm4, xmm7
            vmovaps xmm7, [rsp+190h+var_50]
            vroundss xmm3, xmm8, xmm2, 1
            vmovaps xmm8, [rsp+190h+var_60]
          }
LABEL_14:
          __asm
          {
            vsubss  xmm1, xmm4, xmm3
            vmulss  xmm0, xmm1, xmm9
            vmovss  dword ptr [rdi+0B8h], xmm0
          }
          v90 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RDI->pm_flags, ACTIVE, 0);
          __asm
          {
            vmovaps xmm9, [rsp+190h+var_70]
            vmovaps xmm6, [rsp+190h+var_40]
          }
          if ( v90 )
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rsi+4]
              vaddss  xmm1, xmm0, dword ptr [rdi+26Ch]
              vmovss  dword ptr [rdi+26Ch], xmm1
            }
          }
          if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RDI->pm_flags, ACTIVE, 5u) )
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rsi+4]
              vaddss  xmm1, xmm0, dword ptr [rdi+37Ch]
              vmovss  dword ptr [rdi+37Ch], xmm1
            }
          }
          return;
        }
      }
      else
      {
        __asm { vucomiss xmm4, xmm6 }
      }
      __asm
      {
        vmovss  dword ptr [rsi], xmm3
        vmovss  dword ptr [rsi+8], xmm4
        vmovss  dword ptr [rsi+4], xmm5
        vaddss  xmm0, xmm5, dword ptr [rdi+0B8h]
        vmulss  xmm1, xmm0, cs:__real@43360b61
        vaddss  xmm2, xmm1, cs:__real@3f000000
        vroundss xmm3, xmm6, xmm2, 1
        vcvttss2si eax, xmm3
      }
      _ECX = (unsigned __int16)_EAX;
      __asm
      {
        vmovd   xmm0, ecx
        vcvtdq2ps xmm0, xmm0
        vmulss  xmm4, xmm0, cs:__real@37800000
        vaddss  xmm2, xmm4, cs:__real@3f000000
        vroundss xmm3, xmm6, xmm2, 1
      }
      goto LABEL_14;
    }
  }
}

/*
==============
BGMovingPlatforms::UpdatePoint
==============
*/
void BGMovingPlatforms::UpdatePoint(vec3_t *point, const vec3_t *platformOrigin, const vec3_t *platformAngles, const vec3_t *deltaAngles)
{
  const vec3_t *v22; 
  vec3_t angles; 
  tmat43_t<vec3_t> axis; 
  vec3_t in1; 
  tmat43_t<vec3_t> out; 
  char v34; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
  }
  _RDI = platformOrigin;
  __asm
  {
    vmovss  xmm0, dword ptr [r8]
    vsubss  xmm1, xmm0, dword ptr [r9]
    vmovss  xmm2, dword ptr [r8+4]
    vsubss  xmm0, xmm2, dword ptr [r9+4]
    vmovss  dword ptr [rsp+0E8h+angles+4], xmm0
    vmovss  xmm0, dword ptr [rdx]
    vsubss  xmm8, xmm0, dword ptr [rax]
    vmovss  xmm0, dword ptr [rdx+4]
    vsubss  xmm7, xmm0, dword ptr [rax+4]
    vmovss  dword ptr [rsp+0E8h+angles], xmm1
    vmovss  xmm1, dword ptr [r8+8]
    vsubss  xmm2, xmm1, dword ptr [r9+8]
    vmovss  xmm1, dword ptr [rdx+8]
    vsubss  xmm6, xmm1, dword ptr [rax+8]
  }
  v22 = platformAngles;
  __asm { vmovss  dword ptr [rsp+0E8h+angles+8], xmm2 }
  AnglesToAxis(&angles, (tmat33_t<vec3_t> *)&axis);
  __asm
  {
    vmovss  [rsp+0E8h+var_94], xmm8
    vmovss  [rsp+0E8h+var_90], xmm7
    vmovss  [rsp+0E8h+var_8C], xmm6
  }
  MatrixInverseOrthogonal43(&axis, &out);
  MatrixTransformVector43(point, &out, &in1);
  AnglesToAxis(v22, (tmat33_t<vec3_t> *)&axis);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vmovss  xmm1, dword ptr [rdi+4]
    vmovss  [rsp+0E8h+var_94], xmm0
    vmovss  xmm0, dword ptr [rdi+8]
    vmovss  [rsp+0E8h+var_8C], xmm0
    vmovss  [rsp+0E8h+var_90], xmm1
  }
  MatrixTransformVector43(&in1, &axis, point);
  _R11 = &v34;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
BGMovingPlatformClient::UpdatePrePmove
==============
*/
void BGMovingPlatformClient::UpdatePrePmove(BGMovingPlatformClient *this, pmove_t *pm)
{
  const dvar_t *v3; 
  bool v6; 
  const dvar_t *v7; 
  __int64 m_movingPlatformEntity; 
  int clientNum; 
  BgAntiLag *antiLag; 
  int serverTime; 
  int v13; 
  BgAntiLag *v14; 
  char v17; 
  int fmt; 
  vec3_t end; 
  vec3_t in1; 
  char v35[16]; 
  tmat43_t<vec3_t> v36; 
  tmat43_t<vec3_t> axis; 
  tmat43_t<vec3_t> out; 
  BgAntiLagEntityInfo outInfo; 
  BgAntiLagEntityInfo v40; 
  trace_t outResult; 

  v3 = DCONST_DVARBOOL_useBgTraceSystem;
  if ( !DCONST_DVARBOOL_useBgTraceSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "useBgTraceSystem") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  v6 = !v3->current.enabled;
  v7 = DCONST_DVARBOOL_usePmoveMoverSystem;
  if ( v6 )
  {
    if ( !DCONST_DVARBOOL_usePmoveMoverSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "usePmoveMoverSystem") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    if ( v7->current.enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\movingplatforms\\bg_moving_platforms.cpp", 775, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Cannot use usePmoveMoverSystem without also using useBgTraceSystem.") )
      __debugbreak();
  }
  else
  {
    if ( !DCONST_DVARBOOL_usePmoveMoverSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "usePmoveMoverSystem") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    if ( v7->current.enabled )
    {
      _RSI = pm->ps;
      if ( BGMovingPlatformPS::IsOnMovingPlatform(&_RSI->movingPlatforms) )
      {
        m_movingPlatformEntity = _RSI->movingPlatforms.m_movingPlatformEntity;
        __asm { vmovaps [rsp+2D0h+var_30], xmm6 }
        if ( (unsigned int)(m_movingPlatformEntity + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)m_movingPlatformEntity, "signed", m_movingPlatformEntity) )
          __debugbreak();
        clientNum = _RSI->clientNum;
        antiLag = (BgAntiLag *)pm->antiLag;
        serverTime = pm->oldcmd.serverTime;
        outInfo.boneInfo.boneList.m_usedSize = 0;
        outInfo.boneInfo.boneList.m_maxSize = 0;
        BgAntiLag::GetEntityInfoAtTime(antiLag, clientNum, (__int16)m_movingPlatformEntity, 0x23u, serverTime, &outInfo);
        v13 = _RSI->clientNum;
        v14 = (BgAntiLag *)pm->antiLag;
        fmt = pm->cmd.serverTime;
        v40.boneInfo.boneList.m_usedSize = 0;
        v40.boneInfo.boneList.m_maxSize = 0;
        BgAntiLag::GetEntityInfoAtTime(v14, v13, (__int16)m_movingPlatformEntity, 0x23u, fmt, &v40);
        AnglesToAxis(&outInfo.angles, (tmat33_t<vec3_t> *)&axis);
        BgAntiLagEntity_GetOrigin(&outInfo, &axis.m[3]);
        MatrixInverseOrthogonal43(&axis, &out);
        MatrixTransformVector43(&_RSI->origin, &out, &in1);
        AnglesToAxis(&v40.angles, (tmat33_t<vec3_t> *)&v36);
        BgAntiLagEntity_GetOrigin(&v40, &v36.m[3]);
        MatrixTransformVector43(&in1, &v36, &end);
        this->UpdateInternalTransforms(this, pm, &axis, &v36, (vec3_t *)v35);
        pm->m_trace->m_flags |= 0x20u;
        BgTrace::PerformPlayerTrace(pm->m_trace, pm->bounds, &_RSI->origin, &end, &outResult);
        __asm
        {
          vmovss  xmm6, [rbp+1D0h+outResult.fraction]
          vcomiss xmm6, cs:__real@3f800000
          vmovss  xmm0, dword ptr [rsp+2D0h+end]
        }
        if ( v17 )
        {
          __asm
          {
            vsubss  xmm1, xmm0, dword ptr [rsi+30h]
            vmovss  xmm0, dword ptr [rsp+2D0h+end+4]
            vmulss  xmm2, xmm1, xmm6
            vaddss  xmm3, xmm2, dword ptr [rsi+30h]
            vmovss  dword ptr [rsi+30h], xmm3
            vsubss  xmm1, xmm0, dword ptr [rsi+34h]
            vmovss  xmm0, dword ptr [rsp+2D0h+end+8]
            vmulss  xmm2, xmm1, xmm6
            vaddss  xmm3, xmm2, dword ptr [rsi+34h]
            vmovss  dword ptr [rsi+34h], xmm3
            vsubss  xmm1, xmm0, dword ptr [rsi+38h]
            vmulss  xmm2, xmm1, xmm6
            vaddss  xmm3, xmm2, dword ptr [rsi+38h]
            vmovss  dword ptr [rsi+38h], xmm3
          }
        }
        else
        {
          __asm
          {
            vmovss  xmm1, dword ptr [rsp+2D0h+end+4]
            vmovss  dword ptr [rsi+30h], xmm0
            vmovss  xmm0, dword ptr [rsp+2D0h+end+8]
            vmovss  dword ptr [rsi+38h], xmm0
            vmovss  dword ptr [rsi+34h], xmm1
          }
        }
        __asm { vmovaps xmm6, [rsp+2D0h+var_30] }
        pm->m_trace->m_flags &= ~0x20u;
      }
    }
  }
}

