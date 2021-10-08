/*
==============
CGMovingPlatforms::CacheClientLocalOffset
==============
*/

void __fastcall CGMovingPlatforms::CacheClientLocalOffset(LocalClientNum_t localClientNum, const centity_t *cent, const clientState_t *cs)
{
  ?CacheClientLocalOffset@CGMovingPlatforms@@SAXW4LocalClientNum_t@@PEBUcentity_t@@PEBUclientState_t@@@Z(localClientNum, cent, cs);
}

/*
==============
CGMovingPlatforms::PlayDynamicBoltEffect
==============
*/

void __fastcall CGMovingPlatforms::PlayDynamicBoltEffect(const entityState_t *es, LocalClientNum_t localClientNum, const FXRegisteredDef *const def, const vec3_t *origin, const tmat33_t<vec3_t> *axis)
{
  ?PlayDynamicBoltEffect@CGMovingPlatforms@@SAXPEBUentityState_t@@W4LocalClientNum_t@@QEBVFXRegisteredDef@@AEBTvec3_t@@AEBT?$tmat33_t@Tvec3_t@@@@@Z(es, localClientNum, def, origin, axis);
}

/*
==============
CGMovingPlatforms::ProcessDynamicBoltPosition
==============
*/

void __fastcall CGMovingPlatforms::ProcessDynamicBoltPosition(const entityState_t *es, LocalClientNum_t localClientNum, const vec3_t *origin, vec3_t *outOrigin)
{
  ?ProcessDynamicBoltPosition@CGMovingPlatforms@@SAXPEBUentityState_t@@W4LocalClientNum_t@@AEBTvec3_t@@AEAT4@@Z(es, localClientNum, origin, outOrigin);
}

/*
==============
CGMovingPlatformClient::UpdateFrameCache
==============
*/

