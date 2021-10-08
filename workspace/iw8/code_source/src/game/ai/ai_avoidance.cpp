/*
==============
AIScriptedInterface::ClearBlockingEntity
==============
*/

void __fastcall AIScriptedInterface::ClearBlockingEntity(AIScriptedInterface *this)
{
  ?ClearBlockingEntity@AIScriptedInterface@@QEBAXXZ(this);
}

/*
==============
AIScriptedInterface::GetAvoidanceDelta
==============
*/

bool __fastcall AIScriptedInterface::GetAvoidanceDelta(AIScriptedInterface *this, const float fMoveDist, const bool fullyProcess, const vec3_t *velocity, vec3_t *inOutMoveDelta)
{
  return ?GetAvoidanceDelta@AIScriptedInterface@@QEBA_NM_NAEBTvec3_t@@AEAT2@@Z(this, fMoveDist, fullyProcess, velocity, inOutMoveDelta);
}

/*
==============
AIScriptedInterface::OnScrCmd_EnableAvoidance
==============
*/

void __fastcall AIScriptedInterface::OnScrCmd_EnableAvoidance(AIScriptedInterface *this, scrContext_t *scrContext)
{
  ?OnScrCmd_EnableAvoidance@AIScriptedInterface@@QEBAXAEAUscrContext_t@@@Z(this, scrContext);
}

/*
==============
AIScriptedInterface::FireBlockedNotify
==============
*/

void __fastcall AIScriptedInterface::FireBlockedNotify(AIScriptedInterface *this, const gentity_s *closestCollider)
{
  ?FireBlockedNotify@AIScriptedInterface@@QEBAXPEBUgentity_s@@@Z(this, closestCollider);
}

/*
==============
AIScriptedInterface::OnScrCmd_SetAvoidanceRadius
==============
*/

void __fastcall AIScriptedInterface::OnScrCmd_SetAvoidanceRadius(AIScriptedInterface *this, scrContext_t *scrContext)
{
  ?OnScrCmd_SetAvoidanceRadius@AIScriptedInterface@@QEBAXAEAUscrContext_t@@@Z(this, scrContext);
}

/*
==============
AIScriptedInterface::OnScrCmd_SetAvoidanceIgnoreEnt
==============
*/

void __fastcall AIScriptedInterface::OnScrCmd_SetAvoidanceIgnoreEnt(AIScriptedInterface *this, scrContext_t *scrContext)
{
  ?OnScrCmd_SetAvoidanceIgnoreEnt@AIScriptedInterface@@QEBAXAEAUscrContext_t@@@Z(this, scrContext);
}

/*
==============
AIScriptedInterface::OnScrCmd_ClearAvoidanceIgnoreEnt
==============
*/

void __fastcall AIScriptedInterface::OnScrCmd_ClearAvoidanceIgnoreEnt(AIScriptedInterface *this, scrContext_t *scrContext)
{
  ?OnScrCmd_ClearAvoidanceIgnoreEnt@AIScriptedInterface@@QEBAXAEAUscrContext_t@@@Z(this, scrContext);
}

/*
==============
AIScriptedInterface::IsInBlockingAvoidanceChain
==============
*/

bool __fastcall AIScriptedInterface::IsInBlockingAvoidanceChain(AIScriptedInterface *this, const ai_scripted_t *pOtherAI)
{
  return ?IsInBlockingAvoidanceChain@AIScriptedInterface@@QEBA_NPEBUai_scripted_t@@@Z(this, pOtherAI);
}

/*
==============
AIScriptedInterface::OnScrCmd_SetAvoidanceReciprocity
==============
*/

void __fastcall AIScriptedInterface::OnScrCmd_SetAvoidanceReciprocity(AIScriptedInterface *this, scrContext_t *scrContext)
{
  ?OnScrCmd_SetAvoidanceReciprocity@AIScriptedInterface@@QEBAXAEAUscrContext_t@@@Z(this, scrContext);
}

/*
==============
AIScriptedInterface::UpdateBlockingEntity
==============
*/

void __fastcall AIScriptedInterface::UpdateBlockingEntity(AIScriptedInterface *this)
{
  ?UpdateBlockingEntity@AIScriptedInterface@@QEBAXXZ(this);
}

/*
==============
AIScriptedInterface::SetBlockingEntity
==============
*/

void __fastcall AIScriptedInterface::SetBlockingEntity(AIScriptedInterface *this, const gentity_s *closestCollider, const vec3_t *velocity, const vec3_t *moveDelta, float moveDistance)
{
  ?SetBlockingEntity@AIScriptedInterface@@QEBAXPEBUgentity_s@@AEBTvec3_t@@1M@Z(this, closestCollider, velocity, moveDelta, moveDistance);
}

/*
==============
AIScriptedInterface::ProcessBlockingAvoidance
==============
*/

bool __fastcall AIScriptedInterface::ProcessBlockingAvoidance(AIScriptedInterface *this, AvoidanceResult avoidResult, vec3_t *avoidanceMoveDelta, float speed, int *colliderEntNums, int colliderCount, const vec3_t *velocity, vec3_t *goalPosition, vec3_t *moveDelta, float moveDistance, bool hasPlayerObstacle, bool *outPushingPlayer)
{
  return ?ProcessBlockingAvoidance@AIScriptedInterface@@QEBA_NW4AvoidanceResult@@AEATvec3_t@@MPEAHHAEBT3@11M_NAEA_N@Z(this, avoidResult, avoidanceMoveDelta, speed, colliderEntNums, colliderCount, velocity, goalPosition, moveDelta, moveDistance, hasPlayerObstacle, outPushingPlayer);
}

/*
==============
AIScriptedInterface::OnScrCmd_SetAvoidanceBounds
==============
*/

void __fastcall AIScriptedInterface::OnScrCmd_SetAvoidanceBounds(AIScriptedInterface *this, scrContext_t *scrContext)
{
  ?OnScrCmd_SetAvoidanceBounds@AIScriptedInterface@@QEBAXAEAUscrContext_t@@@Z(this, scrContext);
}

/*
==============
AIScriptedInterface::ClearBlockingEntity
==============
*/
void AIScriptedInterface::ClearBlockingEntity(AIScriptedInterface *this)
{
  ai_scripted_t *m_pAI; 

  EntHandle::setEnt(&this->m_pAI->avoidanceBlockedData.blockingEntity, NULL);
  this->m_pAI->avoidanceBlockedData.blocked = 0;
  m_pAI = this->m_pAI;
  *(_QWORD *)m_pAI->avoidanceBlockedData.blockedEntityPosition.v = 0i64;
  m_pAI->avoidanceBlockedData.blockedEntityPosition.v[2] = 0.0;
  *(_QWORD *)m_pAI->avoidanceBlockedData.storedVelocity.v = 0i64;
  *(_QWORD *)&m_pAI->avoidanceBlockedData.storedVelocity.z = 0i64;
  *(_QWORD *)&m_pAI->avoidanceBlockedData.storedMoveDelta.y = 0i64;
  m_pAI->avoidanceBlockedData.blockedCheckCount = 0;
  this->m_pAI->avoidanceBlockedData.processingBlocking = 0;
}

/*
==============
AIScriptedInterface::FireBlockedNotify
==============
*/
void AIScriptedInterface::FireBlockedNotify(AIScriptedInterface *this, const gentity_s *closestCollider)
{
  scrContext_t *v4; 

  v4 = ScriptContext_Server();
  Scr_AddInt(v4, level.time - this->m_pAI->avoidanceBlockedData.blockedStartTime);
  GScr_AddEntity(closestCollider);
  Scr_AddConstString(v4, scr_const.path_blocked);
  GScr_Notify(this->m_pAI->ent, scr_const.node_bad, 3u);
  this->m_pAI->avoidanceBlockedData.blockedNotifyTime = level.time + 200;
}

/*
==============
AIScriptedInterface::GetAvoidanceDelta
==============
*/

