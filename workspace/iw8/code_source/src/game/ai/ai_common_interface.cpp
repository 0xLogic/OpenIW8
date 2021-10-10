/*
==============
AICommonInterface::ThreatFromKilledNearbyTeammate
==============
*/

int __fastcall AICommonInterface::ThreatFromKilledNearbyTeammate(AICommonInterface *this, sentient_s *enemy, const EnemySelector *enemySelector)
{
  return ?ThreatFromKilledNearbyTeammate@AICommonInterface@@UEBAHPEAUsentient_s@@PEBUEnemySelector@@@Z(this, enemy, enemySelector);
}

/*
==============
AICommonInterface::EnterCombatState
==============
*/

void __fastcall AICommonInterface::EnterCombatState(AICommonInterface *this)
{
  ?EnterCombatState@AICommonInterface@@UEBAXXZ(this);
}

/*
==============
AICommonInterface::ReactToTeamDeath
==============
*/

void __fastcall AICommonInterface::ReactToTeamDeath(AICommonInterface *this, sentient_s *pCasualty, sentient_s *pAttacker)
{
  ?ReactToTeamDeath@AICommonInterface@@UEBAXPEAUsentient_s@@0@Z(this, pCasualty, pAttacker);
}

/*
==============
AICommonInterface::GetNodeAngleYawOffset
==============
*/

double __fastcall AICommonInterface::GetNodeAngleYawOffset(AICommonInterface *this, const pathnode_t *node)
{
  double result; 

  *(float *)&result = ?GetNodeAngleYawOffset@AICommonInterface@@UEBAMPEBUpathnode_t@@@Z(this, node);
  return result;
}

/*
==============
AICommonInterface::CheckSurprisedBySentient
==============
*/

void __fastcall AICommonInterface::CheckSurprisedBySentient(AICommonInterface *this, sentient_s *other)
{
  ?CheckSurprisedBySentient@AICommonInterface@@UEBAXPEAUsentient_s@@@Z(this, other);
}

/*
==============
AICommonInterface::GetEntity
==============
*/

gentity_s *__fastcall AICommonInterface::GetEntity(AICommonInterface *this)
{
  return ?GetEntity@AICommonInterface@@UEBAPEAUgentity_s@@XZ(this);
}

/*
==============
AICommonInterface::IsValidTarget
==============
*/

bool __fastcall AICommonInterface::IsValidTarget(AICommonInterface *this, gentity_s *ent)
{
  return ?IsValidTarget@AICommonInterface@@UEBA_NPEAUgentity_s@@@Z(this, ent);
}

/*
==============
AICommonInterface::CheckAvoidTarget
==============
*/

bool __fastcall AICommonInterface::CheckAvoidTarget(AICommonInterface *this, sentient_s *enemy)
{
  return ?CheckAvoidTarget@AICommonInterface@@UEBA_NPEAUsentient_s@@@Z(this, enemy);
}

/*
==============
AICommonInterface::IsAlive
==============
*/

bool __fastcall AICommonInterface::IsAlive(AICommonInterface *this)
{
  return ?IsAlive@AICommonInterface@@UEBA_NXZ(this);
}

/*
==============
AICommonInterface::GetNavigator
==============
*/

AINavigator *__fastcall AICommonInterface::GetNavigator(AICommonInterface *this)
{
  return ?GetNavigator@AICommonInterface@@QEBAPEAVAINavigator@@XZ(this);
}

/*
==============
AICommonInterface::GetScarinessForDistance
==============
*/

double __fastcall AICommonInterface::GetScarinessForDistance(AICommonInterface *this, sentient_s *enemy, float fDist)
{
  double result; 

  *(float *)&result = ?GetScarinessForDistance@AICommonInterface@@UEBAMPEAUsentient_s@@M@Z(this, enemy, fDist);
  return result;
}

/*
==============
AICommonInterface::GetDefaultScarinessForDistance
==============
*/

double __fastcall AICommonInterface::GetDefaultScarinessForDistance(sentient_s *enemy, float fDist)
{
  double result; 

  *(float *)&result = ?GetDefaultScarinessForDistance@AICommonInterface@@SAMPEAUsentient_s@@M@Z(enemy, fDist);
  return result;
}

/*
==============
AICommonInterface::EnterAlertState
==============
*/

void __fastcall AICommonInterface::EnterAlertState(AICommonInterface *this)
{
  ?EnterAlertState@AICommonInterface@@UEBAXXZ(this);
}