void __fastcall CGMovingPlatformClient::UpdateFrameCache(CGMovingPlatformClient *this, const LocalClientNum_t localClientNum)
{
  ?UpdateFrameCache@CGMovingPlatformClient@@QEAAXW4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
CGMovingPlatformClient::InterpolateEntityOrigin
==============
*/

void __fastcall CGMovingPlatformClient::InterpolateEntityOrigin(CGMovingPlatformClient *this, cg_t *cgameGlob, const centity_t *cent, const float time, vec3_t *outOrigin, vec3_t *outAngles)
{
  ?InterpolateEntityOrigin@CGMovingPlatformClient@@AEAAXPEAVcg_t@@PEBUcentity_t@@MAEATvec3_t@@2@Z(this, cgameGlob, cent, time, outOrigin, outAngles);
}

/*
==============
CGMovingPlatformClient::DoEntitiesShareHierarchy
==============
*/

bool __fastcall CGMovingPlatformClient::DoEntitiesShareHierarchy(CGMovingPlatformClient *this, int ent0, int ent1)
{
  return ?DoEntitiesShareHierarchy@CGMovingPlatformClient@@UEBA_NHH@Z(this, ent0, ent1);
}

/*
==============
CGMovingPlatformClient::GetCharacterEntityInfo
==============
*/

int __fastcall CGMovingPlatformClient::GetCharacterEntityInfo(CGMovingPlatformClient *this, int entId, BGMovingPlatformClient::CharacterInfo *outInfo)
{
  return ?GetCharacterEntityInfo@CGMovingPlatformClient@@UEBAHHPEAUCharacterInfo@BGMovingPlatformClient@@@Z(this, entId, outInfo);
}

/*
==============
CGMovingPlatformClient::GetMoverEntityInfo
==============
*/

int __fastcall CGMovingPlatformClient::GetMoverEntityInfo(CGMovingPlatformClient *this, int entId, BGMovingPlatformClient::MoverInfo *outInfo)
{
  return ?GetMoverEntityInfo@CGMovingPlatformClient@@UEBAHHPEAUMoverInfo@BGMovingPlatformClient@@@Z(this, entId, outInfo);
}

/*
==============
CGMovingPlatforms::ApplyClientLocalOffset
==============
*/

void __fastcall CGMovingPlatforms::ApplyClientLocalOffset(LocalClientNum_t localClientNum, float frameTime, centity_t *cent)
{
  ?ApplyClientLocalOffset@CGMovingPlatforms@@SAXW4LocalClientNum_t@@MPEAUcentity_t@@@Z(localClientNum, frameTime, cent);
}

/*
==============
CGMovingPlatforms::InterpolatePlayerLocalOffset
==============
*/

void __fastcall CGMovingPlatforms::InterpolatePlayerLocalOffset(const playerState_s *prevPs, const playerState_s *nextPs, float fraction, playerState_s *outPs)
{
  ?InterpolatePlayerLocalOffset@CGMovingPlatforms@@SAXPEBUplayerState_s@@0MPEAU2@@Z(prevPs, nextPs, fraction, outPs);
}

/*
==============
CGMovingPlatformClient::UpdatePredictedClient
==============
*/

void __fastcall CGMovingPlatformClient::UpdatePredictedClient(CGMovingPlatformClient *this, LocalClientNum_t localClientNum, pmove_t *pm, tmat43_t<vec3_t> *outMoverTransform, vec3_t *outLocalOrigin)
{
  ?UpdatePredictedClient@CGMovingPlatformClient@@QEAAXW4LocalClientNum_t@@PEAVpmove_t@@AEAT?$tmat43_t@Tvec3_t@@@@AEATvec3_t@@@Z(this, localClientNum, pm, outMoverTransform, outLocalOrigin);
}

/*
==============
CGMovingPlatformClient::GetMoverInfoFromClientEntity
==============
*/

void __fastcall CGMovingPlatformClient::GetMoverInfoFromClientEntity(LocalClientNum_t localClientNum, const centity_t *cent, vec3_t *outOrigin, vec3_t *outAngles)
{
  ?GetMoverInfoFromClientEntity@CGMovingPlatformClient@@SAXW4LocalClientNum_t@@PEBUcentity_t@@AEATvec3_t@@2@Z(localClientNum, cent, outOrigin, outAngles);
}

/*
==============
CGMovingPlatformClient::AdjustPositionForMover
==============
*/

void __fastcall CGMovingPlatformClient::AdjustPositionForMover(CGMovingPlatformClient *this, LocalClientNum_t localClientNum, const vec3_t *in, int fromTime, int toTime, vec3_t *out, vec3_t *outDeltaPlatformOrigin, vec3_t *outDeltaAngles, pmove_t *pm)
{
  ?AdjustPositionForMover@CGMovingPlatformClient@@QEAAXW4LocalClientNum_t@@AEBTvec3_t@@HHAEAT3@22PEAVpmove_t@@@Z(this, localClientNum, in, fromTime, toTime, out, outDeltaPlatformOrigin, outDeltaAngles, pm);
}

/*
==============
CGMovingPlatformClient::CGMovingPlatformClient
==============
*/

void __fastcall CGMovingPlatformClient::CGMovingPlatformClient(CGMovingPlatformClient *this, LocalClientNum_t localClientNum)
{
  ??0CGMovingPlatformClient@@QEAA@W4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
CGMovingPlatforms::ShouldDynamicBoltBullet
==============
*/

int __fastcall CGMovingPlatforms::ShouldDynamicBoltBullet(LocalClientNum_t localClient, unsigned int targetEntityNum)
{
  return ?ShouldDynamicBoltBullet@CGMovingPlatforms@@SAHW4LocalClientNum_t@@I@Z(localClient, targetEntityNum);
}

/*
==============
CGMovingPlatformClient::UpdateInternalTransforms
==============
*/

void __fastcall CGMovingPlatformClient::UpdateInternalTransforms(CGMovingPlatformClient *this, pmove_t *pm, const tmat43_t<vec3_t> *startTransform, const tmat43_t<vec3_t> *endTransform, vec3_t *outAppliedAngles)
{
  ?UpdateInternalTransforms@CGMovingPlatformClient@@EEAAXPEAVpmove_t@@AEBT?$tmat43_t@Tvec3_t@@@@1AEATvec3_t@@@Z(this, pm, startTransform, endTransform, outAppliedAngles);
}

/*
==============
CGMovingPlatforms::ResetClientLocalOffset
==============
*/

void __fastcall CGMovingPlatforms::ResetClientLocalOffset(characterInfo_t *ci)
{
  ?ResetClientLocalOffset@CGMovingPlatforms@@SAXPEAUcharacterInfo_t@@@Z(ci);
}

/*
==============
CGMovingPlatformClient::AdjustClientPositionForMover
==============
*/

void __fastcall CGMovingPlatformClient::AdjustClientPositionForMover(CGMovingPlatformClient *this, const vec3_t *in, centity_t *mover, int fromTime, int toTime, vec3_t *out, vec3_t *outDeltaPlatformOrigin, vec3_t *outDeltaAngles, cg_t *cgameGlob, pmove_t *pm)
{
  ?AdjustClientPositionForMover@CGMovingPlatformClient@@AEAAXAEBTvec3_t@@PEAUcentity_t@@HHAEAT2@22PEAVcg_t@@PEAVpmove_t@@@Z(this, in, mover, fromTime, toTime, out, outDeltaPlatformOrigin, outDeltaAngles, cgameGlob, pm);
}

/*
==============
CGMovingPlatforms::CGMovingPlatforms
==============
*/

void __fastcall CGMovingPlatforms::CGMovingPlatforms(CGMovingPlatforms *this)
{
  ??0CGMovingPlatforms@@QEAA@XZ(this);
}

/*
==============
CGMovingPlatformClient::GetPlatformAngularVelocity
==============
*/

void __fastcall CGMovingPlatformClient::GetPlatformAngularVelocity(CGMovingPlatformClient *this, vec3_t *outVelocity)
{
  ?GetPlatformAngularVelocity@CGMovingPlatformClient@@QEBAXAEATvec3_t@@@Z(this, outVelocity);
}

/*
==============
CGMovingPlatforms::IsMoverMoving
==============
*/

int __fastcall CGMovingPlatforms::IsMoverMoving(const centity_t *cent)
{
  return ?IsMoverMoving@CGMovingPlatforms@@SAHPEBUcentity_t@@@Z(cent);
}

/*
==============
CGMovingPlatformClient::IsMovingPlatformMoving
==============
*/

bool __fastcall CGMovingPlatformClient::IsMovingPlatformMoving(CGMovingPlatformClient *this, int entityNum)
{
  return ?IsMovingPlatformMoving@CGMovingPlatformClient@@UEBA_NH@Z(this, entityNum);
}

/*
==============
AngleNormalize360
==============
*/

double __fastcall AngleNormalize360(const float angle)
{
  double result; 

  *(float *)&result = ?AngleNormalize360@@YAMM@Z(angle);
  return result;
}

/*
==============
CGMovingPlatformClient::AngleNormalize360
==============
*/

void __fastcall CGMovingPlatformClient::AngleNormalize360(CGMovingPlatformClient *this, float start, float *target)
{
  ?AngleNormalize360@CGMovingPlatformClient@@AEAAXMAEAM@Z(this, start, target);
}

/*
==============
CGMovingPlatformClient::CGMovingPlatformClient
==============
*/
void CGMovingPlatformClient::CGMovingPlatformClient(CGMovingPlatformClient *this, LocalClientNum_t localClientNum)
{
  BGMovingPlatformClient::BGMovingPlatformClient(this, localClientNum);
  this->__vftable = (CGMovingPlatformClient_vtbl *)&CGMovingPlatformClient::`vftable';
}

/*
==============
CGMovingPlatforms::CGMovingPlatforms
==============
*/
void CGMovingPlatforms::CGMovingPlatforms(CGMovingPlatforms *this)
{
  BGMovingPlatforms::BGMovingPlatforms(this);
  this->__vftable = (CGMovingPlatforms_vtbl *)&CGMovingPlatforms::`vftable';
}

/*
==============
CGMovingPlatformClient::AdjustClientPositionForMover
==============
*/
void CGMovingPlatformClient::AdjustClientPositionForMover(CGMovingPlatformClient *this, const vec3_t *in, centity_t *mover, int fromTime, int toTime, vec3_t *out, vec3_t *outDeltaPlatformOrigin, vec3_t *outDeltaAngles, cg_t *cgameGlob, pmove_t *pm)
{
  char v40; 
  CG_PhysicsObject *v66; 
  unsigned int v67; 
  const DObj *ClientDObj; 
  playerState_s *ps; 
  Bounds *v73; 
  CgHandler *v74; 
  entityState_t *p_nextState; 
  int flags; 
  int clipMask; 
  Bounds *v81; 
  LocalClientNum_t localClientNum; 
  CgHandler *handler; 
  vec3_t *v87; 
  bool v88; 
  Bounds *bounds; 
  float v109; 
  char v110; 
  unsigned int instanceId; 
  DObj *obj; 
  vec3_t position; 
  vec3_t *currentOrigin; 
  cg_t *v116; 
  __int64 v117; 
  vec3_t angles; 
  vec3_t inOrigin; 
  vec3_t outAngles; 
  vec3_t oldOrigin; 
  vec4_t quat; 
  BGMovingPlatformSolver v123; 
  char v124; 
  void *retaddr; 

  _RAX = &retaddr;
  v117 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovaps xmmword ptr [rax-88h], xmm9
  }
  _R14 = mover;
  currentOrigin = (vec3_t *)in;
  _RCX = out;
  _R12 = outDeltaAngles;
  v116 = cgameGlob;
  *(_QWORD *)outDeltaAngles->v = 0i64;
  outDeltaAngles->v[2] = 0.0;
  *(_QWORD *)outDeltaPlatformOrigin->v = 0i64;
  outDeltaPlatformOrigin->v[2] = 0.0;
  out->v[0] = in->v[0];
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+4]
    vmovss  dword ptr [rcx+4], xmm0
    vmovss  xmm1, dword ptr [rdx+8]
    vmovss  dword ptr [rcx+8], xmm1
  }
  if ( this->m_frameCache.nextServerTime != this->m_frameCache.prevServerTime )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmovss  xmm9, cs:__real@3f800000
      vdivss  xmm7, xmm9, xmm0
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm0, xmm0, xmm7; val
      vmovaps xmm2, xmm9; max
      vmovss  xmm1, cs:__real@bf800000; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmovaps xmm8, xmm0
      vxorps  xmm3, xmm3, xmm3
      vcvtsi2ss xmm3, xmm3, eax
      vmulss  xmm0, xmm3, xmm7; val
      vmovaps xmm2, xmm9; max
      vmovss  xmm1, cs:__real@bf800000; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmovaps xmm6, xmm0
      vmovaps xmm3, xmm8; time
    }
    CGMovingPlatformClient::InterpolateEntityOrigin(this, cgameGlob, _R14, *(const float *)&_XMM3, &oldOrigin, &outAngles);
    __asm { vmovaps xmm3, xmm6; time }
    CGMovingPlatformClient::InterpolateEntityOrigin(this, cgameGlob, _R14, *(const float *)&_XMM3, &inOrigin, &angles);
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+180h+inOrigin]
      vsubss  xmm3, xmm0, dword ptr [rbp+180h+oldOrigin]
      vmovss  xmm1, dword ptr [rbp+180h+inOrigin+4]
      vsubss  xmm2, xmm1, dword ptr [rbp+180h+oldOrigin+4]
      vmovss  xmm0, dword ptr [rbp+180h+inOrigin+8]
      vsubss  xmm4, xmm0, dword ptr [rbp+180h+oldOrigin+8]
      vmulss  xmm2, xmm2, xmm2
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm2, xmm3, xmm0
      vsqrtss xmm1, xmm2, xmm2
      vmovss  xmm9, cs:__real@3a83126f
      vcomiss xmm1, xmm9
    }
    if ( !v40 )
      goto LABEL_4;
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+180h+angles]
      vsubss  xmm3, xmm0, dword ptr [rbp+180h+var_180]
      vmovss  xmm1, dword ptr [rbp+180h+angles+4]
      vsubss  xmm2, xmm1, dword ptr [rbp+180h+var_180+4]
      vmovss  xmm0, dword ptr [rbp+180h+angles+8]
      vsubss  xmm4, xmm0, dword ptr [rbp+180h+var_180+8]
      vmulss  xmm2, xmm2, xmm2
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm2, xmm3, xmm0
      vsqrtss xmm1, xmm2, xmm2
      vcomiss xmm1, xmm9
    }
    if ( !v40 )
    {
LABEL_4:
      v66 = CG_PhysicsObject_Get(_R14->nextState.number, this->m_localClientNum);
      if ( !v66 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\movingplatforms\\cg_moving_platforms.cpp", 210, ASSERT_TYPE_ASSERT, "(moverPhysObj)", (const char *)&queryFormat, "moverPhysObj") )
        __debugbreak();
      v67 = v66->physicsInstances[3 * this->m_localClientNum + 2];
      instanceId = v67;
      R_EndDelayedSceneModels(1);
      CG_GetPoseOrigin(&_R14->pose, &position);
      __asm
      {
        vmovss  xmm6, dword ptr [r14+48h]
        vmovss  xmm7, dword ptr [r14+4Ch]
        vmovss  xmm8, dword ptr [r14+50h]
      }
      obj = NULL;
      v110 = 0;
      if ( _R14->pose.isEntityPose )
      {
        ClientDObj = Com_GetClientDObj(_R14->nextState.number, this->m_localClientNum);
        obj = (DObj *)ClientDObj;
        if ( ClientDObj )
          DObjLock(ClientDObj);
        _R14->pose.isEntityPose = 0;
        v110 = 1;
      }
      ps = pm->ps;
      v73 = pm->bounds;
      v74 = CgHandler::getHandler(this->m_localClientNum);
      BGMovingPlatformPS::UpdateMoverUpAngles(&ps->movingPlatforms, pm->ps, v74, v73);
      CG_SetPoseOrigin(&_R14->pose, &inOrigin);
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+180h+angles]
        vmovss  dword ptr [r14+48h], xmm0
        vmovss  xmm1, dword ptr [rbp+180h+angles+4]
        vmovss  dword ptr [r14+4Ch], xmm1
        vmovss  xmm0, dword ptr [rbp+180h+angles+8]
        vmovss  dword ptr [r14+50h], xmm0
      }
      AnglesToQuat(&_R14->pose.angles, &quat);
      if ( v67 != -1 )
        Physics_WarpInstanceTo((Physics_WorldId)(3 * this->m_localClientNum + 2), v67, &inOrigin, &quat, 1);
      p_nextState = &_R14->nextState;
      flags = BGMovingPlatforms::IsMoverOptimized(&_R14->nextState);
      clipMask = pm->tracemask & 0xFDFFFFFF;
      v81 = pm->bounds;
      localClientNum = this->m_localClientNum;
      handler = CgHandler::getHandler(pm->localClientNum);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, edx
        vmulss  xmm1, xmm0, xmm9
        vmovss  [rsp+280h+var_218], xmm1
      }
      bounds = v81;
      v87 = currentOrigin;
      BGMovingPlatformSolver::BGMovingPlatformSolver(&v123, pm->ps, pm->movingPlatforms, &inOrigin, &angles, &oldOrigin, &outAngles, currentOrigin, p_nextState->number, mover->nextState.index.brushModel, handler, localClientNum, bounds, v109, clipMask, flags);
      v88 = BGMovingPlatformSolver::SolveSystem(&v123) != 0;
      CG_SetPoseOrigin(&mover->pose, &position);
      if ( v110 )
      {
        if ( obj )
          DObjUnlock(obj);
        mover->pose.isEntityPose = 1;
      }
      _RCX = &mover->pose.angles;
      __asm
      {
        vmovss  dword ptr [rcx], xmm6
        vmovss  dword ptr [rcx+4], xmm7
        vmovss  dword ptr [rcx+8], xmm8
      }
      AnglesToQuat(&mover->pose.angles, &quat);
      if ( instanceId != -1 )
        Physics_WarpInstanceTo((Physics_WorldId)(3 * this->m_localClientNum + 2), instanceId, &position, &quat, 1);
      if ( v88 )
      {
        BGMovingPlatformSolver::GetTransformedOrigin(&v123, out);
        if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&v116->predictedPlayerState.otherFlags, ACTIVE, 0xDu) )
        {
          *(_QWORD *)outDeltaAngles->v = 0i64;
          outDeltaAngles->v[2] = 0.0;
        }
        else
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+180h+angles]
            vsubss  xmm1, xmm0, dword ptr [rbp+180h+var_180]
            vmovss  dword ptr [r12], xmm1
            vmovss  xmm2, dword ptr [rbp+180h+angles+4]
            vsubss  xmm0, xmm2, dword ptr [rbp+180h+var_180+4]
            vmovss  dword ptr [r12+4], xmm0
            vmovss  xmm1, dword ptr [rbp+180h+angles+8]
            vsubss  xmm2, xmm1, dword ptr [rbp+180h+var_180+8]
            vmovss  dword ptr [r12+8], xmm2
          }
        }
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+180h+inOrigin]
          vsubss  xmm1, xmm0, dword ptr [rbp+180h+oldOrigin]
        }
        _RAX = outDeltaPlatformOrigin;
        __asm
        {
          vmovss  dword ptr [rax], xmm1
          vmovss  xmm2, dword ptr [rbp+180h+inOrigin+4]
          vsubss  xmm0, xmm2, dword ptr [rbp+180h+oldOrigin+4]
          vmovss  dword ptr [rax+4], xmm0
          vmovss  xmm1, dword ptr [rbp+180h+inOrigin+8]
          vsubss  xmm2, xmm1, dword ptr [rbp+180h+oldOrigin+8]
          vmovss  dword ptr [rax+8], xmm2
        }
      }
      else
      {
        this->DoEntitiesShareHierarchy(this, mover->nextState.number, v123.m_failedTraceHitId);
        *out = *v87;
        *(_QWORD *)outDeltaAngles->v = 0i64;
        outDeltaAngles->v[2] = 0.0;
        *(_QWORD *)outDeltaPlatformOrigin->v = 0i64;
        outDeltaPlatformOrigin->v[2] = 0.0;
      }
      memset(&position, 0, sizeof(position));
    }
  }
  _R11 = &v124;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
  }
}

