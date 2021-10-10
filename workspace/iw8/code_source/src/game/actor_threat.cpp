/*
==============
AICommonInterface::UpdateThreat_Internal
==============
*/

void __fastcall AICommonInterface::UpdateThreat_Internal(AICommonInterface *this)
{
  ?UpdateThreat_Internal@AICommonInterface@@QEBAXXZ(this);
}

/*
==============
AICommonInterface::ThreatBonusForCurrentEnemy
==============
*/

int __fastcall AICommonInterface::ThreatBonusForCurrentEnemy(int isCurrentEnemy, int isFullyAware, int friendlyTimingOut, int isPlayer, int isDamaged, const EnemySelector *enemySelector)
{
  return ?ThreatBonusForCurrentEnemy@AICommonInterface@@KAHHHHHHPEBUEnemySelector@@@Z(isCurrentEnemy, isFullyAware, friendlyTimingOut, isPlayer, isDamaged, enemySelector);
}

/*
==============
AICommonInterface::UpdateThreat
==============
*/

void __fastcall AICommonInterface::UpdateThreat(AICommonInterface *this)
{
  ?UpdateThreat@AICommonInterface@@UEBAXXZ(this);
}

/*
==============
AICommonInterface::UpdateSecondaryTargets
==============
*/

void __fastcall AICommonInterface::UpdateSecondaryTargets(AICommonInterface *this, PotentialTargetData *potentialTargets, int numPotentialTargets)
{
  ?UpdateSecondaryTargets@AICommonInterface@@QEBAXQEAUPotentialTargetData@@H@Z(this, potentialTargets, numPotentialTargets);
}

/*
==============
AICommonInterface::InitThreatBiasGroups
==============
*/

void AICommonInterface::InitThreatBiasGroups(void)
{
  ?InitThreatBiasGroups@AICommonInterface@@SAXXZ();
}

/*
==============
AICommonInterface::UpdateSingleThreat
==============
*/

int __fastcall AICommonInterface::UpdateSingleThreat(AICommonInterface *this, sentient_s *enemy, float enemyDist, bool useCombatLine, const vec3_t *combatLinePos, const vec3_t *combatLineAllyDir, int updateDebug, const EnemySelector *enemySelector)
{
  return ?UpdateSingleThreat@AICommonInterface@@UEBAHPEAUsentient_s@@M_NAEBTvec3_t@@2HPEBUEnemySelector@@@Z(this, enemy, enemyDist, useCombatLine, combatLinePos, combatLineAllyDir, updateDebug, enemySelector);
}

/*
==============
AICommonInterface::CheckIgnore
==============
*/

int __fastcall AICommonInterface::CheckIgnore(AICommonInterface *this, sentient_s *enemy)
{
  return ?CheckIgnore@AICommonInterface@@UEBAHPEAUsentient_s@@@Z(this, enemy);
}

/*
==============
EnemySelector_Remove
==============
*/

void __fastcall EnemySelector_Remove(EnemySelector *pEnemySelector)
{
  ?EnemySelector_Remove@@YAXPEAUEnemySelector@@@Z(pEnemySelector);
}

/*
==============
AI_IsAlliedSentient
==============
*/

int __fastcall AI_IsAlliedSentient(const sentient_s *thisSentient, const sentient_s *otherSentient)
{
  return ?AI_IsAlliedSentient@@YAHPEBUsentient_s@@0@Z(thisSentient, otherSentient);
}

/*
==============
AIScriptedInterface::ThreatBehindEnemyLines
==============
*/

int __fastcall AIScriptedInterface::ThreatBehindEnemyLines(AIScriptedInterface *this, sentient_s *enemy, const vec3_t *combatLinePos, const vec3_t *combatLineAllyDir, const EnemySelector *enemySelector)
{
  return ?ThreatBehindEnemyLines@AIScriptedInterface@@UEBAHPEAUsentient_s@@AEBTvec3_t@@1PEBUEnemySelector@@@Z(this, enemy, combatLinePos, combatLineAllyDir, enemySelector);
}

/*
==============
AIScriptedInterface::FullyAwareOfEnemy
==============
*/

int __fastcall AIScriptedInterface::FullyAwareOfEnemy(AIScriptedInterface *this)
{
  return ?FullyAwareOfEnemy@AIScriptedInterface@@QEBAHXZ(this);
}

/*
==============
AICommonInterface::CheckIgnore
==============
*/

int __fastcall AICommonInterface::CheckIgnore(AICommonInterface *this, sentient_s *enemy, int *outIgnoreReason)
{
  return ?CheckIgnore@AICommonInterface@@UEBAHPEAUsentient_s@@PEAH@Z(this, enemy, outIgnoreReason);
}

/*
==============
AIScriptedInterface::ThreatFromKilledNearbyTeammate
==============
*/

int __fastcall AIScriptedInterface::ThreatFromKilledNearbyTeammate(AIScriptedInterface *this, sentient_s *enemy, const EnemySelector *enemySelector)
{
  return ?ThreatFromKilledNearbyTeammate@AIScriptedInterface@@UEBAHPEAUsentient_s@@PEBUEnemySelector@@@Z(this, enemy, enemySelector);
}

/*
==============
AICommonInterface::InitSecondaryTarget
==============
*/

void __fastcall AICommonInterface::InitSecondaryTarget(AICommonInterface *this, AISecondaryTarget *secondary, const PotentialTargetData *potentialTarget)
{
  ?InitSecondaryTarget@AICommonInterface@@QEBAXPEAUAISecondaryTarget@@PEBUPotentialTargetData@@@Z(this, secondary, potentialTarget);
}

/*
==============
AICommonInterface::ClearThreatBiasGroups
==============
*/

void AICommonInterface::ClearThreatBiasGroups(void)
{
  ?ClearThreatBiasGroups@AICommonInterface@@SAXXZ();
}

/*
==============
AIScriptedInterface::ThreatFromPlayerAttackedMeRecently
==============
*/

int __fastcall AIScriptedInterface::ThreatFromPlayerAttackedMeRecently(AIScriptedInterface *this, sentient_s *enemy, int lastAttackedTime, const EnemySelector *enemySelector)
{
  return ?ThreatFromPlayerAttackedMeRecently@AIScriptedInterface@@UEBAHPEAUsentient_s@@HPEBUEnemySelector@@@Z(this, enemy, lastAttackedTime, enemySelector);
}

/*
==============
EnemySelector_GetMaxThreat
==============
*/

int __fastcall EnemySelector_GetMaxThreat(const EnemySelector *enemySelector)
{
  return ?EnemySelector_GetMaxThreat@@YAHPEBUEnemySelector@@@Z(enemySelector);
}

/*
==============
AICommonInterface::SetThreatBiasEntireGroup
==============
*/

void __fastcall AICommonInterface::SetThreatBiasEntireGroup(int group, int threatBias)
{
  ?SetThreatBiasEntireGroup@AICommonInterface@@SAXHH@Z(group, threatBias);
}

/*
==============
AIScriptedInterface::ClearPotentialThreat
==============
*/

void __fastcall AIScriptedInterface::ClearPotentialThreat(AIScriptedInterface *this)
{
  ?ClearPotentialThreat@AIScriptedInterface@@QEBAXXZ(this);
}

/*
==============
AICommonInterface::GetThreatUpdateInterval
==============
*/

int __fastcall AICommonInterface::GetThreatUpdateInterval(AICommonInterface *this)
{
  return ?GetThreatUpdateInterval@AICommonInterface@@UEBAHXZ(this);
}

/*
==============
AICommonInterface::InitPotentialTarget
==============
*/

void __fastcall AICommonInterface::InitPotentialTarget(PotentialTargetData *potentialTarget, gentity_s *entity, float dist, const vec3_t *dirToEnemy)
{
  ?InitPotentialTarget@AICommonInterface@@SAXPEAUPotentialTargetData@@PEAUgentity_s@@MAEBTvec3_t@@@Z(potentialTarget, entity, dist, dirToEnemy);
}

/*
==============
AIScriptedInterface::ThreatFromCover
==============
*/

int __fastcall AIScriptedInterface::ThreatFromCover(AIScriptedInterface *this, sentient_s *enemy, float distance, const EnemySelector *enemySelector)
{
  return ?ThreatFromCover@AIScriptedInterface@@UEBAHPEAUsentient_s@@MPEBUEnemySelector@@@Z(this, enemy, distance, enemySelector);
}

/*
==============
AIScriptedInterface::CanAttackAll
==============
*/

void __fastcall AIScriptedInterface::CanAttackAll(AIScriptedInterface *this)
{
  ?CanAttackAll@AIScriptedInterface@@QEBAXXZ(this);
}

/*
==============
AIScriptedInterface::EnterAlertState
==============
*/

void __fastcall AIScriptedInterface::EnterAlertState(AIScriptedInterface *this)
{
  ?EnterAlertState@AIScriptedInterface@@UEBAXXZ(this);
}

/*
==============
AICommonInterface::InitThreatUpdateInterval
==============
*/

void __fastcall AICommonInterface::InitThreatUpdateInterval(AICommonInterface *this)
{
  ?InitThreatUpdateInterval@AICommonInterface@@QEBAXXZ(this);
}

/*
==============
AICommonInterface::PotentialThreat_Debug
==============
*/

void __fastcall AICommonInterface::PotentialThreat_Debug(AICommonInterface *this)
{
  ?PotentialThreat_Debug@AICommonInterface@@IEBAXXZ(this);
}

/*
==============
AIScriptedInterface::ThreatCoveringFire
==============
*/

int __fastcall AIScriptedInterface::ThreatCoveringFire(AIScriptedInterface *this, sentient_s *enemy, const EnemySelector *enemySelector)
{
  return ?ThreatCoveringFire@AIScriptedInterface@@UEBAHPEAUsentient_s@@PEBUEnemySelector@@@Z(this, enemy, enemySelector);
}

/*
==============
AICommonInterface::SetThreatBias
==============
*/

void __fastcall AICommonInterface::SetThreatBias(int groupSelf, int groupEnemy, int threatBias)
{
  ?SetThreatBias@AICommonInterface@@SAXHHH@Z(groupSelf, groupEnemy, threatBias);
}

/*
==============
AIScriptedInterface::EnterCombatState
==============
*/

void __fastcall AIScriptedInterface::EnterCombatState(AIScriptedInterface *this)
{
  ?EnterCombatState@AIScriptedInterface@@UEBAXXZ(this);
}

/*
==============
AICommonInterface::CaresAboutInfo
==============
*/

int __fastcall AICommonInterface::CaresAboutInfo(AICommonInterface *this, sentient_s *other)
{
  return ?CaresAboutInfo@AICommonInterface@@QEBAHPEAUsentient_s@@@Z(this, other);
}

/*
==============
AICommonInterface::GetCombatLine
==============
*/

bool __fastcall AICommonInterface::GetCombatLine(AICommonInterface *this, vec3_t *outCombatLinePos, vec3_t *outCombatLineAllyDir)
{
  return ?GetCombatLine@AICommonInterface@@MEBA_NAEATvec3_t@@0@Z(this, outCombatLinePos, outCombatLineAllyDir);
}

/*
==============
AICommonInterface::ThreatFromScariness
==============
*/

int __fastcall AICommonInterface::ThreatFromScariness(const float fScariness, const EnemySelector *enemySelector)
{
  return ?ThreatFromScariness@AICommonInterface@@SAHMPEBUEnemySelector@@@Z(fScariness, enemySelector);
}

/*
==============
AIScriptedInterface::UpdateThreatImmediate
==============
*/

void __fastcall AIScriptedInterface::UpdateThreatImmediate(AIScriptedInterface *this)
{
  ?UpdateThreatImmediate@AIScriptedInterface@@QEBAXXZ(this);
}

/*
==============
AIScriptedInterface::UpdateThreat
==============
*/

void __fastcall AIScriptedInterface::UpdateThreat(AIScriptedInterface *this)
{
  ?UpdateThreat@AIScriptedInterface@@UEBAXXZ(this);
}

/*
==============
AIScriptedInterface::GetPotentialThreat
==============
*/

bool __fastcall AIScriptedInterface::GetPotentialThreat(AIScriptedInterface *this, vec2_t *potentialThreatDir)
{
  return ?GetPotentialThreat@AIScriptedInterface@@QEBA_NAEATvec2_t@@@Z(this, potentialThreatDir);
}

/*
==============
AICommonInterface::ThreatFromVisibilityAndAwareness
==============
*/

int __fastcall AICommonInterface::ThreatFromVisibilityAndAwareness(int isVisible, int isFullyAware, int friendlyTimingOut, const EnemySelector *enemySelector)
{
  return ?ThreatFromVisibilityAndAwareness@AICommonInterface@@SAHHHHPEBUEnemySelector@@@Z(isVisible, isFullyAware, friendlyTimingOut, enemySelector);
}

/*
==============
AICommonInterface::GetThreatSharedEnemyCap
==============
*/

int __fastcall AICommonInterface::GetThreatSharedEnemyCap(AICommonInterface *this)
{
  return ?GetThreatSharedEnemyCap@AICommonInterface@@UEBAHXZ(this);
}

/*
==============
AICommonInterface::GetClosestDirectionSecondary
==============
*/

int __fastcall AICommonInterface::GetClosestDirectionSecondary(AICommonInterface *this, const PotentialTargetData *potential)
{
  return ?GetClosestDirectionSecondary@AICommonInterface@@QEBAHPEBUPotentialTargetData@@@Z(this, potential);
}

/*
==============
AICommonInterface::ThreatFromAttackerCount
==============
*/

int __fastcall AICommonInterface::ThreatFromAttackerCount(AICommonInterface *this, sentient_s *enemy, int isCurrentEnemy, const EnemySelector *enemySelector)
{
  return ?ThreatFromAttackerCount@AICommonInterface@@QEBAHPEAUsentient_s@@HPEBUEnemySelector@@@Z(this, enemy, isCurrentEnemy, enemySelector);
}

/*
==============
AICommonInterface::CreateThreatBiasGroup
==============
*/

void __fastcall AICommonInterface::CreateThreatBiasGroup(scr_string_t name)
{
  ?CreateThreatBiasGroup@AICommonInterface@@SAXW4scr_string_t@@@Z(name);
}

/*
==============
EnemySelector_Get
==============
*/

const EnemySelector *__fastcall EnemySelector_Get(scr_string_t name)
{
  return ?EnemySelector_Get@@YAPEBUEnemySelector@@W4scr_string_t@@@Z(name);
}

/*
==============
AICommonInterface::ThreatFlashed
==============
*/

int __fastcall AICommonInterface::ThreatFlashed(AICommonInterface *this, sentient_s *enemy, const EnemySelector *enemySelector)
{
  return ?ThreatFlashed@AICommonInterface@@QEBAHPEAUsentient_s@@PEBUEnemySelector@@@Z(this, enemy, enemySelector);
}

/*
==============
AICommonInterface::ThreatFromDistance
==============
*/

int __fastcall AICommonInterface::ThreatFromDistance(const float fDistance, const EnemySelector *enemySelector)
{
  return ?ThreatFromDistance@AICommonInterface@@SAHMPEBUEnemySelector@@@Z(fDistance, enemySelector);
}

/*
==============
AIScriptedInterface::SetPotentialThreat
==============
*/

void __fastcall AIScriptedInterface::SetPotentialThreat(AIScriptedInterface *this, float yaw)
{
  ?SetPotentialThreat@AIScriptedInterface@@QEBAXM@Z(this, yaw);
}

/*
==============
AICommonInterface::IsSimilarTarget
==============
*/

bool __fastcall AICommonInterface::IsSimilarTarget(const vec3_t *dirToFirst, const vec3_t *dirToSecond, float distToFirst, float distToSecond)
{
  return ?IsSimilarTarget@AICommonInterface@@KA_NAEBTvec3_t@@0MM@Z(dirToFirst, dirToSecond, distToFirst, distToSecond);
}

/*
==============
EnemySelector_Add
==============
*/

void __fastcall EnemySelector_Add(EnemySelector *pEnemySelector)
{
  ?EnemySelector_Add@@YAXPEAUEnemySelector@@@Z(pEnemySelector);
}

/*
==============
AIScriptedInterface::FlagEnemyUnattackable
==============
*/

void __fastcall AIScriptedInterface::FlagEnemyUnattackable(AIScriptedInterface *this)
{
  ?FlagEnemyUnattackable@AIScriptedInterface@@QEBAXXZ(this);
}

/*
==============
AIScriptedInterface::DebugDrawTargets
==============
*/

void __fastcall AIScriptedInterface::DebugDrawTargets(AIScriptedInterface *this)
{
  ?DebugDrawTargets@AIScriptedInterface@@IEBAXXZ(this);
}

/*
==============
AICommonInterface::GetThreatBias
==============
*/

int __fastcall AICommonInterface::GetThreatBias(int groupSelf, int groupEnemy)
{
  return ?GetThreatBias@AICommonInterface@@SAHHH@Z(groupSelf, groupEnemy);
}

/*
==============
AICommonInterface::IncrementThreatTime
==============
*/

void __fastcall AICommonInterface::IncrementThreatTime(AICommonInterface *this)
{
  ?IncrementThreatTime@AICommonInterface@@IEBAXXZ(this);
}

/*
==============
AICommonInterface::FindThreatBiasGroupIndex
==============
*/

int __fastcall AICommonInterface::FindThreatBiasGroupIndex(scr_string_t name)
{
  return ?FindThreatBiasGroupIndex@AICommonInterface@@SAHW4scr_string_t@@@Z(name);
}

/*
==============
AICommonInterface::GetThreatSharedEnemy
==============
*/

int __fastcall AICommonInterface::GetThreatSharedEnemy(AICommonInterface *this)
{
  return ?GetThreatSharedEnemy@AICommonInterface@@UEBAHXZ(this);
}

/*
==============
AICommonInterface::SetIgnoreMeGroup
==============
*/

void __fastcall AICommonInterface::SetIgnoreMeGroup(int groupSelf, int groupIgnoreMe)
{
  ?SetIgnoreMeGroup@AICommonInterface@@SAXHH@Z(groupSelf, groupIgnoreMe);
}

/*
==============
AI_GetOwnerEntNum
==============
*/
int AI_GetOwnerEntNum(gentity_s *ent)
{
  EntHandle *p_ownerNum; 
  int number; 
  __int64 v4; 
  __int64 v5; 
  __int64 v7; 
  __int64 v8; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 1327, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  p_ownerNum = &ent->r.ownerNum;
  if ( !EntHandle::isDefined(&ent->r.ownerNum) )
    return ent->s.otherEntityNum;
  number = p_ownerNum->number;
  if ( (unsigned int)(number - 1) >= 0x7FF )
  {
    LODWORD(v7) = number - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 231, ASSERT_TYPE_ASSERT, "(unsigned)( number - 1 ) < (unsigned)( ENTITYNUM_NONE )", "number - 1 doesn't index ENTITYNUM_NONE\n\t%i not in [0, %i)", v7, 2047) )
      __debugbreak();
  }
  v4 = p_ownerNum->number;
  if ( (unsigned int)(v4 - 1) >= 0x800 )
  {
    LODWORD(v8) = 2048;
    LODWORD(v7) = v4 - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v5 = v4 - 1;
  if ( g_entities[v5].r.isInUse != g_entityIsInUse[v5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v5] )
  {
    LODWORD(v8) = p_ownerNum->number - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 232, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( G_IsEntityInUse( number - 1 ) )", v8) )
      __debugbreak();
  }
  return (__int16)(p_ownerNum->number - 1);
}

