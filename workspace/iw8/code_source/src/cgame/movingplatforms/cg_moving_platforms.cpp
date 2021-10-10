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
  int prevServerTime; 
  int v13; 
  float v14; 
  double v15; 
  float v16; 
  double v17; 
  CG_PhysicsObject *v18; 
  unsigned int v19; 
  float v20; 
  float v21; 
  float v22; 
  const DObj *ClientDObj; 
  playerState_s *ps; 
  Bounds *v25; 
  CgHandler *v26; 
  entityState_t *p_nextState; 
  int flags; 
  int clipMask; 
  Bounds *v30; 
  LocalClientNum_t localClientNum; 
  CgHandler *handler; 
  vec3_t *v33; 
  bool v34; 
  Bounds *bounds; 
  char v36; 
  unsigned int instanceId; 
  DObj *obj; 
  vec3_t position; 
  vec3_t *currentOrigin; 
  cg_t *v43; 
  __int64 v44; 
  vec3_t angles; 
  vec3_t inOrigin; 
  vec3_t outAngles; 
  vec3_t oldOrigin; 
  vec4_t quat; 
  BGMovingPlatformSolver v50; 

  v44 = -2i64;
  currentOrigin = (vec3_t *)in;
  v43 = cgameGlob;
  *(_QWORD *)outDeltaAngles->v = 0i64;
  outDeltaAngles->v[2] = 0.0;
  *(_QWORD *)outDeltaPlatformOrigin->v = 0i64;
  outDeltaPlatformOrigin->v[2] = 0.0;
  *out = *in;
  prevServerTime = this->m_frameCache.prevServerTime;
  v13 = this->m_frameCache.nextServerTime - prevServerTime;
  if ( v13 )
  {
    v14 = 1.0 / (float)v13;
    v15 = I_fclamp((float)(fromTime - prevServerTime) * v14, -1.0, 1.0);
    v16 = *(float *)&v15;
    v17 = I_fclamp((float)(toTime - prevServerTime) * v14, -1.0, 1.0);
    CGMovingPlatformClient::InterpolateEntityOrigin(this, cgameGlob, mover, v16, &oldOrigin, &outAngles);
    CGMovingPlatformClient::InterpolateEntityOrigin(this, cgameGlob, mover, *(const float *)&v17, &inOrigin, &angles);
    if ( fsqrt((float)((float)((float)(inOrigin.v[1] - oldOrigin.v[1]) * (float)(inOrigin.v[1] - oldOrigin.v[1])) + (float)((float)(inOrigin.v[0] - oldOrigin.v[0]) * (float)(inOrigin.v[0] - oldOrigin.v[0]))) + (float)((float)(inOrigin.v[2] - oldOrigin.v[2]) * (float)(inOrigin.v[2] - oldOrigin.v[2]))) >= 0.001 || fsqrt((float)((float)((float)(angles.v[1] - outAngles.v[1]) * (float)(angles.v[1] - outAngles.v[1])) + (float)((float)(angles.v[0] - outAngles.v[0]) * (float)(angles.v[0] - outAngles.v[0]))) + (float)((float)(angles.v[2] - outAngles.v[2]) * (float)(angles.v[2] - outAngles.v[2]))) >= 0.001 )
    {
      v18 = CG_PhysicsObject_Get(mover->nextState.number, this->m_localClientNum);
      if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\movingplatforms\\cg_moving_platforms.cpp", 210, ASSERT_TYPE_ASSERT, "(moverPhysObj)", (const char *)&queryFormat, "moverPhysObj") )
        __debugbreak();
      v19 = v18->physicsInstances[3 * this->m_localClientNum + 2];
      instanceId = v19;
      R_EndDelayedSceneModels(1);
      CG_GetPoseOrigin(&mover->pose, &position);
      v20 = mover->pose.angles.v[0];
      v21 = mover->pose.angles.v[1];
      v22 = mover->pose.angles.v[2];
      obj = NULL;
      v36 = 0;
      if ( mover->pose.isEntityPose )
      {
        ClientDObj = Com_GetClientDObj(mover->nextState.number, this->m_localClientNum);
        obj = (DObj *)ClientDObj;
        if ( ClientDObj )
          DObjLock(ClientDObj);
        mover->pose.isEntityPose = 0;
        v36 = 1;
      }
      ps = pm->ps;
      v25 = pm->bounds;
      v26 = CgHandler::getHandler(this->m_localClientNum);
      BGMovingPlatformPS::UpdateMoverUpAngles(&ps->movingPlatforms, pm->ps, v26, v25);
      CG_SetPoseOrigin(&mover->pose, &inOrigin);
      mover->pose.angles = angles;
      AnglesToQuat(&mover->pose.angles, &quat);
      if ( v19 != -1 )
        Physics_WarpInstanceTo((Physics_WorldId)(3 * this->m_localClientNum + 2), v19, &inOrigin, &quat, 1);
      p_nextState = &mover->nextState;
      flags = BGMovingPlatforms::IsMoverOptimized(&mover->nextState);
      clipMask = pm->tracemask & 0xFDFFFFFF;
      v30 = pm->bounds;
      localClientNum = this->m_localClientNum;
      handler = CgHandler::getHandler(pm->localClientNum);
      bounds = v30;
      v33 = currentOrigin;
      BGMovingPlatformSolver::BGMovingPlatformSolver(&v50, pm->ps, pm->movingPlatforms, &inOrigin, &angles, &oldOrigin, &outAngles, currentOrigin, p_nextState->number, mover->nextState.index.brushModel, handler, localClientNum, bounds, (float)(toTime - fromTime) * 0.001, clipMask, flags);
      v34 = BGMovingPlatformSolver::SolveSystem(&v50) != 0;
      CG_SetPoseOrigin(&mover->pose, &position);
      if ( v36 )
      {
        if ( obj )
          DObjUnlock(obj);
        mover->pose.isEntityPose = 1;
      }
      mover->pose.angles.v[0] = v20;
      mover->pose.angles.v[1] = v21;
      mover->pose.angles.v[2] = v22;
      AnglesToQuat(&mover->pose.angles, &quat);
      if ( instanceId != -1 )
        Physics_WarpInstanceTo((Physics_WorldId)(3 * this->m_localClientNum + 2), instanceId, &position, &quat, 1);
      if ( v34 )
      {
        BGMovingPlatformSolver::GetTransformedOrigin(&v50, out);
        if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&v43->predictedPlayerState.otherFlags, ACTIVE, 0xDu) )
        {
          *(_QWORD *)outDeltaAngles->v = 0i64;
          outDeltaAngles->v[2] = 0.0;
        }
        else
        {
          outDeltaAngles->v[0] = angles.v[0] - outAngles.v[0];
          outDeltaAngles->v[1] = angles.v[1] - outAngles.v[1];
          outDeltaAngles->v[2] = angles.v[2] - outAngles.v[2];
        }
        outDeltaPlatformOrigin->v[0] = inOrigin.v[0] - oldOrigin.v[0];
        outDeltaPlatformOrigin->v[1] = inOrigin.v[1] - oldOrigin.v[1];
        outDeltaPlatformOrigin->v[2] = inOrigin.v[2] - oldOrigin.v[2];
      }
      else
      {
        this->DoEntitiesShareHierarchy(this, mover->nextState.number, v50.m_failedTraceHitId);
        *out = *v33;
        *(_QWORD *)outDeltaAngles->v = 0i64;
        outDeltaAngles->v[2] = 0.0;
        *(_QWORD *)outDeltaPlatformOrigin->v = 0i64;
        outDeltaPlatformOrigin->v[2] = 0.0;
      }
      memset(&position, 0, sizeof(position));
    }
  }
}

