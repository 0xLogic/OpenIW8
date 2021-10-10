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
  this->m_movingPlatforms = movingPlatforms;
  this->m_ps = ps;
  WorldUpReferenceFrame::WorldUpReferenceFrame(&this->m_refFrame, ps, handler);
  this->m_bound = bounds;
  this->m_platformId = platformId;
  this->m_platformBrushId = platformBrushId;
  this->m_localClientNum = localClientNum;
  this->m_bgHandler = handler;
  this->m_clipMask = clipMask;
  this->m_flags = flags;
  this->m_deltaTime = deltaTime;
  *(_QWORD *)&this->m_actorResolve = 0i64;
  this->m_platformOrigin = *origin;
  this->m_platformAngles = *angles;
  this->m_platformOldOrigin = *oldOrigin;
  this->m_platformOldAngles = *oldAngles;
  this->m_playerCurrentOrigin = *currentOrigin;
  *(_QWORD *)this->m_transformedOrigin.v = 0i64;
  this->m_transformedOrigin.v[2] = 0.0;
  this->m_push = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0xDu);
  this->m_jumping = ps->groundEntityNum == 2047;
}

/*
==============
BGMovingPlatformSolver::FixPosition
==============
*/
__int64 BGMovingPlatformSolver::FixPosition(BGMovingPlatformSolver *this, vec3_t *fixed)
{
  unsigned int passEntityNum; 
  const BgPlayerTraceInfo *v5; 
  Physics_WorldId v6; 
  const playerState_s *ps; 
  __int128 v8; 
  __int128 v12; 
  float v16; 
  unsigned int v18; 
  int m_platformId; 
  const BgPlayerTraceInfo *v20; 
  Physics_WorldId v21; 
  const playerState_s *m_ps; 
  unsigned int v23; 
  unsigned int v24; 
  __int128 v28; 
  __int128 v29; 
  Bounds *m_bound; 
  float v31; 
  float v32; 
  __int128 v33; 
  float *v34; 
  float v35; 
  float v36; 
  float v37; 
  __int128 v38; 
  __int128 v39; 
  __int128 v40; 
  __int128 v41; 
  float v42; 
  __int128 v44; 
  float v46; 
  float v47; 
  __int128 v48; 
  __int128 v49; 
  float v50; 
  float v51; 
  float v52; 
  float v53; 
  __int128 v54; 
  __int128 v55; 
  __int128 v59; 
  float v63; 
  __int128 v65; 
  __int128 v74; 
  unsigned int v84; 
  unsigned int v85; 
  bool v87; 
  unsigned int v89; 
  char *v91; 
  float v92; 
  float v93; 
  __int64 v94; 
  __int128 v95; 
  __int128 v96; 
  __int128 v97; 
  unsigned int v103; 
  float v105; 
  __int128 v106; 
  float v107; 
  float v108; 
  float v109; 
  __int128 v110; 
  float v114; 
  float v115; 
  float v116; 
  __int128 v117; 
  float v118; 
  float v122; 
  float v123; 
  float v124; 
  float v125; 
  const playerState_s *v126; 
  float v127; 
  float v128; 
  float v129; 
  float v130; 
  float v131; 
  float v132; 
  float v133; 
  BgTrace v134; 
  vec3_t outNewPos; 
  vec3_t outPenetration; 
  vec3_t cross; 
  vec3_t worldUp; 
  trace_t results; 
  char v140[16]; 
  unsigned int v141[20]; 

  if ( !BGMovingPlatformSolver::GenerateProposedHeight(this, &this->m_transformedOrigin, &outNewPos, this->m_platformId, &BGMovingPlatforms::WORLD_UP) )
  {
    v18 = 1;
    while ( 1 )
    {
      m_platformId = this->m_platformId;
      v20 = this->m_bgHandler->GetPlayerTraceInfo(this->m_bgHandler, (unsigned int)this->m_ps->clientNum);
      BgTrace::BgTrace(&v134, v20);
      v21 = this->m_bgHandler->GetPhysicsWorldId((BgHandler *)this->m_bgHandler);
      m_ps = this->m_ps;
      v134.m_flags |= 0x40u;
      BgTrace::LegacyTraceHandler(&v134, v21, &results, &outNewPos, &outNewPos, this->m_bound, m_platformId, this->m_clipMask, m_ps);
      if ( results.startsolid && results.hitId != 2047 )
      {
        if ( results.hitType != TRACE_HITTYPE_ENTITY || !((__int64 (__fastcall *)(const BGMovingPlatformClient *, _QWORD, char *))this->m_movingPlatforms->GetCharacterEntityInfo)(this->m_movingPlatforms, results.hitId, &v140[32 * v18 - 32]) )
          return 0i64;
        v23 = 0;
        this->m_actorResolve = 1;
        v24 = 0;
        _XMM6 = 0i64;
        _XMM9 = 0i64;
        _XMM8 = 0i64;
        v28 = 0i64;
        v29 = 0i64;
        v129 = 0.0;
        v127 = 0.0;
        v128 = 0.0;
        v130 = 0.0;
        v131 = 0.0;
        if ( v18 >= 4 )
        {
          m_bound = this->m_bound;
          v31 = this->m_transformedOrigin.v[0];
          v32 = this->m_transformedOrigin.v[1];
          v33 = LODWORD(m_bound->halfSize.v[0]);
          v34 = (float *)v141;
          do
          {
            v35 = *(v34 - 1);
            v36 = v34[8];
            v37 = v34[16];
            v39 = v33;
            *(float *)&v39 = *(float *)&v33 + *(float *)(*((_QWORD *)v34 + 1) + 12i64);
            v38 = v39;
            v41 = v33;
            *(float *)&v41 = *(float *)&v33 + *(float *)(*((_QWORD *)v34 + 5) + 12i64);
            v40 = v41;
            v42 = v34[15];
            v44 = v38;
            *(float *)&v44 = *(float *)&v38 - fsqrt((float)((float)(*v34 - v32) * (float)(*v34 - v32)) + (float)((float)(v35 - v31) * (float)(v35 - v31)));
            _XMM0 = v44;
            __asm { vmaxss  xmm3, xmm0, xmm6 }
            v46 = v34[7];
            v132 = *(float *)&v44;
            v47 = fsqrt((float)((float)(v36 - v32) * (float)(v36 - v32)) + (float)((float)(v46 - v31) * (float)(v46 - v31)));
            v49 = LODWORD(m_bound->halfSize.v[0]);
            *(float *)&v49 = m_bound->halfSize.v[0] + *(float *)(*((_QWORD *)v34 + 9) + 12i64);
            v48 = v49;
            v50 = fsqrt((float)((float)(v37 - v32) * (float)(v37 - v32)) + (float)((float)(v42 - v31) * (float)(v42 - v31)));
            v51 = (float)((float)(v35 + v130) + v46) + v42;
            v52 = v34[24];
            v133 = *(float *)&_XMM3;
            *(float *)&_XMM3 = v34[23];
            v130 = v51 + *(float *)&_XMM3;
            v131 = (float)((float)((float)(*v34 + v131) + v36) + v37) + v52;
            v53 = (float)(v52 - this->m_transformedOrigin.v[1]) * (float)(v52 - this->m_transformedOrigin.v[1]);
            v55 = LODWORD(m_bound->halfSize.v[0]);
            *(float *)&v55 = m_bound->halfSize.v[0] + *(float *)(*((_QWORD *)v34 + 13) + 12i64);
            v54 = v55;
            _XMM0 = LODWORD(v129);
            __asm { vcmpltss xmm0, xmm0, [rsp+270h+var_204] }
            v59 = v40;
            *(float *)&v59 = *(float *)&v40 - v47;
            _XMM8 = v59;
            _XMM1 = LODWORD(v128);
            __asm { vblendvps xmm1, xmm1, xmm12, xmm0 }
            _XMM12 = LODWORD(v133);
            v63 = fsqrt(v53 + (float)((float)(*(float *)&_XMM3 - this->m_transformedOrigin.v[0]) * (float)(*(float *)&_XMM3 - this->m_transformedOrigin.v[0])));
            v65 = v48;
            *(float *)&v65 = *(float *)&v48 - v50;
            _XMM15 = v65;
            __asm
            {
              vcmpltss xmm0, xmm12, xmm8
              vblendvps xmm2, xmm1, xmm11, xmm0
            }
            _XMM11 = LODWORD(v129);
            __asm
            {
              vmaxss  xmm10, xmm8, xmm12
              vcmpltss xmm1, xmm10, xmm15
              vblendvps xmm3, xmm2, xmm9, xmm1
            }
            _XMM2 = LODWORD(v127);
            v74 = v54;
            *(float *)&v74 = *(float *)&v54 - v63;
            _XMM6 = v74;
            __asm
            {
              vmaxss  xmm7, xmm15, xmm10
              vcmpltss xmm0, xmm7, xmm6
              vblendvps xmm4, xmm3, xmm4, xmm0
              vcmpltss xmm0, xmm11, xmm9
              vblendvps xmm1, xmm2, xmm1, xmm0
              vcmpltss xmm0, xmm12, xmm8
              vblendvps xmm2, xmm1, xmm14, xmm0
              vcmpltss xmm1, xmm10, xmm15
              vblendvps xmm3, xmm2, xmm13, xmm1
            }
            v31 = this->m_transformedOrigin.v[0];
            v84 = v24;
            v85 = v24 + 1;
            if ( v132 <= v129 )
              v84 = v23;
            v34 += 32;
            __asm { vcmpltss xmm0, xmm7, xmm6 }
            if ( *(float *)&_XMM8 <= v133 )
              v85 = v84;
            v23 = v24 + 3;
            v87 = *(float *)&_XMM15 <= *(float *)&_XMM10;
            v32 = this->m_transformedOrigin.v[1];
            __asm { vblendvps xmm1, xmm3, xmm5, xmm0 }
            v89 = v24 + 2;
            if ( v87 )
              v89 = v85;
            __asm { vmaxss  xmm2, xmm6, xmm7 }
            if ( *(float *)&v74 <= *(float *)&_XMM7 )
              v23 = v89;
            v24 += 4;
            v128 = *(float *)&_XMM4;
            _XMM8 = _XMM4;
            v33 = LODWORD(m_bound->halfSize.v[0]);
            v129 = *(float *)&_XMM2;
            v127 = *(float *)&_XMM1;
            _XMM6 = _XMM2;
            _XMM9 = _XMM1;
          }
          while ( v24 < v18 - 3 );
          v28 = LODWORD(v130);
          v29 = LODWORD(v131);
        }
        if ( v24 < v18 )
        {
          v91 = &v140[32 * v24 + 12];
          do
          {
            v92 = *(float *)v91;
            v93 = *((float *)v91 + 1);
            v94 = *(_QWORD *)(v91 + 12);
            v91 += 32;
            v95 = v28;
            *(float *)&v95 = *(float *)&v28 + v92;
            v28 = v95;
            v96 = v29;
            *(float *)&v96 = *(float *)&v29 + v93;
            v29 = v96;
            v97 = LODWORD(this->m_bound->halfSize.v[0]);
            *(float *)&v97 = (float)(this->m_bound->halfSize.v[0] + *(float *)(v94 + 12)) - fsqrt((float)((float)(v93 - this->m_transformedOrigin.v[1]) * (float)(v93 - this->m_transformedOrigin.v[1])) + (float)((float)(v92 - this->m_transformedOrigin.v[0]) * (float)(v92 - this->m_transformedOrigin.v[0])));
            _XMM2 = v97;
            __asm
            {
              vcmpltss xmm0, xmm6, xmm2
              vblendvps xmm4, xmm8, xmm1, xmm0
              vcmpltss xmm0, xmm6, xmm2
              vblendvps xmm1, xmm9, xmm3, xmm0
            }
            v103 = v24;
            if ( *(float *)&v97 <= *(float *)&_XMM6 )
              v103 = v23;
            ++v24;
            v23 = v103;
            __asm { vmaxss  xmm0, xmm2, xmm6 }
            _XMM6 = _XMM0;
            _XMM9 = _XMM1;
            _XMM8 = _XMM4;
          }
          while ( v24 < v18 );
        }
        v105 = this->m_transformedOrigin.v[0];
        v106 = LODWORD(this->m_transformedOrigin.v[1]);
        v107 = (float)v18;
        v108 = v105 - (float)(*(float *)&v28 * (float)(1.0 / v107));
        v110 = v106;
        v109 = *(float *)&v106 - (float)(*(float *)&v29 * (float)(1.0 / v107));
        *(float *)&v110 = fsqrt((float)(v109 * v109) + (float)(v108 * v108));
        _XMM3 = v110;
        __asm
        {
          vcmpless xmm0, xmm3, xmm15
          vblendvps xmm0, xmm3, xmm14, xmm0
        }
        v114 = (float)(1.0 / *(float *)&_XMM0) * v109;
        v115 = (float)(1.0 / *(float *)&_XMM0) * v108;
        v117 = v141[8 * v23];
        v116 = *(float *)&v141[8 * v23] - *(float *)&v106;
        v118 = *(float *)&v140[32 * v23 + 12] - v105;
        *(float *)&v117 = fsqrt((float)(v116 * v116) + (float)(v118 * v118));
        _XMM3 = v117;
        __asm
        {
          vcmpless xmm0, xmm3, xmm15
          vblendvps xmm0, xmm3, xmm14, xmm0
        }
        v122 = (float)((float)((float)(1.0 / *(float *)&_XMM0) * v116) * v114) + (float)((float)((float)(1.0 / *(float *)&_XMM0) * v118) * v115);
        if ( COERCE_FLOAT(LODWORD(v122) & _xmm) <= 0.99900001 )
        {
          v123 = acosf_0(v122);
          v124 = sinf_0(v123);
          v125 = (float)(3.1415927 - v123) - asinf_0((float)(v124 * *(float *)&_XMM9) / *(float *)&_XMM8);
          *(float *)&_XMM6 = (float)(sinf_0(v125) * *(float *)&_XMM8) / v124;
        }
        v126 = this->m_ps;
        outNewPos.v[0] = (float)((float)(*(float *)&_XMM6 + 0.125) * v115) + v105;
        outNewPos.v[2] = this->m_transformedOrigin.v[2];
        outNewPos.v[1] = (float)((float)(*(float *)&_XMM6 + 0.125) * v114) + *(float *)&v106;
        if ( BGMovingPlatformSolver::GenerateProposedHeight(this, &outNewPos, &outNewPos, v126->clientNum, &BGMovingPlatforms::WORLD_UP) )
          break;
      }
      if ( v18++ >= 3 )
        return 0i64;
    }
    goto LABEL_7;
  }
  passEntityNum = this->m_ps->clientNum;
  v5 = this->m_bgHandler->GetPlayerTraceInfo(this->m_bgHandler, passEntityNum);
  BgTrace::BgTrace(&v134, v5);
  v6 = this->m_bgHandler->GetPhysicsWorldId((BgHandler *)this->m_bgHandler);
  ps = this->m_ps;
  v134.m_flags |= 0x40u;
  BgTrace::LegacyTraceHandler(&v134, v6, &results, &outNewPos, &outNewPos, this->m_bound, passEntityNum, this->m_clipMask, ps);
  if ( !results.startsolid )
    goto LABEL_7;
  if ( results.hitId == 2047 )
    goto LABEL_7;
  if ( BGMovingPlatformClient::GetPlatformPenetration((BGMovingPlatformClient *)this->m_movingPlatforms, this->m_ps, &outNewPos, this->m_bound, this->m_clipMask, &outPenetration, 1) )
  {
    if ( !BGMovingPlatforms::DoesPenetractionExceedBounds(this->m_bound, &outPenetration) )
    {
      v8 = LODWORD(outPenetration.v[0]);
      *(float *)&v8 = fsqrt((float)((float)(*(float *)&v8 * *(float *)&v8) + (float)(outPenetration.v[1] * outPenetration.v[1])) + (float)(outPenetration.v[2] * outPenetration.v[2]));
      _XMM6 = v8;
      __asm
      {
        vcmpless xmm0, xmm6, cs:__real@80000000
        vblendvps xmm0, xmm6, xmm8, xmm0
      }
      outNewPos.v[0] = (float)((float)(*(float *)&v8 + 0.001) * (float)(outPenetration.v[0] * (float)(1.0 / *(float *)&_XMM0))) + outNewPos.v[0];
      outPenetration.v[0] = outPenetration.v[0] * (float)(1.0 / *(float *)&_XMM0);
      outNewPos.v[1] = (float)((float)(*(float *)&v8 + 0.001) * (float)(outPenetration.v[1] * (float)(1.0 / *(float *)&_XMM0))) + outNewPos.v[1];
      outNewPos.v[2] = (float)((float)(*(float *)&v8 + 0.001) * (float)(outPenetration.v[2] * (float)(1.0 / *(float *)&_XMM0))) + outNewPos.v[2];
      outPenetration.v[1] = outPenetration.v[1] * (float)(1.0 / *(float *)&_XMM0);
      outPenetration.v[2] = outPenetration.v[2] * (float)(1.0 / *(float *)&_XMM0);
      Vec3Cross(&outPenetration, &BGMovingPlatforms::WORLD_UP, &cross);
      v12 = LODWORD(cross.v[0]);
      *(float *)&v12 = fsqrt((float)((float)(*(float *)&v12 * *(float *)&v12) + (float)(cross.v[1] * cross.v[1])) + (float)(cross.v[2] * cross.v[2]));
      _XMM3 = v12;
      __asm
      {
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm0, xmm3, xmm8, xmm0
      }
      cross.v[0] = cross.v[0] * (float)(1.0 / *(float *)&_XMM0);
      cross.v[2] = cross.v[2] * (float)(1.0 / *(float *)&_XMM0);
      cross.v[1] = cross.v[1] * (float)(1.0 / *(float *)&_XMM0);
      Vec3Cross(&cross, &outPenetration, &worldUp);
      if ( BGMovingPlatformSolver::GenerateProposedHeight(this, &outNewPos, &outNewPos, this->m_ps->clientNum, &worldUp) )
      {
LABEL_7:
        v16 = outNewPos.v[1];
        fixed->v[0] = outNewPos.v[0];
        fixed->v[2] = outNewPos.v[2];
        fixed->v[1] = v16;
        return 1i64;
      }
    }
  }
  return 0i64;
}

