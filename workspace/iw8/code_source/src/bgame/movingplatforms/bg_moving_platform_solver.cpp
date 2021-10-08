/*
==============
BGMovingPlatformSolver::FixPosition
==============
*/

int __fastcall BGMovingPlatformSolver::FixPosition(BGMovingPlatformSolver *this, vec3_t *fixed)
{
  return ?FixPosition@BGMovingPlatformSolver@@AEAAHAEATvec3_t@@@Z(this, fixed);
}

/*
==============
BGMovingPlatformSolver::JitterPoint
==============
*/

int __fastcall BGMovingPlatformSolver::JitterPoint(BGMovingPlatformSolver *this)
{
  return ?JitterPoint@BGMovingPlatformSolver@@AEAAHXZ(this);
}

/*
==============
BGMovingPlatformSolver::TransformOriginForPush
==============
*/

int __fastcall BGMovingPlatformSolver::TransformOriginForPush(BGMovingPlatformSolver *this)
{
  return ?TransformOriginForPush@BGMovingPlatformSolver@@AEAAHXZ(this);
}

/*
==============
BGMovingPlatformSolver::PositionTrace
==============
*/

int __fastcall BGMovingPlatformSolver::PositionTrace(BGMovingPlatformSolver *this, const vec3_t *pos, int ignorecollisionid, trace_t *trace)
{
  return ?PositionTrace@BGMovingPlatformSolver@@AEBAHAEBTvec3_t@@HPEAUtrace_t@@@Z(this, pos, ignorecollisionid, trace);
}

/*
==============
BGMovingPlatformSolver::GetPushNormal
==============
*/

void __fastcall BGMovingPlatformSolver::GetPushNormal(BGMovingPlatformSolver *this, const vec3_t *playerOrigin, const vec3_t *origin, const vec3_t *angles, const vec3_t *vel, vec3_t *outNormal)
{
  ?GetPushNormal@BGMovingPlatformSolver@@AEAAXAEBTvec3_t@@000AEAT2@@Z(this, playerOrigin, origin, angles, vel, outNormal);
}

/*
==============
BGMovingPlatformSolver::GenericPenetrationSolver
==============
*/

bool __fastcall BGMovingPlatformSolver::GenericPenetrationSolver(BGMovingPlatformSolver *this, const vec3_t *basePosition)
{
  return ?GenericPenetrationSolver@BGMovingPlatformSolver@@AEAA_NTvec3_t@@@Z(this, basePosition);
}

/*
==============
BGMovingPlatformSolver::TransformOriginDefault
==============
*/

int __fastcall BGMovingPlatformSolver::TransformOriginDefault(BGMovingPlatformSolver *this)
{
  return ?TransformOriginDefault@BGMovingPlatformSolver@@AEAAHXZ(this);
}

/*
==============
BGMovingPlatformSolver::TransformOriginForPushNew
==============
*/

bool __fastcall BGMovingPlatformSolver::TransformOriginForPushNew(BGMovingPlatformSolver *this)
{
  return ?TransformOriginForPushNew@BGMovingPlatformSolver@@AEAA_NXZ(this);
}

/*
==============
BGMovingPlatformSolver::GetLinearPlatformVelcity
==============
*/

void __fastcall BGMovingPlatformSolver::GetLinearPlatformVelcity(BGMovingPlatformSolver *this, vec3_t *outVel)
{
  ?GetLinearPlatformVelcity@BGMovingPlatformSolver@@QEAAXAEATvec3_t@@@Z(this, outVel);
}

/*
==============
BGMovingPlatformSolver::GenerateProposedHeight
==============
*/

int __fastcall BGMovingPlatformSolver::GenerateProposedHeight(BGMovingPlatformSolver *this, const vec3_t *pos, vec3_t *outNewPos, int ignorecollisionid, const vec3_t *worldUp)
{
  return ?GenerateProposedHeight@BGMovingPlatformSolver@@AEBAHAEBTvec3_t@@AEAT2@HPEBT2@@Z(this, pos, outNewPos, ignorecollisionid, worldUp);
}

/*
==============
BGMovingPlatformSolver::PenetrationTraceBrushEntityHandler
==============
*/

void __fastcall BGMovingPlatformSolver::PenetrationTraceBrushEntityHandler(BGMovingPlatformSolver *this, const vec3_t *start, const vec3_t *end, const vec3_t *brushOrigin, const vec3_t *brushAngles, vec3_t *outNormal)
{
  ?PenetrationTraceBrushEntityHandler@BGMovingPlatformSolver@@AEAAXAEBTvec3_t@@000AEAT2@@Z(this, start, end, brushOrigin, brushAngles, outNormal);
}

/*
==============
BGMovingPlatformSolver::FixPositionZeroG
==============
*/

void __fastcall BGMovingPlatformSolver::FixPositionZeroG(BGMovingPlatformSolver *this)
{
  ?FixPositionZeroG@BGMovingPlatformSolver@@AEAAXXZ(this);
}

/*
==============
BGMovingPlatformSolver::TraceBrushEntityHandlerShared
==============
*/

void __fastcall BGMovingPlatformSolver::TraceBrushEntityHandlerShared(BGMovingPlatformSolver *this, trace_t *results, vec3_t *outNormal, const vec3_t *start, const vec3_t *end, const vec3_t *brushOrigin, const vec3_t *brushAngles, int penetration)
{
  ?TraceBrushEntityHandlerShared@BGMovingPlatformSolver@@AEAAXPEAUtrace_t@@PEATvec3_t@@AEBT3@222H@Z(this, results, outNormal, start, end, brushOrigin, brushAngles, penetration);
}

/*
==============
BGMovingPlatformSolver::ValidateFinalPositionVsStaticWorld
==============
*/

bool __fastcall BGMovingPlatformSolver::ValidateFinalPositionVsStaticWorld(BGMovingPlatformSolver *this, bool forceTest)
{
  return ?ValidateFinalPositionVsStaticWorld@BGMovingPlatformSolver@@QEAA_N_N@Z(this, forceTest);
}

/*
==============
BGMovingPlatformSolver::TraceBrushEntityHandler
==============
*/

void __fastcall BGMovingPlatformSolver::TraceBrushEntityHandler(BGMovingPlatformSolver *this, trace_t *results, const vec3_t *start, const vec3_t *end, const vec3_t *brushOrigin, const vec3_t *brushAngles)
{
  ?TraceBrushEntityHandler@BGMovingPlatformSolver@@AEAAXPEAUtrace_t@@AEBTvec3_t@@111@Z(this, results, start, end, brushOrigin, brushAngles);
}

/*
==============
BGMovingPlatformSolver::GetTransformedOrigin
==============
*/

void __fastcall BGMovingPlatformSolver::GetTransformedOrigin(BGMovingPlatformSolver *this, vec3_t *outOrigin)
{
  ?GetTransformedOrigin@BGMovingPlatformSolver@@QEAAXAEATvec3_t@@@Z(this, outOrigin);
}

/*
==============
BGMovingPlatformSolver::SolveSystem
==============
*/

int __fastcall BGMovingPlatformSolver::SolveSystem(BGMovingPlatformSolver *this)
{
  return ?SolveSystem@BGMovingPlatformSolver@@QEAAHXZ(this);
}

/*
==============
BGMovingPlatformSolver::BGMovingPlatformSolver
==============
*/

void __fastcall BGMovingPlatformSolver::BGMovingPlatformSolver(BGMovingPlatformSolver *this, const playerState_s *ps, const BGMovingPlatformClient *movingPlatforms, const vec3_t *origin, const vec3_t *angles, const vec3_t *oldOrigin, const vec3_t *oldAngles, const vec3_t *currentOrigin, int platformId, int platformBrushId, const BgHandler *handler, LocalClientNum_t localClientNum, Bounds *bounds, float deltaTime, int clipMask, int flags)
{
  ??0BGMovingPlatformSolver@@QEAA@PEBUplayerState_s@@PEBVBGMovingPlatformClient@@AEBTvec3_t@@2222HHPEBVBgHandler@@W4LocalClientNum_t@@PEAUBounds@@MHH@Z(this, ps, movingPlatforms, origin, angles, oldOrigin, oldAngles, currentOrigin, platformId, platformBrushId, handler, localClientNum, bounds, deltaTime, clipMask, flags);
}

/*
==============
BGMovingPlatformSolver::TransformOriginZeroG
==============
*/

int __fastcall BGMovingPlatformSolver::TransformOriginZeroG(BGMovingPlatformSolver *this)
{
  return ?TransformOriginZeroG@BGMovingPlatformSolver@@AEAAHXZ(this);
}

/*
==============
BGMovingPlatformSolver::BGMovingPlatformSolver
==============
*/
void BGMovingPlatformSolver::BGMovingPlatformSolver(BGMovingPlatformSolver *this, const playerState_s *ps, const BGMovingPlatformClient *movingPlatforms, const vec3_t *origin, const vec3_t *angles, const vec3_t *oldOrigin, const vec3_t *oldAngles, const vec3_t *currentOrigin, int platformId, int platformBrushId, const BgHandler *handler, LocalClientNum_t localClientNum, Bounds *bounds, float deltaTime, int clipMask, int flags)
{
  _R14 = this;
  this->m_movingPlatforms = movingPlatforms;
  this->m_ps = ps;
  WorldUpReferenceFrame::WorldUpReferenceFrame(&this->m_refFrame, ps, handler);
  _R14->m_bound = bounds;
  _R14->m_platformId = platformId;
  _R14->m_platformBrushId = platformBrushId;
  _R14->m_localClientNum = localClientNum;
  _R14->m_bgHandler = handler;
  _R14->m_clipMask = clipMask;
  __asm { vmovss  xmm0, [rsp+28h+deltaTime] }
  _R14->m_flags = flags;
  __asm { vmovss  dword ptr [r14+98h], xmm0 }
  *(_QWORD *)&_R14->m_actorResolve = 0i64;
  _R14->m_platformOrigin = *origin;
  _R14->m_platformAngles = *angles;
  _R14->m_platformOldOrigin = *oldOrigin;
  _R14->m_platformOldAngles = *oldAngles;
  _R14->m_playerCurrentOrigin = *currentOrigin;
  *(_QWORD *)_R14->m_transformedOrigin.v = 0i64;
  _R14->m_transformedOrigin.v[2] = 0.0;
  _R14->m_push = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0xDu);
  _R14->m_jumping = ps->groundEntityNum == 2047;
}

