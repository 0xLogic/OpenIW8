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
bool AIScriptedInterface::GetAvoidanceDelta(AIScriptedInterface *this, const float fMoveDist, const bool fullyProcess, const vec3_t *velocity, vec3_t *inOutMoveDelta)
{
  const dvar_t *v5; 
  bool v6; 
  float v11; 
  float v12; 
  ai_scripted_t *m_pAI; 
  float v14; 
  float v15; 
  gentity_s *TargetEntity; 
  const dvar_t *v17; 
  const dvar_t *v18; 
  bool drawAvoidance; 
  __int128 v20; 
  float v21; 
  float v22; 
  ai_scripted_t *v23; 
  __int128 v24; 
  float pre_avoidance_desiredSpeed; 
  float v29; 
  float v30; 
  float v31; 
  ai_scripted_t *v32; 
  ai_scripted_t *v33; 
  AvoidanceResult v34; 
  __int128 v36; 
  float v39; 
  AvoidanceResult v40; 
  AINavigator2D *v41; 
  bool hasPlayerObstacle; 
  ai_scripted_t *v43; 
  ai_scripted_t *v44; 
  float v45; 
  ai_scripted_t *v47; 
  ai_scripted_t *v48; 
  ai_scripted_t *v49; 
  float v50; 
  float v51; 
  bool outPushingPlayer; 
  int colliderCount[3]; 
  AvoidingEntityInfo avoidingEntityInfo; 
  vec3_t outAvoidingVelocity; 
  vec3_t moveDelta; 
  int outColliderEntNums[272]; 

  v5 = DCONST_DVARBOOL_ai_useOrca;
  v6 = 0;
  if ( !DCONST_DVARBOOL_ai_useOrca && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_useOrca") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( !v5->current.enabled || !this->m_pAI->avoidance.avoidanceEnabled )
    return v6;
  if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
    __debugbreak();
  v11 = inOutMoveDelta->v[0];
  v12 = inOutMoveDelta->v[2];
  m_pAI = this->m_pAI;
  v14 = 1000.0 / (float)level.frameDuration;
  moveDelta.v[1] = inOutMoveDelta->v[1];
  inOutMoveDelta->v[1] = moveDelta.v[1] * v14;
  inOutMoveDelta->v[0] = v11 * v14;
  inOutMoveDelta->v[2] = v12 * v14;
  v15 = velocity->v[1];
  avoidingEntityInfo.currentVelocity.v[0] = velocity->v[0];
  avoidingEntityInfo.currentVelocity.v[2] = velocity->v[2];
  moveDelta.v[0] = v11;
  moveDelta.v[2] = v12;
  avoidingEntityInfo.currentVelocity.v[1] = v15;
  if ( EntHandle::isDefined(&m_pAI->ignoreAvoidanceEnt) )
    TargetEntity = EntHandle::ent(&this->m_pAI->ignoreAvoidanceEnt);
  else
    TargetEntity = AICommonInterface::GetTargetEntity(this);
  v17 = DCONST_DVARINT_ai_showRepulsors;
  avoidingEntityInfo.ignoreEnt = TargetEntity;
  avoidingEntityInfo.drawAvoidance = 0;
  if ( !DCONST_DVARINT_ai_showRepulsors && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showRepulsors") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v17);
  if ( v17->current.integer == 2 )
  {
    v18 = DVARINT_ai_debugEntIndex;
    if ( !DVARINT_ai_debugEntIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugEntIndex") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v18);
    drawAvoidance = avoidingEntityInfo.drawAvoidance;
    if ( v18->current.integer == this->m_pAI->ent->s.number )
      drawAvoidance = 1;
    avoidingEntityInfo.drawAvoidance = drawAvoidance;
  }
  v20 = LODWORD(inOutMoveDelta->v[1]);
  v21 = inOutMoveDelta->v[0];
  v22 = inOutMoveDelta->v[2];
  v23 = this->m_pAI;
  v24 = v20;
  *(float *)&v24 = fsqrt((float)((float)(*(float *)&v20 * *(float *)&v20) + (float)(v21 * v21)) + (float)(v22 * v22));
  _XMM3 = v24;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm8, xmm0
  }
  colliderCount[0] = 0;
  pre_avoidance_desiredSpeed = v23->pre_avoidance_desiredSpeed;
  v29 = v21 * (float)(1.0 / *(float *)&_XMM0);
  v30 = v22 * (float)(1.0 / *(float *)&_XMM0);
  v31 = *(float *)&v20 * (float)(1.0 / *(float *)&_XMM0);
  outAvoidingVelocity.v[0] = v29 * pre_avoidance_desiredSpeed;
  outAvoidingVelocity.v[1] = v31 * pre_avoidance_desiredSpeed;
  outAvoidingVelocity.v[2] = v30 * pre_avoidance_desiredSpeed;
  avoidingEntityInfo.desiredVelocity.v[0] = v29 * pre_avoidance_desiredSpeed;
  avoidingEntityInfo.desiredVelocity.v[1] = v31 * pre_avoidance_desiredSpeed;
  avoidingEntityInfo.desiredVelocity.v[2] = v30 * pre_avoidance_desiredSpeed;
  v23->avoidance.minSpeed = 23.0;
  *(double *)&_XMM0 = AIScriptedInterface::GetTargetSpeed(this);
  this->m_pAI->avoidance.maxSpeed = *(float *)&_XMM0;
  v32 = this->m_pAI;
  avoidingEntityInfo.ent = v32->ent;
  Nav_GetGoalPos(v32->pNavigator, &avoidingEntityInfo.goalPosition);
  v33 = this->m_pAI;
  avoidingEntityInfo.position = v33->ent->r.currentOrigin;
  v34 = ORCA_DoAvoidance(&avoidingEntityInfo, &v33->avoidance, &outAvoidingVelocity, ORCA_RateVelocity, outColliderEntNums, colliderCount);
  v36 = LODWORD(outAvoidingVelocity.v[1]);
  *(float *)&v36 = fsqrt((float)((float)(*(float *)&v36 * *(float *)&v36) + (float)(outAvoidingVelocity.v[0] * outAvoidingVelocity.v[0])) + (float)(outAvoidingVelocity.v[2] * outAvoidingVelocity.v[2]));
  _XMM6 = v36;
  __asm
  {
    vcmpless xmm0, xmm6, cs:__real@80000000
    vblendvps xmm0, xmm6, xmm8, xmm0
  }
  outAvoidingVelocity.v[1] = outAvoidingVelocity.v[1] * (float)(1.0 / *(float *)&_XMM0);
  outAvoidingVelocity.v[0] = outAvoidingVelocity.v[0] * (float)(1.0 / *(float *)&_XMM0);
  v39 = (float)(outAvoidingVelocity.v[2] * (float)(1.0 / *(float *)&_XMM0)) * v30;
  outAvoidingVelocity.v[2] = outAvoidingVelocity.v[2] * (float)(1.0 / *(float *)&_XMM0);
  v40 = v34;
  v6 = (unsigned int)v34 <= AVOIDANCE_SPLIT_FAIL;
  this->m_pAI->avoidance_active = (float)((float)((float)(outAvoidingVelocity.v[1] * v31) + (float)(outAvoidingVelocity.v[0] * v29)) + v39) < 0.98479998;
  if ( !fullyProcess )
    return v6;
  v41 = this->m_pAI->pNavigator->Get2DNavigator(this->m_pAI->pNavigator);
  hasPlayerObstacle = AINavigator2D::IsApproachingPlayerObstacle(v41, 400.0);
  if ( hasPlayerObstacle && !this->m_pAI->avoidance.pushPlayerEnabled && AIScriptedInterface::IsNearAnyPlayers(this, 400.0) )
  {
    v6 = 1;
  }
  else if ( !v6 && (float)(*(float *)&v36 / pre_avoidance_desiredSpeed) < 0.30000001 && (float)((float)((float)(v29 * outAvoidingVelocity.v[0]) + (float)(v31 * outAvoidingVelocity.v[1])) + (float)(v30 * outAvoidingVelocity.v[2])) > 0.98479998 )
  {
    v6 = 1;
  }
  v43 = this->m_pAI;
  if ( !v43->avoidanceBlockedData.blocked || v43->avoidanceBlockedData.processingBlocking )
  {
    if ( !v6 )
    {
LABEL_38:
      v47 = this->m_pAI;
      if ( *(float *)&v36 >= (float)(pre_avoidance_desiredSpeed - 0.001) )
      {
        v47->avoidance_maxSpeed = -1.0;
      }
      else
      {
        v47->avoidance_maxSpeed = *(float *)&v36;
        if ( v40 == AVOIDANCE_ZERO_VELOCITY_CASE )
        {
          outAvoidingVelocity.v[0] = v29;
          outAvoidingVelocity.v[1] = v31;
          outAvoidingVelocity.v[2] = v30;
        }
      }
      v48 = this->m_pAI;
      if ( v48->avoidanceBlockedData.blocked )
      {
        --v48->avoidanceBlockedData.blockedCheckCount;
        v49 = this->m_pAI;
        if ( v49->avoidanceBlockedData.blocked && !v49->avoidanceBlockedData.blockedCheckCount )
          AIScriptedInterface::ClearBlockingEntity(this);
      }
      goto LABEL_46;
    }
    outPushingPlayer = 0;
    if ( !AIScriptedInterface::ProcessBlockingAvoidance(this, v40, &outAvoidingVelocity, *(float *)&v36, outColliderEntNums, colliderCount[0], velocity, &avoidingEntityInfo.goalPosition, &moveDelta, fMoveDist, hasPlayerObstacle, &outPushingPlayer) )
    {
      v6 = 0;
      if ( outPushingPlayer )
      {
        v44 = this->m_pAI;
        v45 = moveDelta.v[1];
        inOutMoveDelta->v[0] = moveDelta.v[0];
        inOutMoveDelta->v[2] = moveDelta.v[2];
        inOutMoveDelta->v[1] = v45;
        v44->avoidance_maxSpeed = -1.0;
        this->m_pAI->avoidance_active = 0;
        AIScriptedInterface::ClearBlockingEntity(this);
        return 0;
      }
      goto LABEL_38;
    }
  }
  if ( !v6 )
    goto LABEL_38;
LABEL_46:
  v50 = fMoveDist * outAvoidingVelocity.v[1];
  v51 = fMoveDist * outAvoidingVelocity.v[2];
  inOutMoveDelta->v[0] = fMoveDist * outAvoidingVelocity.v[0];
  inOutMoveDelta->v[1] = v50;
  inOutMoveDelta->v[2] = v51;
  return v6;
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
  const dvar_t *v4; 
  double Float; 
  ai_scripted_t *m_pAI; 

  if ( Scr_GetNumParam(scrContext) == 1 )
  {
    v4 = DCONST_DVARBOOL_ai_useOrca;
    if ( !DCONST_DVARBOOL_ai_useOrca && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_useOrca") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    if ( v4->current.enabled )
    {
      Float = Scr_GetFloat(scrContext, 0);
      m_pAI = this->m_pAI;
      m_pAI->avoidance.avoidanceBoundsHalfSize.v[0] = *(float *)&Float;
      m_pAI->avoidance.avoidanceBoundsHalfSize.v[1] = *(float *)&Float;
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
  const dvar_t *v4; 
  double Float; 

  if ( Scr_GetNumParam(scrContext) == 1 )
  {
    v4 = DCONST_DVARBOOL_ai_useOrca;
    if ( !DCONST_DVARBOOL_ai_useOrca && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_useOrca") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    if ( v4->current.enabled )
    {
      Float = Scr_GetFloat(scrContext, 0);
      this->m_pAI->avoidance.radius = *(float *)&Float;
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
  double Float; 

  if ( Scr_GetNumParam(scrContext) == 1 )
  {
    Float = Scr_GetFloat(scrContext, 0);
    this->m_pAI->avoidance.reciprocality = *(float *)&Float;
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
char AIScriptedInterface::ProcessBlockingAvoidance(AIScriptedInterface *this, AvoidanceResult avoidResult, vec3_t *avoidanceMoveDelta, float speed, int *colliderEntNums, int colliderCount, const vec3_t *velocity, vec3_t *goalPosition, vec3_t *moveDelta, float moveDistance, bool hasPlayerObstacle, bool *outPushingPlayer)
{
  vec3_t *v12; 
  int *v14; 
  const dvar_t *v15; 
  float v16; 
  float v17; 
  gentity_s *v18; 
  bool v19; 
  char v20; 
  char v21; 
  __int64 v22; 
  gentity_s *v23; 
  __int64 v24; 
  bool v25; 
  bool v26; 
  sentient_s *sentient; 
  sentient_s *v28; 
  bool v29; 
  const bitarray<224> *AllCombatTeamFlags; 
  unsigned int v31; 
  unsigned __int64 eTeam; 
  ai_scripted_t *m_pAI; 
  __int128 v34; 
  __int128 v35; 
  float v36; 
  __int128 v37; 
  __int128 v38; 
  __int128 v39; 
  __int128 v40; 
  __int128 v42; 
  __int16 EntityIndex; 
  ai_scripted_t *v44; 
  AIScriptedInterface *v46; 
  const ai_scripted_t *v47; 
  __int128 v51; 
  float v54; 
  float v55; 
  char v56; 
  float v57; 
  float v58; 
  float v59; 
  __int128 v60; 
  __int128 v61; 
  gclient_s *client; 
  __int128 v66; 
  float v67; 
  float v68; 
  AIScriptedInterface *v69; 
  __int64 v70; 
  float v71; 
  float v73; 
  __int128 v74; 
  __int128 v75; 
  float v79; 
  float v80; 
  float v81; 
  __int128 v82; 
  __int128 v83; 
  __int128 v86; 
  float v87; 
  float v91; 
  float v92; 
  int v93; 
  int v94; 
  __int64 v95; 
  __int64 v96; 
  gentity_s *ent; 
  int v98; 
  char *v99; 
  __int128 v100; 
  __int128 v101; 
  __int128 v102; 
  __int128 v103; 
  float v104; 
  float v105; 
  __int128 v107; 
  float v110; 
  float v111; 
  float v112; 
  __int128 v113; 
  float v117; 
  float v118; 
  float *p_commandTime; 
  float v120; 
  float v121; 
  float v122; 
  AIScriptedInterface *v123; 
  float *v124; 
  ai_scripted_t *v125; 
  ai_scripted_t *v126; 
  ai_scripted_t *v127; 
  ai_scripted_t *v128; 
  gentity_s *v129; 
  float v130; 
  __int128 v131; 
  float v132; 
  float v133; 
  __int64 v137; 
  __int64 v138; 
  __int16 v139; 
  gentity_s *v140; 
  char v141; 
  float v142; 
  __int64 v146; 
  AIWrapper v147; 
  bitarray<224> result; 
  char ptr[400]; 

  v12 = avoidanceMoveDelta;
  v14 = colliderEntNums;
  if ( !this->m_pAI->avoidanceBlockedData.enabled )
    return 0;
  v15 = DCONST_DVARBOOL_ai_enableAvoidanceBlocking;
  if ( !DCONST_DVARBOOL_ai_enableAvoidanceBlocking && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_enableAvoidanceBlocking") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v15);
  if ( !v15->current.enabled )
    return 0;
  v16 = FLOAT_22500_0;
  v17 = FLOAT_22500_0;
  v142 = FLOAT_22500_0;
  v18 = NULL;
  v140 = NULL;
  v19 = 0;
  v139 = 0;
  v20 = 0;
  v141 = 0;
  v21 = 0;
  if ( colliderCount <= 0 )
    goto LABEL_49;
  v22 = 0i64;
  v146 = 0i64;
  while ( 1 )
  {
    v23 = &g_entities[v14[v22]];
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 196, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    v24 = v23 - g_entities;
    if ( (unsigned int)v24 >= 0x800 )
    {
      LODWORD(v138) = 2048;
      LODWORD(v137) = v23 - g_entities;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 199, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( 2048 ) )", "index doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v137, v138) )
        __debugbreak();
    }
    v24 = (__int16)v24;
    if ( (unsigned int)(__int16)v24 >= 0x800 )
    {
      LODWORD(v138) = 2048;
      LODWORD(v137) = v24;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v137, v138) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    if ( g_entities[v24].r.isInUse != g_entityIsInUse[v24] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    v25 = g_entityIsInUse[v24] && v23->s.eType == ET_PLAYER;
    v26 = 0;
    sentient = v23->sentient;
    if ( sentient )
    {
      v28 = this->m_pAI->ent->sentient;
      if ( !v28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.h", 259, ASSERT_TYPE_ASSERT, "(other)", (const char *)&queryFormat, "other") )
        __debugbreak();
      if ( level.teammode == TEAMMODE_FFA )
      {
        v29 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80);
        if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
          AllCombatTeamFlags = Com_TeamsSP_GetAllCombatTeamFlags();
        else
          AllCombatTeamFlags = Com_TeamsMP_GetAllTeamFlags();
        *(_OWORD *)result.array = *(_OWORD *)AllCombatTeamFlags->array;
        *(_QWORD *)&result.array[4] = *(_QWORD *)&AllCombatTeamFlags->array[4];
        v31 = AllCombatTeamFlags->array[6] & 0xFFEFFFFF;
        if ( v29 )
          result.array[0] &= ~0x8000000u;
        result.array[6] = v31 & 0xFF9FFFFF;
        v20 = v141;
      }
      else
      {
        Com_Teams_GetEnemyTeamFlags(&result, v28->eTeam);
      }
      eTeam = (unsigned int)sentient->eTeam;
      if ( (unsigned int)eTeam >= 0xE0 )
      {
        LODWORD(v138) = 224;
        LODWORD(v137) = sentient->eTeam;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v137, v138) )
          __debugbreak();
      }
      if ( ((0x80000000 >> (eTeam & 0x1F)) & result.array[eTeam >> 5]) != 0 )
        goto LABEL_101;
    }
    m_pAI = this->m_pAI;
    v35 = LODWORD(v23->r.currentOrigin.v[0]);
    *(float *)&v35 = v23->r.currentOrigin.v[0] - m_pAI->ent->r.currentOrigin.v[0];
    v34 = v35;
    v36 = v23->r.currentOrigin.v[1] - m_pAI->ent->r.currentOrigin.v[1];
    v38 = LODWORD(v23->r.currentOrigin.v[2]);
    *(float *)&v38 = v23->r.currentOrigin.v[2] - m_pAI->ent->r.currentOrigin.v[2];
    v37 = v38;
    v39 = v34;
    *(float *)&v39 = (float)(*(float *)&v34 * *(float *)&v34) + (float)(v36 * v36);
    v40 = v39;
    v42 = v37;
    *(float *)&v42 = (float)(*(float *)&v37 * *(float *)&v37) + *(float *)&v40;
    _XMM15 = v42;
    if ( v25 )
      break;
    AIWrapper::AIWrapper(&v147, v23);
    v46 = v147.m_pAI;
    if ( !v147.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_avoidance.cpp", 185, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
      __debugbreak();
    if ( v46->InScriptedState(v46) )
      v20 = 1;
    v141 = v20;
    v26 = AIScriptedInterface::GetCoverNode(v46) != NULL;
    v47 = (const ai_scripted_t *)v46->GetAI(v46);
    if ( AIScriptedInterface::IsInBlockingAvoidanceChain(this, v47) )
      goto LABEL_101;
LABEL_64:
    if ( *(float *)&v42 <= v17 )
    {
      _XMM5 = LODWORD(FLOAT_0_93900001);
      if ( v25 )
      {
        __asm
        {
          vcmpltss xmm0, xmm15, cs:__real@45afc800
          vblendvps xmm5, xmm5, xmm1, xmm0
        }
      }
      v51 = v40;
      *(float *)&v51 = fsqrt(*(float *)&v40);
      _XMM1 = v51;
      __asm
      {
        vcmpless xmm0, xmm1, xmm12
        vblendvps xmm1, xmm1, xmm11, xmm0
      }
      v54 = *(float *)&v34 * (float)(1.0 / *(float *)&_XMM1);
      v55 = v36 * (float)(1.0 / *(float *)&_XMM1);
      v56 = 0;
      v57 = goalPosition->v[1] - v23->r.currentOrigin.v[1];
      v58 = goalPosition->v[2] - v23->r.currentOrigin.v[2];
      if ( (float)((float)((float)((float)(goalPosition->v[0] - v23->r.currentOrigin.v[0]) * (float)(goalPosition->v[0] - v23->r.currentOrigin.v[0])) + (float)(v57 * v57)) + (float)(v58 * v58)) <= 400.0 )
      {
        v56 = 1;
      }
      else
      {
        v59 = moveDelta->v[1];
        v60 = LODWORD(moveDelta->v[0]);
        v61 = v60;
        *(float *)&v61 = fsqrt((float)(*(float *)&v60 * *(float *)&v60) + (float)(v59 * v59));
        _XMM2 = v61;
        __asm
        {
          vcmpless xmm0, xmm2, xmm12
          vblendvps xmm1, xmm2, xmm11, xmm0
        }
        if ( (float)((float)((float)((float)(1.0 / *(float *)&_XMM1) * v59) * v55) + (float)((float)((float)(1.0 / *(float *)&_XMM1) * *(float *)&v60) * v54)) < *(float *)&_XMM5 )
          goto LABEL_100;
      }
      if ( v25 )
      {
        client = v23->client;
        v66 = LODWORD(client->ps.velocity.v[0]);
        v67 = client->ps.velocity.v[1];
        v68 = client->ps.velocity.v[2];
        goto LABEL_78;
      }
      AIWrapper::AIWrapper(&v147, v23);
      v69 = v147.m_pAI;
      if ( !v147.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_avoidance.cpp", 234, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
        __debugbreak();
      v70 = v69->GetAI(v69);
      v66 = *(unsigned int *)(v70 + 2104);
      v67 = *(float *)(v70 + 2108);
      v68 = *(float *)(v70 + 2112);
      if ( !v141 || (float)((float)((float)(*(float *)&v66 * *(float *)&v66) + (float)(v67 * v67)) + (float)(v68 * v68)) >= 25.0 )
      {
LABEL_78:
        v71 = speed;
        *(float *)&_XMM10 = speed;
        if ( avoidResult )
        {
          v81 = velocity->v[1];
          v82 = LODWORD(velocity->v[0]);
          v83 = v82;
          *(float *)&v83 = fsqrt((float)((float)(*(float *)&v82 * *(float *)&v82) + (float)(v81 * v81)) + (float)(velocity->v[2] * velocity->v[2]));
          _XMM10 = v83;
          __asm
          {
            vcmpless xmm0, xmm10, xmm12
            vblendvps xmm1, xmm10, xmm11, xmm0
          }
          v79 = (float)(1.0 / *(float *)&_XMM1) * *(float *)&v82;
          v80 = (float)(1.0 / *(float *)&_XMM1) * v81;
        }
        else
        {
          v73 = avoidanceMoveDelta->v[1];
          v74 = LODWORD(avoidanceMoveDelta->v[0]);
          v75 = v74;
          *(float *)&v75 = fsqrt((float)((float)(*(float *)&v74 * *(float *)&v74) + (float)(v73 * v73)) + (float)(avoidanceMoveDelta->v[2] * avoidanceMoveDelta->v[2]));
          _XMM4 = v75;
          __asm
          {
            vcmpless xmm0, xmm4, xmm12
            vblendvps xmm1, xmm4, xmm11, xmm0
          }
          v79 = (float)(1.0 / *(float *)&_XMM1) * *(float *)&v74;
          v80 = (float)(1.0 / *(float *)&_XMM1) * v73;
          v71 = speed;
        }
        v86 = v66;
        v87 = (float)(*(float *)&v66 * *(float *)&v66) + (float)(v67 * v67);
        *(float *)&v86 = fsqrt(v87);
        _XMM2 = v86;
        __asm
        {
          vcmpless xmm0, xmm2, xmm12
          vblendvps xmm1, xmm2, xmm11, xmm0
        }
        v91 = (float)((float)((float)(1.0 / *(float *)&_XMM1) * v67) * v80) + (float)((float)((float)(1.0 / *(float *)&_XMM1) * *(float *)&v66) * v79);
        v92 = fsqrt((float)(v68 * v68) + v87);
        if ( v91 > 0.70700002 && v92 > (float)(*(float *)&_XMM10 - 20.0) && (float)(v71 / this->m_pAI->pre_avoidance_desiredSpeed) > 0.30000001 )
        {
          v17 = v142;
        }
        else
        {
          if ( v92 > 0.0 && !v26 )
            goto LABEL_93;
          `eh vector constructor iterator'(ptr, 0x28ui64, 0xAui64, (void (__fastcall *)(void *))nav_cornerdata_t::nav_cornerdata_t, (void (__fastcall *)(void *))nav_cornerdata_t::~nav_cornerdata_t);
          v93 = ((__int64 (__fastcall *)(AINavigator *, char *, __int64))this->m_pAI->pNavigator->GetNextNCorners)(this->m_pAI->pNavigator, ptr, 10i64);
          v94 = 0;
          v95 = 0i64;
          if ( v93 > 0 )
          {
            v96 = v93;
            ent = this->m_pAI->ent;
            v98 = v93 - 1;
            v99 = ptr;
            while ( 1 )
            {
              v100 = *(unsigned int *)v99;
              v101 = *((unsigned int *)v99 + 1);
              v103 = v101;
              *(float *)&v103 = *(float *)&v101 - ent->r.currentOrigin.v[1];
              v102 = v103;
              v107 = v100;
              v104 = *(float *)&v100 - v23->r.currentOrigin.v[0];
              v105 = *(float *)&v101 - v23->r.currentOrigin.v[1];
              *(float *)&v107 = fsqrt((float)(v104 * v104) + (float)(v105 * v105));
              _XMM5 = v107;
              __asm
              {
                vcmpless xmm0, xmm5, cs:__real@80000000
                vblendvps xmm1, xmm5, xmm7, xmm0
              }
              v110 = *(float *)&v100 - ent->r.currentOrigin.v[0];
              v111 = (float)(1.0 / *(float *)&_XMM1) * v105;
              v112 = v104 * (float)(1.0 / *(float *)&_XMM1);
              if ( v94 == v98 && *(float *)&v107 < 50.0 )
                break;
              v113 = v102;
              *(float *)&v113 = fsqrt((float)(*(float *)&v102 * *(float *)&v102) + (float)(v110 * v110));
              _XMM2 = v113;
              __asm
              {
                vcmpless xmm0, xmm2, cs:__real@80000000
                vblendvps xmm1, xmm2, xmm4, xmm0
              }
              v117 = v110 * (float)(1.0 / *(float *)&_XMM1);
              v118 = *(float *)&v102 * (float)(1.0 / *(float *)&_XMM1);
              if ( (float)((float)(v118 * v111) + (float)(v117 * v112)) <= 0.0 )
              {
                if ( *(float *)&_XMM5 > 50.0 )
                  goto LABEL_98;
                if ( *(float *)&_XMM15 < 1600.0 && *(float *)&_XMM5 < 30.0 )
                  break;
              }
              else if ( (float)((float)(v118 * v55) + (float)(v117 * v54)) > 0.96600002 )
              {
                break;
              }
              ++v94;
              ++v95;
              v99 += 40;
              if ( v95 >= v96 )
                goto LABEL_98;
            }
            `eh vector destructor iterator'(ptr, 0x28ui64, 0xAui64, (void (__fastcall *)(void *))nav_cornerdata_t::~nav_cornerdata_t);
LABEL_93:
            v18 = v23;
            v140 = v23;
            v17 = *(float *)&_XMM15;
            v142 = *(float *)&_XMM15;
            v19 = v25;
            LOBYTE(v139) = v25;
            v21 = v56;
            HIBYTE(v139) = v56;
            v16 = FLOAT_22500_0;
            goto LABEL_102;
          }
LABEL_98:
          `eh vector destructor iterator'(ptr, 0x28ui64, 0xAui64, (void (__fastcall *)(void *))nav_cornerdata_t::~nav_cornerdata_t);
          v17 = v142;
        }
      }
LABEL_100:
      v16 = FLOAT_22500_0;
    }
LABEL_101:
    v18 = v140;
    v19 = v139;
    v21 = HIBYTE(v139);
LABEL_102:
    v22 = v146 + 1;
    v146 = v22;
    if ( v22 >= colliderCount )
      goto LABEL_48;
    v20 = v141;
    v14 = colliderEntNums;
  }
  if ( !hasPlayerObstacle || m_pAI->avoidance.pushPlayerEnabled || *(float *)&v42 >= v16 )
    goto LABEL_64;
  v18 = v23;
  v140 = v23;
  v19 = v25;
  v21 = 0;
LABEL_48:
  v12 = avoidanceMoveDelta;
LABEL_49:
  if ( !((unsigned __int8 (__fastcall *)(AINavigator *))this->m_pAI->pNavigator->IsPathDistToGoalAtLeast)(this->m_pAI->pNavigator) && !v19 && !v21 || !v18 )
    return 0;
  EntityIndex = G_GetEntityIndex(v18);
  if ( G_IsEntityInUse(EntityIndex) && v18->s.eType == ET_PLAYER )
  {
    v44 = this->m_pAI;
    if ( v44->avoidance.pushPlayerEnabled )
    {
      *outPushingPlayer = 1;
      return 0;
    }
    p_commandTime = (float *)&v18->client->ps.commandTime;
    v120 = p_commandTime[16];
    v121 = p_commandTime[15];
    v122 = p_commandTime[17];
  }
  else
  {
    AIWrapper::AIWrapper(&v147, v18);
    v123 = v147.m_pAI;
    if ( !v147.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_avoidance.cpp", 357, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
      __debugbreak();
    v124 = (float *)v123->GetAI(v123);
    v44 = this->m_pAI;
    v120 = v124[527];
    v121 = v124[526];
    v122 = v124[528];
    v18 = v140;
  }
  if ( EntHandle::isDefined(&v44->avoidanceBlockedData.blockingEntity) && EntHandle::ent(&this->m_pAI->avoidanceBlockedData.blockingEntity) != v18 )
    AIScriptedInterface::ClearBlockingEntity(this);
  ++this->m_pAI->avoidanceBlockedData.blockedCheckCount;
  v125 = this->m_pAI;
  if ( v125->avoidanceBlockedData.blockedCheckCount < 3u )
    return 0;
  if ( !v125->avoidanceBlockedData.blocked )
  {
    EntHandle::setEnt(&v125->avoidanceBlockedData.blockingEntity, v18);
    this->m_pAI->avoidanceBlockedData.blockedStartTime = level.time;
    this->m_pAI->avoidanceBlockedData.stationaryBlockedEntTimeout = level.time + 4000;
    v126 = this->m_pAI;
    v126->avoidanceBlockedData.blockedEntityPosition.v[0] = v18->r.currentOrigin.v[0];
    v126->avoidanceBlockedData.blockedEntityPosition.v[1] = v18->r.currentOrigin.v[1];
    v126->avoidanceBlockedData.blockedEntityPosition.v[2] = v18->r.currentOrigin.v[2];
    v126->avoidance_maxSpeed = 0.0;
    this->m_pAI->avoidanceBlockedData.blocked = 1;
    v127 = this->m_pAI;
    v127->avoidanceBlockedData.storedVelocity = *velocity;
    v127->avoidanceBlockedData.storedMoveDelta = *moveDelta;
    v127->pNavigator->GetNextCorner(v127->pNavigator, &v127->avoidanceBlockedData.nextPathPoint);
    v128 = this->m_pAI;
    v129 = v128->ent;
    v131 = LODWORD(v128->avoidanceBlockedData.nextPathPoint.v[0]);
    *(float *)&v131 = v128->avoidanceBlockedData.nextPathPoint.v[0] - v128->ent->r.currentOrigin.v[0];
    v130 = *(float *)&v131;
    v128->avoidanceBlockedData.nextPathPoint.v[0] = *(float *)&v131;
    v132 = v128->avoidanceBlockedData.nextPathPoint.v[1] - v129->r.currentOrigin.v[1];
    v128->avoidanceBlockedData.nextPathPoint.v[1] = v132;
    v133 = v128->avoidanceBlockedData.nextPathPoint.v[2] - v129->r.currentOrigin.v[2];
    v128->avoidanceBlockedData.nextPathPoint.v[2] = v133;
    *(float *)&v131 = fsqrt((float)((float)(*(float *)&v131 * *(float *)&v131) + (float)(v132 * v132)) + (float)(v133 * v133));
    _XMM3 = v131;
    __asm
    {
      vcmpless xmm0, xmm3, xmm12
      vblendvps xmm0, xmm3, xmm1, xmm0
    }
    v128->avoidanceBlockedData.nextPathPoint.v[0] = v130 * (float)(1.0 / *(float *)&_XMM0);
    v128->avoidanceBlockedData.nextPathPoint.v[1] = (float)(1.0 / *(float *)&_XMM0) * v128->avoidanceBlockedData.nextPathPoint.v[1];
    v128->avoidanceBlockedData.nextPathPoint.v[2] = (float)(1.0 / *(float *)&_XMM0) * v128->avoidanceBlockedData.nextPathPoint.v[2];
    v128->avoidanceBlockedData.storedMoveDistance = moveDistance;
    this->m_pAI->avoidanceBlockedData.processingBlocking = 0;
    this->m_pAI->avoidanceBlockedData.hasNotifiedBlockingEntity = 0;
    GScr_AddEntity(v18);
    GScr_Notify(this->m_pAI->ent, scr_const.path_blocked, 1u);
    AIScriptedInterface::FireBlockedNotify(this, v18);
    *(_QWORD *)v12->v = 0i64;
    v12->v[2] = 0.0;
    v125 = this->m_pAI;
  }
  if ( fsqrt((float)((float)(v120 * v120) + (float)(v121 * v121)) + (float)(v122 * v122)) != 0.0 )
  {
    v125->avoidanceBlockedData.stationaryBlockedEntTimeout = level.time + 1000;
    v125 = this->m_pAI;
  }
  v125->avoidanceBlockedData.blockedCheckCount = 3;
  return 1;
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
  ai_scripted_t *v11; 
  gentity_s *ent; 
  float v13; 
  __int128 v14; 
  float v15; 

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
  v11 = this->m_pAI;
  ent = v11->ent;
  v13 = v11->avoidanceBlockedData.nextPathPoint.v[0] - v11->ent->r.currentOrigin.v[0];
  v11->avoidanceBlockedData.nextPathPoint.v[0] = v13;
  v14 = LODWORD(v11->avoidanceBlockedData.nextPathPoint.v[1]);
  *(float *)&v14 = v11->avoidanceBlockedData.nextPathPoint.v[1] - ent->r.currentOrigin.v[1];
  v11->avoidanceBlockedData.nextPathPoint.v[1] = *(float *)&v14;
  v15 = v11->avoidanceBlockedData.nextPathPoint.v[2] - ent->r.currentOrigin.v[2];
  v11->avoidanceBlockedData.nextPathPoint.v[2] = v15;
  *(float *)&v14 = fsqrt((float)((float)(*(float *)&v14 * *(float *)&v14) + (float)(v13 * v13)) + (float)(v15 * v15));
  _XMM3 = v14;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm1, xmm0
  }
  v11->avoidanceBlockedData.nextPathPoint.v[0] = v13 * (float)(1.0 / *(float *)&_XMM0);
  v11->avoidanceBlockedData.nextPathPoint.v[1] = (float)(1.0 / *(float *)&_XMM0) * v11->avoidanceBlockedData.nextPathPoint.v[1];
  v11->avoidanceBlockedData.nextPathPoint.v[2] = (float)(1.0 / *(float *)&_XMM0) * v11->avoidanceBlockedData.nextPathPoint.v[2];
  v11->avoidanceBlockedData.storedMoveDistance = moveDistance;
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
  __int128 v1; 
  __int128 v2; 
  unsigned int v4; 
  __int64 v5; 
  gentity_s *v6; 
  bool v7; 
  int isDefined; 
  ai_scripted_t *m_pAI; 
  __int16 EntityIndex; 
  float *p_commandTime; 
  float v12; 
  float v13; 
  float v14; 
  AIScriptedInterface *v15; 
  ai_scripted_t *v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float *p_number; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  bool v30; 
  char v31; 
  int v32; 
  ai_scripted_t *v33; 
  gentity_s *ent; 
  float v35; 
  __int128 v36; 
  float v37; 
  ai_scripted_t *v41; 
  float v42; 
  float storedMoveDistance; 
  float v44; 
  float v45; 
  float v46; 
  float v47; 
  ai_scripted_t *v48; 
  const dvar_t *v49; 
  ai_scripted_t *v50; 
  gentity_s *v51; 
  const char *v52; 
  const char *v53; 
  const char *v54; 
  ai_scripted_t *v55; 
  AIWrapper v56; 
  vec3_t inOutMoveDelta; 
  vec3_t velocity; 
  _QWORD v59[3]; 
  _QWORD v60[3]; 

  v4 = 0;
  v5 = 0i64;
  v6 = NULL;
  v7 = 0;
  isDefined = EntHandle::isDefined(&this->m_pAI->avoidanceBlockedData.blockingEntity);
  m_pAI = this->m_pAI;
  if ( isDefined )
  {
    if ( level.time < m_pAI->avoidanceBlockedData.blockedStartTime + 500 )
      return;
    v6 = EntHandle::ent(&m_pAI->avoidanceBlockedData.blockingEntity);
    this->m_pAI->avoidanceBlockedData.processingBlocking = 1;
    if ( v6->health <= 0 )
    {
      AIScriptedInterface::ClearBlockingEntity(this);
      return;
    }
    *(_OWORD *)&v60[1] = v1;
    *(_OWORD *)&v59[1] = v2;
    EntityIndex = G_GetEntityIndex(v6);
    if ( G_IsEntityInUse(EntityIndex) && v6->s.eType == ET_PLAYER )
    {
      p_commandTime = (float *)&v6->client->ps.commandTime;
      v12 = p_commandTime[15];
      v13 = p_commandTime[16];
      v14 = p_commandTime[17];
    }
    else
    {
      AIWrapper::AIWrapper(&v56, v6);
      v15 = v56.m_pAI;
      if ( !v56.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_avoidance.cpp", 475, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
        __debugbreak();
      v5 = v15->GetAI(v15);
      v12 = *(float *)(v5 + 2104);
      v13 = *(float *)(v5 + 2108);
      v14 = *(float *)(v5 + 2112);
    }
    v16 = this->m_pAI;
    v17 = (float)(v12 * v12) + (float)(v13 * v13);
    v18 = v6->r.currentOrigin.v[2];
    v19 = v18 - v16->avoidanceBlockedData.blockedEntityPosition.v[2];
    v20 = v17 + (float)(v14 * v14);
    v21 = v6->r.currentOrigin.v[0];
    v22 = v21 - v16->avoidanceBlockedData.blockedEntityPosition.v[0];
    v23 = v6->r.currentOrigin.v[1];
    v24 = v23 - v16->avoidanceBlockedData.blockedEntityPosition.v[1];
    p_number = (float *)&v16->ent->s.number;
    v26 = (float)((float)(v24 * v24) + (float)(v22 * v22)) + (float)(v19 * v19);
    v27 = (float)((float)(v23 - p_number[77]) * (float)(v23 - p_number[77])) + (float)((float)(v21 - p_number[76]) * (float)(v21 - p_number[76]));
    v28 = (float)(v18 - p_number[78]) * (float)(v18 - p_number[78]);
    v29 = v27 + v28;
    v30 = 0;
    v31 = 0;
    if ( v5 )
    {
      v7 = EntHandle::isDefined((EntHandle *)(v5 + 2912)) != 0;
      v32 = this->m_pAI->avoidanceBlockedData.stationaryBlockedEntTimeout - level.time;
      if ( v32 < 0 )
        v32 = 0;
      v4 = v32;
      v30 = v32 <= 0 && !v7;
    }
    if ( AICommonInterface::HasPath(this) )
    {
      this->m_pAI->pNavigator->GetNextCorner(this->m_pAI->pNavigator, &inOutMoveDelta);
      v33 = this->m_pAI;
      v31 = 0;
      ent = v33->ent;
      v36 = LODWORD(inOutMoveDelta.v[0]);
      inOutMoveDelta.v[0] = inOutMoveDelta.v[0] - v33->ent->r.currentOrigin.v[0];
      v35 = inOutMoveDelta.v[0];
      inOutMoveDelta.v[1] = inOutMoveDelta.v[1] - ent->r.currentOrigin.v[1];
      v37 = inOutMoveDelta.v[2] - ent->r.currentOrigin.v[2];
      *(float *)&v36 = fsqrt((float)((float)(v35 * v35) + (float)(inOutMoveDelta.v[1] * inOutMoveDelta.v[1])) + (float)(v37 * v37));
      _XMM4 = v36;
      __asm
      {
        vcmpless xmm0, xmm4, cs:__real@80000000
        vblendvps xmm0, xmm4, xmm1, xmm0
      }
      inOutMoveDelta.v[2] = v37 * (float)(1.0 / *(float *)&_XMM0);
      inOutMoveDelta.v[0] = (float)(1.0 / *(float *)&_XMM0) * inOutMoveDelta.v[0];
      inOutMoveDelta.v[1] = (float)(1.0 / *(float *)&_XMM0) * inOutMoveDelta.v[1];
      if ( (float)((float)((float)(inOutMoveDelta.v[1] * v33->avoidanceBlockedData.nextPathPoint.v[1]) + (float)((float)((float)(1.0 / *(float *)&_XMM0) * v35) * v33->avoidanceBlockedData.nextPathPoint.v[0])) + (float)(inOutMoveDelta.v[2] * v33->avoidanceBlockedData.nextPathPoint.v[2])) < 0.96899998 )
        v31 = 1;
    }
    if ( v30 || (float)(v27 + v28) > 40000.0 || v20 > 100.0 || v26 > 625.0 || v31 )
    {
      v41 = this->m_pAI;
      v42 = v41->avoidanceBlockedData.storedVelocity.v[1];
      storedMoveDistance = v41->avoidanceBlockedData.storedMoveDistance;
      velocity.v[0] = v41->avoidanceBlockedData.storedVelocity.v[0];
      v44 = v41->avoidanceBlockedData.storedVelocity.v[2];
      velocity.v[1] = v42;
      v45 = v41->avoidanceBlockedData.storedMoveDelta.v[0];
      velocity.v[2] = v44;
      v46 = v41->avoidanceBlockedData.storedMoveDelta.v[1];
      inOutMoveDelta.v[0] = v45;
      v47 = v41->avoidanceBlockedData.storedMoveDelta.v[2];
      inOutMoveDelta.v[1] = v46;
      inOutMoveDelta.v[2] = v47;
      AIScriptedInterface::GetAvoidanceDelta(this, storedMoveDistance, 1, &velocity, &inOutMoveDelta);
    }
    v48 = this->m_pAI;
    if ( v48->avoidanceBlockedData.blocked && v48->avoidanceBlockedData.blockedNotifyTime < level.time )
      AIScriptedInterface::FireBlockedNotify(this, v6);
    v49 = DVARBOOL_ai_debugpathblocked;
    if ( !DVARBOOL_ai_debugpathblocked && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugpathblocked") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v49);
    if ( v49->current.enabled )
    {
      v50 = this->m_pAI;
      v51 = v50->ent;
      *(_QWORD *)inOutMoveDelta.v = *(_QWORD *)v50->ent->r.currentOrigin.v;
      inOutMoveDelta.v[2] = v51->r.currentOrigin.v[2] - 8.0;
      v52 = j_va("Current timeout: %d", v4);
      G_Main_AddDebugString(&inOutMoveDelta, &colorLtGrey, 0.40000001, v52);
      inOutMoveDelta.v[2] = inOutMoveDelta.v[2] + -10.0;
      v53 = j_va("Distance blocker has moved: %f", fsqrt(v26));
      G_Main_AddDebugString(&inOutMoveDelta, &colorLtGrey, 0.40000001, v53);
      inOutMoveDelta.v[2] = inOutMoveDelta.v[2] + -12.0;
      v54 = j_va("Distance to blocker: %f", fsqrt(v29));
      G_Main_AddDebugString(&inOutMoveDelta, &colorLtGrey, 0.40000001, v54);
      G_DebugLine(&this->m_pAI->ent->r.currentOrigin, &v6->r.currentOrigin, &colorOrange, 0);
    }
  }
  else if ( m_pAI->avoidanceBlockedData.blocked )
  {
    AIScriptedInterface::ClearBlockingEntity(this);
  }
  v55 = this->m_pAI;
  if ( v55->avoidanceBlockedData.blocked && !v7 && !v55->avoidanceBlockedData.hasNotifiedBlockingEntity && v5 && level.time - v55->avoidanceBlockedData.blockedStartTime >= 3000 )
  {
    AIWrapper::AIWrapper(&v56, v6);
    v56.m_pAI->NotifyBlockingEntity(v56.m_pAI);
    this->m_pAI->avoidanceBlockedData.hasNotifiedBlockingEntity = 1;
  }
}