/*
==============
CGMovingPlatformClient::AdjustPositionForMover
==============
*/
void CGMovingPlatformClient::AdjustPositionForMover(CGMovingPlatformClient *this, LocalClientNum_t localClientNum, const vec3_t *in, int fromTime, int toTime, vec3_t *out, vec3_t *outDeltaPlatformOrigin, vec3_t *outDeltaAngles, pmove_t *pm)
{
  const dvar_t *v14; 
  int moverId; 
  centity_t *Entity; 
  playerState_s *ps; 
  int pm_type; 
  cg_t *cgameGlob; 
  vec3_t v27; 
  vec3_t v28; 

  _R14 = outDeltaPlatformOrigin;
  _R15 = outDeltaAngles;
  *(_QWORD *)outDeltaPlatformOrigin->v = 0i64;
  outDeltaPlatformOrigin->v[2] = 0.0;
  *(_QWORD *)outDeltaAngles->v = 0i64;
  outDeltaAngles->v[2] = 0.0;
  v14 = DCONST_DVARBOOL_usePmoveMoverSystem;
  if ( !DCONST_DVARBOOL_usePmoveMoverSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "usePmoveMoverSystem") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  if ( v14->current.enabled )
    goto LABEL_15;
  moverId = this->m_frameCache.moverId;
  if ( moverId <= 0 )
    goto LABEL_15;
  if ( (unsigned int)moverId >= 0x7FE )
    goto LABEL_15;
  Entity = CG_GetEntity(localClientNum, moverId);
  if ( !BGMovingPlatforms::IsPlatformType(Entity->nextState.eType) )
    goto LABEL_15;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\movingplatforms\\cg_moving_platforms.cpp", 362, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  pm_type = ps->pm_type;
  if ( pm_type == 1 || pm_type == 8 || (ps->linkFlags.m_flags[0] & 4) != 0 )
  {
LABEL_15:
    *out = *in;
  }
  else
  {
    cgameGlob = CG_GetLocalClientGlobals(localClientNum);
    CGMovingPlatformClient::AdjustClientPositionForMover(this, in, Entity, fromTime, toTime, out, &v28, &v27, cgameGlob, pm);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+0C8h+var_70]
      vmovss  xmm1, dword ptr [rsp+0C8h+var_70+4]
      vmovss  dword ptr [r15], xmm0
      vmovss  xmm0, dword ptr [rsp+0C8h+var_70+8]
      vmovss  dword ptr [r15+4], xmm1
      vmovss  xmm1, dword ptr [rsp+0C8h+var_60]
      vmovss  dword ptr [r15+8], xmm0
      vmovss  xmm0, dword ptr [rsp+0C8h+var_60+4]
      vmovss  dword ptr [r14], xmm1
      vmovss  xmm1, dword ptr [rsp+0C8h+var_60+8]
      vmovss  dword ptr [r14+8], xmm1
      vmovss  dword ptr [r14+4], xmm0
    }
  }
}

/*
==============
CGMovingPlatformClient::AngleNormalize360
==============
*/

void __fastcall CGMovingPlatformClient::AngleNormalize360(CGMovingPlatformClient *this, double start, float *target)
{
  char v3; 

  __asm
  {
    vmovss  xmm2, dword ptr [r8]
    vsubss  xmm0, xmm2, xmm1
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, cs:__real@43340000
  }
  if ( !v3 )
  {
    __asm { vcomiss xmm2, xmm1 }
    if ( v3 )
    {
      __asm
      {
        vaddss  xmm0, xmm2, cs:__real@43b40000
        vmovss  dword ptr [r8], xmm0
      }
    }
    else
    {
      __asm
      {
        vsubss  xmm0, xmm2, cs:__real@43b40000
        vmovss  dword ptr [r8], xmm0
      }
    }
  }
}

/*
==============
CGMovingPlatforms::ApplyClientLocalOffset
==============
*/

void __fastcall CGMovingPlatforms::ApplyClientLocalOffset(LocalClientNum_t localClientNum, double frameTime, centity_t *cent)
{
  cg_t *LocalClientGlobals; 
  const dvar_t *v8; 
  cg_t *v9; 
  int v10; 
  unsigned int clientNum; 
  characterInfo_t *CharacterInfo; 
  int moverId; 
  centity_t *Entity; 
  int number; 
  const cpose_t *p_pose; 
  vec3_t in1; 
  vec3_t out; 
  tmat43_t<vec3_t> axis; 
  char v39; 

  __asm
  {
    vmovaps [rsp+0C8h+var_28], xmm6
    vmovaps xmm6, xmm1
  }
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\movingplatforms\\cg_moving_platforms.cpp", 845, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v8 = DCONST_DVARBOOL_useLocalSpaceForAllMovers;
  v9 = LocalClientGlobals;
  if ( !DCONST_DVARBOOL_useLocalSpaceForAllMovers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "useLocalSpaceForAllMovers") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( v8->current.enabled || (v10 = v9->predictedPlayerState.vehicleState.entity) != 0 && v10 != 2047 )
  {
    clientNum = cent->nextState.clientNum;
    if ( v9->HasCharacterInfo(v9, clientNum) )
    {
      CharacterInfo = CG_GetCharacterInfo(v9, clientNum);
      _RDI = CharacterInfo;
      if ( CharacterInfo )
      {
        moverId = CharacterInfo->nextMoverOffset.moverId;
        if ( moverId )
        {
          if ( _RDI->prevMoverOffset.moverId == moverId && (Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_useLocalSpaceForAllMovers, "useLocalSpaceForAllMovers") || v9->predictedPlayerState.vehicleState.entity == _RDI->nextMoverOffset.moverId) )
          {
            Entity = CG_GetEntity(localClientNum, _RDI->nextMoverOffset.moverId);
            __asm
            {
              vmovss  xmm3, dword ptr [rdi+38F8h]
              vmovss  xmm0, dword ptr [rdi+390Ch]
              vmovss  xmm4, dword ptr [rdi+38FCh]
              vmovss  xmm5, dword ptr [rdi+3900h]
            }
            number = cent->nextState.number;
            __asm
            {
              vsubss  xmm1, xmm0, xmm3
              vmovss  xmm0, dword ptr [rdi+3910h]
              vmulss  xmm2, xmm1, xmm6
              vaddss  xmm3, xmm2, xmm3
              vsubss  xmm1, xmm0, xmm4
              vmovss  xmm0, dword ptr [rdi+3914h]
              vmulss  xmm2, xmm1, xmm6
              vmovss  dword ptr [rsp+0C8h+in1], xmm3
              vaddss  xmm3, xmm2, xmm4
              vsubss  xmm1, xmm0, xmm5
              vmulss  xmm2, xmm1, xmm6
              vmovss  dword ptr [rsp+0C8h+in1+4], xmm3
              vaddss  xmm3, xmm2, xmm5
              vmovss  dword ptr [rsp+0C8h+in1+8], xmm3
            }
            p_pose = &Entity->pose;
            CG_Entity_ResetSkeleton(localClientNum, number);
            AnglesToAxis(&p_pose->angles, (tmat33_t<vec3_t> *)&axis);
            CG_GetPoseOrigin(p_pose, &axis.m[3]);
            MatrixTransformVector43(&in1, &axis, &out);
            CG_SetPoseOrigin(&cent->pose, &out);
          }
        }
      }
    }
  }
  _R11 = &v39;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
}