/*
==============
BGMovingPlatformSolver::FixPosition
==============
*/
__int64 BGMovingPlatformSolver::FixPosition(BGMovingPlatformSolver *this, vec3_t *fixed)
{
  unsigned int passEntityNum; 
  const BgPlayerTraceInfo *v17; 
  Physics_WorldId v18; 
  const playerState_s *ps; 
  __int64 result; 
  unsigned int v63; 
  int m_platformId; 
  const BgPlayerTraceInfo *v65; 
  Physics_WorldId v66; 
  const playerState_s *m_ps; 
  signed int v69; 
  unsigned int v70; 
  bool v72; 
  unsigned int v74; 
  unsigned int v154; 
  unsigned int v155; 
  unsigned int v158; 
  bool v166; 
  unsigned int v182; 
  const playerState_s *v230; 
  BgTrace v265; 
  vec3_t outNewPos; 
  vec3_t outPenetration; 
  vec3_t cross; 
  vec3_t worldUp; 
  trace_t results; 
  char v271[16]; 
  int v272[20]; 
  char v273; 
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
  _R15 = fixed;
  _RDI = this;
  if ( BGMovingPlatformSolver::GenerateProposedHeight(this, &this->m_transformedOrigin, &outNewPos, this->m_platformId, &BGMovingPlatforms::WORLD_UP) )
  {
    passEntityNum = _RDI->m_ps->clientNum;
    v17 = _RDI->m_bgHandler->GetPlayerTraceInfo(_RDI->m_bgHandler, passEntityNum);
    BgTrace::BgTrace(&v265, v17);
    v18 = _RDI->m_bgHandler->GetPhysicsWorldId((BgHandler *)_RDI->m_bgHandler);
    ps = _RDI->m_ps;
    v265.m_flags |= 0x40u;
    BgTrace::LegacyTraceHandler(&v265, v18, &results, &outNewPos, &outNewPos, _RDI->m_bound, passEntityNum, _RDI->m_clipMask, ps);
    if ( results.startsolid && results.hitId != 2047 )
    {
      if ( !BGMovingPlatformClient::GetPlatformPenetration((BGMovingPlatformClient *)_RDI->m_movingPlatforms, _RDI->m_ps, &outNewPos, _RDI->m_bound, _RDI->m_clipMask, &outPenetration, 1) )
        goto LABEL_34;
      if ( BGMovingPlatforms::DoesPenetractionExceedBounds(_RDI->m_bound, &outPenetration) )
        goto LABEL_34;
      __asm
      {
        vmovss  xmm3, dword ptr [rbp+170h+outPenetration]
        vmovss  xmm4, dword ptr [rbp+170h+outPenetration+4]
        vmovss  xmm5, dword ptr [rbp+170h+outPenetration+8]
        vmovss  xmm8, cs:__real@3f800000
        vmulss  xmm1, xmm3, xmm3
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm5, xmm5
        vaddss  xmm0, xmm2, xmm1
        vsqrtss xmm6, xmm0, xmm0
        vcmpless xmm0, xmm6, cs:__real@80000000
        vblendvps xmm0, xmm6, xmm8, xmm0
        vdivss  xmm1, xmm8, xmm0
        vmulss  xmm2, xmm3, xmm1
        vaddss  xmm3, xmm6, cs:?SURFACE_OFFSET@BGMovingPlatforms@@2MB; float const BGMovingPlatforms::SURFACE_OFFSET
        vmulss  xmm4, xmm4, xmm1
        vmulss  xmm5, xmm5, xmm1
        vmulss  xmm1, xmm3, xmm2
        vaddss  xmm1, xmm1, dword ptr [rbp+170h+outNewPos]
        vmovss  dword ptr [rbp+170h+outNewPos], xmm1
        vmovss  dword ptr [rbp+170h+outPenetration], xmm2
        vmulss  xmm2, xmm3, xmm4
        vaddss  xmm1, xmm2, dword ptr [rbp+170h+outNewPos+4]
        vmulss  xmm3, xmm3, xmm5
        vmovss  dword ptr [rbp+170h+outNewPos+4], xmm1
        vaddss  xmm1, xmm3, dword ptr [rbp+170h+outNewPos+8]
        vmovss  dword ptr [rbp+170h+outNewPos+8], xmm1
        vmovss  dword ptr [rbp+170h+outPenetration+4], xmm4
        vmovss  dword ptr [rbp+170h+outPenetration+8], xmm5
      }
      Vec3Cross(&outPenetration, &BGMovingPlatforms::WORLD_UP, &cross);
      __asm
      {
        vmovss  xmm5, dword ptr [rbp+170h+cross]
        vmovss  xmm4, dword ptr [rbp+170h+cross+8]
        vmovss  xmm6, dword ptr [rbp+170h+cross+4]
        vmulss  xmm1, xmm5, xmm5
        vmulss  xmm0, xmm6, xmm6
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm4, xmm4
        vaddss  xmm0, xmm2, xmm1
        vsqrtss xmm3, xmm0, xmm0
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm0, xmm3, xmm8, xmm0
        vdivss  xmm2, xmm8, xmm0
        vmulss  xmm0, xmm5, xmm2
        vmovss  dword ptr [rbp+170h+cross], xmm0
        vmulss  xmm0, xmm4, xmm2
        vmulss  xmm1, xmm6, xmm2
        vmovss  dword ptr [rbp+170h+cross+8], xmm0
        vmovss  dword ptr [rbp+170h+cross+4], xmm1
      }
      Vec3Cross(&cross, &outPenetration, &worldUp);
      if ( !BGMovingPlatformSolver::GenerateProposedHeight(_RDI, &outNewPos, &outNewPos, _RDI->m_ps->clientNum, &worldUp) )
      {
LABEL_34:
        result = 0i64;
        goto LABEL_35;
      }
    }
  }
  else
  {
    __asm { vmovss  xmm15, cs:__real@80000000 }
    v63 = 1;
    while ( 1 )
    {
      m_platformId = _RDI->m_platformId;
      v65 = _RDI->m_bgHandler->GetPlayerTraceInfo(_RDI->m_bgHandler, (unsigned int)_RDI->m_ps->clientNum);
      BgTrace::BgTrace(&v265, v65);
      v66 = _RDI->m_bgHandler->GetPhysicsWorldId((BgHandler *)_RDI->m_bgHandler);
      m_ps = _RDI->m_ps;
      v265.m_flags |= 0x40u;
      BgTrace::LegacyTraceHandler(&v265, v66, &results, &outNewPos, &outNewPos, _RDI->m_bound, m_platformId, _RDI->m_clipMask, m_ps);
      if ( results.startsolid && results.hitId != 2047 )
      {
        if ( results.hitType != TRACE_HITTYPE_ENTITY || !((unsigned __int64 (__fastcall *)(const BGMovingPlatformClient *, _QWORD, char *))_RDI->m_movingPlatforms->GetCharacterEntityInfo)(_RDI->m_movingPlatforms, results.hitId, &v271[32 * v63 - 32]) )
          goto LABEL_34;
        v69 = 0;
        _RDI->m_actorResolve = 1;
        v70 = 0;
        __asm
        {
          vxorps  xmm6, xmm6, xmm6
          vxorps  xmm9, xmm9, xmm9
          vxorps  xmm8, xmm8, xmm8
          vxorps  xmm5, xmm5, xmm5
          vxorps  xmm7, xmm7, xmm7
          vmovss  [rsp+270h+var_218], xmm6
          vmovss  [rsp+270h+var_220], xmm9
          vmovss  [rsp+270h+var_21C], xmm8
          vmovss  [rsp+270h+var_214], xmm5
          vmovss  [rsp+270h+var_210], xmm7
        }
        v72 = v63 <= 4;
        if ( v63 >= 4 )
        {
          _RAX = _RDI->m_bound;
          v74 = v63 - 3;
          __asm
          {
            vmovss  xmm13, dword ptr [rdi+0A8h]
            vmovss  xmm15, dword ptr [rdi+0ACh]
            vmovss  [rsp+270h+var_1FC], xmm13
            vmovss  xmm4, dword ptr [rax+0Ch]
            vmovss  [rsp+270h+var_208], xmm4
            vmovss  [rsp+270h+var_1F8], xmm15
          }
          _R10 = v272;
          do
          {
            __asm
            {
              vmovss  xmm8, dword ptr [r10-4]
              vmovss  xmm10, dword ptr [r10]
              vmovss  xmm7, dword ptr [r10+20h]
              vmovss  xmm5, dword ptr [r10+40h]
              vsubss  xmm1, xmm8, xmm13
              vmulss  xmm1, xmm1, xmm1
              vsubss  xmm0, xmm10, xmm15
              vaddss  xmm12, xmm4, dword ptr [rcx+0Ch]
              vmulss  xmm2, xmm0, xmm0
              vaddss  xmm2, xmm2, xmm1
              vsqrtss xmm0, xmm2, xmm2
              vaddss  xmm11, xmm4, dword ptr [rcx+0Ch]
              vmovss  xmm4, dword ptr [r10+3Ch]
              vmovss  [rsp+270h+var_20C], xmm0
              vsubss  xmm0, xmm12, xmm0
              vmaxss  xmm3, xmm0, xmm6
              vmovss  xmm6, dword ptr [r10+1Ch]
              vmovss  [rsp+270h+var_204], xmm0
              vsubss  xmm1, xmm6, xmm13
              vmulss  xmm1, xmm1, xmm1
              vsubss  xmm0, xmm7, xmm15
              vmulss  xmm2, xmm0, xmm0
              vaddss  xmm2, xmm2, xmm1
              vsqrtss xmm14, xmm2, xmm2
              vsubss  xmm1, xmm4, xmm13
              vmulss  xmm1, xmm1, xmm1
              vsubss  xmm0, xmm5, xmm15
              vmulss  xmm2, xmm0, xmm0
              vmovss  xmm0, dword ptr [rax+0Ch]
              vaddss  xmm9, xmm0, dword ptr [rcx+0Ch]
              vaddss  xmm0, xmm8, [rsp+270h+var_214]
              vaddss  xmm2, xmm2, xmm1
              vaddss  xmm1, xmm0, xmm6
              vsqrtss xmm13, xmm2, xmm2
              vaddss  xmm2, xmm1, xmm4
              vmovss  xmm4, dword ptr [r10+60h]
              vmovss  [rsp+270h+var_200], xmm3
              vmovss  xmm3, dword ptr [r10+5Ch]
              vaddss  xmm0, xmm2, xmm3
              vsubss  xmm3, xmm3, dword ptr [rdi+0A8h]
              vmovss  [rsp+270h+var_214], xmm0
              vaddss  xmm0, xmm10, [rsp+270h+var_210]
              vaddss  xmm1, xmm0, xmm7
              vaddss  xmm2, xmm1, xmm5
              vaddss  xmm0, xmm2, xmm4
              vmovss  [rsp+270h+var_210], xmm0
              vsubss  xmm0, xmm4, dword ptr [rdi+0ACh]
              vmulss  xmm2, xmm0, xmm0
              vmovss  xmm0, dword ptr [rax+0Ch]
              vaddss  xmm4, xmm0, dword ptr [rcx+0Ch]
              vmovss  xmm0, [rsp+270h+var_218]
              vcmpltss xmm0, xmm0, [rsp+270h+var_204]
              vsubss  xmm8, xmm11, xmm14
              vmulss  xmm1, xmm3, xmm3
              vaddss  xmm2, xmm2, xmm1
              vmovss  xmm1, [rsp+270h+var_21C]
              vblendvps xmm1, xmm1, xmm12, xmm0
              vmovss  xmm12, [rsp+270h+var_200]
              vsqrtss xmm5, xmm2, xmm2
              vsubss  xmm15, xmm9, xmm13
              vcmpltss xmm0, xmm12, xmm8
              vblendvps xmm2, xmm1, xmm11, xmm0
              vmovss  xmm11, [rsp+270h+var_218]
              vmaxss  xmm10, xmm8, xmm12
              vcmpltss xmm1, xmm10, xmm15
              vblendvps xmm3, xmm2, xmm9, xmm1
              vmovss  xmm2, [rsp+270h+var_220]
              vmovss  xmm9, [rsp+270h+var_204]
              vmovss  xmm1, [rsp+270h+var_20C]
              vsubss  xmm6, xmm4, xmm5
              vmaxss  xmm7, xmm15, xmm10
              vcmpltss xmm0, xmm7, xmm6
              vblendvps xmm4, xmm3, xmm4, xmm0
              vcmpltss xmm0, xmm11, xmm9
              vblendvps xmm1, xmm2, xmm1, xmm0
              vcmpltss xmm0, xmm12, xmm8
              vblendvps xmm2, xmm1, xmm14, xmm0
              vcomiss xmm9, xmm11
              vcmpltss xmm1, xmm10, xmm15
              vblendvps xmm3, xmm2, xmm13, xmm1
              vmovss  xmm13, [rsp+270h+var_1FC]
            }
            v154 = v70;
            v155 = v70 + 1;
            if ( v72 )
              v154 = v69;
            _R10 += 32;
            __asm
            {
              vcomiss xmm8, xmm12
              vcmpltss xmm0, xmm7, xmm6
            }
            if ( v72 )
              v155 = v154;
            v69 = v70 + 3;
            __asm
            {
              vcomiss xmm15, xmm10
              vmovss  xmm15, [rsp+270h+var_1F8]
              vblendvps xmm1, xmm3, xmm5, xmm0
            }
            v158 = v70 + 2;
            if ( v72 )
              v158 = v155;
            __asm
            {
              vcomiss xmm6, xmm7
              vmaxss  xmm2, xmm6, xmm7
            }
            if ( v72 )
              v69 = v158;
            v70 += 4;
            __asm
            {
              vmovss  [rsp+270h+var_20C], xmm1
              vmovss  [rsp+270h+var_21C], xmm4
              vmovaps xmm8, xmm4
              vmovss  [rsp+270h+var_20C], xmm4
              vmovss  xmm4, [rsp+270h+var_208]
              vmovss  [rsp+270h+var_218], xmm2
              vmovss  [rsp+270h+var_220], xmm1
              vmovaps xmm6, xmm2
              vmovaps xmm9, xmm1
            }
            v72 = v70 <= v74;
          }
          while ( v70 < v74 );
          __asm
          {
            vmovss  xmm5, [rsp+270h+var_214]
            vmovss  xmm7, [rsp+270h+var_210]
            vmovss  xmm15, cs:__real@80000000
            vmovss  [rsp+270h+var_220], xmm1
            vmovss  [rsp+270h+var_21C], xmm8
          }
        }
        if ( v70 < v63 )
        {
          _RAX = _RDI->m_bound;
          __asm
          {
            vmovss  xmm10, dword ptr [rdi+0A8h]
            vmovss  xmm11, dword ptr [rdi+0ACh]
            vmovss  xmm12, dword ptr [rax+0Ch]
          }
          v166 = __CFSHL__(v70, 5) || 32i64 * v70 == 0;
          _RCX = &v271[32 * v70 + 12];
          do
          {
            __asm
            {
              vmovss  xmm1, dword ptr [rcx]
              vmovss  xmm0, dword ptr [rcx+4]
            }
            _RCX += 32;
            __asm
            {
              vaddss  xmm5, xmm5, xmm1
              vaddss  xmm7, xmm7, xmm0
              vsubss  xmm0, xmm0, xmm11
              vmulss  xmm2, xmm0, xmm0
              vsubss  xmm1, xmm1, xmm10
              vmulss  xmm1, xmm1, xmm1
              vaddss  xmm2, xmm2, xmm1
              vaddss  xmm1, xmm12, dword ptr [rax+0Ch]
              vsqrtss xmm3, xmm2, xmm2
              vsubss  xmm2, xmm1, xmm3
              vcmpltss xmm0, xmm6, xmm2
              vblendvps xmm4, xmm8, xmm1, xmm0
              vcomiss xmm2, xmm6
              vcmpltss xmm0, xmm6, xmm2
              vblendvps xmm1, xmm9, xmm3, xmm0
            }
            v182 = v70;
            if ( v166 )
              v182 = v69;
            ++v70;
            v69 = v182;
            __asm
            {
              vmaxss  xmm0, xmm2, xmm6
              vmovss  [rsp+270h+var_208], xmm1
              vmovaps xmm6, xmm0
              vmovss  [rsp+270h+var_208], xmm4
              vmovss  [rsp+270h+var_220], xmm1
              vmovss  [rsp+270h+var_21C], xmm4
              vmovaps xmm9, xmm1
              vmovaps xmm8, xmm4
            }
            v166 = v70 <= v63;
          }
          while ( v70 < v63 );
        }
        __asm
        {
          vmovss  xmm14, cs:__real@3f800000
          vmovss  xmm10, dword ptr [rdi+0A8h]
          vmovss  xmm11, dword ptr [rdi+0ACh]
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, rax
          vdivss  xmm1, xmm14, xmm0
          vmulss  xmm0, xmm5, xmm1
          vsubss  xmm5, xmm10, xmm0
          vmulss  xmm1, xmm7, xmm1
          vsubss  xmm4, xmm11, xmm1
          vmulss  xmm2, xmm4, xmm4
          vmulss  xmm0, xmm5, xmm5
          vaddss  xmm1, xmm2, xmm0
          vsqrtss xmm3, xmm1, xmm1
          vcmpless xmm0, xmm3, xmm15
          vblendvps xmm0, xmm3, xmm14, xmm0
          vdivss  xmm1, xmm14, xmm0
          vmulss  xmm13, xmm1, xmm4
          vmulss  xmm12, xmm1, xmm5
        }
        _RAX = 32i64 * v69;
        __asm
        {
          vmovss  xmm1, [rbp+rax+170h+var_120]
          vmovss  xmm0, [rbp+rax+170h+var_124]
          vsubss  xmm4, xmm1, xmm11
          vsubss  xmm5, xmm0, xmm10
          vmulss  xmm2, xmm4, xmm4
          vmulss  xmm0, xmm5, xmm5
          vaddss  xmm1, xmm2, xmm0
          vsqrtss xmm3, xmm1, xmm1
          vcmpless xmm0, xmm3, xmm15
          vblendvps xmm0, xmm3, xmm14, xmm0
          vdivss  xmm1, xmm14, xmm0
          vmulss  xmm0, xmm1, xmm4
          vmulss  xmm3, xmm0, xmm13
          vmulss  xmm1, xmm1, xmm5
          vmulss  xmm2, xmm1, xmm12
          vaddss  xmm4, xmm3, xmm2
          vandps  xmm0, xmm4, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
          vcomiss xmm0, cs:__real@3f7fbe77
        }
        if ( __CFSHL__(v69, 5) || _RAX == 0 )
        {
          __asm { vmovaps xmm0, xmm4; X }
          *(float *)&_XMM0 = acosf_0(*(float *)&_XMM0);
          __asm { vmovaps xmm6, xmm0 }
          *(float *)&_XMM0 = sinf_0(*(float *)&_XMM0);
          __asm
          {
            vmovaps xmm7, xmm0
            vmovss  xmm0, cs:__real@40490fdb
            vmulss  xmm1, xmm7, xmm9
            vsubss  xmm6, xmm0, xmm6
            vdivss  xmm0, xmm1, xmm8; X
          }
          asinf_0(*(float *)&_XMM0);
          __asm { vsubss  xmm0, xmm6, xmm0; X }
          *(float *)&_XMM0 = sinf_0(*(float *)&_XMM0);
          __asm
          {
            vmulss  xmm1, xmm0, xmm8
            vdivss  xmm6, xmm1, xmm7
          }
        }
        __asm { vaddss  xmm2, xmm6, cs:__real@3e000000 }
        v230 = _RDI->m_ps;
        __asm
        {
          vmulss  xmm0, xmm2, xmm12
          vaddss  xmm1, xmm0, xmm10
          vmovss  dword ptr [rbp+170h+outNewPos], xmm1
          vmovss  xmm1, dword ptr [rdi+0B0h]
          vmulss  xmm2, xmm2, xmm13
          vaddss  xmm0, xmm2, xmm11
          vmovss  dword ptr [rbp+170h+outNewPos+8], xmm1
          vmovss  dword ptr [rbp+170h+outNewPos+4], xmm0
        }
        if ( BGMovingPlatformSolver::GenerateProposedHeight(_RDI, &outNewPos, &outNewPos, v230->clientNum, &BGMovingPlatforms::WORLD_UP) )
          break;
      }
      if ( v63++ >= 3 )
        goto LABEL_34;
    }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+170h+outNewPos]
    vmovss  xmm1, dword ptr [rbp+170h+outNewPos+4]
    vmovss  dword ptr [r15], xmm0
    vmovss  xmm0, dword ptr [rbp+170h+outNewPos+8]
    vmovss  dword ptr [r15+8], xmm0
    vmovss  dword ptr [r15+4], xmm1
  }
  result = 1i64;
