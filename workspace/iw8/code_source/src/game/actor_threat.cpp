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
  unsigned int v8; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned __int64 eTeam; 
  int OwnerEntNum; 
  int v13; 
  __int64 v15; 
  bitarray<224> result; 

  if ( !thisSentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 1342, ASSERT_TYPE_ASSERT, "(thisSentient)", (const char *)&queryFormat, "thisSentient") )
    __debugbreak();
  if ( !otherSentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 1343, ASSERT_TYPE_ASSERT, "(otherSentient)", (const char *)&queryFormat, "otherSentient") )
    __debugbreak();
  if ( level.teammode == TEAMMODE_FFA )
  {
    v4 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80);
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
      _RAX = Com_TeamsSP_GetAllCombatTeamFlags();
    else
      _RAX = Com_TeamsMP_GetAllTeamFlags();
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vmovsd  xmm1, qword ptr [rax+10h]
    }
    v8 = _RAX->array[6] & 0xFFEFFFFF;
    __asm { vmovups xmmword ptr [rsp+88h+result.array], xmm0 }
    v9 = result.array[0];
    __asm { vmovsd  qword ptr [rsp+88h+result.array+10h], xmm1 }
    if ( v4 )
      v9 = result.array[0] & 0xF7FFFFFF;
    v10 = v8 & 0xFF9FFFFF;
  }
  else
  {
    Com_Teams_GetEnemyTeamFlags(&result, thisSentient->eTeam);
    v10 = result.array[6];
    v9 = result.array[0];
  }
  eTeam = (unsigned int)otherSentient->eTeam;
  result.array[1] = ~result.array[1];
  result.array[2] = ~result.array[2];
  result.array[3] = ~result.array[3];
  result.array[4] = ~result.array[4];
  result.array[5] = ~result.array[5];
  result.array[0] = ~v9;
  result.array[6] = ~v10;
  if ( (unsigned int)eTeam >= 0xE0 )
  {
    LODWORD(v15) = eTeam;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v15, 224) )
      __debugbreak();
  }
  if ( ((0x80000000 >> (eTeam & 0x1F)) & result.array[eTeam >> 5]) != 0 || thisSentient == otherSentient )
    return 1i64;
  if ( !thisSentient->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 1357, ASSERT_TYPE_ASSERT, "( thisSentient->ent )", (const char *)&queryFormat, "thisSentient->ent") )
    __debugbreak();
  if ( !otherSentient->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 1358, ASSERT_TYPE_ASSERT, "( otherSentient->ent )", (const char *)&queryFormat, "otherSentient->ent") )
    __debugbreak();
  OwnerEntNum = AI_GetOwnerEntNum(thisSentient->ent);
  v13 = AI_GetOwnerEntNum(otherSentient->ent);
  if ( v13 != 2047 && v13 == thisSentient->ent->s.number )
    return 1i64;
  return OwnerEntNum != 2047 && (OwnerEntNum == otherSentient->ent->s.number || v13 != 2047 && OwnerEntNum == v13);
}

/*
==============
AIScriptedInterface::CanAttackAll
==============
*/
void AIScriptedInterface::CanAttackAll(AIScriptedInterface *this)
{
  bool v2; 
  unsigned int v6; 
  bitarray<224> *p_result; 
  unsigned int v8; 
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
      _RAX = Com_TeamsSP_GetAllCombatTeamFlags();
    else
      _RAX = Com_TeamsMP_GetAllTeamFlags();
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vmovups xmmword ptr [rsp+68h+result.array], xmm0
      vmovsd  xmm1, qword ptr [rax+10h]
      vmovsd  qword ptr [rsp+68h+result.array+10h], xmm1
    }
    v6 = _RAX->array[6] & 0xFFEFFFFF;
    if ( v2 )
      result.array[0] &= ~0x8000000u;
    result.array[6] = v6 & 0xFF9FFFFF;
  }
  else
  {
    Com_Teams_GetEnemyTeamFlags(&result, this->m_pAI->sentient->eTeam);
  }
  p_result = &result;
  v8 = 0;
  while ( !p_result->array[0] )
  {
    ++v8;
    p_result = (bitarray<224> *)((char *)p_result + 4);
    if ( v8 >= 7 )
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
  int v8; 
  __int64 v9; 
  unsigned __int16 number; 
  __int64 v11; 
  unsigned int v12; 
  __int64 v13; 
  ai_scripted_t *v14; 
  int v15; 
  __int64 v16; 
  __int64 v17; 
  vec3_t *v18; 
  __int64 v21; 
  __int64 v22; 

  __asm { vmovaps [rsp+78h+var_38], xmm6 }
  TargetEntity = AICommonInterface::GetTargetEntity(this);
  __asm { vmovss  xmm6, cs:__real@3f000000 }
  if ( TargetEntity )
  {
    p_currentOrigin = &TargetEntity->r.currentOrigin;
    G_DebugLine(&this->m_pAI->ent->r.currentOrigin, &TargetEntity->r.currentOrigin, &colorGreen, 0);
    __asm { vmovaps xmm2, xmm6; scale }
    G_Main_AddDebugString(p_currentOrigin, &colorGreen, *(float *)&_XMM2, "Primary");
  }
  m_pAI = this->m_pAI;
  v8 = 0;
  if ( m_pAI->threat.numSecondaryTarget > 0 )
  {
    v9 = 0i64;
    do
    {
      number = m_pAI->threat.secondaryTargets[v9].entity.number;
      if ( number )
      {
        v11 = number;
        v12 = number - 1;
        if ( v12 >= 0x800 )
        {
          LODWORD(v22) = 2048;
          LODWORD(v21) = v12;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v21, v22) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        v13 = v11 - 1;
        if ( g_entities[v13].r.isInUse != g_entityIsInUse[v13] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
          __debugbreak();
        if ( !g_entityIsInUse[v13] )
        {
          LODWORD(v22) = m_pAI->threat.secondaryTargets[v9].entity.number - 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v22) )
            __debugbreak();
        }
        if ( m_pAI->threat.secondaryTargets[v9].entity.number )
        {
          v14 = this->m_pAI;
          v15 = v14->threat.secondaryTargets[v9].entity.number;
          if ( (unsigned int)(v15 - 1) >= 0x7FF )
          {
            LODWORD(v22) = 2047;
            LODWORD(v21) = v15 - 1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 223, ASSERT_TYPE_ASSERT, "(unsigned)( number - 1 ) < (unsigned)( ENTITYNUM_NONE )", "number - 1 doesn't index ENTITYNUM_NONE\n\t%i not in [0, %i)", v21, v22) )
              __debugbreak();
          }
          v16 = v14->threat.secondaryTargets[v9].entity.number;
          if ( (unsigned int)(v16 - 1) >= 0x800 )
          {
            LODWORD(v22) = 2048;
            LODWORD(v21) = v16 - 1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v21, v22) )
              __debugbreak();
          }
          if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
            __debugbreak();
          v17 = v16 - 1;
          if ( g_entities[v17].r.isInUse != g_entityIsInUse[v17] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
            __debugbreak();
          if ( !g_entityIsInUse[v17] )
          {
            LODWORD(v22) = v14->threat.secondaryTargets[v9].entity.number - 1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 224, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( G_IsEntityInUse( number - 1 ) )", v22) )
              __debugbreak();
          }
          v18 = &g_entities[v14->threat.secondaryTargets[v9].entity.number - 1].r.currentOrigin;
          G_DebugLine(&this->m_pAI->ent->r.currentOrigin, v18, &colorYellow, 0);
          __asm { vmovaps xmm2, xmm6; scale }
          G_Main_AddDebugString(v18, &colorYellow, *(float *)&_XMM2, "Secondary");
        }
      }
      m_pAI = this->m_pAI;
      ++v8;
      ++v9;
    }
    while ( v8 < m_pAI->threat.numSecondaryTarget );
  }
  __asm { vmovaps xmm6, [rsp+78h+var_38] }
}

