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
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+0Ch]
    vmulss  xmm5, xmm0, cs:__real@3b360b61
    vaddss  xmm2, xmm5, cs:__real@3f000000
    vxorps  xmm0, xmm0, xmm0
    vroundss xmm4, xmm0, xmm2, 1
    vsubss  xmm1, xmm5, xmm4
    vmulss  xmm0, xmm1, cs:__real@43b40000
    vaddss  xmm2, xmm0, dword ptr [rdx]
    vmovss  dword ptr [rdx], xmm2
  }
}

/*
==============
CGMovingPlatformAimAssist::AdjustYawForMoverVelocity
==============
*/
void CGMovingPlatformAimAssist::AdjustYawForMoverVelocity(CGMovingPlatformAimAssist *this, float *yawTurnRate)
{
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+10h]
    vmulss  xmm5, xmm0, cs:__real@3b360b61
    vaddss  xmm2, xmm5, cs:__real@3f000000
    vxorps  xmm0, xmm0, xmm0
    vroundss xmm4, xmm0, xmm2, 1
    vmovss  xmm0, dword ptr [rdx]
    vsubss  xmm1, xmm5, xmm4
    vmulss  xmm2, xmm1, cs:__real@43b40000
    vsubss  xmm2, xmm0, xmm2
    vmovss  dword ptr [rdx], xmm2
  }
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
  int v11; 
  int m_movingPlatformEntity; 
  const dvar_t *v13; 
  vec3_t v45; 
  vec3_t out; 

  _RDI = outVel;
  _RSI = ps;
  if ( BGMovingPlatforms::IsOnMovingPlatform(ps) )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\movingplatforms\\cg_moving_platform_aimassist.cpp", 179, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    v11 = _RSI->commandTime - LocalClientGlobals->oldCommandTime;
    m_movingPlatformEntity = LocalClientGlobals->predictedPlayerState.movingPlatforms.m_movingPlatformEntity;
    if ( !Com_GameMode_SupportsFeature(WEAPON_SPRINT_COMBAT_IDLE|0x80) )
      goto LABEL_15;
    v13 = DVARBOOL_killswitch_aim_assist_mover_fix_enabled;
    if ( !DVARBOOL_killswitch_aim_assist_mover_fix_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_aim_assist_mover_fix_enabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    if ( v13->current.enabled && LocalClientGlobals->oldMoverId == m_movingPlatformEntity )
    {
      __asm
      {
        vxorps  xmm4, xmm4, xmm4
        vxorps  xmm1, xmm1, xmm1
        vxorps  xmm2, xmm2, xmm2
      }
      if ( _RSI->serverTime - LocalClientGlobals->oldServerTime > 0 )
      {
        MatrixTransformVector43(&LocalClientGlobals->originMoverLocal, &LocalClientGlobals->oldMoverTransform, &out);
        MatrixTransformVector43(&LocalClientGlobals->originMoverLocal, &LocalClientGlobals->moverTransform, &v45);
        __asm
        {
          vmovss  xmm0, cs:__real@447a0000
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, r14d
          vdivss  xmm3, xmm0, xmm1
          vmovss  xmm1, dword ptr [rsp+98h+var_58]
          vsubss  xmm2, xmm1, dword ptr [rsp+98h+out]
          vmovss  xmm0, dword ptr [rsp+98h+var_58+4]
          vsubss  xmm1, xmm0, dword ptr [rsp+98h+out+4]
          vmulss  xmm4, xmm2, xmm3
          vmovss  xmm2, dword ptr [rsp+98h+var_58+8]
          vsubss  xmm0, xmm2, dword ptr [rsp+98h+out+8]
          vmulss  xmm2, xmm0, xmm3
          vmulss  xmm1, xmm1, xmm3
        }
      }
      __asm
      {
        vaddss  xmm0, xmm4, dword ptr [rsi+3Ch]
        vmovss  dword ptr [rdi], xmm0
        vaddss  xmm1, xmm1, dword ptr [rsi+40h]
        vmovss  dword ptr [rdi+4], xmm1
        vaddss  xmm0, xmm2, dword ptr [rsi+44h]
        vmovss  dword ptr [rdi+8], xmm0
      }
    }
    else
    {
LABEL_15:
      if ( v11 > 0 )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rsi+30h]
          vsubss  xmm5, xmm0, dword ptr [rbp+596A8h]
          vmovss  dword ptr [rdi], xmm5
          vmovss  xmm1, dword ptr [rsi+34h]
          vsubss  xmm4, xmm1, dword ptr [rbp+596ACh]
          vmovss  dword ptr [rdi+4], xmm4
          vmovss  xmm0, dword ptr [rsi+38h]
          vsubss  xmm3, xmm0, dword ptr [rbp+596B0h]
          vmovss  xmm0, cs:__real@447a0000
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, r14d
          vdivss  xmm2, xmm0, xmm1
          vmulss  xmm1, xmm5, xmm2
          vmovss  dword ptr [rdi], xmm1
          vmulss  xmm0, xmm4, xmm2
          vmulss  xmm1, xmm3, xmm2
          vmovss  dword ptr [rdi+4], xmm0
          vmovss  dword ptr [rdi+8], xmm1
        }
      }
      else
      {
        __asm { vxorps  xmm0, xmm0, xmm0 }
        *(_QWORD *)_RDI->v = 0i64;
        __asm { vmovss  dword ptr [rdi+8], xmm0 }
      }
    }
  }
  else
  {
    _RDI->v[0] = _RSI->velocity.v[0];
    _RDI->v[1] = _RSI->velocity.v[1];
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+44h]
      vmovss  dword ptr [rdi+8], xmm0
    }
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

  _RSI = this;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\movingplatforms\\cg_moving_platform_aimassist.cpp", 91, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rdi+65E4h]
    vmulss  xmm1, xmm0, cs:__real@3a83126f
    vmovss  dword ptr [rsi], xmm1
  }
  _RSI->m_movingPlatformEntity = ps->movingPlatforms.m_movingPlatformEntity;
  _RSI->m_commandTime = ps->serverTime;
  if ( CGMovingPlatformAimAssist::IsOnMovingPlatform(_RSI) )
  {
    CGMovingPlatformClient::GetPlatformAngularVelocity(&LocalClientGlobals->movingPlatforms, &_RSI->m_angleVelocity);
  }
  else
  {
    *(_QWORD *)_RSI->m_angleVelocity.v = 0i64;
    _RSI->m_angleVelocity.v[2] = 0.0;
  }
}