LABEL_35:
  _R11 = &v273;
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
  return result;
}

/*
==============
BGMovingPlatformSolver::FixPositionZeroG
==============
*/
void BGMovingPlatformSolver::FixPositionZeroG(BGMovingPlatformSolver *this)
{
  vec3_t outPenetration; 

  _RBX = &this->m_transformedOrigin;
  if ( BGMovingPlatformClient::PenetrationEntityHandler((BGMovingPlatformClient *)this->m_movingPlatforms, this->m_ps, &this->m_transformedOrigin, this->m_bound, this->m_platformId, this->m_platformBrushId, &this->m_platformOrigin, &this->m_platformAngles, this->m_clipMask, &outPenetration, 1) )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+88h+var_28]
      vaddss  xmm1, xmm0, dword ptr [rbx]
      vmovss  xmm2, dword ptr [rsp+88h+var_28+4]
      vmovss  dword ptr [rbx], xmm1
      vaddss  xmm0, xmm2, dword ptr [rbx+4]
      vmovss  xmm1, dword ptr [rsp+88h+var_28+8]
      vmovss  dword ptr [rbx+4], xmm0
      vaddss  xmm2, xmm1, dword ptr [rbx+8]
      vmovss  dword ptr [rbx+8], xmm2
    }
  }
}

/*
==============
BGMovingPlatformSolver::GenerateProposedHeight
==============
*/
__int64 BGMovingPlatformSolver::GenerateProposedHeight(BGMovingPlatformSolver *this, const vec3_t *pos, vec3_t *outNewPos, int ignorecollisionid, const vec3_t *worldUp)
{
  float v23; 
  float v24; 
  float v25; 
  bool v26; 
  bool v27; 
  const BgHandler *m_bgHandler; 
  Physics_WorldId v41; 
  unsigned int v42; 
  const BgPlayerTraceInfo *v43; 
  Physics_WorldId v44; 
  const playerState_s *m_ps; 
  unsigned int hitId; 
  const BgHandler *v50; 
  const BgPlayerTraceInfo *v57; 
  const playerState_s *v58; 
  char v59; 
  playerState_s *v65; 
  const Bounds *bounds; 
  __int64 result; 
  int contentMask; 
  playerState_s *ps; 
  BgTrace v111; 
  vec3_t start; 
  vec3_t end; 
  vec3_t outUp; 
  trace_t results; 

  _RAX = worldUp;
  _RDI = pos;
  _RBX = this;
  if ( worldUp )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rax]
      vmovss  xmm1, dword ptr [rax+4]
      vmovss  dword ptr [rbp+0F0h+outUp], xmm0
      vmovss  xmm0, dword ptr [rax+8]
      vmovss  dword ptr [rbp+0F0h+outUp+8], xmm0
      vmovss  dword ptr [rbp+0F0h+outUp+4], xmm1
    }
  }
  else
  {
    BGMovingPlatformClient::ResolvePlatformUp((BGMovingPlatformClient *)this->m_movingPlatforms, this->m_ps, &outUp);
  }
  v23 = _RDI->v[0];
  __asm
  {
    vmovaps [rsp+1F0h+var_40], xmm6
    vmovaps [rsp+1F0h+var_50], xmm7
    vmovaps [rsp+1F0h+var_60], xmm8
    vmovaps [rsp+1F0h+var_70], xmm9
    vmovaps [rsp+1F0h+var_80], xmm10
    vmovaps [rsp+1F0h+var_90], xmm11
  }
  outNewPos->v[0] = v23;
  v24 = _RDI->v[1];
  __asm { vmovaps [rsp+1F0h+var_A0], xmm12 }
  outNewPos->v[1] = v24;
  v25 = _RDI->v[2];
  __asm { vmovaps [rsp+1F0h+var_B0], xmm13 }
  outNewPos->v[2] = v25;
  v26 = _RBX->m_jumping == 0;
  __asm
  {
    vmovaps [rsp+1F0h+var_C0], xmm14
    vmovaps [rsp+1F0h+var_D0], xmm15
  }
  if ( v26 || BGMovingPlatformSolver::PositionTrace(_RBX, _RDI, ignorecollisionid, NULL) != 2047 )
  {
    v27 = _RBX->m_bgHandler->IsServer((BgHandler *)_RBX->m_bgHandler);
    __asm { vmovss  xmm0, dword ptr [rbx+98h] }
    if ( !v27 )
      __asm { vxorps  xmm0, xmm0, cs:__xmm@80000000800000008000000080000000 }
    __asm
    {
      vmulss  xmm2, xmm0, cs:__real@42c80000
      vmovss  xmm1, dword ptr [rbp+0F0h+outUp+4]
      vmovss  xmm0, dword ptr [rbp+0F0h+outUp+8]
    }
    m_bgHandler = _RBX->m_bgHandler;
    __asm
    {
      vmulss  xmm15, xmm2, dword ptr [rbp+0F0h+outUp]
      vmulss  xmm6, xmm1, xmm2
      vmovss  xmm1, dword ptr [rdi]
      vmovss  dword ptr [rsp+1F0h+start], xmm1
      vmovss  xmm1, dword ptr [rdi+8]
      vmulss  xmm7, xmm0, xmm2
      vmovss  xmm0, dword ptr [rdi+4]
      vmovss  dword ptr [rbp+0F0h+start+8], xmm1
      vmovss  dword ptr [rsp+1F0h+start+4], xmm0
      vmovss  [rsp+1F0h+var_1A0], xmm6
      vmovss  [rsp+1F0h+var_19C], xmm7
      vmovss  xmm13, cs:__real@41200000
      vmovss  xmm14, cs:__real@3e99999a
    }
    v41 = m_bgHandler->GetPhysicsWorldId((BgHandler *)m_bgHandler);
    v42 = 0;
    while ( 1 )
    {
      v43 = _RBX->m_bgHandler->GetPlayerTraceInfo(_RBX->m_bgHandler, (unsigned int)_RBX->m_ps->clientNum);
      BgTrace::BgTrace(&v111, v43);
      v44 = _RBX->m_bgHandler->GetPhysicsWorldId((BgHandler *)_RBX->m_bgHandler);
      m_ps = _RBX->m_ps;
      v111.m_flags |= 0x40u;
      BgTrace::LegacyTraceHandler(&v111, v44, &results, &start, &start, _RBX->m_bound, ignorecollisionid, _RBX->m_clipMask, m_ps);
      hitId = 2047;
      if ( results.startsolid )
        hitId = results.hitId;
      if ( hitId == 2047 )
      {
        __asm
        {
          vmovss  xmm1, dword ptr [rdi]
          vmulss  xmm3, xmm13, dword ptr [rbp+0F0h+outUp+4]
          vmulss  xmm2, xmm13, dword ptr [rbp+0F0h+outUp]
        }
        v50 = _RBX->m_bgHandler;
        __asm
        {
          vsubss  xmm2, xmm1, xmm2
          vmovss  xmm1, dword ptr [rdi+4]
          vmovss  dword ptr [rbp+0F0h+var_168], xmm2
          vsubss  xmm2, xmm1, xmm3
          vmulss  xmm3, xmm13, dword ptr [rbp+0F0h+outUp+8]
          vmovss  xmm1, dword ptr [rdi+8]
          vmovss  dword ptr [rbp+0F0h+var_168+4], xmm2
          vsubss  xmm2, xmm1, xmm3
          vmovss  dword ptr [rbp+0F0h+var_168+8], xmm2
        }
        v57 = v50->GetPlayerTraceInfo(v50, _RBX->m_ps->clientNum);
        BgTrace::BgTrace(&v111, v57);
        v58 = _RBX->m_ps;
        v111.m_flags |= 0x40u;
        BgTrace::LegacyTraceHandler(&v111, v41, &results, &start, &end, _RBX->m_bound, ignorecollisionid, _RBX->m_clipMask, v58);
        v111.m_flags &= ~0x40u;
        if ( !results.startsolid )
        {
          *(double *)&_XMM0 = WorldUpReferenceFrame::GetUpContribution(&_RBX->m_refFrame, &results.normal);
          __asm { vcomiss xmm0, xmm14 }
          if ( v59 )
          {
            __asm
            {
              vmovss  xmm4, [rbp+0F0h+results.fraction]
              vmovss  xmm6, dword ptr [rbp+0F0h+var_168]
              vsubss  xmm0, xmm6, dword ptr [rsp+1F0h+start]
              vmovss  xmm5, dword ptr [rbp+0F0h+var_168+4]
              vmovss  xmm3, dword ptr [rbp+0F0h+var_168+8]
            }
            v65 = (playerState_s *)_RBX->m_ps;
            v111.m_flags |= 0x40u;
            __asm
            {
              vmulss  xmm0, xmm0, xmm4
              vaddss  xmm12, xmm0, dword ptr [rsp+1F0h+start]
              vsubss  xmm0, xmm5, dword ptr [rsp+1F0h+start+4]
              vmulss  xmm1, xmm0, xmm4
              vaddss  xmm11, xmm1, dword ptr [rsp+1F0h+start+4]
              vsubss  xmm0, xmm3, dword ptr [rbp+0F0h+start+8]
              vmulss  xmm1, xmm0, xmm4
              vaddss  xmm10, xmm1, dword ptr [rbp+0F0h+start+8]
            }
            ps = v65;
            contentMask = _RBX->m_clipMask;
            bounds = _RBX->m_bound;
            __asm
            {
              vsubss  xmm8, xmm5, xmm11
              vmulss  xmm1, xmm8, dword ptr [rbp+0F0h+results.normal+4]
              vsubss  xmm9, xmm3, xmm10
              vsubss  xmm6, xmm6, xmm12
              vmulss  xmm0, xmm6, dword ptr [rbp+0F0h+results.normal]
              vaddss  xmm2, xmm1, xmm0
              vmulss  xmm1, xmm9, dword ptr [rbp+0F0h+results.normal+8]
              vaddss  xmm0, xmm2, xmm1
              vxorps  xmm4, xmm0, cs:__xmm@80000000800000008000000080000000
              vmulss  xmm2, xmm4, dword ptr [rbp+0F0h+results.normal]
              vaddss  xmm1, xmm2, xmm6
              vmulss  xmm2, xmm4, dword ptr [rbp+0F0h+results.normal+4]
              vaddss  xmm0, xmm1, xmm12
              vaddss  xmm1, xmm2, xmm8
              vmulss  xmm2, xmm4, dword ptr [rbp+0F0h+results.normal+8]
              vmovss  dword ptr [rbp+0F0h+var_168], xmm0
              vaddss  xmm0, xmm1, xmm11
              vaddss  xmm1, xmm2, xmm9
              vmovss  dword ptr [rbp+0F0h+var_168+4], xmm0
              vaddss  xmm0, xmm1, xmm10
              vmovss  dword ptr [rbp+0F0h+var_168+8], xmm0
              vmovss  dword ptr [rsp+1F0h+start], xmm12
              vmovss  dword ptr [rsp+1F0h+start+4], xmm11
              vmovss  dword ptr [rbp+0F0h+start+8], xmm10
            }
            BgTrace::LegacyTraceHandler(&v111, v41, &results, &start, &end, bounds, ignorecollisionid, contentMask, ps);
            __asm
            {
              vmovss  xmm6, [rsp+1F0h+var_1A0]
              vmovss  xmm7, [rsp+1F0h+var_19C]
            }
          }
          if ( !results.startsolid )
            break;
        }
      }
      __asm
      {
        vaddss  xmm1, xmm15, dword ptr [rsp+1F0h+start]
        vaddss  xmm0, xmm6, dword ptr [rsp+1F0h+start+4]
        vaddss  xmm2, xmm7, dword ptr [rbp+0F0h+start+8]
      }
      ++v42;
      __asm
      {
        vmovss  dword ptr [rsp+1F0h+start], xmm1
        vmovss  dword ptr [rsp+1F0h+start+4], xmm0
        vmovss  dword ptr [rbp+0F0h+start+8], xmm2
      }
      if ( v42 >= 4 )
      {
        result = 0i64;
        goto LABEL_18;
      }
    }
    __asm
    {
      vmovss  xmm6, [rbp+0F0h+results.fraction]
      vcomiss xmm6, cs:__real@3f800000
    }
  }
  result = 1i64;