/*
==============
AI_IsAlliedSentient
==============
*/
_BOOL8 AI_IsAlliedSentient(const sentient_s *thisSentient, const sentient_s *otherSentient)
{
  bool v4; 
  const bitarray<224> *AllCombatTeamFlags; 
  double v6; 
  unsigned int v7; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned __int64 eTeam; 
  int OwnerEntNum; 
  int v12; 
  __int64 v14; 
  bitarray<224> result; 

  if ( !thisSentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 1342, ASSERT_TYPE_ASSERT, "(thisSentient)", (const char *)&queryFormat, "thisSentient") )
    __debugbreak();
  if ( !otherSentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 1343, ASSERT_TYPE_ASSERT, "(otherSentient)", (const char *)&queryFormat, "otherSentient") )
    __debugbreak();
  if ( level.teammode == TEAMMODE_FFA )
  {
    v4 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80);
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
      AllCombatTeamFlags = Com_TeamsSP_GetAllCombatTeamFlags();
    else
      AllCombatTeamFlags = Com_TeamsMP_GetAllTeamFlags();
    v6 = *(double *)&AllCombatTeamFlags->array[4];
    v7 = AllCombatTeamFlags->array[6] & 0xFFEFFFFF;
    *(_OWORD *)result.array = *(_OWORD *)AllCombatTeamFlags->array;
    v8 = result.array[0];
    *(double *)&result.array[4] = v6;
    if ( v4 )
      v8 = result.array[0] & 0xF7FFFFFF;
    v9 = v7 & 0xFF9FFFFF;
  }
  else
  {
    Com_Teams_GetEnemyTeamFlags(&result, thisSentient->eTeam);
    v9 = result.array[6];
    v8 = result.array[0];
  }
  eTeam = (unsigned int)otherSentient->eTeam;
  result.array[1] = ~result.array[1];
  result.array[2] = ~result.array[2];
  result.array[3] = ~result.array[3];
  result.array[4] = ~result.array[4];
  result.array[5] = ~result.array[5];
  result.array[0] = ~v8;
  result.array[6] = ~v9;
  if ( (unsigned int)eTeam >= 0xE0 )
  {
    LODWORD(v14) = eTeam;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v14, 224) )
      __debugbreak();
  }
  if ( ((0x80000000 >> (eTeam & 0x1F)) & result.array[eTeam >> 5]) != 0 || thisSentient == otherSentient )
    return 1i64;
  if ( !thisSentient->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 1357, ASSERT_TYPE_ASSERT, "( thisSentient->ent )", (const char *)&queryFormat, "thisSentient->ent") )
    __debugbreak();
  if ( !otherSentient->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 1358, ASSERT_TYPE_ASSERT, "( otherSentient->ent )", (const char *)&queryFormat, "otherSentient->ent") )
    __debugbreak();
  OwnerEntNum = AI_GetOwnerEntNum(thisSentient->ent);
  v12 = AI_GetOwnerEntNum(otherSentient->ent);
  if ( v12 != 2047 && v12 == thisSentient->ent->s.number )
    return 1i64;
  return OwnerEntNum != 2047 && (OwnerEntNum == otherSentient->ent->s.number || v12 != 2047 && OwnerEntNum == v12);
}

/*
==============
AIScriptedInterface::CanAttackAll
==============
*/
void AIScriptedInterface::CanAttackAll(AIScriptedInterface *this)
{
  bool v2; 
  const bitarray<224> *AllCombatTeamFlags; 
  unsigned int v4; 
  bitarray<224> *p_result; 
  unsigned int v6; 
  sentient_s *i; 
  bitarray<224> result; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 1926, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 1927, ASSERT_TYPE_ASSERT, "( m_pAI->sentientInfo )", (const char *)&queryFormat, "m_pAI->sentientInfo") )
    __debugbreak();
  if ( level.teammode == TEAMMODE_FFA )
  {
    v2 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80);
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
      AllCombatTeamFlags = Com_TeamsSP_GetAllCombatTeamFlags();
    else
      AllCombatTeamFlags = Com_TeamsMP_GetAllTeamFlags();
    *(_OWORD *)result.array = *(_OWORD *)AllCombatTeamFlags->array;
    *(_QWORD *)&result.array[4] = *(_QWORD *)&AllCombatTeamFlags->array[4];
    v4 = AllCombatTeamFlags->array[6] & 0xFFEFFFFF;
    if ( v2 )
      result.array[0] &= ~0x8000000u;
    result.array[6] = v4 & 0xFF9FFFFF;
  }
  else
  {
    Com_Teams_GetEnemyTeamFlags(&result, this->m_pAI->sentient->eTeam);
  }
  p_result = &result;
  v6 = 0;
  while ( !p_result->array[0] )
  {
    ++v6;
    p_result = (bitarray<224> *)((char *)p_result + 4);
    if ( v6 >= 7 )
      return;
  }
  for ( i = Sentient_FirstSentient(&result); i; i = Sentient_NextSentient(i, &result) )
    this->m_pAI->sentientInfo[i - level.sentients].attackTime = 0;
}

/*
==============
AICommonInterface::CaresAboutInfo
==============
*/
_BOOL8 AICommonInterface::CaresAboutInfo(AICommonInterface *this, sentient_s *other)
{
  int lastKnownPosTime; 

  if ( !other && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 346, ASSERT_TYPE_ASSERT, "( other )", (const char *)&queryFormat, "other") )
    __debugbreak();
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 347, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 348, ASSERT_TYPE_ASSERT, "( m_pAI->sentientInfo )", (const char *)&queryFormat, "m_pAI->sentientInfo") )
    __debugbreak();
  lastKnownPosTime = this->m_pAI->sentientInfo[other - level.sentients].lastKnownPosTime;
  return lastKnownPosTime <= 0 || level.time - lastKnownPosTime >= 2000;
}

/*
==============
AICommonInterface::CheckIgnore
==============
*/
__int64 AICommonInterface::CheckIgnore(AICommonInterface *this, sentient_s *enemy)
{
  return ((__int64 (__fastcall *)(AICommonInterface *, sentient_s *, _QWORD))this->CheckIgnore)(this, enemy, 0i64);
}

/*
==============
AICommonInterface::CheckIgnore
==============
*/
_BOOL8 AICommonInterface::CheckIgnore(AICommonInterface *this, sentient_s *enemy, int *outIgnoreReason)
{
  __int64 v4; 

  v4 = ((__int64 (__fastcall *)(AICommonInterface *, sentient_s *, int *))this->GetSentient)(this, enemy, outIgnoreReason);
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 123, ASSERT_TYPE_ASSERT, "(self)", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( !enemy && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 124, ASSERT_TYPE_ASSERT, "(enemy)", (const char *)&queryFormat, "enemy") )
    __debugbreak();
  if ( !enemy->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 125, ASSERT_TYPE_ASSERT, "(enemy->ent)", (const char *)&queryFormat, "enemy->ent") )
    __debugbreak();
  return enemy->bIgnoreMe || (enemy->ent->flags.m_flags[0] & 4) != 0 || AICommonInterface::GetThreatBias(enemy->iThreatBiasGroupIndex, *(_DWORD *)(v4 + 24)) == 0x80000000;
}

/*
==============
AIScriptedInterface::ClearPotentialThreat
==============
*/
void AIScriptedInterface::ClearPotentialThreat(AIScriptedInterface *this)
{
  this->m_pAI->threat.potentialThreat.isEnabled = 0;
}

/*
==============
AICommonInterface::ClearThreatBiasGroups
==============
*/
void AICommonInterface::ClearThreatBiasGroups(void)
{
  threat_bias_t *v0; 
  __int64 v1; 
  threat_bias_t *v2; 

  v0 = &g_threatBias;
  v1 = 24i64;
  v2 = &g_threatBias;
  do
  {
    if ( v0->groupName[0] )
      Scr_SetString(v2->groupName, (scr_string_t)0);
    v2 = (threat_bias_t *)((char *)v2 + 4);
    v0 = (threat_bias_t *)((char *)v0 + 4);
    --v1;
  }
  while ( v1 );
  memset_0(&g_threatBias, 0, sizeof(g_threatBias));
}

/*
==============
AICommonInterface::CreateThreatBiasGroup
==============
*/
void AICommonInterface::CreateThreatBiasGroup(scr_string_t name)
{
  int threatGroupCount; 
  const char *v3; 
  int v4; 
  threat_bias_t *v5; 

  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 226, ASSERT_TYPE_ASSERT, "(name != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "name != NULL_SCR_STRING") )
    __debugbreak();
  threatGroupCount = g_threatBias.threatGroupCount;
  if ( g_threatBias.threatGroupCount < 24 )
  {
    if ( !name )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 206, ASSERT_TYPE_ASSERT, "(name != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "name != NULL_SCR_STRING") )
        __debugbreak();
      threatGroupCount = g_threatBias.threatGroupCount;
    }
    v4 = 0;
    if ( threatGroupCount <= 0 )
      goto LABEL_16;
    v5 = &g_threatBias;
    while ( v5->groupName[0] != name )
    {
      ++v4;
      v5 = (threat_bias_t *)((char *)v5 + 4);
      if ( v4 >= threatGroupCount )
        goto LABEL_16;
    }
    if ( v4 < 0 )
    {
LABEL_16:
      Scr_SetString(&g_threatBias.groupName[threatGroupCount], name);
      ++g_threatBias.threatGroupCount;
    }
  }
  else
  {
    v3 = SL_ConvertToString(name);
    Com_PrintWarning(18, "Too many threat groups, can't create '%s'\n", v3);
  }
}

/*
==============
AIScriptedInterface::DebugDrawTargets
==============
*/
void AIScriptedInterface::DebugDrawTargets(AIScriptedInterface *this)
{
  gentity_s *TargetEntity; 
  const vec3_t *p_currentOrigin; 
  ai_scripted_t *m_pAI; 
  int v5; 
  __int64 v6; 
  unsigned __int16 number; 
  __int64 v8; 
  unsigned int v9; 
  __int64 v10; 
  ai_scripted_t *v11; 
  int v12; 
  __int64 v13; 
  __int64 v14; 
  vec3_t *v15; 
  __int64 v16; 
  __int64 v17; 

  TargetEntity = AICommonInterface::GetTargetEntity(this);
  if ( TargetEntity )
  {
    p_currentOrigin = &TargetEntity->r.currentOrigin;
    G_DebugLine(&this->m_pAI->ent->r.currentOrigin, &TargetEntity->r.currentOrigin, &colorGreen, 0);
    G_Main_AddDebugString(p_currentOrigin, &colorGreen, 0.5, "Primary");
  }
  m_pAI = this->m_pAI;
  v5 = 0;
  if ( m_pAI->threat.numSecondaryTarget > 0 )
  {
    v6 = 0i64;
    do
    {
      number = m_pAI->threat.secondaryTargets[v6].entity.number;
      if ( number )
      {
        v8 = number;
        v9 = number - 1;
        if ( v9 >= 0x800 )
        {
          LODWORD(v17) = 2048;
          LODWORD(v16) = v9;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v16, v17) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        v10 = v8 - 1;
        if ( g_entities[v10].r.isInUse != g_entityIsInUse[v10] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
          __debugbreak();
        if ( !g_entityIsInUse[v10] )
        {
          LODWORD(v17) = m_pAI->threat.secondaryTargets[v6].entity.number - 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v17) )
            __debugbreak();
        }
        if ( m_pAI->threat.secondaryTargets[v6].entity.number )
        {
          v11 = this->m_pAI;
          v12 = v11->threat.secondaryTargets[v6].entity.number;
          if ( (unsigned int)(v12 - 1) >= 0x7FF )
          {
            LODWORD(v17) = 2047;
            LODWORD(v16) = v12 - 1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 223, ASSERT_TYPE_ASSERT, "(unsigned)( number - 1 ) < (unsigned)( ENTITYNUM_NONE )", "number - 1 doesn't index ENTITYNUM_NONE\n\t%i not in [0, %i)", v16, v17) )
              __debugbreak();
          }
          v13 = v11->threat.secondaryTargets[v6].entity.number;
          if ( (unsigned int)(v13 - 1) >= 0x800 )
          {
            LODWORD(v17) = 2048;
            LODWORD(v16) = v13 - 1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v16, v17) )
              __debugbreak();
          }
          if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
            __debugbreak();
          v14 = v13 - 1;
          if ( g_entities[v14].r.isInUse != g_entityIsInUse[v14] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
            __debugbreak();
          if ( !g_entityIsInUse[v14] )
          {
            LODWORD(v17) = v11->threat.secondaryTargets[v6].entity.number - 1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 224, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( G_IsEntityInUse( number - 1 ) )", v17) )
              __debugbreak();
          }
          v15 = &g_entities[v11->threat.secondaryTargets[v6].entity.number - 1].r.currentOrigin;
          G_DebugLine(&this->m_pAI->ent->r.currentOrigin, v15, &colorYellow, 0);
          G_Main_AddDebugString(v15, &colorYellow, 0.5, "Secondary");
        }
      }
      m_pAI = this->m_pAI;
      ++v5;
      ++v6;
    }
    while ( v5 < m_pAI->threat.numSecondaryTarget );
  }
}

