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
  const dvar_t *v13; 
  float v14; 
  float v15; 
  float v16; 
  __int128 v17; 
  float v21; 
  float v22; 
  float v23; 
  tmat33_t<vec3_t> axis; 
  BGMovingPlatformClient::MoverInfo info; 

  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\movingplatforms\\bg_moving_platforms.cpp", 241, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( BGMovingPlatformPS::IsOnMovingPlatform(&ps->movingPlatforms) )
  {
    v13 = DCONST_DVARMPBOOL_ladderEnableEnhanced;
    if ( !DCONST_DVARMPBOOL_ladderEnableEnhanced && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ladderEnableEnhanced") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    if ( v13->current.enabled )
    {
      Com_PrintWarning(14, "WARNING: Player on moving platform and ladder.  Custom ladder movement not supported with dvar 'ladderEnableEnhanced 1'.\n");
    }
    else if ( BGMovingPlatformClient::GetMoverEntityInfoFromPs(pm->movingPlatforms, pm->ps, &info) && (info.angles.v[0] != 0.0 || info.angles.v[1] != 0.0 || info.angles.v[2] != 0.0) )
    {
      AnglesToAxis(&info.angles, &axis);
      if ( axis.m[2].v[2] <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\movingplatforms\\bg_moving_platforms.cpp", 703, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Ladder collision is upside down. Upside down ladders are not supported.") )
        __debugbreak();
      if ( !Dvar_GetBool_Internal_DebugName(DCONST_DVARMPBOOL_ladderEnableEnhanced, "ladderEnableEnhanced") || Dvar_GetBool_Internal_DebugName(DCONST_DVARMPBOOL_ladderEnableStrafe, "ladderEnableStrafe") )
      {
        Vec3Cross(&axis.m[2], ladderNormal, axis.m);
        v17 = LODWORD(axis.m[0].v[0]);
        *(float *)&v17 = fsqrt((float)((float)(*(float *)&v17 * *(float *)&v17) + (float)(axis.m[0].v[1] * axis.m[0].v[1])) + (float)(axis.m[0].v[2] * axis.m[0].v[2]));
        _XMM3 = v17;
        __asm
        {
          vcmpless xmm0, xmm3, cs:__real@80000000
          vblendvps xmm0, xmm3, xmm1, xmm0
        }
        *(float *)&_XMM3 = fsqrt((float)((float)(pml->right.v[0] * pml->right.v[0]) + (float)(pml->right.v[1] * pml->right.v[1])) + (float)(pml->right.v[2] * pml->right.v[2])) * (float)(_mm_cvtepi32_ps((__m128i)(unsigned int)pm->cmd.rightmove).m128_f32[0] * (float)(scale * scaleConst));
        v16 = (float)(axis.m[0].v[2] * (float)(1.0 / *(float *)&_XMM0)) * *(float *)&_XMM3;
        v14 = (float)(axis.m[0].v[0] * (float)(1.0 / *(float *)&_XMM0)) * *(float *)&_XMM3;
        v15 = (float)(axis.m[0].v[1] * (float)(1.0 / *(float *)&_XMM0)) * *(float *)&_XMM3;
        inOutWishVel->v[2] = v16;
        inOutWishVel->v[0] = v14;
        inOutWishVel->v[1] = v15;
      }
      else
      {
        v14 = inOutWishVel->v[0];
        v15 = inOutWishVel->v[1];
        v16 = inOutWishVel->v[2];
      }
      v21 = (float)((float)(ladderScale * upscale) * scale) * _mm_cvtepi32_ps((__m128i)(unsigned int)pm->cmd.forwardmove).m128_f32[0];
      v22 = v21 * axis.m[2].v[1];
      inOutWishVel->v[0] = (float)(v21 * axis.m[2].v[0]) + v14;
      v23 = v21 * axis.m[2].v[2];
      inOutWishVel->v[1] = v22 + v15;
      inOutWishVel->v[2] = v23 + v16;
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
  playerState_s *ps; 
  BGMovingPlatformClient *movingPlatforms; 
  int contentMask; 
  Bounds *v11; 
  playerState_s *v12; 
  __int128 v13; 
  float v17; 
  float v18; 
  float v19; 
  bool v20; 
  playerState_s *v21; 
  __m256i v22; 
  __int128 v23; 
  const char *debugHitName; 
  int brushAngles; 
  const Bounds *bounds; 
  vec3_t pos; 
  vec3_t outPenetration; 
  vec3_t v30; 
  vec3_t brushOrigin; 
  int brushId; 
  int entNum; 
  trace_t outResults; 

  ps = pm->ps;
  movingPlatforms = pm->movingPlatforms;
  contentMask = pm->tracemask;
  bounds = pm->bounds;
  pos = ps->origin;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\movingplatforms\\bg_moving_platforms.cpp", 241, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !BGMovingPlatformPS::IsOnMovingPlatform(&ps->movingPlatforms) )
    return 0i64;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\movingplatforms\\bg_moving_platforms.cpp", 241, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !BGMovingPlatformPS::IsOnMovingPlatform(&ps->movingPlatforms) )
    return 0i64;
  if ( !movingPlatforms->GetMoverEntityInfo(movingPlatforms, ps->movingPlatforms.m_movingPlatformEntity, (BGMovingPlatformClient::MoverInfo *)&v30) )
    return 0i64;
  if ( !BGMovingPlatformClient::PenetrationEntityHandler(movingPlatforms, ps, &pos, bounds, entNum, brushId, &brushOrigin, &v30, contentMask, &outPenetration, allowPhysicsTeleport) )
    return 0i64;
  v11 = pm->bounds;
  if ( COERCE_FLOAT(LODWORD(outPenetration.v[0]) & _xmm) > (float)(v11->halfSize.v[0] - 0.125) )
    return 0i64;
  if ( COERCE_FLOAT(LODWORD(outPenetration.v[1]) & _xmm) > (float)(v11->halfSize.v[1] - 0.125) )
    return 0i64;
  if ( COERCE_FLOAT(LODWORD(outPenetration.v[2]) & _xmm) > (float)(v11->halfSize.v[2] - 0.125) )
    return 0i64;
  v12 = pm->ps;
  v13 = LODWORD(outPenetration.v[1]);
  *(float *)&v13 = fsqrt((float)((float)(outPenetration.v[1] * outPenetration.v[1]) + (float)(outPenetration.v[0] * outPenetration.v[0])) + (float)(outPenetration.v[2] * outPenetration.v[2]));
  _XMM5 = v13;
  __asm
  {
    vcmpless xmm0, xmm5, cs:__real@80000000
    vblendvps xmm0, xmm5, xmm1, xmm0
  }
  v17 = (float)(outPenetration.v[2] * (float)(1.0 / *(float *)&_XMM0)) * (float)(*(float *)&v13 + 0.001);
  brushAngles = pm->tracemask;
  v18 = (float)(outPenetration.v[0] * (float)(1.0 / *(float *)&_XMM0)) * (float)(*(float *)&v13 + 0.001);
  outPenetration.v[2] = outPenetration.v[2] * (float)(1.0 / *(float *)&_XMM0);
  v19 = (float)(outPenetration.v[1] * (float)(1.0 / *(float *)&_XMM0)) * (float)(*(float *)&v13 + 0.001);
  pos.v[0] = v18 + pos.v[0];
  pos.v[1] = v19 + pos.v[1];
  pos.v[2] = v17 + pos.v[2];
  outPenetration.v[0] = outPenetration.v[0] * (float)(1.0 / *(float *)&_XMM0);
  outPenetration.v[1] = outPenetration.v[1] * (float)(1.0 / *(float *)&_XMM0);
  BgTrace::LegacyPlayerTrace(pm->m_trace, pm, &outResults, &pos, &pos, v11, v12->clientNum, brushAngles, 0);
  if ( outResults.allsolid )
    return 0i64;
  v20 = BGMovingPlatformPS::UseRockingMoverWallFix2();
  v21 = pm->ps;
  if ( v20 )
  {
    v21->origin = pos;
  }
  else
  {
    outCorrectedOrigin->v[0] = v18 + v21->origin.v[0];
    outCorrectedOrigin->v[1] = v19 + v21->origin.v[1];
    outCorrectedOrigin->v[2] = v17 + v21->origin.v[2];
  }
  v22 = *(__m256i *)&outResults.contents;
  *(__m256i *)&inOutTrace->fraction = *(__m256i *)&outResults.fraction;
  v23 = *(_OWORD *)&outResults.allsolid;
  *(__m256i *)&inOutTrace->contents = v22;
  debugHitName = outResults.debugHitName;
  *(_OWORD *)&inOutTrace->allsolid = v23;
  inOutTrace->debugHitName = debugHitName;
  return 1i64;
}

/*
==============
BGMovingPlatforms::DoesPenetractionExceedBounds
==============
*/
_BOOL8 BGMovingPlatforms::DoesPenetractionExceedBounds(const Bounds *bounds, const vec3_t *normal)
{
  return COERCE_FLOAT(LODWORD(normal->v[0]) & _xmm) > (float)(bounds->halfSize.v[0] - 0.125) || COERCE_FLOAT(LODWORD(normal->v[1]) & _xmm) > (float)(bounds->halfSize.v[1] - 0.125) || COERCE_FLOAT(LODWORD(normal->v[2]) & _xmm) > (float)(bounds->halfSize.v[2] - 0.125);
}

/*
==============
BGMovingPlatforms::GetBestPlatformUp
==============
*/
void BGMovingPlatforms::GetBestPlatformUp(const playerState_s *const ps, const vec3_t *platformAngles, vec3_t *outBestUp, vec4_t *outBestUpQuat)
{
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  int v12; 
  float *v13; 
  bool v14; 
  float v15; 
  float v16; 
  float v17; 
  __int128 v18; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  __int128 v26; 
  float v30; 
  float v31; 
  float v32; 
  __int64 v33; 
  __int64 v34; 
  tmat33_t<vec3_t> outProjectedPoint; 
  vec3_t right; 
  vec3_t forward; 
  tmat33_t<vec3_t> axis; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\movingplatforms\\bg_moving_platforms.cpp", 169, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !outBestUp && !outBestUpQuat && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\movingplatforms\\bg_moving_platforms.cpp", 170, ASSERT_TYPE_ASSERT, "(outBestUp || outBestUpQuat)", (const char *)&queryFormat, "outBestUp || outBestUpQuat") )
    __debugbreak();
  AnglesToAxis(platformAngles, &axis);
  v8 = FLOAT_N1_0;
  v9 = axis.m[2].v[0];
  v10 = axis.m[2].v[1];
  v11 = axis.m[2].v[2];
  v12 = 0;
  v13 = &axis.m[0].v[2];
  v14 = 1;
  do
  {
    if ( !v14 )
    {
      LODWORD(v34) = 3;
      LODWORD(v33) = v12;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v33, v34) )
        __debugbreak();
    }
    v15 = *v13;
    LODWORD(v16) = *(_DWORD *)v13 & _xmm;
    if ( v16 > v8 )
    {
      if ( (unsigned int)v12 >= 3 )
      {
        LODWORD(v34) = 3;
        LODWORD(v33) = v12;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v33, v34) )
          __debugbreak();
      }
      v9 = *(v13 - 2);
      v10 = *(v13 - 1);
      v11 = *v13;
      if ( v15 < 0.0 )
      {
        LODWORD(v9) ^= _xmm;
        LODWORD(v10) ^= _xmm;
        LODWORD(v11) ^= _xmm;
      }
      v8 = v16;
    }
    ++v12;
    v13 += 3;
    v14 = (unsigned int)v12 < 3;
  }
  while ( v12 < 3 );
  if ( outBestUp )
  {
    v17 = (float)((float)(v9 * v9) + (float)(v10 * v10)) + (float)(v11 * v11);
    outBestUp->v[0] = v9;
    outBestUp->v[1] = v10;
    outBestUp->v[2] = v11;
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v17 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\movingplatforms\\bg_moving_platforms.cpp", 198, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( *outBestUp ) )", "(%g, %g, %g) len %g", v9, v10, v11, fsqrt(v17)) )
      __debugbreak();
  }
  if ( outBestUpQuat )
  {
    AngleVectors(&ps->viewangles, &forward, &right, NULL);
    LODWORD(right.v[0]) ^= _xmm;
    LODWORD(right.v[1]) ^= _xmm;
    LODWORD(right.v[2]) ^= _xmm;
    outProjectedPoint.m[2].v[2] = v11;
    outProjectedPoint.m[2].v[0] = v9;
    outProjectedPoint.m[2].v[1] = v10;
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v9 * forward.v[0]) + (float)(v10 * forward.v[1])) + (float)(v11 * forward.v[2])) & _xmm) - 1.0) & _xmm) < 0.001 )
    {
      ProjectPointOnPlane(&right, &outProjectedPoint.m[2], &outProjectedPoint.m[1]);
      v26 = LODWORD(outProjectedPoint.m[1].v[0]);
      *(float *)&v26 = fsqrt((float)((float)(*(float *)&v26 * *(float *)&v26) + (float)(outProjectedPoint.m[1].v[1] * outProjectedPoint.m[1].v[1])) + (float)(outProjectedPoint.m[1].v[2] * outProjectedPoint.m[1].v[2]));
      _XMM3 = v26;
      __asm
      {
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm0, xmm3, xmm10, xmm0
      }
      outProjectedPoint.m[1].v[0] = outProjectedPoint.m[1].v[0] * (float)(1.0 / *(float *)&_XMM0);
      outProjectedPoint.m[1].v[2] = outProjectedPoint.m[1].v[2] * (float)(1.0 / *(float *)&_XMM0);
      outProjectedPoint.m[1].v[1] = outProjectedPoint.m[1].v[1] * (float)(1.0 / *(float *)&_XMM0);
      Vec3Cross(&outProjectedPoint.m[1], &outProjectedPoint.m[2], outProjectedPoint.m);
      v30 = (float)((float)(outProjectedPoint.m[0].v[0] * outProjectedPoint.m[0].v[0]) + (float)(outProjectedPoint.m[0].v[1] * outProjectedPoint.m[0].v[1])) + (float)(outProjectedPoint.m[0].v[2] * outProjectedPoint.m[0].v[2]);
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v30 - 1.0) & _xmm) < 0.0020000001 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\movingplatforms\\bg_moving_platforms.cpp", 223, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( axis[0] ) )", "(%g, %g, %g) len %g", outProjectedPoint.m[0].v[0], outProjectedPoint.m[0].v[1], outProjectedPoint.m[0].v[2], fsqrt(v30)) )
        goto LABEL_32;
    }
    else
    {
      ProjectPointOnPlane(&forward, &outProjectedPoint.m[2], outProjectedPoint.m);
      v18 = LODWORD(outProjectedPoint.m[0].v[0]);
      *(float *)&v18 = fsqrt((float)((float)(*(float *)&v18 * *(float *)&v18) + (float)(outProjectedPoint.m[0].v[1] * outProjectedPoint.m[0].v[1])) + (float)(outProjectedPoint.m[0].v[2] * outProjectedPoint.m[0].v[2]));
      _XMM3 = v18;
      __asm
      {
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm0, xmm3, xmm10, xmm0
      }
      outProjectedPoint.m[0].v[0] = outProjectedPoint.m[0].v[0] * (float)(1.0 / *(float *)&_XMM0);
      outProjectedPoint.m[0].v[2] = outProjectedPoint.m[0].v[2] * (float)(1.0 / *(float *)&_XMM0);
      outProjectedPoint.m[0].v[1] = outProjectedPoint.m[0].v[1] * (float)(1.0 / *(float *)&_XMM0);
      Vec3Cross(&outProjectedPoint.m[2], outProjectedPoint.m, &outProjectedPoint.m[1]);
      v22 = outProjectedPoint.m[1].v[0];
      v23 = outProjectedPoint.m[1].v[1];
      v24 = outProjectedPoint.m[1].v[2];
      v25 = (float)((float)(v22 * v22) + (float)(v23 * v23)) + (float)(v24 * v24);
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v25 - 1.0) & _xmm) < 0.0020000001 )
        goto LABEL_33;
      if ( !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\movingplatforms\\bg_moving_platforms.cpp", 216, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( axis[1] ) )", "(%g, %g, %g) len %g", outProjectedPoint.m[1].v[0], outProjectedPoint.m[1].v[1], outProjectedPoint.m[1].v[2], fsqrt(v25)) )
      {
LABEL_32:
        v24 = outProjectedPoint.m[1].v[2];
        v23 = outProjectedPoint.m[1].v[1];
        v22 = outProjectedPoint.m[1].v[0];
LABEL_33:
        v31 = (float)((float)(outProjectedPoint.m[0].v[0] * v22) + (float)(outProjectedPoint.m[0].v[1] * v23)) + (float)(outProjectedPoint.m[0].v[2] * v24);
        if ( COERCE_FLOAT(LODWORD(v31) & _xmm) >= 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\movingplatforms\\bg_moving_platforms.cpp", 225, ASSERT_TYPE_ASSERT, "( Vec3IsOrthogonal( axis[0], axis[1] ) )", "v0:%g %g %g, v1:%g %g %g, dot product: %g", outProjectedPoint.m[0].v[0], outProjectedPoint.m[0].v[1], outProjectedPoint.m[0].v[2], v22, v23, v24, v31) )
          __debugbreak();
        v32 = (float)((float)(outProjectedPoint.m[2].v[0] * outProjectedPoint.m[0].v[0]) + (float)(outProjectedPoint.m[2].v[1] * outProjectedPoint.m[0].v[1])) + (float)(outProjectedPoint.m[2].v[2] * outProjectedPoint.m[0].v[2]);
        if ( COERCE_FLOAT(LODWORD(v32) & _xmm) >= 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\movingplatforms\\bg_moving_platforms.cpp", 226, ASSERT_TYPE_ASSERT, "( Vec3IsOrthogonal( axis[0], axis[2] ) )", "v0:%g %g %g, v1:%g %g %g, dot product: %g", outProjectedPoint.m[0].v[0], outProjectedPoint.m[0].v[1], outProjectedPoint.m[0].v[2], outProjectedPoint.m[2].v[0], outProjectedPoint.m[2].v[1], outProjectedPoint.m[2].v[2], v32) )
          __debugbreak();
        AxisToQuat(&outProjectedPoint, outBestUpQuat);
        return;
      }
    }
    __debugbreak();
    goto LABEL_32;
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
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  __int64 result; 
  int v14[8]; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\movingplatforms\\bg_moving_platforms.cpp", 241, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( BGMovingPlatformPS::IsOnMovingPlatform(&ps->movingPlatforms) )
    v8 = this->GetMoverEntityInfo(this, ps->movingPlatforms.m_movingPlatformEntity, (BGMovingPlatformClient::MoverInfo *)v14);
  else
    v8 = 0;
  if ( v8 )
  {
    v9 = *(float *)&v14[4];
    outOrigin->v[0] = *(float *)&v14[3];
    v10 = *(float *)&v14[5];
    outOrigin->v[1] = v9;
    v11 = *(float *)v14;
    outOrigin->v[2] = v10;
    v12 = *(float *)&v14[1];
    outAngles->v[0] = v11;
    outAngles->v[2] = *(float *)&v14[2];
    outAngles->v[1] = v12;
    return 1i64;
  }
  else
  {
    *(_QWORD *)outOrigin->v = 0i64;
    result = 0i64;
    outOrigin->v[2] = 0.0;
    *(_QWORD *)outAngles->v = 0i64;
    outAngles->v[2] = 0.0;
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
  __int128 v6; 
  __int128 v7; 
  __int128 v8; 
  __int128 v9; 
  __int128 v10; 
  __int128 v11; 
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64> otherFlags; 
  playerState_s *ps; 
  float v18; 
  float v19; 
  float v20; 
  playerState_s *v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  const dvar_t *v27; 
  float v28; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  float fraction; 
  double UpContribution; 
  BGMovingPlatformClient *movingPlatforms; 
  vec3_t enda; 
  vec3_t outBestUp; 
  vec3_t starta; 
  WorldUpReferenceFrame v39; 
  vec3_t platformAngles; 
  __int128 v41; 
  __int128 v42; 
  __int128 v43; 
  __int128 v44; 
  __int128 v45; 
  __int128 v46; 

  otherFlags = pm->ps->otherFlags;
  if ( BG_UsingNewPlayerCollision() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\movingplatforms\\bg_moving_platforms.cpp", 295, ASSERT_TYPE_ASSERT, "(!BG_UsingNewPlayerCollision())", (const char *)&queryFormat, "!BG_UsingNewPlayerCollision()") )
    __debugbreak();
  if ( !resolvePlatformUp )
    goto LABEL_22;
  ps = pm->ps;
  movingPlatforms = pm->movingPlatforms;
  WorldUpReferenceFrame::WorldUpReferenceFrame(&v39, ps, movingPlatforms->m_bgHandler);
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\movingplatforms\\bg_moving_platforms.cpp", 241, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !BGMovingPlatformPS::IsOnMovingPlatform(&ps->movingPlatforms) || !movingPlatforms->GetMoverEntityInfo(movingPlatforms, ps->movingPlatforms.m_movingPlatformEntity, (BGMovingPlatformClient::MoverInfo *)&platformAngles) || v39.m_axisAdjusted )
  {
    outBestUp.v[0] = 0.0;
    outBestUp.v[1] = 0.0;
    outBestUp.v[2] = FLOAT_1_0;
    WorldUpReferenceFrame::ApplyReferenceFrameToVector(&v39, &outBestUp);
LABEL_22:
    v28 = start->v[1];
    starta.v[0] = start->v[0];
    v29 = start->v[2];
    starta.v[1] = v28;
    v30 = end->v[0];
    starta.v[2] = v29;
    v31 = end->v[1];
    enda.v[0] = v30;
    v32 = end->v[2];
    enda.v[1] = v31;
    enda.v[2] = v32;
    goto LABEL_23;
  }
  v46 = v6;
  v45 = v7;
  v44 = v8;
  v43 = v9;
  v42 = v10;
  v41 = v11;
  BGMovingPlatforms::GetBestPlatformUp(ps, &platformAngles, &outBestUp, NULL);
  v18 = base->v[0];
  v19 = base->v[1];
  v20 = base->v[2];
  v21 = pm->ps;
  v22 = fsqrt((float)((float)((float)(start->v[1] - v19) * (float)(start->v[1] - v19)) + (float)((float)(start->v[0] - base->v[0]) * (float)(start->v[0] - base->v[0]))) + (float)((float)(start->v[2] - v20) * (float)(start->v[2] - v20)));
  v23 = end->v[0];
  starta.v[0] = (float)(v22 * outBestUp.v[0]) + base->v[0];
  v24 = v22 * outBestUp.v[2];
  starta.v[1] = (float)(v22 * outBestUp.v[1]) + v19;
  v25 = end->v[1] - v19;
  starta.v[2] = v24 + v20;
  LODWORD(v26) = COERCE_UNSIGNED_INT(fsqrt((float)((float)(v25 * v25) + (float)((float)(v23 - v18) * (float)(v23 - v18))) + (float)((float)(end->v[2] - v20) * (float)(end->v[2] - v20)))) ^ _xmm;
  enda.v[0] = (float)(v26 * outBestUp.v[0]) + v18;
  enda.v[2] = (float)(v26 * outBestUp.v[2]) + v20;
  enda.v[1] = (float)(v26 * outBestUp.v[1]) + v19;
  if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\movingplatforms\\bg_moving_platforms.cpp", 261, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB|0x100) )
    goto LABEL_20;
  v27 = DVARBOOL_playerCharacterCollisionVehicleAngleWallFix;
  if ( !DVARBOOL_playerCharacterCollisionVehicleAngleWallFix && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerCharacterCollisionVehicleAngleWallFix") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v27);
  if ( !v27->current.enabled || BGMovingPlatformPS::IsNewRockingMoverCollisionEnabled() )
LABEL_20:
    GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::SetFlagInternal(&v21->otherFlags, ACTIVE, 0xEu);
LABEL_23:
  BgTrace::LegacyPlayerTrace(pm->m_trace, pm, trace, &starta, &enda, pm->bounds, pm->ps->clientNum, pm->tracemask, 0);
  pm->ps->otherFlags = otherFlags;
  fraction = trace->fraction;
  if ( trace->fraction == 0.0 && !trace->startsolid && !trace->allsolid && (base->v[0] != start->v[0] || base->v[1] != start->v[1] || base->v[2] != start->v[2]) )
  {
    BgTrace::LegacyPlayerTrace(pm->m_trace, pm, trace, base, &enda, pm->bounds, pm->ps->clientNum, pm->tracemask, 0);
    pm->ps->otherFlags = otherFlags;
    fraction = trace->fraction;
  }
  if ( fraction < 1.0 && pm->refFrame.m_axisAdjusted )
  {
    UpContribution = WorldUpReferenceFrame::GetUpContribution(&pm->refFrame, &trace->normal);
    if ( *(float *)&UpContribution <= 0.69999999 )
      BGMovingPlatforms::GroundTraceFallback(pm, trace, &starta, &enda);
  }
}

/*
==============
BGMovingPlatforms::GroundTraceFallback
==============
*/
void BGMovingPlatforms::GroundTraceFallback(pmove_t *pm, trace_t *trace, const vec3_t *start, const vec3_t *end)
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
  float v16; 
  int contentMask; 
  playerState_s *ps; 
  float v19; 
  float v20; 
  float v21; 
  double UpContribution; 
  float v23; 
  float v24; 
  int tracemask; 
  playerState_s *v26; 
  __int128 v27; 
  float v31; 
  float v32; 
  float v33; 
  float v34; 
  vec3_t v35; 
  vec3_t starta; 
  vec3_t v1; 
  vec3_t v0; 
  vec3_t cross; 

  v4 = start->v[0];
  v5 = start->v[1];
  v6 = start->v[2];
  v7 = trace->normal.v[0];
  v8 = trace->normal.v[1];
  v9 = trace->normal.v[2];
  v10 = end->v[0] - start->v[0];
  v11 = end->v[2] - v6;
  v12 = end->v[1] - v5;
  v13 = (float)((float)(v12 * v8) + (float)(v10 * v7)) + (float)(v11 * v9);
  starta.v[0] = start->v[0];
  starta.v[1] = v5;
  starta.v[2] = v6;
  v34 = v11;
  v0.v[0] = v7;
  v0.v[1] = v8;
  v0.v[2] = v9;
  if ( v13 < 0.0 )
  {
    contentMask = pm->tracemask;
    ps = pm->ps;
    v19 = (float)(COERCE_FLOAT(LODWORD(v13) ^ _xmm) * v7) + v10;
    LODWORD(v16) = LODWORD(v13) ^ _xmm;
    v20 = (float)(COERCE_FLOAT(LODWORD(v13) ^ _xmm) * v8) + v12;
    v35.v[0] = v19 + v4;
    v21 = (float)(v16 * v9) + v11;
    v35.v[2] = v21 + v6;
    v35.v[1] = v20 + v5;
    BgTrace::LegacyPlayerTrace(pm->m_trace, pm, trace, &starta, &v35, pm->bounds, ps->clientNum, contentMask, 0);
    if ( trace->fraction < 1.0 )
    {
      UpContribution = WorldUpReferenceFrame::GetUpContribution(&pm->refFrame, &trace->normal);
      if ( *(float *)&UpContribution <= 0.69999999 )
      {
        v23 = trace->normal.v[1];
        v24 = trace->normal.v[2];
        v1.v[0] = trace->normal.v[0];
        v1.v[1] = v23;
        v1.v[2] = v24;
        if ( (float)((float)((float)(v19 * v1.v[0]) + (float)(v20 * v23)) + (float)(v21 * v24)) < 0.0 && (float)((float)((float)(v8 * v23) + (float)(v7 * v1.v[0])) + (float)(v9 * v24)) < 0.99000001 )
        {
          Vec3Cross(&v0, &v1, &cross);
          tracemask = pm->tracemask;
          v26 = pm->ps;
          v27 = LODWORD(cross.v[0]);
          *(float *)&v27 = fsqrt((float)((float)(*(float *)&v27 * *(float *)&v27) + (float)(cross.v[1] * cross.v[1])) + (float)(cross.v[2] * cross.v[2]));
          _XMM3 = v27;
          __asm
          {
            vcmpless xmm0, xmm3, cs:__real@80000000
            vblendvps xmm0, xmm3, xmm1, xmm0
          }
          v31 = cross.v[0] * (float)(1.0 / *(float *)&_XMM0);
          v32 = cross.v[2] * (float)(1.0 / *(float *)&_XMM0);
          v33 = cross.v[1] * (float)(1.0 / *(float *)&_XMM0);
          *(float *)&_XMM3 = (float)((float)(v12 * v33) + (float)(v10 * v31)) + (float)(v32 * v34);
          v35.v[0] = (float)(*(float *)&_XMM3 * v31) + starta.v[0];
          v35.v[2] = (float)(*(float *)&_XMM3 * v32) + starta.v[2];
          v35.v[1] = (float)(*(float *)&_XMM3 * v33) + starta.v[1];
          BgTrace::LegacyPlayerTrace(pm->m_trace, pm, trace, &starta, &v35, pm->bounds, v26->clientNum, tracemask, 0);
        }
      }
    }
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
  hkMonitorStream *v13; 
  __int64 v14; 
  unsigned int physicsInstanceId; 
  const BgHandler *m_bgHandler; 
  BOOL v17; 
  bool penetrating; 
  bool penetratingBrushBasis; 
  playerState_s *psa; 
  Bounds *v22; 
  vec3_t *v23; 
  vec3_t *penetration; 
  __int64 v25; 
  hkMonitorStream *v26; 
  vec3_t v1; 
  vec4_t quat; 
  vec3_t v29; 

  v25 = -2i64;
  v22 = (Bounds *)bounds;
  v23 = (vec3_t *)pos;
  psa = (playerState_s *)ps;
  penetration = outPenetration;
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v13 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtPM_PenetrationEntityHandler");
  v26 = v13;
  v14 = this->m_bgHandler->GetPhysicsWorldId((BgHandler *)this->m_bgHandler);
  physicsInstanceId = *(_DWORD *)((__int64)this->m_bgHandler->GetPhysicsObject((BgHandler *)this->m_bgHandler, entNum, this->m_localClientNum) + 4 * v14 + 4);
  m_bgHandler = this->m_bgHandler;
  m_bgHandler->IsClient((BgHandler *)m_bgHandler);
  m_bgHandler->GetEntityOrigin((BgHandler *)m_bgHandler, entNum, &v1);
  this->m_bgHandler->GetEntityAngles((BgHandler *)this->m_bgHandler, entNum, &v29);
  penetrating = 0;
  penetratingBrushBasis = 0;
  if ( physicsInstanceId != -1 )
  {
    if ( Sys_IsServerUserMoveWorker() && !VecNCompareCustomEpsilon(brushOrigin->v, v1.v, 0.001, 3) )
      Com_Printf(34, "PenetrationEntityHandler: Moving from %f %f %f to %f %f %f\n", v1.v[0], v1.v[1], v1.v[2], brushOrigin->v[0], brushOrigin->v[1], brushOrigin->v[2]);
    if ( allowPhysicsTeleport )
    {
      AnglesToQuat(brushAngles, &quat);
      Physics_WarpInstanceTo((Physics_WorldId)v14, physicsInstanceId, brushOrigin, &quat, 1);
    }
    PhysicsQuery_LegacyPenetrationTest((Physics_WorldId)v14, psa, &penetrating, &penetratingBrushBasis, penetration, v23, NULL, v22, contentMask, physicsInstanceId, brushAngles, psa->clientNum, 0);
    if ( allowPhysicsTeleport )
    {
      AnglesToQuat(&v29, &quat);
      Physics_WarpInstanceTo((Physics_WorldId)v14, physicsInstanceId, &v1, &quat, 1);
    }
  }
  v17 = penetrating;
  if ( v13 )
    hkMonitorStream::timerEnd(v13, "Et");
  return v17;
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
__int64 BGMovingPlatformClient::ShouldAdjustWalkable(BGMovingPlatformClient *this, const playerState_s *ps, const WorldUpReferenceFrame *refFrame, const trace_t *trace)
{
  vec3_t *p_normal; 
  double UpContribution; 
  vec3_t up; 
  BGMovingPlatformClient::MoverInfo info; 

  p_normal = &trace->normal;
  UpContribution = WorldUpReferenceFrame::GetUpContribution((WorldUpReferenceFrame *)refFrame, &trace->normal);
  if ( *(float *)&UpContribution >= 0.69999999 )
    return 0i64;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\movingplatforms\\bg_moving_platforms.cpp", 241, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( BGMovingPlatformPS::IsOnMovingPlatform(&ps->movingPlatforms) && BGMovingPlatformClient::GetMoverEntityInfoFromPs(this, ps, &info) && (AngleVectors(&info.angles, NULL, NULL, &up), (float)((float)((float)(up.v[1] * p_normal->v[1]) + (float)(up.v[0] * p_normal->v[0])) + (float)(up.v[2] * p_normal->v[2])) >= 0.69999999) )
    return 1i64;
  else
    return 0i64;
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
  double UpContribution; 
  _BOOL8 result; 

  result = 0;
  if ( trace->fraction < 1.0 )
  {
    p_refFrame = &pm->refFrame;
    if ( p_refFrame->m_axisAdjusted )
    {
      UpContribution = WorldUpReferenceFrame::GetUpContribution(p_refFrame, &trace->normal);
      if ( *(float *)&UpContribution <= 0.69999999 )
        return 1;
    }
  }
  return result;
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
  float v5; 
  vec3_t angles; 
  vec3_t in1; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> out; 

  if ( dir->v[0] != 0.0 || dir->v[1] != 0.0 || dir->v[2] != 0.0 )
  {
    v5 = platformAngles->v[1] - deltaAngles->v[1];
    angles.v[0] = platformAngles->v[0] - deltaAngles->v[0];
    angles.v[2] = platformAngles->v[2] - deltaAngles->v[2];
    angles.v[1] = v5;
    AnglesToAxis(&angles, &axis);
    MatrixTranspose(&axis, &out);
    MatrixTransformVector(dir, &out, &in1);
    AnglesToAxis(platformAngles, &axis);
    MatrixTransformVector(&in1, &axis, dir);
  }
}

/*
==============
BGMovingPlatforms::UpdateHeight
==============
*/
void BGMovingPlatforms::UpdateHeight(float *height, const playerState_s *ps, BgHandler *handler, const vec3_t *playerOrigin, const vec3_t *platformOrigin, const vec3_t *platformAngles, const vec3_t *deltaAngles, const vec3_t *deltaOrigin)
{
  float v11; 
  float v13; 
  float v14; 
  float v15; 
  double UpContribution; 
  vec3_t point; 
  vec3_t angles; 
  vec3_t up; 
  WorldUpReferenceFrame v20; 

  v11 = platformAngles->v[1] - deltaAngles->v[1];
  angles.v[0] = platformAngles->v[0] - deltaAngles->v[0];
  angles.v[2] = platformAngles->v[2] - deltaAngles->v[2];
  angles.v[1] = v11;
  AngleVectors(&angles, NULL, NULL, &up);
  v13 = playerOrigin->v[1];
  v14 = playerOrigin->v[2];
  v15 = (float)((float)((float)(v13 * up.v[1]) + (float)(playerOrigin->v[0] * up.v[0])) + (float)(v14 * up.v[2])) - *height;
  point.v[0] = playerOrigin->v[0];
  point.v[1] = v13;
  point.v[2] = v14;
  BGMovingPlatforms::UpdatePoint(&point, platformOrigin, platformAngles, deltaAngles, deltaOrigin);
  WorldUpReferenceFrame::WorldUpReferenceFrame(&v20, ps, handler);
  UpContribution = WorldUpReferenceFrame::GetUpContribution(&v20, &point);
  *height = *(float *)&UpContribution - v15;
}

/*
==============
BGMovingPlatformClient::UpdateInternalTransforms
==============
*/
void BGMovingPlatformClient::UpdateInternalTransforms(BGMovingPlatformClient *this, pmove_t *pm, const tmat43_t<vec3_t> *startTransform, const tmat43_t<vec3_t> *endTransform, vec3_t *outAppliedAngles)
{
  playerState_s *ps; 
  float v10; 
  const dvar_t *v11; 
  vec3_t platformAngles; 
  vec3_t angles; 
  vec3_t v14; 
  vec3_t deltaOrigin; 
  vec3_t in1; 
  tmat33_t<vec3_t> in; 
  tmat33_t<vec3_t> out; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> in2; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\movingplatforms\\bg_moving_platforms.cpp", 850, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  *(_QWORD *)outAppliedAngles->v = 0i64;
  outAppliedAngles->v[2] = 0.0;
  MatrixTranspose((const tmat33_t<vec3_t> *)startTransform, &out);
  MatrixMultiply(&out, (const tmat33_t<vec3_t> *)endTransform, &axis);
  AxisToAngles(&axis, &angles);
  v10 = endTransform->m[3].v[1] - startTransform->m[3].v[1];
  deltaOrigin.v[0] = endTransform->m[3].v[0] - startTransform->m[3].v[0];
  deltaOrigin.v[2] = endTransform->m[3].v[2] - startTransform->m[3].v[2];
  deltaOrigin.v[1] = v10;
  AxisToAngles((const tmat33_t<vec3_t> *)startTransform, &platformAngles);
  v11 = DCONST_DVARMPBOOL_moving_platform_improved_aim_new;
  if ( !DCONST_DVARMPBOOL_moving_platform_improved_aim_new && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "moving_platform_improved_aim_new") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  BGMovingPlatformClient::UpdatePlayerAngles(this, ps, &angles, &platformAngles, outAppliedAngles, v11->current.color[0]);
  if ( ps->velocity.v[0] != 0.0 || ps->velocity.v[1] != 0.0 || ps->velocity.v[2] != 0.0 )
  {
    v14.v[0] = platformAngles.v[0] - angles.v[0];
    v14.v[2] = platformAngles.v[2] - angles.v[2];
    v14.v[1] = platformAngles.v[1] - angles.v[1];
    AnglesToAxis(&v14, &in);
    MatrixTranspose(&in, &in2);
    MatrixTransformVector(&ps->velocity, &in2, &in1);
    AnglesToAxis(&platformAngles, &in);
    MatrixTransformVector(&in1, &in, &ps->velocity);
  }
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 5u) )
    BGMovingPlatforms::UpdatePoint(&ps->mantleState.startPosition, &startTransform->m[3], &platformAngles, &angles, &deltaOrigin);
}

/*
==============
BGMovingPlatformClient::UpdatePlayerAngles
==============
*/
void BGMovingPlatformClient::UpdatePlayerAngles(BGMovingPlatformClient *this, playerState_s *ps, const vec3_t *delta, const vec3_t *platformAngles, vec3_t *outAppliedDelta, int useImprovedAlgorithm)
{
  float v10; 
  bool v11; 
  float m_movingPlatformTurnRate; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v27; 
  float v0; 
  float v31; 
  float v32; 
  vec3_t angles; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> in; 
  WorldUpReferenceFrame v36; 
  tmat33_t<vec3_t> out; 
  tmat33_t<vec3_t> in2; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\movingplatforms\\bg_moving_platforms.cpp", 538, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v10 = delta->v[1];
  v0 = delta->v[0];
  v32 = delta->v[2];
  v31 = v10;
  *(_QWORD *)outAppliedDelta->v = 0i64;
  outAppliedDelta->v[2] = 0.0;
  if ( !WorldUpReferenceFrame::HasValidWorldUpInPs(ps) && !VecNCompareCustomEpsilon(&v0, vec3_origin.v, 0.001, 3) )
  {
    v11 = Com_GameMode_SupportsFeature(WEAPON_SLIDE|0x80);
    m_movingPlatformTurnRate = ps->movingPlatforms.m_movingPlatformTurnRate;
    _XMM6 = 0i64;
    if ( v11 )
    {
      if ( m_movingPlatformTurnRate != 1.0 )
      {
        v14 = v0 * m_movingPlatformTurnRate;
        v15 = v32 * m_movingPlatformTurnRate;
        v16 = v31 * m_movingPlatformTurnRate;
        v32 = v32 * m_movingPlatformTurnRate;
        v0 = v0 * m_movingPlatformTurnRate;
        v31 = v31 * m_movingPlatformTurnRate;
LABEL_13:
        if ( v14 == 0.0 && v15 == 0.0 || !useImprovedAlgorithm )
        {
          outAppliedDelta->v[0] = v14;
          outAppliedDelta->v[2] = v15;
          outAppliedDelta->v[1] = v16;
          __asm { vroundss xmm3, xmm6, xmm2, 1 }
          v27 = _mm_cvtepi32_ps((__m128i)(unsigned __int16)(int)*(float *)&_XMM3).m128_f32[0] * 0.000015258789;
          __asm { vroundss xmm3, xmm6, xmm2, 1 }
        }
        else
        {
          v17 = v16 + platformAngles->v[1];
          angles.v[0] = v14 + platformAngles->v[0];
          angles.v[2] = v15 + platformAngles->v[2];
          angles.v[1] = v17;
          AnglesToAxis(&ps->viewangles, &axis);
          WorldUpReferenceFrame::WorldUpReferenceFrame(&v36, ps, this->m_bgHandler);
          WorldUpReferenceFrame::ApplyReferenceFrameToAxis(&v36, &axis);
          AnglesToAxis(platformAngles, &in);
          AnglesToAxis(&angles, &in2);
          MatrixTranspose(&in, &out);
          MatrixMultiply(&axis, &out, &in);
          MatrixMultiply(&in, &in2, &axis);
          WorldUpReferenceFrame::RemoveReferenceFrameFromVector(&v36, axis.m);
          vectoangles(axis.m, &angles);
          v18 = angles.v[0] - ps->viewangles.v[0];
          v19 = angles.v[1];
          v20 = angles.v[2];
          outAppliedDelta->v[0] = v18;
          outAppliedDelta->v[1] = v19 - ps->viewangles.v[1];
          outAppliedDelta->v[2] = v20 - ps->viewangles.v[2];
          ps->delta_angles.v[0] = v18 + ps->delta_angles.v[0];
          ps->delta_angles.v[1] = outAppliedDelta->v[1] + ps->delta_angles.v[1];
          _XMM8 = 0i64;
          __asm { vroundss xmm2, xmm8, xmm1, 1 }
          ps->delta_angles.v[0] = (float)((float)(0.0027777778 * ps->delta_angles.v[0]) - *(float *)&_XMM2) * 360.0;
          __asm { vroundss xmm2, xmm8, xmm1, 1 }
          ps->delta_angles.v[1] = (float)((float)(0.0027777778 * ps->delta_angles.v[1]) - *(float *)&_XMM2) * 360.0;
          __asm
          {
            vroundss xmm0, xmm8, xmm3, 1
            vroundss xmm3, xmm8, xmm2, 1
          }
          ps->delta_angles.v[0] = (float)((float)((float)(unsigned __int16)(int)*(float *)&_XMM0 * 0.000015258789) - *(float *)&_XMM3) * 360.0;
          __asm { vroundss xmm0, xmm8, xmm3, 1 }
          v27 = (float)(unsigned __int16)(int)*(float *)&_XMM0 * 0.000015258789;
          __asm { vroundss xmm3, xmm8, xmm2, 1 }
        }
        ps->delta_angles.v[1] = (float)(v27 - *(float *)&_XMM3) * 360.0;
        if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0) )
          ps->proneDirection = outAppliedDelta->v[1] + ps->proneDirection;
        if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 5u) )
          ps->mantleState.yaw = outAppliedDelta->v[1] + ps->mantleState.yaw;
        return;
      }
    }
    else if ( m_movingPlatformTurnRate != 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\movingplatforms\\bg_moving_platforms.cpp", 567, ASSERT_TYPE_ASSERT, "(ps->movingPlatforms.m_movingPlatformTurnRate == 0.0f)", (const char *)&queryFormat, "ps->movingPlatforms.m_movingPlatformTurnRate == 0.0f") )
    {
      __debugbreak();
    }
    v14 = v0;
    v16 = v31;
    v15 = v32;
    goto LABEL_13;
  }
}