LABEL_18:
  __asm
  {
    vmovaps xmm15, [rsp+1F0h+var_D0]
    vmovaps xmm14, [rsp+1F0h+var_C0]
    vmovaps xmm13, [rsp+1F0h+var_B0]
    vmovaps xmm12, [rsp+1F0h+var_A0]
    vmovaps xmm11, [rsp+1F0h+var_90]
    vmovaps xmm10, [rsp+1F0h+var_80]
    vmovaps xmm9, [rsp+1F0h+var_70]
    vmovaps xmm8, [rsp+1F0h+var_60]
    vmovaps xmm7, [rsp+1F0h+var_50]
    vmovaps xmm6, [rsp+1F0h+var_40]
  }
  return result;
}

/*
==============
BGMovingPlatformSolver::GenericPenetrationSolver
==============
*/
char BGMovingPlatformSolver::GenericPenetrationSolver(BGMovingPlatformSolver *this, const vec3_t *basePosition)
{
  Physics_WorldId v4; 
  const BgPlayerTraceInfo *v5; 
  const Bounds *m_bound; 
  int DoesPenetractionExceedBounds; 
  int contentMask; 
  playerState_s *ps; 
  BgTrace v35; 
  vec3_t start; 
  vec3_t normal; 
  trace_t results; 

  _RBX = this;
  this->m_transformedOrigin = *basePosition;
  v4 = this->m_bgHandler->GetPhysicsWorldId((BgHandler *)this->m_bgHandler);
  v5 = _RBX->m_bgHandler->GetPlayerTraceInfo(_RBX->m_bgHandler, (unsigned int)_RBX->m_ps->clientNum);
  BgTrace::BgTrace(&v35, v5);
  BgTrace::LegacyTraceHandler(&v35, v4, &results, basePosition, basePosition, _RBX->m_bound, _RBX->m_ps->clientNum, _RBX->m_clipMask, _RBX->m_ps);
  if ( !*(_WORD *)&results.allsolid )
    return 1;
  __asm
  {
    vmovss  xmm0, [rbp+57h+results.closestPointsPenetration]
    vaddss  xmm1, xmm0, cs:__real@3e000000
    vmulss  xmm3, xmm1, dword ptr [rbp+57h+results.normal]
    vmulss  xmm4, xmm1, dword ptr [rbp+57h+results.normal+8]
    vaddss  xmm0, xmm3, dword ptr [rdi]
    vmulss  xmm2, xmm1, dword ptr [rbp+57h+results.normal+4]
  }
  m_bound = _RBX->m_bound;
  __asm
  {
    vmovss  dword ptr [rbp+57h+start], xmm0
    vaddss  xmm0, xmm4, dword ptr [rdi+8]
    vmovss  [rbp+57h+results.closestPointsPenetration], xmm1
    vaddss  xmm1, xmm2, dword ptr [rdi+4]
    vmovss  dword ptr [rbp+57h+start+8], xmm0
    vmovss  dword ptr [rbp+57h+normal], xmm3
    vmovss  dword ptr [rbp+57h+normal+4], xmm2
    vmovss  dword ptr [rbp+57h+normal+8], xmm4
    vmovss  dword ptr [rbp+57h+start+4], xmm1
  }
  DoesPenetractionExceedBounds = BGMovingPlatforms::DoesPenetractionExceedBounds(m_bound, &normal);
  contentMask = _RBX->m_clipMask;
  ps = (playerState_s *)_RBX->m_ps;
  if ( DoesPenetractionExceedBounds )
  {
    BgTrace::LegacyTraceHandler(&v35, v4, &results, basePosition, &start, _RBX->m_bound, _RBX->m_platformId, contentMask & 0xFDFFBFFF, ps);
    if ( !results.allsolid && !results.startsolid )
    {
      __asm
      {
        vmovss  xmm5, [rbp+57h+results.fraction]
        vmovss  xmm0, dword ptr [rbp+57h+start]
        vsubss  xmm1, xmm0, dword ptr [rdi]
        vmulss  xmm1, xmm1, xmm5
        vaddss  xmm0, xmm1, dword ptr [rdi]
        vmovss  xmm1, dword ptr [rbp+57h+start+4]
        vmovss  dword ptr [rbx+0A8h], xmm0
        vsubss  xmm0, xmm1, dword ptr [rdi+4]
        vmulss  xmm2, xmm0, xmm5
        vaddss  xmm3, xmm2, dword ptr [rdi+4]
        vmovss  xmm0, dword ptr [rbp+57h+start+8]
        vsubss  xmm1, xmm0, dword ptr [rdi+8]
        vmulss  xmm2, xmm1, xmm5
        vmovss  dword ptr [rbx+0ACh], xmm3
        vaddss  xmm3, xmm2, dword ptr [rdi+8]
        vmovss  dword ptr [rbx+0B0h], xmm3
      }
      return 1;
    }
  }
  else
  {
    BgTrace::LegacyTraceHandler(&v35, v4, &results, &start, &start, _RBX->m_bound, _RBX->m_ps->clientNum, contentMask, ps);
    if ( !results.allsolid && !results.startsolid )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+57h+start]
        vmovss  xmm1, dword ptr [rbp+57h+start+4]
        vmovss  dword ptr [rbx+0A8h], xmm0
        vmovss  xmm0, dword ptr [rbp+57h+start+8]
        vmovss  dword ptr [rbx+0B0h], xmm0
        vmovss  dword ptr [rbx+0ACh], xmm1
      }
      return 1;
    }
  }
  return 0;
}

/*
==============
BGMovingPlatformSolver::GetLinearPlatformVelcity
==============
*/
void BGMovingPlatformSolver::GetLinearPlatformVelcity(BGMovingPlatformSolver *this, vec3_t *outVel)
{
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+40h]
    vsubss  xmm1, xmm0, dword ptr [rcx+4Ch]
    vmovss  dword ptr [rdx], xmm1
    vmovss  xmm2, dword ptr [rcx+44h]
    vsubss  xmm0, xmm2, dword ptr [rcx+50h]
    vmovss  dword ptr [rdx+4], xmm0
    vmovss  xmm1, dword ptr [rcx+48h]
    vsubss  xmm2, xmm1, dword ptr [rcx+54h]
    vmovss  dword ptr [rdx+8], xmm2
  }
}

/*
==============
BGMovingPlatformSolver::GetPushNormal
==============
*/
void BGMovingPlatformSolver::GetPushNormal(BGMovingPlatformSolver *this, const vec3_t *playerOrigin, const vec3_t *origin, const vec3_t *angles, const vec3_t *vel, vec3_t *outNormal)
{
  _RBX = outNormal;
  *outNormal = *vel;
  BGMovingPlatformSolver::TraceBrushEntityHandlerShared(this, NULL, outNormal, playerOrigin, origin, origin, angles, 1);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+4]
    vmovss  xmm5, dword ptr [rbx]
    vmovss  xmm3, dword ptr [rbx+8]
    vmulss  xmm0, xmm0, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vmovss  xmm1, cs:__real@3f800000
    vsqrtss xmm4, xmm2, xmm2
    vcmpless xmm0, xmm4, cs:__real@80000000
    vblendvps xmm0, xmm4, xmm1, xmm0
    vdivss  xmm2, xmm1, xmm0
    vmulss  xmm0, xmm5, xmm2
    vmovss  dword ptr [rbx], xmm0
    vmulss  xmm1, xmm2, dword ptr [rbx+4]
    vmovss  dword ptr [rbx+4], xmm1
    vmulss  xmm0, xmm2, dword ptr [rbx+8]
    vmovss  dword ptr [rbx+8], xmm0
  }
}

/*
==============
BGMovingPlatformSolver::GetTransformedOrigin
==============
*/
void BGMovingPlatformSolver::GetTransformedOrigin(BGMovingPlatformSolver *this, vec3_t *outOrigin)
{
  *outOrigin = this->m_transformedOrigin;
}