/*
==============
DebugLastKnownEnemyPositions
==============
*/
void DebugLastKnownEnemyPositions(ai_common_t *self)
{
  int v3; 
  AICommonInterface *m_pAI; 
  const dvar_t *v5; 
  const dvar_t *v6; 
  const dvar_t *v7; 
  bitarray<224> *i; 
  sentient_s *TargetSentient; 
  sentient_s *v10; 
  sentient_info_t *SentientInfo; 
  const vec4_t *v13; 
  const char *v14; 
  AICommonWrapper v17; 
  vec3_t outLastKnownPos; 
  vec3_t vEyePosOut; 
  bitarray<224> result; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 374, ASSERT_TYPE_ASSERT, "(self)", (const char *)&queryFormat, "self") )
    __debugbreak();
  AIActorInterface::AIActorInterface(&v17.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v17.m_newAgentInterface);
  v17.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  AICommonInterface::AICommonInterface(&v17.m_botInterface);
  v17.m_botInterface.__vftable = (AIBotInterface_vtbl *)&AIBotInterface::`vftable';
  AICommonInterface::AICommonInterface(&v17.m_botAgentInterface);
  v3 = 0;
  v17.m_botAgentInterface.__vftable = (AIBotAgentInterface_vtbl *)&AIBotAgentInterface::`vftable';
  m_pAI = NULL;
  v17.m_pAI = NULL;
  if ( self )
  {
    AICommonWrapper::Setup(&v17, self->ent);
    m_pAI = v17.m_pAI;
  }
  if ( !m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 375, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  v5 = DVARBOOL_ai_showLastKnownEnemyPos;
  if ( !DVARBOOL_ai_showLastKnownEnemyPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showLastKnownEnemyPos") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( v5->current.enabled )
  {
    v6 = DVARINT_ai_debugEntIndex;
    if ( !DVARINT_ai_debugEntIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugEntIndex") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    if ( v6->current.integer < 0 )
      goto LABEL_21;
    v7 = DVARINT_ai_debugEntIndex;
    if ( !DVARINT_ai_debugEntIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugEntIndex") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    if ( v7->current.integer == self->ent->s.number )
    {
LABEL_21:
      Sentient_EnemyTeamFlags(&result, self->sentient->eTeam);
      for ( i = &result; !i->array[0]; i = (bitarray<224> *)((char *)i + 4) )
      {
        if ( (unsigned int)++v3 >= 7 )
          return;
      }
      TargetSentient = AICommonInterface::GetTargetSentient(m_pAI);
      Sentient_GetDebugEyePosition(self->sentient, &vEyePosOut);
      v10 = Sentient_FirstSentient(&result);
      if ( v10 )
      {
        __asm
        {
          vmovaps [rsp+148h+var_38], xmm6
          vmovss  xmm6, cs:__real@3f000000
        }
        do
        {
          SentientInfo = Sentient_GetSentientInfo(self->sentient, v10);
          if ( SentientInfo->lastKnownPosTime > 0 )
          {
            v13 = &colorMdGrey;
            if ( v10 == TargetSentient )
              v13 = &colorWhite;
            SentientInfo_GetLastKnownPos(SentientInfo, &outLastKnownPos);
            v14 = j_va("%d", (unsigned int)v10->ent->s.number);
            __asm { vmovaps xmm2, xmm6; scale }
            G_Main_AddDebugString(&outLastKnownPos, v13, *(float *)&_XMM2, v14);
            G_DebugLine(&vEyePosOut, &outLastKnownPos, v13, 1);
          }
          v10 = Sentient_NextSentient(v10, &result);
        }
        while ( v10 );
        __asm { vmovaps xmm6, [rsp+148h+var_38] }
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
  const dvar_t *v10; 
  const dvar_t *v11; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  scr_string_t enemySelector; 
  ntl::red_black_tree_node_base *mp_parent; 
  const EnemySelector *v15; 
  sentient_s *sentient; 
  int v29; 
  char (*v34)[64]; 
  const char *v35; 
  __int64 v36; 
  int v37; 
  vec3_t end; 
  vec4_t color; 
  vec3_t vEyePosOut; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 463, ASSERT_TYPE_ASSERT, "(self)", (const char *)&queryFormat, "self") )
    __debugbreak();
  v10 = DVARINT_ai_debugThreatSelection;
  if ( !DVARINT_ai_debugThreatSelection && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugThreatSelection") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  if ( v10->current.integer == 1 )
  {
    v11 = DVARINT_ai_debugEntIndex;
    if ( !DVARINT_ai_debugEntIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugEntIndex") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    if ( v11->current.integer == self->ent->s.number )
    {
      __asm
      {
        vmovaps [rsp+0D8h+var_38], xmm6
        vmovaps [rsp+0D8h+var_48], xmm7
        vmovaps [rsp+0D8h+var_58], xmm8
      }
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
        v15 = NULL;
      else
        v15 = (const EnemySelector *)p_m_endNodeBase[1].mp_parent;
      __asm
      {
        vxorps  xmm6, xmm6, xmm6
        vcvtsi2ss xmm6, xmm6, esi
      }
      EnemySelector_GetMaxThreat(v15);
      __asm
      {
        vmovss  xmm7, cs:__real@3f800000
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vdivss  xmm0, xmm6, xmm0; val
        vmovaps xmm2, xmm7; max
        vxorps  xmm1, xmm1, xmm1; min
        vxorps  xmm6, xmm6, xmm6
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm { vmovss  xmm8, cs:__real@3f000000 }
      sentient = self->sentient;
      __asm
      {
        vaddss  xmm1, xmm0, xmm7
        vmulss  xmm2, xmm1, xmm8
        vmovss  dword ptr [rsp+0D8h+color], xmm2
        vmovss  dword ptr [rsp+0D8h+color+4], xmm2
        vmovss  dword ptr [rsp+0D8h+color+8], xmm6
        vmovss  dword ptr [rsp+0D8h+color+0Ch], xmm7
      }
      Sentient_GetDebugEyePosition(sentient, &vEyePosOut);
      Sentient_GetDebugEyePosition(pEnemy, &end);
      v29 = DebugThreatInfoDuration(self);
      G_DebugLineWithDuration(&vEyePosOut, &end, &color, 0, v29);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+0D8h+end+8]
        vaddss  xmm1, xmm0, cs:__real@42000000
        vmovss  xmm6, cs:__real@41000000
        vmovaps xmm7, [rsp+0D8h+var_48]
      }
      v34 = g_threatDebugStrings;
      __asm { vmovss  dword ptr [rsp+0D8h+end+8], xmm1 }
      v35 = g_threatDebugStrings[0];
      v36 = 15i64;
      do
      {
        if ( *(_BYTE *)v34 )
        {
          v37 = DebugThreatInfoDuration(self);
          __asm { vmovaps xmm2, xmm8; scale }
          G_Main_AddDebugStringWithDuration(&end, &color, *(float *)&_XMM2, v35, v37);
          __asm { vmovss  xmm1, dword ptr [rsp+0D8h+end+8] }
        }
        v35 += 64;
        ++v34;
        __asm
        {
          vaddss  xmm1, xmm1, xmm6
          vmovss  dword ptr [rsp+0D8h+end+8], xmm1
        }
        --v36;
      }
      while ( v36 );
      __asm
      {
        vmovaps xmm8, [rsp+0D8h+var_58]
        vmovaps xmm6, [rsp+0D8h+var_38]
      }
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
  const sentient_s *sentient; 
  int v14; 
  int v17; 
  vec3_t end; 
  vec3_t vEyePosOut; 

  _RBX = pEnemy;
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
      if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 503, ASSERT_TYPE_ASSERT, "(pEnemy)", (const char *)&queryFormat, "pEnemy") )
        __debugbreak();
      if ( !string && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 504, ASSERT_TYPE_ASSERT, "(string)", (const char *)&queryFormat, "string") )
        __debugbreak();
      Sentient_GetDebugEyePosition(self->sentient, &vEyePosOut);
      sentient = _RBX->sentient;
      if ( sentient )
      {
        Sentient_GetDebugEyePosition(sentient, &end);
      }
      else
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+130h]
          vmovss  xmm1, dword ptr [rbx+134h]
          vmovss  dword ptr [rsp+0B8h+end], xmm0
          vmovss  xmm0, dword ptr [rbx+138h]
          vmovss  dword ptr [rsp+0B8h+end+8], xmm0
          vmovss  dword ptr [rsp+0B8h+end+4], xmm1
        }
      }
      v14 = DebugThreatInfoDuration(self);
      G_DebugLineWithDuration(&vEyePosOut, &end, color, 0, v14);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+0B8h+end+8]
        vaddss  xmm1, xmm0, cs:__real@41800000
        vmovss  dword ptr [rsp+0B8h+end+8], xmm1
      }
      v17 = DebugThreatInfoDuration(self);
      __asm { vmovss  xmm2, cs:__real@3f800000; scale }
      G_Main_AddDebugStringWithDuration(&end, color, *(float *)&_XMM2, string, v17);
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
  ntl::red_black_tree_node_base *mp_right; 
  ntl::pair<enum scr_string_t,EnemySelector *> r_element; 
  __m256i v19; 
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
    _RCX = g_enemySelectorMap.m_freelist.m_head.mp_next;
    v19.m256i_i32[0] = 0;
    v19.m256i_i64[1] = (__int64)v8;
    __asm { vmovups xmm1, xmmword ptr [rsp+98h+r_element.first] }
    g_enemySelectorMap.m_freelist.m_head.mp_next = g_enemySelectorMap.m_freelist.m_head.mp_next->mp_next;
    __asm
    {
      vpxor   xmm0, xmm0, xmm0
      vmovdqu xmmword ptr [rsp+98h+var_48+10h], xmm0
      vmovups ymm0, ymmword ptr [rsp+98h+var_48]
      vmovups ymmword ptr [rcx], ymm0
      vmovups xmmword ptr [rcx+20h], xmm1
    }
    if ( v8 == &g_enemySelectorMap.m_endNodeBase )
    {
      g_enemySelectorMap.m_endNodeBase.mp_left = (ntl::red_black_tree_node_base *)_RCX;
      g_enemySelectorMap.m_endNodeBase.mp_parent = (ntl::red_black_tree_node_base *)_RCX;
      g_enemySelectorMap.m_endNodeBase.mp_right = (ntl::red_black_tree_node_base *)_RCX;
    }
    else if ( v7 >= v8[1].m_color )
    {
      v8->mp_right = (ntl::red_black_tree_node_base *)_RCX;
      mp_right = g_enemySelectorMap.m_endNodeBase.mp_right;
      if ( v8 == g_enemySelectorMap.m_endNodeBase.mp_right )
        mp_right = (ntl::red_black_tree_node_base *)_RCX;
      g_enemySelectorMap.m_endNodeBase.mp_right = mp_right;
    }
    else
    {
      v8->mp_left = (ntl::red_black_tree_node_base *)_RCX;
      if ( v8 == g_enemySelectorMap.m_endNodeBase.mp_left )
        g_enemySelectorMap.m_endNodeBase.mp_left = (ntl::red_black_tree_node_base *)_RCX;
    }
    ntl::red_black_tree_node_base::rebalance((ntl::red_black_tree_node_base *)_RCX, &g_enemySelectorMap.m_endNodeBase.mp_parent);
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
  _RBX = enemySelector;
  if ( !enemySelector && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 113, ASSERT_TYPE_ASSERT, "(enemySelector)", (const char *)&queryFormat, "enemySelector") )
    __debugbreak();
  __asm { vcvttss2si eax, dword ptr [rbx+64h] }
  return (unsigned int)(_RBX->threatVisible + _RBX->threatScarinessMax + _EAX);
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
  unsigned int v12; 
  int v14; 
  int numSecondaryTarget; 
  bool v16; 
  int v17; 
  int v18; 
  float *v19; 
  int v43; 
  int v44; 
  int v46; 
  bool v55; 
  __int64 p_z; 
  unsigned int v65; 
  __int64 result; 

  _RBX = potential;
  __asm { vmovaps [rsp+0A8h+var_48], xmm9 }
  if ( this->m_pAI->threat.numSecondaryTarget <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 1214, ASSERT_TYPE_ASSERT, "(m_pAI->threat.numSecondaryTarget > 0)", (const char *)&queryFormat, "m_pAI->threat.numSecondaryTarget > 0") )
    __debugbreak();
  m_pAI = this->m_pAI;
  v12 = 0;
  __asm
  {
    vmovss  xmm9, cs:__real@bf800000
    vmovaps [rsp+0A8h+var_18], xmm6
  }
  v14 = 0;
  numSecondaryTarget = m_pAI->threat.numSecondaryTarget;
  v16 = (unsigned int)numSecondaryTarget <= 4;
  if ( numSecondaryTarget >= 4 )
  {
    v17 = 2;
    __asm { vmovaps [rsp+0A8h+var_28], xmm7 }
    v18 = numSecondaryTarget - 3;
    __asm { vmovaps [rsp+0A8h+var_38], xmm8 }
    v19 = &m_pAI->threat.secondaryTargets[0].dirToEnt.v[2];
    __asm
    {
      vmovaps [rsp+0A8h+var_58], xmm10
      vmovss  xmm10, dword ptr [rbx+14h]
      vmovaps [rsp+0A8h+var_68], xmm11
      vmovss  xmm11, dword ptr [rbx+10h]
      vmovaps [rsp+0A8h+var_78], xmm12
      vmovss  xmm12, dword ptr [rbx+18h]
    }
    do
    {
      __asm
      {
        vmulss  xmm1, xmm10, dword ptr [r8-4]
        vmulss  xmm0, xmm11, dword ptr [r8-8]
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm12, dword ptr [r8]
        vmulss  xmm0, xmm11, dword ptr [r8+10h]
        vaddss  xmm7, xmm2, xmm1
        vmulss  xmm1, xmm10, dword ptr [r8+14h]
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm12, dword ptr [r8+18h]
        vmulss  xmm0, xmm11, dword ptr [r8+28h]
        vaddss  xmm5, xmm2, xmm1
        vmulss  xmm1, xmm10, dword ptr [r8+2Ch]
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm12, dword ptr [r8+30h]
        vmulss  xmm0, xmm11, dword ptr [r8+40h]
        vcomiss xmm7, xmm9
        vaddss  xmm3, xmm2, xmm1
        vmulss  xmm1, xmm10, dword ptr [r8+44h]
        vmaxss  xmm8, xmm7, xmm9
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm12, dword ptr [r8+48h]
      }
      v43 = v14;
      v44 = v17 - 1;
      if ( v16 )
        v43 = v12;
      v19 += 24;
      __asm
      {
        vcomiss xmm5, xmm8
        vmaxss  xmm6, xmm5, xmm8
      }
      if ( v16 )
        v44 = v43;
      v12 = v17 + 1;
      __asm { vcomiss xmm3, xmm6 }
      v46 = v17;
      if ( v16 )
        v46 = v44;
      __asm
      {
        vaddss  xmm0, xmm2, xmm1
        vmaxss  xmm4, xmm6, xmm3
        vcomiss xmm0, xmm4
        vmaxss  xmm1, xmm4, xmm0
      }
      if ( v16 )
        v12 = v46;
      v14 += 4;
      v17 += 4;
      __asm { vmovaps xmm9, xmm1 }
      v16 = v14 <= (unsigned int)v18;
    }
    while ( v14 < v18 );
    __asm
    {
      vmovaps xmm12, [rsp+0A8h+var_78]
      vmovaps xmm11, [rsp+0A8h+var_68]
      vmovaps xmm10, [rsp+0A8h+var_58]
      vmovaps xmm8, [rsp+0A8h+var_38]
      vmovaps xmm7, [rsp+0A8h+var_28]
    }
  }
  v55 = v14 <= (unsigned int)numSecondaryTarget;
  if ( v14 < numSecondaryTarget )
  {
    __asm
    {
      vmovss  xmm6, dword ptr [rbx+14h]
      vmovss  xmm5, dword ptr [rbx+10h]
      vmovss  xmm4, dword ptr [rbx+18h]
    }
    p_z = (__int64)&m_pAI->threat.secondaryTargets[v14].dirToEnt.z;
    do
    {
      __asm
      {
        vmulss  xmm1, xmm5, dword ptr [r8-8]
        vmulss  xmm0, xmm6, dword ptr [r8-4]
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm4, dword ptr [r8]
        vaddss  xmm3, xmm2, xmm1
        vcomiss xmm3, xmm9
      }
      v65 = v14;
      p_z += 24i64;
      if ( v55 )
        v65 = v12;
      ++v14;
      v12 = v65;
      __asm { vmaxss  xmm9, xmm3, xmm9 }
      v55 = v14 <= (unsigned int)numSecondaryTarget;
    }
    while ( v14 < numSecondaryTarget );
  }
  __asm { vmovaps xmm6, [rsp+0A8h+var_18] }
  result = v12;
  __asm { vmovaps xmm9, [rsp+0A8h+var_48] }
  return result;
}