/*
==============
BGMovingPlatforms::UpdatePoint
==============
*/
void BGMovingPlatforms::UpdatePoint(vec3_t *point, const vec3_t *platformOrigin, const vec3_t *platformAngles, const vec3_t *deltaAngles, const vec3_t *deltaOrigin)
{
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v12; 
  vec3_t angles; 
  tmat43_t<vec3_t> axis; 
  vec3_t in1; 
  tmat43_t<vec3_t> out; 

  v6 = platformAngles->v[0] - deltaAngles->v[0];
  angles.v[1] = platformAngles->v[1] - deltaAngles->v[1];
  v7 = platformOrigin->v[0] - deltaOrigin->v[0];
  v8 = platformOrigin->v[1] - deltaOrigin->v[1];
  angles.v[0] = v6;
  v9 = platformOrigin->v[2] - deltaOrigin->v[2];
  angles.v[2] = platformAngles->v[2] - deltaAngles->v[2];
  AnglesToAxis(&angles, (tmat33_t<vec3_t> *)&axis);
  axis.m[3].v[0] = v7;
  axis.m[3].v[1] = v8;
  axis.m[3].v[2] = v9;
  MatrixInverseOrthogonal43(&axis, &out);
  MatrixTransformVector43(point, &out, &in1);
  AnglesToAxis(platformAngles, (tmat33_t<vec3_t> *)&axis);
  v12 = platformOrigin->v[1];
  axis.m[3].v[0] = platformOrigin->v[0];
  axis.m[3].v[2] = platformOrigin->v[2];
  axis.m[3].v[1] = v12;
  MatrixTransformVector43(&in1, &axis, point);
}