/*
==============
BGMovingPlatformSolver::JitterPoint
==============
*/
__int64 BGMovingPlatformSolver::JitterPoint(BGMovingPlatformSolver *this)
{
  const playerState_s *m_ps; 
  int pm_type; 
  __int64 result; 
  BgHandler *m_bgHandler; 
  BgHandler_vtbl *v8; 
  Physics_WorldId v9; 
  __int64 v10; 
  const playerState_s *v15; 
  const BgHandler *v21; 
  unsigned int passEntityNum; 
  const BgPlayerTraceInfo *v24; 
  Physics_WorldId v25; 
  const playerState_s *ps; 
  unsigned int hitId; 
  const BgPlayerTraceInfo *v31; 
  int v32; 
  __int64 v33; 
  BgTrace v49; 
  vec3_t end; 
  vec3_t vec; 
  trace_t v52; 
  trace_t results; 

  m_ps = this->m_ps;
  _RDI = this;
  if ( !this->m_ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2671, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  pm_type = m_ps->pm_type;
  if ( pm_type == 1 || pm_type == 8 )
    return 0i64;
  if ( _RDI->m_bgHandler->IsClient((BgHandler *)_RDI->m_bgHandler) )
  {
    _RDI->m_failedTraceHitId = BGMovingPlatformSolver::PositionTrace(_RDI, &_RDI->m_transformedOrigin, _RDI->m_ps->clientNum, NULL);
    return 0i64;
  }
  m_bgHandler = (BgHandler *)_RDI->m_bgHandler;
  v8 = m_bgHandler->__vftable;
  __asm
  {
    vmovaps [rsp+190h+var_20], xmm6
    vmovaps [rsp+190h+var_30], xmm7
  }
  v9 = v8->GetPhysicsWorldId(m_bgHandler);
  memset_0(&v52, 0, sizeof(v52));
  v10 = 0i64;
  v52.hitId = 2047;
  if ( g_correctAllSolidDeltasCount )
  {
    __asm
    {
      vmovss  xmm6, cs:__real@3f800000
      vmovss  xmm7, cs:__real@3e800000
    }
    _R15 = CorrectSolidDeltas;
    while ( 1 )
    {
      __asm { vmovss  xmm0, dword ptr [rdi+0A8h] }
      v15 = _RDI->m_ps;
      _RCX = 3 * v10;
      __asm
      {
        vaddss  xmm1, xmm0, dword ptr [r15+rcx*4]
        vmovss  xmm2, dword ptr [r15+rcx*4+4]
        vaddss  xmm0, xmm2, dword ptr [rdi+0ACh]
        vmovss  dword ptr [rsp+190h+end], xmm1
        vmovss  xmm1, dword ptr [r15+rcx*4+8]
      }
      v21 = _RDI->m_bgHandler;
      __asm
      {
        vaddss  xmm2, xmm1, dword ptr [rdi+0B0h]
        vmovss  dword ptr [rsp+190h+end+8], xmm2
        vmovss  dword ptr [rsp+190h+end+4], xmm0
      }
      passEntityNum = v15->clientNum;
      v24 = v21->GetPlayerTraceInfo(v21, passEntityNum);
      BgTrace::BgTrace(&v49, v24);
      v25 = _RDI->m_bgHandler->GetPhysicsWorldId((BgHandler *)_RDI->m_bgHandler);
      ps = _RDI->m_ps;
      v49.m_flags |= 0x40u;
      BgTrace::LegacyTraceHandler(&v49, v25, &results, &end, &end, _RDI->m_bound, passEntityNum, _RDI->m_clipMask, ps);
      hitId = 2047;
      if ( results.startsolid )
        hitId = results.hitId;
      if ( hitId == 2047 )
      {
        __asm { vmovsd  xmm0, qword ptr [rsp+190h+end] }
        vec.v[2] = end.v[2];
        __asm { vmovsd  qword ptr [rbp+90h+vec], xmm0 }
        *(double *)&_XMM0 = WorldUpReferenceFrame::GetUpContribution(&_RDI->m_refFrame, &vec);
        __asm
        {
          vsubss  xmm1, xmm0, xmm6
          vsubss  xmm1, xmm1, xmm7; height
        }
        WorldUpReferenceFrame::SetUpContribution(&_RDI->m_refFrame, *(float *)&_XMM1, &end);
        v31 = _RDI->m_bgHandler->GetPlayerTraceInfo(_RDI->m_bgHandler, (unsigned int)_RDI->m_ps->clientNum);
        BgTrace::BgTrace(&v49, v31);
        BgTrace::LegacyTraceHandler(&v49, v9, &v52, &vec, &end, _RDI->m_bound, _RDI->m_ps->clientNum, _RDI->m_clipMask, _RDI->m_ps);
        if ( !v52.startsolid )
          break;
      }
      v10 = (unsigned int)(v10 + 1);
      if ( (unsigned int)v10 >= g_correctAllSolidDeltasCount )
        goto LABEL_16;
    }
    __asm
    {
      vmovss  xmm5, [rbp+90h+var_100.fraction]
      vmovss  xmm0, dword ptr [rsp+190h+end]
      vsubss  xmm1, xmm0, dword ptr [rbp+90h+vec]
      vmulss  xmm1, xmm1, xmm5
      vaddss  xmm0, xmm1, dword ptr [rbp+90h+vec]
      vmovss  xmm1, dword ptr [rsp+190h+end+4]
      vmovss  dword ptr [rdi+0A8h], xmm0
      vsubss  xmm0, xmm1, dword ptr [rbp+90h+vec+4]
      vmulss  xmm2, xmm0, xmm5
      vaddss  xmm3, xmm2, dword ptr [rbp+90h+vec+4]
      vmovss  xmm0, dword ptr [rsp+190h+end+8]
      vsubss  xmm1, xmm0, dword ptr [rbp+90h+vec+8]
      vmulss  xmm2, xmm1, xmm5
      vmovss  dword ptr [rdi+0ACh], xmm3
      vaddss  xmm3, xmm2, dword ptr [rbp+90h+vec+8]
      vmovss  dword ptr [rdi+0B0h], xmm3
    }
    result = 1i64;
  }
  else
  {
LABEL_16:
    v32 = BGMovingPlatformSolver::PositionTrace(_RDI, &_RDI->m_transformedOrigin, _RDI->m_ps->clientNum, NULL);
    v33 = v52.hitId;
    _RDI->m_failedTraceHitId = v32;
    Com_PrintWarning(17, "Could not solve mover collision, consider handing unresolved_collision notify in script. Character number %d. Entity geo number %d\n", (unsigned int)_RDI->m_ps->clientNum, v33);
    result = 0i64;
  }
  __asm
  {
    vmovaps xmm6, [rsp+190h+var_20]
    vmovaps xmm7, [rsp+190h+var_30]
  }
  return result;
}

/*
==============
BGMovingPlatformSolver::PenetrationTraceBrushEntityHandler
==============
*/
void BGMovingPlatformSolver::PenetrationTraceBrushEntityHandler(BGMovingPlatformSolver *this, const vec3_t *start, const vec3_t *end, const vec3_t *brushOrigin, const vec3_t *brushAngles, vec3_t *outNormal)
{
  BGMovingPlatformSolver::TraceBrushEntityHandlerShared(this, NULL, outNormal, start, end, brushOrigin, brushAngles, 1);
}

/*
==============
BGMovingPlatformSolver::PositionTrace
==============
*/
__int64 BGMovingPlatformSolver::PositionTrace(BGMovingPlatformSolver *this, const vec3_t *pos, int ignorecollisionid, trace_t *trace)
{
  trace_t *v5; 
  const BgHandler *m_bgHandler; 
  const BgPlayerTraceInfo *v9; 
  Physics_WorldId v10; 
  const playerState_s *ps; 
  BgTrace v13; 
  char v14; 

  v5 = (trace_t *)&v14;
  m_bgHandler = this->m_bgHandler;
  if ( trace )
    v5 = trace;
  v9 = m_bgHandler->GetPlayerTraceInfo(m_bgHandler, this->m_ps->clientNum);
  BgTrace::BgTrace(&v13, v9);
  v10 = this->m_bgHandler->GetPhysicsWorldId((BgHandler *)this->m_bgHandler);
  ps = this->m_ps;
  v13.m_flags |= 0x40u;
  BgTrace::LegacyTraceHandler(&v13, v10, v5, pos, pos, this->m_bound, ignorecollisionid, this->m_clipMask, ps);
  if ( v5->startsolid )
    return v5->hitId;
  else
    return 2047i64;
}

/*
==============
BGMovingPlatformSolver::SolveSystem
==============
*/
int BGMovingPlatformSolver::SolveSystem(BGMovingPlatformSolver *this)
{
  const dvar_t *v1; 
  const dvar_t *v3; 
  bool v4; 
  const playerState_s *m_ps; 
  const dvar_t *v6; 
  int result; 
  int m_flags; 
  int v9; 
  vec3_t v11; 

  v1 = DCONST_DVARBOOL_playerCharacterCollisionUseNew;
  _RDI = this;
  if ( !DCONST_DVARBOOL_playerCharacterCollisionUseNew && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerCharacterCollisionUseNew") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.enabled )
    _RDI->m_clipMask &= 0xFDFFBFFF;
  v3 = DVARBOOL_movingPlatformFixClientPushJitter;
  if ( !DVARBOOL_movingPlatformFixClientPushJitter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "movingPlatformFixClientPushJitter") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  v4 = !v3->current.enabled || !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB|0x100) || !_RDI->m_bgHandler->IsClient((BgHandler *)_RDI->m_bgHandler);
  if ( _RDI->m_push )
  {
    m_ps = _RDI->m_ps;
    if ( !_RDI->m_ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2605, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( !BG_IsPlayerZeroG(m_ps) || BG_IsPlayerZeroGWalking(m_ps) )
    {
      if ( _RDI->m_push && v4 )
      {
        m_flags = _RDI->m_flags;
        result = BGMovingPlatformSolver::TransformOriginForPush(_RDI);
        if ( (m_flags & 1) != 0 )
          return result;
        if ( !result )
          return BGMovingPlatformSolver::JitterPoint(_RDI);
        return 1;
      }
    }
    else
    {
      if ( (_RDI->m_flags & 1) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\movingplatforms\\bg_moving_platform_solver.cpp", 750, ASSERT_TYPE_ASSERT, "((m_flags & MSF_OPTIMIZED) == 0)", (const char *)&queryFormat, "(m_flags & MSF_OPTIMIZED) == 0") )
        __debugbreak();
      v6 = DCONST_DVARMPBOOL_antilagZeroG;
      if ( !DCONST_DVARMPBOOL_antilagZeroG && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "antilagZeroG") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v6);
      if ( v6->current.enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\movingplatforms\\bg_moving_platform_solver.cpp", 756, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Zero G. should never enter moving platform solver with a push.") )
        __debugbreak();
      if ( !BGMovingPlatformSolver::TransformOriginZeroG(_RDI) )
        return BGMovingPlatformSolver::JitterPoint(_RDI);
    }
  }
  v9 = _RDI->m_flags;
  result = BGMovingPlatformSolver::TransformOriginDefault(_RDI);
  if ( (v9 & 1) != 0 )
    return result;
  if ( !result )
  {
    if ( !BGMovingPlatformPS::UseRockingMoverWallFix2() )
      return BGMovingPlatformSolver::JitterPoint(_RDI);
    __asm { vmovsd  xmm0, qword ptr [rdi+0A8h] }
    v11.v[2] = _RDI->m_transformedOrigin.v[2];
    __asm { vmovsd  [rsp+68h+var_28], xmm0 }
    if ( !BGMovingPlatformSolver::GenericPenetrationSolver(_RDI, &v11) )
      return BGMovingPlatformSolver::JitterPoint(_RDI);
  }
  return 1;
}

/*
==============
BGMovingPlatformSolver::TraceBrushEntityHandler
==============
*/
void BGMovingPlatformSolver::TraceBrushEntityHandler(BGMovingPlatformSolver *this, trace_t *results, const vec3_t *start, const vec3_t *end, const vec3_t *brushOrigin, const vec3_t *brushAngles)
{
  BGMovingPlatformSolver::TraceBrushEntityHandlerShared(this, results, NULL, start, end, brushOrigin, brushAngles, 0);
}

/*
==============
BGMovingPlatformSolver::TraceBrushEntityHandlerShared
==============
*/
void BGMovingPlatformSolver::TraceBrushEntityHandlerShared(BGMovingPlatformSolver *this, trace_t *results, vec3_t *outNormal, const vec3_t *start, const vec3_t *end, const vec3_t *brushOrigin, const vec3_t *brushAngles, int penetration)
{
  hkMonitorStream *Value; 
  hkMonitorStream *v12; 
  __int64 v13; 
  unsigned int physicsInstanceId; 
  unsigned int m_platformId; 
  const BgHandler *m_bgHandler; 
  vec3_t position; 
  vec4_t quat; 
  vec3_t angles; 

  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v12 = Value;
  if ( penetration )
  {
    if ( Value )
      hkMonitorStream::timerBegin(Value, "TtPM_PenetrationTraceBrushEntityHandler");
    if ( !outNormal && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\movingplatforms\\bg_moving_platform_solver.cpp", 69, ASSERT_TYPE_ASSERT, "(outNormal)", (const char *)&queryFormat, "outNormal") )
      __debugbreak();
    if ( v12 )
      hkMonitorStream::timerEnd(v12, "Et");
  }
  else
  {
    if ( Value )
      hkMonitorStream::timerBegin(Value, "TtPM_TraceBrushEntityHandler");
    if ( !results && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\movingplatforms\\bg_moving_platform_solver.cpp", 74, ASSERT_TYPE_ASSERT, "(results)", (const char *)&queryFormat, "results") )
      __debugbreak();
    if ( v12 )
      hkMonitorStream::timerEnd(v12, "Et");
  }
  v13 = this->m_bgHandler->GetPhysicsWorldId((BgHandler *)this->m_bgHandler);
  physicsInstanceId = *(_DWORD *)((__int64)this->m_bgHandler->GetPhysicsObject((BgHandler *)this->m_bgHandler, this->m_platformId, this->m_localClientNum) + 4 * v13 + 4);
  m_platformId = this->m_platformId;
  m_bgHandler = this->m_bgHandler;
  m_bgHandler->IsClient((BgHandler *)m_bgHandler);
  m_bgHandler->GetEntityOrigin((BgHandler *)m_bgHandler, m_platformId, &position);
  this->m_bgHandler->GetEntityAngles((BgHandler *)this->m_bgHandler, this->m_platformId, &angles);
  if ( physicsInstanceId != -1 )
  {
    AnglesToQuat(brushAngles, &quat);
    Physics_WarpInstanceTo((Physics_WorldId)v13, physicsInstanceId, brushOrigin, &quat, 1);
  }
  if ( penetration )
    PhysicsQuery_LegacyPenetrationBrushEntityTrace((Physics_WorldId)v13, outNormal, start, end, this->m_bound, this->m_clipMask, physicsInstanceId, this->m_ps, this->m_platformBrushId, brushOrigin, brushAngles);
  else
    PhysicsQuery_LegacyCapsuleBrushEntityTrace((Physics_WorldId)v13, results, start, end, this->m_bound, this->m_clipMask, physicsInstanceId, this->m_platformBrushId, brushOrigin, brushAngles, this->m_ps);
  if ( physicsInstanceId != -1 )
  {
    AnglesToQuat(&angles, &quat);
    Physics_WarpInstanceTo((Physics_WorldId)v13, physicsInstanceId, &position, &quat, 1);
  }
}

/*
==============
BGMovingPlatformSolver::TransformOriginDefault
==============
*/
int BGMovingPlatformSolver::TransformOriginDefault(BGMovingPlatformSolver *this)
{
  const dvar_t *v8; 
  bool v9; 
  int result; 
  vec3_t v12; 
  tmat43_t<vec3_t> axis; 
  vec3_t in1; 
  tmat43_t<vec3_t> out; 

  _RBX = this;
  AnglesToAxis(&this->m_platformOldAngles, (tmat33_t<vec3_t> *)&axis);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+4Ch]
    vmovss  xmm1, dword ptr [rbx+50h]
    vmovss  [rsp+0D8h+var_64], xmm0
    vmovss  xmm0, dword ptr [rbx+54h]
    vmovss  [rsp+0D8h+var_5C], xmm0
    vmovss  [rsp+0D8h+var_60], xmm1
  }
  MatrixInverseOrthogonal43(&axis, &out);
  MatrixTransformVector43(&_RBX->m_playerCurrentOrigin, &out, &in1);
  AnglesToAxis(&_RBX->m_platformAngles, (tmat33_t<vec3_t> *)&axis);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+40h]
    vmovss  xmm1, dword ptr [rbx+44h]
    vmovss  [rsp+0D8h+var_64], xmm0
    vmovss  xmm0, dword ptr [rbx+48h]
    vmovss  [rsp+0D8h+var_5C], xmm0
    vmovss  [rsp+0D8h+var_60], xmm1
  }
  MatrixTransformVector43(&in1, &axis, &_RBX->m_transformedOrigin);
  if ( BG_IsPlayerZeroG(_RBX->m_ps) )
    return 1;
  v8 = DVARBOOL_movingPlatformFixClientPushJitter;
  if ( !DVARBOOL_movingPlatformFixClientPushJitter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "movingPlatformFixClientPushJitter") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  v9 = v8->current.enabled && Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB|0x100);
  if ( _RBX->m_bgHandler->IsClient((BgHandler *)_RBX->m_bgHandler) && !v9 )
    return 1;
  if ( (_RBX->m_flags & 1) != 0 )
  {
    __asm { vmovsd  xmm0, qword ptr [rbx+0A8h] }
    v12.v[2] = _RBX->m_transformedOrigin.v[2];
    __asm { vmovsd  [rsp+0D8h+var_98], xmm0 }
    return BGMovingPlatformSolver::GenericPenetrationSolver(_RBX, &v12);
  }
  if ( !BGMovingPlatformClient::NeedToResolveCollision((BGMovingPlatformClient *)_RBX->m_movingPlatforms, _RBX->m_ps) )
    return 1;
  if ( BGMovingPlatformSolver::GenerateProposedHeight(_RBX, &_RBX->m_transformedOrigin, &_RBX->m_transformedOrigin, _RBX->m_ps->clientNum, NULL) )
    return 1;
  result = BGMovingPlatformSolver::FixPosition(_RBX, &_RBX->m_transformedOrigin);
  if ( result )
    return 1;
  return result;
}