/*
==============
CGMovingPlatforms::CacheClientLocalOffset
==============
*/
void CGMovingPlatforms::CacheClientLocalOffset(LocalClientNum_t localClientNum, const centity_t *cent, const clientState_t *cs)
{
  CgStatic *LocalClientStatics; 
  int clientNum; 
  cg_t *LocalClientGlobals; 
  int movingPlatform; 
  centity_t *Entity; 
  centity_t *v13; 
  vec3_t trBase; 
  __int64 v15; 
  vec3_t in1; 
  tmat43_t<vec3_t> axis; 

  v15 = -2i64;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\movingplatforms\\cg_moving_platforms.cpp", 774, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (cent->flags & 1) != 0 && cent->nextState.number != CG_GetLocalClientGlobals(localClientNum)->clientNum )
  {
    LocalClientStatics = CgStatic::GetLocalClientStatics(localClientNum);
    if ( LocalClientStatics )
    {
      clientNum = cent->nextState.clientNum;
      LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)LocalClientStatics->m_localClientNum);
      if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 25, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
        __debugbreak();
      _RDI = CG_GetCharacterInfo(LocalClientGlobals, clientNum);
      if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\movingplatforms\\cg_moving_platforms.cpp", 798, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
        __debugbreak();
      __asm
      {
        vmovups xmm0, xmmword ptr [rdi+3904h]
        vmovups xmmword ptr [rdi+38F0h], xmm0
      }
      _RDI->prevMoverOffset.localOffset.v[2] = _RDI->nextMoverOffset.localOffset.v[2];
      _RDI->nextMoverOffset.moverId = 0;
      if ( cent->nextState.eType == ET_PLAYER )
      {
        movingPlatform = cs->movingPlatform;
        if ( BGMovingPlatforms::IsMovingPlatform(movingPlatform) )
        {
          Entity = CG_GetEntity(localClientNum, movingPlatform);
          v13 = Entity;
          if ( (Entity->flags & 1) != 0 )
          {
            Trajectory_GetTrBase(&Entity->nextState.lerp.apos, &trBase);
            AnglesToAxis(&trBase, (tmat33_t<vec3_t> *)&axis);
            Trajectory_GetTrBase(&v13->nextState.lerp.pos, &axis.m[3]);
            Trajectory_GetTrBase(&cent->nextState.lerp.pos, &in1);
            MatrixTransposeTransformVector43(&in1, &axis, &_RDI->nextMoverOffset.localOffset);
            _RDI->nextMoverOffset.moverId = movingPlatform;
            memset(&trBase, 0, sizeof(trBase));
          }
        }
      }
    }
  }
}

/*
==============
CGMovingPlatformClient::DoEntitiesShareHierarchy
==============
*/
bool CGMovingPlatformClient::DoEntitiesShareHierarchy(CGMovingPlatformClient *this, int ent0, int ent1)
{
  centity_t *Entity; 
  centity_t *v6; 
  centity_t *RootParent; 
  bool result; 

  Entity = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, ent0);
  result = 0;
  if ( (Entity->flags & 1) != 0 )
  {
    v6 = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, ent1);
    if ( (v6->flags & 1) != 0 )
    {
      RootParent = CG_Entity_GetRootParent(this->m_localClientNum, v6);
      if ( CG_Entity_GetRootParent(this->m_localClientNum, Entity) == RootParent )
        return 1;
    }
  }
  return result;
}

/*
==============
CGMovingPlatformClient::GetCharacterEntityInfo
==============
*/
__int64 CGMovingPlatformClient::GetCharacterEntityInfo(CGMovingPlatformClient *this, int entId, BGMovingPlatformClient::CharacterInfo *outInfo)
{
  centity_t *Entity; 
  centity_t *v7; 
  entityState_t *p_nextState; 
  entityType_s eType; 
  CgStatic *LocalClientStatics; 
  __int64 clientNum; 
  cg_t *LocalClientGlobals; 
  const characterInfo_t *CharacterInfo; 
  const Bounds *Bounds; 
  __int64 v16; 

  if ( !outInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\movingplatforms\\cg_moving_platforms.cpp", 525, ASSERT_TYPE_ASSERT, "(outInfo)", (const char *)&queryFormat, "outInfo") )
    __debugbreak();
  Entity = CG_GetEntity((const LocalClientNum_t)this->m_clientID, entId);
  v7 = Entity;
  if ( (Entity->flags & 1) == 0 )
    return 0i64;
  p_nextState = &Entity->nextState;
  if ( Entity == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1921, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  eType = p_nextState->eType;
  if ( ((eType - 1) & 0xFFED) != 0 || eType == ET_ITEM )
    return 0i64;
  if ( BG_IsPlayerOrAgentEntity(p_nextState) )
  {
    LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)this->m_clientID);
    if ( !LocalClientStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\movingplatforms\\cg_moving_platforms.cpp", 538, ASSERT_TYPE_ASSERT, "(cgameStatic)", (const char *)&queryFormat, "cgameStatic") )
      __debugbreak();
    clientNum = v7->nextState.clientNum;
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)LocalClientStatics->m_localClientNum);
    if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 33, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    if ( LocalClientGlobals->IsMP(LocalClientGlobals) )
    {
      if ( (unsigned int)clientNum >= LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified )
      {
        LODWORD(v16) = clientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 19, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", v16, LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified) )
          __debugbreak();
      }
      CharacterInfo = (const characterInfo_t *)(*(_QWORD *)&LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[62] + 14792 * clientNum);
    }
    else
    {
      CharacterInfo = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)LocalClientGlobals, clientNum);
    }
    if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\movingplatforms\\cg_moving_platforms.cpp", 540, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
      __debugbreak();
    Bounds = BG_Suit_GetBounds(CharacterInfo->suitIndex, PM_EFF_STANCE_DEFAULT);
  }
  else
  {
    Bounds = &playerBox;
  }
  outInfo->bound = Bounds;
  outInfo->angles.v[0] = v7->pose.angles.v[0];
  outInfo->angles.v[1] = v7->pose.angles.v[1];
  outInfo->angles.v[2] = v7->pose.angles.v[2];
  CG_GetPoseOrigin(&v7->pose, &outInfo->origin);
  return 1i64;
}

/*
==============
CGMovingPlatformClient::GetMoverEntityInfo
==============
*/
__int64 CGMovingPlatformClient::GetMoverEntityInfo(CGMovingPlatformClient *this, int entId, BGMovingPlatformClient::MoverInfo *outInfo)
{
  centity_t *Entity; 
  centity_t *v7; 

  if ( !outInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\movingplatforms\\cg_moving_platforms.cpp", 561, ASSERT_TYPE_ASSERT, "(outInfo)", (const char *)&queryFormat, "outInfo") )
    __debugbreak();
  Entity = CG_GetEntity((const LocalClientNum_t)this->m_clientID, entId);
  v7 = Entity;
  if ( (Entity->flags & 1) == 0 )
    return 0i64;
  outInfo->angles.v[0] = Entity->pose.angles.v[0];
  outInfo->angles.v[1] = Entity->pose.angles.v[1];
  outInfo->angles.v[2] = Entity->pose.angles.v[2];
  CG_GetPoseOrigin(&Entity->pose, &outInfo->origin);
  outInfo->brushId = v7->nextState.index.brushModel;
  outInfo->entNum = v7->nextState.number;
  return 1i64;
}

/*
==============
CGMovingPlatformClient::GetMoverInfoFromClientEntity
==============
*/
void CGMovingPlatformClient::GetMoverInfoFromClientEntity(LocalClientNum_t localClientNum, const centity_t *cent, vec3_t *outOrigin, vec3_t *outAngles)
{
  unsigned int eType; 
  int v9; 
  char v16; 
  vec3_t outOrigina; 
  vec3_t end; 
  __int64 v22; 
  trace_t results; 

  v22 = -2i64;
  _RBX = outAngles;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\movingplatforms\\cg_moving_platforms.cpp", 606, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( cent == (const centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1969, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( ((cent->nextState.eType - 1) & 0xFFEF) != 0 )
  {
    if ( cent == (const centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1983, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
      __debugbreak();
    eType = (unsigned __int16)cent->nextState.eType;
    if ( (unsigned __int16)eType > 0x15u || (v9 = 2359300, !_bittest(&v9, eType)) )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\movingplatforms\\cg_moving_platforms.cpp", 607, ASSERT_TYPE_ASSERT, "(BG_IsPlayerOrAgentEntity( &cent->nextState ) || BG_IsCorpseEntity( &cent->nextState ))", (const char *)&queryFormat, "BG_IsPlayerOrAgentEntity( &cent->nextState ) || BG_IsCorpseEntity( &cent->nextState )") )
        __debugbreak();
    }
  }
  if ( BGMovingPlatforms::IsEntityOnMovingPlatform(&cent->nextState) )
  {
    CG_GetPoseOrigin(&cent->pose, &outOrigina);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+138h+outOrigin]
      vmovss  dword ptr [rsp+138h+end], xmm0
      vmovss  xmm1, dword ptr [rsp+138h+outOrigin+4]
      vmovss  dword ptr [rsp+138h+end+4], xmm1
      vmovss  xmm2, dword ptr [rsp+138h+outOrigin+8]
      vaddss  xmm0, xmm2, cs:__real@41200000
      vmovss  dword ptr [rsp+138h+outOrigin+8], xmm0
      vsubss  xmm1, xmm2, cs:__real@43480000
      vmovss  dword ptr [rsp+138h+end+8], xmm1
    }
    PhysicsQuery_LegacyTrace((Physics_WorldId)(3 * localClientNum + 2), &results, &outOrigina, &end, &bounds_origin, cent->nextState.number, 0, 65537, 0, NULL, All);
    __asm
    {
      vmovss  xmm0, [rsp+138h+results.fraction]
      vcomiss xmm0, cs:__real@3f800000
    }
    if ( v16 && results.hitType == TRACE_HITTYPE_ENTITY && results.hitId < 0x7FE )
    {
      _RDI = CG_GetEntity(localClientNum, results.hitId);
      CG_GetPoseOrigin(&_RDI->pose, outOrigin);
      _RBX->v[0] = _RDI->pose.angles.v[0];
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+4Ch]
        vmovss  dword ptr [rbx+4], xmm0
        vmovss  xmm1, dword ptr [rdi+50h]
        vmovss  dword ptr [rbx+8], xmm1
      }
      memset(&end, 0, sizeof(end));
      memset(&outOrigina, 0, sizeof(outOrigina));
      return;
    }
    memset(&end, 0, sizeof(end));
    memset(&outOrigina, 0, sizeof(outOrigina));
  }
  *(_QWORD *)outOrigin->v = 0i64;
  outOrigin->v[2] = 0.0;
  *(_QWORD *)_RBX->v = 0i64;
  _RBX->v[2] = 0.0;
}