/*
==============
BGMovingPlatformSolver::FixPositionZeroG
==============
*/
void BGMovingPlatformSolver::FixPositionZeroG(BGMovingPlatformSolver *this)
{
  vec3_t *p_m_transformedOrigin; 
  float v2; 
  float v3; 
  vec3_t outPenetration; 

  p_m_transformedOrigin = &this->m_transformedOrigin;
  if ( BGMovingPlatformClient::PenetrationEntityHandler((BGMovingPlatformClient *)this->m_movingPlatforms, this->m_ps, &this->m_transformedOrigin, this->m_bound, this->m_platformId, this->m_platformBrushId, &this->m_platformOrigin, &this->m_platformAngles, this->m_clipMask, &outPenetration, 1) )
  {
    v2 = outPenetration.v[1];
    p_m_transformedOrigin->v[0] = outPenetration.v[0] + p_m_transformedOrigin->v[0];
    v3 = outPenetration.v[2];
    p_m_transformedOrigin->v[1] = v2 + p_m_transformedOrigin->v[1];
    p_m_transformedOrigin->v[2] = v3 + p_m_transformedOrigin->v[2];
  }
}

/*
==============
BGMovingPlatformSolver::GenerateProposedHeight
==============
*/
__int64 BGMovingPlatformSolver::GenerateProposedHeight(BGMovingPlatformSolver *this, const vec3_t *pos, vec3_t *outNewPos, int ignorecollisionid, const vec3_t *worldUp)
{
  float v9; 
  bool v10; 
  float m_deltaTime; 
  const BgHandler *m_bgHandler; 
  float v13; 
  float v14; 
  float v15; 
  __int64 v16; 
  Physics_WorldId v17; 
  unsigned int v18; 
  const BgPlayerTraceInfo *v19; 
  Physics_WorldId v20; 
  const playerState_s *m_ps; 
  unsigned int hitId; 
  const BgHandler *v23; 
  float v24; 
  float v25; 
  float v26; 
  const BgPlayerTraceInfo *v27; 
  const playerState_s *v28; 
  double UpContribution; 
  const playerState_s *v30; 
  float v31; 
  float v32; 
  float v33; 
  Bounds *bounds; 
  float v35; 
  float fraction; 
  float v38; 
  float v39; 
  int contentMask; 
  playerState_s *ps; 
  float v42; 
  float v43; 
  BgTrace v44; 
  vec3_t start; 
  vec3_t end; 
  vec3_t outUp; 
  trace_t results; 

  if ( worldUp )
  {
    v9 = worldUp->v[1];
    outUp.v[0] = worldUp->v[0];
    outUp.v[2] = worldUp->v[2];
    outUp.v[1] = v9;
  }
  else
  {
    BGMovingPlatformClient::ResolvePlatformUp((BGMovingPlatformClient *)this->m_movingPlatforms, this->m_ps, &outUp);
  }
  outNewPos->v[0] = pos->v[0];
  outNewPos->v[1] = pos->v[1];
  outNewPos->v[2] = pos->v[2];
  if ( !this->m_jumping || BGMovingPlatformSolver::PositionTrace(this, pos, ignorecollisionid, NULL) != 2047 )
  {
    v10 = this->m_bgHandler->IsServer((BgHandler *)this->m_bgHandler);
    m_deltaTime = this->m_deltaTime;
    if ( !v10 )
      LODWORD(m_deltaTime) ^= _xmm;
    m_bgHandler = this->m_bgHandler;
    v13 = (float)(m_deltaTime * 100.0) * outUp.v[0];
    v14 = outUp.v[1] * (float)(m_deltaTime * 100.0);
    start.v[0] = pos->v[0];
    v15 = outUp.v[2] * (float)(m_deltaTime * 100.0);
    v16 = *(_QWORD *)&pos->y;
    *(_QWORD *)&start.y = v16;
    v42 = v14;
    v43 = v15;
    v17 = m_bgHandler->GetPhysicsWorldId((BgHandler *)m_bgHandler);
    v18 = 0;
    while ( 1 )
    {
      v19 = this->m_bgHandler->GetPlayerTraceInfo(this->m_bgHandler, (unsigned int)this->m_ps->clientNum);
      BgTrace::BgTrace(&v44, v19);
      v20 = this->m_bgHandler->GetPhysicsWorldId((BgHandler *)this->m_bgHandler);
      m_ps = this->m_ps;
      v44.m_flags |= 0x40u;
      BgTrace::LegacyTraceHandler(&v44, v20, &results, &start, &start, this->m_bound, ignorecollisionid, this->m_clipMask, m_ps);
      hitId = 2047;
      if ( results.startsolid )
        hitId = results.hitId;
      if ( hitId == 2047 )
      {
        v23 = this->m_bgHandler;
        v24 = pos->v[1];
        end.v[0] = pos->v[0] - (float)(10.0 * outUp.v[0]);
        v25 = v24 - (float)(10.0 * outUp.v[1]);
        v26 = pos->v[2];
        end.v[1] = v25;
        end.v[2] = v26 - (float)(10.0 * outUp.v[2]);
        v27 = v23->GetPlayerTraceInfo(v23, this->m_ps->clientNum);
        BgTrace::BgTrace(&v44, v27);
        v28 = this->m_ps;
        v44.m_flags |= 0x40u;
        BgTrace::LegacyTraceHandler(&v44, v17, &results, &start, &end, this->m_bound, ignorecollisionid, this->m_clipMask, v28);
        v44.m_flags &= ~0x40u;
        if ( !results.startsolid )
        {
          UpContribution = WorldUpReferenceFrame::GetUpContribution(&this->m_refFrame, &results.normal);
          if ( *(float *)&UpContribution < 0.30000001 )
          {
            v30 = this->m_ps;
            v44.m_flags |= 0x40u;
            v31 = (float)((float)(end.v[0] - start.v[0]) * results.fraction) + start.v[0];
            v32 = (float)((float)(end.v[1] - start.v[1]) * results.fraction) + start.v[1];
            v33 = (float)((float)(end.v[2] - start.v[2]) * results.fraction) + start.v[2];
            ps = (playerState_s *)v30;
            contentMask = this->m_clipMask;
            bounds = this->m_bound;
            v35 = (float)((float)((float)(end.v[1] - v32) * results.normal.v[1]) + (float)((float)(end.v[0] - v31) * results.normal.v[0])) + (float)((float)(end.v[2] - v33) * results.normal.v[2]);
            end.v[0] = (float)((float)(COERCE_FLOAT(LODWORD(v35) ^ _xmm) * results.normal.v[0]) + (float)(end.v[0] - v31)) + v31;
            end.v[1] = (float)((float)(COERCE_FLOAT(LODWORD(v35) ^ _xmm) * results.normal.v[1]) + (float)(end.v[1] - v32)) + v32;
            end.v[2] = (float)((float)(COERCE_FLOAT(LODWORD(v35) ^ _xmm) * results.normal.v[2]) + (float)(end.v[2] - v33)) + v33;
            start.v[0] = v31;
            start.v[1] = v32;
            start.v[2] = v33;
            BgTrace::LegacyTraceHandler(&v44, v17, &results, &start, &end, bounds, ignorecollisionid, contentMask, ps);
            v14 = v42;
            v15 = v43;
          }
          if ( !results.startsolid )
            break;
        }
      }
      ++v18;
      start.v[0] = v13 + start.v[0];
      start.v[1] = v14 + start.v[1];
      start.v[2] = v15 + start.v[2];
      if ( v18 >= 4 )
        return 0i64;
    }
    fraction = results.fraction;
    if ( results.fraction < 1.0 )
    {
      v38 = (float)(end.v[1] - start.v[1]) * results.fraction;
      v39 = end.v[2] - start.v[2];
      outNewPos->v[0] = (float)((float)(end.v[0] - start.v[0]) * results.fraction) + start.v[0];
      outNewPos->v[1] = v38 + start.v[1];
      outNewPos->v[2] = (float)(v39 * fraction) + start.v[2];
    }
  }
  return 1i64;
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
  float v6; 
  float v7; 
  Bounds *m_bound; 
  float v9; 
  float v10; 
  int DoesPenetractionExceedBounds; 
  int contentMask; 
  float fraction; 
  float v14; 
  float v15; 
  float v17; 
  playerState_s *ps; 
  BgTrace v19; 
  vec3_t start; 
  vec3_t normal; 
  trace_t results; 

  this->m_transformedOrigin = *basePosition;
  v4 = this->m_bgHandler->GetPhysicsWorldId((BgHandler *)this->m_bgHandler);
  v5 = this->m_bgHandler->GetPlayerTraceInfo(this->m_bgHandler, (unsigned int)this->m_ps->clientNum);
  BgTrace::BgTrace(&v19, v5);
  BgTrace::LegacyTraceHandler(&v19, v4, &results, basePosition, basePosition, this->m_bound, this->m_ps->clientNum, this->m_clipMask, this->m_ps);
  if ( !*(_WORD *)&results.allsolid )
    return 1;
  v6 = (float)(results.closestPointsPenetration + 0.125) * results.normal.v[0];
  v7 = (float)(results.closestPointsPenetration + 0.125) * results.normal.v[2];
  m_bound = this->m_bound;
  start.v[0] = v6 + basePosition->v[0];
  v9 = v7 + basePosition->v[2];
  results.closestPointsPenetration = results.closestPointsPenetration + 0.125;
  v10 = (float)(results.closestPointsPenetration * results.normal.v[1]) + basePosition->v[1];
  start.v[2] = v9;
  normal.v[0] = v6;
  normal.v[1] = results.closestPointsPenetration * results.normal.v[1];
  normal.v[2] = v7;
  start.v[1] = v10;
  DoesPenetractionExceedBounds = BGMovingPlatforms::DoesPenetractionExceedBounds(m_bound, &normal);
  contentMask = this->m_clipMask;
  ps = (playerState_s *)this->m_ps;
  if ( DoesPenetractionExceedBounds )
  {
    BgTrace::LegacyTraceHandler(&v19, v4, &results, basePosition, &start, this->m_bound, this->m_platformId, contentMask & 0xFDFFBFFF, ps);
    if ( !results.allsolid && !results.startsolid )
    {
      fraction = results.fraction;
      v14 = start.v[1];
      this->m_transformedOrigin.v[0] = (float)((float)(start.v[0] - basePosition->v[0]) * results.fraction) + basePosition->v[0];
      v15 = (float)(start.v[2] - basePosition->v[2]) * fraction;
      this->m_transformedOrigin.v[1] = (float)((float)(v14 - basePosition->v[1]) * fraction) + basePosition->v[1];
      this->m_transformedOrigin.v[2] = v15 + basePosition->v[2];
      return 1;
    }
  }
  else
  {
    BgTrace::LegacyTraceHandler(&v19, v4, &results, &start, &start, this->m_bound, this->m_ps->clientNum, contentMask, ps);
    if ( !results.allsolid && !results.startsolid )
    {
      v17 = start.v[1];
      this->m_transformedOrigin.v[0] = start.v[0];
      this->m_transformedOrigin.v[2] = start.v[2];
      this->m_transformedOrigin.v[1] = v17;
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
  outVel->v[0] = this->m_platformOrigin.v[0] - this->m_platformOldOrigin.v[0];
  outVel->v[1] = this->m_platformOrigin.v[1] - this->m_platformOldOrigin.v[1];
  outVel->v[2] = this->m_platformOrigin.v[2] - this->m_platformOldOrigin.v[2];
}

/*
==============
BGMovingPlatformSolver::GetPushNormal
==============
*/
void BGMovingPlatformSolver::GetPushNormal(BGMovingPlatformSolver *this, const vec3_t *playerOrigin, const vec3_t *origin, const vec3_t *angles, const vec3_t *vel, vec3_t *outNormal)
{
  __int128 v6; 
  __int128 v7; 

  *outNormal = *vel;
  BGMovingPlatformSolver::TraceBrushEntityHandlerShared(this, NULL, outNormal, playerOrigin, origin, origin, angles, 1);
  v6 = LODWORD(outNormal->v[0]);
  v7 = v6;
  *(float *)&v7 = fsqrt((float)((float)(*(float *)&v6 * *(float *)&v6) + (float)(outNormal->v[1] * outNormal->v[1])) + (float)(outNormal->v[2] * outNormal->v[2]));
  _XMM4 = v7;
  __asm
  {
    vcmpless xmm0, xmm4, cs:__real@80000000
    vblendvps xmm0, xmm4, xmm1, xmm0
  }
  outNormal->v[0] = *(float *)&v6 * (float)(1.0 / *(float *)&_XMM0);
  outNormal->v[1] = (float)(1.0 / *(float *)&_XMM0) * outNormal->v[1];
  outNormal->v[2] = (float)(1.0 / *(float *)&_XMM0) * outNormal->v[2];
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
  Physics_WorldId v5; 
  __int64 v6; 
  const playerState_s *v7; 
  float v8; 
  const BgHandler *m_bgHandler; 
  unsigned int passEntityNum; 
  const BgPlayerTraceInfo *v11; 
  Physics_WorldId v12; 
  const playerState_s *ps; 
  unsigned int hitId; 
  double UpContribution; 
  const BgPlayerTraceInfo *v16; 
  int v17; 
  __int64 v18; 
  float fraction; 
  float v20; 
  float v21; 
  BgTrace v22; 
  vec3_t end; 
  vec3_t vec; 
  trace_t v25; 
  trace_t results; 

  m_ps = this->m_ps;
  if ( !this->m_ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2671, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  pm_type = m_ps->pm_type;
  if ( pm_type == 1 || pm_type == 8 )
    return 0i64;
  if ( this->m_bgHandler->IsClient((BgHandler *)this->m_bgHandler) )
  {
    this->m_failedTraceHitId = BGMovingPlatformSolver::PositionTrace(this, &this->m_transformedOrigin, this->m_ps->clientNum, NULL);
    return 0i64;
  }
  v5 = this->m_bgHandler->GetPhysicsWorldId((BgHandler *)this->m_bgHandler);
  memset_0(&v25, 0, sizeof(v25));
  v6 = 0i64;
  v25.hitId = 2047;
  if ( g_correctAllSolidDeltasCount )
  {
    while ( 1 )
    {
      v7 = this->m_ps;
      v8 = CorrectSolidDeltas[v6].v[1] + this->m_transformedOrigin.v[1];
      end.v[0] = this->m_transformedOrigin.v[0] + CorrectSolidDeltas[v6].v[0];
      m_bgHandler = this->m_bgHandler;
      end.v[2] = CorrectSolidDeltas[v6].v[2] + this->m_transformedOrigin.v[2];
      end.v[1] = v8;
      passEntityNum = v7->clientNum;
      v11 = m_bgHandler->GetPlayerTraceInfo(m_bgHandler, passEntityNum);
      BgTrace::BgTrace(&v22, v11);
      v12 = this->m_bgHandler->GetPhysicsWorldId((BgHandler *)this->m_bgHandler);
      ps = this->m_ps;
      v22.m_flags |= 0x40u;
      BgTrace::LegacyTraceHandler(&v22, v12, &results, &end, &end, this->m_bound, passEntityNum, this->m_clipMask, ps);
      hitId = 2047;
      if ( results.startsolid )
        hitId = results.hitId;
      if ( hitId == 2047 )
      {
        vec = end;
        UpContribution = WorldUpReferenceFrame::GetUpContribution(&this->m_refFrame, &vec);
        WorldUpReferenceFrame::SetUpContribution(&this->m_refFrame, (float)(*(float *)&UpContribution - 1.0) - 0.25, &end);
        v16 = this->m_bgHandler->GetPlayerTraceInfo(this->m_bgHandler, (unsigned int)this->m_ps->clientNum);
        BgTrace::BgTrace(&v22, v16);
        BgTrace::LegacyTraceHandler(&v22, v5, &v25, &vec, &end, this->m_bound, this->m_ps->clientNum, this->m_clipMask, this->m_ps);
        if ( !v25.startsolid )
          break;
      }
      v6 = (unsigned int)(v6 + 1);
      if ( (unsigned int)v6 >= g_correctAllSolidDeltasCount )
        goto LABEL_15;
    }
    fraction = v25.fraction;
    v20 = end.v[1];
    this->m_transformedOrigin.v[0] = (float)((float)(end.v[0] - vec.v[0]) * v25.fraction) + vec.v[0];
    v21 = (float)(end.v[2] - vec.v[2]) * fraction;
    this->m_transformedOrigin.v[1] = (float)((float)(v20 - vec.v[1]) * fraction) + vec.v[1];
    this->m_transformedOrigin.v[2] = v21 + vec.v[2];
    return 1i64;
  }
  else
  {
LABEL_15:
    v17 = BGMovingPlatformSolver::PositionTrace(this, &this->m_transformedOrigin, this->m_ps->clientNum, NULL);
    v18 = v25.hitId;
    this->m_failedTraceHitId = v17;
    Com_PrintWarning(17, "Could not solve mover collision, consider handing unresolved_collision notify in script. Character number %d. Entity geo number %d\n", (unsigned int)this->m_ps->clientNum, v18);
    return 0i64;
  }
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
  double v10; 
  vec3_t v11; 

  v1 = DCONST_DVARBOOL_playerCharacterCollisionUseNew;
  if ( !DCONST_DVARBOOL_playerCharacterCollisionUseNew && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerCharacterCollisionUseNew") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.enabled )
    this->m_clipMask &= 0xFDFFBFFF;
  v3 = DVARBOOL_movingPlatformFixClientPushJitter;
  if ( !DVARBOOL_movingPlatformFixClientPushJitter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "movingPlatformFixClientPushJitter") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  v4 = !v3->current.enabled || !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB|0x100) || !this->m_bgHandler->IsClient((BgHandler *)this->m_bgHandler);
  if ( this->m_push )
  {
    m_ps = this->m_ps;
    if ( !this->m_ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2605, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( !BG_IsPlayerZeroG(m_ps) || BG_IsPlayerZeroGWalking(m_ps) )
    {
      if ( this->m_push && v4 )
      {
        m_flags = this->m_flags;
        result = BGMovingPlatformSolver::TransformOriginForPush(this);
        if ( (m_flags & 1) != 0 )
          return result;
        if ( !result )
          return BGMovingPlatformSolver::JitterPoint(this);
        return 1;
      }
    }
    else
    {
      if ( (this->m_flags & 1) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\movingplatforms\\bg_moving_platform_solver.cpp", 750, ASSERT_TYPE_ASSERT, "((m_flags & MSF_OPTIMIZED) == 0)", (const char *)&queryFormat, "(m_flags & MSF_OPTIMIZED) == 0") )
        __debugbreak();
      v6 = DCONST_DVARMPBOOL_antilagZeroG;
      if ( !DCONST_DVARMPBOOL_antilagZeroG && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "antilagZeroG") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v6);
      if ( v6->current.enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\movingplatforms\\bg_moving_platform_solver.cpp", 756, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Zero G. should never enter moving platform solver with a push.") )
        __debugbreak();
      if ( !BGMovingPlatformSolver::TransformOriginZeroG(this) )
        return BGMovingPlatformSolver::JitterPoint(this);
    }
  }
  v9 = this->m_flags;
  result = BGMovingPlatformSolver::TransformOriginDefault(this);
  if ( (v9 & 1) != 0 )
    return result;
  if ( !result )
  {
    if ( !BGMovingPlatformPS::UseRockingMoverWallFix2() )
      return BGMovingPlatformSolver::JitterPoint(this);
    v10 = *(double *)this->m_transformedOrigin.v;
    v11.v[2] = this->m_transformedOrigin.v[2];
    *(double *)v11.v = v10;
    if ( !BGMovingPlatformSolver::GenericPenetrationSolver(this, &v11) )
      return BGMovingPlatformSolver::JitterPoint(this);
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
  float v2; 
  float v3; 
  const dvar_t *v4; 
  bool v5; 
  double v6; 
  int result; 
  vec3_t v8; 
  tmat43_t<vec3_t> axis; 
  vec3_t in1; 
  tmat43_t<vec3_t> out; 

  AnglesToAxis(&this->m_platformOldAngles, (tmat33_t<vec3_t> *)&axis);
  v2 = this->m_platformOldOrigin.v[1];
  axis.m[3].v[0] = this->m_platformOldOrigin.v[0];
  axis.m[3].v[2] = this->m_platformOldOrigin.v[2];
  axis.m[3].v[1] = v2;
  MatrixInverseOrthogonal43(&axis, &out);
  MatrixTransformVector43(&this->m_playerCurrentOrigin, &out, &in1);
  AnglesToAxis(&this->m_platformAngles, (tmat33_t<vec3_t> *)&axis);
  v3 = this->m_platformOrigin.v[1];
  axis.m[3].v[0] = this->m_platformOrigin.v[0];
  axis.m[3].v[2] = this->m_platformOrigin.v[2];
  axis.m[3].v[1] = v3;
  MatrixTransformVector43(&in1, &axis, &this->m_transformedOrigin);
  if ( BG_IsPlayerZeroG(this->m_ps) )
    return 1;
  v4 = DVARBOOL_movingPlatformFixClientPushJitter;
  if ( !DVARBOOL_movingPlatformFixClientPushJitter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "movingPlatformFixClientPushJitter") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  v5 = v4->current.enabled && Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB|0x100);
  if ( this->m_bgHandler->IsClient((BgHandler *)this->m_bgHandler) && !v5 )
    return 1;
  if ( (this->m_flags & 1) != 0 )
  {
    v6 = *(double *)this->m_transformedOrigin.v;
    v8.v[2] = this->m_transformedOrigin.v[2];
    *(double *)v8.v = v6;
    return BGMovingPlatformSolver::GenericPenetrationSolver(this, &v8);
  }
  if ( !BGMovingPlatformClient::NeedToResolveCollision((BGMovingPlatformClient *)this->m_movingPlatforms, this->m_ps) )
    return 1;
  if ( BGMovingPlatformSolver::GenerateProposedHeight(this, &this->m_transformedOrigin, &this->m_transformedOrigin, this->m_ps->clientNum, NULL) )
    return 1;
  result = BGMovingPlatformSolver::FixPosition(this, &this->m_transformedOrigin);
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
  __int128 v1; 
  __int128 v2; 
  __int128 v3; 
  __int128 v4; 
  __int128 v5; 
  __int128 v6; 
  const dvar_t *v7; 
  double v9; 
  vec3_t *brushAngles; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  vec3_t *p_m_platformOldOrigin; 
  float v17; 
  float v18; 
  float v19; 
  __int128 v20; 
  float v21; 
  float v22; 
  __int128 v23; 
  float v27; 
  float v28; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  float v34; 
  double UpContribution; 
  double v36; 
  float v37; 
  float v38; 
  bool v39; 
  float v40; 
  float v41; 
  float v42; 
  float v43; 
  float v44; 
  float v45; 
  float v46; 
  __int128 v47; 
  unsigned int v51; 
  float v52; 
  float v53; 
  float v54; 
  __int128 v55; 
  float v56; 
  __int128 v57; 
  float v61; 
  float v62; 
  vec3_t vec; 
  vec3_t v64; 
  vec3_t v65; 
  vec3_t start; 
  vec3_t end; 
  vec3_t v68; 
  tmat43_t<vec3_t> axis; 
  tmat43_t<vec3_t> out; 
  trace_t results; 
  __int128 v72; 
  __int128 v73; 
  __int128 v74; 
  __int128 v75; 
  __int128 v76; 
  __int128 v77; 

  v7 = DCONST_DVARMPBOOL_movingPlatformUseNewPenetrationSolver;
  if ( !DCONST_DVARMPBOOL_movingPlatformUseNewPenetrationSolver && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "movingPlatformUseNewPenetrationSolver") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( v7->current.enabled )
  {
    v9 = *(double *)this->m_playerCurrentOrigin.v;
    v68.v[2] = this->m_playerCurrentOrigin.v[2];
    *(double *)v68.v = v9;
    return BGMovingPlatformSolver::GenericPenetrationSolver(this, &v68);
  }
  else
  {
    brushAngles = &this->m_platformOldAngles;
    v12 = this->m_platformOldAngles.v[0] - this->m_platformAngles.v[0];
    v13 = this->m_platformOldAngles.v[1] - this->m_platformAngles.v[1];
    v14 = this->m_platformOldAngles.v[2] - this->m_platformAngles.v[2];
    v77 = v1;
    v73 = v5;
    v15 = this->m_playerCurrentOrigin.v[0];
    v72 = v6;
    if ( (float)((float)((float)(v13 * v13) + (float)(v12 * v12)) + (float)(v14 * v14)) <= 0.0000010000001 )
    {
      v45 = this->m_playerCurrentOrigin.v[1];
      v46 = this->m_playerCurrentOrigin.v[2];
      v64.v[0] = v15;
      v64.v[1] = v45;
      v64.v[2] = v46;
      if ( ((LODWORD(v15) & 0x7F800000) == 2139095040 || (LODWORD(v45) & 0x7F800000) == 2139095040 || (LODWORD(v46) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\movingplatforms\\bg_moving_platform_solver.cpp", 495, ASSERT_TYPE_SANITY, "( !IS_NAN( ( oldPosNewAngles )[0] ) && !IS_NAN( ( oldPosNewAngles )[1] ) && !IS_NAN( ( oldPosNewAngles )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( oldPosNewAngles )[0] ) && !IS_NAN( ( oldPosNewAngles )[1] ) && !IS_NAN( ( oldPosNewAngles )[2] )") )
        __debugbreak();
    }
    else
    {
      p_m_platformOldOrigin = &this->m_platformOldOrigin;
      v17 = v15 - this->m_platformOldOrigin.v[0];
      v18 = this->m_playerCurrentOrigin.v[1] - this->m_platformOldOrigin.v[1];
      vec.v[0] = v17;
      vec.v[2] = this->m_playerCurrentOrigin.v[2] - this->m_platformOldOrigin.v[2];
      vec.v[1] = v18;
      WorldUpReferenceFrame::SetUpContribution(&this->m_refFrame, 0.0, &vec);
      v19 = vec.v[0];
      if ( (LODWORD(vec.v[0]) & 0x7F800000) == 2139095040 || (v20 = LODWORD(vec.v[1]), (LODWORD(vec.v[1]) & 0x7F800000) == 2139095040) || (v21 = vec.v[2], (LODWORD(vec.v[2]) & 0x7F800000) == 2139095040) )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\movingplatforms\\bg_moving_platform_solver.cpp", 453, ASSERT_TYPE_SANITY, "( !IS_NAN( ( normal )[0] ) && !IS_NAN( ( normal )[1] ) && !IS_NAN( ( normal )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( normal )[0] ) && !IS_NAN( ( normal )[1] ) && !IS_NAN( ( normal )[2] )") )
          __debugbreak();
        v19 = vec.v[0];
        v20 = LODWORD(vec.v[1]);
        v21 = vec.v[2];
      }
      v22 = *(float *)&v20 + this->m_playerCurrentOrigin.v[1];
      start.v[0] = v19 + this->m_playerCurrentOrigin.v[0];
      start.v[2] = v21 + this->m_playerCurrentOrigin.v[2];
      start.v[1] = v22;
      v23 = v20;
      *(float *)&v23 = fsqrt((float)((float)(*(float *)&v20 * *(float *)&v20) + (float)(v19 * v19)) + (float)(v21 * v21));
      _XMM1 = v23;
      __asm
      {
        vcmpless xmm0, xmm1, xmm11
        vblendvps xmm0, xmm1, xmm10, xmm0
      }
      v27 = 1.0 / *(float *)&_XMM0;
      v28 = v19 * (float)(1.0 / *(float *)&_XMM0);
      v29 = *(float *)&v20 * v27;
      v30 = v21 * v27;
      vec.v[0] = v28;
      vec.v[1] = v29;
      vec.v[2] = v21 * v27;
      if ( (LODWORD(v28) & 0x7F800000) == 2139095040 || (LODWORD(v29) & 0x7F800000) == 2139095040 || (COERCE_UNSIGNED_INT(v21 * v27) & 0x7F800000) == 2139095040 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\movingplatforms\\bg_moving_platform_solver.cpp", 458, ASSERT_TYPE_SANITY, "( !IS_NAN( ( normal )[0] ) && !IS_NAN( ( normal )[1] ) && !IS_NAN( ( normal )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( normal )[0] ) && !IS_NAN( ( normal )[1] ) && !IS_NAN( ( normal )[2] )") )
          __debugbreak();
        v28 = vec.v[0];
        v29 = vec.v[1];
        v30 = vec.v[2];
      }
      v31 = this->m_playerCurrentOrigin.v[0] - (float)(v28 * 20.0);
      v32 = this->m_playerCurrentOrigin.v[1];
      end.v[0] = v31;
      v33 = v32 - (float)(v29 * 20.0);
      v34 = this->m_playerCurrentOrigin.v[2];
      end.v[1] = v33;
      end.v[2] = v34 - (float)(v30 * 20.0);
      UpContribution = WorldUpReferenceFrame::GetUpContribution(&this->m_refFrame, &this->m_playerCurrentOrigin);
      WorldUpReferenceFrame::SetUpContribution(&this->m_refFrame, *(float *)&UpContribution, &start);
      v36 = WorldUpReferenceFrame::GetUpContribution(&this->m_refFrame, &start);
      WorldUpReferenceFrame::SetUpContribution(&this->m_refFrame, *(float *)&v36, &end);
      BGMovingPlatformSolver::TraceBrushEntityHandlerShared(this, &results, NULL, &start, &end, &this->m_platformOldOrigin, &this->m_platformAngles, 0);
      if ( results.allsolid || results.fraction >= 1.0 )
      {
        v76 = v2;
        v75 = v3;
        v74 = v4;
        AnglesToAxis(&this->m_platformOldAngles, (tmat33_t<vec3_t> *)&axis);
        v40 = this->m_platformOldOrigin.v[1];
        axis.m[3].v[0] = p_m_platformOldOrigin->v[0];
        axis.m[3].v[2] = this->m_platformOldOrigin.v[2];
        axis.m[3].v[1] = v40;
        MatrixInverseOrthogonal43(&axis, &out);
        MatrixTransformVector43(&this->m_playerCurrentOrigin, &out, &v68);
        AnglesToAxis(&this->m_platformAngles, (tmat33_t<vec3_t> *)&axis);
        v41 = (float)((float)(v68.v[0] * axis.m[0].v[0]) + (float)(v68.v[1] * axis.m[1].v[0])) + (float)(v68.v[2] * axis.m[2].v[0]);
        v42 = (float)((float)(v68.v[0] * axis.m[0].v[1]) + (float)(v68.v[1] * axis.m[1].v[1])) + (float)(v68.v[2] * axis.m[2].v[1]);
        v43 = (float)((float)(v68.v[0] * axis.m[0].v[2]) + (float)(v68.v[1] * axis.m[1].v[2])) + (float)(v68.v[2] * axis.m[2].v[2]);
        v64.v[2] = v43;
        v64.v[0] = v41;
        v64.v[1] = v42;
        if ( (LODWORD(v41) & 0x7F800000) == 2139095040 || (LODWORD(v42) & 0x7F800000) == 2139095040 || (COERCE_UNSIGNED_INT((float)((float)(v68.v[0] * axis.m[0].v[2]) + (float)(v68.v[1] * axis.m[1].v[2])) + (float)(v68.v[2] * axis.m[2].v[2])) & 0x7F800000) == 2139095040 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\movingplatforms\\bg_moving_platform_solver.cpp", 488, ASSERT_TYPE_SANITY, "( !IS_NAN( ( oldPosNewAngles )[0] ) && !IS_NAN( ( oldPosNewAngles )[1] ) && !IS_NAN( ( oldPosNewAngles )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( oldPosNewAngles )[0] ) && !IS_NAN( ( oldPosNewAngles )[1] ) && !IS_NAN( ( oldPosNewAngles )[2] )") )
            __debugbreak();
          v41 = v64.v[0];
          v42 = v64.v[1];
          v43 = v64.v[2];
        }
        v44 = v42 + this->m_platformOldOrigin.v[1];
        v64.v[0] = v41 + p_m_platformOldOrigin->v[0];
        v64.v[2] = v43 + this->m_platformOldOrigin.v[2];
        v64.v[1] = v44;
      }
      else
      {
        v64.v[0] = (float)((float)(end.v[0] - start.v[0]) * results.fraction) + start.v[0];
        v64.v[1] = (float)((float)(end.v[1] - start.v[1]) * results.fraction) + start.v[1];
        v64.v[2] = (float)((float)(end.v[2] - start.v[2]) * results.fraction) + start.v[2];
        if ( ((LODWORD(v64.v[0]) & 0x7F800000) == 2139095040 || (COERCE_UNSIGNED_INT((float)((float)(end.v[1] - start.v[1]) * results.fraction) + start.v[1]) & 0x7F800000) == 2139095040 || (COERCE_UNSIGNED_INT((float)((float)(end.v[2] - start.v[2]) * results.fraction) + start.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\movingplatforms\\bg_moving_platform_solver.cpp", 472, ASSERT_TYPE_SANITY, "( !IS_NAN( ( oldPosNewAngles )[0] ) && !IS_NAN( ( oldPosNewAngles )[1] ) && !IS_NAN( ( oldPosNewAngles )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( oldPosNewAngles )[0] ) && !IS_NAN( ( oldPosNewAngles )[1] ) && !IS_NAN( ( oldPosNewAngles )[2] )") )
          __debugbreak();
      }
      brushAngles = &this->m_platformOldAngles;
    }
    v37 = this->m_platformOrigin.v[1] - this->m_platformOldOrigin.v[1];
    v38 = this->m_platformOrigin.v[2] - this->m_platformOldOrigin.v[2];
    v65.v[0] = this->m_platformOrigin.v[0] - this->m_platformOldOrigin.v[0];
    v65.v[1] = v37;
    v65.v[2] = v38;
    if ( ((LODWORD(v65.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(v37) & 0x7F800000) == 2139095040 || (LODWORD(v38) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\movingplatforms\\bg_moving_platform_solver.cpp", 501, ASSERT_TYPE_SANITY, "( !IS_NAN( ( vel )[0] ) && !IS_NAN( ( vel )[1] ) && !IS_NAN( ( vel )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( vel )[0] ) && !IS_NAN( ( vel )[1] ) && !IS_NAN( ( vel )[2] )") )
      __debugbreak();
    v39 = this->m_bgHandler->IsClient((BgHandler *)this->m_bgHandler);
    vec = v65;
    if ( v39 )
      BGMovingPlatformSolver::TraceBrushEntityHandlerShared(this, NULL, &vec, &this->m_playerCurrentOrigin, &this->m_platformOldOrigin, &this->m_platformOldOrigin, brushAngles, 1);
    else
      BGMovingPlatformSolver::TraceBrushEntityHandlerShared(this, NULL, &vec, &v64, &this->m_platformOldOrigin, &this->m_platformOldOrigin, &this->m_platformAngles, 1);
    v47 = LODWORD(vec.v[1]);
    *(float *)&v47 = fsqrt((float)((float)(*(float *)&v47 * *(float *)&v47) + (float)(vec.v[0] * vec.v[0])) + (float)(vec.v[2] * vec.v[2]));
    _XMM3 = v47;
    __asm
    {
      vcmpless xmm0, xmm3, xmm11
      vblendvps xmm0, xmm3, xmm10, xmm0
    }
    v51 = COERCE_UNSIGNED_INT(vec.v[0] * (float)(1.0 / *(float *)&_XMM0)) & 0x7F800000;
    v52 = vec.v[2] * (float)(1.0 / *(float *)&_XMM0);
    v53 = vec.v[1] * (float)(1.0 / *(float *)&_XMM0);
    vec.v[2] = v52;
    vec.v[1] = v53;
    vec.v[0] = vec.v[0] * (float)(1.0 / *(float *)&_XMM0);
    if ( (v51 == 2139095040 || (LODWORD(v53) & 0x7F800000) == 2139095040 || (LODWORD(v52) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\movingplatforms\\bg_moving_platform_solver.cpp", 512, ASSERT_TYPE_SANITY, "( !IS_NAN( ( normal )[0] ) && !IS_NAN( ( normal )[1] ) && !IS_NAN( ( normal )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( normal )[0] ) && !IS_NAN( ( normal )[1] ) && !IS_NAN( ( normal )[2] )") )
      __debugbreak();
    WorldUpReferenceFrame::SetUpContribution(&this->m_refFrame, 0.0, &vec);
    v54 = vec.v[0];
    if ( (LODWORD(vec.v[0]) & 0x7F800000) == 2139095040 || (v55 = LODWORD(vec.v[1]), (LODWORD(vec.v[1]) & 0x7F800000) == 2139095040) || (v56 = vec.v[2], (LODWORD(vec.v[2]) & 0x7F800000) == 2139095040) )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\movingplatforms\\bg_moving_platform_solver.cpp", 516, ASSERT_TYPE_SANITY, "( !IS_NAN( ( normal )[0] ) && !IS_NAN( ( normal )[1] ) && !IS_NAN( ( normal )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( normal )[0] ) && !IS_NAN( ( normal )[1] ) && !IS_NAN( ( normal )[2] )") )
        __debugbreak();
      v54 = vec.v[0];
      v55 = LODWORD(vec.v[1]);
      v56 = vec.v[2];
    }
    v57 = v55;
    *(float *)&v57 = fsqrt((float)((float)(*(float *)&v55 * *(float *)&v55) + (float)(v54 * v54)) + (float)(v56 * v56));
    _XMM3 = v57;
    __asm
    {
      vcmpless xmm0, xmm3, xmm11
      vblendvps xmm0, xmm3, xmm10, xmm0
    }
    vec.v[0] = v54 * (float)(1.0 / *(float *)&_XMM0);
    vec.v[2] = v56 * (float)(1.0 / *(float *)&_XMM0);
    vec.v[1] = *(float *)&v55 * (float)(1.0 / *(float *)&_XMM0);
    WorldUpReferenceFrame::SetUpContribution(&this->m_refFrame, 0.0, &v65);
    v61 = vec.v[2];
    v62 = (float)((float)(vec.v[1] * v65.v[1]) + (float)(vec.v[0] * v65.v[0])) + (float)(vec.v[2] * v65.v[2]);
    *(float *)&_XMM0 = (float)(vec.v[1] * v62) + v64.v[1];
    this->m_transformedOrigin.v[0] = (float)(vec.v[0] * v62) + v64.v[0];
    this->m_transformedOrigin.v[2] = (float)(v61 * v62) + v64.v[2];
    this->m_transformedOrigin.v[1] = *(float *)&_XMM0;
    *(double *)&_XMM0 = WorldUpReferenceFrame::GetUpContribution(&this->m_refFrame, &v64);
    WorldUpReferenceFrame::SetUpContribution(&this->m_refFrame, *(float *)&_XMM0, &this->m_transformedOrigin);
    if ( ((LODWORD(this->m_transformedOrigin.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(this->m_transformedOrigin.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(this->m_transformedOrigin.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\movingplatforms\\bg_moving_platform_solver.cpp", 524, ASSERT_TYPE_SANITY, "( !IS_NAN( ( m_transformedOrigin )[0] ) && !IS_NAN( ( m_transformedOrigin )[1] ) && !IS_NAN( ( m_transformedOrigin )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( m_transformedOrigin )[0] ) && !IS_NAN( ( m_transformedOrigin )[1] ) && !IS_NAN( ( m_transformedOrigin )[2] )") )
      __debugbreak();
    if ( BGMovingPlatformSolver::FixPosition(this, &this->m_transformedOrigin) )
    {
      return 1i64;
    }
    else
    {
      this->m_transformedOrigin.v[0] = this->m_playerCurrentOrigin.v[0];
      this->m_transformedOrigin.v[1] = this->m_playerCurrentOrigin.v[1];
      this->m_transformedOrigin.v[2] = this->m_playerCurrentOrigin.v[2];
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
  float v1; 
  vec3_t v3; 

  v1 = this->m_playerCurrentOrigin.v[2];
  *(_QWORD *)v3.v = *(_QWORD *)this->m_playerCurrentOrigin.v;
  v3.v[2] = v1;
  return BGMovingPlatformSolver::GenericPenetrationSolver(this, &v3);
}

/*
==============
BGMovingPlatformSolver::TransformOriginZeroG
==============
*/
__int64 BGMovingPlatformSolver::TransformOriginZeroG(BGMovingPlatformSolver *this)
{
  float v1; 
  float v2; 
  vec3_t *p_m_platformOldAngles; 
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  bool v12; 
  __int64 result; 
  float v14; 
  float v15; 
  vec3_t outPenetration; 
  tmat43_t<vec3_t> axis; 
  tmat43_t<vec3_t> out; 

  v1 = this->m_platformOldAngles.v[0];
  v2 = this->m_platformOldAngles.v[1];
  p_m_platformOldAngles = &this->m_platformOldAngles;
  v5 = p_m_platformOldAngles->v[2] - this->m_platformAngles.v[2];
  if ( (float)((float)((float)((float)(v2 - this->m_platformAngles.v[1]) * (float)(v2 - this->m_platformAngles.v[1])) + (float)((float)(v1 - this->m_platformAngles.v[0]) * (float)(v1 - this->m_platformAngles.v[0]))) + (float)(v5 * v5)) <= 0.0000010000001 )
  {
    v7 = this->m_playerCurrentOrigin.v[0];
    v8 = this->m_playerCurrentOrigin.v[1];
    v9 = this->m_playerCurrentOrigin.v[2];
  }
  else
  {
    AnglesToAxis(p_m_platformOldAngles, (tmat33_t<vec3_t> *)&axis);
    v6 = this->m_platformOldOrigin.v[1];
    axis.m[3].v[0] = this->m_platformOldOrigin.v[0];
    axis.m[3].v[2] = this->m_platformOldOrigin.v[2];
    axis.m[3].v[1] = v6;
    MatrixInverseOrthogonal43(&axis, &out);
    MatrixTransformVector43(&this->m_playerCurrentOrigin, &out, &outPenetration);
    AnglesToAxis(&this->m_platformAngles, (tmat33_t<vec3_t> *)&axis);
    v7 = (float)((float)((float)(outPenetration.v[0] * axis.m[0].v[0]) + (float)(outPenetration.v[1] * axis.m[1].v[0])) + (float)(outPenetration.v[2] * axis.m[2].v[0])) + this->m_platformOldOrigin.v[0];
    v8 = (float)((float)((float)(outPenetration.v[0] * axis.m[0].v[1]) + (float)(outPenetration.v[1] * axis.m[1].v[1])) + (float)(outPenetration.v[2] * axis.m[2].v[1])) + this->m_platformOldOrigin.v[1];
    v9 = (float)((float)((float)(outPenetration.v[0] * axis.m[0].v[2]) + (float)(outPenetration.v[1] * axis.m[1].v[2])) + (float)(outPenetration.v[2] * axis.m[2].v[2])) + this->m_platformOldOrigin.v[2];
  }
  v10 = this->m_platformOrigin.v[1];
  v11 = this->m_platformOrigin.v[2];
  this->m_transformedOrigin.v[0] = (float)(this->m_platformOrigin.v[0] - this->m_platformOldOrigin.v[0]) + v7;
  this->m_transformedOrigin.v[1] = (float)(v10 - this->m_platformOldOrigin.v[1]) + v8;
  this->m_transformedOrigin.v[2] = (float)(v11 - this->m_platformOldOrigin.v[2]) + v9;
  v12 = BGMovingPlatformClient::PenetrationEntityHandler((BGMovingPlatformClient *)this->m_movingPlatforms, this->m_ps, &this->m_transformedOrigin, this->m_bound, this->m_platformId, this->m_platformBrushId, &this->m_platformOrigin, &this->m_platformAngles, this->m_clipMask, &outPenetration, 1) == 0;
  result = 1i64;
  if ( !v12 )
  {
    v14 = outPenetration.v[1];
    this->m_transformedOrigin.v[0] = outPenetration.v[0] + this->m_transformedOrigin.v[0];
    v15 = outPenetration.v[2];
    this->m_transformedOrigin.v[1] = v14 + this->m_transformedOrigin.v[1];
    this->m_transformedOrigin.v[2] = v15 + this->m_transformedOrigin.v[2];
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
  bool v4; 
  const dvar_t *v5; 
  Physics_WorldId v6; 
  const BgPlayerTraceInfo *v7; 
  BgTrace v9; 
  trace_t results; 

  v4 = BGMovingPlatformPS::UseRockingMoverWallFix2();
  v5 = DVARBOOL_playerCharacterCollisionVehicleJumpWallFix;
  if ( !v4 )
    forceTest = 0;
  if ( !DVARBOOL_playerCharacterCollisionVehicleJumpWallFix && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerCharacterCollisionVehicleJumpWallFix") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( !v5->current.enabled || !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB|0x100) || this->m_transformedOrigin.v[0] == this->m_playerCurrentOrigin.v[0] && this->m_transformedOrigin.v[1] == this->m_playerCurrentOrigin.v[1] && this->m_transformedOrigin.v[2] == this->m_playerCurrentOrigin.v[2] && !forceTest )
    return 1;
  v6 = this->m_bgHandler->GetPhysicsWorldId((BgHandler *)this->m_bgHandler);
  v7 = this->m_bgHandler->GetPlayerTraceInfo(this->m_bgHandler, (unsigned int)this->m_ps->clientNum);
  BgTrace::BgTrace(&v9, v7);
  BgTrace::LegacyTraceHandler(&v9, v6, &results, &this->m_playerCurrentOrigin, &this->m_transformedOrigin, this->m_bound, this->m_platformId, this->m_clipMask & 0xFDFFBFFF, this->m_ps);
  if ( results.fraction == 1.0 || results.hitId != 2046 )
    return 1;
  this->m_transformedOrigin.v[0] = this->m_playerCurrentOrigin.v[0];
  this->m_transformedOrigin.v[1] = this->m_playerCurrentOrigin.v[1];
  this->m_transformedOrigin.v[2] = this->m_playerCurrentOrigin.v[2];
  return 0;
}