/*
==============
DebugLastKnownEnemyPositions
==============
*/
void DebugLastKnownEnemyPositions(ai_common_t *self)
{
  int v2; 
  AICommonInterface *m_pAI; 
  const dvar_t *v4; 
  const dvar_t *v5; 
  const dvar_t *v6; 
  bitarray<224> *i; 
  sentient_s *TargetSentient; 
  sentient_s *j; 
  sentient_info_t *SentientInfo; 
  const vec4_t *v11; 
  const char *v12; 
  AICommonWrapper v13; 
  vec3_t outLastKnownPos; 
  vec3_t vEyePosOut; 
  bitarray<224> result; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 374, ASSERT_TYPE_ASSERT, "(self)", (const char *)&queryFormat, "self") )
    __debugbreak();
  AIActorInterface::AIActorInterface(&v13.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v13.m_newAgentInterface);
  v13.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  AICommonInterface::AICommonInterface(&v13.m_botInterface);
  v13.m_botInterface.__vftable = (AIBotInterface_vtbl *)&AIBotInterface::`vftable';
  AICommonInterface::AICommonInterface(&v13.m_botAgentInterface);
  v2 = 0;
  v13.m_botAgentInterface.__vftable = (AIBotAgentInterface_vtbl *)&AIBotAgentInterface::`vftable';
  m_pAI = NULL;
  v13.m_pAI = NULL;
  if ( self )
  {
    AICommonWrapper::Setup(&v13, self->ent);
    m_pAI = v13.m_pAI;
  }
  if ( !m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 375, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  v4 = DVARBOOL_ai_showLastKnownEnemyPos;
  if ( !DVARBOOL_ai_showLastKnownEnemyPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showLastKnownEnemyPos") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.enabled )
  {
    v5 = DVARINT_ai_debugEntIndex;
    if ( !DVARINT_ai_debugEntIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugEntIndex") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    if ( v5->current.integer < 0 )
      goto LABEL_21;
    v6 = DVARINT_ai_debugEntIndex;
    if ( !DVARINT_ai_debugEntIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugEntIndex") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    if ( v6->current.integer == self->ent->s.number )
    {
LABEL_21:
      Sentient_EnemyTeamFlags(&result, self->sentient->eTeam);
      for ( i = &result; !i->array[0]; i = (bitarray<224> *)((char *)i + 4) )
      {
        if ( (unsigned int)++v2 >= 7 )
          return;
      }
      TargetSentient = AICommonInterface::GetTargetSentient(m_pAI);
      Sentient_GetDebugEyePosition(self->sentient, &vEyePosOut);
      for ( j = Sentient_FirstSentient(&result); j; j = Sentient_NextSentient(j, &result) )
      {
        SentientInfo = Sentient_GetSentientInfo(self->sentient, j);
        if ( SentientInfo->lastKnownPosTime > 0 )
        {
          v11 = &colorMdGrey;
          if ( j == TargetSentient )
            v11 = &colorWhite;
          SentientInfo_GetLastKnownPos(SentientInfo, &outLastKnownPos);
          v12 = j_va("%d", (unsigned int)j->ent->s.number);
          G_Main_AddDebugString(&outLastKnownPos, v11, 0.5, v12);
          G_DebugLine(&vEyePosOut, &outLastKnownPos, v11, 1);
        }
      }
    }
  }
}

/*
==============
DebugSetThreatString
==============
*/
void DebugSetThreatString(ThreatDebugStringCategory category, int threat)
{
  char *v2; 

  if ( !g_skipDebugString )
  {
    v2 = g_threatDebugStrings[(__int64)(int)category];
    if ( threat )
      Com_sprintf(v2, 0x40ui64, "%s %d", g_threatDebugLabels[category], threat);
    else
      *v2 = 0;
  }
}

/*
==============
DebugSetThreatStringFromString
==============
*/
void DebugSetThreatStringFromString(ThreatDebugStringCategory category, const char *string)
{
  char *v2; 

  if ( !g_skipDebugString )
  {
    v2 = g_threatDebugStrings[(__int64)(int)category];
    if ( string )
      Com_sprintf(v2, 0x40ui64, "%s %s", g_threatDebugLabels[category], string);
    else
      *v2 = 0;
  }
}

/*
==============
DebugThreatInfoDuration
==============
*/
__int64 DebugThreatInfoDuration(ai_common_t *self)
{
  AICommonInterface *m_pAI; 
  int frameDuration; 
  AICommonWrapper v5; 

  AIActorInterface::AIActorInterface(&v5.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v5.m_newAgentInterface);
  v5.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  AICommonInterface::AICommonInterface(&v5.m_botInterface);
  v5.m_botInterface.__vftable = (AIBotInterface_vtbl *)&AIBotInterface::`vftable';
  AICommonInterface::AICommonInterface(&v5.m_botAgentInterface);
  m_pAI = NULL;
  v5.m_botAgentInterface.__vftable = (AIBotAgentInterface_vtbl *)&AIBotAgentInterface::`vftable';
  v5.m_pAI = NULL;
  if ( self )
  {
    AICommonWrapper::Setup(&v5, self->ent);
    m_pAI = v5.m_pAI;
  }
  if ( !m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 410, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
    __debugbreak();
  frameDuration = level.frameDuration;
  return (unsigned int)(m_pAI->GetThreatUpdateInterval(m_pAI) / frameDuration);
}

/*
==============
DebugThreatStringAll
==============
*/
void DebugThreatStringAll(ai_common_t *self, sentient_s *pEnemy, int threat)
{
  const dvar_t *v6; 
  const dvar_t *v7; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  scr_string_t enemySelector; 
  ntl::red_black_tree_node_base *mp_parent; 
  const EnemySelector *v11; 
  int MaxThreat; 
  double v13; 
  sentient_s *sentient; 
  int v15; 
  __int128 v16; 
  __int128 v17; 
  char (*v18)[64]; 
  const char *v19; 
  __int64 v20; 
  int v21; 
  __int128 v22; 
  vec3_t end; 
  vec4_t color; 
  vec3_t vEyePosOut; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 463, ASSERT_TYPE_ASSERT, "(self)", (const char *)&queryFormat, "self") )
    __debugbreak();
  v6 = DVARINT_ai_debugThreatSelection;
  if ( !DVARINT_ai_debugThreatSelection && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugThreatSelection") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( v6->current.integer == 1 )
  {
    v7 = DVARINT_ai_debugEntIndex;
    if ( !DVARINT_ai_debugEntIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugEntIndex") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    if ( v7->current.integer == self->ent->s.number )
    {
      if ( !pEnemy && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 468, ASSERT_TYPE_ASSERT, "(pEnemy)", (const char *)&queryFormat, "pEnemy") )
        __debugbreak();
      p_m_endNodeBase = &g_enemySelectorMap.m_endNodeBase;
      enemySelector = self->sentient->enemySelector;
      mp_parent = g_enemySelectorMap.m_endNodeBase.mp_parent;
      if ( !g_enemySelectorMap.m_endNodeBase.mp_parent )
        goto LABEL_23;
      do
      {
        if ( mp_parent[1].m_color < enemySelector )
        {
          mp_parent = mp_parent->mp_right;
        }
        else
        {
          p_m_endNodeBase = mp_parent;
          mp_parent = mp_parent->mp_left;
        }
      }
      while ( mp_parent );
      if ( p_m_endNodeBase == &g_enemySelectorMap.m_endNodeBase || enemySelector < p_m_endNodeBase[1].m_color )
LABEL_23:
        v11 = NULL;
      else
        v11 = (const EnemySelector *)p_m_endNodeBase[1].mp_parent;
      MaxThreat = EnemySelector_GetMaxThreat(v11);
      v13 = I_fclamp((float)threat / (float)MaxThreat, 0.0, 1.0);
      sentient = self->sentient;
      color.v[0] = (float)(*(float *)&v13 + 1.0) * 0.5;
      color.v[1] = color.v[0];
      color.v[2] = 0.0;
      color.v[3] = FLOAT_1_0;
      Sentient_GetDebugEyePosition(sentient, &vEyePosOut);
      Sentient_GetDebugEyePosition(pEnemy, &end);
      v15 = DebugThreatInfoDuration(self);
      G_DebugLineWithDuration(&vEyePosOut, &end, &color, 0, v15);
      v17 = LODWORD(end.v[2]);
      *(float *)&v17 = end.v[2] + 32.0;
      v16 = v17;
      v18 = g_threatDebugStrings;
      end.v[2] = end.v[2] + 32.0;
      v19 = g_threatDebugStrings[0];
      v20 = 15i64;
      do
      {
        if ( *(_BYTE *)v18 )
        {
          v21 = DebugThreatInfoDuration(self);
          G_Main_AddDebugStringWithDuration(&end, &color, 0.5, v19, v21);
          v16 = LODWORD(end.v[2]);
        }
        v19 += 64;
        ++v18;
        v22 = v16;
        *(float *)&v22 = *(float *)&v16 + 8.0;
        v16 = v22;
        end.v[2] = *(float *)&v22;
        --v20;
      }
      while ( v20 );
    }
  }
}

/*
==============
DebugThreatStringSimple
==============
*/
void DebugThreatStringSimple(ai_common_t *self, gentity_s *pEnemy, const char *string, const vec4_t *color)
{
  const dvar_t *v8; 
  const dvar_t *v9; 
  sentient_s *sentient; 
  float v11; 
  int v12; 
  int v13; 
  vec3_t end; 
  vec3_t vEyePosOut; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 499, ASSERT_TYPE_ASSERT, "(self)", (const char *)&queryFormat, "self") )
    __debugbreak();
  v8 = DVARINT_ai_debugThreatSelection;
  if ( !DVARINT_ai_debugThreatSelection && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugThreatSelection") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( v8->current.integer == 1 )
  {
    v9 = DVARINT_ai_debugEntIndex;
    if ( !DVARINT_ai_debugEntIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugEntIndex") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    if ( v9->current.integer == self->ent->s.number )
    {
      if ( !pEnemy && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 503, ASSERT_TYPE_ASSERT, "(pEnemy)", (const char *)&queryFormat, "pEnemy") )
        __debugbreak();
      if ( !string && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 504, ASSERT_TYPE_ASSERT, "(string)", (const char *)&queryFormat, "string") )
        __debugbreak();
      Sentient_GetDebugEyePosition(self->sentient, &vEyePosOut);
      sentient = pEnemy->sentient;
      if ( sentient )
      {
        Sentient_GetDebugEyePosition(sentient, &end);
      }
      else
      {
        v11 = pEnemy->r.currentOrigin.v[1];
        end.v[0] = pEnemy->r.currentOrigin.v[0];
        end.v[2] = pEnemy->r.currentOrigin.v[2];
        end.v[1] = v11;
      }
      v12 = DebugThreatInfoDuration(self);
      G_DebugLineWithDuration(&vEyePosOut, &end, color, 0, v12);
      end.v[2] = end.v[2] + 16.0;
      v13 = DebugThreatInfoDuration(self);
      G_Main_AddDebugStringWithDuration(&end, color, 1.0, string, v13);
    }
  }
}

/*
==============
EnemySelector_Add
==============
*/
void EnemySelector_Add(EnemySelector *pEnemySelector)
{
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  ntl::red_black_tree_node_base *v5; 
  scr_string_t scrName; 
  scr_string_t v7; 
  ntl::red_black_tree_node_base *v8; 
  bool v9; 
  ntl::red_black_tree_node_base *mp_left; 
  ntl::red_black_tree_node_base *i; 
  ntl::red_black_tree_node_base *v12; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *mp_next; 
  ntl::pair<enum scr_string_t,EnemySelector *> v14; 
  ntl::red_black_tree_node_base *mp_right; 
  ntl::pair<enum scr_string_t,EnemySelector *> r_element; 
  __m256i v18; 
  ntl::red_black_tree_iterator<enum scr_string_t,ntl::red_black_tree_node<ntl::pair<enum scr_string_t,EnemySelector *> >,ntl::pair<enum scr_string_t,EnemySelector *> *,ntl::pair<enum scr_string_t,EnemySelector *> &> result; 

  mp_parent = g_enemySelectorMap.m_endNodeBase.mp_parent;
  p_m_endNodeBase = &g_enemySelectorMap.m_endNodeBase;
  v5 = g_enemySelectorMap.m_endNodeBase.mp_parent;
  if ( g_enemySelectorMap.m_endNodeBase.mp_parent )
  {
    scrName = pEnemySelector->scrName;
    do
    {
      if ( v5[1].m_color < scrName )
      {
        v5 = v5->mp_right;
      }
      else
      {
        p_m_endNodeBase = v5;
        v5 = v5->mp_left;
      }
    }
    while ( v5 );
    if ( p_m_endNodeBase != &g_enemySelectorMap.m_endNodeBase && scrName >= p_m_endNodeBase[1].m_color && (EnemySelector *)p_m_endNodeBase[1].mp_parent != pEnemySelector )
    {
      EnemySelector_Remove(pEnemySelector);
      mp_parent = g_enemySelectorMap.m_endNodeBase.mp_parent;
    }
  }
  v7 = pEnemySelector->scrName;
  v8 = &g_enemySelectorMap.m_endNodeBase;
  r_element.first = v7;
  v9 = 1;
  r_element.second = pEnemySelector;
  while ( mp_parent )
  {
    v8 = mp_parent;
    v9 = v7 < mp_parent[1].m_color;
    if ( v7 >= mp_parent[1].m_color )
      mp_parent = mp_parent->mp_right;
    else
      mp_parent = mp_parent->mp_left;
  }
  mp_left = v8;
  if ( v9 )
  {
    if ( v8 == g_enemySelectorMap.m_endNodeBase.mp_left )
    {
      ntl::red_black_tree<enum scr_string_t,ntl::pair<enum scr_string_t,EnemySelector *>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<enum scr_string_t,EnemySelector *>>,64,8>,ntl::return_pair_first<enum scr_string_t,EnemySelector *>,ntl::less<enum scr_string_t,enum scr_string_t>>::insert_node(&g_enemySelectorMap, &result, v8, &r_element, 1, 0);
      return;
    }
    if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 108, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
      __debugbreak();
    if ( v8->m_color || v8->mp_parent->mp_parent != v8 )
    {
      mp_left = v8->mp_left;
      if ( mp_left )
      {
        for ( i = mp_left->mp_right; i; i = i->mp_right )
          mp_left = i;
      }
      else
      {
        mp_left = v8->mp_parent;
        if ( v8 == mp_left->mp_left )
        {
          do
          {
            v12 = mp_left;
            mp_left = mp_left->mp_parent;
          }
          while ( v12 == mp_left->mp_left );
        }
      }
    }
    else
    {
      mp_left = v8->mp_right;
    }
  }
  if ( !mp_left && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 81, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
    __debugbreak();
  if ( mp_left[1].m_color < v7 )
  {
    if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 694, ASSERT_TYPE_ASSERT, "( p_insert != 0 )", (const char *)&queryFormat, "p_insert != NULL") )
      __debugbreak();
    if ( !g_enemySelectorMap.m_freelist.m_head.mp_next )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
        __debugbreak();
      if ( !g_enemySelectorMap.m_freelist.m_head.mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
        __debugbreak();
    }
    if ( (ntl::internal::pool_allocator_freelist<48> *)g_enemySelectorMap.m_freelist.m_head.mp_next == &g_enemySelectorMap.m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0x30ui64, 0x40ui64) )
      __debugbreak();
    mp_next = g_enemySelectorMap.m_freelist.m_head.mp_next;
    v18.m256i_i32[0] = 0;
    v18.m256i_i64[1] = (__int64)v8;
    v14 = r_element;
    g_enemySelectorMap.m_freelist.m_head.mp_next = g_enemySelectorMap.m_freelist.m_head.mp_next->mp_next;
    __asm { vpxor   xmm0, xmm0, xmm0 }
    *(_OWORD *)&v18.m256i_u64[2] = _XMM0;
    *(__m256i *)&mp_next->mp_next = v18;
    *(ntl::pair<enum scr_string_t,EnemySelector *> *)&mp_next[4].mp_next = v14;
    if ( v8 == &g_enemySelectorMap.m_endNodeBase )
    {
      g_enemySelectorMap.m_endNodeBase.mp_left = (ntl::red_black_tree_node_base *)mp_next;
      g_enemySelectorMap.m_endNodeBase.mp_parent = (ntl::red_black_tree_node_base *)mp_next;
      g_enemySelectorMap.m_endNodeBase.mp_right = (ntl::red_black_tree_node_base *)mp_next;
    }
    else if ( v7 >= v8[1].m_color )
    {
      v8->mp_right = (ntl::red_black_tree_node_base *)mp_next;
      mp_right = g_enemySelectorMap.m_endNodeBase.mp_right;
      if ( v8 == g_enemySelectorMap.m_endNodeBase.mp_right )
        mp_right = (ntl::red_black_tree_node_base *)mp_next;
      g_enemySelectorMap.m_endNodeBase.mp_right = mp_right;
    }
    else
    {
      v8->mp_left = (ntl::red_black_tree_node_base *)mp_next;
      if ( v8 == g_enemySelectorMap.m_endNodeBase.mp_left )
        g_enemySelectorMap.m_endNodeBase.mp_left = (ntl::red_black_tree_node_base *)mp_next;
    }
    ntl::red_black_tree_node_base::rebalance((ntl::red_black_tree_node_base *)mp_next, &g_enemySelectorMap.m_endNodeBase.mp_parent);
    ++g_enemySelectorMap.m_size;
  }
}

/*
==============
EnemySelector_Get
==============
*/
ntl::red_black_tree_node_base *EnemySelector_Get(scr_string_t name)
{
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 

  mp_parent = g_enemySelectorMap.m_endNodeBase.mp_parent;
  p_m_endNodeBase = &g_enemySelectorMap.m_endNodeBase;
  if ( !g_enemySelectorMap.m_endNodeBase.mp_parent )
    return 0i64;
  do
  {
    if ( mp_parent[1].m_color < name )
    {
      mp_parent = mp_parent->mp_right;
    }
    else
    {
      p_m_endNodeBase = mp_parent;
      mp_parent = mp_parent->mp_left;
    }
  }
  while ( mp_parent );
  if ( p_m_endNodeBase == &g_enemySelectorMap.m_endNodeBase || name < p_m_endNodeBase[1].m_color )
    return 0i64;
  else
    return p_m_endNodeBase[1].mp_parent;
}

/*
==============
EnemySelector_GetMaxThreat
==============
*/
__int64 EnemySelector_GetMaxThreat(const EnemySelector *enemySelector)
{
  if ( !enemySelector && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 113, ASSERT_TYPE_ASSERT, "(enemySelector)", (const char *)&queryFormat, "enemySelector") )
    __debugbreak();
  return (unsigned int)(enemySelector->threatVisible + enemySelector->threatScarinessMax + (int)enemySelector->threatDistanceMaxThreat);
}

/*
==============
EnemySelector_Remove
==============
*/
void EnemySelector_Remove(EnemySelector *pEnemySelector)
{
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  ntl::red_black_tree_node_base *v3; 
  scr_string_t scrName; 
  ntl::red_black_tree_node_base *v5; 
  ntl::red_black_tree_node_base *v6; 
  scr_string_t v7; 

  mp_parent = g_enemySelectorMap.m_endNodeBase.mp_parent;
  p_m_endNodeBase = &g_enemySelectorMap.m_endNodeBase;
  v3 = g_enemySelectorMap.m_endNodeBase.mp_parent;
  if ( g_enemySelectorMap.m_endNodeBase.mp_parent )
  {
    scrName = pEnemySelector->scrName;
    do
    {
      if ( v3[1].m_color < scrName )
      {
        v3 = v3->mp_right;
      }
      else
      {
        p_m_endNodeBase = v3;
        v3 = v3->mp_left;
      }
    }
    while ( v3 );
    if ( p_m_endNodeBase == &g_enemySelectorMap.m_endNodeBase )
      return;
    v5 = &g_enemySelectorMap.m_endNodeBase;
    if ( scrName >= p_m_endNodeBase[1].m_color )
      v5 = p_m_endNodeBase;
    p_m_endNodeBase = v5;
  }
  if ( p_m_endNodeBase != &g_enemySelectorMap.m_endNodeBase )
  {
    v6 = &g_enemySelectorMap.m_endNodeBase;
    if ( g_enemySelectorMap.m_endNodeBase.mp_parent )
    {
      v7 = pEnemySelector->scrName;
      do
      {
        if ( mp_parent[1].m_color < v7 )
        {
          mp_parent = mp_parent->mp_right;
        }
        else
        {
          v6 = mp_parent;
          mp_parent = mp_parent->mp_left;
        }
      }
      while ( mp_parent );
      if ( v6 != &g_enemySelectorMap.m_endNodeBase && v7 >= v6[1].m_color )
      {
        if ( !g_enemySelectorMap.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 521, ASSERT_TYPE_ASSERT, "( !empty() )", (const char *)&queryFormat, "!empty()") )
          __debugbreak();
        if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 100, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
        ntl::red_black_tree_node_base::get_next(v6);
        if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 524, ASSERT_TYPE_ASSERT, "( p_node )", (const char *)&queryFormat, "p_node") )
          __debugbreak();
        if ( v6 == &g_enemySelectorMap.m_endNodeBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 527, ASSERT_TYPE_ASSERT, "( p_node != &m_endNodeBase )", (const char *)&queryFormat, "p_node != &m_endNodeBase") )
          __debugbreak();
        ntl::red_black_tree_node_base::rebalance_for_erase(v6, &g_enemySelectorMap.m_endNodeBase.mp_parent, &g_enemySelectorMap.m_endNodeBase.mp_left, &g_enemySelectorMap.m_endNodeBase.mp_right);
        if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 313, ASSERT_TYPE_ASSERT, "( p_ptr )", (const char *)&queryFormat, "p_ptr") )
          __debugbreak();
        *(_QWORD *)&v6->m_color = g_enemySelectorMap.m_freelist.m_head.mp_next;
        --g_enemySelectorMap.m_size;
        g_enemySelectorMap.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v6;
      }
    }
  }
}

/*
==============
AIScriptedInterface::EnterAlertState
==============
*/
void AIScriptedInterface::EnterAlertState(AIScriptedInterface *this)
{
  ai_scripted_t *m_pAI; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 2190, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  m_pAI = this->m_pAI;
  if ( m_pAI->combat.alertLevel < AI_ALERTNESS_ALERT )
    m_pAI->combat.alertLevel = AI_ALERTNESS_ALERT;
}

/*
==============
AIScriptedInterface::EnterCombatState
==============
*/
void AIScriptedInterface::EnterCombatState(AIScriptedInterface *this)
{
  if ( this->m_pAI )
  {
    this->m_pAI->combat.alertLevel = AI_ALERTNESS_COMBAT;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 2202, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
      __debugbreak();
    this->m_pAI->combat.alertLevel = AI_ALERTNESS_COMBAT;
  }
}

/*
==============
AICommonInterface::FindThreatBiasGroupIndex
==============
*/
__int64 AICommonInterface::FindThreatBiasGroupIndex(scr_string_t name)
{
  __int64 result; 
  threat_bias_t *i; 

  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 206, ASSERT_TYPE_ASSERT, "(name != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "name != NULL_SCR_STRING") )
    __debugbreak();
  result = 0i64;
  if ( g_threatBias.threatGroupCount <= 0 )
    return 0xFFFFFFFFi64;
  for ( i = &g_threatBias; i->groupName[0] != name; i = (threat_bias_t *)((char *)i + 4) )
  {
    result = (unsigned int)(result + 1);
    if ( (int)result >= g_threatBias.threatGroupCount )
      return 0xFFFFFFFFi64;
  }
  return result;
}

/*
==============
AIScriptedInterface::FlagEnemyUnattackable
==============
*/
void AIScriptedInterface::FlagEnemyUnattackable(AIScriptedInterface *this)
{
  sentient_s *TargetSentient; 
  ai_scripted_t *m_pAI; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 316, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 317, ASSERT_TYPE_ASSERT, "( m_pAI->sentient )", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  if ( !this->m_pAI->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 318, ASSERT_TYPE_ASSERT, "( m_pAI->sentientInfo )", (const char *)&queryFormat, "m_pAI->sentientInfo") )
    __debugbreak();
  TargetSentient = AICommonInterface::GetTargetSentient(this);
  if ( TargetSentient )
  {
    m_pAI = this->m_pAI;
    if ( m_pAI->eState[m_pAI->stateLevel] == AIS_BEHAVE )
    {
      m_pAI->sentientInfo[TargetSentient - level.sentients].attackTime = level.time + 5000;
      AIScriptedInterface::SetSubState(this, STATE_EXPOSED_NONCOMBAT);
    }
  }
}

/*
==============
AIScriptedInterface::FullyAwareOfEnemy
==============
*/
_BOOL8 AIScriptedInterface::FullyAwareOfEnemy(AIScriptedInterface *this)
{
  const sentient_s *TargetSentient; 
  int lastKnownPosTime; 
  _BOOL8 result; 

  TargetSentient = AICommonInterface::GetTargetSentient(this);
  result = 0;
  if ( TargetSentient )
  {
    lastKnownPosTime = Sentient_GetSentientInfo(this->m_pAI->sentient, TargetSentient)->lastKnownPosTime;
    if ( lastKnownPosTime )
    {
      if ( level.time - lastKnownPosTime < 10000 )
        return 1;
    }
  }
  return result;
}