bool __fastcall AIScriptedInterface::GetAvoidanceDelta(AIScriptedInterface *this, double fMoveDist, const bool fullyProcess, const vec3_t *velocity, vec3_t *inOutMoveDelta)
{
  const dvar_t *v13; 
  bool v15; 
  ai_scripted_t *m_pAI; 
  gentity_s *TargetEntity; 
  const dvar_t *v35; 
  const dvar_t *v36; 
  bool drawAvoidance; 
  ai_scripted_t *v60; 
  ai_scripted_t *v61; 
  AvoidanceResult v66; 
  AvoidanceResult v87; 
  AINavigator2D *v89; 
  bool hasPlayerObstacle; 
  ai_scripted_t *v94; 
  ai_scripted_t *v96; 
  bool result; 
  ai_scripted_t *v102; 
  ai_scripted_t *v103; 
  float v115; 
  bool outPushingPlayer; 
  int colliderCount[3]; 
  AvoidingEntityInfo avoidingEntityInfo; 
  vec3_t outAvoidingVelocity; 
  vec3_t moveDelta; 
  int outColliderEntNums[272]; 
  char v128; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-58h], xmm9 }
  v13 = DCONST_DVARBOOL_ai_useOrca;
  _RDI = inOutMoveDelta;
  v15 = 0;
  _R15 = velocity;
  __asm { vmovaps xmm9, xmm1 }
  if ( !DCONST_DVARBOOL_ai_useOrca && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_useOrca") )
    __debugbreak();
  __asm
  {
    vmovaps xmmword ptr [rsp+5C0h+var_38+8], xmm6
    vmovaps [rsp+5C0h+var_48+8], xmm8
    vmovaps xmmword ptr [rsp+5C0h+var_68+8], xmm10
    vmovaps [rsp+5C0h+var_78+8], xmm11
    vmovaps [rsp+5C0h+var_88+8], xmm12
    vmovaps [rsp+5C0h+var_98+8], xmm13
  }
  Dvar_CheckFrontendServerThread(v13);
  if ( !v13->current.enabled || !this->m_pAI->avoidance.avoidanceEnabled )
    goto LABEL_41;
  if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
    __debugbreak();
  __asm
  {
    vmovss  xmm3, dword ptr [rdi]
    vmovss  xmm2, dword ptr [rdi+8]
    vmovss  xmm0, cs:__real@447a0000
  }
  m_pAI = this->m_pAI;
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, cs:?level@@3Ulevel_locals_t@@A.frameDuration; level_locals_t level
    vdivss  xmm4, xmm0, xmm1
    vmovss  xmm1, dword ptr [rdi+4]
    vmovss  dword ptr [rbp+4C0h+var_4F0+4], xmm1
    vmulss  xmm1, xmm1, xmm4
    vmovss  dword ptr [rdi+4], xmm1
    vmulss  xmm0, xmm3, xmm4
    vmovss  dword ptr [rdi], xmm0
    vmulss  xmm0, xmm2, xmm4
    vmovss  dword ptr [rdi+8], xmm0
    vmovss  xmm1, dword ptr [r15]
    vmovss  xmm0, dword ptr [r15+4]
    vmovss  dword ptr [rbp+4C0h+avoidingEntityInfo.currentVelocity], xmm1
    vmovss  xmm1, dword ptr [r15+8]
    vmovss  dword ptr [rbp+4C0h+avoidingEntityInfo.currentVelocity+8], xmm1
    vmovss  dword ptr [rbp+4C0h+var_4F0], xmm3
    vmovss  dword ptr [rbp+4C0h+var_4F0+8], xmm2
    vmovss  dword ptr [rbp+4C0h+avoidingEntityInfo.currentVelocity+4], xmm0
  }
  if ( EntHandle::isDefined(&m_pAI->ignoreAvoidanceEnt) )
    TargetEntity = EntHandle::ent(&this->m_pAI->ignoreAvoidanceEnt);
  else
    TargetEntity = AICommonInterface::GetTargetEntity(this);
  v35 = DCONST_DVARINT_ai_showRepulsors;
  avoidingEntityInfo.ignoreEnt = TargetEntity;
  avoidingEntityInfo.drawAvoidance = 0;
  if ( !DCONST_DVARINT_ai_showRepulsors && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showRepulsors") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v35);
  if ( v35->current.integer == 2 )
  {
    v36 = DVARINT_ai_debugEntIndex;
    if ( !DVARINT_ai_debugEntIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugEntIndex") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v36);
    drawAvoidance = avoidingEntityInfo.drawAvoidance;
    if ( v36->current.integer == this->m_pAI->ent->s.number )
      drawAvoidance = 1;
    avoidingEntityInfo.drawAvoidance = drawAvoidance;
  }
  __asm
  {
    vmovss  xmm5, dword ptr [rdi+4]
    vmovss  xmm4, dword ptr [rdi]
    vmovss  xmm6, dword ptr [rdi+8]
  }
  _RAX = this->m_pAI;
  __asm
  {
    vmovss  xmm8, cs:__real@3f800000
    vmulss  xmm0, xmm4, xmm4
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm3, xmm2, xmm2
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm8, xmm0
    vdivss  xmm1, xmm8, xmm0
  }
  colliderCount[0] = 0;
  __asm
  {
    vmovss  xmm10, dword ptr [rax+0B54h]
    vmulss  xmm11, xmm4, xmm1
    vmulss  xmm13, xmm6, xmm1
    vmulss  xmm2, xmm11, xmm10
    vmulss  xmm0, xmm13, xmm10
    vmulss  xmm12, xmm5, xmm1
    vmulss  xmm1, xmm12, xmm10
    vmovss  dword ptr [rbp+4C0h+outAvoidingVelocity], xmm2
    vmovss  dword ptr [rbp+4C0h+outAvoidingVelocity+4], xmm1
    vmovss  dword ptr [rbp+4C0h+outAvoidingVelocity+8], xmm0
    vmovss  dword ptr [rbp+4C0h+avoidingEntityInfo.desiredVelocity], xmm2
    vmovss  dword ptr [rbp+4C0h+avoidingEntityInfo.desiredVelocity+4], xmm1
    vmovss  dword ptr [rbp+4C0h+avoidingEntityInfo.desiredVelocity+8], xmm0
  }
  _RAX->avoidance.minSpeed = 23.0;
  *(double *)&_XMM0 = AIScriptedInterface::GetTargetSpeed(this);
  _RAX = this->m_pAI;
  __asm { vmovss  dword ptr [rax+1C0h], xmm0 }
  v60 = this->m_pAI;
  avoidingEntityInfo.ent = v60->ent;
  Nav_GetGoalPos(v60->pNavigator, &avoidingEntityInfo.goalPosition);
  v61 = this->m_pAI;
  _RAX = v61->ent;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+130h]
    vmovss  dword ptr [rbp+4C0h+avoidingEntityInfo.position], xmm0
    vmovss  xmm1, dword ptr [rax+134h]
    vmovss  dword ptr [rbp+4C0h+avoidingEntityInfo.position+4], xmm1
    vmovss  xmm0, dword ptr [rax+138h]
    vmovss  dword ptr [rbp+4C0h+avoidingEntityInfo.position+8], xmm0
  }
  v66 = ORCA_DoAvoidance(&avoidingEntityInfo, &v61->avoidance, &outAvoidingVelocity, ORCA_RateVelocity, outColliderEntNums, colliderCount);
  __asm
  {
    vmovss  xmm3, dword ptr [rbp+4C0h+outAvoidingVelocity]
    vmovss  xmm5, dword ptr [rbp+4C0h+outAvoidingVelocity+4]
    vmovss  xmm4, dword ptr [rbp+4C0h+outAvoidingVelocity+8]
    vmulss  xmm0, xmm3, xmm3
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm0, xmm2, xmm1
    vsqrtss xmm6, xmm0, xmm0
    vcmpless xmm0, xmm6, cs:__real@80000000
    vblendvps xmm0, xmm6, xmm8, xmm0
    vdivss  xmm1, xmm8, xmm0
    vmulss  xmm2, xmm3, xmm1
    vmulss  xmm0, xmm5, xmm1
    vmulss  xmm3, xmm4, xmm1
    vmulss  xmm1, xmm0, xmm12
    vmovss  dword ptr [rbp+4C0h+outAvoidingVelocity+4], xmm0
    vmulss  xmm0, xmm2, xmm11
    vmovss  dword ptr [rbp+4C0h+outAvoidingVelocity], xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm13
    vmovss  dword ptr [rbp+4C0h+outAvoidingVelocity+8], xmm3
    vaddss  xmm3, xmm2, xmm1
  }
  v87 = v66;
  __asm { vmovss  xmm8, cs:__real@3f7c1bda }
  v15 = (unsigned int)v66 <= AVOIDANCE_SPLIT_FAIL;
  __asm { vcomiss xmm3, xmm8 }
  this->m_pAI->avoidance_active = (unsigned int)v66 < AVOIDANCE_SPLIT_FAIL;
  if ( !fullyProcess )
    goto LABEL_41;
  v89 = this->m_pAI->pNavigator->Get2DNavigator(this->m_pAI->pNavigator);
  __asm { vmovss  xmm1, cs:__real@43c80000; maxDistance }
  hasPlayerObstacle = AINavigator2D::IsApproachingPlayerObstacle(v89, *(float *)&_XMM1);
  if ( !hasPlayerObstacle )
    goto LABEL_27;
  if ( this->m_pAI->avoidance.pushPlayerEnabled )
    goto LABEL_27;
  __asm { vmovss  xmm1, cs:__real@43c80000; dist }
  if ( AIScriptedInterface::IsNearAnyPlayers(this, *(float *)&_XMM1) )
  {
    v15 = 1;
  }
  else
  {
LABEL_27:
    if ( !v15 )
    {
      __asm
      {
        vdivss  xmm0, xmm6, xmm10
        vcomiss xmm0, cs:__real@3e99999a
      }
    }
  }
  v94 = this->m_pAI;
  if ( v94->avoidanceBlockedData.blocked && !v94->avoidanceBlockedData.processingBlocking )
    goto LABEL_35;
  if ( !v15 )
    goto LABEL_36;
  outPushingPlayer = 0;
  __asm
  {
    vmovss  dword ptr [rsp+5C0h+var_578], xmm9
    vmovaps xmm3, xmm6; speed
  }
  if ( AIScriptedInterface::ProcessBlockingAvoidance(this, v87, &outAvoidingVelocity, *(float *)&_XMM3, outColliderEntNums, colliderCount[0], _R15, &avoidingEntityInfo.goalPosition, &moveDelta, v115, hasPlayerObstacle, &outPushingPlayer) )
  {
LABEL_35:
    if ( v15 )
    {
LABEL_40:
      __asm
      {
        vmulss  xmm1, xmm9, dword ptr [rbp+4C0h+outAvoidingVelocity]
        vmulss  xmm0, xmm9, dword ptr [rbp+4C0h+outAvoidingVelocity+4]
        vmulss  xmm2, xmm9, dword ptr [rbp+4C0h+outAvoidingVelocity+8]
        vmovss  dword ptr [rdi], xmm1
        vmovss  dword ptr [rdi+4], xmm0
        vmovss  dword ptr [rdi+8], xmm2
      }
LABEL_41:
      result = v15;
      goto LABEL_42;
    }
LABEL_36:
    __asm
    {
      vsubss  xmm0, xmm10, cs:__real@3a83126f
      vcomiss xmm6, xmm0
    }
    this->m_pAI->avoidance_maxSpeed = -1.0;
    v102 = this->m_pAI;
    if ( v102->avoidanceBlockedData.blocked )
    {
      --v102->avoidanceBlockedData.blockedCheckCount;
      v103 = this->m_pAI;
      if ( v103->avoidanceBlockedData.blocked && !v103->avoidanceBlockedData.blockedCheckCount )
        AIScriptedInterface::ClearBlockingEntity(this);
    }
    goto LABEL_40;
  }
  v15 = 0;
  if ( !outPushingPlayer )
    goto LABEL_36;
  v96 = this->m_pAI;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+4C0h+var_4F0]
    vmovss  xmm1, dword ptr [rbp+4C0h+var_4F0+4]
    vmovss  dword ptr [rdi], xmm0
    vmovss  xmm0, dword ptr [rbp+4C0h+var_4F0+8]
    vmovss  dword ptr [rdi+8], xmm0
    vmovss  dword ptr [rdi+4], xmm1
  }
  v96->avoidance_maxSpeed = -1.0;
  this->m_pAI->avoidance_active = 0;
  AIScriptedInterface::ClearBlockingEntity(this);
  result = 0;