/*
==============
AICommonInterface::GetCombatLine
==============
*/
bool AICommonInterface::GetCombatLine(AICommonInterface *this, vec3_t *outCombatLinePos, vec3_t *outCombatLineAllyDir)
{
  const dvar_t *v12; 
  sentient_s *v27; 
  const gentity_s *ent; 
  ai_agent_t *ScriptedAgentInfo; 
  actor_s *actor; 
  unsigned __int16 number; 
  __int64 v33; 
  unsigned int v34; 
  __int64 v35; 
  gentity_s *v36; 
  unsigned __int64 eTeam; 
  unsigned __int64 v38; 
  bool result; 
  __int64 v49; 
  __int64 v50; 
  AIActorInterface v51; 
  AIAgentInterface v52; 
  void *v53; 
  int v54; 
  __int64 v55; 
  __int64 v56; 
  __int64 v57; 
  bitarray<224> iTeamFlags; 
  __int128 v59; 
  unsigned int v61; 

  v12 = DCONST_DVARBOOL_ai_useCombatLine;
  if ( !DCONST_DVARBOOL_ai_useCombatLine && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_useCombatLine") )
    __debugbreak();
  __asm
  {
    vmovaps [rsp+1D0h+var_40], xmm6
    vmovaps [rsp+1D0h+var_50], xmm7
    vmovaps [rsp+1D0h+var_60], xmm8
    vmovaps [rsp+1D0h+var_70], xmm9
    vmovaps [rsp+1D0h+var_80], xmm10
    vmovaps [rsp+1D0h+var_90], xmm11
    vmovaps [rsp+1D0h+var_A0], xmm12
    vmovaps [rsp+1D0h+var_B0], xmm13
    vmovaps [rsp+1D0h+var_C0], xmm14
  }
  Dvar_CheckFrontendServerThread(v12);
  if ( v12->current.enabled )
  {
    _RAX = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) ? Com_TeamsSP_GetAllCombatTeamFlags() : Com_TeamsMP_GetAllTeamFlags();
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vmovups xmmword ptr [rbp+0D0h+iTeamFlags.array], xmm0
      vmovsd  xmm1, qword ptr [rax+10h]
      vmovsd  qword ptr [rbp+0D0h+iTeamFlags.array+10h], xmm1
    }
    iTeamFlags.array[6] = _RAX->array[6];
    _RAX = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) ? Com_TeamsSP_GetBadGuyTeamFlags() : Com_TeamsMP_GetBadGuyTeamFlags();
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vmovsd  xmm1, qword ptr [rax+10h]
    }
    v61 = _RAX->array[6];
    __asm
    {
      vmovups [rbp+0D0h+var_F0], xmm0
      vmovsd  [rbp+0D0h+var_E0], xmm1
    }
    v55 = 0i64;
    v56 = 0i64;
    v57 = 0i64;
    v54 = 0x20000000;
    __asm
    {
      vxorps  xmm6, xmm6, xmm6
      vxorps  xmm10, xmm10, xmm10
      vxorps  xmm7, xmm7, xmm7
      vxorps  xmm8, xmm8, xmm8
      vxorps  xmm9, xmm9, xmm9
      vxorps  xmm12, xmm12, xmm12
      vxorps  xmm13, xmm13, xmm13
      vxorps  xmm14, xmm14, xmm14
    }
    v27 = Sentient_FirstSentient(&iTeamFlags);
    if ( v27 )
    {
      __asm { vmovss  xmm11, cs:__real@3f800000 }
      while ( 1 )
      {
        ent = v27->ent;
        AIActorInterface::AIActorInterface(&v51);
        AIAgentInterface::AIAgentInterface(&v52);
        v52.__vftable = (AIAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
        v53 = NULL;
        if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 79, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
          __debugbreak();
        if ( ent->agent && SV_Agent_IsScripted(ent->s.number) )
          break;
        actor = ent->actor;
        if ( actor )
        {
          if ( !actor->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 105, ASSERT_TYPE_ASSERT, "( ent->actor->sentientInfo )", (const char *)&queryFormat, "ent->actor->sentientInfo") )
            __debugbreak();
          AIActorInterface::SetActor(&v51, ent->actor);
          v53 = &v51;
          goto LABEL_31;
        }
        if ( v53 )
          goto LABEL_31;
LABEL_53:
        v27 = Sentient_NextSentient(v27, &iTeamFlags);
        if ( !v27 )
        {
          __asm { vcomiss xmm6, cs:__real@40000000 }
          goto LABEL_60;
        }
      }
      ScriptedAgentInfo = AIAgentInterface::GetScriptedAgentInfo(ent);
      if ( !ScriptedAgentInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 97, ASSERT_TYPE_ASSERT, "( pInfo )", (const char *)&queryFormat, "pInfo") )
        __debugbreak();
      if ( !ScriptedAgentInfo->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 98, ASSERT_TYPE_ASSERT, "( pInfo->sentientInfo )", (const char *)&queryFormat, "pInfo->sentientInfo") )
        __debugbreak();
      AINewAgentInterface::SetAgent((AINewAgentInterface *)&v52, ScriptedAgentInfo);
      v53 = &v52;
LABEL_31:
      number = v27->targetEnt.number;
      if ( number )
      {
        v33 = number;
        v34 = number - 1;
        if ( v34 >= 0x800 )
        {
          LODWORD(v50) = 2048;
          LODWORD(v49) = v34;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v49, v50) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        v35 = v33 - 1;
        if ( g_entities[v35].r.isInUse != g_entityIsInUse[v35] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
          __debugbreak();
        if ( !g_entityIsInUse[v35] )
        {
          LODWORD(v50) = v27->targetEnt.number - 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v50) )
            __debugbreak();
        }
        if ( v27->targetEnt.number )
        {
          if ( v27->ent->health > 0 )
          {
            if ( !EntHandle::ent(&v27->targetEnt)->sentient || (v36 = EntHandle::ent(&v27->targetEnt), level.time - Sentient_GetSentientInfo(v27, v36->sentient)->lastKnownPosTime <= 10000) )
            {
              eTeam = (unsigned int)v27->eTeam;
              if ( (unsigned int)eTeam >= 0xE0 )
              {
                LODWORD(v50) = 224;
                LODWORD(v49) = v27->eTeam;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v49, v50) )
                  __debugbreak();
              }
              if ( ((0x80000000 >> (eTeam & 0x1F)) & *((_DWORD *)&v59 + (eTeam >> 5))) != 0 )
              {
                __asm
                {
                  vaddss  xmm10, xmm10, xmm11
                  vaddss  xmm12, xmm12, dword ptr [rax+130h]
                  vaddss  xmm13, xmm13, dword ptr [rax+134h]
                  vaddss  xmm14, xmm14, dword ptr [rax+138h]
                }
              }
              else
              {
                v38 = (unsigned int)v27->eTeam;
                if ( (unsigned int)v38 >= 0xE0 )
                {
                  LODWORD(v50) = 224;
                  LODWORD(v49) = v27->eTeam;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v49, v50) )
                    __debugbreak();
                }
                if ( ((0x80000000 >> (v38 & 0x1F)) & *(&v54 + (v38 >> 5))) != 0 )
                {
                  __asm
                  {
                    vaddss  xmm6, xmm6, xmm11
                    vaddss  xmm7, xmm7, dword ptr [rax+130h]
                    vaddss  xmm8, xmm8, dword ptr [rax+134h]
                    vaddss  xmm9, xmm9, dword ptr [rax+138h]
                  }
                }
              }
            }
          }
        }
      }
      goto LABEL_53;
    }
  }
LABEL_60:
  result = 0;
  __asm
  {
    vmovaps xmm14, [rsp+1D0h+var_C0]
    vmovaps xmm13, [rsp+1D0h+var_B0]
    vmovaps xmm12, [rsp+1D0h+var_A0]
    vmovaps xmm11, [rsp+1D0h+var_90]
    vmovaps xmm10, [rsp+1D0h+var_80]
    vmovaps xmm9, [rsp+1D0h+var_70]
    vmovaps xmm8, [rsp+1D0h+var_60]
    vmovaps xmm7, [rsp+1D0h+var_50]
    vmovaps xmm6, [rsp+1D0h+var_40]
  }
  return result;
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

void __fastcall AICommonInterface::InitPotentialTarget(PotentialTargetData *potentialTarget, gentity_s *entity, double dist, const vec3_t *dirToEnemy)
{
  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  _RSI = dirToEnemy;
  _RBX = potentialTarget;
  __asm { vmovaps xmm6, xmm2 }
  if ( !potentialTarget && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 1160, ASSERT_TYPE_ASSERT, "(potentialTarget)", (const char *)&queryFormat, "potentialTarget") )
    __debugbreak();
  if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 1161, ASSERT_TYPE_ASSERT, "(entity)", (const char *)&queryFormat, "entity") )
    __debugbreak();
  __asm
  {
    vmovss  dword ptr [rbx+0Ch], xmm6
    vmovaps xmm6, [rsp+48h+var_18]
  }
  _RBX->entity = entity;
  _RBX->threat = 0;
  __asm
  {
    vmovss  xmm4, dword ptr [rsi]
    vmovss  dword ptr [rbx+10h], xmm4
    vmovss  xmm0, dword ptr [rsi+4]
    vmovss  dword ptr [rbx+14h], xmm0
    vmovss  xmm3, dword ptr [rsi+8]
    vmulss  xmm1, xmm0, xmm0
    vmovss  dword ptr [rbx+18h], xmm3
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
    vmovss  dword ptr [rbx+10h], xmm0
    vmulss  xmm1, xmm2, dword ptr [rbx+14h]
    vmovss  dword ptr [rbx+14h], xmm1
    vmulss  xmm0, xmm2, dword ptr [rbx+18h]
    vmovss  dword ptr [rbx+18h], xmm0
  }
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

bool __fastcall AICommonInterface::IsSimilarTarget(const vec3_t *dirToFirst, const vec3_t *dirToSecond, double distToFirst, float distToSecond)
{
  char v4; 
  char v5; 

  __asm
  {
    vmovss  xmm0, dword ptr [rcx+4]
    vmovss  xmm1, dword ptr [rcx]
    vmulss  xmm5, xmm0, dword ptr [rdx+4]
    vmulss  xmm4, xmm1, dword ptr [rdx]
    vmovss  xmm0, dword ptr [rcx+8]
    vmulss  xmm1, xmm0, dword ptr [rdx+8]
    vaddss  xmm4, xmm5, xmm4
    vaddss  xmm4, xmm4, xmm1
    vcomiss xmm4, cs:__real@3f5db22d
  }
  if ( v4 )
    return 0;
  __asm
  {
    vdivss  xmm0, xmm2, xmm3
    vcomiss xmm0, cs:__real@3f333333
  }
  if ( v4 | v5 )
    return 0;
  __asm { vcomiss xmm0, cs:__real@3fb6db6e }
  return v4 != 0;
}