/*
==============
BGMovingPlatformSolver::TransformOriginForPush
==============
*/
_BOOL8 BGMovingPlatformSolver::TransformOriginForPush(BGMovingPlatformSolver *this)
{
  const dvar_t *v7; 
  bool v9; 
  const vec3_t *brushAngles; 
  bool v71; 
  int v155; 
  int v156; 
  int v157; 
  int v158; 
  int v159; 
  int v160; 
  int v161; 
  int v162; 
  int v163; 
  int v164; 
  int v165; 
  int v166; 
  int v167; 
  int v168; 
  int v169; 
  int v170; 
  int v171; 
  int v172; 
  int v173; 
  int v174; 
  int v175; 
  int v176; 
  int v177; 
  int v178; 
  vec3_t vec; 
  vec3_t v180; 
  vec3_t v181; 
  vec3_t start; 
  vec3_t end; 
  vec3_t v184; 
  tmat43_t<vec3_t> axis; 
  tmat43_t<vec3_t> out; 
  trace_t results; 

  v7 = DCONST_DVARMPBOOL_movingPlatformUseNewPenetrationSolver;
  _RBX = this;
  if ( !DCONST_DVARMPBOOL_movingPlatformUseNewPenetrationSolver && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "movingPlatformUseNewPenetrationSolver") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  v9 = !v7->current.enabled;
  if ( v7->current.enabled )
  {
    __asm { vmovsd  xmm0, qword ptr [rbx+70h] }
    v184.v[2] = _RBX->m_playerCurrentOrigin.v[2];
    __asm { vmovsd  qword ptr [rbp+100h+var_160], xmm0 }
    return BGMovingPlatformSolver::GenericPenetrationSolver(_RBX, &v184);
  }
  else
  {
    brushAngles = &_RBX->m_platformOldAngles;
    __asm
    {
      vmovss  xmm0, dword ptr [r15]
      vsubss  xmm3, xmm0, dword ptr [r12]
      vmovss  xmm1, dword ptr [r15+4]
      vmovss  xmm0, dword ptr [r15+8]
      vsubss  xmm2, xmm1, dword ptr [r12+4]
      vsubss  xmm4, xmm0, dword ptr [r12+8]
      vmulss  xmm0, xmm4, xmm4
      vmovaps [rsp+200h+var_30], xmm6
      vmovaps [rsp+200h+var_70], xmm10
      vmovss  xmm10, cs:__real@3f800000
      vmulss  xmm2, xmm2, xmm2
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm3, xmm2, xmm1
      vaddss  xmm5, xmm3, xmm0
      vcomiss xmm5, cs:__real@358637be
      vmovss  xmm0, dword ptr [rbx+70h]
      vmovaps [rsp+200h+var_80], xmm11
      vmovss  xmm11, cs:__real@80000000
    }
    if ( v9 )
    {
      __asm
      {
        vmovss  xmm1, dword ptr [rbx+74h]
        vmovss  xmm2, dword ptr [rbx+78h]
        vmovss  [rsp+200h+var_1C0], xmm0
        vmovss  dword ptr [rsp+200h+var_1A8], xmm0
        vmovss  dword ptr [rsp+200h+var_1A8+4], xmm1
        vmovss  dword ptr [rsp+200h+var_1A8+8], xmm2
      }
      if ( (v167 & 0x7F800000) == 2139095040 )
        goto LABEL_62;
      __asm { vmovss  [rsp+200h+var_1C0], xmm1 }
      if ( (v168 & 0x7F800000) == 2139095040 )
        goto LABEL_62;
      __asm { vmovss  [rsp+200h+var_1C0], xmm2 }
      if ( (v169 & 0x7F800000) == 2139095040 )
      {
LABEL_62:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\movingplatforms\\bg_moving_platform_solver.cpp", 495, ASSERT_TYPE_SANITY, "( !IS_NAN( ( oldPosNewAngles )[0] ) && !IS_NAN( ( oldPosNewAngles )[1] ) && !IS_NAN( ( oldPosNewAngles )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( oldPosNewAngles )[0] ) && !IS_NAN( ( oldPosNewAngles )[1] ) && !IS_NAN( ( oldPosNewAngles )[2] )") )
          __debugbreak();
      }
    }
    else
    {
      __asm { vmovss  xmm2, dword ptr [rbx+74h] }
      _R14 = &_RBX->m_platformOldOrigin;
      __asm
      {
        vsubss  xmm1, xmm0, dword ptr [r14]
        vsubss  xmm0, xmm2, dword ptr [r14+4]
        vmovss  dword ptr [rsp+200h+vec], xmm1
        vmovss  xmm1, dword ptr [rbx+78h]
        vsubss  xmm2, xmm1, dword ptr [r14+8]
        vxorps  xmm1, xmm1, xmm1; height
        vmovss  dword ptr [rsp+200h+vec+8], xmm2
        vmovss  dword ptr [rsp+200h+vec+4], xmm0
      }
      WorldUpReferenceFrame::SetUpContribution(&_RBX->m_refFrame, *(float *)&_XMM1, &vec);
      __asm
      {
        vmovss  xmm6, dword ptr [rsp+200h+vec]
        vmovss  [rsp+200h+var_1C0], xmm6
      }
      if ( (v155 & 0x7F800000) == 2139095040 )
        goto LABEL_63;
      __asm
      {
        vmovss  xmm5, dword ptr [rsp+200h+vec+4]
        vmovss  [rsp+200h+var_1C0], xmm5
      }
      if ( (v156 & 0x7F800000) == 2139095040 )
        goto LABEL_63;
      __asm
      {
        vmovss  xmm4, dword ptr [rsp+200h+vec+8]
        vmovss  [rsp+200h+var_1C0], xmm4
      }
      if ( (v157 & 0x7F800000) == 2139095040 )
      {
LABEL_63:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\movingplatforms\\bg_moving_platform_solver.cpp", 453, ASSERT_TYPE_SANITY, "( !IS_NAN( ( normal )[0] ) && !IS_NAN( ( normal )[1] ) && !IS_NAN( ( normal )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( normal )[0] ) && !IS_NAN( ( normal )[1] ) && !IS_NAN( ( normal )[2] )") )
          __debugbreak();
        __asm
        {
          vmovss  xmm6, dword ptr [rsp+200h+vec]
          vmovss  xmm5, dword ptr [rsp+200h+vec+4]
          vmovss  xmm4, dword ptr [rsp+200h+vec+8]
        }
      }
      __asm
      {
        vaddss  xmm1, xmm5, dword ptr [rbx+74h]
        vaddss  xmm0, xmm6, dword ptr [rbx+70h]
        vmovss  dword ptr [rsp+200h+start], xmm0
        vaddss  xmm0, xmm4, dword ptr [rbx+78h]
        vmovss  dword ptr [rbp+100h+start+8], xmm0
        vmovss  dword ptr [rsp+200h+start+4], xmm1
        vmulss  xmm2, xmm5, xmm5
        vmulss  xmm0, xmm4, xmm4
        vmulss  xmm1, xmm6, xmm6
        vaddss  xmm3, xmm2, xmm1
        vaddss  xmm2, xmm3, xmm0
        vsqrtss xmm1, xmm2, xmm2
        vcmpless xmm0, xmm1, xmm11
        vblendvps xmm0, xmm1, xmm10, xmm0
        vdivss  xmm1, xmm10, xmm0
        vmulss  xmm0, xmm6, xmm1
        vmulss  xmm2, xmm5, xmm1
        vmovss  [rsp+200h+var_1C0], xmm0
        vmulss  xmm5, xmm4, xmm1
        vmovss  dword ptr [rsp+200h+vec], xmm0
        vmovss  dword ptr [rsp+200h+vec+4], xmm2
        vmovss  dword ptr [rsp+200h+vec+8], xmm5
      }
      if ( (v158 & 0x7F800000) == 2139095040 )
        goto LABEL_64;
      __asm { vmovss  [rsp+200h+var_1C0], xmm2 }
      if ( (v159 & 0x7F800000) == 2139095040 )
        goto LABEL_64;
      __asm { vmovss  [rsp+200h+var_1C0], xmm5 }
      if ( (v160 & 0x7F800000) == 2139095040 )
      {
LABEL_64:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\movingplatforms\\bg_moving_platform_solver.cpp", 458, ASSERT_TYPE_SANITY, "( !IS_NAN( ( normal )[0] ) && !IS_NAN( ( normal )[1] ) && !IS_NAN( ( normal )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( normal )[0] ) && !IS_NAN( ( normal )[1] ) && !IS_NAN( ( normal )[2] )") )
          __debugbreak();
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+200h+vec]
          vmovss  xmm2, dword ptr [rsp+200h+vec+4]
          vmovss  xmm5, dword ptr [rsp+200h+vec+8]
        }
      }
      __asm
      {
        vmovss  xmm3, cs:__real@41a00000
        vmulss  xmm1, xmm0, xmm3
        vmovss  xmm0, dword ptr [rbx+70h]
        vsubss  xmm1, xmm0, xmm1
        vmovss  xmm0, dword ptr [rbx+74h]
        vmulss  xmm2, xmm2, xmm3
        vmovss  dword ptr [rbp+100h+end], xmm1
        vsubss  xmm1, xmm0, xmm2
        vmovss  xmm0, dword ptr [rbx+78h]
        vmulss  xmm3, xmm5, xmm3
        vmovss  dword ptr [rbp+100h+end+4], xmm1
        vsubss  xmm1, xmm0, xmm3
        vmovss  dword ptr [rbp+100h+end+8], xmm1
      }
      *(double *)&_XMM0 = WorldUpReferenceFrame::GetUpContribution(&_RBX->m_refFrame, &_RBX->m_playerCurrentOrigin);
      __asm { vmovaps xmm1, xmm0; height }
      WorldUpReferenceFrame::SetUpContribution(&_RBX->m_refFrame, *(float *)&_XMM1, &start);
      *(double *)&_XMM0 = WorldUpReferenceFrame::GetUpContribution(&_RBX->m_refFrame, &start);
      __asm { vmovaps xmm1, xmm0; height }
      WorldUpReferenceFrame::SetUpContribution(&_RBX->m_refFrame, *(float *)&_XMM1, &end);
      BGMovingPlatformSolver::TraceBrushEntityHandlerShared(_RBX, &results, NULL, &start, &end, &_RBX->m_platformOldOrigin, &_RBX->m_platformAngles, 0);
      if ( !results.allsolid )
      {
        __asm
        {
          vmovss  xmm6, [rbp+100h+results.fraction]
          vcomiss xmm6, xmm10
        }
      }
      __asm
      {
        vmovaps [rsp+200h+var_40], xmm7
        vmovaps [rsp+200h+var_50], xmm8
        vmovaps [rsp+200h+var_60], xmm9
      }
      AnglesToAxis(&_RBX->m_platformOldAngles, (tmat33_t<vec3_t> *)&axis);
      __asm
      {
        vmovss  xmm0, dword ptr [r14]
        vmovss  xmm1, dword ptr [r14+4]
        vmovss  [rbp+100h+var_12C], xmm0
        vmovss  xmm0, dword ptr [r14+8]
        vmovss  [rbp+100h+var_124], xmm0
        vmovss  [rbp+100h+var_128], xmm1
      }
      MatrixInverseOrthogonal43(&axis, &out);
      MatrixTransformVector43(&_RBX->m_playerCurrentOrigin, &out, &v184);
      AnglesToAxis(&_RBX->m_platformAngles, (tmat33_t<vec3_t> *)&axis);
      __asm
      {
        vmovss  xmm7, dword ptr [rbp+100h+var_160]
        vmovss  xmm6, dword ptr [rbp+100h+var_160+4]
        vmulss  xmm2, xmm7, dword ptr [rbp+100h+axis]
        vmovss  xmm5, dword ptr [rbp+100h+var_160+8]
        vmulss  xmm3, xmm7, dword ptr [rbp+100h+axis+4]
        vmulss  xmm1, xmm5, dword ptr [rbp+100h+axis+18h]
        vmulss  xmm0, xmm6, dword ptr [rbp+100h+axis+0Ch]
        vaddss  xmm2, xmm2, xmm0
        vaddss  xmm9, xmm2, xmm1
        vmulss  xmm2, xmm6, dword ptr [rbp+100h+axis+10h]
        vmulss  xmm1, xmm5, dword ptr [rbp+100h+axis+1Ch]
        vaddss  xmm4, xmm3, xmm2
        vmulss  xmm3, xmm7, dword ptr [rbp+100h+axis+8]
        vmulss  xmm2, xmm6, dword ptr [rbp+100h+axis+14h]
        vmovaps xmm7, [rsp+200h+var_40]
        vaddss  xmm8, xmm4, xmm1
        vmulss  xmm1, xmm5, dword ptr [rbp+100h+axis+20h]
        vmovss  [rsp+200h+var_1C0], xmm9
        vaddss  xmm4, xmm3, xmm2
        vaddss  xmm2, xmm4, xmm1
        vmovss  dword ptr [rsp+200h+var_1A8+8], xmm2
        vmovss  dword ptr [rsp+200h+var_1A8], xmm9
        vmovss  dword ptr [rsp+200h+var_1A8+4], xmm8
      }
      if ( (v164 & 0x7F800000) == 2139095040 )
        goto LABEL_65;
      __asm { vmovss  [rsp+200h+var_1C0], xmm8 }
      if ( (v165 & 0x7F800000) == 2139095040 )
        goto LABEL_65;
      __asm { vmovss  [rsp+200h+var_1C0], xmm2 }
      if ( (v166 & 0x7F800000) == 2139095040 )
      {
LABEL_65:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\movingplatforms\\bg_moving_platform_solver.cpp", 488, ASSERT_TYPE_SANITY, "( !IS_NAN( ( oldPosNewAngles )[0] ) && !IS_NAN( ( oldPosNewAngles )[1] ) && !IS_NAN( ( oldPosNewAngles )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( oldPosNewAngles )[0] ) && !IS_NAN( ( oldPosNewAngles )[1] ) && !IS_NAN( ( oldPosNewAngles )[2] )") )
          __debugbreak();
        __asm
        {
          vmovss  xmm9, dword ptr [rsp+200h+var_1A8]
          vmovss  xmm8, dword ptr [rsp+200h+var_1A8+4]
          vmovss  xmm2, dword ptr [rsp+200h+var_1A8+8]
        }
      }
      __asm
      {
        vaddss  xmm0, xmm9, dword ptr [r14]
        vaddss  xmm1, xmm8, dword ptr [r14+4]
        vmovaps xmm9, [rsp+200h+var_60]
        vmovaps xmm8, [rsp+200h+var_50]
        vmovss  dword ptr [rsp+200h+var_1A8], xmm0
        vaddss  xmm0, xmm2, dword ptr [r14+8]
        vmovss  dword ptr [rsp+200h+var_1A8+8], xmm0
        vmovss  dword ptr [rsp+200h+var_1A8+4], xmm1
      }
      brushAngles = &_RBX->m_platformOldAngles;
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+40h]
      vmovss  xmm1, dword ptr [rbx+44h]
      vsubss  xmm2, xmm0, dword ptr [r14]
      vsubss  xmm3, xmm1, dword ptr [r14+4]
      vmovss  xmm0, dword ptr [rbx+48h]
      vsubss  xmm1, xmm0, dword ptr [r14+8]
      vmovss  [rsp+200h+var_1C0], xmm2
      vmovss  dword ptr [rsp+200h+var_198], xmm2
      vmovss  dword ptr [rsp+200h+var_198+4], xmm3
      vmovss  dword ptr [rsp+200h+var_198+8], xmm1
    }
    if ( (v161 & 0x7F800000) == 2139095040 )
      goto LABEL_66;
    __asm { vmovss  [rsp+200h+var_1C0], xmm3 }
    if ( (v162 & 0x7F800000) == 2139095040 )
      goto LABEL_66;
    __asm { vmovss  [rsp+200h+var_1C0], xmm1 }
    if ( (v163 & 0x7F800000) == 2139095040 )
    {
LABEL_66:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\movingplatforms\\bg_moving_platform_solver.cpp", 501, ASSERT_TYPE_SANITY, "( !IS_NAN( ( vel )[0] ) && !IS_NAN( ( vel )[1] ) && !IS_NAN( ( vel )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( vel )[0] ) && !IS_NAN( ( vel )[1] ) && !IS_NAN( ( vel )[2] )") )
        __debugbreak();
    }
    v71 = _RBX->m_bgHandler->IsClient((BgHandler *)_RBX->m_bgHandler);
    __asm { vmovsd  xmm0, qword ptr [rsp+200h+var_198] }
    vec.v[2] = v181.v[2];
    __asm { vmovsd  qword ptr [rsp+200h+vec], xmm0 }
    if ( v71 )
      BGMovingPlatformSolver::TraceBrushEntityHandlerShared(_RBX, NULL, &vec, &_RBX->m_playerCurrentOrigin, &_RBX->m_platformOldOrigin, &_RBX->m_platformOldOrigin, brushAngles, 1);
    else
      BGMovingPlatformSolver::TraceBrushEntityHandlerShared(_RBX, NULL, &vec, &v180, &_RBX->m_platformOldOrigin, &_RBX->m_platformOldOrigin, &_RBX->m_platformAngles, 1);
    __asm
    {
      vmovss  xmm4, dword ptr [rsp+200h+vec]
      vmovss  xmm6, dword ptr [rsp+200h+vec+4]
      vmovss  xmm5, dword ptr [rsp+200h+vec+8]
      vmulss  xmm0, xmm4, xmm4
      vmulss  xmm1, xmm6, xmm6
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm5, xmm5
      vaddss  xmm0, xmm2, xmm1
      vsqrtss xmm3, xmm0, xmm0
      vcmpless xmm0, xmm3, xmm11
      vblendvps xmm0, xmm3, xmm10, xmm0
      vdivss  xmm1, xmm10, xmm0
      vmulss  xmm2, xmm4, xmm1
      vmovss  [rsp+200h+var_1C0], xmm2
      vmulss  xmm3, xmm5, xmm1
      vmulss  xmm0, xmm6, xmm1
      vmovss  dword ptr [rsp+200h+vec+8], xmm3
      vmovss  dword ptr [rsp+200h+vec+4], xmm0
      vmovss  dword ptr [rsp+200h+vec], xmm2
    }
    if ( (v170 & 0x7F800000) == 2139095040 )
      goto LABEL_67;
    __asm { vmovss  [rsp+200h+var_1C0], xmm0 }
    if ( (v171 & 0x7F800000) == 2139095040 )
      goto LABEL_67;
    __asm { vmovss  [rsp+200h+var_1C0], xmm3 }
    if ( (v172 & 0x7F800000) == 2139095040 )
    {
LABEL_67:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\movingplatforms\\bg_moving_platform_solver.cpp", 512, ASSERT_TYPE_SANITY, "( !IS_NAN( ( normal )[0] ) && !IS_NAN( ( normal )[1] ) && !IS_NAN( ( normal )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( normal )[0] ) && !IS_NAN( ( normal )[1] ) && !IS_NAN( ( normal )[2] )") )
        __debugbreak();
    }
    __asm { vxorps  xmm1, xmm1, xmm1; height }
    WorldUpReferenceFrame::SetUpContribution(&_RBX->m_refFrame, *(float *)&_XMM1, &vec);
    __asm
    {
      vmovss  xmm6, dword ptr [rsp+200h+vec]
      vmovss  [rsp+200h+var_1C0], xmm6
    }
    if ( (v173 & 0x7F800000) == 2139095040 )
      goto LABEL_68;
    __asm
    {
      vmovss  xmm4, dword ptr [rsp+200h+vec+4]
      vmovss  [rsp+200h+var_1C0], xmm4
    }
    if ( (v174 & 0x7F800000) == 2139095040 )
      goto LABEL_68;
    __asm
    {
      vmovss  xmm5, dword ptr [rsp+200h+vec+8]
      vmovss  [rsp+200h+var_1C0], xmm5
    }
    if ( (v175 & 0x7F800000) == 2139095040 )
    {
LABEL_68:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\movingplatforms\\bg_moving_platform_solver.cpp", 516, ASSERT_TYPE_SANITY, "( !IS_NAN( ( normal )[0] ) && !IS_NAN( ( normal )[1] ) && !IS_NAN( ( normal )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( normal )[0] ) && !IS_NAN( ( normal )[1] ) && !IS_NAN( ( normal )[2] )") )
        __debugbreak();
      __asm
      {
        vmovss  xmm6, dword ptr [rsp+200h+vec]
        vmovss  xmm4, dword ptr [rsp+200h+vec+4]
        vmovss  xmm5, dword ptr [rsp+200h+vec+8]
      }
    }
    __asm
    {
      vmulss  xmm0, xmm6, xmm6
      vmulss  xmm1, xmm4, xmm4
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm5, xmm5
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm3, xmm2, xmm2
      vcmpless xmm0, xmm3, xmm11
      vblendvps xmm0, xmm3, xmm10, xmm0
      vdivss  xmm3, xmm10, xmm0
      vmulss  xmm0, xmm6, xmm3
      vmovss  dword ptr [rsp+200h+vec], xmm0
      vmulss  xmm0, xmm5, xmm3
      vmulss  xmm2, xmm4, xmm3
      vxorps  xmm1, xmm1, xmm1; height
      vmovss  dword ptr [rsp+200h+vec+8], xmm0
      vmovss  dword ptr [rsp+200h+vec+4], xmm2
    }
    WorldUpReferenceFrame::SetUpContribution(&_RBX->m_refFrame, *(float *)&_XMM1, &v181);
    __asm
    {
      vmovss  xmm3, dword ptr [rsp+200h+vec]
      vmovss  xmm6, dword ptr [rsp+200h+vec+4]
      vmulss  xmm0, xmm3, dword ptr [rsp+200h+var_198]
      vmulss  xmm1, xmm6, dword ptr [rsp+200h+var_198+4]
      vmovss  xmm5, dword ptr [rsp+200h+vec+8]
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm5, dword ptr [rsp+200h+var_198+8]
      vaddss  xmm4, xmm2, xmm1
      vmulss  xmm0, xmm3, xmm4
      vaddss  xmm2, xmm0, dword ptr [rsp+200h+var_1A8]
      vmulss  xmm1, xmm6, xmm4
      vaddss  xmm0, xmm1, dword ptr [rsp+200h+var_1A8+4]
      vmovss  dword ptr [rbx+0A8h], xmm2
      vmulss  xmm2, xmm5, xmm4
      vaddss  xmm1, xmm2, dword ptr [rsp+200h+var_1A8+8]
      vmovss  dword ptr [rbx+0B0h], xmm1
      vmovss  dword ptr [rbx+0ACh], xmm0
    }
    *(double *)&_XMM0 = WorldUpReferenceFrame::GetUpContribution(&_RBX->m_refFrame, &v180);
    __asm { vmovaps xmm1, xmm0; height }
    WorldUpReferenceFrame::SetUpContribution(&_RBX->m_refFrame, *(float *)&_XMM1, &_RBX->m_transformedOrigin);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+0A8h]
      vmovaps xmm11, [rsp+200h+var_80]
      vmovaps xmm10, [rsp+200h+var_70]
      vmovaps xmm6, [rsp+200h+var_30]
      vmovss  [rsp+200h+var_1C0], xmm0
    }
    if ( (v176 & 0x7F800000) == 2139095040 )
      goto LABEL_69;
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+0ACh]
      vmovss  [rsp+200h+var_1C0], xmm0
    }
    if ( (v177 & 0x7F800000) == 2139095040 )
      goto LABEL_69;
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+0B0h]
      vmovss  [rsp+200h+var_1C0], xmm0
    }
    if ( (v178 & 0x7F800000) == 2139095040 )
    {
LABEL_69:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\movingplatforms\\bg_moving_platform_solver.cpp", 524, ASSERT_TYPE_SANITY, "( !IS_NAN( ( m_transformedOrigin )[0] ) && !IS_NAN( ( m_transformedOrigin )[1] ) && !IS_NAN( ( m_transformedOrigin )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( m_transformedOrigin )[0] ) && !IS_NAN( ( m_transformedOrigin )[1] ) && !IS_NAN( ( m_transformedOrigin )[2] )") )
        __debugbreak();
    }
    if ( BGMovingPlatformSolver::FixPosition(_RBX, &_RBX->m_transformedOrigin) )
    {
      return 1i64;
    }
    else
    {
      _RBX->m_transformedOrigin.v[0] = _RBX->m_playerCurrentOrigin.v[0];
      _RBX->m_transformedOrigin.v[1] = _RBX->m_playerCurrentOrigin.v[1];
      _RBX->m_transformedOrigin.v[2] = _RBX->m_playerCurrentOrigin.v[2];
      return 0i64;
    }
  }
}

