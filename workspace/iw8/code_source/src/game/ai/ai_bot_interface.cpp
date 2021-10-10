/*
==============
AIBotAgentInterface::SetClothType
==============
*/

void __fastcall AIBotAgentInterface::SetClothType(AIBotAgentInterface *this, unsigned __int8 clothType)
{
  ?SetClothType@AIBotAgentInterface@@UEBAXE@Z(this, clothType);
}

/*
==============
AIBotInterface::UpdateEyeInformation
==============
*/

void __fastcall AIBotInterface::UpdateEyeInformation(AIBotInterface *this)
{
  ?UpdateEyeInformation@AIBotInterface@@UEBAXXZ(this);
}

/*
==============
AIBotInterface::SetBot
==============
*/

void __fastcall AIBotInterface::SetBot(AIBotInterface *this, bot_data_t *pBotData)
{
  ?SetBot@AIBotInterface@@QEAAXPEAUbot_data_t@@@Z(this, pBotData);
}

/*
==============
AIBotInterface::GetThreatUpdateInterval
==============
*/

int __fastcall AIBotInterface::GetThreatUpdateInterval(AIBotInterface *this)
{
  return ?GetThreatUpdateInterval@AIBotInterface@@UEBAHXZ(this);
}

/*
==============
AIBotInterface::CanSeeProneEntityTorsoOrFeet
==============
*/

bool __fastcall AIBotInterface::CanSeeProneEntityTorsoOrFeet(AIBotInterface *this, const vec3_t *vEntHeadPos, float fovDot, float fovDotZ, float fMaxDistSqrd, const vec3_t *vViewPos, const gentity_s *pOtherEnt)
{
  return ?CanSeeProneEntityTorsoOrFeet@AIBotInterface@@MEBA_NAEBTvec3_t@@MMM0PEBUgentity_s@@@Z(this, vEntHeadPos, fovDot, fovDotZ, fMaxDistSqrd, vViewPos, pOtherEnt);
}

/*
==============
AIBotInterface::Grenade_Ping
==============
*/

void __fastcall AIBotInterface::Grenade_Ping(AIBotInterface *this, gentity_s *pGrenade, const vec3_t *origin)
{
  ?Grenade_Ping@AIBotInterface@@UEBAXPEAUgentity_s@@AEBTvec3_t@@@Z(this, pGrenade, origin);
}

/*
==============
AIBotInterface::ShouldContinueTargetingDeadEnemy
==============
*/

bool __fastcall AIBotInterface::ShouldContinueTargetingDeadEnemy(AIBotInterface *this, int newEnemyThreat)
{
  return ?ShouldContinueTargetingDeadEnemy@AIBotInterface@@UEBA_NH@Z(this, newEnemyThreat);
}

/*
==============
AIBotInterface::GetVelocity
==============
*/

void __fastcall AIBotInterface::GetVelocity(AIBotInterface *this, vec3_t *outVelocity)
{
  ?GetVelocity@AIBotInterface@@UEBAXAEATvec3_t@@@Z(this, outVelocity);
}

/*
==============
AIBotInterface::FovDotZ
==============
*/

double __fastcall AIBotInterface::FovDotZ(AIBotInterface *this, const gentity_s *pOtherEnt)
{
  double result; 

  *(float *)&result = ?FovDotZ@AIBotInterface@@MEBAMPEBUgentity_s@@@Z(this, pOtherEnt);
  return result;
}

/*
==============
AIBotInterface::CheckAvoidTarget
==============
*/

bool __fastcall AIBotInterface::CheckAvoidTarget(AIBotInterface *this, sentient_s *enemy)
{
  return ?CheckAvoidTarget@AIBotInterface@@UEBA_NPEAUsentient_s@@@Z(this, enemy);
}

/*
==============
AIBotInterface::SetBot
==============
*/

void __fastcall AIBotInterface::SetBot(AIBotInterface *this, bot_info_t *botInfo)
{
  ?SetBot@AIBotInterface@@QEAAXAEAUbot_info_t@@@Z(this, botInfo);
}

/*
==============
AIBotInterface::Projectile_Ping
==============
*/

void __fastcall AIBotInterface::Projectile_Ping(AIBotInterface *this, gentity_s *pProjectile, const vec3_t *origin)
{
  ?Projectile_Ping@AIBotInterface@@UEBAXPEAUgentity_s@@AEBTvec3_t@@@Z(this, pProjectile, origin);
}