/*
==============
CGMovingPlatformClient::GetPlatformAngularVelocity
==============
*/
void CGMovingPlatformClient::GetPlatformAngularVelocity(CGMovingPlatformClient *this, vec3_t *outVelocity)
{
  *outVelocity = this->m_platformAngleVelocity;
}

/*
==============
CGMovingPlatformClient::InterpolateEntityOrigin
==============
*/

void __fastcall CGMovingPlatformClient::InterpolateEntityOrigin(CGMovingPlatformClient *this, cg_t *cgameGlob, const centity_t *cent, double time, vec3_t *outOrigin, vec3_t *outAngles)
{
  const centity_t *v10; 
  __int64 localClientNum; 
  centity_t *Entity; 
  unsigned int v17; 
  CgEntitySystem *v18; 
  __int64 v19; 
  int v20; 
  const DObj *ClientDObj; 
  DObj *v22; 
  const DObj *v23; 
  const char *BoneName; 
  const char *v25; 
  __int64 v26; 
  signed __int64 v27; 
  char v28; 
  __int64 v29; 
  char v30; 
  bool v36; 
  char v49; 
  vec3_t *v75; 
  __int64 v76; 
  vec3_t outPos; 
  vec3_t outAng; 
  tmat43_t<vec3_t> v80; 
  tmat43_t<vec3_t> axis; 
  tmat43_t<vec3_t> v82; 
  tmat43_t<vec3_t> v83; 
  tmat43_t<vec3_t> out; 

  __asm { vmovaps [rsp+1D0h+var_70], xmm10 }
  _R15 = outOrigin;
  v10 = cent;
  _R12 = outAngles;
  *(_QWORD *)outAng.v = outOrigin;
  *(_QWORD *)outPos.v = outAngles;
  __asm { vmovaps xmm10, xmm3 }
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\movingplatforms\\cg_moving_platforms.cpp", 67, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\movingplatforms\\cg_moving_platforms.cpp", 68, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !cgameGlob->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\movingplatforms\\cg_moving_platforms.cpp", 69, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap)", (const char *)&queryFormat, "cgameGlob->nextSnap") )
    __debugbreak();
  localClientNum = cgameGlob->localClientNum;
  if ( Com_GameMode_SupportsFeature(WEAPON_DROPPING_ALT) )
  {
    if ( (*(_DWORD *)&v10->nextState.clientLinkInfo & 0x7FF) == 0 )
    {
      __asm { vmovaps xmm3, xmm10; lerp }
      CG_Entity_InterpolateAdvancedTrajectory((LocalClientNum_t)localClientNum, v10, NULL, *(float *)&_XMM3, outOrigin, outAngles);
      goto LABEL_64;
    }
    Entity = CG_GetEntity((const LocalClientNum_t)localClientNum, (*(_DWORD *)&v10->nextState.clientLinkInfo & 0x7FFu) - 1);
    v17 = *(_DWORD *)&Entity->nextState.clientLinkInfo & 0x7FF;
    if ( v17 )
    {
      do
      {
        if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
        {
          LODWORD(v76) = localClientNum;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v76) )
            __debugbreak();
        }
        if ( (unsigned int)localClientNum >= CgEntitySystem::ms_allocatedCount )
        {
          LODWORD(v76) = CgEntitySystem::ms_allocatedCount;
          LODWORD(v75) = localClientNum;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v75, v76) )
            __debugbreak();
        }
        if ( !CgEntitySystem::ms_entitySystemArray[localClientNum] )
        {
          LODWORD(v76) = localClientNum;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v76) )
            __debugbreak();
        }
        v18 = CgEntitySystem::ms_entitySystemArray[localClientNum];
        if ( v17 - 1 >= 0x800 )
        {
          LODWORD(v76) = 2048;
          LODWORD(v75) = v17 - 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v75, v76) )
            __debugbreak();
        }
        v19 = 760i64 * v17;
        v20 = *(_DWORD *)((char *)v18 + v19 - 132);
        Entity = (centity_t *)((char *)v18 + v19 - 744);
        v17 = v20 & 0x7FF;
      }
      while ( v17 );
      v10 = cent;
      _R12 = *(vec3_t **)outPos.v;
      _R15 = *(vec3_t **)outAng.v;
    }
    if ( Entity->nextState.lerp.pos.trType == TR_ANIMATED_MOVER )
    {
      if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_ALT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.h", 90, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES )") )
        __debugbreak();
      ClientDObj = Com_GetClientDObj(Entity->nextState.number, (LocalClientNum_t)localClientNum);
      v22 = (DObj *)ClientDObj;
      if ( ClientDObj && !DObjGetTree(ClientDObj) )
      {
        CG_GetPoseOrigin(&v10->pose, _R15);
        _R12->v[0] = v10->pose.angles.v[0];
        _R12->v[1] = v10->pose.angles.v[1];
        _R12->v[2] = v10->pose.angles.v[2];
        goto LABEL_64;
      }
    }
    else
    {
      v22 = NULL;
    }
    if ( (*(_DWORD *)&v10->nextState.clientLinkInfo & 0x100000) == 0 )
    {
      v23 = Com_GetClientDObj(Entity->nextState.number, (LocalClientNum_t)localClientNum);
      BoneName = DObjGetBoneName(v23, (unsigned __int8)(*(_DWORD *)&v10->nextState.clientLinkInfo >> 11));
      if ( BoneName )
      {
        v25 = "tag_origin";
        v26 = 0x7FFFFFFFi64;
        v27 = BoneName - "tag_origin";
        do
        {
          v28 = v25[v27];
          v29 = v26;
          v30 = *v25++;
          --v26;
          if ( !v29 )
            break;
          if ( v28 != v30 )
          {
            Com_PrintWarning(14, "Ent num %d is a moving platform and is linked to a parent tag that is not null or tag_origin. This may jitter the player.\n", (unsigned int)v10->nextState.number);
            break;
          }
        }
        while ( v28 );
      }
    }
    if ( (*(_DWORD *)&Entity->nextState.clientLinkInfo & 0x7FF) != 0 )
    {
      LODWORD(v76) = v10->nextState.number;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\movingplatforms\\cg_moving_platforms.cpp", 124, ASSERT_TYPE_ASSERT, "(parent->nextState.clientLinkInfo.parentId == 0)", "%s\n\tEntity linked to parent that is not the root parent in MP, this is not allowed. %d\n", "parent->nextState.clientLinkInfo.parentId == 0", v76) )
        __debugbreak();
    }
    AnglesToAxis(&Entity->pose.angles, (tmat33_t<vec3_t> *)&axis);
    CG_GetPoseOrigin(&Entity->pose, &axis.m[3]);
    MatrixInverseOrthogonal43(&axis, &out);
    AnglesToAxis(&v10->pose.angles, (tmat33_t<vec3_t> *)&v82);
    CG_GetPoseOrigin(&v10->pose, &v82.m[3]);
    __asm { vmovaps xmm3, xmm10; lerp }
    CG_Entity_InterpolateAdvancedTrajectory((LocalClientNum_t)localClientNum, Entity, v22, *(float *)&_XMM3, &v83.m[3], _R12);
    AnglesToAxis(_R12, (tmat33_t<vec3_t> *)&v83);
    MatrixMultiply43(&v82, &out, &axis);
    MatrixMultiply43(&axis, &v83, &v80);
    AxisToAngles((const tmat33_t<vec3_t> *)&v80, _R12);
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+0D0h+var_168+24h]
      vmovss  xmm1, dword ptr [rbp+0D0h+var_168+28h]
      vmovss  dword ptr [r15], xmm0
      vmovss  xmm0, dword ptr [rbp+0D0h+var_168+2Ch]
      vmovss  dword ptr [r15+8], xmm0
      vmovss  dword ptr [r15+4], xmm1
    }
  }
  else
  {
    v36 = this->m_frameCache.moverId == 2047;
    __asm
    {
      vmovaps [rsp+1D0h+var_50], xmm6
      vmovaps [rsp+1D0h+var_60], xmm7
    }
    if ( v36 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\movingplatforms\\cg_moving_platforms.cpp", 149, ASSERT_TYPE_ASSERT, "(m_frameCache.moverId != ENTITYNUM_NONE)", (const char *)&queryFormat, "m_frameCache.moverId != ENTITYNUM_NONE") )
      __debugbreak();
    CgTrajectory::CgTrajectory((CgTrajectory *)&v80, (const LocalClientNum_t)localClientNum, v10, &this->m_frameCache.prevState);
    CgTrajectory::CgTrajectory((CgTrajectory *)&axis, (const LocalClientNum_t)localClientNum, v10, &this->m_frameCache.nextState);
    BgTrajectory::EvaluatePosTrajectory((BgTrajectory *)&v80, this->m_frameCache.prevServerTime, &outPos);
    BgTrajectory::EvaluatePosTrajectory((BgTrajectory *)&axis, this->m_frameCache.nextServerTime, &outAng);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+1D0h+outAng]
      vsubss  xmm1, xmm0, dword ptr [rsp+1D0h+outPos]
      vmovss  xmm0, dword ptr [rsp+1D0h+outAng+4]
      vmulss  xmm2, xmm1, xmm10
      vaddss  xmm3, xmm2, dword ptr [rsp+1D0h+outPos]
      vsubss  xmm1, xmm0, dword ptr [rsp+1D0h+outPos+4]
      vmovss  xmm0, dword ptr [rsp+1D0h+outAng+8]
      vmulss  xmm2, xmm1, xmm10
      vsubss  xmm1, xmm0, dword ptr [rsp+1D0h+outPos+8]
      vmovss  dword ptr [r15], xmm3
      vaddss  xmm3, xmm2, dword ptr [rsp+1D0h+outPos+4]
      vmovss  dword ptr [r15+4], xmm3
      vmulss  xmm2, xmm1, xmm10
      vaddss  xmm3, xmm2, dword ptr [rsp+1D0h+outPos+8]
      vmovss  dword ptr [r15+8], xmm3
    }
    BgTrajectory::EvaluateAngTrajectory((BgTrajectory *)&v80, this->m_frameCache.prevServerTime, &outPos);
    BgTrajectory::EvaluateAngTrajectory((BgTrajectory *)&axis, this->m_frameCache.nextServerTime, &outAng);
    __asm
    {
      vmovss  xmm2, dword ptr [rsp+1D0h+outAng]
      vmovss  xmm7, dword ptr [rsp+1D0h+outPos]
      vmovss  xmm1, cs:__real@43b40000
      vsubss  xmm0, xmm2, xmm7
      vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vcomiss xmm0, cs:__real@43340000
    }
    if ( !v49 )
    {
      __asm { vcomiss xmm2, xmm7 }
      if ( v49 )
        __asm { vaddss  xmm2, xmm2, xmm1 }
      else
        __asm { vsubss  xmm2, xmm2, xmm1 }
    }
    __asm
    {
      vmovss  xmm3, dword ptr [rsp+1D0h+outAng+4]
      vmovss  xmm5, dword ptr [rsp+1D0h+outPos+4]
      vsubss  xmm0, xmm3, xmm5
      vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vcomiss xmm0, cs:__real@43340000
    }
    if ( !v49 )
    {
      __asm { vcomiss xmm3, xmm5 }
      if ( v49 )
        __asm { vaddss  xmm3, xmm3, xmm1 }
      else
        __asm { vsubss  xmm3, xmm3, xmm1 }
    }
    __asm
    {
      vmovss  xmm4, dword ptr [rsp+1D0h+outAng+8]
      vmovss  xmm6, dword ptr [rsp+1D0h+outPos+8]
      vsubss  xmm0, xmm4, xmm6
      vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vcomiss xmm0, cs:__real@43340000
    }
    if ( !v49 )
    {
      __asm { vcomiss xmm4, xmm6 }
      if ( v49 )
        __asm { vaddss  xmm4, xmm4, xmm1 }
      else
        __asm { vsubss  xmm4, xmm4, xmm1 }
    }
    __asm
    {
      vsubss  xmm0, xmm2, xmm7
      vmulss  xmm1, xmm0, xmm10
      vaddss  xmm2, xmm1, xmm7
      vmovaps xmm7, [rsp+1D0h+var_60]
      vsubss  xmm0, xmm3, xmm5
      vmulss  xmm1, xmm0, xmm10
      vmovss  dword ptr [r12], xmm2
      vaddss  xmm2, xmm1, xmm5
      vsubss  xmm0, xmm4, xmm6
      vmulss  xmm1, xmm0, xmm10
      vmovss  dword ptr [r12+4], xmm2
      vaddss  xmm2, xmm1, xmm6
      vmovaps xmm6, [rsp+1D0h+var_50]
      vmovss  dword ptr [r12+8], xmm2
    }
  }