/*
==============
AICommonInterface::GetClosestDirectionSecondary
==============
*/
__int64 AICommonInterface::GetClosestDirectionSecondary(AICommonInterface *this, const PotentialTargetData *potential)
{
  ai_common_t *m_pAI; 
  unsigned int v5; 
  int v7; 
  int numSecondaryTarget; 
  int v9; 
  float *v10; 
  float v11; 
  float v12; 
  float v13; 
  __int128 v14; 
  __int128 v17; 
  float v18; 
  float v20; 
  float v21; 
  int v22; 
  int v23; 
  int v25; 
  bool v27; 
  float *v29; 
  __int128 v30; 
  unsigned int v32; 

  if ( this->m_pAI->threat.numSecondaryTarget <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 1214, ASSERT_TYPE_ASSERT, "(m_pAI->threat.numSecondaryTarget > 0)", (const char *)&queryFormat, "m_pAI->threat.numSecondaryTarget > 0") )
    __debugbreak();
  m_pAI = this->m_pAI;
  v5 = 0;
  *(float *)&_XMM9 = FLOAT_N1_0;
  v7 = 0;
  numSecondaryTarget = m_pAI->threat.numSecondaryTarget;
  if ( numSecondaryTarget >= 4 )
  {
    v9 = 2;
    v10 = &m_pAI->threat.secondaryTargets[0].dirToEnt.v[2];
    v11 = potential->dirToEnt.v[1];
    v12 = potential->dirToEnt.v[0];
    v13 = potential->dirToEnt.v[2];
    do
    {
      v14 = LODWORD(potential->dirToEnt.v[1]);
      *(float *)&v14 = (float)((float)(v11 * *(v10 - 1)) + (float)(v12 * *(v10 - 2))) + (float)(v13 * *v10);
      _XMM7 = v14;
      v17 = LODWORD(potential->dirToEnt.v[1]);
      *(float *)&v17 = (float)((float)(v11 * v10[5]) + (float)(v12 * v10[4])) + (float)(v13 * v10[6]);
      _XMM5 = v17;
      v18 = (float)((float)(v11 * v10[11]) + (float)(v12 * v10[10])) + (float)(v13 * v10[12]);
      __asm { vmaxss  xmm8, xmm7, xmm9 }
      v20 = (float)(v11 * v10[17]) + (float)(v12 * v10[16]);
      v21 = v13 * v10[18];
      v22 = v7;
      v23 = v9 - 1;
      if ( *(float *)&_XMM7 <= *(float *)&_XMM9 )
        v22 = v5;
      v10 += 24;
      __asm { vmaxss  xmm6, xmm5, xmm8 }
      if ( *(float *)&v17 <= *(float *)&_XMM8 )
        v23 = v22;
      v5 = v9 + 1;
      v25 = v9;
      if ( v18 <= *(float *)&_XMM6 )
        v25 = v23;
      __asm { vmaxss  xmm4, xmm6, xmm3 }
      v27 = (float)(v20 + v21) <= *(float *)&_XMM4;
      __asm { vmaxss  xmm1, xmm4, xmm0 }
      if ( v27 )
        v5 = v25;
      v7 += 4;
      v9 += 4;
      LODWORD(_XMM9) = _XMM1;
    }
    while ( v7 < numSecondaryTarget - 3 );
  }
  if ( v7 < numSecondaryTarget )
  {
    v29 = &m_pAI->threat.secondaryTargets[v7].dirToEnt.v[2];
    do
    {
      v30 = LODWORD(potential->dirToEnt.v[0]);
      *(float *)&v30 = (float)((float)(potential->dirToEnt.v[0] * *(v29 - 2)) + (float)(potential->dirToEnt.v[1] * *(v29 - 1))) + (float)(potential->dirToEnt.v[2] * *v29);
      _XMM3 = v30;
      v32 = v7;
      v29 += 6;
      if ( *(float *)&v30 <= *(float *)&_XMM9 )
        v32 = v5;
      ++v7;
      v5 = v32;
      __asm { vmaxss  xmm9, xmm3, xmm9 }
    }
    while ( v7 < numSecondaryTarget );
  }
  return v5;
}

/*
==============
AICommonInterface::GetCombatLine
==============
*/
char AICommonInterface::GetCombatLine(AICommonInterface *this, vec3_t *outCombatLinePos, vec3_t *outCombatLineAllyDir)
{
  const dvar_t *v3; 
  bitarray<224> *v4; 
  const bitarray<224> *v5; 
  __int128 v6; 
  double v7; 
  __int128 v8; 
  __int128 v9; 
  __int128 v10; 
  __int128 v11; 
  __int128 v12; 
  __int128 v13; 
  __int128 v14; 
  __int128 v15; 
  sentient_s *v16; 
  const gentity_s *ent; 
  ai_agent_t *ScriptedAgentInfo; 
  actor_s *actor; 
  unsigned __int16 number; 
  __int64 v21; 
  unsigned int v22; 
  __int64 v23; 
  gentity_s *v24; 
  unsigned __int64 eTeam; 
  __int128 v26; 
  __int128 v27; 
  __int128 v28; 
  __int128 v29; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  float v34; 
  float v35; 
  unsigned __int64 v37; 
  __int128 v38; 
  __int128 v39; 
  __int128 v40; 
  __int128 v41; 
  __int64 v42; 
  __int64 v43; 
  AIActorInterface v46; 
  AIAgentInterface v47; 
  void *v48; 
  int v49; 
  __int64 v50; 
  __int64 v51; 
  __int64 v52; 
  bitarray<224> iTeamFlags; 
  __int128 v54; 
  double v55; 
  unsigned int v56; 

  v3 = DCONST_DVARBOOL_ai_useCombatLine;
  if ( !DCONST_DVARBOOL_ai_useCombatLine && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_useCombatLine") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( !v3->current.enabled )
    return 0;
  v4 = (bitarray<224> *)(Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) ? Com_TeamsSP_GetAllCombatTeamFlags() : Com_TeamsMP_GetAllTeamFlags());
  iTeamFlags = *v4;
  v5 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) ? Com_TeamsSP_GetBadGuyTeamFlags() : Com_TeamsMP_GetBadGuyTeamFlags();
  v6 = *(_OWORD *)v5->array;
  v7 = *(double *)&v5->array[4];
  v56 = v5->array[6];
  v54 = v6;
  v55 = v7;
  v50 = 0i64;
  v51 = 0i64;
  v52 = 0i64;
  v49 = 0x20000000;
  v8 = 0i64;
  v9 = 0i64;
  v10 = 0i64;
  v11 = 0i64;
  v12 = 0i64;
  v13 = 0i64;
  v14 = 0i64;
  v15 = 0i64;
  v16 = Sentient_FirstSentient(&iTeamFlags);
  if ( !v16 )
    return 0;
  do
  {
    ent = v16->ent;
    AIActorInterface::AIActorInterface(&v46);
    AIAgentInterface::AIAgentInterface(&v47);
    v47.__vftable = (AIAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
    v48 = NULL;
    if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 79, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
      __debugbreak();
    if ( ent->agent && SV_Agent_IsScripted(ent->s.number) )
    {
      ScriptedAgentInfo = AIAgentInterface::GetScriptedAgentInfo(ent);
      if ( !ScriptedAgentInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 97, ASSERT_TYPE_ASSERT, "( pInfo )", (const char *)&queryFormat, "pInfo") )
        __debugbreak();
      if ( !ScriptedAgentInfo->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 98, ASSERT_TYPE_ASSERT, "( pInfo->sentientInfo )", (const char *)&queryFormat, "pInfo->sentientInfo") )
        __debugbreak();
      AINewAgentInterface::SetAgent((AINewAgentInterface *)&v47, ScriptedAgentInfo);
      v48 = &v47;
    }
    else
    {
      actor = ent->actor;
      if ( actor )
      {
        if ( !actor->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 105, ASSERT_TYPE_ASSERT, "( ent->actor->sentientInfo )", (const char *)&queryFormat, "ent->actor->sentientInfo") )
          __debugbreak();
        AIActorInterface::SetActor(&v46, ent->actor);
        v48 = &v46;
      }
      else if ( !v48 )
      {
        goto LABEL_52;
      }
    }
    number = v16->targetEnt.number;
    if ( number )
    {
      v21 = number;
      v22 = number - 1;
      if ( v22 >= 0x800 )
      {
        LODWORD(v43) = 2048;
        LODWORD(v42) = v22;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v42, v43) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      v23 = v21 - 1;
      if ( g_entities[v23].r.isInUse != g_entityIsInUse[v23] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( !g_entityIsInUse[v23] )
      {
        LODWORD(v43) = v16->targetEnt.number - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v43) )
          __debugbreak();
      }
      if ( v16->targetEnt.number )
      {
        if ( v16->ent->health > 0 )
        {
          if ( !EntHandle::ent(&v16->targetEnt)->sentient || (v24 = EntHandle::ent(&v16->targetEnt), level.time - Sentient_GetSentientInfo(v16, v24->sentient)->lastKnownPosTime <= 10000) )
          {
            eTeam = (unsigned int)v16->eTeam;
            if ( (unsigned int)eTeam >= 0xE0 )
            {
              LODWORD(v43) = 224;
              LODWORD(v42) = v16->eTeam;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v42, v43) )
                __debugbreak();
            }
            if ( ((0x80000000 >> (eTeam & 0x1F)) & *((_DWORD *)&v54 + (eTeam >> 5))) != 0 )
            {
              v26 = v9;
              *(float *)&v26 = *(float *)&v9 + 1.0;
              v9 = v26;
              v27 = v13;
              *(float *)&v27 = *(float *)&v13 + v16->ent->r.currentOrigin.v[0];
              v13 = v27;
              v28 = v14;
              *(float *)&v28 = *(float *)&v14 + v16->ent->r.currentOrigin.v[1];
              v14 = v28;
              v29 = v15;
              *(float *)&v29 = *(float *)&v15 + v16->ent->r.currentOrigin.v[2];
              v15 = v29;
            }
            else
            {
              v37 = (unsigned int)v16->eTeam;
              if ( (unsigned int)v37 >= 0xE0 )
              {
                LODWORD(v43) = 224;
                LODWORD(v42) = v16->eTeam;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v42, v43) )
                  __debugbreak();
              }
              if ( ((0x80000000 >> (v37 & 0x1F)) & *(&v49 + (v37 >> 5))) != 0 )
              {
                v38 = v8;
                *(float *)&v38 = *(float *)&v8 + 1.0;
                v8 = v38;
                v39 = v10;
                *(float *)&v39 = *(float *)&v10 + v16->ent->r.currentOrigin.v[0];
                v10 = v39;
                v40 = v11;
                *(float *)&v40 = *(float *)&v11 + v16->ent->r.currentOrigin.v[1];
                v11 = v40;
                v41 = v12;
                *(float *)&v41 = *(float *)&v12 + v16->ent->r.currentOrigin.v[2];
                v12 = v41;
              }
            }
          }
        }
      }
    }
LABEL_52:
    v16 = Sentient_NextSentient(v16, &iTeamFlags);
  }
  while ( v16 );
  if ( *(float *)&v8 > 2.0 && *(float *)&v9 > 5.0 )
  {
    v30 = *(float *)&v10 * (float)(1.0 / *(float *)&v8);
    v31 = *(float *)&v12 * (float)(1.0 / *(float *)&v8);
    v32 = *(float *)&v11 * (float)(1.0 / *(float *)&v8);
    v33 = (float)((float)((float)(*(float *)&v13 * (float)(1.0 / *(float *)&v9)) - v30) * 0.5) + v30;
    outCombatLinePos->v[0] = v33;
    outCombatLinePos->v[1] = (float)((float)((float)(*(float *)&v14 * (float)(1.0 / *(float *)&v9)) - v32) * 0.5) + v32;
    outCombatLinePos->v[2] = (float)((float)((float)(*(float *)&v15 * (float)(1.0 / *(float *)&v9)) - v31) * 0.5) + v31;
    outCombatLineAllyDir->v[0] = v30 - v33;
    v34 = v32 - outCombatLinePos->v[1];
    outCombatLineAllyDir->v[1] = v34;
    v35 = v31 - outCombatLinePos->v[2];
    outCombatLineAllyDir->v[2] = v35;
    if ( (float)((float)((float)((float)(v30 - v33) * (float)(v30 - v33)) + (float)(v34 * v34)) + (float)(v35 * v35)) >= 48400.0 )
      return 1;
  }
  return 0;
}

/*
==============
AIScriptedInterface::GetPotentialThreat
==============
*/
_BOOL8 AIScriptedInterface::GetPotentialThreat(AIScriptedInterface *this, vec2_t *potentialThreatDir)
{
  ai_scripted_t *m_pAI; 
  _BOOL8 result; 

  m_pAI = this->m_pAI;
  result = m_pAI->threat.potentialThreat.isEnabled;
  if ( result )
  {
    *potentialThreatDir = m_pAI->threat.potentialThreat.direction;
    return m_pAI->threat.potentialThreat.isEnabled;
  }
  return result;
}

/*
==============
AICommonInterface::GetThreatBias
==============
*/
__int64 AICommonInterface::GetThreatBias(int groupSelf, int groupEnemy)
{
  __int64 v2; 
  __int64 v3; 

  v2 = groupEnemy;
  v3 = groupSelf;
  if ( (groupSelf < 0 || groupSelf >= g_threatBias.threatGroupCount) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 300, ASSERT_TYPE_ASSERT, "(groupSelf >= 0 && groupSelf < g_threatBias.threatGroupCount)", (const char *)&queryFormat, "groupSelf >= 0 && groupSelf < g_threatBias.threatGroupCount") )
    __debugbreak();
  if ( ((int)v2 < 0 || (int)v2 >= g_threatBias.threatGroupCount) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 301, ASSERT_TYPE_ASSERT, "(groupEnemy >= 0 && groupEnemy < g_threatBias.threatGroupCount)", (const char *)&queryFormat, "groupEnemy >= 0 && groupEnemy < g_threatBias.threatGroupCount") )
    __debugbreak();
  return (unsigned int)g_threatBias.threatTable[v3][v2];
}

/*
==============
AICommonInterface::GetThreatSharedEnemy
==============
*/
__int64 AICommonInterface::GetThreatSharedEnemy(AICommonInterface *this)
{
  ntl::red_black_tree_node_base *mp_parent; 
  scr_string_t enemySelector; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  ntl::red_black_tree_node_base *v4; 

  mp_parent = g_enemySelectorMap.m_endNodeBase.mp_parent;
  enemySelector = this->m_pAI->sentient->enemySelector;
  p_m_endNodeBase = &g_enemySelectorMap.m_endNodeBase;
  if ( !g_enemySelectorMap.m_endNodeBase.mp_parent )
    goto LABEL_10;
  do
  {
    if ( mp_parent[1].m_color < enemySelector )
    {
      mp_parent = mp_parent->mp_right;
    }
    else
    {
      p_m_endNodeBase = mp_parent;
      mp_parent = mp_parent->mp_left;
    }
  }
  while ( mp_parent );
  if ( p_m_endNodeBase == &g_enemySelectorMap.m_endNodeBase || enemySelector < p_m_endNodeBase[1].m_color )
  {
LABEL_10:
    v4 = NULL;
  }
  else
  {
    v4 = p_m_endNodeBase[1].mp_parent;
    if ( v4 )
      return *((unsigned int *)&v4[1].m_color + 1);
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 742, ASSERT_TYPE_ASSERT, "(enemySelector)", (const char *)&queryFormat, "enemySelector") )
    __debugbreak();
  return *((unsigned int *)&v4[1].m_color + 1);
}

/*
==============
AICommonInterface::GetThreatSharedEnemyCap
==============
*/
__int64 AICommonInterface::GetThreatSharedEnemyCap(AICommonInterface *this)
{
  ntl::red_black_tree_node_base *mp_parent; 
  scr_string_t enemySelector; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  ntl::red_black_tree_node_base *v4; 

  mp_parent = g_enemySelectorMap.m_endNodeBase.mp_parent;
  enemySelector = this->m_pAI->sentient->enemySelector;
  p_m_endNodeBase = &g_enemySelectorMap.m_endNodeBase;
  if ( !g_enemySelectorMap.m_endNodeBase.mp_parent )
    goto LABEL_10;
  do
  {
    if ( mp_parent[1].m_color < enemySelector )
    {
      mp_parent = mp_parent->mp_right;
    }
    else
    {
      p_m_endNodeBase = mp_parent;
      mp_parent = mp_parent->mp_left;
    }
  }
  while ( mp_parent );
  if ( p_m_endNodeBase == &g_enemySelectorMap.m_endNodeBase || enemySelector < p_m_endNodeBase[1].m_color )
  {
LABEL_10:
    v4 = NULL;
  }
  else
  {
    v4 = p_m_endNodeBase[1].mp_parent;
    if ( v4 )
      return LODWORD(v4[1].mp_parent);
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 750, ASSERT_TYPE_ASSERT, "(enemySelector)", (const char *)&queryFormat, "enemySelector") )
    __debugbreak();
  return LODWORD(v4[1].mp_parent);
}

/*
==============
AICommonInterface::GetThreatUpdateInterval
==============
*/
__int64 AICommonInterface::GetThreatUpdateInterval(AICommonInterface *this)
{
  const dvar_t *v1; 

  v1 = DCONST_DVARINT_ai_threatUpdateInterval;
  if ( !DCONST_DVARINT_ai_threatUpdateInterval && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_threatUpdateInterval") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  return v1->current.unsignedInt;
}

/*
==============
AICommonInterface::IncrementThreatTime
==============
*/
void AICommonInterface::IncrementThreatTime(AICommonInterface *this)
{
  int v2; 
  ai_common_t *m_pAI; 
  int time; 
  int threatUpdateTime; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 1139, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 1140, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  v2 = this->GetThreatUpdateInterval(this);
  if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 1144, ASSERT_TYPE_ASSERT, "(interval)", (const char *)&queryFormat, "interval") )
    __debugbreak();
  this->m_pAI->threat.threatUpdateTime += v2;
  m_pAI = this->m_pAI;
  time = level.time;
  threatUpdateTime = m_pAI->threat.threatUpdateTime;
  if ( threatUpdateTime <= level.time )
  {
    m_pAI->threat.threatUpdateTime = threatUpdateTime % v2;
    this->m_pAI->threat.threatUpdateTime += v2 * (level.time / v2 + 1);
    m_pAI = this->m_pAI;
    time = level.time;
  }
  if ( time >= m_pAI->threat.threatUpdateTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 1154, ASSERT_TYPE_ASSERT, "(level.time < m_pAI->threat.threatUpdateTime)", (const char *)&queryFormat, "level.time < m_pAI->threat.threatUpdateTime") )
    __debugbreak();
}