/*
==============
BGMovingPlatformClient::UpdatePrePmove
==============
*/
void BGMovingPlatformClient::UpdatePrePmove(BGMovingPlatformClient *this, pmove_t *pm)
{
  const dvar_t *v2; 
  bool v5; 
  const dvar_t *v6; 
  playerState_s *ps; 
  __int64 m_movingPlatformEntity; 
  int clientNum; 
  BgAntiLag *antiLag; 
  int serverTime; 
  int v12; 
  BgAntiLag *v13; 
  float fraction; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  int fmt; 
  vec3_t end; 
  vec3_t in1; 
  char v22[16]; 
  tmat43_t<vec3_t> v23; 
  tmat43_t<vec3_t> axis; 
  tmat43_t<vec3_t> out; 
  BgAntiLagEntityInfo outInfo; 
  BgAntiLagEntityInfo v27; 
  trace_t outResult; 

  v2 = DCONST_DVARBOOL_useBgTraceSystem;
  if ( !DCONST_DVARBOOL_useBgTraceSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "useBgTraceSystem") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  v5 = !v2->current.enabled;
  v6 = DCONST_DVARBOOL_usePmoveMoverSystem;
  if ( v5 )
  {
    if ( !DCONST_DVARBOOL_usePmoveMoverSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "usePmoveMoverSystem") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    if ( v6->current.enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\movingplatforms\\bg_moving_platforms.cpp", 775, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Cannot use usePmoveMoverSystem without also using useBgTraceSystem.") )
      __debugbreak();
  }
  else
  {
    if ( !DCONST_DVARBOOL_usePmoveMoverSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "usePmoveMoverSystem") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    if ( v6->current.enabled )
    {
      ps = pm->ps;
      if ( BGMovingPlatformPS::IsOnMovingPlatform(&ps->movingPlatforms) )
      {
        m_movingPlatformEntity = ps->movingPlatforms.m_movingPlatformEntity;
        if ( (unsigned int)(m_movingPlatformEntity + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)m_movingPlatformEntity, "signed", m_movingPlatformEntity) )
          __debugbreak();
        clientNum = ps->clientNum;
        antiLag = (BgAntiLag *)pm->antiLag;
        serverTime = pm->oldcmd.serverTime;
        outInfo.boneInfo.boneList.m_usedSize = 0;
        outInfo.boneInfo.boneList.m_maxSize = 0;
        BgAntiLag::GetEntityInfoAtTime(antiLag, clientNum, (__int16)m_movingPlatformEntity, 0x23u, serverTime, &outInfo);
        v12 = ps->clientNum;
        v13 = (BgAntiLag *)pm->antiLag;
        fmt = pm->cmd.serverTime;
        v27.boneInfo.boneList.m_usedSize = 0;
        v27.boneInfo.boneList.m_maxSize = 0;
        BgAntiLag::GetEntityInfoAtTime(v13, v12, (__int16)m_movingPlatformEntity, 0x23u, fmt, &v27);
        AnglesToAxis(&outInfo.angles, (tmat33_t<vec3_t> *)&axis);
        BgAntiLagEntity_GetOrigin(&outInfo, &axis.m[3]);
        MatrixInverseOrthogonal43(&axis, &out);
        MatrixTransformVector43(&ps->origin, &out, &in1);
        AnglesToAxis(&v27.angles, (tmat33_t<vec3_t> *)&v23);
        BgAntiLagEntity_GetOrigin(&v27, &v23.m[3]);
        MatrixTransformVector43(&in1, &v23, &end);
        this->UpdateInternalTransforms(this, pm, &axis, &v23, (vec3_t *)v22);
        pm->m_trace->m_flags |= 0x20u;
        BgTrace::PerformPlayerTrace(pm->m_trace, pm->bounds, &ps->origin, &end, &outResult);
        fraction = outResult.fraction;
        if ( outResult.fraction >= 1.0 )
        {
          v18 = end.v[1];
          ps->origin.v[0] = end.v[0];
          ps->origin.v[2] = end.v[2];
          ps->origin.v[1] = v18;
        }
        else
        {
          v15 = end.v[1];
          ps->origin.v[0] = (float)((float)(end.v[0] - ps->origin.v[0]) * outResult.fraction) + ps->origin.v[0];
          v16 = v15 - ps->origin.v[1];
          v17 = end.v[2];
          ps->origin.v[1] = (float)(v16 * fraction) + ps->origin.v[1];
          ps->origin.v[2] = (float)((float)(v17 - ps->origin.v[2]) * fraction) + ps->origin.v[2];
        }
        pm->m_trace->m_flags &= ~0x20u;
      }
    }
  }
}