/*
==============
CGMovingPlatformClient::AdjustPositionForMover
==============
*/
void CGMovingPlatformClient::AdjustPositionForMover(CGMovingPlatformClient *this, LocalClientNum_t localClientNum, const vec3_t *in, int fromTime, int toTime, vec3_t *out, vec3_t *outDeltaPlatformOrigin, vec3_t *outDeltaAngles, pmove_t *pm)
{
  const dvar_t *v12; 
  int moverId; 
  centity_t *Entity; 
  playerState_s *ps; 
  int pm_type; 
  cg_t *cgameGlob; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  vec3_t v23; 
  vec3_t v24; 

  *(_QWORD *)outDeltaPlatformOrigin->v = 0i64;
  outDeltaPlatformOrigin->v[2] = 0.0;
  *(_QWORD *)outDeltaAngles->v = 0i64;
  outDeltaAngles->v[2] = 0.0;
  v12 = DCONST_DVARBOOL_usePmoveMoverSystem;
  if ( !DCONST_DVARBOOL_usePmoveMoverSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "usePmoveMoverSystem") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  if ( v12->current.enabled )
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
    CGMovingPlatformClient::AdjustClientPositionForMover(this, in, Entity, fromTime, toTime, out, &v24, &v23, cgameGlob, pm);
    v18 = v23.v[1];
    outDeltaAngles->v[0] = v23.v[0];
    v19 = v23.v[2];
    outDeltaAngles->v[1] = v18;
    v20 = v24.v[0];
    outDeltaAngles->v[2] = v19;
    v21 = v24.v[1];
    outDeltaPlatformOrigin->v[0] = v20;
    outDeltaPlatformOrigin->v[2] = v24.v[2];
    outDeltaPlatformOrigin->v[1] = v21;
  }
}

/*
==============
CGMovingPlatformClient::AngleNormalize360
==============
*/
void CGMovingPlatformClient::AngleNormalize360(CGMovingPlatformClient *this, float start, float *target)
{
  float v3; 

  v3 = *target;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*target - start) & _xmm) >= 180.0 )
  {
    if ( v3 >= start )
      *target = v3 - 360.0;
    else
      *target = v3 + 360.0;
  }
}