/*
==============
AICommonInterface::StoreSentientThreat
==============
*/

void __fastcall AICommonInterface::StoreSentientThreat(AICommonInterface *this, sentient_s *enemy, int threat)
{
  ?StoreSentientThreat@AICommonInterface@@UEBAXPEAUsentient_s@@H@Z(this, enemy, threat);
}

/*
==============
AICommonInterface::ThreatCoveringFire
==============
*/

int __fastcall AICommonInterface::ThreatCoveringFire(AICommonInterface *this, sentient_s *enemy, const EnemySelector *enemySelector)
{
  return ?ThreatCoveringFire@AICommonInterface@@UEBAHPEAUsentient_s@@PEBUEnemySelector@@@Z(this, enemy, enemySelector);
}

/*
==============
AICommonInterface::ThreatFromPlayerAttackedMeRecently
==============
*/

int __fastcall AICommonInterface::ThreatFromPlayerAttackedMeRecently(AICommonInterface *this, sentient_s *enemy, int lastAttackedTime, const EnemySelector *enemySelector)
{
  return ?ThreatFromPlayerAttackedMeRecently@AICommonInterface@@UEBAHPEAUsentient_s@@HPEBUEnemySelector@@@Z(this, enemy, lastAttackedTime, enemySelector);
}

/*
==============
AICommonInterface::AddSuppressionLine
==============
*/

void __fastcall AICommonInterface::AddSuppressionLine(AICommonInterface *this, sentient_s *pSuppressor, const vec3_t *vStart, const vec3_t *vEnd, const vec3_t *vClosest)
{
  ?AddSuppressionLine@AICommonInterface@@UEBAXPEAUsentient_s@@AEBTvec3_t@@11@Z(this, pSuppressor, vStart, vEnd, vClosest);
}

/*
==============
AICommonInterface::ShouldDoFOVCheck
==============
*/

bool __fastcall AICommonInterface::ShouldDoFOVCheck(AICommonInterface *this, sentient_s *sentient)
{
  return ?ShouldDoFOVCheck@AICommonInterface@@UEBA_NPEAUsentient_s@@@Z(this, sentient);
}

/*
==============
AICommonInterface::GetTargetSentient
==============
*/

sentient_s *__fastcall AICommonInterface::GetTargetSentient(AICommonInterface *this)
{
  return ?GetTargetSentient@AICommonInterface@@QEBAPEAUsentient_s@@XZ(this);
}

/*
==============
AICommonInterface::Cover_IsValidCover
==============
*/

bool __fastcall AICommonInterface::Cover_IsValidCover(AICommonInterface *this, const pathnode_t *node, bool isForNewCoverSearch)
{
  return ?Cover_IsValidCover@AICommonInterface@@UEBA_NPEBUpathnode_t@@_N@Z(this, node, isForNewCoverSearch);
}

/*
==============
AICommonInterface::ThreatBehindEnemyLines
==============
*/

int __fastcall AICommonInterface::ThreatBehindEnemyLines(AICommonInterface *this, sentient_s *enemy, const vec3_t *combatLinePos, const vec3_t *combatLineAllyDir, const EnemySelector *enemySelector)
{
  return ?ThreatBehindEnemyLines@AICommonInterface@@UEBAHPEAUsentient_s@@AEBTvec3_t@@1PEBUEnemySelector@@@Z(this, enemy, combatLinePos, combatLineAllyDir, enemySelector);
}

/*
==============
AICommonInterface::HasPath
==============
*/

bool __fastcall AICommonInterface::HasPath(AICommonInterface *this)
{
  return ?HasPath@AICommonInterface@@QEBA_NXZ(this);
}

/*
==============
AICommonInterface::AICommonInterface
==============
*/

void __fastcall AICommonInterface::AICommonInterface(AICommonInterface *this)
{
  ??0AICommonInterface@@QEAA@XZ(this);
}

/*
==============
AICommonInterface::SetAICommon
==============
*/

void __fastcall AICommonInterface::SetAICommon(AICommonInterface *this, ai_common_t *pAI)
{
  ?SetAICommon@AICommonInterface@@UEAAXPEAUai_common_t@@@Z(this, pAI);
}

/*
==============
AICommonInterface::GetTargetEntity
==============
*/

gentity_s *__fastcall AICommonInterface::GetTargetEntity(AICommonInterface *this)
{
  return ?GetTargetEntity@AICommonInterface@@QEBAPEAUgentity_s@@XZ(this);
}