/*
==============
BGMovingPlatformSolver::TransformOriginForPushNew
==============
*/
bool BGMovingPlatformSolver::TransformOriginForPushNew(BGMovingPlatformSolver *this)
{
  float v2; 
  vec3_t v4; 

  __asm { vmovsd  xmm0, qword ptr [rcx+70h] }
  v2 = this->m_playerCurrentOrigin.v[2];
  __asm { vmovsd  [rsp+38h+var_18], xmm0 }
  v4.v[2] = v2;
  return BGMovingPlatformSolver::GenericPenetrationSolver(this, &v4);
}

/*
==============
BGMovingPlatformSolver::TransformOriginZeroG
==============
*/
__int64 BGMovingPlatformSolver::TransformOriginZeroG(BGMovingPlatformSolver *this)
{
  bool v9; 
  bool v57; 
  __int64 result; 
  vec3_t outPenetration; 
  tmat43_t<vec3_t> axis; 
  tmat43_t<vec3_t> out; 
  char vars0; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovss  xmm0, dword ptr [rcx+64h]
    vmovss  xmm1, dword ptr [rcx+68h]
  }
  _RBX = this;
  v9 = __CFADD__(this, 100i64) || &this->m_platformOldAngles == NULL;
  _RCX = &this->m_platformOldAngles;
  __asm
  {
    vsubss  xmm3, xmm0, dword ptr [rsi]
    vsubss  xmm2, xmm1, dword ptr [rsi+4]
    vmovss  xmm0, dword ptr [rcx+8]
    vsubss  xmm4, xmm0, dword ptr [rsi+8]
    vmulss  xmm2, xmm2, xmm2
    vmulss  xmm1, xmm3, xmm3
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm2, xmm3, xmm0
    vcomiss xmm2, cs:__real@358637be
  }
  if ( v9 )
  {
    __asm
    {
      vmovss  xmm8, dword ptr [rbx+70h]
      vmovss  xmm9, dword ptr [rbx+74h]
      vmovss  xmm7, dword ptr [rbx+78h]
    }
  }
  else
  {
    AnglesToAxis(_RCX, (tmat33_t<vec3_t> *)&axis);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+4Ch]
      vmovss  xmm1, dword ptr [rbx+50h]
      vmovss  [rbp+20h+var_8C], xmm0
      vmovss  xmm0, dword ptr [rbx+54h]
      vmovss  [rbp+20h+var_84], xmm0
      vmovss  [rbp+20h+var_88], xmm1
    }
    MatrixInverseOrthogonal43(&axis, &out);
    MatrixTransformVector43(&_RBX->m_playerCurrentOrigin, &out, &outPenetration);
    AnglesToAxis(&_RBX->m_platformAngles, (tmat33_t<vec3_t> *)&axis);
    __asm
    {
      vmovss  xmm7, dword ptr [rsp+120h+var_C0]
      vmovss  xmm6, dword ptr [rsp+120h+var_C0+4]
      vmovss  xmm5, dword ptr [rsp+120h+var_C0+8]
      vmulss  xmm3, xmm7, dword ptr [rsp+120h+axis+4]
      vmulss  xmm2, xmm7, dword ptr [rsp+120h+axis]
      vmulss  xmm0, xmm6, dword ptr [rsp+120h+axis+0Ch]
      vmulss  xmm1, xmm5, dword ptr [rbp+20h+axis+18h]
      vaddss  xmm2, xmm2, xmm0
      vaddss  xmm0, xmm2, xmm1
      vmulss  xmm1, xmm6, dword ptr [rbp+20h+axis+10h]
      vaddss  xmm8, xmm0, dword ptr [rbx+4Ch]
      vmulss  xmm0, xmm5, dword ptr [rbp+20h+axis+1Ch]
      vaddss  xmm4, xmm3, xmm1
      vmulss  xmm3, xmm7, dword ptr [rsp+120h+axis+8]
      vaddss  xmm1, xmm4, xmm0
      vaddss  xmm9, xmm1, dword ptr [rbx+50h]
      vmulss  xmm1, xmm6, dword ptr [rbp+20h+axis+14h]
      vmulss  xmm0, xmm5, dword ptr [rbp+20h+axis+20h]
      vaddss  xmm4, xmm3, xmm1
      vaddss  xmm1, xmm4, xmm0
      vaddss  xmm7, xmm1, dword ptr [rbx+54h]
    }
  }
  _RCX = &_RBX->m_platformOrigin;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx]
    vsubss  xmm1, xmm0, dword ptr [rbx+4Ch]
    vmovss  xmm4, dword ptr [rcx+4]
    vmovss  xmm6, dword ptr [rcx+8]
    vaddss  xmm2, xmm1, xmm8
    vmovss  dword ptr [rbx+0A8h], xmm2
    vsubss  xmm0, xmm4, dword ptr [rbx+50h]
    vaddss  xmm1, xmm0, xmm9
    vmovss  dword ptr [rbx+0ACh], xmm1
    vsubss  xmm2, xmm6, dword ptr [rbx+54h]
    vaddss  xmm0, xmm2, xmm7
    vmovss  dword ptr [rbx+0B0h], xmm0
  }
  v57 = BGMovingPlatformClient::PenetrationEntityHandler((BGMovingPlatformClient *)_RBX->m_movingPlatforms, _RBX->m_ps, &_RBX->m_transformedOrigin, _RBX->m_bound, _RBX->m_platformId, _RBX->m_platformBrushId, &_RBX->m_platformOrigin, &_RBX->m_platformAngles, _RBX->m_clipMask, &outPenetration, 1) == 0;
  result = 1i64;
  if ( !v57 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+120h+var_C0]
      vaddss  xmm1, xmm0, dword ptr [rbx+0A8h]
      vmovss  xmm2, dword ptr [rsp+120h+var_C0+4]
      vmovss  dword ptr [rbx+0A8h], xmm1
      vaddss  xmm0, xmm2, dword ptr [rbx+0ACh]
      vmovss  xmm1, dword ptr [rsp+120h+var_C0+8]
      vmovss  dword ptr [rbx+0ACh], xmm0
      vaddss  xmm2, xmm1, dword ptr [rbx+0B0h]
      vmovss  dword ptr [rbx+0B0h], xmm2
    }
  }
  _R11 = &vars0;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
  return result;
}