/*
==============
CGMovingPlatforms::ApplyClientLocalOffset
==============
*/
void CGMovingPlatforms::ApplyClientLocalOffset(LocalClientNum_t localClientNum, float frameTime, centity_t *cent)
{
  cg_t *LocalClientGlobals; 
  const dvar_t *v6; 
  cg_t *v7; 
  int v8; 
  unsigned int clientNum; 
  characterInfo_t *CharacterInfo; 
  characterInfo_t *v11; 
  int moverId; 
  centity_t *Entity; 
  float v14; 
  float v15; 
  int number; 
  float v17; 
  float v18; 
  const cpose_t *p_pose; 
  vec3_t in1; 
  vec3_t out; 
  tmat43_t<vec3_t> axis; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\movingplatforms\\cg_moving_platforms.cpp", 845, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v6 = DCONST_DVARBOOL_useLocalSpaceForAllMovers;
  v7 = LocalClientGlobals;
  if ( !DCONST_DVARBOOL_useLocalSpaceForAllMovers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "useLocalSpaceForAllMovers") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( v6->current.enabled || (v8 = v7->predictedPlayerState.vehicleState.entity) != 0 && v8 != 2047 )
  {
    clientNum = cent->nextState.clientNum;
    if ( v7->HasCharacterInfo(v7, clientNum) )
    {
      CharacterInfo = CG_GetCharacterInfo(v7, clientNum);
      v11 = CharacterInfo;
      if ( CharacterInfo )
      {
        moverId = CharacterInfo->nextMoverOffset.moverId;
        if ( moverId )
        {
          if ( v11->prevMoverOffset.moverId == moverId && (Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_useLocalSpaceForAllMovers, "useLocalSpaceForAllMovers") || v7->predictedPlayerState.vehicleState.entity == v11->nextMoverOffset.moverId) )
          {
            Entity = CG_GetEntity(localClientNum, v11->nextMoverOffset.moverId);
            v14 = v11->prevMoverOffset.localOffset.v[1];
            v15 = v11->prevMoverOffset.localOffset.v[2];
            number = cent->nextState.number;
            v17 = v11->nextMoverOffset.localOffset.v[2];
            v18 = (float)(v11->nextMoverOffset.localOffset.v[1] - v14) * frameTime;
            in1.v[0] = (float)((float)(v11->nextMoverOffset.localOffset.v[0] - v11->prevMoverOffset.localOffset.v[0]) * frameTime) + v11->prevMoverOffset.localOffset.v[0];
            in1.v[1] = v18 + v14;
            in1.v[2] = (float)((float)(v17 - v15) * frameTime) + v15;
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
  characterInfo_t *CharacterInfo; 
  int movingPlatform; 
  centity_t *Entity; 
  centity_t *v12; 
  vec3_t trBase; 
  __int64 v14; 
  vec3_t in1; 
  tmat43_t<vec3_t> axis; 

  v14 = -2i64;
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
      CharacterInfo = CG_GetCharacterInfo(LocalClientGlobals, clientNum);
      if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\movingplatforms\\cg_moving_platforms.cpp", 798, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
        __debugbreak();
      *(_OWORD *)&CharacterInfo->prevMoverOffset.serverTime = *(_OWORD *)&CharacterInfo->nextMoverOffset.serverTime;
      CharacterInfo->prevMoverOffset.localOffset.v[2] = CharacterInfo->nextMoverOffset.localOffset.v[2];
      CharacterInfo->nextMoverOffset.moverId = 0;
      if ( cent->nextState.eType == ET_PLAYER )
      {
        movingPlatform = cs->movingPlatform;
        if ( BGMovingPlatforms::IsMovingPlatform(movingPlatform) )
        {
          Entity = CG_GetEntity(localClientNum, movingPlatform);
          v12 = Entity;
          if ( (Entity->flags & 1) != 0 )
          {
            Trajectory_GetTrBase(&Entity->nextState.lerp.apos, &trBase);
            AnglesToAxis(&trBase, (tmat33_t<vec3_t> *)&axis);
            Trajectory_GetTrBase(&v12->nextState.lerp.pos, &axis.m[3]);
            Trajectory_GetTrBase(&cent->nextState.lerp.pos, &in1);
            MatrixTransposeTransformVector43(&in1, &axis, &CharacterInfo->nextMoverOffset.localOffset);
            CharacterInfo->nextMoverOffset.moverId = movingPlatform;
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
  float v10; 
  centity_t *Entity; 
  vec3_t outOrigina; 
  vec3_t end; 
  __int64 v14; 
  trace_t results; 

  v14 = -2i64;
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
    end.v[0] = outOrigina.v[0];
    end.v[1] = outOrigina.v[1];
    v10 = outOrigina.v[2];
    outOrigina.v[2] = outOrigina.v[2] + 10.0;
    end.v[2] = v10 - 200.0;
    PhysicsQuery_LegacyTrace((Physics_WorldId)(3 * localClientNum + 2), &results, &outOrigina, &end, &bounds_origin, cent->nextState.number, 0, 65537, 0, NULL, All);
    if ( results.fraction < 1.0 && results.hitType == TRACE_HITTYPE_ENTITY && results.hitId < 0x7FE )
    {
      Entity = CG_GetEntity(localClientNum, results.hitId);
      CG_GetPoseOrigin(&Entity->pose, outOrigin);
      *outAngles = Entity->pose.angles;
      memset(&end, 0, sizeof(end));
      memset(&outOrigina, 0, sizeof(outOrigina));
      return;
    }
    memset(&end, 0, sizeof(end));
    memset(&outOrigina, 0, sizeof(outOrigina));
  }
  *(_QWORD *)outOrigin->v = 0i64;
  outOrigin->v[2] = 0.0;
  *(_QWORD *)outAngles->v = 0i64;
  outAngles->v[2] = 0.0;
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
void CGMovingPlatformClient::InterpolateEntityOrigin(CGMovingPlatformClient *this, cg_t *cgameGlob, const centity_t *cent, const float time, vec3_t *outOrigin, vec3_t *outAngles)
{
  vec3_t *v6; 
  const centity_t *v7; 
  vec3_t *v8; 
  __int64 localClientNum; 
  centity_t *Entity; 
  unsigned int v14; 
  CgEntitySystem *v15; 
  __int64 v16; 
  int v17; 
  const DObj *ClientDObj; 
  DObj *v19; 
  const DObj *v20; 
  const char *BoneName; 
  const char *v22; 
  __int64 v23; 
  signed __int64 v24; 
  char v25; 
  __int64 v26; 
  char v27; 
  float v28; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  float v34; 
  float v35; 
  vec3_t *v36; 
  __int64 v37; 
  vec3_t outPos; 
  vec3_t outAng; 
  tmat43_t<vec3_t> v41; 
  tmat43_t<vec3_t> axis; 
  tmat43_t<vec3_t> v43; 
  tmat43_t<vec3_t> v44; 
  tmat43_t<vec3_t> out; 

  v6 = outOrigin;
  v7 = cent;
  v8 = outAngles;
  *(_QWORD *)outAng.v = outOrigin;
  *(_QWORD *)outPos.v = outAngles;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\movingplatforms\\cg_moving_platforms.cpp", 67, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\movingplatforms\\cg_moving_platforms.cpp", 68, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !cgameGlob->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\movingplatforms\\cg_moving_platforms.cpp", 69, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap)", (const char *)&queryFormat, "cgameGlob->nextSnap") )
    __debugbreak();
  localClientNum = cgameGlob->localClientNum;
  if ( Com_GameMode_SupportsFeature(WEAPON_DROPPING_ALT) )
  {
    if ( (*(_DWORD *)&v7->nextState.clientLinkInfo & 0x7FF) != 0 )
    {
      Entity = CG_GetEntity((const LocalClientNum_t)localClientNum, (*(_DWORD *)&v7->nextState.clientLinkInfo & 0x7FFu) - 1);
      v14 = *(_DWORD *)&Entity->nextState.clientLinkInfo & 0x7FF;
      if ( v14 )
      {
        do
        {
          if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
          {
            LODWORD(v37) = localClientNum;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v37) )
              __debugbreak();
          }
          if ( (unsigned int)localClientNum >= CgEntitySystem::ms_allocatedCount )
          {
            LODWORD(v37) = CgEntitySystem::ms_allocatedCount;
            LODWORD(v36) = localClientNum;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v36, v37) )
              __debugbreak();
          }
          if ( !CgEntitySystem::ms_entitySystemArray[localClientNum] )
          {
            LODWORD(v37) = localClientNum;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v37) )
              __debugbreak();
          }
          v15 = CgEntitySystem::ms_entitySystemArray[localClientNum];
          if ( v14 - 1 >= 0x800 )
          {
            LODWORD(v37) = 2048;
            LODWORD(v36) = v14 - 1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v36, v37) )
              __debugbreak();
          }
          v16 = 760i64 * v14;
          v17 = *(_DWORD *)((char *)v15 + v16 - 132);
          Entity = (centity_t *)((char *)v15 + v16 - 744);
          v14 = v17 & 0x7FF;
        }
        while ( v14 );
        v7 = cent;
        v8 = *(vec3_t **)outPos.v;
        v6 = *(vec3_t **)outAng.v;
      }
      if ( Entity->nextState.lerp.pos.trType == TR_ANIMATED_MOVER )
      {
        if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_ALT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.h", 90, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES )") )
          __debugbreak();
        ClientDObj = Com_GetClientDObj(Entity->nextState.number, (LocalClientNum_t)localClientNum);
        v19 = (DObj *)ClientDObj;
        if ( ClientDObj && !DObjGetTree(ClientDObj) )
        {
          CG_GetPoseOrigin(&v7->pose, v6);
          v8->v[0] = v7->pose.angles.v[0];
          v8->v[1] = v7->pose.angles.v[1];
          v8->v[2] = v7->pose.angles.v[2];
          return;
        }
      }
      else
      {
        v19 = NULL;
      }
      if ( (*(_DWORD *)&v7->nextState.clientLinkInfo & 0x100000) == 0 )
      {
        v20 = Com_GetClientDObj(Entity->nextState.number, (LocalClientNum_t)localClientNum);
        BoneName = DObjGetBoneName(v20, (unsigned __int8)(*(_DWORD *)&v7->nextState.clientLinkInfo >> 11));
        if ( BoneName )
        {
          v22 = "tag_origin";
          v23 = 0x7FFFFFFFi64;
          v24 = BoneName - "tag_origin";
          do
          {
            v25 = v22[v24];
            v26 = v23;
            v27 = *v22++;
            --v23;
            if ( !v26 )
              break;
            if ( v25 != v27 )
            {
              Com_PrintWarning(14, "Ent num %d is a moving platform and is linked to a parent tag that is not null or tag_origin. This may jitter the player.\n", (unsigned int)v7->nextState.number);
              break;
            }
          }
          while ( v25 );
        }
      }
      if ( (*(_DWORD *)&Entity->nextState.clientLinkInfo & 0x7FF) != 0 )
      {
        LODWORD(v37) = v7->nextState.number;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\movingplatforms\\cg_moving_platforms.cpp", 124, ASSERT_TYPE_ASSERT, "(parent->nextState.clientLinkInfo.parentId == 0)", "%s\n\tEntity linked to parent that is not the root parent in MP, this is not allowed. %d\n", "parent->nextState.clientLinkInfo.parentId == 0", v37) )
          __debugbreak();
      }
      AnglesToAxis(&Entity->pose.angles, (tmat33_t<vec3_t> *)&axis);
      CG_GetPoseOrigin(&Entity->pose, &axis.m[3]);
      MatrixInverseOrthogonal43(&axis, &out);
      AnglesToAxis(&v7->pose.angles, (tmat33_t<vec3_t> *)&v43);
      CG_GetPoseOrigin(&v7->pose, &v43.m[3]);
      CG_Entity_InterpolateAdvancedTrajectory((LocalClientNum_t)localClientNum, Entity, v19, time, &v44.m[3], v8);
      AnglesToAxis(v8, (tmat33_t<vec3_t> *)&v44);
      MatrixMultiply43(&v43, &out, &axis);
      MatrixMultiply43(&axis, &v44, &v41);
      AxisToAngles((const tmat33_t<vec3_t> *)&v41, v8);
      v28 = v41.m[3].v[1];
      v6->v[0] = v41.m[3].v[0];
      v6->v[2] = v41.m[3].v[2];
      v6->v[1] = v28;
    }
    else
    {
      CG_Entity_InterpolateAdvancedTrajectory((LocalClientNum_t)localClientNum, v7, NULL, time, outOrigin, outAngles);
    }
  }
  else
  {
    if ( this->m_frameCache.moverId == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\movingplatforms\\cg_moving_platforms.cpp", 149, ASSERT_TYPE_ASSERT, "(m_frameCache.moverId != ENTITYNUM_NONE)", (const char *)&queryFormat, "m_frameCache.moverId != ENTITYNUM_NONE") )
      __debugbreak();
    CgTrajectory::CgTrajectory((CgTrajectory *)&v41, (const LocalClientNum_t)localClientNum, v7, &this->m_frameCache.prevState);
    CgTrajectory::CgTrajectory((CgTrajectory *)&axis, (const LocalClientNum_t)localClientNum, v7, &this->m_frameCache.nextState);
    BgTrajectory::EvaluatePosTrajectory((BgTrajectory *)&v41, this->m_frameCache.prevServerTime, &outPos);
    BgTrajectory::EvaluatePosTrajectory((BgTrajectory *)&axis, this->m_frameCache.nextServerTime, &outAng);
    v29 = (float)(outAng.v[1] - outPos.v[1]) * time;
    v30 = outAng.v[2] - outPos.v[2];
    outOrigin->v[0] = (float)((float)(outAng.v[0] - outPos.v[0]) * time) + outPos.v[0];
    outOrigin->v[1] = v29 + outPos.v[1];
    outOrigin->v[2] = (float)(v30 * time) + outPos.v[2];
    BgTrajectory::EvaluateAngTrajectory((BgTrajectory *)&v41, this->m_frameCache.prevServerTime, &outPos);
    BgTrajectory::EvaluateAngTrajectory((BgTrajectory *)&axis, this->m_frameCache.nextServerTime, &outAng);
    v31 = outAng.v[0];
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(outAng.v[0] - outPos.v[0]) & _xmm) >= 180.0 )
    {
      if ( outAng.v[0] >= outPos.v[0] )
        v31 = outAng.v[0] - 360.0;
      else
        v31 = outAng.v[0] + 360.0;
    }
    v32 = outAng.v[1];
    v33 = outPos.v[1];
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(outAng.v[1] - outPos.v[1]) & _xmm) >= 180.0 )
    {
      if ( outAng.v[1] >= outPos.v[1] )
        v32 = outAng.v[1] - 360.0;
      else
        v32 = outAng.v[1] + 360.0;
    }
    v34 = outAng.v[2];
    v35 = outPos.v[2];
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(outAng.v[2] - outPos.v[2]) & _xmm) >= 180.0 )
    {
      if ( outAng.v[2] >= outPos.v[2] )
        v34 = outAng.v[2] - 360.0;
      else
        v34 = outAng.v[2] + 360.0;
    }
    outAngles->v[0] = (float)((float)(v31 - outPos.v[0]) * time) + outPos.v[0];
    outAngles->v[1] = (float)((float)(v32 - v33) * time) + v33;
    outAngles->v[2] = (float)((float)(v34 - v35) * time) + v35;
  }
}