/*
==============
AIBotInterface::GetEyePosition
==============
*/

void __fastcall AIBotInterface::GetEyePosition(AIBotInterface *this, vec3_t *eyePosition)
{
  ?GetEyePosition@AIBotInterface@@UEBAXAEATvec3_t@@@Z(this, eyePosition);
}

/*
==============
AIBotAgentInterface::GetVelocity
==============
*/

void __fastcall AIBotAgentInterface::GetVelocity(AIBotAgentInterface *this, vec3_t *outVelocity)
{
  ?GetVelocity@AIBotAgentInterface@@UEBAXAEATvec3_t@@@Z(this, outVelocity);
}

/*
==============
AIBotInterface::EventGunshotTeammate
==============
*/

bool __fastcall AIBotInterface::EventGunshotTeammate(AIBotInterface *this, sentient_s *originator, const vec3_t *vOrigin, unsigned __int8 reason)
{
  return ?EventGunshotTeammate@AIBotInterface@@UEBA_NPEAUsentient_s@@AEBTvec3_t@@E@Z(this, originator, vOrigin, reason);
}

/*
==============
AIBotAgentInterface::GetThreatUpdateInterval
==============
*/

int __fastcall AIBotAgentInterface::GetThreatUpdateInterval(AIBotAgentInterface *this)
{
  return ?GetThreatUpdateInterval@AIBotAgentInterface@@UEBAHXZ(this);
}

/*
==============
AIBotInterface::IsFlashBanged
==============
*/

bool __fastcall AIBotInterface::IsFlashBanged(AIBotInterface *this)
{
  return ?IsFlashBanged@AIBotInterface@@UEBA_NXZ(this);
}

/*
==============
AIBotInterface::StoreSentientThreat
==============
*/

void __fastcall AIBotInterface::StoreSentientThreat(AIBotInterface *this, sentient_s *enemy, int threat)
{
  ?StoreSentientThreat@AIBotInterface@@UEBAXPEAUsentient_s@@H@Z(this, enemy, threat);
}

/*
==============
AIBotAgentInterface::GetClothType
==============
*/

unsigned __int8 __fastcall AIBotAgentInterface::GetClothType(AIBotAgentInterface *this)
{
  return ?GetClothType@AIBotAgentInterface@@UEBAEXZ(this);
}

/*
==============
AIBotInterface::SetAlmostGroundPlane
==============
*/

void __fastcall AIBotInterface::SetAlmostGroundPlane(AIBotInterface *this, bool newValue)
{
  ?SetAlmostGroundPlane@AIBotInterface@@QEBAX_N@Z(this, newValue);
}

/*
==============
AIBotInterface::SetBot
==============
*/

void __fastcall AIBotInterface::SetBot(AIBotInterface *this, bot_info_t *pBotInfo)
{
  ?SetBot@AIBotInterface@@QEAAXPEAUbot_info_t@@@Z(this, pBotInfo);
}

/*
==============
AIBotInterface::SetMayMoveTime
==============
*/

void __fastcall AIBotInterface::SetMayMoveTime(AIBotInterface *this, int time)
{
  ?SetMayMoveTime@AIBotInterface@@UEBAXH@Z(this, time);
}

/*
==============
AIBotInterface::CheckIgnore
==============
*/

int __fastcall AIBotInterface::CheckIgnore(AIBotInterface *this, sentient_s *enemy)
{
  return ?CheckIgnore@AIBotInterface@@UEBAHPEAUsentient_s@@@Z(this, enemy);
}

/*
==============
AIBotAgentInterface::GetWeaponFlashTagName
==============
*/

TagPair *__fastcall AIBotAgentInterface::GetWeaponFlashTagName(AIBotAgentInterface *this, TagPair *result)
{
  return ?GetWeaponFlashTagName@AIBotAgentInterface@@UEBA?AVTagPair@@XZ(this, result);
}

/*
==============
AIBotInterface::GetWeaponFlashTagName
==============
*/

TagPair *__fastcall AIBotInterface::GetWeaponFlashTagName(AIBotInterface *this, TagPair *result)
{
  return ?GetWeaponFlashTagName@AIBotInterface@@UEBA?AVTagPair@@XZ(this, result);
}