/*
==============
AICommonInterface::GetSentient
==============
*/

sentient_s *__fastcall AICommonInterface::GetSentient(AICommonInterface *this)
{
  return ?GetSentient@AICommonInterface@@UEBAPEAUsentient_s@@XZ(this);
}

/*
==============
AICommonInterface::ThreatFromCover
==============
*/

int __fastcall AICommonInterface::ThreatFromCover(AICommonInterface *this, sentient_s *enemy, float distance, const EnemySelector *enemySelector)
{
  return ?ThreatFromCover@AICommonInterface@@UEBAHPEAUsentient_s@@MPEBUEnemySelector@@@Z(this, enemy, distance, enemySelector);
}

/*
==============
AICommonInterface::ShouldContinueTargetingDeadEnemy
==============
*/

bool __fastcall AICommonInterface::ShouldContinueTargetingDeadEnemy(AICommonInterface *this, int maxThreat)
{
  return ?ShouldContinueTargetingDeadEnemy@AICommonInterface@@UEBA_NH@Z(this, maxThreat);
}

/*
==============
AICommonInterface::ReactToDanger
==============
*/

void __fastcall AICommonInterface::ReactToDanger(AICommonInterface *this)
{
  ?ReactToDanger@AICommonInterface@@UEBAXXZ(this);
}

