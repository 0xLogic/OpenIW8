/*
==============
AI_ScheduledCoverFind
==============
*/

bool __fastcall AI_ScheduledCoverFind(AITask *pTask)
{
  return ?AI_ScheduledCoverFind@@YA_NPEAUAITask@@@Z(pTask);
}

/*
==============
AI_ScheduledPathFind_Get
==============
*/

AITask *__fastcall AI_ScheduledPathFind_Get(int entNum)
{
  return ?AI_ScheduledPathFind_Get@@YAPEAUAITask@@H@Z(entNum);
}

/*
==============
AI_ScheduledCoverFind_Get
==============
*/

AITask *__fastcall AI_ScheduledCoverFind_Get(int entNum)
{
  return ?AI_ScheduledCoverFind_Get@@YAPEAUAITask@@H@Z(entNum);
}

/*
==============
AI_StringToFacialIndex
==============
*/

AIFacialIndex __fastcall AI_StringToFacialIndex(const scr_string_t facial)
{
  return ?AI_StringToFacialIndex@@YA?AW4AIFacialIndex@@W4scr_string_t@@@Z(facial);
}

/*
==============
AI_ScheduledThreatUpdate
==============
*/

bool __fastcall AI_ScheduledThreatUpdate(AITask *pTask)
{
  return ?AI_ScheduledThreatUpdate@@YA_NPEAUAITask@@@Z(pTask);
}

/*
==============
AI_ScheduledCoverFind_Reset
==============
*/

void __fastcall AI_ScheduledCoverFind_Reset(AITask_CoverFind *pTask)
{
  ?AI_ScheduledCoverFind_Reset@@YAXPEAUAITask_CoverFind@@@Z(pTask);
}

/*
==============
AI_StringToGunPose
==============
*/

AIGunAdditiveOptions __fastcall AI_StringToGunPose(const scr_string_t pose)
{
  return ?AI_StringToGunPose@@YA?AW4AIGunAdditiveOptions@@W4scr_string_t@@@Z(pose);
}

/*
==============
AI_GetBlackboardID
==============
*/

unsigned int __fastcall AI_GetBlackboardID(int entNum)
{
  return ?AI_GetBlackboardID@@YAIH@Z(entNum);
}

/*
==============
AI_StringToArcOverridePriority
==============
*/

ArcOverridePriority __fastcall AI_StringToArcOverridePriority(const scr_string_t arcOverridePriority)
{
  return ?AI_StringToArcOverridePriority@@YA?AW4ArcOverridePriority@@W4scr_string_t@@@Z(arcOverridePriority);
}

/*
==============
AIScriptedInterface::SetDefaults
==============
*/

void __fastcall AIScriptedInterface::SetDefaults(AIScriptedInterface *this)
{
  ?SetDefaults@AIScriptedInterface@@UEBAXXZ(this);
}

/*
==============
AI_GunPoseToString
==============
*/

scr_string_t __fastcall AI_GunPoseToString(AIGunAdditiveOptions pose)
{
  return ?AI_GunPoseToString@@YA?AW4scr_string_t@@W4AIGunAdditiveOptions@@@Z(pose);
}

/*
==============
AI_GetAIScripted
==============
*/

ai_scripted_t *__fastcall AI_GetAIScripted(const gentity_s *ent)
{
  return ?AI_GetAIScripted@@YAPEAUai_scripted_t@@PEBUgentity_s@@@Z(ent);
}

/*
==============
AI_FacialIndexToString
==============
*/

scr_string_t __fastcall AI_FacialIndexToString(AIFacialIndex facial)
{
  return ?AI_FacialIndexToString@@YA?AW4scr_string_t@@W4AIFacialIndex@@@Z(facial);
}

/*
==============
AI_ScheduledThreatUpdate_Get
==============
*/

AITask *__fastcall AI_ScheduledThreatUpdate_Get(int entNum)
{
  return ?AI_ScheduledThreatUpdate_Get@@YAPEAUAITask@@H@Z(entNum);
}

/*
==============
AI_ScheduledPathFind
==============
*/