/*
==============
AIBotInterface::GetCombatLine
==============
*/

bool __fastcall AIBotInterface::GetCombatLine(AIBotInterface *this, vec3_t *outCombatLinePos, vec3_t *outCombatLineAllyDir)
{
  return ?GetCombatLine@AIBotInterface@@MEBA_NAEATvec3_t@@0@Z(this, outCombatLinePos, outCombatLineAllyDir);
}

/*
==============
AIBotAgentInterface::GetEyePosition
==============
*/

void __fastcall AIBotAgentInterface::GetEyePosition(AIBotAgentInterface *this, vec3_t *outEyePosition)
{
  ?GetEyePosition@AIBotAgentInterface@@UEBAXAEATvec3_t@@@Z(this, outEyePosition);
}

/*
==============
AIBotInterface::GetScriptGoal
==============
*/

ai_goal_t *__fastcall AIBotInterface::GetScriptGoal(AIBotInterface *this)
{
  return ?GetScriptGoal@AIBotInterface@@UEBAPEAUai_goal_t@@XZ(this);
}

/*
==============
AIBotInterface::DissociateNode
==============
*/

void __fastcall AIBotInterface::DissociateNode(AIBotInterface *this, pathnode_t *pNode)
{
  ?DissociateNode@AIBotInterface@@UEBAXPEAUpathnode_t@@@Z(this, pNode);
}

/*
==============
AIBotInterface::FovDot
==============
*/

double __fastcall AIBotInterface::FovDot(AIBotInterface *this, const gentity_s *pOtherEnt)
{
  double result; 

  *(float *)&result = ?FovDot@AIBotInterface@@MEBAMPEBUgentity_s@@@Z(this, pOtherEnt);
  return result;
}

/*
==============
AIBotInterface::SetLateralMoveStuck
==============
*/

void __fastcall AIBotInterface::SetLateralMoveStuck(AIBotInterface *this, bool stuck, bool body)
{
  ?SetLateralMoveStuck@AIBotInterface@@QEBAX_N0@Z(this, stuck, body);
}

/*
==============
AIBotInterface::GetPerfectInfo
==============
*/

void __fastcall AIBotInterface::GetPerfectInfo(AIBotInterface *this, sentient_s *other, unsigned __int8 reason)
{
  ?GetPerfectInfo@AIBotInterface@@UEBAXPEAUsentient_s@@E@Z(this, other, reason);
}

/*
==============
AIBotInterface::CanSeeProneEntityTorsoOrFeet
==============
*/
bool AIBotInterface::CanSeeProneEntityTorsoOrFeet(AIBotInterface *this, const vec3_t *vEntHeadPos, float fovDot, float fovDotZ, float fMaxDistSqrd, const vec3_t *vViewPos, const gentity_s *pOtherEnt)
{
  const playerState_s *EntityPlayerStateConst; 
  const playerState_s *v11; 
  int ignoreEntityNum; 
  bool result; 
  float v14; 
  int number; 
  float v16; 
  vec3_t forward; 
  vec3_t vPoint; 
  vec3_t v19; 

  EntityPlayerStateConst = G_GetEntityPlayerStateConst(pOtherEnt);
  v11 = EntityPlayerStateConst;
  if ( !EntityPlayerStateConst || !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&EntityPlayerStateConst->pm_flags, ACTIVE, 0) )
    return 0;
  YawVectors(v11->viewangles.v[1] - 180.0, &forward, NULL);
  ignoreEntityNum = pOtherEnt->s.number;
  vPoint.v[0] = (float)(25.0 * forward.v[0]) + vEntHeadPos->v[0];
  vPoint.v[1] = (float)(25.0 * forward.v[1]) + vEntHeadPos->v[1];
  vPoint.v[2] = (float)(25.0 * forward.v[2]) + vEntHeadPos->v[2];
  result = AICommonInterface::CanSeePointExInternal(this, &vPoint, fovDot, fovDotZ, fMaxDistSqrd, ignoreEntityNum, vViewPos, NORMAL_FOLIAGE_CHECKS);
  if ( !result )
  {
    v14 = (float)(50.0 * forward.v[0]) + vEntHeadPos->v[0];
    number = pOtherEnt->s.number;
    v19.v[1] = (float)(50.0 * forward.v[1]) + vEntHeadPos->v[1];
    v16 = (float)(50.0 * forward.v[2]) + vEntHeadPos->v[2];
    v19.v[0] = v14;
    v19.v[2] = v16;
    return AICommonInterface::CanSeePointExInternal(this, &v19, fovDot, fovDotZ, fMaxDistSqrd, number, vViewPos, NORMAL_FOLIAGE_CHECKS);
  }
  return result;
}