LABEL_64:
  __asm { vmovaps xmm10, [rsp+1D0h+var_70] }
}

/*
==============
CGMovingPlatforms::InterpolatePlayerLocalOffset
==============
*/

void __fastcall CGMovingPlatforms::InterpolatePlayerLocalOffset(const playerState_s *prevPs, const playerState_s *nextPs, double fraction, playerState_s *outPs)
{
  BGMovingPlatformPS *p_movingPlatforms; 
  float v25; 

  __asm
  {
    vmovaps xmm0, xmm2; val
    vmovss  xmm2, cs:__real@3f800000; max
    vxorps  xmm1, xmm1, xmm1; min
    vmovaps [rsp+38h+var_18], xmm6
  }
  p_movingPlatforms = &prevPs->movingPlatforms;
  _RBX = outPs;
  _RDI = &nextPs->movingPlatforms;
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm { vmovaps xmm6, xmm0 }
  if ( !BGMovingPlatformPS::IsOnMovingPlatform(p_movingPlatforms) || !BGMovingPlatformPS::IsOnMovingPlatform(_RDI) )
  {
    if ( BGMovingPlatformPS::IsOnMovingPlatform(p_movingPlatforms) )
    {
      _RBX->movingPlatforms.m_moverPlayerOffset.v[0] = p_movingPlatforms->m_moverPlayerOffset.v[0];
      _RBX->movingPlatforms.m_moverPlayerOffset.v[1] = p_movingPlatforms->m_moverPlayerOffset.v[1];
      v25 = p_movingPlatforms->m_moverPlayerOffset.v[2];
    }
    else
    {
      if ( !BGMovingPlatformPS::IsOnMovingPlatform(_RDI) )
        goto LABEL_9;
      _RBX->movingPlatforms.m_moverPlayerOffset.v[0] = _RDI->m_moverPlayerOffset.v[0];
      _RBX->movingPlatforms.m_moverPlayerOffset.v[1] = _RDI->m_moverPlayerOffset.v[1];
      v25 = _RDI->m_moverPlayerOffset.v[2];
    }
    _RBX->movingPlatforms.m_moverPlayerOffset.v[2] = v25;
    goto LABEL_9;
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+14h]
    vsubss  xmm1, xmm0, dword ptr [rsi+14h]
    vmulss  xmm2, xmm1, xmm6
    vaddss  xmm3, xmm2, dword ptr [rsi+14h]
    vmovss  dword ptr [rbx+6Ch], xmm3
    vmovss  xmm0, dword ptr [rdi+18h]
    vsubss  xmm1, xmm0, dword ptr [rsi+18h]
    vmulss  xmm2, xmm1, xmm6
    vaddss  xmm3, xmm2, dword ptr [rsi+18h]
    vmovss  dword ptr [rbx+70h], xmm3
    vmovss  xmm0, dword ptr [rdi+1Ch]
    vsubss  xmm1, xmm0, dword ptr [rsi+1Ch]
    vmulss  xmm2, xmm1, xmm6
    vaddss  xmm3, xmm2, dword ptr [rsi+1Ch]
    vmovss  dword ptr [rbx+74h], xmm3
  }
LABEL_9:
  __asm { vmovaps xmm6, [rsp+38h+var_18] }
}

/*
==============
CGMovingPlatforms::IsMoverMoving
==============
*/
_BOOL8 CGMovingPlatforms::IsMoverMoving(const centity_t *cent)
{
  return (cent->flags & 1) != 0 && BGMovingPlatforms::IsPlatformType(cent->nextState.eType) && (cent->flags & 0x1000) != 0;
}

/*
==============
CGMovingPlatformClient::IsMovingPlatformMoving
==============
*/
char CGMovingPlatformClient::IsMovingPlatformMoving(CGMovingPlatformClient *this, int entityNum)
{
  CgAntiLag *Instance; 
  cg_t *LocalClientGlobals; 
  int time; 
  BgAntiLagEntityInfo outInfo; 

  Instance = CgAntiLag::GetInstance((const LocalClientNum_t)this->m_localClientNum);
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  time = LocalClientGlobals->predictedPlayerState.serverTime;
  outInfo.boneInfo.boneList.m_usedSize = 0;
  outInfo.boneInfo.boneList.m_maxSize = 0;
  if ( !BgAntiLag::GetEntityInfoAtTime(Instance, LocalClientGlobals->predictedPlayerState.clientNum, entityNum, 8u, time, &outInfo) )
    return 0;
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+0D8h+var_A8.velocity]
    vxorps  xmm1, xmm1, xmm1
    vucomiss xmm0, xmm1
  }
  return 1;
}