/*
==============
AICommonInterface::AICommonInterface
==============
*/
void AICommonInterface::AICommonInterface(AICommonInterface *this)
{
  this->m_pAI = NULL;
  this->__vftable = (AICommonInterface_vtbl *)&AICommonInterface::`vftable';
}

/*
==============
AICommonInterface::AddSuppressionLine
==============
*/
void AICommonInterface::AddSuppressionLine(AICommonInterface *this, sentient_s *pSuppressor, const vec3_t *vStart, const vec3_t *vEnd)
{
  ;
}

/*
==============
AICommonInterface::CheckAvoidTarget
==============
*/
bool AICommonInterface::CheckAvoidTarget(AICommonInterface *this, sentient_s *enemy)
{
  return 0;
}

/*
==============
AICommonInterface::CheckSurprisedBySentient
==============
*/
void AICommonInterface::CheckSurprisedBySentient(AICommonInterface *this, sentient_s *other)
{
  ;
}

/*
==============
AICommonInterface::Cover_IsValidCover
==============
*/
char AICommonInterface::Cover_IsValidCover(AICommonInterface *this, const pathnode_t *node, bool isForNewCoverSearch)
{
  return 1;
}

/*
==============
AICommonInterface::EnterAlertState
==============
*/
void AICommonInterface::EnterAlertState(AICommonInterface *this)
{
  ;
}

/*
==============
AICommonInterface::EnterCombatState
==============
*/
void AICommonInterface::EnterCombatState(AICommonInterface *this)
{
  ;
}

/*
==============
AICommonInterface::GetDefaultScarinessForDistance
==============
*/
float AICommonInterface::GetDefaultScarinessForDistance(sentient_s *enemy, float fDist)
{
  const dvar_t *v2; 
  float value; 
  const dvar_t *v4; 
  float v5; 
  const dvar_t *v6; 
  float v7; 
  const dvar_t *v8; 
  float v10; 

  v2 = DCONST_DVARFLT_ai_playerNearAccuracy;
  if ( !DCONST_DVARFLT_ai_playerNearAccuracy && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_playerNearAccuracy") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  value = v2->current.value;
  v4 = DCONST_DVARFLT_ai_playerNearRange;
  if ( !DCONST_DVARFLT_ai_playerNearRange && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_playerNearRange") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  v5 = v4->current.value;
  v6 = DCONST_DVARFLT_ai_playerFarAccuracy;
  if ( !DCONST_DVARFLT_ai_playerFarAccuracy && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_playerFarAccuracy") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  v7 = v6->current.value;
  v8 = DCONST_DVARFLT_ai_playerFarRange;
  if ( !DCONST_DVARFLT_ai_playerFarRange && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_playerFarRange") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( fDist <= v5 )
    return value * 5.0;
  v10 = v8->current.value;
  if ( fDist >= v10 || value == v7 )
    return v7 * 5.0;
  else
    return (float)((float)((float)((float)(fDist - v5) / (float)(v10 - v5)) * (float)(v7 - value)) + value) * 5.0;
}

/*
==============
AICommonInterface::GetEntity
==============
*/
gentity_s *AICommonInterface::GetEntity(AICommonInterface *this)
{
  return this->m_pAI->ent;
}

/*
==============
AICommonInterface::GetNavigator
==============
*/
AINavigator *AICommonInterface::GetNavigator(AICommonInterface *this)
{
  return this->m_pAI->pNavigator;
}

/*
==============
AICommonInterface::GetNodeAngleYawOffset
==============
*/
double AICommonInterface::GetNodeAngleYawOffset(AICommonInterface *this, const pathnode_t *node)
{
  scr_string_t AnimsetName; 
  scr_string_t v4; 
  __int16 type; 
  scr_string_t cover_right_crouch_cc; 
  char v8; 
  char v9; 

  AnimsetName = BG_AnimationState_GetAnimsetName((const entityState_t *)this->m_pAI->ent);
  v4 = AnimsetName;
  if ( !AnimsetName )
    return Path_NodeActorAngleYawOffset(node);
  type = node->constant.type;
  cover_right_crouch_cc = 0;
  if ( type == 31 )
    type = node->dynamic.turretEntNumber;
  switch ( type )
  {
    case 3:
      return BG_Animset_GetNodeSnapYawOffset(AnimsetName, (const scr_string_t)scr_const.cover_crouch_cc);
    case 2:
      return BG_Animset_GetNodeSnapYawOffset(AnimsetName, (const scr_string_t)scr_const.cover_stand_cc);
    case 7:
      v8 = Path_AllowedStancesForNode(node);
      if ( (v8 & 1) != 0 )
        return BG_Animset_GetNodeSnapYawOffset(v4, (const scr_string_t)scr_const.cover_left_cc);
      if ( (v8 & 2) != 0 )
        return BG_Animset_GetNodeSnapYawOffset(v4, (const scr_string_t)scr_const.cover_left_crouch_cc);
      break;
    case 6:
      v9 = Path_AllowedStancesForNode(node);
      if ( (v9 & 1) != 0 )
        return BG_Animset_GetNodeSnapYawOffset(v4, (const scr_string_t)scr_const.cover_right_cc);
      if ( (v9 & 2) != 0 )
        cover_right_crouch_cc = scr_const.cover_right_crouch_cc;
      break;
  }
  return BG_Animset_GetNodeSnapYawOffset(v4, cover_right_crouch_cc);
}

/*
==============
AICommonInterface::GetScarinessForDistance
==============
*/
float AICommonInterface::GetScarinessForDistance(AICommonInterface *this, sentient_s *enemy, float fDist)
{
  const dvar_t *v3; 
  float value; 
  const dvar_t *v5; 
  float v6; 
  const dvar_t *v7; 
  float v8; 
  const dvar_t *v9; 
  float v11; 

  v3 = DCONST_DVARFLT_ai_playerNearAccuracy;
  if ( !DCONST_DVARFLT_ai_playerNearAccuracy && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_playerNearAccuracy") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  value = v3->current.value;
  v5 = DCONST_DVARFLT_ai_playerNearRange;
  if ( !DCONST_DVARFLT_ai_playerNearRange && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_playerNearRange") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  v6 = v5->current.value;
  v7 = DCONST_DVARFLT_ai_playerFarAccuracy;
  if ( !DCONST_DVARFLT_ai_playerFarAccuracy && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_playerFarAccuracy") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  v8 = v7->current.value;
  v9 = DCONST_DVARFLT_ai_playerFarRange;
  if ( !DCONST_DVARFLT_ai_playerFarRange && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_playerFarRange") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( fDist <= v6 )
    return value * 5.0;
  v11 = v9->current.value;
  if ( fDist >= v11 || value == v8 )
    return v8 * 5.0;
  else
    return (float)((float)((float)((float)(fDist - v6) / (float)(v11 - v6)) * (float)(v8 - value)) + value) * 5.0;
}

/*
==============
AICommonInterface::GetSentient
==============
*/
sentient_s *AICommonInterface::GetSentient(AICommonInterface *this)
{
  return this->m_pAI->sentient;
}

/*
==============
AICommonInterface::GetTargetEntity
==============
*/
gentity_s *AICommonInterface::GetTargetEntity(AICommonInterface *this)
{
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_common_interface.cpp", 210, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_common_interface.cpp", 211, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  if ( EntHandle::isDefined(&this->m_pAI->sentient->targetEnt) )
    return EntHandle::ent(&this->m_pAI->sentient->targetEnt);
  else
    return 0i64;
}

/*
==============
AICommonInterface::GetTargetSentient
==============
*/
sentient_s *AICommonInterface::GetTargetSentient(AICommonInterface *this)
{
  if ( !this->m_pAI->ent->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_common_interface.cpp", 50, ASSERT_TYPE_ASSERT, "(m_pAI->ent->sentient)", (const char *)&queryFormat, "m_pAI->ent->sentient") )
    __debugbreak();
  if ( EntHandle::isDefined(&this->m_pAI->ent->sentient->targetEnt) )
    return EntHandle::ent(&this->m_pAI->ent->sentient->targetEnt)->sentient;
  else
    return 0i64;
}

/*
==============
AICommonInterface::HasPath
==============
*/
bool AICommonInterface::HasPath(AICommonInterface *this)
{
  AINavigator *pNavigator; 

  pNavigator = this->m_pAI->pNavigator;
  return pNavigator && Nav_HasPath(pNavigator);
}

/*
==============
AICommonInterface::IsAlive
==============
*/
bool AICommonInterface::IsAlive(AICommonInterface *this)
{
  return this->GetSentient(this) && this->GetEntity(this)->health > 0;
}

/*
==============
AICommonInterface::IsValidTarget
==============
*/
char AICommonInterface::IsValidTarget(AICommonInterface *this, gentity_s *ent)
{
  return 1;
}

/*
==============
AICommonInterface::ReactToDanger
==============
*/
void AICommonInterface::ReactToDanger(AICommonInterface *this)
{
  ;
}

/*
==============
AICommonInterface::ReactToTeamDeath
==============
*/
void AICommonInterface::ReactToTeamDeath(AICommonInterface *this, sentient_s *pCasualty, sentient_s *pAttacker)
{
  ;
}

/*
==============
AICommonInterface::SetAICommon
==============
*/
void AICommonInterface::SetAICommon(AICommonInterface *this, ai_common_t *pAI)
{
  if ( !pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_common_interface.cpp", 15, ASSERT_TYPE_ASSERT, "( pAI )", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  if ( !pAI->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_common_interface.cpp", 16, ASSERT_TYPE_ASSERT, "( pAI->sentientInfo != nullptr )", (const char *)&queryFormat, "pAI->sentientInfo != nullptr") )
    __debugbreak();
  this->m_pAI = pAI;
}

/*
==============
AICommonInterface::ShouldContinueTargetingDeadEnemy
==============
*/
bool AICommonInterface::ShouldContinueTargetingDeadEnemy(AICommonInterface *this, int maxThreat)
{
  return 0;
}

/*
==============
AICommonInterface::ShouldDoFOVCheck
==============
*/
char AICommonInterface::ShouldDoFOVCheck(AICommonInterface *this, sentient_s *sentient)
{
  return 1;
}

/*
==============
AICommonInterface::StoreSentientThreat
==============
*/
void AICommonInterface::StoreSentientThreat(AICommonInterface *this, sentient_s *enemy, int threat)
{
  ;
}

/*
==============
AICommonInterface::ThreatBehindEnemyLines
==============
*/
__int64 AICommonInterface::ThreatBehindEnemyLines(AICommonInterface *this, sentient_s *enemy, const vec3_t *combatLinePos, const vec3_t *combatLineAllyDir)
{
  return 0i64;
}

/*
==============
AICommonInterface::ThreatCoveringFire
==============
*/
__int64 AICommonInterface::ThreatCoveringFire(AICommonInterface *this, sentient_s *enemy, const EnemySelector *enemySelector)
{
  return 0i64;
}

/*
==============
AICommonInterface::ThreatFromCover
==============
*/
__int64 AICommonInterface::ThreatFromCover(AICommonInterface *this, sentient_s *enemy, float distance, const EnemySelector *enemySelector)
{
  return 0i64;
}

/*
==============
AICommonInterface::ThreatFromKilledNearbyTeammate
==============
*/
__int64 AICommonInterface::ThreatFromKilledNearbyTeammate(AICommonInterface *this, sentient_s *enemy, const EnemySelector *enemySelector)
{
  return 0i64;
}

/*
==============
AICommonInterface::ThreatFromPlayerAttackedMeRecently
==============
*/
__int64 AICommonInterface::ThreatFromPlayerAttackedMeRecently(AICommonInterface *this, sentient_s *enemy, int lastAttackedTime, const EnemySelector *enemySelector)
{
  return 0i64;
}