/*
==============
AICommonInterface::InitPotentialTarget
==============
*/
void AICommonInterface::InitPotentialTarget(PotentialTargetData *potentialTarget, gentity_s *entity, float dist, const vec3_t *dirToEnemy)
{
  float v7; 
  __int128 v8; 
  float v9; 
  __int128 v10; 

  if ( !potentialTarget && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 1160, ASSERT_TYPE_ASSERT, "(potentialTarget)", (const char *)&queryFormat, "potentialTarget") )
    __debugbreak();
  if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 1161, ASSERT_TYPE_ASSERT, "(entity)", (const char *)&queryFormat, "entity") )
    __debugbreak();
  potentialTarget->distToEnt = dist;
  potentialTarget->entity = entity;
  potentialTarget->threat = 0;
  v7 = dirToEnemy->v[0];
  potentialTarget->dirToEnt.v[0] = dirToEnemy->v[0];
  v8 = LODWORD(dirToEnemy->v[1]);
  potentialTarget->dirToEnt.v[1] = *(float *)&v8;
  v9 = dirToEnemy->v[2];
  v10 = v8;
  potentialTarget->dirToEnt.v[2] = v9;
  *(float *)&v10 = fsqrt((float)((float)(*(float *)&v8 * *(float *)&v8) + (float)(v7 * v7)) + (float)(v9 * v9));
  _XMM3 = v10;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm1, xmm0
  }
  potentialTarget->dirToEnt.v[0] = v7 * (float)(1.0 / *(float *)&_XMM0);
  potentialTarget->dirToEnt.v[1] = (float)(1.0 / *(float *)&_XMM0) * potentialTarget->dirToEnt.v[1];
  potentialTarget->dirToEnt.v[2] = (float)(1.0 / *(float *)&_XMM0) * potentialTarget->dirToEnt.v[2];
}

/*
==============
AICommonInterface::InitSecondaryTarget
==============
*/
void AICommonInterface::InitSecondaryTarget(AICommonInterface *this, AISecondaryTarget *secondary, const PotentialTargetData *potentialTarget)
{
  sentient_s *sentient; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 1173, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !secondary && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 1174, ASSERT_TYPE_ASSERT, "(secondary)", (const char *)&queryFormat, "secondary") )
    __debugbreak();
  if ( !potentialTarget && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 1175, ASSERT_TYPE_ASSERT, "(potentialTarget)", (const char *)&queryFormat, "potentialTarget") )
    __debugbreak();
  EntHandle::setEnt(&secondary->entity, potentialTarget->entity);
  secondary->distToEnt = potentialTarget->distToEnt;
  secondary->dirToEnt.v[0] = potentialTarget->dirToEnt.v[0];
  secondary->dirToEnt.v[1] = potentialTarget->dirToEnt.v[1];
  secondary->dirToEnt.v[2] = potentialTarget->dirToEnt.v[2];
  sentient = potentialTarget->entity->sentient;
  if ( sentient )
    secondary->tacpoint = Sentient_GetSentientInfo(this->m_pAI->sentient, sentient)->lastKnownTacPoint;
  else
    tacpoint_ref_t::SetPoint(&secondary->tacpoint, NULL);
}

/*
==============
AICommonInterface::InitThreatBiasGroups
==============
*/
void AICommonInterface::InitThreatBiasGroups(void)
{
  memset_0(&g_threatBias, 0, 0x960ui64);
  g_threatBias.threatGroupCount = 1;
}

/*
==============
AICommonInterface::InitThreatUpdateInterval
==============
*/
void AICommonInterface::InitThreatUpdateInterval(AICommonInterface *this)
{
  int v2; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 1118, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  v2 = this->GetThreatUpdateInterval(this);
  if ( v2 )
  {
    this->m_pAI->threat.threatUpdateTime = v2 * (level.time / v2);
    this->m_pAI->threat.threatUpdateTime -= G_irand(0, v2);
  }
  else
  {
    this->m_pAI->threat.threatUpdateTime = 0;
  }
}

/*
==============
AICommonInterface::IsSimilarTarget
==============
*/
bool AICommonInterface::IsSimilarTarget(const vec3_t *dirToFirst, const vec3_t *dirToSecond, float distToFirst, float distToSecond)
{
  return (float)((float)((float)(dirToFirst->v[1] * dirToSecond->v[1]) + (float)(dirToFirst->v[0] * dirToSecond->v[0])) + (float)(dirToFirst->v[2] * dirToSecond->v[2])) >= 0.866 && (float)(distToFirst / distToSecond) > 0.69999999 && (float)(distToFirst / distToSecond) < 1.4285715;
}

/*
==============
AICommonInterface::PotentialThreat_Debug
==============
*/
void AICommonInterface::PotentialThreat_Debug(AICommonInterface *this)
{
  ai_common_t *m_pAI; 
  vec3_t vEyePosOut; 
  vec3_t end; 

  if ( !this->m_pAI->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 1991, ASSERT_TYPE_ASSERT, "(m_pAI->ent)", (const char *)&queryFormat, "m_pAI->ent") )
    __debugbreak();
  if ( !this->Is3D(this) )
  {
    Sentient_GetDebugEyePosition(this->m_pAI->sentient, &vEyePosOut);
    m_pAI = this->m_pAI;
    if ( m_pAI->threat.potentialThreat.isEnabled )
    {
      end.v[0] = (float)(32.0 * m_pAI->threat.potentialThreat.direction.v[0]) + vEyePosOut.v[0];
      end.v[1] = (float)(32.0 * m_pAI->threat.potentialThreat.direction.v[1]) + vEyePosOut.v[1];
      end.v[2] = vEyePosOut.v[2];
      G_DebugLine(&vEyePosOut, &end, &colorRed, 0);
    }
    else
    {
      G_Main_AddDebugString(&vEyePosOut, &colorWhite, 1.0, "No Threat");
    }
  }
}

/*
==============
AICommonInterface::SetIgnoreMeGroup
==============
*/
void AICommonInterface::SetIgnoreMeGroup(int groupSelf, int groupIgnoreMe)
{
  __int64 v2; 
  __int64 v3; 

  v2 = groupIgnoreMe;
  v3 = groupSelf;
  if ( (groupSelf < 0 || groupSelf >= g_threatBias.threatGroupCount) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 284, ASSERT_TYPE_ASSERT, "(groupSelf >= 0 && groupSelf < g_threatBias.threatGroupCount)", (const char *)&queryFormat, "groupSelf >= 0 && groupSelf < g_threatBias.threatGroupCount") )
    __debugbreak();
  if ( ((int)v2 < 0 || (int)v2 >= g_threatBias.threatGroupCount) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 285, ASSERT_TYPE_ASSERT, "(groupIgnoreMe >= 0 && groupIgnoreMe < g_threatBias.threatGroupCount)", (const char *)&queryFormat, "groupIgnoreMe >= 0 && groupIgnoreMe < g_threatBias.threatGroupCount") )
    __debugbreak();
  g_threatBias.threatTable[v3][v2] = 0x80000000;
}

/*
==============
AIScriptedInterface::SetPotentialThreat
==============
*/
void AIScriptedInterface::SetPotentialThreat(AIScriptedInterface *this, float yaw, __int64 a3, __int64 a4)
{
  __int64 v4; 

  *((_QWORD *)&_XMM0 + 1) = 0i64;
  this->m_pAI->threat.potentialThreat.isEnabled = 1;
  *(double *)&_XMM0 = j___libm_sse2_sincosf_(this, v4, a3, a4);
  _RAX = this->m_pAI;
  __asm { vextractps dword ptr [rax+3Ch], xmm0, 1 }
  _RAX->threat.potentialThreat.direction.v[1] = *(float *)&_XMM0;
}

/*
==============
AICommonInterface::SetThreatBias
==============
*/
void AICommonInterface::SetThreatBias(int groupSelf, int groupEnemy, int threatBias)
{
  __int64 v3; 
  __int64 v5; 

  v3 = groupEnemy;
  v5 = groupSelf;
  if ( (groupSelf < 0 || groupSelf >= g_threatBias.threatGroupCount) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 268, ASSERT_TYPE_ASSERT, "(groupSelf >= 0 && groupSelf < g_threatBias.threatGroupCount)", (const char *)&queryFormat, "groupSelf >= 0 && groupSelf < g_threatBias.threatGroupCount") )
    __debugbreak();
  if ( ((int)v3 < 0 || (int)v3 >= g_threatBias.threatGroupCount) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 269, ASSERT_TYPE_ASSERT, "(groupEnemy >= 0 && groupEnemy < g_threatBias.threatGroupCount)", (const char *)&queryFormat, "groupEnemy >= 0 && groupEnemy < g_threatBias.threatGroupCount") )
    __debugbreak();
  g_threatBias.threatTable[v5][v3] = threatBias;
}

/*
==============
AICommonInterface::SetThreatBiasEntireGroup
==============
*/
void AICommonInterface::SetThreatBiasEntireGroup(int group, int threatBias)
{
  __int64 v2; 
  __int64 v4; 

  v2 = group;
  if ( (group < 0 || group >= g_threatBias.threatGroupCount) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 252, ASSERT_TYPE_ASSERT, "(group >= 0 && group < g_threatBias.threatGroupCount)", (const char *)&queryFormat, "group >= 0 && group < g_threatBias.threatGroupCount") )
    __debugbreak();
  v4 = v2;
  g_threatBias.threatTable[v4][0] = threatBias;
  g_threatBias.threatTable[v4][1] = threatBias;
  g_threatBias.threatTable[v4][2] = threatBias;
  g_threatBias.threatTable[v4][3] = threatBias;
  g_threatBias.threatTable[v4][4] = threatBias;
  g_threatBias.threatTable[v4][5] = threatBias;
  g_threatBias.threatTable[v4][6] = threatBias;
  g_threatBias.threatTable[v4][7] = threatBias;
  g_threatBias.threatTable[v4][8] = threatBias;
  g_threatBias.threatTable[v4][9] = threatBias;
  g_threatBias.threatTable[v4][10] = threatBias;
  g_threatBias.threatTable[v4][11] = threatBias;
  g_threatBias.threatTable[v4][12] = threatBias;
  g_threatBias.threatTable[v4][13] = threatBias;
  g_threatBias.threatTable[v4][14] = threatBias;
  g_threatBias.threatTable[v4][15] = threatBias;
  g_threatBias.threatTable[v4][16] = threatBias;
  g_threatBias.threatTable[v4][17] = threatBias;
  g_threatBias.threatTable[v4][18] = threatBias;
  g_threatBias.threatTable[v4][19] = threatBias;
  g_threatBias.threatTable[v4][20] = threatBias;
  g_threatBias.threatTable[v4][21] = threatBias;
  g_threatBias.threatTable[v4][22] = threatBias;
  g_threatBias.threatTable[v4][23] = threatBias;
}

/*
==============
AIScriptedInterface::ThreatBehindEnemyLines
==============
*/
__int64 AIScriptedInterface::ThreatBehindEnemyLines(AIScriptedInterface *this, sentient_s *enemy, const vec3_t *combatLinePos, const vec3_t *combatLineAllyDir, const EnemySelector *enemySelector)
{
  unsigned int eTeam; 
  bitarray<224> *BadGuyTeamFlags; 
  float v11; 
  double v12; 
  float v13; 
  const char *v14; 

  eTeam = this->m_pAI->sentient->eTeam;
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
    BadGuyTeamFlags = (bitarray<224> *)Com_TeamsSP_GetBadGuyTeamFlags();
  else
    BadGuyTeamFlags = (bitarray<224> *)Com_TeamsMP_GetBadGuyTeamFlags();
  if ( !bitarray_base<bitarray<224>>::testBit(BadGuyTeamFlags, eTeam) )
    return 0i64;
  if ( !enemy->ent->client )
    return 0i64;
  if ( AI_IsAlliedSentient(this->m_pAI->sentient, enemy) )
    return 0i64;
  v11 = (float)((float)((float)(enemy->ent->r.currentOrigin.v[1] - combatLinePos->v[1]) * combatLineAllyDir->v[1]) + (float)((float)(enemy->ent->r.currentOrigin.v[0] - combatLinePos->v[0]) * combatLineAllyDir->v[0])) + (float)((float)(enemy->ent->r.currentOrigin.v[2] - combatLinePos->v[2]) * combatLineAllyDir->v[2]);
  if ( v11 >= 0.0 )
    return 0i64;
  v12 = I_fclamp(fsqrt(COERCE_FLOAT(LODWORD(v11) ^ _xmm)) * (float)(1.0 / (float)enemySelector->threatBehindEnemyLinesDist), 0.0, 1.0);
  v13 = *(float *)&v12 * (float)enemySelector->threatBehindEnemyLinesMax;
  v14 = j_va("%d", (unsigned int)(int)v13);
  DebugSetThreatStringFromString(TDS_ENEMYLINES, v14);
  return (unsigned int)(int)v13;
}

/*
==============
AICommonInterface::ThreatBonusForCurrentEnemy
==============
*/
__int64 AICommonInterface::ThreatBonusForCurrentEnemy(int isCurrentEnemy, int isFullyAware, int friendlyTimingOut, int isPlayer, int isDamaged, const EnemySelector *enemySelector)
{
  unsigned int threatCurrentEnemyPlayerDamaged; 

  threatCurrentEnemyPlayerDamaged = 0;
  if ( isCurrentEnemy )
  {
    if ( isFullyAware )
    {
      if ( isPlayer && isDamaged )
        threatCurrentEnemyPlayerDamaged = enemySelector->threatCurrentEnemyPlayerDamaged;
      else
        threatCurrentEnemyPlayerDamaged = enemySelector->threatFriendliesCurrentEnemy;
    }
    else if ( friendlyTimingOut )
    {
      threatCurrentEnemyPlayerDamaged = enemySelector->threatFriendliesTimeoutEnemy;
    }
    else
    {
      threatCurrentEnemyPlayerDamaged = enemySelector->threatCurrentEnemy;
    }
  }
  if ( !g_skipDebugString )
  {
    if ( threatCurrentEnemyPlayerDamaged )
    {
      Com_sprintf(g_threatDebugStrings[6], 0x40ui64, "%s %d", g_threatDebugLabels[6], threatCurrentEnemyPlayerDamaged);
      return threatCurrentEnemyPlayerDamaged;
    }
    g_threatDebugStrings[6][0] = 0;
  }
  return threatCurrentEnemyPlayerDamaged;
}

/*
==============
AIScriptedInterface::ThreatCoveringFire
==============
*/
__int64 AIScriptedInterface::ThreatCoveringFire(AIScriptedInterface *this, sentient_s *enemy, const EnemySelector *enemySelector)
{
  AIScriptedInterface *m_pAI; 
  ai_common_t *v7; 
  pathnode_t *pClaimedNode; 
  unsigned int threatCoveringFire; 
  char *fmt; 
  AIWrapper v12; 
  vec3_t pos; 
  vec3_t forward; 
  vec3_t vector; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 815, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !enemy && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 816, ASSERT_TYPE_ASSERT, "(enemy)", (const char *)&queryFormat, "enemy") )
    __debugbreak();
  if ( !this->m_pAI->combat.provideCoveringFire || this->IsMoving(this) )
    return 0i64;
  AIWrapper::AIWrapper(&v12, enemy->ent);
  m_pAI = v12.m_pAI;
  if ( v12.m_pAI )
  {
    v7 = v12.m_pAI->GetAI(v12.m_pAI);
    if ( !LODWORD(v7[2].orientation.vLookRight.v[0]) && !m_pAI->IsInPain(m_pAI) && !m_pAI->IsDying(m_pAI) )
    {
      if ( enemySelector->threatMinSuppression < v7[2].orientation.vLookUp.v[2] )
      {
        pClaimedNode = enemy->pClaimedNode;
        if ( !pClaimedNode || !AIScriptedInterface::ShouldKeepClaimedNode(m_pAI) || (pathnode_t::GetPos(pClaimedNode, &pos), pathnode_t::GetAngles(pClaimedNode, &vector), AngleVectors(&vector, &forward, NULL, NULL), (float)((float)((float)((float)(this->m_pAI->ent->r.currentOrigin.v[1] - pos.v[1]) * forward.v[1]) + (float)((float)(this->m_pAI->ent->r.currentOrigin.v[0] - pos.v[0]) * forward.v[0])) + (float)((float)(this->m_pAI->ent->r.currentOrigin.v[2] - pos.v[2]) * forward.v[2])) >= 0.0) )
        {
          if ( AIScriptedInterface::IsSuppressed(m_pAI) || !m_pAI->IsMoving(m_pAI) )
          {
            threatCoveringFire = enemySelector->threatCoveringFire;
            if ( EntHandle::isDefinedAndMatchesEnt(&this->m_pAI->sentient->targetEnt, enemy->ent) )
              threatCoveringFire = enemySelector->threatCoverFireCurTarget;
            DebugSetThreatString(TDS_SUPPRESSED, threatCoveringFire);
            return threatCoveringFire;
          }
        }
      }
      return 0i64;
    }
  }
  if ( !g_skipDebugString )
  {
    if ( enemySelector->threatCoveringFire )
    {
      LODWORD(fmt) = enemySelector->threatCoveringFire;
      Com_sprintf(g_threatDebugStrings[2], 0x40ui64, "%s %d", g_threatDebugLabels[2], fmt);
      return (unsigned int)enemySelector->threatCoveringFire;
    }
    g_threatDebugStrings[2][0] = 0;
  }
  return (unsigned int)enemySelector->threatCoveringFire;
}

/*
==============
AICommonInterface::ThreatFlashed
==============
*/
__int64 AICommonInterface::ThreatFlashed(AICommonInterface *this, sentient_s *enemy, const EnemySelector *enemySelector)
{
  int IsClientFlashbanged; 
  gclient_s *client; 
  char *fmt; 
  AIWrapper v9; 

  if ( !enemy && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 881, ASSERT_TYPE_ASSERT, "(enemy)", (const char *)&queryFormat, "enemy") )
    __debugbreak();
  AIWrapper::AIWrapper(&v9, enemy->ent);
  if ( v9.m_pAI )
  {
    IsClientFlashbanged = v9.m_pAI->IsFlashBanged(v9.m_pAI);
  }
  else
  {
    client = enemy->ent->client;
    if ( !client )
      return 0i64;
    IsClientFlashbanged = G_Combat_IsClientFlashbanged(&client->ps);
  }
  if ( !IsClientFlashbanged )
    return 0i64;
  if ( !g_skipDebugString )
  {
    if ( enemySelector->threatFlashedEnemy )
    {
      LODWORD(fmt) = enemySelector->threatFlashedEnemy;
      Com_sprintf(g_threatDebugStrings[1], 0x40ui64, "%s %d", g_threatDebugLabels[1], fmt);
      return (unsigned int)enemySelector->threatFlashedEnemy;
    }
    g_threatDebugStrings[1][0] = 0;
  }
  return (unsigned int)enemySelector->threatFlashedEnemy;
}

/*
==============
AICommonInterface::ThreatFromAttackerCount
==============
*/
__int64 AICommonInterface::ThreatFromAttackerCount(AICommonInterface *this, sentient_s *enemy, int isCurrentEnemy, const EnemySelector *enemySelector)
{
  int threatSharedEnemyCap; 
  int attackerCount; 
  int v10; 
  char *fmt; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 763, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !enemy && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 764, ASSERT_TYPE_ASSERT, "(enemy)", (const char *)&queryFormat, "enemy") )
    __debugbreak();
  if ( enemySelector->threatSharedEnemy >= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 765, ASSERT_TYPE_ASSERT, "(enemySelector->threatSharedEnemy < 0)", (const char *)&queryFormat, "enemySelector->threatSharedEnemy < 0") )
    __debugbreak();
  threatSharedEnemyCap = enemySelector->threatSharedEnemyCap;
  attackerCount = enemy->attackerCount - 1;
  if ( !isCurrentEnemy )
    attackerCount = enemy->attackerCount;
  v10 = enemySelector->threatSharedEnemy * attackerCount;
  if ( v10 > threatSharedEnemyCap )
    threatSharedEnemyCap = v10;
  if ( EntHandle::isDefined(&enemy->syncedMeleeEnt) && this->m_pAI->ent != EntHandle::ent(&enemy->syncedMeleeEnt) )
    threatSharedEnemyCap += enemySelector->threatSharedMeleeEnemy;
  if ( !g_skipDebugString )
  {
    if ( threatSharedEnemyCap )
    {
      LODWORD(fmt) = threatSharedEnemyCap;
      Com_sprintf(g_threatDebugStrings[5], 0x40ui64, "%s %d", g_threatDebugLabels[5], fmt);
    }
    else
    {
      g_threatDebugStrings[5][0] = 0;
    }
  }
  return (unsigned int)threatSharedEnemyCap;
}