/*
==============
AIBotInterface::CheckAvoidTarget
==============
*/
char AIBotInterface::CheckAvoidTarget(AIBotInterface *this, sentient_s *enemy)
{
  int isAwareOfSentient; 

  if ( SV_BotCanTargetSentient(this->m_pAI->sentient, enemy, &isAwareOfSentient) )
    return 0;
  SV_BotCheckAvoidSentient(isAwareOfSentient, this->m_pAI->sentient, enemy);
  return 1;
}

/*
==============
AIBotInterface::CheckIgnore
==============
*/
int AIBotInterface::CheckIgnore(AIBotInterface *this, sentient_s *enemy)
{
  gentity_s *ent; 
  int number; 
  __int64 v6; 
  __int64 v7; 
  __int64 v9; 
  __int64 v10; 

  if ( !enemy && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bot_interface.cpp", 97, ASSERT_TYPE_ASSERT, "(enemy)", (const char *)&queryFormat, "enemy") )
    __debugbreak();
  if ( !enemy->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bot_interface.cpp", 98, ASSERT_TYPE_ASSERT, "(enemy->ent)", (const char *)&queryFormat, "enemy->ent") )
    __debugbreak();
  if ( !EntHandle::isDefined(&enemy->ent->r.ownerNum) )
    return AICommonInterface::CheckIgnore(this, enemy);
  ent = enemy->ent;
  number = enemy->ent->r.ownerNum.number;
  if ( (unsigned int)(number - 1) >= 0x7FF )
  {
    LODWORD(v9) = number - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 223, ASSERT_TYPE_ASSERT, "(unsigned)( number - 1 ) < (unsigned)( ENTITYNUM_NONE )", "number - 1 doesn't index ENTITYNUM_NONE\n\t%i not in [0, %i)", v9, 2047) )
      __debugbreak();
  }
  v6 = ent->r.ownerNum.number;
  if ( (unsigned int)(v6 - 1) >= 0x800 )
  {
    LODWORD(v10) = 2048;
    LODWORD(v9) = v6 - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v9, v10) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v7 = v6 - 1;
  if ( g_entities[v7].r.isInUse != g_entityIsInUse[v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v7] )
  {
    LODWORD(v10) = ent->r.ownerNum.number - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 224, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( G_IsEntityInUse( number - 1 ) )", v10) )
      __debugbreak();
  }
  if ( (g_entities[ent->r.ownerNum.number - 1].flags.m_flags[0] & 4) != 0 )
    return 1;
  else
    return AICommonInterface::CheckIgnore(this, enemy);
}

/*
==============
AIBotInterface::DissociateNode
==============
*/
void AIBotInterface::DissociateNode(AIBotInterface *this, pathnode_t *pNode)
{
  bot_info_t *m_pAI; 

  if ( !pNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bot_interface.cpp", 162, ASSERT_TYPE_ASSERT, "( pNode )", (const char *)&queryFormat, "pNode") )
    __debugbreak();
  m_pAI = this->m_pAI;
  if ( m_pAI->scriptGoal.nearestNode == pNode )
  {
    m_pAI->scriptGoal.nearestNode = NULL;
    m_pAI = this->m_pAI;
  }
  if ( m_pAI->scriptGoal.node == pNode )
  {
    pathnode_t::GetPos(pNode, &m_pAI->scriptGoal.pos);
    this->m_pAI->scriptGoal.node = NULL;
    m_pAI = this->m_pAI;
  }
  if ( m_pAI->activeGoal.nearestNode == pNode )
  {
    m_pAI->activeGoal.nearestNode = NULL;
    m_pAI = this->m_pAI;
  }
  if ( m_pAI->activeGoal.node == pNode )
  {
    pathnode_t::GetPos(pNode, &m_pAI->activeGoal.pos);
    this->m_pAI->activeGoal.node = NULL;
  }
}

/*
==============
AIBotInterface::EventGunshotTeammate
==============
*/
char AIBotInterface::EventGunshotTeammate(AIBotInterface *this, sentient_s *originator, const vec3_t *vOrigin, unsigned __int8 reason)
{
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bot_interface.cpp", 139, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !originator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bot_interface.cpp", 140, ASSERT_TYPE_ASSERT, "(originator)", (const char *)&queryFormat, "originator") )
    __debugbreak();
  SV_BotHandleGunshotTeammate(this->m_pAI->ent, originator->ent, vOrigin);
  return 1;
}