/*
==============
CGMovingPlatforms::PlayDynamicBoltEffect
==============
*/
void CGMovingPlatforms::PlayDynamicBoltEffect(const entityState_t *es, LocalClientNum_t localClientNum, const FXRegisteredDef *const def, const vec3_t *origin, const tmat33_t<vec3_t> *axis)
{
  LocalClientNum_t v9; 
  centity_t *Entity; 
  const Material *markMaterialOverride; 
  int number; 
  cg_t *LocalClientGlobals; 
  cg_t *v14; 

  if ( !def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\movingplatforms\\cg_moving_platforms.cpp", 673, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
    __debugbreak();
  v9 = localClientNum;
  if ( (*((_BYTE *)&es->lerp.u.ragdollConstraint + 16) & 1) != 0 && (Entity = CG_GetEntity(localClientNum, es->otherEntityNum), v9 = localClientNum, (Entity->flags & 1) != 0) )
  {
    markMaterialOverride = MARK_MATERIAL_OVERRIDE_NONE_3;
    number = Entity->nextState.number;
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    FX_PlayDynamicBoltedEffect(localClientNum, def, LocalClientGlobals->time, number, origin, axis, 0x7FFu, 0, 0, markMaterialOverride);
  }
  else
  {
    v14 = CG_GetLocalClientGlobals(v9);
    FX_PlayOrientedEffect(localClientNum, def, v14->time, origin, axis);
  }
}

/*
==============
CGMovingPlatforms::ProcessDynamicBoltPosition
==============
*/
void CGMovingPlatforms::ProcessDynamicBoltPosition(const entityState_t *es, LocalClientNum_t localClientNum, const vec3_t *origin, vec3_t *outOrigin)
{
  centity_t *Entity; 
  const cpose_t *p_pose; 
  float v40; 
  vec3_t outOrigina; 
  __int64 v42; 
  tmat33_t<vec3_t> axis; 

  v42 = -2i64;
  _RDI = outOrigin;
  if ( origin == outOrigin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\movingplatforms\\cg_moving_platforms.cpp", 641, ASSERT_TYPE_ASSERT, "(&origin != &outOrigin)", (const char *)&queryFormat, "&origin != &outOrigin") )
    __debugbreak();
  if ( (*((_BYTE *)&es->lerp.u.ragdollConstraint + 16) & 1) == 0 )
  {
    _RDI->v[0] = origin->v[0];
    _RDI->v[1] = origin->v[1];
    v40 = origin->v[2];
    goto LABEL_12;
  }
  Entity = CG_GetEntity(localClientNum, es->otherEntityNum);
  p_pose = &Entity->pose;
  if ( (Entity->flags & 1) == 0 )
  {
    _RDI->v[0] = es->lerp.pos.trDelta.v[0];
    _RDI->v[1] = es->lerp.pos.trDelta.v[1];
    v40 = es->lerp.pos.trDelta.v[2];
LABEL_12:
    _RDI->v[2] = v40;
    return;
  }
  AnglesToAxis(&Entity->pose.angles, &axis);
  if ( origin == _RDI && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+0A8h+axis+0Ch]
    vmulss  xmm3, xmm0, dword ptr [rbx+4]
    vmovss  xmm1, dword ptr [rsp+0A8h+axis]
    vmulss  xmm2, xmm1, dword ptr [rbx]
    vaddss  xmm4, xmm3, xmm2
    vmovss  xmm0, dword ptr [rsp+0A8h+axis+18h]
    vmulss  xmm1, xmm0, dword ptr [rbx+8]
    vaddss  xmm2, xmm4, xmm1
    vmovss  dword ptr [rdi], xmm2
    vmovss  xmm0, dword ptr [rsp+0A8h+axis+10h]
    vmulss  xmm3, xmm0, dword ptr [rbx+4]
    vmovss  xmm1, dword ptr [rsp+0A8h+axis+4]
    vmulss  xmm2, xmm1, dword ptr [rbx]
    vaddss  xmm4, xmm3, xmm2
    vmovss  xmm0, dword ptr [rsp+0A8h+axis+1Ch]
    vmulss  xmm1, xmm0, dword ptr [rbx+8]
    vaddss  xmm2, xmm4, xmm1
    vmovss  dword ptr [rdi+4], xmm2
    vmovss  xmm0, dword ptr [rsp+0A8h+axis+14h]
    vmulss  xmm3, xmm0, dword ptr [rbx+4]
    vmovss  xmm1, dword ptr [rsp+0A8h+axis+8]
    vmulss  xmm2, xmm1, dword ptr [rbx]
    vaddss  xmm4, xmm3, xmm2
    vmovss  xmm0, dword ptr [rsp+0A8h+axis+20h]
    vmulss  xmm1, xmm0, dword ptr [rbx+8]
    vaddss  xmm2, xmm4, xmm1
    vmovss  dword ptr [rdi+8], xmm2
  }
  CG_GetPoseOrigin(p_pose, &outOrigina);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+0A8h+outOrigin]
    vaddss  xmm1, xmm0, dword ptr [rdi]
    vmovss  dword ptr [rdi], xmm1
    vmovss  xmm2, dword ptr [rsp+0A8h+outOrigin+4]
    vaddss  xmm0, xmm2, dword ptr [rdi+4]
    vmovss  dword ptr [rdi+4], xmm0
    vmovss  xmm1, dword ptr [rsp+0A8h+outOrigin+8]
    vaddss  xmm2, xmm1, dword ptr [rdi+8]
    vmovss  dword ptr [rdi+8], xmm2
  }
  memset(&outOrigina, 0, sizeof(outOrigina));
}

/*
==============
CGMovingPlatforms::ResetClientLocalOffset
==============
*/
void CGMovingPlatforms::ResetClientLocalOffset(characterInfo_t *ci)
{
  if ( ci )
  {
    ci->nextMoverOffset.moverId = 0;
    ci->prevMoverOffset.moverId = 0;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\movingplatforms\\cg_moving_platforms.cpp", 765, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
      __debugbreak();
    MEMORY[0x3908] = 0;
    MEMORY[0x38F4] = 0;
  }
}

/*
==============
CGMovingPlatforms::ShouldDynamicBoltBullet
==============
*/
_BOOL8 CGMovingPlatforms::ShouldDynamicBoltBullet(LocalClientNum_t localClient, unsigned int targetEntityNum)
{
  centity_t *Entity; 
  centity_t *v3; 
  _BOOL8 result; 

  result = 0;
  if ( targetEntityNum < 0x7FE )
  {
    Entity = CG_GetEntity(localClient, targetEntityNum);
    v3 = Entity;
    if ( (Entity->flags & 1) != 0 && BGMovingPlatforms::IsPlatformType(Entity->nextState.eType) && (v3->flags & 0x1000) != 0 )
      return 1;
  }
  return result;
}

/*
==============
CGMovingPlatformClient::UpdateFrameCache
==============
*/
void CGMovingPlatformClient::UpdateFrameCache(CGMovingPlatformClient *this, const LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  cg_t *v5; 
  int v6; 
  int m_contactEnt; 
  centity_t *Entity; 
  int id; 
  int m_movingPlatformEntity; 
  CgHandler *Handler; 

  _RSI = this;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v5 = LocalClientGlobals;
  if ( LocalClientGlobals->nextSnap )
  {
    _RSI->m_frameCache.moverId = 2047;
    v6 = 0;
    _RSI->m_frameCache.fromTime = LocalClientGlobals->nextSnap->serverTime;
    if ( BGMovingPlatforms::IsOnMovingPlatform(&LocalClientGlobals->predictedPlayerState) )
    {
      _RSI->m_frameCache.moverId = v5->predictedPlayerState.movingPlatforms.m_movingPlatformEntity;
    }
    else if ( !BG_IsPlayerZeroG(&v5->predictedPlayerState) )
    {
      _RSI->m_frameCache.moverId = 2047;
      m_contactEnt = v5->movingPlatforms.m_contactEnt;
      if ( m_contactEnt != 2047 )
      {
        Entity = CG_GetEntity(localClientNum, m_contactEnt);
        if ( BGMovingPlatforms::IsPlatformType(Entity->nextState.eType) )
          _RSI->m_frameCache.moverId = Entity->nextState.number;
      }
      if ( _RSI->m_frameCache.moverId != 2047 )
        v6 = 1;
    }
    if ( _RSI->m_frameCache.moverId != 2047 )
    {
      _RAX = CG_GetEntity(localClientNum, v5->predictedPlayerState.movingPlatforms.m_movingPlatformEntity);
      __asm
      {
        vmovups ymm0, ymmword ptr [rax+120h]
        vmovups ymmword ptr [rsi+20h], ymm0
        vmovups ymm1, ymmword ptr [rax+140h]
        vmovups ymmword ptr [rsi+40h], ymm1
        vmovups ymm0, ymmword ptr [rax+160h]
        vmovups ymmword ptr [rsi+60h], ymm0
        vmovups xmm1, xmmword ptr [rax+180h]
        vmovups xmmword ptr [rsi+80h], xmm1
        vmovups ymm0, ymmword ptr [rax+19Ch]
        vmovups ymmword ptr [rsi+90h], ymm0
        vmovups ymm1, ymmword ptr [rax+1BCh]
        vmovups ymmword ptr [rsi+0B0h], ymm1
        vmovups ymm0, ymmword ptr [rax+1DCh]
        vmovups ymmword ptr [rsi+0D0h], ymm0
        vmovups xmm1, xmmword ptr [rax+1FCh]
        vmovups xmmword ptr [rsi+0F0h], xmm1
      }
      _RSI->m_frameCache.prevServerTime = v5->snap->serverTime;
      _RSI->m_frameCache.nextServerTime = v5->nextSnap->serverTime;
      if ( v6 )
      {
        id = _RSI->m_frameCache.moverId;
        m_movingPlatformEntity = v5->predictedPlayerState.movingPlatforms.m_movingPlatformEntity;
        Handler = CgHandler::getHandler(localClientNum);
        BGMovingPlatformPS::SetMoverEntityID(&v5->predictedPlayerState.movingPlatforms, &v5->predictedPlayerState, Handler, m_movingPlatformEntity, id, 1, 1);
        _RSI->m_frameCache.fromTime = v5->snap->serverTime;
      }
    }
  }
}