/*
==============
AIScriptedInterface::ThreatFromCover
==============
*/
__int64 AIScriptedInterface::ThreatFromCover(AIScriptedInterface *this, sentient_s *enemy, float distance, const EnemySelector *enemySelector)
{
  gclient_s *client; 
  sentient_s *sentient; 
  pathnode_t *pClaimedNode; 
  const tacpoint_t *v11; 
  vec3_t pos; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 594, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !enemy && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 595, ASSERT_TYPE_ASSERT, "(enemy)", (const char *)&queryFormat, "enemy") )
    __debugbreak();
  if ( distance >= enemySelector->threatDistanceMaxRange )
    return 0i64;
  client = enemy->ent->client;
  if ( client && client->ps.groundEntityNum == 2047 )
  {
    DebugSetThreatString(TDS_JUMPING, enemySelector->threatNoCover);
    return (unsigned int)enemySelector->threatNoCover;
  }
  sentient = this->m_pAI->sentient;
  pClaimedNode = sentient->pClaimedNode;
  if ( !pClaimedNode || (pathnode_t::GetPos(sentient->pClaimedNode, &pos), !AICommonInterface::PointNearPointSqDist(this, &this->m_pAI->ent->r.currentOrigin, &pos, 1406.25)) )
    pClaimedNode = AIScriptedInterface::GetCoverNode(this);
  if ( !pClaimedNode )
    return 0i64;
  pathnode_t::GetPos(pClaimedNode, &pos);
  if ( !AICommonInterface::PointNearPointSqDist(this, &this->m_pAI->ent->r.currentOrigin, &pos, 1406.25) )
    return 0i64;
  v11 = Sentient_NearestTacPoint(enemy);
  if ( !v11 || Path_NodeSafeFrom(pClaimedNode, v11) )
    return 0i64;
  DebugSetThreatString(TDS_NO_COVER, enemySelector->threatNoCover);
  return (unsigned int)enemySelector->threatNoCover;
}

/*
==============
AICommonInterface::ThreatFromDistance
==============
*/
__int64 AICommonInterface::ThreatFromDistance(const float fDistance, const EnemySelector *enemySelector)
{
  unsigned int v6; 
  const char *v7; 

  if ( fDistance < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 640, ASSERT_TYPE_ASSERT, "(fDistance >= 0)", (const char *)&queryFormat, "fDistance >= 0") )
    __debugbreak();
  if ( fDistance >= enemySelector->threatDistanceMaxRange )
    return 0i64;
  _XMM1 = 0i64;
  __asm { vroundss xmm3, xmm1, xmm4, 1 }
  v6 = (int)*(float *)&_XMM3;
  v7 = j_va("%d (%0.1f)", (unsigned int)(int)*(float *)&_XMM3, fDistance);
  if ( !g_skipDebugString )
  {
    if ( v7 )
    {
      Com_sprintf(g_threatDebugStrings[8], 0x40ui64, "%s %s", g_threatDebugLabels[8], v7);
      return v6;
    }
    g_threatDebugStrings[8][0] = 0;
  }
  return v6;
}

/*
==============
AIScriptedInterface::ThreatFromKilledNearbyTeammate
==============
*/
__int64 AIScriptedInterface::ThreatFromKilledNearbyTeammate(AIScriptedInterface *this, sentient_s *enemy, const EnemySelector *enemySelector)
{
  ai_scripted_t *m_pAI; 
  gentity_s *ent; 
  char *fmt; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 926, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !enemy && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 927, ASSERT_TYPE_ASSERT, "(enemy)", (const char *)&queryFormat, "enemy") )
    __debugbreak();
  if ( !enemy->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 928, ASSERT_TYPE_ASSERT, "(enemy->ent)", (const char *)&queryFormat, "enemy->ent") )
    __debugbreak();
  m_pAI = this->m_pAI;
  ent = enemy->ent;
  if ( !EntHandle::isDefined(&m_pAI->lastTeamKillerEnemy) || EntHandle::ent(&m_pAI->lastTeamKillerEnemy) != ent || level.time - this->m_pAI->lastNearbyTeammateKilledTime > 6000 )
    return 0i64;
  if ( !g_skipDebugString )
  {
    if ( enemySelector->threatKilledTeammateRecently )
    {
      LODWORD(fmt) = enemySelector->threatKilledTeammateRecently;
      Com_sprintf(g_threatDebugStrings[14], 0x40ui64, "%s %d", g_threatDebugLabels[14], fmt);
      return (unsigned int)enemySelector->threatKilledTeammateRecently;
    }
    g_threatDebugStrings[14][0] = 0;
  }
  return (unsigned int)enemySelector->threatKilledTeammateRecently;
}

/*
==============
AIScriptedInterface::ThreatFromPlayerAttackedMeRecently
==============
*/
__int64 AIScriptedInterface::ThreatFromPlayerAttackedMeRecently(AIScriptedInterface *this, sentient_s *enemy, int lastAttackedTime, const EnemySelector *enemySelector)
{
  char *fmt; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 910, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !enemy && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 911, ASSERT_TYPE_ASSERT, "(enemy)", (const char *)&queryFormat, "enemy") )
    __debugbreak();
  if ( !enemy->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 912, ASSERT_TYPE_ASSERT, "(enemy->ent)", (const char *)&queryFormat, "enemy->ent") )
    __debugbreak();
  if ( !enemy->ent->client || level.time - lastAttackedTime > 5000 )
    return 0i64;
  if ( !g_skipDebugString )
  {
    if ( enemySelector->threatPlayerAttackedMeRecently )
    {
      LODWORD(fmt) = enemySelector->threatPlayerAttackedMeRecently;
      Com_sprintf(g_threatDebugStrings[11], 0x40ui64, "%s %d", g_threatDebugLabels[11], fmt);
      return (unsigned int)enemySelector->threatPlayerAttackedMeRecently;
    }
    g_threatDebugStrings[11][0] = 0;
  }
  return (unsigned int)enemySelector->threatPlayerAttackedMeRecently;
}

/*
==============
AICommonInterface::ThreatFromScariness
==============
*/
int AICommonInterface::ThreatFromScariness(const float fScariness, const EnemySelector *enemySelector)
{
  int result; 
  int v3; 

  result = I_clamp((int)(float)((float)enemySelector->threatScarinessScale * fScariness), enemySelector->threatScarinessMin, enemySelector->threatScarinessMax);
  v3 = result;
  if ( !g_skipDebugString )
  {
    if ( result )
    {
      Com_sprintf(g_threatDebugStrings[9], 0x40ui64, "%s %d", g_threatDebugLabels[9], result);
      return v3;
    }
    else
    {
      g_threatDebugStrings[9][0] = 0;
    }
  }
  return result;
}

/*
==============
AICommonInterface::ThreatFromVisibilityAndAwareness
==============
*/
__int64 AICommonInterface::ThreatFromVisibilityAndAwareness(int isVisible, int isFullyAware, int friendlyTimingOut, const EnemySelector *enemySelector)
{
  unsigned int threatVisible; 
  char *v9; 
  char *fmt; 

  if ( enemySelector->threatVisible < enemySelector->threatFullyAware && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 721, ASSERT_TYPE_ASSERT, "(enemySelector->threatVisible >= enemySelector->threatFullyAware)", (const char *)&queryFormat, "enemySelector->threatVisible >= enemySelector->threatFullyAware") )
    __debugbreak();
  threatVisible = 0;
  if ( isVisible )
  {
    threatVisible = enemySelector->threatVisible;
    v9 = j_va("%d (visible)", threatVisible);
    if ( !g_skipDebugString )
    {
      if ( v9 )
      {
        Com_sprintf(g_threatDebugStrings[7], 0x40ui64, "%s %s", g_threatDebugLabels[7], v9);
        return threatVisible;
      }
      goto LABEL_16;
    }
  }
  else
  {
    if ( isFullyAware )
    {
      threatVisible = enemySelector->threatFullyAware;
    }
    else if ( friendlyTimingOut )
    {
      threatVisible = enemySelector->threatFriendlyTimingOutOnEnemy;
    }
    if ( !g_skipDebugString )
    {
      if ( !threatVisible )
      {
LABEL_16:
        g_threatDebugStrings[7][0] = 0;
        return threatVisible;
      }
      LODWORD(fmt) = threatVisible;
      Com_sprintf(g_threatDebugStrings[7], 0x40ui64, "%s %d", g_threatDebugLabels[7], fmt);
    }
  }
  return threatVisible;
}

/*
==============
AICommonInterface::UpdateSecondaryTargets
==============
*/
void AICommonInterface::UpdateSecondaryTargets(AICommonInterface *this, PotentialTargetData *potentialTargets, int numPotentialTargets)
{
  __int64 v3; 
  gentity_s *TargetEntity; 
  gentity_s *v7; 
  ai_common_t *m_pAI; 
  __int64 v9; 
  float v10; 
  __int128 v11; 
  __int128 v12; 
  float v13; 
  float v17; 
  __int128 v18; 
  float v19; 
  float *v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  ai_common_t *v30; 
  int ClosestDirectionSecondary; 
  __int64 v32; 
  ai_common_t *v33; 
  AISecondaryTarget *v34; 
  __int64 numSecondaryTarget; 
  __int64 v36; 
  __int64 v37; 
  float v38; 
  float v39; 
  float v40; 
  float v41[4]; 

  v3 = numPotentialTargets;
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 1239, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 1240, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  if ( !potentialTargets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 1241, ASSERT_TYPE_ASSERT, "(potentialTargets)", (const char *)&queryFormat, "potentialTargets") )
    __debugbreak();
  this->m_pAI->threat.numSecondaryTarget = 0;
  this->m_pAI->threat.allEnemiesInSimilarDir = 1;
  TargetEntity = AICommonInterface::GetTargetEntity(this);
  v7 = TargetEntity;
  if ( TargetEntity )
  {
    m_pAI = this->m_pAI;
    v9 = v3;
    v10 = TargetEntity->r.currentOrigin.v[0] - m_pAI->ent->r.currentOrigin.v[0];
    v12 = LODWORD(TargetEntity->r.currentOrigin.v[1]);
    *(float *)&v12 = TargetEntity->r.currentOrigin.v[1] - m_pAI->ent->r.currentOrigin.v[1];
    v11 = v12;
    v13 = TargetEntity->r.currentOrigin.v[2] - m_pAI->ent->r.currentOrigin.v[2];
    *(float *)&v12 = fsqrt((float)((float)(*(float *)&v12 * *(float *)&v12) + (float)(v10 * v10)) + (float)(v13 * v13));
    _XMM11 = v12;
    __asm
    {
      vcmpless xmm0, xmm11, cs:__real@80000000
      vblendvps xmm0, xmm11, xmm15, xmm0
    }
    v17 = v10 * (float)(1.0 / *(float *)&_XMM0);
    v18 = v11;
    *(float *)&v11 = *(float *)&v11 * (float)(1.0 / *(float *)&_XMM0);
    v19 = v13 * (float)(1.0 / *(float *)&_XMM0);
    *(float *)&v18 = fsqrt((float)((float)(*(float *)&v11 * *(float *)&v11) + (float)(v17 * v17)) + (float)(v19 * v19));
    _XMM3 = v18;
    __asm
    {
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm0, xmm3, xmm15, xmm0
    }
    v39 = v17 * (float)(1.0 / *(float *)&_XMM0);
    v38 = *(float *)&v11 * (float)(1.0 / *(float *)&_XMM0);
    v40 = v19 * (float)(1.0 / *(float *)&_XMM0);
    if ( (int)v3 > 0 )
    {
      v23 = &potentialTargets->dirToEnt.v[2];
      do
      {
        if ( *((gentity_s **)v23 - 3) != v7 )
        {
          v24 = *(v23 - 3);
          if ( v24 <= 2048.0 && v24 >= 15.0 )
          {
            v25 = *(v23 - 2);
            if ( v25 != 0.0 || *(v23 - 1) != 0.0 || *v23 != 0.0 )
            {
              v26 = *(v23 - 1);
              v27 = *v23;
              v28 = (float)((float)(v25 * v25) + (float)(v26 * v26)) + (float)(v27 * v27);
              if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v28 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 1281, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( potential->dirToEnt ) )", "(%g, %g, %g) len %g", v25, v26, v27, fsqrt(v28)) )
                __debugbreak();
              if ( (float)((float)((float)(v38 * *(v23 - 1)) + (float)(v39 * *(v23 - 2))) + (float)(v40 * *v23)) < 0.866 || (v29 = *(float *)&_XMM11 / *(v23 - 3), v29 <= 0.69999999) || v29 >= 1.4285715 )
              {
                v30 = this->m_pAI;
                if ( v30->threat.numSecondaryTarget )
                {
                  ClosestDirectionSecondary = AICommonInterface::GetClosestDirectionSecondary(this, (const PotentialTargetData *)(v23 - 6));
                  v32 = ClosestDirectionSecondary;
                  if ( (unsigned int)ClosestDirectionSecondary >= 2 )
                  {
                    LODWORD(v37) = 2;
                    LODWORD(v36) = ClosestDirectionSecondary;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 1296, ASSERT_TYPE_ASSERT, "(unsigned)( closestSecondaryIndex ) < (unsigned)( 2 )", "closestSecondaryIndex doesn't index NUM_SECONDARY_TARGET\n\t%i not in [0, %i)", v36, v37) )
                      __debugbreak();
                  }
                  v33 = this->m_pAI;
                  v34 = &v33->threat.secondaryTargets[v32];
                  if ( v33->threat.numSecondaryTarget == 2 || AICommonInterface::IsSimilarTarget(&v33->threat.secondaryTargets[v32].dirToEnt, (const vec3_t *)(v23 - 2), v33->threat.secondaryTargets[v32].distToEnt, *(v23 - 3)) )
                  {
                    if ( *((_DWORD *)v23 - 4) > SLODWORD(v41[v32]) )
                    {
                      AICommonInterface::InitSecondaryTarget(this, v34, (const PotentialTargetData *)(v23 - 6));
                      v41[v32] = *(v23 - 4);
                    }
                  }
                  else
                  {
                    numSecondaryTarget = this->m_pAI->threat.numSecondaryTarget;
                    if ( (unsigned int)numSecondaryTarget >= 2 )
                    {
                      LODWORD(v37) = 2;
                      LODWORD(v36) = this->m_pAI->threat.numSecondaryTarget;
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 1313, ASSERT_TYPE_ASSERT, "(unsigned)( secondaryIndex ) < (unsigned)( 2 )", "secondaryIndex doesn't index NUM_SECONDARY_TARGET\n\t%i not in [0, %i)", v36, v37) )
                        __debugbreak();
                    }
                    AICommonInterface::InitSecondaryTarget(this, &this->m_pAI->threat.secondaryTargets[numSecondaryTarget], (const PotentialTargetData *)(v23 - 6));
                    v41[numSecondaryTarget] = *(v23 - 4);
                    ++this->m_pAI->threat.numSecondaryTarget;
                  }
                }
                else
                {
                  AICommonInterface::InitSecondaryTarget(this, v30->threat.secondaryTargets, (const PotentialTargetData *)(v23 - 6));
                  v41[0] = *(v23 - 4);
                  ++this->m_pAI->threat.numSecondaryTarget;
                }
              }
            }
          }
        }
        v23 += 8;
        --v9;
      }
      while ( v9 );
    }
    this->m_pAI->threat.allEnemiesInSimilarDir = AICommonInterface::AllSecondaryTargetsForward(this);
  }
}

/*
==============
AICommonInterface::UpdateSingleThreat
==============
*/
__int64 AICommonInterface::UpdateSingleThreat(AICommonInterface *this, sentient_s *enemy, float enemyDist, bool useCombatLine, const vec3_t *combatLinePos, const vec3_t *combatLineAllyDir, int updateDebug, const EnemySelector *enemySelector)
{
  __int128 v8; 
  __int128 v9; 
  sentient_info_t *SentientInfo; 
  ai_common_t *m_pAI; 
  sentient_info_t *v15; 
  int iLastAttackMeTime; 
  sentient_s *TargetSentient; 
  int bVisible; 
  BOOL v20; 
  ai_common_t *v21; 
  sentient_info_t *v22; 
  int v23; 
  int v24; 
  int v25; 
  int v30; 
  float v31; 
  double ScarinessForDistance; 
  float v33; 
  double v34; 
  ai_common_t *v35; 
  const dvar_t *v36; 
  const dvar_t *v37; 
  int threatFullyAware; 
  char *v39; 
  int v40; 
  const char *v43; 
  int threatSharedEnemyCap; 
  int attackerCount; 
  int v46; 
  int v47; 
  int threatCurrentEnemyPlayerDamaged; 
  __int64 v49; 
  int IsClientFlashbanged; 
  gclient_s *client; 
  int threatFlashedEnemy; 
  int v53; 
  int v54; 
  int v55; 
  unsigned int v56; 
  double v57; 
  const char *v58; 
  char *fmt; 
  int v61; 
  unsigned int threatVisible; 
  int v63; 
  int v64; 
  BOOL v65; 
  int v66; 
  BOOL v67; 
  int v68; 
  int threat; 
  int v70; 
  int iThreatBias; 
  sentient_info_t *v72; 
  AIWrapper v73; 
  vec3_t outLastKnownPos; 
  __int128 v75; 
  __int128 v76; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 949, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 950, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  if ( !enemy && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 951, ASSERT_TYPE_ASSERT, "(enemy)", (const char *)&queryFormat, "enemy") )
    __debugbreak();
  v63 = 0;
  SentientInfo = Sentient_GetSentientInfo(this->m_pAI->sentient, enemy);
  m_pAI = this->m_pAI;
  v15 = SentientInfo;
  v72 = SentientInfo;
  if ( m_pAI->threat.bPacifist )
  {
    iLastAttackMeTime = SentientInfo->iLastAttackMeTime;
    if ( !iLastAttackMeTime || level.time - iLastAttackMeTime >= m_pAI->threat.iPacifistWait )
    {
      if ( updateDebug )
      {
        DebugThreatStringSimple(m_pAI, enemy->ent, "ignoreme pacifist", &colorRed);
        return 0x80000000i64;
      }
      return 0x80000000i64;
    }
  }
  threat = AICommonInterface::GetThreatBias(enemy->iThreatBiasGroupIndex, m_pAI->sentient->iThreatBiasGroupIndex);
  if ( threat == 0x80000000 )
    return 0x80000000i64;
  v76 = v8;
  v75 = v9;
  TargetSentient = AICommonInterface::GetTargetSentient(this);
  bVisible = v15->VisCache.bVisible;
  v20 = enemy == TargetSentient;
  v67 = v20;
  if ( !Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH) || !SV_BotIsBotEnt(this->m_pAI->ent) )
  {
    if ( !bVisible )
      goto LABEL_25;
LABEL_36:
    v24 = 1;
    goto LABEL_37;
  }
  if ( bVisible || SV_BotCanAlwaysSeeEnt(this->m_pAI, enemy->ent) && SV_BotEntInCurrentFOV(this->m_pAI, enemy->ent) )
  {
    bVisible = 1;
    goto LABEL_36;
  }
  bVisible = 0;