/*
==============
BGMovingPlatformSolver::ValidateFinalPositionVsStaticWorld
==============
*/
char BGMovingPlatformSolver::ValidateFinalPositionVsStaticWorld(BGMovingPlatformSolver *this, bool forceTest)
{
  const dvar_t *v3; 
  Physics_WorldId v6; 
  const BgPlayerTraceInfo *v7; 
  char v9; 
  BgTrace v11; 
  trace_t results; 

  _R14 = this;
  BGMovingPlatformPS::UseRockingMoverWallFix2();
  v3 = DVARBOOL_playerCharacterCollisionVehicleJumpWallFix;
  if ( !DVARBOOL_playerCharacterCollisionVehicleJumpWallFix && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerCharacterCollisionVehicleJumpWallFix") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( !v3->current.enabled )
    return 1;
  if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB|0x100) )
    return 1;
  _RDI = (_DWORD *)_R14->m_transformedOrigin.v;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vucomiss xmm0, dword ptr [r14+70h]
  }
  v6 = _R14->m_bgHandler->GetPhysicsWorldId((BgHandler *)_R14->m_bgHandler);
  v7 = _R14->m_bgHandler->GetPlayerTraceInfo(_R14->m_bgHandler, (unsigned int)_R14->m_ps->clientNum);
  BgTrace::BgTrace(&v11, v7);
  BgTrace::LegacyTraceHandler(&v11, v6, &results, &_R14->m_playerCurrentOrigin, &_R14->m_transformedOrigin, _R14->m_bound, _R14->m_platformId, _R14->m_clipMask & 0xFDFFBFFF, _R14->m_ps);
  __asm
  {
    vmovss  xmm0, [rsp+0F8h+results.fraction]
    vucomiss xmm0, cs:__real@3f800000
  }
  if ( v9 || results.hitId != 2046 )
    return 1;
  *_RDI = LODWORD(_R14->m_playerCurrentOrigin.v[0]);
  _R14->m_transformedOrigin.v[1] = _R14->m_playerCurrentOrigin.v[1];
  _R14->m_transformedOrigin.v[2] = _R14->m_playerCurrentOrigin.v[2];
  return 0;
}