bool __fastcall AI_ScheduledPathFind(AITask *pTask)
{
  return ?AI_ScheduledPathFind@@YA_NPEAUAITask@@@Z(pTask);
}

/*
==============
AI_FacialIndexToString
==============
*/
__int64 AI_FacialIndexToString(AIFacialIndex facial)
{
  unsigned __int8 v1; 
  int v3; 
  int v4; 

  v1 = facial;
  if ( (unsigned __int8)facial >= (unsigned int)(LONG_DOUBLE|LONG_LONG) )
  {
    v4 = 12;
    v3 = (unsigned __int8)facial;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted.cpp", 395, ASSERT_TYPE_ASSERT, "(unsigned)( facial ) < (unsigned)( AIFacialIndex::COUNT )", "facial doesn't index AIFacialIndex::COUNT\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  return *(unsigned int *)AIFacialStrings[v1];
}

/*
==============
AI_GetAIScripted
==============
*/
actor_s *AI_GetAIScripted(const gentity_s *ent)
{
  actor_s *result; 

  if ( !ent )
    return 0i64;
  result = ent->actor;
  if ( result )
    return result;
  if ( SV_IsAgent(ent->s.number) && SV_Agent_IsScripted(ent->s.number) )
    return (actor_s *)Agent_GetAIScriptedData(ent);
  else
    return 0i64;
}

/*
==============
AI_GetBlackboardID
==============
*/
unsigned int AI_GetBlackboardID(int entNum)
{
  scrContext_t *v2; 
  int v5; 

  if ( (unsigned int)entNum >= 0x800 )
  {
    v5 = 2048;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted.cpp", 329, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entNum, v5) )
      __debugbreak();
  }
  v2 = ScriptContext_Server();
  return Scr_GetEntityId(v2, entNum, ENTITY_CLASS_BLACKBOARD, LOCAL_CLIENT_0);
}

/*
==============
AI_GunPoseToString
==============
*/
__int64 AI_GunPoseToString(AIGunAdditiveOptions pose)
{
  if ( pose == 5 )
    return 0i64;
  else
    return *(unsigned int *)AIGunPoseStrings[(unsigned __int8)pose];
}

/*
==============
AI_ScheduledCoverFind
==============
*/
char AI_ScheduledCoverFind(AITask *pTask)
{
  __int64 entNum; 
  __int64 v3; 
  gentity_s *v4; 
  AIScriptedInterface *m_pAI; 
  pathnode_t *updated; 
  tacpoint_t *v8; 
  pathnode_t *v9; 
  tacpoint_t *v10; 
  __int64 v11; 
  AIWrapper v12; 
  tacpoint_t *ppOutCoverTacPoint; 

  if ( !pTask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted.cpp", 440, ASSERT_TYPE_ASSERT, "( pTask )", (const char *)&queryFormat, "pTask") )
    __debugbreak();
  entNum = pTask->entNum;
  if ( (unsigned int)entNum >= 0x800 )
  {
    LODWORD(v11) = pTask->entNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v11, 2048) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[entNum].r.isInUse != g_entityIsInUse[entNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[entNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted.cpp", 443, ASSERT_TYPE_ASSERT, "( G_IsEntityInUse( pCoverTask->entNum ) )", (const char *)&queryFormat, "G_IsEntityInUse( pCoverTask->entNum )") )
    __debugbreak();
  v3 = pTask->entNum;
  v4 = &g_entities[v3];
  if ( v4->health <= 0 )
    return 0;
  AIWrapper::AIWrapper(&v12, &g_entities[v3]);
  m_pAI = v12.m_pAI;
  if ( !v12.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted.cpp", 449, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  ppOutCoverTacPoint = NULL;
  updated = AIScriptedInterface::UpdateCover(m_pAI, (const tacpoint_t **)&ppOutCoverTacPoint);
  v8 = ppOutCoverTacPoint;
  *(_QWORD *)pTask[1].status = updated;
  tacpoint_ref_t::SetPoint((tacpoint_ref_t *)&pTask[1].timestamp, v8);
  v9 = *(pathnode_t **)pTask[1].status;
  if ( v9 )
  {
    Sentient_ClaimNode(v4->sentient, v9);
    v10 = NULL;
  }
  else
  {
    v10 = ppOutCoverTacPoint;
  }
  AIScriptedInterface::SetCoverTacPoint(m_pAI, v10);
  return 1;
}

/*
==============
AI_ScheduledCoverFind_Get
==============
*/
AITask_CoverFind *AI_ScheduledCoverFind_Get(int entNum)
{
  __int64 v1; 
  gentity_s *v2; 
  actor_s *actor; 
  int v6; 

  v1 = entNum;
  if ( (unsigned int)entNum >= 0x800 )
  {
    v6 = 2048;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted.cpp", 432, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entNum, v6) )
      __debugbreak();
  }
  v2 = &g_entities[v1];
  if ( !v2 )
  {
LABEL_9:
    actor = NULL;
    return &actor->coverFindTask;
  }
  actor = v2->actor;
  if ( !actor )
  {
    if ( SV_IsAgent(v2->s.number) && SV_Agent_IsScripted(v2->s.number) )
      return &Agent_GetAIScriptedData(v2)->coverFindTask;
    goto LABEL_9;
  }
  return &actor->coverFindTask;
}

/*
==============
AI_ScheduledCoverFind_Reset
==============
*/
void AI_ScheduledCoverFind_Reset(AITask_CoverFind *pTask)
{
  pTask->pBestNode = NULL;
  tacpoint_ref_t::SetPoint(&pTask->coverTac, NULL);
  pTask->status[0] = 0;
}

/*
==============
AI_ScheduledPathFind
==============
*/
char AI_ScheduledPathFind(AITask *pTask)
{
  __int64 entNum; 
  gentity_s *v3; 
  AIScriptedInterface *m_pAI; 
  __int64 bHandleBadPath; 
  AIWrapper v7; 

  if ( !pTask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted.cpp", 486, ASSERT_TYPE_ASSERT, "( pTask )", (const char *)&queryFormat, "pTask") )
    __debugbreak();
  entNum = pTask->entNum;
  v3 = &g_entities[entNum];
  if ( (unsigned int)entNum >= 0x800 )
  {
    LODWORD(bHandleBadPath) = pTask->entNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", bHandleBadPath, 2048) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[entNum].r.isInUse != g_entityIsInUse[entNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[entNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted.cpp", 490, ASSERT_TYPE_ASSERT, "( G_IsEntityInUse( pPathTask->entNum ) )", (const char *)&queryFormat, "G_IsEntityInUse( pPathTask->entNum )") )
    __debugbreak();
  if ( v3->health <= 0 )
    return 0;
  AIWrapper::AIWrapper(&v7, v3);
  m_pAI = v7.m_pAI;
  if ( !v7.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted.cpp", 495, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  AIScriptedInterface::FindPathInternal(m_pAI, (const vec3_t *)&pTask[1], (const pathnode_t *)pTask[1].pNext, (bool)pTask[1].pPrev, BYTE1(pTask[1].pPrev), BYTE2(pTask[1].pPrev));
  BYTE3(pTask[1].pPrev) = AICommonInterface::HasPath(m_pAI);
  return 1;
}

/*
==============
AI_ScheduledPathFind_Get
==============
*/
AITask_PathFind *AI_ScheduledPathFind_Get(int entNum)
{
  __int64 v1; 
  gentity_s *v2; 
  actor_s *actor; 
  int v6; 

  v1 = entNum;
  if ( (unsigned int)entNum >= 0x800 )
  {
    v6 = 2048;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted.cpp", 478, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entNum, v6) )
      __debugbreak();
  }
  v2 = &g_entities[v1];
  if ( !v2 )
  {
LABEL_9:
    actor = NULL;
    return &actor->pathFindTask;
  }
  actor = v2->actor;
  if ( !actor )
  {
    if ( SV_IsAgent(v2->s.number) && SV_Agent_IsScripted(v2->s.number) )
      return &Agent_GetAIScriptedData(v2)->pathFindTask;
    goto LABEL_9;
  }
  return &actor->pathFindTask;
}

/*
==============
AI_ScheduledThreatUpdate
==============
*/
char AI_ScheduledThreatUpdate(AITask *pTask)
{
  __int64 entNum; 
  __int64 v3; 
  __int64 v4; 
  gentity_s *v5; 
  AIScriptedInterface *m_pAI; 
  __int64 v8; 
  AIWrapper v9; 

  if ( !pTask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted.cpp", 505, ASSERT_TYPE_ASSERT, "( pTask )", (const char *)&queryFormat, "pTask") )
    __debugbreak();
  entNum = pTask->entNum;
  v3 = entNum;
  v4 = entNum;
  v5 = &g_entities[entNum];
  if ( (unsigned int)entNum >= 0x800 )
  {
    LODWORD(v8) = entNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v8, 2048) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[v4].r.isInUse != g_entityIsInUse[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted.cpp", 509, ASSERT_TYPE_ASSERT, "( G_IsEntityInUse( pThreatTask->entNum ) )", (const char *)&queryFormat, "G_IsEntityInUse( pThreatTask->entNum )") )
    __debugbreak();
  if ( v5->health <= 0 )
    return 0;
  AIWrapper::AIWrapper(&v9, v5);
  m_pAI = v9.m_pAI;
  if ( !v9.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted.cpp", 514, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  AICommonInterface::UpdateThreat_Internal(m_pAI);
  return 1;
}

/*
==============
AI_ScheduledThreatUpdate_Get
==============
*/
AITask_ThreatUpdate *AI_ScheduledThreatUpdate_Get(int entNum)
{
  __int64 v1; 
  gentity_s *v2; 
  actor_s *actor; 
  int v6; 

  v1 = entNum;
  if ( (unsigned int)entNum >= 0x800 )
  {
    v6 = 2048;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted.cpp", 523, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entNum, v6) )
      __debugbreak();
  }
  v2 = &g_entities[v1];
  if ( !v2 )
  {
LABEL_9:
    actor = NULL;
    return &actor->threatUpdateTask;
  }
  actor = v2->actor;
  if ( !actor )
  {
    if ( SV_IsAgent(v2->s.number) && SV_Agent_IsScripted(v2->s.number) )
      return &Agent_GetAIScriptedData(v2)->threatUpdateTask;
    goto LABEL_9;
  }
  return &actor->threatUpdateTask;
}

/*
==============
AI_StringToArcOverridePriority
==============
*/
char AI_StringToArcOverridePriority(const scr_string_t arcOverridePriority)
{
  if ( arcOverridePriority == scr_const.base )
    return 0;
  if ( arcOverridePriority == scr_const._default )
    return 1;
  if ( arcOverridePriority == scr_const.weapon )
    return 2;
  if ( arcOverridePriority == scr_const.demeanor )
    return 3;
  if ( arcOverridePriority == scr_const.vehicle )
    return 4;
  return (arcOverridePriority != scr_const.animscript) + 5;
}

/*
==============
AI_StringToFacialIndex
==============
*/
char AI_StringToFacialIndex(const scr_string_t facial)
{
  int v1; 

  v1 = 0;
  while ( *AIFacialStrings[v1] != facial )
  {
    if ( ++v1 >= 12 )
    {
      LOBYTE(v1) = 12;
      return v1;
    }
  }
  return v1;
}

/*
==============
AI_StringToGunPose
==============
*/
AIGunAdditiveOptions AI_StringToGunPose(const scr_string_t pose)
{
  int v1; 

  v1 = 0;
  while ( *AIGunPoseStrings[v1] != pose )
  {
    if ( ++v1 >= 5 )
    {
      LOBYTE(v1) = 5;
      return (char)v1;
    }
  }
  return (char)v1;
}

/*
==============
AIScriptedInterface::SetDefaults
==============
*/
void AIScriptedInterface::SetDefaults(AIScriptedInterface *this)
{
  const dvar_t *v2; 
  ai_scripted_t *m_pAI; 
  gentity_s *ent; 
  ai_scripted_t *v8; 
  unsigned __int16 number; 
  __int64 v10; 
  unsigned int v11; 
  __int64 v12; 
  bool v14; 
  __int64 v16; 
  ai_script_goal_t *v18; 
  bool v19; 
  ai_scripted_t *v25; 
  ai_scripted_t *v26; 
  ai_scripted_t *v27; 
  const dvar_t *v28; 
  ai_scripted_t *v29; 
  ai_scripted_t *v30; 
  ai_scripted_t *v31; 
  ai_scripted_t *v32; 
  ai_scripted_t *v36; 
  __int64 v37; 
  __int64 v38; 

  if ( !this->m_pAI->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted.cpp", 111, ASSERT_TYPE_ASSERT, "( m_pAI->sentientInfo != nullptr )", (const char *)&queryFormat, "m_pAI->sentientInfo != nullptr") )
    __debugbreak();
  this->m_pAI->sight.fovDot = 0.0099999998;
  this->m_pAI->sight.fovDotBusy = 0.574;
  this->m_pAI->sight.fovDotZ = 0.0;
  this->m_pAI->sight.fMaxSightDistSqrd = 67108864.0;
  this->m_pAI->sight.fovDotPeriph = 0.0099999998;
  this->m_pAI->sight.fovPeriphMaxSightDistSq = 16384.0;
  this->m_pAI->sight.latency = 100;
  this->m_pAI->suppression.ignoreSuppression = 0;
  this->m_pAI->suppression.suppressionWait = 2000;
  this->m_pAI->suppression.suppressionDuration = 5000;
  this->m_pAI->suppression.suppressionStartTime = 0;
  v2 = DVARFLT_ai_suppression_decrement;
  if ( !DVARFLT_ai_suppression_decrement && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_suppression_decrement") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  LODWORD(this->m_pAI->suppression.suppressionDecrement) = v2->current.integer;
  this->m_pAI->maxFaceEnemyDist = 512.0;
  this->m_pAI->maxFaceNewEnemyDist = 768.0;
  this->m_pAI->maxFaceEnemyDistSlow = 512.0;
  this->m_pAI->orientation.cautiousLookaheadDist = 56.0;
  this->m_pAI->threat.iPacifistWait = 20000;
  this->m_pAI->navigation.fWalkDistFacingMotion = 64.0;
  this->m_pAI->navigation.fWalkDist = 256.0;
  this->m_pAI->navigation.badPlaceAwareness = 0.75;
  this->m_pAI->grenade.grenadeAwareness = 0.33000001;
  this->m_pAI->eAllowedStances = STANCE_ANY;
  AIScriptedInterface::SetCurrentStance(this, STANCE_STAND);
  __asm { vmovss  xmm0, cs:__real@3f800000 }
  this->m_pAI->shoot.accuracy = 0.2;
  this->m_pAI->shoot.playerSightAccuracy = 1.0;
  this->m_pAI->shoot.debugLastAccuracy = -6969.0;
  __asm
  {
    vdivss  xmm1, xmm0, dword ptr [rcx+430h]
    vcvttss2si rax, xmm1
  }
  this->m_pAI->shoot.missCount = _RAX;
  m_pAI = this->m_pAI;
  ent = m_pAI->ent;
  m_pAI->scriptGoal.pos.v[0] = m_pAI->ent->r.currentOrigin.v[0];
  m_pAI->scriptGoal.pos.v[1] = ent->r.currentOrigin.v[1];
  m_pAI->scriptGoal.pos.v[2] = ent->r.currentOrigin.v[2];
  if ( this->m_pAI->scriptGoal.node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted.cpp", 148, ASSERT_TYPE_ASSERT, "( !m_pAI->scriptGoal.node )", (const char *)&queryFormat, "!m_pAI->scriptGoal.node") )
    __debugbreak();
  v8 = this->m_pAI;
  number = v8->scriptGoal.hVolume.number;
  if ( number )
  {
    v10 = number;
    v11 = number - 1;
    if ( v11 >= 0x800 )
    {
      LODWORD(v38) = 2048;
      LODWORD(v37) = v11;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v37, v38) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    v12 = v10 - 1;
    if ( g_entities[v12].r.isInUse != g_entityIsInUse[v12] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( !g_entityIsInUse[v12] )
    {
      LODWORD(v38) = v8->scriptGoal.hVolume.number - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v38) )
        __debugbreak();
    }
    if ( v8->scriptGoal.hVolume.number && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted.cpp", 149, ASSERT_TYPE_ASSERT, "( !m_pAI->scriptGoal.hVolume.isDefined() )", (const char *)&queryFormat, "!m_pAI->scriptGoal.hVolume.isDefined()") )
      __debugbreak();
  }
  __asm { vxorps  xmm1, xmm1, xmm1; radius }
  AICommonInterface::SetGoalRadius(&this->m_pAI->scriptGoal, *(float *)&_XMM1);
  v14 = AICommonInterface::Use3DPathing(this);
  __asm { vxorps  xmm1, xmm1, xmm1; height }
  AICommonInterface::SetGoalHeight(&this->m_pAI->scriptGoal, *(float *)&_XMM1, !v14);
  v16 = 2i64;
  this->m_pAI->scriptGoal.entUpdateInterval = 2500;
  this->m_pAI->scriptGoal.bValid = 1;
  do
  {
    __asm { vxorps  xmm1, xmm1, xmm1; radius }
    v18 = &this->m_pAI->btGoals[v16];
    AICommonInterface::SetGoalRadius(v18, *(float *)&_XMM1);
    v19 = AICommonInterface::Use3DPathing(this);
    __asm { vxorps  xmm1, xmm1, xmm1; height }
    AICommonInterface::SetGoalHeight(v18, *(float *)&_XMM1, !v19);
    --v16;
    v18->entUpdateInterval = 2500;
    v18->bValid = 0;
  }
  while ( v16 >= 0 );
  _RAX = this->m_pAI;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax+288h]
    vmovups ymmword ptr [rax+258h], ymm0
    vmovsd  xmm1, qword ptr [rax+2A8h]
    vmovsd  qword ptr [rax+278h], xmm1
  }
  this->m_pAI->nodeSelect.keepClaimedNode = 0;
  this->m_pAI->nodeSelect.keepClaimedNodeIfValid = 0;
  this->m_pAI->nodeSelect.dangerReactGoalTime = 0x7FFFFFFF;
  this->m_pAI->nodeSelect.coverSearchInterval = 2000;
  this->m_pAI->nodeSelect.coverSearchIntervalAfterFailure = 1000;
  this->m_pAI->fixedNode = 0;
  this->m_pAI->fixedNodeSafeRadius = 64.0;
  this->m_pAI->combat.alertLevel = AI_ALERTNESS_NONCOMBAT;
  this->m_pAI->combat.frontShieldAngleCos = 1.0;
  this->m_pAI->combat.combatMode = AI_COMBAT_COVER;
  this->m_pAI->combat.shootStyleOverride[0] = 7;
  this->m_pAI->gunPoseOverride = 5;
  this->m_pAI->gunPoseOverride_internal = 5;
  this->m_pAI->maxRunNGunAngle = 180.0;
  this->m_pAI->runNGunTime = 0;
  this->m_pAI->coverInfo.nodeID = -1;
  this->m_pAI->coverInfo.prevNodeID = -1;
  this->m_pAI->melee.maxZDiff = 36;
  this->m_pAI->melee.chargeDist = 160;
  this->m_pAI->melee.chargeDistVsPlayer = 200;
  this->m_pAI->bArrivalFailed = 0;
  this->m_pAI->bAllowStrafe = 1;
  this->m_pAI->bStrafeReverse = 0;
  this->m_pAI->fixedNodeNudged = 0;
  this->m_pAI->painDeath.allowPain = 1;
  this->m_pAI->painDeath.allowPainInternal = 1;
  this->m_pAI->painDeath.allowDeath = 0;
  this->m_pAI->species = AI_SPECIES_HUMAN;
  this->m_pAI->safeToChangeScript = 1;
  this->m_pAI->pushable = 1;
  this->m_pAI->fallDeathSpeed = 0.0;
  this->m_pAI->dodgeMode = NONE;
  this->m_pAI->noDodgeMove = 0;
  this->m_pAI->goalPosChanged = 0;
  this->m_pAI->gunDiscipline = 1;
  this->m_pAI->noTargetTimeToGunDown = 0;
  this->m_pAI->avoidance.avoidanceEnabled = 1;
  this->m_pAI->avoidance.reciprocality = 0.5;
  this->m_pAI->avoidance.useORCAAvoidance = 1;
  this->m_pAI->avoidance.pushPlayerEnabled = 0;
  this->m_pAI->avoidance.othersAvoidMe = 1;
  this->m_pAI->avoidance.maxSpeed = 300.0;
  this->m_pAI->avoidance.minSpeed = 30.0;
  _RAX = this->m_pAI;
  __asm
  {
    vmovss  xmm0, dword ptr cs:?actorBox@@3UBounds@@B.halfSize; Bounds const actorBox
    vmovss  dword ptr [rax+1C8h], xmm0
  }
  this->m_pAI->avoidance_maxSpeed = -1.0;
  v25 = this->m_pAI;
  v25->avoidance.avoidanceBoundsHalfSize.v[0] = 300.0;
  v25->avoidance.avoidanceBoundsHalfSize.v[1] = 300.0;
  v25->avoidance.avoidanceBoundsHalfSize.v[2] = 80.0;
  this->m_pAI->avoidance.lookAheadTime = 1.0;
  v26 = this->m_pAI;
  *(_QWORD *)v26->avoidanceBlockedData.storedVelocity.v = 0i64;
  v26->avoidanceBlockedData.storedVelocity.v[2] = 0.0;
  v27 = this->m_pAI;
  *(_QWORD *)v27->avoidanceBlockedData.storedMoveDelta.v = 0i64;
  v27->avoidanceBlockedData.storedMoveDelta.v[2] = 0.0;
  this->m_pAI->avoidanceBlockedData.blocked = 0;
  this->m_pAI->avoidanceBlockedData.enabled = 1;
  this->m_pAI->avoidanceBlockedData.processingBlocking = 0;
  this->m_pAI->avoidanceBlockedData.hasNotifiedBlockingEntity = 0;
  this->m_pAI->avoidanceBlockedData.storedMoveDistance = 0.0;
  this->m_pAI->avoidanceBlockedData.stationaryBlockedEntTimeout = 0;
  this->m_pAI->avoidanceBlockedData.blockedStartTime = 0;
  this->m_pAI->animData.desiredSpeed = 170.0;
  this->m_pAI->script_desiredSpeed = 170.0;
  this->m_pAI->script_desiredSpeedEnabled = 0;
  this->m_pAI->pre_avoidance_desiredSpeed = 170.0;
  this->m_pAI->path_maxSpeed = -1.0;
  this->m_pAI->turnThreshold = 45.0;
  this->m_pAI->turnRate = 0.30000001;
  this->m_pAI->pathSmoothMultiplier = 1.0;
  this->m_pAI->script_pushable = 1;
  this->m_pAI->animData.strafeForwardIndex[0] = 1;
  this->m_pAI->speedScaleMultiplier = 1.0;
  this->m_pAI->bAllowSpeedUpWhenCombatHot = 1;
  this->m_pAI->inTightQuarters = 0;
  this->m_pAI->sharpTurnSpeedScalingEnabled = 1;
  v28 = DCONST_DVARFLT_ai_minCornerSpeedScalingMultiplier;
  if ( !DCONST_DVARFLT_ai_minCornerSpeedScalingMultiplier && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_minCornerSpeedScalingMultiplier") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v28);
  LODWORD(this->m_pAI->minCornerSpeedScalingMultiplier) = v28->current.integer;
  this->m_pAI->isBlockingOtherAI = 0;
  this->m_pAI->squadNumber = -1;
  this->m_pAI->squadMovementAllowed = 0;
  EntHandle::setEnt(&this->m_pAI->coverSelectionFocusEnt, NULL);
  this->m_pAI->lastCoverTime = 0;
  this->m_pAI->bPredictedFaceMotionChanged = 0;
  this->InitBlackboard(this);
  v29 = this->m_pAI;
  v29->coverFindTask.entNum = v29->ent->s.number;
  v29->coverFindTask.status[0] = 0;
  v30 = this->m_pAI;
  v30->coverFindTask.pBestNode = NULL;
  tacpoint_ref_t::SetPoint(&v30->coverFindTask.coverTac, NULL);
  v30->coverFindTask.status[0] = 0;
  v31 = this->m_pAI;
  v31->pathFindTask.entNum = v31->ent->s.number;
  v31->pathFindTask.status[0] = 0;
  v32 = this->m_pAI;
  v32->threatUpdateTask.entNum = v32->ent->s.number;
  v32->threatUpdateTask.status[0] = 0;
  AIScriptedInterface::InitProneInfo(this);
  this->m_pAI->prone.fInvProneAnimLowPitch = 0.0;
  this->m_pAI->prone.fInvProneAnimHighPitch = 0.0;
  this->m_pAI->prone.fProneLastDiff = 0.0;
  this->m_pAI->sharpTurnLookaheadDist = 36;
  this->m_pAI->postSharpTurnLookaheadDist = 64;
  this->m_pAI->sharpTurnTooCloseToDestDist = 64;
  this->m_pAI->bDontAvoidPlayer = 0;
  this->m_pAI->ignoreForFixedNodeSafeCheck = 0;
  this->m_pAI->ignoreTriggers = 0;
  this->m_pAI->fInterval = 80.0;
  this->m_pAI->unitType = AI_UNITTYPE_SOLDIER;
  this->m_pAI->threat.newEnemyReactionDistSq = 262144.0;
  this->m_pAI->threat.bCanAcquireNearbyTacVisEnemies = 1;
  this->m_pAI->traverseName = 0;
  this->m_pAI->bContinuousFire = 0;
  EntHandle::setEnt(&this->m_pAI->pBeamTargetEnt, NULL);
  EntHandle::setEnt(&this->m_pAI->ignoreAvoidanceEnt, NULL);
  this->m_pAI->baseArchetype = 0;
  this->m_pAI->changeArchetype = 0;
  this->m_pAI->orientation.sharpTurnForceUseVelocity = 0;
  LOBYTE(this->m_pAI->postGoldPadding) &= ~1u;
  LOBYTE(this->m_pAI->postGoldPadding) |= 2u;
  _RDI = this->m_pAI->ent;
  AIScriptedInterface::InitLookAt(this);
  this->SetDesiredBodyAngles(this, &this->m_pAI->CodeOrient, &_RDI->r.currentAngles, 0);
  G_SetOriginAndAngle(_RDI, &_RDI->r.currentOrigin, &_RDI->r.currentAngles, 1, 1);
  __asm
  {
    vmovss  xmm2, dword ptr [rdi+140h]; fYaw
    vmovss  xmm1, dword ptr [rdi+13Ch]; fPitch
  }
  AIScriptedInterface::SetLookAngles(this, *(const float *)&_XMM1, *(const float *)&_XMM2);
  this->m_pAI->orientation.vDesiredAngles.v[1] = _RDI->r.currentAngles.v[1];
  AIScriptedInterface::ClearMoveHistory(this);
  AICommonInterface::InitThreatUpdateInterval(this);
  v36 = this->m_pAI;
  *(_QWORD *)&v36->arrivalInfo.arriving = 0i64;
  *(_QWORD *)&v36->arrivalInfo.scriptedArrivalEnt.number = 0i64;
  *(_QWORD *)&v36->arrivalInfo.customData.angles.y = 0i64;
  *(_QWORD *)&v36->arrivalInfo.customData.bOverrideAngles = 0i64;
  *(_QWORD *)&v36->arrivalInfo.offsetIncrement.y = 0i64;
  *(_QWORD *)&v36->arrivalInfo.offsetAdjustCount = 0i64;
  *(_QWORD *)&v36->arrivalInfo.arrivalPitch = 0i64;
  *(_QWORD *)v36->arrivalInfo.targetAngles.v = 0i64;
  *(_QWORD *)&v36->arrivalInfo.targetAngles.z = 0i64;
}