/*
==============
AICommonInterface::PotentialThreat_Debug
==============
*/
void AICommonInterface::PotentialThreat_Debug(AICommonInterface *this)
{
  vec3_t vEyePosOut; 
  vec3_t end; 

  if ( !this->m_pAI->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 1991, ASSERT_TYPE_ASSERT, "(m_pAI->ent)", (const char *)&queryFormat, "m_pAI->ent") )
    __debugbreak();
  if ( !this->Is3D(this) )
  {
    Sentient_GetDebugEyePosition(this->m_pAI->sentient, &vEyePosOut);
    if ( this->m_pAI->threat.potentialThreat.isEnabled )
    {
      __asm
      {
        vmovss  xmm3, cs:__real@42000000
        vmulss  xmm0, xmm3, dword ptr [rax+3Ch]
        vaddss  xmm1, xmm0, dword ptr [rsp+68h+vEyePosOut]
        vmovss  xmm2, dword ptr [rsp+68h+vEyePosOut+8]
        vmovss  dword ptr [rsp+68h+end], xmm1
        vmulss  xmm0, xmm3, dword ptr [rax+40h]
        vaddss  xmm1, xmm0, dword ptr [rsp+68h+vEyePosOut+4]
        vmovss  dword ptr [rsp+68h+end+4], xmm1
        vmovss  dword ptr [rsp+68h+end+8], xmm2
      }
      G_DebugLine(&vEyePosOut, &end, &colorRed, 0);
    }
    else
    {
      __asm { vmovss  xmm2, cs:__real@3f800000; scale }
      G_Main_AddDebugString(&vEyePosOut, &colorWhite, *(float *)&_XMM2, "No Threat");
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

void __fastcall AIScriptedInterface::SetPotentialThreat(AIScriptedInterface *this, double yaw, __int64 a3, __int64 a4)
{
  __int64 v4; 

  __asm
  {
    vmulss  xmm1, xmm1, cs:__real@3c8efa35
    vxorps  xmm0, xmm0, xmm0
    vmovss  xmm0, xmm0, xmm1
  }
  this->m_pAI->threat.potentialThreat.isEnabled = 1;
  *(double *)&_XMM0 = j___libm_sse2_sincosf_(this, v4, a3, a4);
  _RAX = this->m_pAI;
  __asm
  {
    vextractps dword ptr [rax+3Ch], xmm0, 1
    vmovss  dword ptr [rax+40h], xmm0
  }
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
__int64 AIScriptedInterface::ThreatBehindEnemyLines(AIScriptedInterface *this, sentient_s *enemy, const vec3_t *combatLinePos, const vec3_t *combatLineAllyDir)
{
  unsigned int eTeam; 
  bitarray<224> *BadGuyTeamFlags; 

  eTeam = this->m_pAI->sentient->eTeam;
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
    BadGuyTeamFlags = (bitarray<224> *)Com_TeamsSP_GetBadGuyTeamFlags();
  else
    BadGuyTeamFlags = (bitarray<224> *)Com_TeamsMP_GetBadGuyTeamFlags();
  if ( bitarray_base<bitarray<224>>::testBit(BadGuyTeamFlags, eTeam) && enemy->ent->client && !AI_IsAlliedSentient(this->m_pAI->sentient, enemy) )
  {
    _RAX = enemy->ent;
    __asm
    {
      vmovss  xmm0, dword ptr [rax+134h]
      vsubss  xmm1, xmm0, dword ptr [rsi+4]
      vmulss  xmm3, xmm1, dword ptr [rbp+4]
      vmovss  xmm2, dword ptr [rax+130h]
      vsubss  xmm0, xmm2, dword ptr [rsi]
      vmulss  xmm1, xmm0, dword ptr [rbp+0]
      vmovss  xmm2, dword ptr [rax+138h]
      vsubss  xmm0, xmm2, dword ptr [rsi+8]
      vaddss  xmm4, xmm3, xmm1
      vmulss  xmm1, xmm0, dword ptr [rbp+8]
      vaddss  xmm3, xmm4, xmm1
      vxorps  xmm1, xmm1, xmm1; min
      vcomiss xmm3, xmm1
    }
  }
  return 0i64;
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
  char *fmt; 
  AIWrapper v11; 

  _RDI = enemySelector;
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 815, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !enemy && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 816, ASSERT_TYPE_ASSERT, "(enemy)", (const char *)&queryFormat, "enemy") )
    __debugbreak();
  if ( !this->m_pAI->combat.provideCoveringFire || this->IsMoving(this) )
    return 0i64;
  AIWrapper::AIWrapper(&v11, enemy->ent);
  m_pAI = v11.m_pAI;
  if ( v11.m_pAI )
  {
    _RBP = v11.m_pAI->GetAI(v11.m_pAI);
    if ( !LODWORD(_RBP[2].orientation.vLookRight.v[0]) && !m_pAI->IsInPain(m_pAI) && !m_pAI->IsDying(m_pAI) )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+6Ch]
        vcomiss xmm0, dword ptr [rbp+53Ch]
      }
      return 0i64;
    }
  }
  if ( !g_skipDebugString )
  {
    if ( _RDI->threatCoveringFire )
    {
      LODWORD(fmt) = _RDI->threatCoveringFire;
      Com_sprintf(g_threatDebugStrings[2], 0x40ui64, "%s %d", g_threatDebugLabels[2], fmt);
      return (unsigned int)_RDI->threatCoveringFire;
    }
    g_threatDebugStrings[2][0] = 0;
  }
  return (unsigned int)_RDI->threatCoveringFire;
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

__int64 __fastcall AIScriptedInterface::ThreatFromCover(AIScriptedInterface *this, sentient_s *enemy, double distance, const EnemySelector *enemySelector)
{
  __int64 result; 

  __asm { vmovaps [rsp+78h+var_28], xmm6 }
  _RBX = enemySelector;
  __asm { vmovaps xmm6, xmm2 }
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 594, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !enemy && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 595, ASSERT_TYPE_ASSERT, "(enemy)", (const char *)&queryFormat, "enemy") )
    __debugbreak();
  __asm { vcomiss xmm6, dword ptr [rbx+60h] }
  result = 0i64;
  __asm { vmovaps xmm6, [rsp+78h+var_28] }
  return result;
}

/*
==============
AICommonInterface::ThreatFromDistance
==============
*/