LABEL_42:
  __asm
  {
    vmovaps xmm13, [rsp+5C0h+var_98+8]
    vmovaps xmm12, [rsp+5C0h+var_88+8]
    vmovaps xmm11, [rsp+5C0h+var_78+8]
    vmovaps xmm10, xmmword ptr [rsp+5C0h+var_68+8]
    vmovaps xmm8, [rsp+5C0h+var_48+8]
    vmovaps xmm6, xmmword ptr [rsp+5C0h+var_38+8]
  }
  _R11 = &v128;
  __asm { vmovaps xmm9, xmmword ptr [r11-30h] }
  return result;
}

/*
==============
AIScriptedInterface::IsInBlockingAvoidanceChain
==============
*/
char AIScriptedInterface::IsInBlockingAvoidanceChain(AIScriptedInterface *this, const ai_scripted_t *pOtherAI)
{
  ai_avoidance_blocked_data_t *p_avoidanceBlockedData; 
  int v4; 
  gentity_s *v5; 
  __int64 (__fastcall ***v6)(_QWORD); 
  ai_agent_t *ScriptedAgentInfo; 
  actor_s *actor; 
  __int64 v9; 
  unsigned __int16 v10; 
  __int64 v11; 
  unsigned int v12; 
  __int64 v13; 
  unsigned __int16 v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v18; 
  __int64 v19; 
  AIActorInterface v20; 
  AIAgentInterface v21; 
  __int64 (__fastcall ***v22)(_QWORD); 

  p_avoidanceBlockedData = &pOtherAI->avoidanceBlockedData;
  if ( !EntHandle::isDefined(&pOtherAI->avoidanceBlockedData.blockingEntity) )
    return 0;
  v4 = 0;
  v5 = EntHandle::ent(&p_avoidanceBlockedData->blockingEntity);
  if ( !v5 )
    return 0;
  while ( 1 )
  {
    if ( v5 == this->m_pAI->ent )
      return 1;
    AIActorInterface::AIActorInterface(&v20);
    AIAgentInterface::AIAgentInterface(&v21);
    v6 = NULL;
    v21.__vftable = (AIAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
    v22 = NULL;
    if ( v5->agent )
    {
      if ( SV_Agent_IsScripted(v5->s.number) )
      {
        ScriptedAgentInfo = AIAgentInterface::GetScriptedAgentInfo(v5);
        if ( !ScriptedAgentInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 97, ASSERT_TYPE_ASSERT, "( pInfo )", (const char *)&queryFormat, "pInfo") )
          __debugbreak();
        if ( !ScriptedAgentInfo->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 98, ASSERT_TYPE_ASSERT, "( pInfo->sentientInfo )", (const char *)&queryFormat, "pInfo->sentientInfo") )
          __debugbreak();
        AINewAgentInterface::SetAgent((AINewAgentInterface *)&v21, ScriptedAgentInfo);
        v6 = (__int64 (__fastcall ***)(_QWORD))&v21;
        v22 = (__int64 (__fastcall ***)(_QWORD))&v21;
        goto LABEL_20;
      }
      v6 = v22;
    }
    actor = v5->actor;
    if ( actor )
    {
      if ( !actor->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 105, ASSERT_TYPE_ASSERT, "( ent->actor->sentientInfo )", (const char *)&queryFormat, "ent->actor->sentientInfo") )
        __debugbreak();
      AIActorInterface::SetActor(&v20, v5->actor);
      v6 = (__int64 (__fastcall ***)(_QWORD))&v20;
      v22 = (__int64 (__fastcall ***)(_QWORD))&v20;
    }
    else if ( !v6 )
    {
      return 0;
    }
LABEL_20:
    v9 = (**v6)(v6);
    if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_avoidance.cpp", 584, ASSERT_TYPE_ASSERT, "(pBlockingScripted)", (const char *)&queryFormat, "pBlockingScripted") )
      __debugbreak();
    v10 = *(_WORD *)(v9 + 2912);
    if ( !v10 )
      goto LABEL_53;
    v11 = v10;
    v12 = v10 - 1;
    if ( v12 >= 0x800 )
    {
      LODWORD(v19) = 2048;
      LODWORD(v18) = v12;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v18, v19) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    v13 = v11 - 1;
    if ( g_entities[v13].r.isInUse != g_entityIsInUse[v13] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( !g_entityIsInUse[v13] )
    {
      LODWORD(v19) = *(unsigned __int16 *)(v9 + 2912) - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v19) )
        __debugbreak();
    }
    v14 = *(_WORD *)(v9 + 2912);
    if ( v14 )
    {
      if ( (unsigned int)v14 - 1 >= 0x7FF )
      {
        LODWORD(v19) = 2047;
        LODWORD(v18) = v14 - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 223, ASSERT_TYPE_ASSERT, "(unsigned)( number - 1 ) < (unsigned)( ENTITYNUM_NONE )", "number - 1 doesn't index ENTITYNUM_NONE\n\t%i not in [0, %i)", v18, v19) )
          __debugbreak();
      }
      v15 = *(unsigned __int16 *)(v9 + 2912);
      if ( (unsigned int)(v15 - 1) >= 0x800 )
      {
        LODWORD(v19) = 2048;
        LODWORD(v18) = v15 - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v18, v19) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      v16 = v15 - 1;
      if ( g_entities[v16].r.isInUse != g_entityIsInUse[v16] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( !g_entityIsInUse[v16] )
      {
        LODWORD(v19) = *(unsigned __int16 *)(v9 + 2912) - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 224, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( G_IsEntityInUse( number - 1 ) )", v19) )
          __debugbreak();
      }
      v5 = &g_entities[*(unsigned __int16 *)(v9 + 2912) - 1];
    }
    else
    {
LABEL_53:
      v5 = NULL;
    }
    if ( ++v4 > level.maxSentients )
      break;
    if ( !v5 )
      return 0;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_avoidance.cpp", 598, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "circular avoidance chain detected - bailing!") )
    __debugbreak();
  return 0;
}