/*
==============
AIBotInterface::FovDot
==============
*/
double AIBotInterface::FovDot(AIBotInterface *this, const gentity_s *pOtherEnt)
{
  return SV_BotFovDot(this->m_pAI, pOtherEnt);
}

/*
==============
AIBotInterface::FovDotZ
==============
*/
double AIBotInterface::FovDotZ(AIBotInterface *this, const gentity_s *pOtherEnt)
{
  return SV_BotFovDotZ(this->m_pAI, pOtherEnt);
}

/*
==============
AIBotAgentInterface::GetClothType
==============
*/
__int64 AIBotAgentInterface::GetClothType(AIBotAgentInterface *this)
{
  char clothType; 

  if ( !this->AIBotInterface::m_pAI->ent->agent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bot_interface.cpp", 324, ASSERT_TYPE_ASSERT, "(m_pAI->ent->agent)", (const char *)&queryFormat, "m_pAI->ent->agent") )
    __debugbreak();
  clothType = this->AIBotInterface::m_pAI->ent->agent->playerState.clothType;
  if ( clothType < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,signed char>(signed char)", "unsigned", (unsigned __int8)clothType, "signed", clothType) )
    __debugbreak();
  return (unsigned __int8)clothType;
}

/*
==============
AIBotInterface::GetCombatLine
==============
*/
bool AIBotInterface::GetCombatLine(AIBotInterface *this, vec3_t *outCombatLinePos, vec3_t *outCombatLineAllyDir)
{
  return 0;
}

/*
==============
AIBotAgentInterface::GetEyePosition
==============
*/
void AIBotAgentInterface::GetEyePosition(AIBotAgentInterface *this, vec3_t *outEyePosition)
{
  gentity_s *ent; 

  ent = this->AIBotInterface::m_pAI->ent;
  if ( (!ent || !ent->agent) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bot_interface.cpp", 295, ASSERT_TYPE_ASSERT, "(m_pAI->ent && m_pAI->ent->agent)", (const char *)&queryFormat, "m_pAI->ent && m_pAI->ent->agent") )
    __debugbreak();
  G_Client_GetEyePosition(&this->AIBotInterface::m_pAI->ent->agent->playerState, outEyePosition);
}

/*
==============
AIBotInterface::GetEyePosition
==============
*/
void AIBotInterface::GetEyePosition(AIBotInterface *this, vec3_t *eyePosition)
{
  if ( !this->m_pAI->ent->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bot_interface.cpp", 77, ASSERT_TYPE_ASSERT, "(m_pAI->ent->client)", (const char *)&queryFormat, "m_pAI->ent->client") )
    __debugbreak();
  G_Client_GetEyePosition(&this->m_pAI->ent->client->ps, eyePosition);
}

/*
==============
AIBotInterface::GetPerfectInfo
==============
*/
void AIBotInterface::GetPerfectInfo(AIBotInterface *this, sentient_s *other, unsigned __int8 reason)
{
  sentient_info_t *SentientInfo; 

  if ( !other->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bot_interface.cpp", 261, ASSERT_TYPE_ASSERT, "(other->ent)", (const char *)&queryFormat, "other->ent") )
    __debugbreak();
  if ( SV_BotGetPerfectInfo(this->m_pAI->ent, other, reason) )
  {
    AICommonInterface::GetPerfectInfo(this, other, reason);
    SentientInfo = Sentient_GetSentientInfo(this->m_pAI->sentient, other);
    SentientInfo->pLastKnownNode = Sentient_NearestNode(other);
  }
}

/*
==============
AIBotInterface::GetScriptGoal
==============
*/
bot_goal_t *AIBotInterface::GetScriptGoal(AIBotInterface *this)
{
  bot_info_t *m_pAI; 

  m_pAI = this->m_pAI;
  if ( m_pAI->scriptGoal.type )
    return &m_pAI->scriptGoal;
  else
    return 0i64;
}

/*
==============
AIBotAgentInterface::GetThreatUpdateInterval
==============
*/

int __fastcall AIBotAgentInterface::GetThreatUpdateInterval(AIBotAgentInterface *this)
{
  return AICommonInterface::GetThreatUpdateInterval(this);
}

/*
==============
AIBotInterface::GetThreatUpdateInterval
==============
*/
__int64 AIBotInterface::GetThreatUpdateInterval(AIBotInterface *this)
{
  return 100i64;
}

/*
==============
AIBotAgentInterface::GetVelocity
==============
*/
void AIBotAgentInterface::GetVelocity(AIBotAgentInterface *this, vec3_t *outVelocity)
{
  gagent_s *agent; 

  if ( !this->AIBotInterface::m_pAI->ent->agent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bot_interface.cpp", 282, ASSERT_TYPE_ASSERT, "(m_pAI->ent->agent)", (const char *)&queryFormat, "m_pAI->ent->agent") )
    __debugbreak();
  agent = this->AIBotInterface::m_pAI->ent->agent;
  outVelocity->v[0] = agent->playerState.velocity.v[0];
  outVelocity->v[1] = agent->playerState.velocity.v[1];
  outVelocity->v[2] = agent->playerState.velocity.v[2];
}

/*
==============
AIBotInterface::GetVelocity
==============
*/
void AIBotInterface::GetVelocity(AIBotInterface *this, vec3_t *outVelocity)
{
  gclient_s *client; 

  if ( !this->m_pAI->ent->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bot_interface.cpp", 70, ASSERT_TYPE_ASSERT, "(m_pAI->ent->client)", (const char *)&queryFormat, "m_pAI->ent->client") )
    __debugbreak();
  client = this->m_pAI->ent->client;
  outVelocity->v[0] = client->ps.velocity.v[0];
  outVelocity->v[1] = client->ps.velocity.v[1];
  outVelocity->v[2] = client->ps.velocity.v[2];
}

/*
==============
AIBotAgentInterface::GetWeaponFlashTagName
==============
*/

TagPair *__fastcall AIBotAgentInterface::GetWeaponFlashTagName(AIBotAgentInterface *this, TagPair *result, double a3)
{
  gagent_s *agent; 
  GWeaponMap *Instance; 
  Weapon r_weapon; 

  agent = this->AIBotInterface::m_pAI->ent->agent;
  Instance = GWeaponMap::GetInstance();
  if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 839, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !agent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 840, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  r_weapon = *BgWeaponMap::GetWeapon(Instance, agent->playerState.weaponsEquipped[0]);
  if ( LOWORD(a3) )
    BG_GetWeaponFlashTagname(result, &r_weapon, 0, 0);
  else
    TagPair::TagPair(result, scr_const.none, (scr_string_t)0);
  return result;
}

/*
==============
AIBotInterface::GetWeaponFlashTagName
==============
*/
TagPair *AIBotInterface::GetWeaponFlashTagName(AIBotInterface *this, TagPair *result)
{
  TagPair::TagPair(result, scr_const.none, (scr_string_t)0);
  return result;
}

/*
==============
AIBotInterface::Grenade_Ping
==============
*/
void AIBotInterface::Grenade_Ping(AIBotInterface *this, gentity_s *pGrenade, const vec3_t *origin)
{
  const gentity_s *v6; 

  if ( this->IsAlive(this) )
  {
    v6 = this->GetEntity(this);
    SV_BotGrenadePing(v6, pGrenade, origin);
  }
}

/*
==============
AIBotInterface::IsFlashBanged
==============
*/
bool AIBotInterface::IsFlashBanged(AIBotInterface *this)
{
  if ( !this->m_pAI->playerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bot_interface.cpp", 155, ASSERT_TYPE_ASSERT, "(m_pAI->playerState)", (const char *)&queryFormat, "m_pAI->playerState") )
    __debugbreak();
  return G_Combat_IsClientFlashbanged(this->m_pAI->playerState) == 1;
}

/*
==============
AIBotInterface::Projectile_Ping
==============
*/
void AIBotInterface::Projectile_Ping(AIBotInterface *this, gentity_s *pProjectile, const vec3_t *origin)
{
  this->Grenade_Ping(this, pProjectile, origin);
}

/*
==============
AIBotInterface::SetAlmostGroundPlane
==============
*/
void AIBotInterface::SetAlmostGroundPlane(AIBotInterface *this, bool newValue)
{
  bot_info_t *m_pAI; 
  int flags; 

  m_pAI = this->m_pAI;
  flags = m_pAI->flags;
  if ( newValue )
    m_pAI->flags = flags | 0x8000000;
  else
    m_pAI->flags = flags & 0xF7FFFFFF;
}

/*
==============
AIBotInterface::SetBot
==============
*/
void AIBotInterface::SetBot(AIBotInterface *this, bot_info_t *botInfo)
{
  AIBotInterface_vtbl *v2; 

  v2 = this->__vftable;
  this->m_pAI = botInfo;
  ((void (*)(void))v2->SetAICommon)();
}

/*
==============
AIBotInterface::SetBot
==============
*/
void AIBotInterface::SetBot(AIBotInterface *this, bot_data_t *pBotData)
{
  AIBotInterface_vtbl *v2; 

  v2 = this->__vftable;
  this->m_pAI = &pBotData->botInfo;
  ((void (*)(void))v2->SetAICommon)();
}

/*
==============
AIBotInterface::SetBot
==============
*/
void AIBotInterface::SetBot(AIBotInterface *this, bot_info_t *pBotInfo)
{
  AIBotInterface_vtbl *v2; 

  v2 = this->__vftable;
  this->m_pAI = pBotInfo;
  ((void (*)(void))v2->SetAICommon)();
}

/*
==============
AIBotAgentInterface::SetClothType
==============
*/
void AIBotAgentInterface::SetClothType(AIBotAgentInterface *this, unsigned __int8 clothType)
{
  int v4; 
  int v5; 

  if ( clothType >= 0x10u )
  {
    v5 = 16;
    v4 = clothType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bot_interface.cpp", 315, ASSERT_TYPE_ASSERT, "(unsigned)( clothType ) < (unsigned)( ( 1 << 4 ) )", "clothType doesn't index MAX_CLOTH_TYPE\n\t%i not in [0, %i)", v4, v5) )
      __debugbreak();
  }
  if ( !this->AIBotInterface::m_pAI->ent->agent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bot_interface.cpp", 316, ASSERT_TYPE_ASSERT, "(m_pAI->ent->agent)", (const char *)&queryFormat, "m_pAI->ent->agent") )
    __debugbreak();
  this->AIBotInterface::m_pAI->ent->agent->playerState.clothType = clothType;
}

/*
==============
AIBotInterface::SetLateralMoveStuck
==============
*/
void AIBotInterface::SetLateralMoveStuck(AIBotInterface *this, bool stuck, bool body)
{
  bot_info_t *m_pAI; 

  if ( stuck )
  {
    m_pAI = this->m_pAI;
    if ( body )
      m_pAI->flags |= 0x40u;
    else
      m_pAI->flags |= 0x20u;
  }
}

/*
==============
AIBotInterface::SetMayMoveTime
==============
*/
void AIBotInterface::SetMayMoveTime(AIBotInterface *this, int time)
{
  ;
}

/*
==============
AIBotInterface::ShouldContinueTargetingDeadEnemy
==============
*/
bool AIBotInterface::ShouldContinueTargetingDeadEnemy(AIBotInterface *this, int newEnemyThreat)
{
  bot_info_t *m_pAI; 

  m_pAI = this->m_pAI;
  return m_pAI->currentAISearch.currentNodeCount && newEnemyThreat < m_pAI->enemyTrack.deadEnemyThreat;
}

/*
==============
AIBotInterface::StoreSentientThreat
==============
*/
void AIBotInterface::StoreSentientThreat(AIBotInterface *this, sentient_s *enemy, int threat)
{
  SV_BotStoreSentientThreat(this->m_pAI->sentient, enemy, threat);
}

/*
==============
AIBotInterface::UpdateEyeInformation
==============
*/
void AIBotInterface::UpdateEyeInformation(AIBotInterface *this)
{
  SV_BotUpdateEyeInfo(this->m_pAI->ent);
}

