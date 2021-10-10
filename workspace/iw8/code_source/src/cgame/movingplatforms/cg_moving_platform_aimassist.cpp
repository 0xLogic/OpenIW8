/*
==============
CGMovingPlatformAimAssist::AimAssistResetFrameData
==============
*/

void __fastcall CGMovingPlatformAimAssist::AimAssistResetFrameData(LocalClientNum_t localClientNum)
{
  ?AimAssistResetFrameData@CGMovingPlatformAimAssist@@SAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CGMovingPlatformAimAssist::ResetFrameData
==============
*/

void __fastcall CGMovingPlatformAimAssist::ResetFrameData(CGMovingPlatformAimAssist *this)
{
  ?ResetFrameData@CGMovingPlatformAimAssist@@AEAAXXZ(this);
}

/*
==============
CGMovingPlatformAimAssist::CalculateLinearVelocity
==============
*/

void __fastcall CGMovingPlatformAimAssist::CalculateLinearVelocity(LocalClientNum_t localClientNum, const playerState_s *ps, vec3_t *outVel)
{
  ?CalculateLinearVelocity@CGMovingPlatformAimAssist@@SAXW4LocalClientNum_t@@PEBUplayerState_s@@AEATvec3_t@@@Z(localClientNum, ps, outVel);
}

/*
==============
CGMovingPlatformAimAssist::UpdateDataFromPS
==============
*/

void __fastcall CGMovingPlatformAimAssist::UpdateDataFromPS(CGMovingPlatformAimAssist *this, LocalClientNum_t localClientNum, const playerState_s *ps)
{
  ?UpdateDataFromPS@CGMovingPlatformAimAssist@@QEAAXW4LocalClientNum_t@@PEBUplayerState_s@@@Z(this, localClientNum, ps);
}

/*
==============
CGMovingPlatformAimAssist::UpdateDeltas
==============
*/

void __fastcall CGMovingPlatformAimAssist::UpdateDeltas(LocalClientNum_t localClientNum)
{
  ?UpdateDeltas@CGMovingPlatformAimAssist@@SAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CGMovingPlatformAimAssist::IsOnMovingPlatform
==============
*/

int __fastcall CGMovingPlatformAimAssist::IsOnMovingPlatform(CGMovingPlatformAimAssist *this)
{
  return ?IsOnMovingPlatform@CGMovingPlatformAimAssist@@QEBAHXZ(this);
}

/*
==============
CGMovingPlatformAimAssist::UpdateScreenTargetVelocity
==============
*/

int __fastcall CGMovingPlatformAimAssist::UpdateScreenTargetVelocity(CGMovingPlatformAimAssist *this, const centity_t *screenTargetEnt, int targetIndex, AimScreenTarget *screenTarget)
{
  return ?UpdateScreenTargetVelocity@CGMovingPlatformAimAssist@@QEBAHPEBUcentity_t@@HPEAUAimScreenTarget@@@Z(this, screenTargetEnt, targetIndex, screenTarget);
}

/*
==============
CGMovingPlatformAimAssist::AdjustYawForMoverVelocity
==============
*/

void __fastcall CGMovingPlatformAimAssist::AdjustYawForMoverVelocity(CGMovingPlatformAimAssist *this, float *yawTurnRate)
{
  ?AdjustYawForMoverVelocity@CGMovingPlatformAimAssist@@QEAAXPEAM@Z(this, yawTurnRate);
}

/*
==============
CGMovingPlatformAimAssist::AdjustPitchForMoverVelocity
==============
*/

void __fastcall CGMovingPlatformAimAssist::AdjustPitchForMoverVelocity(CGMovingPlatformAimAssist *this, float *pitchTurnRate)
{
  ?AdjustPitchForMoverVelocity@CGMovingPlatformAimAssist@@QEAAXPEAM@Z(this, pitchTurnRate);
}

/*
==============
CGMovingPlatformAimAssist::HadAutoAimTimeout
==============
*/

int __fastcall CGMovingPlatformAimAssist::HadAutoAimTimeout(CGMovingPlatformAimAssist *this, int autoAimPressed)
{
  return ?HadAutoAimTimeout@CGMovingPlatformAimAssist@@QEBAHH@Z(this, autoAimPressed);
}

/*
==============
CGMovingPlatformAimAssist::AimAssistUpdateTarget
==============
*/

void __fastcall CGMovingPlatformAimAssist::AimAssistUpdateTarget(LocalClientNum_t localClientNum, const centity_t *cent)
{
  ?AimAssistUpdateTarget@CGMovingPlatformAimAssist@@SAXW4LocalClientNum_t@@PEBUcentity_t@@@Z(localClientNum, cent);
}

/*
==============
CGMovingPlatformAimAssist::CGMovingPlatformAimAssist
==============
*/

void __fastcall CGMovingPlatformAimAssist::CGMovingPlatformAimAssist(CGMovingPlatformAimAssist *this)
{
  ??0CGMovingPlatformAimAssist@@QEAA@XZ(this);
}

/*
==============
CGMovingPlatformAimAssist::UpdateTarget
==============
*/

void __fastcall CGMovingPlatformAimAssist::UpdateTarget(CGMovingPlatformAimAssist *this, LocalClientNum_t localClientNum, const centity_t *cent)
{
  ?UpdateTarget@CGMovingPlatformAimAssist@@AEAAXW4LocalClientNum_t@@PEBUcentity_t@@@Z(this, localClientNum, cent);
}

/*
==============
CGMovingPlatformAimAssist::Init
==============
*/

void __fastcall CGMovingPlatformAimAssist::Init(CGMovingPlatformAimAssist *this)
{
  ?Init@CGMovingPlatformAimAssist@@QEAAXXZ(this);
}

/*
==============
CGMovingPlatformAimAssist::CGMovingPlatformAimAssist
==============
*/
void CGMovingPlatformAimAssist::CGMovingPlatformAimAssist(CGMovingPlatformAimAssist *this)
{
  ;
}

/*
==============
CGMovingPlatformAimAssist::AdjustPitchForMoverVelocity
==============
*/
void CGMovingPlatformAimAssist::AdjustPitchForMoverVelocity(CGMovingPlatformAimAssist *this, float *pitchTurnRate)
{
  _XMM0 = 0i64;
  __asm { vroundss xmm4, xmm0, xmm2, 1 }
  *pitchTurnRate = (float)((float)((float)(this->m_angleVelocity.v[0] * 0.0027777778) - *(float *)&_XMM4) * 360.0) + *pitchTurnRate;
}

/*
==============
CGMovingPlatformAimAssist::AdjustYawForMoverVelocity
==============
*/
void CGMovingPlatformAimAssist::AdjustYawForMoverVelocity(CGMovingPlatformAimAssist *this, float *yawTurnRate)
{
  _XMM0 = 0i64;
  __asm { vroundss xmm4, xmm0, xmm2, 1 }
  *yawTurnRate = *yawTurnRate - (float)((float)((float)(this->m_angleVelocity.v[1] * 0.0027777778) - *(float *)&_XMM4) * 360.0);
}

/*
==============
CGMovingPlatformAimAssist::AimAssistResetFrameData
==============
*/
void CGMovingPlatformAimAssist::AimAssistResetFrameData(LocalClientNum_t localClientNum)
{
  CGMovingPlatformAimAssist *MovingPlatformDataFromClient; 

  MovingPlatformDataFromClient = AimAssist_GetMovingPlatformDataFromClient(localClientNum);
  if ( MovingPlatformDataFromClient->m_init )
    memset_0(MovingPlatformDataFromClient->m_targetInfo, 0, sizeof(MovingPlatformDataFromClient->m_targetInfo));
}

/*
==============
CGMovingPlatformAimAssist::AimAssistUpdateTarget
==============
*/
void CGMovingPlatformAimAssist::AimAssistUpdateTarget(LocalClientNum_t localClientNum, const centity_t *cent)
{
  entityState_t *p_nextState; 
  CGMovingPlatformAimAssist *MovingPlatformDataFromClient; 
  entityType_s eType; 
  int v7; 
  int v8; 
  bool *p_dataValid; 
  __int64 v10; 
  int targetCount; 
  AimTarget *targetList; 

  p_nextState = &cent->nextState;
  MovingPlatformDataFromClient = AimAssist_GetMovingPlatformDataFromClient(localClientNum);
  if ( cent == (const centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1921, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  eType = cent->nextState.eType;
  if ( ((eType - 1) & 0xFFED) == 0 && eType != ET_ITEM || GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cent->nextState.lerp.eFlags, ACTIVE, 8u) )
  {
    Sys_ProfBeginNamedEvent(0xFFFF0000, "CGMovingPlatformAimAssist UpdateTarget");
    AimTarget_GetClientTargetList(localClientNum, (const AimTarget **)&targetList, &targetCount);
    v7 = targetCount;
    v8 = 0;
    if ( targetCount > 0 )
    {
      p_dataValid = &MovingPlatformDataFromClient->m_targetInfo[0].dataValid;
      v10 = 0i64;
      do
      {
        if ( (targetList[v10].flags[0] & 1) != 0 && targetList[v10].entIndex == p_nextState->number )
        {
          CG_GetPoseOrigin(&cent->pose, &MovingPlatformDataFromClient->m_targetInfo[v8].prevOrigin);
          v7 = targetCount;
          *p_dataValid = 1;
        }
        ++v8;
        ++v10;
        p_dataValid += 16;
      }
      while ( v8 < v7 );
    }
    Sys_ProfEndNamedEvent();
  }
}

/*
==============
CGMovingPlatformAimAssist::CalculateLinearVelocity
==============
*/
void CGMovingPlatformAimAssist::CalculateLinearVelocity(LocalClientNum_t localClientNum, const playerState_s *ps, vec3_t *outVel)
{
  cg_t *LocalClientGlobals; 
  int v7; 
  int m_movingPlatformEntity; 
  const dvar_t *v9; 
  int v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  vec3_t v19; 
  vec3_t out; 

  if ( BGMovingPlatforms::IsOnMovingPlatform(ps) )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\movingplatforms\\cg_moving_platform_aimassist.cpp", 179, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    v7 = ps->commandTime - LocalClientGlobals->oldCommandTime;
    m_movingPlatformEntity = LocalClientGlobals->predictedPlayerState.movingPlatforms.m_movingPlatformEntity;
    if ( !Com_GameMode_SupportsFeature(WEAPON_SPRINT_COMBAT_IDLE|0x80) )
      goto LABEL_15;
    v9 = DVARBOOL_killswitch_aim_assist_mover_fix_enabled;
    if ( !DVARBOOL_killswitch_aim_assist_mover_fix_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_aim_assist_mover_fix_enabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    if ( v9->current.enabled && LocalClientGlobals->oldMoverId == m_movingPlatformEntity )
    {
      v10 = ps->serverTime - LocalClientGlobals->oldServerTime;
      v11 = 0.0;
      v12 = 0.0;
      v13 = 0.0;
      if ( v10 > 0 )
      {
        MatrixTransformVector43(&LocalClientGlobals->originMoverLocal, &LocalClientGlobals->oldMoverTransform, &out);
        MatrixTransformVector43(&LocalClientGlobals->originMoverLocal, &LocalClientGlobals->moverTransform, &v19);
        v14 = 1000.0 / (float)v10;
        v11 = (float)(v19.v[0] - out.v[0]) * v14;
        v13 = (float)(v19.v[2] - out.v[2]) * v14;
        v12 = (float)(v19.v[1] - out.v[1]) * v14;
      }
      outVel->v[0] = v11 + ps->velocity.v[0];
      outVel->v[1] = v12 + ps->velocity.v[1];
      outVel->v[2] = v13 + ps->velocity.v[2];
    }
    else
    {
LABEL_15:
      if ( v7 > 0 )
      {
        v15 = ps->origin.v[0] - LocalClientGlobals->oldOrigin.v[0];
        outVel->v[0] = v15;
        v16 = ps->origin.v[1] - LocalClientGlobals->oldOrigin.v[1];
        outVel->v[1] = v16;
        v17 = ps->origin.v[2] - LocalClientGlobals->oldOrigin.v[2];
        v18 = 1000.0 / (float)v7;
        outVel->v[0] = v15 * v18;
        outVel->v[1] = v16 * v18;
        outVel->v[2] = v17 * v18;
      }
      else
      {
        *(_QWORD *)outVel->v = 0i64;
        outVel->v[2] = 0;
      }
    }
  }
  else
  {
    outVel->v[0] = ps->velocity.v[0];
    outVel->v[1] = ps->velocity.v[1];
    outVel->v[2] = ps->velocity.v[2];
  }
}

/*
==============
CGMovingPlatformAimAssist::HadAutoAimTimeout
==============
*/
_BOOL8 CGMovingPlatformAimAssist::HadAutoAimTimeout(CGMovingPlatformAimAssist *this, int autoAimPressed)
{
  return this->m_commandTime - autoAimPressed < 250 && CGMovingPlatformAimAssist::IsOnMovingPlatform(this);
}

/*
==============
CGMovingPlatformAimAssist::Init
==============
*/
void CGMovingPlatformAimAssist::Init(CGMovingPlatformAimAssist *this)
{
  this->m_init = 1;
}

/*
==============
CGMovingPlatformAimAssist::IsOnMovingPlatform
==============
*/
_BOOL8 CGMovingPlatformAimAssist::IsOnMovingPlatform(CGMovingPlatformAimAssist *this)
{
  int m_movingPlatformEntity; 
  int v3; 

  m_movingPlatformEntity = this->m_movingPlatformEntity;
  if ( m_movingPlatformEntity < cls.maxClients && m_movingPlatformEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\movingplatforms\\cg_moving_platform_aimassist.cpp", 34, ASSERT_TYPE_ASSERT, "(m_movingPlatformEntity >= cls.maxClients || m_movingPlatformEntity == 0)", (const char *)&queryFormat, "m_movingPlatformEntity >= cls.maxClients || m_movingPlatformEntity == 0") )
    __debugbreak();
  v3 = this->m_movingPlatformEntity;
  return v3 != 2047 && v3;
}

/*
==============
CGMovingPlatformAimAssist::ResetFrameData
==============
*/
void CGMovingPlatformAimAssist::ResetFrameData(CGMovingPlatformAimAssist *this)
{
  if ( this->m_init )
    memset_0(this->m_targetInfo, 0, sizeof(this->m_targetInfo));
}

/*
==============
CGMovingPlatformAimAssist::UpdateDataFromPS
==============
*/
void CGMovingPlatformAimAssist::UpdateDataFromPS(CGMovingPlatformAimAssist *this, LocalClientNum_t localClientNum, const playerState_s *ps)
{
  cg_t *LocalClientGlobals; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\movingplatforms\\cg_moving_platform_aimassist.cpp", 91, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  this->m_frametime = (float)LocalClientGlobals->frametime * 0.001;
  this->m_movingPlatformEntity = ps->movingPlatforms.m_movingPlatformEntity;
  this->m_commandTime = ps->serverTime;
  if ( CGMovingPlatformAimAssist::IsOnMovingPlatform(this) )
  {
    CGMovingPlatformClient::GetPlatformAngularVelocity(&LocalClientGlobals->movingPlatforms, &this->m_angleVelocity);
  }
  else
  {
    *(_QWORD *)this->m_angleVelocity.v = 0i64;
    this->m_angleVelocity.v[2] = 0.0;
  }
}

/*
==============
CGMovingPlatformAimAssist::UpdateDeltas
==============
*/
void CGMovingPlatformAimAssist::UpdateDeltas(LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  float v3; 
  float v4; 
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  AimAssistSharedGlobals *SharedGlobals; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v3 = LocalClientGlobals->predictedPlayerState.origin.v[0];
  v4 = LocalClientGlobals->oldOrigin.v[0];
  v5 = LocalClientGlobals->predictedPlayerState.origin.v[1];
  v6 = LocalClientGlobals->oldOrigin.v[1];
  v7 = LocalClientGlobals->predictedPlayerState.origin.v[2];
  v8 = LocalClientGlobals->oldOrigin.v[2];
  SharedGlobals = AimAssist_GetSharedGlobals(localClientNum);
  SharedGlobals->eyeOrigin.v[0] = (float)(v3 - v4) + SharedGlobals->eyeOrigin.v[0];
  SharedGlobals->eyeOrigin.v[1] = (float)(v5 - v6) + SharedGlobals->eyeOrigin.v[1];
  SharedGlobals->eyeOrigin.v[2] = (float)(v7 - v8) + SharedGlobals->eyeOrigin.v[2];
}

/*
==============
CGMovingPlatformAimAssist::UpdateScreenTargetVelocity
==============
*/
__int64 CGMovingPlatformAimAssist::UpdateScreenTargetVelocity(CGMovingPlatformAimAssist *this, const centity_t *screenTargetEnt, int targetIndex, AimScreenTarget *screenTarget)
{
  __int64 v5; 
  __int64 v8; 
  float v9; 
  float m_frametime; 
  vec3_t outOrigin; 

  v5 = targetIndex;
  if ( !CGMovingPlatformAimAssist::IsOnMovingPlatform(this) )
    return 0i64;
  v8 = v5;
  if ( !this->m_targetInfo[v8].dataValid )
    return 0i64;
  CG_GetPoseOrigin(&screenTargetEnt->pose, &outOrigin);
  v9 = outOrigin.v[0] - this->m_targetInfo[v8].prevOrigin.v[0];
  screenTarget->velocity.v[0] = v9;
  screenTarget->velocity.v[1] = outOrigin.v[1] - this->m_targetInfo[v8].prevOrigin.v[1];
  screenTarget->velocity.v[2] = outOrigin.v[2] - this->m_targetInfo[v8].prevOrigin.v[2];
  m_frametime = this->m_frametime;
  if ( this->m_frametime == 0.0 )
  {
    *(_QWORD *)screenTarget->velocity.v = 0i64;
    screenTarget->velocity.v[2] = 0.0;
  }
  else
  {
    screenTarget->velocity.v[0] = v9 * (float)(1.0 / m_frametime);
    screenTarget->velocity.v[1] = (float)(1.0 / m_frametime) * screenTarget->velocity.v[1];
    screenTarget->velocity.v[2] = (float)(1.0 / m_frametime) * screenTarget->velocity.v[2];
  }
  memset(&outOrigin, 0, sizeof(outOrigin));
  return 1i64;
}

/*
==============
CGMovingPlatformAimAssist::UpdateTarget
==============
*/
void CGMovingPlatformAimAssist::UpdateTarget(CGMovingPlatformAimAssist *this, LocalClientNum_t localClientNum, const centity_t *cent)
{
  entityState_t *p_nextState; 
  entityType_s eType; 
  int v8; 
  int v9; 
  bool *p_dataValid; 
  __int64 v11; 
  int targetCount; 
  AimTarget *targetList; 

  p_nextState = &cent->nextState;
  if ( cent == (const centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1921, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  eType = p_nextState->eType;
  if ( ((eType - 1) & 0xFFED) == 0 && eType != ET_ITEM || GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cent->nextState.lerp.eFlags, ACTIVE, 8u) )
  {
    Sys_ProfBeginNamedEvent(0xFFFF0000, "CGMovingPlatformAimAssist UpdateTarget");
    AimTarget_GetClientTargetList(localClientNum, (const AimTarget **)&targetList, &targetCount);
    v8 = targetCount;
    v9 = 0;
    if ( targetCount > 0 )
    {
      p_dataValid = &this->m_targetInfo[0].dataValid;
      v11 = 0i64;
      do
      {
        if ( (targetList[v11].flags[0] & 1) != 0 && targetList[v11].entIndex == p_nextState->number )
        {
          CG_GetPoseOrigin(&cent->pose, &this->m_targetInfo[v9].prevOrigin);
          v8 = targetCount;
          *p_dataValid = 1;
        }
        ++v9;
        ++v11;
        p_dataValid += 16;
      }
      while ( v9 < v8 );
    }
    Sys_ProfEndNamedEvent();
  }
}