/*
==============
AIScriptedInterface::OnScrCmd_ClearAvoidanceIgnoreEnt
==============
*/
void AIScriptedInterface::OnScrCmd_ClearAvoidanceIgnoreEnt(AIScriptedInterface *this, scrContext_t *scrContext)
{
  EntHandle::setEnt(&this->m_pAI->ignoreAvoidanceEnt, NULL);
}

/*
==============
AIScriptedInterface::OnScrCmd_EnableAvoidance
==============
*/
void AIScriptedInterface::OnScrCmd_EnableAvoidance(AIScriptedInterface *this, scrContext_t *scrContext)
{
  int NumParam; 
  ai_scripted_t *m_pAI; 

  NumParam = Scr_GetNumParam(scrContext);
  if ( NumParam >= 1 )
  {
    if ( Scr_GetType(scrContext, 0) )
    {
      this->m_pAI->avoidance.avoidanceEnabled = Scr_GetInt(scrContext, 0) != 0;
      m_pAI = this->m_pAI;
      if ( !m_pAI->avoidance.avoidanceEnabled )
        m_pAI->avoidance_maxSpeed = -1.0;
    }
    if ( NumParam > 1 )
    {
      if ( Scr_GetType(scrContext, 1u) )
        this->m_pAI->avoidance.othersAvoidMe = Scr_GetInt(scrContext, 1u) != 0;
    }
  }
  else
  {
    Scr_Error(COM_ERR_3857, scrContext, "illegal call to EnableAvoidance()");
  }
}