__int64 __fastcall AICommonInterface::ThreatFromDistance(double fDistance, const EnemySelector *enemySelector)
{
  __int64 result; 

  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcomiss xmm0, xmm1
    vmovaps [rsp+48h+var_18], xmm6
  }
  _RBX = enemySelector;
  __asm
  {
    vmovaps xmm6, xmm0
    vmovss  xmm0, dword ptr [rbx+60h]
    vcomiss xmm6, xmm0
  }
  result = 0i64;
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
  return result;
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
  int v8; 

  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, dword ptr [rdx+18h]
    vmulss  xmm0, xmm1, xmm0
    vcvttss2si ecx, xmm0; val
  }
  result = I_clamp(_ECX, enemySelector->threatScarinessMin, enemySelector->threatScarinessMax);
  v8 = result;
  if ( !g_skipDebugString )
  {
    if ( result )
    {
      Com_sprintf(g_threatDebugStrings[9], 0x40ui64, "%s %d", g_threatDebugLabels[9], result);
      return v8;
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
  __int64 v13; 
  gentity_s *v17; 
  __int64 v18; 
  bool v59; 
  bool v60; 
  bool v77; 
  ai_common_t *m_pAI; 
  int ClosestDirectionSecondary; 
  __int64 v89; 
  ai_common_t *v90; 
  __int64 numSecondaryTarget; 
  bool v101; 
  __int64 v106; 
  double v107; 
  __int64 v108; 
  double v109; 
  double v110; 
  double v111; 
  float v115[4]; 

  v13 = numPotentialTargets;
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 1239, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 1240, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  if ( !potentialTargets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 1241, ASSERT_TYPE_ASSERT, "(potentialTargets)", (const char *)&queryFormat, "potentialTargets") )
    __debugbreak();
  this->m_pAI->threat.numSecondaryTarget = 0;
  this->m_pAI->threat.allEnemiesInSimilarDir = 1;
  _RAX = AICommonInterface::GetTargetEntity(this);
  v17 = _RAX;
  if ( _RAX )
  {
    v18 = v13;
    __asm
    {
      vmovaps [rsp+148h+var_48], xmm6
      vmovaps [rsp+148h+var_58], xmm7
      vmovaps [rsp+148h+var_98], xmm11
      vmovaps [rsp+148h+var_D8], xmm15
      vmovss  xmm15, cs:__real@3f800000
      vmovss  xmm0, dword ptr [rax+130h]
      vsubss  xmm4, xmm0, dword ptr [rdx+130h]
      vmovss  xmm1, dword ptr [rax+134h]
      vsubss  xmm5, xmm1, dword ptr [rdx+134h]
      vmovss  xmm0, dword ptr [rax+138h]
      vsubss  xmm6, xmm0, dword ptr [rdx+138h]
      vmulss  xmm0, xmm6, xmm6
      vmulss  xmm2, xmm5, xmm5
      vmulss  xmm1, xmm4, xmm4
      vaddss  xmm3, xmm2, xmm1
      vaddss  xmm2, xmm3, xmm0
      vsqrtss xmm11, xmm2, xmm2
      vcmpless xmm0, xmm11, cs:__real@80000000
      vblendvps xmm0, xmm11, xmm15, xmm0
      vdivss  xmm1, xmm15, xmm0
      vmulss  xmm4, xmm4, xmm1
      vmulss  xmm5, xmm5, xmm1
      vmulss  xmm6, xmm6, xmm1
      vmulss  xmm0, xmm4, xmm4
      vmulss  xmm1, xmm5, xmm5
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm6, xmm6
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm3, xmm2, xmm2
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm0, xmm3, xmm15, xmm0
      vdivss  xmm1, xmm15, xmm0
      vmulss  xmm0, xmm4, xmm1
      vmovss  [rsp+148h+var_F4], xmm0
      vmulss  xmm0, xmm5, xmm1
      vmovss  [rsp+148h+var_F8], xmm0
      vmulss  xmm0, xmm6, xmm1
      vmovss  [rsp+148h+var_F0], xmm0
    }
    if ( (int)v13 > 0 )
    {
      __asm
      {
        vmovss  xmm7, cs:__real@45000000
        vmovaps [rsp+148h+var_68], xmm8
        vmovss  xmm8, cs:__real@41700000
        vmovaps [rsp+148h+var_78], xmm9
      }
      _RDI = &potentialTargets->dirToEnt.v[2];
      __asm
      {
        vmovss  xmm9, cs:__real@3f333333
        vmovaps [rsp+148h+var_88], xmm10
        vmovss  xmm10, cs:__real@3fb6db6e
        vmovaps [rsp+148h+var_A8], xmm12
        vmovss  xmm12, cs:__real@3f5db22d
        vmovaps [rsp+148h+var_B8], xmm13
        vmovss  xmm13, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vmovaps [rsp+148h+var_C8], xmm14
        vmovss  xmm14, cs:__real@3b03126f
        vxorps  xmm6, xmm6, xmm6
      }
      do
      {
        v59 = *((_QWORD *)_RDI - 3) < (unsigned __int64)v17;
        v60 = *((_QWORD *)_RDI - 3) <= (unsigned __int64)v17;
        if ( *((gentity_s **)_RDI - 3) != v17 )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rdi-0Ch]
            vcomiss xmm0, xmm7
          }
          if ( *((_QWORD *)_RDI - 3) <= (unsigned __int64)v17 )
          {
            __asm { vcomiss xmm0, xmm8 }
            if ( *((_QWORD *)_RDI - 3) >= (unsigned __int64)v17 )
            {
              __asm
              {
                vmovss  xmm5, dword ptr [rdi-8]
                vucomiss xmm5, xmm6
              }
              if ( *((gentity_s **)_RDI - 3) != v17 )
                goto LABEL_19;
              __asm { vucomiss xmm6, dword ptr [rdi-4] }
              if ( *((gentity_s **)_RDI - 3) != v17 )
                goto LABEL_19;
              __asm { vucomiss xmm6, dword ptr [rdi] }
              if ( *((gentity_s **)_RDI - 3) != v17 )
              {
LABEL_19:
                __asm
                {
                  vmovss  xmm4, dword ptr [rdi-4]
                  vmovss  xmm3, dword ptr [rdi]
                  vmulss  xmm0, xmm4, xmm4
                  vmulss  xmm1, xmm5, xmm5
                  vaddss  xmm2, xmm1, xmm0
                  vmulss  xmm1, xmm3, xmm3
                  vaddss  xmm1, xmm2, xmm1
                  vsubss  xmm0, xmm1, xmm15
                  vandps  xmm0, xmm0, xmm13
                  vcomiss xmm0, xmm14
                }
                if ( *((_QWORD *)_RDI - 3) >= (unsigned __int64)v17 )
                {
                  __asm
                  {
                    vsqrtss xmm0, xmm1, xmm1
                    vcvtss2sd xmm1, xmm0, xmm0
                    vmovsd  [rsp+148h+var_108], xmm1
                    vcvtss2sd xmm3, xmm3, xmm3
                    vmovsd  [rsp+148h+var_110], xmm3
                    vcvtss2sd xmm4, xmm4, xmm4
                    vmovsd  [rsp+148h+var_118], xmm4
                    vcvtss2sd xmm2, xmm5, xmm5
                    vmovsd  [rsp+148h+var_120], xmm2
                  }
                  v77 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 1281, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( potential->dirToEnt ) )", "(%g, %g, %g) len %g", v107, v109, v110, v111);
                  v59 = 0;
                  v60 = !v77;
                  if ( v77 )
                    __debugbreak();
                }
                __asm
                {
                  vmovss  xmm0, [rsp+148h+var_F8]
                  vmulss  xmm1, xmm0, dword ptr [rdi-4]
                  vmovss  xmm0, [rsp+148h+var_F4]
                  vmulss  xmm0, xmm0, dword ptr [rdi-8]
                  vaddss  xmm2, xmm1, xmm0
                  vmovss  xmm0, [rsp+148h+var_F0]
                  vmulss  xmm1, xmm0, dword ptr [rdi]
                  vaddss  xmm2, xmm2, xmm1
                  vcomiss xmm2, xmm12
                }
                if ( !v59 )
                {
                  __asm
                  {
                    vdivss  xmm0, xmm11, dword ptr [rdi-0Ch]
                    vcomiss xmm0, xmm9
                  }
                  if ( !v60 )
                    __asm { vcomiss xmm0, xmm10 }
                }
                m_pAI = this->m_pAI;
                if ( m_pAI->threat.numSecondaryTarget )
                {
                  ClosestDirectionSecondary = AICommonInterface::GetClosestDirectionSecondary(this, (const PotentialTargetData *)(_RDI - 6));
                  v89 = ClosestDirectionSecondary;
                  if ( (unsigned int)ClosestDirectionSecondary >= 2 )
                  {
                    LODWORD(v108) = 2;
                    LODWORD(v106) = ClosestDirectionSecondary;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 1296, ASSERT_TYPE_ASSERT, "(unsigned)( closestSecondaryIndex ) < (unsigned)( 2 )", "closestSecondaryIndex doesn't index NUM_SECONDARY_TARGET\n\t%i not in [0, %i)", v106, v108) )
                      __debugbreak();
                  }
                  v90 = this->m_pAI;
                  _RBP = &v90->threat.secondaryTargets[v89];
                  if ( v90->threat.numSecondaryTarget == 2 )
                    goto LABEL_36;
                  __asm
                  {
                    vmovss  xmm3, dword ptr [rdi-0Ch]; distToSecond
                    vmovss  xmm2, dword ptr [rbp+10h]; distToFirst
                  }
                  if ( AICommonInterface::IsSimilarTarget(&v90->threat.secondaryTargets[v89].dirToEnt, (const vec3_t *)(_RDI - 2), *(float *)&_XMM2, *(float *)&_XMM3) )
                  {
LABEL_36:
                    if ( *((_DWORD *)_RDI - 4) > SLODWORD(v115[v89]) )
                    {
                      AICommonInterface::InitSecondaryTarget(this, _RBP, (const PotentialTargetData *)(_RDI - 6));
                      v115[v89] = *(_RDI - 4);
                    }
                  }
                  else
                  {
                    numSecondaryTarget = this->m_pAI->threat.numSecondaryTarget;
                    if ( (unsigned int)numSecondaryTarget >= 2 )
                    {
                      LODWORD(v108) = 2;
                      LODWORD(v106) = this->m_pAI->threat.numSecondaryTarget;
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 1313, ASSERT_TYPE_ASSERT, "(unsigned)( secondaryIndex ) < (unsigned)( 2 )", "secondaryIndex doesn't index NUM_SECONDARY_TARGET\n\t%i not in [0, %i)", v106, v108) )
                        __debugbreak();
                    }
                    AICommonInterface::InitSecondaryTarget(this, &this->m_pAI->threat.secondaryTargets[numSecondaryTarget], (const PotentialTargetData *)(_RDI - 6));
                    v115[numSecondaryTarget] = *(_RDI - 4);
                    ++this->m_pAI->threat.numSecondaryTarget;
                  }
                }
                else
                {
                  AICommonInterface::InitSecondaryTarget(this, m_pAI->threat.secondaryTargets, (const PotentialTargetData *)(_RDI - 6));
                  v115[0] = *(_RDI - 4);
                  ++this->m_pAI->threat.numSecondaryTarget;
                }
              }
            }
          }
        }
        _RDI += 8;
        --v18;
      }
      while ( v18 );
      __asm
      {
        vmovaps xmm14, [rsp+148h+var_C8]
        vmovaps xmm13, [rsp+148h+var_B8]
        vmovaps xmm12, [rsp+148h+var_A8]
        vmovaps xmm10, [rsp+148h+var_88]
        vmovaps xmm9, [rsp+148h+var_78]
        vmovaps xmm8, [rsp+148h+var_68]
      }
    }
    v101 = AICommonInterface::AllSecondaryTargetsForward(this);
    __asm
    {
      vmovaps xmm15, [rsp+148h+var_D8]
      vmovaps xmm11, [rsp+148h+var_98]
      vmovaps xmm7, [rsp+148h+var_58]
      vmovaps xmm6, [rsp+148h+var_48]
    }
    this->m_pAI->threat.allEnemiesInSimilarDir = v101;
  }
}

/*
==============
AICommonInterface::UpdateSingleThreat
==============
*/

__int64 __fastcall AICommonInterface::UpdateSingleThreat(AICommonInterface *this, sentient_s *enemy, double enemyDist, bool useCombatLine, const vec3_t *combatLinePos, const vec3_t *combatLineAllyDir, int updateDebug, const EnemySelector *enemySelector)
{
  sentient_info_t *SentientInfo; 
  ai_common_t *m_pAI; 
  sentient_info_t *v18; 
  int iLastAttackMeTime; 
  __int64 result; 
  sentient_s *TargetSentient; 
  int bVisible; 
  BOOL v23; 
  bool v24; 
  bool v25; 
  int v26; 
  ai_common_t *v27; 
  sentient_info_t *v28; 
  int v29; 
  bool HasDecentVis; 
  int v41; 
  int v42; 
  int v49; 
  ai_common_t *v55; 
  const dvar_t *v56; 
  const dvar_t *v57; 
  int threatFullyAware; 
  char *v59; 
  int v64; 
  char v65; 
  bool v68; 
  const char *v80; 
  int threatSharedEnemyCap; 
  int attackerCount; 
  int v83; 
  int v84; 
  int threatCurrentEnemyPlayerDamaged; 
  __int64 v86; 
  int IsClientFlashbanged; 
  gclient_s *client; 
  int threatFlashedEnemy; 
  int v91; 
  int v92; 
  int v93; 
  bool v94; 
  unsigned int v95; 
  const char *v103; 
  char *fmt; 
  int v107; 
  unsigned int threatVisible; 
  int v109; 
  int v110; 
  BOOL v111; 
  int v112; 
  BOOL v113; 
  unsigned int v114; 
  int threat; 
  int v116; 
  int iThreatBias; 
  sentient_info_t *v118; 
  AIWrapper v119; 
  vec3_t outLastKnownPos; 

  __asm { vmovaps [rsp+158h+var_68], xmm8 }
  _RDI = enemySelector;
  __asm { vmovaps xmm8, xmm2 }
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 949, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 950, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  if ( !enemy && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 951, ASSERT_TYPE_ASSERT, "(enemy)", (const char *)&queryFormat, "enemy") )
    __debugbreak();
  v109 = 0;
  SentientInfo = Sentient_GetSentientInfo(this->m_pAI->sentient, enemy);
  m_pAI = this->m_pAI;
  v18 = SentientInfo;
  v118 = SentientInfo;
  if ( m_pAI->threat.bPacifist )
  {
    iLastAttackMeTime = SentientInfo->iLastAttackMeTime;
    if ( !iLastAttackMeTime || level.time - iLastAttackMeTime >= m_pAI->threat.iPacifistWait )
    {
      if ( updateDebug )
      {
        DebugThreatStringSimple(m_pAI, enemy->ent, "ignoreme pacifist", &colorRed);
        result = 0x80000000i64;
        goto LABEL_134;
      }
LABEL_16:
      result = 0x80000000i64;
      goto LABEL_134;
    }
  }
  threat = AICommonInterface::GetThreatBias(enemy->iThreatBiasGroupIndex, m_pAI->sentient->iThreatBiasGroupIndex);
  if ( threat == 0x80000000 )
    goto LABEL_16;
  __asm
  {
    vmovaps [rsp+158h+var_48], xmm6
    vmovaps [rsp+158h+var_58], xmm7
  }
  TargetSentient = AICommonInterface::GetTargetSentient(this);
  bVisible = v18->VisCache.bVisible;
  v23 = enemy == TargetSentient;
  v113 = v23;
  if ( !Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH) || !SV_BotIsBotEnt(this->m_pAI->ent) )
  {
    v24 = 0;
    v25 = bVisible == 0;
    if ( !bVisible )
      goto LABEL_25;
LABEL_36:
    v41 = 1;
    goto LABEL_37;
  }
  v24 = 0;
  v25 = bVisible == 0;
  if ( bVisible || SV_BotCanAlwaysSeeEnt(this->m_pAI, enemy->ent) && (v26 = SV_BotEntInCurrentFOV(this->m_pAI, enemy->ent), v24 = 0, v25 = v26 == 0, v26) )
  {
    bVisible = 1;
    goto LABEL_36;
  }
  bVisible = 0;
LABEL_25:
  v27 = this->m_pAI;
  if ( !v27 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 689, ASSERT_TYPE_ASSERT, "(self)", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( !v27->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 690, ASSERT_TYPE_ASSERT, "(self->sentient)", (const char *)&queryFormat, "self->sentient") )
    __debugbreak();
  v28 = Sentient_GetSentientInfo(v27->sentient, enemy);
  v29 = level.time - v28->lastKnownPosTime;
  if ( v23 )
  {
    v24 = (unsigned int)v29 < 0x2710;
    v25 = v29 == 10000;
    if ( v29 < 10000 )
      goto LABEL_36;
    SentientInfo_GetLastKnownPos(v28, &outLastKnownPos);
    _RAX = enemy->ent;
    __asm
    {
      vmovss  xmm0, dword ptr [rax+130h]
      vsubss  xmm3, xmm0, dword ptr [rsp+158h+outLastKnownPos]
      vmovss  xmm1, dword ptr [rax+134h]
      vsubss  xmm2, xmm1, dword ptr [rsp+158h+outLastKnownPos+4]
      vmovss  xmm0, dword ptr [rax+138h]
      vsubss  xmm4, xmm0, dword ptr [rsp+158h+outLastKnownPos+8]
      vmulss  xmm2, xmm2, xmm2
      vmulss  xmm1, xmm3, xmm3
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm3, xmm2, xmm1
      vaddss  xmm2, xmm3, xmm0
      vcomiss xmm2, cs:__real@45800000
    }
    if ( v24 )
    {
      HasDecentVis = Sentient_HasDecentVis(v27->sentient, enemy);
      v24 = 0;
      v25 = !HasDecentVis;
      if ( HasDecentVis )
        goto LABEL_36;
    }
  }
  v41 = 0;
  v24 = (unsigned int)v29 < 0x2710;
  v25 = v29 == 10000;
  if ( v29 < 10000 )
    goto LABEL_36;