LABEL_25:
  v21 = this->m_pAI;
  if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 689, ASSERT_TYPE_ASSERT, "(self)", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( !v21->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 690, ASSERT_TYPE_ASSERT, "(self->sentient)", (const char *)&queryFormat, "self->sentient") )
    __debugbreak();
  v22 = Sentient_GetSentientInfo(v21->sentient, enemy);
  v23 = level.time - v22->lastKnownPosTime;
  if ( v20 )
  {
    if ( v23 < 10000 )
      goto LABEL_36;
    SentientInfo_GetLastKnownPos(v22, &outLastKnownPos);
    if ( (float)((float)((float)((float)(enemy->ent->r.currentOrigin.v[1] - outLastKnownPos.v[1]) * (float)(enemy->ent->r.currentOrigin.v[1] - outLastKnownPos.v[1])) + (float)((float)(enemy->ent->r.currentOrigin.v[0] - outLastKnownPos.v[0]) * (float)(enemy->ent->r.currentOrigin.v[0] - outLastKnownPos.v[0]))) + (float)((float)(enemy->ent->r.currentOrigin.v[2] - outLastKnownPos.v[2]) * (float)(enemy->ent->r.currentOrigin.v[2] - outLastKnownPos.v[2]))) < 4096.0 && Sentient_HasDecentVis(v21->sentient, enemy) )
      goto LABEL_36;
  }
  v24 = 0;
  if ( v23 < 10000 )
    goto LABEL_36;
LABEL_37:
  v25 = 0;
  _XMM0 = 0i64;
  _XMM2 = 0i64;
  v61 = v24;
  __asm
  {
    vcvtsi2sd xmm0, xmm0, dword ptr [rax+1BCh]
    vcvtsi2sd xmm2, xmm2, dword ptr [rax+1B8h]
  }
  *(_QWORD *)outLastKnownPos.v = enemy->ent->client;
  v65 = *(double *)&_XMM0 * 0.8 > *(double *)&_XMM2;
  if ( v24 || v67 && (v30 = level.time - v72->lastKnownPosTime, LOBYTE(v25) = v30 < 10000, v63 = v25, v30 < 10000) )
  {
    ScarinessForDistance = Sentient_GetScarinessForDistance(this->m_pAI->sentient, enemy, enemyDist);
    v33 = *(float *)&ScarinessForDistance;
    v34 = Sentient_GetScarinessForDistance(enemy, this->m_pAI->sentient, enemyDist);
    v31 = v33 - *(float *)&v34;
  }
  else
  {
    v31 = 0.0;
  }
  if ( updateDebug )
  {
    v35 = this->m_pAI;
    if ( !v35 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 420, ASSERT_TYPE_ASSERT, "(self)", (const char *)&queryFormat, "self") )
      __debugbreak();
    v36 = DVARINT_ai_debugThreatSelection;
    if ( !DVARINT_ai_debugThreatSelection && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugThreatSelection") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v36);
    if ( v36->current.integer != 1 )
      goto LABEL_55;
    v37 = DVARINT_ai_debugEntIndex;
    if ( !DVARINT_ai_debugEntIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugEntIndex") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v37);
    if ( v37->current.integer == v35->ent->s.number )
    {
      g_skipDebugString = 0;
      g_threatDebugStrings[0][0] = 0;
      g_threatDebugStrings[1][0] = 0;
      g_threatDebugStrings[2][0] = 0;
      g_threatDebugStrings[3][0] = 0;
      g_threatDebugStrings[4][0] = 0;
      g_threatDebugStrings[5][0] = 0;
      g_threatDebugStrings[6][0] = 0;
      g_threatDebugStrings[7][0] = 0;
      g_threatDebugStrings[8][0] = 0;
      g_threatDebugStrings[9][0] = 0;
      g_threatDebugStrings[10][0] = 0;
      g_threatDebugStrings[11][0] = 0;
      g_threatDebugStrings[12][0] = 0;
      g_threatDebugStrings[13][0] = 0;
      g_threatDebugStrings[14][0] = 0;
    }
    else
    {
LABEL_55:
      g_skipDebugString = 1;
    }
    DebugSetThreatString(TDS_THREATBIAS_GROUP, threat);
    DebugSetThreatString(TDS_THREATBIAS, enemy->iThreatBias);
    v24 = v61;
  }
  iThreatBias = enemy->iThreatBias;
  if ( enemySelector->threatVisible < enemySelector->threatFullyAware && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 721, ASSERT_TYPE_ASSERT, "(enemySelector->threatVisible >= enemySelector->threatFullyAware)", (const char *)&queryFormat, "enemySelector->threatVisible >= enemySelector->threatFullyAware") )
    __debugbreak();
  threatFullyAware = 0;
  threatVisible = 0;
  if ( bVisible )
  {
    threatVisible = enemySelector->threatVisible;
    v39 = j_va("%d (visible)", threatVisible);
    if ( g_skipDebugString )
      goto LABEL_73;
    if ( v39 )
    {
      Com_sprintf(g_threatDebugStrings[7], 0x40ui64, "%s %s", g_threatDebugLabels[7], v39);
      goto LABEL_73;
    }
    goto LABEL_72;
  }
  if ( v24 )
  {
    threatFullyAware = enemySelector->threatFullyAware;
  }
  else
  {
    if ( !v25 )
      goto LABEL_69;
    threatFullyAware = enemySelector->threatFriendlyTimingOutOnEnemy;
  }
  threatVisible = threatFullyAware;
LABEL_69:
  if ( g_skipDebugString )
    goto LABEL_73;
  if ( threatFullyAware )
  {
    LODWORD(fmt) = threatFullyAware;
    Com_sprintf(g_threatDebugStrings[7], 0x40ui64, "%s %d", g_threatDebugLabels[7], fmt);
    goto LABEL_73;
  }
LABEL_72:
  g_threatDebugStrings[7][0] = 0;
LABEL_73:
  v40 = I_clamp((int)(float)((float)enemySelector->threatScarinessScale * v31), enemySelector->threatScarinessMin, enemySelector->threatScarinessMax);
  v70 = v40;
  if ( !g_skipDebugString )
  {
    if ( v40 )
    {
      LODWORD(fmt) = v40;
      Com_sprintf(g_threatDebugStrings[9], 0x40ui64, "%s %d", g_threatDebugLabels[9], fmt);
    }
    else
    {
      g_threatDebugStrings[9][0] = 0;
    }
  }
  if ( enemyDist < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 640, ASSERT_TYPE_ASSERT, "(fDistance >= 0)", (const char *)&queryFormat, "fDistance >= 0") )
    __debugbreak();
  if ( enemyDist < enemySelector->threatDistanceMaxRange )
  {
    _XMM1 = 0i64;
    __asm { vroundss xmm3, xmm1, xmm4, 1 }
    v68 = (int)*(float *)&_XMM3;
    v43 = j_va("%d (%0.1f)", (unsigned int)(int)*(float *)&_XMM3, enemyDist);
    if ( !g_skipDebugString )
    {
      if ( v43 )
        Com_sprintf(g_threatDebugStrings[8], 0x40ui64, "%s %s", g_threatDebugLabels[8], v43);
      else
        g_threatDebugStrings[8][0] = 0;
    }
  }
  else
  {
    v68 = 0;
  }
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 763, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( enemySelector->threatSharedEnemy >= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 765, ASSERT_TYPE_ASSERT, "(enemySelector->threatSharedEnemy < 0)", (const char *)&queryFormat, "enemySelector->threatSharedEnemy < 0") )
    __debugbreak();
  threatSharedEnemyCap = enemySelector->threatSharedEnemyCap;
  attackerCount = enemy->attackerCount - 1;
  if ( !v67 )
    attackerCount = enemy->attackerCount;
  v46 = enemySelector->threatSharedEnemy * attackerCount;
  if ( v46 > threatSharedEnemyCap )
    threatSharedEnemyCap = v46;
  if ( EntHandle::isDefined(&enemy->syncedMeleeEnt) && this->m_pAI->ent != EntHandle::ent(&enemy->syncedMeleeEnt) )
    threatSharedEnemyCap += enemySelector->threatSharedMeleeEnemy;
  v47 = g_skipDebugString;
  if ( !g_skipDebugString )
  {
    if ( threatSharedEnemyCap )
    {
      LODWORD(fmt) = threatSharedEnemyCap;
      Com_sprintf(g_threatDebugStrings[5], (unsigned int)(g_skipDebugString + 64), "%s %d", g_threatDebugLabels[5], fmt);
      v47 = g_skipDebugString;
    }
    else
    {
      g_threatDebugStrings[5][0] = 0;
    }
  }
  threatCurrentEnemyPlayerDamaged = 0;
  if ( v67 )
  {
    if ( v24 )
    {
      if ( *(_QWORD *)outLastKnownPos.v && v65 )
        threatCurrentEnemyPlayerDamaged = enemySelector->threatCurrentEnemyPlayerDamaged;
      else
        threatCurrentEnemyPlayerDamaged = enemySelector->threatFriendliesCurrentEnemy;
    }
    else if ( v63 )
    {
      threatCurrentEnemyPlayerDamaged = enemySelector->threatFriendliesTimeoutEnemy;
    }
    else
    {
      threatCurrentEnemyPlayerDamaged = enemySelector->threatCurrentEnemy;
    }
  }
  if ( !v47 )
  {
    if ( threatCurrentEnemyPlayerDamaged )
    {
      LODWORD(fmt) = threatCurrentEnemyPlayerDamaged;
      Com_sprintf(g_threatDebugStrings[6], 0x40ui64, "%s %d", g_threatDebugLabels[6], fmt);
    }
    else
    {
      g_threatDebugStrings[6][0] = 0;
    }
  }
  AIWrapper::AIWrapper(&v73, enemy->ent);
  if ( v73.m_pAI )
  {
    IsClientFlashbanged = v73.m_pAI->IsFlashBanged(v73.m_pAI);
  }
  else
  {
    client = enemy->ent->client;
    if ( !client )
    {
LABEL_126:
      threatFlashedEnemy = 0;
      goto LABEL_127;
    }
    IsClientFlashbanged = G_Combat_IsClientFlashbanged(&client->ps);
  }
  if ( !IsClientFlashbanged )
    goto LABEL_126;
  if ( g_skipDebugString )
  {
LABEL_125:
    threatFlashedEnemy = enemySelector->threatFlashedEnemy;
    goto LABEL_127;
  }
  if ( !enemySelector->threatFlashedEnemy )
  {
    g_threatDebugStrings[1][0] = 0;
    goto LABEL_125;
  }
  LODWORD(fmt) = enemySelector->threatFlashedEnemy;
  Com_sprintf(g_threatDebugStrings[1], 0x40ui64, "%s %d", g_threatDebugLabels[1], fmt);
  threatFlashedEnemy = enemySelector->threatFlashedEnemy;
LABEL_127:
  v53 = ((__int64 (__fastcall *)(AICommonInterface *, sentient_s *, __int64, const EnemySelector *))this->ThreatFromCover)(this, enemy, v49, enemySelector);
  v64 = this->ThreatFromPlayerAttackedMeRecently(this, enemy, v72->iLastAttackMeTime, enemySelector);
  v66 = this->ThreatFromKilledNearbyTeammate(this, enemy, enemySelector);
  v54 = 0;
  v55 = 0;
  if ( useCombatLine )
  {
    v55 = this->ThreatBehindEnemyLines(this, enemy, combatLinePos, combatLineAllyDir, enemySelector);
    v54 = 0;
  }
  if ( enemyDist > enemySelector->threatMinDistToIgnore )
    v54 = this->ThreatCoveringFire(this, enemy, enemySelector);
  v56 = threat + iThreatBias + v68 + threatFlashedEnemy + v53 + v64 + v66 + v54 + v55 + v70 + threatVisible + threatSharedEnemyCap + threatCurrentEnemyPlayerDamaged;
  if ( updateDebug )
  {
    v57 = (float)((float)(int)v56 / (float)EnemySelector_GetMaxThreat(enemySelector));
    v58 = j_va("%d (%0.3f)", v56, v57);
    DebugSetThreatStringFromString(TDS_TOTAL_THREAT, v58);
    DebugThreatStringAll(this->m_pAI, enemy, v56);
  }
  return v56;
}

/*
==============
AICommonInterface::UpdateThreat
==============
*/
void AICommonInterface::UpdateThreat(AICommonInterface *this)
{
  ai_common_t *m_pAI; 
  int v3; 
  ai_common_t *v4; 
  int time; 
  int threatUpdateTime; 

  if ( this->GetThreatUpdateInterval(this) )
  {
    m_pAI = this->m_pAI;
    if ( level.time < m_pAI->threat.threatUpdateTime )
      return;
    if ( !m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 1139, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
      __debugbreak();
    if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 1140, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
      __debugbreak();
    v3 = this->GetThreatUpdateInterval(this);
    if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 1144, ASSERT_TYPE_ASSERT, "(interval)", (const char *)&queryFormat, "interval") )
      __debugbreak();
    this->m_pAI->threat.threatUpdateTime += v3;
    v4 = this->m_pAI;
    time = level.time;
    threatUpdateTime = v4->threat.threatUpdateTime;
    if ( threatUpdateTime <= level.time )
    {
      v4->threat.threatUpdateTime = threatUpdateTime % v3;
      this->m_pAI->threat.threatUpdateTime += v3 * (level.time / v3 + 1);
      v4 = this->m_pAI;
      time = level.time;
    }
    if ( time >= v4->threat.threatUpdateTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 1154, ASSERT_TYPE_ASSERT, "(level.time < m_pAI->threat.threatUpdateTime)", (const char *)&queryFormat, "level.time < m_pAI->threat.threatUpdateTime") )
      __debugbreak();
  }
  DebugLastKnownEnemyPositions(this->m_pAI);
  AICommonInterface::UpdateThreat_Internal(this);
}

/*
==============
AIScriptedInterface::UpdateThreat
==============
*/
void AIScriptedInterface::UpdateThreat(AIScriptedInterface *this)
{
  AITask_ThreatUpdate *p_threatUpdateTask; 

  p_threatUpdateTask = &this->m_pAI->threatUpdateTask;
  if ( p_threatUpdateTask->status[0] != 1 )
  {
    AIScheduler::AddThreatTask(p_threatUpdateTask);
    DebugLastKnownEnemyPositions(this->m_pAI);
  }
}

/*
==============
AIScriptedInterface::UpdateThreatImmediate
==============
*/
void AIScriptedInterface::UpdateThreatImmediate(AIScriptedInterface *this)
{
  AITask_ThreatUpdate *p_threatUpdateTask; 

  this->m_pAI->threat.threatUpdateTime = level.time;
  AICommonInterface::UpdateThreat_Internal(this);
  p_threatUpdateTask = &this->m_pAI->threatUpdateTask;
  if ( p_threatUpdateTask->status[0] == 1 )
  {
    AIScheduler::RemoveThreatTask(p_threatUpdateTask);
    AIScheduler::AddThreatTask(&this->m_pAI->threatUpdateTask);
  }
}