/*
==============
AIScriptedInterface::OnScrCmd_SetAvoidanceBounds
==============
*/
void AIScriptedInterface::OnScrCmd_SetAvoidanceBounds(AIScriptedInterface *this, scrContext_t *scrContext)
{
  const dvar_t *v5; 

  if ( Scr_GetNumParam(scrContext) == 1 )
  {
    v5 = DCONST_DVARBOOL_ai_useOrca;
    if ( !DCONST_DVARBOOL_ai_useOrca && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_useOrca") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    if ( v5->current.enabled )
    {
      *(double *)&_XMM0 = Scr_GetFloat(scrContext, 0);
      _RAX = this->m_pAI;
      __asm
      {
        vmovss  dword ptr [rax+1CCh], xmm0
        vmovss  dword ptr [rax+1D0h], xmm0
      }
    }
  }
  else
  {
    Scr_Error(COM_ERR_3860, scrContext, "illegal call to SetAvoidanceBounds()");
  }
}

/*
==============
AIScriptedInterface::OnScrCmd_SetAvoidanceIgnoreEnt
==============
*/
void AIScriptedInterface::OnScrCmd_SetAvoidanceIgnoreEnt(AIScriptedInterface *this, scrContext_t *scrContext)
{
  ai_scripted_t *m_pAI; 
  const gentity_s *Entity; 

  m_pAI = this->m_pAI;
  Entity = GScr_GetEntity(0);
  EntHandle::setEnt(&m_pAI->ignoreAvoidanceEnt, Entity);
}

/*
==============
AIScriptedInterface::OnScrCmd_SetAvoidanceRadius
==============
*/
void AIScriptedInterface::OnScrCmd_SetAvoidanceRadius(AIScriptedInterface *this, scrContext_t *scrContext)
{
  const dvar_t *v5; 

  if ( Scr_GetNumParam(scrContext) == 1 )
  {
    v5 = DCONST_DVARBOOL_ai_useOrca;
    if ( !DCONST_DVARBOOL_ai_useOrca && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_useOrca") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    if ( v5->current.enabled )
    {
      *(double *)&_XMM0 = Scr_GetFloat(scrContext, 0);
      _RAX = this->m_pAI;
      __asm { vmovss  dword ptr [rax+1C8h], xmm0 }
    }
  }
  else
  {
    Scr_Error(COM_ERR_3859, scrContext, "illegal call to SetAvoidanceRadius()");
  }
}

/*
==============
AIScriptedInterface::OnScrCmd_SetAvoidanceReciprocity
==============
*/
void AIScriptedInterface::OnScrCmd_SetAvoidanceReciprocity(AIScriptedInterface *this, scrContext_t *scrContext)
{
  if ( Scr_GetNumParam(scrContext) == 1 )
  {
    *(double *)&_XMM0 = Scr_GetFloat(scrContext, 0);
    _RAX = this->m_pAI;
    __asm { vmovss  dword ptr [rax+1BCh], xmm0 }
  }
  else
  {
    Scr_Error(COM_ERR_3858, scrContext, "illegal call to SetAvoidanceReciprocity()");
  }
}

/*
==============
AIScriptedInterface::ProcessBlockingAvoidance
==============
*/

bool __fastcall AIScriptedInterface::ProcessBlockingAvoidance(AIScriptedInterface *this, AvoidanceResult avoidResult, vec3_t *avoidanceMoveDelta, double speed, int *colliderEntNums, int colliderCount, const vec3_t *velocity, vec3_t *goalPosition, vec3_t *moveDelta, float moveDistance, bool hasPlayerObstacle, bool *outPushingPlayer)
{
  vec3_t *v23; 
  int *v25; 
  const dvar_t *v26; 
  gentity_s *v29; 
  bool v30; 
  char v31; 
  char v32; 
  __int64 v35; 
  __int64 v37; 
  bool v38; 
  sentient_s *sentient; 
  sentient_s *v40; 
  bool v41; 
  unsigned int v45; 
  unsigned __int64 eTeam; 
  ai_scripted_t *m_pAI; 
  bool v59; 
  __int16 EntityIndex; 
  ai_scripted_t *v62; 
  bool v63; 
  AIScriptedInterface *v75; 
  const ai_scripted_t *v76; 
  bool v77; 
  AIScriptedInterface *v105; 
  char v161; 
  int v162; 
  unsigned int v163; 
  __int64 v164; 
  __int64 v165; 
  unsigned int v171; 
  AIScriptedInterface *v212; 
  ai_scripted_t *v214; 
  bool v215; 
  ai_scripted_t *v216; 
  ai_scripted_t *v217; 
  __int64 v245; 
  __int64 v246; 
  __int16 v247; 
  gentity_s *v248; 
  char v249; 
  __int64 v254; 
  AIWrapper v255; 
  bitarray<224> result; 
  char ptr[400]; 
  char v258; 
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
    vmovss  dword ptr [rsp+370h+var_318], xmm3
  }
  v23 = avoidanceMoveDelta;
  v25 = colliderEntNums;
  if ( !this->m_pAI->avoidanceBlockedData.enabled )
    goto LABEL_56;
  v26 = DCONST_DVARBOOL_ai_enableAvoidanceBlocking;
  if ( !DCONST_DVARBOOL_ai_enableAvoidanceBlocking && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_enableAvoidanceBlocking") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v26);
  if ( !v26->current.enabled )
  {
LABEL_56:
    v63 = 0;
    goto LABEL_57;
  }
  __asm
  {
    vmovss  xmm11, cs:__real@46afc800
    vmovaps xmm10, xmm11
    vmovss  [rsp+370h+var_31C], xmm11
  }
  v29 = NULL;
  v248 = NULL;
  v30 = 0;
  v247 = 0;
  v31 = 0;
  v249 = 0;
  v32 = 0;
  __asm
  {
    vmovss  xmm12, cs:__real@80000000
    vxorps  xmm9, xmm9, xmm9
  }
  if ( colliderCount <= 0 )
    goto LABEL_48;
  v35 = 0i64;
  v254 = 0i64;
  while ( 1 )
  {
    _R15 = &g_entities[v25[v35]];
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 196, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    v37 = _R15 - g_entities;
    if ( (unsigned int)v37 >= 0x800 )
    {
      LODWORD(v246) = 2048;
      LODWORD(v245) = _R15 - g_entities;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 199, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( 2048 ) )", "index doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v245, v246) )
        __debugbreak();
    }
    v37 = (__int16)v37;
    if ( (unsigned int)(__int16)v37 >= 0x800 )
    {
      LODWORD(v246) = 2048;
      LODWORD(v245) = v37;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v245, v246) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    if ( g_entities[v37].r.isInUse != g_entityIsInUse[v37] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    v38 = g_entityIsInUse[v37] && _R15->s.eType == ET_PLAYER;
    sentient = _R15->sentient;
    if ( sentient )
    {
      v40 = this->m_pAI->ent->sentient;
      if ( !v40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.h", 259, ASSERT_TYPE_ASSERT, "(other)", (const char *)&queryFormat, "other") )
        __debugbreak();
      if ( level.teammode == TEAMMODE_FFA )
      {
        v41 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80);
        if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
          _RAX = Com_TeamsSP_GetAllCombatTeamFlags();
        else
          _RAX = Com_TeamsMP_GetAllTeamFlags();
        __asm
        {
          vmovups xmm0, xmmword ptr [rax]
          vmovups xmmword ptr [rbp+270h+result.array], xmm0
          vmovsd  xmm1, qword ptr [rax+10h]
          vmovsd  qword ptr [rbp+270h+result.array+10h], xmm1
        }
        v45 = _RAX->array[6] & 0xFFEFFFFF;
        if ( v41 )
          result.array[0] &= ~0x8000000u;
        result.array[6] = v45 & 0xFF9FFFFF;
        v31 = v249;
      }
      else
      {
        Com_Teams_GetEnemyTeamFlags(&result, v40->eTeam);
      }
      eTeam = (unsigned int)sentient->eTeam;
      if ( (unsigned int)eTeam >= 0xE0 )
      {
        LODWORD(v246) = 224;
        LODWORD(v245) = sentient->eTeam;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v245, v246) )
          __debugbreak();
      }
      if ( ((0x80000000 >> (eTeam & 0x1F)) & result.array[eTeam >> 5]) != 0 )
        goto LABEL_93;
    }
    m_pAI = this->m_pAI;
    __asm
    {
      vmovss  xmm0, dword ptr [r15+130h]
      vsubss  xmm6, xmm0, dword ptr [rax+130h]
      vmovss  xmm0, dword ptr [r15+134h]
      vsubss  xmm7, xmm0, dword ptr [rax+134h]
      vmovss  xmm0, dword ptr [r15+138h]
      vsubss  xmm3, xmm0, dword ptr [rax+138h]
      vmulss  xmm2, xmm6, xmm6
      vmulss  xmm1, xmm7, xmm7
      vaddss  xmm8, xmm2, xmm1
      vmulss  xmm0, xmm3, xmm3
      vaddss  xmm15, xmm0, xmm8
    }
    if ( v38 )
    {
      v59 = !hasPlayerObstacle;
      if ( hasPlayerObstacle )
      {
        v59 = !m_pAI->avoidance.pushPlayerEnabled;
        if ( !m_pAI->avoidance.pushPlayerEnabled )
          __asm { vcomiss xmm15, xmm11 }
      }
    }
    else
    {
      AIWrapper::AIWrapper(&v255, _R15);
      v75 = v255.m_pAI;
      if ( !v255.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_avoidance.cpp", 185, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
        __debugbreak();
      if ( v75->InScriptedState(v75) )
        v31 = 1;
      v249 = v31;
      AIScriptedInterface::GetCoverNode(v75);
      v76 = (const ai_scripted_t *)v75->GetAI(v75);
      v77 = AIScriptedInterface::IsInBlockingAvoidanceChain(this, v76);
      v59 = !v77;
      if ( v77 )
        goto LABEL_93;
    }
    __asm { vcomiss xmm15, xmm10 }
    if ( v59 )
    {
      __asm { vmovss  xmm5, cs:__real@3f70624e }
      if ( v38 )
      {
        __asm
        {
          vcmpltss xmm0, xmm15, cs:__real@45afc800
          vmovss  xmm1, cs:__real@3f34fdf4
          vblendvps xmm5, xmm5, xmm1, xmm0
        }
      }
      __asm
      {
        vsqrtss xmm1, xmm8, xmm8
        vcmpless xmm0, xmm1, xmm12
        vmovss  xmm11, cs:__real@3f800000
        vblendvps xmm1, xmm1, xmm11, xmm0
        vdivss  xmm0, xmm11, xmm1
        vmulss  xmm13, xmm6, xmm0
        vmulss  xmm14, xmm7, xmm0
      }
      _RAX = goalPosition;
      __asm
      {
        vmovss  xmm0, dword ptr [rax]
        vsubss  xmm2, xmm0, dword ptr [r15+130h]
        vmovss  xmm1, dword ptr [rax+4]
        vsubss  xmm3, xmm1, dword ptr [r15+134h]
        vmovss  xmm0, dword ptr [rax+8]
        vsubss  xmm4, xmm0, dword ptr [r15+138h]
        vmulss  xmm2, xmm2, xmm2
        vmulss  xmm1, xmm3, xmm3
        vaddss  xmm3, xmm2, xmm1
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm2, xmm3, xmm0
        vcomiss xmm2, cs:__real@43c80000
      }
      if ( v38 )
      {
        _RAX = _R15->client;
        __asm
        {
          vmovss  xmm7, dword ptr [rax+3Ch]
          vmovss  xmm8, dword ptr [rax+40h]
          vmovss  xmm9, dword ptr [rax+44h]
        }
      }
      else
      {
        AIWrapper::AIWrapper(&v255, _R15);
        v105 = v255.m_pAI;
        if ( !v255.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_avoidance.cpp", 234, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
          __debugbreak();
        _RAX = v105->GetAI(v105);
        __asm
        {
          vmovss  xmm7, dword ptr [rax+838h]
          vmovss  xmm8, dword ptr [rax+83Ch]
          vmovss  xmm9, dword ptr [rax+840h]
        }
        if ( v249 )
        {
          __asm
          {
            vmulss  xmm1, xmm7, xmm7
            vmulss  xmm0, xmm8, xmm8
            vaddss  xmm2, xmm1, xmm0
            vmulss  xmm1, xmm9, xmm9
            vaddss  xmm2, xmm2, xmm1
            vcomiss xmm2, cs:__real@41c80000
          }
        }
      }
      __asm
      {
        vmovss  xmm6, dword ptr [rsp+370h+var_318]
        vmovaps xmm10, xmm6
      }
      if ( avoidResult )
      {
        _RAX = velocity;
        __asm
        {
          vmovss  xmm5, dword ptr [rax+4]
          vmovss  xmm4, dword ptr [rax]
          vmovss  xmm3, dword ptr [rax+8]
          vmulss  xmm1, xmm4, xmm4
          vmulss  xmm0, xmm5, xmm5
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm3, xmm3
          vaddss  xmm2, xmm2, xmm1
          vsqrtss xmm10, xmm2, xmm2
          vcmpless xmm0, xmm10, xmm12
          vblendvps xmm1, xmm10, xmm11, xmm0
          vdivss  xmm0, xmm11, xmm1
          vmulss  xmm3, xmm0, xmm4
          vmulss  xmm5, xmm0, xmm5
        }
      }
      else
      {
        _RAX = avoidanceMoveDelta;
        __asm
        {
          vmovss  xmm6, dword ptr [rax+4]
          vmovss  xmm5, dword ptr [rax]
          vmovss  xmm3, dword ptr [rax+8]
          vmulss  xmm1, xmm5, xmm5
          vmulss  xmm0, xmm6, xmm6
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm3, xmm3
          vaddss  xmm2, xmm2, xmm1
          vsqrtss xmm4, xmm2, xmm2
          vcmpless xmm0, xmm4, xmm12
          vblendvps xmm1, xmm4, xmm11, xmm0
          vdivss  xmm0, xmm11, xmm1
          vmulss  xmm3, xmm0, xmm5
          vmulss  xmm5, xmm0, xmm6
          vmovaps xmm6, xmm10
        }
      }
      __asm
      {
        vmulss  xmm1, xmm7, xmm7
        vmulss  xmm0, xmm8, xmm8
        vaddss  xmm4, xmm1, xmm0
        vsqrtss xmm2, xmm4, xmm4
        vcmpless xmm0, xmm2, xmm12
        vblendvps xmm1, xmm2, xmm11, xmm0
        vdivss  xmm0, xmm11, xmm1
        vmulss  xmm1, xmm0, xmm7
        vmulss  xmm0, xmm0, xmm8
        vmulss  xmm2, xmm0, xmm5
        vmulss  xmm1, xmm1, xmm3
        vaddss  xmm3, xmm2, xmm1
        vmulss  xmm0, xmm9, xmm9
        vaddss  xmm2, xmm0, xmm4
        vsqrtss xmm1, xmm2, xmm2
        vcomiss xmm3, cs:__real@3f34fdf4
      }
      if ( avoidResult )
      {
        __asm
        {
          vdivss  xmm2, xmm6, dword ptr [rax+0B54h]
          vsubss  xmm0, xmm10, cs:__real@41a00000
          vcomiss xmm1, xmm0
          vcomiss xmm2, cs:__real@3e99999a
          vmovss  xmm10, [rsp+370h+var_31C]
          vxorps  xmm9, xmm9, xmm9
        }
      }
      else
      {
        __asm
        {
          vxorps  xmm9, xmm9, xmm9
          vcomiss xmm1, xmm9
        }
        `eh vector constructor iterator'(ptr, 0x28ui64, 0xAui64, (void (__fastcall *)(void *))nav_cornerdata_t::nav_cornerdata_t, (void (__fastcall *)(void *))nav_cornerdata_t::~nav_cornerdata_t);
        __asm { vmovss  xmm3, cs:__real@43160000 }
        v162 = ((__int64 (__fastcall *)(AINavigator *, char *, __int64))this->m_pAI->pNavigator->GetNextNCorners)(this->m_pAI->pNavigator, ptr, 10i64);
        __asm { vcomiss xmm15, cs:__real@44c80000 }
        v163 = 0;
        v164 = 0i64;
        if ( v162 > 0 )
        {
          v165 = v162;
          _RDX = this->m_pAI->ent;
          __asm
          {
            vmovss  xmm9, dword ptr [rdx+130h]
            vmovss  xmm10, dword ptr [rdx+134h]
            vmovss  xmm11, dword ptr [r15+130h]
            vmovss  xmm12, dword ptr [r15+134h]
          }
          v171 = v162 - 1;
          _RAX = ptr;
          do
          {
            __asm
            {
              vmovss  xmm3, dword ptr [rax]
              vmovss  xmm0, dword ptr [rax+4]
              vsubss  xmm6, xmm0, xmm10
              vsubss  xmm4, xmm3, xmm11
              vsubss  xmm2, xmm0, xmm12
              vmulss  xmm1, xmm4, xmm4
              vmulss  xmm0, xmm2, xmm2
              vaddss  xmm1, xmm1, xmm0
              vsqrtss xmm5, xmm1, xmm1
              vcmpless xmm0, xmm5, cs:__real@80000000
              vmovss  xmm7, cs:__real@3f800000
              vblendvps xmm1, xmm5, xmm7, xmm0
              vdivss  xmm0, xmm7, xmm1
              vsubss  xmm3, xmm3, xmm9
              vmulss  xmm7, xmm0, xmm2
              vmulss  xmm8, xmm4, xmm0
            }
            if ( v163 == v171 )
            {
              __asm { vcomiss xmm5, cs:__real@42480000 }
              if ( v163 < v171 )
              {
LABEL_85:
                `eh vector destructor iterator'(ptr, 0x28ui64, 0xAui64, (void (__fastcall *)(void *))nav_cornerdata_t::~nav_cornerdata_t);
                __asm
                {
                  vmovss  xmm12, cs:__real@80000000
                  vxorps  xmm9, xmm9, xmm9
                }
                v29 = _R15;
                v248 = _R15;
                __asm
                {
                  vmovaps xmm10, xmm15
                  vmovss  [rsp+370h+var_31C], xmm15
                }
                v30 = v38;
                LOBYTE(v247) = v38;
                v32 = 1;
                HIBYTE(v247) = 1;
                __asm { vmovss  xmm11, cs:__real@46afc800 }
                goto LABEL_94;
              }
            }
            __asm
            {
              vmulss  xmm1, xmm6, xmm6
              vmulss  xmm0, xmm3, xmm3
              vaddss  xmm1, xmm1, xmm0
              vsqrtss xmm2, xmm1, xmm1
              vcmpless xmm0, xmm2, cs:__real@80000000
              vmovss  xmm4, cs:__real@3f800000
              vblendvps xmm1, xmm2, xmm4, xmm0
              vdivss  xmm0, xmm4, xmm1
              vmulss  xmm3, xmm3, xmm0
              vmulss  xmm4, xmm6, xmm0
              vmulss  xmm1, xmm4, xmm7
              vmulss  xmm0, xmm3, xmm8
              vaddss  xmm2, xmm1, xmm0
              vxorps  xmm0, xmm0, xmm0
              vcomiss xmm2, xmm0
            }
            if ( v163 <= v171 )
            {
              __asm { vcomiss xmm5, cs:__real@42480000 }
              if ( v163 > v171 )
                break;
              if ( v161 )
                __asm { vcomiss xmm5, cs:__real@41f00000 }
            }
            else
            {
              __asm
              {
                vmulss  xmm1, xmm4, xmm14
                vmulss  xmm0, xmm3, xmm13
                vaddss  xmm1, xmm1, xmm0
                vcomiss xmm1, cs:__real@3f774bc7
              }
              if ( v163 > v171 )
                goto LABEL_85;
            }
            ++v163;
            ++v164;
            _RAX += 40;
          }
          while ( v164 < v165 );
          __asm
          {
            vxorps  xmm9, xmm9, xmm9
            vmovss  xmm12, cs:__real@80000000
          }
        }
        `eh vector destructor iterator'(ptr, 0x28ui64, 0xAui64, (void (__fastcall *)(void *))nav_cornerdata_t::~nav_cornerdata_t);
        __asm { vmovss  xmm10, [rsp+370h+var_31C] }
      }
      __asm { vmovss  xmm11, cs:__real@46afc800 }
    }
LABEL_93:
    v29 = v248;
    v30 = v247;
    v32 = HIBYTE(v247);
LABEL_94:
    v35 = v254 + 1;
    v254 = v35;
    if ( v35 >= colliderCount )
      break;
    v31 = v249;
    v25 = colliderEntNums;
  }
  v23 = avoidanceMoveDelta;
LABEL_48:
  __asm { vmovss  xmm1, cs:__real@43160000 }
  if ( !((unsigned __int8 (__fastcall *)(AINavigator *))this->m_pAI->pNavigator->IsPathDistToGoalAtLeast)(this->m_pAI->pNavigator) && !v30 && !v32 || !v29 )
    goto LABEL_56;
  EntityIndex = G_GetEntityIndex(v29);
  if ( G_IsEntityInUse(EntityIndex) && v29->s.eType == ET_PLAYER )
  {
    v62 = this->m_pAI;
    if ( v62->avoidance.pushPlayerEnabled )
    {
      *outPushingPlayer = 1;
      goto LABEL_56;
    }
    _RAX = v29->client;
    __asm
    {
      vmovss  xmm6, dword ptr [rax+40h]
      vmovss  xmm7, dword ptr [rax+3Ch]
      vmovss  xmm8, dword ptr [rax+44h]
    }
  }
  else
  {
    AIWrapper::AIWrapper(&v255, v29);
    v212 = v255.m_pAI;
    if ( !v255.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_avoidance.cpp", 357, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
      __debugbreak();
    _RAX = v212->GetAI(v212);
    v62 = this->m_pAI;
    __asm
    {
      vmovss  xmm6, dword ptr [rax+83Ch]
      vmovss  xmm7, dword ptr [rax+838h]
      vmovss  xmm8, dword ptr [rax+840h]
    }
    v29 = v248;
  }
  if ( EntHandle::isDefined(&v62->avoidanceBlockedData.blockingEntity) && EntHandle::ent(&this->m_pAI->avoidanceBlockedData.blockingEntity) != v29 )
    AIScriptedInterface::ClearBlockingEntity(this);
  ++this->m_pAI->avoidanceBlockedData.blockedCheckCount;
  v214 = this->m_pAI;
  if ( v214->avoidanceBlockedData.blockedCheckCount < 3u )
    goto LABEL_56;
  v215 = !v214->avoidanceBlockedData.blocked;
  if ( !v214->avoidanceBlockedData.blocked )
  {
    EntHandle::setEnt(&v214->avoidanceBlockedData.blockingEntity, v29);
    this->m_pAI->avoidanceBlockedData.blockedStartTime = level.time;
    this->m_pAI->avoidanceBlockedData.stationaryBlockedEntTimeout = level.time + 4000;
    v216 = this->m_pAI;
    v216->avoidanceBlockedData.blockedEntityPosition.v[0] = v29->r.currentOrigin.v[0];
    v216->avoidanceBlockedData.blockedEntityPosition.v[1] = v29->r.currentOrigin.v[1];
    v216->avoidanceBlockedData.blockedEntityPosition.v[2] = v29->r.currentOrigin.v[2];
    v216->avoidance_maxSpeed = 0.0;
    this->m_pAI->avoidanceBlockedData.blocked = 1;
    v217 = this->m_pAI;
    v217->avoidanceBlockedData.storedVelocity = *velocity;
    v217->avoidanceBlockedData.storedMoveDelta = *moveDelta;
    v217->pNavigator->GetNextCorner(v217->pNavigator, &v217->avoidanceBlockedData.nextPathPoint);
    _RCX = this->m_pAI;
    __asm
    {
      vmovss  xmm0, dword ptr [rcx+0B88h]
      vsubss  xmm4, xmm0, dword ptr [rax+130h]
      vmovss  dword ptr [rcx+0B88h], xmm4
      vmovss  xmm0, dword ptr [rcx+0B8Ch]
      vsubss  xmm2, xmm0, dword ptr [rax+134h]
      vmovss  dword ptr [rcx+0B8Ch], xmm2
      vmovss  xmm1, dword ptr [rcx+0B90h]
      vsubss  xmm3, xmm1, dword ptr [rax+138h]
      vmovss  dword ptr [rcx+0B90h], xmm3
      vmulss  xmm1, xmm4, xmm4
      vmulss  xmm0, xmm2, xmm2
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm3, xmm2, xmm2
      vcmpless xmm0, xmm3, xmm12
      vmovss  xmm1, cs:__real@3f800000
      vblendvps xmm0, xmm3, xmm1, xmm0
      vdivss  xmm2, xmm1, xmm0
      vmulss  xmm0, xmm4, xmm2
      vmovss  dword ptr [rcx+0B88h], xmm0
      vmulss  xmm1, xmm2, dword ptr [rcx+0B8Ch]
      vmovss  dword ptr [rcx+0B8Ch], xmm1
      vmulss  xmm0, xmm2, dword ptr [rcx+0B90h]
      vmovss  dword ptr [rcx+0B90h], xmm0
      vmovss  xmm1, [rbp+270h+moveDistance]
      vmovss  dword ptr [rcx+0B94h], xmm1
    }
    this->m_pAI->avoidanceBlockedData.processingBlocking = 0;
    this->m_pAI->avoidanceBlockedData.hasNotifiedBlockingEntity = 0;
    GScr_AddEntity(v29);
    GScr_Notify(this->m_pAI->ent, scr_const.path_blocked, 1u);
    AIScriptedInterface::FireBlockedNotify(this, v29);
    *(_QWORD *)v23->v = 0i64;
    v23->v[2] = 0.0;
    v214 = this->m_pAI;
  }
  __asm
  {
    vmulss  xmm1, xmm6, xmm6
    vmulss  xmm0, xmm7, xmm7
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm8, xmm8
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm0, xmm2, xmm2
    vucomiss xmm0, xmm9
  }
  if ( !v215 )
  {
    v214->avoidanceBlockedData.stationaryBlockedEntTimeout = level.time + 1000;
    v214 = this->m_pAI;
  }
  v214->avoidanceBlockedData.blockedCheckCount = 3;
  v63 = 1;
LABEL_57:
  _R11 = &v258;
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
  return v63;
}

/*
==============
AIScriptedInterface::SetBlockingEntity
==============
*/
void AIScriptedInterface::SetBlockingEntity(AIScriptedInterface *this, const gentity_s *closestCollider, const vec3_t *velocity, const vec3_t *moveDelta, float moveDistance)
{
  ai_scripted_t *m_pAI; 
  ai_scripted_t *v10; 

  EntHandle::setEnt(&this->m_pAI->avoidanceBlockedData.blockingEntity, closestCollider);
  this->m_pAI->avoidanceBlockedData.blockedStartTime = level.time;
  this->m_pAI->avoidanceBlockedData.stationaryBlockedEntTimeout = level.time + 4000;
  m_pAI = this->m_pAI;
  m_pAI->avoidanceBlockedData.blockedEntityPosition = closestCollider->r.currentOrigin;
  m_pAI->avoidance_maxSpeed = 0.0;
  this->m_pAI->avoidanceBlockedData.blocked = 1;
  v10 = this->m_pAI;
  v10->avoidanceBlockedData.storedVelocity = *velocity;
  v10->avoidanceBlockedData.storedMoveDelta = *moveDelta;
  v10->pNavigator->GetNextCorner(v10->pNavigator, &v10->avoidanceBlockedData.nextPathPoint);
  _RCX = this->m_pAI;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+0B88h]
    vsubss  xmm4, xmm0, dword ptr [rax+130h]
    vmovss  dword ptr [rcx+0B88h], xmm4
    vmovss  xmm0, dword ptr [rcx+0B8Ch]
    vsubss  xmm2, xmm0, dword ptr [rax+134h]
    vmovss  dword ptr [rcx+0B8Ch], xmm2
    vmovss  xmm1, dword ptr [rcx+0B90h]
    vsubss  xmm3, xmm1, dword ptr [rax+138h]
    vmovss  dword ptr [rcx+0B90h], xmm3
    vmulss  xmm1, xmm2, xmm2
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vmovss  xmm1, cs:__real@3f800000
    vsqrtss xmm3, xmm2, xmm2
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm1, xmm0
    vdivss  xmm2, xmm1, xmm0
    vmulss  xmm0, xmm4, xmm2
    vmovss  dword ptr [rcx+0B88h], xmm0
    vmulss  xmm1, xmm2, dword ptr [rcx+0B8Ch]
    vmovss  dword ptr [rcx+0B8Ch], xmm1
    vmulss  xmm0, xmm2, dword ptr [rcx+0B90h]
    vmovss  xmm1, [rsp+28h+moveDistance]
    vmovss  dword ptr [rcx+0B90h], xmm0
    vmovss  dword ptr [rcx+0B94h], xmm1
  }
  this->m_pAI->avoidanceBlockedData.processingBlocking = 0;
  this->m_pAI->avoidanceBlockedData.hasNotifiedBlockingEntity = 0;
  GScr_AddEntity(closestCollider);
  GScr_Notify(this->m_pAI->ent, scr_const.path_blocked, 1u);
  AIScriptedInterface::FireBlockedNotify(this, closestCollider);
}

/*
==============
AIScriptedInterface::UpdateBlockingEntity
==============
*/
void AIScriptedInterface::UpdateBlockingEntity(AIScriptedInterface *this)
{
  unsigned int v8; 
  bool v11; 
  int isDefined; 
  ai_scripted_t *m_pAI; 
  __int16 EntityIndex; 
  bool v15; 
  bool v16; 
  AIScriptedInterface *v21; 
  bool v46; 
  char v47; 
  int v48; 
  ai_scripted_t *v84; 
  const dvar_t *v86; 
  const char *v92; 
  const char *v100; 
  const char *v107; 
  ai_scripted_t *v109; 
  bool v114; 
  AIWrapper v115; 
  vec3_t inOutMoveDelta; 
  vec3_t velocity; 
  char v120; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm10
  }
  v8 = 0;
  _RSI = NULL;
  _RDI = NULL;
  v11 = 0;
  isDefined = EntHandle::isDefined(&this->m_pAI->avoidanceBlockedData.blockingEntity);
  m_pAI = this->m_pAI;
  if ( isDefined )
  {
    if ( level.time < m_pAI->avoidanceBlockedData.blockedStartTime + 500 )
      goto LABEL_44;
    _RDI = EntHandle::ent(&m_pAI->avoidanceBlockedData.blockingEntity);
    this->m_pAI->avoidanceBlockedData.processingBlocking = 1;
    if ( _RDI->health <= 0 )
    {
      AIScriptedInterface::ClearBlockingEntity(this);
      goto LABEL_44;
    }
    __asm
    {
      vmovaps xmmword ptr [rsp+140h+var_48+8], xmm7
      vmovaps xmmword ptr [rsp+140h+var_68+8], xmm9
    }
    EntityIndex = G_GetEntityIndex(_RDI);
    if ( G_IsEntityInUse(EntityIndex) && (v15 = _RDI->s.eType == ET_FIRST, v16 = _RDI->s.eType == ET_PLAYER) )
    {
      _RAX = _RDI->client;
      __asm
      {
        vmovss  xmm0, dword ptr [rax+3Ch]
        vmovss  xmm2, dword ptr [rax+40h]
        vmovss  xmm3, dword ptr [rax+44h]
      }
    }
    else
    {
      AIWrapper::AIWrapper(&v115, _RDI);
      v21 = v115.m_pAI;
      if ( !v115.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_avoidance.cpp", 475, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
        __debugbreak();
      _RSI = (EntHandle *)v21->GetAI(v21);
      __asm
      {
        vmovss  xmm0, dword ptr [rax+838h]
        vmovss  xmm2, dword ptr [rax+83Ch]
        vmovss  xmm3, dword ptr [rax+840h]
      }
    }
    __asm
    {
      vmulss  xmm1, xmm0, xmm0
      vmulss  xmm0, xmm2, xmm2
      vaddss  xmm2, xmm1, xmm0
      vmovss  xmm0, dword ptr [rdi+138h]
      vsubss  xmm7, xmm0, dword ptr [rax+0B84h]
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm9, xmm2, xmm1
      vmovss  xmm2, dword ptr [rdi+130h]
      vsubss  xmm8, xmm2, dword ptr [rax+0B7Ch]
      vmovss  xmm1, dword ptr [rdi+134h]
      vsubss  xmm6, xmm1, dword ptr [rax+0B80h]
      vsubss  xmm3, xmm1, dword ptr [rax+134h]
      vsubss  xmm5, xmm0, dword ptr [rax+138h]
      vsubss  xmm4, xmm2, dword ptr [rax+130h]
      vmulss  xmm0, xmm8, xmm8
      vmulss  xmm1, xmm6, xmm6
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm7, xmm7
      vaddss  xmm8, xmm2, xmm1
      vcomiss xmm8, cs:__real@441c4000
      vmulss  xmm3, xmm3, xmm3
    }
    v114 = !v15 && !v16;
    __asm
    {
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm2, xmm3, xmm0
      vmulss  xmm1, xmm5, xmm5
      vaddss  xmm10, xmm2, xmm1
      vcomiss xmm10, cs:__real@471c4000
    }
    v46 = 0;
    v47 = 0;
    if ( _RSI )
    {
      v11 = EntHandle::isDefined(_RSI + 728) != 0;
      v48 = this->m_pAI->avoidanceBlockedData.stationaryBlockedEntTimeout - level.time;
      if ( v48 < 0 )
        v48 = 0;
      v8 = v48;
      v46 = v48 <= 0 && !v11;
    }
    if ( AICommonInterface::HasPath(this) )
    {
      this->m_pAI->pNavigator->GetNextCorner(this->m_pAI->pNavigator, &inOutMoveDelta);
      __asm { vmovss  xmm0, dword ptr [rbp+40h+inOutMoveDelta] }
      v47 = 0;
      __asm
      {
        vsubss  xmm7, xmm0, dword ptr [rax+130h]
        vmovss  xmm0, dword ptr [rbp+40h+inOutMoveDelta+4]
        vmovss  dword ptr [rbp+40h+inOutMoveDelta], xmm7
        vsubss  xmm6, xmm0, dword ptr [rax+134h]
        vmovss  xmm0, dword ptr [rbp+40h+inOutMoveDelta+8]
        vmovss  dword ptr [rbp+40h+inOutMoveDelta+4], xmm6
        vsubss  xmm5, xmm0, dword ptr [rax+138h]
        vmulss  xmm0, xmm5, xmm5
        vmulss  xmm2, xmm7, xmm7
        vmulss  xmm1, xmm6, xmm6
        vaddss  xmm3, xmm2, xmm1
        vmovss  xmm1, cs:__real@3f800000
        vaddss  xmm2, xmm3, xmm0
        vsqrtss xmm4, xmm2, xmm2
        vcmpless xmm0, xmm4, cs:__real@80000000
        vblendvps xmm0, xmm4, xmm1, xmm0
        vdivss  xmm2, xmm1, xmm0
        vmulss  xmm0, xmm2, xmm6
        vmulss  xmm3, xmm5, xmm2
        vmovss  dword ptr [rbp+40h+inOutMoveDelta+8], xmm3
        vmulss  xmm4, xmm2, xmm7
        vmovss  dword ptr [rbp+40h+inOutMoveDelta], xmm4
        vmovss  dword ptr [rbp+40h+inOutMoveDelta+4], xmm0
        vmulss  xmm1, xmm0, dword ptr [rcx+0B8Ch]
        vmulss  xmm0, xmm4, dword ptr [rcx+0B88h]
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm3, dword ptr [rcx+0B90h]
        vaddss  xmm3, xmm2, xmm1
        vcomiss xmm3, cs:__real@3f781062
      }
      if ( v15 )
        v47 = 1;
    }
    __asm { vmovaps xmm7, xmmword ptr [rsp+140h+var_48+8] }
    if ( v46 )
      goto LABEL_27;
    if ( v114 )
      goto LABEL_27;
    __asm { vcomiss xmm9, cs:__real@42c80000 }
    if ( v114 || v47 )
    {
LABEL_27:
      _RAX = this->m_pAI;
      __asm
      {
        vmovss  xmm0, dword ptr [rax+0B64h]
        vmovss  xmm2, dword ptr [rax+0B68h]
        vmovss  xmm1, dword ptr [rax+0B94h]; fMoveDist
        vmovss  dword ptr [rbp+40h+velocity], xmm0
        vmovss  xmm0, dword ptr [rax+0B6Ch]
        vmovss  dword ptr [rbp+40h+velocity+4], xmm2
        vmovss  xmm2, dword ptr [rax+0B70h]
        vmovss  dword ptr [rbp+40h+velocity+8], xmm0
        vmovss  xmm0, dword ptr [rax+0B74h]
        vmovss  dword ptr [rbp+40h+inOutMoveDelta], xmm2
        vmovss  xmm2, dword ptr [rax+0B78h]
        vmovss  dword ptr [rbp+40h+inOutMoveDelta+4], xmm0
        vmovss  dword ptr [rbp+40h+inOutMoveDelta+8], xmm2
      }
      AIScriptedInterface::GetAvoidanceDelta(this, *(const float *)&_XMM1, 1, &velocity, &inOutMoveDelta);
    }
    v84 = this->m_pAI;
    __asm { vmovaps xmm9, xmmword ptr [rsp+140h+var_68+8] }
    if ( v84->avoidanceBlockedData.blocked && v84->avoidanceBlockedData.blockedNotifyTime < level.time )
      AIScriptedInterface::FireBlockedNotify(this, _RDI);
    v86 = DVARBOOL_ai_debugpathblocked;
    if ( !DVARBOOL_ai_debugpathblocked && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugpathblocked") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v86);
    if ( v86->current.enabled )
    {
      _RCX = this->m_pAI->ent;
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+130h]
        vmovss  dword ptr [rbp+40h+inOutMoveDelta], xmm0
        vmovss  xmm1, dword ptr [rcx+134h]
        vmovss  dword ptr [rbp+40h+inOutMoveDelta+4], xmm1
        vmovss  xmm0, dword ptr [rcx+138h]
        vsubss  xmm2, xmm0, cs:__real@41000000
        vmovss  dword ptr [rbp+40h+inOutMoveDelta+8], xmm2
      }
      v92 = j_va("Current timeout: %d", v8);
      __asm
      {
        vmovss  xmm6, cs:__real@3ecccccd
        vmovaps xmm2, xmm6; scale
      }
      G_Main_AddDebugString(&inOutMoveDelta, &colorLtGrey, *(float *)&_XMM2, v92);
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+40h+inOutMoveDelta+8]
        vaddss  xmm1, xmm0, cs:__real@c1200000
        vsqrtss xmm2, xmm8, xmm8
        vmovss  dword ptr [rbp+40h+inOutMoveDelta+8], xmm1
        vcvtss2sd xmm1, xmm2, xmm2
        vmovq   rdx, xmm1
      }
      v100 = j_va("Distance blocker has moved: %f", _RDX);
      __asm { vmovaps xmm2, xmm6; scale }
      G_Main_AddDebugString(&inOutMoveDelta, &colorLtGrey, *(float *)&_XMM2, v100);
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+40h+inOutMoveDelta+8]
        vaddss  xmm1, xmm0, cs:__real@c1400000
        vsqrtss xmm3, xmm10, xmm10
        vmovss  dword ptr [rbp+40h+inOutMoveDelta+8], xmm1
        vcvtss2sd xmm1, xmm3, xmm3
        vmovq   rdx, xmm1
      }
      v107 = j_va("Distance to blocker: %f", _RDX);
      __asm { vmovaps xmm2, xmm6; scale }
      G_Main_AddDebugString(&inOutMoveDelta, &colorLtGrey, *(float *)&_XMM2, v107);
      G_DebugLine(&this->m_pAI->ent->r.currentOrigin, &_RDI->r.currentOrigin, &colorOrange, 0);
    }
  }
  else if ( m_pAI->avoidanceBlockedData.blocked )
  {
    AIScriptedInterface::ClearBlockingEntity(this);
  }
  v109 = this->m_pAI;
  if ( v109->avoidanceBlockedData.blocked && !v11 && !v109->avoidanceBlockedData.hasNotifiedBlockingEntity && _RSI && level.time - v109->avoidanceBlockedData.blockedStartTime >= 3000 )
  {
    AIWrapper::AIWrapper(&v115, _RDI);
    v115.m_pAI->NotifyBlockingEntity(v115.m_pAI);
    this->m_pAI->avoidanceBlockedData.hasNotifiedBlockingEntity = 1;
  }
LABEL_44:
  _R11 = &v120;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
}