/*
==============
CGMovingPlatformClient::UpdateInternalTransforms
==============
*/
void CGMovingPlatformClient::UpdateInternalTransforms(CGMovingPlatformClient *this, pmove_t *pm, const tmat43_t<vec3_t> *startTransform, const tmat43_t<vec3_t> *endTransform, vec3_t *outAppliedAngles)
{
  const dvar_t *v10; 
  playerState_s *ps; 
  int integer; 
  const dvar_t *v13; 
  int v14; 
  int commandTime; 

  _R13 = this;
  BGMovingPlatformClient::UpdateInternalTransforms(this, pm, startTransform, endTransform, outAppliedAngles);
  v10 = DCONST_DVARINT_com_userCmdMaxTimeStep;
  ps = pm->ps;
  if ( !DCONST_DVARINT_com_userCmdMaxTimeStep && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_userCmdMaxTimeStep") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  integer = v10->current.integer;
  v13 = DCONST_DVARINT_com_userCmdMinTimeStep;
  if ( !DCONST_DVARINT_com_userCmdMinTimeStep && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_userCmdMinTimeStep") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  v14 = v13->current.integer;
  commandTime = ps->commandTime;
  if ( pm == (pmove_t *)-16i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.h", 2169, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  if ( I_clamp(pm->cmd.commandTime - commandTime, v14, integer) )
  {
    __asm
    {
      vmovss  xmm1, cs:__real@3b360b61
      vmulss  xmm4, xmm1, dword ptr [r12]
      vaddss  xmm2, xmm4, cs:__real@3f000000
      vmovss  xmm0, cs:__real@447a0000
      vmovaps [rsp+0B8h+var_58], xmm6
      vmovaps [rsp+0B8h+var_68], xmm7
      vmulss  xmm7, xmm1, dword ptr [r12+4]
      vmovaps [rsp+0B8h+var_78], xmm8
      vxorps  xmm8, xmm8, xmm8
      vroundss xmm3, xmm8, xmm2, 1
      vaddss  xmm2, xmm7, cs:__real@3f000000
      vmovd   xmm1, eax
      vcvtdq2ps xmm1, xmm1
      vdivss  xmm6, xmm0, xmm1
      vsubss  xmm0, xmm4, xmm3
      vmulss  xmm0, xmm0, cs:__real@43b40000
      vmulss  xmm1, xmm0, xmm6
      vroundss xmm3, xmm8, xmm2, 1
      vmovaps xmm8, [rsp+0B8h+var_78]
      vsubss  xmm0, xmm7, xmm3
      vmovaps xmm7, [rsp+0B8h+var_68]
      vmovss  dword ptr [r13+110h], xmm1
      vmulss  xmm1, xmm0, cs:__real@43b40000
      vmulss  xmm2, xmm1, xmm6
      vmovaps xmm6, [rsp+0B8h+var_58]
      vmovss  dword ptr [r13+114h], xmm2
    }
    _R13->m_platformAngleVelocity.v[2] = 0.0;
  }
}

/*
==============
CGMovingPlatformClient::UpdatePredictedClient
==============
*/
void CGMovingPlatformClient::UpdatePredictedClient(CGMovingPlatformClient *this, LocalClientNum_t localClientNum, pmove_t *pm, tmat43_t<vec3_t> *outMoverTransform, vec3_t *outLocalOrigin)
{
  const dvar_t *v12; 
  cg_t *LocalClientGlobals; 
  int moverId; 
  centity_t *Entity; 
  int v16; 
  int fromTime; 
  vec3_t outOrigin; 
  __int64 v44; 
  vec3_t outAppliedDelta; 
  vec3_t delta; 
  vec3_t deltaOrigin; 
  tmat43_t<vec3_t> in2; 
  void *retaddr; 

  _RAX = &retaddr;
  v44 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm8
  }
  _RSI = (tmat33_t<vec3_t> *)outMoverTransform;
  _RDI = this;
  v12 = DCONST_DVARBOOL_usePmoveMoverSystem;
  if ( !DCONST_DVARBOOL_usePmoveMoverSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "usePmoveMoverSystem") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  if ( v12->current.enabled )
  {
    *(_QWORD *)_RDI->m_platformAngleVelocity.v = 0i64;
    _RDI->m_platformAngleVelocity.v[2] = 0.0;
  }
  else
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    CGMovingPlatformClient::AdjustPositionForMover(_RDI, localClientNum, &LocalClientGlobals->predictedPlayerState.origin, _RDI->m_frameCache.fromTime, LocalClientGlobals->time, &LocalClientGlobals->predictedPlayerState.origin, &deltaOrigin, &delta, pm);
    *(_QWORD *)_RDI->m_platformAngleVelocity.v = 0i64;
    _RDI->m_platformAngleVelocity.v[2] = 0.0;
    fromTime = _RDI->m_frameCache.fromTime;
    moverId = _RDI->m_frameCache.moverId;
    if ( BGMovingPlatforms::IsMovingPlatform(moverId) )
    {
      Entity = CG_GetEntity(localClientNum, moverId);
      if ( !CGMovingPlatforms::ms_instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\movingplatforms\\cg_moving_platforms.h", 119, ASSERT_TYPE_ASSERT, "(ms_instance)", (const char *)&queryFormat, "ms_instance") )
        __debugbreak();
      v16 = CGMovingPlatforms::ms_instance->ShouldUseImprovedAimAlgorithm(CGMovingPlatforms::ms_instance);
      BGMovingPlatformClient::UpdatePlayerAngles(_RDI, &LocalClientGlobals->predictedPlayerState, &delta, &Entity->pose.angles, &outAppliedDelta, v16);
      if ( LocalClientGlobals->time - fromTime )
      {
        __asm
        {
          vmovss  xmm4, cs:__real@3b360b61
          vmulss  xmm3, xmm4, dword ptr [rsp+148h+outAppliedDelta]
          vaddss  xmm1, xmm3, cs:__real@3f000000
          vxorps  xmm6, xmm6, xmm6
          vroundss xmm0, xmm6, xmm1, 1
          vsubss  xmm0, xmm3, xmm0
          vmulss  xmm8, xmm0, cs:__real@43b40000
          vmovss  dword ptr [rsp+148h+outAppliedDelta], xmm8
          vmulss  xmm4, xmm4, dword ptr [rsp+148h+outAppliedDelta+4]
          vaddss  xmm2, xmm4, cs:__real@3f000000
          vroundss xmm3, xmm6, xmm2, 1
          vsubss  xmm0, xmm4, xmm3
          vmulss  xmm5, xmm0, cs:__real@43b40000
          vmovss  dword ptr [rsp+148h+outAppliedDelta+4], xmm5
          vmovd   xmm1, eax
          vcvtdq2ps xmm1, xmm1
          vmovss  xmm0, cs:__real@447a0000
          vdivss  xmm2, xmm0, xmm1
          vmulss  xmm1, xmm8, xmm2
          vmovss  dword ptr [rdi+110h], xmm1
          vmulss  xmm0, xmm5, xmm2
          vmovss  dword ptr [rdi+114h], xmm0
          vmulss  xmm2, xmm2, dword ptr [rsp+148h+outAppliedDelta+8]
          vmovss  dword ptr [rdi+118h], xmm2
        }
      }
      BGMovingPlatforms::UpdateDirection(&LocalClientGlobals->predictedPlayerState.velocity, &Entity->pose.angles, &delta);
      CG_GetPoseOrigin(&Entity->pose, &outOrigin);
      AnglesToAxis(&Entity->pose.angles, _RSI);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+148h+outOrigin]
        vmovss  dword ptr [rsi+24h], xmm0
        vmovss  xmm1, dword ptr [rsp+148h+outOrigin+4]
        vmovss  dword ptr [rsi+28h], xmm1
        vmovss  xmm0, dword ptr [rsp+148h+outOrigin+8]
        vmovss  dword ptr [rsi+2Ch], xmm0
      }
      if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.pm_flags, ACTIVE, 5u) )
        BGMovingPlatforms::UpdatePoint(&LocalClientGlobals->predictedPlayerState.mantleState.startPosition, &outOrigin, &Entity->pose.angles, &delta, &deltaOrigin);
      MatrixInverseOrthogonal43((const tmat43_t<vec3_t> *)_RSI, &in2);
      MatrixTransformVector43(&pm->ps->origin, &in2, outLocalOrigin);
      CGMovingPlatformAimAssist::UpdateDeltas(localClientNum);
      memset(&outOrigin, 0, sizeof(outOrigin));
    }
  }
  __asm
  {
    vmovaps xmm6, [rsp+148h+var_58]
    vmovaps xmm8, [rsp+148h+var_68]
  }
}

/*
==============
AngleNormalize360
==============
*/

float __fastcall AngleNormalize360(double angle, __int64 a2, double _XMM2_8)
{
  __asm
  {
    vmulss  xmm3, xmm0, cs:__real@3b360b61
    vxorps  xmm2, xmm2, xmm2
    vroundss xmm2, xmm2, xmm3, 1
    vsubss  xmm0, xmm3, xmm2
    vmulss  xmm4, xmm0, cs:__real@43b40000
    vsubss  xmm2, xmm4, cs:__real@43b40000
    vxorps  xmm0, xmm0, xmm0
    vcmpless xmm1, xmm0, xmm2
    vblendvps xmm0, xmm4, xmm2, xmm1
  }
  return *(float *)&_XMM0;
}