/*
==============
CGMovingPlatformAimAssist::UpdateDeltas
==============
*/
void CGMovingPlatformAimAssist::UpdateDeltas(LocalClientNum_t localClientNum)
{
  __asm
  {
    vmovaps [rsp+88h+var_18], xmm6
    vmovaps [rsp+88h+var_28], xmm7
    vmovaps [rsp+88h+var_38], xmm8
    vmovaps [rsp+88h+var_48], xmm9
    vmovaps [rsp+88h+var_58], xmm10
    vmovaps [rsp+88h+var_68], xmm11
  }
  _RAX = CG_GetLocalClientGlobals(localClientNum);
  __asm
  {
    vmovss  xmm7, dword ptr [rax+38h]
    vmovss  xmm6, dword ptr [rax+596A8h]
    vmovss  xmm9, dword ptr [rax+3Ch]
    vmovss  xmm8, dword ptr [rax+596ACh]
    vmovss  xmm11, dword ptr [rax+40h]
    vmovss  xmm10, dword ptr [rax+596B0h]
  }
  _RAX = AimAssist_GetSharedGlobals(localClientNum);
  __asm
  {
    vsubss  xmm0, xmm7, xmm6
    vmovaps xmm6, [rsp+88h+var_18]
    vmovaps xmm7, [rsp+88h+var_28]
    vaddss  xmm1, xmm0, dword ptr [rax]
    vsubss  xmm0, xmm9, xmm8
    vmovaps xmm8, [rsp+88h+var_38]
    vmovaps xmm9, [rsp+88h+var_48]
    vmovss  dword ptr [rax], xmm1
    vaddss  xmm1, xmm0, dword ptr [rax+4]
    vsubss  xmm0, xmm11, xmm10
    vmovaps xmm10, [rsp+88h+var_58]
    vmovaps xmm11, [rsp+88h+var_68]
    vmovss  dword ptr [rax+4], xmm1
    vaddss  xmm1, xmm0, dword ptr [rax+8]
    vmovss  dword ptr [rax+8], xmm1
  }
}

/*
==============
CGMovingPlatformAimAssist::UpdateScreenTargetVelocity
==============
*/
__int64 CGMovingPlatformAimAssist::UpdateScreenTargetVelocity(CGMovingPlatformAimAssist *this, const centity_t *screenTargetEnt, int targetIndex, AimScreenTarget *screenTarget)
{
  __int64 v5; 
  char v16; 
  vec3_t outOrigin; 

  _RDI = screenTarget;
  v5 = targetIndex;
  _RSI = this;
  if ( !CGMovingPlatformAimAssist::IsOnMovingPlatform(this) || !_RSI->m_targetInfo[v5].dataValid )
    return 0i64;
  CG_GetPoseOrigin(&screenTargetEnt->pose, &outOrigin);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+48h+outOrigin]
    vsubss  xmm3, xmm0, dword ptr [rsi+rbx*8+1Ch]
    vmovss  dword ptr [rdi+20h], xmm3
    vmovss  xmm1, dword ptr [rsp+48h+outOrigin+4]
    vsubss  xmm0, xmm1, dword ptr [rsi+rbx*8+20h]
    vmovss  dword ptr [rdi+24h], xmm0
    vmovss  xmm2, dword ptr [rsp+48h+outOrigin+8]
    vsubss  xmm1, xmm2, dword ptr [rsi+rbx*8+24h]
    vmovss  dword ptr [rdi+28h], xmm1
    vmovss  xmm4, dword ptr [rsi]
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm4, xmm0
  }
  if ( v16 )
  {
    *(_QWORD *)_RDI->velocity.v = 0i64;
    _RDI->velocity.v[2] = 0.0;
  }
  else
  {
    __asm
    {
      vmovss  xmm0, cs:__real@3f800000
      vdivss  xmm2, xmm0, xmm4
      vmulss  xmm1, xmm3, xmm2
      vmovss  dword ptr [rdi+20h], xmm1
      vmulss  xmm0, xmm2, dword ptr [rdi+24h]
      vmovss  dword ptr [rdi+24h], xmm0
      vmulss  xmm1, xmm2, dword ptr [rdi+28h]
      vmovss  dword ptr [rdi+28h], xmm1
    }
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