LABEL_37:
  v42 = 0;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vxorps  xmm2, xmm2, xmm2
  }
  v107 = v41;
  __asm
  {
    vcvtsi2sd xmm0, xmm0, dword ptr [rax+1BCh]
    vcvtsi2sd xmm2, xmm2, dword ptr [rax+1B8h]
    vmulsd  xmm1, xmm0, cs:__real@3fe999999999999a
    vcomisd xmm1, xmm2
  }
  *(_QWORD *)outLastKnownPos.v = enemy->ent->client;
  v111 = !v24 && !v25;
  __asm { vxorps  xmm7, xmm7, xmm7 }
  if ( v41 || v113 && (v49 = level.time - v118->lastKnownPosTime, LOBYTE(v42) = v49 < 10000, v109 = v42, v49 < 10000) )
  {
    __asm { vmovaps xmm2, xmm8; fDist }
    *(double *)&_XMM0 = Sentient_GetScarinessForDistance(this->m_pAI->sentient, enemy, *(float *)&_XMM2);
    __asm
    {
      vmovaps xmm2, xmm8; fDist
      vmovaps xmm6, xmm0
    }
    *(double *)&_XMM0 = Sentient_GetScarinessForDistance(enemy, this->m_pAI->sentient, *(float *)&_XMM2);
    __asm { vsubss  xmm6, xmm6, xmm0 }
  }
  else
  {
    __asm { vxorps  xmm6, xmm6, xmm6 }
  }
  if ( updateDebug )
  {
    v55 = this->m_pAI;
    if ( !v55 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 420, ASSERT_TYPE_ASSERT, "(self)", (const char *)&queryFormat, "self") )
      __debugbreak();
    v56 = DVARINT_ai_debugThreatSelection;
    if ( !DVARINT_ai_debugThreatSelection && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugThreatSelection") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v56);
    if ( v56->current.integer != 1 )
      goto LABEL_55;
    v57 = DVARINT_ai_debugEntIndex;
    if ( !DVARINT_ai_debugEntIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugEntIndex") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v57);
    if ( v57->current.integer == v55->ent->s.number )
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
    v41 = v107;
  }
  iThreatBias = enemy->iThreatBias;
  if ( enemySelector->threatVisible < enemySelector->threatFullyAware && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 721, ASSERT_TYPE_ASSERT, "(enemySelector->threatVisible >= enemySelector->threatFullyAware)", (const char *)&queryFormat, "enemySelector->threatVisible >= enemySelector->threatFullyAware") )
    __debugbreak();
  threatFullyAware = 0;
  threatVisible = 0;
  if ( bVisible )
  {
    threatVisible = enemySelector->threatVisible;
    v59 = j_va("%d (visible)", threatVisible);
    if ( g_skipDebugString )
      goto LABEL_73;
    if ( v59 )
    {
      Com_sprintf(g_threatDebugStrings[7], 0x40ui64, "%s %s", g_threatDebugLabels[7], v59);
      goto LABEL_73;
    }
    goto LABEL_72;
  }
  if ( v41 )
  {
    threatFullyAware = enemySelector->threatFullyAware;
  }
  else
  {
    if ( !v42 )
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
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rdi+18h]
    vmulss  xmm1, xmm0, xmm6
    vcvttss2si ecx, xmm1; val
  }
  v64 = I_clamp(_ECX, enemySelector->threatScarinessMin, enemySelector->threatScarinessMax);
  v65 = 0;
  __asm { vmovaps xmm6, [rsp+158h+var_48] }
  v116 = v64;
  if ( !g_skipDebugString )
  {
    v65 = 0;
    if ( v64 )
    {
      LODWORD(fmt) = v64;
      Com_sprintf(g_threatDebugStrings[9], 0x40ui64, "%s %d", g_threatDebugLabels[9], fmt);
    }
    else
    {
      g_threatDebugStrings[9][0] = 0;
    }
  }
  __asm
  {
    vcomiss xmm8, xmm7
    vmovaps xmm7, [rsp+158h+var_58]
  }
  if ( v65 )
  {
    v68 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 640, ASSERT_TYPE_ASSERT, "(fDistance >= 0)", (const char *)&queryFormat, "fDistance >= 0");
    v65 = 0;
    if ( v68 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+60h]
    vcomiss xmm8, xmm0
  }
  if ( v65 )
  {
    __asm
    {
      vsubss  xmm3, xmm0, xmm8
      vmulss  xmm1, xmm0, xmm0
      vmovss  xmm0, dword ptr [rdi+64h]
      vdivss  xmm1, xmm0, xmm1
      vmulss  xmm2, xmm1, xmm3
      vmulss  xmm3, xmm2, xmm3
      vaddss  xmm4, xmm3, cs:__real@3f000000
      vxorps  xmm1, xmm1, xmm1
      vroundss xmm3, xmm1, xmm4, 1
      vcvttss2si ebx, xmm3
      vcvtss2sd xmm2, xmm8, xmm8
    }
    v114 = _EBX;
    __asm { vmovq   r8, xmm2 }
    v80 = j_va("%d (%0.1f)", _EBX, _R8);
    if ( !g_skipDebugString )
    {
      if ( v80 )
        Com_sprintf(g_threatDebugStrings[8], 0x40ui64, "%s %s", g_threatDebugLabels[8], v80);
      else
        g_threatDebugStrings[8][0] = 0;
    }
  }
  else
  {
    v114 = 0;
  }
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 763, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( enemySelector->threatSharedEnemy >= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 765, ASSERT_TYPE_ASSERT, "(enemySelector->threatSharedEnemy < 0)", (const char *)&queryFormat, "enemySelector->threatSharedEnemy < 0") )
    __debugbreak();
  threatSharedEnemyCap = enemySelector->threatSharedEnemyCap;
  attackerCount = enemy->attackerCount - 1;
  if ( !v113 )
    attackerCount = enemy->attackerCount;
  v83 = enemySelector->threatSharedEnemy * attackerCount;
  if ( v83 > threatSharedEnemyCap )
    threatSharedEnemyCap = v83;
  if ( EntHandle::isDefined(&enemy->syncedMeleeEnt) && this->m_pAI->ent != EntHandle::ent(&enemy->syncedMeleeEnt) )
    threatSharedEnemyCap += enemySelector->threatSharedMeleeEnemy;
  v84 = g_skipDebugString;
  if ( !g_skipDebugString )
  {
    if ( threatSharedEnemyCap )
    {
      LODWORD(fmt) = threatSharedEnemyCap;
      Com_sprintf(g_threatDebugStrings[5], (unsigned int)(g_skipDebugString + 64), "%s %d", g_threatDebugLabels[5], fmt);
      v84 = g_skipDebugString;
    }
    else
    {
      g_threatDebugStrings[5][0] = 0;
    }
  }
  threatCurrentEnemyPlayerDamaged = 0;
  if ( v113 )
  {
    if ( v41 )
    {
      if ( *(_QWORD *)outLastKnownPos.v && v111 )
        threatCurrentEnemyPlayerDamaged = enemySelector->threatCurrentEnemyPlayerDamaged;
      else
        threatCurrentEnemyPlayerDamaged = enemySelector->threatFriendliesCurrentEnemy;
    }
    else if ( v109 )
    {
      threatCurrentEnemyPlayerDamaged = enemySelector->threatFriendliesTimeoutEnemy;
    }
    else
    {
      threatCurrentEnemyPlayerDamaged = enemySelector->threatCurrentEnemy;
    }
  }
  if ( !v84 )
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
  AIWrapper::AIWrapper(&v119, enemy->ent);
  if ( v119.m_pAI )
  {
    IsClientFlashbanged = v119.m_pAI->IsFlashBanged(v119.m_pAI);
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
  __asm { vmovaps xmm2, xmm8 }
  v91 = ((__int64 (__fastcall *)(AICommonInterface *, sentient_s *, __int64, const EnemySelector *))this->ThreatFromCover)(this, enemy, v86, enemySelector);
  v110 = this->ThreatFromPlayerAttackedMeRecently(this, enemy, v118->iLastAttackMeTime, enemySelector);
  v112 = this->ThreatFromKilledNearbyTeammate(this, enemy, enemySelector);
  v92 = 0;
  v93 = 0;
  v94 = !useCombatLine;
  if ( useCombatLine )
  {
    v93 = this->ThreatBehindEnemyLines(this, enemy, combatLinePos, combatLineAllyDir, enemySelector);
    v94 = 1;
    v92 = 0;
  }
  __asm { vcomiss xmm8, dword ptr [rdi+68h] }
  if ( !v94 )
    v92 = this->ThreatCoveringFire(this, enemy, enemySelector);
  v95 = threat + iThreatBias + v114 + threatFlashedEnemy + v91 + v110 + v112 + v92 + v93 + v116 + threatVisible + threatSharedEnemyCap + threatCurrentEnemyPlayerDamaged;
  if ( updateDebug )
  {
    EnemySelector_GetMaxThreat(enemySelector);
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, ebx
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vdivss  xmm1, xmm1, xmm0
      vcvtss2sd xmm2, xmm1, xmm1
      vmovq   r8, xmm2
    }
    v103 = j_va("%d (%0.3f)", v95, _R8);
    DebugSetThreatStringFromString(TDS_TOTAL_THREAT, v103);
    DebugThreatStringAll(this->m_pAI, enemy, v95);
  }
  result = v95;