/*
==============
AICommonInterface::UpdateThreat_Internal
==============
*/
void AICommonInterface::UpdateThreat_Internal(AICommonInterface *this)
{
  signed __int64 v1; 
  void *v2; 
  __int64 v4; 
  const dvar_t *v5; 
  ai_common_t *m_pAI; 
  bool v7; 
  const bitarray<224> *AllCombatTeamFlags; 
  unsigned int v9; 
  sentient_s *sentient; 
  const char *v11; 
  gentity_s *v12; 
  gentity_s *v13; 
  unsigned int v14; 
  bitarray<224> *p_result; 
  int v16; 
  gentity_s *v17; 
  bool v18; 
  ai_common_t *v19; 
  const dvar_t *v20; 
  int v21; 
  const EnemySelector *v22; 
  sentient_s *v23; 
  gentity_s *ent; 
  const vec4_t *v25; 
  const char *v26; 
  sentient_info_t *SentientInfo; 
  sentient_s *v28; 
  float MaxThreat; 
  sentient_s *v30; 
  const char *v31; 
  int iLastAttackMeTime; 
  bool v33; 
  ai_common_t *v34; 
  int iLastVisTime; 
  bool v36; 
  ai_common_t *v37; 
  float v38; 
  float v39; 
  float v40; 
  gentity_s *v41; 
  char v42; 
  float v43; 
  __int128 v44; 
  float v48; 
  __int128 v49; 
  float v50; 
  float v51; 
  double AdjustedEnemyDistForThreat; 
  char v53; 
  int time; 
  const tacpoint_t *v55; 
  PotentialTargetData *v56; 
  gentity_s *v57; 
  const char *v61; 
  ai_common_t *v62; 
  __int64 v63; 
  int v64; 
  ai_common_t *v65; 
  const char *v66; 
  gentity_s *v67; 
  const dvar_t *v68; 
  gentity_s *TargetEntity; 
  gentity_s *v70; 
  unsigned int v71; 
  int v72; 
  __int64 v73; 
  int *p_threat; 
  unsigned int v75; 
  const char *v76; 
  const char *v77; 
  const char *v78; 
  const char *v79; 
  gclient_s *client; 
  const char *name; 
  gclient_s *v82; 
  gclient_s *v83; 
  const char *v84; 
  ai_common_t *v85; 
  gentity_s *v86; 
  const char *v87; 
  const char *v88; 
  const char *v89; 
  const char *v90; 
  gentity_s *v91; 
  sentient_s *v92; 
  __int64 v93; 
  __int64 v94; 
  __int64 v95; 
  bool v96; 
  char v97; 
  int v98; 
  unsigned int number; 
  bool IsUsingTurret; 
  bool v101; 
  bool surprised; 
  gentity_s *v103; 
  int numPotentialTargets; 
  const char *v105; 
  PotentialTargetData *p_potentialTargets; 
  vec4_t v107; 
  __int64 v108; 
  AIWrapper v109; 
  vec3_t vEyePosOut; 
  vec3_t end; 
  float v112; 
  float v113; 
  float v114; 
  bitarray<224> result; 
  float v116; 
  float v117; 
  float v118; 
  vec3_t outLastKnownPos; 
  float v120; 
  int v121; 
  PotentialTargetData potentialTargets; 

  v2 = alloca(v1);
  v108 = -2i64;
  Sys_ProfBeginNamedEvent(0xFF808080, "AI_UpdateThreat");
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 1490, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 1491, ASSERT_TYPE_ASSERT, "(m_pAI->ent)", (const char *)&queryFormat, "m_pAI->ent") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 1492, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  v4 = 0i64;
  *(_QWORD *)v107.v = 0i64;
  numPotentialTargets = 0;
  this->m_pAI->threat.hasThreateningEnemy = 0;
  v5 = DVARBOOL_ai_showPotentialThreatDir;
  if ( !DVARBOOL_ai_showPotentialThreatDir && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showPotentialThreatDir") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( v5->current.enabled )
  {
    if ( !this->m_pAI->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 1991, ASSERT_TYPE_ASSERT, "(m_pAI->ent)", (const char *)&queryFormat, "m_pAI->ent") )
      __debugbreak();
    if ( !this->Is3D(this) )
    {
      Sentient_GetDebugEyePosition(this->m_pAI->sentient, &vEyePosOut);
      m_pAI = this->m_pAI;
      if ( m_pAI->threat.potentialThreat.isEnabled )
      {
        end.v[0] = (float)(32.0 * m_pAI->threat.potentialThreat.direction.v[0]) + vEyePosOut.v[0];
        end.v[1] = (float)(32.0 * m_pAI->threat.potentialThreat.direction.v[1]) + vEyePosOut.v[1];
        end.v[2] = vEyePosOut.v[2];
        G_DebugLine(&vEyePosOut, &end, &colorRed, 0);
      }
      else
      {
        G_Main_AddDebugString(&vEyePosOut, &colorWhite, 1.0, "No Threat");
      }
    }
  }
  this->m_pAI->threat.hasThreateningEnemy = 0;
  if ( level.teammode == TEAMMODE_FFA )
  {
    memset(&result, 0, sizeof(result));
    v7 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80);
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
      AllCombatTeamFlags = Com_TeamsSP_GetAllCombatTeamFlags();
    else
      AllCombatTeamFlags = Com_TeamsMP_GetAllTeamFlags();
    *(_OWORD *)result.array = *(_OWORD *)AllCombatTeamFlags->array;
    *(_QWORD *)&result.array[4] = *(_QWORD *)&AllCombatTeamFlags->array[4];
    v9 = AllCombatTeamFlags->array[6] & 0xFFEFFFFF;
    if ( v7 )
      result.array[0] &= ~0x8000000u;
    result.array[6] = v9 & 0xFF9FFFFF;
  }
  else
  {
    Com_Teams_GetEnemyTeamFlags(&result, this->m_pAI->sentient->eTeam);
  }
  sentient = this->m_pAI->sentient;
  if ( sentient->bIgnoreAll )
  {
    if ( AICommonInterface::GetTargetEntity(this) )
      Sentient_SetEnemy(this->m_pAI->sentient, NULL, 1, 1);
    goto LABEL_208;
  }
  if ( EntHandle::isDefined(&sentient->scriptTargetEnt) && 1.0 == this->m_pAI->sentient->entityTargetThreat )
  {
    v11 = j_va("enemy (%0.3f)", DOUBLE_1_0);
    v12 = EntHandle::ent(&this->m_pAI->sentient->scriptTargetEnt);
    DebugThreatStringSimple(this->m_pAI, v12, v11, &colorGreen);
    v13 = EntHandle::ent(&this->m_pAI->sentient->scriptTargetEnt);
    Sentient_SetEnemy(this->m_pAI->sentient, v13, 1, 1);
    goto LABEL_208;
  }
  v14 = 0;
  p_result = &result;
  while ( !p_result->array[0] )
  {
    ++v14;
    p_result = (bitarray<224> *)((char *)p_result + 4);
    if ( v14 >= 7 )
      goto LABEL_208;
  }
  v16 = -2147483647;
  v98 = -2147483647;
  v17 = NULL;
  v103 = NULL;
  IsUsingTurret = AICommonInterface::IsUsingTurret(this);
  v18 = IsUsingTurret;
  v96 = IsUsingTurret;
  v97 = 0;
  v101 = this->GetCombatLine(this, (vec3_t *)&v116, (vec3_t *)&v120);
  if ( v101 && Dvar_GetInt_Internal_DebugName(DVARINT_ai_debugThreatSelection, "ai_debugThreatSelection") == 1 )
  {
    v19 = this->m_pAI;
    if ( Dvar_GetInt_Internal_DebugName(DVARINT_ai_debugEntIndex, "ai_debugEntIndex") == v19->ent->s.number )
      goto LABEL_47;
  }
  v20 = DVARBOOL_ai_debugCombatLine;
  if ( !DVARBOOL_ai_debugCombatLine && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugCombatLine") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v20);
  if ( v20->current.enabled )
  {
    v19 = this->m_pAI;
LABEL_47:
    end.v[0] = COERCE_FLOAT(v121 ^ _xmm) + v116;
    end.v[1] = v117 + v120;
    end.v[2] = v118;
    vEyePosOut.v[0] = v116 - COERCE_FLOAT(v121 ^ _xmm);
    vEyePosOut.v[1] = v117 - v120;
    vEyePosOut.v[2] = v118;
    v21 = DebugThreatInfoDuration(v19);
    G_DebugLineWithDuration(&end, &vEyePosOut, &colorYellowHeat, 0, v21);
  }
  *(_QWORD *)vEyePosOut.v = Sentient_NearestTacPoint(this->m_pAI->sentient);
  v22 = EnemySelector_Get(this->m_pAI->sentient->enemySelector);
  *(_QWORD *)end.v = v22;
  if ( !v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 1590, ASSERT_TYPE_ASSERT, "(enemySelector)", (const char *)&queryFormat, "enemySelector") )
    __debugbreak();
  v23 = Sentient_FirstSentient(&result);
  v105 = "entity";
  if ( v23 )
  {
    p_potentialTargets = &potentialTargets;
    while ( 1 )
    {
      if ( Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH) && AI_IsAlliedSentient(this->m_pAI->sentient, v23) )
        goto LABEL_66;
      ent = v23->ent;
      if ( v23->ent->health <= 0 && (ent->client || ent->actor || ent->agent || ent->vehicle) )
        break;
      if ( ((unsigned __int8 (__fastcall *)(AICommonInterface *))this->IsValidTarget)(this) )
      {
        this->StoreSentientThreat(this, v23, -2147483647);
        SentientInfo = Sentient_GetSentientInfo(this->m_pAI->sentient, v23);
        surprised = SentientInfo->surprised;
        SentientInfo->surprised = 0;
        if ( SentientInfo->lastKnownPosTime <= 0 )
        {
          v25 = &colorRed;
          v26 = "unaware";
          goto LABEL_64;
        }
        if ( this->CheckIgnore(this, v23) )
        {
          v25 = &colorRed;
          v26 = "ignoreme";
LABEL_64:
          ent = v23->ent;
LABEL_65:
          DebugThreatStringSimple(this->m_pAI, ent, v26, v25);
          goto LABEL_66;
        }
        iLastAttackMeTime = SentientInfo->iLastAttackMeTime;
        v33 = iLastAttackMeTime && level.time - iLastAttackMeTime < 10000;
        if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_ai_threatSight, "ai_threatSight") && (v34 = this->m_pAI, v34->threat.threatSight) && SentientInfo->threatSight < 1.0 && !v33 )
        {
          DebugThreatStringSimple(v34, v23->ent, "threatSight", &colorRed);
          v16 = v98;
        }
        else
        {
          v36 = 1;
          if ( !IsUsingTurret )
          {
            iLastVisTime = SentientInfo->VisCache.iLastVisTime;
            if ( !iLastVisTime || level.time - iLastVisTime >= 10000 )
              v36 = 0;
          }
          SentientInfo_GetLastKnownPos(SentientInfo, &outLastKnownPos);
          if ( SV_BotIsBotEnt(this->m_pAI->ent) )
          {
            this->GetEyePosition(this, (vec3_t *)&v112);
            v37 = this->m_pAI;
            v38 = v114;
            v39 = v113;
            v40 = v112;
          }
          else
          {
            v37 = this->m_pAI;
            v41 = v37->ent;
            v40 = v37->ent->r.currentOrigin.v[0];
            v112 = v40;
            v39 = v41->r.currentOrigin.v[1];
            v113 = v39;
            v38 = v41->r.currentOrigin.v[2];
            v114 = v38;
          }
          v42 = 0;
          v43 = outLastKnownPos.v[0] - v40;
          v44 = LODWORD(outLastKnownPos.v[1]);
          *(float *)&v44 = fsqrt((float)((float)((float)(outLastKnownPos.v[1] - v39) * (float)(outLastKnownPos.v[1] - v39)) + (float)(v43 * v43)) + (float)((float)(outLastKnownPos.v[2] - v38) * (float)(outLastKnownPos.v[2] - v38)));
          _XMM7 = v44;
          __asm
          {
            vcmpless xmm0, xmm7, xmm12
            vblendvps xmm1, xmm7, xmm10, xmm0
          }
          v49 = LODWORD(FLOAT_1_0);
          *(float *)&v49 = (float)(1.0 / *(float *)&_XMM1) * v43;
          v48 = *(float *)&v49;
          v50 = (float)(1.0 / *(float *)&_XMM1) * (float)(outLastKnownPos.v[1] - v39);
          v51 = (float)(1.0 / *(float *)&_XMM1) * (float)(outLastKnownPos.v[2] - v38);
          if ( SV_BotIsBotEnt(v37->ent) )
          {
            AdjustedEnemyDistForThreat = SV_BotGetAdjustedEnemyDistForThreat(this->m_pAI->sentient, v23, *(float *)&_XMM7);
            LODWORD(_XMM7) = LODWORD(AdjustedEnemyDistForThreat);
          }
          v53 = 0;
          time = level.time;
          if ( *(float *)&_XMM7 >= 512.0 || level.time - SentientInfo->lastKnownPosTime >= 10000 )
          {
            if ( this->m_pAI->threat.bCanAcquireNearbyTacVisEnemies && (float)((float)((float)((float)(v113 - v23->ent->r.currentOrigin.v[1]) * (float)(v113 - v23->ent->r.currentOrigin.v[1])) + (float)((float)(v112 - v23->ent->r.currentOrigin.v[0]) * (float)(v112 - v23->ent->r.currentOrigin.v[0]))) + (float)((float)(v114 - v23->ent->r.currentOrigin.v[2]) * (float)(v114 - v23->ent->r.currentOrigin.v[2]))) < 262144.0 )
            {
              if ( level.time - SentientInfo->lastKnownPosTime >= 10000 )
              {
                v55 = Sentient_NearestTacPoint(v23);
                if ( *(_QWORD *)vEyePosOut.v && v55 && TacVisGraph_HasVis(*(const tacpoint_t **)vEyePosOut.v, v55) )
                {
                  v53 = 1;
                  v42 = 1;
                }
                time = level.time;
              }
              else
              {
                v53 = 1;
              }
            }
          }
          else
          {
            v53 = 1;
          }
          v18 = (v36 || v33 || v53) && SentientInfo->attackTime <= time;
          if ( (unsigned int)numPotentialTargets >= 0x110 )
          {
            LODWORD(v94) = 272;
            LODWORD(v93) = numPotentialTargets;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 1729, ASSERT_TYPE_ASSERT, "(unsigned)( numPotentialTargets ) < (unsigned)( ( sizeof( *array_counter( potentialTargets ) ) + 0 ) )", "numPotentialTargets doesn't index ARRAY_COUNT( potentialTargets )\n\t%i not in [0, %i)", v93, v94) )
              __debugbreak();
          }
          v56 = p_potentialTargets;
          ++numPotentialTargets;
          ++p_potentialTargets;
          v57 = v23->ent;
          if ( !v56 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 1160, ASSERT_TYPE_ASSERT, "(potentialTarget)", (const char *)&queryFormat, "potentialTarget") )
            __debugbreak();
          if ( !v57 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 1161, ASSERT_TYPE_ASSERT, "(entity)", (const char *)&queryFormat, "entity") )
            __debugbreak();
          v56->entity = v57;
          v56->distToEnt = *(float *)&_XMM7;
          v4 = 0i64;
          v56->threat = 0;
          v56->dirToEnt.v[1] = v50;
          v56->dirToEnt.v[2] = v51;
          *(float *)&v49 = fsqrt((float)((float)(*(float *)&v49 * *(float *)&v49) + (float)(v50 * v50)) + (float)(v51 * v51));
          _XMM3 = v49;
          __asm
          {
            vcmpless xmm0, xmm3, xmm12
            vblendvps xmm1, xmm3, xmm10, xmm0
          }
          v56->dirToEnt.v[0] = (float)(1.0 / *(float *)&_XMM1) * v48;
          v56->dirToEnt.v[1] = (float)(1.0 / *(float *)&_XMM1) * v56->dirToEnt.v[1];
          v56->dirToEnt.v[2] = (float)(1.0 / *(float *)&_XMM1) * v56->dirToEnt.v[2];
          if ( this->CheckAvoidTarget(this, v23) )
            goto LABEL_127;
          if ( !v18 && v96 )
          {
            v61 = "goodOnly";
            v62 = this->m_pAI;
LABEL_126:
            DebugThreatStringSimple(v62, v23->ent, v61, &colorRed);
LABEL_127:
            v17 = v103;
            v16 = v98;
            v18 = v96;
            goto LABEL_67;
          }
          AIWrapper::AIWrapper(&v109, v23->ent);
          if ( v109.m_pAI )
          {
            v62 = this->m_pAI;
            if ( v62->turret.pTurret && v23->turretInvulnerability )
              goto LABEL_133;
            if ( AIScriptedInterface::ShouldIgnorePain(v109.m_pAI) )
            {
              v62 = this->m_pAI;
LABEL_133:
              v61 = "turret invul";
              goto LABEL_126;
            }
          }
          v64 = ((__int64 (__fastcall *)(AICommonInterface *, sentient_s *, __int64, bool, float *, float *, int, _QWORD))this->UpdateSingleThreat)(this, v23, v63, v101, &v116, &v120, 1, *(_QWORD *)end.v);
          v56->threat = v64;
          this->StoreSentientThreat(this, v23, v64);
          if ( v64 == 0x80000000 )
          {
            DebugThreatStringSimple(this->m_pAI, v23->ent, "ignoreme", &colorRed);
            v17 = v103;
            v16 = v98;
            v18 = v96;
          }
          else
          {
            v16 = v98;
            if ( v98 < v64 || !v96 && v18 || SentientHandle::isDefined(&this->m_pAI->threat.pFavoriteEnemy) && v23 == SentientHandle::sentient(&this->m_pAI->threat.pFavoriteEnemy) )
            {
              if ( !SentientHandle::isDefined(&this->m_pAI->threat.pFavoriteEnemy) || (v16 = 2147483646, v23 != SentientHandle::sentient(&this->m_pAI->threat.pFavoriteEnemy)) )
                v16 = v64;
              v98 = v16;
              v17 = v23->ent;
              v103 = v23->ent;
              v96 = v18;
              this->m_pAI->threat.newEnemyReaction = surprised;
              v65 = this->m_pAI;
              if ( v65->threat.newEnemyReaction )
                v65->threat.newEnemyReactionTime = level.time;
              v97 = v42;
            }
            else
            {
              v17 = v103;
              v18 = v96;
            }
          }
        }
      }
LABEL_66:
      v4 = 0i64;
LABEL_67:
      v23 = Sentient_NextSentient(v23, &result);
      if ( !v23 )
      {
        v22 = *(const EnemySelector **)end.v;
        goto LABEL_69;
      }
    }
    v25 = &colorBlack;
    v26 = "dead";
    goto LABEL_65;
  }
LABEL_69:
  this->m_pAI->threat.hasThreateningEnemy = v18;
  if ( v17 && this->ShouldContinueTargetingDeadEnemy(this, v16) )
    goto LABEL_208;
  if ( EntHandle::isDefined(&this->m_pAI->sentient->scriptTargetEnt) )
  {
    v28 = this->m_pAI->sentient;
    MaxThreat = (float)EnemySelector_GetMaxThreat(v22);
    v30 = this->m_pAI->sentient;
    if ( (float)((float)v16 / MaxThreat) < v28->entityTargetThreat )
    {
      v17 = EntHandle::ent(&v30->scriptTargetEnt);
      v103 = v17;
      v31 = j_va("enemy (%0.3f)", this->m_pAI->sentient->entityTargetThreat);
      goto LABEL_151;
    }
    v66 = j_va("enemy (%0.3f)", v30->entityTargetThreat);
    v67 = EntHandle::ent(&this->m_pAI->sentient->scriptTargetEnt);
    DebugThreatStringSimple(this->m_pAI, v67, v66, &colorYellow);
  }
  if ( !v17 )
    goto LABEL_152;
  v31 = "enemy";
LABEL_151:
  DebugThreatStringSimple(this->m_pAI, v17, v31, &colorGreen);
LABEL_152:
  v68 = DVARBOOL_ai_debugTargetChange;
  if ( !DVARBOOL_ai_debugTargetChange && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugTargetChange") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v68);
  if ( v68->current.enabled )
  {
    TargetEntity = AICommonInterface::GetTargetEntity(this);
    v70 = TargetEntity;
    if ( TargetEntity != v17 )
    {
      v71 = -1;
      if ( TargetEntity )
        number = TargetEntity->s.number;
      else
        number = -1;
      if ( v17 )
        v71 = v17->s.number;
      v72 = 0;
      v73 = numPotentialTargets;
      if ( numPotentialTargets > 0 )
      {
        p_threat = &potentialTargets.threat;
        do
        {
          if ( v70 && *((gentity_s **)p_threat - 1) == v70 )
            v4 = (unsigned int)*p_threat;
          if ( *((gentity_s **)p_threat - 1) == v17 )
            v72 = *p_threat;
          p_threat += 8;
          --v73;
        }
        while ( v73 );
        *(_QWORD *)v107.v = v4;
      }
      v75 = v72 - v4;
      v76 = "entity";
      if ( !v70 )
        v76 = "none";
      v77 = "actor";
      v78 = "actor";
      if ( !this->m_pAI->ent->actor )
        v78 = "entity";
      if ( v70 )
      {
        v79 = "actor";
        if ( !v70->actor )
          v79 = v76;
        v76 = v79;
      }
      if ( v103 )
      {
        if ( !v103->actor )
          v77 = "entity";
        v105 = v77;
      }
      if ( !Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH) )
        goto LABEL_191;
      client = this->m_pAI->ent->client;
      name = client->sess.cs.name;
      if ( !client )
        name = v78;
      if ( v70 )
      {
        v82 = v70->client;
        if ( v82 )
          v76 = v82->sess.cs.name;
      }
      v78 = name;
      if ( !v103 || (v83 = v103->client, v84 = v83->sess.cs.name, !v83) )
LABEL_191:
        v84 = v105;
      v85 = this->m_pAI;
      v86 = v85->ent;
      v87 = "agent";
      v88 = "agent";
      if ( !v85->ent->agent )
        v88 = v78;
      if ( v70 )
      {
        v89 = "agent";
        if ( !v70->agent )
          v89 = v76;
        v76 = v89;
      }
      v17 = v103;
      if ( v103 )
      {
        if ( !v103->agent )
          v87 = v84;
        v84 = v87;
      }
      *(float *)&v95 = v107.v[0];
      LODWORD(v93) = number;
      Com_Printf(18, "TARGET CHANGE (%7i): Entity %i (%s) changing targets from Entity %i (%s) [%i] to Entity %i (%s) [%i] <+%i>\n", (unsigned int)level.time, (unsigned int)v86->s.number, v88, v93, v76, v95, v71, v84, v72, v75);
      if ( SV_BotIsBotEnt(this->m_pAI->ent) )
      {
        v90 = j_va("TGT %i -> %i <+%i>", number, v71, v75);
        v91 = this->m_pAI->ent;
        v107 = colorRedFaded;
        vEyePosOut = v91->r.currentOrigin;
        SV_BotDebugStringEnt(v91, &vEyePosOut, &v107, 1.0, v90, 200);
      }
    }
  }
  Sentient_SetEnemy(this->m_pAI->sentient, v17, 1, 1);
  if ( v97 )
  {
    v92 = v17->sentient;
    if ( v92 )
      this->GetPerfectInfo(this, v92, 0);
  }
  AICommonInterface::UpdateSecondaryTargets(this, &potentialTargets, numPotentialTargets);
LABEL_208:
  Sys_ProfEndNamedEvent();
}

