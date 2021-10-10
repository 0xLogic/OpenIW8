/*
==============
AIScriptedInterface::UpdateMaxSpeedForPathLength
==============
*/

void __fastcall AIScriptedInterface::UpdateMaxSpeedForPathLength(AIScriptedInterface *this, bool bHadPath)
{
  ?UpdateMaxSpeedForPathLength@AIScriptedInterface@@QEBAX_N@Z(this, bHadPath);
}

/*
==============
AIScriptedInterface::AttemptMoveAway
==============
*/

void __fastcall AIScriptedInterface::AttemptMoveAway(AIScriptedInterface *this)
{
  ?AttemptMoveAway@AIScriptedInterface@@QEBAXXZ(this);
}

/*
==============
AIScriptedInterface::OnDie
==============
*/

void __fastcall AIScriptedInterface::OnDie(gentity_s *self, const gentity_s *pInflictor, gentity_s *pAttacker, int iDamage, int iDamageFlags, int iMod, const Weapon *r_Weapon, bool isAlternate, const vec3_t *vDir, const hitLocation_t hitLoc, int timeOffset)
{
  ?OnDie@AIScriptedInterface@@SAXPEAUgentity_s@@PEBU2@0HHHAEBUWeapon@@_NPEBTvec3_t@@W4hitLocation_t@@H@Z(self, pInflictor, pAttacker, iDamage, iDamageFlags, iMod, r_Weapon, isAlternate, vDir, hitLoc, timeOffset);
}

/*
==============
AIActorInterface::SpawnActor
==============
*/

int __fastcall AIActorInterface::SpawnActor(gentity_s *ent)
{
  return ?SpawnActor@AIActorInterface@@SAHPEAUgentity_s@@@Z(ent);
}

/*
==============
AIScriptedInterface::FindPathToTacPoint
==============
*/

bool __fastcall AIScriptedInterface::FindPathToTacPoint(AIScriptedInterface *this, const tacpoint_t *pTacPoint)
{
  return ?FindPathToTacPoint@AIScriptedInterface@@QEBA_NPEBUtacpoint_t@@@Z(this, pTacPoint);
}

/*
==============
AIScriptedInterface::PostThink
==============
*/

void __fastcall AIScriptedInterface::PostThink(AIScriptedInterface *this)
{
  ?PostThink@AIScriptedInterface@@QEBAXXZ(this);
}

/*
==============
AIActorInterface::FreeExpendable
==============
*/

void AIActorInterface::FreeExpendable(void)
{
  ?FreeExpendable@AIActorInterface@@SAXXZ();
}

/*
==============
AIScriptedInterface::UpdateGoalPos
==============
*/

void __fastcall AIScriptedInterface::UpdateGoalPos(AIScriptedInterface *this)
{
  ?UpdateGoalPos@AIScriptedInterface@@QEBAXXZ(this);
}

/*
==============
AIScriptedInterface::EntInfo
==============
*/

void __fastcall AIScriptedInterface::EntInfo(AIScriptedInterface *this, const vec3_t *source)
{
  ?EntInfo@AIScriptedInterface@@QEBAXAEBTvec3_t@@@Z(this, source);
}

/*
==============
AIScriptedInterface::IsPathSuppressed
==============
*/

bool __fastcall AIScriptedInterface::IsPathSuppressed(AIScriptedInterface *this)
{
  return ?IsPathSuppressed@AIScriptedInterface@@QEBA_NXZ(this);
}

/*
==============
AIScriptedInterface::NodeClaimRevoked
==============
*/

void __fastcall AIScriptedInterface::NodeClaimRevoked(AIScriptedInterface *this, int invalidTime)
{
  ?NodeClaimRevoked@AIScriptedInterface@@QEBAXH@Z(this, invalidTime);
}

/*
==============
AIScriptedInterface::GoalChanged
==============
*/

void __fastcall AIScriptedInterface::GoalChanged(AIScriptedInterface *this)
{
  ?GoalChanged@AIScriptedInterface@@QEBAXXZ(this);
}

/*
==============
AIScriptedInterface::CheckNodeClaim
==============
*/

void __fastcall AIScriptedInterface::CheckNodeClaim(AIScriptedInterface *this)
{
  ?CheckNodeClaim@AIScriptedInterface@@QEBAXXZ(this);
}

/*
==============
AIScriptedInterface::ShouldEarlySharpTurnTick
==============
*/

bool __fastcall AIScriptedInterface::ShouldEarlySharpTurnTick(AIScriptedInterface *this)
{
  return ?ShouldEarlySharpTurnTick@AIScriptedInterface@@QEBA_NXZ(this);
}

/*
==============
AIScriptedInterface::IsDying
==============
*/

bool __fastcall AIScriptedInterface::IsDying(AIScriptedInterface *this)
{
  return ?IsDying@AIScriptedInterface@@UEBA_NXZ(this);
}

/*
==============
AIActorInterface::FirstActor
==============
*/

actor_s *__fastcall AIActorInterface::FirstActor(const bitarray<224> *iTeamFlags)
{
  return ?FirstActor@AIActorInterface@@SAPEAUactor_s@@AEBV?$bitarray@$0OA@@@@Z(iTeamFlags);
}

/*
==============
AIScriptedInterface::InScriptedState
==============
*/

bool __fastcall AIScriptedInterface::InScriptedState(AIScriptedInterface *this)
{
  return ?InScriptedState@AIScriptedInterface@@UEBA_NXZ(this);
}

/*
==============
AIScriptedInterface::InitMove
==============
*/

void __fastcall AIScriptedInterface::InitMove(AIScriptedInterface *this)
{
  ?InitMove@AIScriptedInterface@@QEBAXXZ(this);
}

/*
==============
AIScriptedInterface::IsAtScriptGoal
==============
*/

bool __fastcall AIScriptedInterface::IsAtScriptGoal(AIScriptedInterface *this)
{
  return ?IsAtScriptGoal@AIScriptedInterface@@QEBA_NXZ(this);
}

/*
==============
CG_GetClientActorIndexAndTeam
==============
*/

void __fastcall CG_GetClientActorIndexAndTeam(int iEntNum, int *actorIndex, int *team)
{
  ?CG_GetClientActorIndexAndTeam@@YAXHPEAH0@Z(iEntNum, actorIndex, team);
}

/*
==============
AIScriptedInterface::UpdateMoveHistory
==============
*/

void __fastcall AIScriptedInterface::UpdateMoveHistory(AIScriptedInterface *this)
{
  ?UpdateMoveHistory@AIScriptedInterface@@QEBAXXZ(this);
}

/*
==============
AIScriptedInterface::FindPathToClaimNode
==============
*/

bool __fastcall AIScriptedInterface::FindPathToClaimNode(AIScriptedInterface *this, pathnode_t *node, int allowNegotiationLinks, int ignoreSuppression)
{
  return ?FindPathToClaimNode@AIScriptedInterface@@QEBA_NPEAUpathnode_t@@HH@Z(this, node, allowNegotiationLinks, ignoreSuppression);
}

/*
==============
AIScriptedInterface::PreThink
==============
*/

void __fastcall AIScriptedInterface::PreThink(AIScriptedInterface *this)
{
  ?PreThink@AIScriptedInterface@@QEBAXXZ(this);
}

/*
==============
AIScriptedInterface::UpdatePlayerPush
==============
*/

void __fastcall AIScriptedInterface::UpdatePlayerPush(AIScriptedInterface *this, gentity_s *player)
{
  ?UpdatePlayerPush@AIScriptedInterface@@QEBAXPEAUgentity_s@@@Z(this, player);
}

/*
==============
AIScriptedInterface::CheckCollisions
==============
*/

void __fastcall AIScriptedInterface::CheckCollisions(AIScriptedInterface *this)
{
  ?CheckCollisions@AIScriptedInterface@@QEBAXXZ(this);
}

/*
==============
AIActorInterface::TouchTriggers
==============
*/

void __fastcall AIActorInterface::TouchTriggers(AIActorInterface *this)
{
  ?TouchTriggers@AIActorInterface@@UEBAXXZ(this);
}

/*
==============
AIActorInterface::ClearPileUp
==============
*/

void __fastcall AIActorInterface::ClearPileUp(AIActorInterface *this)
{
  ?ClearPileUp@AIActorInterface@@UEBAXXZ(this);
}

/*
==============
AIActorInterface::FinishSpawning
==============
*/

void __fastcall AIActorInterface::FinishSpawning(AIActorInterface *this)
{
  ?FinishSpawning@AIActorInterface@@QEBAXXZ(this);
}

/*
==============
AIScriptedInterface::UpdateSharpTurn
==============
*/

void __fastcall AIScriptedInterface::UpdateSharpTurn(AIScriptedInterface *this, vec3_t *wishDelta)
{
  ?UpdateSharpTurn@AIScriptedInterface@@QEBAXAEATvec3_t@@@Z(this, wishDelta);
}

/*
==============
AIScriptedInterface::InNonDamageableScriptedState
==============
*/

bool __fastcall AIScriptedInterface::InNonDamageableScriptedState(AIScriptedInterface *this)
{
  return ?InNonDamageableScriptedState@AIScriptedInterface@@QEBA_NXZ(this);
}

/*
==============
AIActorInterface::Touch
==============
*/

void __fastcall AIActorInterface::Touch(gentity_s *self, gentity_s *other, int bTouched)
{
  ?Touch@AIActorInterface@@SAXPEAUgentity_s@@0H@Z(self, other, bTouched);
}

/*
==============
AIScriptedInterface::FindPath
==============
*/

bool __fastcall AIScriptedInterface::FindPath(AIScriptedInterface *this, vec3_t *inOutGoalPos, pathnode_t *pGoalNode, bool bAllowNegotiationLinks, bool bIgnoreSuppression, bool bHandleInvalidPath)
{
  return ?FindPath@AIScriptedInterface@@QEBA_NAEATvec3_t@@PEAUpathnode_t@@_N22@Z(this, inOutGoalPos, pGoalNode, bAllowNegotiationLinks, bIgnoreSuppression, bHandleInvalidPath);
}

/*
==============
AIScriptedInterface::Controller
==============
*/

void __fastcall AIScriptedInterface::Controller(const gentity_s *self, DObjPartBits *partBits)
{
  ?Controller@AIScriptedInterface@@SAXPEBUgentity_s@@PEAUDObjPartBits@@@Z(self, partBits);
}

/*
==============
AIScriptedInterface::DamageBlockedByShield
==============
*/

bool __fastcall AIScriptedInterface::DamageBlockedByShield(AIScriptedInterface *this, const vec3_t *damageDir)
{
  return ?DamageBlockedByShield@AIScriptedInterface@@QEBA_NPEBTvec3_t@@@Z(this, damageDir);
}

/*
==============
G_GetSentientCount
==============
*/

int __fastcall G_GetSentientCount()
{
  return ?G_GetSentientCount@@YAHXZ();
}

/*
==============
AIScriptedInterface::FindPathToGoalInternal
==============
*/

void __fastcall AIScriptedInterface::FindPathToGoalInternal(AIScriptedInterface *this, pathnode_t *node, const pathnode_t *prevClaimNode)
{
  ?FindPathToGoalInternal@AIScriptedInterface@@QEBAXPEAUpathnode_t@@PEBU2@@Z(this, node, prevClaimNode);
}

/*
==============
AIScriptedInterface::FindClaimedNode
==============
*/

pathnode_t *__fastcall AIScriptedInterface::FindClaimedNode(AIScriptedInterface *this)
{
  return ?FindClaimedNode@AIScriptedInterface@@QEBAPEAUpathnode_t@@XZ(this);
}

/*
==============
AIActorInterface::InitActors
==============
*/

void AIActorInterface::InitActors(void)
{
  ?InitActors@AIActorInterface@@SAXXZ();
}

/*
==============
AIScriptedInterface::GetNodeToUseForAnimscript
==============
*/

pathnode_t *__fastcall AIScriptedInterface::GetNodeToUseForAnimscript(AIScriptedInterface *this)
{
  return ?GetNodeToUseForAnimscript@AIScriptedInterface@@QEBAPEAUpathnode_t@@XZ(this);
}

/*
==============
AIActorInterface::UpdateStepMoveCounter
==============
*/

void __fastcall AIActorInterface::UpdateStepMoveCounter(AIActorInterface *this)
{
  ?UpdateStepMoveCounter@AIActorInterface@@EEBAXXZ(this);
}

/*
==============
AIScriptedInterface::IsReactingToEnemy
==============
*/

bool __fastcall AIScriptedInterface::IsReactingToEnemy(AIScriptedInterface *this)
{
  return ?IsReactingToEnemy@AIScriptedInterface@@QEBA_NXZ(this);
}

/*
==============
AIScriptedInterface::Die
==============
*/

void __fastcall AIScriptedInterface::Die(AIScriptedInterface *this, const gentity_s *pInflictor, gentity_s *pAttacker, int iDamage, int iDamageFlags, int iMod, const Weapon *r_Weapon, bool isAlternate, const vec3_t *vDir, const hitLocation_t hitLoc, int timeOffset)
{
  ?Die@AIScriptedInterface@@UEBAXPEBUgentity_s@@PEAU2@HHHAEBUWeapon@@_NAEBTvec3_t@@W4hitLocation_t@@H@Z(this, pInflictor, pAttacker, iDamage, iDamageFlags, iMod, r_Weapon, isAlternate, vDir, hitLoc, timeOffset);
}

/*
==============
AIScriptedInterface::CalculatePlayerPushDelta
==============
*/

double __fastcall AIScriptedInterface::CalculatePlayerPushDelta(AIScriptedInterface *this, const gentity_s *pusher, vec2_t *outPushDir)
{
  double result; 

  *(float *)&result = ?CalculatePlayerPushDelta@AIScriptedInterface@@QEBAMPEBUgentity_s@@AEATvec2_t@@@Z(this, pusher, outPushDir);
  return result;
}

/*
==============
AIScriptedInterface::FindPathToGoalDirectInternal
==============
*/

bool __fastcall AIScriptedInterface::FindPathToGoalDirectInternal(AIScriptedInterface *this)
{
  return ?FindPathToGoalDirectInternal@AIScriptedInterface@@QEBA_NXZ(this);
}

/*
==============
AIScriptedInterface::FinishWeaponDrop
==============
*/

void __fastcall AIScriptedInterface::FinishWeaponDrop(AIScriptedInterface *this, ActorDelayedWeaponDrop *weapDrop)
{
  ?FinishWeaponDrop@AIScriptedInterface@@QEBAXPEAUActorDelayedWeaponDrop@@@Z(this, weapDrop);
}

/*
==============
AIScriptedInterface::ClearMoveHistory
==============
*/

void __fastcall AIScriptedInterface::ClearMoveHistory(AIScriptedInterface *this)
{
  ?ClearMoveHistory@AIScriptedInterface@@QEBAXXZ(this);
}

/*
==============
AIScriptedInterface::IsAtGoal
==============
*/

bool __fastcall AIScriptedInterface::IsAtGoal(AIScriptedInterface *this)
{
  return ?IsAtGoal@AIScriptedInterface@@QEBA_NXZ(this);
}

/*
==============
AIScriptedInterface::FindPathInternal
==============
*/

bool __fastcall AIScriptedInterface::FindPathInternal(AIScriptedInterface *this, const vec3_t *goalPos, const pathnode_t *pGoalNode, bool bAllowNegotiationLinks, bool bIgnoreSuppression, bool bHandleBadPath)
{
  return ?FindPathInternal@AIScriptedInterface@@QEBA_NAEBTvec3_t@@PEBUpathnode_t@@_N22@Z(this, goalPos, pGoalNode, bAllowNegotiationLinks, bIgnoreSuppression, bHandleBadPath);
}

/*
==============
AIScriptedInterface::ResetMoveHistory
==============
*/

void __fastcall AIScriptedInterface::ResetMoveHistory(AIScriptedInterface *this, const vec3_t *newValue)
{
  ?ResetMoveHistory@AIScriptedInterface@@QEBAXAEBTvec3_t@@@Z(this, newValue);
}

/*
==============
AIScriptedInterface::ShouldDoSharpTurnSpace
==============
*/

bool __fastcall AIScriptedInterface::ShouldDoSharpTurnSpace(AIScriptedInterface *this, vec3_t *nextPathPoint, float *outDistToCorner)
{
  return ?ShouldDoSharpTurnSpace@AIScriptedInterface@@QEBA_NAEATvec3_t@@PEAM@Z(this, nextPathPoint, outDistToCorner);
}

/*
==============
AIScriptedInterface::MoveAwayNoWorse
==============
*/

int __fastcall AIScriptedInterface::MoveAwayNoWorse(AIScriptedInterface *this)
{
  return ?MoveAwayNoWorse@AIScriptedInterface@@QEBAHXZ(this);
}

/*
==============
AIScriptedInterface::GetAnimDeltas
==============
*/

void __fastcall AIScriptedInterface::GetAnimDeltas(AIScriptedInterface *this, vec4_t *outRotation, vec3_t *outTranslation)
{
  ?GetAnimDeltas@AIScriptedInterface@@QEBAXAEATvec4_t@@AEATvec3_t@@@Z(this, outRotation, outTranslation);
}

/*
==============
AIActorInterface::UpdateMoveAnimPlayback
==============
*/

void __fastcall AIActorInterface::UpdateMoveAnimPlayback(AIActorInterface *this, const vec3_t *translation)
{
  ?UpdateMoveAnimPlayback@AIActorInterface@@UEBAXAEBTvec3_t@@@Z(this, translation);
}

/*
==============
AIActorInterface::UpdateMoveAnimTranslation
==============
*/

void __fastcall AIActorInterface::UpdateMoveAnimTranslation(AIActorInterface *this, vec3_t *translation)
{
  ?UpdateMoveAnimTranslation@AIActorInterface@@UEBAXAEATvec3_t@@@Z(this, translation);
}

/*
==============
AIActorInterface::IsDeletable
==============
*/

int __fastcall AIActorInterface::IsDeletable(AIActorInterface *this)
{
  return ?IsDeletable@AIActorInterface@@QEBAHXZ(this);
}

/*
==============
AIScriptedInterface::CheckSharpTurnNotify
==============
*/

bool __fastcall AIScriptedInterface::CheckSharpTurnNotify(AIScriptedInterface *this)
{
  return ?CheckSharpTurnNotify@AIScriptedInterface@@QEBA_NXZ(this);
}

/*
==============
AIActorInterface::Species_Free
==============
*/

void __fastcall AIActorInterface::Species_Free(AISpecies species, actor_species_s *pSpeciesData)
{
  ?Species_Free@AIActorInterface@@SAXW4AISpecies@@PEAUactor_species_s@@@Z(species, pSpeciesData);
}

/*
==============
AIActorInterface::ShouldDrawActorOnCompass
==============
*/

bool __fastcall AIActorInterface::ShouldDrawActorOnCompass(int iEntNum)
{
  return ?ShouldDrawActorOnCompass@AIActorInterface@@SA_NH@Z(iEntNum);
}

/*
==============
AIActorInterface::UpdateCloseEnt
==============
*/

void __fastcall AIActorInterface::UpdateCloseEnt(AIActorInterface *this)
{
  ?UpdateCloseEnt@AIActorInterface@@UEBAXXZ(this);
}

/*
==============
AIScriptedInterface::BadPlace_AttemptEscape
==============
*/

bool __fastcall AIScriptedInterface::BadPlace_AttemptEscape(AIScriptedInterface *this)
{
  return ?BadPlace_AttemptEscape@AIScriptedInterface@@QEBA_NXZ(this);
}

/*
==============
AIScriptedInterface::GetGroundTraceOrigin
==============
*/

void __fastcall AIScriptedInterface::GetGroundTraceOrigin(AIScriptedInterface *this, vec3_t *outOrigin)
{
  ?GetGroundTraceOrigin@AIScriptedInterface@@QEBAXAEATvec3_t@@@Z(this, outOrigin);
}

/*
==============
AIActorInterface::DissociateSentient
==============
*/

void __fastcall AIActorInterface::DissociateSentient(AIActorInterface *this, sentient_s *other)
{
  ?DissociateSentient@AIActorInterface@@UEBAXPEAUsentient_s@@@Z(this, other);
}

/*
==============
AIScriptedInterface::UpdateContinuousFire
==============
*/

void __fastcall AIScriptedInterface::UpdateContinuousFire(AIScriptedInterface *this)
{
  ?UpdateContinuousFire@AIScriptedInterface@@QEBAXXZ(this);
}

/*
==============
AIScriptedInterface::ShouldHoldGroundAgainstEnemy
==============
*/

bool __fastcall AIScriptedInterface::ShouldHoldGroundAgainstEnemy(AIScriptedInterface *this)
{
  return ?ShouldHoldGroundAgainstEnemy@AIScriptedInterface@@QEBA_NXZ(this);
}

/*
==============
AIScriptedInterface::BadPlace_Flee_Start
==============
*/

bool __fastcall AIScriptedInterface::BadPlace_Flee_Start(AIScriptedInterface *this, ai_state_t ePrevState)
{
  return ?BadPlace_Flee_Start@AIScriptedInterface@@QEBA_NW4ai_state_t@@@Z(this, ePrevState);
}

/*
==============
AIScriptedInterface::CallThink
==============
*/

actor_think_result_t __fastcall AIScriptedInterface::CallThink(AIScriptedInterface *this)
{
  return ?CallThink@AIScriptedInterface@@QEBA?AW4actor_think_result_t@@XZ(this);
}

/*
==============
AIScriptedInterface::BadPlace_Flee_Think
==============
*/

actor_think_result_t __fastcall AIScriptedInterface::BadPlace_Flee_Think(AIScriptedInterface *this)
{
  return ?BadPlace_Flee_Think@AIScriptedInterface@@QEBA?AW4actor_think_result_t@@XZ(this);
}

/*
==============
AIScriptedInterface::FindPathToGoalPath
==============
*/

void __fastcall AIScriptedInterface::FindPathToGoalPath(AIScriptedInterface *this)
{
  ?FindPathToGoalPath@AIScriptedInterface@@QEBAXXZ(this);
}

/*
==============
AIActorInterface::SetStepMoveCounter
==============
*/

void __fastcall AIActorInterface::SetStepMoveCounter(AIActorInterface *this)
{
  ?SetStepMoveCounter@AIActorInterface@@EEBAXXZ(this);
}

/*
==============
AIScriptedInterface::SetFlashed
==============
*/

void __fastcall AIScriptedInterface::SetFlashed(AIScriptedInterface *this, bool flashed)
{
  ?SetFlashed@AIScriptedInterface@@QEBAX_N@Z(this, flashed);
}

/*
==============
AIScriptedInterface::FireSharpTurnEvent
==============
*/

void __fastcall AIScriptedInterface::FireSharpTurnEvent(AIScriptedInterface *this, scrContext_t *scrContext, bool bReacquire, const vec3_t *nextPathPoint, bool bNewPath, const vec3_t *corner, float distToCorner)
{
  ?FireSharpTurnEvent@AIScriptedInterface@@QEBAXAEAUscrContext_t@@_NTvec3_t@@12M@Z(this, scrContext, bReacquire, nextPathPoint, bNewPath, corner, distToCorner);
}

/*
==============
AIScriptedInterface::ShouldLookForNewCover
==============
*/

bool __fastcall AIScriptedInterface::ShouldLookForNewCover(AIScriptedInterface *this)
{
  return ?ShouldLookForNewCover@AIScriptedInterface@@UEBA_NXZ(this);
}

/*
==============
AIScriptedInterface::PhysicsMoveAway
==============
*/

int __fastcall AIScriptedInterface::PhysicsMoveAway(AIScriptedInterface *this)
{
  return ?PhysicsMoveAway@AIScriptedInterface@@QEBAHXZ(this);
}

/*
==============
AIScriptedInterface::Think
==============
*/

void __fastcall AIScriptedInterface::Think(gentity_s *self)
{
  ?Think@AIScriptedInterface@@SAXPEAUgentity_s@@@Z(self);
}

/*
==============
AIScriptedInterface::EnemyInPathFightDist
==============
*/

bool __fastcall AIScriptedInterface::EnemyInPathFightDist(AIScriptedInterface *this, sentient_s *enemy)
{
  return ?EnemyInPathFightDist@AIScriptedInterface@@QEBA_NPEAUsentient_s@@@Z(this, enemy);
}

/*
==============
AIScriptedInterface::PointAt_MovingPlatform
==============
*/

int __fastcall AIScriptedInterface::PointAt_MovingPlatform(AIScriptedInterface *this, const vec3_t *vPoint, const vec3_t *vGoalPos)
{
  return ?PointAt_MovingPlatform@AIScriptedInterface@@QEBAHAEBTvec3_t@@0@Z(this, vPoint, vGoalPos);
}

/*
==============
AIScriptedInterface::TryEarlyASMTick
==============
*/

bool __fastcall AIScriptedInterface::TryEarlyASMTick(AIScriptedInterface *this, bool bForce)
{
  return ?TryEarlyASMTick@AIScriptedInterface@@QEBA_N_N@Z(this, bForce);
}

/*
==============
AIScriptedInterface::ResetMoveHistoryToEntForward
==============
*/

void __fastcall AIScriptedInterface::ResetMoveHistoryToEntForward(AIScriptedInterface *this)
{
  ?ResetMoveHistoryToEntForward@AIScriptedInterface@@QEBAXXZ(this);
}

/*
==============
AIActorInterface::SetDefaults
==============
*/

void __fastcall AIActorInterface::SetDefaults(actor_s *actor)
{
  ?SetDefaults@AIActorInterface@@SAXPEAUactor_s@@@Z(actor);
}

/*
==============
AIScriptedInterface::IsKnownEnemyInRegion
==============
*/

gentity_s *__fastcall AIScriptedInterface::IsKnownEnemyInRegion(AIScriptedInterface *this, const gentity_s *volume, const vec3_t *position, float radius, bool testEnemyNode)
{
  return ?IsKnownEnemyInRegion@AIScriptedInterface@@QEBAPEAUgentity_s@@PEBU2@AEBTvec3_t@@M_N@Z(this, volume, position, radius, testEnemyNode);
}

/*
==============
AIScriptedInterface::CheckNotifyGoal
==============
*/

void __fastcall AIScriptedInterface::CheckNotifyGoal(AIScriptedInterface *this)
{
  ?CheckNotifyGoal@AIScriptedInterface@@QEBAXXZ(this);
}

/*
==============
AIScriptedInterface::CheckDeathAllowed
==============
*/

int __fastcall AIScriptedInterface::CheckDeathAllowed(AIScriptedInterface *this, int damage, const vec3_t *damageDir)
{
  return ?CheckDeathAllowed@AIScriptedInterface@@QEBAHHPEBTvec3_t@@@Z(this, damage, damageDir);
}

/*
==============
AIScriptedInterface::CheckWeaponDrop
==============
*/

void __fastcall AIScriptedInterface::CheckWeaponDrop(AIScriptedInterface *this, ActorDelayedWeaponDrop *weapDrop)
{
  ?CheckWeaponDrop@AIScriptedInterface@@QEBAXPEAUActorDelayedWeaponDrop@@@Z(this, weapDrop);
}

/*
==============
AIActorInterface::TouchEnts
==============
*/

void __fastcall AIActorInterface::TouchEnts(AIActorInterface *this, int numtouch, __int16 *touchents)
{
  ?TouchEnts@AIActorInterface@@UEBAXHQEAF@Z(this, numtouch, touchents);
}

/*
==============
AIScriptedInterface::DrawEngageDistCircle
==============
*/

void __fastcall AIScriptedInterface::DrawEngageDistCircle(AIScriptedInterface *this, const vec3_t *center, const vec2_t *dirFromCenter, float dist, const vec4_t *color, float infoScale, const char *label)
{
  ?DrawEngageDistCircle@AIScriptedInterface@@AEBAXAEBTvec3_t@@AEBTvec2_t@@MAEBTvec4_t@@MPEBD@Z(this, center, dirFromCenter, dist, color, infoScale, label);
}

/*
==============
AIScriptedInterface::GoalReached
==============
*/

bool __fastcall AIScriptedInterface::GoalReached(AIScriptedInterface *this)
{
  return ?GoalReached@AIScriptedInterface@@QEBA_NXZ(this);
}

/*
==============
AIScriptedInterface::IsDoingExposedCombat
==============
*/

bool __fastcall AIScriptedInterface::IsDoingExposedCombat(AIScriptedInterface *this)
{
  return ?IsDoingExposedCombat@AIScriptedInterface@@QEBA_NXZ(this);
}

/*
==============
AIScriptedInterface::PathChangeNotify
==============
*/

void __fastcall AIScriptedInterface::PathChangeNotify(AIScriptedInterface *this, const vec3_t *prevDir)
{
  ?PathChangeNotify@AIScriptedInterface@@QEBAXAEBTvec3_t@@@Z(this, prevDir);
}

/*
==============
AIScriptedInterface::CheckWeaponDrops
==============
*/

void __fastcall AIScriptedInterface::CheckWeaponDrops(AIScriptedInterface *this)
{
  ?CheckWeaponDrops@AIScriptedInterface@@QEBAXXZ(this);
}

/*
==============
AIScriptedInterface::AtDifferentElevation
==============
*/

bool __fastcall AIScriptedInterface::AtDifferentElevation(AIScriptedInterface *this, const vec3_t *vOrgSelf, const vec3_t *vOrgOther)
{
  return ?AtDifferentElevation@AIScriptedInterface@@QEBA_NAEBTvec3_t@@0@Z(this, vOrgSelf, vOrgOther);
}

/*
==============
AIScriptedInterface::InFixedNodeExposedCombat
==============
*/

bool __fastcall AIScriptedInterface::InFixedNodeExposedCombat(AIScriptedInterface *this)
{
  return ?InFixedNodeExposedCombat@AIScriptedInterface@@QEBA_NXZ(this);
}

/*
==============
AIScriptedInterface::ClearUseEnemyGoal
==============
*/

void __fastcall AIScriptedInterface::ClearUseEnemyGoal(AIScriptedInterface *this)
{
  ?ClearUseEnemyGoal@AIScriptedInterface@@QEBAXXZ(this);
}

/*
==============
AIScriptedInterface::InitAnimScript
==============
*/

void __fastcall AIScriptedInterface::InitAnimScript(AIScriptedInterface *this)
{
  ?InitAnimScript@AIScriptedInterface@@QEBAXXZ(this);
}

/*
==============
AIActorInterface::SentientInfo_Copy
==============
*/

void __fastcall AIActorInterface::SentientInfo_Copy(actor_s *pTo, actor_s *pFrom, int index, unsigned __int8 reason)
{
  ?SentientInfo_Copy@AIActorInterface@@SAXPEAUactor_s@@0HE@Z(pTo, pFrom, index, reason);
}

/*
==============
AIActorInterface::GetAnimTree
==============
*/

XAnimTree *__fastcall AIActorInterface::GetAnimTree(AIActorInterface *this)
{
  return ?GetAnimTree@AIActorInterface@@UEBAPEAUXAnimTree@@XZ(this);
}

/*
==============
AIScriptedInterface::FindPathToSentient
==============
*/

bool __fastcall AIScriptedInterface::FindPathToSentient(AIScriptedInterface *this, sentient_s *pGoalEnt, int bSuppressable)
{
  return ?FindPathToSentient@AIScriptedInterface@@QEBA_NPEAUsentient_s@@H@Z(this, pGoalEnt, bSuppressable);
}

/*
==============
AIActorInterface::GetActorIndex
==============
*/

int __fastcall AIActorInterface::GetActorIndex(actor_s *actor)
{
  return ?GetActorIndex@AIActorInterface@@SAHPEAUactor_s@@@Z(actor);
}

/*
==============
AIActorInterface::NextActor
==============
*/

actor_s *__fastcall AIActorInterface::NextActor(actor_s *pPrevActor, const bitarray<224> *iTeamFlags)
{
  return ?NextActor@AIActorInterface@@SAPEAUactor_s@@PEAU2@AEBV?$bitarray@$0OA@@@@Z(pPrevActor, iTeamFlags);
}

/*
==============
AIScriptedInterface::SetupFindPathToGoal
==============
*/

bool __fastcall AIScriptedInterface::SetupFindPathToGoal(AIScriptedInterface *this)
{
  return ?SetupFindPathToGoal@AIScriptedInterface@@QEBA_NXZ(this);
}

/*
==============
AIScriptedInterface::PathEndActions
==============
*/

void __fastcall AIScriptedInterface::PathEndActions(AIScriptedInterface *this)
{
  ?PathEndActions@AIScriptedInterface@@QEBAXXZ(this);
}

/*
==============
AIActorInterface::UpdateDelayedDeath
==============
*/

void __fastcall AIActorInterface::UpdateDelayedDeath(AIActorInterface *this)
{
  ?UpdateDelayedDeath@AIActorInterface@@UEBAXXZ(this);
}

/*
==============
AIScriptedInterface::GetNavPhysicsState
==============
*/

navphys_t __fastcall AIScriptedInterface::GetNavPhysicsState(AIScriptedInterface *this)
{
  return ?GetNavPhysicsState@AIScriptedInterface@@QEBA?AW4navphys_t@@XZ(this);
}

/*
==============
AIScriptedInterface::GetPathStartPoint
==============
*/

void __fastcall AIScriptedInterface::GetPathStartPoint(AIScriptedInterface *this, vec3_t *vStartPoint)
{
  ?GetPathStartPoint@AIScriptedInterface@@QEBAXAEATvec3_t@@@Z(this, vStartPoint);
}

/*
==============
AIActorInterface::UpdatePileUp
==============
*/

void __fastcall AIActorInterface::UpdatePileUp(AIActorInterface *this)
{
  ?UpdatePileUp@AIActorInterface@@UEBAXXZ(this);
}

/*
==============
AIScriptedInterface::CalcTagAxisMoveOffset
==============
*/

void __fastcall AIScriptedInterface::CalcTagAxisMoveOffset(AIScriptedInterface *this, EntityTagInfo *tagInfo)
{
  ?CalcTagAxisMoveOffset@AIScriptedInterface@@IEBAXPEAUEntityTagInfo@@@Z(this, tagInfo);
}

/*
==============
AIScriptedInterface::TryPathToNode
==============
*/

bool __fastcall AIScriptedInterface::TryPathToNode(AIScriptedInterface *this, pathnode_t *node)
{
  return ?TryPathToNode@AIScriptedInterface@@QEBA_NPEAUpathnode_t@@@Z(this, node);
}

/*
==============
AIScriptedInterface::GetMoveHistoryAverage
==============
*/

void __fastcall AIScriptedInterface::GetMoveHistoryAverage(AIScriptedInterface *this, vec3_t *vDir)
{
  ?GetMoveHistoryAverage@AIScriptedInterface@@QEBAXAEATvec3_t@@@Z(this, vDir);
}

/*
==============
AIScriptedInterface::GetPathSmoothParams
==============
*/

void __fastcall AIScriptedInterface::GetPathSmoothParams(AIScriptedInterface *this, float fMoveDist, float *maxTurnSpeed, float *lookaheadDist, float *accel, float *decel, float *sharpTurn)
{
  ?GetPathSmoothParams@AIScriptedInterface@@QEBAXMPEAM0000@Z(this, fMoveDist, maxTurnSpeed, lookaheadDist, accel, decel, sharpTurn);
}

/*
==============
AIScriptedInterface::FinishWeaponDrops
==============
*/

void __fastcall AIScriptedInterface::FinishWeaponDrops(AIScriptedInterface *this)
{
  ?FinishWeaponDrops@AIScriptedInterface@@QEBAXXZ(this);
}

/*
==============
AIActorInterface::Species_Alloc
==============
*/

actor_species_s *__fastcall AIActorInterface::Species_Alloc(AISpecies species)
{
  return ?Species_Alloc@AIActorInterface@@SAPEAUactor_species_s@@W4AISpecies@@@Z(species);
}

/*
==============
AIScriptedInterface::InitNavigator
==============
*/

void __fastcall AIScriptedInterface::InitNavigator(AIScriptedInterface *this)
{
  ?InitNavigator@AIScriptedInterface@@QEBAXXZ(this);
}

/*
==============
G_GetAICount
==============
*/

int __fastcall G_GetAICount()
{
  return ?G_GetAICount@@YAHXZ();
}

/*
==============
AIScriptedInterface::Pain
==============
*/

void __fastcall AIScriptedInterface::Pain(AIScriptedInterface *this, gentity_s *pAttacker, int iDamage, const vec3_t *vPoint, const int iMod, const vec3_t *vDir, const hitLocation_t hitLoc, const Weapon *r_weapon, bool isAlternate)
{
  ?Pain@AIScriptedInterface@@UEBAXPEAUgentity_s@@HAEBTvec3_t@@H1W4hitLocation_t@@AEBUWeapon@@_N@Z(this, pAttacker, iDamage, vPoint, iMod, vDir, hitLoc, r_weapon, isAlternate);
}

/*
==============
AIScriptedInterface::GetUpdateDependency
==============
*/

gentity_s *__fastcall AIScriptedInterface::GetUpdateDependency(AIScriptedInterface *this)
{
  return ?GetUpdateDependency@AIScriptedInterface@@QEBAPEAUgentity_s@@XZ(this);
}

/*
==============
AIActorInterface::RunAITypeScript
==============
*/

void __fastcall AIActorInterface::RunAITypeScript(gentity_s *ent)
{
  ?RunAITypeScript@AIActorInterface@@SAXPEAUgentity_s@@@Z(ent);
}

/*
==============
AIScriptedInterface::FindPathToGoal
==============
*/

void __fastcall AIScriptedInterface::FindPathToGoal(AIScriptedInterface *this)
{
  ?FindPathToGoal@AIScriptedInterface@@QEBAXXZ(this);
}

/*
==============
AIScriptedInterface::PhysicsCheckMoveAwayNoWorse
==============
*/

int __fastcall AIScriptedInterface::PhysicsCheckMoveAwayNoWorse(AIScriptedInterface *this, gentity_s *other, ActorDodgeMode newDodgeMode, float distanceSqrd, float lengthSqrd)
{
  return ?PhysicsCheckMoveAwayNoWorse@AIScriptedInterface@@QEBAHPEAUgentity_s@@W4ActorDodgeMode@@MM@Z(this, other, newDodgeMode, distanceSqrd, lengthSqrd);
}

/*
==============
AIScriptedInterface::IsValidClaimNode
==============
*/

int __fastcall AIScriptedInterface::IsValidClaimNode(AIScriptedInterface *this, const pathnode_t *node)
{
  return ?IsValidClaimNode@AIScriptedInterface@@QEBAHPEBUpathnode_t@@@Z(this, node);
}

/*
==============
AIScriptedInterface::AtClaimNodeAndAngle
==============
*/

int __fastcall AIScriptedInterface::AtClaimNodeAndAngle(AIScriptedInterface *this)
{
  return ?AtClaimNodeAndAngle@AIScriptedInterface@@QEBAHXZ(this);
}

/*
==============
AIActorInterface::EntInfo
==============
*/

void __fastcall AIActorInterface::EntInfo(gentity_s *pSelf, const vec3_t *source)
{
  ?EntInfo@AIActorInterface@@SAXPEAUgentity_s@@AEBTvec3_t@@@Z(pSelf, source);
}

/*
==============
AIScriptedInterface::FixedLinkPhysicsFallback
==============
*/

void __fastcall AIScriptedInterface::FixedLinkPhysicsFallback(AIScriptedInterface *this, const vec3_t *targetOrigin)
{
  ?FixedLinkPhysicsFallback@AIScriptedInterface@@QEBAXAEBTvec3_t@@@Z(this, targetOrigin);
}

/*
==============
AIScriptedInterface::PhysicsAndDodge
==============
*/

int __fastcall AIScriptedInterface::PhysicsAndDodge(AIScriptedInterface *this)
{
  return ?PhysicsAndDodge@AIScriptedInterface@@QEBAHXZ(this);
}

/*
==============
AIActorInterface::AllocActor
==============
*/

actor_s *__fastcall AIActorInterface::AllocActor()
{
  return ?AllocActor@AIActorInterface@@SAPEAUactor_s@@XZ();
}

/*
==============
AIScriptedInterface::CanSlowOnPath
==============
*/

bool __fastcall AIScriptedInterface::CanSlowOnPath(AIScriptedInterface *this)
{
  return ?CanSlowOnPath@AIScriptedInterface@@IEBA_NXZ(this);
}

/*
==============
AIActorInterface::SetDefaults
==============
*/

void __fastcall AIActorInterface::SetDefaults(AIActorInterface *this)
{
  ?SetDefaults@AIActorInterface@@UEBAXXZ(this);
}

/*
==============
AIScriptedInterface::UpdateOriginAndAngles
==============
*/

void __fastcall AIScriptedInterface::UpdateOriginAndAngles(AIScriptedInterface *this)
{
  ?UpdateOriginAndAngles@AIScriptedInterface@@QEBAXXZ(this);
}

/*
==============
AIScriptedInterface::DoMove
==============
*/

void __fastcall AIScriptedInterface::DoMove(AIScriptedInterface *this)
{
  ?DoMove@AIScriptedInterface@@UEBAXXZ(this);
}

/*
==============
AIScriptedInterface::BlendTagToParent
==============
*/

void __fastcall AIScriptedInterface::BlendTagToParent(AIScriptedInterface *this, EntityTagInfo *tagInfo)
{
  ?BlendTagToParent@AIScriptedInterface@@IEBAXPEAUEntityTagInfo@@@Z(this, tagInfo);
}

/*
==============
AIScriptedInterface::HandleInvalidPath
==============
*/

void __fastcall AIScriptedInterface::HandleInvalidPath(AIScriptedInterface *this)
{
  ?HandleInvalidPath@AIScriptedInterface@@QEBAXXZ(this);
}

/*
==============
AIScriptedInterface::UpdateMovementDelta
==============
*/

void __fastcall AIScriptedInterface::UpdateMovementDelta(AIScriptedInterface *this, float fMoveDist)
{
  ?UpdateMovementDelta@AIScriptedInterface@@QEBAXM@Z(this, fMoveDist);
}

/*
==============
CG_ShouldDrawActorOnCompass
==============
*/

bool __fastcall CG_ShouldDrawActorOnCompass(int iEntNum)
{
  return ?CG_ShouldDrawActorOnCompass@@YA_NH@Z(iEntNum);
}

/*
==============
AIScriptedInterface::Think
==============
*/

void __fastcall AIScriptedInterface::Think(AIScriptedInterface *this)
{
  ?Think@AIScriptedInterface@@UEBAXXZ(this);
}

/*
==============
AIActorInterface::Free
==============
*/

void __fastcall AIActorInterface::Free(AIActorInterface *this)
{
  ?Free@AIActorInterface@@UEBAXXZ(this);
}

/*
==============
AIScriptedInterface::IsFixedNodeUseable
==============
*/

bool __fastcall AIScriptedInterface::IsFixedNodeUseable(AIScriptedInterface *this, bool bQueryOnly)
{
  return ?IsFixedNodeUseable@AIScriptedInterface@@QEBA_N_N@Z(this, bQueryOnly);
}

/*
==============
AIScriptedInterface::FindPathToGoalDirect
==============
*/

void __fastcall AIScriptedInterface::FindPathToGoalDirect(AIScriptedInterface *this)
{
  ?FindPathToGoalDirect@AIScriptedInterface@@QEBAXXZ(this);
}

/*
==============
AIScriptedInterface::FindPathAway
==============
*/

void __fastcall AIScriptedInterface::FindPathAway(AIScriptedInterface *this, const vec3_t *vBadPos, float fMinSafeDist, PathBlockPlanes *blockPlanes)
{
  ?FindPathAway@AIScriptedInterface@@QEBAXAEBTvec3_t@@MPEAUPathBlockPlanes@@@Z(this, vBadPos, fMinSafeDist, blockPlanes);
}

/*
==============
AIActorInterface::UpdateProneInformation
==============
*/

void __fastcall AIActorInterface::UpdateProneInformation(AIActorInterface *this, int bDoProneCheck)
{
  ?UpdateProneInformation@AIActorInterface@@UEBAXH@Z(this, bDoProneCheck);
}

/*
==============
AIScriptedInterface::FindPathToFixedNode
==============
*/

void __fastcall AIScriptedInterface::FindPathToFixedNode(AIScriptedInterface *this)
{
  ?FindPathToFixedNode@AIScriptedInterface@@QEBAXXZ(this);
}

/*
==============
AIScriptedInterface::OnSpawned
==============
*/

void __fastcall AIScriptedInterface::OnSpawned(AIScriptedInterface *this)
{
  ?OnSpawned@AIScriptedInterface@@UEBAXXZ(this);
}

/*
==============
AIScriptedInterface::UpdateAnglesAndDelta
==============
*/

void __fastcall AIScriptedInterface::UpdateAnglesAndDelta(AIScriptedInterface *this)
{
  ?UpdateAnglesAndDelta@AIScriptedInterface@@QEBAXXZ(this);
}

/*
==============
AIActorInterface::FinishSpawningAll
==============
*/

void AIActorInterface::FinishSpawningAll(void)
{
  ?FinishSpawningAll@AIActorInterface@@SAXXZ();
}

/*
==============
AIScriptedInterface::Physics_GetLeftOrRightDodge
==============
*/

ActorDodgeMode __fastcall AIScriptedInterface::Physics_GetLeftOrRightDodge(AIScriptedInterface *this, bool dodgeRight, float length)
{
  return ?Physics_GetLeftOrRightDodge@AIScriptedInterface@@QEBA?AW4ActorDodgeMode@@_NM@Z(this, dodgeRight, length);
}

/*
==============
AIScriptedInterface::FailSafeMove
==============
*/

void __fastcall AIScriptedInterface::FailSafeMove(AIScriptedInterface *this)
{
  ?FailSafeMove@AIScriptedInterface@@QEBAXXZ(this);
}

/*
==============
AIScriptedInterface::DoesPathCrossPlane
==============
*/

bool __fastcall AIScriptedInterface::DoesPathCrossPlane(AIScriptedInterface *this, vec2_t planeNormal, float planeDistance)
{
  return ?DoesPathCrossPlane@AIScriptedInterface@@QEBA_NTvec2_t@@M@Z(this, planeNormal, planeDistance);
}

/*
==============
AIActorInterface::ActorCommonProcess
==============
*/

void AIActorInterface::ActorCommonProcess(void)
{
  ?ActorCommonProcess@AIActorInterface@@SAXXZ();
}

/*
==============
AIScriptedInterface::BadPlace_Flee_Finish
==============
*/

void __fastcall AIScriptedInterface::BadPlace_Flee_Finish(AIScriptedInterface *this, ai_state_t eNextState)
{
  ?BadPlace_Flee_Finish@AIScriptedInterface@@QEBAXW4ai_state_t@@@Z(this, eNextState);
}

/*
==============
AIScriptedInterface::OnPain
==============
*/

void __fastcall AIScriptedInterface::OnPain(gentity_s *pSelf, gentity_s *pAttacker, int iDamage, const vec3_t *vPoint, const int iMod, const vec3_t *vDir, const hitLocation_t hitLoc, const Weapon *r_weapon, bool isAlternate)
{
  ?OnPain@AIScriptedInterface@@SAXPEAUgentity_s@@0HPEBTvec3_t@@H1W4hitLocation_t@@AEBUWeapon@@_N@Z(pSelf, pAttacker, iDamage, vPoint, iMod, vDir, hitLoc, r_weapon, isAlternate);
}

/*
==============
AIScriptedInterface::IsMovingToMeleeAttack
==============
*/

bool __fastcall AIScriptedInterface::IsMovingToMeleeAttack(AIScriptedInterface *this)
{
  return ?IsMovingToMeleeAttack@AIScriptedInterface@@QEBA_NXZ(this);
}

/*
==============
AIScriptedInterface::CheckStop
==============
*/

bool __fastcall AIScriptedInterface::CheckStop(AIScriptedInterface *this, pathnode_t *node)
{
  return ?CheckStop@AIScriptedInterface@@QEBA_NPEAUpathnode_t@@@Z(this, node);
}

/*
==============
AIActorInterface::ShutdownActors
==============
*/

void AIActorInterface::ShutdownActors(void)
{
  ?ShutdownActors@AIActorInterface@@SAXXZ();
}

/*
==============
AIScriptedInterface::ShouldMoveAwayFromCloseEnt
==============
*/

bool __fastcall AIScriptedInterface::ShouldMoveAwayFromCloseEnt(AIScriptedInterface *this)
{
  return ?ShouldMoveAwayFromCloseEnt@AIScriptedInterface@@QEBA_NXZ(this);
}

/*
==============
AIScriptedInterface::HadPath
==============
*/

bool __fastcall AIScriptedInterface::HadPath(AIScriptedInterface *this)
{
  return ?HadPath@AIScriptedInterface@@QEBA_NXZ(this);
}

/*
==============
AIActorInterface::GetMoveAnimRate
==============
*/

double __fastcall AIActorInterface::GetMoveAnimRate(AIActorInterface *this)
{
  double result; 

  *(float *)&result = ?GetMoveAnimRate@AIActorInterface@@QEBAMXZ(this);
  return result;
}

/*
==============
AIScriptedInterface::Physics_SimulateChildren
==============
*/

void __fastcall AIScriptedInterface::Physics_SimulateChildren(AIScriptedInterface *this)
{
  ?Physics_SimulateChildren@AIScriptedInterface@@IEBAXXZ(this);
}

/*
==============
AIScriptedInterface::GetPathGoalPos
==============
*/

bool __fastcall AIScriptedInterface::GetPathGoalPos(AIScriptedInterface *this, vec3_t *goalPos)
{
  return ?GetPathGoalPos@AIScriptedInterface@@QEBA_NAEATvec3_t@@@Z(this, goalPos);
}

/*
==============
AIScriptedInterface::CheckClearNodeClaimCloseEnt
==============
*/

void __fastcall AIScriptedInterface::CheckClearNodeClaimCloseEnt(AIScriptedInterface *this)
{
  ?CheckClearNodeClaimCloseEnt@AIScriptedInterface@@QEBAXXZ(this);
}

/*
==============
AIActorInterface::ActorCommonProcess
==============
*/
void AIActorInterface::ActorCommonProcess(void)
{
  int v0; 
  __int64 v1; 
  bool *p_inuse; 
  bool v3; 
  int v4; 
  const dvar_t *v5; 
  const dvar_t *v6; 
  __int64 integer; 
  gentity_s *v8; 
  unsigned int maxSentients; 
  int v10; 

  v0 = 0;
  v1 = 71i64;
  if ( level.maxSentients != 71 )
  {
    v10 = 71;
    maxSentients = level.maxSentients;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 7353, ASSERT_TYPE_ASSERT, "( level.maxSentients ) == ( (1 + (32 + 6) + 32) )", "level.maxSentients == MAX_SENTIENTS_SP\n\t%i, %i", maxSentients, v10) )
      __debugbreak();
  }
  p_inuse = &level.sentients->inuse;
  do
  {
    v3 = !*p_inuse;
    v4 = v0 + 1;
    p_inuse += 184;
    if ( v3 )
      v4 = v0;
    v0 = v4;
    --v1;
  }
  while ( v1 );
  v5 = DVARINT_ai_debugVolume;
  s_sentientCount = v4;
  if ( !DVARINT_ai_debugVolume && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugVolume") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( v5->current.integer >= 0 )
  {
    v6 = DVARINT_ai_debugVolume;
    if ( !DVARINT_ai_debugVolume && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugVolume") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    integer = v6->current.integer;
    if ( G_IsEntityInUse(integer) )
    {
      v8 = &g_entities[integer];
      if ( v8->r.modelType == 4 )
        G_DebugDrawVolumeModel(v8, &colorWhiteFaded, 1, 0);
    }
  }
  G_UpdateActorCorpses();
}

/*
==============
AIActorInterface::AllocActor
==============
*/
actor_s *AIActorInterface::AllocActor()
{
  const dvar_t *v0; 
  actor_s *actors; 
  __int64 v2; 
  actor_s *result; 
  sentient_info_t *sentientInfo; 
  unsigned int maxSentients; 
  __int64 v6; 
  __int64 v7; 
  AIActorInterface v8; 
  AIActorInterface *v9; 

  if ( !level.actors && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 317, ASSERT_TYPE_ASSERT, "( level.actors != 0 )", (const char *)&queryFormat, "level.actors != NULL") )
    __debugbreak();
  v0 = DVARINT_ai_count;
  if ( !DVARINT_ai_count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_count") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  if ( level.actorCount >= v0->current.integer )
  {
LABEL_13:
    Com_DPrintf(18, "Actor allocation failed\n");
    return 0i64;
  }
  else
  {
    actors = level.actors;
    v2 = 0i64;
    while ( actors->inuse )
    {
      ++v2;
      ++actors;
      if ( v2 >= 38 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 344, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unreachable") )
          __debugbreak();
        goto LABEL_13;
      }
    }
    if ( !actors->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 327, ASSERT_TYPE_ASSERT, "( actor->sentientInfo != nullptr )", (const char *)&queryFormat, "actor->sentientInfo != nullptr") )
      __debugbreak();
    sentientInfo = actors->sentientInfo;
    ++level.actorCount;
    memset_0(actors, 0, sizeof(actor_s));
    actors->sentientInfo = sentientInfo;
    maxSentients = level.maxSentients;
    if ( level.maxSentients > 0x47 )
    {
      LODWORD(v7) = 71;
      LODWORD(v6) = level.maxSentients;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 334, ASSERT_TYPE_ASSERT, "( level.maxSentients ) <= ( (1 + (32 + 6) + 32) )", "level.maxSentients <= MAX_SENTIENTS_SP\n\t%i, %i", v6, v7) )
        __debugbreak();
      maxSentients = level.maxSentients;
    }
    memset_0(actors->sentientInfo, 0, (unsigned __int64)maxSentients << 6);
    actors->inuse = 1;
    AIActorInterface::AIActorInterface(&v8);
    v9 = NULL;
    AIActorInterface::SetActor(&v8, actors);
    v9 = &v8;
    AIScriptedInterface::SetDefaultState(&v8);
    result = actors;
    actors->talkToSpecies = -1;
    actors->bDisablePlayerADSLOSCheck = 0;
  }
  return result;
}

/*
==============
AIScriptedInterface::AtClaimNodeAndAngle
==============
*/
_BOOL8 AIScriptedInterface::AtClaimNodeAndAngle(AIScriptedInterface *this)
{
  pathnode_t *pClaimedNode; 
  double v3; 
  float v4; 
  double Angle; 
  double v6; 
  double v7; 

  if ( !AIScriptedInterface::AtClaimNode(this) )
    return 0i64;
  pClaimedNode = this->m_pAI->sentient->pClaimedNode;
  if ( !pClaimedNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 6441, ASSERT_TYPE_ASSERT, "( node )", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( this->Is3D(this) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 6443, ASSERT_TYPE_ASSERT, "( !Is3D() )", (const char *)&queryFormat, "!Is3D()") )
    __debugbreak();
  v3 = ((double (__fastcall *)(AIScriptedInterface *, pathnode_t *))this->GetNodeAngleYawOffset)(this, pClaimedNode);
  v4 = *(float *)&v3;
  Angle = pathnode_t::GetAngle(pClaimedNode);
  v6 = AngleNormalize360(v4 + *(float *)&Angle);
  v7 = AngleNormalize360(this->m_pAI->ent->r.currentAngles.v[1] - *(float *)&v6);
  return *(float *)&v7 < 15.0;
}

/*
==============
AIScriptedInterface::AtDifferentElevation
==============
*/
bool AIScriptedInterface::AtDifferentElevation(AIScriptedInterface *this, const vec3_t *vOrgSelf, const vec3_t *vOrgOther)
{
  return COERCE_FLOAT(COERCE_UNSIGNED_INT(vOrgSelf->v[2] - vOrgOther->v[2]) & _xmm) >= 80.0;
}

/*
==============
AIScriptedInterface::AttemptMoveAway
==============
*/
void AIScriptedInterface::AttemptMoveAway(AIScriptedInterface *this)
{
  ai_scripted_t *m_pAI; 
  const pathnode_t *pClaimedNode; 
  float v4; 
  __int128 v5; 
  __int128 v6; 
  __int128 v7; 
  AIIterator *v8; 
  gentity_s *i; 
  AIScriptedInterface *v10; 
  __int64 v11; 
  ai_scripted_t *v12; 
  EntityTagInfo *tagInfo; 
  float v14; 
  float v15; 
  float v16; 
  ai_scripted_t *v17; 
  float v18; 
  float v19; 
  float v20; 
  double v21; 
  double v22; 
  __int128 v23; 
  __int128 v24; 
  __int128 v25; 
  __int128 v26; 
  __int128 v27; 
  ai_scripted_t *v28; 
  float v29; 
  __int128 v30; 
  float v31; 
  __int128 v32; 
  ai_scripted_t *v35; 
  __int128 v37; 
  AIWrapper v40; 

  m_pAI = this->m_pAI;
  if ( m_pAI->pushable && m_pAI->script_pushable && m_pAI->Physics.ePhysicsType != AIPHYS_NOCLIP )
  {
    pClaimedNode = m_pAI->sentient->pClaimedNode;
    if ( (!pClaimedNode || !AICommonInterface::PointNearNode(this, &m_pAI->ent->r.currentOrigin, pClaimedNode)) && (!AIScriptedInterface::IsInCoverArrival(this) || !this->m_pAI->sentient->pClaimedNode) && (!G_MotionWarp_Active(this->m_pAI->ent->s.number) || !this->GetCloseEnt(this)) )
    {
      v4 = this->m_pAI->ent->r.box.halfSize.v[0];
      v5 = 0i64;
      v6 = 0i64;
      v7 = 0i64;
      v8 = this->GetAIIterator(this);
      for ( i = (gentity_s *)v8->GetFirst(v8); i; i = v8->GetNext(v8) )
      {
        AIWrapper::AIWrapper(&v40, i);
        v10 = v40.m_pAI;
        if ( !v40.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 3517, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
          __debugbreak();
        v11 = v10->GetAI(v10);
        v12 = this->m_pAI;
        if ( (ai_scripted_t *)v11 != v12 && *(_DWORD *)(v11 + 2216) != 3 )
        {
          tagInfo = i->tagInfo;
          if ( !tagInfo || tagInfo->parent != v12->ent )
          {
            v14 = i->r.currentOrigin.v[0] - v12->ent->r.currentOrigin.v[0];
            v15 = i->r.currentOrigin.v[2] - v12->ent->r.currentOrigin.v[2];
            v16 = i->r.currentOrigin.v[1] - v12->ent->r.currentOrigin.v[1];
            if ( (float)((float)((float)(v16 * v16) + (float)(v14 * v14)) + (float)(v15 * v15)) < (float)((float)((float)(i->r.box.halfSize.v[0] + 1.0) + v4) * (float)((float)(i->r.box.halfSize.v[0] + 1.0) + v4)) )
            {
              if ( AIScriptedInterface::IsInCoverArrival(this) && G_MotionWarp_Active(this->m_pAI->ent->s.number) )
                G_MotionWarp_Cancel(this->m_pAI->ent->s.number);
              if ( this->GetCloseEnt(this) )
              {
                v17 = this->m_pAI;
                v18 = v17->ent->r.currentOrigin.v[0] - i->r.currentOrigin.v[0];
                v19 = v17->ent->r.currentOrigin.v[1] - i->r.currentOrigin.v[1];
                v20 = v17->ent->r.currentOrigin.v[2] - i->r.currentOrigin.v[2];
                if ( (float)((float)((float)(v19 * v19) + (float)(v18 * v18)) + (float)(v20 * v20)) < 0.001 )
                {
                  v21 = G_random();
                  v19 = (float)(*(float *)&v21 * 2.0) - 1.0;
                  v22 = G_random();
                  v18 = (float)(*(float *)&v22 * 2.0) - 1.0;
                  v20 = 0.0;
                }
                v23 = v6;
                *(float *)&v23 = *(float *)&v6 + v18;
                v6 = v23;
                v24 = v7;
                *(float *)&v24 = *(float *)&v7 + v19;
                v7 = v24;
                v25 = v5;
                *(float *)&v25 = *(float *)&v5 + v20;
                v5 = v25;
              }
              else
              {
                this->SetCloseEnt(this, i);
                if ( G_MotionWarp_Active(this->m_pAI->ent->s.number) )
                  return;
              }
            }
          }
        }
      }
      v26 = v6;
      *(float *)&v26 = (float)((float)(*(float *)&v6 * *(float *)&v6) + (float)(*(float *)&v7 * *(float *)&v7)) + (float)(*(float *)&v5 * *(float *)&v5);
      v27 = v26;
      if ( *(float *)&v26 > 0.001 )
      {
        v28 = this->m_pAI;
        v29 = v28->Physics.vWishDelta.v[1];
        v30 = LODWORD(v28->Physics.vWishDelta.v[0]);
        v31 = v28->Physics.vWishDelta.v[2];
        if ( AICommonInterface::HasPath(this) )
        {
          v32 = v30;
          *(float *)&v32 = fsqrt((float)((float)(*(float *)&v30 * *(float *)&v30) + (float)(v29 * v29)) + (float)(v31 * v31)) * 0.30000001;
          _XMM3 = v32;
          __asm { vminss  xmm4, xmm3, cs:__real@40400000 }
        }
        else
        {
          *(float *)&_XMM4 = FLOAT_3_0;
        }
        v35 = this->m_pAI;
        v37 = v27;
        *(float *)&v37 = fsqrt(*(float *)&v27);
        _XMM1 = v37;
        __asm
        {
          vcmpless xmm0, xmm1, cs:__real@80000000
          vblendvps xmm0, xmm1, xmm13, xmm0
        }
        v35->Physics.vWishDelta.v[0] = (float)((float)(*(float *)&v6 * (float)(1.0 / *(float *)&_XMM0)) * *(float *)&_XMM4) + v35->Physics.vWishDelta.v[0];
        v35->Physics.vWishDelta.v[1] = (float)((float)(*(float *)&v7 * (float)(1.0 / *(float *)&_XMM0)) * *(float *)&_XMM4) + v35->Physics.vWishDelta.v[1];
        v35->Physics.vWishDelta.v[2] = (float)((float)(*(float *)&v5 * (float)(1.0 / *(float *)&_XMM0)) * *(float *)&_XMM4) + v35->Physics.vWishDelta.v[2];
      }
    }
  }
}

/*
==============
AIScriptedInterface::BadPlace_AttemptEscape
==============
*/
char AIScriptedInterface::BadPlace_AttemptEscape(AIScriptedInterface *this)
{
  pathnode_t *SafeNodeAlongPath; 
  pathnode_t *v3; 
  int SafeNodeOutsideBadPlace; 
  __int64 v6; 
  __int64 v7; 
  pathsort_s *i; 
  pathnode_t *node; 
  vec3_t pos; 
  pathsort_s potentialNodes; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 7569, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 7570, ASSERT_TYPE_ASSERT, "( m_pAI->sentient )", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  SafeNodeAlongPath = AIScriptedInterface::FindSafeNodeAlongPath(this);
  v3 = SafeNodeAlongPath;
  if ( SafeNodeAlongPath && (pathnode_t::GetPos(SafeNodeAlongPath, &pos), AIScriptedInterface::FindPath(this, &pos, v3, 1, 1, 0)) )
  {
    AICommonInterface::BadPlace_StartEscape(this, v3);
    return 1;
  }
  else
  {
    SafeNodeOutsideBadPlace = AICommonInterface::BadPlace_FindSafeNodeOutsideBadPlace(this, &potentialNodes, 768.0);
    v6 = SafeNodeOutsideBadPlace;
    if ( SafeNodeOutsideBadPlace <= 0 )
    {
      return 0;
    }
    else
    {
      v7 = 0i64;
      for ( i = &potentialNodes; ; ++i )
      {
        node = i->node;
        if ( !i->node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 7598, ASSERT_TYPE_ASSERT, "( safeNode )", (const char *)&queryFormat, "safeNode") )
          __debugbreak();
        pathnode_t::GetPos(node, &pos);
        if ( AIScriptedInterface::FindPath(this, &pos, node, 1, 1, 0) )
          break;
        if ( ++v7 >= v6 )
          return 0;
      }
      AICommonInterface::BadPlace_StartEscape(this, node);
      return 1;
    }
  }
}

/*
==============
AIScriptedInterface::BadPlace_Flee_Finish
==============
*/
void AIScriptedInterface::BadPlace_Flee_Finish(AIScriptedInterface *this, ai_state_t eNextState)
{
  ;
}

/*
==============
AIScriptedInterface::BadPlace_Flee_Start
==============
*/
char AIScriptedInterface::BadPlace_Flee_Start(AIScriptedInterface *this, ai_state_t ePrevState)
{
  if ( AICommonInterface::IsInAnyBadPlace(this) && AIScriptedInterface::BadPlace_AttemptEscape(this) )
  {
    AICommonInterface::MarkInBadPlace(this);
    return 1;
  }
  else
  {
    AICommonInterface::MarkNotInBadPlace(this);
    return 1;
  }
}

/*
==============
AIScriptedInterface::BadPlace_Flee_Think
==============
*/
__int64 AIScriptedInterface::BadPlace_Flee_Think(AIScriptedInterface *this)
{
  ai_scripted_t *m_pAI; 
  ai_scripted_t *v4; 
  void (__fastcall *GetPerfectInfo)(AICommonInterface *, sentient_s *, unsigned __int8); 
  sentient_s *v6; 
  __int64 v7; 
  ai_scripted_t *v8; 
  int number; 
  Ai_Asm *v10; 

  m_pAI = this->m_pAI;
  if ( !m_pAI->navigation.isInBadPlace )
  {
    AIScriptedInterface::SetState(this, AIS_BEHAVE);
    return 1i64;
  }
  if ( !m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 1312, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI", -2i64) )
    __debugbreak();
  v4 = this->m_pAI;
  if ( v4->preThinkTime != level.time )
  {
    v4->preThinkTime = level.time;
    Profile_Begin(255);
    SV_Profile_BeginEvent(SVPROF_AI_PRETHINK);
    if ( SentientHandle::isDefined(&this->m_pAI->threat.pFavoriteEnemy) )
    {
      GetPerfectInfo = this->GetPerfectInfo;
      v6 = SentientHandle::sentient(&this->m_pAI->threat.pFavoriteEnemy);
      LOBYTE(v7) = 17;
      GetPerfectInfo(this, v6, v7);
    }
    this->m_pAI->orientation.gunBlockedByWall = 0;
    this->m_pAI->orientation.prevRelativeDir = this->m_pAI->orientation.relativeDir;
    this->m_pAI->orientation.relativeDir = 0;
    this->m_pAI->eAnimMode = this->m_pAI->eScriptSetAnimMode;
    v8 = this->m_pAI;
    if ( v8->eAnimMode == AI_ANIM_MOVE_CODE )
      v8->moveMode = (v8->iPathEndTime <= 0) + 1;
    else
      v8->moveMode = 0;
    AICommonInterface::UpdateSight(this);
    this->UpdateThreat(this);
    AICommonInterface::UpdateLastEnemySightPos(this);
    this->UpdateStepMoveCounter(this);
    AIScriptedInterface::UpdateTightQuarters(this);
    if ( AI_BT_HasInstance(this->m_pAI->ent->s.number) )
    {
      AI_BT_Tick(this->m_pAI->ent->s.number);
      number = this->m_pAI->ent->s.number;
      v10 = Ai_Asm::Singleton();
      Ai_Asm::ClearEphemeralEvents(v10, number);
    }
    Profile_EndInternal(NULL);
    SV_Profile_EndEvent(SVPROF_AI_PRETHINK);
  }
  this->SetDebugInfo(this, "badplace_flee");
  if ( AICommonInterface::HasPath(this) || AIScriptedInterface::PathPending(this) )
  {
    AIScriptedInterface::SetOrientMode(this, AI_ORIENT_TO_ENEMY_OR_MOTION);
    AIScriptedInterface::TeamMoveBlockedClear(this);
    AIScriptedInterface::MoveAlongPathWithTeam(this, AI_MOVE_DEFAULT, 0, 0);
    if ( this->GetCloseEnt(this) || this->GetPileUpActor(this) )
      this->ClearPath(this);
  }
  else
  {
    if ( !AICommonInterface::IsInAnyBadPlace(this) )
      goto LABEL_21;
    if ( AICommonInterface::NearClaimNode(this, 32.0) )
      Path_MarkNodeInvalid(this->m_pAI->sentient->pClaimedNode, this->m_pAI->sentient->eTeam, 3000);
    if ( !AIScriptedInterface::BadPlace_AttemptEscape(this) )
    {
LABEL_21:
      AICommonInterface::MarkNotInBadPlace(this);
      AIScriptedInterface::SetState(this, AIS_BEHAVE);
      return 1i64;
    }
  }
  AIScriptedInterface::PostThink(this);
  return 0i64;
}

/*
==============
AIScriptedInterface::BlendTagToParent
==============
*/
void AIScriptedInterface::BlendTagToParent(AIScriptedInterface *this, EntityTagInfo *tagInfo)
{
  vec4_t out; 

  Axis43ToQuat(&tagInfo->axis, &out);
  out = (vec4_t)_mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps((__m128)_xmm, (__m128)out), (__m128)_xmm), (__m128)out);
  QuatToAxis(&out, (tmat33_t<vec3_t> *)&tagInfo->axis);
  tagInfo->axis.m[3].v[0] = (float)((float)(0.0 - tagInfo->axis.m[3].v[0]) * 0.25) + tagInfo->axis.m[3].v[0];
  tagInfo->axis.m[3].v[1] = (float)((float)(0.0 - tagInfo->axis.m[3].v[1]) * 0.25) + tagInfo->axis.m[3].v[1];
  tagInfo->axis.m[3].v[2] = (float)((float)(0.0 - tagInfo->axis.m[3].v[2]) * 0.25) + tagInfo->axis.m[3].v[2];
}

/*
==============
CG_GetClientActorIndexAndTeam
==============
*/
void CG_GetClientActorIndexAndTeam(int iEntNum, int *actorIndex, int *team)
{
  __int64 v3; 
  unsigned int v6; 
  __int64 v7; 

  v3 = iEntNum;
  if ( !actorIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 7417, ASSERT_TYPE_ASSERT, "( actorIndex )", (const char *)&queryFormat, "actorIndex") )
    __debugbreak();
  if ( !team && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 7418, ASSERT_TYPE_ASSERT, "( team )", (const char *)&queryFormat, "team") )
    __debugbreak();
  v6 = g_cgameData.specialIndex[v3];
  *actorIndex = v6;
  if ( v6 >= 0x26 )
  {
    LODWORD(v7) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 7421, ASSERT_TYPE_ASSERT, "(unsigned)( *actorIndex ) < (unsigned)( (32 + 6) )", "*actorIndex doesn't index MAX_ACTORS\n\t%i not in [0, %i)", v7, 38) )
      __debugbreak();
  }
  *team = g_cgameData.actorTeam[*actorIndex];
}

/*
==============
CG_ShouldDrawActorOnCompass
==============
*/
bool CG_ShouldDrawActorOnCompass(int iEntNum)
{
  __int64 v1; 
  __int64 v2; 
  __int64 v4; 
  int v5; 

  v1 = iEntNum;
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 7431, ASSERT_TYPE_ASSERT, "( Sys_IsMainThread() )", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  v2 = g_cgameData.specialIndex[v1];
  if ( (unsigned int)v2 >= 0x26 )
  {
    v5 = 38;
    LODWORD(v4) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 7434, ASSERT_TYPE_ASSERT, "(unsigned)( actorIndex ) < (unsigned)( (32 + 6) )", "actorIndex doesn't index MAX_ACTORS\n\t%i not in [0, %i)", v4, v5) )
      __debugbreak();
  }
  return g_cgameData.actorOnCompass[v2] != 0;
}

/*
==============
AIScriptedInterface::CalcTagAxisMoveOffset
==============
*/
void AIScriptedInterface::CalcTagAxisMoveOffset(AIScriptedInterface *this, EntityTagInfo *tagInfo)
{
  gentity_s *ent; 
  ai_scripted_t *m_pAI; 
  float v6; 
  float v7; 
  float v8; 
  vec3_t *p_vWishDelta; 
  ai_scripted_t *v10; 
  int number; 
  vec3_t translationDelta; 
  tmat33_t<vec3_t> v13; 
  tmat43_t<vec3_t> in1; 
  vec4_t rotationDeltaQuat; 
  tmat43_t<vec3_t> axis; 
  tmat43_t<vec3_t> v17; 
  tmat43_t<vec3_t> out; 
  tmat43_t<vec3_t> dst; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 6196, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  ent = this->m_pAI->ent;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 6198, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  AnglesToAxis(&ent->r.currentAngles, (tmat33_t<vec3_t> *)&axis);
  axis.m[3] = ent->r.currentOrigin;
  AIScriptedInterface::UpdateAnglesAndDelta(this);
  m_pAI = this->m_pAI;
  if ( m_pAI->Physics.ePhysicsType != AIPHYS_NORMAL_ABSOLUTE && m_pAI->Physics.ePhysicsType != AIPHYS_NOGRAVITY_ABSOLUTE && m_pAI->Physics.ePhysicsType != AIPHYS_ZONLY_PHYSICS_ABSOLUTE )
  {
    v6 = m_pAI->Physics.vWishDelta.v[0];
    v7 = m_pAI->Physics.vWishDelta.v[1];
    v8 = m_pAI->Physics.vWishDelta.v[2];
    AnglesToAxis(&m_pAI->orientation.vDesiredAngles, &v13);
    p_vWishDelta = &this->m_pAI->Physics.vWishDelta;
    if ( &translationDelta == p_vWishDelta && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
      __debugbreak();
    p_vWishDelta->v[0] = (float)((float)(v7 * v13.m[1].v[0]) + (float)(v6 * v13.m[0].v[0])) + (float)(v8 * v13.m[2].v[0]);
    p_vWishDelta->v[1] = (float)((float)(v7 * v13.m[1].v[1]) + (float)(v6 * v13.m[0].v[1])) + (float)(v8 * v13.m[2].v[1]);
    p_vWishDelta->v[2] = (float)((float)(v7 * v13.m[1].v[2]) + (float)(v6 * v13.m[0].v[2])) + (float)(v8 * v13.m[2].v[2]);
  }
  AnglesToAxis(&ent->r.currentAngles, (tmat33_t<vec3_t> *)&v17);
  v10 = this->m_pAI;
  v17.m[3].v[0] = ent->r.currentOrigin.v[0] + v10->Physics.vWishDelta.v[0];
  v17.m[3].v[1] = v10->Physics.vWishDelta.v[1] + ent->r.currentOrigin.v[1];
  v17.m[3].v[2] = v10->Physics.vWishDelta.v[2] + ent->r.currentOrigin.v[2];
  MatrixInverseOrthogonal43(&axis, &out);
  MatrixMultiply43(&v17, &out, &in1);
  if ( G_MotionWarp_Active(ent->s.number) )
  {
    AxisToQuat((const tmat33_t<vec3_t> *)&in1, &rotationDeltaQuat);
    number = ent->s.number;
    translationDelta = in1.m[3];
    G_MotionWarp_UpdateHook(number, &translationDelta, &rotationDeltaQuat);
    QuatToAxis(&rotationDeltaQuat, (tmat33_t<vec3_t> *)&in1);
    in1.m[3] = translationDelta;
  }
  MatrixCopy43(&tagInfo->axis, &dst);
  MatrixMultiply43(&in1, &dst, &tagInfo->axis);
}

/*
==============
AIScriptedInterface::CalculatePlayerPushDelta
==============
*/
float AIScriptedInterface::CalculatePlayerPushDelta(AIScriptedInterface *this, const gentity_s *pusher, vec2_t *outPushDir)
{
  gentity_s *ent; 
  gclient_s *client; 
  float v8; 
  float v9; 
  float v10; 
  __int128 v11; 
  __int128 v12; 
  float v16; 
  float v17; 
  __int128 v18; 
  vec3_t outForward; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 3181, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 3182, ASSERT_TYPE_ASSERT, "( m_pAI->ent )", (const char *)&queryFormat, "m_pAI->ent") )
    __debugbreak();
  if ( !pusher && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 3183, ASSERT_TYPE_ASSERT, "( pusher )", (const char *)&queryFormat, "pusher") )
    __debugbreak();
  if ( !pusher->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 3184, ASSERT_TYPE_ASSERT, "( pusher->client )", (const char *)&queryFormat, "pusher->client") )
    __debugbreak();
  ent = this->m_pAI->ent;
  client = pusher->client;
  v8 = ent->r.currentOrigin.v[0] - pusher->r.currentOrigin.v[0];
  v9 = ent->r.currentOrigin.v[1] - pusher->r.currentOrigin.v[1];
  v10 = client->ps.velocity.v[1];
  v11 = LODWORD(client->ps.velocity.v[0]);
  v12 = v11;
  *(float *)&v12 = fsqrt((float)(*(float *)&v11 * *(float *)&v11) + (float)(v10 * v10));
  _XMM6 = v12;
  __asm
  {
    vcmpless xmm0, xmm6, cs:__real@80000000
    vblendvps xmm0, xmm6, xmm7, xmm0
  }
  v16 = *(float *)&v11 * (float)(1.0 / *(float *)&_XMM0);
  v17 = v10 * (float)(1.0 / *(float *)&_XMM0);
  if ( *(float *)&v12 == 0.0 )
  {
    G_Client_GetViewDirection(pusher, &outForward, NULL, NULL);
    v18 = LODWORD(outForward.v[0]);
    *(float *)&v18 = fsqrt((float)(outForward.v[0] * outForward.v[0]) + (float)(outForward.v[1] * outForward.v[1]));
    _XMM2 = v18;
    __asm
    {
      vcmpless xmm0, xmm2, cs:__real@80000000
      vblendvps xmm0, xmm2, xmm7, xmm0
    }
    v16 = outForward.v[0] * (float)(1.0 / *(float *)&_XMM0);
    v17 = outForward.v[1] * (float)(1.0 / *(float *)&_XMM0);
  }
  outPushDir->v[1] = COERCE_FLOAT(LODWORD(v16) ^ _xmm);
  outPushDir->v[0] = v17;
  if ( (float)((float)(v8 * v17) + (float)(COERCE_FLOAT(LODWORD(v16) ^ _xmm) * v9)) < 0.0 )
  {
    outPushDir->v[0] = COERCE_FLOAT(LODWORD(v17) ^ _xmm);
    outPushDir->v[1] = v16;
  }
  __asm { vmaxss  xmm6, xmm6, cs:__real@42700000 }
  if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
    __debugbreak();
  return (float)((float)level.frameDuration * 0.001) * *(float *)&_XMM6;
}

/*
==============
AIScriptedInterface::CallThink
==============
*/
__int64 AIScriptedInterface::CallThink(AIScriptedInterface *this)
{
  ai_scripted_t *m_pAI; 
  unsigned int v3; 
  __int64 v5; 
  __int64 v6; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 1584, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 1585, ASSERT_TYPE_ASSERT, "( m_pAI->sentient )", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  if ( this->m_pAI->stateLevel >= 6 )
  {
    LODWORD(v5) = this->m_pAI->stateLevel;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 1586, ASSERT_TYPE_ASSERT, "(unsigned)( m_pAI->stateLevel ) < (unsigned)( ( sizeof( *array_counter( m_pAI->eState ) ) + 0 ) )", "m_pAI->stateLevel doesn't index ARRAY_COUNT( m_pAI->eState )\n\t%i not in [0, %i)", v5, 6) )
      __debugbreak();
  }
  m_pAI = this->m_pAI;
  if ( !AIFuncTable[m_pAI->species][m_pAI->eState[m_pAI->stateLevel]].pfnThink )
  {
    LODWORD(v6) = m_pAI->eState[m_pAI->stateLevel];
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 1587, ASSERT_TYPE_ASSERT, "( ( AIFuncTable[m_pAI->species][m_pAI->eState[m_pAI->stateLevel]].pfnThink ) )", "%s\n\t( m_pAI->eState[m_pAI->stateLevel] ) = %i", "( AIFuncTable[m_pAI->species][m_pAI->eState[m_pAI->stateLevel]].pfnThink )", v6) )
      __debugbreak();
  }
  if ( this->m_pAI->transitionCount )
  {
    AIScriptedInterface::ThinkStateTransitions(this);
    if ( this->m_pAI->transitionCount )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 1595, ASSERT_TYPE_ASSERT, "( m_pAI->transitionCount == 0 )", (const char *)&queryFormat, "m_pAI->transitionCount == 0") )
        __debugbreak();
    }
  }
  this->UpdateCloseEnt(this);
  v3 = ((__int64 (*)(void))AIFuncTable[this->m_pAI->species][this->m_pAI->eState[this->m_pAI->stateLevel]].pfnThink)();
  G_PhysicsCharacterProxy_Teleport(this->m_pAI->ent, 0);
  if ( v3 > 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 1604, ASSERT_TYPE_ASSERT, "( eThinkResult == ACTOR_THINK_DONE || eThinkResult == ACTOR_THINK_REPEAT || eThinkResult == ACTOR_THINK_MOVE_TO_BODY_QUEUE )", (const char *)&queryFormat, "eThinkResult == ACTOR_THINK_DONE || eThinkResult == ACTOR_THINK_REPEAT || eThinkResult == ACTOR_THINK_MOVE_TO_BODY_QUEUE") )
    __debugbreak();
  return v3;
}

/*
==============
AIScriptedInterface::CanSlowOnPath
==============
*/
bool AIScriptedInterface::CanSlowOnPath(AIScriptedInterface *this)
{
  ai_scripted_t *m_pAI; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 5786, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  m_pAI = this->m_pAI;
  return m_pAI->iPathEndTime || (!m_pAI->pathEndAnimNotified || Nav_IsAtGoal(m_pAI->pNavigator, 1.0)) && !this->m_pAI->blackboard.m_bMeleeChargeRequested;
}

/*
==============
AIScriptedInterface::CheckClearNodeClaimCloseEnt
==============
*/
void AIScriptedInterface::CheckClearNodeClaimCloseEnt(AIScriptedInterface *this)
{
  pathnode_t *pClaimedNode; 
  vec3_t pos; 
  vec3_t vFinalGoal; 

  if ( this->GetCloseEnt(this) && AIScriptedInterface::AtClaimNode(this) )
  {
    if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 1079, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
      __debugbreak();
    if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 1080, ASSERT_TYPE_ASSERT, "( m_pAI->sentient )", (const char *)&queryFormat, "m_pAI->sentient") )
      __debugbreak();
    pClaimedNode = this->m_pAI->sentient->pClaimedNode;
    if ( pClaimedNode && AICommonInterface::HasPath(this) )
    {
      pathnode_t::GetPos(pClaimedNode, &pos);
      AICommonInterface::GetPathFinalGoal(this, &vFinalGoal);
      if ( AICommonInterface::PointAt(this, &vFinalGoal, &pos) )
        this->ClearPath(this);
    }
  }
}

/*
==============
AIScriptedInterface::CheckCollisions
==============
*/
void AIScriptedInterface::CheckCollisions(AIScriptedInterface *this)
{
  BOOL v2; 
  bool HasPath; 
  AIIterator *v4; 
  const gentity_s *v5; 
  ai_agent_t *ScriptedAgentInfo; 
  AIAgentInterface *v7; 
  actor_s *actor; 
  gentity_s *gentities; 
  EntityTagInfo *tagInfo; 
  AIActorInterface v11; 
  AIAgentInterface v12; 
  AIAgentInterface *v13; 
  vec3_t vGoalPos; 
  vec3_t vFinalGoal; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 6489, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 6490, ASSERT_TYPE_ASSERT, "( m_pAI->sentient )", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  if ( !this->GetCloseEnt(this) )
  {
    vGoalPos = this->m_pAI->ent->r.currentOrigin;
    v2 = AIScriptedInterface::AtClaimNode(this);
    HasPath = AICommonInterface::HasPath(this);
    if ( HasPath )
      AICommonInterface::GetPathFinalGoal(this, &vFinalGoal);
    v4 = this->GetAIIterator(this);
    v5 = (const gentity_s *)v4->GetFirst(v4);
    if ( v5 )
    {
      while ( 1 )
      {
        AIActorInterface::AIActorInterface(&v11);
        AIAgentInterface::AIAgentInterface(&v12);
        v12.__vftable = (AIAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
        v13 = NULL;
        if ( v5->agent && SV_Agent_IsScripted(v5->s.number) )
        {
          ScriptedAgentInfo = AIAgentInterface::GetScriptedAgentInfo(v5);
          if ( !ScriptedAgentInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 97, ASSERT_TYPE_ASSERT, "( pInfo )", (const char *)&queryFormat, "pInfo") )
            __debugbreak();
          if ( !ScriptedAgentInfo->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 98, ASSERT_TYPE_ASSERT, "( pInfo->sentientInfo )", (const char *)&queryFormat, "pInfo->sentientInfo") )
            __debugbreak();
          AINewAgentInterface::SetAgent((AINewAgentInterface *)&v12, ScriptedAgentInfo);
          v13 = &v12;
          v7 = &v12;
        }
        else
        {
          actor = v5->actor;
          if ( actor )
          {
            if ( !actor->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 105, ASSERT_TYPE_ASSERT, "( ent->actor->sentientInfo )", (const char *)&queryFormat, "ent->actor->sentientInfo") )
              __debugbreak();
            AIActorInterface::SetActor(&v11, v5->actor);
            v13 = (AIAgentInterface *)&v11;
          }
          v7 = v13;
          if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 6508, ASSERT_TYPE_ASSERT, "(pOtherAI)", (const char *)&queryFormat, "pOtherAI") )
            __debugbreak();
        }
        if ( (ai_scripted_t *)v7->GetAI(v7) != this->m_pAI )
        {
          if ( !v2 || (gentities = level.gentities, gentities[*(int *)(v7->GetAI(v7) + 2344)].sentient) )
          {
            if ( AICommonInterface::PointNear(this, &v5->r.currentOrigin, &vGoalPos) )
            {
              tagInfo = v5->tagInfo;
              if ( !tagInfo )
                break;
              if ( !tagInfo->parent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 6519, ASSERT_TYPE_ASSERT, "( pOtherEnt->tagInfo->parent )", (const char *)&queryFormat, "pOtherEnt->tagInfo->parent") )
                __debugbreak();
              if ( v5->tagInfo->parent->s.number != this->m_pAI->ent->s.number )
                break;
            }
          }
        }
        v5 = v4->GetNext(v4);
        if ( !v5 )
          return;
      }
      if ( HasPath && AICommonInterface::PointAt(this, &this->m_pAI->ent->r.currentOrigin, &vFinalGoal) )
        this->ClearPath(this);
    }
  }
}

/*
==============
AIScriptedInterface::CheckDeathAllowed
==============
*/
__int64 AIScriptedInterface::CheckDeathAllowed(AIScriptedInterface *this, int damage, const vec3_t *damageDir)
{
  ai_scripted_t *m_pAI; 
  unsigned int v7; 
  ai_scripted_t *v8; 
  ai_scripted_t *v9; 
  const dvar_t *v10; 
  vec3_t forward; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 1981, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 1982, ASSERT_TYPE_ASSERT, "( m_pAI->ent )", (const char *)&queryFormat, "m_pAI->ent") )
    __debugbreak();
  m_pAI = this->m_pAI;
  v7 = 0;
  if ( damage >= m_pAI->ent->health && !m_pAI->painDeath.allowDeath && !m_pAI->combat.damageShield && AIScriptedInterface::InNonDamageableScriptedState(this) )
  {
    v8 = this->m_pAI;
    v7 = damage - v8->ent->health + 1;
    v8->painDeath.delayedDeath = 1;
  }
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 1965, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !damageDir )
    return v7;
  v9 = this->m_pAI;
  if ( v9->combat.frontShieldAngleCos >= 1.0 )
    return v7;
  AngleVectors(&v9->ent->r.currentAngles, &forward, NULL, NULL);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(forward.v[1] * damageDir->v[1]) + (float)(forward.v[0] * damageDir->v[0])) ^ _xmm) <= this->m_pAI->combat.frontShieldAngleCos )
    return v7;
  v10 = DVARFLT_ai_frontShieldDamageReduction;
  if ( !DVARFLT_ai_frontShieldDamageReduction && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_frontShieldDamageReduction") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  return (unsigned int)(int)(float)((float)damage * v10->current.value);
}

/*
==============
CheckIfNodeTaken
==============
*/
void CheckIfNodeTaken(const gentity_s *ent, const pathnode_t *goalNode)
{
  team_t eTeam; 
  int v5; 
  unsigned int v6; 
  const char *fmt; 
  const char *v8; 
  int v9; 
  bool v10; 
  const char *GameType; 
  int v12; 
  unsigned int v13; 
  const char *v14; 
  int v15; 
  const char *v16; 
  int v17; 
  scrContext_t *v18; 
  SentientHandle *v19; 
  scrContext_t *v20; 
  sentient_s *v21; 
  __int64 v22; 
  unsigned int v23; 
  __int64 v24; 
  int v25; 

  if ( !goalNode || !ent )
    return;
  eTeam = ent->sentient->eTeam;
  v5 = 1;
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
  {
    v6 = 2;
    if ( eTeam <= TEAM_TWO )
      v6 = eTeam - 1;
    if ( v6 < 3 )
      goto LABEL_14;
    v25 = 3;
    fmt = "result doesn't index MAX_NODE_TEAMS_SP\n\t%i not in [0, %i)";
    v8 = "(unsigned)( result ) < (unsigned)( (3) )";
    v9 = 205;
  }
  else
  {
    v6 = 1;
    if ( eTeam <= TEAM_ONE )
      v6 = eTeam - 1;
    if ( v6 < 2 )
      goto LABEL_14;
    v25 = 2;
    fmt = "result doesn't index MAX_NODE_TEAMS_MP\n\t%i not in [0, %i)";
    v8 = "(unsigned)( result ) < (unsigned)( (2) )";
    v9 = 210;
  }
  v23 = v6;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", v9, ASSERT_TYPE_ASSERT, v8, fmt, v23, v25) )
    __debugbreak();
LABEL_14:
  if ( BG_BotSystemEnabled() )
  {
    GameType = SV_GameMP_GetGameType();
    v12 = *(unsigned __int8 *)GameType - (unsigned __int8)aBr_2[0];
    if ( !v12 )
    {
      v12 = *((unsigned __int8 *)GameType + 1) - (unsigned __int8)aBr_2[1];
      if ( !v12 )
        v12 = *((unsigned __int8 *)GameType + 2) - (unsigned __int8)aBr_2[2];
    }
    v10 = v12 == 0;
  }
  else
  {
    v10 = 1;
  }
  if ( v10 )
    v6 = 0;
  if ( BG_BotSystemEnabled() )
  {
    v14 = SV_GameMP_GetGameType();
    v15 = *(unsigned __int8 *)v14 - (unsigned __int8)aBr_2[0];
    if ( !v15 )
    {
      v15 = *((unsigned __int8 *)v14 + 1) - (unsigned __int8)aBr_2[1];
      if ( !v15 )
        v15 = *((unsigned __int8 *)v14 + 2) - (unsigned __int8)aBr_2[2];
    }
    v13 = (v15 != 0) + 1;
  }
  else
  {
    v13 = 1;
  }
  if ( v6 >= v13 )
  {
    if ( BG_BotSystemEnabled() )
    {
      v16 = SV_GameMP_GetGameType();
      v17 = *(unsigned __int8 *)v16 - (unsigned __int8)aBr_2[0];
      if ( !v17 )
      {
        v17 = *((unsigned __int8 *)v16 + 1) - (unsigned __int8)aBr_2[1];
        if ( !v17 )
          v17 = *((unsigned __int8 *)v16 + 2) - (unsigned __int8)aBr_2[2];
      }
      v5 = (v17 != 0) + 1;
    }
    LODWORD(v24) = v5;
    LODWORD(v22) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 378, ASSERT_TYPE_ASSERT, "(unsigned)( nodeTeamAdjusted ) < (unsigned)( Path_NodeMaxNumTeamOwners( node ) )", "nodeTeamAdjusted doesn't index Path_NodeMaxNumTeamOwners( node )\n\t%i not in [0, %i)", v22, v24) )
      __debugbreak();
  }
  if ( SentientHandle::isDefined(&goalNode->dynamic.pOwners[v6]) )
  {
    v18 = ScriptContext_Server();
    v19 = &goalNode->dynamic.pOwners[v6];
    v20 = v18;
    v21 = SentientHandle::sentient(v19);
    GScr_AddEntity(v21->ent);
    Scr_AddConstString(v20, scr_const.taken);
    GScr_Notify(ent, scr_const.node_bad, 2u);
  }
}

/*
==============
AIScriptedInterface::CheckNodeClaim
==============
*/
void AIScriptedInterface::CheckNodeClaim(AIScriptedInterface *this)
{
  ai_scripted_t *m_pAI; 
  bool v3; 
  float v4; 
  gentity_s *ent; 
  AINavigator *pNavigator; 
  pathnode_t *v7; 
  pathnode_t *v8; 
  bool CanClaimNode; 
  sentient_s *sentient; 
  vec3_t vFinalGoal; 
  vec3_t vPoint; 

  if ( this->IsAlive(this) && !this->m_pAI->fixedNode && !AIScriptedInterface::KeepClaimedNode(this) && this->m_pAI->arrivalInfo.arriving != 1 )
  {
    if ( AICommonInterface::HasPath(this) )
    {
      AICommonInterface::GetPathFinalGoal(this, &vFinalGoal);
      m_pAI = this->m_pAI;
    }
    else
    {
      v3 = AIScriptedInterface::PathPending(this);
      m_pAI = this->m_pAI;
      if ( v3 )
      {
        *(_QWORD *)vFinalGoal.v = *(_QWORD *)m_pAI->pathFindTask.m_GoalPos.v;
        v4 = m_pAI->pathFindTask.m_GoalPos.v[2];
      }
      else
      {
        ent = m_pAI->ent;
        *(_QWORD *)vFinalGoal.v = *(_QWORD *)m_pAI->ent->r.currentOrigin.v;
        v4 = ent->r.currentOrigin.v[2];
      }
      vFinalGoal.v[2] = v4;
    }
    if ( m_pAI->sentient->pClaimedNode )
    {
      if ( AIScriptedInterface::PointNearClaimNode(this, &vFinalGoal) || level.time < this->m_pAI->iTeamMoveWaitTime )
        return;
      if ( AICommonInterface::HasPath(this) && (pNavigator = this->m_pAI->pNavigator) != NULL )
      {
        pNavigator->GetRequestedGoalPos(pNavigator, &vPoint);
        if ( AIScriptedInterface::PointNearClaimNode(this, &vPoint) )
          return;
      }
      else if ( !AIScriptedInterface::PathPending(this) )
      {
        Sentient_ClaimNode(this->m_pAI->sentient, NULL);
      }
    }
    v7 = Sentient_NearestNode(this->m_pAI->sentient);
    v8 = v7;
    if ( v7 && ((1 << LOBYTE(v7->constant.type)) & 0x82641EFC) != 0 && (v7->constant.spawnflags & 0x8000) != 0 && AICommonInterface::PointNearNode(this, &vFinalGoal, v7) )
    {
      CanClaimNode = Path_CanClaimNode(v8, this->m_pAI->sentient);
      sentient = this->m_pAI->sentient;
      if ( CanClaimNode )
        Sentient_ClaimNode(sentient, v8);
      else
        sentient->bNearestNodeValid = 0;
    }
  }
}

/*
==============
AIScriptedInterface::CheckNotifyGoal
==============
*/
void AIScriptedInterface::CheckNotifyGoal(AIScriptedInterface *this)
{
  ai_scripted_t *m_pAI; 
  ai_scripted_t *v3; 
  unsigned __int8 numPoints; 
  scrContext_t *v5; 
  ai_scripted_t *v6; 
  scrContext_t *v7; 
  unsigned __int8 i; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 1636, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 1637, ASSERT_TYPE_ASSERT, "( m_pAI->sentient )", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  if ( !this->m_pAI->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 1638, ASSERT_TYPE_ASSERT, "( m_pAI->ent )", (const char *)&queryFormat, "m_pAI->ent") )
    __debugbreak();
  if ( AIScriptedInterface::GoalReached(this) )
  {
    m_pAI = this->m_pAI;
    v3 = m_pAI;
    if ( m_pAI->codeGoal.bMultiGoalPath )
    {
      numPoints = m_pAI->scriptGoalPath.numPoints;
      if ( numPoints )
      {
        if ( m_pAI->scriptGoalPath.curPoint != numPoints - 1 )
          return;
        v5 = ScriptContext_Server();
        v6 = this->m_pAI;
        v7 = v5;
        for ( i = v6->scriptGoalPath.curPoint; i < v6->scriptGoalPath.numPoints; ++i )
        {
          Scr_AddInt(v7, i);
          GScr_Notify(this->m_pAI->ent, scr_const.subgoal, 1u);
          v6 = this->m_pAI;
        }
        v6->scriptGoalPath.numPoints = 0;
        v3 = this->m_pAI;
      }
    }
    GScr_Notify(v3->ent, scr_const.goal, 0);
  }
}

/*
==============
AIScriptedInterface::CheckSharpTurnNotify
==============
*/
_BOOL8 AIScriptedInterface::CheckSharpTurnNotify(AIScriptedInterface *this)
{
  ai_scripted_t *m_pAI; 
  float v3; 
  bool ShouldDoSharpTurnSpace; 
  BOOL ShouldDoSharpTurn; 
  double v6; 
  float v7; 
  scrContext_t *v10; 
  double v11; 
  float v12; 
  double v13; 
  float v14; 
  scrContext_t *v15; 
  bool IsDoingReacquire; 
  float outDistToCorner[4]; 
  vec3_t v19; 
  vec3_t nextPathPoint; 
  vec3_t outCorner; 
  vec3_t vec; 

  m_pAI = this->m_pAI;
  v3 = FLOAT_N1_0;
  outDistToCorner[0] = FLOAT_N1_0;
  if ( m_pAI->Physics.bSpace )
  {
    ShouldDoSharpTurnSpace = AIScriptedInterface::ShouldDoSharpTurnSpace(this, &nextPathPoint, outDistToCorner);
    v3 = outDistToCorner[0];
    ShouldDoSharpTurn = ShouldDoSharpTurnSpace;
    outCorner = nextPathPoint;
  }
  else
  {
    Sys_ProfBeginNamedEvent(0xFFFFFFFF, "ShouldDoSharpTurn");
    ShouldDoSharpTurn = AIScriptedInterface::ShouldDoSharpTurn(this, (float)this->m_pAI->sharpTurnLookaheadDist, (float)this->m_pAI->postSharpTurnLookaheadDist, &outCorner, &nextPathPoint);
    Sys_ProfEndNamedEvent();
    if ( !ShouldDoSharpTurn )
      return ShouldDoSharpTurn;
    vec.v[0] = nextPathPoint.v[0] - outCorner.v[0];
    vec.v[2] = nextPathPoint.v[2] - outCorner.v[2];
    vec.v[1] = nextPathPoint.v[1] - outCorner.v[1];
    v6 = vectoyaw((const vec2_t *)&vec);
    v7 = (float)(*(float *)&v6 - this->m_pAI->ent->r.currentAngles.v[1]) * 0.0027777778;
    _XMM0 = 0i64;
    __asm { vroundss xmm4, xmm0, xmm3, 1 }
    ShouldDoSharpTurn = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(v7 - *(float *)&_XMM4) * 360.0) & _xmm) > 67.5;
  }
  if ( ShouldDoSharpTurn )
  {
    v10 = ScriptContext_Server();
    v11 = *(double *)outCorner.v;
    v12 = outCorner.v[2];
    v13 = *(double *)nextPathPoint.v;
    v14 = nextPathPoint.v[2];
    v15 = v10;
    IsDoingReacquire = AIScriptedInterface::IsDoingReacquire(this);
    vec.v[2] = v12;
    v19.v[2] = v14;
    *(double *)vec.v = v11;
    *(double *)v19.v = v13;
    AIScriptedInterface::FireSharpTurnEvent(this, v15, IsDoingReacquire, &v19, 0, &vec, v3);
  }
  return ShouldDoSharpTurn;
}

/*
==============
AIScriptedInterface::CheckStop
==============
*/
bool AIScriptedInterface::CheckStop(AIScriptedInterface *this, pathnode_t *node)
{
  sentient_s *TargetSentient; 
  gentity_s *ent; 
  float v6; 
  float v7; 
  float v8; 
  double v9; 
  ai_scripted_t *m_pAI; 
  bool HasPath; 
  __int128 v12; 
  float v13; 
  ai_scripted_t *v14; 
  ai_scripted_t *v15; 
  float v16; 
  float v17; 
  __int128 v18; 
  float v19; 
  float v20; 
  float v21; 
  float v26; 
  float v27; 
  double PathDistToGoal; 
  float pathEnemyLookahead; 
  pathnode_t *pClaimedNode; 
  vec3_t pos; 
  vec3_t v32; 
  vec3_t vPoint; 

  TargetSentient = AICommonInterface::GetTargetSentient(this);
  if ( TargetSentient )
  {
    if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 4388, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
      __debugbreak();
    ent = this->m_pAI->ent;
    v6 = TargetSentient->ent->r.currentOrigin.v[0] - ent->r.currentOrigin.v[0];
    v7 = TargetSentient->ent->r.currentOrigin.v[1] - ent->r.currentOrigin.v[1];
    v8 = TargetSentient->ent->r.currentOrigin.v[2] - ent->r.currentOrigin.v[2];
    v9 = ((double (__fastcall *)(AIScriptedInterface *))this->GetPathEnemyFightDist)(this);
    if ( (float)((float)(v7 * v7) + (float)(v6 * v6)) < (float)(*(float *)&v9 * *(float *)&v9) )
    {
      m_pAI = this->m_pAI;
      if ( COERCE_FLOAT(LODWORD(v8) & _xmm) <= m_pAI->codeGoal.height && (!node || !AICommonInterface::PointNearNode(this, &m_pAI->ent->r.currentOrigin, node)) && !this->m_pAI->blackboard.m_bMeleeChargeRequested && !AIScriptedInterface::IsDoingReacquire(this) && AICommonInterface::RecentlySeeSentient(this, TargetSentient, 3000) && AIScriptedInterface::CanShootEnemy(this, 100, 0, 0) )
      {
        HasPath = AICommonInterface::HasPath(this);
        if ( HasPath )
        {
          this->m_pAI->pNavigator->GetNextCorner(this->m_pAI->pNavigator, &pos);
          v12 = LODWORD(pos.v[1]);
          v13 = pos.v[0];
        }
        else if ( node )
        {
          pathnode_t::GetPos(node, &pos);
          v12 = LODWORD(pos.v[1]);
          v13 = pos.v[0];
        }
        else
        {
          v14 = this->m_pAI;
          v13 = v14->codeGoal.pos.v[0];
          pos.v[0] = v13;
          v12 = LODWORD(v14->codeGoal.pos.v[1]);
          *(_QWORD *)&pos.y = *(_QWORD *)&v14->codeGoal.pos.y;
        }
        v15 = this->m_pAI;
        v16 = v13 - v15->ent->r.currentOrigin.v[0];
        v18 = v12;
        v17 = *(float *)&v12 - v15->ent->r.currentOrigin.v[1];
        v19 = v13 - TargetSentient->ent->r.currentOrigin.v[0];
        v20 = *(float *)&v12 - TargetSentient->ent->r.currentOrigin.v[1];
        v21 = (float)((float)(v17 * v17) + (float)(v16 * v16)) + (float)((float)(pos.v[2] - v15->ent->r.currentOrigin.v[2]) * (float)(pos.v[2] - v15->ent->r.currentOrigin.v[2]));
        *(float *)&v18 = fsqrt(v21);
        _XMM2 = v18;
        __asm
        {
          vcmpless xmm0, xmm2, cs:__real@80000000
          vblendvps xmm0, xmm2, xmm1, xmm0
        }
        if ( (float)((float)((float)(v17 * (float)(1.0 / *(float *)&_XMM0)) * v20) + (float)((float)(v16 * (float)(1.0 / *(float *)&_XMM0)) * v19)) > 0.0 && (float)((float)(v20 * v20) + (float)(v19 * v19)) < v21 )
        {
          if ( !v15->useEnemyGoal )
          {
            v15->useEnemyGoal = 1;
            AIScriptedInterface::UpdateGoalPos(this);
          }
          return 1;
        }
        if ( HasPath )
        {
          if ( node )
          {
            pathnode_t::GetPos(node, &v32);
            v15 = this->m_pAI;
          }
          if ( !v15->useEnemyGoal && AICommonInterface::PointAtGoal(this, &v15->ent->r.currentOrigin, &v15->codeGoal) )
          {
            if ( !node )
              return 1;
            v26 = v32.v[0] - TargetSentient->ent->r.currentOrigin.v[0];
            v27 = v32.v[1] - TargetSentient->ent->r.currentOrigin.v[1];
            PathDistToGoal = Nav_GetPathDistToGoal(this->m_pAI->pNavigator);
            if ( *(float *)&PathDistToGoal > fsqrt((float)(v27 * v27) + (float)(v26 * v26)) )
              return 1;
          }
          if ( !this->UseEnemyGoal(this) )
          {
            pathEnemyLookahead = this->m_pAI->pathEnemyLookahead;
            if ( !AIScriptedInterface::HadPath(this) )
              pathEnemyLookahead = pathEnemyLookahead + 256.0;
            if ( Nav_IsPointNearPath(this->m_pAI->pNavigator, &TargetSentient->ent->r.currentOrigin, pathEnemyLookahead, this->m_pAI->pathEnemyFightDist) )
            {
              this->m_pAI->useEnemyGoal = 1;
              AIScriptedInterface::UpdateGoalPos(this);
              pClaimedNode = this->m_pAI->sentient->pClaimedNode;
              if ( pClaimedNode )
              {
                pathnode_t::GetPos(pClaimedNode, &vPoint);
                if ( AICommonInterface::PointAtGoal(this, &vPoint, &this->m_pAI->codeGoal) )
                  return node != this->m_pAI->sentient->pClaimedNode;
              }
              if ( !node || !AICommonInterface::PointAtGoal(this, &v32, &this->m_pAI->codeGoal) )
                return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}

/*
==============
AIScriptedInterface::CheckWeaponDrop
==============
*/
void AIScriptedInterface::CheckWeaponDrop(AIScriptedInterface *this, ActorDelayedWeaponDrop *weapDrop)
{
  DelayedWeapDropState state; 
  gentity_s *v5; 
  tmat43_t<vec3_t> matrix; 

  state = weapDrop->state;
  if ( state == ACTOR_WEAP_DROP_GRAB_INITIAL_VALUE )
  {
    G_Items_GetStateFromTag(this->m_pAI->ent, weapDrop->tagName, NULL, &weapDrop->matrix, 0);
    weapDrop->time = level.time;
    weapDrop->state = ACTOR_WEAP_DROP_FINISH;
  }
  else if ( state == ACTOR_WEAP_DROP_FINISH && level.time > weapDrop->time )
  {
    G_Items_GetStateFromTag(this->m_pAI->ent, weapDrop->tagName, NULL, &matrix, 0);
    v5 = G_Items_DropWeapon(this->m_pAI->ent, &weapDrop->weapon, 0, 1, &matrix);
    if ( v5 )
    {
      BG_WeaponDef(&weapDrop->weapon, 0);
      G_Items_EnablePhysicsDelayed(v5, this->m_pAI->ent, weapDrop->time, &weapDrop->matrix, weapDrop->tagName);
      GScr_AddEntity(v5);
      GScr_Notify(this->m_pAI->ent, scr_const.weapon_dropped, 1u);
    }
    weapDrop->state = ACTOR_WEAP_DROP_NONE;
  }
}

/*
==============
AIScriptedInterface::CheckWeaponDrops
==============
*/
void AIScriptedInterface::CheckWeaponDrops(AIScriptedInterface *this)
{
  ai_scripted_t *m_pAI; 
  ActorDelayedWeaponDrop *i; 
  DelayedWeapDropState state; 
  gentity_s *v5; 
  tmat43_t<vec3_t> matrix; 

  m_pAI = this->m_pAI;
  for ( i = m_pAI->weapDrops; i != (ActorDelayedWeaponDrop *)&m_pAI->speedScaleMultiplier; ++i )
  {
    state = i->state;
    if ( state == ACTOR_WEAP_DROP_GRAB_INITIAL_VALUE )
    {
      G_Items_GetStateFromTag(m_pAI->ent, i->tagName, NULL, &i->matrix, 0);
      i->time = level.time;
      i->state = ACTOR_WEAP_DROP_FINISH;
    }
    else if ( state == ACTOR_WEAP_DROP_FINISH && level.time > i->time )
    {
      G_Items_GetStateFromTag(m_pAI->ent, i->tagName, NULL, &matrix, 0);
      v5 = G_Items_DropWeapon(this->m_pAI->ent, &i->weapon, 0, 1, &matrix);
      if ( v5 )
      {
        BG_WeaponDef(&i->weapon, 0);
        G_Items_EnablePhysicsDelayed(v5, this->m_pAI->ent, i->time, &i->matrix, i->tagName);
        GScr_AddEntity(v5);
        GScr_Notify(this->m_pAI->ent, scr_const.weapon_dropped, 1u);
      }
      i->state = ACTOR_WEAP_DROP_NONE;
    }
    m_pAI = this->m_pAI;
  }
}

/*
==============
AIScriptedInterface::ClearMoveHistory
==============
*/
void AIScriptedInterface::ClearMoveHistory(AIScriptedInterface *this)
{
  ai_scripted_t *m_pAI; 

  m_pAI = this->m_pAI;
  *(_QWORD *)m_pAI->moveHistory[0].v = 0i64;
  *(_QWORD *)&m_pAI->moveHistory[0].z = 0i64;
  *(_QWORD *)&m_pAI->moveHistory[1].y = 0i64;
  *(_QWORD *)m_pAI->moveHistory[2].v = 0i64;
  *(_QWORD *)&m_pAI->moveHistory[2].z = 0i64;
  *(_QWORD *)&m_pAI->moveHistory[3].y = 0i64;
  *(_QWORD *)m_pAI->moveHistory[4].v = 0i64;
  *(_QWORD *)&m_pAI->moveHistory[4].z = 0i64;
  *(_QWORD *)&m_pAI->moveHistory[5].y = 0i64;
  *(_QWORD *)m_pAI->moveHistory[6].v = 0i64;
  *(_QWORD *)&m_pAI->moveHistory[6].z = 0i64;
  *(_QWORD *)&m_pAI->moveHistory[7].y = 0i64;
  *(_QWORD *)m_pAI->moveHistory[8].v = 0i64;
  *(_QWORD *)&m_pAI->moveHistory[8].z = 0i64;
  *(_QWORD *)&m_pAI->moveHistory[9].y = 0i64;
  m_pAI->moveHistoryIndex = 0;
}

/*
==============
AIActorInterface::ClearPileUp
==============
*/
void AIActorInterface::ClearPileUp(AIActorInterface *this)
{
  this->m_pAI->pPileUpActor = NULL;
  this->m_pAI->pPileUpEnt = NULL;
}

/*
==============
AIScriptedInterface::ClearUseEnemyGoal
==============
*/
void AIScriptedInterface::ClearUseEnemyGoal(AIScriptedInterface *this)
{
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 1119, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  this->m_pAI->useEnemyGoal = 0;
  AIScriptedInterface::UpdateGoalPos(this);
}

/*
==============
AIScriptedInterface::Controller
==============
*/
void AIScriptedInterface::Controller(const gentity_s *self, DObjPartBits *partBits)
{
  AIScriptedInterface *m_pAI; 
  __int64 v5; 
  double ActorProneFraction; 
  DObjAnimMat *RotTransArray; 
  float v8; 
  AIWrapper v9; 

  AIWrapper::AIWrapper(&v9, self);
  m_pAI = v9.m_pAI;
  if ( !v9.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 3845, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  v5 = m_pAI->GetAI(m_pAI);
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 3849, ASSERT_TYPE_ASSERT, "( pAIScripted )", (const char *)&queryFormat, "pAIScripted") )
    __debugbreak();
  if ( BG_ActorIsProne((actor_prone_info_t *)(v5 + 2992), level.time) && SV_Game_DObjSetRotTransIndex(self, partBits, 0) )
  {
    ActorProneFraction = BG_GetActorProneFraction((actor_prone_info_t *)(v5 + 2992), level.time);
    RotTransArray = SV_Game_DObjGetRotTransArray(self);
    if ( RotTransArray )
    {
      v8 = (float)(*(float *)&ActorProneFraction * *(float *)(v5 + 3008)) * 0.0087266462;
      RotTransArray->quat.v[0] = 0.0;
      RotTransArray->quat.v[2] = 0.0;
      FastSinCos(v8, &RotTransArray->quat.v[1], &RotTransArray->quat.v[3]);
      DObjSetTrans(RotTransArray, &vec3_origin);
    }
  }
}

/*
==============
AIScriptedInterface::DamageBlockedByShield
==============
*/
bool AIScriptedInterface::DamageBlockedByShield(AIScriptedInterface *this, const vec3_t *damageDir)
{
  ai_scripted_t *m_pAI; 
  vec3_t forward; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 1965, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !damageDir )
    return 0;
  m_pAI = this->m_pAI;
  if ( m_pAI->combat.frontShieldAngleCos >= 1.0 )
    return 0;
  AngleVectors(&m_pAI->ent->r.currentAngles, &forward, NULL, NULL);
  return COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(forward.v[1] * damageDir->v[1]) + (float)(forward.v[0] * damageDir->v[0])) ^ _xmm) > this->m_pAI->combat.frontShieldAngleCos;
}

/*
==============
AIScriptedInterface::Die
==============
*/
void AIScriptedInterface::Die(AIScriptedInterface *this, const gentity_s *pInflictor, gentity_s *pAttacker, int iDamage, int iDamageFlags, int iMod, const Weapon *r_Weapon, bool isAlternate, const vec3_t *vDir, const hitLocation_t hitLoc)
{
  actor_s *actor; 
  gentity_s *v15; 
  ai_scripted_t *m_pAI; 
  gentity_s *v17; 
  double v18; 
  scr_string_t HitLocationString; 
  scrContext_t *v22; 
  __int64 v23; 
  __int64 v24; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 2072, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  actor = this->m_pAI->ent->actor;
  if ( actor && !actor->inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 2073, ASSERT_TYPE_ASSERT, "( !m_pAI->ent->actor || m_pAI->ent->actor->inuse )", (const char *)&queryFormat, "!m_pAI->ent->actor || m_pAI->ent->actor->inuse") )
    __debugbreak();
  if ( ((LODWORD(vDir->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(vDir->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(vDir->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 2074, ASSERT_TYPE_SANITY, "( !IS_NAN( ( vDir )[0] ) && !IS_NAN( ( vDir )[1] ) && !IS_NAN( ( vDir )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( vDir )[0] ) && !IS_NAN( ( vDir )[1] ) && !IS_NAN( ( vDir )[2] )") )
    __debugbreak();
  if ( !this->m_pAI->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 2076, ASSERT_TYPE_ASSERT, "( m_pAI->ent )", (const char *)&queryFormat, "m_pAI->ent") )
    __debugbreak();
  if ( this->m_pAI->ent->health > 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 2077, ASSERT_TYPE_ASSERT, "( ( m_pAI->ent->health <= 0 ) )", "%s\n\t( m_pAI->ent->health ) = %i", "( m_pAI->ent->health <= 0 )", this->m_pAI->ent->health) )
    __debugbreak();
  if ( this->m_pAI->stateLevel >= 6 )
  {
    LODWORD(v24) = 6;
    LODWORD(v23) = this->m_pAI->stateLevel;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 2078, ASSERT_TYPE_ASSERT, "(unsigned)( m_pAI->stateLevel ) < (unsigned)( ( sizeof( *array_counter( m_pAI->eState ) ) + 0 ) )", "m_pAI->stateLevel doesn't index ARRAY_COUNT( m_pAI->eState )\n\t%i not in [0, %i)", v23, v24) )
      __debugbreak();
  }
  if ( (unsigned int)(this->m_pAI->eState[this->m_pAI->stateLevel] - 1) > 8 )
  {
    LODWORD(v24) = this->m_pAI->eState[this->m_pAI->stateLevel];
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 2079, ASSERT_TYPE_ASSERT, "( ( m_pAI->eState[m_pAI->stateLevel] > AIS_INVALID && m_pAI->eState[m_pAI->stateLevel] < AIS_COUNT ) )", "%s\n\t( m_pAI->eState[m_pAI->stateLevel] ) = %i", "( m_pAI->eState[m_pAI->stateLevel] > AIS_INVALID && m_pAI->eState[m_pAI->stateLevel] < AIS_COUNT )", v24) )
      __debugbreak();
  }
  v15 = this->GetEntity(this);
  m_pAI = this->m_pAI;
  v17 = v15;
  if ( m_pAI->eState[m_pAI->stateLevel] != AIS_DEATH )
  {
    m_pAI->painDeath.iDamageTaken = iDamage;
    this->m_pAI->painDeath.damageDir = *vDir;
    v18 = vectoyaw((const vec2_t *)vDir);
    _XMM1 = 0i64;
    __asm { vroundss xmm4, xmm1, xmm3, 1 }
    this->m_pAI->painDeath.iDamageYaw = (int)(float)((float)((float)((float)(*(float *)&v18 - v17->r.currentAngles.v[1]) * 0.0027777778) - *(float *)&_XMM4) * 360.0);
    HitLocationString = G_Combat_GetHitLocationString(hitLoc);
    Scr_SetString(&this->m_pAI->painDeath.damageHitLoc, HitLocationString);
    if ( pInflictor )
    {
      v22 = ScriptContext_Server();
      GScr_Weapon_SetWeapon(v22, &this->m_pAI->painDeath.damageWeapon, r_Weapon, isAlternate);
      this->m_pAI->painDeath.damageMOD = iMod;
    }
    AIScriptedInterface::ForceState(this, AIS_DEATH);
    this->m_pAI->Physics.bIsAlive = 0;
    EntHandle::setEnt(&v17->sentient->lastAttacker, pAttacker);
    Scr_SetString(&v17->targetname, (scr_string_t)0);
    AIScriptedInterface::KillAnimScript(this);
  }
}

/*
==============
AIActorInterface::DissociateSentient
==============
*/
void AIActorInterface::DissociateSentient(AIActorInterface *this, sentient_s *other)
{
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 1009, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 1010, ASSERT_TYPE_ASSERT, "( m_pAI->sentient )", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  if ( this->m_pAI->sentient == other && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 1011, ASSERT_TYPE_ASSERT, "( m_pAI->sentient != other )", (const char *)&queryFormat, "m_pAI->sentient != other") )
    __debugbreak();
  if ( other->eTeam != TEAM_FIVE && Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 1012, ASSERT_TYPE_ASSERT, "( other->eTeam == TEAM_DEAD || !Com_GameMode_SupportsFeature( Com_GameMode_Feature::TEAMS_SINGLEPLAYER ) )", (const char *)&queryFormat, "other->eTeam == TEAM_DEAD || !Com_GameMode_SupportsFeature( Com_GameMode_Feature::TEAMS_SINGLEPLAYER )") )
    __debugbreak();
  AIScriptedInterface::DissociateSentient(this, other);
}

/*
==============
AIScriptedInterface::DoMove
==============
*/
void AIScriptedInterface::DoMove(AIScriptedInterface *this)
{
  ai_scripted_t *m_pAI; 
  gentity_s *ent; 
  ai_scripted_t *v4; 
  gentity_s *v5; 
  ai_scripted_t *v6; 
  unsigned __int16 groundEntNum; 
  ai_scripted_t *v9; 
  float v10; 
  float v11; 
  float v12; 
  ai_scripted_t *v13; 
  bool v14; 
  ai_scripted_t *v15; 
  float v16; 
  const dvar_t *v17; 
  bool HasPath; 
  ai_scripted_t *v19; 
  char v20; 
  ai_scripted_t *v21; 
  const AINavigator *pNavigator; 
  BOOL v23; 
  ai_scripted_t *v24; 
  ai_scripted_t *v25; 
  ai_scripted_t *v26; 
  ai_scripted_t *v27; 
  int v28; 
  ai_scripted_t *v29; 
  gentity_s *v30; 
  __int128 v31; 
  ai_scripted_t *v35; 
  gentity_s *v36; 
  int v37; 
  ai_scripted_t *v38; 
  gentity_s *v39; 
  ai_scripted_t *v40; 
  gentity_s *v41; 
  vec3_t *p_currentOrigin; 
  float v43; 
  float v44; 
  float v45; 
  pathnode_t *v46; 
  int v48; 
  __int64 v49; 
  pathsort_s *p_nodes; 
  pathnode_t *node; 
  __int128 v52; 
  ai_scripted_t *v54; 
  gentity_s *v55; 
  __int128 v57; 
  ai_scripted_t *v59; 
  ai_scripted_t *v60; 
  gentity_s *v61; 
  ai_scripted_t *v62; 
  vec3_t angles; 
  tmat33_t<vec3_t> axis; 
  vec3_t pos; 
  pathsort_s nodes; 

  Profile_Begin(260);
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 3594, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 3595, ASSERT_TYPE_ASSERT, "( m_pAI->ent )", (const char *)&queryFormat, "m_pAI->ent") )
    __debugbreak();
  if ( this->m_pAI->ent->s.number != this->m_pAI->Physics.iEntNum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 3596, ASSERT_TYPE_ASSERT, "( m_pAI->ent->s.number == m_pAI->Physics.iEntNum )", (const char *)&queryFormat, "m_pAI->ent->s.number == m_pAI->Physics.iEntNum") )
    __debugbreak();
  m_pAI = this->m_pAI;
  ent = m_pAI->ent;
  if ( (m_pAI->Physics.bounds.midPoint.v[0] != m_pAI->ent->r.box.midPoint.v[0] || m_pAI->Physics.bounds.midPoint.v[1] != ent->r.box.midPoint.v[1] || m_pAI->Physics.bounds.midPoint.v[2] != ent->r.box.midPoint.v[2]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 3597, ASSERT_TYPE_ASSERT, "( Vec3Compare( m_pAI->ent->r.box.midPoint, m_pAI->Physics.bounds.midPoint ) )", (const char *)&queryFormat, "Vec3Compare( m_pAI->ent->r.box.midPoint, m_pAI->Physics.bounds.midPoint )") )
    __debugbreak();
  v4 = this->m_pAI;
  v5 = v4->ent;
  if ( (v4->Physics.bounds.halfSize.v[0] != v4->ent->r.box.halfSize.v[0] || v4->Physics.bounds.halfSize.v[1] != v5->r.box.halfSize.v[1] || v4->Physics.bounds.halfSize.v[2] != v5->r.box.halfSize.v[2]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 3598, ASSERT_TYPE_ASSERT, "( Vec3Compare( m_pAI->ent->r.box.halfSize, m_pAI->Physics.bounds.halfSize ) )", (const char *)&queryFormat, "Vec3Compare( m_pAI->ent->r.box.halfSize, m_pAI->Physics.bounds.halfSize )") )
    __debugbreak();
  if ( this->m_pAI->Physics.ePhysicsType == AIPHYS_BAD && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 3599, ASSERT_TYPE_ASSERT, "( m_pAI->Physics.ePhysicsType != AIPHYS_BAD )", (const char *)&queryFormat, "m_pAI->Physics.ePhysicsType != AIPHYS_BAD") )
    __debugbreak();
  v6 = this->m_pAI;
  groundEntNum = v6->Physics.groundEntNum;
  _XMM10 = 0i64;
  if ( v6->Physics.ePhysicsType != AIPHYS_NORMAL_ABSOLUTE && v6->Physics.ePhysicsType != AIPHYS_NOGRAVITY_ABSOLUTE && v6->Physics.ePhysicsType != AIPHYS_ZONLY_PHYSICS_ABSOLUTE )
  {
    *(_QWORD *)angles.v = *(_QWORD *)v6->orientation.vDesiredAngles.v;
    angles.v[2] = 0.0;
    if ( this->Is3D(this) )
      angles.v[2] = this->m_pAI->orientation.vDesiredAngles.v[2];
    AnglesToAxis(&angles, &axis);
    v9 = this->m_pAI;
    v10 = v9->Physics.vWishDelta.v[0];
    v11 = v9->Physics.vWishDelta.v[1];
    v12 = v9->Physics.vWishDelta.v[2];
    v9->Physics.vWishDelta.v[0] = v10 * axis.m[0].v[0];
    v9->Physics.vWishDelta.v[1] = v10 * axis.m[0].v[1];
    v9->Physics.vWishDelta.v[2] = v10 * axis.m[0].v[2];
    v13 = this->m_pAI;
    v13->Physics.vWishDelta.v[0] = (float)(v11 * axis.m[1].v[0]) + v13->Physics.vWishDelta.v[0];
    v13->Physics.vWishDelta.v[1] = (float)(v11 * axis.m[1].v[1]) + v13->Physics.vWishDelta.v[1];
    v13->Physics.vWishDelta.v[2] = (float)(v11 * axis.m[1].v[2]) + v13->Physics.vWishDelta.v[2];
    v14 = !this->Is3D(this);
    v15 = this->m_pAI;
    if ( v14 )
    {
      v16 = v12 + v15->Physics.vWishDelta.v[2];
    }
    else
    {
      v15->Physics.vWishDelta.v[0] = (float)(v12 * axis.m[2].v[0]) + v15->Physics.vWishDelta.v[0];
      v15->Physics.vWishDelta.v[1] = (float)(v12 * axis.m[2].v[1]) + v15->Physics.vWishDelta.v[1];
      v16 = (float)(v12 * axis.m[2].v[2]) + v15->Physics.vWishDelta.v[2];
    }
    v15->Physics.vWishDelta.v[2] = v16;
  }
  v17 = DVARFLT_bg_gravity;
  if ( !DVARFLT_bg_gravity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_gravity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v17);
  this->m_pAI->Physics.fGravity = v17->current.value;
  this->m_pAI->Physics.pathGoingDown = AINavigator::IsGoingDown(this->m_pAI->pNavigator);
  HasPath = AICommonInterface::HasPath(this);
  if ( HasPath && (v19 = this->m_pAI, v19->eAnimMode == AI_ANIM_MOVE_CODE) )
  {
    v20 = 1;
  }
  else
  {
    v19 = this->m_pAI;
    v20 = 0;
  }
  v19->Physics.bFollowingPath = v20;
  v21 = this->m_pAI;
  pNavigator = v21->pNavigator;
  if ( pNavigator )
  {
    if ( v21->Physics.bFollowingPath && Nav_IsStraightLineToGoal(pNavigator) )
    {
      v23 = 0;
    }
    else
    {
      if ( !AIScriptedInterface::IsInCoverArrival(this) )
      {
        v24 = this->m_pAI;
        if ( v24->sentient->pClaimedNode )
        {
          if ( AIScriptedInterface::KeepClaimedNode(this) )
          {
            v23 = 0;
            goto LABEL_51;
          }
          v24 = this->m_pAI;
        }
        v23 = !G_MotionWarp_Active(v24->ent->s.number);
        goto LABEL_51;
      }
      v23 = 0;
    }
  }
  else
  {
    v23 = 0;
  }
LABEL_51:
  this->m_pAI->Physics.navPhysicsState = v23;
  AIScriptedInterface::GetGroundTraceOrigin(this, &this->m_pAI->Physics.groundTraceOrigin);
  AIScriptedInterface::AttemptMoveAway(this);
  v25 = this->m_pAI;
  if ( v25->eAnimMode == AI_ANIM_MOVE_CODE && v25->moveMode && HasPath && !this->GetCloseEnt(this) )
  {
$try_path:
    Sys_ProfBeginNamedEvent(0xFF808080, "AIPhysicsAndDodge");
    if ( (this->m_pAI->eAnimMode != AI_ANIM_MOVE_CODE || !AICommonInterface::HasPath(this)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 3112, ASSERT_TYPE_ASSERT, "( m_pAI->eAnimMode == AI_ANIM_MOVE_CODE && HasPath() )", (const char *)&queryFormat, "m_pAI->eAnimMode == AI_ANIM_MOVE_CODE && HasPath()") )
      __debugbreak();
    this->m_pAI->pNavigator->GetNextCorner(this->m_pAI->pNavigator, &angles);
    v29 = this->m_pAI;
    v30 = v29->ent;
    v31 = LODWORD(angles.v[0]);
    angles.v[0] = angles.v[0] - v29->ent->r.currentOrigin.v[0];
    angles.v[1] = angles.v[1] - v30->r.currentOrigin.v[1];
    angles.v[2] = angles.v[2] - v30->r.currentOrigin.v[2];
    *(float *)&v31 = fsqrt((float)((float)(angles.v[0] * angles.v[0]) + (float)(angles.v[1] * angles.v[1])) + (float)(angles.v[2] * angles.v[2]));
    _XMM4 = v31;
    __asm
    {
      vcmpless xmm0, xmm4, cs:__real@80000000
      vblendvps xmm1, xmm4, xmm2, xmm0
    }
    v29->Physics.vPathDir.v[0] = angles.v[0] * (float)(1.0 / *(float *)&_XMM1);
    v29->Physics.vPathDir.v[1] = (float)(1.0 / *(float *)&_XMM1) * angles.v[1];
    v29->Physics.vPathDir.v[2] = (float)(1.0 / *(float *)&_XMM1) * angles.v[2];
    v35 = this->m_pAI;
    v36 = v35->ent;
    v35->Physics.vOrigin.v[0] = v35->ent->r.currentOrigin.v[0];
    v35->Physics.vOrigin.v[1] = v36->r.currentOrigin.v[1];
    v35->Physics.vOrigin.v[2] = v36->r.currentOrigin.v[2];
    v37 = AIScriptedInterface::Physics_DoMovement(&this->m_pAI->Physics);
    this->m_pAI->dodgeMode = NONE;
    if ( v37 )
    {
      Sys_ProfEndNamedEvent();
    }
    else
    {
      Sys_ProfEndNamedEvent();
      this->m_pAI->Physics.vVelocity.v[2] = 0.0;
      v38 = this->m_pAI;
      v39 = v38->ent;
      v38->Physics.vOrigin.v[0] = v38->ent->r.currentOrigin.v[0];
      v38->Physics.vOrigin.v[1] = v39->r.currentOrigin.v[1];
      v38->Physics.vOrigin.v[2] = v39->r.currentOrigin.v[2];
    }
    goto LABEL_82;
  }
  v26 = this->m_pAI;
  *(_QWORD *)v26->Physics.vPathDir.v = 0i64;
  v26->Physics.vPathDir.v[2] = 0.0;
  v14 = !AIScriptedInterface::ShouldMoveAwayFromCloseEnt(this);
  v27 = this->m_pAI;
  if ( v14 )
  {
    v27->dodgeMode = NONE;
    v40 = this->m_pAI;
    v41 = v40->ent;
    v40->Physics.vOrigin.v[0] = v40->ent->r.currentOrigin.v[0];
    v40->Physics.vOrigin.v[1] = v41->r.currentOrigin.v[1];
    v40->Physics.vOrigin.v[2] = v41->r.currentOrigin.v[2];
    v28 = AIScriptedInterface::Physics_DoMovement(&this->m_pAI->Physics);
  }
  else
  {
    v27->Physics.navPhysicsState = NAVPHYS_DISTANCECLIP;
    v28 = AIScriptedInterface::PhysicsMoveAway(this);
    if ( !v28 && this->m_pAI->eAnimMode == AI_ANIM_MOVE_CODE && HasPath )
      goto $try_path;
    if ( AICommonInterface::HasPath(this) && (float)((float)(this->m_pAI->Physics.vVelocity.v[0] * this->m_pAI->Physics.vVelocity.v[0]) + (float)(this->m_pAI->Physics.vVelocity.v[1] * this->m_pAI->Physics.vVelocity.v[1])) <= 1.0 )
      this->ClearPath(this);
  }
  if ( !v28 )
  {
    Profile_Begin(277);
    p_currentOrigin = &this->m_pAI->ent->r.currentOrigin;
    v43 = p_currentOrigin->v[0];
    v44 = this->m_pAI->ent->r.currentOrigin.v[1];
    v45 = this->m_pAI->ent->r.currentOrigin.v[2];
    v46 = NULL;
    *(float *)&_XMM6 = FLOAT_3_4028235e38;
    v48 = Path_NodesInCylinder(p_currentOrigin, NULL, 384.0, 128.0, &nodes, 64, -1);
    v49 = v48;
    if ( v48 > 0 )
    {
      p_nodes = &nodes;
      do
      {
        node = p_nodes->node;
        pathnode_t::GetPos(p_nodes->node, &angles);
        v52 = LODWORD(angles.v[1]);
        *(float *)&v52 = (float)((float)((float)(angles.v[1] - v44) * (float)(angles.v[1] - v44)) + (float)((float)(angles.v[0] - v43) * (float)(angles.v[0] - v43))) + (float)((float)(angles.v[2] - v45) * (float)(angles.v[2] - v45));
        _XMM5 = v52;
        if ( *(float *)&v52 > *(float *)&_XMM6 )
          node = v46;
        v46 = node;
        ++p_nodes;
        __asm { vminss  xmm6, xmm5, xmm6 }
        --v49;
      }
      while ( v49 );
    }
    Profile_EndInternal(NULL);
    if ( v46 )
    {
      pathnode_t::GetPos(v46, &pos);
      v54 = this->m_pAI;
      v55 = v54->ent;
      v57 = LODWORD(pos.v[2]);
      *(float *)&v57 = pos.v[2] - v54->ent->r.currentOrigin.v[2];
      _XMM2 = v57;
      if ( *(float *)&v57 <= 8.0 )
      {
        if ( *(float *)&v57 < 0.0 )
        {
          __asm
          {
            vcmpltss xmm1, xmm2, cs:__real@c1900000
            vblendvps xmm2, xmm10, xmm0, xmm1
          }
        }
      }
      else
      {
        *(float *)&_XMM2 = FLOAT_8_0;
      }
      v54->Physics.vOrigin.v[0] = v55->r.currentOrigin.v[0];
      v54->Physics.vOrigin.v[1] = v55->r.currentOrigin.v[1];
      v54->Physics.vOrigin.v[2] = v55->r.currentOrigin.v[2];
      this->m_pAI->Physics.vOrigin.v[2] = *(float *)&_XMM2 + this->m_pAI->Physics.vOrigin.v[2];
      this->m_pAI->Physics.vVelocity.v[2] = 0.0;
    }
  }
LABEL_82:
  v59 = this->m_pAI;
  v60 = v59;
  if ( v59->Physics.stepMove && !v59->Physics.bJumping )
  {
    ((void (__fastcall *)(AIScriptedInterface *, ai_scripted_t *))this->SetStepMoveCounter)(this, v59);
    v60 = this->m_pAI;
  }
  v61 = v60->ent;
  v61->r.currentOrigin.v[0] = v60->Physics.vOrigin.v[0];
  v61->r.currentOrigin.v[1] = v60->Physics.vOrigin.v[1];
  v61->r.currentOrigin.v[2] = v60->Physics.vOrigin.v[2];
  this->m_pAI->Physics.ePhysicsType = AIPHYS_BAD;
  this->m_pAI->ent->s.groundEntityNum = this->m_pAI->Physics.groundEntNum;
  Nav_SetPos(this->m_pAI->pNavigator, &this->m_pAI->ent->r.currentOrigin);
  if ( AICommonInterface::IsInBadplace(this) )
    AICommonInterface::MarkInBadPlace(this);
  else
    AICommonInterface::MarkNotInBadPlace(this);
  v62 = this->m_pAI;
  if ( groundEntNum != v62->Physics.groundEntNum )
    GScr_Notify(v62->ent, scr_const.groundEntChanged, 0);
  Profile_EndInternal(NULL);
}

/*
==============
AIScriptedInterface::DoesPathCrossPlane
==============
*/
__int64 AIScriptedInterface::DoesPathCrossPlane(AIScriptedInterface *this, vec2_t planeNormal, float planeDistance)
{
  int v9; 
  __int64 v10; 
  __int64 v11; 
  float *v12; 
  unsigned __int8 v13; 
  char ptr[400]; 

  if ( !AICommonInterface::HasPath(this) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 5441, ASSERT_TYPE_ASSERT, "(HasPath())", (const char *)&queryFormat, "HasPath()") )
    __debugbreak();
  _XMM6 = LODWORD(FLOAT_256_0);
  *(double *)&_XMM0 = AIScriptedInterface::GetDefaultSpeed(this);
  __asm
  {
    vcmpltss xmm2, xmm0, cs:__real@42a00000
    vblendvps xmm6, xmm6, xmm1, xmm2
  }
  `eh vector constructor iterator'(ptr, 0x28ui64, 0xAui64, (void (__fastcall *)(void *))nav_cornerdata_t::nav_cornerdata_t, (void (__fastcall *)(void *))nav_cornerdata_t::~nav_cornerdata_t);
  v9 = ((__int64 (__fastcall *)(AINavigator *, char *, __int64))this->m_pAI->pNavigator->GetNextNCorners)(this->m_pAI->pNavigator, ptr, 10i64);
  if ( v9 <= 0 )
  {
LABEL_8:
    v13 = 0;
  }
  else
  {
    v10 = v9;
    v11 = 0i64;
    v12 = (float *)ptr;
    while ( (float)((float)((float)((float)(planeNormal.v[1] * this->m_pAI->ent->r.currentOrigin.v[1]) + (float)(planeNormal.v[0] * this->m_pAI->ent->r.currentOrigin.v[0])) - planeDistance) * (float)((float)((float)(planeNormal.v[1] * v12[1]) + (float)(planeNormal.v[0] * *v12)) - planeDistance)) >= 0.0 )
    {
      ++v11;
      v12 += 10;
      if ( v11 >= v10 )
        goto LABEL_8;
    }
    v13 = 1;
  }
  `eh vector destructor iterator'(ptr, 0x28ui64, 0xAui64, (void (__fastcall *)(void *))nav_cornerdata_t::~nav_cornerdata_t);
  return v13;
}

/*
==============
AIScriptedInterface::DrawEngageDistCircle
==============
*/

void __fastcall AIScriptedInterface::DrawEngageDistCircle(AIScriptedInterface *this, const vec3_t *center, const vec2_t *dirFromCenter, double dist, const vec4_t *color, float infoScale, const char *label)
{
  float v10; 
  float v11; 
  const char *v12; 
  vec3_t xyz; 

  __asm { vmaxss  xmm6, xmm3, cs:__real@40800000 }
  G_DebugCircle(center, *(float *)&_XMM6, color, 0, 1, 0);
  v10 = (float)(*(float *)&_XMM6 * dirFromCenter->v[0]) + center->v[0];
  v11 = *(float *)&_XMM6 * dirFromCenter->v[1];
  xyz.v[2] = center->v[2];
  xyz.v[0] = v10;
  xyz.v[1] = v11 + center->v[1];
  v12 = j_va("%s: %3.f", label, *(float *)&_XMM6);
  G_Main_AddDebugString(&xyz, &colorWhite, infoScale, v12);
}

/*
==============
AIScriptedInterface::EnemyInPathFightDist
==============
*/
bool AIScriptedInterface::EnemyInPathFightDist(AIScriptedInterface *this, sentient_s *enemy)
{
  gentity_s *ent; 
  float v5; 
  float v6; 
  float v7; 
  double v8; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 4388, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !enemy && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 4389, ASSERT_TYPE_ASSERT, "( enemy )", (const char *)&queryFormat, "enemy") )
    __debugbreak();
  ent = this->m_pAI->ent;
  v5 = enemy->ent->r.currentOrigin.v[0] - ent->r.currentOrigin.v[0];
  v6 = enemy->ent->r.currentOrigin.v[1] - ent->r.currentOrigin.v[1];
  v7 = enemy->ent->r.currentOrigin.v[2] - ent->r.currentOrigin.v[2];
  v8 = ((double (__fastcall *)(AIScriptedInterface *))this->GetPathEnemyFightDist)(this);
  return (float)((float)(v6 * v6) + (float)(v5 * v5)) < (float)(*(float *)&v8 * *(float *)&v8) && COERCE_FLOAT(LODWORD(v7) & _xmm) <= this->m_pAI->codeGoal.height;
}

/*
==============
AIActorInterface::EntInfo
==============
*/
void AIActorInterface::EntInfo(gentity_s *pSelf, const vec3_t *source)
{
  AIScriptedInterface *m_pAI; 
  AIWrapper v4; 

  AIWrapper::AIWrapper(&v4, pSelf);
  m_pAI = v4.m_pAI;
  if ( !v4.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 2202, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  AIScriptedInterface::EntInfo(m_pAI, source);
}

/*
==============
AIScriptedInterface::EntInfo
==============
*/
void AIScriptedInterface::EntInfo(AIScriptedInterface *this, const vec3_t *source)
{
  __int128 v2; 
  __int128 v3; 
  __int128 v4; 
  gentity_s *v7; 
  const dvar_t *v8; 
  const dvar_t *v9; 
  const dvar_t *v10; 
  const dvar_t *v11; 
  bool v12; 
  const dvar_t *v13; 
  bool v14; 
  int integer; 
  const dvar_t *v16; 
  bool v17; 
  gentity_s *TargetEntity; 
  const sentient_s *TargetSentient; 
  sentient_info_t *v20; 
  vec4_t *v21; 
  const vec4_t *v22; 
  vec3_t *p_currentOrigin; 
  float v24; 
  float v25; 
  const dvar_t *v26; 
  float v27; 
  float v28; 
  const dvar_t *v29; 
  double EntInfoScale; 
  float v31; 
  const dvar_t *v32; 
  float v33; 
  const dvar_t *v34; 
  ai_scripted_t *m_pAI; 
  float v36; 
  float v37; 
  float fovDotBusy; 
  float v39; 
  vec3_t *p_dir; 
  vec3_t *v41; 
  const dvar_t *v42; 
  const dvar_t *v43; 
  ai_scripted_t *v44; 
  float v45; 
  gentity_s *v46; 
  GWeaponMap *Instance; 
  const Weapon *Weapon; 
  float v49; 
  const gentity_s *v50; 
  gentity_s *v51; 
  gentity_s *v52; 
  gentity_s *v53; 
  const dvar_t *v54; 
  ai_scripted_t *v55; 
  float v56; 
  gentity_s *ent; 
  float v58; 
  __int128 v59; 
  float v64; 
  float v65; 
  const char *v67; 
  const char *v70; 
  const char *v73; 
  const char *v76; 
  int v77; 
  ai_scripted_t *v78; 
  float v79; 
  float v80; 
  AINavigator *v81; 
  bool v82; 
  float v83; 
  ai_scripted_t *v84; 
  ai_scripted_t *v85; 
  ai_scripted_t *v86; 
  char v87; 
  const gentity_s *v88; 
  ai_scripted_t *v89; 
  ai_scripted_t *v90; 
  aiGoalSources v91; 
  vec4_t v92; 
  ai_scripted_t *v93; 
  const gentity_s *v94; 
  sentient_s *sentient; 
  const vec4_t *v96; 
  float v97; 
  const char *v98; 
  float v99; 
  float v100; 
  const char *v101; 
  scr_string_t v102; 
  const char *v103; 
  float v104; 
  const char *v105; 
  int v106; 
  scr_string_t targetname; 
  const char *v108; 
  const char *v109; 
  float v110; 
  const char *v111; 
  EntityTagInfo *tagInfo; 
  const char *v113; 
  const char *v114; 
  const vec4_t *v115; 
  const char *v116; 
  __int64 number; 
  scr_string_t v118; 
  const char *v119; 
  ai_scripted_t *v120; 
  unsigned int codeGoalSrc; 
  const char *v122; 
  const vec4_t *v123; 
  float v124; 
  ai_scripted_t *v125; 
  ai_reacquire_state_t reacquireState; 
  const char *v127; 
  const vec4_t *v128; 
  sentient_s *v129; 
  SentientHandle *p_pFavoriteEnemy; 
  sentient_s *v131; 
  const char *v132; 
  ai_scripted_t *v133; 
  unsigned int missCount; 
  unsigned int hitCount; 
  const char *v136; 
  const char *v137; 
  actor_s *v138; 
  const char *v139; 
  ai_scripted_t *v140; 
  const char *v141; 
  ai_scripted_t *v142; 
  GScrAnimScriptFunc *pAnimScriptFunc; 
  const char *v144; 
  const char *v145; 
  ai_scripted_t *v146; 
  __int64 eMode; 
  __int64 v148; 
  const char *v149; 
  const vec4_t *v150; 
  const char *v151; 
  gentity_s *v152; 
  const char *v153; 
  ai_scripted_t *v154; 
  const char *v155; 
  const char *v156; 
  ai_scripted_t *v157; 
  const char *v158; 
  scr_string_t AlertLevel; 
  const char *v160; 
  const char *v161; 
  ai_scripted_t *v162; 
  const char *v163; 
  const vec4_t *v164; 
  ai_scripted_t *v165; 
  sentient_info_t *v166; 
  const char *v167; 
  ai_scripted_t *v168; 
  const char *v169; 
  ai_scripted_t *v170; 
  const vec4_t *v171; 
  const char *v172; 
  SentientHandle *v173; 
  sentient_s *v174; 
  const char *v175; 
  ai_scripted_t *v176; 
  const char *v177; 
  float accuracy; 
  const char *v179; 
  sentient_s *v180; 
  const char *v181; 
  AINavigator *pNavigator; 
  AINavigator2D *v183; 
  char *fmt; 
  __int64 duration; 
  __int64 v186; 
  char v187; 
  bool enabled; 
  int v189; 
  actor_s *actor; 
  const sentient_s *v191; 
  vec3_t vEyePosOut; 
  vec3_t out; 
  vec3_t xyz; 
  vec3_t start; 
  tmat33_t<vec3_t> axis; 
  vec3_t end; 
  vec3_t v198; 
  __int128 v199; 
  __int128 v200; 
  __int128 v201; 

  v7 = this->GetEntity(this);
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 2259, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( !SV_Game_DObjExists(v7) )
    return;
  v8 = DVARINT_bg_entinfo;
  if ( !DVARINT_bg_entinfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_entinfo") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( v8->current.integer == 2 )
    goto LABEL_17;
  v9 = DVARINT_bg_entinfo;
  if ( !DVARINT_bg_entinfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_entinfo") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( v9->current.integer == 3 )
    goto LABEL_17;
  v10 = DVARINT_bg_entinfo;
  if ( !DVARINT_bg_entinfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_entinfo") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  v187 = 0;
  if ( v10->current.integer == 5 )
LABEL_17:
    v187 = 1;
  v11 = DVARINT_bg_entinfo;
  if ( !DVARINT_bg_entinfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_entinfo") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  v12 = v11->current.integer == 3;
  v13 = DVARINT_bg_entinfo;
  v14 = !v12;
  if ( !DVARINT_bg_entinfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_entinfo") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  integer = v13->current.integer;
  v16 = DVARBOOL_ai_whatamidoingwrong;
  v17 = 0;
  v189 = integer;
  if ( integer < 4 )
    v17 = v14;
  if ( !DVARBOOL_ai_whatamidoingwrong && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_whatamidoingwrong") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v16);
  enabled = v16->current.enabled;
  actor = this->m_pAI->ent->actor;
  TargetEntity = AICommonInterface::GetTargetEntity(this);
  TargetSentient = AICommonInterface::GetTargetSentient(this);
  v191 = TargetSentient;
  Sentient_GetDebugEyePosition(this->m_pAI->sentient, &vEyePosOut);
  if ( v17 )
  {
    if ( TargetSentient )
    {
      if ( !this->m_pAI->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 2287, ASSERT_TYPE_ASSERT, "( m_pAI->sentientInfo )", (const char *)&queryFormat, "m_pAI->sentientInfo") )
        __debugbreak();
      v20 = &this->m_pAI->sentientInfo[TargetSentient - level.sentients];
      if ( v20->VisCache.bVisible )
      {
        v21 = &colorGreen;
        if ( level.time - v20->VisCache.iLastUpdateTime > 250 )
          v21 = &colorYellow;
      }
      else
      {
        v21 = &colorRed;
      }
      Sentient_GetDebugEyePosition(TargetSentient, &v198);
      v22 = v21;
      p_currentOrigin = &v198;
      goto LABEL_41;
    }
    if ( TargetEntity )
    {
      p_currentOrigin = &TargetEntity->r.currentOrigin;
      v22 = &colorBlue;
LABEL_41:
      G_DebugLine(&vEyePosOut, p_currentOrigin, v22, 1);
    }
  }
  v24 = source->v[1] - v7->r.currentOrigin.v[1];
  v25 = source->v[2] - v7->r.currentOrigin.v[2];
  v26 = DVARFLT_g_entinfo_maxdist;
  v28 = fsqrt((float)((float)(v24 * v24) + (float)((float)(source->v[0] - v7->r.currentOrigin.v[0]) * (float)(source->v[0] - v7->r.currentOrigin.v[0]))) + (float)(v25 * v25));
  v27 = v28;
  if ( !DVARFLT_g_entinfo_maxdist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_entinfo_maxdist") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v26);
  if ( v26->current.value <= 0.0 )
    goto LABEL_50;
  v29 = DVARFLT_g_entinfo_maxdist;
  if ( !DVARFLT_g_entinfo_maxdist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_entinfo_maxdist") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v29);
  if ( v28 <= v29->current.value )
  {
LABEL_50:
    v199 = v4;
    if ( actor )
    {
      EntInfoScale = G_GetEntInfoScale();
      v31 = *(float *)&EntInfoScale;
    }
    else
    {
      v31 = FLOAT_1_0;
    }
    v32 = DVARINT_bg_entinfo;
    v33 = v31 * (float)(v28 * 0.0026041667);
    if ( !DVARINT_bg_entinfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_entinfo") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v32);
    if ( v32->current.integer != 3 )
    {
      v34 = DVARINT_bg_entinfo;
      if ( !DVARINT_bg_entinfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_entinfo") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v34);
      if ( v34->current.integer != 4 )
      {
        if ( this->Is3D(this) )
        {
          AnglesToAxis(&v7->r.currentAngles, &axis);
          G_DebugBoxOriented(&v7->r.currentOrigin, &v7->r.box, &axis, &colorMagenta, 1, 0);
        }
        else
        {
          G_DebugBox(&v7->r.currentOrigin, &v7->r.box, v7->r.currentAngles.v[1], &colorMagenta, 1, 0);
        }
      }
    }
    m_pAI = this->m_pAI;
    v36 = m_pAI->eyeInfo.dir.v[2];
    v37 = (float)(48.0 * m_pAI->eyeInfo.dir.v[1]) + vEyePosOut.v[1];
    end.v[0] = (float)(48.0 * m_pAI->eyeInfo.dir.v[0]) + vEyePosOut.v[0];
    end.v[2] = (float)(48.0 * v36) + vEyePosOut.v[2];
    end.v[1] = v37;
    if ( v17 )
    {
      if ( m_pAI->threat.hasThreateningEnemy )
        fovDotBusy = m_pAI->sight.fovDotBusy;
      else
        fovDotBusy = m_pAI->sight.fovDot;
      v39 = acosf_0(fovDotBusy);
      G_DebugLine(&vEyePosOut, &end, &colorBlue, 1);
      p_dir = &this->m_pAI->eyeInfo.dir;
      out.v[2] = 0.0;
      Vec2Rotate((const vec2_t *)p_dir, v39, (vec2_t *)&out);
      out.v[0] = (float)(48.0 * out.v[0]) + vEyePosOut.v[0];
      out.v[1] = (float)(48.0 * out.v[1]) + vEyePosOut.v[1];
      out.v[2] = (float)(48.0 * out.v[2]) + vEyePosOut.v[2];
      G_DebugLine(&vEyePosOut, &out, &colorLtBlue, 1);
      v41 = &this->m_pAI->eyeInfo.dir;
      out.v[2] = 0.0;
      Vec2Rotate((const vec2_t *)v41, COERCE_FLOAT(LODWORD(v39) ^ _xmm), (vec2_t *)&out);
      out.v[0] = (float)(48.0 * out.v[0]) + vEyePosOut.v[0];
      out.v[1] = (float)(48.0 * out.v[1]) + vEyePosOut.v[1];
      out.v[2] = (float)(48.0 * out.v[2]) + vEyePosOut.v[2];
      G_DebugLine(&vEyePosOut, &out, &colorLtBlue, 1);
    }
    v42 = DVARINT_ai_debugEntIndex;
    if ( !DVARINT_ai_debugEntIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugEntIndex") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v42);
    if ( v42->current.integer == v7->s.number )
    {
      DebugDrawNodeSelectionOverlay();
      v43 = DVARBOOL_ai_debugTargets;
      if ( !DVARBOOL_ai_debugTargets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugTargets") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v43);
      if ( v43->current.enabled )
        AIScriptedInterface::DebugDrawTargets(this);
    }
    v44 = this->m_pAI;
    if ( v44->ScriptOrient.eMode )
      v45 = v44->ScriptOrient.vDesiredAngles.v[1];
    else
      v45 = v44->CodeOrient.vDesiredAngles.v[1];
    YawVectors(v45, &out, NULL);
    out.v[0] = (float)(48.0 * out.v[0]) + vEyePosOut.v[0];
    out.v[1] = (float)(48.0 * out.v[1]) + vEyePosOut.v[1];
    out.v[2] = vEyePosOut.v[2];
    G_DebugLine(&vEyePosOut, &out, &colorMagenta, 1);
    YawVectors(this->m_pAI->orientation.vDesiredAngles.v[1], &out, NULL);
    out.v[0] = (float)(48.0 * out.v[0]) + vEyePosOut.v[0];
    out.v[1] = (float)(48.0 * out.v[1]) + vEyePosOut.v[1];
    out.v[2] = vEyePosOut.v[2];
    G_DebugLine(&vEyePosOut, &out, &colorOrange, 1);
    if ( v17 && EntHandle::isDefined(&this->m_pAI->grenade.pGrenade) )
    {
      v46 = EntHandle::ent(&this->m_pAI->grenade.pGrenade);
      Instance = GWeaponMap::GetInstance();
      if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 438, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
        __debugbreak();
      if ( !v46 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 439, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
        __debugbreak();
      Weapon = BgWeaponMap::GetWeapon(Instance, v46->s.weaponHandle);
      v49 = (float)BG_ExplosionRadius(Weapon, 0);
      v50 = EntHandle::ent(&this->m_pAI->grenade.pGrenade);
      if ( !G_Missile_IsGrenade(v50) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 2393, ASSERT_TYPE_ASSERT, "( G_Missile_IsGrenade( m_pAI->grenade.pGrenade.ent() ) )", (const char *)&queryFormat, "G_Missile_IsGrenade( m_pAI->grenade.pGrenade.ent() )") )
        __debugbreak();
      v51 = EntHandle::ent(&this->m_pAI->grenade.pGrenade);
      G_DebugLine(&vEyePosOut, &v51->c.mover.angle.pos1, &colorOrange, 1);
      v52 = EntHandle::ent(&this->m_pAI->grenade.pGrenade);
      G_DebugCircle(&v52->c.mover.angle.pos1, 8.0, &colorOrange, 0, 1, 0);
      v53 = EntHandle::ent(&this->m_pAI->grenade.pGrenade);
      G_DebugCircle(&v53->c.mover.angle.pos1, v49, &colorOrange, 0, 1, 0);
    }
    v54 = DVARBOOL_ai_debugEngagementDist;
    if ( !DVARBOOL_ai_debugEngagementDist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugEngagementDist") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v54);
    if ( v54->current.enabled && TargetEntity && Dvar_GetInt_Internal_DebugName(DVARINT_ai_debugEntIndex, "ai_debugEntIndex") == v7->s.number )
    {
      v55 = this->m_pAI;
      v56 = TargetEntity->r.currentOrigin.v[1];
      out.v[0] = TargetEntity->r.currentOrigin.v[0];
      out.v[1] = v56;
      ent = v55->ent;
      v201 = v2;
      v200 = v3;
      out.v[2] = ent->r.currentOrigin.v[2];
      v58 = v55->ent->r.currentOrigin.v[0] - out.v[0];
      v59 = LODWORD(v55->ent->r.currentOrigin.v[1]);
      *(float *)&v59 = fsqrt((float)((float)(v55->ent->r.currentOrigin.v[1] - v56) * (float)(v55->ent->r.currentOrigin.v[1] - v56)) + (float)(v58 * v58));
      _XMM3 = v59;
      __asm
      {
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm0, xmm3, xmm8, xmm0
      }
      *(float *)&v59 = 1.0 / *(float *)&_XMM0;
      _XMM0 = LODWORD(v55->nodeSelect.engageMinFalloffDist);
      v64 = *(float *)&v59 * v58;
      v65 = *(float *)&v59 * (float)(v55->ent->r.currentOrigin.v[1] - v56);
      if ( *(float *)&_XMM0 != 0.0 || v55->nodeSelect.engageMinDist != 0.0 )
      {
        __asm { vmaxss  xmm6, xmm0, xmm10 }
        G_DebugCircle(&out, *(float *)&_XMM6, &colorLtGreen, 0, 1, 0);
        xyz.v[0] = (float)(v64 * *(float *)&_XMM6) + out.v[0];
        xyz.v[2] = out.v[2];
        xyz.v[1] = (float)(v65 * *(float *)&_XMM6) + out.v[1];
        v67 = j_va("%s: %3.f", "engage min falloff", *(float *)&_XMM6);
        G_Main_AddDebugString(&xyz, &colorWhite, v33, v67);
        v55 = this->m_pAI;
      }
      _XMM0 = LODWORD(v55->nodeSelect.engageMinDist);
      __asm { vmaxss  xmm6, xmm0, xmm10 }
      G_DebugCircle(&out, *(float *)&_XMM6, &colorGreen, 0, 1, 0);
      xyz.v[0] = (float)(v64 * *(float *)&_XMM6) + out.v[0];
      xyz.v[2] = out.v[2];
      xyz.v[1] = (float)(v65 * *(float *)&_XMM6) + out.v[1];
      v70 = j_va("%s: %3.f", "engage min", *(float *)&_XMM6);
      G_Main_AddDebugString(&xyz, &colorWhite, v33, v70);
      _XMM0 = LODWORD(this->m_pAI->nodeSelect.engageMaxDist);
      __asm { vmaxss  xmm6, xmm0, xmm10 }
      G_DebugCircle(&out, *(float *)&_XMM6, &colorOrange, 0, 1, 0);
      xyz.v[0] = (float)(v64 * *(float *)&_XMM6) + out.v[0];
      xyz.v[2] = out.v[2];
      xyz.v[1] = (float)(v65 * *(float *)&_XMM6) + out.v[1];
      v73 = j_va("%s: %3.f", "engage max", *(float *)&_XMM6);
      G_Main_AddDebugString(&xyz, &colorWhite, v33, v73);
      _XMM0 = LODWORD(this->m_pAI->nodeSelect.engageMaxFalloffDist);
      __asm { vmaxss  xmm6, xmm0, xmm10 }
      G_DebugCircle(&out, *(float *)&_XMM6, &colorLtOrange, 0, 1, 0);
      xyz.v[0] = (float)(v64 * *(float *)&_XMM6) + out.v[0];
      xyz.v[2] = out.v[2];
      xyz.v[1] = (float)(v65 * *(float *)&_XMM6) + out.v[1];
      v76 = j_va("%s: %3.f", "engage max falloff", *(float *)&_XMM6);
      G_Main_AddDebugString(&xyz, &colorWhite, v33, v76);
    }
    if ( !v17 && v189 < 4 )
    {
LABEL_151:
      sentient = this->m_pAI->sentient;
      if ( sentient->eTeam > (unsigned int)TEAM_FIVE )
        v96 = &colorYellow;
      else
        v96 = &colorTeam[sentient->eTeam];
      v97 = (float)(v27 * 0.018229168) * v31;
      if ( v189 >= 4 )
      {
        vEyePosOut.v[2] = (float)(v97 * 0.5) + vEyePosOut.v[2];
        v98 = j_va("%i", (unsigned int)v7->s.number);
        G_Main_AddDebugString(&vEyePosOut, v96, (float)(v27 * 0.0015625001) * v31, v98);
        return;
      }
      vEyePosOut.v[2] = (float)(v97 * 10.0) + vEyePosOut.v[2];
      if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_ai_debugAccuracy, "ai_debugAccuracy") && Dvar_GetInt_Internal_DebugName(DVARINT_ai_debugEntIndex, "ai_debugEntIndex") == v7->s.number )
      {
        AI_DrawDebugAccuracy(&vEyePosOut, (float)(v27 * 0.0015625001) * v31, v97);
        return;
      }
      if ( !cg_t::ms_allocatedCount )
      {
        LODWORD(v186) = cg_t::ms_allocatedCount;
        LODWORD(duration) = 0;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_t::ms_allocatedCount )", "localClientNum doesn't index cg_t::ms_allocatedCount\n\t%i not in [0, %i)", duration, v186) )
          __debugbreak();
      }
      if ( !cg_t::ms_cgArray[0] )
      {
        LODWORD(v186) = 0;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1167, ASSERT_TYPE_ASSERT, "(cg_t::ms_cgArray[localClientNum])", "%s\n\tTrying to access unallocated client globals for localClientNum %d\n", "cg_t::ms_cgArray[localClientNum]", v186) )
          __debugbreak();
      }
      if ( cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN )
      {
        LODWORD(v186) = 0;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1168, ASSERT_TYPE_ASSERT, "(cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client globals for localClientNum %d but the client global type is not known\n", "cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN", v186) )
          __debugbreak();
      }
      v99 = (float)(v27 * -0.18229167) * v31;
      v100 = v99 * cg_t::ms_cgArray[0]->refdef.view.axis.m[0].v[0];
      vEyePosOut.v[0] = (float)(v99 * cg_t::ms_cgArray[0]->refdef.view.axis.m[0].v[1]) + vEyePosOut.v[0];
      vEyePosOut.v[1] = vEyePosOut.v[1] - v100;
      if ( Dvar_GetInt_Internal_DebugName(DVARINT_bg_entinfo, "bg_entinfo") == 2 || !Dvar_GetInt_Internal_DebugName(DVARINT_g_entinfo_AItext, "g_entinfo_AItext") )
      {
        targetname = v7->targetname;
        if ( targetname )
          v108 = SL_ConvertToString(targetname);
        else
          v108 = "<noname>";
        v104 = (float)(v27 * 0.0015625001) * v31;
        v109 = j_va("%i : %s", (unsigned int)v7->s.number, v108);
        G_Main_AddDebugString(&vEyePosOut, v96, v104, v109);
        LOBYTE(v106) = 30;
      }
      else
      {
        v101 = g_entinfoAITextNames[Dvar_GetInt_Internal_DebugName(DVARINT_g_entinfo_AItext, "g_entinfo_AItext")];
        v102 = v7->targetname;
        if ( v102 )
          v103 = SL_ConvertToString(v102);
        else
          v103 = "<noname>";
        v104 = (float)(v27 * 0.0015625001) * v31;
        v105 = j_va("%i : %s (%s)", (unsigned int)v7->s.number, v103, v101);
        G_Main_AddDebugString(&vEyePosOut, v96, v104, v105);
        v106 = 1 << Dvar_GetInt_Internal_DebugName(DVARINT_g_entinfo_AItext, "g_entinfo_AItext");
      }
      if ( (v106 & 6) == 0 )
        goto LABEL_236;
      v110 = 0.0;
      if ( (v106 & 4) != 0 && !enabled )
      {
        vEyePosOut.v[2] = vEyePosOut.v[2] - v97;
        v111 = j_va("health: %i", (unsigned int)v7->health);
        G_Main_AddDebugString(&vEyePosOut, v96, v104, v111);
      }
      tagInfo = v7->tagInfo;
      if ( tagInfo )
      {
        if ( !tagInfo->parent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 2611, ASSERT_TYPE_ASSERT, "( tagInfo->parent )", (const char *)&queryFormat, "tagInfo->parent") )
          __debugbreak();
        vEyePosOut.v[2] = vEyePosOut.v[2] - v97;
        v113 = (char *)&queryFormat.fmt + 3;
        if ( tagInfo->collisionPhysics )
          v113 = "(C)";
        v114 = j_va("LINKED TO: %d %s", (unsigned int)tagInfo->parent->s.number, v113);
        G_Main_AddDebugString(&vEyePosOut, &colorRed, v104, v114);
      }
      if ( TargetEntity )
      {
        Sentient_GetOrigin(this->m_pAI->sentient, &start);
        v110 = fsqrt((float)((float)((float)(start.v[1] - TargetEntity->r.currentOrigin.v[1]) * (float)(start.v[1] - TargetEntity->r.currentOrigin.v[1])) + (float)((float)(start.v[0] - TargetEntity->r.currentOrigin.v[0]) * (float)(start.v[0] - TargetEntity->r.currentOrigin.v[0]))) + (float)((float)(start.v[2] - TargetEntity->r.currentOrigin.v[2]) * (float)(start.v[2] - TargetEntity->r.currentOrigin.v[2])));
      }
      v115 = &colorYellow;
      vEyePosOut.v[2] = vEyePosOut.v[2] - v97;
      if ( TargetEntity )
        v115 = &colorRed;
      if ( TargetEntity )
      {
        v118 = TargetEntity->targetname;
        if ( v118 )
          v116 = SL_ConvertToString(v118);
        else
          v116 = "<noname target>";
        number = (unsigned int)TargetEntity->s.number;
      }
      else
      {
        v116 = "no target";
        number = 0i64;
      }
      v119 = j_va("%i : %s", number, v116);
      G_Main_AddDebugString(&vEyePosOut, v115, v104, v119);
      if ( !usingCodeGoal(this->m_pAI) )
      {
LABEL_213:
        v125 = this->m_pAI;
        if ( v125->arrivalInfo.arriving )
        {
          vEyePosOut.v[2] = vEyePosOut.v[2] - v97;
          G_Main_AddDebugString(&vEyePosOut, &colorRed, v104, "ARRIVING");
          v125 = this->m_pAI;
        }
        reacquireState = v125->combat.reacquireState;
        switch ( reacquireState )
        {
          case AI_REACQUIRE_ENABLED:
            v127 = "REACQUIRING";
            v128 = &colorRed;
            break;
          case AI_REACQUIRE_ENABLED_STEP:
            v127 = "REACQUIRING-STEP";
            v128 = &colorRed;
            break;
          case AI_REACQUIRE_REACQUIRED:
            v127 = "REACQUIRED";
            v128 = &colorGreen;
            break;
          default:
            goto LABEL_222;
        }
        vEyePosOut.v[2] = vEyePosOut.v[2] - v97;
        G_Main_AddDebugString(&vEyePosOut, v128, v104, v127);
LABEL_222:
        v129 = v7->sentient;
        if ( v129->bIgnoreAll )
        {
          vEyePosOut.v[2] = vEyePosOut.v[2] - v97;
          G_Main_AddDebugString(&vEyePosOut, &colorRed, v104, "IGNORE ALL");
          v129 = v7->sentient;
        }
        if ( v129->bIgnoreMe )
        {
          vEyePosOut.v[2] = vEyePosOut.v[2] - v97;
          G_Main_AddDebugString(&vEyePosOut, &colorRed, v104, "IGNORE ME");
        }
        if ( SentientHandle::isDefined(&this->m_pAI->threat.pFavoriteEnemy) )
        {
          p_pFavoriteEnemy = &this->m_pAI->threat.pFavoriteEnemy;
          vEyePosOut.v[2] = vEyePosOut.v[2] - v97;
          v131 = SentientHandle::sentient(p_pFavoriteEnemy);
          v132 = j_va("FAVORITE ENEMY: %d", (unsigned int)v131->ent->s.number);
          G_Main_AddDebugString(&vEyePosOut, &colorRed, v104, v132);
        }
        if ( (v106 & 4) != 0 )
        {
          v133 = this->m_pAI;
          vEyePosOut.v[2] = vEyePosOut.v[2] - v97;
          missCount = v133->shoot.missCount;
          hitCount = missCount;
          if ( !missCount )
            hitCount = v133->shoot.hitCount;
          LODWORD(fmt) = hitCount;
          v136 = "HIT";
          if ( missCount )
            v136 = "MISS";
          v137 = j_va("range: %.2f ac: %.2f %s %u", v110, v133->shoot.debugLastAccuracy, v136, fmt);
          G_Main_AddDebugString(&vEyePosOut, &colorWhite, v104, v137);
          v138 = actor;
          if ( !actor )
          {
LABEL_240:
            if ( (v106 & 0x12) != 0 && !enabled )
            {
              v142 = this->m_pAI;
              vEyePosOut.v[2] = vEyePosOut.v[2] - v97;
              pAnimScriptFunc = v142->pAnimScriptFunc;
              if ( pAnimScriptFunc )
                v144 = SL_ConvertToString(pAnimScriptFunc->name);
              else
                v144 = "<none>";
              v145 = j_va((const char *)&queryFormat, v144);
              G_Main_AddDebugString(&vEyePosOut, &colorWhite, v104, v145);
            }
            if ( (v106 & 8) != 0 && !enabled )
            {
              v146 = this->m_pAI;
              vEyePosOut.v[2] = vEyePosOut.v[2] - v97;
              eMode = v146->ScriptOrient.eMode;
              if ( (_DWORD)eMode )
              {
                v148 = v146->CodeOrient.eMode;
                v149 = j_va("orient: %s (%s <- script)", ai_orient_mode_text[v148], ai_orient_mode_text[eMode]);
                v12 = (_DWORD)eMode == (_DWORD)v148;
                v150 = &colorRed;
                v138 = actor;
                if ( v12 )
                  v150 = &colorYellow;
              }
              else
              {
                v149 = j_va("orient: %s", ai_orient_mode_text[v146->CodeOrient.eMode]);
                v150 = &colorGreen;
              }
              G_Main_AddDebugString(&vEyePosOut, v150, v104, v149);
              if ( this->m_pAI->orientation.faceMotion )
              {
                vEyePosOut.v[2] = vEyePosOut.v[2] - v97;
                G_Main_AddDebugString(&vEyePosOut, &colorWhite, v104, "face motion");
              }
              if ( AICommonInterface::HasPath(this) )
              {
                vEyePosOut.v[2] = vEyePosOut.v[2] - v97;
                G_Main_AddDebugString(&vEyePosOut, &colorWhite, v104, "has path");
              }
              if ( v138 )
              {
                if ( v138->pPileUpActor )
                {
                  vEyePosOut.v[2] = vEyePosOut.v[2] - v97;
                  v151 = j_va("blockee: %d, blocker: %d", (unsigned int)v138->pPileUpActor->ent->s.number, (unsigned int)v138->pPileUpEnt->s.number);
                  G_Main_AddDebugString(&vEyePosOut, &colorWhite, v104, v151);
                }
                if ( EntHandle::isDefined(&v138->pCloseEnt) )
                {
                  vEyePosOut.v[2] = vEyePosOut.v[2] - v97;
                  v152 = EntHandle::ent(&v138->pCloseEnt);
                  v153 = j_va("closeEnt: %d", (unsigned int)v152->s.number);
                  G_Main_AddDebugString(&vEyePosOut, &colorWhite, v104, v153);
                }
              }
              v154 = this->m_pAI;
              if ( v154->bDontAvoidPlayer )
              {
                vEyePosOut.v[2] = vEyePosOut.v[2] - v97;
                G_Main_AddDebugString(&vEyePosOut, &colorWhite, v104, "dontavoidplayer");
                v154 = this->m_pAI;
              }
              if ( (v154->Physics.iTraceMask & 0x2000000) == 0 )
              {
                vEyePosOut.v[2] = vEyePosOut.v[2] - v97;
                G_Main_AddDebugString(&vEyePosOut, &colorWhite, v104, "pushPlayer");
                v154 = this->m_pAI;
              }
              if ( !v154->pushable || !v154->script_pushable )
              {
                vEyePosOut.v[2] = vEyePosOut.v[2] - v97;
                v155 = j_va("pushable: %d, script_pushable: %d", v154->pushable, v154->script_pushable);
                G_Main_AddDebugString(&vEyePosOut, &colorWhite, v104, v155);
                v154 = this->m_pAI;
              }
              *(_QWORD *)axis.m[0].v = "none";
              *(_QWORD *)&axis.row0.z = "up";
              *(_QWORD *)&axis.row1.y = "down";
              vEyePosOut.v[2] = vEyePosOut.v[2] - v97;
              v156 = j_va("physics: %d, stairs: %s, ground: %d", (unsigned int)v154->Physics.ePhysicsType, *(const char **)&axis.m[0].v[2 * v154->Physics.stairsState], v154->Physics.groundEntNum);
              G_Main_AddDebugString(&vEyePosOut, &colorWhite, v104, v156);
              if ( this->m_pAI->Physics.bDeflected )
              {
                vEyePosOut.v[2] = vEyePosOut.v[2] - v97;
                G_Main_AddDebugString(&vEyePosOut, &colorRed, v104, "deflected");
              }
            }
            if ( (v106 & 0xA) != 0 && !enabled )
            {
              if ( this->m_pAI->eAnimMode >= (unsigned int)AI_ANIM_COUNT )
              {
                LODWORD(v186) = 13;
                LODWORD(duration) = this->m_pAI->eAnimMode;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 2805, ASSERT_TYPE_ASSERT, "(unsigned)( m_pAI->eAnimMode ) < (unsigned)( ( sizeof( *array_counter( animModeNames ) ) + 0 ) )", "m_pAI->eAnimMode doesn't index ARRAY_COUNT( animModeNames )\n\t%i not in [0, %i)", duration, v186) )
                  __debugbreak();
              }
              v157 = this->m_pAI;
              vEyePosOut.v[2] = vEyePosOut.v[2] - v97;
              v158 = j_va("animmode %s script: %s", animModeNames[v157->eAnimMode], animModeNames[v157->eScriptSetAnimMode]);
              G_Main_AddDebugString(&vEyePosOut, &colorWhite, v104, v158);
            }
            if ( (v106 & 4) == 0 )
              goto LABEL_295;
            vEyePosOut.v[2] = vEyePosOut.v[2] - v97;
            AlertLevel = AIScriptedInterface::GetAlertLevel(this);
            v160 = SL_ConvertToString(AlertLevel);
            v161 = j_va("AlertLevel: %d (%s)", (unsigned int)this->m_pAI->combat.alertLevel, v160);
            G_Main_AddDebugString(&vEyePosOut, &colorWhite, v104, v161);
            if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&this->m_pAI->ent->s.lerp.eFlags, ACTIVE, 0x10u) )
            {
              vEyePosOut.v[2] = vEyePosOut.v[2] - v97;
              G_Main_AddDebugString(&vEyePosOut, &colorRed, v104, "Invulnerable");
            }
            v162 = this->m_pAI;
            if ( v162->combat.provideCoveringFire )
            {
              vEyePosOut.v[2] = vEyePosOut.v[2] - v97;
              G_Main_AddDebugString(&vEyePosOut, &colorWhite, v104, "Covering fire");
              v162 = this->m_pAI;
            }
            if ( v162->suppression.ignoreSuppression )
            {
              vEyePosOut.v[2] = vEyePosOut.v[2] - v97;
              G_Main_AddDebugString(&vEyePosOut, &colorRed, v104, "Ignore suppression");
            }
            if ( AIScriptedInterface::IsSuppressed(this) || this->m_pAI->suppression.suppressionMeter > 0.0 )
            {
              v165 = this->m_pAI;
              vEyePosOut.v[2] = vEyePosOut.v[2] - v97;
              v163 = j_va("Suppressed %0.2f", v165->suppression.suppressionMeter);
              v164 = &colorRed;
            }
            else
            {
              if ( !AIScriptedInterface::IsMoveSuppressed(this) )
                goto LABEL_290;
              vEyePosOut.v[2] = vEyePosOut.v[2] - v97;
              v163 = "Move Suppressed";
              v164 = &colorCyan;
            }
            G_Main_AddDebugString(&vEyePosOut, v164, v104, v163);
LABEL_290:
            if ( v191 )
            {
              if ( !this->m_pAI->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 2846, ASSERT_TYPE_ASSERT, "( m_pAI->sentientInfo )", (const char *)&queryFormat, "m_pAI->sentientInfo") )
                __debugbreak();
              v166 = &this->m_pAI->sentientInfo[v191 - level.sentients];
              vEyePosOut.v[2] = vEyePosOut.v[2] - v97;
              v167 = j_va("visCache age: %d", (unsigned int)(level.time - v166->VisCache.iLastUpdateTime));
              G_Main_AddDebugString(&vEyePosOut, &colorWhite, v104, v167);
            }
LABEL_295:
            if ( Dvar_GetInt_Internal_DebugName(DVARINT_ai_debugCoverSelection, "ai_debugCoverSelection") == 1 )
            {
              v168 = this->m_pAI;
              vEyePosOut.v[2] = vEyePosOut.v[2] - v97;
              v169 = j_va("Searched nodes: %d", (unsigned int)v168->nodeSelect.numCoverNodesInGoal);
              G_Main_AddDebugString(&vEyePosOut, &colorYellow, v104, v169);
            }
            if ( enabled )
            {
              v170 = this->m_pAI;
              if ( v170->fixedNode )
              {
                vEyePosOut.v[2] = vEyePosOut.v[2] - v97;
                v171 = &colorRed;
                if ( v170->sentient->eTeam == TEAM_TWO )
                  v171 = &colorYellow;
                G_Main_AddDebugString(&vEyePosOut, v171, v104, "fixednode");
                v170 = this->m_pAI;
              }
              if ( v170->scriptGoal.bValid && v170->scriptGoal.radius < 100.0 )
              {
                vEyePosOut.v[2] = vEyePosOut.v[2] - v97;
                v172 = j_va("script goal radius: %.f", v170->scriptGoal.radius);
                G_Main_AddDebugString(&vEyePosOut, &colorRed, v104, v172);
                v170 = this->m_pAI;
              }
              if ( SentientHandle::isDefined(&v170->threat.pFavoriteEnemy) )
              {
                v173 = &this->m_pAI->threat.pFavoriteEnemy;
                vEyePosOut.v[2] = vEyePosOut.v[2] - v97;
                v174 = SentientHandle::sentient(v173);
                v175 = j_va("favorite enemy: %d", (unsigned int)v174->ent->s.number);
                G_Main_AddDebugString(&vEyePosOut, &colorRed, v104, v175);
              }
              v176 = this->m_pAI;
              if ( v176->threat.bPacifist )
              {
                vEyePosOut.v[2] = vEyePosOut.v[2] - v97;
                G_Main_AddDebugString(&vEyePosOut, &colorRed, v104, "bPacifist");
                v176 = this->m_pAI;
              }
              if ( v176->sight.fMaxSightDistSqrd < 262144.0 )
              {
                vEyePosOut.v[2] = vEyePosOut.v[2] - v97;
                v177 = j_va("maxSightDist: %.f", fsqrt(v176->sight.fMaxSightDistSqrd));
                G_Main_AddDebugString(&vEyePosOut, &colorRed, v104, v177);
                v176 = this->m_pAI;
              }
              accuracy = v176->shoot.accuracy;
              if ( accuracy < 0.1 || accuracy > 0.5 )
              {
                vEyePosOut.v[2] = vEyePosOut.v[2] - v97;
                v179 = j_va("accuracy: %.2f", v176->shoot.accuracy);
                G_Main_AddDebugString(&vEyePosOut, &colorRed, v104, v179);
                v176 = this->m_pAI;
              }
              if ( !v176->avoidance.avoidanceEnabled )
              {
                vEyePosOut.v[2] = vEyePosOut.v[2] - v97;
                G_Main_AddDebugString(&vEyePosOut, &colorRed, v104, "avoidance disabled");
                v176 = this->m_pAI;
              }
              if ( v176->combat.combatMode == AI_COMBAT_NO_COVER )
              {
                vEyePosOut.v[2] = vEyePosOut.v[2] - v97;
                G_Main_AddDebugString(&vEyePosOut, &colorRed, v104, "no_cover");
              }
              v180 = v7->sentient;
              if ( v180 )
              {
                if ( v180->bNearestNodeBad )
                {
                  vEyePosOut.v[2] = vEyePosOut.v[2] - v97;
                  G_Main_AddDebugString(&vEyePosOut, &colorRed, v104, "nearest node bad");
                  v180 = v7->sentient;
                }
                if ( v180->iThreatBiasGroupIndex )
                {
                  vEyePosOut.v[2] = vEyePosOut.v[2] - v97;
                  v181 = j_va("threat bias group: %d", (unsigned int)v7->sentient->iThreatBiasGroupIndex);
                  G_Main_AddDebugString(&vEyePosOut, &colorRed, v104, v181);
                }
              }
              pNavigator = this->m_pAI->pNavigator;
              if ( pNavigator && level.time - pNavigator->m_TimeOfLastPathFindFail < 0x3E8 )
              {
                vEyePosOut.v[2] = vEyePosOut.v[2] - v97;
                G_Main_AddDebugString(&vEyePosOut, &colorRed, v104, "pathfind failed");
              }
            }
            if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_ai_showNavPos, "ai_showNavPos") )
            {
              Nav_GetPos(this->m_pAI->pNavigator, &start);
              G_DebugSphere(&start, 15.0, &colorMagenta, 0, 0);
            }
            if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_ai_showNavObstacles, "ai_showNavObstacles") )
            {
              v183 = this->m_pAI->pNavigator->Get2DNavigator(this->m_pAI->pNavigator);
              if ( v183 )
                AINavigator2D::DrawLineToSuppression(v183);
            }
            return;
          }
          if ( actor->talkToSpecies >= 0 )
          {
            vEyePosOut.v[2] = vEyePosOut.v[2] - v97;
            v139 = j_va("talkto: %d", (unsigned int)actor->talkToSpecies);
            G_Main_AddDebugString(&vEyePosOut, &colorWhite, v104, v139);
          }
LABEL_237:
          if ( v138 && (v106 & 0x10) != 0 )
          {
            v140 = this->m_pAI;
            vEyePosOut.v[2] = vEyePosOut.v[2] - v97;
            v141 = j_va("(%i)%i:%i = %s", v140->stateLevel, (unsigned int)v140->eState[v140->stateLevel], (unsigned int)v140->eSubState[v140->stateLevel], v138->pszDebugInfo);
            G_Main_AddDebugString(&vEyePosOut, &colorWhite, v104, v141);
          }
          goto LABEL_240;
        }
LABEL_236:
        v138 = actor;
        goto LABEL_237;
      }
      v120 = this->m_pAI;
      vEyePosOut.v[2] = vEyePosOut.v[2] - v97;
      codeGoalSrc = v120->codeGoalSrc;
      if ( codeGoalSrc <= 1 )
      {
        v122 = "Goal: Script";
        v123 = &colorBlue;
      }
      else if ( codeGoalSrc == 2 )
      {
        v122 = "Goal: Script Friendly Chain";
        v123 = &colorGreen;
      }
      else if ( codeGoalSrc == 3 )
      {
        v122 = "Goal: Enemy";
        v123 = &colorMagenta;
      }
      else
      {
        v123 = &colorRed;
        if ( codeGoalSrc != 4 )
        {
          v124 = v104;
          if ( codeGoalSrc - 5 <= 1 )
            v122 = "Goal: BT";
          else
            v122 = "Goal: Other";
          goto LABEL_212;
        }
        v122 = "Goal: Danger React";
      }
      v124 = v104;
LABEL_212:
      G_Main_AddDebugString(&vEyePosOut, v123, v124, v122);
      goto LABEL_213;
    }
    v77 = endTime;
    axis.m[1].v[0] = FLOAT_1_0;
    if ( level.time <= endTime )
    {
      if ( endTime - level.time > 1000 )
        v77 = 0;
    }
    else
    {
      v77 = level.time + 1000;
      direction = direction == 0;
    }
    endTime = v77;
    v78 = this->m_pAI;
    v80 = (float)(v77 - level.time) * 0.001;
    v79 = v80;
    if ( v78->codeGoal.bMultiGoalPath && (v81 = v78->pNavigator, v81->m_bMultiGoalPath) && (v82 = v81->HasPath(v81), v78 = this->m_pAI, v82) && v78->scriptGoalPath.curPoint < v78->scriptGoalPath.numPoints - 1 )
    {
      axis.m[0].v[2] = 0.0;
      axis.m[0].v[1] = 0.0;
      if ( direction )
        v83 = v80;
      else
        v83 = 1.0 - v80;
    }
    else
    {
      if ( direction )
      {
        axis.m[0].v[2] = v80;
        axis.m[0].v[1] = v80;
        axis.m[0].v[0] = v80;
        goto LABEL_120;
      }
      v83 = 1.0 - v80;
      axis.m[0].v[2] = 1.0 - v80;
      axis.m[0].v[1] = 1.0 - v80;
    }
    axis.m[0].v[0] = v83;
LABEL_120:
    if ( !EntHandle::isDefined(&v78->scriptGoal.hEnt) )
    {
      v84 = this->m_pAI;
      *(_QWORD *)out.v = *(_QWORD *)v84->scriptGoal.pos.v;
      out.v[2] = v84->scriptGoal.pos.v[2] + 16.0;
      G_DebugLine(&vEyePosOut, &out, (const vec4_t *)&axis, 0);
      G_DebugCircle(&out, this->m_pAI->scriptGoal.radius, (const vec4_t *)&axis, 0, 1, 0);
      if ( Dvar_GetInt_Internal_DebugName(DVARINT_bg_entinfo, "bg_entinfo") == 5 || Dvar_GetInt_Internal_DebugName(DVARINT_bg_entinfo, "bg_entinfo") == 6 )
      {
        start.v[2] = out.v[2];
        xyz.v[2] = out.v[2];
        v85 = this->m_pAI;
        *(double *)start.v = *(double *)out.v;
        *(double *)xyz.v = *(double *)out.v;
        start.v[2] = out.v[2] + v85->scriptGoal.height;
        xyz.v[2] = out.v[2] - v85->scriptGoal.height;
        G_DebugLine(&start, &xyz, (const vec4_t *)&axis, 0);
      }
    }
    v86 = this->m_pAI;
    if ( v86->fixedNode )
    {
      *(_QWORD *)out.v = *(_QWORD *)v86->scriptGoal.pos.v;
      out.v[2] = v86->scriptGoal.pos.v[2] + 16.0;
      if ( !direction )
        v79 = 1.0 - v80;
      axis.m[0].v[1] = v79;
      axis.m[0].v[2] = 0.0;
      axis.m[0].v[0] = 0.0;
      G_DebugLine(&vEyePosOut, &out, (const vec4_t *)&axis, 0);
      G_DebugCircle(&out, this->m_pAI->fixedNodeSafeRadius, (const vec4_t *)&axis, 0, 1, 0);
      v87 = v187;
      if ( EntHandle::isDefined(&this->m_pAI->fixedNodeSafeVolume) && v187 )
      {
        v88 = EntHandle::ent(&this->m_pAI->fixedNodeSafeVolume);
        G_DebugDrawVolumeModel(v88, &colorGreenFaded, 0, 0);
      }
    }
    else
    {
      v87 = v187;
    }
    if ( usingCodeGoal(this->m_pAI) )
    {
      v89 = this->m_pAI;
      *(_QWORD *)out.v = *(_QWORD *)v89->codeGoal.pos.v;
      out.v[2] = v89->codeGoal.pos.v[2] + 16.0;
      G_DebugLine(&vEyePosOut, &out, &colorOrange, 0);
      v90 = this->m_pAI;
      v91 = v90->codeGoalSrc;
      switch ( v91 )
      {
        case AI_GOAL_SRC_SCRIPT_ENTITY_GOAL:
          v92 = colorBlue;
          break;
        case AI_GOAL_SRC_FRIENDLY_CHAIN:
          v92 = colorGreen;
          break;
        case AI_GOAL_SRC_ENEMY:
          v92 = colorMagenta;
          break;
        case AI_GOAL_SRC_DANGER_REACT:
          v92 = colorYellow;
          break;
        case AI_GOAL_SRC_BT:
          v92 = colorOrange;
          break;
        default:
          v92 = colorBlack;
          break;
      }
      *(vec4_t *)axis.m[0].v = v92;
      G_DebugCircle(&out, v90->codeGoal.radius, (const vec4_t *)&axis, 0, 1, 0);
      if ( Dvar_GetInt_Internal_DebugName(DVARINT_bg_entinfo, "bg_entinfo") == 5 || Dvar_GetInt_Internal_DebugName(DVARINT_bg_entinfo, "bg_entinfo") == 6 )
      {
        xyz.v[2] = out.v[2];
        start.v[2] = out.v[2];
        v93 = this->m_pAI;
        *(double *)xyz.v = *(double *)out.v;
        *(double *)start.v = *(double *)out.v;
        xyz.v[2] = out.v[2] + v93->codeGoal.height;
        start.v[2] = out.v[2] - v93->codeGoal.height;
        G_DebugLine(&xyz, &start, (const vec4_t *)&axis, 0);
      }
    }
    if ( EntHandle::isDefined(&this->m_pAI->codeGoal.hVolume) )
    {
      if ( v87 )
      {
        v94 = EntHandle::ent(&this->m_pAI->codeGoal.hVolume);
        G_DebugDrawVolumeModel(v94, &colorWhiteFaded, 1, 0);
      }
      if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_ai_showRegion, "ai_showRegion") )
        AIScriptedInterface::DebugDrawNodesInVolume(this);
    }
    goto LABEL_151;
  }
}

/*
==============
AIScriptedInterface::FailSafeMove
==============
*/
void AIScriptedInterface::FailSafeMove(AIScriptedInterface *this)
{
  ai_scripted_t *m_pAI; 
  gentity_s *ent; 

  m_pAI = this->m_pAI;
  ent = m_pAI->ent;
  m_pAI->Physics.vVelocity.v[2] = 0.0;
  m_pAI->Physics.vOrigin = ent->r.currentOrigin;
}

/*
==============
AIScriptedInterface::FindClaimedNode
==============
*/
pathnode_t *AIScriptedInterface::FindClaimedNode(AIScriptedInterface *this)
{
  AITask_CoverFind *p_coverFindTask; 
  char v3; 
  ai_scripted_t *m_pAI; 
  const pathnode_t *node; 
  bool CanClaimNode; 
  sentient_s *sentient; 
  const pathnode_t *pClaimedNode; 
  bool v10; 
  bool v11; 
  double Float_Internal_DebugName; 
  ai_scripted_t *v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  char v18; 
  char v19; 
  ai_scripted_t *v20; 
  float v21; 
  bool v22; 
  __int64 v23; 
  const tacpoint_t *CoverTacPoint; 
  const tacpoint_t *v25; 
  pathnode_t *v26; 
  ai_scripted_t *v27; 
  ai_scripted_t *v28; 
  const pathnode_t *pBestNode; 
  ai_scripted_t *v30; 
  vec3_t pos; 
  vec3_t vPoint; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 4258, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( this->m_pAI->ent->tagInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 4259, ASSERT_TYPE_ASSERT, "( !m_pAI->ent->tagInfo )", (const char *)&queryFormat, "!m_pAI->ent->tagInfo") )
    __debugbreak();
  p_coverFindTask = &this->m_pAI->coverFindTask;
  v3 = p_coverFindTask->status[0];
  if ( p_coverFindTask->status[0] == 3 )
    AI_ScheduledCoverFind_Reset(p_coverFindTask);
  if ( !AIScriptedInterface::UsingCoverNodes(this) || AIScriptedInterface::IsDoingReacquire(this) )
    return 0i64;
  m_pAI = this->m_pAI;
  if ( m_pAI->combat.combatMode == AI_COMBAT_NO_COVER )
  {
    node = m_pAI->codeGoal.node;
    if ( node )
    {
      CanClaimNode = Path_CanClaimNode(node, m_pAI->sentient);
      goto LABEL_14;
    }
    return 0i64;
  }
  sentient = m_pAI->sentient;
  pClaimedNode = sentient->pClaimedNode;
  if ( pClaimedNode )
  {
    pathnode_t::GetPos(sentient->pClaimedNode, &pos);
    v10 = AICommonInterface::PointAtGoal(this, &pos, &this->m_pAI->codeGoal);
    m_pAI = this->m_pAI;
    v11 = v10;
  }
  else
  {
    v11 = 0;
  }
  if ( m_pAI->boundingOverwatchEnabled && AICommonInterface::PointAtGoal(this, &m_pAI->ent->r.currentOrigin, &m_pAI->codeGoal) && EntHandle::isDefined(&this->m_pAI->sentient->targetEnt) )
  {
    Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_ai_boundingOverwatchGoalProximity, "ai_boundingOverwatchGoalProximity");
    v13 = this->m_pAI;
    v14 = v13->codeGoal.pos.v[0] - v13->ent->r.currentOrigin.v[0];
    v15 = v13->codeGoal.pos.v[1] - v13->ent->r.currentOrigin.v[1];
    v16 = v13->codeGoal.pos.v[2] - v13->ent->r.currentOrigin.v[2];
    v17 = (float)((float)(v15 * v15) + (float)(v14 * v14)) + (float)(v16 * v16);
    if ( pClaimedNode && AIScriptedInterface::IsValidClaimNode(this, pClaimedNode) )
    {
      LOBYTE(m_pAI) = 1;
      if ( v17 <= (float)(*(float *)&Float_Internal_DebugName * *(float *)&Float_Internal_DebugName) )
        goto LABEL_25;
    }
    else
    {
      LOBYTE(m_pAI) = 0;
    }
    v20 = this->m_pAI;
    v21 = 0.0;
    if ( pClaimedNode )
      v21 = (float)((float)((float)(pos.v[1] - v20->ent->r.currentOrigin.v[1]) * (float)(pos.v[1] - v20->ent->r.currentOrigin.v[1])) + (float)((float)(pos.v[0] - v20->ent->r.currentOrigin.v[0]) * (float)(pos.v[0] - v20->ent->r.currentOrigin.v[0]))) + (float)((float)(pos.v[2] - v20->ent->r.currentOrigin.v[2]) * (float)(pos.v[2] - v20->ent->r.currentOrigin.v[2]));
    v22 = v20->squadNumber < 0 || v20->squadMovementAllowed;
    v23 = 0i64;
    if ( (!(_BYTE)m_pAI || v21 > 1960000.0 || v21 < 4096.0 && v22) && level.time > v20->nodeSelect.nextFindBestCoverTime && v20->coverFindTask.status[0] != 1 )
    {
      v20->coverFindTask.pBestNode = NULL;
      tacpoint_ref_t::SetPoint(&this->m_pAI->coverFindTask.coverTac, NULL);
      AIScheduler::AddCoverFindTask(&this->m_pAI->coverFindTask);
    }
    if ( v11 )
      return this->m_pAI->sentient->pClaimedNode;
    return (pathnode_t *)v23;
  }
LABEL_25:
  v18 = ((__int64 (__fastcall *)(AIScriptedInterface *, ai_scripted_t *))this->ShouldLookForNewCover)(this, m_pAI);
  v19 = v18;
  if ( v11 && v3 != 3 && !v18 && AIScriptedInterface::IsValidClaimNode(this, pClaimedNode) )
    return (pathnode_t *)pClaimedNode;
  CoverTacPoint = AIScriptedInterface::GetCoverTacPoint(this);
  v25 = CoverTacPoint;
  if ( CoverTacPoint && v3 != 3 && !v19 && AICommonInterface::PointAtGoal(this, &CoverTacPoint->m_Pos, &this->m_pAI->codeGoal) && AIScriptedInterface::IsValidCoverTacPoint(this, v25) )
    return 0i64;
  if ( AICommonInterface::GetTargetEntity(this) || (v26 = this->m_pAI->codeGoal.node) == NULL )
  {
    v27 = this->m_pAI;
    v23 = 0i64;
    if ( !v27->boundingOverwatchEnabled && !v27->blackboard.m_bMeleeChargeRequested && !v27->blackboard.m_bMeleeRequested && !EntHandle::isDefined(&v27->grenade.pGrenade) )
    {
      v28 = this->m_pAI;
      if ( !v28->navigation.isInBadPlace )
      {
        if ( v3 == 3 )
        {
          pBestNode = v28->coverFindTask.pBestNode;
          if ( !pBestNode || (pClaimedNode = v28->coverFindTask.pBestNode, Path_CanClaimNode(pBestNode, v28->sentient)) )
          {
            if ( pClaimedNode )
              return (pathnode_t *)pClaimedNode;
          }
        }
        v30 = this->m_pAI;
        if ( level.time >= v30->nodeSelect.nextFindBestCoverTime && v30->coverFindTask.status[0] != 1 )
        {
          v30->coverFindTask.pBestNode = NULL;
          tacpoint_ref_t::SetPoint(&this->m_pAI->coverFindTask.coverTac, NULL);
          AIScheduler::AddCoverFindTask(&this->m_pAI->coverFindTask);
        }
      }
    }
    if ( v11 && !v25 )
      return this->m_pAI->sentient->pClaimedNode;
    return (pathnode_t *)v23;
  }
  pathnode_t::GetPos(v26, &vPoint);
  if ( AIScriptedInterface::IsValidClaimNode(this, this->m_pAI->codeGoal.node) )
  {
    CanClaimNode = AICommonInterface::PointAtGoal(this, &vPoint, &this->m_pAI->codeGoal);
LABEL_14:
    if ( CanClaimNode )
      return this->m_pAI->codeGoal.node;
  }
  return 0i64;
}

/*
==============
AIScriptedInterface::FindPath
==============
*/
bool AIScriptedInterface::FindPath(AIScriptedInterface *this, vec3_t *inOutGoalPos, pathnode_t *pGoalNode, bool bAllowNegotiationLinks, bool bIgnoreSuppression, bool bHandleInvalidPath)
{
  AINavigator *pNavigator; 
  unsigned __int16 GroundEntNum; 
  ai_scripted_t *m_pAI; 
  AITask_PathFind *p_pathFindTask; 
  vec3_t pos; 
  vec3_t vPoint; 
  vec3_t vFinalGoal; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 5337, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI", -2i64) )
    __debugbreak();
  if ( this->m_pAI->ent->tagInfo )
  {
    this->ClearPath(this);
    return 1;
  }
  if ( AICommonInterface::HasPath(this) )
  {
    AICommonInterface::GetPathFinalGoal(this, &vFinalGoal);
    if ( AICommonInterface::PointAt(this, &vFinalGoal, inOutGoalPos) )
      return 1;
    pNavigator = this->m_pAI->pNavigator;
    if ( pNavigator )
    {
      pNavigator->GetRequestedGoalPos(pNavigator, &vPoint);
      if ( AICommonInterface::PointAt(this, &vPoint, inOutGoalPos) )
        return 1;
    }
  }
  if ( AICommonInterface::PointAt(this, &this->m_pAI->ent->r.currentOrigin, inOutGoalPos) )
  {
    this->ClearPath(this);
    return 1;
  }
  else
  {
    if ( !pGoalNode || (pathnode_t::GetPos(pGoalNode, &pos), pos.v[0] != inOutGoalPos->v[0]) || pos.v[1] != inOutGoalPos->v[1] || pos.v[2] != inOutGoalPos->v[2] )
    {
      if ( !AICommonInterface::Use3DPathing(this) )
      {
        GroundEntNum = AIScriptedInterface::GetGroundEntNum(this);
        if ( BGMovingPlatforms::IsMovingPlatform(GroundEntNum) )
        {
          this->GetMovingPlatformUpVector(this, &vPoint);
          AI_DropPointToFloorNonWorldUp(inOutGoalPos, &this->m_pAI->ent->r.box, &vPoint);
        }
        else
        {
          Sys_ProfBeginNamedEvent(0xFF808080, "FindPathDropPos");
          AI_DropPointToFloor(inOutGoalPos, &this->m_pAI->ent->r.box);
          Sys_ProfEndNamedEvent();
        }
      }
    }
    m_pAI = this->m_pAI;
    p_pathFindTask = &m_pAI->pathFindTask;
    if ( m_pAI->bForceNextPathFindImmediate || AIScriptedInterface::IsBTGoalValid(this) && AIScriptedInterface::HasGrenadeValid(this) )
    {
      this->m_pAI->bForceNextPathFindImmediate = 0;
      if ( p_pathFindTask->status[0] == 1 )
        AIScheduler::RemovePathFindTask(p_pathFindTask);
      return AIScriptedInterface::FindPathInternal(this, inOutGoalPos, pGoalNode, bAllowNegotiationLinks, bIgnoreSuppression, bHandleInvalidPath);
    }
    else
    {
      p_pathFindTask->m_GoalPos.v[0] = inOutGoalPos->v[0];
      p_pathFindTask->m_GoalPos.v[1] = inOutGoalPos->v[1];
      p_pathFindTask->m_GoalPos.v[2] = inOutGoalPos->v[2];
      p_pathFindTask->m_pGoalNode = pGoalNode;
      p_pathFindTask->m_bAllowNegotiations = bAllowNegotiationLinks;
      p_pathFindTask->m_bIgnoreSuppression = bIgnoreSuppression;
      p_pathFindTask->m_bHandleInvalidPath = bHandleInvalidPath;
      if ( p_pathFindTask->status[0] == 1 )
        return 1;
      AIScheduler::AddPathFindTask(p_pathFindTask);
      return 1;
    }
  }
}

/*
==============
AIScriptedInterface::FindPathAway
==============
*/
void AIScriptedInterface::FindPathAway(AIScriptedInterface *this, const vec3_t *vBadPos, float fMinSafeDist, PathBlockPlanes *blockPlanes)
{
  __int128 v4; 
  __int128 v5; 
  __int128 v6; 
  __int128 v7; 
  __int128 v8; 
  __int128 v9; 
  __int128 v10; 
  __int128 v11; 
  __int128 v12; 
  __int128 v13; 
  ai_scripted_t *m_pAI; 
  gentity_s *ent; 
  float v17; 
  float v18; 
  __int128 v19; 
  float v20; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  int iPlaneCount; 
  __int64 v31; 
  gentity_s *v32; 
  float *fDist; 
  __int64 v34; 
  float *v; 
  float v36; 
  float v37; 
  float v38; 
  float v39; 
  float v40; 
  float v41; 
  float v42; 
  float v43; 
  float v44; 
  __int128 v45; 
  __int128 v46; 
  float v47; 
  __int128 v51; 
  AINavigator2D *v55; 
  AINavigator2D *v56; 
  nav_space_s *m_pSpace; 
  float v58; 
  float v59; 
  vec3_t targetPos; 
  vec3_t outUp; 
  bfx::PathSpec pPathSpec; 
  __int128 v63; 
  __int128 v64; 
  __int128 v65; 
  __int128 v66; 
  __int128 v67; 
  __int128 v68; 
  __int128 v69; 
  __int128 v70; 
  __int128 v71; 
  __int128 v72; 

  m_pAI = this->m_pAI;
  v72 = v4;
  v71 = v5;
  v65 = v11;
  ent = m_pAI->ent;
  v64 = v12;
  v63 = v13;
  v17 = ent->r.currentOrigin.v[0];
  v19 = LODWORD(ent->r.currentOrigin.v[1]);
  v18 = ent->r.currentOrigin.v[1] - vBadPos->v[1];
  v20 = v17 - vBadPos->v[0];
  *(float *)&v19 = fsqrt((float)(v18 * v18) + (float)(v20 * v20));
  _XMM2 = v19;
  __asm
  {
    vcmpless xmm0, xmm2, xmm14
    vblendvps xmm0, xmm2, xmm13, xmm0
  }
  v25 = 1.0 / *(float *)&_XMM0;
  *(float *)&_XMM0 = v20 * (float)(1.0 / *(float *)&_XMM0);
  v26 = *(float *)&_XMM0 * fMinSafeDist;
  v27 = v18 * v25;
  v28 = v26 + v17;
  v29 = v27 * fMinSafeDist;
  targetPos.v[0] = v26 + v17;
  v58 = *(float *)&_XMM0;
  targetPos.v[1] = v29 + ent->r.currentOrigin.v[1];
  v59 = v27;
  if ( blockPlanes )
  {
    iPlaneCount = blockPlanes->iPlaneCount;
    if ( iPlaneCount )
    {
      v31 = blockPlanes->iPlaneCount;
      if ( iPlaneCount > 0 )
      {
        v32 = m_pAI->ent;
        fDist = blockPlanes->fDist;
        v70 = v6;
        v34 = 0i64;
        v69 = v7;
        v = v32->r.currentOrigin.v;
        v68 = v8;
        v67 = v9;
        v66 = v10;
        do
        {
          v36 = blockPlanes->vNormal[v34].v[1];
          v37 = blockPlanes->vNormal[v34].v[0];
          v38 = v[1];
          v39 = (float)((float)((float)(v36 * *fDist) - v38) * v36) + (float)((float)((float)(v37 * *fDist) - *v) * v37);
          v40 = (float)(v37 * v26) + (float)(v29 * v36);
          if ( (float)(v40 * v40) > (float)(v39 * v39) && (float)(v40 * v39) > 0.0 )
          {
            v41 = (float)(fsqrt((float)(v29 * v29) + (float)(v26 * v26)) * v39) / v40;
            v42 = (float)(v41 * v58) + *v;
            v43 = (float)(v41 * v59) + v38;
            v44 = fsqrt((float)((float)(targetPos.v[1] - v43) * (float)(targetPos.v[1] - v43)) + (float)((float)(v28 - v42) * (float)(v28 - v42)));
            v45 = LODWORD(blockPlanes->vNormal[v34].v[1]);
            *(float *)&v45 = (float)(v36 * (float)(v39 - v40)) + (float)(targetPos.v[1] - v43);
            v46 = v45;
            v47 = (float)(v37 * (float)(v39 - v40)) + (float)(v28 - v42);
            *(float *)&v45 = fsqrt((float)(*(float *)&v45 * *(float *)&v45) + (float)(v47 * v47));
            _XMM3 = v45;
            __asm
            {
              vcmpless xmm0, xmm3, xmm14
              vblendvps xmm0, xmm3, xmm13, xmm0
            }
            v28 = (float)((float)(v47 * (float)(1.0 / *(float *)&_XMM0)) * v44) + v42;
            v51 = v46;
            targetPos.v[1] = (float)((float)(*(float *)&v46 * (float)(1.0 / *(float *)&_XMM0)) * v44) + v43;
            targetPos.v[0] = v28;
            v = m_pAI->ent->r.currentOrigin.v;
            v29 = targetPos.v[1] - m_pAI->ent->r.currentOrigin.v[1];
            v26 = v28 - *v;
            *(float *)&v51 = fsqrt((float)(v29 * v29) + (float)(v26 * v26));
            _XMM2 = v51;
            __asm
            {
              vcmpless xmm0, xmm2, xmm14
              vblendvps xmm0, xmm2, xmm13, xmm0
            }
            v58 = v26 * (float)(1.0 / *(float *)&_XMM0);
            v59 = v29 * (float)(1.0 / *(float *)&_XMM0);
          }
          ++v34;
          ++fDist;
        }
        while ( v34 < v31 );
      }
    }
  }
  targetPos.v[2] = m_pAI->ent->r.currentOrigin.v[2];
  if ( !m_pAI->pNavigator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 5679, ASSERT_TYPE_ASSERT, "( m_pAI->pNavigator )", (const char *)&queryFormat, "m_pAI->pNavigator") )
    __debugbreak();
  v55 = this->m_pAI->pNavigator->Get2DNavigator(this->m_pAI->pNavigator);
  v56 = v55;
  if ( v55 )
  {
    m_pSpace = v55->m_pSpace;
    pPathSpec = *AINavigator2D::GetPathSpec(v55);
    Nav_GetSpaceUp(m_pSpace, &outUp);
    Nav_GetClosestVerticalPos(&targetPos, &outUp, v56->m_Layer, &m_pSpace->hSpace, &pPathSpec, &targetPos, NULL);
  }
  this->ClearPath(this);
  AIScriptedInterface::FindPath(this, &targetPos, NULL, 0, 1, 0);
}

/*
==============
AIScriptedInterface::FindPathInternal
==============
*/
char AIScriptedInterface::FindPathInternal(AIScriptedInterface *this, const vec3_t *goalPos, const pathnode_t *pGoalNode, bool bAllowNegotiationLinks, bool bIgnoreSuppression)
{
  __int128 v5; 
  char v9; 
  AINavigator3D *v10; 
  int v11; 
  bool v12; 
  AINavigator2D *v13; 
  bool HasPath; 
  ai_scripted_t *m_pAI; 
  float v16; 
  double MaxSpeedForPathLength; 
  vec3_t vLookaheadDir; 
  PathBlockPlanes blockPlanes; 
  __int128 v21; 

  v21 = v5;
  if ( AICommonInterface::HasPath(this) )
  {
    v9 = 1;
    AIScriptedInterface::GetPathLookaheadDir(this, &vLookaheadDir);
    this->ClearPath(this);
  }
  else
  {
    vLookaheadDir.v[0] = 0.0;
    vLookaheadDir.v[1] = 0.0;
    vLookaheadDir.v[2] = 0.0;
    v9 = 0;
  }
  if ( bIgnoreSuppression )
    blockPlanes.iPlaneCount = 0;
  else
    AIScriptedInterface::GetSuppressionPlanes(this, &blockPlanes);
  if ( AICommonInterface::Use3DPathing(this) )
  {
    v10 = this->m_pAI->pNavigator->Get3DNavigator(this->m_pAI->pNavigator);
    if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 5491, ASSERT_TYPE_ASSERT, "( pNav3D )", (const char *)&queryFormat, "pNav3D") )
      __debugbreak();
    v12 = 0;
    if ( pGoalNode )
    {
      v11 = 1 << LOBYTE(pGoalNode->constant.type);
      if ( (v11 & 0x1E300000) == 0 && (v11 & 0x400000) == 0 )
        v12 = 1;
    }
    v10->m_bSnapGoalToClosestVerticalPos = v12;
  }
  v13 = this->m_pAI->pNavigator->Get2DNavigator(this->m_pAI->pNavigator);
  if ( v13 )
    AINavigator2D::SetSuppressionPlanes(v13, &blockPlanes);
  Nav_SetGoalPos(this->m_pAI->pNavigator, goalPos, 0.0);
  if ( AICommonInterface::HasPath(this) )
  {
    if ( this->m_pAI->sentient->eTeam == TEAM_TWO && !bIgnoreSuppression && AIScriptedInterface::IsPathSuppressed(this) )
    {
      AIScriptedInterface::Debug_NotMoving(this, "friend suppr");
      this->ClearPath(this);
    }
    if ( v9 )
      AIScriptedInterface::PathChangeNotify(this, &vLookaheadDir);
    GScr_Notify(this->m_pAI->ent, scr_const.path_set, 0);
    this->m_pAI->iPathEndTime = 0;
    this->m_pAI->bArrivalFailed = 0;
    this->UpdateCloseEnt(this);
  }
  HasPath = AICommonInterface::HasPath(this);
  m_pAI = this->m_pAI;
  if ( HasPath )
  {
    v16 = m_pAI->pNavigator->GetPathDistToGoal(m_pAI->pNavigator);
    MaxSpeedForPathLength = GetMaxSpeedForPathLength(v16);
    this->m_pAI->path_maxSpeed = *(float *)&MaxSpeedForPathLength;
  }
  else
  {
    m_pAI->path_maxSpeed = -1.0;
  }
  if ( !AICommonInterface::HasPath(this) )
    AIScriptedInterface::HandleInvalidPath(this);
  return 1;
}

/*
==============
AIScriptedInterface::FindPathToClaimNode
==============
*/
char AIScriptedInterface::FindPathToClaimNode(AIScriptedInterface *this, pathnode_t *node, int allowNegotiationLinks, int ignoreSuppression)
{
  ai_scripted_t *m_pAI; 
  float radius; 
  float v11; 
  bool Path; 
  vec3_t pos; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 4196, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( this->m_pAI->ent->tagInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 4197, ASSERT_TYPE_ASSERT, "( !m_pAI->ent->tagInfo )", (const char *)&queryFormat, "!m_pAI->ent->tagInfo") )
    __debugbreak();
  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 4198, ASSERT_TYPE_ASSERT, "( node )", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( AICommonInterface::HasPath(this) || level.time >= this->m_pAI->pathWaitTime )
  {
    pathnode_t::GetPos(node, &pos);
    m_pAI = this->m_pAI;
    radius = m_pAI->codeGoal.radius;
    if ( radius <= 15.0 )
      v11 = radius * radius;
    else
      v11 = FLOAT_225_0;
    if ( AICommonInterface::PointNearPointSqDist(this, &m_pAI->ent->r.currentOrigin, &pos, v11) )
      return 1;
    Path = AIScriptedInterface::FindPath(this, &pos, node, allowNegotiationLinks != 0, ignoreSuppression != 0, 1);
    if ( AICommonInterface::HasPath(this) || AIScriptedInterface::PathPending(this) )
    {
      return 1;
    }
    else
    {
      this->ClearPileUp(this);
      return Path;
    }
  }
  else
  {
    this->ClearPileUp(this);
    AIScriptedInterface::Debug_NotMoving(this, "waiting for blockage");
    return 0;
  }
}

/*
==============
AIScriptedInterface::FindPathToFixedNode
==============
*/
void AIScriptedInterface::FindPathToFixedNode(AIScriptedInterface *this)
{
  ai_scripted_t *m_pAI; 
  float v3; 
  float v4; 
  float v5; 
  pathnode_t *node; 
  ai_scripted_t *v7; 
  sentient_s *sentient; 
  pathnode_t *pPrevClaimedNode; 
  pathnode_t *pClaimedNode; 
  ai_scripted_t *v11; 
  pathnode_t *v12; 
  bool v13; 
  bool v14; 
  ai_scripted_t *v15; 
  ai_scripted_t *v16; 
  bool fixedNodeNudged; 
  gentity_s *TargetEntity; 
  sentient_s *v19; 
  ai_scripted_t *v20; 
  pathnode_t *v23; 
  bool v24; 
  bool v25; 
  ai_scripted_t *v26; 
  sentient_s *v27; 
  pathnode_t *v28; 
  pathnode_t *v29; 
  bool CanClaimNode; 
  ai_scripted_t *v31; 
  ai_scripted_t *v32; 
  pathnode_t *v33; 
  bool v34; 
  ai_scripted_t *v35; 
  bool v36; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 4858, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  m_pAI = this->m_pAI;
  v3 = m_pAI->codeGoal.pos.v[0];
  v4 = m_pAI->codeGoal.pos.v[1];
  v5 = m_pAI->codeGoal.pos.v[2];
  node = m_pAI->codeGoal.node;
  if ( m_pAI->fixedNodeNudged )
  {
    if ( m_pAI->sentient->pClaimedNode && !AICommonInterface::HasPath(this) && AIScriptedInterface::AtClaimNode(this) )
    {
      this->m_pAI->fixedNodeNudged = 0;
    }
    else
    {
      v7 = this->m_pAI;
      sentient = v7->sentient;
      pPrevClaimedNode = sentient->pPrevClaimedNode;
      if ( !pPrevClaimedNode && !sentient->pClaimedNode || node && (pPrevClaimedNode && pPrevClaimedNode != node || (pClaimedNode = sentient->pClaimedNode) != NULL && pClaimedNode != node) )
        v7->fixedNodeNudged = 0;
    }
  }
  AIScriptedInterface::ClearUseEnemyGoal(this);
  v11 = this->m_pAI;
  v12 = v11->codeGoal.node;
  v13 = !v12 || v12 != node;
  v14 = (v3 != v11->codeGoal.pos.v[0] || v4 != v11->codeGoal.pos.v[1] || v5 != v11->codeGoal.pos.v[2]) && v13;
  v11->goalPosChanged = v14;
  v15 = this->m_pAI;
  v16 = v15;
  if ( v15->goalPosChanged )
  {
    fixedNodeNudged = v15->fixedNodeNudged;
    v15->fixedNodeNudged = 0;
    GScr_Notify(this->m_pAI->ent, scr_const.goal_changed, 0);
    *(_WORD *)&this->m_pAI->fixedNodeNudged = fixedNodeNudged;
    v15 = this->m_pAI;
    v16 = v15;
  }
  if ( v15->fixedNodeNudged || !v15->sentient->pClaimedNode && v15->codeGoal.node )
    goto LABEL_42;
  if ( !v16->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 4804, ASSERT_TYPE_ASSERT, "( m_pAI->sentientInfo )", (const char *)&queryFormat, "m_pAI->sentientInfo") )
    __debugbreak();
  TargetEntity = AICommonInterface::GetTargetEntity(this);
  if ( !TargetEntity )
    goto LABEL_42;
  v19 = TargetEntity->sentient;
  if ( v19 )
  {
    if ( level.time - this->m_pAI->sentientInfo[v19 - level.sentients].lastKnownPosTime > 10000 )
      goto LABEL_42;
  }
  v20 = this->m_pAI;
  _XMM0 = LODWORD(v20->codeGoal.radius);
  __asm { vminss  xmm3, xmm0, cs:__real@42800000; buffer }
  if ( v20->eState[v20->stateLevel] != AIS_BEHAVE )
    goto LABEL_42;
  v23 = v20->sentient->pClaimedNode;
  if ( v23 )
  {
    if ( v23->constant.type != 9 )
      goto LABEL_42;
  }
  if ( !AICommonInterface::PointNearPoint(this, &v20->ent->r.currentOrigin, &v20->codeGoal.pos, *(float *)&_XMM3) )
  {
LABEL_42:
    v24 = AIScriptedInterface::KeepClaimedNode(this);
    v25 = AIScriptedInterface::UsingCoverNodes(this);
    if ( v24 )
    {
      if ( !v25 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 4901, ASSERT_TYPE_ASSERT, "( UsingCoverNodes() )", (const char *)&queryFormat, "UsingCoverNodes()") )
        __debugbreak();
      if ( AICommonInterface::HasPath(this) )
      {
        this->ClearPath(this);
        AIScriptedInterface::Debug_NotMoving(this, "fixed node - keeping claimed node");
        AIScriptedInterface::TeamMoveBlocked(this);
      }
      return;
    }
    if ( !v25 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 4911, ASSERT_TYPE_ASSERT, "( UsingCoverNodes() )", (const char *)&queryFormat, "UsingCoverNodes()") )
      __debugbreak();
    v26 = this->m_pAI;
    v27 = v26->sentient;
    v28 = v27->pClaimedNode;
    if ( v26->fixedNodeNudged )
    {
      if ( !v28 && !v27->pPrevClaimedNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 4919, ASSERT_TYPE_ASSERT, "(sentient->pClaimedNode || sentient->pPrevClaimedNode)", (const char *)&queryFormat, "sentient->pClaimedNode || sentient->pPrevClaimedNode") )
        __debugbreak();
      v29 = v27->pClaimedNode;
      if ( !v29 )
        v29 = v27->pPrevClaimedNode;
    }
    else
    {
      v29 = v26->codeGoal.node;
    }
    if ( !AIScriptedInterface::IsFixedNodeUseable(this, 0) && !this->m_pAI->commitToFixedNode )
    {
      this->ClearPath(this);
      AIScriptedInterface::Debug_NotMoving(this, "fixed node - not useable");
      AIScriptedInterface::TeamMoveBlocked(this);
      return;
    }
    if ( v29 )
    {
      if ( AIScriptedInterface::FindPathToClaimNode(this, v29, 1, 0) )
      {
        if ( !this->m_pAI->commitToFixedNode && AICommonInterface::HasPath(this) )
        {
          this->m_pAI->commitToFixedNode = 1;
          GScr_Notify(this->m_pAI->ent, scr_const.start_move, 0);
        }
        CanClaimNode = Path_CanClaimNode(v29, v27);
        goto LABEL_73;
      }
      AIScriptedInterface::Debug_NotMoving(this, "fixed node - no path to claim node");
      AIScriptedInterface::TeamMoveBlocked(this);
      v29 = NULL;
    }
    else
    {
      AIScriptedInterface::FindPathToGoalDirect(this);
      if ( AICommonInterface::HasPath(this) )
      {
        v31 = this->m_pAI;
        if ( !v31->commitToFixedNode )
        {
          v31->commitToFixedNode = 1;
          GScr_Notify(this->m_pAI->ent, scr_const.start_move, 0);
        }
      }
    }
    CanClaimNode = AICommonInterface::HasPath(this);
LABEL_73:
    if ( CanClaimNode )
      Sentient_ClaimNode(v27, v29);
    v32 = this->m_pAI;
    if ( !v32->goalPosChanged )
    {
      v33 = v27->pClaimedNode;
      v34 = v33 && v28 != v33;
      v32->goalPosChanged = v34;
      v35 = this->m_pAI;
      if ( v35->goalPosChanged )
      {
        v36 = v35->fixedNodeNudged;
        v35->fixedNodeNudged = 0;
        GScr_Notify(this->m_pAI->ent, scr_const.goal_changed, 0);
        this->m_pAI->commitToFixedNode = 0;
        this->m_pAI->fixedNodeNudged = v36;
      }
    }
  }
}

/*
==============
AIScriptedInterface::FindPathToGoal
==============
*/
void AIScriptedInterface::FindPathToGoal(AIScriptedInterface *this)
{
  ai_scripted_t *m_pAI; 
  bool v3; 
  ai_scripted_t *v4; 
  const pathnode_t *pClaimedNode; 
  pathnode_t *ClaimedNode; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 5166, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI", -2i64) )
    __debugbreak();
  Profile_Begin(265);
  SV_Profile_BeginEvent(SVPROF_AI_PATH_FINDING);
  m_pAI = this->m_pAI;
  if ( m_pAI->coverFindTask.status[0] == 3 )
  {
    AI_ScheduledCoverFind_Reset(&m_pAI->coverFindTask);
    m_pAI = this->m_pAI;
  }
  if ( m_pAI->pathFindTask.status[0] == 3 )
    m_pAI->pathFindTask.status[0] = 0;
  v3 = !AIScriptedInterface::SetupFindPathToGoal(this);
  v4 = this->m_pAI;
  if ( v3 )
  {
    if ( v4->useEnemyGoal )
      AIScriptedInterface::ClearUseEnemyGoal(this);
  }
  else if ( v4->codeGoal.bMultiGoalPath )
  {
    AIScriptedInterface::FindPathToGoalPath(this);
  }
  else
  {
    pClaimedNode = v4->sentient->pClaimedNode;
    ClaimedNode = AIScriptedInterface::FindClaimedNode(this);
    AIScriptedInterface::FindPathToGoalInternal(this, ClaimedNode, pClaimedNode);
  }
  Profile_EndInternal(NULL);
  SV_Profile_EndEvent(SVPROF_AI_PATH_FINDING);
}

/*
==============
AIScriptedInterface::FindPathToGoalDirect
==============
*/
void AIScriptedInterface::FindPathToGoalDirect(AIScriptedInterface *this)
{
  int v2; 
  ai_scripted_t *m_pAI; 
  aiGoalSources codeGoalSrc; 
  unsigned __int16 number; 
  __int64 v6; 
  unsigned int v7; 
  __int64 v8; 
  EntHandle *p_hEnt; 
  ai_script_goal_t *BTGoal; 
  ai_script_goal_t *v11; 
  unsigned __int64 eTeam; 
  int v13; 
  ai_scripted_t *v14; 
  __int64 v15; 
  bitarray<224> teamFlags; 
  vec3_t vFinalGoal; 

  if ( !AICommonInterface::HasPath(this) && level.time < this->m_pAI->pathWaitTime )
  {
    this->ClearPileUp(this);
    AIScriptedInterface::Debug_NotMoving(this, "waiting for blockage");
    return;
  }
  v2 = 2047;
  m_pAI = this->m_pAI;
  codeGoalSrc = m_pAI->codeGoalSrc;
  if ( codeGoalSrc == AI_GOAL_SRC_SCRIPT_ENTITY_GOAL )
  {
    number = m_pAI->scriptGoal.hEnt.number;
    if ( !number )
      goto LABEL_55;
    v6 = number;
    v7 = number - 1;
    if ( v7 >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v7, 2048) )
      __debugbreak();
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    v8 = v6 - 1;
    if ( g_entities[v8].r.isInUse != g_entityIsInUse[v8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( !g_entityIsInUse[v8] )
    {
      LODWORD(v15) = m_pAI->scriptGoal.hEnt.number - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v15) )
        __debugbreak();
    }
    if ( !m_pAI->scriptGoal.hEnt.number )
    {
LABEL_55:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 4014, ASSERT_TYPE_ASSERT, "(m_pAI->scriptGoal.hEnt.isDefined())", (const char *)&queryFormat, "m_pAI->scriptGoal.hEnt.isDefined()") )
        __debugbreak();
    }
    p_hEnt = &this->m_pAI->scriptGoal.hEnt;
LABEL_28:
    v2 = EntHandle::entnum(p_hEnt);
    goto LABEL_29;
  }
  if ( codeGoalSrc == AI_GOAL_SRC_BT_ENTITY_GOAL )
  {
    BTGoal = AIScriptedInterface::GetBTGoal(this);
    v11 = BTGoal;
    if ( (!BTGoal->bValid || !EntHandle::isDefined(&BTGoal->hEnt)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 4020, ASSERT_TYPE_ASSERT, "(pBTGoal->bValid && pBTGoal->hEnt.isDefined())", (const char *)&queryFormat, "pBTGoal->bValid && pBTGoal->hEnt.isDefined()") )
      __debugbreak();
    p_hEnt = &v11->hEnt;
    goto LABEL_28;
  }
LABEL_29:
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 4024, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  eTeam = (unsigned int)this->m_pAI->sentient->eTeam;
  memset(&teamFlags, 0, sizeof(teamFlags));
  if ( (unsigned int)eTeam >= 0xE0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", eTeam, 224) )
    __debugbreak();
  teamFlags.array[eTeam >> 5] |= 0x80000000 >> (eTeam & 0x1F);
  v13 = Nav_TranslateTeamFlagsToRepulsorUsageFlags(&teamFlags);
  if ( Nav_IsPointInRepulsorBadplace(&this->m_pAI->codeGoal.pos, v13, this->m_pAI->ent->s.number, v2) )
  {
    AIScriptedInterface::Debug_NotMoving(this, "badplace repulsor");
    return;
  }
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 3934, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 3935, ASSERT_TYPE_ASSERT, "( m_pAI->sentient )", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  if ( AICommonInterface::HasPath(this) )
  {
    AICommonInterface::GetPathFinalGoal(this, &vFinalGoal);
    if ( AICommonInterface::PointAtGoal(this, &vFinalGoal, &this->m_pAI->codeGoal) )
      goto LABEL_46;
    goto LABEL_45;
  }
  v14 = this->m_pAI;
  if ( v14->meleeAttackDist != 0.0 || !AICommonInterface::PointAtGoal(this, &v14->ent->r.currentOrigin, &v14->codeGoal) )
  {
LABEL_45:
    AIScriptedInterface::FindPath(this, &this->m_pAI->codeGoal.pos, NULL, 1, 0, 1);
    goto LABEL_46;
  }
  AIScriptedInterface::Debug_NotMoving(this, "within goal radius");
LABEL_46:
  if ( !AICommonInterface::HasPath(this) && !AIScriptedInterface::PathPending(this) )
    this->ClearPileUp(this);
}

/*
==============
AIScriptedInterface::FindPathToGoalDirectInternal
==============
*/
bool AIScriptedInterface::FindPathToGoalDirectInternal(AIScriptedInterface *this)
{
  ai_scripted_t *m_pAI; 
  vec3_t vFinalGoal; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 3934, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 3935, ASSERT_TYPE_ASSERT, "( m_pAI->sentient )", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  if ( AICommonInterface::HasPath(this) )
  {
    AICommonInterface::GetPathFinalGoal(this, &vFinalGoal);
    if ( AICommonInterface::PointAtGoal(this, &vFinalGoal, &this->m_pAI->codeGoal) )
      return 1;
  }
  else
  {
    m_pAI = this->m_pAI;
    if ( m_pAI->meleeAttackDist == 0.0 && AICommonInterface::PointAtGoal(this, &m_pAI->ent->r.currentOrigin, &m_pAI->codeGoal) )
    {
      AIScriptedInterface::Debug_NotMoving(this, "within goal radius");
      return 1;
    }
  }
  return AIScriptedInterface::FindPath(this, &this->m_pAI->codeGoal.pos, NULL, 1, 0, 1);
}

/*
==============
AIScriptedInterface::FindPathToGoalInternal
==============
*/
void AIScriptedInterface::FindPathToGoalInternal(AIScriptedInterface *this, pathnode_t *node, const pathnode_t *prevClaimNode)
{
  sentient_s *sentient; 
  const tacpoint_t *CoverTacPoint; 
  const tacpoint_t *v8; 
  const dvar_t *v9; 
  ai_scripted_t *m_pAI; 
  const pathnode_t *pClaimedNode; 
  bool v12; 
  ai_scripted_t *v13; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 5206, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  sentient = this->m_pAI->sentient;
  CoverTacPoint = AIScriptedInterface::GetCoverTacPoint(this);
  v8 = CoverTacPoint;
  if ( node )
  {
    if ( !AIScriptedInterface::TryPathToNode(this, node) )
      node = NULL;
  }
  else if ( !CoverTacPoint || AIScriptedInterface::IsBTGoalValid(this) )
  {
    if ( !this->m_pAI->useEnemyGoal || AIScriptedInterface::IsBTGoalValid(this) )
    {
      AIScriptedInterface::FindPathToGoalDirect(this);
      if ( AIScriptedInterface::IsBTGoalValid(this) )
        this->m_pAI->useEnemyGoal = 0;
    }
    else
    {
      if ( !this->m_pAI->useEnemyGoal && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 5236, ASSERT_TYPE_ASSERT, "( !node && m_pAI->useEnemyGoal )", (const char *)&queryFormat, "!node && m_pAI->useEnemyGoal") )
        __debugbreak();
      AIScriptedInterface::ClearUseEnemyGoal(this);
      if ( AIScriptedInterface::HadPath(this) )
        goto LABEL_21;
    }
  }
  else
  {
    v9 = DVARBOOL_ai_whyaminotmoving;
    if ( !DVARBOOL_ai_whyaminotmoving && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_whyaminotmoving") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    if ( v9->current.enabled )
    {
      G_DebugLine(&this->m_pAI->ent->r.currentOrigin, &v8->m_Pos, &colorMdPurple, 0);
      G_DebugStarWithDuration(&v8->m_Pos, &colorMdGreen, 1);
    }
    AIScriptedInterface::FindPathToTacPoint(this, v8);
  }
  if ( AIScriptedInterface::CheckStop(this, node) )
  {
LABEL_21:
    AIScriptedInterface::Debug_NotMoving(this, "enemy on path");
    this->ClearPath(this);
    AIScriptedInterface::TeamMoveBlocked(this);
    return;
  }
  if ( node || AICommonInterface::HasPath(this) )
  {
    Sentient_ClaimNode(sentient, node);
    if ( node )
      AIScriptedInterface::SetCoverTacPoint(this, NULL);
  }
  m_pAI = this->m_pAI;
  if ( !m_pAI->goalPosChanged )
  {
    pClaimedNode = sentient->pClaimedNode;
    v12 = pClaimedNode && prevClaimNode != pClaimedNode;
    m_pAI->goalPosChanged = v12;
    v13 = this->m_pAI;
    if ( v13->goalPosChanged )
    {
      v13->fixedNodeNudged = 0;
      GScr_Notify(this->m_pAI->ent, scr_const.goal_changed, 0);
    }
  }
}

/*
==============
AIScriptedInterface::FindPathToGoalPath
==============
*/
void AIScriptedInterface::FindPathToGoalPath(AIScriptedInterface *this)
{
  __int128 v1; 
  ai_scripted_t *m_pAI; 
  char v4; 
  AINavigator *pNavigator; 
  ai_scripted_t *v6; 
  unsigned __int8 lastPathedPoint; 
  AINavigator *v8; 
  AINavigator *v9; 
  bfx::SpaceHandle *p_hSpace; 
  unsigned int m_Layer; 
  char v12; 
  AINavigator2D *v13; 
  ai_scripted_t *v14; 
  ai_scripted_t *v15; 
  unsigned __int8 v16; 
  unsigned __int8 v17; 
  float v18; 
  const bfx::PathSpec *v19; 
  bool HasPath; 
  ai_scripted_t *v21; 
  float v22; 
  double MaxSpeedForPathLength; 
  AINavigator *v24; 
  AINavigator_vtbl *v25; 
  vec3_t *p_vGoalPos; 
  __int64 v27; 
  bfx::SpaceHandle *v28; 
  const bfx::PathSpec *PathSpec; 
  scrContext_t *v30; 
  ai_scripted_t *v31; 
  int curPoint; 
  ai_scripted_t *v33; 
  bool avoidance_active; 
  char v35[8]; 
  vec3_t vPoint; 
  vec3_t outUp; 
  vec3_t vGoalPos; 
  __int128 v39; 

  m_pAI = this->m_pAI;
  v39 = v1;
  if ( !m_pAI->scriptGoalPath.numPoints && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 4045, ASSERT_TYPE_ASSERT, "(m_pAI->scriptGoalPath.IsValid())", (const char *)&queryFormat, "m_pAI->scriptGoalPath.IsValid()") )
    __debugbreak();
  v4 = 0;
  pNavigator = this->m_pAI->pNavigator;
  if ( pNavigator->m_bMultiGoalPath && pNavigator->HasPath(pNavigator) && (v6 = this->m_pAI, lastPathedPoint = v6->scriptGoalPath.lastPathedPoint, lastPathedPoint != 0xFF) )
  {
    if ( lastPathedPoint == v6->scriptGoalPath.numPoints - 1 || !v6->pNavigator->CanAddMultiGoalPathGoal(v6->pNavigator) || this->m_pAI->pNavigator->GetPathDistToGoal(this->m_pAI->pNavigator) >= 768.0 )
      goto LABEL_13;
  }
  else
  {
    this->ClearPath(this);
    this->m_pAI->scriptGoalPath.lastPathedPoint = -1;
  }
  v4 = 1;
LABEL_13:
  v8 = this->m_pAI->pNavigator;
  if ( !v4 )
  {
    LOBYTE(v6) = -1;
    v8->GetNextMultiGoalPathGoal(v8, (unsigned __int8)v6, &vPoint, (bool *)v35);
    v24 = this->m_pAI->pNavigator;
    v25 = v24->__vftable;
    if ( v35[0] )
    {
      v27 = ((__int64 (*)(void))v25->Get2DNavigator)();
      if ( !v27 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 4141, ASSERT_TYPE_ASSERT, "(pNav2D)", (const char *)&queryFormat, "pNav2D") )
        __debugbreak();
      AINavigator::GetUpVector((AINavigator *)v27, &outUp);
      v28 = *(bfx::SpaceHandle **)(v27 + 16);
      if ( !v28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 4147, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
        __debugbreak();
      PathSpec = AINavigator2D::GetPathSpec((AINavigator2D *)v27);
      Nav_GetClosestVerticalPos(&this->m_pAI->scriptGoalPath.path[this->m_pAI->scriptGoalPath.curPoint], &outUp, *(_DWORD *)(v27 + 112), v28, PathSpec, &vGoalPos, NULL);
      p_vGoalPos = &vGoalPos;
    }
    else
    {
      v25->GetRequestedGoalPos(v24, &vPoint);
      p_vGoalPos = &this->m_pAI->scriptGoalPath.path[this->m_pAI->scriptGoalPath.curPoint];
    }
    if ( !AICommonInterface::PointNearPointSqDist(this, &vPoint, p_vGoalPos, 4.0) )
    {
      v30 = ScriptContext_Server();
      Scr_AddInt(v30, this->m_pAI->scriptGoalPath.curPoint);
      GScr_Notify(this->m_pAI->ent, scr_const.subgoal, 1u);
      v31 = this->m_pAI;
      curPoint = v31->scriptGoalPath.curPoint;
      if ( curPoint == v31->scriptGoalPath.numPoints - 1 )
        v31->scriptGoalPath.numPoints = 0;
      else
        v31->scriptGoalPath.curPoint = curPoint + 1;
    }
    v33 = this->m_pAI;
    avoidance_active = 0;
    if ( (float)((float)((float)((float)(vPoint.v[1] - v33->ent->r.currentOrigin.v[1]) * (float)(vPoint.v[1] - v33->ent->r.currentOrigin.v[1])) + (float)((float)(vPoint.v[0] - v33->ent->r.currentOrigin.v[0]) * (float)(vPoint.v[0] - v33->ent->r.currentOrigin.v[0]))) + (float)((float)(vPoint.v[2] - v33->ent->r.currentOrigin.v[2]) * (float)(vPoint.v[2] - v33->ent->r.currentOrigin.v[2]))) < 16384.0 )
      avoidance_active = v33->avoidance_active;
    v33->pNavigator->m_bAllowSkipMultigoalPoint = avoidance_active;
    goto LABEL_51;
  }
  AINavigator::GetUpVector(v8, &outUp);
  v9 = this->m_pAI->pNavigator;
  p_hSpace = &v9->m_pSpace->hSpace;
  m_Layer = v9->m_Layer;
  v12 = 0;
  v13 = (AINavigator2D *)((__int64 (*)(void))v9->Get2DNavigator)();
  if ( this->m_pAI->pNavigator->GetPathDistToGoal(this->m_pAI->pNavigator) >= 768.0 )
    goto LABEL_32;
  while ( 1 )
  {
    v14 = this->m_pAI;
    if ( v14->scriptGoalPath.lastPathedPoint == v14->scriptGoalPath.numPoints - 1 || !v14->pNavigator->CanAddMultiGoalPathGoal(v14->pNavigator) )
      break;
    v15 = this->m_pAI;
    v16 = v15->scriptGoalPath.lastPathedPoint;
    if ( v16 == 0xFF )
      v17 = v15->scriptGoalPath.curPoint;
    else
      v17 = v16 + 1;
    if ( v17 == v15->scriptGoalPath.numPoints - 1 && v15->scriptGoal.node )
    {
      *(_QWORD *)vPoint.v = *(_QWORD *)v15->scriptGoalPath.path[v17].v;
      v18 = v15->scriptGoalPath.path[v17].v[2];
    }
    else
    {
      if ( v13 )
      {
        v19 = AINavigator2D::GetPathSpec(v13);
        Nav_GetClosestVerticalPos(&this->m_pAI->scriptGoalPath.path[v17], &outUp, m_Layer, p_hSpace, v19, &vPoint, NULL);
        v15 = this->m_pAI;
        goto LABEL_27;
      }
      *(_QWORD *)vPoint.v = *(_QWORD *)v15->scriptGoalPath.path[v17].v;
      v18 = v15->scriptGoalPath.path[v17].v[2];
    }
    vPoint.v[2] = v18;
LABEL_27:
    if ( !v15->pNavigator->AddMultiGoalPathGoal(v15->pNavigator, &vPoint) )
      break;
    v12 = 1;
    this->m_pAI->iPathEndTime = 0;
    this->m_pAI->scriptGoalPath.lastPathedPoint = v17;
    if ( this->m_pAI->pNavigator->GetPathDistToGoal(this->m_pAI->pNavigator) >= 768.0 )
      goto LABEL_31;
  }
  if ( !v12 )
    goto LABEL_32;
LABEL_31:
  GScr_Notify(this->m_pAI->ent, scr_const.path_set, 0);
LABEL_32:
  HasPath = AICommonInterface::HasPath(this);
  v21 = this->m_pAI;
  if ( HasPath )
  {
    v22 = v21->pNavigator->GetPathDistToGoal(v21->pNavigator);
    MaxSpeedForPathLength = GetMaxSpeedForPathLength(v22);
    this->m_pAI->path_maxSpeed = *(float *)&MaxSpeedForPathLength;
  }
  else
  {
    v21->path_maxSpeed = -1.0;
  }
LABEL_51:
  if ( this->m_pAI->sentient->eTeam == TEAM_TWO && AICommonInterface::HasPath(this) && AIScriptedInterface::IsPathSuppressed(this) )
  {
    AIScriptedInterface::Debug_NotMoving(this, "friend suppr");
    this->ClearPath(this);
  }
  if ( this->m_pAI->codeGoal.node && AICommonInterface::HasPath(this) && Path_CanClaimNode(this->m_pAI->codeGoal.node, this->m_pAI->sentient) )
    Sentient_ClaimNode(this->m_pAI->sentient, this->m_pAI->codeGoal.node);
}

/*
==============
AIScriptedInterface::FindPathToSentient
==============
*/
bool AIScriptedInterface::FindPathToSentient(AIScriptedInterface *this, sentient_s *pGoalEnt, int bSuppressable)
{
  AINavigator2D *v6; 
  bool result; 
  vec3_t vOriginOut; 
  vec3_t vFinalGoal; 
  vec3_t vPoint; 
  PathBlockPlanes blockPlanes; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 5565, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !pGoalEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 5566, ASSERT_TYPE_ASSERT, "( pGoalEnt )", (const char *)&queryFormat, "pGoalEnt") )
    __debugbreak();
  Sentient_GetOrigin(pGoalEnt, &vOriginOut);
  if ( AICommonInterface::HasPath(this) )
  {
    AICommonInterface::GetPathFinalGoal(this, &vFinalGoal);
    if ( AICommonInterface::PointNear(this, &vFinalGoal, &vOriginOut) )
      return 1;
    if ( !this->m_pAI->pNavigator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 5579, ASSERT_TYPE_ASSERT, "( m_pAI->pNavigator )", (const char *)&queryFormat, "m_pAI->pNavigator") )
      __debugbreak();
    this->m_pAI->pNavigator->GetRequestedGoalPos(this->m_pAI->pNavigator, &vPoint);
    if ( AICommonInterface::PointAt(this, &vPoint, &vOriginOut) )
      return 1;
    this->ClearPath(this);
  }
  if ( bSuppressable )
    AIScriptedInterface::GetSuppressionPlanes(this, &blockPlanes);
  else
    blockPlanes.iPlaneCount = 0;
  v6 = this->m_pAI->pNavigator->Get2DNavigator(this->m_pAI->pNavigator);
  if ( v6 )
    AINavigator2D::SetSuppressionPlanes(v6, &blockPlanes);
  Nav_SetGoalPos(this->m_pAI->pNavigator, &vOriginOut, 0.0);
  this->m_pAI->iPathEndTime = 0;
  this->m_pAI->bArrivalFailed = 0;
  if ( AICommonInterface::HasPath(this) )
  {
    Sentient_SetPrevClaimNode(this->m_pAI->sentient);
    GScr_Notify(this->m_pAI->ent, scr_const.path_set, 0);
    return 1;
  }
  result = AIScriptedInterface::PathPending(this);
  if ( result )
    return 1;
  return result;
}

/*
==============
AIScriptedInterface::FindPathToTacPoint
==============
*/
char AIScriptedInterface::FindPathToTacPoint(AIScriptedInterface *this, const tacpoint_t *pTacPoint)
{
  unsigned __int64 eTeam; 
  int v6; 
  float radius; 
  float v8; 
  bool Path; 
  vec3_t outPos; 
  bitarray<224> teamFlags; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 5110, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( this->m_pAI->ent->tagInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 5111, ASSERT_TYPE_ASSERT, "( !m_pAI->ent->tagInfo )", (const char *)&queryFormat, "!m_pAI->ent->tagInfo") )
    __debugbreak();
  if ( !pTacPoint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 5112, ASSERT_TYPE_ASSERT, "( pTacPoint )", (const char *)&queryFormat, "pTacPoint") )
    __debugbreak();
  if ( !AICommonInterface::HasPath(this) && level.time < this->m_pAI->pathWaitTime )
  {
    this->ClearPileUp(this);
    AIScriptedInterface::Debug_NotMoving(this, "waiting for blockage");
    return 0;
  }
  TacGraph_GetApproxGroundPosForPoint(pTacPoint, &outPos);
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 5124, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  eTeam = (unsigned int)this->m_pAI->sentient->eTeam;
  memset(&teamFlags, 0, sizeof(teamFlags));
  if ( (unsigned int)eTeam >= 0xE0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", eTeam, 224) )
    __debugbreak();
  teamFlags.array[eTeam >> 5] |= 0x80000000 >> (eTeam & 0x1F);
  v6 = Nav_TranslateTeamFlagsToRepulsorUsageFlags(&teamFlags);
  if ( Nav_IsPointInRepulsorBadplace(&outPos, v6, this->m_pAI->ent->s.number, 2047) )
  {
    AIScriptedInterface::Debug_NotMoving(this, "badplace repulsor");
    return 0;
  }
  radius = this->m_pAI->codeGoal.radius;
  if ( radius <= 15.0 )
    v8 = radius * radius;
  else
    v8 = FLOAT_225_0;
  if ( AICommonInterface::HasPath(this) && AICommonInterface::PointNearPointSqDist(this, &this->m_pAI->ent->r.currentOrigin, &outPos, 16.0) )
  {
    this->ClearPath(this);
  }
  else if ( !AICommonInterface::PointNearPointSqDist(this, &this->m_pAI->ent->r.currentOrigin, &outPos, v8) )
  {
    Path = AIScriptedInterface::FindPath(this, &outPos, NULL, 1, 1, 1);
    if ( !AICommonInterface::HasPath(this) && !AIScriptedInterface::PathPending(this) )
    {
      this->ClearPileUp(this);
      return Path;
    }
  }
  return 1;
}

/*
==============
AIActorInterface::FinishSpawning
==============
*/
void AIActorInterface::FinishSpawning(AIActorInterface *this)
{
  gentity_s *ent; 
  gentity_s *Entity; 
  const char *v4; 
  const AITypeScript *AITypeScriptByClassname; 
  scrContext_t *v6; 
  unsigned int v7; 

  if ( !this->m_pAI->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 815, ASSERT_TYPE_ASSERT, "( m_pAI->ent )", (const char *)&queryFormat, "m_pAI->ent") )
    __debugbreak();
  if ( this->m_pAI->ent->actor != this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 816, ASSERT_TYPE_ASSERT, "( m_pAI->ent->actor == m_pAI )", (const char *)&queryFormat, "m_pAI->ent->actor == m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 817, ASSERT_TYPE_ASSERT, "( m_pAI->sentient )", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  if ( this->m_pAI->ent->sentient != this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 818, ASSERT_TYPE_ASSERT, "( m_pAI->ent->sentient == m_pAI->sentient )", (const char *)&queryFormat, "m_pAI->ent->sentient == m_pAI->sentient") )
    __debugbreak();
  if ( this->m_pAI->sentient->ent != this->m_pAI->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 819, ASSERT_TYPE_ASSERT, "( m_pAI->sentient->ent == m_pAI->ent )", (const char *)&queryFormat, "m_pAI->sentient->ent == m_pAI->ent") )
    __debugbreak();
  ent = this->m_pAI->ent;
  Entity = G_Utils_FindEntity(NULL, 380, scr_const.player);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 826, ASSERT_TYPE_ASSERT, "( player )", (const char *)&queryFormat, rowName) )
    __debugbreak();
  if ( !Entity->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 827, ASSERT_TYPE_ASSERT, "( player->sentient )", (const char *)&queryFormat, "player->sentient") )
    __debugbreak();
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 847, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  v4 = SL_ConvertToString(ent->classname);
  if ( !IsActorClassname(v4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 850, ASSERT_TYPE_ASSERT, "( IsActorClassname( classname ) )", (const char *)&queryFormat, "IsActorClassname( classname )") )
    __debugbreak();
  AITypeScriptByClassname = GScrSP_FindAITypeScriptByClassname(v4 + 6);
  if ( !AITypeScriptByClassname && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 853, ASSERT_TYPE_ASSERT, "( typeScript )", (const char *)&queryFormat, "typeScript") )
    __debugbreak();
  if ( !AITypeScriptByClassname->main && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 854, ASSERT_TYPE_ASSERT, "( typeScript->main )", (const char *)&queryFormat, "typeScript->main") )
    __debugbreak();
  v6 = ScriptContext_Server();
  v7 = GScr_ExecEntThread(ent, AITypeScriptByClassname->main, 0);
  Scr_FreeThread(v6, v7);
  if ( AIActorInterface::IsLightweight(this) )
    ++level.actorLightCount;
  G_Utils_CreateEntityDObjScriptable(ent);
}

/*
==============
AIActorInterface::FinishSpawningAll
==============
*/
void AIActorInterface::FinishSpawningAll(void)
{
  __int64 v0; 
  scrContext_t *v1; 
  int v2; 
  __int64 v3; 
  gentity_s *v4; 
  const AITypeScript *AITypeScriptByClassname; 
  unsigned int v6; 
  unsigned int v7; 
  MapEnts *mapEnts; 
  unsigned int i; 
  const AITypeScript *v10; 
  int spawner; 
  const spawner_t *SpawnerByIndex; 
  unsigned int v13; 
  unsigned int v14; 
  int v15; 
  const AITypeScript *v16; 
  unsigned int v17; 
  unsigned int v18; 
  const bitarray<224> *AllTeamFlags; 
  __int128 v20; 
  double v21; 
  unsigned int v22; 
  actor_s *j; 
  __int64 v24; 
  __int64 v25; 
  char *value; 
  AIActorInterface v27; 
  AIActorInterface *v28; 
  bitarray<224> iTeamFlags; 

  ++s_actorPrecacheTime;
  v0 = 0i64;
  v1 = ScriptContext_Server();
  v2 = 0;
  if ( level.num_entities > 0 )
  {
    v3 = 0i64;
    do
    {
      if ( (unsigned int)v2 >= 0x800 )
      {
        LODWORD(v25) = 2048;
        LODWORD(v24) = v2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v24, v25) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[v0].r.isInUse != g_entityIsInUse[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( g_entityIsInUse[v3] )
      {
        v4 = &g_entities[v0];
        if ( (unsigned __int16)(g_entities[v0].s.eType - 19) <= 1u )
        {
          value = (char *)SL_ConvertToString(v4->classname);
          if ( !IsActorClassname(value) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 929, ASSERT_TYPE_ASSERT, "( IsActorClassname( classname ) )", (const char *)&queryFormat, "IsActorClassname( classname )") )
            __debugbreak();
          value += 6;
          AITypeScriptByClassname = GScrSP_FindAITypeScriptByClassname(value);
          if ( !AITypeScriptByClassname && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 933, ASSERT_TYPE_ASSERT, "( typeScript )", (const char *)&queryFormat, "typeScript") )
            __debugbreak();
          if ( !AITypeScriptByClassname->main && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 934, ASSERT_TYPE_ASSERT, "( typeScript->main )", (const char *)&queryFormat, "typeScript->main") )
            __debugbreak();
          if ( !AITypeScriptByClassname->spawner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 935, ASSERT_TYPE_ASSERT, "( typeScript->spawner )", (const char *)&queryFormat, "typeScript->spawner") )
            __debugbreak();
          if ( v4->s.eType == ET_ACTOR_SPAWNER )
          {
            v6 = GScr_ExecEntThread(v4, AITypeScriptByClassname->spawner, 0);
            Scr_FreeThread(v1, v6);
          }
          if ( AITypeScriptByClassname->precacheTime != s_actorPrecacheTime )
          {
            Scr_AddString(v1, value);
            v7 = Scr_ExecThread(v1, AITypeScriptByClassname->precache, 1u);
            Scr_FreeThread(v1, v7);
            AITypeScriptByClassname->precacheTime = s_actorPrecacheTime;
          }
        }
      }
      ++v2;
      ++v3;
      ++v0;
    }
    while ( v2 < level.num_entities );
  }
  mapEnts = cm.mapEnts;
  for ( i = 0; i < cm.mapEnts->spawners.spawnerCount; ++i )
  {
    value = (char *)SL_ConvertToString(mapEnts->spawners.spanwerList[i].classname);
    if ( !IsActorClassname(value) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 955, ASSERT_TYPE_ASSERT, "( IsActorClassname( classname ) )", (const char *)&queryFormat, "IsActorClassname( classname )") )
      __debugbreak();
    value += 6;
    v10 = GScrSP_FindAITypeScriptByClassname(value);
    if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 960, ASSERT_TYPE_ASSERT, "( typeScript )", (const char *)&queryFormat, "typeScript") )
      __debugbreak();
    if ( !v10->main && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 961, ASSERT_TYPE_ASSERT, "( typeScript->main )", (const char *)&queryFormat, "typeScript->main") )
      __debugbreak();
    if ( !v10->spawner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 962, ASSERT_TYPE_ASSERT, "( typeScript->spawner )", (const char *)&queryFormat, "typeScript->spawner") )
      __debugbreak();
    spawner = v10->spawner;
    SpawnerByIndex = G_GetSpawnerByIndex(i);
    v13 = GScr_ExecSpawnerThread(SpawnerByIndex, spawner, 0);
    Scr_FreeThread(v1, v13);
    if ( v10->precacheTime != s_actorPrecacheTime )
    {
      Scr_AddString(v1, value);
      v14 = Scr_ExecThread(v1, v10->precache, 1u);
      Scr_FreeThread(v1, v14);
      v10->precacheTime = s_actorPrecacheTime;
    }
    mapEnts = cm.mapEnts;
  }
  v15 = 1;
  if ( NetConstStrings_GetNameFromIndex(NETCONSTSTRINGTYPE_AITYPE, 0, (const char **)&value) )
  {
    do
    {
      v16 = GScrSP_FindAITypeScriptByClassname(value);
      if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 981, ASSERT_TYPE_ASSERT, "( typeScript )", (const char *)&queryFormat, "typeScript") )
        __debugbreak();
      if ( v16->precacheTime != s_actorPrecacheTime )
      {
        Scr_AddString(v1, value);
        v17 = Scr_ExecThread(v1, v16->precache, 1u);
        Scr_FreeThread(v1, v17);
        v16->precacheTime = s_actorPrecacheTime;
      }
      v18 = v15++;
    }
    while ( NetConstStrings_GetNameFromIndex(NETCONSTSTRINGTYPE_AITYPE, v18, (const char **)&value) );
  }
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
    AllTeamFlags = Com_TeamsSP_GetAllTeamFlags();
  else
    AllTeamFlags = Com_TeamsMP_GetAllTeamFlags();
  v20 = *(_OWORD *)AllTeamFlags->array;
  v21 = *(double *)&AllTeamFlags->array[4];
  v22 = AllTeamFlags->array[6];
  *(_OWORD *)iTeamFlags.array = v20;
  *(double *)&iTeamFlags.array[4] = v21;
  iTeamFlags.array[6] = v22;
  for ( j = AIActorInterface::FirstActor(&iTeamFlags); j; j = AIActorInterface::NextActor(j, &iTeamFlags) )
  {
    AIActorInterface::AIActorInterface(&v27);
    v28 = NULL;
    AIActorInterface::SetActor(&v27, j);
    v28 = &v27;
    AIActorInterface::FinishSpawning(&v27);
    AIScriptedInterface::InitAnimScript(&v27);
  }
}

/*
==============
AIScriptedInterface::FinishWeaponDrop
==============
*/
void AIScriptedInterface::FinishWeaponDrop(AIScriptedInterface *this, ActorDelayedWeaponDrop *weapDrop)
{
  gentity_s *v4; 
  gentity_s *v5; 
  gentity_s *v6; 
  tmat43_t<vec3_t> matrix; 
  tmat43_t<vec3_t> penetrationTestMatrix; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 1236, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 1237, ASSERT_TYPE_ASSERT, "( m_pAI->ent )", (const char *)&queryFormat, "m_pAI->ent") )
    __debugbreak();
  if ( weapDrop->state )
  {
    BG_WeaponDef(&weapDrop->weapon, 0);
    if ( weapDrop->state == ACTOR_WEAP_DROP_FINISH && level.time > weapDrop->time )
    {
      G_Items_GetStateFromTag(this->m_pAI->ent, weapDrop->tagName, NULL, &matrix, 0);
      v4 = G_Items_DropWeapon(this->m_pAI->ent, &weapDrop->weapon, 0, 1, &matrix);
      if ( v4 )
        G_Items_EnablePhysicsDelayed(v4, this->m_pAI->ent, weapDrop->time, &weapDrop->matrix, weapDrop->tagName);
      weapDrop->state = ACTOR_WEAP_DROP_NONE;
    }
    else
    {
      G_Items_GetStateFromTag(this->m_pAI->ent, weapDrop->tagName, NULL, &penetrationTestMatrix, 0);
      v5 = G_Items_DropWeapon(this->m_pAI->ent, &weapDrop->weapon, 0, 1, &penetrationTestMatrix);
      v6 = v5;
      if ( v5 )
      {
        G_Items_SetStateFromTag(this->m_pAI->ent, weapDrop->tagName, v5, 0);
        *(_QWORD *)v6->s.lerp.pos.trDelta.v = 0i64;
        v6->s.lerp.pos.trDelta.v[2] = 0.0;
        v6->s.lerp.pos.trTime = level.time;
        if ( ((LODWORD(v6->s.lerp.pos.trDelta.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(v6->s.lerp.pos.trDelta.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(v6->s.lerp.pos.trDelta.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 1271, ASSERT_TYPE_SANITY, "( !IS_NAN( ( weapEnt->s.lerp.pos.trDelta )[0] ) && !IS_NAN( ( weapEnt->s.lerp.pos.trDelta )[1] ) && !IS_NAN( ( weapEnt->s.lerp.pos.trDelta )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( weapEnt->s.lerp.pos.trDelta )[0] ) && !IS_NAN( ( weapEnt->s.lerp.pos.trDelta )[1] ) && !IS_NAN( ( weapEnt->s.lerp.pos.trDelta )[2] )") )
          __debugbreak();
        G_Items_EnablePhysics(v6);
      }
      weapDrop->state = ACTOR_WEAP_DROP_NONE;
      Com_Printf(18, "^3Actor_FinishWeaponDrop() delayed weapon drop for [actor %d] happened on last frame before corpse, will not be interpolating.\n", (unsigned int)this->m_pAI->ent->s.number);
    }
  }
}

/*
==============
AIScriptedInterface::FinishWeaponDrops
==============
*/
void AIScriptedInterface::FinishWeaponDrops(AIScriptedInterface *this)
{
  ai_scripted_t *m_pAI; 
  const tmat43_t<vec3_t> *p_matrix; 
  const Weapon *p_weapon; 
  gentity_s *v5; 
  gentity_s *v6; 
  gentity_s *v7; 
  tmat43_t<vec3_t> matrix; 
  tmat43_t<vec3_t> penetrationTestMatrix; 

  m_pAI = this->m_pAI;
  p_matrix = &m_pAI->weapDrops[0].matrix;
  if ( m_pAI->weapDrops != (ActorDelayedWeaponDrop *)&m_pAI->speedScaleMultiplier )
  {
    p_weapon = &m_pAI->weapDrops[0].weapon;
    do
    {
      if ( !m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 1236, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
        __debugbreak();
      if ( !this->m_pAI->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 1237, ASSERT_TYPE_ASSERT, "( m_pAI->ent )", (const char *)&queryFormat, "m_pAI->ent") )
        __debugbreak();
      if ( *(_DWORD *)&p_weapon[-1].weaponCamo )
      {
        BG_WeaponDef(p_weapon, 0);
        if ( *(_DWORD *)&p_weapon[-1].weaponCamo == 2 && level.time > *(_DWORD *)&p_weapon[-1].attachmentVariationIndices[21] )
        {
          G_Items_GetStateFromTag(this->m_pAI->ent, *(scr_string_t *)&p_weapon[-1].attachmentVariationIndices[25], NULL, &matrix, 0);
          v5 = G_Items_DropWeapon(this->m_pAI->ent, p_weapon, 0, 1, &matrix);
          if ( v5 )
            G_Items_EnablePhysicsDelayed(v5, this->m_pAI->ent, *(_DWORD *)&p_weapon[-1].attachmentVariationIndices[21], p_matrix, *(scr_string_t *)&p_weapon[-1].attachmentVariationIndices[25]);
          *(_DWORD *)&p_weapon[-1].weaponCamo = 0;
        }
        else
        {
          G_Items_GetStateFromTag(this->m_pAI->ent, *(scr_string_t *)&p_weapon[-1].attachmentVariationIndices[25], NULL, &penetrationTestMatrix, 0);
          v6 = G_Items_DropWeapon(this->m_pAI->ent, p_weapon, 0, 1, &penetrationTestMatrix);
          v7 = v6;
          if ( v6 )
          {
            G_Items_SetStateFromTag(this->m_pAI->ent, *(scr_string_t *)&p_weapon[-1].attachmentVariationIndices[25], v6, 0);
            *(_QWORD *)v7->s.lerp.pos.trDelta.v = 0i64;
            v7->s.lerp.pos.trDelta.v[2] = 0.0;
            v7->s.lerp.pos.trTime = level.time;
            if ( ((LODWORD(v7->s.lerp.pos.trDelta.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(v7->s.lerp.pos.trDelta.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(v7->s.lerp.pos.trDelta.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 1271, ASSERT_TYPE_SANITY, "( !IS_NAN( ( weapEnt->s.lerp.pos.trDelta )[0] ) && !IS_NAN( ( weapEnt->s.lerp.pos.trDelta )[1] ) && !IS_NAN( ( weapEnt->s.lerp.pos.trDelta )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( weapEnt->s.lerp.pos.trDelta )[0] ) && !IS_NAN( ( weapEnt->s.lerp.pos.trDelta )[1] ) && !IS_NAN( ( weapEnt->s.lerp.pos.trDelta )[2] )") )
              __debugbreak();
            G_Items_EnablePhysics(v7);
          }
          *(_DWORD *)&p_weapon[-1].weaponCamo = 0;
          Com_Printf(18, "^3Actor_FinishWeaponDrop() delayed weapon drop for [actor %d] happened on last frame before corpse, will not be interpolating.\n", (unsigned int)this->m_pAI->ent->s.number);
        }
      }
      m_pAI = this->m_pAI;
      p_matrix = (const tmat43_t<vec3_t> *)((char *)p_matrix + 120);
      p_weapon += 2;
    }
    while ( p_matrix != (const tmat43_t<vec3_t> *)&m_pAI->speedScaleMultiplier );
  }
}

/*
==============
AIScriptedInterface::FireSharpTurnEvent
==============
*/
void AIScriptedInterface::FireSharpTurnEvent(AIScriptedInterface *this, scrContext_t *scrContext, bool bReacquire, const vec3_t *nextPathPoint, bool bNewPath, const vec3_t *corner, float distToCorner)
{
  int number; 
  Ai_Asm *v11; 
  ASM_Instance *Instance; 
  const char *m_scriptPos; 
  unsigned int v14; 
  unsigned int NewArrayVariable; 
  unsigned int v16; 
  const float *v17; 
  unsigned int v18; 
  unsigned int v19; 
  const float *v20; 
  unsigned int v21; 
  VariableValue value; 
  VariableValue pParam; 

  number = this->m_pAI->ent->s.number;
  v11 = Ai_Asm::Singleton();
  Instance = Ai_Asm::GetInstance(v11, NULL, number);
  if ( Instance )
  {
    m_scriptPos = ScriptContext_GetVarUsageScriptCodePos(scrContext).m_scriptPos;
    ScriptContext_SetVarUsagePos(scrContext, "<asm variable>");
    v14 = Scr_AllocArray(scrContext);
    NewArrayVariable = GetNewArrayVariable(scrContext, v14, 0);
    value.u.intValue = bReacquire;
    value.type = VAR_INTEGER;
    SetNewVariableValue(scrContext, NewArrayVariable, &value);
    v16 = GetNewArrayVariable(scrContext, v14, 1u);
    v17 = Scr_AllocVector(scrContext, nextPathPoint->v);
    value.type = VAR_VECTOR;
    value.u.scriptCodePosValue = (unsigned __int64)v17;
    SetNewVariableValue(scrContext, v16, &value);
    v18 = GetNewArrayVariable(scrContext, v14, 2u);
    value.u.intValue = bNewPath;
    value.type = VAR_INTEGER;
    SetNewVariableValue(scrContext, v18, &value);
    v19 = GetNewArrayVariable(scrContext, v14, 3u);
    v20 = Scr_AllocVector(scrContext, corner->v);
    value.type = VAR_VECTOR;
    value.u.scriptCodePosValue = (unsigned __int64)v20;
    SetNewVariableValue(scrContext, v19, &value);
    v21 = GetNewArrayVariable(scrContext, v14, 4u);
    value.type = VAR_FLOAT;
    value.u.floatValue = distToCorner;
    SetNewVariableValue(scrContext, v21, &value);
    ScriptContext_SetVarUsageScriptCodePos(scrContext, (const ScriptCodePos)m_scriptPos);
    pParam.type = VAR_POINTER;
    pParam.u.intValue = v14;
    AI_ASM_FireEvent(Instance, (const scr_string_t)scr_const.sharp_turn, &pParam);
    RemoveRefToValue(scrContext, (unsigned __int8)pParam.type, pParam.u);
  }
}

/*
==============
AIActorInterface::FirstActor
==============
*/
actor_s *AIActorInterface::FirstActor(const bitarray<224> *iTeamFlags)
{
  const bitarray<224> *AllTeamFlags; 
  __int128 v3; 
  double v4; 
  unsigned int v5; 
  int v6; 
  unsigned int v7; 
  __int128 *v8; 
  __int64 v9; 
  unsigned __int64 eTeam; 
  __int64 v12; 
  __int64 v13; 
  __int128 v14; 
  double v15; 
  unsigned int v16; 

  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
    AllTeamFlags = Com_TeamsSP_GetAllTeamFlags();
  else
    AllTeamFlags = Com_TeamsMP_GetAllTeamFlags();
  v3 = *(_OWORD *)AllTeamFlags->array;
  v4 = *(double *)&AllTeamFlags->array[4];
  v5 = AllTeamFlags->array[6];
  v14 = v3;
  v15 = v4;
  LODWORD(v14) = iTeamFlags->array[0] & ~(_DWORD)v3;
  DWORD1(v14) = ~DWORD1(v3) & iTeamFlags->array[1];
  DWORD2(v14) = ~DWORD2(v3) & iTeamFlags->array[2];
  HIDWORD(v14) = ~HIDWORD(v3) & iTeamFlags->array[3];
  *(_QWORD *)&v15 = ~*(_QWORD *)&v4 & *(_QWORD *)&iTeamFlags->array[4];
  v6 = 0;
  v16 = ~v5 & iTeamFlags->array[6];
  v7 = 0;
  v8 = &v14;
  while ( !*(_DWORD *)v8 )
  {
    ++v7;
    v8 = (__int128 *)((char *)v8 + 4);
    if ( v7 >= 7 )
      goto LABEL_10;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 1025, ASSERT_TYPE_ASSERT, "( Com_Teams_IsValidTeamFlag( iTeamFlags ) )", (const char *)&queryFormat, "Com_Teams_IsValidTeamFlag( iTeamFlags )") )
    __debugbreak();
LABEL_10:
  v9 = 0i64;
  while ( 1 )
  {
    if ( level.actors[v9].inuse )
    {
      if ( !level.actors[v9].sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 1034, ASSERT_TYPE_ASSERT, "( level.actors[i].sentient )", (const char *)&queryFormat, "level.actors[i].sentient") )
        __debugbreak();
      eTeam = (unsigned int)level.actors[v9].sentient->eTeam;
      if ( (unsigned int)eTeam >= 0xE0 )
      {
        LODWORD(v13) = 224;
        LODWORD(v12) = level.actors[v9].sentient->eTeam;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v12, v13) )
          __debugbreak();
      }
      if ( ((0x80000000 >> (eTeam & 0x1F)) & iTeamFlags->array[eTeam >> 5]) != 0 )
        break;
    }
    ++v6;
    if ( ++v9 >= 38 )
      return 0i64;
  }
  return &level.actors[v6];
}

/*
==============
AIScriptedInterface::FixedLinkPhysicsFallback
==============
*/
void AIScriptedInterface::FixedLinkPhysicsFallback(AIScriptedInterface *this, const vec3_t *targetOrigin)
{
  ai_scripted_t *m_pAI; 
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  ai_scripted_t *v9; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 6254, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 6255, ASSERT_TYPE_ASSERT, "( m_pAI->ent )", (const char *)&queryFormat, "m_pAI->ent") )
    __debugbreak();
  m_pAI = this->m_pAI;
  v5 = targetOrigin->v[0];
  v6 = targetOrigin->v[1];
  v7 = m_pAI->ent->r.currentOrigin.v[0];
  v8 = m_pAI->ent->r.currentOrigin.v[1];
  m_pAI->Physics.ePhysicsType = AIPHYS_ZONLY_PHYSICS_ABSOLUTE;
  v9 = this->m_pAI;
  v9->Physics.vWishDelta.v[0] = v5 - v7;
  v9->Physics.vWishDelta.v[1] = v6 - v8;
  this->m_pAI->Physics.vWishDelta.v[2] = 0.0;
  this->DoMove(this);
}

/*
==============
AIActorInterface::Free
==============
*/
void AIActorInterface::Free(AIActorInterface *this)
{
  actor_s *actors; 
  actor_s *m_pAI; 
  gentity_s *ent; 
  const scrContext_t *v5; 
  actor_s *v6; 
  actor_s *v7; 
  actor_s *v8; 
  EntHandle *p_grenadeActivator; 
  const gentity_s *v10; 
  gentity_s *v11; 
  actor_s *v12; 
  unsigned __int16 number; 
  __int64 v14; 
  unsigned int v15; 
  __int64 v16; 
  int v17; 
  __int64 i; 
  actor_s *v19; 
  EntHandle *p_pCloseEnt; 
  unsigned __int16 v21; 
  __int64 v22; 
  unsigned int v23; 
  __int64 v24; 
  unsigned __int16 v25; 
  __int64 v26; 
  __int64 v27; 
  sentient_info_t *sentientInfo; 
  __int64 v29; 
  __int64 v30; 
  AIActorInterface v31; 
  AIActorInterface *v32; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 361, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  actors = level.actors;
  if ( !level.actors )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 362, ASSERT_TYPE_ASSERT, "( level.actors )", (const char *)&queryFormat, "level.actors") )
      __debugbreak();
    actors = level.actors;
  }
  m_pAI = this->m_pAI;
  if ( m_pAI < actors || m_pAI >= &actors[38] )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 363, ASSERT_TYPE_ASSERT, "( m_pAI >= level.actors && m_pAI < level.actors + (32 + 6) )", (const char *)&queryFormat, "m_pAI >= level.actors && m_pAI < level.actors + MAX_ACTORS") )
      __debugbreak();
    actors = level.actors;
  }
  if ( &actors[this->m_pAI - actors] != this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 364, ASSERT_TYPE_ASSERT, "( &level.actors[m_pAI - level.actors] == m_pAI )", (const char *)&queryFormat, "&level.actors[m_pAI - level.actors] == m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 365, ASSERT_TYPE_ASSERT, "( m_pAI->sentient )", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  if ( !this->m_pAI->ent->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 366, ASSERT_TYPE_ASSERT, "( m_pAI->ent->sentient )", (const char *)&queryFormat, "m_pAI->ent->sentient") )
    __debugbreak();
  if ( !this->m_pAI->inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 367, ASSERT_TYPE_ASSERT, "( m_pAI->inuse )", (const char *)&queryFormat, "m_pAI->inuse") )
    __debugbreak();
  ent = this->m_pAI->ent;
  this->ClearPath(this);
  this->StopUseTurret(this);
  Nav_FreeNavigator(this->m_pAI->pNavigator);
  this->m_pAI->pNavigator = NULL;
  v5 = ScriptContext_Server();
  if ( Scr_IsSystemActive(v5, 1u) )
    AIScriptedInterface::KillAnimScript(this);
  v6 = this->m_pAI;
  if ( v6->coverFindTask.status[0] == 1 )
  {
    AIScheduler::RemoveCoverFindTask(&v6->coverFindTask);
    v6 = this->m_pAI;
  }
  if ( (v6->coverFindTask.pPrev || v6->coverFindTask.pNext) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 389, ASSERT_TYPE_ASSERT, "( !m_pAI->coverFindTask.pPrev && !m_pAI->coverFindTask.pNext )", (const char *)&queryFormat, "!m_pAI->coverFindTask.pPrev && !m_pAI->coverFindTask.pNext") )
    __debugbreak();
  v7 = this->m_pAI;
  if ( v7->pathFindTask.status[0] == 1 )
  {
    AIScheduler::RemovePathFindTask(&v7->pathFindTask);
    v7 = this->m_pAI;
  }
  if ( (v7->pathFindTask.pPrev || v7->pathFindTask.pNext) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 393, ASSERT_TYPE_ASSERT, "( !m_pAI->pathFindTask.pPrev && !m_pAI->pathFindTask.pNext )", (const char *)&queryFormat, "!m_pAI->pathFindTask.pPrev && !m_pAI->pathFindTask.pNext") )
    __debugbreak();
  v8 = this->m_pAI;
  if ( v8->threatUpdateTask.status[0] == 1 )
  {
    AIScheduler::RemoveThreatTask(&v8->threatUpdateTask);
    v8 = this->m_pAI;
  }
  if ( (v8->threatUpdateTask.pPrev || v8->threatUpdateTask.pNext) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 397, ASSERT_TYPE_ASSERT, "( !m_pAI->threatUpdateTask.pPrev && !m_pAI->threatUpdateTask.pNext )", (const char *)&queryFormat, "!m_pAI->threatUpdateTask.pPrev && !m_pAI->threatUpdateTask.pNext") )
    __debugbreak();
  if ( EntHandle::isDefined(&this->m_pAI->grenade.pGrenade) )
  {
    p_grenadeActivator = &EntHandle::ent(&this->m_pAI->grenade.pGrenade)->grenadeActivator;
    if ( EntHandle::isDefined(p_grenadeActivator) )
    {
      if ( EntHandle::ent(p_grenadeActivator) == ent )
      {
        v10 = EntHandle::ent(&this->m_pAI->grenade.pGrenade);
        if ( AIScriptedInterface::IsGrenadeInAIHands(v10) )
        {
          v11 = EntHandle::ent(&this->m_pAI->grenade.pGrenade);
          G_FreeEntity(v11);
          v12 = this->m_pAI;
          number = v12->grenade.pGrenade.number;
          if ( number )
          {
            v14 = number;
            v15 = number - 1;
            if ( v15 >= 0x800 )
            {
              LODWORD(v29) = v15;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v29, 2048) )
                __debugbreak();
            }
            if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
              __debugbreak();
            v16 = v14 - 1;
            if ( g_entities[v16].r.isInUse != g_entityIsInUse[v16] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
              __debugbreak();
            if ( !g_entityIsInUse[v16] )
            {
              LODWORD(v30) = v12->grenade.pGrenade.number - 1;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v30) )
                __debugbreak();
            }
            if ( v12->grenade.pGrenade.number && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 404, ASSERT_TYPE_ASSERT, "( !m_pAI->grenade.pGrenade.isDefined() )", (const char *)&queryFormat, "!m_pAI->grenade.pGrenade.isDefined()") )
              __debugbreak();
          }
        }
      }
    }
  }
  Sentient_Dissociate(this->m_pAI->sentient);
  v17 = ent->s.number;
  for ( i = 0i64; i < 38; ++i )
  {
    v19 = &level.actors[i];
    if ( level.actors[i].inuse )
    {
      if ( v19->Physics.iHitEntnum == v17 )
        v19->Physics.iHitEntnum = 2047;
      if ( v19->pPileUpActor == this->m_pAI )
      {
        AIActorInterface::AIActorInterface(&v31);
        v32 = NULL;
        AIActorInterface::SetActor(&v31, v19);
        v32 = &v31;
        v31.ClearPileUp(&v31);
      }
      p_pCloseEnt = &v19->pCloseEnt;
      v21 = v19->pCloseEnt.number;
      if ( v21 )
      {
        v22 = v21;
        v23 = v21 - 1;
        if ( v23 >= 0x800 )
        {
          LODWORD(v30) = 2048;
          LODWORD(v29) = v23;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v29, v30) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        v24 = v22 - 1;
        if ( g_entities[v24].r.isInUse != g_entityIsInUse[v24] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
          __debugbreak();
        if ( !g_entityIsInUse[v24] )
        {
          LODWORD(v30) = p_pCloseEnt->number - 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v30) )
            __debugbreak();
        }
        v25 = p_pCloseEnt->number;
        if ( p_pCloseEnt->number )
        {
          if ( (unsigned int)v25 - 1 >= 0x7FF )
          {
            LODWORD(v30) = 2047;
            LODWORD(v29) = v25 - 1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 223, ASSERT_TYPE_ASSERT, "(unsigned)( number - 1 ) < (unsigned)( ENTITYNUM_NONE )", "number - 1 doesn't index ENTITYNUM_NONE\n\t%i not in [0, %i)", v29, v30) )
              __debugbreak();
          }
          v26 = p_pCloseEnt->number;
          if ( (unsigned int)(v26 - 1) >= 0x800 )
          {
            LODWORD(v30) = 2048;
            LODWORD(v29) = v26 - 1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v29, v30) )
              __debugbreak();
          }
          if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
            __debugbreak();
          v27 = v26 - 1;
          if ( g_entities[v27].r.isInUse != g_entityIsInUse[v27] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
            __debugbreak();
          if ( !g_entityIsInUse[v27] )
          {
            LODWORD(v30) = p_pCloseEnt->number - 1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 224, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( G_IsEntityInUse( number - 1 ) )", v30) )
              __debugbreak();
          }
          if ( &g_entities[p_pCloseEnt->number - 1] == ent )
            EntHandle::setEnt(p_pCloseEnt, NULL);
        }
      }
    }
  }
  ent->actor = NULL;
  Sentient_Free(this->m_pAI->sentient);
  this->m_pAI->sentient = NULL;
  this->m_pAI->ent->sentient = NULL;
  G_SaveSP_ScrFreeActorFields(this->m_pAI);
  this->m_pAI->pSpeciesData = NULL;
  AIScriptedInterface::Free(this);
  if ( AIActorInterface::IsLightweight(this) )
    --level.actorLightCount;
  G_MotionWarp_Cancel(v17);
  sentientInfo = this->m_pAI->sentientInfo;
  DebugWipe(sentientInfo, (unsigned __int64)level.maxSentients << 6);
  DebugWipe(this->m_pAI, 0xEE0ui64);
  this->m_pAI->sentientInfo = sentientInfo;
  this->m_pAI->inuse = 0;
  --level.actorCount;
}

/*
==============
AIActorInterface::FreeExpendable
==============
*/
void AIActorInterface::FreeExpendable()
{
  __int128 v0; 
  __int128 v1; 
  __int128 v2; 
  __int128 v3; 
  __int128 v4; 
  __int128 v5; 
  __int128 v6; 
  gentity_s *v7; 
  gentity_s *v8; 
  actor_s *v9; 
  float v10; 
  const bitarray<224> *AllTeamFlags; 
  __int128 v12; 
  double v13; 
  unsigned int v14; 
  actor_s *v15; 
  gentity_s *ent; 
  float v17; 
  float v18; 
  float v19; 
  __int128 v21; 
  actor_s *v23; 
  float *p_number; 
  float v25; 
  float v26; 
  float v27; 
  __int128 v29; 
  actor_s *v31; 
  float *v32; 
  float v33; 
  float v34; 
  float v35; 
  float v36; 
  float v37; 
  float v38; 
  float v40; 
  float v41; 
  float v42; 
  __int128 v43; 
  float v44; 
  float v46; 
  actor_s *v47; 
  float *v48; 
  float v49; 
  float v50; 
  float v51; 
  __int128 v53; 
  const char *v55; 
  gentity_s *v56; 
  sentient_s *sentient; 
  GameScriptData *v58; 
  scrContext_t *v59; 
  unsigned int v60; 
  AIActorInterface v61; 
  AIActorInterface *v62; 
  AIActorInterface v63; 
  AIActorInterface *v64; 
  vec3_t vEyePosOut; 
  vec3_t vEyePos; 
  vec3_t outForward; 
  vec3_t v68; 
  bitarray<224> iTeamFlags; 
  __int128 v70; 
  __int128 v71; 
  __int128 v72; 
  __int128 v73; 
  __int128 v74; 
  __int128 v75; 
  __int128 v76; 

  v71 = v5;
  v70 = v6;
  Com_Printf(18, "^3trying to delete somebody to make room for spawned AI (time %d)\n", (unsigned int)level.time);
  if ( level.loading )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E504E0, 1084i64);
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities->r.isInUse != *g_entityIsInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !*g_entityIsInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 498, ASSERT_TYPE_ASSERT, "( G_IsEntityInUse( 0 ) )", (const char *)&queryFormat, "G_IsEntityInUse( 0 )") )
    __debugbreak();
  v7 = g_entities;
  if ( g_entities->classname != scr_const.player && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 500, ASSERT_TYPE_ASSERT, "( player->classname == scr_const.player )", (const char *)&queryFormat, "player->classname == scr_const.player") )
    __debugbreak();
  if ( !v7->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 501, ASSERT_TYPE_ASSERT, "( player->client )", (const char *)&queryFormat, "player->client") )
    __debugbreak();
  if ( !v7->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 502, ASSERT_TYPE_ASSERT, "( player->sentient )", (const char *)&queryFormat, "player->sentient") )
    __debugbreak();
  Sentient_GetEyePosition(v7->sentient, &vEyePosOut);
  if ( AIActorInterface::EntityIsPlayer(g_entities + 1) )
  {
    v8 = g_entities + 1;
    if ( g_entities[1].classname != scr_const.player && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 508, ASSERT_TYPE_ASSERT, "( player2->classname == scr_const.player )", (const char *)&queryFormat, "player2->classname == scr_const.player") )
      __debugbreak();
    if ( !v8->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 509, ASSERT_TYPE_ASSERT, "( player2->client )", (const char *)&queryFormat, "player2->client") )
      __debugbreak();
    if ( !v8->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 510, ASSERT_TYPE_ASSERT, "( player2->sentient )", (const char *)&queryFormat, "player2->sentient") )
      __debugbreak();
    Sentient_GetEyePosition(v8->sentient, &vEyePos);
  }
  else
  {
    v8 = NULL;
  }
  v9 = NULL;
  v10 = 0.0;
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
    AllTeamFlags = Com_TeamsSP_GetAllTeamFlags();
  else
    AllTeamFlags = Com_TeamsMP_GetAllTeamFlags();
  v12 = *(_OWORD *)AllTeamFlags->array;
  v13 = *(double *)&AllTeamFlags->array[4];
  v14 = AllTeamFlags->array[6];
  v76 = v0;
  *(_OWORD *)iTeamFlags.array = v12;
  *(double *)&iTeamFlags.array[4] = v13;
  iTeamFlags.array[6] = v14;
  v75 = v1;
  v15 = AIActorInterface::FirstActor(&iTeamFlags);
  if ( v15 )
  {
    do
    {
      AIActorInterface::AIActorInterface(&v61);
      v62 = NULL;
      AIActorInterface::SetActor(&v61, v15);
      v62 = &v61;
      if ( (v61.m_pAI->ent->spawnflags & 4) == 0 && v61.m_pAI->ent->s.number != level.currentEntityThink && !AIActorInterface::IsLightweight(&v61) )
      {
        if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
          __debugbreak();
        ent = v15->ent;
        if ( level.time - v15->ent->c.item[0].ammoCount > level.frameDuration )
        {
          v17 = ent->r.currentOrigin.v[1];
          v18 = ent->r.currentOrigin.v[0];
          v19 = ent->r.currentOrigin.v[2];
          *(float *)&_XMM6 = (float)((float)((float)(v17 - vEyePosOut.v[1]) * (float)(v17 - vEyePosOut.v[1])) + (float)((float)(v18 - vEyePosOut.v[0]) * (float)(v18 - vEyePosOut.v[0]))) + (float)((float)(v19 - vEyePosOut.v[2]) * (float)(v19 - vEyePosOut.v[2]));
          if ( v8 )
          {
            v21 = LODWORD(ent->r.currentOrigin.v[1]);
            *(float *)&v21 = (float)((float)((float)(v17 - vEyePos.v[1]) * (float)(v17 - vEyePos.v[1])) + (float)((float)(v18 - vEyePos.v[0]) * (float)(v18 - vEyePos.v[0]))) + (float)((float)(v19 - vEyePos.v[2]) * (float)(v19 - vEyePos.v[2]));
            _XMM2 = v21;
            __asm { vminss  xmm6, xmm2, xmm6 }
          }
          if ( v10 < *(float *)&_XMM6 && !G_ActorSP_PointCouldSeeSpawn(&vEyePosOut, &ent->r.currentOrigin, v7->s.number, ent->s.number) && (!v8 || !G_ActorSP_PointCouldSeeSpawn(&vEyePos, &v15->ent->r.currentOrigin, v8->s.number, v15->ent->s.number)) )
          {
            v10 = *(float *)&_XMM6;
            v9 = v15;
          }
        }
      }
      v15 = AIActorInterface::NextActor(v15, &iTeamFlags);
    }
    while ( v15 );
    if ( v9 )
      goto LABEL_113;
    if ( v10 != 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 568, ASSERT_TYPE_ASSERT, "( fMaxDistSqrd == 0 )", (const char *)&queryFormat, "fMaxDistSqrd == 0") )
      __debugbreak();
  }
  G_Client_GetViewDirection(v7, &outForward, NULL, NULL);
  if ( v8 )
    G_Client_GetViewDirection(v8, &v68, NULL, NULL);
  v74 = v2;
  v73 = v3;
  v72 = v4;
  v23 = AIActorInterface::FirstActor(&iTeamFlags);
  if ( v23 )
  {
    while ( 1 )
    {
      AIActorInterface::AIActorInterface(&v61);
      v62 = NULL;
      AIActorInterface::SetActor(&v61, v23);
      v62 = &v61;
      if ( (v61.m_pAI->ent->spawnflags & 4) != 0 || v61.m_pAI->ent->s.number == level.currentEntityThink || AIActorInterface::IsLightweight(&v61) )
        goto LABEL_72;
      if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
        __debugbreak();
      p_number = (float *)&v23->ent->s.number;
      if ( level.time - v23->ent->c.item[0].ammoCount <= level.frameDuration )
        goto LABEL_72;
      v25 = p_number[76];
      v26 = p_number[77];
      v27 = p_number[78];
      if ( (float)((float)((float)((float)(v26 - vEyePosOut.v[1]) * outForward.v[1]) + (float)((float)(v25 - vEyePosOut.v[0]) * outForward.v[0])) + (float)((float)(v27 - vEyePosOut.v[2]) * outForward.v[2])) >= 0.0 )
        goto LABEL_72;
      *(float *)&_XMM5 = (float)((float)((float)(v26 - vEyePosOut.v[1]) * (float)(v26 - vEyePosOut.v[1])) + (float)((float)(v25 - vEyePosOut.v[0]) * (float)(v25 - vEyePosOut.v[0]))) + (float)((float)(v27 - vEyePosOut.v[2]) * (float)(v27 - vEyePosOut.v[2]));
      if ( !v8 )
        goto LABEL_70;
      v29 = *((unsigned int *)p_number + 77);
      *(float *)&v29 = v26 - vEyePos.v[1];
      if ( (float)((float)((float)((float)(v26 - vEyePos.v[1]) * v68.v[1]) + (float)((float)(v25 - vEyePos.v[0]) * v68.v[0])) + (float)((float)(v27 - vEyePos.v[2]) * v68.v[2])) < 0.0 )
        break;
LABEL_72:
      v23 = AIActorInterface::NextActor(v23, &iTeamFlags);
      if ( !v23 )
      {
        if ( v9 )
          goto LABEL_113;
        goto LABEL_74;
      }
    }
    *(float *)&v29 = (float)((float)(*(float *)&v29 * *(float *)&v29) + (float)((float)(v25 - vEyePos.v[0]) * (float)(v25 - vEyePos.v[0]))) + (float)((float)(v27 - vEyePos.v[2]) * (float)(v27 - vEyePos.v[2]));
    _XMM2 = v29;
    __asm { vminss  xmm5, xmm2, xmm5 }
LABEL_70:
    if ( v10 < *(float *)&_XMM5 )
    {
      v10 = *(float *)&_XMM5;
      v9 = v23;
    }
    goto LABEL_72;
  }
LABEL_74:
  if ( v10 != 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 615, ASSERT_TYPE_ASSERT, "( fMaxDistSqrd == 0 )", (const char *)&queryFormat, "fMaxDistSqrd == 0") )
    __debugbreak();
  v31 = AIActorInterface::FirstActor(&iTeamFlags);
  if ( !v31 )
  {
LABEL_95:
    if ( v10 != 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 668, ASSERT_TYPE_ASSERT, "( fMaxDistSqrd == 0 )", (const char *)&queryFormat, "fMaxDistSqrd == 0") )
      __debugbreak();
    v47 = AIActorInterface::FirstActor(&iTeamFlags);
    if ( !v47 )
      goto LABEL_112;
    do
    {
      AIActorInterface::AIActorInterface(&v61);
      v62 = NULL;
      AIActorInterface::SetActor(&v61, v47);
      v62 = &v61;
      if ( (v61.m_pAI->ent->spawnflags & 4) == 0 && v61.m_pAI->ent->s.number != level.currentEntityThink && !AIActorInterface::IsLightweight(&v61) )
      {
        if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
          __debugbreak();
        v48 = (float *)&v47->ent->s.number;
        if ( level.time - v47->ent->c.item[0].ammoCount > level.frameDuration )
        {
          v49 = v48[77];
          v50 = v48[76];
          v51 = v48[78];
          *(float *)&_XMM4 = (float)((float)((float)(v49 - vEyePosOut.v[1]) * (float)(v49 - vEyePosOut.v[1])) + (float)((float)(v50 - vEyePosOut.v[0]) * (float)(v50 - vEyePosOut.v[0]))) + (float)((float)(v51 - vEyePosOut.v[2]) * (float)(v51 - vEyePosOut.v[2]));
          if ( v8 )
          {
            v53 = *((unsigned int *)v48 + 77);
            *(float *)&v53 = (float)((float)((float)(v49 - vEyePos.v[1]) * (float)(v49 - vEyePos.v[1])) + (float)((float)(v50 - vEyePos.v[0]) * (float)(v50 - vEyePos.v[0]))) + (float)((float)(v51 - vEyePos.v[2]) * (float)(v51 - vEyePos.v[2]));
            _XMM2 = v53;
            __asm { vminss  xmm4, xmm2, xmm4 }
          }
          if ( v10 <= *(float *)&_XMM4 )
          {
            v10 = *(float *)&_XMM4;
            v9 = v47;
          }
        }
      }
      v47 = AIActorInterface::NextActor(v47, &iTeamFlags);
    }
    while ( v47 );
    if ( !v9 )
LABEL_112:
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E50700, 1085i64);
    goto LABEL_113;
  }
  do
  {
    AIActorInterface::AIActorInterface(&v61);
    v62 = NULL;
    AIActorInterface::SetActor(&v61, v31);
    v62 = &v61;
    if ( (v61.m_pAI->ent->spawnflags & 4) == 0 && v61.m_pAI->ent->s.number != level.currentEntityThink && !AIActorInterface::IsLightweight(&v61) )
    {
      if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
        __debugbreak();
      v32 = (float *)&v31->ent->s.number;
      if ( level.time - v31->ent->c.item[0].ammoCount > level.frameDuration )
      {
        v33 = v32[76];
        v34 = v32[77];
        v35 = v33 - vEyePosOut.v[0];
        v36 = v34 - vEyePosOut.v[1];
        v37 = v32[78];
        v38 = v37 - vEyePosOut.v[2];
        *(float *)&_XMM5 = (float)((float)(v36 * v36) + (float)(v35 * v35)) + (float)(v38 * v38);
        if ( v10 < *(float *)&_XMM5 )
        {
          v40 = (float)((float)(v36 * outForward.v[1]) + (float)(v35 * outForward.v[0])) + (float)(v38 * outForward.v[2]);
          if ( (float)(v40 * v40) < (float)(*(float *)&_XMM5 * 0.5) )
          {
            if ( v8 )
            {
              v41 = v33 - vEyePos.v[0];
              v43 = *((unsigned int *)v32 + 77);
              v42 = v34 - vEyePos.v[1];
              v44 = v37 - vEyePos.v[2];
              *(float *)&v43 = (float)((float)(v42 * v42) + (float)(v41 * v41)) + (float)(v44 * v44);
              _XMM6 = v43;
              if ( v10 >= *(float *)&v43 )
                goto LABEL_93;
              v46 = (float)((float)(v42 * v68.v[1]) + (float)(v41 * v68.v[0])) + (float)(v44 * v68.v[2]);
              if ( (float)(v46 * v46) >= (float)(*(float *)&_XMM6 * 0.5) )
                goto LABEL_93;
              __asm { vminss  xmm5, xmm6, xmm5 }
            }
            if ( v10 >= *(float *)&_XMM5 )
            {
              v10 = *(float *)&_XMM5;
              v9 = v31;
            }
          }
        }
      }
    }
LABEL_93:
    v31 = AIActorInterface::NextActor(v31, &iTeamFlags);
  }
  while ( v31 );
  if ( !v9 )
    goto LABEL_95;
LABEL_113:
  v55 = SL_ConvertToString(v9->ent->classname);
  Com_Printf(18, "^3deleting entity %i of classname'%s'\n", (unsigned int)v9->ent->s.number, v55);
  v56 = v9->ent;
  sentient = v9->sentient;
  AIActorInterface::AIActorInterface(&v63);
  v64 = NULL;
  AIActorInterface::SetActor(&v63, v9);
  v64 = &v63;
  v63.ClearPath(&v63);
  if ( (_BYTE)GameScriptData::ms_allocatedType != HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_scr_data_sp.h", 97, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  if ( !GameScriptData::ms_gScriptData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_data.h", 78, ASSERT_TYPE_ASSERT, "(ms_gScriptData)", "%s\n\tAttempting to access game data outside of an active game context", "ms_gScriptData") )
    __debugbreak();
  if ( !(_BYTE)GameScriptData::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_data.h", 79, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tAttempting to access game data outside of an active game context", "ms_allocatedType != GameModeType::NONE") )
    __debugbreak();
  v58 = GameScriptData::ms_gScriptData;
  v59 = ScriptContext_Server();
  v60 = GScr_ExecEntThread(v9->ent, v58[1].delete_, 0);
  Scr_FreeThread(v59, v60);
  GScr_Notify(v9->ent, scr_const.death, 0);
  GScr_Notify(v9->ent, scr_const.death_or_disconnect, 0);
  G_FreeEntity(v9->ent);
  if ( v56->actor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 734, ASSERT_TYPE_ASSERT, "( ent->actor == 0 )", (const char *)&queryFormat, "ent->actor == NULL") )
    __debugbreak();
  if ( v56->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 735, ASSERT_TYPE_ASSERT, "( ent->sentient == 0 )", (const char *)&queryFormat, "ent->sentient == NULL") )
    __debugbreak();
  if ( v9->inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 737, ASSERT_TYPE_ASSERT, "( !pExpendable->inuse )", (const char *)&queryFormat, "!pExpendable->inuse") )
    __debugbreak();
  if ( sentient->inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 738, ASSERT_TYPE_ASSERT, "( !sentient->inuse )", (const char *)&queryFormat, "!sentient->inuse") )
    __debugbreak();
}

/*
==============
G_GetAICount
==============
*/
__int64 G_GetAICount()
{
  return (unsigned int)level.actorCount;
}

/*
==============
G_GetSentientCount
==============
*/
__int64 G_GetSentientCount()
{
  return (unsigned int)s_sentientCount;
}

/*
==============
AIActorInterface::GetActorIndex
==============
*/
signed __int64 AIActorInterface::GetActorIndex(actor_s *actor)
{
  if ( !actor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 784, ASSERT_TYPE_ASSERT, "( actor )", (const char *)&queryFormat, "actor") )
    __debugbreak();
  if ( actor - level.actors < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 785, ASSERT_TYPE_ASSERT, "( actor - level.actors >= 0 )", (const char *)&queryFormat, "actor - level.actors >= 0") )
    __debugbreak();
  if ( (char *)actor - (char *)level.actors >= 144704 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 786, ASSERT_TYPE_ASSERT, "( actor - level.actors < (32 + 6) )", (const char *)&queryFormat, "actor - level.actors < MAX_ACTORS") )
    __debugbreak();
  return actor - level.actors;
}

/*
==============
AIScriptedInterface::GetAnimDeltas
==============
*/
void AIScriptedInterface::GetAnimDeltas(AIScriptedInterface *this, vec4_t *outRotation, vec3_t *outTranslation)
{
  const DObj *ServerDObjForEnt; 
  ai_scripted_t *m_pAI; 
  char bUseGoalWeight; 
  const dvar_t *v9; 
  vec3_t *trans; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 5721, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  ServerDObjForEnt = Com_GetServerDObjForEnt(this->m_pAI->ent);
  if ( !ServerDObjForEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 5724, ASSERT_TYPE_ASSERT, "( obj )", (const char *)&queryFormat, "obj") )
    __debugbreak();
  m_pAI = this->m_pAI;
  bUseGoalWeight = m_pAI->bScriptUseGoalWeight || m_pAI->bUseGoalWeight;
  XAnimCalcDelta3D(ServerDObjForEnt, 0, XANIM_SUBTREE_DEFAULT, 0, outRotation, outTranslation, bUseGoalWeight);
  v9 = DVARINT_ai_debugAnimDeltas;
  if ( !DVARINT_ai_debugAnimDeltas && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugAnimDeltas") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( v9->current.integer == this->m_pAI->ent->s.number )
  {
    LODWORD(trans) = level.time;
    Com_Printf(18, "deltas = %g %g %g (time %d)\n", outTranslation->v[0], outTranslation->v[1], outTranslation->v[2], trans);
  }
}

/*
==============
AIActorInterface::GetAnimTree
==============
*/
XAnimTree *AIActorInterface::GetAnimTree(AIActorInterface *this)
{
  return this->m_pAI->ent->pAnimTree;
}

/*
==============
AIScriptedInterface::GetGroundTraceOrigin
==============
*/
void AIScriptedInterface::GetGroundTraceOrigin(AIScriptedInterface *this, vec3_t *outOrigin)
{
  ai_scripted_t *m_pAI; 
  sentient_s *sentient; 
  float v6; 
  float v7; 
  __int64 v8; 
  __int64 v9; 
  nav_space_s *v10; 
  const bfx::AreaHandle *hHintArea; 
  bool ClosestVerticalPosWithHint; 
  ai_scripted_t *v13; 
  float result_projectedDistanceFromStart; 
  vec3_t pos; 
  bfx::PathSpec pPathSpec; 

  if ( !this->m_pAI->pNavigator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 3434, ASSERT_TYPE_ASSERT, "( m_pAI->pNavigator )", (const char *)&queryFormat, "m_pAI->pNavigator") )
    __debugbreak();
  m_pAI = this->m_pAI;
  sentient = m_pAI->sentient;
  if ( sentient->pClaimedNode && (pathnode_t::GetPos(sentient->pClaimedNode, &pos), m_pAI = this->m_pAI, v6 = pos.v[1], v7 = pos.v[2], (float)((float)((float)((float)(m_pAI->ent->r.currentOrigin.v[1] - pos.v[1]) * (float)(m_pAI->ent->r.currentOrigin.v[1] - pos.v[1])) + (float)((float)(m_pAI->ent->r.currentOrigin.v[0] - pos.v[0]) * (float)(m_pAI->ent->r.currentOrigin.v[0] - pos.v[0]))) + (float)((float)(m_pAI->ent->r.currentOrigin.v[2] - pos.v[2]) * (float)(m_pAI->ent->r.currentOrigin.v[2] - pos.v[2]))) < 16.0) )
  {
    outOrigin->v[0] = pos.v[0];
    outOrigin->v[1] = v6;
    outOrigin->v[2] = v7;
  }
  else
  {
    v8 = (__int64)m_pAI->pNavigator->Get2DNavigator(m_pAI->pNavigator);
    v9 = v8;
    if ( v8 )
    {
      v10 = *(nav_space_s **)(v8 + 16);
      pPathSpec.m_obstacleMode = BLOCKED_IF_ANY_MATCH;
      pPathSpec.m_usePathSharingPenalty = 0;
      pPathSpec.m_pathSharingPenalty = 0.0;
      pPathSpec.m_maxPathSharingPenalty = 0.0;
      pPathSpec.m_maxSearchDist = 0.0;
      *(_QWORD *)&pPathSpec.m_obstacleBlockageFlags = -1i64;
      *(_QWORD *)&pPathSpec.m_areaPenaltyFlags = -1i64;
      bfx::PenaltyTable::PenaltyTable(&pPathSpec.m_penaltyTable);
      pPathSpec.m_snapMode = SNAP_CLOSEST;
      pPathSpec = *AINavigator2D::GetPathSpec((AINavigator2D *)v9);
      pPathSpec.m_obstacleBlockageFlags = 0;
      Nav_GetSpaceUp(v10, &pos);
      hHintArea = AINavigator2D::GetCurArea((AINavigator2D *)v9);
      ClosestVerticalPosWithHint = Nav_GetClosestVerticalPosWithHint(&this->m_pAI->ent->r.currentOrigin, &pos, *(_DWORD *)(v9 + 112), &v10->hSpace, &pPathSpec, outOrigin, hHintArea, NULL);
      v13 = this->m_pAI;
      if ( ClosestVerticalPosWithHint )
      {
        ProjectPointOntoVectorDir(&v13->ent->r.currentOrigin, &v13->Physics.groundTraceOrigin, &pos, outOrigin, &result_projectedDistanceFromStart);
      }
      else
      {
        outOrigin->v[0] = v13->Physics.vOrigin.v[0];
        outOrigin->v[1] = v13->Physics.vOrigin.v[1];
        outOrigin->v[2] = v13->Physics.vOrigin.v[2];
      }
    }
  }
}

/*
==============
AIActorInterface::GetMoveAnimRate
==============
*/
double AIActorInterface::GetMoveAnimRate(AIActorInterface *this)
{
  const XAnimTree *v2; 

  v2 = this->GetAnimTree(this);
  return XAnimGetRate(v2, 0, XANIM_SUBTREE_DEFAULT, this->m_pAI->moveAnimKnob);
}

/*
==============
AIScriptedInterface::GetMoveHistoryAverage
==============
*/
void AIScriptedInterface::GetMoveHistoryAverage(AIScriptedInterface *this, vec3_t *vDir)
{
  float *m_pAI; 
  float v3; 
  float v4; 
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 

  *(_QWORD *)vDir->v = 0i64;
  vDir->v[2] = 0.0;
  m_pAI = (float *)this->m_pAI;
  v3 = m_pAI[621];
  vDir->v[0] = v3;
  v4 = m_pAI[622];
  vDir->v[1] = v4;
  v5 = m_pAI[623];
  vDir->v[2] = v5;
  v6 = v3 + m_pAI[624];
  vDir->v[0] = v6;
  v7 = v4 + m_pAI[625];
  vDir->v[1] = v7;
  v8 = v5 + m_pAI[626];
  vDir->v[2] = v8;
  v9 = v6 + m_pAI[627];
  vDir->v[0] = v9;
  v10 = v7 + m_pAI[628];
  vDir->v[1] = v10;
  v11 = v8 + m_pAI[629];
  vDir->v[2] = v11;
  v12 = v9 + m_pAI[630];
  vDir->v[0] = v12;
  v13 = v10 + m_pAI[631];
  vDir->v[1] = v13;
  v14 = v11 + m_pAI[632];
  vDir->v[2] = v14;
  v15 = v12 + m_pAI[633];
  vDir->v[0] = v15;
  v16 = v13 + m_pAI[634];
  vDir->v[1] = v16;
  v17 = v14 + m_pAI[635];
  vDir->v[2] = v17;
  v18 = v15 + m_pAI[636];
  vDir->v[0] = v18;
  v19 = v16 + m_pAI[637];
  vDir->v[1] = v19;
  v20 = v17 + m_pAI[638];
  vDir->v[2] = v20;
  v21 = v18 + m_pAI[639];
  vDir->v[0] = v21;
  v22 = v19 + m_pAI[640];
  vDir->v[1] = v22;
  v23 = v20 + m_pAI[641];
  vDir->v[2] = v23;
  v24 = v21 + m_pAI[642];
  vDir->v[0] = v24;
  v25 = v22 + m_pAI[643];
  vDir->v[1] = v25;
  v26 = v23 + m_pAI[644];
  vDir->v[2] = v26;
  v27 = v24 + m_pAI[645];
  vDir->v[0] = v27;
  v28 = v25 + m_pAI[646];
  vDir->v[1] = v28;
  v29 = v26 + m_pAI[647];
  vDir->v[2] = v29;
  vDir->v[0] = v27 + m_pAI[648];
  vDir->v[1] = v28 + m_pAI[649];
  vDir->v[2] = v29 + m_pAI[650];
}

/*
==============
AIScriptedInterface::GetNavPhysicsState
==============
*/
_BOOL8 AIScriptedInterface::GetNavPhysicsState(AIScriptedInterface *this)
{
  ai_scripted_t *m_pAI; 
  const AINavigator *pNavigator; 

  m_pAI = this->m_pAI;
  pNavigator = m_pAI->pNavigator;
  return pNavigator && (!m_pAI->Physics.bFollowingPath || !Nav_IsStraightLineToGoal(pNavigator)) && !AIScriptedInterface::IsInCoverArrival(this) && (!this->m_pAI->sentient->pClaimedNode || !AIScriptedInterface::KeepClaimedNode(this)) && !G_MotionWarp_Active(this->m_pAI->ent->s.number);
}

/*
==============
AIScriptedInterface::GetNodeToUseForAnimscript
==============
*/
pathnode_t *AIScriptedInterface::GetNodeToUseForAnimscript(AIScriptedInterface *this)
{
  ai_scripted_t *m_pAI; 
  const sentient_s *sentient; 
  pathnode_t *pClaimedNode; 
  const pathnode_t *node; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 1448, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  m_pAI = this->m_pAI;
  sentient = m_pAI->sentient;
  pClaimedNode = sentient->pClaimedNode;
  if ( pClaimedNode && (!m_pAI->fixedNode || (node = m_pAI->codeGoal.node, pClaimedNode == node) || node && !Path_CanClaimNode(node, sentient)) )
    return pClaimedNode;
  else
    return 0i64;
}

/*
==============
AIScriptedInterface::GetPathGoalPos
==============
*/
char AIScriptedInterface::GetPathGoalPos(AIScriptedInterface *this, vec3_t *goalPos)
{
  if ( !AICommonInterface::HasPath(this) || this->m_pAI->avoidanceBlockedData.blocked )
    return 0;
  AICommonInterface::GetPathFinalGoal(this, goalPos);
  return 1;
}

/*
==============
AIScriptedInterface::GetPathSmoothParams
==============
*/
void AIScriptedInterface::GetPathSmoothParams(AIScriptedInterface *this, float fMoveDist, float *maxTurnSpeed, float *lookaheadDist, float *accel, float *decel, float *sharpTurn)
{
  ai_scripted_t *m_pAI; 
  __int128 v11; 
  double Float_Internal_DebugName; 

  if ( !maxTurnSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 6707, ASSERT_TYPE_ASSERT, "( maxTurnSpeed )", (const char *)&queryFormat, "maxTurnSpeed") )
    __debugbreak();
  if ( !lookaheadDist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 6708, ASSERT_TYPE_ASSERT, "( lookaheadDist )", (const char *)&queryFormat, "lookaheadDist") )
    __debugbreak();
  m_pAI = this->m_pAI;
  if ( m_pAI->Physics.bSpace )
  {
    *lookaheadDist = 120.0;
    *maxTurnSpeed = 360.0;
    *sharpTurn = 0.64200002;
  }
  else if ( m_pAI->orientation.faceMotion )
  {
    if ( fMoveDist <= 11.0 )
    {
      if ( fMoveDist <= 7.5 )
      {
        if ( fMoveDist <= 5.0 )
        {
          *lookaheadDist = 70.0;
          Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_ai_walk_pathSmoothTurnSpeed, "ai_walk_pathSmoothTurnSpeed");
          *maxTurnSpeed = *(float *)&Float_Internal_DebugName;
          *sharpTurn = 0.5;
        }
        else
        {
          *lookaheadDist = 120.0;
          *maxTurnSpeed = 3.0;
          *sharpTurn = 0.64200002;
        }
      }
      else
      {
        *lookaheadDist = 120.0;
        *maxTurnSpeed = 6.0;
        *sharpTurn = 0.64200002;
      }
    }
    else
    {
      *lookaheadDist = 150.0;
      *maxTurnSpeed = 8.0;
      *sharpTurn = 0.76599997;
    }
  }
  else
  {
    *lookaheadDist = 120.0;
    v11 = LODWORD(m_pAI->Physics.vVelocity.v[0]);
    _XMM0 = LODWORD(FLOAT_5_0);
    *(float *)&v11 = (float)((float)(*(float *)&v11 * *(float *)&v11) + (float)(m_pAI->Physics.vVelocity.v[1] * m_pAI->Physics.vVelocity.v[1])) + (float)(m_pAI->Physics.vVelocity.v[2] * m_pAI->Physics.vVelocity.v[2]);
    _XMM3 = v11;
    __asm
    {
      vcmpltss xmm4, xmm3, cs:__real@40800000
      vblendvps xmm1, xmm0, xmm1, xmm4
    }
    *maxTurnSpeed = *(float *)&_XMM1;
    *sharpTurn = 0.64200002;
  }
  *accel = *maxTurnSpeed * 0.33329999;
  *decel = *maxTurnSpeed * 0.5;
}

/*
==============
AIScriptedInterface::GetPathStartPoint
==============
*/
void AIScriptedInterface::GetPathStartPoint(AIScriptedInterface *this, vec3_t *vStartPoint)
{
  if ( !AICommonInterface::HasPath(this) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 6591, ASSERT_TYPE_ASSERT, "(HasPath())", (const char *)&queryFormat, "HasPath()") )
    __debugbreak();
  if ( !this->m_pAI->pNavigator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 6592, ASSERT_TYPE_ASSERT, "(m_pAI->pNavigator)", (const char *)&queryFormat, "m_pAI->pNavigator") )
    __debugbreak();
  this->m_pAI->pNavigator->GetSnappedPathStartPos(this->m_pAI->pNavigator, vStartPoint);
}

/*
==============
AIScriptedInterface::GetUpdateDependency
==============
*/
gentity_s *AIScriptedInterface::GetUpdateDependency(AIScriptedInterface *this)
{
  unsigned __int16 groundEntNum; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 7707, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  groundEntNum = this->m_pAI->Physics.groundEntNum;
  if ( (unsigned __int16)(groundEntNum - 2046) > 1u && G_IsEntityInUse(groundEntNum) )
    return &g_entities[this->m_pAI->Physics.groundEntNum];
  else
    return 0i64;
}

/*
==============
AIScriptedInterface::GoalChanged
==============
*/
void AIScriptedInterface::GoalChanged(AIScriptedInterface *this)
{
  this->m_pAI->fixedNodeNudged = 0;
  GScr_Notify(this->m_pAI->ent, scr_const.goal_changed, 0);
}

/*
==============
AIScriptedInterface::GoalReached
==============
*/
bool AIScriptedInterface::GoalReached(AIScriptedInterface *this)
{
  ai_scripted_t *m_pAI; 
  pathnode_t *pClaimedNode; 
  float v5; 
  double Angle; 
  float v9; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 3918, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 3919, ASSERT_TYPE_ASSERT, "( m_pAI->ent )", (const char *)&queryFormat, "m_pAI->ent") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 3920, ASSERT_TYPE_ASSERT, "( m_pAI->sentient )", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  if ( !AICommonInterface::PointAtGoal(this, &this->m_pAI->ent->r.currentOrigin, &this->m_pAI->scriptGoal) )
    return 0;
  if ( AIScriptedInterface::GetScriptOrientMode(this) )
    return 1;
  if ( AIScriptedInterface::GetCodeOrientmode(this) != AI_ORIENT_TO_GOAL )
    return 1;
  m_pAI = this->m_pAI;
  pClaimedNode = m_pAI->sentient->pClaimedNode;
  if ( !pClaimedNode )
    return 1;
  if ( ((1 << LOBYTE(pClaimedNode->constant.type)) & 0x82641EFC) != 0 )
    return 1;
  if ( (pClaimedNode->constant.spawnflags & 0x8000) == 0 )
    return 1;
  v5 = m_pAI->ent->r.currentAngles.v[1];
  Angle = pathnode_t::GetAngle(pClaimedNode);
  _XMM1 = 0i64;
  __asm { vroundss xmm4, xmm1, xmm3, 1 }
  v9 = (float)((float)((float)(*(float *)&Angle - v5) * 0.0027777778) - *(float *)&_XMM4) * 360.0;
  return v9 >= -20.0 && v9 <= 20.0;
}

/*
==============
AIScriptedInterface::HadPath
==============
*/
bool AIScriptedInterface::HadPath(AIScriptedInterface *this)
{
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 5702, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  return AICommonInterface::HasPath(this) && (signed int)this->m_pAI->pNavigator->m_TimeOfLastPathUpdate < level.time;
}

/*
==============
AIScriptedInterface::HandleInvalidPath
==============
*/
void AIScriptedInterface::HandleInvalidPath(AIScriptedInterface *this)
{
  int IsSuppressedInAnyway; 
  const dvar_t *v3; 
  int time; 
  const char *v5; 
  int v6; 
  const char *v7; 
  scrContext_t *v8; 
  char *fmt; 
  __int64 v10; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 3963, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  this->m_pAI->pathWaitTime = level.time + 500;
  if ( !this->m_pAI->useMeleeAttackSpot )
  {
    AIScriptedInterface::TeamMoveBlocked(this);
    if ( AIScriptedInterface::IsDoingReacquire(this) )
    {
      AIScriptedInterface::SetReacquire(this, AI_REACQUIRE_DISABLED, 2047);
      AIScriptedInterface::ClearBTGoal(this, AI_BT_GOAL_PRIORITY_URGENT);
    }
    IsSuppressedInAnyway = AIScriptedInterface::IsSuppressedInAnyway(this);
    v3 = DVARINT_ai_badPathSpam;
    if ( IsSuppressedInAnyway )
    {
      if ( !DVARINT_ai_badPathSpam && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_badPathSpam") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v3);
      if ( v3->current.integer == 2 )
      {
        time = level.time;
        v5 = vtos(&this->m_pAI->ent->r.currentOrigin);
        LODWORD(fmt) = time;
        Com_Printf(18, "AI (entity %d, origin %s) couldn't find path to goal. Maybe suppressed. Time: %d\n", (unsigned int)this->m_pAI->ent->s.number, v5, fmt);
      }
    }
    else
    {
      if ( !DVARINT_ai_badPathSpam && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_badPathSpam") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v3);
      if ( v3->current.integer )
      {
        v6 = level.time;
        v7 = vtos(&this->m_pAI->ent->r.currentOrigin);
        LODWORD(v10) = v6;
        Com_Printf(18, "%sAI (entity %d, origin %s) couldn't find path to goal. Time: %d\n", "^1", (unsigned int)this->m_pAI->ent->s.number, v7, v10);
      }
    }
    AIScriptedInterface::Debug_NotMoving(this, "pathfind fail");
    if ( !this->m_pAI->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 3993, ASSERT_TYPE_ASSERT, "( m_pAI->ent )", (const char *)&queryFormat, "m_pAI->ent") )
      __debugbreak();
    v8 = ScriptContext_Server();
    Scr_AddVector(v8, g_pathAttemptGoalPos.v);
    GScr_Notify(this->m_pAI->ent, scr_const.bad_path, 1u);
  }
}

/*
==============
AIScriptedInterface::InFixedNodeExposedCombat
==============
*/
bool AIScriptedInterface::InFixedNodeExposedCombat(AIScriptedInterface *this)
{
  gentity_s *TargetEntity; 
  sentient_s *sentient; 
  ai_scripted_t *m_pAI; 
  pathnode_t *pClaimedNode; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 4803, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 4804, ASSERT_TYPE_ASSERT, "( m_pAI->sentientInfo )", (const char *)&queryFormat, "m_pAI->sentientInfo") )
    __debugbreak();
  TargetEntity = AICommonInterface::GetTargetEntity(this);
  if ( !TargetEntity )
    return 0;
  sentient = TargetEntity->sentient;
  if ( sentient )
  {
    if ( level.time - this->m_pAI->sentientInfo[sentient - level.sentients].lastKnownPosTime > 10000 )
      return 0;
  }
  m_pAI = this->m_pAI;
  _XMM0 = LODWORD(m_pAI->codeGoal.radius);
  __asm { vminss  xmm3, xmm0, cs:__real@42800000; buffer }
  if ( m_pAI->eState[m_pAI->stateLevel] != AIS_BEHAVE )
    return 0;
  pClaimedNode = m_pAI->sentient->pClaimedNode;
  if ( pClaimedNode )
  {
    if ( pClaimedNode->constant.type != 9 )
      return 0;
  }
  return AICommonInterface::PointNearPoint(this, &m_pAI->ent->r.currentOrigin, &m_pAI->codeGoal.pos, *(float *)&_XMM3);
}

/*
==============
AIScriptedInterface::InNonDamageableScriptedState
==============
*/
char AIScriptedInterface::InNonDamageableScriptedState(AIScriptedInterface *this)
{
  ai_scripted_t *m_pAI; 
  __int64 v3; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 1946, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  m_pAI = this->m_pAI;
  v3 = 0i64;
  while ( m_pAI->eSimulatedState[v3] != AIS_SCRIPTEDANIM )
  {
    v3 = (unsigned int)(v3 + 1);
    if ( (unsigned int)v3 > m_pAI->simulatedStateLevel )
      return 0;
  }
  return 1;
}

/*
==============
AIScriptedInterface::InScriptedState
==============
*/
char AIScriptedInterface::InScriptedState(AIScriptedInterface *this)
{
  ai_scripted_t *m_pAI; 
  __int64 v3; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 1930, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  m_pAI = this->m_pAI;
  v3 = 0i64;
  while ( (unsigned int)(m_pAI->eSimulatedState[v3] - 7) > 2 )
  {
    v3 = (unsigned int)(v3 + 1);
    if ( (unsigned int)v3 > m_pAI->simulatedStateLevel )
      return 0;
  }
  return 1;
}

/*
==============
AIActorInterface::InitActors
==============
*/
void AIActorInterface::InitActors(void)
{
  __int64 v0; 
  actor_s *actors; 

  v0 = 0i64;
  *(_QWORD *)&level.actorCount = 0i64;
  do
  {
    actors = level.actors;
    if ( !level.actors[v0].sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 767, ASSERT_TYPE_ASSERT, "( actor->sentientInfo != nullptr )", (const char *)&queryFormat, "actor->sentientInfo != nullptr") )
      __debugbreak();
    actors[v0++].inuse = 0;
  }
  while ( v0 < 38 );
  Actor_EventListener_Init();
  AIPhys_Init();
}

/*
==============
AIScriptedInterface::InitAnimScript
==============
*/
void AIScriptedInterface::InitAnimScript(AIScriptedInterface *this)
{
  gentity_s *ent; 
  scrContext_t *v3; 
  unsigned int v4; 
  ai_scripted_t *m_pAI; 
  __int64 v6; 

  if ( !this->m_pAI->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 867, ASSERT_TYPE_ASSERT, "( m_pAI->ent )", (const char *)&queryFormat, "m_pAI->ent") )
    __debugbreak();
  if ( this->m_pAI->ent->actor != this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 868, ASSERT_TYPE_ASSERT, "( m_pAI->ent->actor == m_pAI )", (const char *)&queryFormat, "m_pAI->ent->actor == m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->ent->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 869, ASSERT_TYPE_ASSERT, "( m_pAI->ent->sentient )", (const char *)&queryFormat, "m_pAI->ent->sentient") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 870, ASSERT_TYPE_ASSERT, "( m_pAI->sentient )", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  if ( this->m_pAI->sentient != this->m_pAI->ent->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 871, ASSERT_TYPE_ASSERT, "( m_pAI->sentient == m_pAI->ent->sentient )", (const char *)&queryFormat, "m_pAI->sentient == m_pAI->ent->sentient") )
    __debugbreak();
  if ( this->m_pAI->sentient->ent != this->m_pAI->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 872, ASSERT_TYPE_ASSERT, "( m_pAI->sentient->ent == m_pAI->ent )", (const char *)&queryFormat, "m_pAI->sentient->ent == m_pAI->ent") )
    __debugbreak();
  ent = this->m_pAI->ent;
  v3 = ScriptContext_Server();
  v4 = GScr_ExecEntThread(ent, g_animScriptTable[this->m_pAI->species]->init.func, 0);
  Scr_FreeThread(v3, v4);
  if ( this->m_pAI->stateLevel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 882, ASSERT_TYPE_ASSERT, "( ( m_pAI->stateLevel == 0 ) )", "%s\n\t( m_pAI->stateLevel ) = %i", "( m_pAI->stateLevel == 0 )", this->m_pAI->stateLevel) )
    __debugbreak();
  if ( (unsigned int)(this->m_pAI->eState[0] - 1) > 8 )
  {
    LODWORD(v6) = this->m_pAI->eState[0];
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 883, ASSERT_TYPE_ASSERT, "( ( m_pAI->eState[0] > AIS_INVALID && m_pAI->eState[0] < AIS_COUNT ) )", "%s\n\t( m_pAI->eState[0] ) = %i", "( m_pAI->eState[0] > AIS_INVALID && m_pAI->eState[0] < AIS_COUNT )", v6) )
      __debugbreak();
  }
  m_pAI = this->m_pAI;
  if ( !AIFuncTable[m_pAI->species][m_pAI->eState[0]].pfnStart )
  {
    LODWORD(v6) = m_pAI->eState[0];
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 884, ASSERT_TYPE_ASSERT, "( ( AIFuncTable[m_pAI->species][m_pAI->eState[0]].pfnStart ) )", "%s\n\t( m_pAI->eState[0] ) = %i", "( AIFuncTable[m_pAI->species][m_pAI->eState[0]].pfnStart )", v6) )
      __debugbreak();
  }
  AIFuncTable[this->m_pAI->species][this->m_pAI->eState[0]].pfnStart(this->m_pAI, AIS_INVALID);
  ent->nextthink = level.time;
  ent->handler = 2;
}

/*
==============
AIScriptedInterface::InitMove
==============
*/
void AIScriptedInterface::InitMove(AIScriptedInterface *this)
{
  ai_scripted_t *m_pAI; 
  ai_scripted_t *v3; 
  gentity_s *ent; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 2998, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 2999, ASSERT_TYPE_ASSERT, "( m_pAI->ent )", (const char *)&queryFormat, "m_pAI->ent") )
    __debugbreak();
  memset_0(&this->m_pAI->Physics, 0, sizeof(this->m_pAI->Physics));
  m_pAI = this->m_pAI;
  *(_QWORD *)m_pAI->Physics.vOrigin.v = 0i64;
  m_pAI->Physics.vOrigin.v[2] = 0.0;
  this->m_pAI->Physics.iEntNum = this->m_pAI->ent->s.number;
  this->m_pAI->Physics.ePhysicsType = AIPHYS_BAD;
  if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
    __debugbreak();
  this->m_pAI->Physics.iMsec = level.frameDuration;
  this->m_pAI->Physics.bIsAlive = 1;
  if ( this->m_pAI->ent->health <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 3008, ASSERT_TYPE_ASSERT, "( m_pAI->ent->health > 0 )", (const char *)&queryFormat, "m_pAI->ent->health > 0") )
    __debugbreak();
  this->m_pAI->Physics.iTraceMask = 33685521;
  this->m_pAI->Physics.iHitEntnum = 2047;
  this->m_pAI->Physics.groundEntNum = 2046;
  this->m_pAI->Physics.forcedGroundEntNum = 2047;
  v3 = this->m_pAI;
  ent = v3->ent;
  *(_OWORD *)v3->Physics.bounds.midPoint.v = *(_OWORD *)v3->ent->r.box.midPoint.v;
  *(double *)&v3->Physics.bounds.halfSize.y = *(double *)&ent->r.box.halfSize.y;
  this->m_pAI->Physics.pathGoingDown = 0;
  this->m_pAI->Physics.stairsState = AI_STAIRS_NONE;
  this->m_pAI->Physics.bSpace = 0;
}

/*
==============
AIScriptedInterface::InitNavigator
==============
*/
void AIScriptedInterface::InitNavigator(AIScriptedInterface *this)
{
  AINavLayer LayerForSpecies; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 7697, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 7698, ASSERT_TYPE_ASSERT, "( m_pAI->ent )", (const char *)&queryFormat, "m_pAI->ent") )
    __debugbreak();
  LayerForSpecies = Nav_GetLayerForSpecies(this->m_pAI->species);
  this->m_pAI->pNavigator = Nav_Create2DNavigator(this->m_pAI->ent, LayerForSpecies);
}

/*
==============
AIScriptedInterface::IsAtGoal
==============
*/
bool AIScriptedInterface::IsAtGoal(AIScriptedInterface *this)
{
  gentity_s *ent; 
  vec3_t vFinalGoal; 
  vec3_t pos; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 3881, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 3882, ASSERT_TYPE_ASSERT, "( m_pAI->sentient )", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  ent = this->m_pAI->ent;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 3885, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( AICommonInterface::PointAtGoal(this, &ent->r.currentOrigin, &this->m_pAI->codeGoal) )
  {
    if ( !AICommonInterface::HasPath(this) )
    {
      if ( this->m_pAI->sentient->pClaimedNode )
        return AIScriptedInterface::ShouldKeepClaimedNode(this);
      return 1;
    }
    AICommonInterface::GetPathFinalGoal(this, &vFinalGoal);
    if ( AICommonInterface::PointAtGoal(this, &vFinalGoal, &this->m_pAI->codeGoal) )
    {
      if ( this->m_pAI->sentient->pClaimedNode && !AIScriptedInterface::KeepClaimedNode(this) )
      {
        pathnode_t::GetPos(this->m_pAI->sentient->pClaimedNode, &pos);
        return AICommonInterface::PointAt(this, &ent->r.currentOrigin, &pos);
      }
      return 1;
    }
  }
  return 0;
}

/*
==============
AIScriptedInterface::IsAtScriptGoal
==============
*/
bool AIScriptedInterface::IsAtScriptGoal(AIScriptedInterface *this)
{
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 3918, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 3919, ASSERT_TYPE_ASSERT, "( m_pAI->ent )", (const char *)&queryFormat, "m_pAI->ent") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 3920, ASSERT_TYPE_ASSERT, "( m_pAI->sentient )", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  return AICommonInterface::PointAtGoal(this, &this->m_pAI->ent->r.currentOrigin, &this->m_pAI->scriptGoal);
}

/*
==============
AIActorInterface::IsDeletable
==============
*/
_BOOL8 AIActorInterface::IsDeletable(AIActorInterface *this)
{
  actor_s *m_pAI; 

  m_pAI = this->m_pAI;
  return (m_pAI->ent->spawnflags & 4) == 0 && m_pAI->ent->s.number != level.currentEntityThink;
}

/*
==============
AIScriptedInterface::IsDoingExposedCombat
==============
*/
bool AIScriptedInterface::IsDoingExposedCombat(AIScriptedInterface *this)
{
  ai_scripted_t *m_pAI; 
  pathnode_t *pClaimedNode; 
  bool result; 

  m_pAI = this->m_pAI;
  result = 0;
  if ( m_pAI->eState[m_pAI->stateLevel] == AIS_BEHAVE )
  {
    pClaimedNode = m_pAI->sentient->pClaimedNode;
    if ( !pClaimedNode || pClaimedNode->constant.type == 9 )
      return 1;
  }
  return result;
}

/*
==============
AIScriptedInterface::IsDying
==============
*/
bool AIScriptedInterface::IsDying(AIScriptedInterface *this)
{
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 2121, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  return this->m_pAI->eState[this->m_pAI->stateLevel] == AIS_DEATH;
}

/*
==============
AIScriptedInterface::IsFixedNodeUseable
==============
*/
char AIScriptedInterface::IsFixedNodeUseable(AIScriptedInterface *this, bool bQueryOnly)
{
  ai_scripted_t *m_pAI; 
  const pathnode_t *node; 
  const sentient_s *sentient; 
  pathnode_t *pClaimedNode; 
  gentity_s *v9; 
  const gentity_s *v10; 
  scrContext_t *v11; 
  unsigned __int64 eTeam; 
  int v13; 
  int v14; 
  ai_scripted_t *v15; 
  float fixedNodeSafeRadius; 
  const vec3_t *p_pos; 
  const gentity_s *v18; 
  vec3_t pos; 
  bitarray<224> teamFlags; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 4649, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 4650, ASSERT_TYPE_ASSERT, "( m_pAI->sentient )", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  m_pAI = this->m_pAI;
  node = m_pAI->codeGoal.node;
  if ( m_pAI->fixedNodeNudged )
  {
    sentient = m_pAI->sentient;
    pClaimedNode = sentient->pClaimedNode;
    if ( !pClaimedNode )
    {
      if ( !sentient->pPrevClaimedNode )
        goto LABEL_18;
      pClaimedNode = sentient->pPrevClaimedNode;
    }
    if ( !Path_CanClaimNode(pClaimedNode, sentient) )
    {
      if ( !bQueryOnly )
      {
        this->m_pAI->commitToFixedNode = 0;
        CheckIfNodeTaken(this->m_pAI->ent, node);
        AIScriptedInterface::Debug_NotMoving(this, "cannot claim fixed node");
        return 0;
      }
      return 0;
    }
    if ( G_IsEntityInUse(0) )
    {
      v9 = g_entities;
      pathnode_t::GetPos(pClaimedNode, &pos);
      if ( (float)((float)((float)((float)(pos.v[1] - v9->r.currentOrigin.v[1]) * (float)(pos.v[1] - v9->r.currentOrigin.v[1])) + (float)((float)(pos.v[0] - v9->r.currentOrigin.v[0]) * (float)(pos.v[0] - v9->r.currentOrigin.v[0]))) + (float)((float)(pos.v[2] - v9->r.currentOrigin.v[2]) * (float)(pos.v[2] - v9->r.currentOrigin.v[2]))) < 2304.0 )
      {
        if ( !bQueryOnly )
        {
          this->m_pAI->commitToFixedNode = 0;
          CheckIfNodeTaken(this->m_pAI->ent, node);
          AIScriptedInterface::Debug_NotMoving(this, "player too close to fixed node");
          return 0;
        }
        return 0;
      }
    }
  }
LABEL_18:
  v10 = NULL;
  v11 = ScriptContext_Server();
  eTeam = (unsigned int)this->m_pAI->sentient->eTeam;
  memset(&teamFlags, 0, sizeof(teamFlags));
  if ( (unsigned int)eTeam >= 0xE0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", eTeam, 224) )
    __debugbreak();
  teamFlags.array[eTeam >> 5] |= 0x80000000 >> (eTeam & 0x1F);
  v13 = Nav_TranslateTeamFlagsToRepulsorUsageFlags(&teamFlags);
  if ( Nav_IsPointInRepulsorBadplace(&this->m_pAI->codeGoal.pos, v13, this->m_pAI->ent->s.number, 2047) )
  {
    if ( !bQueryOnly )
    {
      Scr_AddConstString(v11, scr_const.badplace);
      GScr_Notify(this->m_pAI->ent, scr_const.node_bad, 1u);
      AIScriptedInterface::Debug_NotMoving(this, "fixed node - badplace repulsor");
      return 0;
    }
    return 0;
  }
  if ( node && !this->m_pAI->pNavigator->IsNodeUsable(this->m_pAI->pNavigator, node) )
  {
    if ( !bQueryOnly )
    {
      Scr_AddConstString(v11, scr_const.unusable);
      GScr_Notify(this->m_pAI->ent, scr_const.node_bad, 1u);
      AIScriptedInterface::Debug_NotMoving(this, "fixed node - node unusable");
      return 0;
    }
    return 0;
  }
  if ( (((__int64 (__fastcall *)(AIScriptedInterface *))this->GetTraceMask)(this) & 0x2000000) != 0 )
  {
    v14 = 0;
    if ( level.maxclients > 0 )
    {
      while ( !G_IsEntityInUse(v14) || !AICommonInterface::PointNearPoint(this, &this->m_pAI->codeGoal.pos, &g_entities[v14].r.currentOrigin, 30.0) || !AICommonInterface::PointNearPointSqDist(this, &this->m_pAI->codeGoal.pos, &this->m_pAI->ent->r.currentOrigin, 2304.0) )
      {
        if ( ++v14 >= level.maxclients )
          goto LABEL_34;
      }
      if ( !bQueryOnly )
      {
        this->m_pAI->commitToFixedNode = 0;
        AIScriptedInterface::Debug_NotMoving(this, "player too close to goal pos");
      }
      return 0;
    }
  }
LABEL_34:
  if ( AICommonInterface::HasPath(this) )
  {
    AICommonInterface::GetPathFinalGoal(this, &pos);
    if ( AICommonInterface::PointNear(this, &this->m_pAI->codeGoal.pos, &pos) )
      goto LABEL_36;
  }
  else if ( AICommonInterface::PointNear(this, &this->m_pAI->codeGoal.pos, &this->m_pAI->ent->r.currentOrigin) )
  {
    if ( !bQueryOnly )
    {
      this->m_pAI->commitToFixedNode = 0;
      AIScriptedInterface::Debug_NotMoving(this, "fixed node - already close to goal");
    }
    return 1;
  }
  if ( !node || Path_CanClaimNode(node, this->m_pAI->sentient) )
  {
LABEL_36:
    if ( !bQueryOnly )
    {
      v15 = this->m_pAI;
      fixedNodeSafeRadius = v15->fixedNodeSafeRadius;
      p_pos = &v15->codeGoal.pos;
      if ( EntHandle::isDefined(&v15->fixedNodeSafeVolume) )
        v10 = EntHandle::ent(&this->m_pAI->fixedNodeSafeVolume);
      v18 = AIScriptedInterface::IsKnownEnemyInRegion(this, v10, p_pos, fixedNodeSafeRadius, 1);
      if ( v18 )
      {
        GScr_AddEntity(v18);
        Scr_AddConstString(v11, scr_const.unsafe);
        GScr_Notify(this->m_pAI->ent, scr_const.node_bad, 2u);
      }
    }
    return 1;
  }
  if ( bQueryOnly )
    return 0;
  CheckIfNodeTaken(this->m_pAI->ent, node);
  return 0;
}

/*
==============
AIScriptedInterface::IsKnownEnemyInRegion
==============
*/
gentity_s *AIScriptedInterface::IsKnownEnemyInRegion(AIScriptedInterface *this, const gentity_s *volume, const vec3_t *position, float radius, bool testEnemyNode)
{
  unsigned int i; 
  sentient_s *sentients; 
  ai_scripted_t *m_pAI; 
  __int64 v11; 
  const sentient_info_t *v12; 
  int lastKnownPosTime; 
  gentity_s *ent; 
  AIScriptedInterface *v15; 
  unsigned int Instance; 
  pathnode_t *pClaimedNode; 
  float v18; 
  float v19; 
  float fixedNodeSafeVolumeRadiusSq; 
  int v21; 
  int v22; 
  bool v23; 
  bool v24; 
  pathnode_t *v25; 
  AIWrapper v28; 
  vec3_t outLastKnownPos; 
  vec3_t pos; 
  vec3_t vGoalPos; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 4535, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 4536, ASSERT_TYPE_ASSERT, "( m_pAI->sentientInfo )", (const char *)&queryFormat, "m_pAI->sentientInfo") )
    __debugbreak();
  if ( radius != 0.0 || volume )
  {
    for ( i = 0; i < level.maxSentients; ++i )
    {
      sentients = level.sentients;
      m_pAI = this->m_pAI;
      v11 = i;
      if ( !level.sentients[v11].inuse )
        continue;
      v12 = &m_pAI->sentientInfo[(unsigned __int64)i];
      lastKnownPosTime = v12->lastKnownPosTime;
      if ( !lastKnownPosTime )
        continue;
      if ( level.time - lastKnownPosTime > 10000 )
        continue;
      if ( level.sentients[v11].eTeam == m_pAI->sentient->eTeam )
        continue;
      ent = level.sentients[v11].ent;
      if ( (float)ent->health == 0.0 )
        continue;
      AIWrapper::AIWrapper(&v28, ent);
      v15 = v28.m_pAI;
      if ( v28.m_pAI )
      {
        if ( v28.m_pAI->IsDying(v28.m_pAI) || *(_BYTE *)(v15->GetAI(v15) + 3040) )
          continue;
      }
      SentientInfo_GetLastKnownPos(v12, &outLastKnownPos);
      if ( volume )
      {
        Instance = G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_FIRST, volume);
        if ( testEnemyNode && (pClaimedNode = sentients[v11].pClaimedNode) != NULL )
        {
          pathnode_t::GetPos(pClaimedNode, &pos);
          v18 = volume->r.currentOrigin.v[1];
          v19 = volume->r.currentOrigin.v[0];
          fixedNodeSafeVolumeRadiusSq = this->m_pAI->fixedNodeSafeVolumeRadiusSq;
          if ( fixedNodeSafeVolumeRadiusSq < (float)((float)((float)(v18 - outLastKnownPos.v[1]) * (float)(v18 - outLastKnownPos.v[1])) + (float)((float)(v19 - outLastKnownPos.v[0]) * (float)(v19 - outLastKnownPos.v[0]))) && fixedNodeSafeVolumeRadiusSq < (float)((float)((float)(v18 - pos.v[1]) * (float)(v18 - pos.v[1])) + (float)((float)(v19 - pos.v[0]) * (float)(v19 - pos.v[0]))) )
            continue;
          v21 = PhysicsQuery_LegacyEntityContactPoint(PHYSICS_WORLD_ID_FIRST, &outLastKnownPos, Instance, volume);
          v22 = PhysicsQuery_LegacyEntityContactPoint(PHYSICS_WORLD_ID_FIRST, &pos, Instance, volume);
          if ( v21 )
            return level.sentients[i].ent;
          v23 = v22 == 0;
        }
        else
        {
          if ( (float)((float)((float)(volume->r.currentOrigin.v[1] - outLastKnownPos.v[1]) * (float)(volume->r.currentOrigin.v[1] - outLastKnownPos.v[1])) + (float)((float)(volume->r.currentOrigin.v[0] - outLastKnownPos.v[0]) * (float)(volume->r.currentOrigin.v[0] - outLastKnownPos.v[0]))) > this->m_pAI->fixedNodeSafeVolumeRadiusSq )
            continue;
          v23 = PhysicsQuery_LegacyEntityContactPoint(PHYSICS_WORLD_ID_FIRST, &outLastKnownPos, Instance, volume) == 0;
        }
      }
      else
      {
        v24 = AICommonInterface::PointNearPoint(this, position, &outLastKnownPos, radius);
        if ( testEnemyNode )
        {
          v25 = sentients[v11].pClaimedNode;
          if ( v25 )
          {
            pathnode_t::GetPos(v25, &vGoalPos);
            if ( AICommonInterface::PointNearPoint(this, position, &vGoalPos, radius) )
              return level.sentients[i].ent;
          }
        }
        v23 = !v24;
      }
      if ( !v23 )
        return level.sentients[i].ent;
    }
  }
  return 0i64;
}

/*
==============
AIScriptedInterface::IsMovingToMeleeAttack
==============
*/
_BOOL8 AIScriptedInterface::IsMovingToMeleeAttack(AIScriptedInterface *this)
{
  return this->m_pAI->blackboard.m_bMeleeChargeRequested;
}

/*
==============
AIScriptedInterface::IsPathSuppressed
==============
*/
char AIScriptedInterface::IsPathSuppressed(AIScriptedInterface *this)
{
  int v3; 
  PathBlockPlanes *p_blockPlanes; 
  float *fDist; 
  float v7; 
  int v10; 
  __int64 v11; 
  __int64 v12; 
  float *v13; 
  vec2_t v15; 
  PathBlockPlanes blockPlanes; 
  char ptr[400]; 

  AIScriptedInterface::GetMoveOnlySuppressionPlanes(this, &blockPlanes);
  v3 = 0;
  if ( blockPlanes.iPlaneCount <= 0 )
    return 0;
  p_blockPlanes = &blockPlanes;
  fDist = blockPlanes.fDist;
  _XMM11 = LODWORD(FLOAT_256_0);
  while ( 1 )
  {
    v7 = *fDist;
    v15 = p_blockPlanes->vNormal[0];
    if ( !AICommonInterface::HasPath(this) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 5441, ASSERT_TYPE_ASSERT, "(HasPath())", (const char *)&queryFormat, "HasPath()") )
      __debugbreak();
    *(double *)&_XMM0 = AIScriptedInterface::GetDefaultSpeed(this);
    __asm
    {
      vcmpltss xmm1, xmm0, xmm9
      vblendvps xmm6, xmm11, xmm10, xmm1
    }
    `eh vector constructor iterator'(ptr, 0x28ui64, 0xAui64, (void (__fastcall *)(void *))nav_cornerdata_t::nav_cornerdata_t, (void (__fastcall *)(void *))nav_cornerdata_t::~nav_cornerdata_t);
    v10 = ((__int64 (__fastcall *)(AINavigator *, char *, __int64))this->m_pAI->pNavigator->GetNextNCorners)(this->m_pAI->pNavigator, ptr, 10i64);
    v11 = 0i64;
    if ( v10 > 0 )
      break;
LABEL_10:
    `eh vector destructor iterator'(ptr, 0x28ui64, 0xAui64, (void (__fastcall *)(void *))nav_cornerdata_t::~nav_cornerdata_t);
    ++v3;
    ++fDist;
    p_blockPlanes = (PathBlockPlanes *)((char *)p_blockPlanes + 8);
    if ( v3 >= blockPlanes.iPlaneCount )
      return 0;
  }
  v12 = v10;
  v13 = (float *)ptr;
  while ( 1 )
  {
    *((_QWORD *)&_XMM0 + 1) = 0i64;
    if ( (float)((float)((float)((float)(v15.v[1] * this->m_pAI->ent->r.currentOrigin.v[1]) + (float)(v15.v[0] * this->m_pAI->ent->r.currentOrigin.v[0])) - v7) * (float)((float)((float)(v15.v[1] * v13[1]) + (float)(v15.v[0] * *v13)) - v7)) < 0.0 )
      break;
    ++v11;
    v13 += 10;
    if ( v11 >= v12 )
      goto LABEL_10;
  }
  `eh vector destructor iterator'(ptr, 0x28ui64, 0xAui64, (void (__fastcall *)(void *))nav_cornerdata_t::~nav_cornerdata_t);
  return 1;
}

/*
==============
AIScriptedInterface::IsReactingToEnemy
==============
*/
bool AIScriptedInterface::IsReactingToEnemy(AIScriptedInterface *this)
{
  ai_scripted_t *m_pAI; 
  bool result; 

  result = 0;
  if ( AICommonInterface::GetTargetEntity(this) )
  {
    m_pAI = this->m_pAI;
    if ( !m_pAI->blackboard.m_bMeleeChargeRequested && !EntHandle::isDefined(&m_pAI->grenade.pGrenade) && (AIScriptedInterface::IsDoingReacquire(this) || level.time < this->m_pAI->combat.remainExposedEndTime) )
      return 1;
  }
  return result;
}

/*
==============
AIScriptedInterface::IsValidClaimNode
==============
*/
__int64 AIScriptedInterface::IsValidClaimNode(AIScriptedInterface *this, const pathnode_t *node)
{
  ai_scripted_t *m_pAI; 
  gentity_s *TargetEntity; 
  ai_scripted_t *v6; 
  float v7; 
  float v8; 
  float v9; 
  __int64 result; 
  vec3_t vFinalGoal; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 6458, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 6459, ASSERT_TYPE_ASSERT, "( node )", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( !AICommonInterface::HasPath(this) || (AICommonInterface::GetPathFinalGoal(this, &vFinalGoal), m_pAI = this->m_pAI, (float)((float)((float)((float)(vFinalGoal.v[1] - m_pAI->ent->r.currentOrigin.v[1]) * (float)(vFinalGoal.v[1] - m_pAI->ent->r.currentOrigin.v[1])) + (float)((float)(vFinalGoal.v[0] - m_pAI->ent->r.currentOrigin.v[0]) * (float)(vFinalGoal.v[0] - m_pAI->ent->r.currentOrigin.v[0]))) + (float)((float)(vFinalGoal.v[2] - m_pAI->ent->r.currentOrigin.v[2]) * (float)(vFinalGoal.v[2] - m_pAI->ent->r.currentOrigin.v[2]))) >= 65536.0) || (TargetEntity = AICommonInterface::GetTargetEntity(this)) != NULL && (v6 = this->m_pAI, v7 = TargetEntity->r.currentOrigin.v[0] - v6->ent->r.currentOrigin.v[0], v8 = TargetEntity->r.currentOrigin.v[1] - v6->ent->r.currentOrigin.v[1], v9 = TargetEntity->r.currentOrigin.v[2] - v6->ent->r.currentOrigin.v[2], (float)((float)((float)(v8 * v8) + (float)(v7 * v7)) + (float)(v9 * v9)) <= 65536.0) )
    LOBYTE(result) = this->Cover_IsValidCover(this, node, 0);
  else
    LOBYTE(result) = AIScriptedInterface::Cover_IsRoughlyValidCover(this, node);
  return (unsigned __int8)result;
}

/*
==============
AIScriptedInterface::MoveAwayNoWorse
==============
*/
__int64 AIScriptedInterface::MoveAwayNoWorse(AIScriptedInterface *this)
{
  unsigned int v2; 
  AIIterator *v3; 
  gentity_s *i; 
  AIScriptedInterface *v5; 
  ai_agent_t *ScriptedAgentInfo; 
  actor_s *actor; 
  ai_scripted_t *m_pAI; 
  float v9; 
  float v10; 
  float *p_number; 
  AIActorInterface v13; 
  AIAgentInterface v14; 
  AIScriptedInterface *v15; 

  v2 = 1;
  v3 = this->GetAIIterator(this);
  for ( i = (gentity_s *)v3->GetFirst(v3); i; i = v3->GetNext(v3) )
  {
    AIActorInterface::AIActorInterface(&v13);
    AIAgentInterface::AIAgentInterface(&v14);
    v5 = NULL;
    v14.__vftable = (AIAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
    v15 = NULL;
    if ( i->agent )
    {
      if ( SV_Agent_IsScripted(i->s.number) )
      {
        ScriptedAgentInfo = AIAgentInterface::GetScriptedAgentInfo(i);
        if ( !ScriptedAgentInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 97, ASSERT_TYPE_ASSERT, "( pInfo )", (const char *)&queryFormat, "pInfo") )
          __debugbreak();
        if ( !ScriptedAgentInfo->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 98, ASSERT_TYPE_ASSERT, "( pInfo->sentientInfo )", (const char *)&queryFormat, "pInfo->sentientInfo") )
          __debugbreak();
        AINewAgentInterface::SetAgent((AINewAgentInterface *)&v14, ScriptedAgentInfo);
        v5 = &v14;
LABEL_17:
        v15 = v5;
        goto LABEL_18;
      }
      v5 = v15;
    }
    actor = i->actor;
    if ( actor )
    {
      if ( !actor->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 105, ASSERT_TYPE_ASSERT, "( ent->actor->sentientInfo )", (const char *)&queryFormat, "ent->actor->sentientInfo") )
        __debugbreak();
      AIActorInterface::SetActor(&v13, i->actor);
      v5 = &v13;
      goto LABEL_17;
    }
LABEL_18:
    if ( (ai_scripted_t *)v5->GetAI(v5) != this->m_pAI && (!this->GetCloseEnt(this) || i != this->GetCloseEnt(this)) )
    {
      m_pAI = this->m_pAI;
      v9 = i->r.currentOrigin.v[0];
      v10 = i->r.currentOrigin.v[1];
      if ( (float)((float)((float)(v10 - m_pAI->Physics.vOrigin.v[1]) * (float)(v10 - m_pAI->Physics.vOrigin.v[1])) + (float)((float)(v9 - m_pAI->Physics.vOrigin.v[0]) * (float)(v9 - m_pAI->Physics.vOrigin.v[0]))) < 900.0 )
      {
        p_number = (float *)&m_pAI->ent->s.number;
        if ( (float)((float)((float)(v10 - p_number[77]) * (float)(v10 - p_number[77])) + (float)((float)(v9 - p_number[76]) * (float)(v9 - p_number[76]))) >= 900.0 && COERCE_FLOAT(COERCE_UNSIGNED_INT(p_number[78] - i->r.currentOrigin.v[2]) & _xmm) < 80.0 )
        {
          if ( !v5->GetCloseEnt(v5) && !AIScriptedInterface::AtClaimNode(v5) )
            v5->SetCloseEnt(v5, this->m_pAI->ent);
          v2 = 0;
        }
      }
    }
  }
  return v2;
}

/*
==============
AIActorInterface::NextActor
==============
*/
actor_s *AIActorInterface::NextActor(actor_s *pPrevActor, const bitarray<224> *iTeamFlags)
{
  const bitarray<224> *AllTeamFlags; 
  __int128 v5; 
  double v6; 
  unsigned int v7; 
  unsigned int v8; 
  __int128 *v9; 
  signed __int64 v10; 
  signed __int64 v11; 
  unsigned __int64 eTeam; 
  __int64 v14; 
  __int64 v15; 
  __int128 v16; 
  double v17; 
  unsigned int v18; 

  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
    AllTeamFlags = Com_TeamsSP_GetAllTeamFlags();
  else
    AllTeamFlags = Com_TeamsMP_GetAllTeamFlags();
  v5 = *(_OWORD *)AllTeamFlags->array;
  v6 = *(double *)&AllTeamFlags->array[4];
  v7 = AllTeamFlags->array[6];
  v16 = v5;
  v17 = v6;
  LODWORD(v16) = iTeamFlags->array[0] & ~(_DWORD)v5;
  DWORD1(v16) = ~DWORD1(v5) & iTeamFlags->array[1];
  DWORD2(v16) = ~DWORD2(v5) & iTeamFlags->array[2];
  HIDWORD(v16) = ~HIDWORD(v5) & iTeamFlags->array[3];
  *(_QWORD *)&v17 = ~*(_QWORD *)&v6 & *(_QWORD *)&iTeamFlags->array[4];
  v18 = ~v7 & iTeamFlags->array[6];
  v8 = 0;
  v9 = &v16;
  while ( !*(_DWORD *)v9 )
  {
    ++v8;
    v9 = (__int128 *)((char *)v9 + 4);
    if ( v8 >= 7 )
      goto LABEL_10;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 1049, ASSERT_TYPE_ASSERT, "( Com_Teams_IsValidTeamFlag( iTeamFlags ) )", (const char *)&queryFormat, "Com_Teams_IsValidTeamFlag( iTeamFlags )") )
    __debugbreak();
LABEL_10:
  if ( !pPrevActor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 1051, ASSERT_TYPE_ASSERT, "( pPrevActor )", (const char *)&queryFormat, "pPrevActor") )
    __debugbreak();
  if ( (pPrevActor < level.actors || pPrevActor >= &level.actors[38]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 1052, ASSERT_TYPE_ASSERT, "( pPrevActor >= level.actors && pPrevActor < level.actors + (32 + 6) )", (const char *)&queryFormat, "pPrevActor >= level.actors && pPrevActor < level.actors + MAX_ACTORS") )
    __debugbreak();
  if ( pPrevActor != &level.actors[pPrevActor - level.actors] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 1053, ASSERT_TYPE_ASSERT, "( pPrevActor == level.actors + (pPrevActor - level.actors) )", (const char *)&queryFormat, "pPrevActor == level.actors + (pPrevActor - level.actors)") )
    __debugbreak();
  v10 = pPrevActor - level.actors + 1;
  if ( v10 >= 38 )
    return 0i64;
  v11 = v10;
  while ( 1 )
  {
    if ( level.actors[v11].inuse )
    {
      if ( !level.actors[v11].sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 1062, ASSERT_TYPE_ASSERT, "( level.actors[i].sentient )", (const char *)&queryFormat, "level.actors[i].sentient") )
        __debugbreak();
      eTeam = (unsigned int)level.actors[v11].sentient->eTeam;
      if ( (unsigned int)eTeam >= 0xE0 )
      {
        LODWORD(v15) = 224;
        LODWORD(v14) = level.actors[v11].sentient->eTeam;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v14, v15) )
          __debugbreak();
      }
      if ( ((0x80000000 >> (eTeam & 0x1F)) & iTeamFlags->array[eTeam >> 5]) != 0 )
        break;
    }
    ++v10;
    if ( ++v11 >= 38 )
      return 0i64;
  }
  return &level.actors[v10];
}

/*
==============
AIScriptedInterface::NodeClaimRevoked
==============
*/
void AIScriptedInterface::NodeClaimRevoked(AIScriptedInterface *this, int invalidTime)
{
  pathnode_t *pClaimedNode; 
  vec3_t pos; 
  vec3_t vFinalGoal; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 1079, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 1080, ASSERT_TYPE_ASSERT, "( m_pAI->sentient )", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  pClaimedNode = this->m_pAI->sentient->pClaimedNode;
  if ( pClaimedNode )
  {
    if ( AICommonInterface::HasPath(this) )
    {
      pathnode_t::GetPos(pClaimedNode, &pos);
      AICommonInterface::GetPathFinalGoal(this, &vFinalGoal);
      if ( AICommonInterface::PointAt(this, &vFinalGoal, &pos) )
        this->ClearPath(this);
    }
    if ( invalidTime > 0 )
      this->m_pAI->nodeSelect.requestDifferentCover = 1;
  }
}

/*
==============
AIScriptedInterface::OnDie
==============
*/
void AIScriptedInterface::OnDie(gentity_s *self, const gentity_s *pInflictor, gentity_s *pAttacker, int iDamage, int iDamageFlags, int iMod, const Weapon *r_Weapon, bool isAlternate, const vec3_t *vDir, const hitLocation_t hitLoc, int timeOffset)
{
  AIScriptedInterface *m_pAI; 
  AIWrapper v15; 

  AIWrapper::AIWrapper(&v15, self);
  m_pAI = v15.m_pAI;
  if ( !v15.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 2064, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  if ( !vDir && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 2065, ASSERT_TYPE_ASSERT, "( vDir )", (const char *)&queryFormat, "vDir") )
    __debugbreak();
  m_pAI->Die(m_pAI, pInflictor, pAttacker, iDamage, iDamageFlags, iMod, r_Weapon, isAlternate, vDir, hitLoc, timeOffset);
}

/*
==============
AIScriptedInterface::OnPain
==============
*/
void AIScriptedInterface::OnPain(gentity_s *pSelf, gentity_s *pAttacker, int iDamage, const vec3_t *vPoint, const int iMod, const vec3_t *vDir, const hitLocation_t hitLoc, const Weapon *r_weapon, bool isAlternate)
{
  AIScriptedInterface *m_pAI; 
  AIWrapper v13; 

  AIWrapper::AIWrapper(&v13, pSelf);
  m_pAI = v13.m_pAI;
  if ( !v13.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 2003, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  if ( !vPoint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 2004, ASSERT_TYPE_ASSERT, "( vPoint )", (const char *)&queryFormat, "vPoint") )
    __debugbreak();
  if ( !vDir && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 2005, ASSERT_TYPE_ASSERT, "( vDir )", (const char *)&queryFormat, "vDir") )
    __debugbreak();
  m_pAI->Pain(m_pAI, pAttacker, iDamage, vPoint, iMod, vDir, hitLoc, r_weapon, isAlternate);
}

/*
==============
AIScriptedInterface::OnSpawned
==============
*/
void AIScriptedInterface::OnSpawned(AIScriptedInterface *this)
{
  ai_scripted_t *m_pAI; 
  ai_scripted_t *v3; 
  gentity_s *ent; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 2998, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 2999, ASSERT_TYPE_ASSERT, "( m_pAI->ent )", (const char *)&queryFormat, "m_pAI->ent") )
    __debugbreak();
  memset_0(&this->m_pAI->Physics, 0, sizeof(this->m_pAI->Physics));
  m_pAI = this->m_pAI;
  *(_QWORD *)m_pAI->Physics.vOrigin.v = 0i64;
  m_pAI->Physics.vOrigin.v[2] = 0.0;
  this->m_pAI->Physics.iEntNum = this->m_pAI->ent->s.number;
  this->m_pAI->Physics.ePhysicsType = AIPHYS_BAD;
  if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
    __debugbreak();
  this->m_pAI->Physics.iMsec = level.frameDuration;
  this->m_pAI->Physics.bIsAlive = 1;
  if ( this->m_pAI->ent->health <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 3008, ASSERT_TYPE_ASSERT, "( m_pAI->ent->health > 0 )", (const char *)&queryFormat, "m_pAI->ent->health > 0") )
    __debugbreak();
  this->m_pAI->Physics.iTraceMask = 33685521;
  this->m_pAI->Physics.iHitEntnum = 2047;
  this->m_pAI->Physics.groundEntNum = 2046;
  this->m_pAI->Physics.forcedGroundEntNum = 2047;
  v3 = this->m_pAI;
  ent = v3->ent;
  *(_OWORD *)v3->Physics.bounds.midPoint.v = *(_OWORD *)v3->ent->r.box.midPoint.v;
  *(double *)&v3->Physics.bounds.halfSize.y = *(double *)&ent->r.box.halfSize.y;
  this->m_pAI->Physics.pathGoingDown = 0;
  this->m_pAI->Physics.stairsState = AI_STAIRS_NONE;
  this->m_pAI->Physics.bSpace = 0;
  AIScriptedInterface::InitAnim(this);
  AIScriptedInterface::ClearLookAtEntity(this);
  this->m_pAI->isTransitioningStates = 0;
  this->SetDefaults(this);
}

/*
==============
AIScriptedInterface::Pain
==============
*/
void AIScriptedInterface::Pain(AIScriptedInterface *this, gentity_s *pAttacker, int iDamage, const vec3_t *vPoint, const int iMod, const vec3_t *vDir, const hitLocation_t hitLoc, const Weapon *r_weapon, bool isAlternate)
{
  actor_s *actor; 
  gentity_s *v14; 
  double v15; 
  scr_string_t HitLocationString; 
  scrContext_t *v19; 
  sentient_s *sentient; 
  ai_scripted_t *m_pAI; 
  __int64 v22; 
  __int64 v23; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 2011, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  actor = this->m_pAI->ent->actor;
  if ( actor && !actor->inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 2012, ASSERT_TYPE_ASSERT, "( !m_pAI->ent->actor || m_pAI->ent->actor->inuse )", (const char *)&queryFormat, "!m_pAI->ent->actor || m_pAI->ent->actor->inuse") )
    __debugbreak();
  if ( ((LODWORD(vDir->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(vDir->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(vDir->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 2013, ASSERT_TYPE_SANITY, "( !IS_NAN( ( vDir )[0] ) && !IS_NAN( ( vDir )[1] ) && !IS_NAN( ( vDir )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( vDir )[0] ) && !IS_NAN( ( vDir )[1] ) && !IS_NAN( ( vDir )[2] )") )
    __debugbreak();
  v14 = this->GetEntity(this);
  if ( this->m_pAI->stateLevel >= 6 )
  {
    LODWORD(v22) = this->m_pAI->stateLevel;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 2017, ASSERT_TYPE_ASSERT, "(unsigned)( m_pAI->stateLevel ) < (unsigned)( ( sizeof( *array_counter( m_pAI->eState ) ) + 0 ) )", "m_pAI->stateLevel doesn't index ARRAY_COUNT( m_pAI->eState )\n\t%i not in [0, %i)", v22, 6) )
      __debugbreak();
  }
  if ( (unsigned int)(this->m_pAI->eState[this->m_pAI->stateLevel] - 1) > 8 )
  {
    LODWORD(v23) = this->m_pAI->eState[this->m_pAI->stateLevel];
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 2018, ASSERT_TYPE_ASSERT, "( ( m_pAI->eState[m_pAI->stateLevel] > AIS_INVALID && m_pAI->eState[m_pAI->stateLevel] < AIS_COUNT ) )", "%s\n\t( m_pAI->eState[m_pAI->stateLevel] ) = %i", "( m_pAI->eState[m_pAI->stateLevel] > AIS_INVALID && m_pAI->eState[m_pAI->stateLevel] < AIS_COUNT )", v23) )
      __debugbreak();
  }
  this->m_pAI->painDeath.iDamageTaken = iDamage;
  v15 = vectoyaw((const vec2_t *)vDir);
  _XMM1 = 0i64;
  __asm { vroundss xmm4, xmm1, xmm3, 1 }
  this->m_pAI->painDeath.iDamageYaw = (int)(float)((float)((float)((float)(*(float *)&v15 - v14->r.currentAngles.v[1]) * 0.0027777778) - *(float *)&_XMM4) * 360.0);
  this->m_pAI->painDeath.damageDir = *vDir;
  HitLocationString = G_Combat_GetHitLocationString(hitLoc);
  Scr_SetString(&this->m_pAI->painDeath.damageHitLoc, HitLocationString);
  if ( pAttacker )
  {
    v19 = ScriptContext_Server();
    GScr_Weapon_SetWeapon(v19, &this->m_pAI->painDeath.damageWeapon, r_weapon, isAlternate);
    this->m_pAI->painDeath.damageMOD = iMod;
  }
  if ( !AIFuncTable[this->m_pAI->species][this->m_pAI->eState[this->m_pAI->stateLevel]].pfnPain && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 2037, ASSERT_TYPE_ASSERT, "( AIFuncTable[m_pAI->species][m_pAI->eState[m_pAI->stateLevel]].pfnPain )", (const char *)&queryFormat, "AIFuncTable[m_pAI->species][m_pAI->eState[m_pAI->stateLevel]].pfnPain") )
    __debugbreak();
  AIFuncTable[this->m_pAI->species][this->m_pAI->eState[this->m_pAI->stateLevel]].pfnPain(this->m_pAI, pAttacker, iDamage, vPoint, iMod, vDir, hitLoc);
  EntHandle::setEnt(&this->m_pAI->sentient->lastAttacker, pAttacker);
  sentient = pAttacker->sentient;
  if ( sentient )
    AICommonInterface::WasAttackedBy(this, sentient);
  if ( AIScriptedInterface::IsDoingAmbush(this) && AIScriptedInterface::AtClaimNode(this) )
    AIScriptedInterface::Ambush_MarkCurrentNodeInvalid(this);
  if ( !EntHandle::isDefined(&this->m_pAI->sentient->syncedMeleeEnt) )
  {
    m_pAI = this->m_pAI;
    if ( m_pAI->painDeath.allowPain && m_pAI->painDeath.allowPainInternal && m_pAI->painDeath.minPainDamage < iDamage && !AIScriptedInterface::ShouldIgnorePain(this) )
    {
      if ( AIScriptedInterface::PushState(this, AIS_PAIN) )
        AIScriptedInterface::KillAnimScript(this);
    }
  }
}

/*
==============
AIScriptedInterface::PathChangeNotify
==============
*/
void AIScriptedInterface::PathChangeNotify(AIScriptedInterface *this, const vec3_t *prevDir)
{
  ai_scripted_t *m_pAI; 
  __int64 v5; 
  __int64 v6; 
  scrContext_t *v7; 
  double DistToNextCorner; 
  gentity_s *ent; 
  double v10; 
  float v11; 
  double v12; 
  float v13; 
  bool IsDoingReacquire; 
  double PathDistToGoal; 
  ai_scripted_t *v16; 
  int fmt; 
  vec3_t v18; 
  vec3_t v19; 
  __int64 v20; 
  double v21; 
  float v22; 
  vec3_t vLookaheadDir; 
  vec3_t vFinalGoal; 
  double v25; 
  float v26; 
  bfx::AreaHandle v27; 
  bfx::LinkHandle v28; 

  v20 = -2i64;
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 5278, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  AICommonInterface::GetPathFinalGoal(this, &vFinalGoal);
  if ( !AICommonInterface::PointNearPoint(this, &this->m_pAI->ent->r.currentOrigin, &vFinalGoal, 24.0) )
  {
    if ( !AICommonInterface::HasPath(this) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 5286, ASSERT_TYPE_ASSERT, "( HasPath() )", (const char *)&queryFormat, "HasPath()") )
      __debugbreak();
    AIScriptedInterface::GetPathLookaheadDir(this, &vLookaheadDir);
    if ( (float)((float)((float)(vLookaheadDir.v[1] * prevDir->v[1]) + (float)(vLookaheadDir.v[0] * prevDir->v[0])) + (float)(vLookaheadDir.v[2] * prevDir->v[2])) < 0.5 )
    {
      this->m_pAI->pNavigator->GetNextCorner(this->m_pAI->pNavigator, (vec3_t *)&v21);
      m_pAI = this->m_pAI;
      if ( (float)((float)((float)((float)(m_pAI->ent->r.currentOrigin.v[1] - *((float *)&v21 + 1)) * (float)(m_pAI->ent->r.currentOrigin.v[1] - *((float *)&v21 + 1))) + (float)((float)(m_pAI->ent->r.currentOrigin.v[0] - *(float *)&v21) * (float)(m_pAI->ent->r.currentOrigin.v[0] - *(float *)&v21))) + (float)((float)(m_pAI->ent->r.currentOrigin.v[2] - v22) * (float)(m_pAI->ent->r.currentOrigin.v[2] - v22))) < 144.0 )
      {
        bfx::AreaHandle::AreaHandle(&v27);
        bfx::LinkHandle::LinkHandle(&v28);
        LOBYTE(fmt) = 0;
        LOBYTE(v5) = 1;
        ((void (__fastcall *)(AINavigator *, __int64, __int64, double *, int))this->m_pAI->pNavigator->GetPosAlongPath)(this->m_pAI->pNavigator, v6, v5, &v25, fmt);
        v21 = v25;
        v22 = v26;
        bfx::LinkHandle::~LinkHandle(&v28);
        bfx::AreaHandle::~AreaHandle(&v27);
      }
      v7 = ScriptContext_Server();
      DistToNextCorner = Nav_GetDistToNextCorner(this->m_pAI->pNavigator);
      ent = this->m_pAI->ent;
      v10 = *(double *)ent->r.currentOrigin.v;
      v11 = ent->r.currentOrigin.v[2];
      v12 = v21;
      v13 = v22;
      IsDoingReacquire = AIScriptedInterface::IsDoingReacquire(this);
      *(double *)v18.v = v10;
      v18.v[2] = v11;
      *(double *)v19.v = v12;
      v19.v[2] = v13;
      AIScriptedInterface::FireSharpTurnEvent(this, v7, IsDoingReacquire, &v19, 1, &v18, *(float *)&DistToNextCorner);
      PathDistToGoal = Nav_GetPathDistToGoal(this->m_pAI->pNavigator);
      if ( *(float *)&PathDistToGoal > 90.0 )
      {
        v16 = this->m_pAI;
        if ( v16->pathFindTask.status[0] == 2 || v16->pNavigator->m_ReevalPathTask.status[0] == 2 )
        {
          v16->bCheckNewPathSharpTurn = 1;
        }
        else if ( AIScriptedInterface::ShouldEarlySharpTurnTick(this) )
        {
          AIScriptedInterface::TryEarlyASMTick(this, 0);
        }
      }
    }
  }
}

/*
==============
AIScriptedInterface::PathEndActions
==============
*/
void AIScriptedInterface::PathEndActions(AIScriptedInterface *this)
{
  __int128 v1; 
  ai_scripted_t *m_pAI; 
  double PathDistToGoal; 
  ai_scripted_t *v5; 
  float v6; 
  scrContext_t *v7; 
  pathnode_t *StartNodeFromLink; 
  ai_scripted_t *v9; 
  gentity_s *ent; 
  vec3_t pos; 
  __int128 v12; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 5809, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( AICommonInterface::HasPath(this) )
  {
    m_pAI = this->m_pAI;
    v12 = v1;
    PathDistToGoal = Nav_GetPathDistToGoal(m_pAI->pNavigator);
    v5 = this->m_pAI;
    v6 = *(float *)&PathDistToGoal * *(float *)&PathDistToGoal;
    if ( v5->pathEndAnimNotified )
    {
      if ( v6 > v5->pathEndAnimDistSq )
      {
        GScr_Notify(v5->ent, scr_const.run, 0);
        this->m_pAI->pathEndAnimNotified = 0;
      }
    }
    else if ( v6 < v5->pathEndAnimDistSq && !v5->blackboard.m_bMeleeChargeRequested )
    {
      v7 = ScriptContext_Server();
      Scr_AddFloat(v7, *(float *)&PathDistToGoal);
      GScr_Notify(this->m_pAI->ent, scr_const.stop_soon, 1u);
      this->m_pAI->pathEndAnimNotified = 1;
    }
    if ( bfx::LinkHandle::IsValid(&this->m_pAI->pNavigator->m_hLink) && this->m_pAI->eState[this->m_pAI->stateLevel] != AIS_NEGOTIATION && AIScriptedInterface::PushState(this, AIS_NEGOTIATION) )
    {
      StartNodeFromLink = Nav_GetStartNodeFromLink(&this->m_pAI->pNavigator->m_hLink);
      if ( !StartNodeFromLink && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 5838, ASSERT_TYPE_ASSERT, "( pNode )", (const char *)&queryFormat, "pNode") )
        __debugbreak();
      if ( ((1 << LOBYTE(StartNodeFromLink->constant.type)) & 0x68010000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 5839, ASSERT_TYPE_ASSERT, "( Path_IsNegotiationBegin( pNode ) )", (const char *)&queryFormat, "Path_IsNegotiationBegin( pNode )") )
        __debugbreak();
      if ( !StartNodeFromLink->constant.animscript && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 5840, ASSERT_TYPE_ASSERT, "( pNode->constant.animscript != ( static_cast< scr_string_t >( 0 ) ) )", (const char *)&queryFormat, "pNode->constant.animscript != NULL_SCR_STRING") )
        __debugbreak();
      Scr_SetString(&this->m_pAI->traverseName, StartNodeFromLink->constant.animscript);
      pathnode_t::GetPos(StartNodeFromLink, &pos);
      v9 = this->m_pAI;
      ent = v9->ent;
      v9->Physics.vWishDelta.v[0] = pos.v[0] - v9->ent->r.currentOrigin.v[0];
      v9->Physics.vWishDelta.v[1] = pos.v[1] - ent->r.currentOrigin.v[1];
      v9->Physics.vWishDelta.v[2] = pos.v[2] - ent->r.currentOrigin.v[2];
      if ( AIScriptedInterface::PathPending(this) )
        AIScheduler::RemovePathFindTask(&this->m_pAI->pathFindTask);
    }
  }
}

/*
==============
AIScriptedInterface::PhysicsAndDodge
==============
*/
__int64 AIScriptedInterface::PhysicsAndDodge(AIScriptedInterface *this)
{
  ai_scripted_t *m_pAI; 
  gentity_s *ent; 
  __int128 v4; 
  actor_physics_t *p_Physics; 
  gentity_s *v9; 
  ai_scripted_t *v10; 
  unsigned int v11; 
  float v13; 
  float v14; 
  float v15; 

  Sys_ProfBeginNamedEvent(0xFF808080, "AIPhysicsAndDodge");
  if ( (this->m_pAI->eAnimMode != AI_ANIM_MOVE_CODE || !AICommonInterface::HasPath(this)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 3112, ASSERT_TYPE_ASSERT, "( m_pAI->eAnimMode == AI_ANIM_MOVE_CODE && HasPath() )", (const char *)&queryFormat, "m_pAI->eAnimMode == AI_ANIM_MOVE_CODE && HasPath()") )
    __debugbreak();
  this->m_pAI->pNavigator->GetNextCorner(this->m_pAI->pNavigator, (vec3_t *)&v13);
  m_pAI = this->m_pAI;
  ent = m_pAI->ent;
  v4 = LODWORD(v13);
  v13 = v13 - m_pAI->ent->r.currentOrigin.v[0];
  v14 = v14 - ent->r.currentOrigin.v[1];
  v15 = v15 - ent->r.currentOrigin.v[2];
  *(float *)&v4 = fsqrt((float)((float)(v13 * v13) + (float)(v14 * v14)) + (float)(v15 * v15));
  _XMM4 = v4;
  __asm
  {
    vcmpless xmm0, xmm4, cs:__real@80000000
    vblendvps xmm1, xmm4, xmm2, xmm0
  }
  m_pAI->Physics.vPathDir.v[0] = v13 * (float)(1.0 / *(float *)&_XMM1);
  m_pAI->Physics.vPathDir.v[1] = (float)(1.0 / *(float *)&_XMM1) * v14;
  m_pAI->Physics.vPathDir.v[2] = (float)(1.0 / *(float *)&_XMM1) * v15;
  p_Physics = &m_pAI->Physics;
  v9 = m_pAI->ent;
  p_Physics->vOrigin.v[0] = v9->r.currentOrigin.v[0];
  p_Physics->vOrigin.v[1] = v9->r.currentOrigin.v[1];
  p_Physics->vOrigin.v[2] = v9->r.currentOrigin.v[2];
  if ( AIScriptedInterface::Physics_DoMovement(p_Physics) )
  {
    this->m_pAI->dodgeMode = NONE;
    v11 = 1;
  }
  else
  {
    v10 = this->m_pAI;
    v11 = 0;
    v10->dodgeMode = NONE;
  }
  Sys_ProfEndNamedEvent();
  return v11;
}

/*
==============
AIScriptedInterface::PhysicsCheckMoveAwayNoWorse
==============
*/
__int64 AIScriptedInterface::PhysicsCheckMoveAwayNoWorse(AIScriptedInterface *this, gentity_s *other, ActorDodgeMode newDodgeMode, float distanceSqrd, float lengthSqrd)
{
  ai_scripted_t *m_pAI; 
  float v7; 
  float v9; 

  m_pAI = this->m_pAI;
  v7 = m_pAI->Physics.vOrigin.v[0];
  v9 = m_pAI->Physics.vOrigin.v[1];
  if ( (float)((float)((float)(other->r.currentOrigin.v[1] - v9) * (float)(other->r.currentOrigin.v[1] - v9)) + (float)((float)(other->r.currentOrigin.v[0] - v7) * (float)(other->r.currentOrigin.v[0] - v7))) <= distanceSqrd || (float)((float)((float)(m_pAI->ent->r.currentOrigin.v[1] - v9) * (float)(m_pAI->ent->r.currentOrigin.v[1] - v9)) + (float)((float)(m_pAI->ent->r.currentOrigin.v[0] - v7) * (float)(m_pAI->ent->r.currentOrigin.v[0] - v7))) <= lengthSqrd || !AIScriptedInterface::MoveAwayNoWorse(this) )
    return 0i64;
  this->m_pAI->dodgeMode = newDodgeMode;
  return 1i64;
}

/*
==============
AIScriptedInterface::PhysicsMoveAway
==============
*/
__int64 AIScriptedInterface::PhysicsMoveAway(AIScriptedInterface *this)
{
  gentity_s *v2; 
  ai_scripted_t *m_pAI; 
  unsigned __int16 groundEntNum; 
  int bHasGroundPlane; 
  gentity_s *ent; 
  ai_scripted_t *v7; 
  float v8; 
  __int128 v9; 
  float v10; 
  float v13; 
  float v15; 
  float v16; 
  __int128 v17; 
  float v18; 
  __int128 v19; 
  __int128 v23; 
  __int128 v26; 
  __int128 v27; 
  __int128 v28; 
  __int128 v29; 
  __int128 v30; 
  __int128 v31; 
  int number; 
  Ai_Asm *v33; 
  ASM_Instance *InstanceIfExists; 
  scr_string_t player_pushed; 
  Ai_Asm *v36; 
  __int128 v37; 
  __int128 v38; 
  ai_scripted_t *v39; 
  ai_scripted_t *v40; 
  int iTraceMask; 
  int v42; 
  unsigned int v43; 
  int v44; 
  ai_scripted_t *v45; 
  __int128 v46; 
  __int128 v47; 
  __int128 v51; 
  __int128 v52; 
  ai_scripted_t *v53; 
  bool v54; 
  ai_scripted_t *v55; 
  float v56; 
  ActorDodgeMode v57; 
  ai_scripted_t *v58; 
  ai_scripted_t *v59; 
  ai_scripted_t *v60; 
  ai_scripted_t *v61; 
  gentity_s *v62; 
  AIScriptedInterface *v63; 
  ai_scripted_t *v64; 
  ai_scripted_t *v65; 
  ai_scripted_t *v66; 
  ai_scripted_t *v67; 
  ai_scripted_t *v68; 
  gentity_s *v69; 
  float v71; 
  float v72; 
  float v73; 
  float groundplaneSlope; 
  int iFootstepTimer; 
  float v76; 
  float v77; 
  float v78; 
  float v79; 
  float v80; 
  float v81; 
  AIWrapper v82; 
  vec2_t outPushDir; 
  vec3_t v; 
  vec3_t outTranslation; 
  vec4_t outRotation; 

  Sys_ProfBeginNamedEvent(0xFF808080, "AIPhysicsMoveAway");
  if ( !AIScriptedInterface::ShouldMoveAwayFromCloseEnt(this) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 3290, ASSERT_TYPE_ASSERT, "( ShouldMoveAwayFromCloseEnt() )", (const char *)&queryFormat, "ShouldMoveAwayFromCloseEnt()") )
    __debugbreak();
  if ( !this->GetCloseEnt(this) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 3291, ASSERT_TYPE_ASSERT, "( GetCloseEnt() )", (const char *)&queryFormat, "GetCloseEnt()") )
    __debugbreak();
  v2 = this->GetCloseEnt(this);
  m_pAI = this->m_pAI;
  v71 = m_pAI->Physics.vVelocity.v[0];
  v72 = m_pAI->Physics.vVelocity.v[1];
  v73 = m_pAI->Physics.vVelocity.v[2];
  groundEntNum = m_pAI->Physics.groundEntNum;
  bHasGroundPlane = m_pAI->Physics.bHasGroundPlane;
  groundplaneSlope = m_pAI->Physics.groundplaneSlope;
  iFootstepTimer = m_pAI->Physics.iFootstepTimer;
  v76 = m_pAI->Physics.vPrevGroundOrigin.v[0];
  v77 = m_pAI->Physics.vPrevGroundOrigin.v[1];
  v78 = m_pAI->Physics.vPrevGroundOrigin.v[2];
  v79 = m_pAI->Physics.vPrevGroundAngles.v[0];
  v80 = m_pAI->Physics.vPrevGroundAngles.v[1];
  v81 = m_pAI->Physics.vPrevGroundAngles.v[2];
  ent = m_pAI->ent;
  m_pAI->Physics.vOrigin.v[0] = m_pAI->ent->r.currentOrigin.v[0];
  m_pAI->Physics.vOrigin.v[1] = ent->r.currentOrigin.v[1];
  m_pAI->Physics.vOrigin.v[2] = ent->r.currentOrigin.v[2];
  v7 = this->m_pAI;
  if ( v2->client )
  {
    v29 = LODWORD(v2->r.currentOrigin.v[0]);
    *(float *)&v29 = v2->r.currentOrigin.v[0] - v7->Physics.vOrigin.v[0];
    v28 = v29;
    *(float *)&v29 = v2->r.currentOrigin.v[1] - v7->Physics.vOrigin.v[1];
    *((_QWORD *)&v30 + 1) = *((_QWORD *)&v28 + 1);
    v10 = (float)(*(float *)&v29 * *(float *)&v29) + (float)(*(float *)&v28 * *(float *)&v28);
    *(double *)&v30 = AIScriptedInterface::CalculatePlayerPushDelta(this, v2, &outPushDir);
    v26 = v30;
    v31 = v30;
    *(float *)&v31 = *(float *)&v30 * *(float *)&v30;
    _XMM7 = v31;
    v13 = FLOAT_1_0;
    if ( (float)(*(float *)&v30 * *(float *)&v30) >= 1.0 && (number = this->m_pAI->ent->s.number, v33 = Ai_Asm::Singleton(), (InstanceIfExists = Ai_Asm::GetInstanceIfExists(v33, NULL, number)) != NULL) )
    {
      v15 = outPushDir.v[0];
      v.v[0] = outPushDir.v[0] * *(float *)&v30;
      v16 = outPushDir.v[1];
      v.v[1] = outPushDir.v[1] * *(float *)&v30;
      v.v[2] = 0.0;
      player_pushed = scr_const.player_pushed;
      v36 = Ai_Asm::Singleton();
      Common_Asm::FireEventWithVec3(v36, InstanceIfExists, player_pushed, &v);
    }
    else
    {
      v16 = outPushDir.v[1];
      v15 = outPushDir.v[0];
    }
  }
  else
  {
    v8 = v7->Physics.vOrigin.v[0] - v2->r.currentOrigin.v[0];
    v9 = LODWORD(v7->Physics.vOrigin.v[1]);
    *(float *)&v9 = v7->Physics.vOrigin.v[1] - v2->r.currentOrigin.v[1];
    v10 = (float)(*(float *)&v9 * *(float *)&v9) + (float)(v8 * v8);
    *(float *)&v9 = fsqrt(v10);
    _XMM3 = v9;
    __asm { vcmpless xmm0, xmm3, xmm15 }
    v13 = FLOAT_1_0;
    __asm { vblendvps xmm1, xmm3, xmm9, xmm0 }
    v15 = (float)(1.0 / *(float *)&_XMM1) * v8;
    v16 = (float)(1.0 / *(float *)&_XMM1) * (float)(v7->Physics.vOrigin.v[1] - v2->r.currentOrigin.v[1]);
    v17 = 0i64;
    if ( *(float *)&v9 == 0.0 )
    {
      *(double *)&v17 = G_crandom();
      v18 = *(float *)&v17;
      *(double *)&v17 = G_crandom();
      v19 = v17;
      *(float *)&v19 = fsqrt((float)(*(float *)&v17 * *(float *)&v17) + (float)(v18 * v18));
      _XMM3 = v19;
      __asm
      {
        vcmpless xmm1, xmm3, xmm15
        vblendvps xmm2, xmm3, xmm9, xmm1
      }
      v15 = (float)(1.0 / *(float *)&_XMM2) * v18;
      v16 = (float)(1.0 / *(float *)&_XMM2) * *(float *)&v17;
    }
    AIScriptedInterface::GetAnimDeltas(this, &outRotation, &outTranslation);
    if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
      __debugbreak();
    v23 = 0i64;
    *(float *)&v23 = (float)((float)level.frameDuration * (float)level.frameDuration) * 0.00090000004;
    _XMM2 = v23;
    __asm { vmaxss  xmm7, xmm2, xmm6 }
    v27 = _XMM7;
    *(float *)&v27 = fsqrt(*(float *)&_XMM7);
    v26 = v27;
  }
  v38 = _XMM7;
  *(float *)&v38 = *(float *)&_XMM7 * 0.25;
  v37 = v38;
  v39 = this->m_pAI;
  v39->Physics.vWishDelta.v[0] = v15 * *(float *)&v26;
  v39->Physics.vWishDelta.v[1] = v16 * *(float *)&v26;
  v40 = this->m_pAI;
  iTraceMask = v40->Physics.iTraceMask;
  if ( v2->client )
  {
    v40->Physics.iTraceMask = iTraceMask & 0xFDFFFFFF;
    v40 = this->m_pAI;
  }
  v42 = AIScriptedInterface::Physics_DoMovement(&v40->Physics);
  this->m_pAI->Physics.iTraceMask = iTraceMask;
  if ( v42 )
  {
    if ( v2->client || AIScriptedInterface::PhysicsCheckMoveAwayNoWorse(this, v2, NONE, v10, *(float *)&v38) || this->m_pAI->Physics.groundEntNum == 2047 )
    {
      v43 = 1;
    }
    else
    {
      v44 = 0;
      v43 = 1;
      while ( 1 )
      {
        v45 = this->m_pAI;
        if ( v45->Physics.iHitEntnum == 2047 )
          break;
        v46 = LODWORD(v45->Physics.vHitNormal.v[0]);
        v47 = v46;
        *(float *)&v47 = fsqrt((float)(*(float *)&v46 * *(float *)&v46) + (float)(v45->Physics.vHitNormal.v[1] * v45->Physics.vHitNormal.v[1]));
        _XMM2 = v47;
        __asm
        {
          vcmpless xmm0, xmm2, xmm15
          vblendvps xmm1, xmm2, xmm9, xmm0
        }
        *(float *)&_XMM1 = v13 / *(float *)&_XMM1;
        v45->Physics.vHitNormal.v[0] = *(float *)&v46 * *(float *)&_XMM1;
        v45->Physics.vHitNormal.v[1] = *(float *)&_XMM1 * v45->Physics.vHitNormal.v[1];
        v51 = v26;
        *(float *)&v51 = *(float *)&v26 * 0.75;
        v26 = v51;
        v52 = v37;
        *(float *)&v52 = *(float *)&v37 * 0.5625;
        v37 = v52;
        v53 = this->m_pAI;
        v54 = (float)(v16 * v53->Physics.vHitNormal.v[0]) >= (float)(v15 * v53->Physics.vHitNormal.v[1]);
        if ( !v53 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 3026, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
          __debugbreak();
        v55 = this->m_pAI;
        v56 = *(float *)&v26 * v55->Physics.vHitNormal.v[1];
        if ( v54 )
        {
          if ( v55->dodgeMode == HALF )
          {
            v55->Physics.vWishDelta.v[0] = (float)(v56 * -0.33000001) + v55->Physics.vWishDelta.v[0];
            this->m_pAI->Physics.vWishDelta.v[1] = (float)((float)(*(float *)&v26 * this->m_pAI->Physics.vHitNormal.v[0]) * 0.33000001) + this->m_pAI->Physics.vWishDelta.v[1];
          }
          else
          {
            v55->Physics.vWishDelta.v[0] = COERCE_FLOAT(LODWORD(v56) ^ _xmm);
            this->m_pAI->Physics.vWishDelta.v[1] = *(float *)&v26 * this->m_pAI->Physics.vHitNormal.v[0];
          }
          v57 = HALF_HALF;
        }
        else
        {
          if ( v55->dodgeMode == HALF_HALF )
          {
            v55->Physics.vWishDelta.v[0] = (float)(v56 * 0.33000001) + v55->Physics.vWishDelta.v[0];
            this->m_pAI->Physics.vWishDelta.v[1] = (float)((float)(*(float *)&v26 * this->m_pAI->Physics.vHitNormal.v[0]) * -0.33000001) + this->m_pAI->Physics.vWishDelta.v[1];
          }
          else
          {
            v55->Physics.vWishDelta.v[0] = v56;
            this->m_pAI->Physics.vWishDelta.v[1] = COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v26 * this->m_pAI->Physics.vHitNormal.v[0]) ^ _xmm);
          }
          v57 = HALF;
        }
        v58 = this->m_pAI;
        v58->Physics.vVelocity.v[0] = v71;
        v58->Physics.vVelocity.v[1] = v72;
        v58->Physics.vVelocity.v[2] = v73;
        this->m_pAI->Physics.groundEntNum = groundEntNum;
        this->m_pAI->Physics.bHasGroundPlane = bHasGroundPlane;
        this->m_pAI->Physics.groundplaneSlope = groundplaneSlope;
        this->m_pAI->Physics.iFootstepTimer = iFootstepTimer;
        v59 = this->m_pAI;
        v59->Physics.vPrevGroundOrigin.v[0] = v76;
        v59->Physics.vPrevGroundOrigin.v[1] = v77;
        v59->Physics.vPrevGroundOrigin.v[2] = v78;
        v60 = this->m_pAI;
        v60->Physics.vPrevGroundAngles.v[0] = v79;
        v60->Physics.vPrevGroundAngles.v[1] = v80;
        v60->Physics.vPrevGroundAngles.v[2] = v81;
        v61 = this->m_pAI;
        v62 = v61->ent;
        v61->Physics.vOrigin.v[0] = v61->ent->r.currentOrigin.v[0];
        v61->Physics.vOrigin.v[1] = v62->r.currentOrigin.v[1];
        v61->Physics.vOrigin.v[2] = v62->r.currentOrigin.v[2];
        if ( !AIScriptedInterface::Physics_DoMovement(&this->m_pAI->Physics) )
          goto LABEL_21;
        if ( AIScriptedInterface::PhysicsCheckMoveAwayNoWorse(this, v2, v57, v10, *(float *)&v37) )
          goto LABEL_48;
        if ( ++v44 >= 2 )
        {
          v45 = this->m_pAI;
          break;
        }
      }
      v45->Physics.iHitEntnum = v2->s.number;
      AIWrapper::AIWrapper(&v82, v2);
      v63 = v82.m_pAI;
      if ( v82.m_pAI && !v82.m_pAI->GetCloseEnt(v82.m_pAI) )
        v63->SetCloseEnt(v63, this->m_pAI->ent);
      this->m_pAI->dodgeMode = NONE;
      v64 = this->m_pAI;
      v64->Physics.vVelocity.v[0] = v71;
      v64->Physics.vVelocity.v[1] = v72;
      v64->Physics.vVelocity.v[2] = v73;
      this->m_pAI->Physics.groundEntNum = groundEntNum;
      this->m_pAI->Physics.bHasGroundPlane = bHasGroundPlane;
      this->m_pAI->Physics.groundplaneSlope = groundplaneSlope;
      this->m_pAI->Physics.iFootstepTimer = iFootstepTimer;
      v65 = this->m_pAI;
      v65->Physics.vPrevGroundOrigin.v[0] = v76;
      v65->Physics.vPrevGroundOrigin.v[1] = v77;
      v65->Physics.vPrevGroundOrigin.v[2] = v78;
      v66 = this->m_pAI;
      v66->Physics.vPrevGroundAngles.v[0] = v79;
      v66->Physics.vPrevGroundAngles.v[1] = v80;
      v66->Physics.vPrevGroundAngles.v[2] = v81;
      v67 = this->m_pAI;
      *(_QWORD *)v67->Physics.vVelocity.v = 0i64;
      v67->Physics.vVelocity.v[2] = 0.0;
      v68 = this->m_pAI;
      v69 = v68->ent;
      v68->Physics.vOrigin.v[0] = v68->ent->r.currentOrigin.v[0];
      v68->Physics.vOrigin.v[1] = v69->r.currentOrigin.v[1];
      v68->Physics.vOrigin.v[2] = v69->r.currentOrigin.v[2];
    }
  }
  else
  {
LABEL_21:
    this->m_pAI->dodgeMode = NONE;
    v43 = 0;
  }
LABEL_48:
  Sys_ProfEndNamedEvent();
  return v43;
}

/*
==============
AIScriptedInterface::Physics_GetLeftOrRightDodge
==============
*/
__int64 AIScriptedInterface::Physics_GetLeftOrRightDodge(AIScriptedInterface *this, bool dodgeRight, float length)
{
  ai_scripted_t *m_pAI; 
  ActorDodgeMode dodgeMode; 
  float v7; 
  ai_scripted_t *v8; 
  float v9; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 3026, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  m_pAI = this->m_pAI;
  dodgeMode = m_pAI->dodgeMode;
  v7 = length * m_pAI->Physics.vHitNormal.v[1];
  if ( dodgeRight )
  {
    if ( dodgeMode == HALF )
    {
      m_pAI->Physics.vWishDelta.v[0] = (float)(v7 * -0.33000001) + m_pAI->Physics.vWishDelta.v[0];
      v8 = this->m_pAI;
      v9 = (float)((float)(length * v8->Physics.vHitNormal.v[0]) * 0.33000001) + v8->Physics.vWishDelta.v[1];
    }
    else
    {
      m_pAI->Physics.vWishDelta.v[0] = COERCE_FLOAT(LODWORD(v7) ^ _xmm);
      v8 = this->m_pAI;
      v9 = length * v8->Physics.vHitNormal.v[0];
    }
    v8->Physics.vWishDelta.v[1] = v9;
    return 2i64;
  }
  else
  {
    if ( dodgeMode == HALF_HALF )
    {
      m_pAI->Physics.vWishDelta.v[0] = (float)(v7 * 0.33000001) + m_pAI->Physics.vWishDelta.v[0];
      this->m_pAI->Physics.vWishDelta.v[1] = (float)((float)(length * this->m_pAI->Physics.vHitNormal.v[0]) * -0.33000001) + this->m_pAI->Physics.vWishDelta.v[1];
    }
    else
    {
      m_pAI->Physics.vWishDelta.v[0] = v7;
      this->m_pAI->Physics.vWishDelta.v[1] = COERCE_FLOAT(COERCE_UNSIGNED_INT(length * this->m_pAI->Physics.vHitNormal.v[0]) ^ _xmm);
    }
    return 1i64;
  }
}

/*
==============
AIScriptedInterface::Physics_SimulateChildren
==============
*/
void AIScriptedInterface::Physics_SimulateChildren(AIScriptedInterface *this)
{
  gentity_s *tagChildren; 
  __int64 v3; 
  actor_s *actor; 
  ai_agent_t *ScriptedAgentInfo; 
  void *v6; 
  vec3_t *p_currentOrigin; 
  ai_common_t *v8; 
  const dvar_t *v9; 
  float v10; 
  float v11; 
  float v12; 
  ai_scripted_t *m_pAI; 
  ai_scripted_t *v14; 
  AIActorInterface v15; 
  AIAgentInterface v16; 
  __int64 v17; 
  AIWrapper v18; 
  Bounds bounds; 
  tmat43_t<vec3_t> axis; 
  trace_t results; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 6275, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 6276, ASSERT_TYPE_ASSERT, "( m_pAI->ent )", (const char *)&queryFormat, "m_pAI->ent") )
    __debugbreak();
  tagChildren = this->m_pAI->ent->tagChildren;
  if ( !tagChildren )
    return;
  while ( 1 )
  {
    AIActorInterface::AIActorInterface(&v15);
    AIAgentInterface::AIAgentInterface(&v16);
    v3 = 0i64;
    v16.__vftable = (AIAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
    v17 = 0i64;
    if ( !tagChildren->agent )
      goto LABEL_11;
    if ( SV_Agent_IsScripted(tagChildren->s.number) )
      break;
    v3 = v17;
LABEL_11:
    actor = tagChildren->actor;
    if ( actor )
    {
      if ( !actor->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 105, ASSERT_TYPE_ASSERT, "( ent->actor->sentientInfo )", (const char *)&queryFormat, "ent->actor->sentientInfo") )
        __debugbreak();
      AIActorInterface::SetActor(&v15, tagChildren->actor);
      v6 = &v15;
      goto LABEL_29;
    }
    if ( v3 )
      goto LABEL_30;
    if ( !tagChildren->tagInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 6286, ASSERT_TYPE_ASSERT, "( ent->tagInfo )", (const char *)&queryFormat, "ent->tagInfo") )
      __debugbreak();
    tagChildren = tagChildren->tagInfo->next;
    if ( !tagChildren )
      return;
  }
  ScriptedAgentInfo = AIAgentInterface::GetScriptedAgentInfo(tagChildren);
  if ( !ScriptedAgentInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 97, ASSERT_TYPE_ASSERT, "( pInfo )", (const char *)&queryFormat, "pInfo") )
    __debugbreak();
  if ( !ScriptedAgentInfo->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 98, ASSERT_TYPE_ASSERT, "( pInfo->sentientInfo )", (const char *)&queryFormat, "pInfo->sentientInfo") )
    __debugbreak();
  AINewAgentInterface::SetAgent((AINewAgentInterface *)&v16, ScriptedAgentInfo);
  v6 = &v16;
LABEL_29:
  v17 = (__int64)v6;
LABEL_30:
  if ( !tagChildren->tagInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 6294, ASSERT_TYPE_ASSERT, "( ent->tagInfo )", (const char *)&queryFormat, "ent->tagInfo") )
    __debugbreak();
  if ( tagChildren->tagInfo->collisionPhysics )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_EXECUTION) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 6298, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_LINKED_COLLISION ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_LINKED_COLLISION )") )
      __debugbreak();
    G_CalcFixedLinkTargetAxis(tagChildren, &axis);
    bounds = tagChildren->r.box;
    bounds.halfSize.v[2] = bounds.halfSize.v[2] * 0.5;
    p_currentOrigin = &tagChildren->r.currentOrigin;
    G_Main_TraceCapsule(&results, &tagChildren->r.currentOrigin, &axis.m[3], &bounds, tagChildren->s.number, 2065);
    if ( results.hitType )
    {
      AIWrapper::AIWrapper(&v18, tagChildren);
      v8 = v18.m_pAI->GetAI(v18.m_pAI);
      LODWORD(v8[4].eyeInfo.dir.v[0]) = 7;
      if ( !Com_GameMode_SupportsFeature(WEAPON_SPRINT_RAISE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 6313, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::GRAVITY_CHANGE_ALLOWED ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::GRAVITY_CHANGE_ALLOWED )") )
        __debugbreak();
      v9 = DVARFLT_bg_gravity;
      if ( !DVARFLT_bg_gravity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_gravity") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v9);
      LODWORD(v8[4].eyeInfo.dir.v[1]) = v9->current.integer;
      v10 = axis.m[3].v[1] - p_currentOrigin->v[1];
      *(float *)&v8[4].sight.bLastEnemySightPosSelfOrigin = axis.m[3].v[0] - p_currentOrigin->v[0];
      v8[4].sight.vLastEnemySightPosSelfOrigin.v[0] = v10;
      v8[4].sight.vLastEnemySightPosSelfOrigin.v[1] = 0.0;
      v8[4].sight.fovPeriphMaxSightDistSq = p_currentOrigin->v[0];
      v8[4].sight.latency = LODWORD(p_currentOrigin->v[1]);
      *(float *)&v8[4].sight.ignoreCloseFoliage = p_currentOrigin->v[2];
      LOBYTE(v8[4].orientation.predictedStrafePos.z) = 0;
      AIScriptedInterface::Physics_DoMovement((actor_physics_t *)&v8[4].sight.fovPeriphMaxSightDistSq);
      v8[4].eyeInfo.dir.v[0] = 0.0;
      v11 = v8[4].sight.fovPeriphMaxSightDistSq - axis.m[3].v[0];
      v12 = *(float *)&v8[4].sight.latency - axis.m[3].v[1];
      if ( v11 != 0.0 || v12 != 0.0 )
      {
        this->m_pAI->Physics.ePhysicsType = AIPHYS_ZONLY_PHYSICS_ABSOLUTE;
        m_pAI = this->m_pAI;
        *(_QWORD *)m_pAI->Physics.vVelocity.v = 0i64;
        m_pAI->Physics.vVelocity.v[2] = 0.0;
        v14 = this->m_pAI;
        v14->Physics.vWishDelta.v[0] = v11;
        v14->Physics.vWishDelta.v[1] = v12;
        this->m_pAI->Physics.vWishDelta.v[2] = 0.0;
      }
    }
  }
}

/*
==============
AIScriptedInterface::PointAt_MovingPlatform
==============
*/
bool AIScriptedInterface::PointAt_MovingPlatform(AIScriptedInterface *this, const vec3_t *vPoint, const vec3_t *vGoalPos)
{
  bool result; 
  float v4; 

  result = 0;
  if ( (float)((float)(vPoint->v[2] - vGoalPos->v[2]) * (float)(vPoint->v[2] - vGoalPos->v[2])) <= 6400.0 )
  {
    v4 = vGoalPos->v[1] - vPoint->v[1];
    return MIN_MOVING_PLATFORM_DIST_SQ >= (float)((float)(v4 * v4) + (float)((float)(vGoalPos->v[0] - vPoint->v[0]) * (float)(vGoalPos->v[0] - vPoint->v[0])));
  }
  return result;
}

/*
==============
AIScriptedInterface::PostThink
==============
*/
void AIScriptedInterface::PostThink(AIScriptedInterface *this)
{
  ai_scripted_t *m_pAI; 
  bool v3; 
  int number; 
  Ai_Asm *v5; 
  const ASM_Instance *InstanceIfExists; 
  ai_scripted_t *v7; 
  int iLastASMUpdateTime; 
  Ai_Asm *v9; 
  const dvar_t *v10; 
  const dvar_t *v11; 
  const dvar_t *v12; 
  pathnode_t *pClaimedNode; 
  vec3_t pos; 
  vec3_t vFinalGoal; 

  Profile_Begin(257);
  SV_Profile_BeginEvent(SVPROF_AI_POSTTHINK);
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 1369, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  m_pAI = this->m_pAI;
  if ( m_pAI->eAnimMode == AI_ANIM_UNKNOWN )
    m_pAI->eAnimMode = AI_ANIM_USE_BOTH_DELTAS;
  AIScriptedInterface::UpdateOriginAndAngles(this);
  AIScriptedInterface::UpdateStance(this);
  this->m_pAI->bCheckNewPathSharpTurn = 0;
  v3 = 0;
  number = this->m_pAI->ent->s.number;
  v5 = Ai_Asm::Singleton();
  InstanceIfExists = Ai_Asm::GetInstanceIfExists(v5, NULL, number);
  if ( InstanceIfExists )
  {
    v7 = this->m_pAI;
    iLastASMUpdateTime = v7->iLastASMUpdateTime;
    if ( !iLastASMUpdateTime || iLastASMUpdateTime != level.time )
    {
      v3 = AI_ASM_Tick(v7->ent->s.number, 0);
      this->m_pAI->iLastASMUpdateTime = level.time;
    }
    v9 = Ai_Asm::Singleton();
    if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
      __debugbreak();
    pos = this->m_pAI->ent->r.currentOrigin;
    Ai_Asm::DebugRender(v9, InstanceIfExists, &pos, level.frameDuration);
  }
  if ( this->IsAlive(this) )
  {
    AIScriptedInterface::UpdateLookAtPos(this);
    AIScriptedInterface::UpdateLookAtTracking(this);
    AIScriptedInterface::UpdateGunPose(this);
    AIScriptedInterface::UpdateBlockingEntity(this);
    this->UpdateAnimGameParams(this, v3);
    AIScriptedInterface::UpdateCustomNodes(this);
    if ( this->m_pAI->eAnimMode != AI_ANIM_MOVE_CODE )
    {
      v10 = DVARINT_ai_showPaths;
      if ( !DVARINT_ai_showPaths && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showPaths") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v10);
      if ( v10->current.integer > 0 )
      {
        v11 = DVARINT_ai_showPaths;
        if ( !DVARINT_ai_showPaths && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showPaths") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v11);
        Nav_DrawPath(this->m_pAI->pNavigator, v11->current.integer);
        v12 = DVARINT_ai_showPaths;
        if ( !DVARINT_ai_showPaths && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showPaths") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v12);
        if ( v12->current.integer >= 2 )
          Path_DebugDrawSnappedPositions(this->m_pAI->pNavigator, this->m_pAI->ent);
      }
    }
    AIScriptedInterface::CheckNodeClaim(this);
    if ( this->GetCloseEnt(this) && AIScriptedInterface::AtClaimNode(this) )
    {
      if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 1079, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
        __debugbreak();
      if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 1080, ASSERT_TYPE_ASSERT, "( m_pAI->sentient )", (const char *)&queryFormat, "m_pAI->sentient") )
        __debugbreak();
      pClaimedNode = this->m_pAI->sentient->pClaimedNode;
      if ( pClaimedNode )
      {
        if ( AICommonInterface::HasPath(this) )
        {
          pathnode_t::GetPos(pClaimedNode, &pos);
          AICommonInterface::GetPathFinalGoal(this, &vFinalGoal);
          if ( AICommonInterface::PointAt(this, &vFinalGoal, &pos) )
            this->ClearPath(this);
        }
      }
    }
  }
  else
  {
    AIScriptedInterface::UpdateLookAtAnimParams(this);
    this->m_pAI->animData.gunAdditiveIndex = 0;
    G_AIAnim_UpdateFieldByName(this->m_pAI->ent, (const scr_string_t)scr_const.gunadditiveindex);
    this->UpdateClientOnlyAnimGameParams(this);
  }
  Profile_EndInternal(NULL);
  SV_Profile_EndEvent(SVPROF_AI_POSTTHINK);
}

/*
==============
AIScriptedInterface::PreThink
==============
*/
void AIScriptedInterface::PreThink(AIScriptedInterface *this)
{
  ai_scripted_t *m_pAI; 
  void (__fastcall *GetPerfectInfo)(AICommonInterface *, sentient_s *, unsigned __int8); 
  sentient_s *v4; 
  __int64 v5; 
  ai_scripted_t *v6; 
  int number; 
  Ai_Asm *v8; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 1312, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI", -2i64) )
    __debugbreak();
  m_pAI = this->m_pAI;
  if ( m_pAI->preThinkTime != level.time )
  {
    m_pAI->preThinkTime = level.time;
    Profile_Begin(255);
    SV_Profile_BeginEvent(SVPROF_AI_PRETHINK);
    if ( SentientHandle::isDefined(&this->m_pAI->threat.pFavoriteEnemy) )
    {
      GetPerfectInfo = this->GetPerfectInfo;
      v4 = SentientHandle::sentient(&this->m_pAI->threat.pFavoriteEnemy);
      LOBYTE(v5) = 17;
      GetPerfectInfo(this, v4, v5);
    }
    this->m_pAI->orientation.gunBlockedByWall = 0;
    this->m_pAI->orientation.prevRelativeDir = this->m_pAI->orientation.relativeDir;
    this->m_pAI->orientation.relativeDir = 0;
    this->m_pAI->eAnimMode = this->m_pAI->eScriptSetAnimMode;
    v6 = this->m_pAI;
    if ( v6->eAnimMode == AI_ANIM_MOVE_CODE )
      v6->moveMode = (v6->iPathEndTime <= 0) + 1;
    else
      v6->moveMode = 0;
    AICommonInterface::UpdateSight(this);
    this->UpdateThreat(this);
    AICommonInterface::UpdateLastEnemySightPos(this);
    this->UpdateStepMoveCounter(this);
    AIScriptedInterface::UpdateTightQuarters(this);
    if ( AI_BT_HasInstance(this->m_pAI->ent->s.number) )
    {
      AI_BT_Tick(this->m_pAI->ent->s.number);
      number = this->m_pAI->ent->s.number;
      v8 = Ai_Asm::Singleton();
      Ai_Asm::ClearEphemeralEvents(v8, number);
    }
    Profile_EndInternal(NULL);
    SV_Profile_EndEvent(SVPROF_AI_PRETHINK);
  }
}

/*
==============
AIScriptedInterface::ResetMoveHistory
==============
*/
void AIScriptedInterface::ResetMoveHistory(AIScriptedInterface *this, const vec3_t *newValue)
{
  ai_scripted_t *m_pAI; 

  memset_0(this->m_pAI->moveHistory, 0, sizeof(this->m_pAI->moveHistory));
  m_pAI = this->m_pAI;
  m_pAI->moveHistory[0] = *newValue;
  m_pAI->moveHistoryIndex = 1;
}

/*
==============
AIScriptedInterface::ResetMoveHistoryToEntForward
==============
*/
void AIScriptedInterface::ResetMoveHistoryToEntForward(AIScriptedInterface *this)
{
  ai_scripted_t *m_pAI; 
  vec3_t forward; 

  AngleVectors(&this->m_pAI->ent->r.currentAngles, &forward, NULL, NULL);
  memset_0(this->m_pAI->moveHistory, 0, sizeof(this->m_pAI->moveHistory));
  m_pAI = this->m_pAI;
  m_pAI->moveHistory[0] = forward;
  m_pAI->moveHistoryIndex = 1;
}

/*
==============
AIActorInterface::RunAITypeScript
==============
*/
void AIActorInterface::RunAITypeScript(gentity_s *ent)
{
  const char *v2; 
  const AITypeScript *AITypeScriptByClassname; 
  scrContext_t *v4; 
  unsigned int v5; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 847, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  v2 = SL_ConvertToString(ent->classname);
  if ( !IsActorClassname(v2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 850, ASSERT_TYPE_ASSERT, "( IsActorClassname( classname ) )", (const char *)&queryFormat, "IsActorClassname( classname )") )
    __debugbreak();
  AITypeScriptByClassname = GScrSP_FindAITypeScriptByClassname(v2 + 6);
  if ( !AITypeScriptByClassname && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 853, ASSERT_TYPE_ASSERT, "( typeScript )", (const char *)&queryFormat, "typeScript") )
    __debugbreak();
  if ( !AITypeScriptByClassname->main && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 854, ASSERT_TYPE_ASSERT, "( typeScript->main )", (const char *)&queryFormat, "typeScript->main") )
    __debugbreak();
  v4 = ScriptContext_Server();
  v5 = GScr_ExecEntThread(ent, AITypeScriptByClassname->main, 0);
  Scr_FreeThread(v4, v5);
}

/*
==============
AIActorInterface::SentientInfo_Copy
==============
*/
void AIActorInterface::SentientInfo_Copy(actor_s *pTo, actor_s *pFrom, int index, unsigned __int8 reason)
{
  int talkToSpecies; 
  AIActorInterface *v9; 
  gentity_s *ent; 
  sentient_s *sentient; 
  AIActorInterface v12; 
  AIAgentInterface v13; 
  AICommonInterface v14; 
  AICommonInterface v15; 
  AIActorInterface *v16; 

  if ( !pTo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 151, ASSERT_TYPE_ASSERT, "( pTo )", (const char *)&queryFormat, "pTo") )
    __debugbreak();
  if ( !pFrom && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 152, ASSERT_TYPE_ASSERT, "( pFrom )", (const char *)&queryFormat, "pFrom") )
    __debugbreak();
  talkToSpecies = pFrom->talkToSpecies;
  if ( _bittest(&talkToSpecies, pTo->species) )
  {
    AIActorInterface::AIActorInterface(&v12);
    AIAgentInterface::AIAgentInterface(&v13);
    v13.__vftable = (AIAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
    AICommonInterface::AICommonInterface(&v14);
    v14.__vftable = (AICommonInterface_vtbl *)&AIBotInterface::`vftable';
    AICommonInterface::AICommonInterface(&v15);
    v9 = NULL;
    v15.__vftable = (AICommonInterface_vtbl *)&AIBotAgentInterface::`vftable';
    ent = pTo->ent;
    v16 = NULL;
    if ( ent )
    {
      sentient = ent->sentient;
      if ( sentient )
      {
        if ( sentient->ai )
        {
          if ( !pTo->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 154, ASSERT_TYPE_ASSERT, "( pActor->sentientInfo != nullptr )", (const char *)&queryFormat, "pActor->sentientInfo != nullptr") )
            __debugbreak();
          AIActorInterface::SetActor(&v12, pTo);
          v16 = &v12;
          if ( !v12.GetAI(&v12) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 157, ASSERT_TYPE_ASSERT, "( m_pAI && m_pAI->GetAI() )", (const char *)&queryFormat, "m_pAI && m_pAI->GetAI()") )
            __debugbreak();
          v9 = v16;
        }
      }
    }
    if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 156, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
      __debugbreak();
    v9->SentientInfo_Copy(v9, pFrom, index, reason);
  }
}

/*
==============
AIActorInterface::SetDefaults
==============
*/
void AIActorInterface::SetDefaults(actor_s *actor)
{
  AIActorInterface v2; 
  AIActorInterface *v3; 

  AIActorInterface::AIActorInterface(&v2);
  v3 = NULL;
  if ( !actor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 472, ASSERT_TYPE_ASSERT, "(pActor)", (const char *)&queryFormat, "pActor") )
    __debugbreak();
  AIActorInterface::SetActor(&v2, actor);
  v3 = &v2;
  AIScriptedInterface::SetDefaultState(&v2);
  actor->talkToSpecies = -1;
  actor->bDisablePlayerADSLOSCheck = 0;
}

/*
==============
AIActorInterface::SetDefaults
==============
*/
void AIActorInterface::SetDefaults(AIActorInterface *this)
{
  bool v2; 

  AIScriptedInterface::SetDefaults(this);
  this->m_pAI->bDrawOnCompass = 1;
  this->m_pAI->movePlaybackRate = 1.0;
  this->m_pAI->moveAnimKnob = 0;
  this->m_pAI->clothType = 0;
  v2 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80);
  Sentient_Init(this->m_pAI->sentient, this->m_pAI->ent, v2 ? TEAM_FOUR : TEAM_ZERO);
}

/*
==============
AIScriptedInterface::SetFlashed
==============
*/
void AIScriptedInterface::SetFlashed(AIScriptedInterface *this, bool flashed)
{
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 7446, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( flashed )
  {
    AICommonInterface::MarkNotInBadPlace(this);
    AIScriptedInterface::ClearAllSuppressionFromEnemySentient(this);
    if ( !EntHandle::isDefined(&this->m_pAI->sentient->syncedMeleeEnt) )
      AIScriptedInterface::PushState(this, AIS_PAIN);
  }
  else if ( this->IsFlashBanged(this) )
  {
    AIScriptedInterface::PopState(this);
  }
}

/*
==============
AIActorInterface::SetStepMoveCounter
==============
*/
void AIActorInterface::SetStepMoveCounter(AIActorInterface *this)
{
  this->m_pAI->ent->s.lerp.u.actor.stepMove = 8;
}

/*
==============
AIScriptedInterface::SetupFindPathToGoal
==============
*/
char AIScriptedInterface::SetupFindPathToGoal(AIScriptedInterface *this)
{
  ai_scripted_t *v3; 
  ai_scripted_t *m_pAI; 
  float v5; 
  float v6; 
  float v7; 
  pathnode_t *node; 
  ai_scripted_t *v9; 
  pathnode_t *v10; 
  bool v11; 
  bool v12; 
  ai_scripted_t *v13; 
  bool IsBTGoalValid; 
  ai_scripted_t *v15; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 4996, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( this->m_pAI->ent->tagInfo )
  {
    this->ClearPath(this);
    AIScriptedInterface::Debug_NotMoving(this, "linked");
    return 0;
  }
  else if ( AIScriptedInterface::HadPath(this) || (v3 = this->m_pAI, level.time >= v3->iTeamMoveWaitTime) )
  {
    if ( !this->m_pAI->fixedNode || AIScriptedInterface::IsBTGoalValid(this) || this->m_pAI->codeGoal.bMultiGoalPath )
    {
      if ( !AICommonInterface::KnowAboutEnemy(this) )
        this->m_pAI->useEnemyGoal = 0;
      m_pAI = this->m_pAI;
      v5 = m_pAI->codeGoal.pos.v[0];
      v6 = m_pAI->codeGoal.pos.v[1];
      v7 = m_pAI->codeGoal.pos.v[2];
      node = m_pAI->codeGoal.node;
      AIScriptedInterface::UpdateGoalPos(this);
      v9 = this->m_pAI;
      v10 = v9->codeGoal.node;
      v11 = !v10 || v10 != node;
      v12 = (v5 != v9->codeGoal.pos.v[0] || v6 != v9->codeGoal.pos.v[1] || v7 != v9->codeGoal.pos.v[2]) && v11;
      v9->goalPosChanged = v12;
      v13 = this->m_pAI;
      if ( v13->goalPosChanged )
      {
        v13->nodeSelect.nextFindBestCoverTime = 0;
        this->m_pAI->fixedNodeNudged = 0;
        GScr_Notify(this->m_pAI->ent, scr_const.goal_changed, 0);
      }
      if ( AIScriptedInterface::KeepClaimedNode(this) )
      {
        if ( !AIScriptedInterface::UsingCoverNodes(this) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 5044, ASSERT_TYPE_ASSERT, "( UsingCoverNodes() )", (const char *)&queryFormat, "UsingCoverNodes()") )
          __debugbreak();
        if ( AICommonInterface::HasPath(this) )
        {
          this->ClearPath(this);
          AIScriptedInterface::TeamMoveBlocked(this);
        }
        AIScriptedInterface::Debug_NotMoving(this, "keeping claimed node");
        return 0;
      }
      else
      {
        IsBTGoalValid = AIScriptedInterface::IsBTGoalValid(this);
        if ( !AIScriptedInterface::UsingCoverNodes(this) )
          return 1;
        if ( !AICommonInterface::GetTargetEntity(this) )
          return 1;
        v15 = this->m_pAI;
        if ( v15->blackboard.m_bMeleeChargeRequested || EntHandle::isDefined(&v15->grenade.pGrenade) || !AIScriptedInterface::IsDoingReacquire(this) && level.time >= this->m_pAI->combat.remainExposedEndTime )
          return 1;
        if ( IsBTGoalValid )
        {
          return 1;
        }
        else
        {
          AIScriptedInterface::Debug_NotMoving(this, "reacting to enemy");
          return 0;
        }
      }
    }
    else
    {
      AIScriptedInterface::FindPathToFixedNode(this);
      return 0;
    }
  }
  else
  {
    if ( level.time >= v3->notMovingStringTime + 500 )
      AIScriptedInterface::Debug_NotMoving(this, "waiting for blockage");
    else
      AIScriptedInterface::Debug_NotMoving_Cached(this);
    return 0;
  }
}

/*
==============
AIScriptedInterface::ShouldDoSharpTurnSpace
==============
*/
__int64 AIScriptedInterface::ShouldDoSharpTurnSpace(AIScriptedInterface *this, vec3_t *nextPathPoint, float *outDistToCorner)
{
  AINavigator *pNavigator; 
  double PathDistToGoal; 
  int NCorners; 
  __int64 v9; 
  int v10; 
  __int64 v12; 
  __int128 v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float *v19; 
  __int128 v20; 
  __int128 v21; 
  float v22; 
  float v23; 
  __int128 v24; 
  float v25; 
  float v29; 
  float v30; 
  float v31; 
  __int128 v32; 
  ai_scripted_t *m_pAI; 
  float v36; 
  __int128 v37; 
  float v38; 
  __int128 v39; 
  unsigned __int8 v43; 
  float v45; 
  vec3_t outCurPos; 
  nav_cornerdata_t ptr[4]; 

  `eh vector constructor iterator'(ptr, 0x28ui64, 4ui64, (void (__fastcall *)(void *))nav_cornerdata_t::nav_cornerdata_t, (void (__fastcall *)(void *))nav_cornerdata_t::~nav_cornerdata_t);
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 6775, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !outDistToCorner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 6776, ASSERT_TYPE_ASSERT, "(outDistToCorner)", (const char *)&queryFormat, "outDistToCorner") )
    __debugbreak();
  pNavigator = this->m_pAI->pNavigator;
  if ( !pNavigator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 6779, ASSERT_TYPE_ASSERT, "(pNav)", (const char *)&queryFormat, "pNav") )
    __debugbreak();
  if ( !pNavigator->HasPath(pNavigator) )
    goto LABEL_33;
  if ( pNavigator->m_TimeOfLastPathUpdate == level.time )
    goto LABEL_33;
  PathDistToGoal = Nav_GetPathDistToGoal(pNavigator);
  if ( *(float *)&PathDistToGoal < 72.0 || AINavigator::ShouldPathOutOfBounds(pNavigator) )
    goto LABEL_33;
  NCorners = Nav_CalculateNextNCorners(pNavigator, 4, ptr, 1000.0);
  v9 = NCorners;
  if ( NCorners <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 6796, ASSERT_TYPE_ASSERT, "( nCorners > 0 )", (const char *)&queryFormat, "nCorners > 0") )
    __debugbreak();
  v10 = 0;
  LODWORD(_XMM11) = 0;
  Nav_GetPos(pNavigator, &outCurPos);
  if ( (int)v9 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 6802, ASSERT_TYPE_ASSERT, "( iCorner < nCorners )", (const char *)&queryFormat, "iCorner < nCorners") )
    __debugbreak();
  v12 = 0i64;
  *(float *)&v13 = v45;
  v14 = v45;
  v15 = v45;
  v16 = v45;
  v17 = v45;
  v18 = v45;
LABEL_21:
  v19 = &ptr[v12 + 1].m_Pos.v[2];
  while ( v12 < v9 )
  {
    v15 = *(v19 - 12);
    v13 = *((unsigned int *)v19 - 11);
    v14 = *(v19 - 10);
    v21 = v13;
    *(float *)&v21 = *(float *)&v13 - outCurPos.v[1];
    v20 = v21;
    v22 = *(v19 - 2) - v15;
    v24 = *((unsigned int *)v19 - 1);
    v23 = *(v19 - 1) - *(float *)&v13;
    v25 = *v19 - v14;
    *(float *)&v24 = fsqrt((float)((float)(v23 * v23) + (float)(v22 * v22)) + (float)(v25 * v25));
    _XMM3 = v24;
    __asm
    {
      vcmpless xmm0, xmm3, xmm15
      vblendvps xmm1, xmm3, xmm10, xmm0
    }
    v29 = (float)(1.0 / *(float *)&_XMM1) * v22;
    v30 = (float)(1.0 / *(float *)&_XMM1) * v23;
    v31 = (float)(1.0 / *(float *)&_XMM1) * v25;
    v32 = v20;
    *(float *)&v32 = fsqrt((float)((float)(*(float *)&v20 * *(float *)&v20) + (float)((float)(v15 - outCurPos.v[0]) * (float)(v15 - outCurPos.v[0]))) + (float)((float)(v14 - outCurPos.v[2]) * (float)(v14 - outCurPos.v[2])));
    _XMM11 = v32;
    __asm
    {
      vcmpless xmm0, xmm11, xmm15
      vblendvps xmm1, xmm11, xmm10, xmm0
    }
    v16 = (float)(1.0 / *(float *)&_XMM1) * (float)(v15 - outCurPos.v[0]);
    v17 = (float)(1.0 / *(float *)&_XMM1) * *(float *)&v20;
    v18 = (float)(1.0 / *(float *)&_XMM1) * (float)(v14 - outCurPos.v[2]);
    if ( *(float *)&v32 >= 20.0 )
    {
      if ( (float)((float)((float)(v17 * v30) + (float)(v16 * v29)) + (float)((float)((float)(1.0 / *(float *)&_XMM1) * (float)(v14 - outCurPos.v[2])) * v31)) < 0.96600002 )
        break;
      ++v10;
      ++v12;
      goto LABEL_21;
    }
    ++v10;
    ++v12;
    v19 += 10;
  }
  if ( !this->m_pAI->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 6830, ASSERT_TYPE_ASSERT, "(m_pAI->ent)", (const char *)&queryFormat, "m_pAI->ent") )
    __debugbreak();
  m_pAI = this->m_pAI;
  if ( m_pAI->orientation.faceMotion )
    goto LABEL_33;
  v36 = m_pAI->Physics.vVelocity.v[1];
  v37 = LODWORD(m_pAI->Physics.vVelocity.v[0]);
  v38 = m_pAI->Physics.vVelocity.v[2];
  v39 = v37;
  *(float *)&v39 = fsqrt((float)((float)(*(float *)&v37 * *(float *)&v37) + (float)(v36 * v36)) + (float)(v38 * v38));
  _XMM3 = v39;
  __asm
  {
    vcmpless xmm0, xmm3, xmm15
    vblendvps xmm1, xmm3, xmm10, xmm0
  }
  if ( (float)((float)((float)(v17 * (float)(v36 * (float)(1.0 / *(float *)&_XMM1))) + (float)(v16 * (float)(*(float *)&v37 * (float)(1.0 / *(float *)&_XMM1)))) + (float)(v18 * (float)(v38 * (float)(1.0 / *(float *)&_XMM1)))) >= 0.5 )
  {
LABEL_33:
    v43 = 0;
  }
  else
  {
    nextPathPoint->v[0] = v15;
    nextPathPoint->v[1] = *(float *)&v13;
    nextPathPoint->v[2] = v14;
    *outDistToCorner = *(float *)&_XMM11;
    v43 = 1;
  }
  `eh vector destructor iterator'(ptr, 0x28ui64, 4ui64, (void (__fastcall *)(void *))nav_cornerdata_t::~nav_cornerdata_t);
  return v43;
}

/*
==============
AIActorInterface::ShouldDrawActorOnCompass
==============
*/
bool AIActorInterface::ShouldDrawActorOnCompass(int iEntNum)
{
  __int64 v1; 
  gentity_s *v2; 
  actor_s *actor; 

  v1 = iEntNum;
  if ( iEntNum >= 2048 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 7399, ASSERT_TYPE_ASSERT, "( iEntNum < ( 2048 ) )", (const char *)&queryFormat, "iEntNum < MAX_GENTITIES") )
    __debugbreak();
  v2 = &g_entities[v1];
  actor = v2->actor;
  return actor && actor->bDrawOnCompass && (level.bDrawCompassFriendlies || v2->sentient->eTeam != TEAM_TWO);
}

/*
==============
AIScriptedInterface::ShouldEarlySharpTurnTick
==============
*/
bool AIScriptedInterface::ShouldEarlySharpTurnTick(AIScriptedInterface *this)
{
  ai_scripted_t *m_pAI; 
  bool result; 

  result = 0;
  if ( AICommonInterface::HasPath(this) )
  {
    m_pAI = this->m_pAI;
    if ( (float)((float)((float)(m_pAI->Physics.vVelocity.v[0] * m_pAI->Physics.vVelocity.v[0]) + (float)(m_pAI->Physics.vVelocity.v[1] * m_pAI->Physics.vVelocity.v[1])) + (float)(m_pAI->Physics.vVelocity.v[2] * m_pAI->Physics.vVelocity.v[2])) >= 1.0 && (float)((float)((float)(m_pAI->Physics.vWishDelta.v[0] * m_pAI->Physics.vWishDelta.v[0]) + (float)(m_pAI->Physics.vWishDelta.v[1] * m_pAI->Physics.vWishDelta.v[1])) + (float)(m_pAI->Physics.vWishDelta.v[2] * m_pAI->Physics.vWishDelta.v[2])) >= 0.0099999998 )
      return 1;
  }
  return result;
}

/*
==============
AIScriptedInterface::ShouldHoldGroundAgainstEnemy
==============
*/
bool AIScriptedInterface::ShouldHoldGroundAgainstEnemy(AIScriptedInterface *this)
{
  gentity_s *TargetEntity; 
  float *p_number; 
  ai_scripted_t *m_pAI; 
  float v5; 
  float v6; 
  float v7; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 4238, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  TargetEntity = AICommonInterface::GetTargetEntity(this);
  p_number = (float *)&TargetEntity->s.number;
  if ( !TargetEntity || !TargetEntity->client && !TargetEntity->actor || TargetEntity->health >= 20 )
    return 0;
  m_pAI = this->m_pAI;
  v5 = p_number[76] - m_pAI->ent->r.currentOrigin.v[0];
  v6 = p_number[77] - m_pAI->ent->r.currentOrigin.v[1];
  v7 = p_number[78] - m_pAI->ent->r.currentOrigin.v[2];
  return (float)((float)((float)(v6 * v6) + (float)(v5 * v5)) + (float)(v7 * v7)) < 65536.0;
}

/*
==============
AIScriptedInterface::ShouldLookForNewCover
==============
*/
bool AIScriptedInterface::ShouldLookForNewCover(AIScriptedInterface *this)
{
  ai_scripted_t *m_pAI; 

  m_pAI = this->m_pAI;
  return m_pAI->nodeSelect.requestDifferentCover && level.time > m_pAI->nodeSelect.nextFindBestCoverTime;
}

/*
==============
AIScriptedInterface::ShouldMoveAwayFromCloseEnt
==============
*/
bool AIScriptedInterface::ShouldMoveAwayFromCloseEnt(AIScriptedInterface *this)
{
  gentity_s *v2; 
  ai_scripted_t *m_pAI; 
  ai_scripted_t *v4; 
  bool result; 
  vec3_t vFinalGoal; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 3216, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  v2 = this->GetCloseEnt(this);
  result = 0;
  if ( (this->m_pAI->eAnimMode != AI_ANIM_MOVE_CODE || !AICommonInterface::HasPath(this)) && (!AIScriptedInterface::IsInCoverArrival(this) || this->m_pAI->sentient->pClaimedNode) )
  {
    if ( v2 )
    {
      m_pAI = this->m_pAI;
      if ( m_pAI->Physics.ePhysicsType != AIPHYS_NOCLIP && !G_MotionWarp_Active(m_pAI->ent->s.number) )
      {
        AICommonInterface::GetPathFinalGoal(this, &vFinalGoal);
        if ( v2->client || (float)((float)((float)(v2->r.currentOrigin.v[1] - vFinalGoal.v[1]) * (float)(v2->r.currentOrigin.v[1] - vFinalGoal.v[1])) + (float)((float)(v2->r.currentOrigin.v[0] - vFinalGoal.v[0]) * (float)(v2->r.currentOrigin.v[0] - vFinalGoal.v[0]))) > 1406.25 )
        {
          v4 = this->m_pAI;
          if ( v4->pushable && v4->script_pushable )
            return 1;
        }
      }
    }
  }
  return result;
}

/*
==============
AIActorInterface::ShutdownActors
==============
*/

void AIActorInterface::ShutdownActors(void)
{
  AIPhys_Shutdown();
}

/*
==============
AIActorInterface::SpawnActor
==============
*/
__int64 AIActorInterface::SpawnActor(gentity_s *ent)
{
  const dvar_t *v2; 
  int spawnflags; 
  unsigned int v4; 
  actor_s *v5; 
  sentient_s *v6; 
  sentient_s *v7; 
  __int64 v8; 
  LerpEntityState *p_lerp; 
  AIActorInterface *m_pAI; 
  AIActorWrapper v12; 

  ent->model = 0;
  SV_Profile_BeginEvent(SVPROF_AI_SPAWNING);
  v2 = DVARBOOL_ai_spawn;
  if ( !DVARBOOL_ai_spawn && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_spawn") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( !v2->current.enabled )
    goto LABEL_13;
  spawnflags = ent->spawnflags;
  if ( (spawnflags & 1) != 0 )
  {
    v4 = SP_actor_spawner(ent);
    goto LABEL_26;
  }
  if ( level.actorCount - level.actorLightCount >= 32 && (spawnflags & 2) != 0 )
  {
    do
      AIActorInterface::FreeExpendable();
    while ( level.actorCount - level.actorLightCount >= 32 );
  }
  v5 = AIActorInterface::AllocActor();
  if ( !v5 )
  {
LABEL_13:
    G_FreeEntity(ent);
    v4 = 0;
    goto LABEL_26;
  }
  v6 = Sentient_Alloc(ST_ACTOR);
  v7 = v6;
  if ( !v6 )
  {
    --level.actorCount;
    v5->inuse = 0;
    goto LABEL_13;
  }
  ent->actor = v5;
  ent->sentient = v6;
  ent->nextthink = 0;
  ent->c.item[0].ammoCount = level.time;
  ent->handler = 2;
  v8 = 0i64;
  p_lerp = &ent->s.lerp;
  while ( !p_lerp->eFlags.m_flags[0] )
  {
    ++v8;
    p_lerp = (LerpEntityState *)((char *)p_lerp + 4);
    if ( v8 >= 1 )
      goto LABEL_20;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 225, ASSERT_TYPE_ASSERT, "( !ent->s.lerp.eFlags.TestAnyFlags() )", (const char *)&queryFormat, "!ent->s.lerp.eFlags.TestAnyFlags()") )
    __debugbreak();
LABEL_20:
  ent->r.svFlags |= 2u;
  v4 = 1;
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(&ent->s.lerp.eFlags, ACTIVE, 0x10u);
  ent->s.lerp.u.anonymous.data[6] = 0;
  ent->maxHealth = 100;
  ent->health = 100;
  ent->flags.m_flags[0] |= 0x80000200;
  ent->r.box = actorBox;
  ent->clipmask = 33685521;
  ent->s.eType = ET_ACTOR;
  ent->s.otherEntityNum = 2047;
  ent->s.surfType = 7;
  *(_QWORD *)&ent->hint.hintString = 0i64;
  if ( (ent->spawnflags & 0x40) == 0 )
    AI_DropToFloor(ent);
  v5->ent = ent;
  v5->sentient = v7;
  AIActorWrapper::AIActorWrapper(&v12, v5);
  m_pAI = v12.m_pAI;
  if ( !v12.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 256, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  m_pAI->OnSpawned(m_pAI);
  SV_LinkEntity(ent);
  Sentient_NearestTacPoint(v7);
  G_PhysicsCharacterProxy_AddCharacter(ent);
LABEL_26:
  SV_Profile_EndEvent(SVPROF_AI_SPAWNING);
  return v4;
}

/*
==============
AIActorInterface::Species_Alloc
==============
*/
actor_species_s *AIActorInterface::Species_Alloc(AISpecies species)
{
  return 0i64;
}

/*
==============
AIActorInterface::Species_Free
==============
*/
void AIActorInterface::Species_Free(AISpecies species, actor_species_s *pSpeciesData)
{
  ;
}

/*
==============
AIScriptedInterface::Think
==============
*/
void AIScriptedInterface::Think(gentity_s *self)
{
  AIScriptedInterface *m_pAI; 
  actor_s *actor; 
  AIWrapper v4; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 1675, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  AIWrapper::AIWrapper(&v4, self);
  m_pAI = v4.m_pAI;
  if ( !v4.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 1677, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  actor = self->actor;
  if ( actor && !actor->inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 1678, ASSERT_TYPE_ASSERT, "( !self->actor || self->actor->inuse )", (const char *)&queryFormat, "!self->actor || self->actor->inuse") )
    __debugbreak();
  m_pAI->Think(m_pAI);
}

/*
==============
AIScriptedInterface::Think
==============
*/
void AIScriptedInterface::Think(AIScriptedInterface *this)
{
  int v2; 
  gentity_s *v3; 
  const dvar_t *v4; 
  const dvar_t *v5; 
  const DObj *ServerDObjForEnt; 
  const char *v7; 
  ai_scripted_t *m_pAI; 
  actor_think_result_t v9; 
  float *v; 
  float v11; 
  sentient_s *sentient; 
  bool v13; 
  _DWORD *p_pos; 
  bool IsRagdollTrajectory; 
  int v16; 
  float v17; 
  unsigned int v18; 
  unsigned int v19; 
  unsigned int v20; 
  int v21; 
  bool v22; 
  bool v23; 
  bool v24; 
  int v25; 
  ai_scripted_t *v26; 
  gentity_s *v27; 
  gentity_s *v28; 
  const sentient_s *v29; 
  ai_scripted_t *v30; 
  ActorDelayedWeaponDrop *i; 
  DelayedWeapDropState state; 
  gentity_s *v33; 
  ai_scripted_t *v34; 
  ai_scripted_t *v35; 
  unsigned __int8 numPoints; 
  scrContext_t *v37; 
  ai_scripted_t *v38; 
  scrContext_t *v39; 
  unsigned __int8 j; 
  __int64 lastShot; 
  __int64 bFireSoundOnce; 
  vec3_t vEyePosOut; 
  tmat43_t<vec3_t> matrix; 

  v2 = 0;
  Profile_Begin(254);
  v3 = this->GetEntity(this);
  if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 1699, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  v4 = DVARBOOL_ai_enabled;
  if ( !DVARBOOL_ai_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( !v4->current.enabled )
  {
    v5 = DVARINT_ai_forceEnableEntIndex;
    if ( !DVARINT_ai_forceEnableEntIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_forceEnableEntIndex") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    if ( v5->current.integer != v3->s.number )
      goto LABEL_128;
  }
  ServerDObjForEnt = Com_GetServerDObjForEnt(v3);
  if ( ServerDObjForEnt )
  {
    if ( !DObjGetTree(ServerDObjForEnt) )
    {
      v7 = SL_ConvertToString((scr_string_t)*g_AISpeciesNames[this->m_pAI->species]);
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E51570, 1086i64, v7);
    }
    if ( !this->m_pAI->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 1736, ASSERT_TYPE_ASSERT, "( m_pAI->ent )", (const char *)&queryFormat, "m_pAI->ent") )
      __debugbreak();
    m_pAI = this->m_pAI;
    if ( m_pAI->ent != v3 )
    {
      LODWORD(bFireSoundOnce) = m_pAI->ent->s.number;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 1737, ASSERT_TYPE_ASSERT, "(m_pAI->ent == self)", "%s\n\tactor->ent->s.number: %d, self->s.number: %d", "m_pAI->ent == self", bFireSoundOnce, v3->s.number) )
        __debugbreak();
    }
    if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 1738, ASSERT_TYPE_ASSERT, "( m_pAI->sentient )", (const char *)&queryFormat, "m_pAI->sentient") )
      __debugbreak();
    if ( this->m_pAI->sentient->ent != v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 1739, ASSERT_TYPE_ASSERT, "( m_pAI->sentient->ent == self )", (const char *)&queryFormat, "m_pAI->sentient->ent == self") )
      __debugbreak();
    if ( v3->sentient != this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 1740, ASSERT_TYPE_ASSERT, "( self->sentient == m_pAI->sentient )", (const char *)&queryFormat, "self->sentient == m_pAI->sentient") )
      __debugbreak();
    if ( v3->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 1741, ASSERT_TYPE_ASSERT, "( self->client == 0 )", (const char *)&queryFormat, "self->client == NULL") )
      __debugbreak();
    if ( this->m_pAI->stateLevel >= 6 )
    {
      LODWORD(bFireSoundOnce) = 6;
      LODWORD(lastShot) = this->m_pAI->stateLevel;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 1742, ASSERT_TYPE_ASSERT, "(unsigned)( m_pAI->stateLevel ) < (unsigned)( ( sizeof( *array_counter( m_pAI->eState ) ) + 0 ) )", "m_pAI->stateLevel doesn't index ARRAY_COUNT( m_pAI->eState )\n\t%i not in [0, %i)", lastShot, bFireSoundOnce) )
        __debugbreak();
    }
    if ( (unsigned int)(this->m_pAI->eState[this->m_pAI->stateLevel] - 1) > 8 )
    {
      LODWORD(bFireSoundOnce) = this->m_pAI->eState[this->m_pAI->stateLevel];
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 1743, ASSERT_TYPE_ASSERT, "( ( m_pAI->eState[m_pAI->stateLevel] > AIS_INVALID && m_pAI->eState[m_pAI->stateLevel] < AIS_COUNT ) )", "%s\n\t( m_pAI->eState[m_pAI->stateLevel] ) = %i", "( m_pAI->eState[m_pAI->stateLevel] > AIS_INVALID && m_pAI->eState[m_pAI->stateLevel] < AIS_COUNT )", bFireSoundOnce) )
        __debugbreak();
    }
    if ( this->m_pAI->iPathEndTime < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 1746, ASSERT_TYPE_ASSERT, "( m_pAI->iPathEndTime >= 0 )", (const char *)&queryFormat, "m_pAI->iPathEndTime >= 0") )
      __debugbreak();
    if ( this->m_pAI->iPathEndTime > level.time + 500 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 1747, ASSERT_TYPE_ASSERT, "( m_pAI->iPathEndTime <= level.time + ACTOR_STOP_TIME )", (const char *)&queryFormat, "m_pAI->iPathEndTime <= level.time + ACTOR_STOP_TIME") )
      __debugbreak();
    AIScriptedInterface::DecaySuppressionLines(this);
    if ( this->m_pAI->Physics.bIsAlive )
      this->UpdatePileUp(this);
    do
    {
      ++v2;
      v9 = AIScriptedInterface::CallThink(this);
      if ( v2 >= 10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 1769, ASSERT_TYPE_ASSERT, "( callThinkCounter < 10 )", (const char *)&queryFormat, "callThinkCounter < ACTOR_CALL_THINK_REPEAT_MAX") )
        __debugbreak();
    }
    while ( v9 == ACTOR_THINK_REPEAT );
    v = v3->r.currentOrigin.v;
    v11 = v3->r.currentOrigin.v[0];
    sentient = this->m_pAI->sentient;
    v13 = v11 != sentient->oldOrigin.v[0] || sentient->oldOrigin.v[1] != v3->r.currentOrigin.v[1] || sentient->oldOrigin.v[2] != v3->r.currentOrigin.v[2];
    sentient->oldOrigin.v[0] = v11;
    p_pos = &v3->s.lerp.pos;
    sentient->oldOrigin.v[1] = v3->r.currentOrigin.v[1];
    sentient->oldOrigin.v[2] = v3->r.currentOrigin.v[2];
    IsRagdollTrajectory = Com_IsRagdollTrajectory(&v3->s.lerp.pos);
    v16 = 1;
    if ( IsRagdollTrajectory )
      v16 = 26;
    *p_pos = v16;
    if ( v3 == (gentity_s *)-16i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 82, ASSERT_TYPE_ASSERT, "(traj)", (const char *)&queryFormat, "traj") )
      __debugbreak();
    v17 = *v;
    if ( *p_pos == 4 )
    {
      vEyePosOut.v[0] = *v;
      if ( (LODWORD(v17) & 0x7F800000) == 2139095040 || (vEyePosOut.v[0] = v3->r.currentOrigin.v[1], (LODWORD(vEyePosOut.v[0]) & 0x7F800000) == 2139095040) || (vEyePosOut.v[0] = v3->r.currentOrigin.v[2], (LODWORD(vEyePosOut.v[0]) & 0x7F800000) == 2139095040) )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 24, ASSERT_TYPE_SANITY, "( !IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] )") )
          __debugbreak();
      }
      v18 = s_trbase_aab_Y ^ LODWORD(v3->r.currentOrigin.v[1]);
      v19 = s_trbase_aab_Z ^ LODWORD(v3->r.currentOrigin.v[2]);
      *(_QWORD *)vEyePosOut.v = &v3->r.currentOrigin;
      v20 = *(_DWORD *)v ^ ~s_trbase_aab_X;
      v21 = v20 ^ v18;
      LODWORD(v3->s.lerp.pos.trBase.v[0]) = v20;
      LODWORD(v3->s.lerp.pos.trBase.v[1]) = v21;
      LODWORD(v3->s.lerp.pos.trBase.v[2]) = v21 ^ v19;
      memset(&vEyePosOut, 0, 8ui64);
    }
    else
    {
      v3->s.lerp.pos.trBase.v[0] = v17;
      v3->s.lerp.pos.trBase.v[1] = v3->r.currentOrigin.v[1];
      v3->s.lerp.pos.trBase.v[2] = v3->r.currentOrigin.v[2];
    }
    v22 = v3->s.lerp.apos.trBase.v[0] == v3->r.currentAngles.v[0] && v3->s.lerp.apos.trBase.v[1] == v3->r.currentAngles.v[1] && v3->s.lerp.apos.trBase.v[2] == v3->r.currentAngles.v[2];
    v23 = v13 || !v22;
    v24 = Com_IsRagdollTrajectory(&v3->s.lerp.apos);
    v25 = 1;
    if ( v24 )
      v25 = 26;
    v3->s.lerp.apos.trType = v25;
    v3->s.lerp.apos.trBase.v[0] = v3->r.currentAngles.v[0];
    v3->s.lerp.apos.trBase.v[1] = v3->r.currentAngles.v[1];
    v3->s.lerp.apos.trBase.v[2] = v3->r.currentAngles.v[2];
    if ( v13 )
    {
      SV_LinkEntity(v3);
      AIScriptedInterface::PostPhysics(this);
    }
    Sentient_CheckAndUpdateNearestData(this->m_pAI->sentient, v13);
    Sentient_BanNearNodes(this->m_pAI->sentient, 0);
    if ( BG_ActorIsProne(&this->m_pAI->ProneInfo, level.time) )
    {
      if ( v23 )
        this->UpdateProneInformation(this, 1);
    }
    else
    {
      this->m_pAI->Physics.prone = 0;
    }
    this->UpdateLookAt(this);
    AIScriptedInterface::Physics_TestForLinkedGroundChange(this);
    this->UpdateDelayedDeath(this);
    v26 = this->m_pAI;
    if ( v26->Physics.bIsAlive && !v26->ignoreTriggers )
      this->TouchTriggers(this);
    v27 = this->GetEntity(this);
    if ( this->m_pAI->bContinuousFire )
    {
      GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(&v27->s.lerp.eFlags, ACTIVE, 0xAu);
      if ( EntHandle::isDefined(&this->m_pAI->pBeamTargetEnt) )
      {
        v28 = EntHandle::ent(&this->m_pAI->pBeamTargetEnt);
        v29 = v28->sentient;
        if ( v29 )
          Sentient_GetEyePosition(v29, &vEyePosOut);
        else
          vEyePosOut = v28->r.currentOrigin;
        AIScriptedInterface::Shoot(this, 1.0, &vEyePosOut, NULL, 1, NOT_LAST_SHOT_IN_CLIP, 1, 0);
      }
      else
      {
        AIScriptedInterface::Shoot(this, 10.0, NULL, NULL, 1, NOT_LAST_SHOT_IN_CLIP, 1, 0);
      }
    }
    else if ( !AIScriptedInterface::AlreadyAttackedThisFrame(this) )
    {
      GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&this->m_pAI->ent->s.lerp.eFlags, ACTIVE, 0xAu);
    }
    if ( v9 == ACTOR_THINK_MOVE_TO_BODY_QUEUE )
    {
      AIScriptedInterface::FinishWeaponDrops(this);
      if ( !this->BecomeCorpse(this) )
        goto LABEL_14;
    }
    else
    {
      v30 = this->m_pAI;
      for ( i = v30->weapDrops; i != (ActorDelayedWeaponDrop *)&v30->speedScaleMultiplier; ++i )
      {
        state = i->state;
        if ( state == ACTOR_WEAP_DROP_GRAB_INITIAL_VALUE )
        {
          G_Items_GetStateFromTag(v30->ent, i->tagName, NULL, &i->matrix, 0);
          i->time = level.time;
          i->state = ACTOR_WEAP_DROP_FINISH;
        }
        else if ( state == ACTOR_WEAP_DROP_FINISH && level.time > i->time )
        {
          G_Items_GetStateFromTag(v30->ent, i->tagName, NULL, &matrix, 0);
          v33 = G_Items_DropWeapon(this->m_pAI->ent, &i->weapon, 0, 1, &matrix);
          if ( v33 )
          {
            BG_WeaponDef(&i->weapon, 0);
            G_Items_EnablePhysicsDelayed(v33, this->m_pAI->ent, i->time, &i->matrix, i->tagName);
            GScr_AddEntity(v33);
            GScr_Notify(this->m_pAI->ent, scr_const.weapon_dropped, 1u);
          }
          i->state = ACTOR_WEAP_DROP_NONE;
        }
        v30 = this->m_pAI;
      }
      if ( !v30 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 1636, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
        __debugbreak();
      if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 1637, ASSERT_TYPE_ASSERT, "( m_pAI->sentient )", (const char *)&queryFormat, "m_pAI->sentient") )
        __debugbreak();
      if ( !this->m_pAI->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 1638, ASSERT_TYPE_ASSERT, "( m_pAI->ent )", (const char *)&queryFormat, "m_pAI->ent") )
        __debugbreak();
      if ( !AIScriptedInterface::GoalReached(this) )
        goto LABEL_128;
      v34 = this->m_pAI;
      v35 = v34;
      if ( !v34->codeGoal.bMultiGoalPath )
        goto LABEL_126;
      numPoints = v34->scriptGoalPath.numPoints;
      if ( !numPoints )
        goto LABEL_126;
      if ( v34->scriptGoalPath.curPoint == numPoints - 1 )
      {
        v37 = ScriptContext_Server();
        v38 = this->m_pAI;
        v39 = v37;
        for ( j = v38->scriptGoalPath.curPoint; j < v38->scriptGoalPath.numPoints; ++j )
        {
          Scr_AddInt(v39, j);
          GScr_Notify(this->m_pAI->ent, scr_const.subgoal, 1u);
          v38 = this->m_pAI;
        }
        v38->scriptGoalPath.numPoints = 0;
        v35 = this->m_pAI;
LABEL_126:
        GScr_Notify(v35->ent, scr_const.goal, 0);
      }
    }
LABEL_128:
    this->SetNextThinkTime(this, v3);
    goto LABEL_129;
  }
  Com_Printf(18, "^3Deleting AI without a model.\n");
LABEL_14:
  G_FreeEntity(v3);
LABEL_129:
  Profile_EndInternal(NULL);
}

/*
==============
AIActorInterface::Touch
==============
*/
void AIActorInterface::Touch(gentity_s *self, gentity_s *other, int bTouched)
{
  actor_s *actor; 
  __int64 v5; 
  __int64 v6; 

  actor = self->actor;
  if ( !actor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 1904, ASSERT_TYPE_ASSERT, "( actor )", (const char *)&queryFormat, "actor") )
    __debugbreak();
  if ( !actor->inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 1905, ASSERT_TYPE_ASSERT, "( actor->inuse )", (const char *)&queryFormat, "actor->inuse") )
    __debugbreak();
  if ( actor->stateLevel >= 6 )
  {
    LODWORD(v5) = actor->stateLevel;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 1914, ASSERT_TYPE_ASSERT, "(unsigned)( actor->stateLevel ) < (unsigned)( ( sizeof( *array_counter( actor->eState ) ) + 0 ) )", "actor->stateLevel doesn't index ARRAY_COUNT( actor->eState )\n\t%i not in [0, %i)", v5, 6) )
      __debugbreak();
  }
  if ( (unsigned int)(actor->eState[actor->stateLevel] - 1) > 8 )
  {
    LODWORD(v6) = actor->eState[actor->stateLevel];
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 1915, ASSERT_TYPE_ASSERT, "( ( actor->eState[actor->stateLevel] > AIS_INVALID && actor->eState[actor->stateLevel] < AIS_COUNT ) )", "%s\n\t( actor->eState[actor->stateLevel] ) = %i", "( actor->eState[actor->stateLevel] > AIS_INVALID && actor->eState[actor->stateLevel] < AIS_COUNT )", v6) )
      __debugbreak();
  }
  if ( !AIFuncTable[actor->species][actor->eState[actor->stateLevel]].pfnTouch )
  {
    LODWORD(v6) = actor->eState[actor->stateLevel];
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 1916, ASSERT_TYPE_ASSERT, "( ( AIFuncTable[actor->species][actor->eState[actor->stateLevel]].pfnTouch ) )", "%s\n\t( actor->eState[actor->stateLevel] ) = %i", "( AIFuncTable[actor->species][actor->eState[actor->stateLevel]].pfnTouch )", v6) )
      __debugbreak();
  }
  AIFuncTable[actor->species][actor->eState[actor->stateLevel]].pfnTouch(actor, other);
}

/*
==============
AIActorInterface::TouchEnts
==============
*/
void AIActorInterface::TouchEnts(AIActorInterface *this, int numtouch, __int16 *touchents)
{
  gentity_s *v5; 

  v5 = this->GetEntity(this);
  G_ActiveSP_TouchEnts(v5, numtouch, touchents);
}

/*
==============
AIActorInterface::TouchTriggers
==============
*/
void AIActorInterface::TouchTriggers(AIActorInterface *this)
{
  gentity_s *v1; 

  v1 = this->GetEntity(this);
  G_ActiveSP_TouchTriggers(v1);
}

/*
==============
AIScriptedInterface::TryEarlyASMTick
==============
*/
char AIScriptedInterface::TryEarlyASMTick(AIScriptedInterface *this, bool bForce)
{
  int iLastASMUpdateTime; 
  int number; 
  Ai_Asm *v5; 

  if ( !bForce )
  {
    iLastASMUpdateTime = this->m_pAI->iLastASMUpdateTime;
    if ( iLastASMUpdateTime )
    {
      if ( iLastASMUpdateTime == level.time )
        return 0;
    }
  }
  number = this->m_pAI->ent->s.number;
  v5 = Ai_Asm::Singleton();
  if ( !Ai_Asm::GetInstanceIfExists(v5, NULL, number) )
    return 0;
  this->m_pAI->iLastASMUpdateTime = level.time;
  if ( !AI_ASM_Tick(this->m_pAI->ent->s.number, 1) )
    return 0;
  this->m_pAI->iLastASMEarlyTickSuccessTime = level.time;
  return 1;
}

/*
==============
AIScriptedInterface::TryPathToNode
==============
*/
char AIScriptedInterface::TryPathToNode(AIScriptedInterface *this, pathnode_t *node)
{
  gentity_s *ent; 
  unsigned __int64 eTeam; 
  int v6; 
  ai_scripted_t *m_pAI; 
  bitarray<224> teamFlags; 
  vec3_t pos; 

  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 5068, ASSERT_TYPE_ASSERT, "( node )", (const char *)&queryFormat, "node") )
    __debugbreak();
  ent = this->m_pAI->ent;
  pathnode_t::GetPos(node, &pos);
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 5073, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  eTeam = (unsigned int)this->m_pAI->sentient->eTeam;
  memset(&teamFlags, 0, sizeof(teamFlags));
  if ( (unsigned int)eTeam >= 0xE0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", eTeam, 224) )
    __debugbreak();
  teamFlags.array[eTeam >> 5] |= 0x80000000 >> (eTeam & 0x1F);
  v6 = Nav_TranslateTeamFlagsToRepulsorUsageFlags(&teamFlags);
  if ( Nav_IsPointInRepulsorBadplace(&pos, v6, this->m_pAI->ent->s.number, 2047) )
  {
    AIScriptedInterface::Debug_NotMoving(this, "badplace repulsor");
    return 0;
  }
  if ( !AIScriptedInterface::FindPathToClaimNode(this, node, 1, 0) )
  {
    if ( !AIScriptedInterface::IsSuppressedInAnyway(this) && !AIScriptedInterface::IsDoingAmbush(this) )
      Path_MarkNodeInvalid(node, this->m_pAI->sentient->eTeam, 3000);
    AIScriptedInterface::Debug_NotMoving(this, "cant path to claimed node");
    AIScriptedInterface::TeamMoveBlocked(this);
    return 0;
  }
  if ( !AICommonInterface::HasPath(this) && !AIScriptedInterface::PathPending(this) )
  {
    m_pAI = this->m_pAI;
    if ( m_pAI->useEnemyGoal )
    {
      if ( !AICommonInterface::PointAtGoal(this, &ent->r.currentOrigin, &m_pAI->codeGoal) || !AICommonInterface::PointNearNode(this, &ent->r.currentOrigin, node) )
        AIScriptedInterface::ClearUseEnemyGoal(this);
      AIScriptedInterface::Debug_NotMoving(this, "cant path to clm node - enemy goal");
      AIScriptedInterface::TeamMoveBlocked(this);
    }
  }
  return 1;
}

/*
==============
AIScriptedInterface::UpdateAnglesAndDelta
==============
*/
void AIScriptedInterface::UpdateAnglesAndDelta(AIScriptedInterface *this)
{
  __int128 v1; 
  gentity_s *ent; 
  ai_scripted_t *m_pAI; 
  ai_scripted_t *v5; 
  int iPathEndTime; 
  ai_scripted_t *v7; 
  bool v8; 
  ai_scripted_t *v9; 
  int Int_Internal_DebugName; 
  ai_scripted_t *v11; 
  gentity_s *v12; 
  float v13; 
  float v14; 
  ai_scripted_t *v15; 
  ai_scripted_t *v16; 
  ai_scripted_t *v17; 
  ai_scripted_t *v18; 
  AIScriptedInterface_vtbl *v19; 
  bool v20; 
  ai_scripted_t *v21; 
  ai_scripted_t *v22; 
  ai_scripted_t *v23; 
  float v24; 
  AIScriptedInterface_vtbl *v25; 
  bool v26; 
  ai_scripted_t *v27; 
  ai_scripted_t *v28; 
  EntityTagInfo *tagInfo; 
  gentity_s *v30; 
  __int64 eMode; 
  const dvar_t *v32; 
  ai_scripted_t *v33; 
  EntityTagInfo *v34; 
  float v35; 
  float v36; 
  const dvar_t *v37; 
  vec3_t *p_vWishDelta; 
  double v39; 
  float v40; 
  ai_scripted_t *v41; 
  gentity_s *v42; 
  double DefaultSpeed; 
  ai_scripted_t *v44; 
  const char *v45; 
  ai_scripted_t *v46; 
  const char *v49; 
  const char *v50; 
  const vec4_t *v51; 
  const char *v52; 
  __int64 v53; 
  vec3_t angles; 
  vec3_t end; 
  vec3_t outTranslation; 
  vec4_t outRotation; 
  vec3_t translationDelta; 
  vec3_t start; 
  tmat33_t<vec3_t> axis; 
  vec4_t rotationDeltaQuat; 
  tmat33_t<vec3_t> in2; 
  tmat33_t<vec3_t> out; 
  __int128 v64; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 5881, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  ent = this->m_pAI->ent;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 5883, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  m_pAI = this->m_pAI;
  v5 = m_pAI;
  if ( m_pAI->eAnimMode != AI_ANIM_MOVE_CODE )
  {
    iPathEndTime = m_pAI->iPathEndTime;
    if ( iPathEndTime )
    {
      if ( iPathEndTime - level.time <= 0 )
      {
        this->ClearPath(this);
        this->m_pAI->iPathEndTime = 0;
        this->m_pAI->bArrivalFailed = 0;
        v5 = this->m_pAI;
      }
    }
  }
  v5->pNavigator->m_bBlocked = 0;
  v7 = this->m_pAI;
  v8 = v7->avoidance.avoidanceEnabled && v7->eAnimMode == AI_ANIM_MOVE_CODE;
  v7->avoidance.useORCAAvoidance = v8;
  this->m_pAI->avoidance_active = 0;
  v9 = this->m_pAI;
  switch ( v9->eAnimMode )
  {
    case AI_ANIM_MOVE_CODE:
      if ( !v9->moveMode )
        goto LABEL_25;
      if ( !AICommonInterface::HasPath(this) )
      {
        v9 = this->m_pAI;
LABEL_25:
        *(_QWORD *)v9->Physics.vWishDelta.v = 0i64;
        v9->Physics.vWishDelta.v[2] = 0.0;
        this->m_pAI->Physics.ePhysicsType = AIPHYS_NORMAL_ABSOLUTE;
        outRotation = quat_identity;
        goto LABEL_45;
      }
      AIScriptedInterface::GetAnimDeltas(this, &outRotation, &outTranslation);
      this->UpdateMoveAnimTranslation(this, &outTranslation);
      if ( !AICommonInterface::HasPath(this) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 5915, ASSERT_TYPE_ASSERT, "( HasPath() )", (const char *)&queryFormat, "HasPath()") )
        __debugbreak();
      this->m_pAI->Physics.ePhysicsType = AIPHYS_NORMAL_ABSOLUTE;
      AIScriptedInterface::UpdateMovementDelta(this, fsqrt((float)((float)(outTranslation.v[0] * outTranslation.v[0]) + (float)(outTranslation.v[1] * outTranslation.v[1])) + (float)(outTranslation.v[2] * outTranslation.v[2])));
      AIScriptedInterface::PathEndActions(this);
      AIScriptedInterface::UpdateSpeedScaleValues(this);
      AIScriptedInterface::UpdateGroundSlopeValues(this);
      this->UpdateMoveAnimPlayback(this, &outTranslation);
      angles.v[0] = 0.0;
      angles.v[1] = 0.0;
      angles.v[2] = 0.0;
      if ( Dvar_GetInt_Internal_DebugName(DVARINT_ai_showPaths, "ai_showPaths") > 0 )
      {
        Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_ai_showPaths, "ai_showPaths");
        Nav_DrawPath(this->m_pAI->pNavigator, Int_Internal_DebugName);
        v11 = this->m_pAI;
        v12 = v11->ent;
        *(_QWORD *)start.v = *(_QWORD *)v11->ent->r.currentOrigin.v;
        start.v[2] = v12->r.currentOrigin.v[2] + 2.0;
        v13 = v11->Physics.vWishDelta.v[2];
        v14 = (float)(6.0 * v11->Physics.vWishDelta.v[1]) + start.v[1];
        end.v[0] = (float)(6.0 * v11->Physics.vWishDelta.v[0]) + start.v[0];
        end.v[2] = (float)(6.0 * v13) + start.v[2];
        end.v[1] = v14;
        G_DebugLine(&start, &end, &colorYellow, 0);
        if ( Dvar_GetInt_Internal_DebugName(DVARINT_ai_showPaths, "ai_showPaths") >= 2 )
          Path_DebugDrawSnappedPositions(this->m_pAI->pNavigator, this->m_pAI->ent);
      }
      goto LABEL_46;
    case AI_ANIM_USE_POS_DELTAS:
      AIScriptedInterface::GetAnimDeltas(this, &outRotation, &outTranslation);
      this->m_pAI->Physics.ePhysicsType = AIPHYS_NORMAL_RELATIVE;
      v15 = this->m_pAI;
      v15->Physics.vWishDelta.v[0] = outTranslation.v[0];
      v15->Physics.vWishDelta.v[1] = outTranslation.v[1];
      this->m_pAI->Physics.vWishDelta.v[2] = 0.0;
      goto LABEL_45;
    case AI_ANIM_USE_ANGLE_DELTAS:
      AIScriptedInterface::GetAnimDeltas(this, &outRotation, &outTranslation);
      this->m_pAI->Physics.ePhysicsType = AIPHYS_NORMAL_ABSOLUTE;
      v16 = this->m_pAI;
      *(_QWORD *)v16->Physics.vWishDelta.v = 0i64;
      goto LABEL_28;
    case AI_ANIM_USE_BOTH_DELTAS:
    case AI_ANIM_USE_BOTH_DELTAS_OFF_NAV:
      AIScriptedInterface::GetAnimDeltas(this, &outRotation, &outTranslation);
      this->m_pAI->Physics.ePhysicsType = AIPHYS_NORMAL_RELATIVE;
      goto LABEL_31;
    case AI_ANIM_USE_BOTH_DELTAS_NOCLIP:
      AIScriptedInterface::GetAnimDeltas(this, &outRotation, &v9->Physics.vWishDelta);
      this->m_pAI->Physics.ePhysicsType = AIPHYS_NOCLIP;
      goto LABEL_29;
    case AI_ANIM_USE_BOTH_DELTAS_NOGRAVITY:
      AIScriptedInterface::GetAnimDeltas(this, &outRotation, &v9->Physics.vWishDelta);
      this->m_pAI->Physics.ePhysicsType = AIPHYS_NOGRAVITY_RELATIVE;
      goto LABEL_29;
    case AI_ANIM_USE_BOTH_DELTAS_ZONLY_PHYSICS:
      AIScriptedInterface::GetAnimDeltas(this, &outRotation, &outTranslation);
      this->m_pAI->Physics.ePhysicsType = AIPHYS_ZONLY_PHYSICS_RELATIVE;
LABEL_31:
      v17 = this->m_pAI;
      v17->Physics.vWishDelta.v[0] = outTranslation.v[0];
      v17->Physics.vWishDelta.v[1] = outTranslation.v[1];
      v16 = this->m_pAI;
LABEL_28:
      v16->Physics.vWishDelta.v[2] = 0.0;
LABEL_29:
      QuatToAxis(&outRotation, &axis);
      AxisToAngles(&axis, &angles);
      goto LABEL_46;
    case AI_ANIM_POINT_RELATIVE:
      v9->Physics.ePhysicsType = AIPHYS_ZONLY_PHYSICS_RELATIVE;
      v18 = this->m_pAI;
      if ( !v18->ent->tagInfo )
        G_Animscripted_Think(v18->ent);
      v19 = this->__vftable;
      v20 = this->Is3D(this);
      v19->SetDesiredBodyAngles(this, &this->m_pAI->CodeOrient, &this->m_pAI->ent->r.currentAngles, v20);
      v21 = this->m_pAI;
      *(_QWORD *)v21->Physics.vVelocity.v = 0i64;
      v21->Physics.vVelocity.v[2] = 0.0;
      v22 = this->m_pAI;
      *(_QWORD *)v22->Physics.vWishDelta.v = 0i64;
      v22->Physics.vWishDelta.v[2] = 0.0;
      return;
    case AI_ANIM_PHYSICS_DRIFT:
      if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
        __debugbreak();
      v23 = this->m_pAI;
      v24 = (float)level.frameDuration * 0.00030000001;
      v23->Physics.vWishDelta.v[0] = (float)(1.0 - v24) * v23->Physics.vWishDelta.v[0];
      v23->Physics.vWishDelta.v[1] = (float)(1.0 - v24) * v23->Physics.vWishDelta.v[1];
      v23->Physics.vWishDelta.v[2] = (float)(1.0 - v24) * v23->Physics.vWishDelta.v[2];
      this->m_pAI->Physics.ePhysicsType = AIPHYS_NOGRAVITY_ABSOLUTE;
      outRotation = quat_identity;
      goto LABEL_45;
    case AI_ANIM_EXECUTION:
      this->UpdateExecution(this);
      this->m_pAI->Physics.ePhysicsType = AIPHYS_NOCLIP;
      v25 = this->__vftable;
      v26 = this->Is3D(this);
      v25->SetDesiredBodyAngles(this, &this->m_pAI->CodeOrient, &this->m_pAI->ent->r.currentAngles, v26);
      v27 = this->m_pAI;
      *(_QWORD *)v27->Physics.vVelocity.v = 0i64;
      v27->Physics.vVelocity.v[2] = 0.0;
      v28 = this->m_pAI;
      *(_QWORD *)v28->Physics.vWishDelta.v = 0i64;
      v28->Physics.vWishDelta.v[2] = 0.0;
      return;
    default:
      LODWORD(v53) = v9->eAnimMode;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 6066, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "bad eAnimMode value: %d", v53) )
        __debugbreak();
LABEL_45:
      angles.v[2] = 0.0;
      angles.v[1] = 0.0;
      angles.v[0] = 0.0;
LABEL_46:
      translationDelta = this->m_pAI->Physics.vWishDelta;
      rotationDeltaQuat = outRotation;
      tagInfo = ent->tagInfo;
      if ( !tagInfo || !tagInfo->movementChangesOffset )
      {
        if ( G_MotionWarp_Active(ent->s.number) )
        {
          if ( this->GetCloseEnt(this) )
          {
            if ( !this->m_pAI->sentient->pClaimedNode )
            {
              AICommonInterface::GetPathFinalGoal(this, &start);
              v30 = this->GetCloseEnt(this);
              if ( AICommonInterface::PointNearPoint(this, &v30->r.currentOrigin, &start, 37.5) )
                G_MotionWarp_Cancel(ent->s.number);
            }
          }
        }
        if ( G_MotionWarp_UpdateHook(ent->s.number, &translationDelta, &rotationDeltaQuat) == MOTIONWARP_IN_PROGRESS )
        {
          eMode = this->m_pAI->ScriptOrient.eMode;
          if ( (unsigned int)eMode > 2 && (_DWORD)eMode != 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 6098, ASSERT_TYPE_ASSERT, "(m_pAI->ScriptOrient.eMode == AI_ORIENT_INVALID || m_pAI->ScriptOrient.eMode == AI_ORIENT_DONT_CHANGE || m_pAI->ScriptOrient.eMode == AI_ORIENT_DONT_CHANGE_RELATIVE || m_pAI->ScriptOrient.eMode == AI_ORIENT_CURRENT_ANGLES)", "%s\n\tScript OrientMode must be set to face_angles during motionwarp (%s)", "m_pAI->ScriptOrient.eMode == AI_ORIENT_INVALID || m_pAI->ScriptOrient.eMode == AI_ORIENT_DONT_CHANGE || m_pAI->ScriptOrient.eMode == AI_ORIENT_DONT_CHANGE_RELATIVE || m_pAI->ScriptOrient.eMode == AI_ORIENT_CURRENT_ANGLES", ai_orient_mode_text[eMode]) )
            __debugbreak();
          this->m_pAI->Physics.vWishDelta = translationDelta;
          QuatToAxis(&rotationDeltaQuat, &axis);
          AxisToAngles(&axis, &angles);
        }
      }
      v32 = DVARINT_ai_debugAnimDeltas;
      if ( !DVARINT_ai_debugAnimDeltas && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugAnimDeltas") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v32);
      if ( v32->current.integer == ent->s.number )
        Com_Printf(18, "angleChange = %g %g\n", angles.v[0], angles.v[1]);
      v33 = this->m_pAI;
      if ( v33->Physics.bJumping || v33->Physics.bTrackMoverUp || this->Is3D(this) || (v34 = this->m_pAI->ent->tagInfo) != NULL && v34->movementChangesOffset )
      {
        v36 = angles.v[0];
        if ( angles.v[0] != 0.0 || (v35 = angles.v[1], angles.v[1] != 0.0) || angles.v[2] != 0.0 )
        {
          AnglesToAxis(&this->m_pAI->ScriptOrient.vDesiredAngles, &in2);
          MatrixMultiply(&axis, &in2, &out);
          AxisToAngles(&out, &this->m_pAI->ScriptOrient.vDesiredAngles);
          AnglesToAxis(&this->m_pAI->CodeOrient.vDesiredAngles, &in2);
          MatrixMultiply(&axis, &in2, &out);
          AxisToAngles(&out, &this->m_pAI->CodeOrient.vDesiredAngles);
          goto LABEL_77;
        }
      }
      else
      {
        v35 = angles.v[1];
        v36 = angles.v[0];
      }
      if ( v36 != 0.0 || v35 != 0.0 )
        AIScriptedInterface::ForcePitchAndYawDeltas(this, v36, v35);
LABEL_77:
      AIScriptedInterface::DecideOrientation(this);
      v37 = DVARBOOL_ai_debuglocomotion;
      if ( !DVARBOOL_ai_debuglocomotion && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debuglocomotion") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v37);
      if ( !v37->current.enabled )
        goto LABEL_88;
      p_vWishDelta = &this->m_pAI->Physics.vWishDelta;
      v64 = v1;
      v39 = vectoyaw((const vec2_t *)p_vWishDelta);
      v40 = *(float *)&v39 * 0.0027777778;
      v41 = this->m_pAI;
      v42 = v41->ent;
      *(_QWORD *)end.v = *(_QWORD *)v41->ent->r.currentOrigin.v;
      end.v[2] = v42->r.currentOrigin.v[2] - 10.0;
      DefaultSpeed = AIScriptedInterface::GetDefaultSpeed(this);
      v44 = this->m_pAI;
      v45 = j_va("speed scr:%.0f tgt:%.0f act:%.0f path_max:%.0f avd:%0.f", *(float *)&DefaultSpeed, v44->animData.desiredSpeed, fsqrt((float)((float)(v44->Physics.vVelocity.v[0] * v44->Physics.vVelocity.v[0]) + (float)(v44->Physics.vVelocity.v[1] * v44->Physics.vVelocity.v[1])) + (float)(v44->Physics.vVelocity.v[2] * v44->Physics.vVelocity.v[2])), v44->path_maxSpeed, v44->avoidance_maxSpeed);
      G_Main_AddDebugString(&end, &colorLtGrey, 0.40000001, v45);
      v46 = this->m_pAI;
      end.v[2] = end.v[2] + -8.0;
      _XMM1 = 0i64;
      __asm { vroundss xmm4, xmm1, xmm3, 1 }
      v49 = j_va("angle req:%.0f act:%.0f", v46->animData.strafeBlendYaw, (float)((float)(v40 - *(float *)&_XMM4) * 360.0));
      G_Main_AddDebugString(&end, &colorLtGrey, 0.40000001, v49);
      if ( this->m_pAI->script_desiredSpeedEnabled )
      {
        end.v[2] = end.v[2] + -8.0;
        v50 = j_va("Script speed override");
        v51 = &colorYellow;
      }
      else
      {
        if ( !AIScriptedInterface::IsCombatHot(this) )
          goto LABEL_86;
        end.v[2] = end.v[2] + -8.0;
        v50 = j_va("combat hot!");
        v51 = &colorRedHeat;
      }
      G_Main_AddDebugString(&end, v51, 0.40000001, v50);
LABEL_86:
      if ( this->m_pAI->avoidance_active )
      {
        end.v[2] = end.v[2] + -8.0;
        v52 = j_va("Avoiding");
        G_Main_AddDebugString(&end, &colorCyan, 0.40000001, v52);
      }
LABEL_88:
      AIScriptedInterface::UpdateBodyAngle(this);
      AIScriptedInterface::UpdateLookAngles(this);
      return;
  }
}

/*
==============
AIActorInterface::UpdateCloseEnt
==============
*/
void AIActorInterface::UpdateCloseEnt(AIActorInterface *this)
{
  const gentity_s *v2; 
  const gentity_s *v3; 
  AIScriptedInterface *m_pAI; 
  float v5; 
  float v6; 
  gentity_s *v7; 
  gentity_s *v8; 
  gentity_s *v9; 
  gclient_s *client; 
  gentity_s *ent; 
  float v12; 
  float v13; 
  AIWrapper v14; 
  vec3_t vFinalGoal; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 1519, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  v2 = this->GetCloseEnt(this);
  v3 = v2;
  if ( v2 )
  {
    AIWrapper::AIWrapper(&v14, v2);
    m_pAI = v14.m_pAI;
    AICommonInterface::GetPathFinalGoal(this, &vFinalGoal);
    v5 = v3->r.currentOrigin.v[0];
    v6 = v3->r.currentOrigin.v[1];
    if ( (float)((float)((float)(v6 - vFinalGoal.v[1]) * (float)(v6 - vFinalGoal.v[1])) + (float)((float)(v5 - vFinalGoal.v[0]) * (float)(v5 - vFinalGoal.v[0]))) >= 1406.25 )
    {
      if ( (float)((float)((float)(v6 - this->m_pAI->ent->r.currentOrigin.v[1]) * (float)(v6 - this->m_pAI->ent->r.currentOrigin.v[1])) + (float)((float)(v5 - this->m_pAI->ent->r.currentOrigin.v[0]) * (float)(v5 - this->m_pAI->ent->r.currentOrigin.v[0]))) >= 1406.25 )
      {
        if ( m_pAI )
        {
          if ( m_pAI->GetCloseEnt(m_pAI) )
          {
            v7 = m_pAI->GetCloseEnt(m_pAI);
            if ( v7 == this->GetEntity(this) )
              m_pAI->ClearCloseEnt(m_pAI);
          }
        }
        goto LABEL_13;
      }
      if ( m_pAI )
      {
        v8 = m_pAI->GetPileUpEnt(m_pAI);
        if ( v8 == this->GetEntity(this) )
LABEL_13:
          this->ClearCloseEnt(this);
      }
    }
  }
  v9 = this->GetCloseEnt(this);
  if ( v9 )
  {
    if ( level.maxclients == 1 )
    {
      client = level.gentities->client;
      if ( client )
      {
        if ( client->sess.connected == CON_CONNECTED && v9 != level.gentities )
          AIScriptedInterface::UpdatePlayerPush(this, level.gentities);
      }
    }
    if ( !this->GetCloseEnt(this) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 1562, ASSERT_TYPE_ASSERT, "( GetCloseEnt() )", (const char *)&queryFormat, "GetCloseEnt()") )
      __debugbreak();
    ent = this->m_pAI->ent;
    v12 = ent->r.currentOrigin.v[0] - v9->r.currentOrigin.v[0];
    v13 = ent->r.currentOrigin.v[1] - v9->r.currentOrigin.v[1];
    if ( !this->GetPileUpActor(this) && AIScriptedInterface::GetAnimMode(this) == AI_ANIM_MOVE_CODE && AICommonInterface::HasPath(this) )
    {
      AIScriptedInterface::GetPathLookaheadDir(this, &vFinalGoal);
      if ( (float)((float)(v13 * vFinalGoal.v[1]) + (float)(v12 * vFinalGoal.v[0])) > 0.0 )
        this->ClearCloseEnt(this);
    }
  }
}

/*
==============
AIScriptedInterface::UpdateContinuousFire
==============
*/
void AIScriptedInterface::UpdateContinuousFire(AIScriptedInterface *this)
{
  gentity_s *v2; 
  gentity_s *v3; 
  const sentient_s *sentient; 
  vec3_t vEyePosOut; 

  v2 = this->GetEntity(this);
  if ( this->m_pAI->bContinuousFire )
  {
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(&v2->s.lerp.eFlags, ACTIVE, 0xAu);
    if ( EntHandle::isDefined(&this->m_pAI->pBeamTargetEnt) )
    {
      v3 = EntHandle::ent(&this->m_pAI->pBeamTargetEnt);
      sentient = v3->sentient;
      if ( sentient )
        Sentient_GetEyePosition(sentient, &vEyePosOut);
      else
        vEyePosOut = v3->r.currentOrigin;
      AIScriptedInterface::Shoot(this, 1.0, &vEyePosOut, NULL, 1, NOT_LAST_SHOT_IN_CLIP, 1, 0);
    }
    else
    {
      AIScriptedInterface::Shoot(this, 10.0, NULL, NULL, 1, NOT_LAST_SHOT_IN_CLIP, 1, 0);
    }
  }
  else if ( !AIScriptedInterface::AlreadyAttackedThisFrame(this) )
  {
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&this->m_pAI->ent->s.lerp.eFlags, ACTIVE, 0xAu);
  }
}

/*
==============
AIActorInterface::UpdateDelayedDeath
==============
*/
void AIActorInterface::UpdateDelayedDeath(AIActorInterface *this)
{
  gentity_s *v2; 
  int health; 
  GExtraDamageParams extraParams; 

  v2 = this->GetEntity(this);
  if ( this->m_pAI->painDeath.delayedDeath && !AIScriptedInterface::InNonDamageableScriptedState(this) )
  {
    health = v2->health;
    extraParams = 0;
    G_CombatSP_Damage(v2, NULL, NULL, NULL, &v2->r.currentOrigin, health + 1, 0, 0, &NULL_WEAPON, 0, HITLOC_HEAD, 0, (scr_string_t)0, 0, NULL, &extraParams);
  }
}

/*
==============
AIScriptedInterface::UpdateGoalPos
==============
*/
void AIScriptedInterface::UpdateGoalPos(AIScriptedInterface *this)
{
  ai_scripted_t *m_pAI; 
  pathnode_t *node; 
  bool IsBTGoalValid; 
  ai_script_goal_t *BTGoal; 
  pathnode_t *v6; 
  sentient_s *TargetSentient; 
  double v8; 
  ai_scripted_t *v9; 
  int dangerReactGoalTime; 
  ai_scripted_t *v11; 
  gentity_s *ent; 
  double Float_Internal_DebugName; 
  ai_script_goal_t *p_scriptGoal; 
  aiGoalSources v15; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 7485, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 7486, ASSERT_TYPE_ASSERT, "( m_pAI->sentientInfo )", (const char *)&queryFormat, "m_pAI->sentientInfo") )
    __debugbreak();
  m_pAI = this->m_pAI;
  node = m_pAI->scriptGoal.node;
  if ( node )
    pathnode_t::GetPos(node, &m_pAI->scriptGoal.pos);
  IsBTGoalValid = AIScriptedInterface::IsBTGoalValid(this);
  if ( IsBTGoalValid )
  {
    BTGoal = AIScriptedInterface::GetBTGoal(this);
    if ( !BTGoal && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 7500, ASSERT_TYPE_ASSERT, "(pBTGoal)", (const char *)&queryFormat, "pBTGoal") )
      __debugbreak();
    v6 = BTGoal->node;
    if ( v6 )
      pathnode_t::GetPos(v6, &BTGoal->pos);
  }
  if ( !this->UseEnemyGoal(this) || IsBTGoalValid )
  {
    v9 = this->m_pAI;
    if ( v9->nodeSelect.doDangerReact && (dangerReactGoalTime = v9->nodeSelect.dangerReactGoalTime, level.time >= dangerReactGoalTime) && level.time <= v9->nodeSelect.dangerReactDuration + dangerReactGoalTime )
    {
      v9->codeGoalSrc = AI_GOAL_SRC_DANGER_REACT;
      this->m_pAI->codeGoal.node = NULL;
      EntHandle::setEnt(&this->m_pAI->codeGoal.hVolume, NULL);
      v11 = this->m_pAI;
      ent = v11->ent;
      v11->codeGoal.pos.v[0] = v11->ent->r.currentOrigin.v[0];
      v11->codeGoal.pos.v[1] = ent->r.currentOrigin.v[1];
      v11->codeGoal.pos.v[2] = ent->r.currentOrigin.v[2];
      Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DVARFLT_ai_dangerReactGoalRadius, "ai_dangerReactGoalRadius");
      AICommonInterface::SetGoalRadius(&this->m_pAI->codeGoal, *(float *)&Float_Internal_DebugName);
    }
    else
    {
      if ( IsBTGoalValid )
      {
        p_scriptGoal = AIScriptedInterface::GetBTGoal(this);
        v15 = AI_GOAL_SRC_BT;
      }
      else
      {
        if ( !v9->scriptGoal.bValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 7541, ASSERT_TYPE_ASSERT, "( m_pAI->scriptGoal.bValid )", (const char *)&queryFormat, "m_pAI->scriptGoal.bValid") )
          __debugbreak();
        p_scriptGoal = &this->m_pAI->scriptGoal;
        v15 = AI_GOAL_SRC_SCRIPT_GOAL;
      }
      AIScriptedInterface::SetCodeGoalFromScriptGoal(this, p_scriptGoal, v15);
    }
  }
  else
  {
    TargetSentient = AICommonInterface::GetTargetSentient(this);
    if ( !TargetSentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 7511, ASSERT_TYPE_ASSERT, "( enemy )", (const char *)&queryFormat, "enemy") )
      __debugbreak();
    SentientInfo_GetLastKnownPos(&this->m_pAI->sentientInfo[TargetSentient - level.sentients], &this->m_pAI->codeGoal.pos);
    this->m_pAI->codeGoalSrc = AI_GOAL_SRC_ENEMY;
    this->m_pAI->codeGoal.node = NULL;
    EntHandle::setEnt(&this->m_pAI->codeGoal.hVolume, NULL);
    v8 = ((double (__fastcall *)(AIScriptedInterface *))this->GetPathEnemyFightDist)(this);
    AICommonInterface::SetGoalRadius(&this->m_pAI->codeGoal, *(float *)&v8);
  }
}

/*
==============
AIScriptedInterface::UpdateMaxSpeedForPathLength
==============
*/
void AIScriptedInterface::UpdateMaxSpeedForPathLength(AIScriptedInterface *this, bool bHadPath)
{
  bool HasPath; 
  ai_scripted_t *m_pAI; 
  float v5; 
  double MaxSpeedForPathLength; 

  HasPath = AICommonInterface::HasPath(this);
  m_pAI = this->m_pAI;
  if ( HasPath )
  {
    v5 = m_pAI->pNavigator->GetPathDistToGoal(m_pAI->pNavigator);
    MaxSpeedForPathLength = GetMaxSpeedForPathLength(v5);
    this->m_pAI->path_maxSpeed = *(float *)&MaxSpeedForPathLength;
  }
  else
  {
    m_pAI->path_maxSpeed = -1.0;
  }
}

/*
==============
AIActorInterface::UpdateMoveAnimPlayback
==============
*/
void AIActorInterface::UpdateMoveAnimPlayback(AIActorInterface *this, const vec3_t *translation)
{
  actor_s *m_pAI; 
  float v4; 
  float v5; 
  double v6; 
  XAnimTree *v7; 

  m_pAI = this->m_pAI;
  if ( m_pAI->moveAnimKnob && !m_pAI->speedScaleMode[0] )
  {
    v4 = fsqrt((float)((float)(translation->v[0] * translation->v[0]) + (float)(translation->v[1] * translation->v[1])) + (float)(translation->v[2] * translation->v[2]));
    if ( v4 >= 0.001 )
      v5 = fsqrt((float)((float)(m_pAI->Physics.vWishDelta.v[0] * m_pAI->Physics.vWishDelta.v[0]) + (float)(m_pAI->Physics.vWishDelta.v[1] * m_pAI->Physics.vWishDelta.v[1])) + (float)(m_pAI->Physics.vWishDelta.v[2] * m_pAI->Physics.vWishDelta.v[2])) * (float)(m_pAI->movePlaybackRate / v4);
    else
      v5 = FLOAT_1_0;
    v6 = I_fclamp(v5, 0.5, 2.0);
    v7 = this->GetAnimTree(this);
    XAnimSetAnimRate(v7, 0, XANIM_SUBTREE_DEFAULT, this->m_pAI->moveAnimKnob, *(float *)&v6);
  }
}

/*
==============
AIActorInterface::UpdateMoveAnimTranslation
==============
*/
void AIActorInterface::UpdateMoveAnimTranslation(AIActorInterface *this, vec3_t *translation)
{
  actor_s *m_pAI; 
  const XAnimTree *v5; 
  double Rate; 
  float movePlaybackRate; 

  m_pAI = this->m_pAI;
  if ( !m_pAI->speedScaleMode[0] && m_pAI->moveAnimKnob )
  {
    v5 = this->GetAnimTree(this);
    Rate = XAnimGetRate(v5, 0, XANIM_SUBTREE_DEFAULT, this->m_pAI->moveAnimKnob);
    if ( *(float *)&Rate > 0.001 )
    {
      movePlaybackRate = this->m_pAI->movePlaybackRate;
      translation->v[0] = (float)(movePlaybackRate / *(float *)&Rate) * translation->v[0];
      translation->v[1] = (float)(movePlaybackRate / *(float *)&Rate) * translation->v[1];
      translation->v[2] = (float)(movePlaybackRate / *(float *)&Rate) * translation->v[2];
    }
  }
}

/*
==============
AIScriptedInterface::UpdateMoveHistory
==============
*/
void AIScriptedInterface::UpdateMoveHistory(AIScriptedInterface *this)
{
  ai_scripted_t *m_pAI; 
  __int64 moveHistoryIndex; 
  __int64 v4; 
  int v5; 
  float *v6; 
  int v7; 
  float v8; 
  float v9; 
  ai_scripted_t *v10; 
  float v11; 
  __int64 v12; 
  __int64 v13; 
  float v14; 
  float v15; 
  float v16; 
  int v17; 
  __int64 v18; 
  __int128 v19; 
  __int64 p_y; 
  unsigned __int64 v21; 
  float v22; 
  __int128 v23; 
  float v24; 
  float v25; 
  float v26; 
  __int64 v27; 
  __int64 v28; 
  float v29; 
  __int128 v30; 
  __int64 v31; 
  float *v32; 
  unsigned __int64 v33; 
  float v34; 
  __int128 v35; 
  float v36; 
  float v37; 
  float v38; 
  __int64 v39; 
  __int64 v40; 
  float v41; 
  __int128 v42; 
  __int64 v43; 

  m_pAI = this->m_pAI;
  moveHistoryIndex = m_pAI->moveHistoryIndex;
  v4 = 3 * moveHistoryIndex + 621;
  v5 = 10;
  v6 = (float *)((char *)m_pAI + 4 * v4);
  if ( (_DWORD)moveHistoryIndex )
    v5 = m_pAI->moveHistoryIndex;
  v7 = 10;
  if ( v5 != 1 )
    v7 = v5 - 1;
  if ( v6 == (float *)&v43 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1667, ASSERT_TYPE_ASSERT, "( &v0 != &cross )", (const char *)&queryFormat, "&v0 != &cross") )
    __debugbreak();
  v8 = v6[1];
  LODWORD(v9) = *(_DWORD *)v6 ^ _xmm;
  this->m_pAI->moveHistoryConsistent = 0;
  v10 = this->m_pAI;
  v11 = *((float *)&v10->ent + v4);
  v12 = 3i64 * v7 + 618;
  if ( (float)((float)((float)(v8 * *((float *)&v10->ent + v12)) + (float)(v9 * *((float *)&v10->ent + v12 + 1))) * (float)((float)(v8 * v11) + (float)(v9 * *((float *)&v10->ent + v4 + 1)))) <= 0.0 )
  {
    v13 = 3i64 * v5 + 618;
    v14 = *((float *)&v10->ent + v13 + 1);
    v15 = *((float *)&v10->ent + v13);
    v16 = *((float *)&v10->sentient + v13);
    if ( (float)((float)((float)(v15 * v11) + (float)(v14 * *((float *)&v10->ent + v4 + 1))) + (float)(v16 * *((float *)&v10->sentient + v4))) >= 0.0 && (float)((float)((float)(v15 * *((float *)&v10->ent + v12)) + (float)(v14 * *((float *)&v10->ent + v12 + 1))) + (float)(v16 * *((float *)&v10->sentient + v12))) >= 0.0 )
    {
      *((float *)&v10->ent + v12) = v11;
      *((_DWORD *)&v10->ent + v12 + 1) = *((_DWORD *)&v10->ent + v4 + 1);
      *((_DWORD *)&v10->sentient + v12) = *((_DWORD *)&v10->sentient + v4);
    }
  }
  v17 = moveHistoryIndex + 1;
  v18 = (int)moveHistoryIndex + 1;
  v19 = LODWORD(FLOAT_1_0);
  if ( v18 < 10 )
  {
    if ( 10i64 - v17 >= 4 )
    {
      p_y = (__int64)&v10->moveHistory[v17].y;
      v21 = ((unsigned __int64)(6i64 - v17) >> 2) + 1;
      v18 = v17 + 4 * v21;
      do
      {
        p_y += 48i64;
        v23 = v19;
        v22 = *(float *)&v19 + 1.0;
        v24 = *(float *)&v19 / (float)(*(float *)&v19 + 1.0);
        *(float *)(p_y - 52) = v24 * *(float *)(p_y - 52);
        *(float *)(p_y - 48) = v24 * *(float *)(p_y - 48);
        *(float *)(p_y - 44) = v24 * *(float *)(p_y - 44);
        v25 = (float)(*(float *)&v19 + 1.0) + 1.0;
        *(float *)(p_y - 40) = (float)(v22 / v25) * *(float *)(p_y - 40);
        *(float *)(p_y - 36) = (float)(v22 / v25) * *(float *)(p_y - 36);
        *(float *)(p_y - 32) = (float)(v22 / v25) * *(float *)(p_y - 32);
        v26 = v25 + 1.0;
        *(float *)(p_y - 28) = (float)(v25 / (float)(v25 + 1.0)) * *(float *)(p_y - 28);
        *(float *)(p_y - 24) = (float)(v25 / (float)(v25 + 1.0)) * *(float *)(p_y - 24);
        *(float *)(p_y - 20) = (float)(v25 / (float)(v25 + 1.0)) * *(float *)(p_y - 20);
        *(float *)&v23 = (float)(v25 + 1.0) + 1.0;
        v19 = v23;
        *(float *)(p_y - 16) = (float)(v26 / *(float *)&v23) * *(float *)(p_y - 16);
        *(float *)(p_y - 12) = (float)(v26 / *(float *)&v23) * *(float *)(p_y - 12);
        *(float *)(p_y - 8) = (float)(v26 / *(float *)&v23) * *(float *)(p_y - 8);
        --v21;
      }
      while ( v21 );
    }
    if ( v18 < 10 )
    {
      v27 = 10 - v18;
      v28 = (__int64)&v10->moveHistory[v18].y;
      do
      {
        v28 += 12i64;
        v29 = *(float *)&v19;
        v30 = v19;
        *(float *)&v30 = *(float *)&v19 + 1.0;
        v19 = v30;
        *(float *)(v28 - 16) = (float)(v29 / *(float *)&v30) * *(float *)(v28 - 16);
        *(float *)(v28 - 12) = (float)(v29 / *(float *)&v30) * *(float *)(v28 - 12);
        *(float *)(v28 - 8) = (float)(v29 / *(float *)&v30) * *(float *)(v28 - 8);
        --v27;
      }
      while ( v27 );
    }
  }
  v31 = 0i64;
  if ( moveHistoryIndex >= 4 )
  {
    v32 = &v10->moveHistory[0].v[1];
    v33 = ((unsigned __int64)(moveHistoryIndex - 4) >> 2) + 1;
    v31 = 4 * v33;
    do
    {
      v32 += 12;
      v35 = v19;
      v34 = *(float *)&v19 + 1.0;
      v36 = *(float *)&v19 / (float)(*(float *)&v19 + 1.0);
      *(v32 - 13) = v36 * *(v32 - 13);
      *(v32 - 12) = v36 * *(v32 - 12);
      *(v32 - 11) = v36 * *(v32 - 11);
      v37 = (float)(*(float *)&v19 + 1.0) + 1.0;
      *(v32 - 10) = (float)(v34 / v37) * *(v32 - 10);
      *(v32 - 9) = (float)(v34 / v37) * *(v32 - 9);
      *(v32 - 8) = (float)(v34 / v37) * *(v32 - 8);
      v38 = v37 + 1.0;
      *(v32 - 7) = (float)(v37 / (float)(v37 + 1.0)) * *(v32 - 7);
      *(v32 - 6) = (float)(v37 / (float)(v37 + 1.0)) * *(v32 - 6);
      *(v32 - 5) = (float)(v37 / (float)(v37 + 1.0)) * *(v32 - 5);
      *(float *)&v35 = (float)(v37 + 1.0) + 1.0;
      v19 = v35;
      *(v32 - 4) = (float)(v38 / *(float *)&v35) * *(v32 - 4);
      *(v32 - 3) = (float)(v38 / *(float *)&v35) * *(v32 - 3);
      *(v32 - 2) = (float)(v38 / *(float *)&v35) * *(v32 - 2);
      --v33;
    }
    while ( v33 );
  }
  if ( v31 < moveHistoryIndex )
  {
    v39 = moveHistoryIndex - v31;
    v40 = (__int64)&v10->moveHistory[v31].y;
    do
    {
      v40 += 12i64;
      v41 = *(float *)&v19;
      v42 = v19;
      *(float *)&v42 = *(float *)&v19 + 1.0;
      v19 = v42;
      *(float *)(v40 - 16) = (float)(v41 / *(float *)&v42) * *(float *)(v40 - 16);
      *(float *)(v40 - 12) = (float)(v41 / *(float *)&v42) * *(float *)(v40 - 12);
      *(float *)(v40 - 8) = (float)(v41 / *(float *)&v42) * *(float *)(v40 - 8);
      --v39;
    }
    while ( v39 );
  }
  v10->moveHistoryIndex = v17 % 10;
}

/*
==============
AIScriptedInterface::UpdateMovementDelta
==============
*/
void AIScriptedInterface::UpdateMovementDelta(AIScriptedInterface *this, float fMoveDist)
{
  bool HasPath; 
  int blendWithOldVelocity; 
  ai_scripted_t *m_pAI; 
  float v6; 
  __int128 v7; 
  float v8; 
  __int128 v9; 
  float v13; 
  float v14; 
  float v15; 
  __int64 v16; 
  ai_scripted_t *v17; 
  nav_posAlongPathResults_t pathResults; 

  bfx::AreaHandle::AreaHandle(&pathResults.m_hArea);
  bfx::LinkHandle::LinkHandle(&pathResults.m_hLink);
  HasPath = Nav_HasPath(this->m_pAI->pNavigator);
  blendWithOldVelocity = this->m_pAI->Physics.bSpace && AICommonInterface::Use3DPathing(this);
  AIScriptedInterface::GetDesiredMoveDelta(this, fMoveDist, this->m_pAI->Physics.groundEntNum, &this->m_pAI->Physics.vWishDelta, &this->m_pAI->Physics.vWishDelta, &pathResults, &this->m_pAI->Physics.vVelocity, blendWithOldVelocity);
  if ( pathResults.m_PosType == POS_ON_LINK )
  {
    if ( !bfx::LinkHandle::IsValid(&pathResults.m_hLink) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 7306, ASSERT_TYPE_ASSERT, "( pathResults.m_hLink.IsValid() )", (const char *)&queryFormat, "pathResults.m_hLink.IsValid()") )
      __debugbreak();
    bfx::LinkHandle::operator=(&this->m_pAI->pNavigator->m_hLink, &pathResults.m_hLink);
  }
  else
  {
    bfx::LinkHandle::Release(&this->m_pAI->pNavigator->m_hLink);
  }
  AIScriptedInterface::UpdateSharpTurn(this, &this->m_pAI->Physics.vWishDelta);
  AIScriptedInterface::UpdateLeanAngles(this);
  m_pAI = this->m_pAI;
  v6 = m_pAI->Physics.vWishDelta.v[1];
  v7 = LODWORD(m_pAI->Physics.vWishDelta.v[0]);
  v8 = m_pAI->Physics.vWishDelta.v[2];
  v9 = v7;
  *(float *)&v9 = fsqrt((float)((float)(*(float *)&v7 * *(float *)&v7) + (float)(v6 * v6)) + (float)(v8 * v8));
  _XMM3 = v9;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm1, xmm3, xmm2, xmm0
  }
  v13 = *(float *)&v7 * (float)(1.0 / *(float *)&_XMM1);
  v14 = v6 * (float)(1.0 / *(float *)&_XMM1);
  v15 = v8 * (float)(1.0 / *(float *)&_XMM1);
  if ( HasPath )
  {
    v16 = 3i64 * m_pAI->moveHistoryIndex + 621;
    *((float *)&m_pAI->ent + v16) = v13;
    *((float *)&m_pAI->ent + v16 + 1) = v14;
    *((float *)&m_pAI->sentient + v16) = v15;
    AIScriptedInterface::UpdateMoveHistory(this);
  }
  else
  {
    memset_0(m_pAI->moveHistory, 0, sizeof(m_pAI->moveHistory));
    v17 = this->m_pAI;
    v17->moveHistory[0].v[0] = v13;
    v17->moveHistory[0].v[1] = v14;
    v17->moveHistory[0].v[2] = v15;
    this->m_pAI->moveHistoryIndex = 1;
  }
  bfx::LinkHandle::~LinkHandle(&pathResults.m_hLink);
  bfx::AreaHandle::~AreaHandle(&pathResults.m_hArea);
}

/*
==============
AIScriptedInterface::UpdateOriginAndAngles
==============
*/
void AIScriptedInterface::UpdateOriginAndAngles(AIScriptedInterface *this)
{
  __int128 v1; 
  gentity_s *ent; 
  EntityTagInfo *tagInfo; 
  BOOL blendOnlyYaw; 
  ai_scripted_t *m_pAI; 
  float v7; 
  float v8; 
  ai_scripted_t *v9; 
  ai_scripted_t *v10; 
  ai_scripted_t *v11; 
  ai_scripted_t *v12; 
  ai_scripted_t *v13; 
  ai_scripted_t *v14; 
  vec3_t outTargetOrigin; 
  vec4_t out; 
  __int128 v17; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 6345, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  ent = this->m_pAI->ent;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 6347, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( this->m_pAI->eAnimMode != AI_ANIM_NOPHYSICS )
  {
    tagInfo = ent->tagInfo;
    if ( tagInfo )
    {
      if ( tagInfo->blendToParent )
      {
        v17 = v1;
        Axis43ToQuat(&tagInfo->axis, &out);
        out = (vec4_t)_mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps((__m128)_xmm, (__m128)out), (__m128)_xmm), (__m128)out);
        QuatToAxis(&out, (tmat33_t<vec3_t> *)&tagInfo->axis);
        tagInfo->axis.m[3].v[0] = (float)((float)(0.0 - tagInfo->axis.m[3].v[0]) * 0.25) + tagInfo->axis.m[3].v[0];
        tagInfo->axis.m[3].v[1] = (float)((float)(0.0 - tagInfo->axis.m[3].v[1]) * 0.25) + tagInfo->axis.m[3].v[1];
        tagInfo->axis.m[3].v[2] = (float)((float)(0.0 - tagInfo->axis.m[3].v[2]) * 0.25) + tagInfo->axis.m[3].v[2];
        blendOnlyYaw = tagInfo->blendOnlyYaw;
      }
      else if ( tagInfo->movementChangesOffset )
      {
        AIScriptedInterface::CalcTagAxisMoveOffset(this, tagInfo);
        blendOnlyYaw = 0;
      }
      else
      {
        blendOnlyYaw = Com_GameMode_SupportsFeature(WEAPON_MELEE_END);
      }
      if ( !G_SetFixedLinkNonPlayer(ent, blendOnlyYaw, 33685521, &outTargetOrigin, 1) && tagInfo->collisionPhysics )
      {
        if ( !Com_GameMode_SupportsFeature(WEAPON_EXECUTION) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 6376, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_LINKED_COLLISION ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_LINKED_COLLISION )") )
          __debugbreak();
        if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 6254, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
          __debugbreak();
        if ( !this->m_pAI->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 6255, ASSERT_TYPE_ASSERT, "( m_pAI->ent )", (const char *)&queryFormat, "m_pAI->ent") )
          __debugbreak();
        m_pAI = this->m_pAI;
        v7 = outTargetOrigin.v[0] - m_pAI->ent->r.currentOrigin.v[0];
        v8 = outTargetOrigin.v[1] - m_pAI->ent->r.currentOrigin.v[1];
        m_pAI->Physics.ePhysicsType = AIPHYS_ZONLY_PHYSICS_ABSOLUTE;
        v9 = this->m_pAI;
        v9->Physics.vWishDelta.v[0] = v7;
        v9->Physics.vWishDelta.v[1] = v8;
        this->m_pAI->Physics.vWishDelta.v[2] = 0.0;
        this->DoMove(this);
      }
      this->ClearPath(this);
      if ( !tagInfo->movementChangesOffset )
      {
        if ( !tagInfo->blendToParent )
          AIScriptedInterface::UpdateAnglesAndDelta(this);
        v10 = this->m_pAI;
        *(_QWORD *)v10->Physics.vVelocity.v = 0i64;
        v10->Physics.vVelocity.v[2] = 0.0;
        v11 = this->m_pAI;
        *(_QWORD *)v11->Physics.vWishDelta.v = 0i64;
        v11->Physics.vWishDelta.v[2] = 0.0;
      }
      v12 = this->m_pAI;
      v12->Physics.vOrigin.v[0] = ent->r.currentOrigin.v[0];
      v12->Physics.vOrigin.v[1] = ent->r.currentOrigin.v[1];
      v12->Physics.vOrigin.v[2] = ent->r.currentOrigin.v[2];
      AIScriptedInterface::GetGroundTraceOrigin(this, &this->m_pAI->Physics.groundTraceOrigin);
      AIScriptedInterface::Physics_GroundTraceOnly(this);
      ent->s.groundEntityNum = this->m_pAI->Physics.groundEntNum;
      if ( !tagInfo->blendToParent && !tagInfo->movementChangesOffset )
        G_CalcTagAxis(ent, 1);
      Nav_Teleport(this->m_pAI->pNavigator, &ent->r.currentOrigin);
    }
    else
    {
      AIScriptedInterface::UpdateAnglesAndDelta(this);
      AIScriptedInterface::Physics_SimulateChildren(this);
      this->DoMove(this);
      v13 = this->m_pAI;
      v14 = v13;
      if ( level.time > v13->iTeamMoveWaitTime && level.gentities[v13->Physics.iHitEntnum].sentient && !v13->noDodgeMove )
      {
        AIScriptedInterface::Debug_NotMoving(this, "hit someone - cant dodge");
        AIScriptedInterface::TeamMoveBlocked(this);
        v14 = this->m_pAI;
      }
      this->TouchEnts(this, v14->Physics.iNumTouch, v14->Physics.iTouchEnts);
    }
  }
}

/*
==============
AIActorInterface::UpdatePileUp
==============
*/
void AIActorInterface::UpdatePileUp(AIActorInterface *this)
{
  actor_s *m_pAI; 
  int time; 
  int iTeamMoveWaitTime; 
  int FrameDuration; 
  actor_s *v6; 

  m_pAI = this->m_pAI;
  if ( m_pAI->eAnimMode == AI_ANIM_MOVE_CODE )
  {
    if ( m_pAI->pPileUpActor == m_pAI )
      return;
    while ( 1 )
    {
      m_pAI = m_pAI->pPileUpActor;
      if ( !m_pAI )
        break;
      if ( m_pAI->pPileUpActor == m_pAI )
      {
        if ( !m_pAI->pPileUpEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 6560, ASSERT_TYPE_ASSERT, "( other->pPileUpEnt )", (const char *)&queryFormat, "other->pPileUpEnt") )
          __debugbreak();
        if ( m_pAI == this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 6561, ASSERT_TYPE_ASSERT, "( other != m_pAI )", (const char *)&queryFormat, "other != m_pAI") )
          __debugbreak();
        time = level.time;
        iTeamMoveWaitTime = m_pAI->iTeamMoveWaitTime;
        if ( level.time >= m_pAI->ent->nextthink )
        {
          FrameDuration = G_Level_GetFrameDuration();
          time = level.time;
          iTeamMoveWaitTime += FrameDuration;
        }
        if ( time >= iTeamMoveWaitTime || (v6 = this->m_pAI, v6->ent == m_pAI->pPileUpEnt) )
        {
          this->ClearPileUp(this);
        }
        else
        {
          v6->pPileUpActor = m_pAI;
          this->m_pAI->pPileUpEnt = m_pAI->pPileUpEnt;
        }
        return;
      }
    }
  }
  this->ClearPileUp(this);
}

/*
==============
AIScriptedInterface::UpdatePlayerPush
==============
*/
void AIScriptedInterface::UpdatePlayerPush(AIScriptedInterface *this, gentity_s *player)
{
  __int128 v2; 
  __int128 v3; 
  __int128 v4; 
  __int128 v5; 
  __int128 v6; 
  __int128 v7; 
  ai_scripted_t *m_pAI; 
  sentient_s *sentient; 
  sentient_s *v12; 
  bool v13; 
  const bitarray<224> *AllCombatTeamFlags; 
  __int128 v15; 
  double v16; 
  unsigned int v17; 
  gclient_s *client; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  EffectiveStance EffectiveStance; 
  const Bounds *v26; 
  ai_scripted_t *v27; 
  unsigned int Instance; 
  Bounds bounds; 
  bitarray<224> result; 
  vec3_t vFinalGoal; 
  __int128 v32; 
  __int128 v33; 
  __int128 v34; 
  __int128 v35; 
  __int128 v36; 
  __int128 v37; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 1471, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 1472, ASSERT_TYPE_ASSERT, "( m_pAI->ent )", (const char *)&queryFormat, "m_pAI->ent") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 1473, ASSERT_TYPE_ASSERT, "( m_pAI->sentient )", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  if ( !player && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 1475, ASSERT_TYPE_ASSERT, "( player )", (const char *)&queryFormat, rowName) )
    __debugbreak();
  if ( !player->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 1476, ASSERT_TYPE_ASSERT, "( player->client )", (const char *)&queryFormat, "player->client") )
    __debugbreak();
  if ( !player->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 1477, ASSERT_TYPE_ASSERT, "( player->sentient )", (const char *)&queryFormat, "player->sentient") )
    __debugbreak();
  m_pAI = this->m_pAI;
  if ( !m_pAI->bDontAvoidPlayer && (m_pAI->Physics.iTraceMask & 0x2000000) != 0 && m_pAI->eState[m_pAI->stateLevel] != AIS_TURRET )
  {
    sentient = m_pAI->sentient;
    v12 = player->sentient;
    if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.h", 258, ASSERT_TYPE_ASSERT, "(self)", (const char *)&queryFormat, "self") )
      __debugbreak();
    if ( !sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.h", 259, ASSERT_TYPE_ASSERT, "(other)", (const char *)&queryFormat, "other") )
      __debugbreak();
    if ( level.teammode == TEAMMODE_FFA )
    {
      v13 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80);
      if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
        AllCombatTeamFlags = Com_TeamsSP_GetAllCombatTeamFlags();
      else
        AllCombatTeamFlags = Com_TeamsMP_GetAllTeamFlags();
      v15 = *(_OWORD *)AllCombatTeamFlags->array;
      v16 = *(double *)&AllCombatTeamFlags->array[4];
      v17 = AllCombatTeamFlags->array[6] & 0xFFEFFFFF;
      *(_OWORD *)result.array = v15;
      *(double *)&result.array[4] = v16;
      if ( v13 )
        result.array[0] &= ~0x8000000u;
      result.array[6] = v17 & 0xFF9FFFFF;
    }
    else
    {
      Com_Teams_GetEnemyTeamFlags(&result, sentient->eTeam);
    }
    if ( !bitarray_base<bitarray<224>>::testBit(&result, v12->eTeam) )
    {
      client = player->client;
      v37 = v2;
      v36 = v3;
      v19 = player->r.currentOrigin.v[0];
      v20 = client->ps.velocity.v[0];
      v35 = v4;
      v21 = client->ps.velocity.v[1];
      v34 = v5;
      v22 = player->r.currentOrigin.v[1];
      v33 = v6;
      v23 = client->ps.velocity.v[2];
      v32 = v7;
      v24 = player->r.currentOrigin.v[2];
      EffectiveStance = PM_GetEffectiveStance(&client->ps);
      v26 = BG_Suit_GetBounds(client->ps.suitIndex, EffectiveStance);
      v27 = this->m_pAI;
      bounds.midPoint.v[0] = (float)((float)(0.1 * v20) + v19) + v26->midPoint.v[0];
      bounds.midPoint.v[1] = (float)((float)(0.1 * v21) + v22) + v26->midPoint.v[1];
      bounds.midPoint.v[2] = (float)((float)(0.1 * v23) + v24) + v26->midPoint.v[2];
      bounds.halfSize = v26->halfSize;
      Instance = G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_FIRST, v27->ent);
      if ( PhysicsQuery_LegacyEntityContactCapsule(PHYSICS_WORLD_ID_FIRST, &bounds, Instance, this->m_pAI->ent) )
      {
        if ( AIScriptedInterface::AtClaimNode(this) )
        {
          if ( player->client->playerMoved )
            return;
          Sentient_StealClaimNode(player->sentient, this->m_pAI->sentient);
        }
        if ( AICommonInterface::HasPath(this) )
        {
          AICommonInterface::GetPathFinalGoal(this, &vFinalGoal);
          if ( AICommonInterface::PointAt(this, &this->m_pAI->ent->r.currentOrigin, &vFinalGoal) )
            this->ClearPath(this);
        }
      }
    }
  }
}

/*
==============
AIActorInterface::UpdateProneInformation
==============
*/
void AIActorInterface::UpdateProneInformation(AIActorInterface *this, int bDoProneCheck)
{
  actor_s *m_pAI; 
  actor_s *v5; 
  FeetDirection feetDirection; 
  GHandler *handler; 
  actor_s *v12; 
  double v13; 
  actor_s *v14; 
  float v17; 
  __int128 fWaistPitch_low; 
  float v22; 
  const DObj *ServerDObjForEnt; 

  m_pAI = this->m_pAI;
  if ( (!m_pAI->prone.animProneLow || !m_pAI->prone.animProneLevel || !m_pAI->prone.animProneHigh) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 3777, ASSERT_TYPE_ASSERT, "( m_pAI->prone.animProneLow && m_pAI->prone.animProneLevel && m_pAI->prone.animProneHigh )", (const char *)&queryFormat, "m_pAI->prone.animProneLow && m_pAI->prone.animProneLevel && m_pAI->prone.animProneHigh") )
    __debugbreak();
  v5 = this->m_pAI;
  if ( bDoProneCheck )
  {
    feetDirection = v5->prone.feetDirection;
    handler = GHandler::getHandler();
    _XMM0 = (unsigned int)feetDirection;
    __asm { vpcmpeqd xmm3, xmm0, xmm1 }
    _XMM1 = LODWORD(FLOAT_25_0);
    __asm { vblendvps xmm0, xmm1, xmm2, xmm3 }
    this->m_pAI->prone.bProneOK = BG_CheckProneValid(this->m_pAI->ent->s.number, &this->m_pAI->ent->r.currentOrigin, 15.0, 48.0, this->m_pAI->ent->r.currentAngles.v[1], &this->m_pAI->ProneInfo.fTorsoPitch, &this->m_pAI->ProneInfo.fWaistPitch, 1, 1, 1, handler, PHYSICS_WORLD_ID_FIRST, PCT_ACTOR, *(float *)&_XMM0, feetDirection, NULL, NULL);
    v12 = this->m_pAI;
    if ( v12->prone.bProneOK )
    {
      v13 = I_fclamp(v12->ProneInfo.fTorsoPitch, -45.0, 45.0);
      this->m_pAI->ProneInfo.fTorsoPitch = *(float *)&v13;
    }
    else
    {
      v12->ProneInfo.fTorsoPitch = 0.0;
    }
  }
  else
  {
    v5->prone.fProneLastDiff = 360.0;
  }
  v14 = this->m_pAI;
  fWaistPitch_low = LODWORD(v14->ProneInfo.fWaistPitch);
  _XMM1 = 0i64;
  __asm { vroundss xmm4, xmm1, xmm2, 1 }
  *(float *)&fWaistPitch_low = (float)((float)((float)(v14->ProneInfo.fWaistPitch - v14->ProneInfo.fTorsoPitch) * 0.0027777778) - *(float *)&_XMM4) * 360.0;
  v17 = *(float *)&fWaistPitch_low;
  if ( *(float *)&fWaistPitch_low != v14->prone.fProneLastDiff )
  {
    LODWORD(_XMM7) = 0;
    LODWORD(_XMM10) = 0;
    if ( *(float *)&fWaistPitch_low >= 0.0 )
    {
      *(float *)&fWaistPitch_low = *(float *)&fWaistPitch_low * v14->prone.fInvProneAnimHighPitch;
      _XMM0 = fWaistPitch_low;
      __asm { vminss  xmm10, xmm0, cs:__real@3f7d70a4 }
      v22 = 1.0 - *(float *)&_XMM10;
    }
    else
    {
      *(float *)&fWaistPitch_low = *(float *)&fWaistPitch_low * v14->prone.fInvProneAnimLowPitch;
      _XMM0 = fWaistPitch_low;
      __asm { vminss  xmm7, xmm0, cs:__real@3f7d70a4 }
      v22 = 1.0 - *(float *)&_XMM7;
    }
    ServerDObjForEnt = Com_GetServerDObjForEnt(v14->ent);
    XAnimSetGoalWeight(ServerDObjForEnt, 0, XANIM_SUBTREE_DEFAULT, this->m_pAI->prone.animProneLow, *(float *)&_XMM7, 0.050000001, 1.0, (scr_string_t)0, 0, 0, LINEAR, NULL);
    XAnimSetGoalWeight(ServerDObjForEnt, 0, XANIM_SUBTREE_DEFAULT, this->m_pAI->prone.animProneLevel, v22, 0.050000001, 1.0, (scr_string_t)0, 0, 0, LINEAR, NULL);
    XAnimSetGoalWeight(ServerDObjForEnt, 0, XANIM_SUBTREE_DEFAULT, this->m_pAI->prone.animProneHigh, *(float *)&_XMM10, 0.050000001, 1.0, (scr_string_t)0, 0, 0, LINEAR, NULL);
    this->m_pAI->prone.fProneLastDiff = v17;
  }
}

/*
==============
AIScriptedInterface::UpdateSharpTurn
==============
*/
void AIScriptedInterface::UpdateSharpTurn(AIScriptedInterface *this, vec3_t *wishDelta)
{
  float v4; 
  ai_scripted_t *m_pAI; 
  float v6; 
  BOOL ShouldDoSharpTurnSpace; 
  BOOL ShouldDoSharpTurn; 
  double v9; 
  float v10; 
  scrContext_t *v13; 
  double v14; 
  float v15; 
  double v16; 
  float v17; 
  bool IsDoingReacquire; 
  ai_scripted_t *v19; 
  int v20; 
  bool v21; 
  AINavigator *pNavigator; 
  AINavigator_vtbl *v23; 
  __int64 v24; 
  __int64 v25; 
  const dvar_t *v26; 
  __int128 v27; 
  __int128 v28; 
  __int128 v29; 
  float v33; 
  __int128 v34; 
  ai_scripted_t *v35; 
  float v36; 
  float v37; 
  __int128 v38; 
  float v42; 
  float v43; 
  float v44; 
  const dvar_t *v45; 
  ai_scripted_t *v46; 
  gentity_s *ent; 
  float v48; 
  ai_scripted_t *v49; 
  __int128 v50; 
  __int128 v51; 
  ai_scripted_t *v55; 
  vec3_t *p_angles; 
  __int128 v57; 
  float v61; 
  __int128 v62; 
  __int128 v63; 
  ai_scripted_t *v64; 
  float v65; 
  float v66; 
  __int128 v67; 
  float v71; 
  __int128 v72; 
  float v73; 
  __int128 v74; 
  __int128 v78; 
  double v81; 
  float v82; 
  float v83; 
  double v84; 
  ai_scripted_t *v85; 
  float v86; 
  __int128 v87; 
  ai_scripted_t *v88; 
  double v92; 
  ai_scripted_t *v93; 
  __int128 v94; 
  ai_scripted_t *v97; 
  gentity_s *v98; 
  const char *v99; 
  const char *v100; 
  double v101; 
  float v102; 
  double v103; 
  float v104; 
  float v105; 
  float v106; 
  AINavigator2D *v107; 
  const bfx::AreaHandle *CurArea; 
  float v109; 
  int fmt; 
  float v111; 
  float v112; 
  float outDistToCorner; 
  float v114; 
  float outTurnDegrees; 
  vec3_t v116; 
  bfx::AreaHandle hStartArea; 
  __int64 v118; 
  vec3_t outCorner; 
  vec3_t v120; 
  vec3_t forward; 
  vec3_t nextPathPoint; 
  vec3_t v123; 
  vec3_t angles; 
  vec4_t to; 
  vec4_t quat; 
  vec3_t center; 
  vec3_t startPos; 
  vec2_t vec; 
  float v130; 
  vec2_t v131; 
  float v132; 
  vec3_t v133; 
  vec4_t result; 
  tmat33_t<vec3_t> axis; 
  bfx::PathSpec pathSpec; 
  vec3_t endPos; 
  bfx::AreaHandle v138; 
  bfx::LinkHandle v139; 
  nav_probe_results_s pOutResults; 
  nav_cornerdata_t ptr[10]; 

  v118 = -2i64;
  if ( !this->m_pAI->pNavigator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 7000, ASSERT_TYPE_ASSERT, "( m_pAI->pNavigator )", (const char *)&queryFormat, "m_pAI->pNavigator") )
    __debugbreak();
  v4 = fsqrt((float)((float)(wishDelta->v[0] * wishDelta->v[0]) + (float)(wishDelta->v[1] * wishDelta->v[1])) + (float)(wishDelta->v[2] * wishDelta->v[2]));
  m_pAI = this->m_pAI;
  if ( !m_pAI->bCheckNewPathSharpTurn )
  {
    v6 = FLOAT_N1_0;
    outDistToCorner = FLOAT_N1_0;
    if ( m_pAI->Physics.bSpace )
    {
      ShouldDoSharpTurnSpace = AIScriptedInterface::ShouldDoSharpTurnSpace(this, &nextPathPoint, &outDistToCorner);
      outCorner = nextPathPoint;
      v6 = outDistToCorner;
    }
    else
    {
      Sys_ProfBeginNamedEvent(0xFFFFFFFF, "ShouldDoSharpTurn");
      ShouldDoSharpTurn = AIScriptedInterface::ShouldDoSharpTurn(this, (float)this->m_pAI->sharpTurnLookaheadDist, (float)this->m_pAI->postSharpTurnLookaheadDist, &outCorner, &nextPathPoint);
      Sys_ProfEndNamedEvent();
      if ( !ShouldDoSharpTurn )
        goto LABEL_13;
      vec.v[0] = nextPathPoint.v[0] - outCorner.v[0];
      vec.v[1] = nextPathPoint.v[1] - outCorner.v[1];
      v130 = nextPathPoint.v[2] - outCorner.v[2];
      v9 = vectoyaw(&vec);
      v10 = (float)(*(float *)&v9 - this->m_pAI->ent->r.currentAngles.v[1]) * 0.0027777778;
      _XMM0 = 0i64;
      __asm { vroundss xmm1, xmm0, xmm3, 1 }
      ShouldDoSharpTurnSpace = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(v10 - *(float *)&_XMM1) * 360.0) & _xmm) > 67.5;
    }
    if ( !ShouldDoSharpTurnSpace )
    {
LABEL_13:
      v19 = this->m_pAI;
      if ( v19->iLastASMEarlyTickSuccessTime == level.time )
        return;
      v19->pNavigator->GetPrevCornerPassed(v19->pNavigator, &center);
      `eh vector constructor iterator'(ptr, 0x28ui64, 0xAui64, (void (__fastcall *)(void *))nav_cornerdata_t::nav_cornerdata_t, (void (__fastcall *)(void *))nav_cornerdata_t::~nav_cornerdata_t);
      v20 = ((__int64 (__fastcall *)(AINavigator *, nav_cornerdata_t *, __int64))this->m_pAI->pNavigator->GetNextNCorners)(this->m_pAI->pNavigator, ptr, 10i64);
      v21 = !AIScriptedInterface::HasUpcomingSharpTurn(this, &this->m_pAI->ent->r.currentOrigin, ptr, v20, 0, 128.0, 30.0, 0, &outTurnDegrees);
      pNavigator = this->m_pAI->pNavigator;
      v23 = pNavigator->__vftable;
      if ( v21 )
      {
        if ( ((unsigned __int8 (*)(void))v23->IsNextCornerMultiGoalPathGoal)() )
        {
          this->m_pAI->pNavigator->GetNextCorner(this->m_pAI->pNavigator, &v120);
        }
        else
        {
          bfx::AreaHandle::AreaHandle(&v138);
          bfx::LinkHandle::LinkHandle(&v139);
          LOBYTE(fmt) = 0;
          LOBYTE(v24) = 1;
          ((void (__fastcall *)(AINavigator *, __int64, __int64, vec3_t *, int))this->m_pAI->pNavigator->GetPosAlongPath)(this->m_pAI->pNavigator, v25, v24, &endPos, fmt);
          if ( AINavigator::IsStraightLineReachable(this->m_pAI->pNavigator, &endPos) )
            v120 = endPos;
          else
            this->m_pAI->pNavigator->GetNextCorner(this->m_pAI->pNavigator, &v120);
          bfx::LinkHandle::~LinkHandle(&v139);
          bfx::AreaHandle::~AreaHandle(&v138);
        }
      }
      else
      {
        v23->GetNextCorner(pNavigator, &v120);
      }
      v26 = DVARBOOL_ai_debuglocomotion;
      if ( !DVARBOOL_ai_debuglocomotion && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debuglocomotion") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v26);
      if ( v26->current.enabled )
      {
        G_DebugCircle(&center, 6.0, &colorRed, 0, 1, 1);
        G_DebugCircle(&v120, 6.0, &colorGreen, 0, 1, 1);
      }
      v28 = LODWORD(v120.v[0]);
      *(float *)&v28 = v120.v[0] - center.v[0];
      v27 = v28;
      v29 = LODWORD(v120.v[1]);
      *(float *)&v29 = fsqrt((float)((float)((float)(v120.v[1] - center.v[1]) * (float)(v120.v[1] - center.v[1])) + (float)(*(float *)&v27 * *(float *)&v27)) + (float)((float)(v120.v[2] - center.v[2]) * (float)(v120.v[2] - center.v[2])));
      _XMM12 = v29;
      __asm
      {
        vcmpless xmm0, xmm12, xmm15
        vblendvps xmm1, xmm12, xmm10, xmm0
      }
      v34 = v27;
      *(float *)&v34 = *(float *)&v27 * (float)(1.0 / *(float *)&_XMM1);
      v33 = *(float *)&v34;
      v131.v[0] = *(float *)&v34;
      v131.v[1] = (float)(v120.v[1] - center.v[1]) * (float)(1.0 / *(float *)&_XMM1);
      v132 = (float)(v120.v[2] - center.v[2]) * (float)(1.0 / *(float *)&_XMM1);
      v35 = this->m_pAI;
      v36 = v35->ent->r.currentOrigin.v[0] - center.v[0];
      *(float *)&v27 = v35->ent->r.currentOrigin.v[1] - center.v[1];
      v37 = v35->ent->r.currentOrigin.v[2] - center.v[2];
      outDistToCorner = *(float *)&v27 * v131.v[1];
      v114 = v37 * v132;
      v38 = v34 ^ _xmm;
      *(float *)&v38 = fsqrt((float)(*(float *)&v38 * *(float *)&v38) + (float)(v131.v[1] * v131.v[1]));
      _XMM2 = v38;
      __asm
      {
        vcmpless xmm0, xmm2, xmm15
        vblendvps xmm1, xmm2, xmm10, xmm0
      }
      v42 = v131.v[1] * (float)(1.0 / *(float *)&_XMM1);
      v43 = COERCE_FLOAT(LODWORD(v33) ^ _xmm) * (float)(1.0 / *(float *)&_XMM1);
      v111 = *(float *)&v27 * v43;
      v44 = (float)(v36 * v42) + (float)(*(float *)&v27 * v43);
      v45 = DVARBOOL_ai_debuglocomotion;
      if ( !DVARBOOL_ai_debuglocomotion && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debuglocomotion") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v45);
      if ( v45->current.enabled )
      {
        outCorner.v[0] = v42 * v44;
        outCorner.v[1] = v43 * v44;
        outCorner.v[2] = 0.0;
        v46 = this->m_pAI;
        ent = v46->ent;
        outCorner.v[0] = v46->ent->r.currentOrigin.v[0] - (float)(v42 * v44);
        outCorner.v[1] = ent->r.currentOrigin.v[1] - (float)(v43 * v44);
        outCorner.v[2] = ent->r.currentOrigin.v[2];
        G_DebugLine(&v46->ent->r.currentOrigin, &outCorner, &colorRed, 0);
      }
      v48 = (float)((float)((float)((float)((float)(v33 + v42) * v36) + outDistToCorner) + v114) + v111) / *(float *)&_XMM12;
      I_fclamp(v48, 0.0, 1.0);
      *(float *)&_XMM12 = v48;
      v49 = this->m_pAI;
      v50 = *(unsigned __int64 *)v49->Physics.vVelocity.v;
      outCorner.v[2] = v49->Physics.vVelocity.v[2];
      *(double *)outCorner.v = *(double *)&v50;
      v51 = v50;
      *(float *)&v51 = fsqrt((float)((float)(*(float *)&v50 * *(float *)&v50) + (float)(outCorner.v[1] * outCorner.v[1])) + (float)(outCorner.v[2] * outCorner.v[2]));
      _XMM8 = v51;
      __asm
      {
        vcmpless xmm0, xmm8, xmm15
        vblendvps xmm1, xmm8, xmm10, xmm0
      }
      outCorner.v[0] = *(float *)&v50 * (float)(1.0 / *(float *)&_XMM1);
      outCorner.v[1] = outCorner.v[1] * (float)(1.0 / *(float *)&_XMM1);
      outCorner.v[2] = outCorner.v[2] * (float)(1.0 / *(float *)&_XMM1);
      if ( (!v49->orientation.faceMotion || v49->orientation.sharpTurnForceUseVelocity) && (float)((float)((float)(v49->Physics.vVelocity.v[0] * v49->Physics.vVelocity.v[0]) + (float)(v49->Physics.vVelocity.v[1] * v49->Physics.vVelocity.v[1])) + (float)(v49->Physics.vVelocity.v[2] * v49->Physics.vVelocity.v[2])) >= 1.0 )
      {
        forward = v49->Physics.vVelocity;
        vectoangles(&v49->Physics.vVelocity, &angles);
        outDistToCorner = angles.v[1];
        p_angles = &angles;
      }
      else
      {
        AngleVectors(&v49->ent->r.currentAngles, &forward, NULL, NULL);
        v55 = this->m_pAI;
        p_angles = &v55->ent->r.currentAngles;
        outDistToCorner = v55->ent->r.currentAngles.v[1];
      }
      AnglesToQuat(p_angles, &quat);
      v57 = LODWORD(forward.v[1]);
      *(float *)&v57 = fsqrt((float)((float)(*(float *)&v57 * *(float *)&v57) + (float)(forward.v[0] * forward.v[0])) + (float)(forward.v[2] * forward.v[2]));
      _XMM3 = v57;
      __asm
      {
        vcmpless xmm0, xmm3, xmm15
        vblendvps xmm1, xmm3, xmm10, xmm0
      }
      v61 = forward.v[0] * (float)(1.0 / *(float *)&_XMM1);
      forward.v[0] = v61;
      v63 = LODWORD(forward.v[1]);
      *(float *)&v63 = forward.v[1] * (float)(1.0 / *(float *)&_XMM1);
      v62 = v63;
      forward.v[1] = *(float *)&v63;
      forward.v[2] = forward.v[2] * (float)(1.0 / *(float *)&_XMM1);
      v64 = this->m_pAI;
      v65 = v120.v[0] - v64->ent->r.currentOrigin.v[0];
      v67 = LODWORD(v120.v[1]);
      v66 = v120.v[1] - v64->ent->r.currentOrigin.v[1];
      *(float *)&v67 = fsqrt((float)(v66 * v66) + (float)(v65 * v65));
      _XMM14 = v67;
      __asm
      {
        vcmpless xmm0, xmm14, xmm15
        vblendvps xmm1, xmm14, xmm10, xmm0
      }
      if ( v64->avoidance_active )
      {
        v71 = wishDelta->v[1];
        v72 = LODWORD(wishDelta->v[0]);
        v73 = wishDelta->v[2];
        v74 = v72;
        *(float *)&v74 = fsqrt((float)((float)(*(float *)&v72 * *(float *)&v72) + (float)(v71 * v71)) + (float)(v73 * v73));
        _XMM3 = v74;
        __asm
        {
          vcmpless xmm0, xmm3, xmm15
          vblendvps xmm1, xmm3, xmm10, xmm0
        }
        v78 = v62;
        *(float *)&v78 = (float)((float)(*(float *)&v62 * (float)(v71 * (float)(1.0 / *(float *)&_XMM1))) + (float)(v61 * (float)(*(float *)&v72 * (float)(1.0 / *(float *)&_XMM1)))) + (float)((float)(v73 * (float)(1.0 / *(float *)&_XMM1)) * forward.v[2]);
        _XMM2 = v78;
        __asm { vmaxss  xmm0, xmm2, cs:__real@3f5db22d }
        *(float *)&_XMM12 = FLOAT_1_0;
      }
      else
      {
        *(float *)&_XMM0 = (float)(*(float *)&v62 * (float)(v66 * (float)(1.0 / *(float *)&_XMM1))) + (float)(v61 * (float)(v65 * (float)(1.0 / *(float *)&_XMM1)));
      }
      v81 = I_fclamp(*(float *)&_XMM0, -1.0, 1.0);
      v82 = acosf_0(*(float *)&v81);
      v83 = v82;
      if ( !this->m_pAI->orientation.faceMotion && v82 > 2.35619 )
        goto LABEL_65;
      I_fclamp(*(float *)&_XMM8 * 0.0045454544, 0.0, 1.0);
      v84 = I_fclamp(v83 * 0.52086049, 0.0, 1.0);
      v85 = this->m_pAI;
      v86 = (float)(*(float *)&v84 * (float)(*(float *)&_XMM8 * 0.0045454544)) * v85->pathSmoothMultiplier;
      v87 = LODWORD(FLOAT_1_0);
      *(float *)&v87 = (float)((float)(1.0 - v86) * 0.34999999) + (float)(v86 * 0.5);
      v88 = v85;
      if ( *(float *)&_XMM8 > 0.0 && !v85->avoidance_active )
      {
        *((_QWORD *)&_XMM0 + 1) = *((_QWORD *)&_XMM8 + 1);
        *(double *)&_XMM0 = I_fclamp((float)(*(float *)&_XMM8 - *(float *)&_XMM14) / *(float *)&_XMM8, 0.0, 1.0);
        __asm { vmaxss  xmm12, xmm0, xmm12 }
        v88 = this->m_pAI;
      }
      v112 = (float)(*(float *)&v87 * *(float *)&_XMM12) + (float)((float)(v86 * 0.25) + (float)((float)(1.0 - v86) * 0.2));
      *(float *)&v87 = v112 * v83;
      _XMM1 = v87;
      __asm { vmaxss  xmm8, xmm1, xmm15 }
      v92 = ((double (__fastcall *)(AINavigator *))v88->pNavigator->GetPathDistToGoalOrLink)(v88->pNavigator);
      v93 = this->m_pAI;
      v94 = LODWORD(v93->Physics.vVelocity.v[0]);
      *(float *)&v94 = fsqrt((float)((float)(v93->Physics.vVelocity.v[0] * v93->Physics.vVelocity.v[0]) + (float)(v93->Physics.vVelocity.v[1] * v93->Physics.vVelocity.v[1])) + (float)(v93->Physics.vVelocity.v[2] * v93->Physics.vVelocity.v[2])) * 0.69999999;
      _XMM4 = v94;
      __asm { vmaxss  xmm6, xmm4, cs:__real@42200000 }
      if ( *(float *)&v92 < *(float *)&_XMM6 && v93->pNavigator->IsStraightLineToGoalOrLink(v93->pNavigator) )
        __asm { vmaxss  xmm8, xmm8, xmm2 }
      if ( *(float *)&_XMM8 > 6.2831855 )
        goto LABEL_65;
      if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_ai_debuglocomotion, "ai_debuglocomotion") )
      {
        v97 = this->m_pAI;
        v98 = v97->ent;
        *(_QWORD *)outCorner.v = *(_QWORD *)v97->ent->r.currentOrigin.v;
        outCorner.v[2] = v98->r.currentOrigin.v[2] - 24.0;
        v99 = j_va("maxturn: %.1f", (float)(*(float *)&_XMM8 * 57.295776));
        G_Main_AddDebugString(&outCorner, &colorLtGrey, 0.40000001, v99);
        outCorner.v[2] = outCorner.v[2] + -24.0;
        v100 = j_va("t value: %.1f - percent %.2f", *(float *)&_XMM12, v112);
        G_Main_AddDebugString(&outCorner, &colorLtGrey, 0.40000001, v100);
      }
      v123.v[0] = 0.0;
      v123.v[2] = 0.0;
      if ( (float)((float)((float)(wishDelta->v[0] * wishDelta->v[0]) + (float)(wishDelta->v[1] * wishDelta->v[1])) + (float)(wishDelta->v[2] * wishDelta->v[2])) >= 0.0099999998 )
        v101 = vectoyaw((const vec2_t *)wishDelta);
      else
        *(float *)&v101 = outDistToCorner;
      v123.v[1] = *(float *)&v101;
      AnglesToQuat(&v123, &to);
      v102 = v83 / *(float *)&_XMM8;
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(acosf_0(COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(quat.v[0] * to.v[0]) + (float)(quat.v[1] * to.v[1])) + (float)(quat.v[2] * to.v[2])) + (float)(quat.v[3] * to.v[3])) & _xmm)) * 114.59155) & _xmm) > 170.0 )
      {
        v103 = vectoyaw(&v131);
        v123.v[1] = *(float *)&v103;
        AnglesToQuat(&v123, &to);
      }
      QuatSlerpLimited(&quat, &to, *(float *)&_XMM8, &result);
      QuatToAxis(&result, &axis);
      v104 = axis.m[0].v[0];
      v105 = axis.m[0].v[1];
      v106 = axis.m[0].v[2];
      bfx::AreaHandle::AreaHandle(&pOutResults.m_hEndArea);
      pathSpec.m_obstacleMode = BLOCKED_IF_ANY_MATCH;
      *(_QWORD *)&pathSpec.m_obstacleBlockageFlags = -1i64;
      *(_QWORD *)&pathSpec.m_areaPenaltyFlags = -1i64;
      pathSpec.m_usePathSharingPenalty = 0;
      pathSpec.m_pathSharingPenalty = 0.0;
      pathSpec.m_maxPathSharingPenalty = 0.0;
      pathSpec.m_maxSearchDist = 0.0;
      bfx::PenaltyTable::PenaltyTable(&pathSpec.m_penaltyTable);
      pathSpec.m_snapMode = SNAP_CLOSEST;
      v107 = this->m_pAI->pNavigator->Get2DNavigator(this->m_pAI->pNavigator);
      if ( !v107 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 7252, ASSERT_TYPE_ASSERT, "(pNav2d)", (const char *)&queryFormat, "pNav2d") )
        __debugbreak();
      CurArea = AINavigator2D::GetCurArea(v107);
      bfx::AreaHandle::AreaHandle(&hStartArea, CurArea);
      this->m_pAI->pNavigator->GetCurPos(this->m_pAI->pNavigator, &startPos);
      pathSpec = *AINavigator2D::GetPathSpec(v107);
      v133.v[0] = (float)(v104 * (float)(v102 * v4)) + startPos.v[0];
      v133.v[1] = (float)(v105 * (float)(v102 * v4)) + startPos.v[1];
      v133.v[2] = (float)((float)(v102 * v4) * v106) + startPos.v[2];
      if ( Nav_Trace(&startPos, &hStartArea, &v133, &pathSpec, &pOutResults) )
      {
        if ( pOutResults.m_DistTraveled < 0.001 )
        {
LABEL_64:
          bfx::AreaHandle::~AreaHandle(&hStartArea);
          bfx::AreaHandle::~AreaHandle(&pOutResults.m_hEndArea);
LABEL_65:
          `eh vector destructor iterator'(ptr, 0x28ui64, 0xAui64, (void (__fastcall *)(void *))nav_cornerdata_t::~nav_cornerdata_t);
          return;
        }
        if ( pOutResults.m_DistTraveled > 1.0 )
        {
          v109 = (float)((float)(v102 * v4) / pOutResults.m_DistTraveled) * *(float *)&_XMM8;
          I_fclamp(v109, 0.0349066, 6.2831855);
          QuatSlerpLimited(&quat, &to, v109, &result);
          QuatToAxis(&result, &axis);
          wishDelta->v[0] = v4 * axis.m[0].v[0];
          wishDelta->v[1] = v4 * axis.m[0].v[1];
          wishDelta->v[2] = v4 * axis.m[0].v[2];
          goto LABEL_64;
        }
      }
      wishDelta->v[0] = v104 * v4;
      wishDelta->v[1] = v105 * v4;
      wishDelta->v[2] = v106 * v4;
      goto LABEL_64;
    }
    v13 = ScriptContext_Server();
    v14 = *(double *)outCorner.v;
    v15 = outCorner.v[2];
    v16 = *(double *)nextPathPoint.v;
    v17 = nextPathPoint.v[2];
    IsDoingReacquire = AIScriptedInterface::IsDoingReacquire(this);
    *(double *)v116.v = v14;
    v116.v[2] = v15;
    *(double *)angles.v = v16;
    angles.v[2] = v17;
    AIScriptedInterface::FireSharpTurnEvent(this, v13, IsDoingReacquire, &angles, 0, &v116, v6);
  }
  if ( !AIScriptedInterface::ShouldEarlySharpTurnTick(this) || !AIScriptedInterface::TryEarlyASMTick(this, 0) )
    goto LABEL_13;
}

/*
==============
AIActorInterface::UpdateStepMoveCounter
==============
*/
void AIActorInterface::UpdateStepMoveCounter(AIActorInterface *this)
{
  gentity_s *ent; 
  unsigned __int8 stepMove; 

  ent = this->m_pAI->ent;
  stepMove = ent->s.lerp.u.actor.stepMove;
  if ( stepMove )
    ent->s.lerp.u.actor.stepMove = stepMove - 1;
}

/*
==============
usingCodeGoal
==============
*/
_BOOL8 usingCodeGoal(ai_scripted_t *pAI)
{
  return pAI->codeGoalSrc && (EntHandle::isDefined(&pAI->scriptGoal.hEnt) || pAI->codeGoal.pos.v[0] != pAI->scriptGoal.pos.v[0] || pAI->codeGoal.pos.v[1] != pAI->scriptGoal.pos.v[1] || pAI->codeGoal.pos.v[2] != pAI->scriptGoal.pos.v[2] || pAI->codeGoal.radius != pAI->scriptGoal.radius);
}