LABEL_134:
  __asm { vmovaps xmm8, [rsp+158h+var_68] }
  return result;
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
  void *v11; 
  __int64 v13; 
  const dvar_t *v14; 
  bool v22; 
  unsigned int v25; 
  sentient_s *sentient; 
  unsigned int v28; 
  bitarray<224> *p_result; 
  int v30; 
  gentity_s *v31; 
  bool v32; 
  ai_common_t *m_pAI; 
  const dvar_t *v34; 
  int v43; 
  const EnemySelector *v44; 
  sentient_s *v45; 
  gentity_s *ent; 
  const vec4_t *v50; 
  const char *v51; 
  char v60; 
  const char *v65; 
  int iLastAttackMeTime; 
  bool v67; 
  ai_common_t *v68; 
  int iLastVisTime; 
  bool v70; 
  ai_common_t *v71; 
  gentity_s *v109; 
  const char *v121; 
  ai_common_t *v122; 
  __int64 v123; 
  int v125; 
  ai_common_t *v126; 
  const char *v130; 
  gentity_s *v131; 
  const dvar_t *v132; 
  gentity_s *TargetEntity; 
  gentity_s *v134; 
  unsigned int v135; 
  int v136; 
  __int64 v137; 
  int *p_threat; 
  unsigned int v139; 
  const char *v140; 
  const char *v141; 
  const char *v142; 
  const char *v143; 
  gclient_s *client; 
  const char *name; 
  gclient_s *v146; 
  gclient_s *v147; 
  const char *v148; 
  ai_common_t *v149; 
  gentity_s *v150; 
  const char *v151; 
  const char *v152; 
  const char *v153; 
  const char *v154; 
  __int64 v168; 
  __int64 v169; 
  __int64 v170; 
  bool v171; 
  int v172; 
  unsigned int number; 
  bool IsUsingTurret; 
  bool v175; 
  bool surprised; 
  gentity_s *v177; 
  int numPotentialTargets; 
  const char *v179; 
  PotentialTargetData *p_potentialTargets; 
  vec4_t v181; 
  __int64 v182; 
  AIWrapper v183; 
  vec3_t vEyePosOut; 
  vec3_t end; 
  int v186; 
  bitarray<224> result; 
  int v190[4]; 
  vec3_t outLastKnownPos; 
  int v192[4]; 
  PotentialTargetData potentialTargets; 
  char v202; 

  v11 = alloca(v1);
  v182 = -2i64;
  __asm
  {
    vmovaps [rsp+2440h+var_30], xmm6
    vmovaps [rsp+2440h+var_40], xmm7
    vmovaps [rsp+2440h+var_50], xmm8
    vmovaps [rsp+2440h+var_60], xmm9
    vmovaps [rsp+2440h+var_70], xmm10
    vmovaps [rsp+2440h+var_80], xmm11
    vmovaps [rsp+2440h+var_90], xmm12
    vmovaps [rsp+2440h+var_A0], xmm13
  }
  Sys_ProfBeginNamedEvent(0xFF808080, "AI_UpdateThreat");
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 1490, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 1491, ASSERT_TYPE_ASSERT, "(m_pAI->ent)", (const char *)&queryFormat, "m_pAI->ent") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 1492, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  v13 = 0i64;
  *(_QWORD *)v181.v = 0i64;
  numPotentialTargets = 0;
  this->m_pAI->threat.hasThreateningEnemy = 0;
  v14 = DVARBOOL_ai_showPotentialThreatDir;
  if ( !DVARBOOL_ai_showPotentialThreatDir && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showPotentialThreatDir") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  __asm { vmovss  xmm10, cs:__real@3f800000 }
  if ( v14->current.enabled )
  {
    if ( !this->m_pAI->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 1991, ASSERT_TYPE_ASSERT, "(m_pAI->ent)", (const char *)&queryFormat, "m_pAI->ent") )
      __debugbreak();
    if ( !this->Is3D(this) )
    {
      Sentient_GetDebugEyePosition(this->m_pAI->sentient, &vEyePosOut);
      if ( this->m_pAI->threat.potentialThreat.isEnabled )
      {
        __asm
        {
          vmovss  xmm3, cs:__real@42000000
          vmulss  xmm0, xmm3, dword ptr [rax+3Ch]
          vaddss  xmm1, xmm0, dword ptr [rbp+2340h+vEyePosOut]
          vmovss  dword ptr [rbp+2340h+end], xmm1
          vmulss  xmm0, xmm3, dword ptr [rax+40h]
          vaddss  xmm1, xmm0, dword ptr [rbp+2340h+vEyePosOut+4]
          vmovss  dword ptr [rbp+2340h+end+4], xmm1
          vmovss  xmm2, dword ptr [rbp+2340h+vEyePosOut+8]
          vmovss  dword ptr [rbp+2340h+end+8], xmm2
        }
        G_DebugLine(&vEyePosOut, &end, &colorRed, 0);
      }
      else
      {
        __asm { vmovaps xmm2, xmm10; scale }
        G_Main_AddDebugString(&vEyePosOut, &colorWhite, *(float *)&_XMM2, "No Threat");
      }
    }
  }
  this->m_pAI->threat.hasThreateningEnemy = 0;
  if ( level.teammode == TEAMMODE_FFA )
  {
    memset(&result, 0, sizeof(result));
    v22 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80);
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
      _RAX = Com_TeamsSP_GetAllCombatTeamFlags();
    else
      _RAX = Com_TeamsMP_GetAllTeamFlags();
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vmovups xmmword ptr [rbp+2340h+result.array], xmm0
      vmovsd  xmm1, qword ptr [rax+10h]
      vmovsd  qword ptr [rbp+2340h+result.array+10h], xmm1
    }
    v25 = _RAX->array[6] & 0xFFEFFFFF;
    if ( v22 )
      result.array[0] &= ~0x8000000u;
    result.array[6] = v25 & 0xFF9FFFFF;
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
    goto LABEL_193;
  }
  if ( EntHandle::isDefined(&sentient->scriptTargetEnt) )
  {
    _RCX = this->m_pAI->sentient;
    __asm { vucomiss xmm10, dword ptr [rcx+50h] }
  }
  v28 = 0;
  p_result = &result;
  while ( !p_result->array[0] )
  {
    ++v28;
    p_result = (bitarray<224> *)((char *)p_result + 4);
    if ( v28 >= 7 )
      goto LABEL_193;
  }
  v30 = -2147483647;
  v172 = -2147483647;
  v31 = NULL;
  v177 = NULL;
  IsUsingTurret = AICommonInterface::IsUsingTurret(this);
  v32 = IsUsingTurret;
  v171 = IsUsingTurret;
  v175 = this->GetCombatLine(this, (vec3_t *)v190, (vec3_t *)v192);
  if ( v175 && Dvar_GetInt_Internal_DebugName(DVARINT_ai_debugThreatSelection, "ai_debugThreatSelection") == 1 )
  {
    m_pAI = this->m_pAI;
    if ( Dvar_GetInt_Internal_DebugName(DVARINT_ai_debugEntIndex, "ai_debugEntIndex") == m_pAI->ent->s.number )
      goto LABEL_46;
  }
  v34 = DVARBOOL_ai_debugCombatLine;
  if ( !DVARBOOL_ai_debugCombatLine && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugCombatLine") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v34);
  if ( v34->current.enabled )
  {
    m_pAI = this->m_pAI;
LABEL_46:
    __asm
    {
      vmovss  xmm0, [rbp+2340h+var_22BC]
      vxorps  xmm5, xmm0, cs:__xmm@80000000800000008000000080000000
      vmovss  xmm4, [rbp+2340h+var_22E0]
      vaddss  xmm0, xmm5, xmm4
      vmovss  dword ptr [rbp+2340h+end], xmm0
      vmovss  xmm3, [rbp+2340h+var_22DC]
      vaddss  xmm1, xmm3, [rbp+2340h+var_22C0]
      vmovss  dword ptr [rbp+2340h+end+4], xmm1
      vmovss  xmm2, [rbp+2340h+var_22D8]
      vmovss  dword ptr [rbp+2340h+end+8], xmm2
      vsubss  xmm0, xmm4, xmm5
      vmovss  dword ptr [rbp+2340h+vEyePosOut], xmm0
      vsubss  xmm1, xmm3, [rbp+2340h+var_22C0]
      vmovss  dword ptr [rbp+2340h+vEyePosOut+4], xmm1
      vmovss  dword ptr [rbp+2340h+vEyePosOut+8], xmm2
    }
    v43 = DebugThreatInfoDuration(m_pAI);
    G_DebugLineWithDuration(&end, &vEyePosOut, &colorYellowHeat, 0, v43);
  }
  *(_QWORD *)vEyePosOut.v = Sentient_NearestTacPoint(this->m_pAI->sentient);
  v44 = EnemySelector_Get(this->m_pAI->sentient->enemySelector);
  *(_QWORD *)end.v = v44;
  if ( !v44 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 1590, ASSERT_TYPE_ASSERT, "(enemySelector)", (const char *)&queryFormat, "enemySelector") )
    __debugbreak();
  v45 = Sentient_FirstSentient(&result);
  v179 = "entity";
  if ( v45 )
  {
    p_potentialTargets = &potentialTargets;
    __asm
    {
      vmovss  xmm12, cs:__real@80000000
      vmovss  xmm11, cs:__real@44000000
      vmovss  xmm13, cs:__real@48800000
    }
    while ( 1 )
    {
      if ( Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH) && AI_IsAlliedSentient(this->m_pAI->sentient, v45) )
        goto LABEL_65;
      ent = v45->ent;
      if ( v45->ent->health <= 0 && (ent->client || ent->actor || ent->agent || ent->vehicle) )
        break;
      if ( ((unsigned __int8 (__fastcall *)(AICommonInterface *))this->IsValidTarget)(this) )
      {
        this->StoreSentientThreat(this, v45, -2147483647);
        _RSI = Sentient_GetSentientInfo(this->m_pAI->sentient, v45);
        surprised = _RSI->surprised;
        _RSI->surprised = 0;
        if ( _RSI->lastKnownPosTime <= 0 )
        {
          v50 = &colorRed;
          v51 = "unaware";
          goto LABEL_63;
        }
        if ( this->CheckIgnore(this, v45) )
        {
          v50 = &colorRed;
          v51 = "ignoreme";
LABEL_63:
          ent = v45->ent;
LABEL_64:
          DebugThreatStringSimple(this->m_pAI, ent, v51, v50);
          goto LABEL_65;
        }
        iLastAttackMeTime = _RSI->iLastAttackMeTime;
        v67 = iLastAttackMeTime && level.time - iLastAttackMeTime < 10000;
        if ( !Dvar_GetBool_Internal_DebugName(DVARBOOL_ai_threatSight, "ai_threatSight") )
          goto LABEL_86;
        v68 = this->m_pAI;
        if ( !v68->threat.threatSight )
          goto LABEL_86;
        __asm { vcomiss xmm10, dword ptr [rsi+1Ch] }
        if ( !v68->threat.threatSight )
          goto LABEL_86;
        if ( !v67 )
        {
          DebugThreatStringSimple(v68, v45->ent, "threatSight", &colorRed);
          v30 = v172;
        }
        else
        {
LABEL_86:
          v70 = 1;
          if ( !IsUsingTurret )
          {
            iLastVisTime = _RSI->VisCache.iLastVisTime;
            if ( !iLastVisTime || level.time - iLastVisTime >= 10000 )
              v70 = 0;
          }
          SentientInfo_GetLastKnownPos(_RSI, &outLastKnownPos);
          if ( SV_BotIsBotEnt(this->m_pAI->ent) )
          {
            this->GetEyePosition(this, (vec3_t *)&v186);
            v71 = this->m_pAI;
            __asm
            {
              vmovss  xmm2, [rbp+2340h+var_2308]
              vmovss  xmm3, [rbp+2340h+var_230C]
              vmovss  xmm1, [rbp+2340h+var_2310]
            }
          }
          else
          {
            v71 = this->m_pAI;
            _RAX = v71->ent;
            __asm
            {
              vmovss  xmm1, dword ptr [rax+130h]
              vmovss  [rbp+2340h+var_2310], xmm1
              vmovss  xmm3, dword ptr [rax+134h]
              vmovss  [rbp+2340h+var_230C], xmm3
              vmovss  xmm2, dword ptr [rax+138h]
              vmovss  [rbp+2340h+var_2308], xmm2
            }
          }
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+2340h+outLastKnownPos]
            vsubss  xmm4, xmm0, xmm1
            vmovss  xmm1, dword ptr [rbp+2340h+outLastKnownPos+4]
            vsubss  xmm5, xmm1, xmm3
            vmovss  xmm0, dword ptr [rbp+2340h+outLastKnownPos+8]
            vsubss  xmm6, xmm0, xmm2
            vmulss  xmm2, xmm5, xmm5
            vmulss  xmm1, xmm4, xmm4
            vaddss  xmm3, xmm2, xmm1
            vmulss  xmm0, xmm6, xmm6
            vaddss  xmm2, xmm3, xmm0
            vsqrtss xmm7, xmm2, xmm2
            vcmpless xmm0, xmm7, xmm12
            vblendvps xmm1, xmm7, xmm10, xmm0
            vdivss  xmm0, xmm10, xmm1
            vmulss  xmm8, xmm0, xmm4
            vmulss  xmm9, xmm0, xmm5
            vmulss  xmm6, xmm0, xmm6
          }
          if ( SV_BotIsBotEnt(v71->ent) )
          {
            __asm { vmovaps xmm2, xmm7; enemyDist }
            *(double *)&_XMM0 = SV_BotGetAdjustedEnemyDistForThreat(this->m_pAI->sentient, v45, *(float *)&_XMM2);
            __asm { vmovaps xmm7, xmm0 }
          }
          __asm { vcomiss xmm7, xmm11 }
          if ( this->m_pAI->threat.bCanAcquireNearbyTacVisEnemies )
          {
            __asm
            {
              vmovss  xmm0, [rbp+2340h+var_2310]
              vsubss  xmm3, xmm0, dword ptr [rax+130h]
              vmovss  xmm1, [rbp+2340h+var_230C]
              vsubss  xmm2, xmm1, dword ptr [rax+134h]
              vmovss  xmm0, [rbp+2340h+var_2308]
              vsubss  xmm4, xmm0, dword ptr [rax+138h]
              vmulss  xmm2, xmm2, xmm2
              vmulss  xmm1, xmm3, xmm3
              vaddss  xmm3, xmm2, xmm1
              vmulss  xmm0, xmm4, xmm4
              vaddss  xmm2, xmm3, xmm0
              vcomiss xmm2, xmm13
            }
          }
          v32 = (v70 || v67) && _RSI->attackTime <= level.time;
          if ( (unsigned int)numPotentialTargets >= 0x110 )
          {
            LODWORD(v169) = 272;
            LODWORD(v168) = numPotentialTargets;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 1729, ASSERT_TYPE_ASSERT, "(unsigned)( numPotentialTargets ) < (unsigned)( ( sizeof( *array_counter( potentialTargets ) ) + 0 ) )", "numPotentialTargets doesn't index ARRAY_COUNT( potentialTargets )\n\t%i not in [0, %i)", v168, v169) )
              __debugbreak();
          }
          _R14 = p_potentialTargets;
          ++numPotentialTargets;
          ++p_potentialTargets;
          v109 = v45->ent;
          if ( !_R14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 1160, ASSERT_TYPE_ASSERT, "(potentialTarget)", (const char *)&queryFormat, "potentialTarget") )
            __debugbreak();
          if ( !v109 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_threat.cpp", 1161, ASSERT_TYPE_ASSERT, "(entity)", (const char *)&queryFormat, "entity") )
            __debugbreak();
          _R14->entity = v109;
          __asm { vmovss  dword ptr [r14+0Ch], xmm7 }
          v13 = 0i64;
          _R14->threat = 0;
          __asm
          {
            vmovss  dword ptr [r14+14h], xmm9
            vmovss  dword ptr [r14+18h], xmm6
            vmulss  xmm1, xmm8, xmm8
            vmulss  xmm0, xmm9, xmm9
            vaddss  xmm2, xmm1, xmm0
            vmulss  xmm1, xmm6, xmm6
            vaddss  xmm2, xmm2, xmm1
            vsqrtss xmm3, xmm2, xmm2
            vcmpless xmm0, xmm3, xmm12
            vblendvps xmm1, xmm3, xmm10, xmm0
            vdivss  xmm2, xmm10, xmm1
            vmulss  xmm0, xmm2, xmm8
            vmovss  dword ptr [r14+10h], xmm0
            vmulss  xmm1, xmm2, dword ptr [r14+14h]
            vmovss  dword ptr [r14+14h], xmm1
            vmulss  xmm0, xmm2, dword ptr [r14+18h]
            vmovss  dword ptr [r14+18h], xmm0
          }
          if ( this->CheckAvoidTarget(this, v45) )
            goto LABEL_115;
          if ( !v32 && v171 )
          {
            v121 = "goodOnly";
            v122 = this->m_pAI;
LABEL_114:
            DebugThreatStringSimple(v122, v45->ent, v121, &colorRed);
LABEL_115:
            v31 = v177;
            v30 = v172;
            v32 = v171;
            goto LABEL_66;
          }
          AIWrapper::AIWrapper(&v183, v45->ent);
          if ( v183.m_pAI )
          {
            v122 = this->m_pAI;
            if ( v122->turret.pTurret && v45->turretInvulnerability )
              goto LABEL_121;
            if ( AIScriptedInterface::ShouldIgnorePain(v183.m_pAI) )
            {
              v122 = this->m_pAI;
LABEL_121:
              v121 = "turret invul";
              goto LABEL_114;
            }
          }
          __asm { vmovaps xmm2, xmm7 }
          v125 = ((__int64 (__fastcall *)(AICommonInterface *, sentient_s *, __int64, bool, int *, int *, int, _QWORD))this->UpdateSingleThreat)(this, v45, v123, v175, v190, v192, 1, *(_QWORD *)end.v);
          _R14->threat = v125;
          this->StoreSentientThreat(this, v45, v125);
          if ( v125 == 0x80000000 )
          {
            DebugThreatStringSimple(this->m_pAI, v45->ent, "ignoreme", &colorRed);
            v31 = v177;
            v30 = v172;
            v32 = v171;
          }
          else
          {
            v30 = v172;
            if ( v172 < v125 || !v171 && v32 || SentientHandle::isDefined(&this->m_pAI->threat.pFavoriteEnemy) && v45 == SentientHandle::sentient(&this->m_pAI->threat.pFavoriteEnemy) )
            {
              if ( !SentientHandle::isDefined(&this->m_pAI->threat.pFavoriteEnemy) || (v30 = 2147483646, v45 != SentientHandle::sentient(&this->m_pAI->threat.pFavoriteEnemy)) )
                v30 = v125;
              v172 = v30;
              v31 = v45->ent;
              v177 = v45->ent;
              v171 = v32;
              this->m_pAI->threat.newEnemyReaction = surprised;
              v126 = this->m_pAI;
              if ( v126->threat.newEnemyReaction )
                v126->threat.newEnemyReactionTime = level.time;
            }
            else
            {
              v31 = v177;
              v32 = v171;
            }
          }
        }
      }