/*
==============
CGMovingPlatforms::InterpolatePlayerLocalOffset
==============
*/
void CGMovingPlatforms::InterpolatePlayerLocalOffset(const playerState_s *prevPs, const playerState_s *nextPs, float fraction, playerState_s *outPs)
{
  BGMovingPlatformPS *p_movingPlatforms; 
  BGMovingPlatformPS *v6; 
  double v7; 
  float v8; 

  p_movingPlatforms = &prevPs->movingPlatforms;
  v6 = &nextPs->movingPlatforms;
  v7 = I_fclamp(fraction, 0.0, 1.0);
  if ( BGMovingPlatformPS::IsOnMovingPlatform(p_movingPlatforms) && BGMovingPlatformPS::IsOnMovingPlatform(v6) )
  {
    outPs->movingPlatforms.m_moverPlayerOffset.v[0] = (float)((float)(v6->m_moverPlayerOffset.v[0] - p_movingPlatforms->m_moverPlayerOffset.v[0]) * *(float *)&v7) + p_movingPlatforms->m_moverPlayerOffset.v[0];
    outPs->movingPlatforms.m_moverPlayerOffset.v[1] = (float)((float)(v6->m_moverPlayerOffset.v[1] - p_movingPlatforms->m_moverPlayerOffset.v[1]) * *(float *)&v7) + p_movingPlatforms->m_moverPlayerOffset.v[1];
    outPs->movingPlatforms.m_moverPlayerOffset.v[2] = (float)((float)(v6->m_moverPlayerOffset.v[2] - p_movingPlatforms->m_moverPlayerOffset.v[2]) * *(float *)&v7) + p_movingPlatforms->m_moverPlayerOffset.v[2];
    return;
  }
  if ( BGMovingPlatformPS::IsOnMovingPlatform(p_movingPlatforms) )
  {
    outPs->movingPlatforms.m_moverPlayerOffset.v[0] = p_movingPlatforms->m_moverPlayerOffset.v[0];
    outPs->movingPlatforms.m_moverPlayerOffset.v[1] = p_movingPlatforms->m_moverPlayerOffset.v[1];
    v8 = p_movingPlatforms->m_moverPlayerOffset.v[2];
  }
  else
  {
    if ( !BGMovingPlatformPS::IsOnMovingPlatform(v6) )
      return;
    outPs->movingPlatforms.m_moverPlayerOffset.v[0] = v6->m_moverPlayerOffset.v[0];
    outPs->movingPlatforms.m_moverPlayerOffset.v[1] = v6->m_moverPlayerOffset.v[1];
    v8 = v6->m_moverPlayerOffset.v[2];
  }
  outPs->movingPlatforms.m_moverPlayerOffset.v[2] = v8;
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
bool CGMovingPlatformClient::IsMovingPlatformMoving(CGMovingPlatformClient *this, int entityNum)
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
  return BgAntiLag::GetEntityInfoAtTime(Instance, LocalClientGlobals->predictedPlayerState.clientNum, entityNum, 8u, time, &outInfo) && (outInfo.velocity.v[0] != 0.0 || outInfo.velocity.v[1] != 0.0 || outInfo.velocity.v[2] != 0.0 || outInfo.angVelocity.v[0] != 0.0 || outInfo.angVelocity.v[1] != 0.0 || outInfo.angVelocity.v[2] != 0.0);
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
  float v10; 
  vec3_t outOrigina; 
  __int64 v12; 
  tmat33_t<vec3_t> axis; 

  v12 = -2i64;
  if ( origin == outOrigin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\movingplatforms\\cg_moving_platforms.cpp", 641, ASSERT_TYPE_ASSERT, "(&origin != &outOrigin)", (const char *)&queryFormat, "&origin != &outOrigin") )
    __debugbreak();
  if ( (*((_BYTE *)&es->lerp.u.ragdollConstraint + 16) & 1) == 0 )
  {
    outOrigin->v[0] = origin->v[0];
    outOrigin->v[1] = origin->v[1];
    v10 = origin->v[2];
    goto LABEL_12;
  }
  Entity = CG_GetEntity(localClientNum, es->otherEntityNum);
  p_pose = &Entity->pose;
  if ( (Entity->flags & 1) == 0 )
  {
    outOrigin->v[0] = es->lerp.pos.trDelta.v[0];
    outOrigin->v[1] = es->lerp.pos.trDelta.v[1];
    v10 = es->lerp.pos.trDelta.v[2];
LABEL_12:
    outOrigin->v[2] = v10;
    return;
  }
  AnglesToAxis(&Entity->pose.angles, &axis);
  if ( origin == outOrigin && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
    __debugbreak();
  outOrigin->v[0] = (float)((float)(axis.m[1].v[0] * origin->v[1]) + (float)(axis.m[0].v[0] * origin->v[0])) + (float)(axis.m[2].v[0] * origin->v[2]);
  outOrigin->v[1] = (float)((float)(axis.m[1].v[1] * origin->v[1]) + (float)(axis.m[0].v[1] * origin->v[0])) + (float)(axis.m[2].v[1] * origin->v[2]);
  outOrigin->v[2] = (float)((float)(axis.m[1].v[2] * origin->v[1]) + (float)(axis.m[0].v[2] * origin->v[0])) + (float)(axis.m[2].v[2] * origin->v[2]);
  CG_GetPoseOrigin(p_pose, &outOrigina);
  outOrigin->v[0] = outOrigina.v[0] + outOrigin->v[0];
  outOrigin->v[1] = outOrigina.v[1] + outOrigin->v[1];
  outOrigin->v[2] = outOrigina.v[2] + outOrigin->v[2];
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
  centity_t *v9; 
  int id; 
  int m_movingPlatformEntity; 
  CgHandler *Handler; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v5 = LocalClientGlobals;
  if ( LocalClientGlobals->nextSnap )
  {
    this->m_frameCache.moverId = 2047;
    v6 = 0;
    this->m_frameCache.fromTime = LocalClientGlobals->nextSnap->serverTime;
    if ( BGMovingPlatforms::IsOnMovingPlatform(&LocalClientGlobals->predictedPlayerState) )
    {
      this->m_frameCache.moverId = v5->predictedPlayerState.movingPlatforms.m_movingPlatformEntity;
    }
    else if ( !BG_IsPlayerZeroG(&v5->predictedPlayerState) )
    {
      this->m_frameCache.moverId = 2047;
      m_contactEnt = v5->movingPlatforms.m_contactEnt;
      if ( m_contactEnt != 2047 )
      {
        Entity = CG_GetEntity(localClientNum, m_contactEnt);
        if ( BGMovingPlatforms::IsPlatformType(Entity->nextState.eType) )
          this->m_frameCache.moverId = Entity->nextState.number;
      }
      if ( this->m_frameCache.moverId != 2047 )
        v6 = 1;
    }
    if ( this->m_frameCache.moverId != 2047 )
    {
      v9 = CG_GetEntity(localClientNum, v5->predictedPlayerState.movingPlatforms.m_movingPlatformEntity);
      this->m_frameCache.prevState = v9->prevState;
      this->m_frameCache.nextState = v9->nextState.lerp;
      this->m_frameCache.prevServerTime = v5->snap->serverTime;
      this->m_frameCache.nextServerTime = v5->nextSnap->serverTime;
      if ( v6 )
      {
        id = this->m_frameCache.moverId;
        m_movingPlatformEntity = v5->predictedPlayerState.movingPlatforms.m_movingPlatformEntity;
        Handler = CgHandler::getHandler(localClientNum);
        BGMovingPlatformPS::SetMoverEntityID(&v5->predictedPlayerState.movingPlatforms, &v5->predictedPlayerState, Handler, m_movingPlatformEntity, id, 1, 1);
        this->m_frameCache.fromTime = v5->snap->serverTime;
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
  const dvar_t *v7; 
  playerState_s *ps; 
  int integer; 
  const dvar_t *v10; 
  int v11; 
  int commandTime; 
  unsigned int v13; 
  float v16; 
  float v17; 
  float v19; 

  BGMovingPlatformClient::UpdateInternalTransforms(this, pm, startTransform, endTransform, outAppliedAngles);
  v7 = DCONST_DVARINT_com_userCmdMaxTimeStep;
  ps = pm->ps;
  if ( !DCONST_DVARINT_com_userCmdMaxTimeStep && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_userCmdMaxTimeStep") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  integer = v7->current.integer;
  v10 = DCONST_DVARINT_com_userCmdMinTimeStep;
  if ( !DCONST_DVARINT_com_userCmdMinTimeStep && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_userCmdMinTimeStep") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  v11 = v10->current.integer;
  commandTime = ps->commandTime;
  if ( pm == (pmove_t *)-16i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.h", 2169, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  v13 = I_clamp(pm->cmd.commandTime - commandTime, v11, integer);
  if ( v13 )
  {
    _XMM8 = 0i64;
    __asm { vroundss xmm3, xmm8, xmm2, 1 }
    v16 = 1000.0 / _mm_cvtepi32_ps((__m128i)v13).m128_f32[0];
    v17 = (float)((float)((float)(0.0027777778 * outAppliedAngles->v[0]) - *(float *)&_XMM3) * 360.0) * v16;
    __asm { vroundss xmm3, xmm8, xmm2, 1 }
    v19 = (float)(0.0027777778 * outAppliedAngles->v[1]) - *(float *)&_XMM3;
    this->m_platformAngleVelocity.v[0] = v17;
    this->m_platformAngleVelocity.v[1] = (float)(v19 * 360.0) * v16;
    this->m_platformAngleVelocity.v[2] = 0.0;
  }
}

/*
==============
CGMovingPlatformClient::UpdatePredictedClient
==============
*/
void CGMovingPlatformClient::UpdatePredictedClient(CGMovingPlatformClient *this, LocalClientNum_t localClientNum, pmove_t *pm, tmat43_t<vec3_t> *outMoverTransform, vec3_t *outLocalOrigin)
{
  const dvar_t *v9; 
  cg_t *LocalClientGlobals; 
  int moverId; 
  centity_t *Entity; 
  int v13; 
  unsigned int v14; 
  float v18; 
  float v19; 
  int fromTime; 
  vec3_t outOrigin; 
  __int64 v22; 
  vec3_t outAppliedDelta; 
  vec3_t delta; 
  vec3_t deltaOrigin; 
  tmat43_t<vec3_t> in2; 

  v22 = -2i64;
  v9 = DCONST_DVARBOOL_usePmoveMoverSystem;
  if ( !DCONST_DVARBOOL_usePmoveMoverSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "usePmoveMoverSystem") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( v9->current.enabled )
  {
    *(_QWORD *)this->m_platformAngleVelocity.v = 0i64;
    this->m_platformAngleVelocity.v[2] = 0.0;
  }
  else
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    CGMovingPlatformClient::AdjustPositionForMover(this, localClientNum, &LocalClientGlobals->predictedPlayerState.origin, this->m_frameCache.fromTime, LocalClientGlobals->time, &LocalClientGlobals->predictedPlayerState.origin, &deltaOrigin, &delta, pm);
    *(_QWORD *)this->m_platformAngleVelocity.v = 0i64;
    this->m_platformAngleVelocity.v[2] = 0.0;
    fromTime = this->m_frameCache.fromTime;
    moverId = this->m_frameCache.moverId;
    if ( BGMovingPlatforms::IsMovingPlatform(moverId) )
    {
      Entity = CG_GetEntity(localClientNum, moverId);
      if ( !CGMovingPlatforms::ms_instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\movingplatforms\\cg_moving_platforms.h", 119, ASSERT_TYPE_ASSERT, "(ms_instance)", (const char *)&queryFormat, "ms_instance") )
        __debugbreak();
      v13 = CGMovingPlatforms::ms_instance->ShouldUseImprovedAimAlgorithm(CGMovingPlatforms::ms_instance);
      BGMovingPlatformClient::UpdatePlayerAngles(this, &LocalClientGlobals->predictedPlayerState, &delta, &Entity->pose.angles, &outAppliedDelta, v13);
      v14 = LocalClientGlobals->time - fromTime;
      if ( v14 )
      {
        _XMM6 = 0i64;
        __asm { vroundss xmm0, xmm6, xmm1, 1 }
        outAppliedDelta.v[0] = (float)((float)(0.0027777778 * outAppliedDelta.v[0]) - *(float *)&_XMM0) * 360.0;
        __asm { vroundss xmm3, xmm6, xmm2, 1 }
        outAppliedDelta.v[1] = (float)((float)(0.0027777778 * outAppliedDelta.v[1]) - *(float *)&_XMM3) * 360.0;
        v18 = outAppliedDelta.v[1];
        v19 = 1000.0 / _mm_cvtepi32_ps((__m128i)v14).m128_f32[0];
        this->m_platformAngleVelocity.v[0] = outAppliedDelta.v[0] * v19;
        this->m_platformAngleVelocity.v[1] = v18 * v19;
        this->m_platformAngleVelocity.v[2] = v19 * outAppliedDelta.v[2];
      }
      BGMovingPlatforms::UpdateDirection(&LocalClientGlobals->predictedPlayerState.velocity, &Entity->pose.angles, &delta);
      CG_GetPoseOrigin(&Entity->pose, &outOrigin);
      AnglesToAxis(&Entity->pose.angles, (tmat33_t<vec3_t> *)outMoverTransform);
      outMoverTransform->m[3] = outOrigin;
      if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.pm_flags, ACTIVE, 5u) )
        BGMovingPlatforms::UpdatePoint(&LocalClientGlobals->predictedPlayerState.mantleState.startPosition, &outOrigin, &Entity->pose.angles, &delta, &deltaOrigin);
      MatrixInverseOrthogonal43(outMoverTransform, &in2);
      MatrixTransformVector43(&pm->ps->origin, &in2, outLocalOrigin);
      CGMovingPlatformAimAssist::UpdateDeltas(localClientNum);
      memset(&outOrigin, 0, sizeof(outOrigin));
    }
  }
}

/*
==============
AngleNormalize360
==============
*/

float __fastcall AngleNormalize360(double angle)
{
  __int128 v1; 

  v1 = *(_OWORD *)&angle;
  _XMM2 = 0i64;
  __asm { vroundss xmm2, xmm2, xmm3, 1 }
  *(float *)&v1 = (float)((float)(*(float *)&angle * 0.0027777778) - *(float *)&_XMM2) * 360.0;
  _XMM4 = v1;
  _XMM0 = 0i64;
  __asm
  {
    vcmpless xmm1, xmm0, xmm2
    vblendvps xmm0, xmm4, xmm2, xmm1
  }
  return *(float *)&_XMM0;
}