LABEL_65:
      v13 = 0i64;
LABEL_66:
      v45 = Sentient_NextSentient(v45, &result);
      if ( !v45 )
      {
        v44 = *(const EnemySelector **)end.v;
        goto LABEL_68;
      }
    }
    v50 = &colorBlack;
    v51 = "dead";
    goto LABEL_64;
  }
LABEL_68:
  this->m_pAI->threat.hasThreateningEnemy = v32;
  if ( v31 && this->ShouldContinueTargetingDeadEnemy(this, v30) )
    goto LABEL_193;
  if ( EntHandle::isDefined(&this->m_pAI->sentient->scriptTargetEnt) )
  {
    _RBX = this->m_pAI->sentient;
    __asm
    {
      vxorps  xmm6, xmm6, xmm6
      vcvtsi2ss xmm6, xmm6, r12d
    }
    EnemySelector_GetMaxThreat(v44);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vdivss  xmm1, xmm6, xmm0
    }
    _RCX = this->m_pAI->sentient;
    __asm { vcomiss xmm1, dword ptr [rbx+50h] }
    if ( v60 )
    {
      v31 = EntHandle::ent(&_RCX->scriptTargetEnt);
      v177 = v31;
      _RDX = this->m_pAI->sentient;
      __asm
      {
        vmovss  xmm1, dword ptr [rdx+50h]
        vcvtss2sd xmm1, xmm1, xmm1
        vmovq   rdx, xmm1
      }
      v65 = j_va("enemy (%0.3f)", _RDX);
      goto LABEL_139;
    }
    __asm
    {
      vmovss  xmm1, dword ptr [rcx+50h]
      vcvtss2sd xmm1, xmm1, xmm1
      vmovq   rdx, xmm1
    }
    v130 = j_va("enemy (%0.3f)", _RDX);
    v131 = EntHandle::ent(&this->m_pAI->sentient->scriptTargetEnt);
    DebugThreatStringSimple(this->m_pAI, v131, v130, &colorYellow);
  }
  if ( !v31 )
    goto LABEL_140;
  v65 = "enemy";
LABEL_139:
  DebugThreatStringSimple(this->m_pAI, v31, v65, &colorGreen);
LABEL_140:
  v132 = DVARBOOL_ai_debugTargetChange;
  if ( !DVARBOOL_ai_debugTargetChange && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugTargetChange") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v132);
  if ( v132->current.enabled )
  {
    TargetEntity = AICommonInterface::GetTargetEntity(this);
    v134 = TargetEntity;
    if ( TargetEntity != v31 )
    {
      v135 = -1;
      if ( TargetEntity )
        number = TargetEntity->s.number;
      else
        number = -1;
      if ( v31 )
        v135 = v31->s.number;
      v136 = 0;
      v137 = numPotentialTargets;
      if ( numPotentialTargets > 0 )
      {
        p_threat = &potentialTargets.threat;
        do
        {
          if ( v134 && *((gentity_s **)p_threat - 1) == v134 )
            v13 = (unsigned int)*p_threat;
          if ( *((gentity_s **)p_threat - 1) == v31 )
            v136 = *p_threat;
          p_threat += 8;
          --v137;
        }
        while ( v137 );
        *(_QWORD *)v181.v = v13;
      }
      v139 = v136 - v13;
      v140 = "entity";
      if ( !v134 )
        v140 = "none";
      v141 = "actor";
      v142 = "actor";
      if ( !this->m_pAI->ent->actor )
        v142 = "entity";
      if ( v134 )
      {
        v143 = "actor";
        if ( !v134->actor )
          v143 = v140;
        v140 = v143;
      }
      if ( v177 )
      {
        if ( !v177->actor )
          v141 = "entity";
        v179 = v141;
      }
      if ( !Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH) )
        goto LABEL_179;
      client = this->m_pAI->ent->client;
      name = client->sess.cs.name;
      if ( !client )
        name = v142;
      if ( v134 )
      {
        v146 = v134->client;
        if ( v146 )
          v140 = v146->sess.cs.name;
      }
      v142 = name;
      if ( !v177 || (v147 = v177->client, v148 = v147->sess.cs.name, !v147) )
LABEL_179:
        v148 = v179;
      v149 = this->m_pAI;
      v150 = v149->ent;
      v151 = "agent";
      v152 = "agent";
      if ( !v149->ent->agent )
        v152 = v142;
      if ( v134 )
      {
        v153 = "agent";
        if ( !v134->agent )
          v153 = v140;
        v140 = v153;
      }
      v31 = v177;
      if ( v177 )
      {
        if ( !v177->agent )
          v151 = v148;
        v148 = v151;
      }
      *(float *)&v170 = v181.v[0];
      LODWORD(v168) = number;
      Com_Printf(18, "TARGET CHANGE (%7i): Entity %i (%s) changing targets from Entity %i (%s) [%i] to Entity %i (%s) [%i] <+%i>\n", (unsigned int)level.time, (unsigned int)v150->s.number, v152, v168, v140, v170, v135, v148, v136, v139);
      if ( SV_BotIsBotEnt(this->m_pAI->ent) )
      {
        v154 = j_va("TGT %i -> %i <+%i>", number, v135, v139);
        _RCX = this->m_pAI->ent;
        __asm
        {
          vmovups xmm0, xmmword ptr cs:?colorRedFaded@@3Tvec4_t@@B; vec4_t const colorRedFaded
          vmovups [rbp+2340h+var_23A0], xmm0
          vmovsd  xmm1, qword ptr [rcx+130h]
          vmovsd  qword ptr [rbp+2340h+vEyePosOut], xmm1
        }
        vEyePosOut.v[2] = _RCX->r.currentOrigin.v[2];
        __asm { vmovaps xmm3, xmm10 }
        SV_BotDebugStringEnt(_RCX, &vEyePosOut, &v181, *(float *)&_XMM3, v154, 200);
      }
    }
  }
  Sentient_SetEnemy(this->m_pAI->sentient, v31, 1, 1);
  AICommonInterface::UpdateSecondaryTargets(this, &potentialTargets, numPotentialTargets);
LABEL_193:
  Sys_ProfEndNamedEvent();
  _R11 = &v202;
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
  }
}

