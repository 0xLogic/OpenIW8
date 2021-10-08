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
__int64 AIScriptedInterface::AtClaimNodeAndAngle(AIScriptedInterface *this)
{
  pathnode_t *pClaimedNode; 
  __int64 result; 

  if ( !AIScriptedInterface::AtClaimNode(this) )
    return 0i64;
  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  pClaimedNode = this->m_pAI->sentient->pClaimedNode;
  if ( !pClaimedNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 6441, ASSERT_TYPE_ASSERT, "( node )", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( this->Is3D(this) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 6443, ASSERT_TYPE_ASSERT, "( !Is3D() )", (const char *)&queryFormat, "!Is3D()") )
    __debugbreak();
  *(double *)&_XMM0 = ((double (__fastcall *)(AIScriptedInterface *, pathnode_t *))this->GetNodeAngleYawOffset)(this, pClaimedNode);
  __asm { vmovaps xmm6, xmm0 }
  pathnode_t::GetAngle(pClaimedNode);
  __asm { vaddss  xmm0, xmm6, xmm0; angle }
  AngleNormalize360(*(const float *)&_XMM0);
  _RCX = this->m_pAI->ent;
  __asm
  {
    vmovss  xmm1, dword ptr [rcx+140h]
    vsubss  xmm0, xmm1, xmm0; angle
  }
  *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
  result = 0i64;
  __asm { vcomiss xmm0, cs:__real@41700000 }
  return result;
}

/*
==============
AIScriptedInterface::AtDifferentElevation
==============
*/
bool AIScriptedInterface::AtDifferentElevation(AIScriptedInterface *this, const vec3_t *vOrgSelf, const vec3_t *vOrgOther)
{
  char v3; 

  __asm
  {
    vmovss  xmm0, dword ptr [rdx+8]
    vsubss  xmm1, xmm0, dword ptr [r8+8]
    vandps  xmm1, xmm1, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm1, cs:__real@42a00000
  }
  return !v3;
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
  AIScriptedInterface_vtbl *v13; 
  __int64 v18; 
  bool v22; 
  AIScriptedInterface *v24; 
  __int64 v25; 
  ai_scripted_t *v26; 
  EntityTagInfo *tagInfo; 
  bool v28; 
  AIWrapper v95; 

  m_pAI = this->m_pAI;
  if ( m_pAI->pushable && m_pAI->script_pushable && m_pAI->Physics.ePhysicsType != AIPHYS_NOCLIP )
  {
    pClaimedNode = m_pAI->sentient->pClaimedNode;
    if ( (!pClaimedNode || !AICommonInterface::PointNearNode(this, &m_pAI->ent->r.currentOrigin, pClaimedNode)) && (!AIScriptedInterface::IsInCoverArrival(this) || !this->m_pAI->sentient->pClaimedNode) && (!G_MotionWarp_Active(this->m_pAI->ent->s.number) || !this->GetCloseEnt(this)) )
    {
      _RCX = this->m_pAI->ent;
      v13 = this->__vftable;
      __asm
      {
        vmovaps [rsp+118h+var_28], xmm6
        vmovaps [rsp+118h+var_38], xmm7
        vmovaps [rsp+118h+var_48], xmm8
        vmovaps [rsp+118h+var_58], xmm9
        vmovss  xmm9, dword ptr [rcx+10Ch]
        vmovaps [rsp+118h+var_68], xmm10
        vmovaps [rsp+118h+var_78], xmm11
        vmovaps [rsp+118h+var_88], xmm12
        vmovaps [rsp+118h+var_98], xmm13
        vxorps  xmm12, xmm12, xmm12
        vxorps  xmm10, xmm10, xmm10
        vxorps  xmm11, xmm11, xmm11
      }
      v18 = (__int64)v13->GetAIIterator(this);
      _RDI = (gentity_s *)(**(__int64 (__fastcall ***)(__int64))v18)(v18);
      __asm
      {
        vmovss  xmm13, cs:__real@3f800000
        vmovss  xmm8, cs:__real@3a83126f
      }
      v22 = _RDI == NULL;
      if ( _RDI )
      {
        __asm { vmovss  xmm7, cs:__real@40000000 }
        do
        {
          AIWrapper::AIWrapper(&v95, _RDI);
          v24 = v95.m_pAI;
          if ( !v95.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 3517, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
            __debugbreak();
          v25 = v24->GetAI(v24);
          v26 = this->m_pAI;
          if ( (ai_scripted_t *)v25 != v26 && *(_DWORD *)(v25 + 2216) != 3 )
          {
            tagInfo = _RDI->tagInfo;
            v28 = 0;
            if ( !tagInfo || (v28 = tagInfo->parent < v26->ent, tagInfo->parent != v26->ent) )
            {
              __asm
              {
                vmovss  xmm0, dword ptr [rdi+130h]
                vmovss  xmm1, dword ptr [rdi+134h]
                vaddss  xmm2, xmm13, dword ptr [rdi+10Ch]
                vsubss  xmm6, xmm0, dword ptr [rax+130h]
                vmovss  xmm0, dword ptr [rdi+138h]
                vsubss  xmm4, xmm0, dword ptr [rax+138h]
                vsubss  xmm3, xmm1, dword ptr [rax+134h]
                vmulss  xmm0, xmm6, xmm6
                vaddss  xmm5, xmm2, xmm9
                vmulss  xmm3, xmm3, xmm3
                vaddss  xmm2, xmm3, xmm0
                vmulss  xmm1, xmm4, xmm4
                vaddss  xmm4, xmm2, xmm1
                vmulss  xmm0, xmm5, xmm5
                vcomiss xmm4, xmm0
              }
              if ( v28 )
              {
                if ( AIScriptedInterface::IsInCoverArrival(this) && G_MotionWarp_Active(this->m_pAI->ent->s.number) )
                  G_MotionWarp_Cancel(this->m_pAI->ent->s.number);
                if ( this->GetCloseEnt(this) )
                {
                  _RCX = this->m_pAI->ent;
                  __asm
                  {
                    vmovss  xmm0, dword ptr [rcx+130h]
                    vsubss  xmm3, xmm0, dword ptr [rdi+130h]
                    vmovss  xmm1, dword ptr [rcx+134h]
                    vmovss  xmm0, dword ptr [rcx+138h]
                    vsubss  xmm6, xmm1, dword ptr [rdi+134h]
                    vsubss  xmm4, xmm0, dword ptr [rdi+138h]
                    vmulss  xmm1, xmm6, xmm6
                    vmulss  xmm0, xmm3, xmm3
                    vaddss  xmm2, xmm1, xmm0
                    vmulss  xmm1, xmm4, xmm4
                    vaddss  xmm2, xmm2, xmm1
                    vcomiss xmm2, xmm8
                    vaddss  xmm10, xmm10, xmm3
                    vaddss  xmm11, xmm11, xmm6
                    vaddss  xmm12, xmm12, xmm4
                  }
                }
                else
                {
                  this->SetCloseEnt(this, _RDI);
                  if ( G_MotionWarp_Active(this->m_pAI->ent->s.number) )
                    goto LABEL_33;
                }
              }
            }
          }
          _RDI = (gentity_s *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 8i64))(v18);
          v22 = _RDI == NULL;
        }
        while ( _RDI );
      }
      __asm
      {
        vmulss  xmm1, xmm10, xmm10
        vmulss  xmm0, xmm11, xmm11
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm12, xmm12
        vaddss  xmm9, xmm2, xmm1
        vcomiss xmm9, xmm8
      }
      if ( !v22 )
      {
        _RAX = this->m_pAI;
        __asm
        {
          vmovss  xmm6, dword ptr [rax+88Ch]
          vmovss  xmm7, dword ptr [rax+888h]
          vmovss  xmm8, dword ptr [rax+890h]
        }
        if ( AICommonInterface::HasPath(this) )
        {
          __asm
          {
            vmulss  xmm1, xmm7, xmm7
            vmulss  xmm0, xmm6, xmm6
            vaddss  xmm2, xmm1, xmm0
            vmulss  xmm1, xmm8, xmm8
            vaddss  xmm2, xmm2, xmm1
            vsqrtss xmm0, xmm2, xmm2
            vmulss  xmm3, xmm0, cs:__real@3e99999a
            vminss  xmm4, xmm3, cs:__real@40400000
          }
        }
        else
        {
          __asm { vmovss  xmm4, cs:__real@40400000 }
        }
        _RAX = this->m_pAI;
        __asm
        {
          vsqrtss xmm1, xmm9, xmm9
          vcmpless xmm0, xmm1, cs:__real@80000000
          vblendvps xmm0, xmm1, xmm13, xmm0
          vdivss  xmm3, xmm13, xmm0
          vmulss  xmm0, xmm10, xmm3
          vmulss  xmm1, xmm0, xmm4
          vaddss  xmm2, xmm1, dword ptr [rax+888h]
          vmulss  xmm0, xmm11, xmm3
          vmulss  xmm1, xmm0, xmm4
          vmovss  dword ptr [rax+888h], xmm2
          vaddss  xmm2, xmm1, dword ptr [rax+88Ch]
          vmulss  xmm0, xmm12, xmm3
          vmulss  xmm1, xmm0, xmm4
          vmovss  dword ptr [rax+88Ch], xmm2
          vaddss  xmm2, xmm1, dword ptr [rax+890h]
          vmovss  dword ptr [rax+890h], xmm2
        }
      }
LABEL_33:
      __asm
      {
        vmovaps xmm12, [rsp+118h+var_88]
        vmovaps xmm11, [rsp+118h+var_78]
        vmovaps xmm10, [rsp+118h+var_68]
        vmovaps xmm9, [rsp+118h+var_58]
        vmovaps xmm8, [rsp+118h+var_48]
        vmovaps xmm7, [rsp+118h+var_38]
        vmovaps xmm6, [rsp+118h+var_28]
        vmovaps xmm13, [rsp+118h+var_98]
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
  __int64 v7; 
  __int64 v8; 
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
    __asm { vmovss  xmm2, cs:__real@44400000; maxFleeDist }
    SafeNodeOutsideBadPlace = AICommonInterface::BadPlace_FindSafeNodeOutsideBadPlace(this, &potentialNodes, *(float *)&_XMM2);
    v7 = SafeNodeOutsideBadPlace;
    if ( SafeNodeOutsideBadPlace <= 0 )
    {
      return 0;
    }
    else
    {
      v8 = 0i64;
      for ( i = &potentialNodes; ; ++i )
      {
        node = i->node;
        if ( !i->node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 7598, ASSERT_TYPE_ASSERT, "( safeNode )", (const char *)&queryFormat, "safeNode") )
          __debugbreak();
        pathnode_t::GetPos(node, &pos);
        if ( AIScriptedInterface::FindPath(this, &pos, node, 1, 1, 0) )
          break;
        if ( ++v8 >= v7 )
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
    __asm { vmovss  xmm1, cs:__real@42000000; dist }
    if ( AICommonInterface::NearClaimNode(this, *(float *)&_XMM1) )
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

  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovups xmm6, cs:__xmm@3f800000000000000000000000000000
  }
  _RDI = tagInfo;
  Axis43ToQuat(&tagInfo->axis, &out);
  __asm
  {
    vsubps  xmm1, xmm6, xmmword ptr [rsp+58h+out]
    vmulps  xmm1, xmm1, cs:__xmm@3f0000003f0000003f0000003f000000
    vaddps  xmm2, xmm1, xmmword ptr [rsp+58h+out]
    vmovups xmmword ptr [rsp+58h+out], xmm2
  }
  QuatToAxis(&out, (tmat33_t<vec3_t> *)&_RDI->axis);
  __asm
  {
    vmovss  xmm0, dword ptr cs:?vec3_origin@@3Tvec3_t@@B; vec3_t const vec3_origin
    vsubss  xmm1, xmm0, dword ptr [rdi+44h]
    vmovss  xmm5, cs:__real@3e800000
    vmulss  xmm1, xmm1, xmm5
    vaddss  xmm0, xmm1, dword ptr [rdi+44h]
    vmovss  dword ptr [rdi+44h], xmm0
    vmovss  xmm0, dword ptr cs:?vec3_origin@@3Tvec3_t@@B+4; vec3_t const vec3_origin
    vsubss  xmm1, xmm0, dword ptr [rdi+48h]
    vmulss  xmm2, xmm1, xmm5
    vaddss  xmm3, xmm2, dword ptr [rdi+48h]
    vmovss  dword ptr [rdi+48h], xmm3
    vmovss  xmm0, dword ptr cs:?vec3_origin@@3Tvec3_t@@B+8; vec3_t const vec3_origin
    vsubss  xmm1, xmm0, dword ptr [rdi+4Ch]
    vmulss  xmm2, xmm1, xmm5
    vaddss  xmm3, xmm2, dword ptr [rdi+4Ch]
    vmovss  dword ptr [rdi+4Ch], xmm3
    vmovaps xmm6, [rsp+58h+var_18]
  }
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
  int number; 
  vec3_t translationDelta; 
  tmat33_t<vec3_t> v49; 
  tmat43_t<vec3_t> in1; 
  vec4_t rotationDeltaQuat; 
  tmat43_t<vec3_t> axis; 
  tmat43_t<vec3_t> v53; 
  tmat43_t<vec3_t> out; 
  tmat43_t<vec3_t> dst; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 6196, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  _RBX = this->m_pAI->ent;
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 6198, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  AnglesToAxis(&_RBX->r.currentAngles, (tmat33_t<vec3_t> *)&axis);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+130h]
    vmovss  [rbp+0C0h+var_F4], xmm0
    vmovss  xmm1, dword ptr [rbx+134h]
    vmovss  [rbp+0C0h+var_F0], xmm1
    vmovss  xmm0, dword ptr [rbx+138h]
    vmovss  [rbp+0C0h+var_EC], xmm0
  }
  AIScriptedInterface::UpdateAnglesAndDelta(this);
  _RDX = this->m_pAI;
  if ( _RDX->Physics.ePhysicsType != AIPHYS_NORMAL_ABSOLUTE && _RDX->Physics.ePhysicsType != AIPHYS_NOGRAVITY_ABSOLUTE && _RDX->Physics.ePhysicsType != AIPHYS_ZONLY_PHYSICS_ABSOLUTE )
  {
    __asm
    {
      vmovaps [rsp+1C0h+var_38+8], xmm6
      vmovss  xmm6, dword ptr [rdx+888h]
      vmovaps [rsp+1C0h+var_48+8], xmm7
      vmovss  xmm7, dword ptr [rdx+88Ch]
      vmovaps [rsp+1C0h+var_58+8], xmm8
      vmovss  xmm8, dword ptr [rdx+890h]
    }
    AnglesToAxis(&_RDX->orientation.vDesiredAngles, &v49);
    _RSI = &this->m_pAI->Physics.vWishDelta;
    if ( &translationDelta == _RSI && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
      __debugbreak();
    __asm
    {
      vmulss  xmm3, xmm7, dword ptr [rsp+1C0h+var_180+0Ch]
      vmulss  xmm2, xmm6, dword ptr [rsp+1C0h+var_180]
      vmulss  xmm1, xmm8, dword ptr [rsp+1C0h+var_180+18h]
      vaddss  xmm4, xmm3, xmm2
      vaddss  xmm2, xmm4, xmm1
      vmovss  dword ptr [rsi], xmm2
      vmulss  xmm3, xmm7, dword ptr [rsp+1C0h+var_180+10h]
      vmulss  xmm2, xmm6, dword ptr [rsp+1C0h+var_180+4]
      vmulss  xmm1, xmm8, dword ptr [rsp+1C0h+var_180+1Ch]
      vaddss  xmm4, xmm3, xmm2
      vaddss  xmm2, xmm4, xmm1
      vmovss  dword ptr [rsi+4], xmm2
      vmulss  xmm2, xmm6, dword ptr [rsp+1C0h+var_180+8]
      vmulss  xmm3, xmm7, dword ptr [rsp+1C0h+var_180+14h]
      vmulss  xmm1, xmm8, dword ptr [rsp+1C0h+var_180+20h]
      vmovaps xmm8, [rsp+1C0h+var_58+8]
      vmovaps xmm7, [rsp+1C0h+var_48+8]
      vmovaps xmm6, [rsp+1C0h+var_38+8]
      vaddss  xmm4, xmm3, xmm2
      vaddss  xmm2, xmm4, xmm1
      vmovss  dword ptr [rsi+8], xmm2
    }
  }
  AnglesToAxis(&_RBX->r.currentAngles, (tmat33_t<vec3_t> *)&v53);
  __asm { vmovss  xmm0, dword ptr [rbx+130h] }
  _RAX = this->m_pAI;
  __asm
  {
    vaddss  xmm1, xmm0, dword ptr [rax+888h]
    vmovss  [rbp+0C0h+var_C4], xmm1
    vmovss  xmm2, dword ptr [rax+88Ch]
    vaddss  xmm0, xmm2, dword ptr [rbx+134h]
    vmovss  [rbp+0C0h+var_C0], xmm0
    vmovss  xmm1, dword ptr [rax+890h]
    vaddss  xmm2, xmm1, dword ptr [rbx+138h]
    vmovss  [rbp+0C0h+var_BC], xmm2
  }
  MatrixInverseOrthogonal43(&axis, &out);
  MatrixMultiply43(&v53, &out, &in1);
  if ( G_MotionWarp_Active(_RBX->s.number) )
  {
    AxisToQuat((const tmat33_t<vec3_t> *)&in1, &rotationDeltaQuat);
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+0C0h+in1+24h]
      vmovss  xmm1, dword ptr [rbp+0C0h+in1+28h]
    }
    number = _RBX->s.number;
    __asm
    {
      vmovss  dword ptr [rsp+1C0h+translationDelta], xmm0
      vmovss  xmm0, dword ptr [rbp+0C0h+in1+2Ch]
      vmovss  dword ptr [rsp+1C0h+translationDelta+8], xmm0
      vmovss  dword ptr [rsp+1C0h+translationDelta+4], xmm1
    }
    G_MotionWarp_UpdateHook(number, &translationDelta, &rotationDeltaQuat);
    QuatToAxis(&rotationDeltaQuat, (tmat33_t<vec3_t> *)&in1);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+1C0h+translationDelta]
      vmovss  xmm1, dword ptr [rsp+1C0h+translationDelta+4]
      vmovss  dword ptr [rbp+0C0h+in1+24h], xmm0
      vmovss  xmm0, dword ptr [rsp+1C0h+translationDelta+8]
      vmovss  dword ptr [rbp+0C0h+in1+2Ch], xmm0
      vmovss  dword ptr [rbp+0C0h+in1+28h], xmm1
    }
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
  char v12; 
  bool v13; 
  bool v14; 
  vec3_t outForward; 
  char v61; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
  }
  _RBX = outPushDir;
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 3181, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 3182, ASSERT_TYPE_ASSERT, "( m_pAI->ent )", (const char *)&queryFormat, "m_pAI->ent") )
    __debugbreak();
  if ( !pusher && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 3183, ASSERT_TYPE_ASSERT, "( pusher )", (const char *)&queryFormat, "pusher") )
    __debugbreak();
  v12 = 0;
  v13 = pusher->client == NULL;
  if ( !pusher->client )
  {
    v14 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 3184, ASSERT_TYPE_ASSERT, "( pusher->client )", (const char *)&queryFormat, "pusher->client");
    v12 = 0;
    v13 = !v14;
    if ( v14 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm7, cs:__real@3f800000
    vxorps  xmm8, xmm8, xmm8
  }
  _RCX = this->m_pAI->ent;
  _RAX = pusher->client;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+130h]
    vsubss  xmm9, xmm0, dword ptr [rdi+130h]
    vmovss  xmm1, dword ptr [rcx+134h]
    vsubss  xmm10, xmm1, dword ptr [rdi+134h]
    vmovss  xmm3, dword ptr [rax+40h]
    vmovss  xmm2, dword ptr [rax+3Ch]
    vmulss  xmm1, xmm2, xmm2
    vmulss  xmm0, xmm3, xmm3
    vaddss  xmm1, xmm1, xmm0
    vsqrtss xmm6, xmm1, xmm1
    vucomiss xmm6, xmm8
    vcmpless xmm0, xmm6, cs:__real@80000000
    vblendvps xmm0, xmm6, xmm7, xmm0
    vdivss  xmm1, xmm7, xmm0
    vmulss  xmm5, xmm2, xmm1
    vmulss  xmm4, xmm3, xmm1
  }
  if ( v13 )
  {
    G_Client_GetViewDirection(pusher, &outForward, NULL, NULL);
    __asm
    {
      vmovss  xmm4, dword ptr [rsp+0B8h+outForward]
      vmovss  xmm3, dword ptr [rsp+0B8h+outForward+4]
      vmulss  xmm1, xmm4, xmm4
      vmulss  xmm0, xmm3, xmm3
      vaddss  xmm1, xmm1, xmm0
      vsqrtss xmm2, xmm1, xmm1
      vcmpless xmm0, xmm2, cs:__real@80000000
      vblendvps xmm0, xmm2, xmm7, xmm0
      vdivss  xmm1, xmm7, xmm0
      vmulss  xmm5, xmm4, xmm1
      vmulss  xmm4, xmm3, xmm1
    }
  }
  __asm
  {
    vmovss  xmm3, dword ptr cs:__xmm@80000000800000008000000080000000
    vxorps  xmm0, xmm5, xmm3
    vmovss  dword ptr [rbx+4], xmm0
    vmulss  xmm0, xmm0, xmm10
    vmulss  xmm1, xmm9, xmm4
    vaddss  xmm2, xmm1, xmm0
    vcomiss xmm2, xmm8
    vmovss  dword ptr [rbx], xmm4
  }
  if ( v12 )
  {
    __asm
    {
      vxorps  xmm0, xmm4, xmm3
      vmovss  dword ptr [rbx], xmm0
      vmovss  dword ptr [rbx+4], xmm5
    }
  }
  __asm { vmaxss  xmm6, xmm6, cs:__real@42700000 }
  if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
    __debugbreak();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, cs:?level@@3Ulevel_locals_t@@A.frameDuration; level_locals_t level
    vmulss  xmm1, xmm0, cs:__real@3a83126f
    vmulss  xmm0, xmm1, xmm6
  }
  _R11 = &v61;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
  return *(float *)&_XMM0;
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
  if ( m_pAI->iPathEndTime )
    return 1;
  if ( m_pAI->pathEndAnimNotified )
  {
    __asm { vmovss  xmm1, cs:__real@3f800000; radius }
    if ( !Nav_IsAtGoal(m_pAI->pNavigator, *(float *)&_XMM1) )
      return 0;
  }
  return !this->m_pAI->blackboard.m_bMeleeChargeRequested;
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
  BOOL v6; 
  bool HasPath; 
  AIIterator *v8; 
  const gentity_s *v9; 
  ai_agent_t *ScriptedAgentInfo; 
  AIAgentInterface *v11; 
  actor_s *actor; 
  gentity_s *gentities; 
  EntityTagInfo *tagInfo; 
  AIActorInterface v15; 
  AIAgentInterface v16; 
  AIAgentInterface *v17; 
  vec3_t vGoalPos; 
  vec3_t vFinalGoal; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 6489, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 6490, ASSERT_TYPE_ASSERT, "( m_pAI->sentient )", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  if ( !this->GetCloseEnt(this) )
  {
    _RCX = this->m_pAI->ent;
    __asm
    {
      vmovss  xmm0, dword ptr [rcx+130h]
      vmovss  dword ptr [rsp+0D8h+vGoalPos], xmm0
      vmovss  xmm1, dword ptr [rcx+134h]
      vmovss  dword ptr [rsp+0D8h+vGoalPos+4], xmm1
      vmovss  xmm0, dword ptr [rcx+138h]
      vmovss  dword ptr [rsp+0D8h+vGoalPos+8], xmm0
    }
    v6 = AIScriptedInterface::AtClaimNode(this);
    HasPath = AICommonInterface::HasPath(this);
    if ( HasPath )
      AICommonInterface::GetPathFinalGoal(this, &vFinalGoal);
    v8 = this->GetAIIterator(this);
    v9 = (const gentity_s *)v8->GetFirst(v8);
    if ( v9 )
    {
      while ( 1 )
      {
        AIActorInterface::AIActorInterface(&v15);
        AIAgentInterface::AIAgentInterface(&v16);
        v16.__vftable = (AIAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
        v17 = NULL;
        if ( v9->agent && SV_Agent_IsScripted(v9->s.number) )
        {
          ScriptedAgentInfo = AIAgentInterface::GetScriptedAgentInfo(v9);
          if ( !ScriptedAgentInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 97, ASSERT_TYPE_ASSERT, "( pInfo )", (const char *)&queryFormat, "pInfo") )
            __debugbreak();
          if ( !ScriptedAgentInfo->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 98, ASSERT_TYPE_ASSERT, "( pInfo->sentientInfo )", (const char *)&queryFormat, "pInfo->sentientInfo") )
            __debugbreak();
          AINewAgentInterface::SetAgent((AINewAgentInterface *)&v16, ScriptedAgentInfo);
          v17 = &v16;
          v11 = &v16;
        }
        else
        {
          actor = v9->actor;
          if ( actor )
          {
            if ( !actor->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 105, ASSERT_TYPE_ASSERT, "( ent->actor->sentientInfo )", (const char *)&queryFormat, "ent->actor->sentientInfo") )
              __debugbreak();
            AIActorInterface::SetActor(&v15, v9->actor);
            v17 = (AIAgentInterface *)&v15;
          }
          v11 = v17;
          if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 6508, ASSERT_TYPE_ASSERT, "(pOtherAI)", (const char *)&queryFormat, "pOtherAI") )
            __debugbreak();
        }
        if ( (ai_scripted_t *)v11->GetAI(v11) != this->m_pAI )
        {
          if ( !v6 || (gentities = level.gentities, gentities[*(int *)(v11->GetAI(v11) + 2344)].sentient) )
          {
            if ( AICommonInterface::PointNear(this, &v9->r.currentOrigin, &vGoalPos) )
            {
              tagInfo = v9->tagInfo;
              if ( !tagInfo )
                break;
              if ( !tagInfo->parent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 6519, ASSERT_TYPE_ASSERT, "( pOtherEnt->tagInfo->parent )", (const char *)&queryFormat, "pOtherEnt->tagInfo->parent") )
                __debugbreak();
              if ( v9->tagInfo->parent->s.number != this->m_pAI->ent->s.number )
                break;
            }
          }
        }
        v9 = v8->GetNext(v8);
        if ( !v9 )
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
int AIScriptedInterface::CheckDeathAllowed(AIScriptedInterface *this, int damage, const vec3_t *damageDir)
{
  ai_scripted_t *m_pAI; 
  int v7; 
  ai_scripted_t *v8; 
  char v18; 
  char v19; 
  const dvar_t *v20; 
  int result; 
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
  _RCX = this->m_pAI;
  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vcomiss xmm0, dword ptr [rcx+668h]
  }
  AngleVectors(&_RCX->ent->r.currentAngles, &forward, NULL, NULL);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+78h+forward+4]
    vmulss  xmm3, xmm0, dword ptr [rbp+4]
  }
  _RAX = this->m_pAI;
  __asm
  {
    vmovss  xmm1, dword ptr [rsp+78h+forward]
    vmulss  xmm2, xmm1, dword ptr [rbp+0]
    vaddss  xmm0, xmm3, xmm2
    vxorps  xmm3, xmm0, cs:__xmm@80000000800000008000000080000000
    vcomiss xmm3, dword ptr [rax+668h]
  }
  if ( v18 | v19 )
    return v7;
  v20 = DVARFLT_ai_frontShieldDamageReduction;
  if ( !DVARFLT_ai_frontShieldDamageReduction && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_frontShieldDamageReduction") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v20);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, esi
    vmulss  xmm0, xmm0, dword ptr [rbx+28h]
    vcvttss2si eax, xmm0
  }
  return result;
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
  bool v3; 
  AINavigator *pNavigator; 
  pathnode_t *v11; 
  pathnode_t *v12; 
  bool CanClaimNode; 
  sentient_s *sentient; 
  vec3_t vFinalGoal; 
  vec3_t vPoint; 

  if ( this->IsAlive(this) && !this->m_pAI->fixedNode && !AIScriptedInterface::KeepClaimedNode(this) && this->m_pAI->arrivalInfo.arriving != 1 )
  {
    if ( AICommonInterface::HasPath(this) )
    {
      AICommonInterface::GetPathFinalGoal(this, &vFinalGoal);
      _RCX = this->m_pAI;
    }
    else
    {
      v3 = AIScriptedInterface::PathPending(this);
      _RCX = this->m_pAI;
      if ( v3 )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rcx+0D08h]
          vmovss  dword ptr [rsp+58h+vFinalGoal], xmm0
          vmovss  xmm1, dword ptr [rcx+0D0Ch]
          vmovss  dword ptr [rsp+58h+vFinalGoal+4], xmm1
          vmovss  xmm0, dword ptr [rcx+0D10h]
        }
      }
      else
      {
        _RAX = _RCX->ent;
        __asm
        {
          vmovss  xmm0, dword ptr [rax+130h]
          vmovss  dword ptr [rsp+58h+vFinalGoal], xmm0
          vmovss  xmm1, dword ptr [rax+134h]
          vmovss  dword ptr [rsp+58h+vFinalGoal+4], xmm1
          vmovss  xmm0, dword ptr [rax+138h]
        }
      }
      __asm { vmovss  dword ptr [rsp+58h+vFinalGoal+8], xmm0 }
    }
    if ( _RCX->sentient->pClaimedNode )
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
    v11 = Sentient_NearestNode(this->m_pAI->sentient);
    v12 = v11;
    if ( v11 && ((1 << LOBYTE(v11->constant.type)) & 0x82641EFC) != 0 && (v11->constant.spawnflags & 0x8000) != 0 && AICommonInterface::PointNearNode(this, &vFinalGoal, v11) )
    {
      CanClaimNode = Path_CanClaimNode(v12, this->m_pAI->sentient);
      sentient = this->m_pAI->sentient;
      if ( CanClaimNode )
        Sentient_ClaimNode(sentient, v12);
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

_BOOL8 __fastcall AIScriptedInterface::CheckSharpTurnNotify(AIScriptedInterface *this, double _XMM1_8, double _XMM2_8)
{
  ai_scripted_t *m_pAI; 
  bool ShouldDoSharpTurnSpace; 
  BOOL ShouldDoSharpTurn; 
  scrContext_t *v32; 
  float v34; 
  float v36; 
  scrContext_t *v37; 
  bool IsDoingReacquire; 
  _BOOL8 result; 
  float v43; 
  float outDistToCorner[4]; 
  vec3_t v45; 
  vec3_t nextPathPoint; 
  vec3_t outCorner; 
  vec3_t vec; 

  __asm { vmovaps [rsp+0E0h+var_40], xmm8 }
  m_pAI = this->m_pAI;
  __asm
  {
    vmovss  xmm8, cs:__real@bf800000
    vmovss  [rbp+57h+outDistToCorner], xmm8
  }
  if ( m_pAI->Physics.bSpace )
  {
    ShouldDoSharpTurnSpace = AIScriptedInterface::ShouldDoSharpTurnSpace(this, &nextPathPoint, outDistToCorner);
    __asm
    {
      vmovsd  xmm0, qword ptr [rbp+57h+nextPathPoint]
      vmovss  xmm8, [rbp+57h+outDistToCorner]
    }
    ShouldDoSharpTurn = ShouldDoSharpTurnSpace;
    __asm { vmovsd  qword ptr [rbp+57h+outCorner], xmm0 }
    outCorner.v[2] = nextPathPoint.v[2];
  }
  else
  {
    Sys_ProfBeginNamedEvent(0xFFFFFFFF, "ShouldDoSharpTurn");
    __asm
    {
      vxorps  xmm2, xmm2, xmm2
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm2, xmm2, eax; postTurnCheckDist
      vcvtsi2ss xmm1, xmm1, eax; preTurnCheckDist
    }
    ShouldDoSharpTurn = AIScriptedInterface::ShouldDoSharpTurn(this, *(float *)&_XMM1, *(float *)&_XMM2, &outCorner, &nextPathPoint);
    Sys_ProfEndNamedEvent();
    if ( !ShouldDoSharpTurn )
      goto LABEL_7;
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+57h+nextPathPoint]
      vsubss  xmm1, xmm0, dword ptr [rbp+57h+outCorner]
      vmovss  xmm2, dword ptr [rbp+57h+nextPathPoint+4]
      vsubss  xmm0, xmm2, dword ptr [rbp+57h+outCorner+4]
      vmovss  dword ptr [rbp+57h+vec], xmm1
      vmovss  xmm1, dword ptr [rbp+57h+nextPathPoint+8]
      vsubss  xmm2, xmm1, dword ptr [rbp+57h+outCorner+8]
      vmovss  [rbp+57h+var_58], xmm2
      vmovss  dword ptr [rbp+57h+vec+4], xmm0
    }
    *(double *)&_XMM0 = vectoyaw((const vec2_t *)&vec);
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vsubss  xmm0, xmm0, dword ptr [rcx+140h]
      vmulss  xmm5, xmm0, cs:__real@3b360b61
      vaddss  xmm2, xmm5, cs:__real@3f000000
      vxorps  xmm0, xmm0, xmm0
      vmovss  xmm3, xmm1, xmm2
      vroundss xmm4, xmm0, xmm3, 1
      vsubss  xmm1, xmm5, xmm4
      vmulss  xmm0, xmm1, cs:__real@43b40000
      vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vcomiss xmm0, cs:__real@42870000
    }
    ShouldDoSharpTurn = 0;
  }
  if ( ShouldDoSharpTurn )
  {
    __asm
    {
      vmovaps [rsp+0E0h+var_20], xmm6
      vmovaps [rsp+0E0h+var_30], xmm7
    }
    v32 = ScriptContext_Server();
    __asm { vmovsd  xmm6, qword ptr [rbp+57h+outCorner] }
    v34 = outCorner.v[2];
    __asm { vmovsd  xmm7, qword ptr [rbp+57h+nextPathPoint] }
    v36 = nextPathPoint.v[2];
    v37 = v32;
    IsDoingReacquire = AIScriptedInterface::IsDoingReacquire(this);
    vec.v[2] = v34;
    __asm { vmovss  [rsp+0E0h+var_B0], xmm8 }
    v45.v[2] = v36;
    __asm
    {
      vmovsd  qword ptr [rbp+57h+vec], xmm6
      vmovsd  [rbp+57h+var_90], xmm7
    }
    AIScriptedInterface::FireSharpTurnEvent(this, v37, IsDoingReacquire, &v45, 0, &vec, v43);
    __asm
    {
      vmovaps xmm7, [rsp+0E0h+var_30]
      vmovaps xmm6, [rsp+0E0h+var_20]
    }
  }
LABEL_7:
  result = ShouldDoSharpTurn;
  __asm { vmovaps xmm8, [rsp+0E0h+var_40] }
  return result;
}

/*
==============
AIScriptedInterface::CheckStop
==============
*/
bool AIScriptedInterface::CheckStop(AIScriptedInterface *this, pathnode_t *node)
{
  sentient_s *TargetSentient; 
  char v17; 
  char v18; 
  bool HasPath; 
  ai_scripted_t *m_pAI; 
  bool result; 
  pathnode_t *pClaimedNode; 
  vec3_t pos; 
  vec3_t v77; 
  vec3_t vPoint; 
  char v79; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
  }
  TargetSentient = AICommonInterface::GetTargetSentient(this);
  if ( !TargetSentient )
    goto LABEL_39;
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 4388, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  _RAX = TargetSentient->ent;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+130h]
    vsubss  xmm7, xmm0, dword ptr [rcx+130h]
    vmovss  xmm0, dword ptr [rax+138h]
    vmovss  xmm1, dword ptr [rax+134h]
    vsubss  xmm6, xmm1, dword ptr [rcx+134h]
    vsubss  xmm8, xmm0, dword ptr [rcx+138h]
  }
  *(double *)&_XMM0 = ((double (__fastcall *)(AIScriptedInterface *))this->GetPathEnemyFightDist)(this);
  __asm
  {
    vmulss  xmm2, xmm6, xmm6
    vmulss  xmm1, xmm7, xmm7
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm0, xmm0
    vcomiss xmm3, xmm0
  }
  if ( !v17 )
    goto LABEL_39;
  _RDX = this->m_pAI;
  __asm
  {
    vandps  xmm8, xmm8, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm8, dword ptr [rdx+268h]
  }
  if ( !(v17 | v18) || node && AICommonInterface::PointNearNode(this, &_RDX->ent->r.currentOrigin, node) )
    goto LABEL_39;
  if ( this->m_pAI->blackboard.m_bMeleeChargeRequested || AIScriptedInterface::IsDoingReacquire(this) || !AICommonInterface::RecentlySeeSentient(this, TargetSentient, 3000) || !AIScriptedInterface::CanShootEnemy(this, 100, 0, 0) )
    goto LABEL_39;
  HasPath = AICommonInterface::HasPath(this);
  if ( HasPath )
  {
    this->m_pAI->pNavigator->GetNextCorner(this->m_pAI->pNavigator, &pos);
    __asm
    {
      vmovss  xmm7, dword ptr [rsp+0C8h+pos+4]
      vmovss  xmm8, dword ptr [rsp+0C8h+pos]
    }
  }
  else if ( node )
  {
    pathnode_t::GetPos(node, &pos);
    __asm
    {
      vmovss  xmm7, dword ptr [rsp+0C8h+pos+4]
      vmovss  xmm8, dword ptr [rsp+0C8h+pos]
    }
  }
  else
  {
    _RAX = this->m_pAI;
    __asm
    {
      vmovss  xmm8, dword ptr [rax+258h]
      vmovss  dword ptr [rsp+0C8h+pos], xmm8
      vmovss  xmm7, dword ptr [rax+25Ch]
      vmovss  dword ptr [rsp+0C8h+pos+4], xmm7
      vmovss  xmm0, dword ptr [rax+260h]
      vmovss  dword ptr [rsp+0C8h+pos+8], xmm0
    }
  }
  __asm { vmovss  xmm0, dword ptr [rsp+0C8h+pos+8] }
  m_pAI = this->m_pAI;
  __asm
  {
    vsubss  xmm4, xmm0, dword ptr [rax+138h]
    vsubss  xmm6, xmm8, dword ptr [rax+130h]
    vsubss  xmm5, xmm7, dword ptr [rax+134h]
    vmulss  xmm0, xmm4, xmm4
    vmulss  xmm2, xmm5, xmm5
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm3, xmm2, xmm1
    vmovss  xmm1, cs:__real@3f800000
    vsubss  xmm8, xmm8, dword ptr [rax]
    vsubss  xmm7, xmm7, dword ptr [rax+4]
    vaddss  xmm9, xmm3, xmm0
    vsqrtss xmm2, xmm9, xmm9
    vcmpless xmm0, xmm2, cs:__real@80000000
    vblendvps xmm0, xmm2, xmm1, xmm0
    vdivss  xmm4, xmm1, xmm0
    vmulss  xmm0, xmm5, xmm4
    vmulss  xmm3, xmm0, xmm7
    vmulss  xmm1, xmm6, xmm4
    vmulss  xmm2, xmm1, xmm8
    vaddss  xmm3, xmm3, xmm2
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm3, xmm0
  }
  if ( TargetSentient->ent < (gentity_s *)0xFFFFFFFFFFFFFED0i64 && TargetSentient->ent != (gentity_s *)-304i64 )
  {
    __asm
    {
      vmulss  xmm1, xmm7, xmm7
      vmulss  xmm0, xmm8, xmm8
      vaddss  xmm1, xmm1, xmm0
      vcomiss xmm1, xmm9
    }
    if ( TargetSentient->ent >= (gentity_s *)0xFFFFFFFFFFFFFED0i64 )
    {
      if ( !m_pAI->useEnemyGoal )
      {
        m_pAI->useEnemyGoal = 1;
        AIScriptedInterface::UpdateGoalPos(this);
      }
      goto LABEL_22;
    }
  }
  if ( !HasPath )
    goto LABEL_39;
  if ( node )
  {
    pathnode_t::GetPos(node, &v77);
    m_pAI = this->m_pAI;
  }
  if ( m_pAI->useEnemyGoal )
    goto LABEL_43;
  if ( !AICommonInterface::PointAtGoal(this, &m_pAI->ent->r.currentOrigin, &m_pAI->codeGoal) )
    goto LABEL_43;
  if ( node )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+0C8h+var_88]
      vmovss  xmm1, dword ptr [rsp+0C8h+var_88+4]
      vsubss  xmm7, xmm0, dword ptr [rax]
      vsubss  xmm6, xmm1, dword ptr [rax+4]
    }
    *(double *)&_XMM0 = Nav_GetPathDistToGoal(this->m_pAI->pNavigator);
    __asm
    {
      vmulss  xmm2, xmm6, xmm6
      vmulss  xmm1, xmm7, xmm7
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm3, xmm2, xmm2
      vcomiss xmm0, xmm3
    }
    if ( v17 | v18 )
    {
LABEL_43:
      if ( this->UseEnemyGoal(this) )
        goto LABEL_39;
      _RAX = this->m_pAI;
      __asm { vmovss  xmm6, dword ptr [rax+6DCh] }
      if ( !AIScriptedInterface::HadPath(this) )
        __asm { vaddss  xmm6, xmm6, cs:__real@43800000 }
      _RCX = this->m_pAI;
      __asm
      {
        vmovaps xmm2, xmm6; maxDistFromPath
        vmovss  xmm3, dword ptr [rcx+6E0h]; maxDistDownPath
      }
      if ( !Nav_IsPointNearPath(_RCX->pNavigator, &TargetSentient->ent->r.currentOrigin, *(float *)&_XMM2, *(float *)&_XMM3) )
        goto LABEL_39;
      this->m_pAI->useEnemyGoal = 1;
      AIScriptedInterface::UpdateGoalPos(this);
      pClaimedNode = this->m_pAI->sentient->pClaimedNode;
      if ( pClaimedNode )
      {
        pathnode_t::GetPos(pClaimedNode, &vPoint);
        if ( AICommonInterface::PointAtGoal(this, &vPoint, &this->m_pAI->codeGoal) )
        {
          result = node != this->m_pAI->sentient->pClaimedNode;
          goto LABEL_40;
        }
      }
      if ( node && AICommonInterface::PointAtGoal(this, &v77, &this->m_pAI->codeGoal) )
      {
LABEL_39:
        result = 0;
        goto LABEL_40;
      }
    }
  }
LABEL_22:
  result = 1;
LABEL_40:
  _R11 = &v79;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
  return result;
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
  __int64 v7; 
  DObjAnimMat *RotTransArray; 
  AIWrapper v13; 

  AIWrapper::AIWrapper(&v13, self);
  m_pAI = v13.m_pAI;
  if ( !v13.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 3845, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  v7 = m_pAI->GetAI(m_pAI);
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 3849, ASSERT_TYPE_ASSERT, "( pAIScripted )", (const char *)&queryFormat, "pAIScripted") )
    __debugbreak();
  if ( BG_ActorIsProne((actor_prone_info_t *)(v7 + 2992), level.time) && SV_Game_DObjSetRotTransIndex(self, partBits, 0) )
  {
    __asm { vmovaps [rsp+98h+var_18], xmm6 }
    *(double *)&_XMM0 = BG_GetActorProneFraction((actor_prone_info_t *)(v7 + 2992), level.time);
    __asm { vmovaps xmm6, xmm0 }
    RotTransArray = SV_Game_DObjGetRotTransArray(self);
    if ( RotTransArray )
    {
      __asm
      {
        vmulss  xmm0, xmm6, dword ptr [rdi+0BC0h]
        vmulss  xmm0, xmm0, cs:__real@3c0efa35; radians
      }
      RotTransArray->quat.v[0] = 0.0;
      RotTransArray->quat.v[2] = 0.0;
      FastSinCos(*(const float *)&_XMM0, &RotTransArray->quat.v[1], &RotTransArray->quat.v[3]);
      DObjSetTrans(RotTransArray, &vec3_origin);
    }
    __asm { vmovaps xmm6, [rsp+98h+var_18] }
  }
}

/*
==============
AIScriptedInterface::DamageBlockedByShield
==============
*/
bool AIScriptedInterface::DamageBlockedByShield(AIScriptedInterface *this, const vec3_t *damageDir)
{
  char v13; 
  char v14; 
  vec3_t forward; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 1965, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !damageDir )
    return 0;
  _RCX = this->m_pAI;
  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vcomiss xmm0, dword ptr [rcx+668h]
  }
  AngleVectors(&_RCX->ent->r.currentAngles, &forward, NULL, NULL);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+58h+forward+4]
    vmulss  xmm3, xmm0, dword ptr [rdi+4]
  }
  _RAX = this->m_pAI;
  __asm
  {
    vmovss  xmm1, dword ptr [rsp+58h+forward]
    vmulss  xmm2, xmm1, dword ptr [rdi]
    vaddss  xmm0, xmm3, xmm2
    vxorps  xmm3, xmm0, cs:__xmm@80000000800000008000000080000000
    vcomiss xmm3, dword ptr [rax+668h]
  }
  return !(v13 | v14);
}

/*
==============
AIScriptedInterface::Die
==============
*/
void AIScriptedInterface::Die(AIScriptedInterface *this, const gentity_s *pInflictor, gentity_s *pAttacker, int iDamage, int iDamageFlags, int iMod, const Weapon *r_Weapon, bool isAlternate, const vec3_t *vDir, const hitLocation_t hitLoc)
{
  actor_s *actor; 
  gentity_s *v17; 
  ai_scripted_t *m_pAI; 
  gentity_s *v19; 
  ai_scripted_t *v20; 
  scr_string_t HitLocationString; 
  scrContext_t *v32; 
  __int64 v33; 
  __int64 v34; 
  int health; 
  int vDira; 
  int vDirb; 
  int vDirc; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 2072, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  actor = this->m_pAI->ent->actor;
  if ( actor && !actor->inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 2073, ASSERT_TYPE_ASSERT, "( !m_pAI->ent->actor || m_pAI->ent->actor->inuse )", (const char *)&queryFormat, "!m_pAI->ent->actor || m_pAI->ent->actor->inuse") )
    __debugbreak();
  _RDI = vDir;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vmovss  dword ptr [rsp+58h+vDir], xmm0
  }
  if ( (vDira & 0x7F800000) == 2139095040 )
    goto LABEL_31;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+4]
    vmovss  dword ptr [rsp+58h+vDir], xmm0
  }
  if ( (vDirb & 0x7F800000) == 2139095040 )
    goto LABEL_31;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+8]
    vmovss  dword ptr [rsp+58h+vDir], xmm0
  }
  if ( (vDirc & 0x7F800000) == 2139095040 )
  {
LABEL_31:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 2074, ASSERT_TYPE_SANITY, "( !IS_NAN( ( vDir )[0] ) && !IS_NAN( ( vDir )[1] ) && !IS_NAN( ( vDir )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( vDir )[0] ) && !IS_NAN( ( vDir )[1] ) && !IS_NAN( ( vDir )[2] )") )
      __debugbreak();
  }
  if ( !this->m_pAI->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 2076, ASSERT_TYPE_ASSERT, "( m_pAI->ent )", (const char *)&queryFormat, "m_pAI->ent") )
    __debugbreak();
  if ( this->m_pAI->ent->health > 0 )
  {
    health = this->m_pAI->ent->health;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 2077, ASSERT_TYPE_ASSERT, "( ( m_pAI->ent->health <= 0 ) )", "%s\n\t( m_pAI->ent->health ) = %i", "( m_pAI->ent->health <= 0 )", health) )
      __debugbreak();
  }
  if ( this->m_pAI->stateLevel >= 6 )
  {
    LODWORD(v34) = 6;
    LODWORD(v33) = this->m_pAI->stateLevel;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 2078, ASSERT_TYPE_ASSERT, "(unsigned)( m_pAI->stateLevel ) < (unsigned)( ( sizeof( *array_counter( m_pAI->eState ) ) + 0 ) )", "m_pAI->stateLevel doesn't index ARRAY_COUNT( m_pAI->eState )\n\t%i not in [0, %i)", v33, v34) )
      __debugbreak();
  }
  if ( (unsigned int)(this->m_pAI->eState[this->m_pAI->stateLevel] - 1) > 8 )
  {
    LODWORD(v34) = this->m_pAI->eState[this->m_pAI->stateLevel];
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 2079, ASSERT_TYPE_ASSERT, "( ( m_pAI->eState[m_pAI->stateLevel] > AIS_INVALID && m_pAI->eState[m_pAI->stateLevel] < AIS_COUNT ) )", "%s\n\t( m_pAI->eState[m_pAI->stateLevel] ) = %i", "( m_pAI->eState[m_pAI->stateLevel] > AIS_INVALID && m_pAI->eState[m_pAI->stateLevel] < AIS_COUNT )", v34) )
      __debugbreak();
  }
  v17 = this->GetEntity(this);
  m_pAI = this->m_pAI;
  v19 = v17;
  if ( m_pAI->eState[m_pAI->stateLevel] != AIS_DEATH )
  {
    m_pAI->painDeath.iDamageTaken = iDamage;
    v20 = this->m_pAI;
    v20->painDeath.damageDir.v[0] = _RDI->v[0];
    v20->painDeath.damageDir.v[1] = _RDI->v[1];
    v20->painDeath.damageDir.v[2] = _RDI->v[2];
    *(double *)&_XMM0 = vectoyaw((const vec2_t *)_RDI);
    __asm
    {
      vsubss  xmm1, xmm0, dword ptr [rsi+140h]
      vmulss  xmm5, xmm1, cs:__real@3b360b61
      vaddss  xmm2, xmm5, cs:__real@3f000000
      vxorps  xmm0, xmm0, xmm0
      vmovss  xmm3, xmm0, xmm2
      vxorps  xmm1, xmm1, xmm1
      vroundss xmm4, xmm1, xmm3, 1
      vsubss  xmm0, xmm5, xmm4
      vmulss  xmm1, xmm0, cs:__real@43b40000
      vcvttss2si ecx, xmm1
    }
    this->m_pAI->painDeath.iDamageYaw = _ECX;
    HitLocationString = G_Combat_GetHitLocationString(hitLoc);
    Scr_SetString(&this->m_pAI->painDeath.damageHitLoc, HitLocationString);
    if ( pInflictor )
    {
      v32 = ScriptContext_Server();
      GScr_Weapon_SetWeapon(v32, &this->m_pAI->painDeath.damageWeapon, r_Weapon, isAlternate);
      this->m_pAI->painDeath.damageMOD = iMod;
    }
    AIScriptedInterface::ForceState(this, AIS_DEATH);
    this->m_pAI->Physics.bIsAlive = 0;
    EntHandle::setEnt(&v19->sentient->lastAttacker, pAttacker);
    Scr_SetString(&v19->targetname, (scr_string_t)0);
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
  int number; 
  bool v10; 
  bool v11; 
  bool v17; 
  unsigned __int16 groundEntNum; 
  bool HasPath; 
  ai_scripted_t *v56; 
  char v57; 
  ai_scripted_t *v58; 
  const AINavigator *pNavigator; 
  BOOL v60; 
  ai_scripted_t *v61; 
  ai_scripted_t *v62; 
  ai_scripted_t *v63; 
  ai_scripted_t *v64; 
  int v65; 
  int v90; 
  ai_scripted_t *v91; 
  gentity_s *ent; 
  bool v93; 
  bool v94; 
  ai_scripted_t *v101; 
  gentity_s *v102; 
  pathnode_t *v107; 
  int v111; 
  __int64 v112; 
  pathsort_s *p_nodes; 
  pathnode_t *node; 
  char v126; 
  ai_scripted_t *v127; 
  gentity_s *v128; 
  ai_scripted_t *v136; 
  ai_scripted_t *v137; 
  gentity_s *v138; 
  ai_scripted_t *v139; 
  vec3_t angles; 
  tmat33_t<vec3_t> axis; 
  vec3_t pos; 
  pathsort_s nodes; 
  char v150; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
  }
  Profile_Begin(260);
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 3594, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 3595, ASSERT_TYPE_ASSERT, "( m_pAI->ent )", (const char *)&queryFormat, "m_pAI->ent") )
    __debugbreak();
  m_pAI = this->m_pAI;
  number = m_pAI->ent->s.number;
  v10 = number == m_pAI->Physics.iEntNum;
  if ( number != m_pAI->Physics.iEntNum )
  {
    v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 3596, ASSERT_TYPE_ASSERT, "( m_pAI->ent->s.number == m_pAI->Physics.iEntNum )", (const char *)&queryFormat, "m_pAI->ent->s.number == m_pAI->Physics.iEntNum");
    v10 = !v11;
    if ( v11 )
      __debugbreak();
  }
  _RCX = this->m_pAI;
  _RAX = _RCX->ent;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+8B4h]
    vucomiss xmm0, dword ptr [rax+100h]
  }
  if ( !v10 )
    goto LABEL_92;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+8B8h]
    vucomiss xmm0, dword ptr [rax+104h]
  }
  if ( !v10 )
    goto LABEL_92;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+8BCh]
    vucomiss xmm0, dword ptr [rax+108h]
  }
  if ( !v10 )
  {
LABEL_92:
    v17 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 3597, ASSERT_TYPE_ASSERT, "( Vec3Compare( m_pAI->ent->r.box.midPoint, m_pAI->Physics.bounds.midPoint ) )", (const char *)&queryFormat, "Vec3Compare( m_pAI->ent->r.box.midPoint, m_pAI->Physics.bounds.midPoint )");
    v10 = !v17;
    if ( v17 )
      __debugbreak();
  }
  _RCX = this->m_pAI;
  _RAX = _RCX->ent;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+8C0h]
    vucomiss xmm0, dword ptr [rax+10Ch]
  }
  if ( !v10 )
    goto LABEL_93;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+8C4h]
    vucomiss xmm0, dword ptr [rax+110h]
  }
  if ( !v10 )
    goto LABEL_93;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+8C8h]
    vucomiss xmm0, dword ptr [rax+114h]
  }
  if ( !v10 )
  {
LABEL_93:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 3598, ASSERT_TYPE_ASSERT, "( Vec3Compare( m_pAI->ent->r.box.halfSize, m_pAI->Physics.bounds.halfSize ) )", (const char *)&queryFormat, "Vec3Compare( m_pAI->ent->r.box.halfSize, m_pAI->Physics.bounds.halfSize )") )
      __debugbreak();
  }
  if ( this->m_pAI->Physics.ePhysicsType == AIPHYS_BAD && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 3599, ASSERT_TYPE_ASSERT, "( m_pAI->Physics.ePhysicsType != AIPHYS_BAD )", (const char *)&queryFormat, "m_pAI->Physics.ePhysicsType != AIPHYS_BAD") )
    __debugbreak();
  _RDX = this->m_pAI;
  groundEntNum = _RDX->Physics.groundEntNum;
  __asm { vxorps  xmm10, xmm10, xmm10 }
  if ( _RDX->Physics.ePhysicsType != AIPHYS_NORMAL_ABSOLUTE && _RDX->Physics.ePhysicsType != AIPHYS_NOGRAVITY_ABSOLUTE && _RDX->Physics.ePhysicsType != AIPHYS_ZONLY_PHYSICS_ABSOLUTE )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rdx+138h]
      vmovss  dword ptr [rsp+520h+angles+4], xmm0
      vmovss  xmm1, dword ptr [rdx+134h]
      vmovss  dword ptr [rsp+520h+angles], xmm1
      vmovss  dword ptr [rsp+520h+angles+8], xmm10
    }
    if ( this->Is3D(this) )
    {
      _RAX = this->m_pAI;
      __asm
      {
        vmovss  xmm0, dword ptr [rax+13Ch]
        vmovss  dword ptr [rsp+520h+angles+8], xmm0
      }
    }
    AnglesToAxis(&angles, &axis);
    _RAX = this->m_pAI;
    __asm
    {
      vmovss  xmm3, dword ptr [rax+888h]
      vmovss  xmm4, dword ptr [rax+88Ch]
      vmovss  xmm6, dword ptr [rax+890h]
      vmulss  xmm1, xmm3, dword ptr [rsp+520h+axis]
      vmovss  dword ptr [rax+888h], xmm1
      vmulss  xmm0, xmm3, dword ptr [rsp+520h+axis+4]
      vmovss  dword ptr [rax+88Ch], xmm0
      vmulss  xmm2, xmm3, dword ptr [rsp+520h+axis+8]
      vmovss  dword ptr [rax+890h], xmm2
    }
    _RAX = this->m_pAI;
    __asm
    {
      vmulss  xmm1, xmm4, dword ptr [rsp+520h+axis+0Ch]
      vaddss  xmm2, xmm1, dword ptr [rax+888h]
      vmovss  dword ptr [rax+888h], xmm2
      vmulss  xmm1, xmm4, dword ptr [rsp+520h+axis+10h]
      vaddss  xmm2, xmm1, dword ptr [rax+88Ch]
      vmovss  dword ptr [rax+88Ch], xmm2
      vmulss  xmm1, xmm4, dword ptr [rsp+520h+axis+14h]
      vaddss  xmm2, xmm1, dword ptr [rax+890h]
      vmovss  dword ptr [rax+890h], xmm2
    }
    v10 = !this->Is3D(this);
    _RAX = this->m_pAI;
    if ( v10 )
    {
      __asm
      {
        vaddss  xmm0, xmm6, dword ptr [rax+890h]
        vmovss  dword ptr [rax+890h], xmm0
      }
    }
    else
    {
      __asm
      {
        vmulss  xmm0, xmm6, dword ptr [rsp+520h+axis+18h]
        vaddss  xmm1, xmm0, dword ptr [rax+888h]
        vmovss  dword ptr [rax+888h], xmm1
        vmulss  xmm2, xmm6, dword ptr [rsp+520h+axis+1Ch]
        vaddss  xmm0, xmm2, dword ptr [rax+88Ch]
        vmovss  dword ptr [rax+88Ch], xmm0
        vmulss  xmm1, xmm6, dword ptr [rbp+420h+axis+20h]
        vaddss  xmm2, xmm1, dword ptr [rax+890h]
        vmovss  dword ptr [rax+890h], xmm2
      }
    }
  }
  _RBX = DVARFLT_bg_gravity;
  if ( !DVARFLT_bg_gravity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_gravity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  _RAX = this->m_pAI;
  __asm { vmovss  dword ptr [rax+8ACh], xmm0 }
  this->m_pAI->Physics.pathGoingDown = AINavigator::IsGoingDown(this->m_pAI->pNavigator);
  HasPath = AICommonInterface::HasPath(this);
  if ( HasPath && (v56 = this->m_pAI, v56->eAnimMode == AI_ANIM_MOVE_CODE) )
  {
    v57 = 1;
  }
  else
  {
    v56 = this->m_pAI;
    v57 = 0;
  }
  v56->Physics.bFollowingPath = v57;
  v58 = this->m_pAI;
  pNavigator = v58->pNavigator;
  if ( pNavigator )
  {
    if ( v58->Physics.bFollowingPath && Nav_IsStraightLineToGoal(pNavigator) )
    {
      v60 = 0;
    }
    else
    {
      if ( !AIScriptedInterface::IsInCoverArrival(this) )
      {
        v61 = this->m_pAI;
        if ( v61->sentient->pClaimedNode )
        {
          if ( AIScriptedInterface::KeepClaimedNode(this) )
          {
            v60 = 0;
            goto LABEL_50;
          }
          v61 = this->m_pAI;
        }
        v60 = !G_MotionWarp_Active(v61->ent->s.number);
        goto LABEL_50;
      }
      v60 = 0;
    }
  }
  else
  {
    v60 = 0;
  }
LABEL_50:
  this->m_pAI->Physics.navPhysicsState = v60;
  AIScriptedInterface::GetGroundTraceOrigin(this, &this->m_pAI->Physics.groundTraceOrigin);
  AIScriptedInterface::AttemptMoveAway(this);
  v62 = this->m_pAI;
  if ( v62->eAnimMode == AI_ANIM_MOVE_CODE && v62->moveMode && HasPath && !this->GetCloseEnt(this) )
  {
$try_path:
    Sys_ProfBeginNamedEvent(0xFF808080, "AIPhysicsAndDodge");
    if ( (this->m_pAI->eAnimMode != AI_ANIM_MOVE_CODE || !AICommonInterface::HasPath(this)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 3112, ASSERT_TYPE_ASSERT, "( m_pAI->eAnimMode == AI_ANIM_MOVE_CODE && HasPath() )", (const char *)&queryFormat, "m_pAI->eAnimMode == AI_ANIM_MOVE_CODE && HasPath()") )
      __debugbreak();
    this->m_pAI->pNavigator->GetNextCorner(this->m_pAI->pNavigator, &angles);
    _RCX = this->m_pAI;
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+520h+angles]
      vsubss  xmm5, xmm0, dword ptr [rax+130h]
      vmovss  dword ptr [rsp+520h+angles], xmm5
      vmovss  xmm0, dword ptr [rsp+520h+angles+4]
      vsubss  xmm2, xmm0, dword ptr [rax+134h]
      vmovss  dword ptr [rsp+520h+angles+4], xmm2
      vmovss  xmm0, dword ptr [rsp+520h+angles+8]
      vsubss  xmm3, xmm0, dword ptr [rax+138h]
      vmovss  dword ptr [rsp+520h+angles+8], xmm3
      vmulss  xmm1, xmm5, xmm5
      vmulss  xmm0, xmm2, xmm2
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm4, xmm2, xmm2
      vcmpless xmm0, xmm4, cs:__real@80000000
      vmovss  xmm2, cs:__real@3f800000
      vblendvps xmm1, xmm4, xmm2, xmm0
      vdivss  xmm2, xmm2, xmm1
      vmulss  xmm0, xmm5, xmm2
      vmovss  dword ptr [rcx+894h], xmm0
      vmulss  xmm1, xmm2, dword ptr [rsp+520h+angles+4]
      vmovss  dword ptr [rcx+898h], xmm1
      vmulss  xmm0, xmm2, dword ptr [rsp+520h+angles+8]
      vmovss  dword ptr [rcx+89Ch], xmm0
    }
    _RDX = this->m_pAI;
    _RCX = _RDX->ent;
    _RDX->Physics.vOrigin.v[0] = _RDX->ent->r.currentOrigin.v[0];
    __asm
    {
      vmovss  xmm0, dword ptr [rcx+134h]
      vmovss  dword ptr [rdx+830h], xmm0
      vmovss  xmm1, dword ptr [rcx+138h]
      vmovss  dword ptr [rdx+834h], xmm1
    }
    v90 = AIScriptedInterface::Physics_DoMovement(&this->m_pAI->Physics);
    this->m_pAI->dodgeMode = NONE;
    if ( v90 )
    {
      Sys_ProfEndNamedEvent();
    }
    else
    {
      Sys_ProfEndNamedEvent();
      this->m_pAI->Physics.vVelocity.v[2] = 0.0;
      v91 = this->m_pAI;
      ent = v91->ent;
      v91->Physics.vOrigin.v[0] = v91->ent->r.currentOrigin.v[0];
      v91->Physics.vOrigin.v[1] = ent->r.currentOrigin.v[1];
      v91->Physics.vOrigin.v[2] = ent->r.currentOrigin.v[2];
    }
    goto LABEL_81;
  }
  v63 = this->m_pAI;
  *(_QWORD *)v63->Physics.vPathDir.v = 0i64;
  v63->Physics.vPathDir.v[2] = 0.0;
  v10 = !AIScriptedInterface::ShouldMoveAwayFromCloseEnt(this);
  v64 = this->m_pAI;
  if ( v10 )
  {
    v64->dodgeMode = NONE;
    v101 = this->m_pAI;
    v102 = v101->ent;
    v101->Physics.vOrigin.v[0] = v101->ent->r.currentOrigin.v[0];
    v101->Physics.vOrigin.v[1] = v102->r.currentOrigin.v[1];
    v101->Physics.vOrigin.v[2] = v102->r.currentOrigin.v[2];
    v65 = AIScriptedInterface::Physics_DoMovement(&this->m_pAI->Physics);
  }
  else
  {
    v64->Physics.navPhysicsState = NAVPHYS_DISTANCECLIP;
    v65 = AIScriptedInterface::PhysicsMoveAway(this);
    if ( !v65 && this->m_pAI->eAnimMode == AI_ANIM_MOVE_CODE && HasPath )
      goto $try_path;
    v93 = AICommonInterface::HasPath(this);
    v94 = !v93;
    if ( v93 )
    {
      _RAX = this->m_pAI;
      __asm
      {
        vmovss  xmm1, dword ptr [rax+83Ch]
        vmovss  xmm0, dword ptr [rax+838h]
        vmulss  xmm2, xmm0, xmm0
        vmulss  xmm1, xmm1, xmm1
        vaddss  xmm2, xmm2, xmm1
        vcomiss xmm2, cs:__real@3f800000
      }
      if ( v94 )
        this->ClearPath(this);
    }
  }
  if ( !v65 )
  {
    Profile_Begin(277);
    _RCX = &this->m_pAI->ent->r.currentOrigin;
    __asm
    {
      vmovss  xmm7, dword ptr [rcx]
      vmovss  xmm8, dword ptr [rcx+4]
      vmovss  xmm9, dword ptr [rcx+8]
    }
    v107 = NULL;
    __asm
    {
      vmovss  xmm6, cs:__real@7f7fffff
      vmovss  xmm3, cs:__real@43000000; maxHeight
      vmovss  xmm2, cs:__real@43c00000; maxDist
    }
    v111 = Path_NodesInCylinder(_RCX, NULL, *(float *)&_XMM2, *(float *)&_XMM3, &nodes, 64, -1);
    v112 = v111;
    if ( v111 > 0 )
    {
      p_nodes = &nodes;
      do
      {
        node = p_nodes->node;
        pathnode_t::GetPos(p_nodes->node, &angles);
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+520h+angles]
          vsubss  xmm3, xmm0, xmm7
          vmovss  xmm1, dword ptr [rsp+520h+angles+4]
          vsubss  xmm2, xmm1, xmm8
          vmovss  xmm0, dword ptr [rsp+520h+angles+8]
          vsubss  xmm4, xmm0, xmm9
          vmulss  xmm2, xmm2, xmm2
          vmulss  xmm1, xmm3, xmm3
          vaddss  xmm3, xmm2, xmm1
          vmulss  xmm0, xmm4, xmm4
          vaddss  xmm5, xmm3, xmm0
          vcomiss xmm5, xmm6
        }
        if ( !(v126 | v10) )
          node = v107;
        v107 = node;
        ++p_nodes;
        __asm { vminss  xmm6, xmm5, xmm6 }
        --v112;
      }
      while ( v112 );
    }
    Profile_EndInternal(NULL);
    if ( v107 )
    {
      pathnode_t::GetPos(v107, &pos);
      v127 = this->m_pAI;
      v128 = v127->ent;
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+420h+pos+8]
        vsubss  xmm2, xmm0, dword ptr [rdx+138h]
        vmovss  xmm1, cs:__real@41000000
        vcomiss xmm2, xmm1
      }
      if ( v126 | v10 )
      {
        __asm { vcomiss xmm2, xmm10 }
        if ( v126 )
        {
          __asm
          {
            vcmpltss xmm1, xmm2, cs:__real@c1900000
            vmovss  xmm0, cs:__real@c1000000
            vblendvps xmm2, xmm10, xmm0, xmm1
          }
        }
      }
      else
      {
        __asm { vmovaps xmm2, xmm1 }
      }
      v127->Physics.vOrigin.v[0] = v128->r.currentOrigin.v[0];
      v127->Physics.vOrigin.v[1] = v128->r.currentOrigin.v[1];
      v127->Physics.vOrigin.v[2] = v128->r.currentOrigin.v[2];
      _RAX = this->m_pAI;
      __asm
      {
        vaddss  xmm0, xmm2, dword ptr [rax+834h]
        vmovss  dword ptr [rax+834h], xmm0
      }
      this->m_pAI->Physics.vVelocity.v[2] = 0.0;
    }
  }
LABEL_81:
  v136 = this->m_pAI;
  v137 = v136;
  if ( v136->Physics.stepMove && !v136->Physics.bJumping )
  {
    ((void (__fastcall *)(AIScriptedInterface *, ai_scripted_t *))this->SetStepMoveCounter)(this, v136);
    v137 = this->m_pAI;
  }
  v138 = v137->ent;
  v138->r.currentOrigin.v[0] = v137->Physics.vOrigin.v[0];
  v138->r.currentOrigin.v[1] = v137->Physics.vOrigin.v[1];
  v138->r.currentOrigin.v[2] = v137->Physics.vOrigin.v[2];
  this->m_pAI->Physics.ePhysicsType = AIPHYS_BAD;
  this->m_pAI->ent->s.groundEntityNum = this->m_pAI->Physics.groundEntNum;
  Nav_SetPos(this->m_pAI->pNavigator, &this->m_pAI->ent->r.currentOrigin);
  if ( AICommonInterface::IsInBadplace(this) )
    AICommonInterface::MarkInBadPlace(this);
  else
    AICommonInterface::MarkNotInBadPlace(this);
  v139 = this->m_pAI;
  if ( groundEntNum != v139->Physics.groundEntNum )
    GScr_Notify(v139->ent, scr_const.groundEntChanged, 0);
  Profile_EndInternal(NULL);
  _R11 = &v150;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
}

/*
==============
AIScriptedInterface::DoesPathCrossPlane
==============
*/

__int64 __fastcall AIScriptedInterface::DoesPathCrossPlane(AIScriptedInterface *this, vec2_t planeNormal, double planeDistance)
{
  int v15; 
  unsigned __int64 v16; 
  bool v17; 
  unsigned __int64 v18; 
  char *v25; 
  unsigned __int8 v32; 
  __int64 result; 
  vec2_t v38; 
  char ptr[400]; 
  char v40; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmm7, xmm2
  }
  v38 = planeNormal;
  if ( !AICommonInterface::HasPath(this) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 5441, ASSERT_TYPE_ASSERT, "(HasPath())", (const char *)&queryFormat, "HasPath()") )
    __debugbreak();
  __asm { vmovss  xmm6, cs:__real@43800000 }
  *(double *)&_XMM0 = AIScriptedInterface::GetDefaultSpeed(this);
  __asm
  {
    vcmpltss xmm2, xmm0, cs:__real@42a00000
    vmovss  xmm1, cs:__real@43000000
    vblendvps xmm6, xmm6, xmm1, xmm2
  }
  `eh vector constructor iterator'(ptr, 0x28ui64, 0xAui64, (void (__fastcall *)(void *))nav_cornerdata_t::nav_cornerdata_t, (void (__fastcall *)(void *))nav_cornerdata_t::~nav_cornerdata_t);
  __asm { vmovaps xmm3, xmm6 }
  v15 = ((__int64 (__fastcall *)(AINavigator *, char *, __int64))this->m_pAI->pNavigator->GetNextNCorners)(this->m_pAI->pNavigator, ptr, 10i64);
  if ( v15 <= 0 )
  {
LABEL_8:
    v32 = 0;
  }
  else
  {
    v16 = v15;
    v17 = 0;
    v18 = 0i64;
    __asm
    {
      vmovss  xmm4, dword ptr [rsp+228h+var_1E8+4]
      vmulss  xmm1, xmm4, dword ptr [rcx+134h]
      vmovss  xmm5, dword ptr [rsp+228h+var_1E8]
      vmulss  xmm0, xmm5, dword ptr [rcx+130h]
      vaddss  xmm1, xmm1, xmm0
      vsubss  xmm6, xmm1, xmm7
    }
    v25 = ptr;
    __asm { vxorps  xmm8, xmm8, xmm8 }
    while ( 1 )
    {
      __asm
      {
        vmulss  xmm1, xmm4, dword ptr [rax+4]
        vmulss  xmm0, xmm5, dword ptr [rax]
        vaddss  xmm1, xmm1, xmm0
        vsubss  xmm2, xmm1, xmm7
        vmulss  xmm3, xmm6, xmm2
        vcomiss xmm3, xmm8
      }
      if ( v17 )
        break;
      ++v18;
      v25 += 40;
      v17 = v18 < v16;
      if ( (__int64)v18 >= (__int64)v16 )
        goto LABEL_8;
    }
    v32 = 1;
  }
  `eh vector destructor iterator'(ptr, 0x28ui64, 0xAui64, (void (__fastcall *)(void *))nav_cornerdata_t::~nav_cornerdata_t);
  result = v32;
  _R11 = &v40;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
  return result;
}

/*
==============
AIScriptedInterface::DrawEngageDistCircle
==============
*/

void __fastcall AIScriptedInterface::DrawEngageDistCircle(AIScriptedInterface *this, const vec3_t *center, const vec2_t *dirFromCenter, double dist, const vec4_t *color, float infoScale, const char *label)
{
  const char *v18; 
  vec3_t xyz; 

  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmaxss  xmm6, xmm3, cs:__real@40800000
    vmovaps xmm1, xmm6; radius
  }
  _RSI = center;
  G_DebugCircle(center, *(float *)&_XMM1, color, 0, 1, 0);
  __asm
  {
    vmulss  xmm0, xmm6, dword ptr [rdi]
    vaddss  xmm1, xmm0, dword ptr [rsi]
    vmovss  xmm2, dword ptr [rsi+8]
    vmulss  xmm0, xmm6, dword ptr [rdi+4]
    vmovss  dword ptr [rsp+68h+xyz+8], xmm2
    vmovss  dword ptr [rsp+68h+xyz], xmm1
    vaddss  xmm1, xmm0, dword ptr [rsi+4]
    vcvtss2sd xmm2, xmm6, xmm6
    vmovq   r8, xmm2
    vmovss  dword ptr [rsp+68h+xyz+4], xmm1
  }
  v18 = j_va("%s: %3.f", label, _R8);
  __asm { vmovss  xmm2, [rsp+68h+infoScale]; scale }
  G_Main_AddDebugString(&xyz, &colorWhite, *(float *)&_XMM2, v18);
  __asm { vmovaps xmm6, [rsp+68h+var_18] }
}

/*
==============
AIScriptedInterface::EnemyInPathFightDist
==============
*/
bool AIScriptedInterface::EnemyInPathFightDist(AIScriptedInterface *this, sentient_s *enemy)
{
  char v14; 
  char v15; 
  bool result; 

  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_28], xmm7
    vmovaps [rsp+68h+var_38], xmm8
  }
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 4388, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !enemy && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 4389, ASSERT_TYPE_ASSERT, "( enemy )", (const char *)&queryFormat, "enemy") )
    __debugbreak();
  _RAX = enemy->ent;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+130h]
    vsubss  xmm7, xmm0, dword ptr [rcx+130h]
    vmovss  xmm0, dword ptr [rax+138h]
    vmovss  xmm1, dword ptr [rax+134h]
    vsubss  xmm6, xmm1, dword ptr [rcx+134h]
    vsubss  xmm8, xmm0, dword ptr [rcx+138h]
  }
  *(double *)&_XMM0 = ((double (__fastcall *)(AIScriptedInterface *))this->GetPathEnemyFightDist)(this);
  __asm
  {
    vmulss  xmm2, xmm6, xmm6
    vmulss  xmm1, xmm7, xmm7
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm0, xmm0
    vcomiss xmm3, xmm0
  }
  if ( !v14 )
    goto LABEL_10;
  _RAX = this->m_pAI;
  __asm
  {
    vandps  xmm8, xmm8, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm8, dword ptr [rax+268h]
  }
  if ( v14 | v15 )
    result = 1;
  else
LABEL_10:
    result = 0;
  __asm
  {
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm7, [rsp+68h+var_28]
    vmovaps xmm8, [rsp+68h+var_38]
  }
  return result;
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
  const dvar_t *v14; 
  const dvar_t *v15; 
  const dvar_t *v16; 
  const dvar_t *v17; 
  const dvar_t *v18; 
  bool v19; 
  int integer; 
  const dvar_t *v21; 
  bool v22; 
  const sentient_s *TargetSentient; 
  sentient_info_t *v25; 
  vec4_t *v26; 
  const vec4_t *v27; 
  vec3_t *p_currentOrigin; 
  const dvar_t *v46; 
  const dvar_t *v49; 
  vec3_t *p_dir; 
  vec3_t *v71; 
  const dvar_t *v78; 
  const dvar_t *v79; 
  gentity_s *v94; 
  GWeaponMap *Instance; 
  const Weapon *Weapon; 
  const gentity_s *v99; 
  gentity_s *v100; 
  gentity_s *v101; 
  gentity_s *v103; 
  const dvar_t *v105; 
  int Int_Internal_DebugName; 
  int number; 
  bool v108; 
  const char *v139; 
  const char *v151; 
  const char *v164; 
  const char *v176; 
  int v181; 
  ai_scripted_t *v182; 
  AINavigator *v186; 
  bool v187; 
  char v206; 
  const gentity_s *v207; 
  aiGoalSources v213; 
  const gentity_s *v220; 
  sentient_s *sentient; 
  const vec4_t *v222; 
  const char *v227; 
  const char *v244; 
  scr_string_t v245; 
  const char *v246; 
  const char *v249; 
  int v251; 
  scr_string_t targetname; 
  const char *v253; 
  const char *v255; 
  const char *v260; 
  EntityTagInfo *tagInfo; 
  const char *v265; 
  const char *v266; 
  const vec4_t *v280; 
  const char *v282; 
  __int64 v283; 
  scr_string_t v284; 
  const char *v285; 
  ai_scripted_t *v288; 
  unsigned int codeGoalSrc; 
  const char *v291; 
  const vec4_t *v292; 
  ai_scripted_t *m_pAI; 
  ai_reacquire_state_t reacquireState; 
  const char *v299; 
  const vec4_t *v300; 
  sentient_s *v304; 
  SentientHandle *p_pFavoriteEnemy; 
  sentient_s *v314; 
  const char *v315; 
  unsigned int missCount; 
  unsigned int hitCount; 
  const char *v325; 
  const char *v328; 
  actor_s *v330; 
  const char *v333; 
  ai_scripted_t *v335; 
  const char *v338; 
  ai_scripted_t *v341; 
  GScrAnimScriptFunc *pAnimScriptFunc; 
  const char *v344; 
  const char *v345; 
  ai_scripted_t *v348; 
  __int64 eMode; 
  __int64 v351; 
  const char *v352; 
  const vec4_t *v353; 
  const char *v363; 
  gentity_s *v367; 
  const char *v368; 
  ai_scripted_t *v370; 
  const char *v379; 
  const char *v383; 
  ai_scripted_t *v389; 
  const char *v391; 
  scr_string_t AlertLevel; 
  const char *v396; 
  const char *v397; 
  ai_scripted_t *v402; 
  const char *v412; 
  const vec4_t *v413; 
  sentient_info_t *v423; 
  const char *v424; 
  ai_scripted_t *v427; 
  const char *v429; 
  const vec4_t *v434; 
  const char *v442; 
  SentientHandle *v446; 
  sentient_s *v447; 
  const char *v448; 
  char v451; 
  bool v452; 
  const char *v463; 
  const char *v471; 
  sentient_s *v479; 
  const char *v485; 
  AINavigator *pNavigator; 
  AINavigator2D *v492; 
  char *fmt; 
  __int64 duration; 
  __int64 v501; 
  char v502; 
  bool enabled; 
  int v504; 
  actor_s *actor; 
  const sentient_s *v506; 
  vec3_t vEyePosOut; 
  vec3_t out; 
  vec3_t xyz; 
  vec3_t start; 
  tmat33_t<vec3_t> axis; 
  vec3_t end; 
  vec3_t v513; 

  _R15 = source;
  _RSI = this->GetEntity(this);
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 2259, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( SV_Game_DObjExists(_RSI) )
  {
    v14 = DVARINT_bg_entinfo;
    __asm
    {
      vmovaps [rsp+1A0h+var_90], xmm12
      vmovaps [rsp+1A0h+var_B0], xmm14
    }
    if ( !DVARINT_bg_entinfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_entinfo") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    if ( v14->current.integer == 2 )
      goto LABEL_17;
    v15 = DVARINT_bg_entinfo;
    if ( !DVARINT_bg_entinfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_entinfo") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    if ( v15->current.integer == 3 )
      goto LABEL_17;
    v16 = DVARINT_bg_entinfo;
    if ( !DVARINT_bg_entinfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_entinfo") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v16);
    v502 = 0;
    if ( v16->current.integer == 5 )
LABEL_17:
      v502 = 1;
    v17 = DVARINT_bg_entinfo;
    if ( !DVARINT_bg_entinfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_entinfo") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v17);
    v108 = v17->current.integer == 3;
    v18 = DVARINT_bg_entinfo;
    v19 = !v108;
    if ( !DVARINT_bg_entinfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_entinfo") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v18);
    integer = v18->current.integer;
    v21 = DVARBOOL_ai_whatamidoingwrong;
    v22 = 0;
    v504 = integer;
    if ( integer < 4 )
      v22 = v19;
    if ( !DVARBOOL_ai_whatamidoingwrong && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_whatamidoingwrong") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v21);
    enabled = v21->current.enabled;
    actor = this->m_pAI->ent->actor;
    _R13 = AICommonInterface::GetTargetEntity(this);
    TargetSentient = AICommonInterface::GetTargetSentient(this);
    v506 = TargetSentient;
    Sentient_GetDebugEyePosition(this->m_pAI->sentient, &vEyePosOut);
    if ( v22 )
    {
      if ( TargetSentient )
      {
        if ( !this->m_pAI->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 2287, ASSERT_TYPE_ASSERT, "( m_pAI->sentientInfo )", (const char *)&queryFormat, "m_pAI->sentientInfo") )
          __debugbreak();
        v25 = &this->m_pAI->sentientInfo[TargetSentient - level.sentients];
        if ( v25->VisCache.bVisible )
        {
          v26 = &colorGreen;
          if ( level.time - v25->VisCache.iLastUpdateTime > 250 )
            v26 = &colorYellow;
        }
        else
        {
          v26 = &colorRed;
        }
        Sentient_GetDebugEyePosition(TargetSentient, &v513);
        v27 = v26;
        p_currentOrigin = &v513;
        goto LABEL_41;
      }
      if ( _R13 )
      {
        p_currentOrigin = &_R13->r.currentOrigin;
        v27 = &colorBlue;
LABEL_41:
        G_DebugLine(&vEyePosOut, p_currentOrigin, v27, 1);
      }
    }
    __asm
    {
      vmovss  xmm0, dword ptr [r15]
      vsubss  xmm3, xmm0, dword ptr [rsi+130h]
      vmovss  xmm1, dword ptr [r15+4]
      vmovss  xmm0, dword ptr [r15+8]
      vsubss  xmm2, xmm1, dword ptr [rsi+134h]
      vsubss  xmm4, xmm0, dword ptr [rsi+138h]
    }
    _RBX = DVARFLT_g_entinfo_maxdist;
    __asm
    {
      vmulss  xmm2, xmm2, xmm2
      vmulss  xmm1, xmm3, xmm3
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm3, xmm2, xmm1
      vaddss  xmm2, xmm3, xmm0
      vsqrtss xmm12, xmm2, xmm2
    }
    if ( !DVARFLT_g_entinfo_maxdist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_entinfo_maxdist") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vxorps  xmm14, xmm14, xmm14
      vcomiss xmm14, dword ptr [rbx+28h]
    }
    if ( v451 )
    {
      _RBX = DVARFLT_g_entinfo_maxdist;
      if ( !DVARFLT_g_entinfo_maxdist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_entinfo_maxdist") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm { vcomiss xmm12, dword ptr [rbx+28h] }
      if ( !(v451 | v108) )
        goto LABEL_331;
    }
    __asm
    {
      vmovaps [rsp+1A0h+var_40], xmm7
      vmovaps [rsp+1A0h+var_50], xmm8
      vmovss  xmm8, cs:__real@3f800000
      vmovaps [rsp+1A0h+var_80], xmm11
      vmovaps [rsp+1A0h+var_A0], xmm13
    }
    if ( actor )
    {
      *(double *)&_XMM0 = G_GetEntInfoScale();
      __asm { vmovaps xmm11, xmm0 }
    }
    else
    {
      __asm { vmovaps xmm11, xmm8 }
    }
    v46 = DVARINT_bg_entinfo;
    __asm
    {
      vmulss  xmm0, xmm12, cs:__real@3b2aaaab
      vmulss  xmm13, xmm11, xmm0
    }
    if ( !DVARINT_bg_entinfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_entinfo") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v46);
    if ( v46->current.integer != 3 )
    {
      v49 = DVARINT_bg_entinfo;
      if ( !DVARINT_bg_entinfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_entinfo") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v49);
      if ( v49->current.integer != 4 )
      {
        if ( this->Is3D(this) )
        {
          AnglesToAxis(&_RSI->r.currentAngles, &axis);
          G_DebugBoxOriented(&_RSI->r.currentOrigin, &_RSI->r.box, &axis, &colorMagenta, 1, 0);
        }
        else
        {
          __asm { vmovss  xmm2, dword ptr [rsi+140h]; yaw }
          G_DebugBox(&_RSI->r.currentOrigin, &_RSI->r.box, *(float *)&_XMM2, &colorMagenta, 1, 0);
        }
      }
    }
    _RAX = this->m_pAI;
    __asm
    {
      vmovaps [rsp+1A0h+var_30], xmm6
      vmovss  xmm7, cs:__real@42400000
      vmulss  xmm0, xmm7, dword ptr [rax+128h]
      vmovss  xmm2, dword ptr [rax+12Ch]
      vmovss  xmm3, dword ptr [rax+130h]
      vaddss  xmm1, xmm0, dword ptr [rsp+1A0h+vEyePosOut]
      vmulss  xmm2, xmm7, xmm2
      vaddss  xmm0, xmm2, dword ptr [rsp+1A0h+vEyePosOut+4]
      vmovss  dword ptr [rbp+0A0h+end], xmm1
      vmulss  xmm1, xmm7, xmm3
      vaddss  xmm2, xmm1, dword ptr [rsp+1A0h+vEyePosOut+8]
      vmovss  dword ptr [rbp+0A0h+end+8], xmm2
      vmovss  dword ptr [rbp+0A0h+end+4], xmm0
    }
    if ( v22 )
    {
      if ( _RAX->threat.hasThreateningEnemy )
        __asm { vmovss  xmm0, dword ptr [rax+9Ch] }
      else
        __asm { vmovss  xmm0, dword ptr [rax+98h]; X }
      *(float *)&_XMM0 = acosf_0(*(float *)&_XMM0);
      __asm { vmovaps xmm6, xmm0 }
      G_DebugLine(&vEyePosOut, &end, &colorBlue, 1);
      p_dir = &this->m_pAI->eyeInfo.dir;
      __asm
      {
        vmovaps xmm1, xmm6; radians
        vmovss  [rsp+1A0h+var_130], xmm14
      }
      Vec2Rotate((const vec2_t *)p_dir, *(float *)&_XMM1, (vec2_t *)&out);
      __asm
      {
        vmulss  xmm0, xmm7, dword ptr [rsp+1A0h+out]
        vaddss  xmm2, xmm0, dword ptr [rsp+1A0h+vEyePosOut]
        vmulss  xmm0, xmm7, dword ptr [rsp+1A0h+out+4]
        vmovss  dword ptr [rsp+1A0h+out], xmm2
        vaddss  xmm2, xmm0, dword ptr [rsp+1A0h+vEyePosOut+4]
        vmulss  xmm0, xmm7, [rsp+1A0h+var_130]
        vmovss  dword ptr [rsp+1A0h+out+4], xmm2
        vaddss  xmm2, xmm0, dword ptr [rsp+1A0h+vEyePosOut+8]
        vmovss  [rsp+1A0h+var_130], xmm2
      }
      G_DebugLine(&vEyePosOut, &out, &colorLtBlue, 1);
      __asm { vxorps  xmm1, xmm6, cs:__xmm@80000000800000008000000080000000; radians }
      v71 = &this->m_pAI->eyeInfo.dir;
      __asm { vmovss  [rsp+1A0h+var_130], xmm14 }
      Vec2Rotate((const vec2_t *)v71, *(float *)&_XMM1, (vec2_t *)&out);
      __asm
      {
        vmulss  xmm1, xmm7, dword ptr [rsp+1A0h+out]
        vaddss  xmm2, xmm1, dword ptr [rsp+1A0h+vEyePosOut]
        vmulss  xmm1, xmm7, dword ptr [rsp+1A0h+out+4]
        vmovss  dword ptr [rsp+1A0h+out], xmm2
        vaddss  xmm2, xmm1, dword ptr [rsp+1A0h+vEyePosOut+4]
        vmulss  xmm1, xmm7, [rsp+1A0h+var_130]
        vmovss  dword ptr [rsp+1A0h+out+4], xmm2
        vaddss  xmm2, xmm1, dword ptr [rsp+1A0h+vEyePosOut+8]
        vmovss  [rsp+1A0h+var_130], xmm2
      }
      G_DebugLine(&vEyePosOut, &out, &colorLtBlue, 1);
    }
    v78 = DVARINT_ai_debugEntIndex;
    if ( !DVARINT_ai_debugEntIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugEntIndex") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v78);
    if ( v78->current.integer == _RSI->s.number )
    {
      DebugDrawNodeSelectionOverlay();
      v79 = DVARBOOL_ai_debugTargets;
      if ( !DVARBOOL_ai_debugTargets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugTargets") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v79);
      if ( v79->current.enabled )
        AIScriptedInterface::DebugDrawTargets(this);
    }
    _RAX = this->m_pAI;
    if ( _RAX->ScriptOrient.eMode )
      __asm { vmovss  xmm0, dword ptr [rax+99Ch] }
    else
      __asm { vmovss  xmm0, dword ptr [rax+984h]; yaw }
    YawVectors(*(float *)&_XMM0, &out, NULL);
    __asm
    {
      vmulss  xmm1, xmm7, dword ptr [rsp+1A0h+out]
      vaddss  xmm2, xmm1, dword ptr [rsp+1A0h+vEyePosOut]
      vmulss  xmm1, xmm7, dword ptr [rsp+1A0h+out+4]
      vmovss  xmm0, dword ptr [rsp+1A0h+vEyePosOut+8]
      vmovss  dword ptr [rsp+1A0h+out], xmm2
      vaddss  xmm2, xmm1, dword ptr [rsp+1A0h+vEyePosOut+4]
      vmovss  dword ptr [rsp+1A0h+out+4], xmm2
      vmovss  [rsp+1A0h+var_130], xmm0
    }
    G_DebugLine(&vEyePosOut, &out, &colorMagenta, 1);
    _RAX = this->m_pAI;
    __asm { vmovss  xmm0, dword ptr [rax+138h]; yaw }
    YawVectors(*(float *)&_XMM0, &out, NULL);
    __asm
    {
      vmulss  xmm1, xmm7, dword ptr [rsp+1A0h+out]
      vaddss  xmm2, xmm1, dword ptr [rsp+1A0h+vEyePosOut]
      vmulss  xmm1, xmm7, dword ptr [rsp+1A0h+out+4]
      vmovss  xmm0, dword ptr [rsp+1A0h+vEyePosOut+8]
      vmovss  dword ptr [rsp+1A0h+out], xmm2
      vaddss  xmm2, xmm1, dword ptr [rsp+1A0h+vEyePosOut+4]
      vmovss  dword ptr [rsp+1A0h+out+4], xmm2
      vmovss  [rsp+1A0h+var_130], xmm0
    }
    G_DebugLine(&vEyePosOut, &out, &colorOrange, 1);
    if ( v22 && EntHandle::isDefined(&this->m_pAI->grenade.pGrenade) )
    {
      v94 = EntHandle::ent(&this->m_pAI->grenade.pGrenade);
      Instance = GWeaponMap::GetInstance();
      if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 438, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
        __debugbreak();
      if ( !v94 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 439, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
        __debugbreak();
      Weapon = BgWeaponMap::GetWeapon(Instance, v94->s.weaponHandle);
      BG_ExplosionRadius(Weapon, 0);
      __asm
      {
        vxorps  xmm6, xmm6, xmm6
        vcvtsi2ss xmm6, xmm6, eax
      }
      v99 = EntHandle::ent(&this->m_pAI->grenade.pGrenade);
      if ( !G_Missile_IsGrenade(v99) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 2393, ASSERT_TYPE_ASSERT, "( G_Missile_IsGrenade( m_pAI->grenade.pGrenade.ent() ) )", (const char *)&queryFormat, "G_Missile_IsGrenade( m_pAI->grenade.pGrenade.ent() )") )
        __debugbreak();
      v100 = EntHandle::ent(&this->m_pAI->grenade.pGrenade);
      G_DebugLine(&vEyePosOut, &v100->c.mover.angle.pos1, &colorOrange, 1);
      v101 = EntHandle::ent(&this->m_pAI->grenade.pGrenade);
      __asm { vmovss  xmm1, cs:__real@41000000; radius }
      G_DebugCircle(&v101->c.mover.angle.pos1, *(float *)&_XMM1, &colorOrange, 0, 1, 0);
      v103 = EntHandle::ent(&this->m_pAI->grenade.pGrenade);
      __asm { vmovaps xmm1, xmm6; radius }
      G_DebugCircle(&v103->c.mover.angle.pos1, *(float *)&_XMM1, &colorOrange, 0, 1, 0);
    }
    v105 = DVARBOOL_ai_debugEngagementDist;
    if ( !DVARBOOL_ai_debugEngagementDist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugEngagementDist") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v105);
    if ( v105->current.enabled )
    {
      if ( _R13 )
      {
        Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_ai_debugEntIndex, "ai_debugEntIndex");
        number = _RSI->s.number;
        v108 = Int_Internal_DebugName == number;
        if ( Int_Internal_DebugName == number )
        {
          _RCX = this->m_pAI;
          __asm
          {
            vmovss  xmm1, dword ptr [r13+130h]
            vmovss  xmm2, dword ptr [r13+134h]
            vmovss  dword ptr [rsp+1A0h+out], xmm1
            vmovss  dword ptr [rsp+1A0h+out+4], xmm2
          }
          _RAX = _RCX->ent;
          __asm
          {
            vmovaps [rsp+1A0h+var_60], xmm9
            vmovaps [rsp+1A0h+var_70], xmm10
            vmovss  xmm10, cs:__real@40800000
            vmovss  xmm0, dword ptr [rax+138h]
            vmovss  [rsp+1A0h+var_130], xmm0
          }
          _RAX = _RCX->ent;
          __asm
          {
            vmovss  xmm0, dword ptr [rax+130h]
            vsubss  xmm4, xmm0, xmm1
            vmovss  xmm1, dword ptr [rax+134h]
            vsubss  xmm5, xmm1, xmm2
            vmulss  xmm0, xmm4, xmm4
            vmulss  xmm2, xmm5, xmm5
            vaddss  xmm1, xmm2, xmm0
            vsqrtss xmm3, xmm1, xmm1
            vcmpless xmm0, xmm3, cs:__real@80000000
            vblendvps xmm0, xmm3, xmm8, xmm0
            vdivss  xmm1, xmm8, xmm0
            vmovss  xmm0, dword ptr [rcx+514h]
            vucomiss xmm0, xmm14
            vmulss  xmm7, xmm1, xmm4
            vmulss  xmm9, xmm1, xmm5
          }
          if ( !v108 )
            goto LABEL_101;
          __asm { vucomiss xmm14, dword ptr [rcx+510h] }
          if ( !v108 )
          {
LABEL_101:
            __asm
            {
              vmaxss  xmm6, xmm0, xmm10
              vmovaps xmm1, xmm6; radius
            }
            G_DebugCircle(&out, *(float *)&_XMM1, &colorLtGreen, 0, 1, 0);
            __asm
            {
              vmulss  xmm0, xmm7, xmm6
              vaddss  xmm1, xmm0, dword ptr [rsp+1A0h+out]
              vmulss  xmm2, xmm9, xmm6
              vaddss  xmm0, xmm2, dword ptr [rsp+1A0h+out+4]
              vmovss  dword ptr [rsp+1A0h+xyz], xmm1
              vmovss  xmm1, [rsp+1A0h+var_130]
              vcvtss2sd xmm2, xmm6, xmm6
              vmovq   r8, xmm2
              vmovss  dword ptr [rbp+0A0h+xyz+8], xmm1
              vmovss  dword ptr [rsp+1A0h+xyz+4], xmm0
            }
            v139 = j_va("%s: %3.f", "engage min falloff", _R8);
            __asm { vmovaps xmm2, xmm13; scale }
            G_Main_AddDebugString(&xyz, &colorWhite, *(float *)&_XMM2, v139);
            _RCX = this->m_pAI;
          }
          __asm
          {
            vmovss  xmm0, dword ptr [rcx+510h]
            vmaxss  xmm6, xmm0, xmm10
            vmovaps xmm1, xmm6; radius
          }
          G_DebugCircle(&out, *(float *)&_XMM1, &colorGreen, 0, 1, 0);
          __asm
          {
            vmulss  xmm0, xmm7, xmm6
            vaddss  xmm1, xmm0, dword ptr [rsp+1A0h+out]
            vmulss  xmm2, xmm9, xmm6
            vaddss  xmm0, xmm2, dword ptr [rsp+1A0h+out+4]
            vmovss  dword ptr [rsp+1A0h+xyz], xmm1
            vmovss  xmm1, [rsp+1A0h+var_130]
            vcvtss2sd xmm2, xmm6, xmm6
            vmovq   r8, xmm2
            vmovss  dword ptr [rbp+0A0h+xyz+8], xmm1
            vmovss  dword ptr [rsp+1A0h+xyz+4], xmm0
          }
          v151 = j_va("%s: %3.f", "engage min", _R8);
          __asm { vmovaps xmm2, xmm13; scale }
          G_Main_AddDebugString(&xyz, &colorWhite, *(float *)&_XMM2, v151);
          _RAX = this->m_pAI;
          __asm
          {
            vmovss  xmm0, dword ptr [rax+518h]
            vmaxss  xmm6, xmm0, xmm10
            vmovaps xmm1, xmm6; radius
          }
          G_DebugCircle(&out, *(float *)&_XMM1, &colorOrange, 0, 1, 0);
          __asm
          {
            vmulss  xmm0, xmm7, xmm6
            vaddss  xmm1, xmm0, dword ptr [rsp+1A0h+out]
            vmulss  xmm2, xmm9, xmm6
            vaddss  xmm0, xmm2, dword ptr [rsp+1A0h+out+4]
            vmovss  dword ptr [rsp+1A0h+xyz], xmm1
            vmovss  xmm1, [rsp+1A0h+var_130]
            vcvtss2sd xmm2, xmm6, xmm6
            vmovq   r8, xmm2
            vmovss  dword ptr [rbp+0A0h+xyz+8], xmm1
            vmovss  dword ptr [rsp+1A0h+xyz+4], xmm0
          }
          v164 = j_va("%s: %3.f", "engage max", _R8);
          __asm { vmovaps xmm2, xmm13; scale }
          G_Main_AddDebugString(&xyz, &colorWhite, *(float *)&_XMM2, v164);
          _RAX = this->m_pAI;
          __asm
          {
            vmovss  xmm0, dword ptr [rax+51Ch]
            vmaxss  xmm6, xmm0, xmm10
            vmovaps xmm1, xmm6; radius
          }
          G_DebugCircle(&out, *(float *)&_XMM1, &colorLtOrange, 0, 1, 0);
          __asm
          {
            vmulss  xmm0, xmm7, xmm6
            vaddss  xmm1, xmm0, dword ptr [rsp+1A0h+out]
            vmulss  xmm3, xmm9, xmm6
            vaddss  xmm0, xmm3, dword ptr [rsp+1A0h+out+4]
            vmovss  dword ptr [rsp+1A0h+xyz], xmm1
            vmovss  xmm1, [rsp+1A0h+var_130]
            vcvtss2sd xmm2, xmm6, xmm6
            vmovq   r8, xmm2
            vmovss  dword ptr [rbp+0A0h+xyz+8], xmm1
            vmovss  dword ptr [rsp+1A0h+xyz+4], xmm0
          }
          v176 = j_va("%s: %3.f", "engage max falloff", _R8);
          __asm { vmovaps xmm2, xmm13; scale }
          G_Main_AddDebugString(&xyz, &colorWhite, *(float *)&_XMM2, v176);
          __asm
          {
            vmovaps xmm10, [rsp+1A0h+var_70]
            vmovaps xmm9, [rsp+1A0h+var_60]
          }
        }
      }
    }
    __asm { vmovaps xmm13, [rsp+1A0h+var_A0] }
    if ( !v22 && v504 < 4 )
    {
LABEL_151:
      sentient = this->m_pAI->sentient;
      if ( sentient->eTeam > (unsigned int)TEAM_FIVE )
        v222 = &colorYellow;
      else
        v222 = &colorTeam[sentient->eTeam];
      __asm
      {
        vmulss  xmm0, xmm12, cs:__real@3c955556
        vmulss  xmm7, xmm0, xmm11
      }
      if ( v504 >= 4 )
      {
        __asm
        {
          vmulss  xmm1, xmm7, cs:__real@3f000000
          vaddss  xmm1, xmm1, dword ptr [rsp+1A0h+vEyePosOut+8]
          vmovss  dword ptr [rsp+1A0h+vEyePosOut+8], xmm1
        }
        v227 = j_va("%i", (unsigned int)_RSI->s.number);
        __asm
        {
          vmulss  xmm0, xmm12, cs:__real@3accccce
          vmulss  xmm2, xmm0, xmm11; scale
        }
        G_Main_AddDebugString(&vEyePosOut, v222, *(float *)&_XMM2, v227);
LABEL_330:
        __asm
        {
          vmovaps xmm6, [rsp+1A0h+var_30]
          vmovaps xmm11, [rsp+1A0h+var_80]
          vmovaps xmm8, [rsp+1A0h+var_50]
          vmovaps xmm7, [rsp+1A0h+var_40]
        }
LABEL_331:
        __asm
        {
          vmovaps xmm12, [rsp+1A0h+var_90]
          vmovaps xmm14, [rsp+1A0h+var_B0]
        }
        return;
      }
      __asm
      {
        vmulss  xmm1, xmm7, cs:__real@41200000
        vaddss  xmm1, xmm1, dword ptr [rsp+1A0h+vEyePosOut+8]
        vmovss  dword ptr [rsp+1A0h+vEyePosOut+8], xmm1
      }
      if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_ai_debugAccuracy, "ai_debugAccuracy") && Dvar_GetInt_Internal_DebugName(DVARINT_ai_debugEntIndex, "ai_debugEntIndex") == _RSI->s.number )
      {
        __asm
        {
          vmulss  xmm0, xmm12, cs:__real@3accccce
          vmulss  xmm1, xmm0, xmm11; scale
          vmovaps xmm2, xmm7; rowHeight
        }
        AI_DrawDebugAccuracy(&vEyePosOut, *(float *)&_XMM1, *(float *)&_XMM2);
        goto LABEL_330;
      }
      if ( !cg_t::ms_allocatedCount )
      {
        LODWORD(v501) = cg_t::ms_allocatedCount;
        LODWORD(duration) = 0;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_t::ms_allocatedCount )", "localClientNum doesn't index cg_t::ms_allocatedCount\n\t%i not in [0, %i)", duration, v501) )
          __debugbreak();
      }
      if ( !cg_t::ms_cgArray[0] )
      {
        LODWORD(v501) = 0;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1167, ASSERT_TYPE_ASSERT, "(cg_t::ms_cgArray[localClientNum])", "%s\n\tTrying to access unallocated client globals for localClientNum %d\n", "cg_t::ms_cgArray[localClientNum]", v501) )
          __debugbreak();
      }
      if ( cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN )
      {
        LODWORD(v501) = 0;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1168, ASSERT_TYPE_ASSERT, "(cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client globals for localClientNum %d but the client global type is not known\n", "cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN", v501) )
          __debugbreak();
      }
      _RAX = cg_t::ms_cgArray[0];
      __asm
      {
        vmulss  xmm0, xmm12, cs:__real@be3aaaab
        vmulss  xmm2, xmm0, xmm11
        vmulss  xmm1, xmm2, dword ptr [rax+6948h]
        vmovss  xmm3, dword ptr [rax+6944h]
        vaddss  xmm1, xmm1, dword ptr [rsp+1A0h+vEyePosOut]
        vmovss  xmm0, dword ptr [rsp+1A0h+vEyePosOut+4]
        vmulss  xmm2, xmm2, xmm3
        vmovss  dword ptr [rsp+1A0h+vEyePosOut], xmm1
        vsubss  xmm1, xmm0, xmm2
        vmovss  dword ptr [rsp+1A0h+vEyePosOut+4], xmm1
      }
      if ( Dvar_GetInt_Internal_DebugName(DVARINT_bg_entinfo, "bg_entinfo") == 2 || !Dvar_GetInt_Internal_DebugName(DVARINT_g_entinfo_AItext, "g_entinfo_AItext") )
      {
        targetname = _RSI->targetname;
        if ( targetname )
          v253 = SL_ConvertToString(targetname);
        else
          v253 = "<noname>";
        __asm
        {
          vmulss  xmm0, xmm12, cs:__real@3accccce
          vmulss  xmm6, xmm0, xmm11
        }
        v255 = j_va("%i : %s", (unsigned int)_RSI->s.number, v253);
        __asm { vmovaps xmm2, xmm6; scale }
        G_Main_AddDebugString(&vEyePosOut, v222, *(float *)&_XMM2, v255);
        LOBYTE(v251) = 30;
      }
      else
      {
        v244 = g_entinfoAITextNames[Dvar_GetInt_Internal_DebugName(DVARINT_g_entinfo_AItext, "g_entinfo_AItext")];
        v245 = _RSI->targetname;
        if ( v245 )
          v246 = SL_ConvertToString(v245);
        else
          v246 = "<noname>";
        __asm
        {
          vmulss  xmm0, xmm12, cs:__real@3accccce
          vmulss  xmm6, xmm0, xmm11
        }
        v249 = j_va("%i : %s (%s)", (unsigned int)_RSI->s.number, v246, v244);
        __asm { vmovaps xmm2, xmm6; scale }
        G_Main_AddDebugString(&vEyePosOut, v222, *(float *)&_XMM2, v249);
        v251 = 1 << Dvar_GetInt_Internal_DebugName(DVARINT_g_entinfo_AItext, "g_entinfo_AItext");
      }
      if ( (v251 & 6) == 0 )
        goto LABEL_236;
      __asm { vxorps  xmm8, xmm8, xmm8 }
      if ( (v251 & 4) != 0 && !enabled )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+1A0h+vEyePosOut+8]
          vsubss  xmm1, xmm0, xmm7
          vmovss  dword ptr [rsp+1A0h+vEyePosOut+8], xmm1
        }
        v260 = j_va("health: %i", (unsigned int)_RSI->health);
        __asm { vmovaps xmm2, xmm6; scale }
        G_Main_AddDebugString(&vEyePosOut, v222, *(float *)&_XMM2, v260);
      }
      tagInfo = _RSI->tagInfo;
      if ( tagInfo )
      {
        if ( !tagInfo->parent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 2611, ASSERT_TYPE_ASSERT, "( tagInfo->parent )", (const char *)&queryFormat, "tagInfo->parent") )
          __debugbreak();
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+1A0h+vEyePosOut+8]
          vsubss  xmm1, xmm0, xmm7
          vmovss  dword ptr [rsp+1A0h+vEyePosOut+8], xmm1
        }
        v265 = (char *)&queryFormat.fmt + 3;
        if ( tagInfo->collisionPhysics )
          v265 = "(C)";
        v266 = j_va("LINKED TO: %d %s", (unsigned int)tagInfo->parent->s.number, v265);
        __asm { vmovaps xmm2, xmm6; scale }
        G_Main_AddDebugString(&vEyePosOut, &colorRed, *(float *)&_XMM2, v266);
      }
      if ( _R13 )
      {
        Sentient_GetOrigin(this->m_pAI->sentient, &start);
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+0A0h+start]
          vsubss  xmm3, xmm0, dword ptr [r13+130h]
          vmovss  xmm1, dword ptr [rbp+0A0h+start+4]
          vsubss  xmm2, xmm1, dword ptr [r13+134h]
          vmovss  xmm0, dword ptr [rbp+0A0h+start+8]
          vsubss  xmm4, xmm0, dword ptr [r13+138h]
          vmulss  xmm2, xmm2, xmm2
          vmulss  xmm1, xmm3, xmm3
          vmulss  xmm0, xmm4, xmm4
          vaddss  xmm3, xmm2, xmm1
          vaddss  xmm2, xmm3, xmm0
          vsqrtss xmm8, xmm2, xmm2
        }
      }
      __asm { vmovss  xmm0, dword ptr [rsp+1A0h+vEyePosOut+8] }
      v280 = &colorYellow;
      __asm
      {
        vsubss  xmm1, xmm0, xmm7
        vmovss  dword ptr [rsp+1A0h+vEyePosOut+8], xmm1
      }
      if ( _R13 )
        v280 = &colorRed;
      if ( _R13 )
      {
        v284 = _R13->targetname;
        if ( v284 )
          v282 = SL_ConvertToString(v284);
        else
          v282 = "<noname target>";
        v283 = (unsigned int)_R13->s.number;
      }
      else
      {
        v282 = "no target";
        v283 = 0i64;
      }
      v285 = j_va("%i : %s", v283, v282);
      __asm { vmovaps xmm2, xmm6; scale }
      G_Main_AddDebugString(&vEyePosOut, v280, *(float *)&_XMM2, v285);
      if ( !usingCodeGoal(this->m_pAI) )
      {
LABEL_213:
        m_pAI = this->m_pAI;
        if ( m_pAI->arrivalInfo.arriving )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+1A0h+vEyePosOut+8]
            vsubss  xmm1, xmm0, xmm7
            vmovaps xmm2, xmm6; scale
            vmovss  dword ptr [rsp+1A0h+vEyePosOut+8], xmm1
          }
          G_Main_AddDebugString(&vEyePosOut, &colorRed, *(float *)&_XMM2, "ARRIVING");
          m_pAI = this->m_pAI;
        }
        reacquireState = m_pAI->combat.reacquireState;
        switch ( reacquireState )
        {
          case AI_REACQUIRE_ENABLED:
            v299 = "REACQUIRING";
            v300 = &colorRed;
            break;
          case AI_REACQUIRE_ENABLED_STEP:
            v299 = "REACQUIRING-STEP";
            v300 = &colorRed;
            break;
          case AI_REACQUIRE_REACQUIRED:
            v299 = "REACQUIRED";
            v300 = &colorGreen;
            break;
          default:
            goto LABEL_222;
        }
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+1A0h+vEyePosOut+8]
          vsubss  xmm1, xmm0, xmm7
          vmovaps xmm2, xmm6; scale
          vmovss  dword ptr [rsp+1A0h+vEyePosOut+8], xmm1
        }
        G_Main_AddDebugString(&vEyePosOut, v300, *(float *)&_XMM2, v299);
LABEL_222:
        v304 = _RSI->sentient;
        if ( v304->bIgnoreAll )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+1A0h+vEyePosOut+8]
            vsubss  xmm1, xmm0, xmm7
            vmovaps xmm2, xmm6; scale
            vmovss  dword ptr [rsp+1A0h+vEyePosOut+8], xmm1
          }
          G_Main_AddDebugString(&vEyePosOut, &colorRed, *(float *)&_XMM2, "IGNORE ALL");
          v304 = _RSI->sentient;
        }
        if ( v304->bIgnoreMe )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+1A0h+vEyePosOut+8]
            vsubss  xmm1, xmm0, xmm7
            vmovaps xmm2, xmm6; scale
            vmovss  dword ptr [rsp+1A0h+vEyePosOut+8], xmm1
          }
          G_Main_AddDebugString(&vEyePosOut, &colorRed, *(float *)&_XMM2, "IGNORE ME");
        }
        if ( SentientHandle::isDefined(&this->m_pAI->threat.pFavoriteEnemy) )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+1A0h+vEyePosOut+8]
            vsubss  xmm1, xmm0, xmm7
          }
          p_pFavoriteEnemy = &this->m_pAI->threat.pFavoriteEnemy;
          __asm { vmovss  dword ptr [rsp+1A0h+vEyePosOut+8], xmm1 }
          v314 = SentientHandle::sentient(p_pFavoriteEnemy);
          v315 = j_va("FAVORITE ENEMY: %d", (unsigned int)v314->ent->s.number);
          __asm { vmovaps xmm2, xmm6; scale }
          G_Main_AddDebugString(&vEyePosOut, &colorRed, *(float *)&_XMM2, v315);
        }
        if ( (v251 & 4) != 0 )
        {
          __asm { vmovss  xmm0, dword ptr [rsp+1A0h+vEyePosOut+8] }
          _RAX = this->m_pAI;
          __asm
          {
            vsubss  xmm1, xmm0, xmm7
            vmovss  dword ptr [rsp+1A0h+vEyePosOut+8], xmm1
          }
          missCount = _RAX->shoot.missCount;
          hitCount = missCount;
          if ( !missCount )
            hitCount = _RAX->shoot.hitCount;
          __asm { vmovss  xmm2, dword ptr [rax+440h] }
          LODWORD(fmt) = hitCount;
          __asm
          {
            vcvtss2sd xmm2, xmm2, xmm2
            vcvtss2sd xmm1, xmm8, xmm8
          }
          v325 = "HIT";
          if ( missCount )
            v325 = "MISS";
          __asm
          {
            vmovq   r8, xmm2
            vmovq   rdx, xmm1
          }
          v328 = j_va("range: %.2f ac: %.2f %s %u", *(double *)&_XMM1, *(double *)&_XMM2, v325, fmt);
          __asm { vmovaps xmm2, xmm6; scale }
          G_Main_AddDebugString(&vEyePosOut, &colorWhite, *(float *)&_XMM2, v328);
          v330 = actor;
          if ( !actor )
          {
LABEL_240:
            if ( (v251 & 0x12) != 0 && !enabled )
            {
              __asm { vmovss  xmm0, dword ptr [rsp+1A0h+vEyePosOut+8] }
              v341 = this->m_pAI;
              __asm
              {
                vsubss  xmm1, xmm0, xmm7
                vmovss  dword ptr [rsp+1A0h+vEyePosOut+8], xmm1
              }
              pAnimScriptFunc = v341->pAnimScriptFunc;
              if ( pAnimScriptFunc )
                v344 = SL_ConvertToString(pAnimScriptFunc->name);
              else
                v344 = "<none>";
              v345 = j_va((const char *)&queryFormat, v344);
              __asm { vmovaps xmm2, xmm6; scale }
              G_Main_AddDebugString(&vEyePosOut, &colorWhite, *(float *)&_XMM2, v345);
            }
            if ( (v251 & 8) != 0 && !enabled )
            {
              __asm { vmovss  xmm0, dword ptr [rsp+1A0h+vEyePosOut+8] }
              v348 = this->m_pAI;
              __asm
              {
                vsubss  xmm1, xmm0, xmm7
                vmovss  dword ptr [rsp+1A0h+vEyePosOut+8], xmm1
              }
              eMode = v348->ScriptOrient.eMode;
              if ( (_DWORD)eMode )
              {
                v351 = v348->CodeOrient.eMode;
                v352 = j_va("orient: %s (%s <- script)", ai_orient_mode_text[v351], ai_orient_mode_text[eMode]);
                v108 = (_DWORD)eMode == (_DWORD)v351;
                v353 = &colorRed;
                v330 = actor;
                if ( v108 )
                  v353 = &colorYellow;
              }
              else
              {
                v352 = j_va("orient: %s", ai_orient_mode_text[v348->CodeOrient.eMode]);
                v353 = &colorGreen;
              }
              __asm { vmovaps xmm2, xmm6; scale }
              G_Main_AddDebugString(&vEyePosOut, v353, *(float *)&_XMM2, v352);
              if ( this->m_pAI->orientation.faceMotion )
              {
                __asm
                {
                  vmovss  xmm0, dword ptr [rsp+1A0h+vEyePosOut+8]
                  vsubss  xmm1, xmm0, xmm7
                  vmovaps xmm2, xmm6; scale
                  vmovss  dword ptr [rsp+1A0h+vEyePosOut+8], xmm1
                }
                G_Main_AddDebugString(&vEyePosOut, &colorWhite, *(float *)&_XMM2, "face motion");
              }
              if ( AICommonInterface::HasPath(this) )
              {
                __asm
                {
                  vmovss  xmm0, dword ptr [rsp+1A0h+vEyePosOut+8]
                  vsubss  xmm1, xmm0, xmm7
                  vmovaps xmm2, xmm6; scale
                  vmovss  dword ptr [rsp+1A0h+vEyePosOut+8], xmm1
                }
                G_Main_AddDebugString(&vEyePosOut, &colorWhite, *(float *)&_XMM2, "has path");
              }
              if ( v330 )
              {
                if ( v330->pPileUpActor )
                {
                  __asm
                  {
                    vmovss  xmm0, dword ptr [rsp+1A0h+vEyePosOut+8]
                    vsubss  xmm1, xmm0, xmm7
                    vmovss  dword ptr [rsp+1A0h+vEyePosOut+8], xmm1
                  }
                  v363 = j_va("blockee: %d, blocker: %d", (unsigned int)v330->pPileUpActor->ent->s.number, (unsigned int)v330->pPileUpEnt->s.number);
                  __asm { vmovaps xmm2, xmm6; scale }
                  G_Main_AddDebugString(&vEyePosOut, &colorWhite, *(float *)&_XMM2, v363);
                }
                if ( EntHandle::isDefined(&v330->pCloseEnt) )
                {
                  __asm
                  {
                    vmovss  xmm0, dword ptr [rsp+1A0h+vEyePosOut+8]
                    vsubss  xmm1, xmm0, xmm7
                    vmovss  dword ptr [rsp+1A0h+vEyePosOut+8], xmm1
                  }
                  v367 = EntHandle::ent(&v330->pCloseEnt);
                  v368 = j_va("closeEnt: %d", (unsigned int)v367->s.number);
                  __asm { vmovaps xmm2, xmm6; scale }
                  G_Main_AddDebugString(&vEyePosOut, &colorWhite, *(float *)&_XMM2, v368);
                }
              }
              v370 = this->m_pAI;
              if ( v370->bDontAvoidPlayer )
              {
                __asm
                {
                  vmovss  xmm0, dword ptr [rsp+1A0h+vEyePosOut+8]
                  vsubss  xmm1, xmm0, xmm7
                  vmovaps xmm2, xmm6; scale
                  vmovss  dword ptr [rsp+1A0h+vEyePosOut+8], xmm1
                }
                G_Main_AddDebugString(&vEyePosOut, &colorWhite, *(float *)&_XMM2, "dontavoidplayer");
                v370 = this->m_pAI;
              }
              if ( (v370->Physics.iTraceMask & 0x2000000) == 0 )
              {
                __asm
                {
                  vmovss  xmm0, dword ptr [rsp+1A0h+vEyePosOut+8]
                  vsubss  xmm1, xmm0, xmm7
                  vmovaps xmm2, xmm6; scale
                  vmovss  dword ptr [rsp+1A0h+vEyePosOut+8], xmm1
                }
                G_Main_AddDebugString(&vEyePosOut, &colorWhite, *(float *)&_XMM2, "pushPlayer");
                v370 = this->m_pAI;
              }
              if ( !v370->pushable || !v370->script_pushable )
              {
                __asm
                {
                  vmovss  xmm0, dword ptr [rsp+1A0h+vEyePosOut+8]
                  vsubss  xmm1, xmm0, xmm7
                  vmovss  dword ptr [rsp+1A0h+vEyePosOut+8], xmm1
                }
                v379 = j_va("pushable: %d, script_pushable: %d", v370->pushable, v370->script_pushable);
                __asm { vmovaps xmm2, xmm6; scale }
                G_Main_AddDebugString(&vEyePosOut, &colorWhite, *(float *)&_XMM2, v379);
                v370 = this->m_pAI;
              }
              __asm { vmovss  xmm0, dword ptr [rsp+1A0h+vEyePosOut+8] }
              *(_QWORD *)axis.m[0].v = "none";
              *(_QWORD *)&axis.row0.z = "up";
              *(_QWORD *)&axis.row1.y = "down";
              __asm
              {
                vsubss  xmm1, xmm0, xmm7
                vmovss  dword ptr [rsp+1A0h+vEyePosOut+8], xmm1
              }
              v383 = j_va("physics: %d, stairs: %s, ground: %d", (unsigned int)v370->Physics.ePhysicsType, *(const char **)&axis.m[0].v[2 * v370->Physics.stairsState], v370->Physics.groundEntNum);
              __asm { vmovaps xmm2, xmm6; scale }
              G_Main_AddDebugString(&vEyePosOut, &colorWhite, *(float *)&_XMM2, v383);
              if ( this->m_pAI->Physics.bDeflected )
              {
                __asm
                {
                  vmovss  xmm0, dword ptr [rsp+1A0h+vEyePosOut+8]
                  vsubss  xmm1, xmm0, xmm7
                  vmovaps xmm2, xmm6; scale
                  vmovss  dword ptr [rsp+1A0h+vEyePosOut+8], xmm1
                }
                G_Main_AddDebugString(&vEyePosOut, &colorRed, *(float *)&_XMM2, "deflected");
              }
            }
            if ( (v251 & 0xA) != 0 && !enabled )
            {
              if ( this->m_pAI->eAnimMode >= (unsigned int)AI_ANIM_COUNT )
              {
                LODWORD(v501) = 13;
                LODWORD(duration) = this->m_pAI->eAnimMode;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 2805, ASSERT_TYPE_ASSERT, "(unsigned)( m_pAI->eAnimMode ) < (unsigned)( ( sizeof( *array_counter( animModeNames ) ) + 0 ) )", "m_pAI->eAnimMode doesn't index ARRAY_COUNT( animModeNames )\n\t%i not in [0, %i)", duration, v501) )
                  __debugbreak();
              }
              __asm { vmovss  xmm0, dword ptr [rsp+1A0h+vEyePosOut+8] }
              v389 = this->m_pAI;
              __asm
              {
                vsubss  xmm1, xmm0, xmm7
                vmovss  dword ptr [rsp+1A0h+vEyePosOut+8], xmm1
              }
              v391 = j_va("animmode %s script: %s", animModeNames[v389->eAnimMode], animModeNames[v389->eScriptSetAnimMode]);
              __asm { vmovaps xmm2, xmm6; scale }
              G_Main_AddDebugString(&vEyePosOut, &colorWhite, *(float *)&_XMM2, v391);
            }
            if ( (v251 & 4) == 0 )
              goto LABEL_294;
            __asm
            {
              vmovss  xmm0, dword ptr [rsp+1A0h+vEyePosOut+8]
              vsubss  xmm1, xmm0, xmm7
              vmovss  dword ptr [rsp+1A0h+vEyePosOut+8], xmm1
            }
            AlertLevel = AIScriptedInterface::GetAlertLevel(this);
            v396 = SL_ConvertToString(AlertLevel);
            v397 = j_va("AlertLevel: %d (%s)", (unsigned int)this->m_pAI->combat.alertLevel, v396);
            __asm { vmovaps xmm2, xmm6; scale }
            G_Main_AddDebugString(&vEyePosOut, &colorWhite, *(float *)&_XMM2, v397);
            if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&this->m_pAI->ent->s.lerp.eFlags, ACTIVE, 0x10u) )
            {
              __asm
              {
                vmovss  xmm0, dword ptr [rsp+1A0h+vEyePosOut+8]
                vsubss  xmm1, xmm0, xmm7
                vmovaps xmm2, xmm6; scale
                vmovss  dword ptr [rsp+1A0h+vEyePosOut+8], xmm1
              }
              G_Main_AddDebugString(&vEyePosOut, &colorRed, *(float *)&_XMM2, "Invulnerable");
            }
            v402 = this->m_pAI;
            if ( v402->combat.provideCoveringFire )
            {
              __asm
              {
                vmovss  xmm0, dword ptr [rsp+1A0h+vEyePosOut+8]
                vsubss  xmm1, xmm0, xmm7
                vmovaps xmm2, xmm6; scale
                vmovss  dword ptr [rsp+1A0h+vEyePosOut+8], xmm1
              }
              G_Main_AddDebugString(&vEyePosOut, &colorWhite, *(float *)&_XMM2, "Covering fire");
              v402 = this->m_pAI;
            }
            if ( v402->suppression.ignoreSuppression )
            {
              __asm
              {
                vmovss  xmm0, dword ptr [rsp+1A0h+vEyePosOut+8]
                vsubss  xmm1, xmm0, xmm7
                vmovaps xmm2, xmm6; scale
                vmovss  dword ptr [rsp+1A0h+vEyePosOut+8], xmm1
              }
              G_Main_AddDebugString(&vEyePosOut, &colorRed, *(float *)&_XMM2, "Ignore suppression");
            }
            if ( AIScriptedInterface::IsSuppressed(this) )
            {
              __asm { vmovss  xmm0, dword ptr [rsp+1A0h+vEyePosOut+8] }
              _RAX = this->m_pAI;
              __asm
              {
                vsubss  xmm1, xmm0, xmm7
                vmovss  dword ptr [rsp+1A0h+vEyePosOut+8], xmm1
                vmovss  xmm1, dword ptr [rax+53Ch]
                vcvtss2sd xmm1, xmm1, xmm1
                vmovq   rdx, xmm1
              }
              v412 = j_va("Suppressed %0.2f", _RDX);
              v413 = &colorRed;
            }
            else
            {
              _RAX = this->m_pAI;
              __asm { vcomiss xmm14, dword ptr [rax+53Ch] }
              if ( !AIScriptedInterface::IsMoveSuppressed(this) )
                goto LABEL_289;
              __asm
              {
                vmovss  xmm0, dword ptr [rsp+1A0h+vEyePosOut+8]
                vsubss  xmm1, xmm0, xmm7
                vmovss  dword ptr [rsp+1A0h+vEyePosOut+8], xmm1
              }
              v412 = "Move Suppressed";
              v413 = &colorCyan;
            }
            __asm { vmovaps xmm2, xmm6; scale }
            G_Main_AddDebugString(&vEyePosOut, v413, *(float *)&_XMM2, v412);
LABEL_289:
            if ( v506 )
            {
              if ( !this->m_pAI->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 2846, ASSERT_TYPE_ASSERT, "( m_pAI->sentientInfo )", (const char *)&queryFormat, "m_pAI->sentientInfo") )
                __debugbreak();
              __asm
              {
                vmovss  xmm0, dword ptr [rsp+1A0h+vEyePosOut+8]
                vsubss  xmm1, xmm0, xmm7
              }
              v423 = &this->m_pAI->sentientInfo[v506 - level.sentients];
              __asm { vmovss  dword ptr [rsp+1A0h+vEyePosOut+8], xmm1 }
              v424 = j_va("visCache age: %d", (unsigned int)(level.time - v423->VisCache.iLastUpdateTime));
              __asm { vmovaps xmm2, xmm6; scale }
              G_Main_AddDebugString(&vEyePosOut, &colorWhite, *(float *)&_XMM2, v424);
            }
LABEL_294:
            if ( Dvar_GetInt_Internal_DebugName(DVARINT_ai_debugCoverSelection, "ai_debugCoverSelection") == 1 )
            {
              __asm { vmovss  xmm0, dword ptr [rsp+1A0h+vEyePosOut+8] }
              v427 = this->m_pAI;
              __asm
              {
                vsubss  xmm1, xmm0, xmm7
                vmovss  dword ptr [rsp+1A0h+vEyePosOut+8], xmm1
              }
              v429 = j_va("Searched nodes: %d", (unsigned int)v427->nodeSelect.numCoverNodesInGoal);
              __asm { vmovaps xmm2, xmm6; scale }
              G_Main_AddDebugString(&vEyePosOut, &colorYellow, *(float *)&_XMM2, v429);
            }
            if ( enabled )
            {
              _RCX = this->m_pAI;
              if ( _RCX->fixedNode )
              {
                __asm
                {
                  vmovss  xmm0, dword ptr [rsp+1A0h+vEyePosOut+8]
                  vsubss  xmm1, xmm0, xmm7
                  vmovss  dword ptr [rsp+1A0h+vEyePosOut+8], xmm1
                }
                v434 = &colorRed;
                __asm { vmovaps xmm2, xmm6; scale }
                if ( _RCX->sentient->eTeam == TEAM_TWO )
                  v434 = &colorYellow;
                G_Main_AddDebugString(&vEyePosOut, v434, *(float *)&_XMM2, "fixednode");
                _RCX = this->m_pAI;
              }
              if ( _RCX->scriptGoal.bValid )
              {
                __asm
                {
                  vmovss  xmm0, cs:__real@42c80000
                  vcomiss xmm0, dword ptr [rcx+294h]
                }
                if ( _RCX->scriptGoal.bValid )
                {
                  __asm
                  {
                    vmovss  xmm0, dword ptr [rsp+1A0h+vEyePosOut+8]
                    vsubss  xmm1, xmm0, xmm7
                    vmovss  dword ptr [rsp+1A0h+vEyePosOut+8], xmm1
                    vmovss  xmm1, dword ptr [rcx+294h]
                    vcvtss2sd xmm1, xmm1, xmm1
                    vmovq   rdx, xmm1
                  }
                  v442 = j_va("script goal radius: %.f", _RDX);
                  __asm { vmovaps xmm2, xmm6; scale }
                  G_Main_AddDebugString(&vEyePosOut, &colorRed, *(float *)&_XMM2, v442);
                  _RCX = this->m_pAI;
                }
              }
              if ( SentientHandle::isDefined(&_RCX->threat.pFavoriteEnemy) )
              {
                __asm
                {
                  vmovss  xmm0, dword ptr [rsp+1A0h+vEyePosOut+8]
                  vsubss  xmm1, xmm0, xmm7
                }
                v446 = &this->m_pAI->threat.pFavoriteEnemy;
                __asm { vmovss  dword ptr [rsp+1A0h+vEyePosOut+8], xmm1 }
                v447 = SentientHandle::sentient(v446);
                v448 = j_va("favorite enemy: %d", (unsigned int)v447->ent->s.number);
                __asm { vmovaps xmm2, xmm6; scale }
                G_Main_AddDebugString(&vEyePosOut, &colorRed, *(float *)&_XMM2, v448);
              }
              _RAX = this->m_pAI;
              v451 = 0;
              v452 = !_RAX->threat.bPacifist;
              if ( _RAX->threat.bPacifist )
              {
                __asm
                {
                  vmovss  xmm0, dword ptr [rsp+1A0h+vEyePosOut+8]
                  vsubss  xmm1, xmm0, xmm7
                  vmovaps xmm2, xmm6; scale
                  vmovss  dword ptr [rsp+1A0h+vEyePosOut+8], xmm1
                }
                G_Main_AddDebugString(&vEyePosOut, &colorRed, *(float *)&_XMM2, "bPacifist");
                _RAX = this->m_pAI;
              }
              __asm
              {
                vmovss  xmm0, cs:__real@48800000
                vcomiss xmm0, dword ptr [rax+0A4h]
              }
              if ( !(v451 | v452) )
              {
                __asm
                {
                  vmovss  xmm0, dword ptr [rsp+1A0h+vEyePosOut+8]
                  vsubss  xmm1, xmm0, xmm7
                  vmovss  dword ptr [rsp+1A0h+vEyePosOut+8], xmm1
                  vmovss  xmm2, dword ptr [rax+0A4h]
                  vsqrtss xmm2, xmm2, xmm2
                  vcvtss2sd xmm1, xmm2, xmm2
                  vmovq   rdx, xmm1
                }
                v463 = j_va("maxSightDist: %.f", _RDX);
                __asm { vmovaps xmm2, xmm6; scale }
                G_Main_AddDebugString(&vEyePosOut, &colorRed, *(float *)&_XMM2, v463);
                _RAX = this->m_pAI;
              }
              __asm
              {
                vmovss  xmm0, dword ptr [rax+430h]
                vcomiss xmm0, cs:__real@3dcccccd
              }
              if ( v451 )
                goto LABEL_312;
              __asm { vcomiss xmm0, cs:__real@3f000000 }
              if ( !(v451 | v452) )
              {
LABEL_312:
                __asm
                {
                  vmovss  xmm0, dword ptr [rsp+1A0h+vEyePosOut+8]
                  vsubss  xmm1, xmm0, xmm7
                  vmovss  dword ptr [rsp+1A0h+vEyePosOut+8], xmm1
                  vmovss  xmm1, dword ptr [rax+430h]
                  vcvtss2sd xmm1, xmm1, xmm1
                  vmovq   rdx, xmm1
                }
                v471 = j_va("accuracy: %.2f", _RDX);
                __asm { vmovaps xmm2, xmm6; scale }
                G_Main_AddDebugString(&vEyePosOut, &colorRed, *(float *)&_XMM2, v471);
                _RAX = this->m_pAI;
              }
              if ( !_RAX->avoidance.avoidanceEnabled )
              {
                __asm
                {
                  vmovss  xmm0, dword ptr [rsp+1A0h+vEyePosOut+8]
                  vsubss  xmm1, xmm0, xmm7
                  vmovaps xmm2, xmm6; scale
                  vmovss  dword ptr [rsp+1A0h+vEyePosOut+8], xmm1
                }
                G_Main_AddDebugString(&vEyePosOut, &colorRed, *(float *)&_XMM2, "avoidance disabled");
                _RAX = this->m_pAI;
              }
              if ( _RAX->combat.combatMode == AI_COMBAT_NO_COVER )
              {
                __asm
                {
                  vmovss  xmm0, dword ptr [rsp+1A0h+vEyePosOut+8]
                  vsubss  xmm1, xmm0, xmm7
                  vmovaps xmm2, xmm6; scale
                  vmovss  dword ptr [rsp+1A0h+vEyePosOut+8], xmm1
                }
                G_Main_AddDebugString(&vEyePosOut, &colorRed, *(float *)&_XMM2, "no_cover");
              }
              v479 = _RSI->sentient;
              if ( v479 )
              {
                if ( v479->bNearestNodeBad )
                {
                  __asm
                  {
                    vmovss  xmm0, dword ptr [rsp+1A0h+vEyePosOut+8]
                    vsubss  xmm1, xmm0, xmm7
                    vmovaps xmm2, xmm6; scale
                    vmovss  dword ptr [rsp+1A0h+vEyePosOut+8], xmm1
                  }
                  G_Main_AddDebugString(&vEyePosOut, &colorRed, *(float *)&_XMM2, "nearest node bad");
                  v479 = _RSI->sentient;
                }
                if ( v479->iThreatBiasGroupIndex )
                {
                  __asm
                  {
                    vmovss  xmm0, dword ptr [rsp+1A0h+vEyePosOut+8]
                    vsubss  xmm1, xmm0, xmm7
                    vmovss  dword ptr [rsp+1A0h+vEyePosOut+8], xmm1
                  }
                  v485 = j_va("threat bias group: %d", (unsigned int)_RSI->sentient->iThreatBiasGroupIndex);
                  __asm { vmovaps xmm2, xmm6; scale }
                  G_Main_AddDebugString(&vEyePosOut, &colorRed, *(float *)&_XMM2, v485);
                }
              }
              pNavigator = this->m_pAI->pNavigator;
              if ( pNavigator && level.time - pNavigator->m_TimeOfLastPathFindFail < 0x3E8 )
              {
                __asm
                {
                  vmovss  xmm0, dword ptr [rsp+1A0h+vEyePosOut+8]
                  vsubss  xmm1, xmm0, xmm7
                  vmovaps xmm2, xmm6; scale
                  vmovss  dword ptr [rsp+1A0h+vEyePosOut+8], xmm1
                }
                G_Main_AddDebugString(&vEyePosOut, &colorRed, *(float *)&_XMM2, "pathfind failed");
              }
            }
            if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_ai_showNavPos, "ai_showNavPos") )
            {
              Nav_GetPos(this->m_pAI->pNavigator, &start);
              __asm { vmovss  xmm1, cs:__real@41700000; radius }
              G_DebugSphere(&start, *(float *)&_XMM1, &colorMagenta, 0, 0);
            }
            if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_ai_showNavObstacles, "ai_showNavObstacles") )
            {
              v492 = this->m_pAI->pNavigator->Get2DNavigator(this->m_pAI->pNavigator);
              if ( v492 )
                AINavigator2D::DrawLineToSuppression(v492);
            }
            goto LABEL_330;
          }
          if ( actor->talkToSpecies >= 0 )
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rsp+1A0h+vEyePosOut+8]
              vsubss  xmm1, xmm0, xmm7
              vmovss  dword ptr [rsp+1A0h+vEyePosOut+8], xmm1
            }
            v333 = j_va("talkto: %d", (unsigned int)actor->talkToSpecies);
            __asm { vmovaps xmm2, xmm6; scale }
            G_Main_AddDebugString(&vEyePosOut, &colorWhite, *(float *)&_XMM2, v333);
          }
LABEL_237:
          if ( v330 && (v251 & 0x10) != 0 )
          {
            v335 = this->m_pAI;
            __asm
            {
              vmovss  xmm0, dword ptr [rsp+1A0h+vEyePosOut+8]
              vsubss  xmm1, xmm0, xmm7
              vmovss  dword ptr [rsp+1A0h+vEyePosOut+8], xmm1
            }
            v338 = j_va("(%i)%i:%i = %s", v335->stateLevel, (unsigned int)v335->eState[v335->stateLevel], (unsigned int)v335->eSubState[v335->stateLevel], v330->pszDebugInfo);
            __asm { vmovaps xmm2, xmm6; scale }
            G_Main_AddDebugString(&vEyePosOut, &colorWhite, *(float *)&_XMM2, v338);
          }
          goto LABEL_240;
        }
LABEL_236:
        v330 = actor;
        goto LABEL_237;
      }
      __asm { vmovss  xmm0, dword ptr [rsp+1A0h+vEyePosOut+8] }
      v288 = this->m_pAI;
      __asm
      {
        vsubss  xmm1, xmm0, xmm7
        vmovss  dword ptr [rsp+1A0h+vEyePosOut+8], xmm1
      }
      codeGoalSrc = v288->codeGoalSrc;
      if ( codeGoalSrc <= 1 )
      {
        v291 = "Goal: Script";
        v292 = &colorBlue;
      }
      else if ( codeGoalSrc == 2 )
      {
        v291 = "Goal: Script Friendly Chain";
        v292 = &colorGreen;
      }
      else if ( codeGoalSrc == 3 )
      {
        v291 = "Goal: Enemy";
        v292 = &colorMagenta;
      }
      else
      {
        v292 = &colorRed;
        if ( codeGoalSrc != 4 )
        {
          __asm { vmovaps xmm2, xmm6 }
          if ( codeGoalSrc - 5 <= 1 )
            v291 = "Goal: BT";
          else
            v291 = "Goal: Other";
          goto LABEL_212;
        }
        v291 = "Goal: Danger React";
      }
      __asm { vmovaps xmm2, xmm6; scale }
LABEL_212:
      G_Main_AddDebugString(&vEyePosOut, v292, *(float *)&_XMM2, v291);
      goto LABEL_213;
    }
    v181 = endTime;
    __asm { vmovss  dword ptr [rbp+0A0h+axis+0Ch], xmm8 }
    if ( level.time <= endTime )
    {
      if ( endTime - level.time > 1000 )
        v181 = 0;
    }
    else
    {
      v181 = level.time + 1000;
      direction = direction == 0;
    }
    endTime = v181;
    v182 = this->m_pAI;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, ecx
      vmulss  xmm6, xmm0, cs:__real@3a83126f
    }
    if ( v182->codeGoal.bMultiGoalPath && (v186 = v182->pNavigator, v186->m_bMultiGoalPath) && (v187 = v186->HasPath(v186), v182 = this->m_pAI, v187) && v182->scriptGoalPath.curPoint < v182->scriptGoalPath.numPoints - 1 )
    {
      if ( direction )
      {
        __asm
        {
          vmovss  dword ptr [rbp+0A0h+axis+8], xmm14
          vmovss  dword ptr [rbp+0A0h+axis+4], xmm14
          vmovaps xmm0, xmm6
        }
      }
      else
      {
        __asm
        {
          vmovss  dword ptr [rbp+0A0h+axis+8], xmm14
          vmovss  dword ptr [rbp+0A0h+axis+4], xmm14
          vsubss  xmm0, xmm8, xmm6
        }
      }
    }
    else
    {
      if ( direction )
      {
        __asm
        {
          vmovss  dword ptr [rbp+0A0h+axis+8], xmm6
          vmovss  dword ptr [rbp+0A0h+axis+4], xmm6
          vmovss  dword ptr [rbp+0A0h+axis], xmm6
        }
        goto LABEL_120;
      }
      __asm
      {
        vsubss  xmm0, xmm8, xmm6
        vmovss  dword ptr [rbp+0A0h+axis+8], xmm0
        vmovss  dword ptr [rbp+0A0h+axis+4], xmm0
      }
    }
    __asm { vmovss  dword ptr [rbp+0A0h+axis], xmm0 }
LABEL_120:
    __asm { vmovss  xmm7, cs:__real@41800000 }
    if ( !EntHandle::isDefined(&v182->scriptGoal.hEnt) )
    {
      _RAX = this->m_pAI;
      __asm
      {
        vmovss  xmm0, dword ptr [rax+288h]
        vmovss  dword ptr [rsp+1A0h+out], xmm0
        vmovss  xmm1, dword ptr [rax+28Ch]
        vmovss  dword ptr [rsp+1A0h+out+4], xmm1
        vaddss  xmm2, xmm7, dword ptr [rax+290h]
        vmovss  [rsp+1A0h+var_130], xmm2
      }
      G_DebugLine(&vEyePosOut, &out, (const vec4_t *)&axis, 0);
      _RAX = this->m_pAI;
      __asm { vmovss  xmm1, dword ptr [rax+294h]; radius }
      G_DebugCircle(&out, *(float *)&_XMM1, (const vec4_t *)&axis, 0, 1, 0);
      if ( Dvar_GetInt_Internal_DebugName(DVARINT_bg_entinfo, "bg_entinfo") == 5 || Dvar_GetInt_Internal_DebugName(DVARINT_bg_entinfo, "bg_entinfo") == 6 )
      {
        __asm
        {
          vmovsd  xmm0, qword ptr [rsp+1A0h+out]
          vmovss  xmm1, [rsp+1A0h+var_130]
          vmovsd  qword ptr [rbp+0A0h+start], xmm0
          vmovsd  qword ptr [rsp+1A0h+xyz], xmm0
          vaddss  xmm0, xmm1, dword ptr [rax+298h]
          vmovss  dword ptr [rbp+0A0h+start+8], xmm0
          vsubss  xmm1, xmm1, dword ptr [rax+298h]
          vmovss  dword ptr [rbp+0A0h+xyz+8], xmm1
        }
        G_DebugLine(&start, &xyz, (const vec4_t *)&axis, 0);
      }
    }
    _RAX = this->m_pAI;
    if ( _RAX->fixedNode )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rax+288h]
        vmovss  dword ptr [rsp+1A0h+out], xmm0
        vmovss  xmm1, dword ptr [rax+28Ch]
        vmovss  dword ptr [rsp+1A0h+out+4], xmm1
        vaddss  xmm2, xmm7, dword ptr [rax+290h]
        vmovss  [rsp+1A0h+var_130], xmm2
      }
      if ( !direction )
        __asm { vsubss  xmm6, xmm8, xmm6 }
      __asm
      {
        vmovss  dword ptr [rbp+0A0h+axis+4], xmm6
        vmovss  dword ptr [rbp+0A0h+axis+8], xmm14
        vmovss  dword ptr [rbp+0A0h+axis], xmm14
      }
      G_DebugLine(&vEyePosOut, &out, (const vec4_t *)&axis, 0);
      _RAX = this->m_pAI;
      __asm { vmovss  xmm1, dword ptr [rax+5F0h]; radius }
      G_DebugCircle(&out, *(float *)&_XMM1, (const vec4_t *)&axis, 0, 1, 0);
      v206 = v502;
      if ( EntHandle::isDefined(&this->m_pAI->fixedNodeSafeVolume) && v502 )
      {
        v207 = EntHandle::ent(&this->m_pAI->fixedNodeSafeVolume);
        G_DebugDrawVolumeModel(v207, &colorGreenFaded, 0, 0);
      }
    }
    else
    {
      v206 = v502;
    }
    if ( usingCodeGoal(this->m_pAI) )
    {
      _RAX = this->m_pAI;
      __asm
      {
        vmovss  xmm0, dword ptr [rax+258h]
        vmovss  dword ptr [rsp+1A0h+out], xmm0
        vmovss  xmm1, dword ptr [rax+25Ch]
        vmovss  dword ptr [rsp+1A0h+out+4], xmm1
        vaddss  xmm2, xmm7, dword ptr [rax+260h]
        vmovss  [rsp+1A0h+var_130], xmm2
      }
      G_DebugLine(&vEyePosOut, &out, &colorOrange, 0);
      _RCX = this->m_pAI;
      v213 = _RCX->codeGoalSrc;
      switch ( v213 )
      {
        case AI_GOAL_SRC_SCRIPT_ENTITY_GOAL:
          __asm { vmovups xmm0, xmmword ptr cs:?colorBlue@@3Tvec4_t@@B; vec4_t const colorBlue }
          break;
        case AI_GOAL_SRC_FRIENDLY_CHAIN:
          __asm { vmovups xmm0, xmmword ptr cs:?colorGreen@@3Tvec4_t@@B; vec4_t const colorGreen }
          break;
        case AI_GOAL_SRC_ENEMY:
          __asm { vmovups xmm0, xmmword ptr cs:?colorMagenta@@3Tvec4_t@@B; vec4_t const colorMagenta }
          break;
        case AI_GOAL_SRC_DANGER_REACT:
          __asm { vmovups xmm0, xmmword ptr cs:?colorYellow@@3Tvec4_t@@B; vec4_t const colorYellow }
          break;
        case AI_GOAL_SRC_BT:
          __asm { vmovups xmm0, xmmword ptr cs:?colorOrange@@3Tvec4_t@@B; vec4_t const colorOrange }
          break;
        default:
          __asm { vmovups xmm0, xmmword ptr cs:?colorBlack@@3Tvec4_t@@B; vec4_t const colorBlack }
          break;
      }
      __asm
      {
        vmovups xmmword ptr [rbp+0A0h+axis], xmm0
        vmovss  xmm1, dword ptr [rcx+264h]; radius
      }
      G_DebugCircle(&out, *(float *)&_XMM1, (const vec4_t *)&axis, 0, 1, 0);
      if ( Dvar_GetInt_Internal_DebugName(DVARINT_bg_entinfo, "bg_entinfo") == 5 || Dvar_GetInt_Internal_DebugName(DVARINT_bg_entinfo, "bg_entinfo") == 6 )
      {
        __asm
        {
          vmovsd  xmm0, qword ptr [rsp+1A0h+out]
          vmovss  xmm1, [rsp+1A0h+var_130]
          vmovsd  qword ptr [rsp+1A0h+xyz], xmm0
          vmovsd  qword ptr [rbp+0A0h+start], xmm0
          vaddss  xmm0, xmm1, dword ptr [rax+268h]
          vmovss  dword ptr [rbp+0A0h+xyz+8], xmm0
          vsubss  xmm1, xmm1, dword ptr [rax+268h]
          vmovss  dword ptr [rbp+0A0h+start+8], xmm1
        }
        G_DebugLine(&xyz, &start, (const vec4_t *)&axis, 0);
      }
    }
    if ( EntHandle::isDefined(&this->m_pAI->codeGoal.hVolume) )
    {
      if ( v206 )
      {
        v220 = EntHandle::ent(&this->m_pAI->codeGoal.hVolume);
        G_DebugDrawVolumeModel(v220, &colorWhiteFaded, 1, 0);
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
  char v6; 
  ai_scripted_t *m_pAI; 
  const pathnode_t *v8; 
  bool CanClaimNode; 
  pathnode_t *result; 
  sentient_s *sentient; 
  const pathnode_t *pClaimedNode; 
  bool v13; 
  bool v14; 
  char v28; 
  char v29; 
  char v30; 
  ai_scripted_t *v31; 
  pathnode_t *v43; 
  const tacpoint_t *CoverTacPoint; 
  const tacpoint_t *v45; 
  pathnode_t *node; 
  ai_scripted_t *v47; 
  ai_scripted_t *v48; 
  const pathnode_t *pBestNode; 
  ai_scripted_t *v50; 
  vec3_t pos; 
  vec3_t vPoint; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 4258, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( this->m_pAI->ent->tagInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 4259, ASSERT_TYPE_ASSERT, "( !m_pAI->ent->tagInfo )", (const char *)&queryFormat, "!m_pAI->ent->tagInfo") )
    __debugbreak();
  p_coverFindTask = &this->m_pAI->coverFindTask;
  v6 = p_coverFindTask->status[0];
  if ( p_coverFindTask->status[0] == 3 )
    AI_ScheduledCoverFind_Reset(p_coverFindTask);
  __asm
  {
    vmovaps [rsp+98h+var_28], xmm6
    vmovaps [rsp+98h+var_38], xmm7
  }
  if ( !AIScriptedInterface::UsingCoverNodes(this) || AIScriptedInterface::IsDoingReacquire(this) )
    goto LABEL_65;
  m_pAI = this->m_pAI;
  if ( m_pAI->combat.combatMode != AI_COMBAT_NO_COVER )
  {
    sentient = m_pAI->sentient;
    pClaimedNode = sentient->pClaimedNode;
    if ( pClaimedNode )
    {
      pathnode_t::GetPos(sentient->pClaimedNode, &pos);
      v13 = AICommonInterface::PointAtGoal(this, &pos, &this->m_pAI->codeGoal);
      m_pAI = this->m_pAI;
      v14 = v13;
    }
    else
    {
      v14 = 0;
    }
    if ( m_pAI->boundingOverwatchEnabled && AICommonInterface::PointAtGoal(this, &m_pAI->ent->r.currentOrigin, &m_pAI->codeGoal) && EntHandle::isDefined(&this->m_pAI->sentient->targetEnt) )
    {
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_ai_boundingOverwatchGoalProximity, "ai_boundingOverwatchGoalProximity");
      _RCX = this->m_pAI;
      __asm
      {
        vmulss  xmm6, xmm0, xmm0
        vmovss  xmm0, dword ptr [rcx+258h]
        vmovss  xmm1, dword ptr [rcx+25Ch]
        vsubss  xmm3, xmm0, dword ptr [rax]
        vmovss  xmm0, dword ptr [rcx+260h]
        vsubss  xmm2, xmm1, dword ptr [rax+4]
        vsubss  xmm4, xmm0, dword ptr [rax+8]
        vmulss  xmm2, xmm2, xmm2
        vmulss  xmm1, xmm3, xmm3
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm3, xmm2, xmm1
        vaddss  xmm7, xmm3, xmm0
      }
      if ( pClaimedNode && AIScriptedInterface::IsValidClaimNode(this, pClaimedNode) )
      {
        __asm { vcomiss xmm7, xmm6 }
        v28 = 1;
      }
      else
      {
        v28 = 0;
      }
      v31 = this->m_pAI;
      __asm { vxorps  xmm0, xmm0, xmm0 }
      if ( pClaimedNode )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+98h+pos]
          vmovss  xmm1, dword ptr [rsp+98h+pos+4]
          vsubss  xmm3, xmm0, dword ptr [rax]
          vmovss  xmm0, dword ptr [rsp+98h+pos+8]
          vsubss  xmm2, xmm1, dword ptr [rax+4]
          vsubss  xmm4, xmm0, dword ptr [rax+8]
          vmulss  xmm2, xmm2, xmm2
          vmulss  xmm1, xmm3, xmm3
          vmulss  xmm0, xmm4, xmm4
          vaddss  xmm3, xmm2, xmm1
          vaddss  xmm0, xmm3, xmm0
        }
      }
      v43 = NULL;
      if ( v28 )
        __asm { vcomiss xmm0, cs:__real@49ef4200 }
      if ( level.time > v31->nodeSelect.nextFindBestCoverTime && v31->coverFindTask.status[0] != 1 )
      {
        v31->coverFindTask.pBestNode = NULL;
        tacpoint_ref_t::SetPoint(&this->m_pAI->coverFindTask.coverTac, NULL);
        AIScheduler::AddCoverFindTask(&this->m_pAI->coverFindTask);
      }
      if ( v14 )
        v43 = this->m_pAI->sentient->pClaimedNode;
LABEL_40:
      result = v43;
      goto LABEL_66;
    }
    v29 = ((__int64 (__fastcall *)(AIScriptedInterface *, ai_scripted_t *))this->ShouldLookForNewCover)(this, m_pAI);
    v30 = v29;
    if ( v14 && v6 != 3 && !v29 && AIScriptedInterface::IsValidClaimNode(this, pClaimedNode) )
    {
LABEL_29:
      result = (pathnode_t *)pClaimedNode;
      goto LABEL_66;
    }
    CoverTacPoint = AIScriptedInterface::GetCoverTacPoint(this);
    v45 = CoverTacPoint;
    if ( CoverTacPoint && v6 != 3 && !v30 && AICommonInterface::PointAtGoal(this, &CoverTacPoint->m_Pos, &this->m_pAI->codeGoal) && AIScriptedInterface::IsValidCoverTacPoint(this, v45) )
      goto LABEL_65;
    if ( !AICommonInterface::GetTargetEntity(this) )
    {
      node = this->m_pAI->codeGoal.node;
      if ( node )
      {
        pathnode_t::GetPos(node, &vPoint);
        if ( !AIScriptedInterface::IsValidClaimNode(this, this->m_pAI->codeGoal.node) )
          goto LABEL_65;
        CanClaimNode = AICommonInterface::PointAtGoal(this, &vPoint, &this->m_pAI->codeGoal);
        goto LABEL_14;
      }
    }
    v47 = this->m_pAI;
    v43 = NULL;
    if ( !v47->boundingOverwatchEnabled && !v47->blackboard.m_bMeleeChargeRequested && !v47->blackboard.m_bMeleeRequested && !EntHandle::isDefined(&v47->grenade.pGrenade) )
    {
      v48 = this->m_pAI;
      if ( !v48->navigation.isInBadPlace )
      {
        if ( v6 == 3 )
        {
          pBestNode = v48->coverFindTask.pBestNode;
          if ( !pBestNode || (pClaimedNode = v48->coverFindTask.pBestNode, Path_CanClaimNode(pBestNode, v48->sentient)) )
          {
            if ( pClaimedNode )
              goto LABEL_29;
          }
        }
        v50 = this->m_pAI;
        if ( level.time >= v50->nodeSelect.nextFindBestCoverTime && v50->coverFindTask.status[0] != 1 )
        {
          v50->coverFindTask.pBestNode = NULL;
          tacpoint_ref_t::SetPoint(&this->m_pAI->coverFindTask.coverTac, NULL);
          AIScheduler::AddCoverFindTask(&this->m_pAI->coverFindTask);
        }
      }
    }
    if ( v14 && !v45 )
    {
      result = this->m_pAI->sentient->pClaimedNode;
      goto LABEL_66;
    }
    goto LABEL_40;
  }
  v8 = m_pAI->codeGoal.node;
  if ( !v8 )
  {
LABEL_65:
    result = NULL;
    goto LABEL_66;
  }
  CanClaimNode = Path_CanClaimNode(v8, m_pAI->sentient);
LABEL_14:
  if ( !CanClaimNode )
    goto LABEL_65;
  result = this->m_pAI->codeGoal.node;
LABEL_66:
  __asm
  {
    vmovaps xmm7, [rsp+98h+var_38]
    vmovaps xmm6, [rsp+98h+var_28]
  }
  return result;
}

/*
==============
AIScriptedInterface::FindPath
==============
*/
bool AIScriptedInterface::FindPath(AIScriptedInterface *this, vec3_t *inOutGoalPos, pathnode_t *pGoalNode, bool bAllowNegotiationLinks, bool bIgnoreSuppression, bool bHandleInvalidPath)
{
  AINavigator *pNavigator; 
  char v12; 
  unsigned __int16 GroundEntNum; 
  ai_scripted_t *m_pAI; 
  AITask_PathFind *p_pathFindTask; 
  vec3_t pos; 
  vec3_t vPoint; 
  vec3_t vFinalGoal; 

  _RSI = inOutGoalPos;
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
    if ( AICommonInterface::PointAt(this, &vFinalGoal, _RSI) )
      return 1;
    pNavigator = this->m_pAI->pNavigator;
    if ( pNavigator )
    {
      pNavigator->GetRequestedGoalPos(pNavigator, &vPoint);
      if ( AICommonInterface::PointAt(this, &vPoint, _RSI) )
        return 1;
    }
  }
  if ( AICommonInterface::PointAt(this, &this->m_pAI->ent->r.currentOrigin, _RSI) )
  {
    this->ClearPath(this);
    return 1;
  }
  else
  {
    if ( !pGoalNode )
      goto LABEL_31;
    pathnode_t::GetPos(pGoalNode, &pos);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+0A8h+pos]
      vucomiss xmm0, dword ptr [rsi]
    }
    if ( !v12 )
      goto LABEL_31;
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+0A8h+pos+4]
      vucomiss xmm0, dword ptr [rsi+4]
    }
    if ( !v12 )
      goto LABEL_31;
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+0A8h+pos+8]
      vucomiss xmm0, dword ptr [rsi+8]
    }
    if ( !v12 )
    {
LABEL_31:
      if ( !AICommonInterface::Use3DPathing(this) )
      {
        GroundEntNum = AIScriptedInterface::GetGroundEntNum(this);
        if ( BGMovingPlatforms::IsMovingPlatform(GroundEntNum) )
        {
          this->GetMovingPlatformUpVector(this, &vPoint);
          AI_DropPointToFloorNonWorldUp(_RSI, &this->m_pAI->ent->r.box, &vPoint);
        }
        else
        {
          Sys_ProfBeginNamedEvent(0xFF808080, "FindPathDropPos");
          AI_DropPointToFloor(_RSI, &this->m_pAI->ent->r.box);
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
      return AIScriptedInterface::FindPathInternal(this, _RSI, pGoalNode, bAllowNegotiationLinks, bIgnoreSuppression, bHandleInvalidPath);
    }
    else
    {
      p_pathFindTask->m_GoalPos.v[0] = _RSI->v[0];
      p_pathFindTask->m_GoalPos.v[1] = _RSI->v[1];
      p_pathFindTask->m_GoalPos.v[2] = _RSI->v[2];
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

void __fastcall AIScriptedInterface::FindPathAway(AIScriptedInterface *this, const vec3_t *vBadPos, double fMinSafeDist, PathBlockPlanes *blockPlanes)
{
  ai_scripted_t *m_pAI; 
  int iPlaneCount; 
  unsigned __int64 v39; 
  gentity_s *ent; 
  bool v42; 
  AINavigator2D *v117; 
  AINavigator2D *v118; 
  nav_space_s *m_pSpace; 
  vec3_t targetPos; 
  vec3_t outUp; 
  bfx::PathSpec pPathSpec; 
  void *retaddr; 

  _R11 = &retaddr;
  m_pAI = this->m_pAI;
  __asm
  {
    vmovaps xmmword ptr [r11-18h], xmm6
    vmovaps xmmword ptr [r11-28h], xmm7
    vmovaps xmmword ptr [r11-88h], xmm13
  }
  _RAX = m_pAI->ent;
  __asm
  {
    vmovaps xmmword ptr [r11-98h], xmm14
    vmovaps xmmword ptr [r11-0A8h], xmm15
    vmovss  xmm13, cs:__real@3f800000
    vmovss  xmm6, dword ptr [rax+130h]
    vmovss  xmm0, dword ptr [rax+134h]
    vsubss  xmm5, xmm0, dword ptr [rdx+4]
    vsubss  xmm4, xmm6, dword ptr [rdx]
    vmovss  xmm14, cs:__real@80000000
    vmulss  xmm1, xmm4, xmm4
    vmovaps xmm7, xmm2
    vmulss  xmm3, xmm5, xmm5
    vaddss  xmm0, xmm3, xmm1
    vsqrtss xmm2, xmm0, xmm0
    vcmpless xmm0, xmm2, xmm14
    vblendvps xmm0, xmm2, xmm13, xmm0
    vdivss  xmm1, xmm13, xmm0
    vmulss  xmm0, xmm4, xmm1
    vmulss  xmm4, xmm0, xmm7
    vmulss  xmm1, xmm5, xmm1
    vaddss  xmm15, xmm4, xmm6
    vmulss  xmm7, xmm1, xmm7
    vmovss  dword ptr [rsp+178h+targetPos], xmm15
    vmovss  [rsp+178h+var_138], xmm0
    vaddss  xmm0, xmm7, dword ptr [rax+134h]
    vmovss  dword ptr [rsp+178h+targetPos+4], xmm0
    vmovss  [rsp+178h+var_134], xmm1
  }
  if ( blockPlanes )
  {
    iPlaneCount = blockPlanes->iPlaneCount;
    if ( iPlaneCount )
    {
      v39 = blockPlanes->iPlaneCount;
      if ( iPlaneCount > 0 )
      {
        ent = m_pAI->ent;
        vBadPos = (const vec3_t *)blockPlanes->fDist;
        __asm { vmovaps xmmword ptr [r11-38h], xmm8 }
        _RCX = 0i64;
        __asm { vmovaps xmmword ptr [r11-48h], xmm9 }
        v42 = __CFADD__(ent, 304i64) || &ent->r.currentOrigin == NULL;
        _RAX = (__int64)&ent->r.currentOrigin;
        __asm
        {
          vmovaps xmmword ptr [r11-58h], xmm10
          vmovaps xmmword ptr [r11-68h], xmm11
          vmovaps xmmword ptr [r11-78h], xmm12
          vxorps  xmm12, xmm12, xmm12
        }
        do
        {
          __asm
          {
            vmovss  xmm11, dword ptr [r9+rcx*8+4]
            vmovss  xmm10, dword ptr [r9+rcx*8]
            vmulss  xmm0, xmm11, dword ptr [rdx]
            vmulss  xmm2, xmm10, dword ptr [rdx]
            vmovss  xmm8, dword ptr [rax+4]
            vmovss  xmm6, dword ptr [rax]
            vsubss  xmm1, xmm0, xmm8
            vmulss  xmm3, xmm1, xmm11
            vsubss  xmm0, xmm2, xmm6
            vmulss  xmm1, xmm0, xmm10
            vaddss  xmm5, xmm3, xmm1
            vmulss  xmm0, xmm7, xmm11
            vmulss  xmm2, xmm10, xmm4
            vaddss  xmm9, xmm2, xmm0
            vmulss  xmm3, xmm9, xmm9
            vmulss  xmm1, xmm5, xmm5
            vcomiss xmm3, xmm1
          }
          if ( !v42 )
          {
            __asm
            {
              vmulss  xmm0, xmm9, xmm5
              vcomiss xmm0, xmm12
            }
            if ( !v42 )
            {
              __asm
              {
                vmulss  xmm0, xmm4, xmm4
                vmulss  xmm1, xmm7, xmm7
                vaddss  xmm1, xmm1, xmm0
                vsqrtss xmm2, xmm1, xmm1
                vmulss  xmm3, xmm2, xmm5
                vdivss  xmm4, xmm3, xmm9
                vmulss  xmm0, xmm4, [rsp+178h+var_138]
                vmulss  xmm1, xmm4, [rsp+178h+var_134]
                vaddss  xmm7, xmm0, xmm6
                vmovss  xmm0, dword ptr [rsp+178h+targetPos+4]
                vaddss  xmm8, xmm1, xmm8
                vsubss  xmm4, xmm0, xmm8
                vsubss  xmm3, xmm15, xmm7
                vmulss  xmm1, xmm4, xmm4
                vsubss  xmm2, xmm5, xmm9
                vmulss  xmm0, xmm3, xmm3
                vaddss  xmm1, xmm1, xmm0
                vsqrtss xmm6, xmm1, xmm1
                vmulss  xmm1, xmm11, xmm2
                vaddss  xmm4, xmm1, xmm4
                vmulss  xmm0, xmm10, xmm2
                vaddss  xmm5, xmm0, xmm3
                vmulss  xmm2, xmm4, xmm4
                vmulss  xmm0, xmm5, xmm5
                vaddss  xmm1, xmm2, xmm0
                vsqrtss xmm3, xmm1, xmm1
                vcmpless xmm0, xmm3, xmm14
                vblendvps xmm0, xmm3, xmm13, xmm0
                vdivss  xmm2, xmm13, xmm0
                vmulss  xmm0, xmm5, xmm2
                vmulss  xmm1, xmm0, xmm6
                vaddss  xmm15, xmm1, xmm7
                vmulss  xmm0, xmm4, xmm2
                vmulss  xmm1, xmm0, xmm6
                vaddss  xmm0, xmm1, xmm8
                vmovss  dword ptr [rsp+178h+targetPos+4], xmm0
                vmovss  dword ptr [rsp+178h+targetPos], xmm15
              }
              _RAX = (__int64)&m_pAI->ent->r.currentOrigin;
              __asm
              {
                vsubss  xmm7, xmm0, dword ptr [rax+4]
                vsubss  xmm4, xmm15, dword ptr [rax]
                vmulss  xmm1, xmm7, xmm7
                vmulss  xmm0, xmm4, xmm4
                vaddss  xmm1, xmm1, xmm0
                vsqrtss xmm2, xmm1, xmm1
                vcmpless xmm0, xmm2, xmm14
                vblendvps xmm0, xmm2, xmm13, xmm0
                vdivss  xmm1, xmm13, xmm0
                vmulss  xmm0, xmm4, xmm1
                vmovss  [rsp+178h+var_138], xmm0
                vmulss  xmm0, xmm7, xmm1
                vmovss  [rsp+178h+var_134], xmm0
              }
            }
          }
          ++_RCX;
          vBadPos = (const vec3_t *)((char *)vBadPos + 4);
          v42 = _RCX <= v39;
        }
        while ( (__int64)_RCX < (__int64)v39 );
        __asm
        {
          vmovaps xmm12, [rsp+178h+var_78]
          vmovaps xmm11, [rsp+178h+var_68]
          vmovaps xmm10, [rsp+178h+var_58]
          vmovaps xmm9, [rsp+178h+var_48]
          vmovaps xmm8, [rsp+178h+var_38]
        }
      }
    }
  }
  _RAX = m_pAI->ent;
  __asm
  {
    vmovaps xmm15, [rsp+178h+var_A8]
    vmovaps xmm14, [rsp+178h+var_98]
    vmovaps xmm13, [rsp+178h+var_88]
    vmovss  xmm0, dword ptr [rax+138h]
    vmovaps xmm7, [rsp+178h+var_28]
    vmovaps xmm6, [rsp+178h+var_18]
    vmovss  dword ptr [rsp+178h+targetPos+8], xmm0
  }
  if ( !m_pAI->pNavigator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 5679, ASSERT_TYPE_ASSERT, "( m_pAI->pNavigator )", (const char *)&queryFormat, "m_pAI->pNavigator") )
    __debugbreak();
  v117 = (AINavigator2D *)((__int64 (__fastcall *)(AINavigator *, const vec3_t *))this->m_pAI->pNavigator->Get2DNavigator)(this->m_pAI->pNavigator, vBadPos);
  v118 = v117;
  if ( v117 )
  {
    m_pSpace = v117->m_pSpace;
    _RAX = AINavigator2D::GetPathSpec(v117);
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rsp+178h+pPathSpec.m_obstacleMode], ymm0
      vmovups ymm1, ymmword ptr [rax+20h]
      vmovups ymmword ptr [rsp+178h+pPathSpec.m_maxSearchDist], ymm1
      vmovups xmm0, xmmword ptr [rax+40h]
      vmovups xmmword ptr [rsp+178h+pPathSpec.m_penaltyTable.m_perFlagPenalties+18h], xmm0
    }
    Nav_GetSpaceUp(m_pSpace, &outUp);
    Nav_GetClosestVerticalPos(&targetPos, &outUp, v118->m_Layer, &m_pSpace->hSpace, &pPathSpec, &targetPos, NULL);
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
  char v13; 
  AINavigator3D *v14; 
  int v15; 
  bool v16; 
  AINavigator2D *v17; 
  bool HasPath; 
  bool v21; 
  ai_scripted_t *m_pAI; 
  vec3_t vLookaheadDir; 
  PathBlockPlanes blockPlanes; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-28h], xmm6
    vxorps  xmm6, xmm6, xmm6
  }
  if ( AICommonInterface::HasPath(this) )
  {
    v13 = 1;
    AIScriptedInterface::GetPathLookaheadDir(this, &vLookaheadDir);
    this->ClearPath(this);
  }
  else
  {
    __asm
    {
      vmovss  dword ptr [rsp+0A8h+vLookaheadDir], xmm6
      vmovss  dword ptr [rsp+0A8h+vLookaheadDir+4], xmm6
      vmovss  dword ptr [rsp+0A8h+vLookaheadDir+8], xmm6
    }
    v13 = 0;
  }
  if ( bIgnoreSuppression )
    blockPlanes.iPlaneCount = 0;
  else
    AIScriptedInterface::GetSuppressionPlanes(this, &blockPlanes);
  if ( AICommonInterface::Use3DPathing(this) )
  {
    v14 = this->m_pAI->pNavigator->Get3DNavigator(this->m_pAI->pNavigator);
    if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 5491, ASSERT_TYPE_ASSERT, "( pNav3D )", (const char *)&queryFormat, "pNav3D") )
      __debugbreak();
    v16 = 0;
    if ( pGoalNode )
    {
      v15 = 1 << LOBYTE(pGoalNode->constant.type);
      if ( (v15 & 0x1E300000) == 0 && (v15 & 0x400000) == 0 )
        v16 = 1;
    }
    v14->m_bSnapGoalToClosestVerticalPos = v16;
  }
  v17 = this->m_pAI->pNavigator->Get2DNavigator(this->m_pAI->pNavigator);
  if ( v17 )
    AINavigator2D::SetSuppressionPlanes(v17, &blockPlanes);
  __asm { vxorps  xmm2, xmm2, xmm2; minDistFromCurGoal }
  Nav_SetGoalPos(this->m_pAI->pNavigator, goalPos, *(float *)&_XMM2);
  HasPath = AICommonInterface::HasPath(this);
  __asm { vmovaps xmm6, [rsp+0A8h+var_28] }
  if ( HasPath )
  {
    if ( this->m_pAI->sentient->eTeam == TEAM_TWO && !bIgnoreSuppression && AIScriptedInterface::IsPathSuppressed(this) )
    {
      AIScriptedInterface::Debug_NotMoving(this, "friend suppr");
      this->ClearPath(this);
    }
    if ( v13 )
      AIScriptedInterface::PathChangeNotify(this, &vLookaheadDir);
    GScr_Notify(this->m_pAI->ent, scr_const.path_set, 0);
    this->m_pAI->iPathEndTime = 0;
    this->m_pAI->bArrivalFailed = 0;
    this->UpdateCloseEnt(this);
  }
  v21 = AICommonInterface::HasPath(this);
  m_pAI = this->m_pAI;
  if ( v21 )
  {
    *(float *)&_XMM0 = m_pAI->pNavigator->GetPathDistToGoal(m_pAI->pNavigator);
    *(double *)&_XMM0 = GetMaxSpeedForPathLength(*(float *)&_XMM0);
    _RAX = this->m_pAI;
    __asm { vmovss  dword ptr [rax+0B4Ch], xmm0 }
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
  char v11; 
  char v12; 
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
    _RDX = this->m_pAI;
    __asm
    {
      vmovss  xmm0, dword ptr [rdx+264h]
      vcomiss xmm0, cs:__real@41700000
    }
    if ( v11 | v12 )
      __asm { vmulss  xmm3, xmm0, xmm0; bufferSq }
    else
      __asm { vmovss  xmm3, cs:__real@43610000 }
    if ( AICommonInterface::PointNearPointSqDist(this, &_RDX->ent->r.currentOrigin, &pos, *(float *)&_XMM3) )
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
  pathnode_t *node; 
  ai_scripted_t *m_pAI; 
  sentient_s *sentient; 
  pathnode_t *pPrevClaimedNode; 
  pathnode_t *pClaimedNode; 
  pathnode_t *v15; 
  bool v16; 
  char v17; 
  char v19; 
  ai_scripted_t *v22; 
  ai_scripted_t *v23; 
  bool fixedNodeNudged; 
  gentity_s *TargetEntity; 
  sentient_s *v26; 
  pathnode_t *v30; 
  bool v31; 
  bool v32; 
  ai_scripted_t *v33; 
  sentient_s *v34; 
  pathnode_t *v35; 
  pathnode_t *v36; 
  bool CanClaimNode; 
  ai_scripted_t *v38; 
  ai_scripted_t *v39; 
  pathnode_t *v40; 
  bool v41; 
  ai_scripted_t *v42; 
  bool v43; 

  __asm
  {
    vmovaps [rsp+78h+var_28], xmm6
    vmovaps [rsp+78h+var_38], xmm7
    vmovaps [rsp+78h+var_48], xmm8
  }
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 4858, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  _RAX = this->m_pAI;
  __asm
  {
    vmovss  xmm6, dword ptr [rax+258h]
    vmovss  xmm7, dword ptr [rax+25Ch]
    vmovss  xmm8, dword ptr [rax+260h]
  }
  node = _RAX->codeGoal.node;
  if ( _RAX->fixedNodeNudged )
  {
    if ( _RAX->sentient->pClaimedNode && !AICommonInterface::HasPath(this) && AIScriptedInterface::AtClaimNode(this) )
    {
      this->m_pAI->fixedNodeNudged = 0;
    }
    else
    {
      m_pAI = this->m_pAI;
      sentient = m_pAI->sentient;
      pPrevClaimedNode = sentient->pPrevClaimedNode;
      if ( !pPrevClaimedNode && !sentient->pClaimedNode || node && (pPrevClaimedNode && pPrevClaimedNode != node || (pClaimedNode = sentient->pClaimedNode) != NULL && pClaimedNode != node) )
        m_pAI->fixedNodeNudged = 0;
    }
  }
  AIScriptedInterface::ClearUseEnemyGoal(this);
  _RAX = this->m_pAI;
  v15 = _RAX->codeGoal.node;
  v16 = v15 == NULL;
  if ( v15 && (v16 = v15 == node) )
  {
    v17 = 0;
    v16 = 1;
  }
  else
  {
    v17 = 1;
  }
  __asm
  {
    vucomiss xmm6, dword ptr [rax+258h]
    vmovaps xmm6, [rsp+78h+var_28]
  }
  if ( v16 )
  {
    __asm { vucomiss xmm7, dword ptr [rax+25Ch] }
    if ( v16 )
    {
      __asm { vucomiss xmm8, dword ptr [rax+260h] }
      if ( v16 )
        goto LABEL_26;
    }
  }
  if ( !v17 )
LABEL_26:
    v19 = 0;
  else
    v19 = 1;
  __asm
  {
    vmovaps xmm8, [rsp+78h+var_48]
    vmovaps xmm7, [rsp+78h+var_38]
  }
  _RAX->goalPosChanged = v19;
  v22 = this->m_pAI;
  v23 = v22;
  if ( v22->goalPosChanged )
  {
    fixedNodeNudged = v22->fixedNodeNudged;
    v22->fixedNodeNudged = 0;
    GScr_Notify(this->m_pAI->ent, scr_const.goal_changed, 0);
    *(_WORD *)&this->m_pAI->fixedNodeNudged = fixedNodeNudged;
    v22 = this->m_pAI;
    v23 = v22;
  }
  if ( v22->fixedNodeNudged || !v22->sentient->pClaimedNode && v22->codeGoal.node )
    goto LABEL_42;
  if ( !v23->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 4804, ASSERT_TYPE_ASSERT, "( m_pAI->sentientInfo )", (const char *)&queryFormat, "m_pAI->sentientInfo") )
    __debugbreak();
  TargetEntity = AICommonInterface::GetTargetEntity(this);
  if ( !TargetEntity )
    goto LABEL_42;
  v26 = TargetEntity->sentient;
  if ( v26 )
  {
    if ( level.time - this->m_pAI->sentientInfo[v26 - level.sentients].lastKnownPosTime > 10000 )
      goto LABEL_42;
  }
  _RDX = this->m_pAI;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+264h]
    vminss  xmm3, xmm0, cs:__real@42800000; buffer
  }
  if ( _RDX->eState[_RDX->stateLevel] != AIS_BEHAVE )
    goto LABEL_42;
  v30 = _RDX->sentient->pClaimedNode;
  if ( v30 )
  {
    if ( v30->constant.type != 9 )
      goto LABEL_42;
  }
  if ( !AICommonInterface::PointNearPoint(this, &_RDX->ent->r.currentOrigin, &_RDX->codeGoal.pos, *(float *)&_XMM3) )
  {
LABEL_42:
    v31 = AIScriptedInterface::KeepClaimedNode(this);
    v32 = AIScriptedInterface::UsingCoverNodes(this);
    if ( v31 )
    {
      if ( !v32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 4901, ASSERT_TYPE_ASSERT, "( UsingCoverNodes() )", (const char *)&queryFormat, "UsingCoverNodes()") )
        __debugbreak();
      if ( AICommonInterface::HasPath(this) )
      {
        this->ClearPath(this);
        AIScriptedInterface::Debug_NotMoving(this, "fixed node - keeping claimed node");
        AIScriptedInterface::TeamMoveBlocked(this);
      }
      return;
    }
    if ( !v32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 4911, ASSERT_TYPE_ASSERT, "( UsingCoverNodes() )", (const char *)&queryFormat, "UsingCoverNodes()") )
      __debugbreak();
    v33 = this->m_pAI;
    v34 = v33->sentient;
    v35 = v34->pClaimedNode;
    if ( v33->fixedNodeNudged )
    {
      if ( !v35 && !v34->pPrevClaimedNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 4919, ASSERT_TYPE_ASSERT, "(sentient->pClaimedNode || sentient->pPrevClaimedNode)", (const char *)&queryFormat, "sentient->pClaimedNode || sentient->pPrevClaimedNode") )
        __debugbreak();
      v36 = v34->pClaimedNode;
      if ( !v36 )
        v36 = v34->pPrevClaimedNode;
    }
    else
    {
      v36 = v33->codeGoal.node;
    }
    if ( !AIScriptedInterface::IsFixedNodeUseable(this, 0) && !this->m_pAI->commitToFixedNode )
    {
      this->ClearPath(this);
      AIScriptedInterface::Debug_NotMoving(this, "fixed node - not useable");
      AIScriptedInterface::TeamMoveBlocked(this);
      return;
    }
    if ( v36 )
    {
      if ( AIScriptedInterface::FindPathToClaimNode(this, v36, 1, 0) )
      {
        if ( !this->m_pAI->commitToFixedNode && AICommonInterface::HasPath(this) )
        {
          this->m_pAI->commitToFixedNode = 1;
          GScr_Notify(this->m_pAI->ent, scr_const.start_move, 0);
        }
        CanClaimNode = Path_CanClaimNode(v36, v34);
        goto LABEL_73;
      }
      AIScriptedInterface::Debug_NotMoving(this, "fixed node - no path to claim node");
      AIScriptedInterface::TeamMoveBlocked(this);
      v36 = NULL;
    }
    else
    {
      AIScriptedInterface::FindPathToGoalDirect(this);
      if ( AICommonInterface::HasPath(this) )
      {
        v38 = this->m_pAI;
        if ( !v38->commitToFixedNode )
        {
          v38->commitToFixedNode = 1;
          GScr_Notify(this->m_pAI->ent, scr_const.start_move, 0);
        }
      }
    }
    CanClaimNode = AICommonInterface::HasPath(this);
LABEL_73:
    if ( CanClaimNode )
      Sentient_ClaimNode(v34, v36);
    v39 = this->m_pAI;
    if ( !v39->goalPosChanged )
    {
      v40 = v34->pClaimedNode;
      v41 = v40 && v35 != v40;
      v39->goalPosChanged = v41;
      v42 = this->m_pAI;
      if ( v42->goalPosChanged )
      {
        v43 = v42->fixedNodeNudged;
        v42->fixedNodeNudged = 0;
        GScr_Notify(this->m_pAI->ent, scr_const.goal_changed, 0);
        this->m_pAI->commitToFixedNode = 0;
        this->m_pAI->fixedNodeNudged = v43;
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
  int v3; 
  ai_scripted_t *m_pAI; 
  aiGoalSources codeGoalSrc; 
  unsigned __int16 number; 
  __int64 v7; 
  unsigned int v8; 
  __int64 v9; 
  EntHandle *p_hEnt; 
  ai_script_goal_t *BTGoal; 
  ai_script_goal_t *v12; 
  unsigned __int64 eTeam; 
  int v14; 
  __int64 v17; 
  bitarray<224> teamFlags; 
  vec3_t vFinalGoal; 

  if ( !AICommonInterface::HasPath(this) && level.time < this->m_pAI->pathWaitTime )
  {
    this->ClearPileUp(this);
    AIScriptedInterface::Debug_NotMoving(this, "waiting for blockage");
    return;
  }
  v3 = 2047;
  m_pAI = this->m_pAI;
  codeGoalSrc = m_pAI->codeGoalSrc;
  if ( codeGoalSrc == AI_GOAL_SRC_SCRIPT_ENTITY_GOAL )
  {
    number = m_pAI->scriptGoal.hEnt.number;
    if ( !number )
      goto LABEL_55;
    v7 = number;
    v8 = number - 1;
    if ( v8 >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v8, 2048) )
      __debugbreak();
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    v9 = v7 - 1;
    if ( g_entities[v9].r.isInUse != g_entityIsInUse[v9] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( !g_entityIsInUse[v9] )
    {
      LODWORD(v17) = m_pAI->scriptGoal.hEnt.number - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v17) )
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
    v3 = EntHandle::entnum(p_hEnt);
    goto LABEL_29;
  }
  if ( codeGoalSrc == AI_GOAL_SRC_BT_ENTITY_GOAL )
  {
    BTGoal = AIScriptedInterface::GetBTGoal(this);
    v12 = BTGoal;
    if ( (!BTGoal->bValid || !EntHandle::isDefined(&BTGoal->hEnt)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 4020, ASSERT_TYPE_ASSERT, "(pBTGoal->bValid && pBTGoal->hEnt.isDefined())", (const char *)&queryFormat, "pBTGoal->bValid && pBTGoal->hEnt.isDefined()") )
      __debugbreak();
    p_hEnt = &v12->hEnt;
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
  v14 = Nav_TranslateTeamFlagsToRepulsorUsageFlags(&teamFlags);
  if ( Nav_IsPointInRepulsorBadplace(&this->m_pAI->codeGoal.pos, v14, this->m_pAI->ent->s.number, v3) )
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
  _RDX = this->m_pAI;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm0, dword ptr [rdx+72Ch]
  }
  if ( !AICommonInterface::PointAtGoal(this, &_RDX->ent->r.currentOrigin, &_RDX->codeGoal) )
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
    _RDX = this->m_pAI;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vucomiss xmm0, dword ptr [rdx+72Ch]
    }
    if ( AICommonInterface::PointAtGoal(this, &_RDX->ent->r.currentOrigin, &_RDX->codeGoal) )
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
  ai_scripted_t *m_pAI; 
  char v6; 
  AINavigator *pNavigator; 
  ai_scripted_t *v9; 
  unsigned __int8 lastPathedPoint; 
  char v11; 
  AINavigator *v12; 
  AINavigator *v13; 
  bfx::SpaceHandle *p_hSpace; 
  unsigned int m_Layer; 
  char v16; 
  AINavigator2D *v17; 
  ai_scripted_t *v18; 
  unsigned __int8 v20; 
  unsigned __int8 v21; 
  const bfx::PathSpec *v26; 
  bool HasPath; 
  ai_scripted_t *v30; 
  AINavigator *v32; 
  AINavigator_vtbl *v33; 
  vec3_t *p_vGoalPos; 
  __int64 v35; 
  bfx::SpaceHandle *v36; 
  const bfx::PathSpec *PathSpec; 
  scrContext_t *v39; 
  ai_scripted_t *v40; 
  int curPoint; 
  char v54[8]; 
  vec3_t vPoint; 
  vec3_t outUp; 
  vec3_t vGoalPos; 
  void *retaddr; 

  _R11 = &retaddr;
  m_pAI = this->m_pAI;
  __asm { vmovaps xmmword ptr [r11-38h], xmm6 }
  if ( !m_pAI->scriptGoalPath.numPoints && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 4045, ASSERT_TYPE_ASSERT, "(m_pAI->scriptGoalPath.IsValid())", (const char *)&queryFormat, "m_pAI->scriptGoalPath.IsValid()") )
    __debugbreak();
  v6 = 0;
  __asm { vmovss  xmm6, cs:__real@44400000 }
  pNavigator = this->m_pAI->pNavigator;
  if ( pNavigator->m_bMultiGoalPath && pNavigator->HasPath(pNavigator) && (v9 = this->m_pAI, lastPathedPoint = v9->scriptGoalPath.lastPathedPoint, lastPathedPoint != 0xFF) )
  {
    if ( lastPathedPoint == v9->scriptGoalPath.numPoints - 1 )
      goto LABEL_13;
    if ( !v9->pNavigator->CanAddMultiGoalPathGoal(v9->pNavigator) )
      goto LABEL_13;
    *(double *)&_XMM0 = ((double (__fastcall *)(AINavigator *))this->m_pAI->pNavigator->GetPathDistToGoal)(this->m_pAI->pNavigator);
    __asm { vcomiss xmm0, xmm6 }
    if ( !v11 )
      goto LABEL_13;
  }
  else
  {
    this->ClearPath(this);
    this->m_pAI->scriptGoalPath.lastPathedPoint = -1;
  }
  v6 = 1;
LABEL_13:
  v12 = this->m_pAI->pNavigator;
  if ( !v6 )
  {
    LOBYTE(v9) = -1;
    v12->GetNextMultiGoalPathGoal(v12, (unsigned __int8)v9, &vPoint, (bool *)v54);
    v32 = this->m_pAI->pNavigator;
    v33 = v32->__vftable;
    if ( v54[0] )
    {
      v35 = ((__int64 (*)(void))v33->Get2DNavigator)();
      if ( !v35 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 4141, ASSERT_TYPE_ASSERT, "(pNav2D)", (const char *)&queryFormat, "pNav2D") )
        __debugbreak();
      AINavigator::GetUpVector((AINavigator *)v35, &outUp);
      v36 = *(bfx::SpaceHandle **)(v35 + 16);
      if ( !v36 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 4147, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
        __debugbreak();
      PathSpec = AINavigator2D::GetPathSpec((AINavigator2D *)v35);
      Nav_GetClosestVerticalPos(&this->m_pAI->scriptGoalPath.path[this->m_pAI->scriptGoalPath.curPoint], &outUp, *(_DWORD *)(v35 + 112), v36, PathSpec, &vGoalPos, NULL);
      p_vGoalPos = &vGoalPos;
    }
    else
    {
      v33->GetRequestedGoalPos(v32, &vPoint);
      p_vGoalPos = &this->m_pAI->scriptGoalPath.path[this->m_pAI->scriptGoalPath.curPoint];
    }
    __asm { vmovss  xmm3, cs:__real@40800000; bufferSq }
    if ( !AICommonInterface::PointNearPointSqDist(this, &vPoint, p_vGoalPos, *(float *)&_XMM3) )
    {
      v39 = ScriptContext_Server();
      Scr_AddInt(v39, this->m_pAI->scriptGoalPath.curPoint);
      GScr_Notify(this->m_pAI->ent, scr_const.subgoal, 1u);
      v40 = this->m_pAI;
      curPoint = v40->scriptGoalPath.curPoint;
      if ( curPoint == v40->scriptGoalPath.numPoints - 1 )
        v40->scriptGoalPath.numPoints = 0;
      else
        v40->scriptGoalPath.curPoint = curPoint + 1;
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+0B8h+vPoint]
      vmovss  xmm1, dword ptr [rsp+0B8h+vPoint+4]
      vsubss  xmm3, xmm0, dword ptr [rax+130h]
      vsubss  xmm2, xmm1, dword ptr [rax+134h]
      vmovss  xmm0, dword ptr [rsp+0B8h+vPoint+8]
      vsubss  xmm4, xmm0, dword ptr [rax+138h]
      vmulss  xmm2, xmm2, xmm2
      vmulss  xmm1, xmm3, xmm3
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm3, xmm2, xmm1
      vaddss  xmm2, xmm3, xmm0
      vcomiss xmm2, cs:__real@46800000
    }
    this->m_pAI->pNavigator->m_bAllowSkipMultigoalPoint = 0;
    goto LABEL_49;
  }
  AINavigator::GetUpVector(v12, &outUp);
  v13 = this->m_pAI->pNavigator;
  p_hSpace = &v13->m_pSpace->hSpace;
  m_Layer = v13->m_Layer;
  v16 = 0;
  v17 = (AINavigator2D *)((__int64 (*)(void))v13->Get2DNavigator)();
  *(double *)&_XMM0 = ((double (__fastcall *)(AINavigator *))this->m_pAI->pNavigator->GetPathDistToGoal)(this->m_pAI->pNavigator);
  __asm { vcomiss xmm0, xmm6 }
  if ( !v11 )
    goto LABEL_32;
  while ( 1 )
  {
    v18 = this->m_pAI;
    if ( v18->scriptGoalPath.lastPathedPoint == v18->scriptGoalPath.numPoints - 1 || !v18->pNavigator->CanAddMultiGoalPathGoal(v18->pNavigator) )
      break;
    _RDX = this->m_pAI;
    v20 = _RDX->scriptGoalPath.lastPathedPoint;
    if ( v20 == 0xFF )
      v21 = _RDX->scriptGoalPath.curPoint;
    else
      v21 = v20 + 1;
    if ( v21 == _RDX->scriptGoalPath.numPoints - 1 && _RDX->scriptGoal.node )
    {
      _RCX = 3i64 * v21;
      __asm
      {
        vmovss  xmm0, dword ptr [rdx+rcx*4+368h]
        vmovss  dword ptr [rsp+0B8h+vPoint], xmm0
        vmovss  xmm1, dword ptr [rdx+rcx*4+36Ch]
        vmovss  dword ptr [rsp+0B8h+vPoint+4], xmm1
        vmovss  xmm0, dword ptr [rdx+rcx*4+370h]
      }
    }
    else
    {
      _RSI = 3i64 * v21;
      if ( v17 )
      {
        v26 = AINavigator2D::GetPathSpec(v17);
        Nav_GetClosestVerticalPos(&this->m_pAI->scriptGoalPath.path[v21], &outUp, m_Layer, p_hSpace, v26, &vPoint, NULL);
        _RDX = this->m_pAI;
        goto LABEL_27;
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rdx+rsi*4+368h]
        vmovss  dword ptr [rsp+0B8h+vPoint], xmm0
        vmovss  xmm1, dword ptr [rdx+rsi*4+36Ch]
        vmovss  dword ptr [rsp+0B8h+vPoint+4], xmm1
        vmovss  xmm0, dword ptr [rdx+rsi*4+370h]
      }
    }
    __asm { vmovss  dword ptr [rsp+0B8h+vPoint+8], xmm0 }
LABEL_27:
    if ( !_RDX->pNavigator->AddMultiGoalPathGoal(_RDX->pNavigator, &vPoint) )
      break;
    v16 = 1;
    this->m_pAI->iPathEndTime = 0;
    this->m_pAI->scriptGoalPath.lastPathedPoint = v21;
    *(double *)&_XMM0 = ((double (__fastcall *)(AINavigator *))this->m_pAI->pNavigator->GetPathDistToGoal)(this->m_pAI->pNavigator);
    __asm { vcomiss xmm0, xmm6 }
    if ( !v11 )
      goto LABEL_31;
  }
  if ( !v16 )
    goto LABEL_32;
LABEL_31:
  GScr_Notify(this->m_pAI->ent, scr_const.path_set, 0);
LABEL_32:
  HasPath = AICommonInterface::HasPath(this);
  v30 = this->m_pAI;
  if ( HasPath )
  {
    *(float *)&_XMM0 = v30->pNavigator->GetPathDistToGoal(v30->pNavigator);
    *(double *)&_XMM0 = GetMaxSpeedForPathLength(*(float *)&_XMM0);
    _RAX = this->m_pAI;
    __asm { vmovss  dword ptr [rax+0B4Ch], xmm0 }
  }
  else
  {
    v30->path_maxSpeed = -1.0;
  }
LABEL_49:
  __asm { vmovaps xmm6, [rsp+0B8h+var_38] }
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
  AINavigator2D *v7; 
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
  v7 = this->m_pAI->pNavigator->Get2DNavigator(this->m_pAI->pNavigator);
  if ( v7 )
    AINavigator2D::SetSuppressionPlanes(v7, &blockPlanes);
  __asm { vxorps  xmm2, xmm2, xmm2; minDistFromCurGoal }
  Nav_SetGoalPos(this->m_pAI->pNavigator, &vOriginOut, *(float *)&_XMM2);
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
bool AIScriptedInterface::FindPathToTacPoint(AIScriptedInterface *this, const tacpoint_t *pTacPoint)
{
  bool result; 
  unsigned __int64 eTeam; 
  int v7; 
  bool IsPointInRepulsorBadplace; 
  bool v9; 
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
  v7 = Nav_TranslateTeamFlagsToRepulsorUsageFlags(&teamFlags);
  IsPointInRepulsorBadplace = Nav_IsPointInRepulsorBadplace(&outPos, v7, this->m_pAI->ent->s.number, 2047);
  v9 = !IsPointInRepulsorBadplace;
  if ( IsPointInRepulsorBadplace )
  {
    AIScriptedInterface::Debug_NotMoving(this, "badplace repulsor");
    return 0;
  }
  _RAX = this->m_pAI;
  __asm
  {
    vmovaps [rsp+0A8h+var_18], xmm6
    vmovss  xmm0, dword ptr [rax+264h]
    vcomiss xmm0, cs:__real@41700000
  }
  if ( v9 )
    __asm { vmulss  xmm6, xmm0, xmm0 }
  else
    __asm { vmovss  xmm6, cs:__real@43610000 }
  if ( !AICommonInterface::HasPath(this) )
    goto LABEL_29;
  __asm { vmovss  xmm3, cs:__real@41800000; bufferSq }
  if ( AICommonInterface::PointNearPointSqDist(this, &this->m_pAI->ent->r.currentOrigin, &outPos, *(float *)&_XMM3) )
  {
    this->ClearPath(this);
  }
  else
  {
LABEL_29:
    __asm { vmovaps xmm3, xmm6; bufferSq }
    if ( !AICommonInterface::PointNearPointSqDist(this, &this->m_pAI->ent->r.currentOrigin, &outPos, *(float *)&_XMM3) )
    {
      Path = AIScriptedInterface::FindPath(this, &outPos, NULL, 1, 1, 1);
      if ( !AICommonInterface::HasPath(this) && !AIScriptedInterface::PathPending(this) )
      {
        this->ClearPileUp(this);
        result = Path;
        goto LABEL_28;
      }
    }
  }
  result = 1;
LABEL_28:
  __asm { vmovaps xmm6, [rsp+0A8h+var_18] }
  return result;
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
    _RAX = Com_TeamsSP_GetAllTeamFlags();
  else
    _RAX = Com_TeamsMP_GetAllTeamFlags();
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vmovsd  xmm1, qword ptr [rax+10h]
  }
  v22 = _RAX->array[6];
  __asm
  {
    vmovups xmmword ptr [rbp+57h+iTeamFlags.array], xmm0
    vmovsd  qword ptr [rbp+57h+iTeamFlags.array+10h], xmm1
  }
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
  int v10; 
  int v11; 
  int v12; 
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
      _RDI = v5;
      if ( v5 )
      {
        G_Items_SetStateFromTag(this->m_pAI->ent, weapDrop->tagName, v5, 0);
        *(_QWORD *)_RDI->s.lerp.pos.trDelta.v = 0i64;
        _RDI->s.lerp.pos.trDelta.v[2] = 0.0;
        _RDI->s.lerp.pos.trTime = level.time;
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+28h]
          vmovss  [rsp+0B8h+var_88], xmm0
        }
        if ( (v10 & 0x7F800000) == 2139095040 )
          goto LABEL_23;
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+2Ch]
          vmovss  [rsp+0B8h+var_88], xmm0
        }
        if ( (v11 & 0x7F800000) == 2139095040 )
          goto LABEL_23;
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+30h]
          vmovss  [rsp+0B8h+var_88], xmm0
        }
        if ( (v12 & 0x7F800000) == 2139095040 )
        {
LABEL_23:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 1271, ASSERT_TYPE_SANITY, "( !IS_NAN( ( weapEnt->s.lerp.pos.trDelta )[0] ) && !IS_NAN( ( weapEnt->s.lerp.pos.trDelta )[1] ) && !IS_NAN( ( weapEnt->s.lerp.pos.trDelta )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( weapEnt->s.lerp.pos.trDelta )[0] ) && !IS_NAN( ( weapEnt->s.lerp.pos.trDelta )[1] ) && !IS_NAN( ( weapEnt->s.lerp.pos.trDelta )[2] )") )
            __debugbreak();
        }
        G_Items_EnablePhysics(_RDI);
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
  int v11; 
  int v12; 
  int v13; 
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
          _RDI = v6;
          if ( v6 )
          {
            G_Items_SetStateFromTag(this->m_pAI->ent, *(scr_string_t *)&p_weapon[-1].attachmentVariationIndices[25], v6, 0);
            *(_QWORD *)_RDI->s.lerp.pos.trDelta.v = 0i64;
            _RDI->s.lerp.pos.trDelta.v[2] = 0.0;
            _RDI->s.lerp.pos.trTime = level.time;
            __asm
            {
              vmovss  xmm0, dword ptr [rdi+28h]
              vmovss  [rsp+0C8h+var_98], xmm0
            }
            if ( (v11 & 0x7F800000) == 2139095040 )
              goto LABEL_26;
            __asm
            {
              vmovss  xmm0, dword ptr [rdi+2Ch]
              vmovss  [rsp+0C8h+var_98], xmm0
            }
            if ( (v12 & 0x7F800000) == 2139095040 )
              goto LABEL_26;
            __asm
            {
              vmovss  xmm0, dword ptr [rdi+30h]
              vmovss  [rsp+0C8h+var_98], xmm0
            }
            if ( (v13 & 0x7F800000) == 2139095040 )
            {
LABEL_26:
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 1271, ASSERT_TYPE_SANITY, "( !IS_NAN( ( weapEnt->s.lerp.pos.trDelta )[0] ) && !IS_NAN( ( weapEnt->s.lerp.pos.trDelta )[1] ) && !IS_NAN( ( weapEnt->s.lerp.pos.trDelta )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( weapEnt->s.lerp.pos.trDelta )[0] ) && !IS_NAN( ( weapEnt->s.lerp.pos.trDelta )[1] ) && !IS_NAN( ( weapEnt->s.lerp.pos.trDelta )[2] )") )
                __debugbreak();
            }
            G_Items_EnablePhysics(_RDI);
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
    __asm { vmovss  xmm0, [rsp+78h+arg_30] }
    value.type = VAR_FLOAT;
    __asm { vmovss  dword ptr [rsp+78h+value.u], xmm0 }
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
  unsigned int v5; 
  int v7; 
  unsigned int v8; 
  __int128 *v9; 
  __int64 v10; 
  unsigned __int64 eTeam; 
  __int64 v13; 
  __int64 v14; 
  __int128 v15; 
  __int64 v16; 
  unsigned int v17; 

  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
    _RAX = Com_TeamsSP_GetAllTeamFlags();
  else
    _RAX = Com_TeamsMP_GetAllTeamFlags();
  __asm
  {
    vmovups xmm1, xmmword ptr [rax]
    vmovsd  xmm0, qword ptr [rax+10h]
  }
  v5 = _RAX->array[6];
  __asm
  {
    vmovups [rsp+88h+var_48], xmm1
    vmovsd  [rsp+88h+var_38], xmm0
    vmovd   eax, xmm1
  }
  LODWORD(v15) = iTeamFlags->array[0] & ~_EAX;
  *(_QWORD *)((char *)&v15 + 4) = ~*(_QWORD *)((char *)&v15 + 4) & *(_QWORD *)&iTeamFlags->array[1];
  HIDWORD(v15) = ~HIDWORD(v15) & iTeamFlags->array[3];
  v16 = ~v16 & *(_QWORD *)&iTeamFlags->array[4];
  v7 = 0;
  v17 = ~v5 & iTeamFlags->array[6];
  v8 = 0;
  v9 = &v15;
  while ( !*(_DWORD *)v9 )
  {
    ++v8;
    v9 = (__int128 *)((char *)v9 + 4);
    if ( v8 >= 7 )
      goto LABEL_10;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 1025, ASSERT_TYPE_ASSERT, "( Com_Teams_IsValidTeamFlag( iTeamFlags ) )", (const char *)&queryFormat, "Com_Teams_IsValidTeamFlag( iTeamFlags )") )
    __debugbreak();
LABEL_10:
  v10 = 0i64;
  while ( 1 )
  {
    if ( level.actors[v10].inuse )
    {
      if ( !level.actors[v10].sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 1034, ASSERT_TYPE_ASSERT, "( level.actors[i].sentient )", (const char *)&queryFormat, "level.actors[i].sentient") )
        __debugbreak();
      eTeam = (unsigned int)level.actors[v10].sentient->eTeam;
      if ( (unsigned int)eTeam >= 0xE0 )
      {
        LODWORD(v14) = 224;
        LODWORD(v13) = level.actors[v10].sentient->eTeam;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v13, v14) )
          __debugbreak();
      }
      if ( ((0x80000000 >> (eTeam & 0x1F)) & iTeamFlags->array[eTeam >> 5]) != 0 )
        break;
    }
    ++v7;
    if ( ++v10 >= 38 )
      return 0i64;
  }
  return &level.actors[v7];
}

/*
==============
AIScriptedInterface::FixedLinkPhysicsFallback
==============
*/
void AIScriptedInterface::FixedLinkPhysicsFallback(AIScriptedInterface *this, const vec3_t *targetOrigin)
{
  ai_scripted_t *m_pAI; 

  _RDI = targetOrigin;
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 6254, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 6255, ASSERT_TYPE_ASSERT, "( m_pAI->ent )", (const char *)&queryFormat, "m_pAI->ent") )
    __debugbreak();
  m_pAI = this->m_pAI;
  __asm
  {
    vmovss  xmm2, dword ptr [rdi]
    vmovss  xmm3, dword ptr [rdi+4]
  }
  _RAX = m_pAI->ent;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+130h]
    vmovss  xmm1, dword ptr [rax+134h]
  }
  m_pAI->Physics.ePhysicsType = AIPHYS_ZONLY_PHYSICS_ABSOLUTE;
  _RAX = this->m_pAI;
  __asm
  {
    vsubss  xmm0, xmm2, xmm0
    vsubss  xmm1, xmm3, xmm1
    vmovss  dword ptr [rax+888h], xmm0
    vmovss  dword ptr [rax+88Ch], xmm1
  }
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
  __int64 time; 
  gentity_s *v9; 
  gentity_s *v10; 
  actor_s *v11; 
  unsigned int v17; 
  actor_s *v18; 
  actor_s *v39; 
  bool v40; 
  int v42; 
  actor_s *v67; 
  bool v68; 
  unsigned int v71; 
  actor_s *v98; 
  const char *v122; 
  gentity_s *ent; 
  sentient_s *sentient; 
  GameScriptData *v129; 
  scrContext_t *v130; 
  unsigned int v131; 
  AIActorInterface v132; 
  AIActorInterface *v133; 
  AIActorInterface v134; 
  AIActorInterface *v135; 
  vec3_t vEyePosOut; 
  vec3_t vEyePos; 
  vec3_t outForward; 
  vec3_t v139; 
  bitarray<224> iTeamFlags; 
  void *retaddr; 

  _R11 = &retaddr;
  time = (unsigned int)level.time;
  __asm
  {
    vmovaps xmmword ptr [r11-88h], xmm11
    vmovaps xmmword ptr [r11-98h], xmm12
  }
  Com_Printf(18, "^3trying to delete somebody to make room for spawned AI (time %d)\n", time);
  if ( level.loading )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E504E0, 1084i64);
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities->r.isInUse != *g_entityIsInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !*g_entityIsInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 498, ASSERT_TYPE_ASSERT, "( G_IsEntityInUse( 0 ) )", (const char *)&queryFormat, "G_IsEntityInUse( 0 )") )
    __debugbreak();
  v9 = g_entities;
  if ( g_entities->classname != scr_const.player && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 500, ASSERT_TYPE_ASSERT, "( player->classname == scr_const.player )", (const char *)&queryFormat, "player->classname == scr_const.player") )
    __debugbreak();
  if ( !v9->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 501, ASSERT_TYPE_ASSERT, "( player->client )", (const char *)&queryFormat, "player->client") )
    __debugbreak();
  if ( !v9->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 502, ASSERT_TYPE_ASSERT, "( player->sentient )", (const char *)&queryFormat, "player->sentient") )
    __debugbreak();
  Sentient_GetEyePosition(v9->sentient, &vEyePosOut);
  if ( AIActorInterface::EntityIsPlayer(g_entities + 1) )
  {
    v10 = g_entities + 1;
    if ( g_entities[1].classname != scr_const.player && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 508, ASSERT_TYPE_ASSERT, "( player2->classname == scr_const.player )", (const char *)&queryFormat, "player2->classname == scr_const.player") )
      __debugbreak();
    if ( !v10->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 509, ASSERT_TYPE_ASSERT, "( player2->client )", (const char *)&queryFormat, "player2->client") )
      __debugbreak();
    if ( !v10->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 510, ASSERT_TYPE_ASSERT, "( player2->sentient )", (const char *)&queryFormat, "player2->sentient") )
      __debugbreak();
    Sentient_GetEyePosition(v10->sentient, &vEyePos);
  }
  else
  {
    v10 = NULL;
  }
  v11 = NULL;
  __asm
  {
    vxorps  xmm12, xmm12, xmm12
    vxorps  xmm11, xmm11, xmm11
  }
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
    _RAX = Com_TeamsSP_GetAllTeamFlags();
  else
    _RAX = Com_TeamsMP_GetAllTeamFlags();
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vmovsd  xmm1, qword ptr [rax+10h]
  }
  v17 = _RAX->array[6];
  __asm
  {
    vmovaps [rsp+180h+var_30], xmm6
    vmovups xmmword ptr [rbp+80h+iTeamFlags.array], xmm0
    vmovsd  qword ptr [rbp+80h+iTeamFlags.array+10h], xmm1
  }
  iTeamFlags.array[6] = v17;
  __asm { vmovaps [rsp+180h+var_40], xmm7 }
  v18 = AIActorInterface::FirstActor(&iTeamFlags);
  if ( v18 )
  {
    do
    {
      AIActorInterface::AIActorInterface(&v132);
      v133 = NULL;
      AIActorInterface::SetActor(&v132, v18);
      v133 = &v132;
      if ( (v132.m_pAI->ent->spawnflags & 4) == 0 && v132.m_pAI->ent->s.number != level.currentEntityThink && !AIActorInterface::IsLightweight(&v132) )
      {
        if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
          __debugbreak();
        if ( level.time - v18->ent->c.item[0].ammoCount > level.frameDuration )
        {
          _RDX = (__int64)&v18->ent->r.currentOrigin;
          __asm
          {
            vmovss  xmm5, dword ptr [rdx+4]
            vsubss  xmm0, xmm5, dword ptr [rbp+80h+vEyePosOut+4]
            vmovss  xmm4, dword ptr [rdx]
            vsubss  xmm2, xmm4, dword ptr [rbp+80h+vEyePosOut]
            vmovss  xmm7, dword ptr [rdx+8]
            vsubss  xmm3, xmm7, dword ptr [rbp+80h+vEyePosOut+8]
            vmulss  xmm1, xmm0, xmm0
            vmulss  xmm0, xmm2, xmm2
            vaddss  xmm2, xmm1, xmm0
            vmulss  xmm1, xmm3, xmm3
            vaddss  xmm6, xmm2, xmm1
          }
          if ( v10 )
          {
            __asm
            {
              vsubss  xmm0, xmm5, dword ptr [rbp+80h+vEyePos+4]
              vsubss  xmm2, xmm4, dword ptr [rbp+80h+vEyePos]
              vsubss  xmm3, xmm7, dword ptr [rbp+80h+vEyePos+8]
              vmulss  xmm1, xmm0, xmm0
              vmulss  xmm0, xmm2, xmm2
              vaddss  xmm2, xmm1, xmm0
              vmulss  xmm1, xmm3, xmm3
              vaddss  xmm2, xmm2, xmm1
              vminss  xmm6, xmm2, xmm6
            }
          }
          __asm { vcomiss xmm11, xmm6 }
        }
      }
      v18 = AIActorInterface::NextActor(v18, &iTeamFlags);
    }
    while ( v18 );
    __asm { vucomiss xmm11, xmm12 }
  }
  G_Client_GetViewDirection(v9, &outForward, NULL, NULL);
  if ( v10 )
    G_Client_GetViewDirection(v10, &v139, NULL, NULL);
  __asm
  {
    vmovaps [rsp+180h+var_50], xmm8
    vmovaps [rsp+180h+var_60], xmm9
    vmovaps [rsp+180h+var_70], xmm10
  }
  v39 = AIActorInterface::FirstActor(&iTeamFlags);
  v40 = v39 == NULL;
  if ( v39 )
  {
    do
    {
      AIActorInterface::AIActorInterface(&v132);
      v133 = NULL;
      AIActorInterface::SetActor(&v132, v39);
      v133 = &v132;
      if ( (v132.m_pAI->ent->spawnflags & 4) == 0 && v132.m_pAI->ent->s.number != level.currentEntityThink && !AIActorInterface::IsLightweight(&v132) )
      {
        if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
          __debugbreak();
        _RCX = v39->ent;
        v42 = level.time - v39->ent->c.item[0].ammoCount;
        if ( v42 > level.frameDuration )
        {
          __asm
          {
            vmovss  xmm8, dword ptr [rcx+130h]
            vmovss  xmm9, dword ptr [rcx+134h]
            vsubss  xmm5, xmm8, dword ptr [rbp+80h+vEyePosOut]
            vmulss  xmm2, xmm5, dword ptr [rbp+80h+outForward]
            vsubss  xmm6, xmm9, dword ptr [rbp+80h+vEyePosOut+4]
            vmovss  xmm10, dword ptr [rcx+138h]
            vmulss  xmm3, xmm6, dword ptr [rbp+80h+outForward+4]
            vsubss  xmm7, xmm10, dword ptr [rbp+80h+vEyePosOut+8]
            vmulss  xmm1, xmm7, dword ptr [rbp+80h+outForward+8]
            vaddss  xmm4, xmm3, xmm2
            vaddss  xmm2, xmm4, xmm1
            vcomiss xmm2, xmm12
          }
          if ( (unsigned int)v42 < level.frameDuration )
          {
            __asm
            {
              vmulss  xmm1, xmm6, xmm6
              vmulss  xmm0, xmm5, xmm5
              vaddss  xmm2, xmm1, xmm0
              vmulss  xmm1, xmm7, xmm7
              vaddss  xmm5, xmm2, xmm1
            }
            if ( v10 )
            {
              __asm
              {
                vsubss  xmm6, xmm8, dword ptr [rbp+80h+vEyePos]
                vmulss  xmm2, xmm6, dword ptr [rbp+80h+var_D0]
                vsubss  xmm7, xmm9, dword ptr [rbp+80h+vEyePos+4]
                vmulss  xmm3, xmm7, dword ptr [rbp+80h+var_D0+4]
                vsubss  xmm8, xmm10, dword ptr [rbp+80h+vEyePos+8]
                vmulss  xmm1, xmm8, dword ptr [rbp+80h+var_D0+8]
                vaddss  xmm4, xmm3, xmm2
                vaddss  xmm2, xmm4, xmm1
                vcomiss xmm2, xmm12
              }
            }
            else
            {
              __asm { vcomiss xmm11, xmm5 }
            }
          }
        }
      }
      v39 = AIActorInterface::NextActor(v39, &iTeamFlags);
    }
    while ( v39 );
    v40 = 1;
  }
  __asm { vucomiss xmm11, xmm12 }
  if ( !v40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 615, ASSERT_TYPE_ASSERT, "( fMaxDistSqrd == 0 )", (const char *)&queryFormat, "fMaxDistSqrd == 0") )
    __debugbreak();
  v67 = AIActorInterface::FirstActor(&iTeamFlags);
  v68 = v67 == NULL;
  if ( !v67 )
    goto LABEL_84;
  __asm { vmovss  xmm10, cs:__real@3f000000 }
  do
  {
    AIActorInterface::AIActorInterface(&v132);
    v133 = NULL;
    AIActorInterface::SetActor(&v132, v67);
    v133 = &v132;
    if ( (v132.m_pAI->ent->spawnflags & 4) == 0 && v132.m_pAI->ent->s.number != level.currentEntityThink && !AIActorInterface::IsLightweight(&v132) )
    {
      if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
        __debugbreak();
      _RCX = v67->ent;
      v71 = level.time - v67->ent->c.item[0].ammoCount;
      if ( (int)v71 > level.frameDuration )
      {
        __asm
        {
          vmovss  xmm7, dword ptr [rcx+130h]
          vmovss  xmm8, dword ptr [rcx+134h]
          vsubss  xmm4, xmm7, dword ptr [rbp+80h+vEyePosOut]
          vsubss  xmm3, xmm8, dword ptr [rbp+80h+vEyePosOut+4]
          vmovss  xmm9, dword ptr [rcx+138h]
          vsubss  xmm6, xmm9, dword ptr [rbp+80h+vEyePosOut+8]
          vmulss  xmm1, xmm3, xmm3
          vmulss  xmm0, xmm4, xmm4
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm6, xmm6
          vaddss  xmm5, xmm2, xmm1
          vcomiss xmm11, xmm5
        }
        if ( v71 < level.frameDuration )
        {
          __asm
          {
            vmulss  xmm3, xmm3, dword ptr [rbp+80h+outForward+4]
            vmulss  xmm2, xmm4, dword ptr [rbp+80h+outForward]
            vmulss  xmm1, xmm6, dword ptr [rbp+80h+outForward+8]
            vaddss  xmm4, xmm3, xmm2
            vaddss  xmm2, xmm4, xmm1
            vmulss  xmm3, xmm2, xmm2
            vmulss  xmm0, xmm5, xmm10
            vcomiss xmm3, xmm0
          }
          if ( v71 < level.frameDuration )
          {
            if ( v10 )
            {
              __asm
              {
                vsubss  xmm4, xmm7, dword ptr [rbp+80h+vEyePos]
                vsubss  xmm3, xmm8, dword ptr [rbp+80h+vEyePos+4]
                vsubss  xmm7, xmm9, dword ptr [rbp+80h+vEyePos+8]
                vmulss  xmm1, xmm3, xmm3
                vmulss  xmm0, xmm4, xmm4
                vaddss  xmm2, xmm1, xmm0
                vmulss  xmm1, xmm7, xmm7
                vaddss  xmm6, xmm2, xmm1
                vcomiss xmm11, xmm6
              }
            }
            else
            {
              __asm
              {
                vcomiss xmm11, xmm5
                vmovaps xmm11, xmm5
              }
              v11 = v67;
            }
          }
        }
      }
    }
    v67 = AIActorInterface::NextActor(v67, &iTeamFlags);
  }
  while ( v67 );
  v68 = v11 == NULL;
  if ( !v11 )
  {
LABEL_84:
    __asm { vucomiss xmm11, xmm12 }
    if ( !v68 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 668, ASSERT_TYPE_ASSERT, "( fMaxDistSqrd == 0 )", (const char *)&queryFormat, "fMaxDistSqrd == 0") )
      __debugbreak();
    v98 = AIActorInterface::FirstActor(&iTeamFlags);
    if ( !v98 )
      goto LABEL_101;
    do
    {
      AIActorInterface::AIActorInterface(&v132);
      v133 = NULL;
      AIActorInterface::SetActor(&v132, v98);
      v133 = &v132;
      if ( (v132.m_pAI->ent->spawnflags & 4) == 0 && v132.m_pAI->ent->s.number != level.currentEntityThink && !AIActorInterface::IsLightweight(&v132) )
      {
        if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
          __debugbreak();
        _RCX = v98->ent;
        if ( level.time - v98->ent->c.item[0].ammoCount > level.frameDuration )
        {
          __asm
          {
            vmovss  xmm6, dword ptr [rcx+134h]
            vsubss  xmm0, xmm6, dword ptr [rbp+80h+vEyePosOut+4]
            vmovss  xmm5, dword ptr [rcx+130h]
            vsubss  xmm2, xmm5, dword ptr [rbp+80h+vEyePosOut]
            vmovss  xmm7, dword ptr [rcx+138h]
            vsubss  xmm3, xmm7, dword ptr [rbp+80h+vEyePosOut+8]
            vmulss  xmm1, xmm0, xmm0
            vmulss  xmm0, xmm2, xmm2
            vaddss  xmm2, xmm1, xmm0
            vmulss  xmm1, xmm3, xmm3
            vaddss  xmm4, xmm2, xmm1
          }
          if ( v10 )
          {
            __asm
            {
              vsubss  xmm0, xmm6, dword ptr [rbp+80h+vEyePos+4]
              vsubss  xmm2, xmm5, dword ptr [rbp+80h+vEyePos]
              vsubss  xmm3, xmm7, dword ptr [rbp+80h+vEyePos+8]
              vmulss  xmm1, xmm0, xmm0
              vmulss  xmm0, xmm2, xmm2
              vaddss  xmm2, xmm1, xmm0
              vmulss  xmm1, xmm3, xmm3
              vaddss  xmm2, xmm2, xmm1
              vminss  xmm4, xmm2, xmm4
            }
          }
          __asm { vcomiss xmm11, xmm4 }
          if ( !v10 )
          {
            __asm { vmovaps xmm11, xmm4 }
            v11 = v98;
          }
        }
      }
      v98 = AIActorInterface::NextActor(v98, &iTeamFlags);
    }
    while ( v98 );
    if ( !v11 )
LABEL_101:
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E50700, 1085i64);
  }
  __asm
  {
    vmovaps xmm9, [rsp+180h+var_60]
    vmovaps xmm8, [rsp+180h+var_50]
    vmovaps xmm10, [rsp+180h+var_70]
  }
  v122 = SL_ConvertToString(v11->ent->classname);
  Com_Printf(18, "^3deleting entity %i of classname'%s'\n", (unsigned int)v11->ent->s.number, v122);
  ent = v11->ent;
  sentient = v11->sentient;
  AIActorInterface::AIActorInterface(&v134);
  v135 = NULL;
  AIActorInterface::SetActor(&v134, v11);
  v135 = &v134;
  v134.ClearPath(&v134);
  __asm
  {
    vmovaps xmm12, [rsp+180h+var_90]
    vmovaps xmm11, [rsp+180h+var_80]
    vmovaps xmm7, [rsp+180h+var_40]
    vmovaps xmm6, [rsp+180h+var_30]
  }
  if ( (_BYTE)GameScriptData::ms_allocatedType != HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_scr_data_sp.h", 97, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  if ( !GameScriptData::ms_gScriptData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_data.h", 78, ASSERT_TYPE_ASSERT, "(ms_gScriptData)", "%s\n\tAttempting to access game data outside of an active game context", "ms_gScriptData") )
    __debugbreak();
  if ( !(_BYTE)GameScriptData::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_data.h", 79, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tAttempting to access game data outside of an active game context", "ms_allocatedType != GameModeType::NONE") )
    __debugbreak();
  v129 = GameScriptData::ms_gScriptData;
  v130 = ScriptContext_Server();
  v131 = GScr_ExecEntThread(v11->ent, v129[1].delete_, 0);
  Scr_FreeThread(v130, v131);
  GScr_Notify(v11->ent, scr_const.death, 0);
  GScr_Notify(v11->ent, scr_const.death_or_disconnect, 0);
  G_FreeEntity(v11->ent);
  if ( ent->actor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 734, ASSERT_TYPE_ASSERT, "( ent->actor == 0 )", (const char *)&queryFormat, "ent->actor == NULL") )
    __debugbreak();
  if ( ent->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 735, ASSERT_TYPE_ASSERT, "( ent->sentient == 0 )", (const char *)&queryFormat, "ent->sentient == NULL") )
    __debugbreak();
  if ( v11->inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 737, ASSERT_TYPE_ASSERT, "( !pExpendable->inuse )", (const char *)&queryFormat, "!pExpendable->inuse") )
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
  char *fmt; 
  vec3_t *trans; 

  _RSI = outTranslation;
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 5721, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  ServerDObjForEnt = Com_GetServerDObjForEnt(this->m_pAI->ent);
  if ( !ServerDObjForEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 5724, ASSERT_TYPE_ASSERT, "( obj )", (const char *)&queryFormat, "obj") )
    __debugbreak();
  m_pAI = this->m_pAI;
  bUseGoalWeight = m_pAI->bScriptUseGoalWeight || m_pAI->bUseGoalWeight;
  XAnimCalcDelta3D(ServerDObjForEnt, 0, XANIM_SUBTREE_DEFAULT, 0, outRotation, _RSI, bUseGoalWeight);
  v9 = DVARINT_ai_debugAnimDeltas;
  if ( !DVARINT_ai_debugAnimDeltas && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugAnimDeltas") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( v9->current.integer == this->m_pAI->ent->s.number )
  {
    __asm
    {
      vmovss  xmm3, dword ptr [rsi+4]
      vmovss  xmm2, dword ptr [rsi]
      vmovss  xmm0, dword ptr [rsi+8]
      vcvtss2sd xmm3, xmm3, xmm3
      vcvtss2sd xmm2, xmm2, xmm2
      vcvtss2sd xmm0, xmm0, xmm0
    }
    LODWORD(trans) = level.time;
    __asm
    {
      vmovq   r9, xmm3
      vmovq   r8, xmm2
      vmovsd  [rsp+48h+fmt], xmm0
    }
    Com_Printf(18, "deltas = %g %g %g (time %d)\n", *(double *)&_XMM2, *(double *)&_XMM3, *(double *)&fmt, trans);
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
  vec3_t *outClosestPos; 
  ai_scripted_t *m_pAI; 
  sentient_s *sentient; 
  char v23; 
  __int64 v24; 
  __int64 v25; 
  nav_space_s *v27; 
  const bfx::AreaHandle *hHintArea; 
  bool ClosestVerticalPosWithHint; 
  ai_scripted_t *v34; 
  float result_projectedDistanceFromStart; 
  vec3_t pos; 
  bfx::PathSpec pPathSpec; 

  outClosestPos = outOrigin;
  if ( !this->m_pAI->pNavigator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 3434, ASSERT_TYPE_ASSERT, "( m_pAI->pNavigator )", (const char *)&queryFormat, "m_pAI->pNavigator") )
    __debugbreak();
  m_pAI = this->m_pAI;
  __asm
  {
    vmovaps [rsp+100h+var_30], xmm6
    vmovaps [rsp+100h+var_40], xmm7
  }
  sentient = m_pAI->sentient;
  if ( !sentient->pClaimedNode )
    goto LABEL_7;
  pathnode_t::GetPos(sentient->pClaimedNode, &pos);
  m_pAI = this->m_pAI;
  __asm
  {
    vmovss  xmm5, dword ptr [rbp+57h+pos]
    vmovss  xmm6, dword ptr [rbp+57h+pos+4]
    vmovss  xmm7, dword ptr [rbp+57h+pos+8]
  }
  _RAX = m_pAI->ent;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+130h]
    vmovss  xmm1, dword ptr [rax+134h]
    vsubss  xmm2, xmm1, xmm6
    vmulss  xmm1, xmm2, xmm2
    vsubss  xmm4, xmm0, xmm5
    vmovss  xmm0, dword ptr [rax+138h]
    vsubss  xmm3, xmm0, xmm7
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vcomiss xmm2, cs:__real@41800000
  }
  if ( v23 )
  {
    __asm
    {
      vmovss  dword ptr [rdi], xmm5
      vmovss  dword ptr [rdi+4], xmm6
      vmovss  dword ptr [rdi+8], xmm7
    }
  }
  else
  {
LABEL_7:
    v24 = (__int64)m_pAI->pNavigator->Get2DNavigator(m_pAI->pNavigator);
    v25 = v24;
    if ( v24 )
    {
      __asm { vxorps  xmm0, xmm0, xmm0 }
      v27 = *(nav_space_s **)(v24 + 16);
      pPathSpec.m_obstacleMode = BLOCKED_IF_ANY_MATCH;
      pPathSpec.m_usePathSharingPenalty = 0;
      __asm
      {
        vmovss  [rbp+57h+pPathSpec.m_pathSharingPenalty], xmm0
        vmovss  [rbp+57h+pPathSpec.m_maxPathSharingPenalty], xmm0
        vmovss  [rbp+57h+pPathSpec.m_maxSearchDist], xmm0
      }
      *(_QWORD *)&pPathSpec.m_obstacleBlockageFlags = -1i64;
      *(_QWORD *)&pPathSpec.m_areaPenaltyFlags = -1i64;
      bfx::PenaltyTable::PenaltyTable(&pPathSpec.m_penaltyTable);
      pPathSpec.m_snapMode = SNAP_CLOSEST;
      _RAX = AINavigator2D::GetPathSpec((AINavigator2D *)v25);
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups ymmword ptr [rbp+57h+pPathSpec.m_obstacleMode], ymm0
        vmovups ymm1, ymmword ptr [rax+20h]
        vmovups ymmword ptr [rbp+57h+pPathSpec.m_maxSearchDist], ymm1
        vmovups xmm0, xmmword ptr [rax+40h]
        vmovups xmmword ptr [rbp-9], xmm0
      }
      pPathSpec.m_obstacleBlockageFlags = 0;
      Nav_GetSpaceUp(v27, &pos);
      hHintArea = AINavigator2D::GetCurArea((AINavigator2D *)v25);
      ClosestVerticalPosWithHint = Nav_GetClosestVerticalPosWithHint(&this->m_pAI->ent->r.currentOrigin, &pos, *(_DWORD *)(v25 + 112), &v27->hSpace, &pPathSpec, outClosestPos, hHintArea, NULL);
      v34 = this->m_pAI;
      if ( ClosestVerticalPosWithHint )
      {
        ProjectPointOntoVectorDir(&v34->ent->r.currentOrigin, &v34->Physics.groundTraceOrigin, &pos, outClosestPos, &result_projectedDistanceFromStart);
      }
      else
      {
        outClosestPos->v[0] = v34->Physics.vOrigin.v[0];
        outClosestPos->v[1] = v34->Physics.vOrigin.v[1];
        outClosestPos->v[2] = v34->Physics.vOrigin.v[2];
      }
    }
  }
  __asm
  {
    vmovaps xmm7, [rsp+100h+var_40]
    vmovaps xmm6, [rsp+100h+var_30]
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
  *(_QWORD *)vDir->v = 0i64;
  vDir->v[2] = 0.0;
  _RAX = this->m_pAI;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+9B4h]
    vmovss  dword ptr [rdx], xmm0
    vmovss  xmm1, dword ptr [rax+9B8h]
    vmovss  dword ptr [rdx+4], xmm1
    vmovss  xmm2, dword ptr [rax+9BCh]
    vmovss  dword ptr [rdx+8], xmm2
    vaddss  xmm3, xmm0, dword ptr [rax+9C0h]
    vmovss  dword ptr [rdx], xmm3
    vaddss  xmm0, xmm1, dword ptr [rax+9C4h]
    vmovss  dword ptr [rdx+4], xmm0
    vaddss  xmm1, xmm2, dword ptr [rax+9C8h]
    vmovss  dword ptr [rdx+8], xmm1
    vaddss  xmm2, xmm3, dword ptr [rax+9CCh]
    vmovss  dword ptr [rdx], xmm2
    vaddss  xmm3, xmm0, dword ptr [rax+9D0h]
    vmovss  dword ptr [rdx+4], xmm3
    vaddss  xmm0, xmm1, dword ptr [rax+9D4h]
    vmovss  dword ptr [rdx+8], xmm0
    vaddss  xmm1, xmm2, dword ptr [rax+9D8h]
    vmovss  dword ptr [rdx], xmm1
    vaddss  xmm2, xmm3, dword ptr [rax+9DCh]
    vmovss  dword ptr [rdx+4], xmm2
    vaddss  xmm3, xmm0, dword ptr [rax+9E0h]
    vmovss  dword ptr [rdx+8], xmm3
    vaddss  xmm0, xmm1, dword ptr [rax+9E4h]
    vmovss  dword ptr [rdx], xmm0
    vaddss  xmm1, xmm2, dword ptr [rax+9E8h]
    vmovss  dword ptr [rdx+4], xmm1
    vaddss  xmm2, xmm3, dword ptr [rax+9ECh]
    vmovss  dword ptr [rdx+8], xmm2
    vaddss  xmm3, xmm0, dword ptr [rax+9F0h]
    vmovss  dword ptr [rdx], xmm3
    vaddss  xmm0, xmm1, dword ptr [rax+9F4h]
    vmovss  dword ptr [rdx+4], xmm0
    vaddss  xmm1, xmm2, dword ptr [rax+9F8h]
    vmovss  dword ptr [rdx+8], xmm1
    vaddss  xmm2, xmm3, dword ptr [rax+9FCh]
    vmovss  dword ptr [rdx], xmm2
    vaddss  xmm3, xmm0, dword ptr [rax+0A00h]
    vmovss  dword ptr [rdx+4], xmm3
    vaddss  xmm0, xmm1, dword ptr [rax+0A04h]
    vmovss  dword ptr [rdx+8], xmm0
    vaddss  xmm1, xmm2, dword ptr [rax+0A08h]
    vmovss  dword ptr [rdx], xmm1
    vaddss  xmm2, xmm3, dword ptr [rax+0A0Ch]
    vmovss  dword ptr [rdx+4], xmm2
    vaddss  xmm3, xmm0, dword ptr [rax+0A10h]
    vmovss  dword ptr [rdx+8], xmm3
    vaddss  xmm0, xmm1, dword ptr [rax+0A14h]
    vmovss  dword ptr [rdx], xmm0
    vaddss  xmm1, xmm2, dword ptr [rax+0A18h]
    vmovss  dword ptr [rdx+4], xmm1
    vaddss  xmm2, xmm3, dword ptr [rax+0A1Ch]
    vmovss  dword ptr [rdx+8], xmm2
    vaddss  xmm0, xmm0, dword ptr [rax+0A20h]
    vmovss  dword ptr [rdx], xmm0
    vaddss  xmm1, xmm1, dword ptr [rax+0A24h]
    vmovss  dword ptr [rdx+4], xmm1
    vaddss  xmm0, xmm2, dword ptr [rax+0A28h]
    vmovss  dword ptr [rdx+8], xmm0
  }
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

void __fastcall AIScriptedInterface::GetPathSmoothParams(AIScriptedInterface *this, double fMoveDist, float *maxTurnSpeed, float *lookaheadDist, float *accel, float *decel, float *sharpTurn)
{
  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  _RBX = maxTurnSpeed;
  __asm { vmovaps xmm6, xmm1 }
  if ( !maxTurnSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 6707, ASSERT_TYPE_ASSERT, "( maxTurnSpeed )", (const char *)&queryFormat, "maxTurnSpeed") )
    __debugbreak();
  if ( !lookaheadDist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 6708, ASSERT_TYPE_ASSERT, "( lookaheadDist )", (const char *)&queryFormat, "lookaheadDist") )
    __debugbreak();
  _RAX = this->m_pAI;
  if ( _RAX->Physics.bSpace )
  {
    *lookaheadDist = 120.0;
    *_RBX = 360.0;
    *sharpTurn = 0.64200002;
  }
  else if ( _RAX->orientation.faceMotion )
  {
    __asm { vcomiss xmm6, cs:__real@41300000 }
    if ( _RAX->orientation.faceMotion )
    {
      *lookaheadDist = 150.0;
      *_RBX = 8.0;
      *sharpTurn = 0.76599997;
    }
    else
    {
      __asm { vcomiss xmm6, cs:__real@40f00000 }
      if ( _RAX->orientation.faceMotion )
      {
        *lookaheadDist = 120.0;
        *_RBX = 6.0;
        *sharpTurn = 0.64200002;
      }
      else
      {
        __asm { vcomiss xmm6, cs:__real@40a00000 }
        if ( _RAX->orientation.faceMotion )
        {
          *lookaheadDist = 120.0;
          *_RBX = 3.0;
          *sharpTurn = 0.64200002;
        }
        else
        {
          *lookaheadDist = 70.0;
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_ai_walk_pathSmoothTurnSpeed, "ai_walk_pathSmoothTurnSpeed");
          __asm { vmovss  dword ptr [rbx], xmm0 }
          *sharpTurn = 0.5;
        }
      }
    }
  }
  else
  {
    *lookaheadDist = 120.0;
    __asm
    {
      vmovss  xmm0, dword ptr [rax+838h]
      vmovss  xmm2, dword ptr [rax+83Ch]
      vmovss  xmm3, dword ptr [rax+840h]
      vmulss  xmm1, xmm0, xmm0
      vmulss  xmm0, xmm2, xmm2
      vaddss  xmm2, xmm1, xmm0
      vmovss  xmm0, cs:__real@40a00000
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm3, xmm2, xmm1
      vcmpltss xmm4, xmm3, cs:__real@40800000
      vmovss  xmm1, cs:__real@43b40000
      vblendvps xmm1, xmm0, xmm1, xmm4
      vmovss  dword ptr [rbx], xmm1
    }
    *sharpTurn = 0.64200002;
  }
  __asm { vmovss  xmm0, dword ptr [rbx] }
  _RAX = accel;
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@3eaaa64c
    vmovaps xmm6, [rsp+48h+var_18]
    vmovss  dword ptr [rax], xmm1
    vmovss  xmm0, dword ptr [rbx]
  }
  _RAX = decel;
  __asm
  {
    vmulss  xmm2, xmm0, cs:__real@3f000000
    vmovss  dword ptr [rax], xmm2
  }
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
  char v9; 
  char v10; 

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
  _RAX = m_pAI->ent;
  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovss  xmm6, dword ptr [rax+140h]
  }
  *(double *)&_XMM0 = pathnode_t::GetAngle(pClaimedNode);
  __asm
  {
    vsubss  xmm1, xmm0, xmm6
    vmulss  xmm5, xmm1, cs:__real@3b360b61
    vaddss  xmm2, xmm5, cs:__real@3f000000
    vmovaps xmm6, [rsp+48h+var_18]
    vxorps  xmm0, xmm0, xmm0
    vmovss  xmm3, xmm0, xmm2
    vxorps  xmm1, xmm1, xmm1
    vroundss xmm4, xmm1, xmm3, 1
    vsubss  xmm0, xmm5, xmm4
    vmulss  xmm1, xmm0, cs:__real@43b40000
    vcomiss xmm1, cs:__real@c1a00000
  }
  if ( v9 )
    return 0;
  __asm { vcomiss xmm1, cs:__real@41a00000 }
  return (v9 | v10) != 0;
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
  _RDX = this->m_pAI;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+264h]
    vminss  xmm3, xmm0, cs:__real@42800000; buffer
  }
  if ( _RDX->eState[_RDX->stateLevel] != AIS_BEHAVE )
    return 0;
  pClaimedNode = _RDX->sentient->pClaimedNode;
  if ( pClaimedNode )
  {
    if ( pClaimedNode->constant.type != 9 )
      return 0;
  }
  return AICommonInterface::PointNearPoint(this, &_RDX->ent->r.currentOrigin, &_RDX->codeGoal.pos, *(float *)&_XMM3);
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
  _RCX = this->m_pAI;
  _RAX = _RCX->ent;
  __asm
  {
    vmovups xmm0, xmmword ptr [rax+100h]
    vmovups xmmword ptr [rcx+8B4h], xmm0
    vmovsd  xmm1, qword ptr [rax+110h]
    vmovsd  qword ptr [rcx+8C4h], xmm1
  }
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
bool AIScriptedInterface::IsFixedNodeUseable(AIScriptedInterface *this, bool bQueryOnly)
{
  ai_scripted_t *m_pAI; 
  bool v8; 
  const pathnode_t *node; 
  const sentient_s *sentient; 
  pathnode_t *pClaimedNode; 
  bool result; 
  char v24; 
  const gentity_s *v25; 
  scrContext_t *v26; 
  unsigned __int64 eTeam; 
  int v28; 
  int v29; 
  const vec3_t *p_pos; 
  const gentity_s *v37; 
  vec3_t pos; 
  bitarray<224> teamFlags; 

  __asm { vmovaps [rsp+0C8h+var_38], xmm7 }
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 4649, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 4650, ASSERT_TYPE_ASSERT, "( m_pAI->sentient )", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  m_pAI = this->m_pAI;
  __asm { vmovss  xmm7, cs:__real@45100000 }
  v8 = !m_pAI->fixedNodeNudged;
  node = m_pAI->codeGoal.node;
  __asm { vmovaps [rsp+0C8h+var_28], xmm6 }
  if ( v8 )
    goto LABEL_18;
  sentient = m_pAI->sentient;
  pClaimedNode = sentient->pClaimedNode;
  if ( !pClaimedNode )
  {
    if ( !sentient->pPrevClaimedNode )
      goto LABEL_18;
    pClaimedNode = sentient->pPrevClaimedNode;
  }
  if ( Path_CanClaimNode(pClaimedNode, sentient) )
  {
    if ( G_IsEntityInUse(0) )
    {
      pathnode_t::GetPos(pClaimedNode, &pos);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+0C8h+pos]
        vsubss  xmm3, xmm0, dword ptr [rbx+130h]
        vmovss  xmm1, dword ptr [rsp+0C8h+pos+4]
        vsubss  xmm2, xmm1, dword ptr [rbx+134h]
        vmovss  xmm0, dword ptr [rsp+0C8h+pos+8]
        vsubss  xmm4, xmm0, dword ptr [rbx+138h]
        vmulss  xmm2, xmm2, xmm2
        vmulss  xmm1, xmm3, xmm3
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm3, xmm2, xmm1
        vaddss  xmm2, xmm3, xmm0
        vcomiss xmm2, xmm7
      }
      if ( v24 )
      {
        if ( !bQueryOnly )
        {
          this->m_pAI->commitToFixedNode = 0;
          CheckIfNodeTaken(this->m_pAI->ent, node);
          AIScriptedInterface::Debug_NotMoving(this, "player too close to fixed node");
          result = 0;
          goto LABEL_43;
        }
LABEL_46:
        result = 0;
        goto LABEL_43;
      }
    }
LABEL_18:
    v25 = NULL;
    v26 = ScriptContext_Server();
    eTeam = (unsigned int)this->m_pAI->sentient->eTeam;
    memset(&teamFlags, 0, sizeof(teamFlags));
    if ( (unsigned int)eTeam >= 0xE0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", eTeam, 224) )
      __debugbreak();
    teamFlags.array[eTeam >> 5] |= 0x80000000 >> (eTeam & 0x1F);
    v28 = Nav_TranslateTeamFlagsToRepulsorUsageFlags(&teamFlags);
    if ( Nav_IsPointInRepulsorBadplace(&this->m_pAI->codeGoal.pos, v28, this->m_pAI->ent->s.number, 2047) )
    {
      if ( !bQueryOnly )
      {
        Scr_AddConstString(v26, scr_const.badplace);
        GScr_Notify(this->m_pAI->ent, scr_const.node_bad, 1u);
        AIScriptedInterface::Debug_NotMoving(this, "fixed node - badplace repulsor");
        result = 0;
        goto LABEL_43;
      }
      goto LABEL_46;
    }
    if ( node && !this->m_pAI->pNavigator->IsNodeUsable(this->m_pAI->pNavigator, node) )
    {
      if ( !bQueryOnly )
      {
        Scr_AddConstString(v26, scr_const.unusable);
        GScr_Notify(this->m_pAI->ent, scr_const.node_bad, 1u);
        AIScriptedInterface::Debug_NotMoving(this, "fixed node - node unusable");
        result = 0;
        goto LABEL_43;
      }
      goto LABEL_46;
    }
    if ( (((__int64 (__fastcall *)(AIScriptedInterface *))this->GetTraceMask)(this) & 0x2000000) != 0 )
    {
      v29 = 0;
      if ( level.maxclients > 0 )
      {
        __asm { vmovss  xmm6, cs:__real@41f00000 }
        while ( 1 )
        {
          if ( G_IsEntityInUse(v29) )
          {
            __asm { vmovaps xmm3, xmm6; buffer }
            if ( AICommonInterface::PointNearPoint(this, &this->m_pAI->codeGoal.pos, &g_entities[v29].r.currentOrigin, *(float *)&_XMM3) )
            {
              __asm { vmovaps xmm3, xmm7; bufferSq }
              if ( AICommonInterface::PointNearPointSqDist(this, &this->m_pAI->codeGoal.pos, &this->m_pAI->ent->r.currentOrigin, *(float *)&_XMM3) )
                break;
            }
          }
          if ( ++v29 >= level.maxclients )
            goto LABEL_35;
        }
        if ( !bQueryOnly )
        {
          this->m_pAI->commitToFixedNode = 0;
          AIScriptedInterface::Debug_NotMoving(this, "player too close to goal pos");
        }
        goto LABEL_46;
      }
    }
LABEL_35:
    if ( AICommonInterface::HasPath(this) )
    {
      AICommonInterface::GetPathFinalGoal(this, &pos);
      if ( AICommonInterface::PointNear(this, &this->m_pAI->codeGoal.pos, &pos) )
      {
LABEL_37:
        if ( !bQueryOnly )
        {
          _RCX = this->m_pAI;
          __asm { vmovss  xmm6, dword ptr [rcx+5F0h] }
          p_pos = &_RCX->codeGoal.pos;
          if ( EntHandle::isDefined(&_RCX->fixedNodeSafeVolume) )
            v25 = EntHandle::ent(&this->m_pAI->fixedNodeSafeVolume);
          __asm { vmovaps xmm3, xmm6; radius }
          v37 = AIScriptedInterface::IsKnownEnemyInRegion(this, v25, p_pos, *(float *)&_XMM3, 1);
          if ( v37 )
          {
            GScr_AddEntity(v37);
            Scr_AddConstString(v26, scr_const.unsafe);
            GScr_Notify(this->m_pAI->ent, scr_const.node_bad, 2u);
          }
        }
LABEL_42:
        result = 1;
        goto LABEL_43;
      }
    }
    else if ( AICommonInterface::PointNear(this, &this->m_pAI->codeGoal.pos, &this->m_pAI->ent->r.currentOrigin) )
    {
      if ( !bQueryOnly )
      {
        this->m_pAI->commitToFixedNode = 0;
        AIScriptedInterface::Debug_NotMoving(this, "fixed node - already close to goal");
      }
      goto LABEL_42;
    }
    if ( node && !Path_CanClaimNode(node, this->m_pAI->sentient) )
    {
      if ( !bQueryOnly )
      {
        CheckIfNodeTaken(this->m_pAI->ent, node);
        result = 0;
        goto LABEL_43;
      }
      goto LABEL_46;
    }
    goto LABEL_37;
  }
  if ( bQueryOnly )
    goto LABEL_46;
  this->m_pAI->commitToFixedNode = 0;
  CheckIfNodeTaken(this->m_pAI->ent, node);
  AIScriptedInterface::Debug_NotMoving(this, "cannot claim fixed node");
  result = 0;
LABEL_43:
  __asm
  {
    vmovaps xmm6, [rsp+0C8h+var_28]
    vmovaps xmm7, [rsp+0C8h+var_38]
  }
  return result;
}

/*
==============
AIScriptedInterface::IsKnownEnemyInRegion
==============
*/

gentity_s *__fastcall AIScriptedInterface::IsKnownEnemyInRegion(AIScriptedInterface *this, const gentity_s *volume, const vec3_t *position, double radius, bool testEnemyNode)
{
  ai_scripted_t *m_pAI; 
  bool v13; 
  bool v14; 
  unsigned int i; 
  sentient_s *sentients; 
  ai_scripted_t *v18; 
  __int64 v19; 
  const sentient_info_t *v20; 
  int lastKnownPosTime; 
  team_t eTeam; 
  AIScriptedInterface *v24; 
  unsigned int Instance; 
  bool v26; 
  unsigned int v27; 
  pathnode_t *pClaimedNode; 
  char v29; 
  int v42; 
  int v43; 
  bool v44; 
  bool v53; 
  pathnode_t *v54; 
  gentity_s *result; 
  AIWrapper v60; 
  vec3_t outLastKnownPos; 
  vec3_t pos; 
  vec3_t vGoalPos; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmm6, xmm3
  }
  _RBP = volume;
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 4535, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  m_pAI = this->m_pAI;
  v13 = m_pAI->sentientInfo == NULL;
  if ( !m_pAI->sentientInfo )
  {
    v14 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 4536, ASSERT_TYPE_ASSERT, "( m_pAI->sentientInfo )", (const char *)&queryFormat, "m_pAI->sentientInfo");
    v13 = !v14;
    if ( v14 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm7, xmm7, xmm7
    vucomiss xmm6, xmm7
  }
  if ( !v13 || _RBP )
  {
    for ( i = 0; i < level.maxSentients; ++i )
    {
      sentients = level.sentients;
      v18 = this->m_pAI;
      v19 = i;
      if ( !level.sentients[v19].inuse )
        continue;
      v20 = &v18->sentientInfo[(unsigned __int64)i];
      lastKnownPosTime = v20->lastKnownPosTime;
      if ( !lastKnownPosTime )
        continue;
      if ( level.time - lastKnownPosTime > 10000 )
        continue;
      eTeam = v18->sentient->eTeam;
      if ( level.sentients[v19].eTeam == eTeam )
        continue;
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, dword ptr [rdx+1B8h]
        vucomiss xmm0, xmm7
      }
      if ( level.sentients[v19].eTeam == eTeam )
        continue;
      AIWrapper::AIWrapper(&v60, level.sentients[v19].ent);
      v24 = v60.m_pAI;
      if ( v60.m_pAI )
      {
        if ( v60.m_pAI->IsDying(v60.m_pAI) || *(_BYTE *)(v24->GetAI(v24) + 3040) )
          continue;
      }
      SentientInfo_GetLastKnownPos(v20, &outLastKnownPos);
      if ( _RBP )
      {
        Instance = G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_FIRST, _RBP);
        v26 = !testEnemyNode;
        v27 = Instance;
        if ( testEnemyNode && (pClaimedNode = sentients[v19].pClaimedNode, v26 = pClaimedNode == NULL, pClaimedNode) )
        {
          pathnode_t::GetPos(pClaimedNode, &pos);
          __asm
          {
            vmovss  xmm4, dword ptr [rbp+134h]
            vsubss  xmm0, xmm4, dword ptr [rsp+138h+outLastKnownPos+4]
            vmovss  xmm3, dword ptr [rbp+130h]
          }
          _RAX = this->m_pAI;
          __asm
          {
            vsubss  xmm2, xmm3, dword ptr [rsp+138h+outLastKnownPos]
            vmulss  xmm1, xmm0, xmm0
            vmulss  xmm0, xmm2, xmm2
            vmovss  xmm5, dword ptr [rax+5F4h]
            vaddss  xmm1, xmm1, xmm0
            vcomiss xmm5, xmm1
          }
          if ( v29 )
          {
            __asm
            {
              vsubss  xmm1, xmm3, dword ptr [rsp+138h+pos]
              vsubss  xmm0, xmm4, dword ptr [rsp+138h+pos+4]
              vmulss  xmm2, xmm0, xmm0
              vmulss  xmm1, xmm1, xmm1
              vaddss  xmm2, xmm2, xmm1
              vcomiss xmm5, xmm2
            }
            if ( v29 )
              continue;
          }
          v42 = PhysicsQuery_LegacyEntityContactPoint(PHYSICS_WORLD_ID_FIRST, &outLastKnownPos, v27, _RBP);
          v43 = PhysicsQuery_LegacyEntityContactPoint(PHYSICS_WORLD_ID_FIRST, &pos, v27, _RBP);
          if ( v42 )
            goto LABEL_35;
          v44 = v43 == 0;
        }
        else
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+130h]
            vmovss  xmm1, dword ptr [rbp+134h]
            vsubss  xmm2, xmm1, dword ptr [rsp+138h+outLastKnownPos+4]
            vsubss  xmm4, xmm0, dword ptr [rsp+138h+outLastKnownPos]
          }
          _RAX = this->m_pAI;
          __asm
          {
            vmulss  xmm3, xmm2, xmm2
            vmulss  xmm0, xmm4, xmm4
            vaddss  xmm1, xmm3, xmm0
            vcomiss xmm1, dword ptr [rax+5F4h]
          }
          if ( !v26 )
            continue;
          v44 = PhysicsQuery_LegacyEntityContactPoint(PHYSICS_WORLD_ID_FIRST, &outLastKnownPos, v27, _RBP) == 0;
        }
      }
      else
      {
        __asm { vmovaps xmm3, xmm6; buffer }
        v53 = AICommonInterface::PointNearPoint(this, position, &outLastKnownPos, *(float *)&_XMM3);
        if ( testEnemyNode )
        {
          v54 = sentients[v19].pClaimedNode;
          if ( v54 )
          {
            pathnode_t::GetPos(v54, &vGoalPos);
            __asm { vmovaps xmm3, xmm6; buffer }
            if ( AICommonInterface::PointNearPoint(this, position, &vGoalPos, *(float *)&_XMM3) )
            {
LABEL_35:
              result = level.sentients[i].ent;
              goto LABEL_34;
            }
          }
        }
        v44 = !v53;
      }
      if ( !v44 )
        goto LABEL_35;
    }
  }
  result = NULL;
LABEL_34:
  __asm
  {
    vmovaps xmm6, [rsp+138h+var_58]
    vmovaps xmm7, [rsp+138h+var_68]
  }
  return result;
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
bool AIScriptedInterface::IsPathSuppressed(AIScriptedInterface *this)
{
  int v10; 
  PathBlockPlanes *p_blockPlanes; 
  int v21; 
  unsigned __int64 v22; 
  bool v23; 
  unsigned __int64 v24; 
  char *v31; 
  bool result; 
  vec2_t v44; 
  PathBlockPlanes blockPlanes; 
  char ptr[400]; 
  char v47; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmmword ptr [rax-88h], xmm11
  }
  AIScriptedInterface::GetMoveOnlySuppressionPlanes(this, &blockPlanes);
  v10 = 0;
  if ( blockPlanes.iPlaneCount <= 0 )
  {
LABEL_11:
    result = 0;
  }
  else
  {
    p_blockPlanes = &blockPlanes;
    _RSI = blockPlanes.fDist;
    __asm
    {
      vmovss  xmm11, cs:__real@43800000
      vmovss  xmm9, cs:__real@42a00000
      vmovss  xmm10, cs:__real@43000000
      vxorps  xmm8, xmm8, xmm8
    }
    while ( 1 )
    {
      __asm { vmovss  xmm7, dword ptr [rsi] }
      v44 = p_blockPlanes->vNormal[0];
      if ( !AICommonInterface::HasPath(this) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 5441, ASSERT_TYPE_ASSERT, "(HasPath())", (const char *)&queryFormat, "HasPath()") )
        __debugbreak();
      *(double *)&_XMM0 = AIScriptedInterface::GetDefaultSpeed(this);
      __asm
      {
        vcmpltss xmm1, xmm0, xmm9
        vblendvps xmm6, xmm11, xmm10, xmm1
      }
      `eh vector constructor iterator'(ptr, 0x28ui64, 0xAui64, (void (__fastcall *)(void *))nav_cornerdata_t::nav_cornerdata_t, (void (__fastcall *)(void *))nav_cornerdata_t::~nav_cornerdata_t);
      __asm { vmovaps xmm3, xmm6 }
      v21 = ((__int64 (__fastcall *)(AINavigator *, char *, __int64))this->m_pAI->pNavigator->GetNextNCorners)(this->m_pAI->pNavigator, ptr, 10i64);
      v22 = 0i64;
      v23 = 0;
      if ( v21 > 0 )
        break;
LABEL_10:
      `eh vector destructor iterator'(ptr, 0x28ui64, 0xAui64, (void (__fastcall *)(void *))nav_cornerdata_t::~nav_cornerdata_t);
      ++v10;
      ++_RSI;
      p_blockPlanes = (PathBlockPlanes *)((char *)p_blockPlanes + 8);
      if ( v10 >= blockPlanes.iPlaneCount )
        goto LABEL_11;
    }
    v24 = v21;
    __asm
    {
      vmovss  xmm4, dword ptr [rsp+2A8h+var_268+4]
      vmulss  xmm1, xmm4, dword ptr [rcx+134h]
      vmovss  xmm5, dword ptr [rsp+2A8h+var_268]
      vmulss  xmm0, xmm5, dword ptr [rcx+130h]
      vaddss  xmm1, xmm1, xmm0
      vsubss  xmm6, xmm1, xmm7
    }
    v31 = ptr;
    while ( 1 )
    {
      __asm
      {
        vmulss  xmm1, xmm4, dword ptr [rax+4]
        vmulss  xmm0, xmm5, dword ptr [rax]
        vaddss  xmm1, xmm1, xmm0
        vsubss  xmm2, xmm1, xmm7
        vmulss  xmm3, xmm6, xmm2
        vcomiss xmm3, xmm8
      }
      if ( v23 )
        break;
      ++v22;
      v31 += 40;
      v23 = v22 < v24;
      if ( (__int64)v22 >= (__int64)v24 )
        goto LABEL_10;
    }
    `eh vector destructor iterator'(ptr, 0x28ui64, 0xAui64, (void (__fastcall *)(void *))nav_cornerdata_t::~nav_cornerdata_t);
    result = 1;
  }
  _R11 = &v47;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
  }
  return result;
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
  char v15; 
  __int64 result; 
  vec3_t vFinalGoal; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 6458, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 6459, ASSERT_TYPE_ASSERT, "( node )", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( !AICommonInterface::HasPath(this) )
    goto LABEL_12;
  AICommonInterface::GetPathFinalGoal(this, &vFinalGoal);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+58h+vFinalGoal]
    vmovss  xmm1, dword ptr [rsp+58h+vFinalGoal+4]
    vsubss  xmm3, xmm0, dword ptr [rcx+130h]
    vmovss  xmm0, dword ptr [rsp+58h+vFinalGoal+8]
    vsubss  xmm2, xmm1, dword ptr [rcx+134h]
    vsubss  xmm4, xmm0, dword ptr [rcx+138h]
    vmulss  xmm2, xmm2, xmm2
    vmulss  xmm1, xmm3, xmm3
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm4, xmm3, xmm0
    vcomiss xmm4, cs:__real@47800000
  }
  if ( v15 )
  {
    if ( AICommonInterface::GetTargetEntity(this) )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rax+130h]
        vmovss  xmm1, dword ptr [rax+134h]
        vsubss  xmm3, xmm0, dword ptr [r8+130h]
        vsubss  xmm2, xmm1, dword ptr [r8+134h]
        vmovss  xmm0, dword ptr [rax+138h]
        vsubss  xmm4, xmm0, dword ptr [r8+138h]
        vmulss  xmm2, xmm2, xmm2
        vmulss  xmm1, xmm3, xmm3
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm3, xmm2, xmm1
        vaddss  xmm2, xmm3, xmm0
        vcomiss xmm2, cs:__real@47800000
      }
    }
    LOBYTE(result) = AIScriptedInterface::Cover_IsRoughlyValidCover(this, node);
  }
  else
  {
LABEL_12:
    LOBYTE(result) = this->Cover_IsValidCover(this, node, 0);
  }
  return (unsigned __int8)result;
}

/*
==============
AIScriptedInterface::MoveAwayNoWorse
==============
*/
__int64 AIScriptedInterface::MoveAwayNoWorse(AIScriptedInterface *this)
{
  unsigned int v5; 
  AIIterator *v6; 
  AIScriptedInterface *v11; 
  ai_agent_t *ScriptedAgentInfo; 
  actor_s *actor; 
  gentity_s *v14; 
  bool v15; 
  gentity_s *v16; 
  AIActorInterface v37; 
  AIAgentInterface v38; 
  AIScriptedInterface *v39; 

  v5 = 1;
  v6 = this->GetAIIterator(this);
  _RDI = (const gentity_s *)v6->GetFirst(v6);
  if ( _RDI )
  {
    __asm
    {
      vmovaps [rsp+0D8h+var_38], xmm6
      vmovss  xmm6, cs:__real@44610000
      vmovaps [rsp+0D8h+var_48], xmm7
      vmovss  xmm7, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vmovaps [rsp+0D8h+var_58], xmm8
      vmovss  xmm8, cs:__real@42a00000
    }
    while ( 1 )
    {
      AIActorInterface::AIActorInterface(&v37);
      AIAgentInterface::AIAgentInterface(&v38);
      v11 = NULL;
      v38.__vftable = (AIAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
      v39 = NULL;
      if ( _RDI->agent )
      {
        if ( SV_Agent_IsScripted(_RDI->s.number) )
        {
          ScriptedAgentInfo = AIAgentInterface::GetScriptedAgentInfo(_RDI);
          if ( !ScriptedAgentInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 97, ASSERT_TYPE_ASSERT, "( pInfo )", (const char *)&queryFormat, "pInfo") )
            __debugbreak();
          if ( !ScriptedAgentInfo->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 98, ASSERT_TYPE_ASSERT, "( pInfo->sentientInfo )", (const char *)&queryFormat, "pInfo->sentientInfo") )
            __debugbreak();
          AINewAgentInterface::SetAgent((AINewAgentInterface *)&v38, ScriptedAgentInfo);
          v11 = &v38;
LABEL_18:
          v39 = v11;
          goto LABEL_19;
        }
        v11 = v39;
      }
      actor = _RDI->actor;
      if ( actor )
      {
        if ( !actor->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 105, ASSERT_TYPE_ASSERT, "( ent->actor->sentientInfo )", (const char *)&queryFormat, "ent->actor->sentientInfo") )
          __debugbreak();
        AIActorInterface::SetActor(&v37, _RDI->actor);
        v11 = &v37;
        goto LABEL_18;
      }
LABEL_19:
      if ( (ai_scripted_t *)v11->GetAI(v11) != this->m_pAI )
      {
        v14 = this->GetCloseEnt(this);
        v15 = 0;
        if ( !v14 || (v16 = this->GetCloseEnt(this), v15 = _RDI < v16, _RDI != v16) )
        {
          __asm
          {
            vmovss  xmm3, dword ptr [rdi+130h]
            vmovss  xmm4, dword ptr [rdi+134h]
            vsubss  xmm1, xmm3, dword ptr [rax+82Ch]
            vsubss  xmm0, xmm4, dword ptr [rax+830h]
            vmulss  xmm2, xmm0, xmm0
            vmulss  xmm1, xmm1, xmm1
            vaddss  xmm2, xmm2, xmm1
            vcomiss xmm2, xmm6
          }
          if ( v15 )
          {
            _RAX = this->m_pAI->ent;
            __asm
            {
              vsubss  xmm1, xmm3, dword ptr [rax+130h]
              vsubss  xmm0, xmm4, dword ptr [rax+134h]
              vmulss  xmm2, xmm0, xmm0
              vmulss  xmm1, xmm1, xmm1
              vaddss  xmm2, xmm2, xmm1
              vcomiss xmm2, xmm6
            }
            if ( !v15 )
            {
              __asm
              {
                vmovss  xmm0, dword ptr [rax+138h]
                vsubss  xmm1, xmm0, dword ptr [rdi+138h]
                vandps  xmm1, xmm1, xmm7
                vcomiss xmm1, xmm8
              }
              if ( v15 )
              {
                if ( !v11->GetCloseEnt(v11) && !AIScriptedInterface::AtClaimNode(v11) )
                  v11->SetCloseEnt(v11, this->m_pAI->ent);
                v5 = 0;
              }
            }
          }
        }
      }
      _RDI = v6->GetNext(v6);
      if ( !_RDI )
      {
        __asm
        {
          vmovaps xmm8, [rsp+0D8h+var_58]
          vmovaps xmm7, [rsp+0D8h+var_48]
          vmovaps xmm6, [rsp+0D8h+var_38]
        }
        return v5;
      }
    }
  }
  return v5;
}

/*
==============
AIActorInterface::NextActor
==============
*/
actor_s *AIActorInterface::NextActor(actor_s *pPrevActor, const bitarray<224> *iTeamFlags)
{
  unsigned int v7; 
  unsigned int v9; 
  __int128 *v10; 
  signed __int64 v11; 
  signed __int64 v12; 
  unsigned __int64 eTeam; 
  __int64 v15; 
  __int64 v16; 
  __int128 v17; 
  __int64 v18; 
  unsigned int v19; 

  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
    _RAX = Com_TeamsSP_GetAllTeamFlags();
  else
    _RAX = Com_TeamsMP_GetAllTeamFlags();
  __asm
  {
    vmovups xmm1, xmmword ptr [rax]
    vmovsd  xmm0, qword ptr [rax+10h]
  }
  v7 = _RAX->array[6];
  __asm
  {
    vmovups [rsp+98h+var_58], xmm1
    vmovsd  [rsp+98h+var_48], xmm0
    vmovd   eax, xmm1
  }
  LODWORD(v17) = iTeamFlags->array[0] & ~_EAX;
  *(_QWORD *)((char *)&v17 + 4) = ~*(_QWORD *)((char *)&v17 + 4) & *(_QWORD *)&iTeamFlags->array[1];
  HIDWORD(v17) = ~HIDWORD(v17) & iTeamFlags->array[3];
  v18 = ~v18 & *(_QWORD *)&iTeamFlags->array[4];
  v19 = ~v7 & iTeamFlags->array[6];
  v9 = 0;
  v10 = &v17;
  while ( !*(_DWORD *)v10 )
  {
    ++v9;
    v10 = (__int128 *)((char *)v10 + 4);
    if ( v9 >= 7 )
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
  v11 = pPrevActor - level.actors + 1;
  if ( v11 >= 38 )
    return 0i64;
  v12 = v11;
  while ( 1 )
  {
    if ( level.actors[v12].inuse )
    {
      if ( !level.actors[v12].sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 1062, ASSERT_TYPE_ASSERT, "( level.actors[i].sentient )", (const char *)&queryFormat, "level.actors[i].sentient") )
        __debugbreak();
      eTeam = (unsigned int)level.actors[v12].sentient->eTeam;
      if ( (unsigned int)eTeam >= 0xE0 )
      {
        LODWORD(v16) = 224;
        LODWORD(v15) = level.actors[v12].sentient->eTeam;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v15, v16) )
          __debugbreak();
      }
      if ( ((0x80000000 >> (eTeam & 0x1F)) & iTeamFlags->array[eTeam >> 5]) != 0 )
        break;
    }
    ++v11;
    if ( ++v12 >= 38 )
      return 0i64;
  }
  return &level.actors[v11];
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
  _RCX = this->m_pAI;
  _RAX = _RCX->ent;
  __asm
  {
    vmovups xmm0, xmmword ptr [rax+100h]
    vmovups xmmword ptr [rcx+8B4h], xmm0
    vmovsd  xmm1, qword ptr [rax+110h]
    vmovsd  qword ptr [rcx+8C4h], xmm1
  }
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
  scr_string_t HitLocationString; 
  scrContext_t *v27; 
  sentient_s *sentient; 
  ai_scripted_t *m_pAI; 
  __int64 v30; 
  __int64 v31; 
  int v32; 
  int v33; 
  int v34; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 2011, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  actor = this->m_pAI->ent->actor;
  if ( actor && !actor->inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 2012, ASSERT_TYPE_ASSERT, "( !m_pAI->ent->actor || m_pAI->ent->actor->inuse )", (const char *)&queryFormat, "!m_pAI->ent->actor || m_pAI->ent->actor->inuse") )
    __debugbreak();
  _RDI = vDir;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vmovss  [rsp+68h+arg_10], xmm0
  }
  if ( (v32 & 0x7F800000) == 2139095040 )
    goto LABEL_38;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+4]
    vmovss  [rsp+68h+arg_10], xmm0
  }
  if ( (v33 & 0x7F800000) == 2139095040 )
    goto LABEL_38;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+8]
    vmovss  [rsp+68h+arg_10], xmm0
  }
  if ( (v34 & 0x7F800000) == 2139095040 )
  {
LABEL_38:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 2013, ASSERT_TYPE_SANITY, "( !IS_NAN( ( vDir )[0] ) && !IS_NAN( ( vDir )[1] ) && !IS_NAN( ( vDir )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( vDir )[0] ) && !IS_NAN( ( vDir )[1] ) && !IS_NAN( ( vDir )[2] )") )
      __debugbreak();
  }
  this->GetEntity(this);
  if ( this->m_pAI->stateLevel >= 6 )
  {
    LODWORD(v30) = this->m_pAI->stateLevel;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 2017, ASSERT_TYPE_ASSERT, "(unsigned)( m_pAI->stateLevel ) < (unsigned)( ( sizeof( *array_counter( m_pAI->eState ) ) + 0 ) )", "m_pAI->stateLevel doesn't index ARRAY_COUNT( m_pAI->eState )\n\t%i not in [0, %i)", v30, 6) )
      __debugbreak();
  }
  if ( (unsigned int)(this->m_pAI->eState[this->m_pAI->stateLevel] - 1) > 8 )
  {
    LODWORD(v31) = this->m_pAI->eState[this->m_pAI->stateLevel];
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 2018, ASSERT_TYPE_ASSERT, "( ( m_pAI->eState[m_pAI->stateLevel] > AIS_INVALID && m_pAI->eState[m_pAI->stateLevel] < AIS_COUNT ) )", "%s\n\t( m_pAI->eState[m_pAI->stateLevel] ) = %i", "( m_pAI->eState[m_pAI->stateLevel] > AIS_INVALID && m_pAI->eState[m_pAI->stateLevel] < AIS_COUNT )", v31) )
      __debugbreak();
  }
  this->m_pAI->painDeath.iDamageTaken = iDamage;
  *(double *)&_XMM0 = vectoyaw((const vec2_t *)vDir);
  __asm
  {
    vsubss  xmm1, xmm0, dword ptr [r14+140h]
    vmulss  xmm5, xmm1, cs:__real@3b360b61
    vaddss  xmm2, xmm5, cs:__real@3f000000
    vxorps  xmm0, xmm0, xmm0
    vmovss  xmm3, xmm0, xmm2
    vxorps  xmm1, xmm1, xmm1
    vroundss xmm4, xmm1, xmm3, 1
    vsubss  xmm0, xmm5, xmm4
    vmulss  xmm1, xmm0, cs:__real@43b40000
    vcvttss2si ecx, xmm1
  }
  this->m_pAI->painDeath.iDamageYaw = _ECX;
  this->m_pAI->painDeath.damageDir = *vDir;
  HitLocationString = G_Combat_GetHitLocationString(hitLoc);
  Scr_SetString(&this->m_pAI->painDeath.damageHitLoc, HitLocationString);
  if ( pAttacker )
  {
    v27 = ScriptContext_Server();
    GScr_Weapon_SetWeapon(v27, &this->m_pAI->painDeath.damageWeapon, r_weapon, isAlternate);
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
  char v17; 
  __int64 v30; 
  __int64 v32; 
  scrContext_t *v35; 
  float v39; 
  float v41; 
  bool IsDoingReacquire; 
  char v43; 
  ai_scripted_t *m_pAI; 
  int fmt; 
  float v50; 
  vec3_t v51; 
  vec3_t v52; 
  __int64 v53; 
  __int64 v54; 
  float v55; 
  vec3_t vLookaheadDir; 
  vec3_t vFinalGoal; 
  int v58[5]; 
  bfx::AreaHandle v59; 
  bfx::LinkHandle v60; 
  char v61; 
  void *retaddr; 

  _RAX = &retaddr;
  v53 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
  }
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 5278, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  AICommonInterface::GetPathFinalGoal(this, &vFinalGoal);
  __asm
  {
    vmovss  xmm6, cs:__real@41c00000
    vmovaps xmm3, xmm6; buffer
  }
  if ( !AICommonInterface::PointNearPoint(this, &this->m_pAI->ent->r.currentOrigin, &vFinalGoal, *(float *)&_XMM3) )
  {
    if ( !AICommonInterface::HasPath(this) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 5286, ASSERT_TYPE_ASSERT, "( HasPath() )", (const char *)&queryFormat, "HasPath()") )
      __debugbreak();
    AIScriptedInterface::GetPathLookaheadDir(this, &vLookaheadDir);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+120h+vLookaheadDir+4]
      vmulss  xmm3, xmm0, dword ptr [rbx+4]
      vmovss  xmm1, dword ptr [rsp+120h+vLookaheadDir]
      vmulss  xmm2, xmm1, dword ptr [rbx]
      vaddss  xmm4, xmm3, xmm2
      vmovss  xmm0, dword ptr [rbp+20h+vLookaheadDir+8]
      vmulss  xmm1, xmm0, dword ptr [rbx+8]
      vaddss  xmm2, xmm4, xmm1
      vcomiss xmm2, cs:__real@3f000000
    }
    if ( v17 )
    {
      this->m_pAI->pNavigator->GetNextCorner(this->m_pAI->pNavigator, (vec3_t *)&v54);
      _RCX = this->m_pAI->ent;
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+130h]
        vsubss  xmm3, xmm0, [rsp+120h+var_B8]
        vmovss  xmm1, dword ptr [rcx+134h]
        vsubss  xmm2, xmm1, [rsp+120h+var_B4]
        vmovss  xmm0, dword ptr [rcx+138h]
        vsubss  xmm4, xmm0, [rsp+120h+var_B0]
        vmulss  xmm2, xmm2, xmm2
        vmulss  xmm1, xmm3, xmm3
        vaddss  xmm3, xmm2, xmm1
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm2, xmm3, xmm0
        vcomiss xmm2, cs:__real@43100000
      }
      if ( v17 )
      {
        bfx::AreaHandle::AreaHandle(&v59);
        bfx::LinkHandle::LinkHandle(&v60);
        LOBYTE(fmt) = 0;
        LOBYTE(v30) = 1;
        __asm { vmovaps xmm1, xmm6 }
        ((void (__fastcall *)(AINavigator *, __int64, __int64, int *, int))this->m_pAI->pNavigator->GetPosAlongPath)(this->m_pAI->pNavigator, v32, v30, v58, fmt);
        __asm
        {
          vmovss  xmm0, [rbp+20h+var_88]
          vmovss  [rsp+120h+var_B8], xmm0
          vmovss  xmm1, [rbp+20h+var_84]
          vmovss  [rsp+120h+var_B4], xmm1
          vmovss  xmm0, [rbp+20h+var_80]
          vmovss  [rsp+120h+var_B0], xmm0
        }
        bfx::LinkHandle::~LinkHandle(&v60);
        bfx::AreaHandle::~AreaHandle(&v59);
      }
      v35 = ScriptContext_Server();
      *(double *)&_XMM0 = Nav_GetDistToNextCorner(this->m_pAI->pNavigator);
      __asm { vmovaps xmm8, xmm0 }
      _RDX = this->m_pAI->ent;
      __asm { vmovsd  xmm6, qword ptr [rdx+130h] }
      v39 = _RDX->r.currentOrigin.v[2];
      __asm { vmovsd  xmm7, qword ptr [rsp+120h+var_B8] }
      v41 = v55;
      IsDoingReacquire = AIScriptedInterface::IsDoingReacquire(this);
      __asm { vmovsd  qword ptr [rsp+120h+var_E0], xmm6 }
      v51.v[2] = v39;
      __asm { vmovsd  qword ptr [rsp+120h+var_D0], xmm7 }
      v52.v[2] = v41;
      __asm { vmovss  [rsp+120h+var_F0], xmm8 }
      AIScriptedInterface::FireSharpTurnEvent(this, v35, IsDoingReacquire, &v52, 1, &v51, v50);
      *(double *)&_XMM0 = Nav_GetPathDistToGoal(this->m_pAI->pNavigator);
      __asm { vcomiss xmm0, cs:__real@42b40000 }
      if ( !(v17 | v43) )
      {
        m_pAI = this->m_pAI;
        if ( m_pAI->pathFindTask.status[0] == 2 || m_pAI->pNavigator->m_ReevalPathTask.status[0] == 2 )
        {
          m_pAI->bCheckNewPathSharpTurn = 1;
        }
        else if ( AIScriptedInterface::ShouldEarlySharpTurnTick(this) )
        {
          AIScriptedInterface::TryEarlyASMTick(this, 0);
        }
      }
    }
  }
  _R11 = &v61;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
AIScriptedInterface::PathEndActions
==============
*/
void AIScriptedInterface::PathEndActions(AIScriptedInterface *this)
{
  ai_scripted_t *m_pAI; 
  pathnode_t *StartNodeFromLink; 
  vec3_t pos; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 5809, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( AICommonInterface::HasPath(this) )
  {
    m_pAI = this->m_pAI;
    __asm { vmovaps [rsp+68h+var_18], xmm6 }
    *(double *)&_XMM0 = Nav_GetPathDistToGoal(m_pAI->pNavigator);
    _RAX = this->m_pAI;
    __asm
    {
      vmovaps xmm6, xmm0
      vmulss  xmm0, xmm0, xmm0
    }
    if ( _RAX->pathEndAnimNotified )
    {
      __asm { vcomiss xmm0, dword ptr [rax+5E8h] }
      if ( _RAX->pathEndAnimNotified )
      {
        GScr_Notify(_RAX->ent, scr_const.run, 0);
        this->m_pAI->pathEndAnimNotified = 0;
      }
    }
    else
    {
      __asm { vcomiss xmm0, dword ptr [rax+5E8h] }
    }
    __asm { vmovaps xmm6, [rsp+68h+var_18] }
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
      _RCX = this->m_pAI;
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+68h+pos]
        vsubss  xmm1, xmm0, dword ptr [rax+130h]
        vmovss  dword ptr [rcx+888h], xmm1
        vmovss  xmm2, dword ptr [rsp+68h+pos+4]
        vsubss  xmm0, xmm2, dword ptr [rax+134h]
        vmovss  dword ptr [rcx+88Ch], xmm0
        vmovss  xmm1, dword ptr [rsp+68h+pos+8]
        vsubss  xmm2, xmm1, dword ptr [rax+138h]
        vmovss  dword ptr [rcx+890h], xmm2
      }
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
  unsigned int v27; 
  int v29; 

  Sys_ProfBeginNamedEvent(0xFF808080, "AIPhysicsAndDodge");
  if ( (this->m_pAI->eAnimMode != AI_ANIM_MOVE_CODE || !AICommonInterface::HasPath(this)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 3112, ASSERT_TYPE_ASSERT, "( m_pAI->eAnimMode == AI_ANIM_MOVE_CODE && HasPath() )", (const char *)&queryFormat, "m_pAI->eAnimMode == AI_ANIM_MOVE_CODE && HasPath()") )
    __debugbreak();
  this->m_pAI->pNavigator->GetNextCorner(this->m_pAI->pNavigator, (vec3_t *)&v29);
  _RDX = this->m_pAI;
  __asm
  {
    vmovss  xmm0, [rsp+68h+var_28]
    vsubss  xmm5, xmm0, dword ptr [rax+130h]
    vmovss  [rsp+68h+var_28], xmm5
    vmovss  xmm0, [rsp+68h+var_24]
    vsubss  xmm2, xmm0, dword ptr [rax+134h]
    vmovss  [rsp+68h+var_24], xmm2
    vmovss  xmm0, [rsp+68h+var_20]
    vsubss  xmm3, xmm0, dword ptr [rax+138h]
    vmovss  [rsp+68h+var_20], xmm3
    vmulss  xmm1, xmm5, xmm5
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm4, xmm2, xmm2
    vcmpless xmm0, xmm4, cs:__real@80000000
    vmovss  xmm2, cs:__real@3f800000
    vblendvps xmm1, xmm4, xmm2, xmm0
    vdivss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm5, xmm3
    vmovss  dword ptr [rdx+894h], xmm0
    vmulss  xmm2, xmm3, [rsp+68h+var_24]
    vmovss  dword ptr [rdx+898h], xmm2
    vmulss  xmm1, xmm3, [rsp+68h+var_20]
    vmovss  dword ptr [rdx+89Ch], xmm1
  }
  _RCX = &_RDX->Physics;
  _RDX = _RDX->ent;
  _RCX->vOrigin.v[0] = _RDX->r.currentOrigin.v[0];
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+134h]
    vmovss  dword ptr [rcx+4], xmm0
    vmovss  xmm1, dword ptr [rdx+138h]
    vmovss  dword ptr [rcx+8], xmm1
  }
  if ( AIScriptedInterface::Physics_DoMovement(_RCX) )
  {
    this->m_pAI->dodgeMode = NONE;
    v27 = 1;
  }
  else
  {
    m_pAI = this->m_pAI;
    v27 = 0;
    m_pAI->dodgeMode = NONE;
  }
  Sys_ProfEndNamedEvent();
  return v27;
}

/*
==============
AIScriptedInterface::PhysicsCheckMoveAwayNoWorse
==============
*/

__int64 __fastcall AIScriptedInterface::PhysicsCheckMoveAwayNoWorse(AIScriptedInterface *this, gentity_s *other, ActorDodgeMode newDodgeMode, double distanceSqrd, float lengthSqrd)
{
  __int64 result; 

  _RAX = this->m_pAI;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+130h]
    vmovss  xmm1, dword ptr [rdx+134h]
    vmovaps xmm4, xmm3
    vmovss  xmm5, dword ptr [rax+82Ch]
    vsubss  xmm2, xmm0, xmm5
    vmovaps [rsp+38h+var_18], xmm6
    vmovss  xmm6, dword ptr [rax+830h]
    vsubss  xmm0, xmm1, xmm6
    vmulss  xmm3, xmm0, xmm0
    vmulss  xmm2, xmm2, xmm2
    vaddss  xmm1, xmm3, xmm2
    vcomiss xmm1, xmm4
  }
  _RAX = _RAX->ent;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+130h]
    vmovss  xmm1, dword ptr [rax+134h]
    vsubss  xmm2, xmm1, xmm6
    vsubss  xmm4, xmm0, xmm5
    vmulss  xmm3, xmm2, xmm2
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm1, xmm3, xmm0
    vcomiss xmm1, [rsp+38h+lengthSqrd]
  }
  if ( AIScriptedInterface::MoveAwayNoWorse(this) )
  {
    this->m_pAI->dodgeMode = newDodgeMode;
    result = 1i64;
    __asm { vmovaps xmm6, [rsp+38h+var_18] }
  }
  else
  {
    result = 0i64;
    __asm { vmovaps xmm6, [rsp+38h+var_18] }
  }
  return result;
}

/*
==============
AIScriptedInterface::PhysicsMoveAway
==============
*/
__int64 AIScriptedInterface::PhysicsMoveAway(AIScriptedInterface *this)
{
  unsigned __int16 groundEntNum; 
  int bHasGroundPlane; 
  int number; 
  Ai_Asm *v73; 
  ASM_Instance *InstanceIfExists; 
  scr_string_t player_pushed; 
  Ai_Asm *v79; 
  ai_scripted_t *m_pAI; 
  int iTraceMask; 
  int v86; 
  unsigned int v87; 
  int v89; 
  bool v94; 
  bool v108; 
  ActorDodgeMode v114; 
  AIScriptedInterface *v149; 
  ai_scripted_t *v164; 
  __int64 result; 
  float fmt; 
  float fmta; 
  int iFootstepTimer; 
  AIWrapper v194; 
  vec2_t outPushDir; 
  vec3_t v; 
  vec3_t outTranslation; 
  vec4_t outRotation; 
  char v199; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmmword ptr [rax-88h], xmm11
    vmovaps xmmword ptr [rax-98h], xmm12
    vmovaps xmmword ptr [rax-0A8h], xmm13
    vmovaps xmmword ptr [rax-0B8h], xmm14
    vmovaps xmmword ptr [rax-0C8h], xmm15
  }
  Sys_ProfBeginNamedEvent(0xFF808080, "AIPhysicsMoveAway");
  if ( !AIScriptedInterface::ShouldMoveAwayFromCloseEnt(this) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 3290, ASSERT_TYPE_ASSERT, "( ShouldMoveAwayFromCloseEnt() )", (const char *)&queryFormat, "ShouldMoveAwayFromCloseEnt()") )
    __debugbreak();
  if ( !this->GetCloseEnt(this) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 3291, ASSERT_TYPE_ASSERT, "( GetCloseEnt() )", (const char *)&queryFormat, "GetCloseEnt()") )
    __debugbreak();
  _R14 = this->GetCloseEnt(this);
  _RDX = this->m_pAI;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+838h]
    vmovss  [rsp+1D8h+var_1A8], xmm0
    vmovss  xmm0, dword ptr [rdx+83Ch]
    vmovss  [rsp+1D8h+var_1A4], xmm0
    vmovss  xmm0, dword ptr [rdx+840h]
    vmovss  [rsp+1D8h+var_1A0], xmm0
  }
  groundEntNum = _RDX->Physics.groundEntNum;
  bHasGroundPlane = _RDX->Physics.bHasGroundPlane;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+850h]
    vmovss  [rsp+1D8h+var_19C], xmm0
  }
  iFootstepTimer = _RDX->Physics.iFootstepTimer;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+858h]
    vmovss  [rsp+1D8h+var_194], xmm0
    vmovss  xmm0, dword ptr [rdx+85Ch]
    vmovss  [rsp+1D8h+var_190], xmm0
    vmovss  xmm0, dword ptr [rdx+860h]
    vmovss  [rsp+1D8h+var_18C], xmm0
    vmovss  xmm0, dword ptr [rdx+864h]
    vmovss  [rsp+1D8h+var_188], xmm0
    vmovss  xmm0, dword ptr [rdx+868h]
    vmovss  [rsp+1D8h+var_184], xmm0
    vmovss  xmm0, dword ptr [rdx+86Ch]
    vmovss  [rsp+1D8h+var_180], xmm0
  }
  _RCX = _RDX->ent;
  _RDX->Physics.vOrigin.v[0] = _RDX->ent->r.currentOrigin.v[0];
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+134h]
    vmovss  dword ptr [rdx+830h], xmm0
    vmovss  xmm1, dword ptr [rcx+138h]
    vmovss  dword ptr [rdx+834h], xmm1
    vmovss  xmm15, cs:__real@80000000
  }
  _RAX = this->m_pAI;
  if ( _R14->client )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [r14+130h]
      vsubss  xmm4, xmm0, dword ptr [rax+82Ch]
      vmovss  xmm1, dword ptr [r14+134h]
      vsubss  xmm2, xmm1, dword ptr [rax+830h]
      vmulss  xmm3, xmm2, xmm2
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm14, xmm3, xmm0
    }
    *(double *)&_XMM0 = AIScriptedInterface::CalculatePlayerPushDelta(this, _R14, &outPushDir);
    __asm
    {
      vmovaps xmm6, xmm0
      vmulss  xmm7, xmm0, xmm0
      vmovss  xmm9, cs:__real@3f800000
      vcomiss xmm7, xmm9
    }
    if ( v94 || (number = this->m_pAI->ent->s.number, v73 = Ai_Asm::Singleton(), (InstanceIfExists = Ai_Asm::GetInstanceIfExists(v73, NULL, number)) == NULL) )
    {
      __asm
      {
        vmovss  xmm11, dword ptr [rsp+1D8h+outPushDir+4]
        vmovss  xmm10, dword ptr [rsp+1D8h+outPushDir]
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm10, dword ptr [rsp+1D8h+outPushDir]
        vmulss  xmm0, xmm10, xmm6
        vmovss  dword ptr [rsp+1D8h+v], xmm0
        vmovss  xmm11, dword ptr [rsp+1D8h+outPushDir+4]
        vmulss  xmm1, xmm11, xmm6
        vmovss  dword ptr [rsp+1D8h+v+4], xmm1
        vxorps  xmm0, xmm0, xmm0
        vmovss  dword ptr [rsp+1D8h+v+8], xmm0
      }
      player_pushed = scr_const.player_pushed;
      v79 = Ai_Asm::Singleton();
      Common_Asm::FireEventWithVec3(v79, InstanceIfExists, player_pushed, &v);
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rax+82Ch]
      vsubss  xmm5, xmm0, dword ptr [r14+130h]
      vmovss  xmm1, dword ptr [rax+830h]
      vsubss  xmm4, xmm1, dword ptr [r14+134h]
      vmulss  xmm2, xmm4, xmm4
      vmulss  xmm0, xmm5, xmm5
      vaddss  xmm14, xmm2, xmm0
      vsqrtss xmm3, xmm14, xmm14
      vcmpless xmm0, xmm3, xmm15
      vmovss  xmm9, cs:__real@3f800000
      vblendvps xmm1, xmm3, xmm9, xmm0
      vdivss  xmm0, xmm9, xmm1
      vmulss  xmm10, xmm0, xmm5
      vmulss  xmm11, xmm0, xmm4
      vxorps  xmm0, xmm0, xmm0
      vucomiss xmm3, xmm0
    }
    if ( !_R14->client )
    {
      *(double *)&_XMM0 = G_crandom();
      __asm { vmovaps xmm6, xmm0 }
      *(double *)&_XMM0 = G_crandom();
      __asm
      {
        vmulss  xmm2, xmm0, xmm0
        vmulss  xmm1, xmm6, xmm6
        vaddss  xmm2, xmm2, xmm1
        vsqrtss xmm3, xmm2, xmm2
        vcmpless xmm1, xmm3, xmm15
        vblendvps xmm2, xmm3, xmm9, xmm1
        vdivss  xmm1, xmm9, xmm2
        vmulss  xmm10, xmm1, xmm6
        vmulss  xmm11, xmm1, xmm0
      }
    }
    AIScriptedInterface::GetAnimDeltas(this, &outRotation, &outTranslation);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+1D8h+outTranslation]
      vmulss  xmm3, xmm0, xmm0
      vmovss  xmm1, dword ptr [rsp+1D8h+outTranslation+4]
      vmulss  xmm2, xmm1, xmm1
      vaddss  xmm6, xmm3, xmm2
    }
    if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
      __debugbreak();
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, cs:?level@@3Ulevel_locals_t@@A.frameDuration; level_locals_t level
      vmulss  xmm1, xmm0, xmm0
      vmulss  xmm2, xmm1, cs:__real@3a6bedfb
      vmaxss  xmm7, xmm2, xmm6
      vsqrtss xmm6, xmm7, xmm7
    }
  }
  __asm { vmulss  xmm8, xmm7, cs:__real@3e800000 }
  _RAX = this->m_pAI;
  __asm
  {
    vmulss  xmm0, xmm10, xmm6
    vmovss  dword ptr [rax+888h], xmm0
    vmulss  xmm1, xmm11, xmm6
    vmovss  dword ptr [rax+88Ch], xmm1
  }
  m_pAI = this->m_pAI;
  iTraceMask = m_pAI->Physics.iTraceMask;
  if ( _R14->client )
  {
    m_pAI->Physics.iTraceMask = iTraceMask & 0xFDFFFFFF;
    m_pAI = this->m_pAI;
  }
  v86 = AIScriptedInterface::Physics_DoMovement(&m_pAI->Physics);
  this->m_pAI->Physics.iTraceMask = iTraceMask;
  if ( v86 )
  {
    if ( _R14->client )
      goto LABEL_25;
    __asm
    {
      vmovss  dword ptr [rsp+1D8h+fmt], xmm8
      vmovaps xmm3, xmm14; distanceSqrd
    }
    if ( AIScriptedInterface::PhysicsCheckMoveAwayNoWorse(this, _R14, NONE, *(float *)&_XMM3, fmt) || this->m_pAI->Physics.groundEntNum == 2047 )
    {
LABEL_25:
      v87 = 1;
    }
    else
    {
      v89 = 0;
      v87 = 1;
      __asm
      {
        vmovss  xmm7, dword ptr cs:__xmm@80000000800000008000000080000000
        vmovss  xmm12, cs:__real@bea8f5c3
        vmovss  xmm13, cs:__real@3ea8f5c3
      }
      while ( 1 )
      {
        _RCX = this->m_pAI;
        v94 = _RCX->Physics.iHitEntnum < 0x7FFu;
        if ( _RCX->Physics.iHitEntnum == 2047 )
          break;
        __asm
        {
          vmovss  xmm0, dword ptr [rcx+93Ch]
          vmovss  xmm3, dword ptr [rcx+938h]
          vmulss  xmm1, xmm3, xmm3
          vmulss  xmm0, xmm0, xmm0
          vaddss  xmm1, xmm1, xmm0
          vsqrtss xmm2, xmm1, xmm1
          vcmpless xmm0, xmm2, xmm15
          vblendvps xmm1, xmm2, xmm9, xmm0
          vdivss  xmm1, xmm9, xmm1
          vmulss  xmm0, xmm3, xmm1
          vmovss  dword ptr [rcx+938h], xmm0
          vmulss  xmm1, xmm1, dword ptr [rcx+93Ch]
          vmovss  dword ptr [rcx+93Ch], xmm1
          vmulss  xmm6, xmm6, cs:__real@3f400000
          vmulss  xmm8, xmm8, cs:__real@3f100000
          vmulss  xmm1, xmm11, dword ptr [rax+938h]
          vmulss  xmm0, xmm10, dword ptr [rax+93Ch]
          vcomiss xmm1, xmm0
        }
        v108 = !v94;
        if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 3026, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
          __debugbreak();
        _RAX = this->m_pAI;
        __asm { vmulss  xmm0, xmm6, dword ptr [rax+93Ch] }
        if ( v108 )
        {
          if ( _RAX->dodgeMode == HALF )
          {
            __asm
            {
              vmulss  xmm1, xmm0, xmm12
              vaddss  xmm0, xmm1, dword ptr [rax+888h]
              vmovss  dword ptr [rax+888h], xmm0
            }
            _RAX = this->m_pAI;
            __asm
            {
              vmulss  xmm0, xmm6, dword ptr [rax+938h]
              vmulss  xmm1, xmm0, xmm13
              vaddss  xmm0, xmm1, dword ptr [rax+88Ch]
              vmovss  dword ptr [rax+88Ch], xmm0
            }
          }
          else
          {
            __asm
            {
              vxorps  xmm1, xmm0, xmm7
              vmovss  dword ptr [rax+888h], xmm1
            }
            _RAX = this->m_pAI;
            __asm
            {
              vmulss  xmm0, xmm6, dword ptr [rax+938h]
              vmovss  dword ptr [rax+88Ch], xmm0
            }
          }
          v114 = HALF_HALF;
        }
        else
        {
          if ( _RAX->dodgeMode == HALF_HALF )
          {
            __asm
            {
              vmulss  xmm1, xmm0, xmm13
              vaddss  xmm0, xmm1, dword ptr [rax+888h]
              vmovss  dword ptr [rax+888h], xmm0
            }
            _RAX = this->m_pAI;
            __asm
            {
              vmulss  xmm0, xmm6, dword ptr [rax+938h]
              vmulss  xmm1, xmm0, xmm12
              vaddss  xmm0, xmm1, dword ptr [rax+88Ch]
              vmovss  dword ptr [rax+88Ch], xmm0
            }
          }
          else
          {
            __asm { vmovss  dword ptr [rax+888h], xmm0 }
            _RAX = this->m_pAI;
            __asm
            {
              vmulss  xmm0, xmm6, dword ptr [rax+938h]
              vxorps  xmm1, xmm0, xmm7
              vmovss  dword ptr [rax+88Ch], xmm1
            }
          }
          v114 = HALF;
        }
        _RAX = this->m_pAI;
        __asm
        {
          vmovss  xmm0, [rsp+1D8h+var_1A8]
          vmovss  dword ptr [rax+838h], xmm0
          vmovss  xmm0, [rsp+1D8h+var_1A4]
          vmovss  dword ptr [rax+83Ch], xmm0
          vmovss  xmm0, [rsp+1D8h+var_1A0]
          vmovss  dword ptr [rax+840h], xmm0
        }
        this->m_pAI->Physics.groundEntNum = groundEntNum;
        this->m_pAI->Physics.bHasGroundPlane = bHasGroundPlane;
        _RAX = this->m_pAI;
        __asm
        {
          vmovss  xmm0, [rsp+1D8h+var_19C]
          vmovss  dword ptr [rax+850h], xmm0
        }
        this->m_pAI->Physics.iFootstepTimer = iFootstepTimer;
        _RAX = this->m_pAI;
        __asm
        {
          vmovss  xmm0, [rsp+1D8h+var_194]
          vmovss  dword ptr [rax+858h], xmm0
          vmovss  xmm0, [rsp+1D8h+var_190]
          vmovss  dword ptr [rax+85Ch], xmm0
          vmovss  xmm0, [rsp+1D8h+var_18C]
          vmovss  dword ptr [rax+860h], xmm0
        }
        _RAX = this->m_pAI;
        __asm
        {
          vmovss  xmm0, [rsp+1D8h+var_188]
          vmovss  dword ptr [rax+864h], xmm0
          vmovss  xmm0, [rsp+1D8h+var_184]
          vmovss  dword ptr [rax+868h], xmm0
          vmovss  xmm0, [rsp+1D8h+var_180]
          vmovss  dword ptr [rax+86Ch], xmm0
        }
        _RDX = this->m_pAI;
        _RCX = _RDX->ent;
        _RDX->Physics.vOrigin.v[0] = _RDX->ent->r.currentOrigin.v[0];
        __asm
        {
          vmovss  xmm0, dword ptr [rcx+134h]
          vmovss  dword ptr [rdx+830h], xmm0
          vmovss  xmm1, dword ptr [rcx+138h]
          vmovss  dword ptr [rdx+834h], xmm1
        }
        if ( !AIScriptedInterface::Physics_DoMovement(&this->m_pAI->Physics) )
          goto LABEL_21;
        __asm
        {
          vmovss  dword ptr [rsp+1D8h+fmt], xmm8
          vmovaps xmm3, xmm14; distanceSqrd
        }
        if ( AIScriptedInterface::PhysicsCheckMoveAwayNoWorse(this, _R14, v114, *(float *)&_XMM3, fmta) )
          goto LABEL_48;
        if ( ++v89 >= 2 )
        {
          _RCX = this->m_pAI;
          break;
        }
      }
      _RCX->Physics.iHitEntnum = _R14->s.number;
      AIWrapper::AIWrapper(&v194, _R14);
      v149 = v194.m_pAI;
      if ( v194.m_pAI && !v194.m_pAI->GetCloseEnt(v194.m_pAI) )
        v149->SetCloseEnt(v149, this->m_pAI->ent);
      this->m_pAI->dodgeMode = NONE;
      _RAX = this->m_pAI;
      __asm
      {
        vmovss  xmm0, [rsp+1D8h+var_1A8]
        vmovss  dword ptr [rax+838h], xmm0
        vmovss  xmm0, [rsp+1D8h+var_1A4]
        vmovss  dword ptr [rax+83Ch], xmm0
        vmovss  xmm0, [rsp+1D8h+var_1A0]
        vmovss  dword ptr [rax+840h], xmm0
      }
      this->m_pAI->Physics.groundEntNum = groundEntNum;
      this->m_pAI->Physics.bHasGroundPlane = bHasGroundPlane;
      _RAX = this->m_pAI;
      __asm
      {
        vmovss  xmm0, [rsp+1D8h+var_19C]
        vmovss  dword ptr [rax+850h], xmm0
      }
      this->m_pAI->Physics.iFootstepTimer = iFootstepTimer;
      _RAX = this->m_pAI;
      __asm
      {
        vmovss  xmm0, [rsp+1D8h+var_194]
        vmovss  dword ptr [rax+858h], xmm0
        vmovss  xmm0, [rsp+1D8h+var_190]
        vmovss  dword ptr [rax+85Ch], xmm0
        vmovss  xmm0, [rsp+1D8h+var_18C]
        vmovss  dword ptr [rax+860h], xmm0
      }
      _RAX = this->m_pAI;
      __asm
      {
        vmovss  xmm0, [rsp+1D8h+var_188]
        vmovss  dword ptr [rax+864h], xmm0
        vmovss  xmm0, [rsp+1D8h+var_184]
        vmovss  dword ptr [rax+868h], xmm0
        vmovss  xmm0, [rsp+1D8h+var_180]
        vmovss  dword ptr [rax+86Ch], xmm0
      }
      v164 = this->m_pAI;
      *(_QWORD *)v164->Physics.vVelocity.v = 0i64;
      v164->Physics.vVelocity.v[2] = 0.0;
      _R8 = this->m_pAI;
      _RDX = _R8->ent;
      _R8->Physics.vOrigin.v[0] = _R8->ent->r.currentOrigin.v[0];
      __asm
      {
        vmovss  xmm0, dword ptr [rdx+134h]
        vmovss  dword ptr [r8+830h], xmm0
        vmovss  xmm1, dword ptr [rdx+138h]
        vmovss  dword ptr [r8+834h], xmm1
      }
    }
  }
  else
  {
LABEL_21:
    this->m_pAI->dodgeMode = NONE;
    v87 = 0;
  }
LABEL_48:
  Sys_ProfEndNamedEvent();
  result = v87;
  _R11 = &v199;
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
  return result;
}

/*
==============
AIScriptedInterface::Physics_GetLeftOrRightDodge
==============
*/

__int64 __fastcall AIScriptedInterface::Physics_GetLeftOrRightDodge(AIScriptedInterface *this, bool dodgeRight, double length)
{
  ActorDodgeMode dodgeMode; 
  __int64 result; 

  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm2
  }
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 3026, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  _RAX = this->m_pAI;
  dodgeMode = _RAX->dodgeMode;
  __asm { vmulss  xmm0, xmm6, dword ptr [rax+93Ch] }
  if ( dodgeRight )
  {
    if ( dodgeMode == HALF )
    {
      __asm
      {
        vmulss  xmm0, xmm0, cs:__real@bea8f5c3
        vaddss  xmm1, xmm0, dword ptr [rax+888h]
        vmovss  dword ptr [rax+888h], xmm1
      }
      _RAX = this->m_pAI;
      __asm
      {
        vmulss  xmm0, xmm6, dword ptr [rax+938h]
        vmulss  xmm1, xmm0, cs:__real@3ea8f5c3
        vaddss  xmm2, xmm1, dword ptr [rax+88Ch]
        vmovss  dword ptr [rax+88Ch], xmm2
      }
      result = 2i64;
      __asm { vmovaps xmm6, [rsp+48h+var_18] }
    }
    else
    {
      __asm
      {
        vxorps  xmm0, xmm0, cs:__xmm@80000000800000008000000080000000
        vmovss  dword ptr [rax+888h], xmm0
      }
      _RAX = this->m_pAI;
      __asm
      {
        vmulss  xmm0, xmm6, dword ptr [rax+938h]
        vmovss  dword ptr [rax+88Ch], xmm0
      }
      result = 2i64;
      __asm { vmovaps xmm6, [rsp+48h+var_18] }
    }
  }
  else
  {
    if ( dodgeMode == HALF_HALF )
    {
      __asm
      {
        vmulss  xmm0, xmm0, cs:__real@3ea8f5c3
        vaddss  xmm1, xmm0, dword ptr [rax+888h]
        vmovss  dword ptr [rax+888h], xmm1
      }
      _RAX = this->m_pAI;
      __asm
      {
        vmulss  xmm0, xmm6, dword ptr [rax+938h]
        vmulss  xmm1, xmm0, cs:__real@bea8f5c3
        vaddss  xmm2, xmm1, dword ptr [rax+88Ch]
        vmovss  dword ptr [rax+88Ch], xmm2
      }
    }
    else
    {
      __asm { vmovss  dword ptr [rax+888h], xmm0 }
      _RAX = this->m_pAI;
      __asm
      {
        vmulss  xmm0, xmm6, dword ptr [rax+938h]
        vxorps  xmm1, xmm0, cs:__xmm@80000000800000008000000080000000
        vmovss  dword ptr [rax+88Ch], xmm1
      }
    }
    result = 1i64;
    __asm { vmovaps xmm6, [rsp+48h+var_18] }
  }
  return result;
}

/*
==============
AIScriptedInterface::Physics_SimulateChildren
==============
*/
void AIScriptedInterface::Physics_SimulateChildren(AIScriptedInterface *this)
{
  __int64 v3; 
  actor_s *actor; 
  ai_agent_t *ScriptedAgentInfo; 
  void *v6; 
  float *v; 
  const dvar_t *v16; 
  char v21; 
  ai_scripted_t *m_pAI; 
  AIActorInterface v29; 
  AIAgentInterface v30; 
  __int64 v31; 
  AIWrapper v32; 
  Bounds bounds; 
  tmat43_t<vec3_t> axis; 
  trace_t results; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 6275, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 6276, ASSERT_TYPE_ASSERT, "( m_pAI->ent )", (const char *)&queryFormat, "m_pAI->ent") )
    __debugbreak();
  _RBX = this->m_pAI->ent->tagChildren;
  if ( !_RBX )
    return;
  while ( 1 )
  {
    AIActorInterface::AIActorInterface(&v29);
    AIAgentInterface::AIAgentInterface(&v30);
    v3 = 0i64;
    v30.__vftable = (AIAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
    v31 = 0i64;
    if ( !_RBX->agent )
      goto LABEL_11;
    if ( SV_Agent_IsScripted(_RBX->s.number) )
      break;
    v3 = v31;
LABEL_11:
    actor = _RBX->actor;
    if ( actor )
    {
      if ( !actor->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 105, ASSERT_TYPE_ASSERT, "( ent->actor->sentientInfo )", (const char *)&queryFormat, "ent->actor->sentientInfo") )
        __debugbreak();
      AIActorInterface::SetActor(&v29, _RBX->actor);
      v6 = &v29;
      goto LABEL_29;
    }
    if ( v3 )
      goto LABEL_30;
    if ( !_RBX->tagInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 6286, ASSERT_TYPE_ASSERT, "( ent->tagInfo )", (const char *)&queryFormat, "ent->tagInfo") )
      __debugbreak();
    _RBX = _RBX->tagInfo->next;
    if ( !_RBX )
      return;
  }
  ScriptedAgentInfo = AIAgentInterface::GetScriptedAgentInfo(_RBX);
  if ( !ScriptedAgentInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 97, ASSERT_TYPE_ASSERT, "( pInfo )", (const char *)&queryFormat, "pInfo") )
    __debugbreak();
  if ( !ScriptedAgentInfo->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 98, ASSERT_TYPE_ASSERT, "( pInfo->sentientInfo )", (const char *)&queryFormat, "pInfo->sentientInfo") )
    __debugbreak();
  AINewAgentInterface::SetAgent((AINewAgentInterface *)&v30, ScriptedAgentInfo);
  v6 = &v30;
LABEL_29:
  v31 = (__int64)v6;
LABEL_30:
  if ( !_RBX->tagInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 6294, ASSERT_TYPE_ASSERT, "( ent->tagInfo )", (const char *)&queryFormat, "ent->tagInfo") )
    __debugbreak();
  if ( _RBX->tagInfo->collisionPhysics )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_EXECUTION) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 6298, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_LINKED_COLLISION ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_LINKED_COLLISION )") )
      __debugbreak();
    G_CalcFixedLinkTargetAxis(_RBX, &axis);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+10Ch]
      vmovss  dword ptr [rbp+0C0h+bounds.halfSize], xmm0
      vmovss  xmm1, dword ptr [rbx+110h]
      vmovss  dword ptr [rbp+0C0h+bounds.halfSize+4], xmm1
      vmovss  xmm2, dword ptr [rbx+114h]
      vmovss  dword ptr [rbp+0C0h+bounds.halfSize+8], xmm2
      vmovss  xmm0, dword ptr [rbx+100h]
      vmovss  dword ptr [rbp+0C0h+bounds.midPoint], xmm0
      vmovss  xmm1, dword ptr [rbx+104h]
      vmovss  dword ptr [rbp+0C0h+bounds.midPoint+4], xmm1
      vmovss  xmm0, dword ptr [rbx+108h]
      vmulss  xmm1, xmm2, cs:__real@3f000000
      vmovss  dword ptr [rbp+0C0h+bounds.midPoint+8], xmm0
      vmovss  dword ptr [rbp+0C0h+bounds.halfSize+8], xmm1
    }
    v = _RBX->r.currentOrigin.v;
    G_Main_TraceCapsule(&results, &_RBX->r.currentOrigin, &axis.m[3], &bounds, _RBX->s.number, 2065);
    if ( results.hitType )
    {
      AIWrapper::AIWrapper(&v32, _RBX);
      _RSI = v32.m_pAI->GetAI(v32.m_pAI);
      LODWORD(_RSI[4].eyeInfo.dir.v[0]) = 7;
      if ( !Com_GameMode_SupportsFeature(WEAPON_SPRINT_RAISE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 6313, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::GRAVITY_CHANGE_ALLOWED ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::GRAVITY_CHANGE_ALLOWED )") )
        __debugbreak();
      v16 = DVARFLT_bg_gravity;
      if ( !DVARFLT_bg_gravity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_gravity") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v16);
      LODWORD(_RSI[4].eyeInfo.dir.v[1]) = v16->current.integer;
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+0C0h+axis+28h]
        vmovss  xmm1, dword ptr [rbp+0C0h+axis+24h]
        vsubss  xmm2, xmm0, dword ptr [r14+4]
        vsubss  xmm0, xmm1, dword ptr [r14]
        vmovss  dword ptr [rsi+888h], xmm0
        vmovss  dword ptr [rsi+88Ch], xmm2
      }
      _RSI[4].sight.vLastEnemySightPosSelfOrigin.v[1] = 0.0;
      _RSI[4].sight.fovPeriphMaxSightDistSq = *v;
      _RSI[4].sight.latency = (int)v[1];
      *(float *)&_RSI[4].sight.ignoreCloseFoliage = v[2];
      LOBYTE(_RSI[4].orientation.predictedStrafePos.z) = 0;
      AIScriptedInterface::Physics_DoMovement((actor_physics_t *)&_RSI[4].sight.fovPeriphMaxSightDistSq);
      _RSI[4].eyeInfo.dir.v[0] = 0.0;
      __asm
      {
        vmovss  xmm0, dword ptr [rsi+82Ch]
        vsubss  xmm3, xmm0, dword ptr [rbp+0C0h+axis+24h]
        vmovss  xmm1, dword ptr [rsi+830h]
        vsubss  xmm0, xmm1, dword ptr [rbp+0C0h+axis+28h]
        vxorps  xmm2, xmm2, xmm2
        vucomiss xmm3, xmm2
      }
      if ( !v21 )
        goto LABEL_46;
      __asm { vucomiss xmm0, xmm2 }
      if ( !v21 )
      {
LABEL_46:
        this->m_pAI->Physics.ePhysicsType = AIPHYS_ZONLY_PHYSICS_ABSOLUTE;
        m_pAI = this->m_pAI;
        *(_QWORD *)m_pAI->Physics.vVelocity.v = 0i64;
        m_pAI->Physics.vVelocity.v[2] = 0.0;
        _RAX = this->m_pAI;
        __asm
        {
          vmovss  dword ptr [rax+888h], xmm3
          vmovss  dword ptr [rax+88Ch], xmm0
        }
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
char AIScriptedInterface::PointAt_MovingPlatform(AIScriptedInterface *this, const vec3_t *vPoint, const vec3_t *vGoalPos)
{
  char result; 

  __asm
  {
    vmovss  xmm0, dword ptr [rdx+8]
    vsubss  xmm1, xmm0, dword ptr [r8+8]
    vmulss  xmm2, xmm1, xmm1
  }
  result = 1;
  __asm
  {
    vcomiss xmm2, cs:__real@45c80000
    vmovss  xmm0, dword ptr [r8]
    vmovss  xmm1, dword ptr [r8+4]
    vsubss  xmm4, xmm0, dword ptr [rdx]
    vsubss  xmm2, xmm1, dword ptr [rdx+4]
    vmovss  xmm1, cs:MIN_MOVING_PLATFORM_DIST_SQ
    vmulss  xmm3, xmm2, xmm2
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm4, xmm3, xmm0
    vcomiss xmm1, xmm4
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
  const dvar_t *v12; 
  const dvar_t *v13; 
  const dvar_t *v14; 
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
    _RCX = this->m_pAI->ent;
    __asm
    {
      vmovsd  xmm0, qword ptr [rcx+130h]
      vmovsd  qword ptr [rsp+0B8h+pos], xmm0
    }
    pos.v[2] = _RCX->r.currentOrigin.v[2];
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
      v12 = DVARINT_ai_showPaths;
      if ( !DVARINT_ai_showPaths && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showPaths") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v12);
      if ( v12->current.integer > 0 )
      {
        v13 = DVARINT_ai_showPaths;
        if ( !DVARINT_ai_showPaths && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showPaths") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v13);
        Nav_DrawPath(this->m_pAI->pNavigator, v13->current.integer);
        v14 = DVARINT_ai_showPaths;
        if ( !DVARINT_ai_showPaths && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showPaths") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v14);
        if ( v14->current.integer >= 2 )
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
  vec3_t forward; 

  AngleVectors(&this->m_pAI->ent->r.currentAngles, &forward, NULL, NULL);
  memset_0(this->m_pAI->moveHistory, 0, sizeof(this->m_pAI->moveHistory));
  __asm { vmovss  xmm0, dword ptr [rsp+48h+forward] }
  _RAX = this->m_pAI;
  __asm
  {
    vmovss  dword ptr [rax+9B4h], xmm0
    vmovss  xmm1, dword ptr [rsp+48h+forward+4]
    vmovss  dword ptr [rax+9B8h], xmm1
    vmovss  xmm0, dword ptr [rsp+48h+forward+8]
    vmovss  dword ptr [rax+9BCh], xmm0
  }
  _RAX->moveHistoryIndex = 1;
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
  ai_scripted_t *v6; 
  pathnode_t *node; 
  pathnode_t *v13; 
  bool v14; 
  char v15; 
  char v17; 
  ai_scripted_t *m_pAI; 
  bool IsBTGoalValid; 
  ai_scripted_t *v22; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 4996, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( this->m_pAI->ent->tagInfo )
  {
    this->ClearPath(this);
    AIScriptedInterface::Debug_NotMoving(this, "linked");
    return 0;
  }
  else if ( AIScriptedInterface::HadPath(this) || (v6 = this->m_pAI, level.time >= v6->iTeamMoveWaitTime) )
  {
    if ( !this->m_pAI->fixedNode || AIScriptedInterface::IsBTGoalValid(this) || this->m_pAI->codeGoal.bMultiGoalPath )
    {
      __asm
      {
        vmovaps [rsp+68h+var_18], xmm6
        vmovaps [rsp+68h+var_28], xmm7
        vmovaps [rsp+68h+var_38], xmm8
      }
      if ( !AICommonInterface::KnowAboutEnemy(this) )
        this->m_pAI->useEnemyGoal = 0;
      _RAX = this->m_pAI;
      __asm
      {
        vmovss  xmm6, dword ptr [rax+258h]
        vmovss  xmm7, dword ptr [rax+25Ch]
        vmovss  xmm8, dword ptr [rax+260h]
      }
      node = _RAX->codeGoal.node;
      AIScriptedInterface::UpdateGoalPos(this);
      _RAX = this->m_pAI;
      v13 = _RAX->codeGoal.node;
      v14 = v13 == NULL;
      if ( v13 && (v14 = v13 == node) )
      {
        v15 = 0;
        v14 = 1;
      }
      else
      {
        v15 = 1;
      }
      __asm
      {
        vucomiss xmm6, dword ptr [rax+258h]
        vmovaps xmm6, [rsp+68h+var_18]
      }
      if ( v14 )
      {
        __asm { vucomiss xmm7, dword ptr [rax+25Ch] }
        if ( v14 )
        {
          __asm { vucomiss xmm8, dword ptr [rax+260h] }
          if ( v14 )
            goto LABEL_27;
        }
      }
      if ( !v15 )
LABEL_27:
        v17 = 0;
      else
        v17 = 1;
      __asm
      {
        vmovaps xmm8, [rsp+68h+var_38]
        vmovaps xmm7, [rsp+68h+var_28]
      }
      _RAX->goalPosChanged = v17;
      m_pAI = this->m_pAI;
      if ( m_pAI->goalPosChanged )
      {
        m_pAI->nodeSelect.nextFindBestCoverTime = 0;
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
        v22 = this->m_pAI;
        if ( v22->blackboard.m_bMeleeChargeRequested || EntHandle::isDefined(&v22->grenade.pGrenade) || !AIScriptedInterface::IsDoingReacquire(this) && level.time >= this->m_pAI->combat.remainExposedEndTime )
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
    if ( level.time >= v6->notMovingStringTime + 500 )
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
  char v18; 
  int NCorners; 
  unsigned __int64 v21; 
  int v22; 
  unsigned __int64 v24; 
  __int64 result; 
  vec3_t outCurPos; 
  nav_cornerdata_t ptr[4]; 
  char v108; 
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
  }
  `eh vector constructor iterator'(ptr, 0x28ui64, 4ui64, (void (__fastcall *)(void *))nav_cornerdata_t::nav_cornerdata_t, (void (__fastcall *)(void *))nav_cornerdata_t::~nav_cornerdata_t);
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 6775, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !outDistToCorner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 6776, ASSERT_TYPE_ASSERT, "(outDistToCorner)", (const char *)&queryFormat, "outDistToCorner") )
    __debugbreak();
  pNavigator = this->m_pAI->pNavigator;
  if ( !pNavigator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 6779, ASSERT_TYPE_ASSERT, "(pNav)", (const char *)&queryFormat, "pNav") )
    __debugbreak();
  if ( pNavigator->HasPath(pNavigator) && pNavigator->m_TimeOfLastPathUpdate != level.time )
  {
    *(double *)&_XMM0 = Nav_GetPathDistToGoal(pNavigator);
    __asm { vcomiss xmm0, cs:__real@42900000 }
    if ( !v18 && !AINavigator::ShouldPathOutOfBounds(pNavigator) )
    {
      __asm { vmovss  xmm3, cs:__real@447a0000; pathDistThreshold }
      NCorners = Nav_CalculateNextNCorners(pNavigator, 4, ptr, *(float *)&_XMM3);
      v21 = NCorners;
      if ( NCorners <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 6796, ASSERT_TYPE_ASSERT, "( nCorners > 0 )", (const char *)&queryFormat, "nCorners > 0") )
        __debugbreak();
      v22 = 0;
      __asm { vxorps  xmm11, xmm11, xmm11 }
      Nav_GetPos(pNavigator, &outCurPos);
      if ( (int)v21 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 6802, ASSERT_TYPE_ASSERT, "( iCorner < nCorners )", (const char *)&queryFormat, "iCorner < nCorners") )
        __debugbreak();
      v24 = 0i64;
      __asm
      {
        vmovss  xmm15, cs:__real@80000000
        vmovss  xmm10, cs:__real@3f800000
        vmovss  xmm12, [rsp+1D8h+var_1A8]
        vmovss  xmm13, [rsp+1D8h+var_1A8]
        vmovss  xmm14, [rsp+1D8h+var_1A8]
        vmovss  xmm7, [rsp+1D8h+var_1A8]
        vmovss  xmm8, [rsp+1D8h+var_1A8]
        vmovss  xmm9, [rsp+1D8h+var_1A8]
      }
LABEL_21:
      _RDX = &ptr[v24 + 1].m_Pos.v[2];
      while ( (__int64)v24 < (__int64)v21 )
      {
        __asm
        {
          vmovss  xmm14, dword ptr [rdx-30h]
          vmovss  xmm12, dword ptr [rdx-2Ch]
          vmovss  xmm13, dword ptr [rdx-28h]
          vmovss  xmm0, dword ptr [rdx-8]
          vmovss  xmm1, dword ptr [rdx-4]
          vmovss  xmm2, dword ptr [rdx]
          vsubss  xmm7, xmm14, dword ptr [rsp+1D8h+outCurPos]
          vsubss  xmm8, xmm12, dword ptr [rsp+1D8h+outCurPos+4]
          vsubss  xmm9, xmm13, dword ptr [rsp+1D8h+outCurPos+8]
          vsubss  xmm4, xmm0, xmm14
          vsubss  xmm5, xmm1, xmm12
          vsubss  xmm6, xmm2, xmm13
          vmulss  xmm1, xmm5, xmm5
          vmulss  xmm0, xmm4, xmm4
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm6, xmm6
          vaddss  xmm2, xmm2, xmm1
          vsqrtss xmm3, xmm2, xmm2
          vcmpless xmm0, xmm3, xmm15
          vblendvps xmm1, xmm3, xmm10, xmm0
          vdivss  xmm0, xmm10, xmm1
          vmulss  xmm3, xmm0, xmm4
          vmulss  xmm4, xmm0, xmm5
          vmulss  xmm5, xmm0, xmm6
          vmulss  xmm1, xmm8, xmm8
          vmulss  xmm0, xmm7, xmm7
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm9, xmm9
          vaddss  xmm2, xmm2, xmm1
          vsqrtss xmm11, xmm2, xmm2
          vcmpless xmm0, xmm11, xmm15
          vblendvps xmm1, xmm11, xmm10, xmm0
          vdivss  xmm0, xmm10, xmm1
          vmulss  xmm7, xmm0, xmm7
          vmulss  xmm8, xmm0, xmm8
          vmulss  xmm9, xmm0, xmm9
          vcomiss xmm11, cs:__real@41a00000
        }
        if ( v24 >= v21 )
        {
          __asm
          {
            vmulss  xmm1, xmm8, xmm4
            vmulss  xmm0, xmm7, xmm3
            vaddss  xmm2, xmm1, xmm0
            vmulss  xmm1, xmm9, xmm5
            vaddss  xmm2, xmm2, xmm1
            vcomiss xmm2, cs:__real@3f774bc7
          }
          if ( v24 < v21 )
            break;
          ++v22;
          ++v24;
          goto LABEL_21;
        }
        ++v22;
        ++v24;
        _RDX += 10;
      }
      if ( !this->m_pAI->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 6830, ASSERT_TYPE_ASSERT, "(m_pAI->ent)", (const char *)&queryFormat, "m_pAI->ent") )
        __debugbreak();
      _RAX = this->m_pAI;
      if ( !_RAX->orientation.faceMotion )
      {
        __asm
        {
          vmovss  xmm6, dword ptr [rax+83Ch]
          vmovss  xmm4, dword ptr [rax+838h]
          vmovss  xmm5, dword ptr [rax+840h]
          vmulss  xmm1, xmm4, xmm4
          vmulss  xmm0, xmm6, xmm6
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm5, xmm5
          vaddss  xmm2, xmm2, xmm1
          vsqrtss xmm3, xmm2, xmm2
          vcmpless xmm0, xmm3, xmm15
          vblendvps xmm1, xmm3, xmm10, xmm0
          vdivss  xmm1, xmm10, xmm1
          vmulss  xmm2, xmm4, xmm1
          vmulss  xmm0, xmm6, xmm1
          vmulss  xmm3, xmm5, xmm1
          vmulss  xmm1, xmm8, xmm0
          vmulss  xmm0, xmm7, xmm2
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm9, xmm3
          vaddss  xmm2, xmm2, xmm1
          vcomiss xmm2, cs:__real@3f000000
        }
      }
    }
  }
  `eh vector destructor iterator'(ptr, 0x28ui64, 4ui64, (void (__fastcall *)(void *))nav_cornerdata_t::~nav_cornerdata_t);
  result = 0i64;
  _R11 = &v108;
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
  return result;
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
char AIScriptedInterface::ShouldEarlySharpTurnTick(AIScriptedInterface *this)
{
  if ( !AICommonInterface::HasPath(this) )
    return 0;
  _RAX = this->m_pAI;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+838h]
    vmovss  xmm2, dword ptr [rax+83Ch]
    vmovss  xmm3, dword ptr [rax+840h]
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vcomiss xmm2, cs:__real@3f800000
    vmovss  xmm0, dword ptr [rax+888h]
    vmovss  xmm2, dword ptr [rax+88Ch]
    vmovss  xmm3, dword ptr [rax+890h]
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vcomiss xmm2, cs:__real@3c23d70a
  }
  return 1;
}

/*
==============
AIScriptedInterface::ShouldHoldGroundAgainstEnemy
==============
*/
bool AIScriptedInterface::ShouldHoldGroundAgainstEnemy(AIScriptedInterface *this)
{
  gentity_s *TargetEntity; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 4238, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  TargetEntity = AICommonInterface::GetTargetEntity(this);
  _RDX = TargetEntity;
  if ( !TargetEntity || !TargetEntity->client && !TargetEntity->actor || TargetEntity->health >= 20 )
    return 0;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+130h]
    vmovss  xmm1, dword ptr [rdx+134h]
    vsubss  xmm3, xmm0, dword ptr [rcx+130h]
    vsubss  xmm2, xmm1, dword ptr [rcx+134h]
    vmovss  xmm0, dword ptr [rdx+138h]
    vsubss  xmm4, xmm0, dword ptr [rcx+138h]
    vmulss  xmm2, xmm2, xmm2
    vmulss  xmm1, xmm3, xmm3
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm2, xmm3, xmm0
    vcomiss xmm2, cs:__real@47800000
  }
  return TargetEntity->health < 0x14u;
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
  ai_scripted_t *m_pAI; 
  ai_scripted_t *v11; 
  vec3_t vFinalGoal; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 3216, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  _RDI = this->GetCloseEnt(this);
  if ( this->m_pAI->eAnimMode == AI_ANIM_MOVE_CODE && AICommonInterface::HasPath(this) )
    return 0;
  if ( AIScriptedInterface::IsInCoverArrival(this) && !this->m_pAI->sentient->pClaimedNode )
    return 0;
  if ( !_RDI )
    return 0;
  m_pAI = this->m_pAI;
  if ( m_pAI->Physics.ePhysicsType == AIPHYS_NOCLIP )
    return 0;
  if ( G_MotionWarp_Active(m_pAI->ent->s.number) )
    return 0;
  AICommonInterface::GetPathFinalGoal(this, &vFinalGoal);
  if ( !_RDI->client )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+130h]
      vmovss  xmm1, dword ptr [rdi+134h]
      vsubss  xmm2, xmm1, dword ptr [rsp+58h+vFinalGoal+4]
      vsubss  xmm4, xmm0, dword ptr [rsp+58h+vFinalGoal]
      vmulss  xmm3, xmm2, xmm2
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm1, xmm3, xmm0
      vcomiss xmm1, cs:__real@44afc800
    }
    if ( !_RDI->client )
      return 0;
  }
  v11 = this->m_pAI;
  return v11->pushable && v11->script_pushable;
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
  AIActorWrapper v14; 

  _RBX = ent;
  ent->model = 0;
  SV_Profile_BeginEvent(SVPROF_AI_SPAWNING);
  v2 = DVARBOOL_ai_spawn;
  if ( !DVARBOOL_ai_spawn && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_spawn") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( !v2->current.enabled )
    goto LABEL_13;
  spawnflags = _RBX->spawnflags;
  if ( (spawnflags & 1) != 0 )
  {
    v4 = SP_actor_spawner(_RBX);
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
    G_FreeEntity(_RBX);
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
  _RBX->actor = v5;
  _RBX->sentient = v6;
  _RBX->nextthink = 0;
  _RBX->c.item[0].ammoCount = level.time;
  _RBX->handler = 2;
  v8 = 0i64;
  p_lerp = &_RBX->s.lerp;
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
  _RBX->r.svFlags |= 2u;
  v4 = 1;
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(&_RBX->s.lerp.eFlags, ACTIVE, 0x10u);
  _RBX->s.lerp.u.anonymous.data[6] = 0;
  _RBX->maxHealth = 100;
  _RBX->health = 100;
  _RBX->flags.m_flags[0] |= 0x80000200;
  __asm
  {
    vmovups xmm0, xmmword ptr cs:?actorBox@@3UBounds@@B.midPoint; Bounds const actorBox
    vmovups xmmword ptr [rbx+100h], xmm0
    vmovsd  xmm1, qword ptr cs:?actorBox@@3UBounds@@B.halfSize+4; Bounds const actorBox
    vmovsd  qword ptr [rbx+110h], xmm1
  }
  _RBX->clipmask = 33685521;
  _RBX->s.eType = ET_ACTOR;
  _RBX->s.otherEntityNum = 2047;
  _RBX->s.surfType = 7;
  *(_QWORD *)&_RBX->hint.hintString = 0i64;
  if ( (_RBX->spawnflags & 0x40) == 0 )
    AI_DropToFloor(_RBX);
  v5->ent = _RBX;
  v5->sentient = v7;
  AIActorWrapper::AIActorWrapper(&v14, v5);
  m_pAI = v14.m_pAI;
  if ( !v14.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 256, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  m_pAI->OnSpawned(m_pAI);
  SV_LinkEntity(_RBX);
  Sentient_NearestTacPoint(v7);
  G_PhysicsCharacterProxy_AddCharacter(_RBX);
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
  const dvar_t *v4; 
  const dvar_t *v5; 
  const DObj *ServerDObjForEnt; 
  const char *v7; 
  ai_scripted_t *m_pAI; 
  actor_think_result_t v9; 
  bool IsRagdollTrajectory; 
  int v15; 
  bool v16; 
  unsigned int v20; 
  unsigned int v21; 
  unsigned int v22; 
  int v23; 
  bool v27; 
  int v28; 
  ai_scripted_t *v29; 
  gentity_s *v30; 
  const sentient_s *sentient; 
  ai_scripted_t *v38; 
  ActorDelayedWeaponDrop *i; 
  DelayedWeapDropState state; 
  gentity_s *v41; 
  ai_scripted_t *v42; 
  ai_scripted_t *v43; 
  unsigned __int8 numPoints; 
  scrContext_t *v45; 
  ai_scripted_t *v46; 
  scrContext_t *v47; 
  unsigned __int8 j; 
  __int64 lastShot; 
  __int64 bFireSoundOnce; 
  vec3_t vEyePosOut; 
  tmat43_t<vec3_t> matrix; 

  v2 = 0;
  Profile_Begin(254);
  _RSI = this->GetEntity(this);
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 1699, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
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
    if ( v5->current.integer != _RSI->s.number )
      goto LABEL_114;
  }
  ServerDObjForEnt = Com_GetServerDObjForEnt(_RSI);
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
    if ( m_pAI->ent != _RSI )
    {
      LODWORD(bFireSoundOnce) = m_pAI->ent->s.number;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 1737, ASSERT_TYPE_ASSERT, "(m_pAI->ent == self)", "%s\n\tactor->ent->s.number: %d, self->s.number: %d", "m_pAI->ent == self", bFireSoundOnce, _RSI->s.number) )
        __debugbreak();
    }
    if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 1738, ASSERT_TYPE_ASSERT, "( m_pAI->sentient )", (const char *)&queryFormat, "m_pAI->sentient") )
      __debugbreak();
    if ( this->m_pAI->sentient->ent != _RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 1739, ASSERT_TYPE_ASSERT, "( m_pAI->sentient->ent == self )", (const char *)&queryFormat, "m_pAI->sentient->ent == self") )
      __debugbreak();
    if ( _RSI->sentient != this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 1740, ASSERT_TYPE_ASSERT, "( self->sentient == m_pAI->sentient )", (const char *)&queryFormat, "self->sentient == m_pAI->sentient") )
      __debugbreak();
    if ( _RSI->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 1741, ASSERT_TYPE_ASSERT, "( self->client == 0 )", (const char *)&queryFormat, "self->client == NULL") )
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
    _RDI = (_DWORD *)_RSI->r.currentOrigin.v;
    __asm { vmovss  xmm1, dword ptr [rdi] }
    _RCX = this->m_pAI->sentient;
    __asm
    {
      vucomiss xmm1, dword ptr [rcx+24h]
      vmovss  dword ptr [rcx+24h], xmm1
    }
    _R14 = &_RSI->s.lerp.pos;
    _RCX->oldOrigin.v[1] = _RSI->r.currentOrigin.v[1];
    _RCX->oldOrigin.v[2] = _RSI->r.currentOrigin.v[2];
    IsRagdollTrajectory = Com_IsRagdollTrajectory(&_RSI->s.lerp.pos);
    v15 = 1;
    if ( IsRagdollTrajectory )
      v15 = 26;
    *_R14 = v15;
    if ( _RSI == (gentity_s *)-16i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 82, ASSERT_TYPE_ASSERT, "(traj)", (const char *)&queryFormat, "traj") )
      __debugbreak();
    v16 = *_R14 == 4;
    __asm { vmovss  xmm0, dword ptr [rdi] }
    if ( *_R14 == 4 )
    {
      __asm { vmovss  dword ptr [rsp+0B8h+vEyePosOut], xmm0 }
      if ( (LODWORD(vEyePosOut.v[0]) & 0x7F800000) == 2139095040 )
        goto LABEL_118;
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+4]
        vmovss  dword ptr [rsp+0B8h+vEyePosOut], xmm0
      }
      if ( (LODWORD(vEyePosOut.v[0]) & 0x7F800000) == 2139095040 )
        goto LABEL_118;
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+8]
        vmovss  dword ptr [rsp+0B8h+vEyePosOut], xmm0
      }
      if ( (LODWORD(vEyePosOut.v[0]) & 0x7F800000) == 2139095040 )
      {
LABEL_118:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 24, ASSERT_TYPE_SANITY, "( !IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] )") )
          __debugbreak();
      }
      v20 = s_trbase_aab_Y ^ LODWORD(_RSI->r.currentOrigin.v[1]);
      v21 = s_trbase_aab_Z ^ LODWORD(_RSI->r.currentOrigin.v[2]);
      *(_QWORD *)vEyePosOut.v = &_RSI->r.currentOrigin;
      v22 = *_RDI ^ ~s_trbase_aab_X;
      v23 = v22 ^ v20;
      LODWORD(_RSI->s.lerp.pos.trBase.v[0]) = v22;
      LODWORD(_RSI->s.lerp.pos.trBase.v[1]) = v23;
      LODWORD(_RSI->s.lerp.pos.trBase.v[2]) = v23 ^ v21;
      v16 = 1;
      memset(&vEyePosOut, 0, 8ui64);
    }
    else
    {
      __asm { vmovss  dword ptr [r14+0Ch], xmm0 }
      _RSI->s.lerp.pos.trBase.v[1] = _RSI->r.currentOrigin.v[1];
      _RSI->s.lerp.pos.trBase.v[2] = _RSI->r.currentOrigin.v[2];
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+40h]
      vucomiss xmm0, dword ptr [rsi+13Ch]
    }
    if ( v16 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rsi+44h]
        vucomiss xmm0, dword ptr [rsi+140h]
      }
      if ( v16 )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rsi+48h]
          vucomiss xmm0, dword ptr [rsi+144h]
        }
      }
    }
    v27 = Com_IsRagdollTrajectory(&_RSI->s.lerp.apos);
    v28 = 1;
    if ( v27 )
      v28 = 26;
    _RSI->s.lerp.apos.trType = v28;
    _RSI->s.lerp.apos.trBase.v[0] = _RSI->r.currentAngles.v[0];
    _RSI->s.lerp.apos.trBase.v[1] = _RSI->r.currentAngles.v[1];
    _RSI->s.lerp.apos.trBase.v[2] = _RSI->r.currentAngles.v[2];
    SV_LinkEntity(_RSI);
    AIScriptedInterface::PostPhysics(this);
    Sentient_CheckAndUpdateNearestData(this->m_pAI->sentient, 1);
    Sentient_BanNearNodes(this->m_pAI->sentient, 0);
    if ( BG_ActorIsProne(&this->m_pAI->ProneInfo, level.time) )
      this->UpdateProneInformation(this, 1);
    else
      this->m_pAI->Physics.prone = 0;
    this->UpdateLookAt(this);
    AIScriptedInterface::Physics_TestForLinkedGroundChange(this);
    this->UpdateDelayedDeath(this);
    v29 = this->m_pAI;
    if ( v29->Physics.bIsAlive && !v29->ignoreTriggers )
      this->TouchTriggers(this);
    v30 = this->GetEntity(this);
    if ( this->m_pAI->bContinuousFire )
    {
      GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(&v30->s.lerp.eFlags, ACTIVE, 0xAu);
      if ( EntHandle::isDefined(&this->m_pAI->pBeamTargetEnt) )
      {
        _RAX = EntHandle::ent(&this->m_pAI->pBeamTargetEnt);
        sentient = _RAX->sentient;
        if ( sentient )
        {
          Sentient_GetEyePosition(sentient, &vEyePosOut);
        }
        else
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rax+130h]
            vmovss  dword ptr [rsp+0B8h+vEyePosOut], xmm0
            vmovss  xmm1, dword ptr [rax+134h]
            vmovss  dword ptr [rsp+0B8h+vEyePosOut+4], xmm1
            vmovss  xmm0, dword ptr [rax+138h]
            vmovss  dword ptr [rsp+0B8h+vEyePosOut+8], xmm0
          }
        }
        __asm { vmovss  xmm1, cs:__real@3f800000; accuracyMod }
        AIScriptedInterface::Shoot(this, *(float *)&_XMM1, &vEyePosOut, NULL, 1, NOT_LAST_SHOT_IN_CLIP, 1, 0);
      }
      else
      {
        __asm { vmovss  xmm1, cs:__real@41200000; accuracyMod }
        AIScriptedInterface::Shoot(this, *(float *)&_XMM1, NULL, NULL, 1, NOT_LAST_SHOT_IN_CLIP, 1, 0);
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
      v38 = this->m_pAI;
      for ( i = v38->weapDrops; i != (ActorDelayedWeaponDrop *)&v38->speedScaleMultiplier; ++i )
      {
        state = i->state;
        if ( state == ACTOR_WEAP_DROP_GRAB_INITIAL_VALUE )
        {
          G_Items_GetStateFromTag(v38->ent, i->tagName, NULL, &i->matrix, 0);
          i->time = level.time;
          i->state = ACTOR_WEAP_DROP_FINISH;
        }
        else if ( state == ACTOR_WEAP_DROP_FINISH && level.time > i->time )
        {
          G_Items_GetStateFromTag(v38->ent, i->tagName, NULL, &matrix, 0);
          v41 = G_Items_DropWeapon(this->m_pAI->ent, &i->weapon, 0, 1, &matrix);
          if ( v41 )
          {
            BG_WeaponDef(&i->weapon, 0);
            G_Items_EnablePhysicsDelayed(v41, this->m_pAI->ent, i->time, &i->matrix, i->tagName);
            GScr_AddEntity(v41);
            GScr_Notify(this->m_pAI->ent, scr_const.weapon_dropped, 1u);
          }
          i->state = ACTOR_WEAP_DROP_NONE;
        }
        v38 = this->m_pAI;
      }
      if ( !v38 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 1636, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
        __debugbreak();
      if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 1637, ASSERT_TYPE_ASSERT, "( m_pAI->sentient )", (const char *)&queryFormat, "m_pAI->sentient") )
        __debugbreak();
      if ( !this->m_pAI->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 1638, ASSERT_TYPE_ASSERT, "( m_pAI->ent )", (const char *)&queryFormat, "m_pAI->ent") )
        __debugbreak();
      if ( !AIScriptedInterface::GoalReached(this) )
        goto LABEL_114;
      v42 = this->m_pAI;
      v43 = v42;
      if ( !v42->codeGoal.bMultiGoalPath )
        goto LABEL_112;
      numPoints = v42->scriptGoalPath.numPoints;
      if ( !numPoints )
        goto LABEL_112;
      if ( v42->scriptGoalPath.curPoint == numPoints - 1 )
      {
        v45 = ScriptContext_Server();
        v46 = this->m_pAI;
        v47 = v45;
        for ( j = v46->scriptGoalPath.curPoint; j < v46->scriptGoalPath.numPoints; ++j )
        {
          Scr_AddInt(v47, j);
          GScr_Notify(this->m_pAI->ent, scr_const.subgoal, 1u);
          v46 = this->m_pAI;
        }
        v46->scriptGoalPath.numPoints = 0;
        v43 = this->m_pAI;
LABEL_112:
        GScr_Notify(v43->ent, scr_const.goal, 0);
      }
    }
LABEL_114:
    this->SetNextThinkTime(this, _RSI);
    goto LABEL_115;
  }
  Com_Printf(18, "^3Deleting AI without a model.\n");
LABEL_14:
  G_FreeEntity(_RSI);
LABEL_115:
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
  gentity_s *ent; 
  ai_scripted_t *m_pAI; 
  ai_scripted_t *v9; 
  int iPathEndTime; 
  ai_scripted_t *v11; 
  bool v12; 
  ai_scripted_t *v13; 
  ai_scripted_t *v15; 
  int Int_Internal_DebugName; 
  ai_scripted_t *v45; 
  ai_scripted_t *v49; 
  AIScriptedInterface_vtbl *v50; 
  bool v51; 
  ai_scripted_t *v52; 
  ai_scripted_t *v53; 
  AIScriptedInterface_vtbl *v64; 
  bool v65; 
  ai_scripted_t *v66; 
  ai_scripted_t *v67; 
  EntityTagInfo *tagInfo; 
  gentity_s *v74; 
  __int64 eMode; 
  const dvar_t *v80; 
  ai_scripted_t *v87; 
  bool v88; 
  bool v89; 
  EntityTagInfo *v90; 
  const dvar_t *v93; 
  vec3_t *p_vWishDelta; 
  const char *v122; 
  const char *v140; 
  const char *v144; 
  const vec4_t *v145; 
  const char *v149; 
  char *fmt; 
  __int64 v155; 
  __int64 v156; 
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
  char v169; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-38h], xmm7 }
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 5881, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  ent = this->m_pAI->ent;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 5883, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  m_pAI = this->m_pAI;
  v9 = m_pAI;
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
        v9 = this->m_pAI;
      }
    }
  }
  v9->pNavigator->m_bBlocked = 0;
  v11 = this->m_pAI;
  v12 = v11->avoidance.avoidanceEnabled && v11->eAnimMode == AI_ANIM_MOVE_CODE;
  v11->avoidance.useORCAAvoidance = v12;
  v13 = this->m_pAI;
  __asm
  {
    vmovaps [rsp+180h+var_20], xmm6
    vxorps  xmm7, xmm7, xmm7
  }
  v13->avoidance_active = 0;
  v15 = this->m_pAI;
  switch ( v15->eAnimMode )
  {
    case AI_ANIM_MOVE_CODE:
      if ( !v15->moveMode )
        goto LABEL_25;
      if ( !AICommonInterface::HasPath(this) )
      {
        v15 = this->m_pAI;
LABEL_25:
        *(_QWORD *)v15->Physics.vWishDelta.v = 0i64;
        v15->Physics.vWishDelta.v[2] = 0.0;
        this->m_pAI->Physics.ePhysicsType = AIPHYS_NORMAL_ABSOLUTE;
        __asm
        {
          vmovups xmm0, xmmword ptr cs:?quat_identity@@3Tvec4_t@@B; vec4_t const quat_identity
          vmovdqa xmmword ptr [rsp+180h+outRotation], xmm0
        }
        goto LABEL_45;
      }
      AIScriptedInterface::GetAnimDeltas(this, &outRotation, &outTranslation);
      this->UpdateMoveAnimTranslation(this, &outTranslation);
      if ( !AICommonInterface::HasPath(this) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 5915, ASSERT_TYPE_ASSERT, "( HasPath() )", (const char *)&queryFormat, "HasPath()") )
        __debugbreak();
      this->m_pAI->Physics.ePhysicsType = AIPHYS_NORMAL_ABSOLUTE;
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+180h+outTranslation]
        vmovss  xmm1, dword ptr [rsp+180h+outTranslation+4]
        vmulss  xmm2, xmm1, xmm1
        vmulss  xmm3, xmm0, xmm0
        vmovss  xmm0, dword ptr [rsp+180h+outTranslation+8]
        vmulss  xmm1, xmm0, xmm0
        vaddss  xmm4, xmm3, xmm2
        vaddss  xmm2, xmm4, xmm1
        vsqrtss xmm1, xmm2, xmm2; fMoveDist
      }
      AIScriptedInterface::UpdateMovementDelta(this, *(float *)&_XMM1);
      AIScriptedInterface::PathEndActions(this);
      AIScriptedInterface::UpdateSpeedScaleValues(this);
      AIScriptedInterface::UpdateGroundSlopeValues(this);
      this->UpdateMoveAnimPlayback(this, &outTranslation);
      __asm
      {
        vmovss  dword ptr [rsp+180h+angles], xmm7
        vmovss  dword ptr [rsp+180h+angles+4], xmm7
        vmovss  dword ptr [rsp+180h+angles+8], xmm7
      }
      if ( Dvar_GetInt_Internal_DebugName(DVARINT_ai_showPaths, "ai_showPaths") > 0 )
      {
        Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_ai_showPaths, "ai_showPaths");
        Nav_DrawPath(this->m_pAI->pNavigator, Int_Internal_DebugName);
        _RCX = this->m_pAI;
        __asm { vmovss  xmm3, cs:__real@40c00000 }
        _RAX = _RCX->ent;
        __asm
        {
          vmovss  xmm1, dword ptr [rax+130h]
          vmovss  dword ptr [rbp+80h+start], xmm1
          vmovss  xmm5, dword ptr [rax+134h]
          vmovss  dword ptr [rbp+80h+start+4], xmm5
          vmovss  xmm0, dword ptr [rax+138h]
          vaddss  xmm6, xmm0, cs:__real@40000000
          vmovss  dword ptr [rbp+80h+start+8], xmm6
          vmulss  xmm0, xmm3, dword ptr [rcx+888h]
          vmovss  xmm2, dword ptr [rcx+88Ch]
          vmovss  xmm4, dword ptr [rcx+890h]
          vaddss  xmm1, xmm0, xmm1
          vmulss  xmm2, xmm3, xmm2
          vaddss  xmm0, xmm2, xmm5
          vmovss  dword ptr [rsp+180h+end], xmm1
          vmulss  xmm1, xmm3, xmm4
          vaddss  xmm2, xmm1, xmm6
          vmovss  dword ptr [rsp+180h+end+8], xmm2
          vmovss  dword ptr [rsp+180h+end+4], xmm0
        }
        G_DebugLine(&start, &end, &colorYellow, 0);
        if ( Dvar_GetInt_Internal_DebugName(DVARINT_ai_showPaths, "ai_showPaths") >= 2 )
          Path_DebugDrawSnappedPositions(this->m_pAI->pNavigator, this->m_pAI->ent);
      }
      goto LABEL_46;
    case AI_ANIM_USE_POS_DELTAS:
      AIScriptedInterface::GetAnimDeltas(this, &outRotation, &outTranslation);
      this->m_pAI->Physics.ePhysicsType = AIPHYS_NORMAL_RELATIVE;
      _RAX = this->m_pAI;
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+180h+outTranslation]
        vmovss  dword ptr [rax+888h], xmm0
        vmovss  xmm1, dword ptr [rsp+180h+outTranslation+4]
        vmovss  dword ptr [rax+88Ch], xmm1
      }
      this->m_pAI->Physics.vWishDelta.v[2] = 0.0;
      goto LABEL_45;
    case AI_ANIM_USE_ANGLE_DELTAS:
      AIScriptedInterface::GetAnimDeltas(this, &outRotation, &outTranslation);
      this->m_pAI->Physics.ePhysicsType = AIPHYS_NORMAL_ABSOLUTE;
      v45 = this->m_pAI;
      *(_QWORD *)v45->Physics.vWishDelta.v = 0i64;
      goto LABEL_28;
    case AI_ANIM_USE_BOTH_DELTAS:
    case AI_ANIM_USE_BOTH_DELTAS_OFF_NAV:
      AIScriptedInterface::GetAnimDeltas(this, &outRotation, &outTranslation);
      this->m_pAI->Physics.ePhysicsType = AIPHYS_NORMAL_RELATIVE;
      goto LABEL_31;
    case AI_ANIM_USE_BOTH_DELTAS_NOCLIP:
      AIScriptedInterface::GetAnimDeltas(this, &outRotation, &v15->Physics.vWishDelta);
      this->m_pAI->Physics.ePhysicsType = AIPHYS_NOCLIP;
      goto LABEL_29;
    case AI_ANIM_USE_BOTH_DELTAS_NOGRAVITY:
      AIScriptedInterface::GetAnimDeltas(this, &outRotation, &v15->Physics.vWishDelta);
      this->m_pAI->Physics.ePhysicsType = AIPHYS_NOGRAVITY_RELATIVE;
      goto LABEL_29;
    case AI_ANIM_USE_BOTH_DELTAS_ZONLY_PHYSICS:
      AIScriptedInterface::GetAnimDeltas(this, &outRotation, &outTranslation);
      this->m_pAI->Physics.ePhysicsType = AIPHYS_ZONLY_PHYSICS_RELATIVE;
LABEL_31:
      _RAX = this->m_pAI;
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+180h+outTranslation]
        vmovss  dword ptr [rax+888h], xmm0
        vmovss  xmm1, dword ptr [rsp+180h+outTranslation+4]
        vmovss  dword ptr [rax+88Ch], xmm1
      }
      v45 = this->m_pAI;
LABEL_28:
      v45->Physics.vWishDelta.v[2] = 0.0;
LABEL_29:
      QuatToAxis(&outRotation, &axis);
      AxisToAngles(&axis, &angles);
      goto LABEL_46;
    case AI_ANIM_POINT_RELATIVE:
      v15->Physics.ePhysicsType = AIPHYS_ZONLY_PHYSICS_RELATIVE;
      v49 = this->m_pAI;
      if ( !v49->ent->tagInfo )
        G_Animscripted_Think(v49->ent);
      v50 = this->__vftable;
      v51 = this->Is3D(this);
      v50->SetDesiredBodyAngles(this, &this->m_pAI->CodeOrient, &this->m_pAI->ent->r.currentAngles, v51);
      v52 = this->m_pAI;
      *(_QWORD *)v52->Physics.vVelocity.v = 0i64;
      v52->Physics.vVelocity.v[2] = 0.0;
      v53 = this->m_pAI;
      *(_QWORD *)v53->Physics.vWishDelta.v = 0i64;
      v53->Physics.vWishDelta.v[2] = 0.0;
      goto LABEL_89;
    case AI_ANIM_PHYSICS_DRIFT:
      if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
        __debugbreak();
      _RAX = this->m_pAI;
      __asm
      {
        vmovss  xmm1, cs:__real@3f800000
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, cs:?level@@3Ulevel_locals_t@@A.frameDuration; level_locals_t level
        vmulss  xmm2, xmm0, cs:__real@399d4952
        vsubss  xmm3, xmm1, xmm2
        vmulss  xmm0, xmm3, dword ptr [rax+888h]
        vmovss  dword ptr [rax+888h], xmm0
        vmulss  xmm1, xmm3, dword ptr [rax+88Ch]
        vmovss  dword ptr [rax+88Ch], xmm1
        vmulss  xmm0, xmm3, dword ptr [rax+890h]
        vmovss  dword ptr [rax+890h], xmm0
      }
      this->m_pAI->Physics.ePhysicsType = AIPHYS_NOGRAVITY_ABSOLUTE;
      __asm
      {
        vmovups xmm0, xmmword ptr cs:?quat_identity@@3Tvec4_t@@B; vec4_t const quat_identity
        vmovdqa xmmword ptr [rsp+180h+outRotation], xmm0
      }
      goto LABEL_45;
    case AI_ANIM_EXECUTION:
      this->UpdateExecution(this);
      this->m_pAI->Physics.ePhysicsType = AIPHYS_NOCLIP;
      v64 = this->__vftable;
      v65 = this->Is3D(this);
      v64->SetDesiredBodyAngles(this, &this->m_pAI->CodeOrient, &this->m_pAI->ent->r.currentAngles, v65);
      v66 = this->m_pAI;
      *(_QWORD *)v66->Physics.vVelocity.v = 0i64;
      v66->Physics.vVelocity.v[2] = 0.0;
      v67 = this->m_pAI;
      *(_QWORD *)v67->Physics.vWishDelta.v = 0i64;
      v67->Physics.vWishDelta.v[2] = 0.0;
      goto LABEL_89;
    default:
      LODWORD(v155) = v15->eAnimMode;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 6066, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "bad eAnimMode value: %d", v155) )
        __debugbreak();
LABEL_45:
      __asm
      {
        vmovss  dword ptr [rsp+180h+angles+8], xmm7
        vmovss  dword ptr [rsp+180h+angles+4], xmm7
        vmovss  dword ptr [rsp+180h+angles], xmm7
      }
LABEL_46:
      _RAX = this->m_pAI;
      __asm
      {
        vmovss  xmm0, dword ptr [rax+888h]
        vmovss  dword ptr [rbp+80h+translationDelta], xmm0
        vmovss  xmm1, dword ptr [rax+88Ch]
        vmovss  dword ptr [rbp+80h+translationDelta+4], xmm1
        vmovss  xmm0, dword ptr [rax+890h]
        vmovups xmm1, xmmword ptr [rsp+180h+outRotation]
        vmovss  dword ptr [rbp+80h+translationDelta+8], xmm0
        vmovdqa xmmword ptr [rbp+80h+rotationDeltaQuat], xmm1
      }
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
              v74 = this->GetCloseEnt(this);
              __asm { vmovss  xmm3, cs:__real@42160000; buffer }
              if ( AICommonInterface::PointNearPoint(this, &v74->r.currentOrigin, &start, *(float *)&_XMM3) )
                G_MotionWarp_Cancel(ent->s.number);
            }
          }
        }
        if ( G_MotionWarp_UpdateHook(ent->s.number, &translationDelta, &rotationDeltaQuat) == MOTIONWARP_IN_PROGRESS )
        {
          eMode = this->m_pAI->ScriptOrient.eMode;
          if ( (unsigned int)eMode > 2 && (_DWORD)eMode != 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 6098, ASSERT_TYPE_ASSERT, "(m_pAI->ScriptOrient.eMode == AI_ORIENT_INVALID || m_pAI->ScriptOrient.eMode == AI_ORIENT_DONT_CHANGE || m_pAI->ScriptOrient.eMode == AI_ORIENT_DONT_CHANGE_RELATIVE || m_pAI->ScriptOrient.eMode == AI_ORIENT_CURRENT_ANGLES)", "%s\n\tScript OrientMode must be set to face_angles during motionwarp (%s)", "m_pAI->ScriptOrient.eMode == AI_ORIENT_INVALID || m_pAI->ScriptOrient.eMode == AI_ORIENT_DONT_CHANGE || m_pAI->ScriptOrient.eMode == AI_ORIENT_DONT_CHANGE_RELATIVE || m_pAI->ScriptOrient.eMode == AI_ORIENT_CURRENT_ANGLES", ai_orient_mode_text[eMode]) )
            __debugbreak();
          __asm { vmovss  xmm0, dword ptr [rbp+80h+translationDelta] }
          _RAX = this->m_pAI;
          __asm
          {
            vmovss  dword ptr [rax+888h], xmm0
            vmovss  xmm1, dword ptr [rbp+80h+translationDelta+4]
            vmovss  dword ptr [rax+88Ch], xmm1
            vmovss  xmm0, dword ptr [rbp+80h+translationDelta+8]
            vmovss  dword ptr [rax+890h], xmm0
          }
          QuatToAxis(&rotationDeltaQuat, &axis);
          AxisToAngles(&axis, &angles);
        }
      }
      v80 = DVARINT_ai_debugAnimDeltas;
      if ( !DVARINT_ai_debugAnimDeltas && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugAnimDeltas") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v80);
      if ( v80->current.integer == ent->s.number )
      {
        __asm
        {
          vmovss  xmm3, dword ptr [rsp+180h+angles+4]
          vmovss  xmm2, dword ptr [rsp+180h+angles]
          vcvtss2sd xmm3, xmm3, xmm3
          vcvtss2sd xmm2, xmm2, xmm2
          vmovq   r9, xmm3
          vmovq   r8, xmm2
        }
        Com_Printf(18, "angleChange = %g %g\n", *(double *)&_XMM2, *(double *)&_XMM3);
      }
      v87 = this->m_pAI;
      v88 = !v87->Physics.bJumping;
      if ( v87->Physics.bJumping || (v88 = !v87->Physics.bTrackMoverUp, v87->Physics.bTrackMoverUp) || (v89 = this->Is3D(this), v88 = !v89, v89) || (v90 = this->m_pAI->ent->tagInfo, v88 = v90 == NULL, v90) && (v88 = !v90->movementChangesOffset, v90->movementChangesOffset) )
      {
        __asm
        {
          vmovss  xmm1, dword ptr [rsp+180h+angles]; pitchDelta
          vucomiss xmm1, xmm7
        }
        if ( !v88 )
          goto LABEL_76;
        __asm
        {
          vmovss  xmm2, dword ptr [rsp+180h+angles+4]; yawDelta
          vucomiss xmm2, xmm7
        }
        if ( !v88 )
          goto LABEL_76;
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+180h+angles+8]
          vucomiss xmm0, xmm7
        }
        if ( !v88 )
        {
LABEL_76:
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
        __asm
        {
          vmovss  xmm2, dword ptr [rsp+180h+angles+4]
          vmovss  xmm1, dword ptr [rsp+180h+angles]
        }
      }
      __asm { vucomiss xmm1, xmm7 }
      if ( !v88 )
        goto LABEL_75;
      __asm { vucomiss xmm2, xmm7 }
      if ( !v88 )
LABEL_75:
        AIScriptedInterface::ForcePitchAndYawDeltas(this, *(const float *)&_XMM1, *(const float *)&_XMM2);
LABEL_77:
      AIScriptedInterface::DecideOrientation(this);
      v93 = DVARBOOL_ai_debuglocomotion;
      if ( !DVARBOOL_ai_debuglocomotion && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debuglocomotion") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v93);
      if ( !v93->current.enabled )
        goto LABEL_88;
      p_vWishDelta = &this->m_pAI->Physics.vWishDelta;
      __asm { vmovaps [rsp+180h+var_40], xmm8 }
      *(double *)&_XMM0 = vectoyaw((const vec2_t *)p_vWishDelta);
      __asm { vmulss  xmm8, xmm0, cs:__real@3b360b61 }
      _RCX = this->m_pAI->ent;
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+130h]
        vmovss  dword ptr [rsp+180h+end], xmm0
        vmovss  xmm1, dword ptr [rcx+134h]
        vmovss  dword ptr [rsp+180h+end+4], xmm1
        vmovss  xmm0, dword ptr [rcx+138h]
        vsubss  xmm2, xmm0, cs:__real@41200000
        vmovss  dword ptr [rsp+180h+end+8], xmm2
      }
      *(double *)&_XMM0 = AIScriptedInterface::GetDefaultSpeed(this);
      _RAX = this->m_pAI;
      __asm
      {
        vmovss  xmm1, dword ptr [rax+838h]
        vmovss  xmm4, dword ptr [rax+83Ch]
        vmovss  xmm5, dword ptr [rax+840h]
        vmovss  xmm6, dword ptr [rax+0B50h]
        vmovss  xmm2, dword ptr [rax+0D4Ch]
        vmovss  xmm7, dword ptr [rax+0B4Ch]
        vmulss  xmm3, xmm1, xmm1
        vmulss  xmm1, xmm4, xmm4
        vaddss  xmm4, xmm3, xmm1
        vmulss  xmm3, xmm5, xmm5
        vaddss  xmm4, xmm4, xmm3
        vsqrtss xmm1, xmm4, xmm4
        vcvtss2sd xmm3, xmm1, xmm1
        vcvtss2sd xmm1, xmm0, xmm0
        vcvtss2sd xmm2, xmm2, xmm2
        vcvtss2sd xmm6, xmm6, xmm6
        vcvtss2sd xmm7, xmm7, xmm7
        vmovq   rdx, xmm1
        vmovsd  [rsp+180h+var_158], xmm6
        vmovq   r9, xmm3
        vmovq   r8, xmm2
        vmovsd  [rsp+180h+fmt], xmm7
      }
      v122 = j_va("speed scr:%.0f tgt:%.0f act:%.0f path_max:%.0f avd:%0.f", _RDX, _R8, _R9, fmt, v156);
      __asm
      {
        vmovss  xmm6, cs:__real@3ecccccd
        vmovaps xmm2, xmm6; scale
      }
      G_Main_AddDebugString(&end, &colorLtGrey, *(float *)&_XMM2, v122);
      __asm { vaddss  xmm2, xmm8, cs:__real@3f000000 }
      _RAX = this->m_pAI;
      __asm
      {
        vmovss  xmm7, cs:__real@c1000000
        vaddss  xmm1, xmm7, dword ptr [rsp+180h+end+8]
        vmovss  dword ptr [rsp+180h+end+8], xmm1
        vxorps  xmm1, xmm1, xmm1
        vxorps  xmm0, xmm0, xmm0
        vmovss  xmm3, xmm0, xmm2
        vroundss xmm4, xmm1, xmm3, 1
        vsubss  xmm0, xmm8, xmm4
        vmulss  xmm1, xmm0, cs:__real@43b40000
        vcvtss2sd xmm2, xmm1, xmm1
        vmovss  xmm1, dword ptr [rax+0D50h]
        vcvtss2sd xmm1, xmm1, xmm1
        vmovq   rdx, xmm1
        vmovq   r8, xmm2
      }
      v140 = j_va("angle req:%.0f act:%.0f", _RDX, _R8);
      __asm { vmovaps xmm2, xmm6; scale }
      G_Main_AddDebugString(&end, &colorLtGrey, *(float *)&_XMM2, v140);
      __asm { vmovaps xmm8, [rsp+180h+var_40] }
      if ( this->m_pAI->script_desiredSpeedEnabled )
      {
        __asm
        {
          vaddss  xmm1, xmm7, dword ptr [rsp+180h+end+8]
          vmovss  dword ptr [rsp+180h+end+8], xmm1
        }
        v144 = j_va("Script speed override");
        v145 = &colorYellow;
      }
      else
      {
        if ( !AIScriptedInterface::IsCombatHot(this) )
          goto LABEL_86;
        __asm
        {
          vaddss  xmm1, xmm7, dword ptr [rsp+180h+end+8]
          vmovss  dword ptr [rsp+180h+end+8], xmm1
        }
        v144 = j_va("combat hot!");
        v145 = &colorRedHeat;
      }
      __asm { vmovaps xmm2, xmm6; scale }
      G_Main_AddDebugString(&end, v145, *(float *)&_XMM2, v144);
LABEL_86:
      if ( this->m_pAI->avoidance_active )
      {
        __asm
        {
          vaddss  xmm1, xmm7, dword ptr [rsp+180h+end+8]
          vmovss  dword ptr [rsp+180h+end+8], xmm1
        }
        v149 = j_va("Avoiding");
        __asm { vmovaps xmm2, xmm6; scale }
        G_Main_AddDebugString(&end, &colorCyan, *(float *)&_XMM2, v149);
      }
LABEL_88:
      AIScriptedInterface::UpdateBodyAngle(this);
      AIScriptedInterface::UpdateLookAngles(this);
LABEL_89:
      __asm { vmovaps xmm6, [rsp+180h+var_20] }
      _R11 = &v169;
      __asm { vmovaps xmm7, xmmword ptr [r11-20h] }
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
  AIActorInterface_vtbl *v4; 
  const gentity_s *v5; 
  AIScriptedInterface *m_pAI; 
  char v16; 
  gentity_s *v22; 
  gentity_s *v23; 
  gclient_s *client; 
  char v34; 
  AIWrapper v37; 
  vec3_t vFinalGoal; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 1519, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  v4 = this->__vftable;
  __asm { vmovaps [rsp+0C8h+var_18], xmm6 }
  v5 = v4->GetCloseEnt(this);
  _RBX = v5;
  if ( v5 )
  {
    AIWrapper::AIWrapper(&v37, v5);
    m_pAI = v37.m_pAI;
    AICommonInterface::GetPathFinalGoal(this, &vFinalGoal);
    __asm
    {
      vmovss  xmm4, dword ptr [rbx+130h]
      vmovss  xmm5, dword ptr [rbx+134h]
      vsubss  xmm1, xmm4, dword ptr [rsp+0C8h+vFinalGoal]
      vsubss  xmm0, xmm5, dword ptr [rsp+0C8h+vFinalGoal+4]
      vmovss  xmm6, cs:__real@44afc800
      vmulss  xmm2, xmm0, xmm0
      vmulss  xmm1, xmm1, xmm1
      vaddss  xmm3, xmm2, xmm1
      vcomiss xmm3, xmm6
    }
    if ( !v16 )
    {
      __asm
      {
        vsubss  xmm1, xmm4, dword ptr [rcx+130h]
        vsubss  xmm0, xmm5, dword ptr [rcx+134h]
        vmulss  xmm2, xmm0, xmm0
        vmulss  xmm1, xmm1, xmm1
        vaddss  xmm2, xmm2, xmm1
        vcomiss xmm2, xmm6
      }
      if ( m_pAI )
      {
        if ( m_pAI->GetCloseEnt(m_pAI) )
        {
          v22 = m_pAI->GetCloseEnt(m_pAI);
          if ( v22 == this->GetEntity(this) )
            m_pAI->ClearCloseEnt(m_pAI);
        }
      }
      this->ClearCloseEnt(this);
    }
  }
  v23 = this->GetCloseEnt(this);
  if ( v23 )
  {
    __asm { vmovaps [rsp+0C8h+var_28], xmm7 }
    if ( level.maxclients == 1 )
    {
      client = level.gentities->client;
      if ( client )
      {
        if ( client->sess.connected == CON_CONNECTED && v23 != level.gentities )
          AIScriptedInterface::UpdatePlayerPush(this, level.gentities);
      }
    }
    if ( !this->GetCloseEnt(this) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 1562, ASSERT_TYPE_ASSERT, "( GetCloseEnt() )", (const char *)&queryFormat, "GetCloseEnt()") )
      __debugbreak();
    _RCX = this->m_pAI->ent;
    __asm
    {
      vmovss  xmm0, dword ptr [rcx+130h]
      vmovss  xmm1, dword ptr [rcx+134h]
      vsubss  xmm6, xmm0, dword ptr [rbx+130h]
      vsubss  xmm7, xmm1, dword ptr [rbx+134h]
    }
    if ( !this->GetPileUpActor(this) && AIScriptedInterface::GetAnimMode(this) == AI_ANIM_MOVE_CODE && AICommonInterface::HasPath(this) )
    {
      AIScriptedInterface::GetPathLookaheadDir(this, &vFinalGoal);
      __asm
      {
        vmulss  xmm1, xmm7, dword ptr [rsp+0C8h+vFinalGoal+4]
        vmulss  xmm0, xmm6, dword ptr [rsp+0C8h+vFinalGoal]
        vaddss  xmm2, xmm1, xmm0
        vxorps  xmm1, xmm1, xmm1
        vcomiss xmm2, xmm1
      }
      if ( !(v16 | v34) )
        this->ClearCloseEnt(this);
    }
    __asm { vmovaps xmm7, [rsp+0C8h+var_28] }
  }
  __asm { vmovaps xmm6, [rsp+0C8h+var_18] }
}

/*
==============
AIScriptedInterface::UpdateContinuousFire
==============
*/
void AIScriptedInterface::UpdateContinuousFire(AIScriptedInterface *this)
{
  gentity_s *v2; 
  const sentient_s *sentient; 
  vec3_t vEyePosOut; 

  v2 = this->GetEntity(this);
  if ( this->m_pAI->bContinuousFire )
  {
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(&v2->s.lerp.eFlags, ACTIVE, 0xAu);
    if ( EntHandle::isDefined(&this->m_pAI->pBeamTargetEnt) )
    {
      _RAX = EntHandle::ent(&this->m_pAI->pBeamTargetEnt);
      sentient = _RAX->sentient;
      if ( sentient )
      {
        Sentient_GetEyePosition(sentient, &vEyePosOut);
      }
      else
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rax+130h]
          vmovss  dword ptr [rsp+68h+vEyePosOut], xmm0
          vmovss  xmm1, dword ptr [rax+134h]
          vmovss  dword ptr [rsp+68h+vEyePosOut+4], xmm1
          vmovss  xmm0, dword ptr [rax+138h]
          vmovss  dword ptr [rsp+68h+vEyePosOut+8], xmm0
        }
      }
      __asm { vmovss  xmm1, cs:__real@3f800000; accuracyMod }
      AIScriptedInterface::Shoot(this, *(float *)&_XMM1, &vEyePosOut, NULL, 1, NOT_LAST_SHOT_IN_CLIP, 1, 0);
    }
    else
    {
      __asm { vmovss  xmm1, cs:__real@41200000; accuracyMod }
      AIScriptedInterface::Shoot(this, *(float *)&_XMM1, NULL, NULL, 1, NOT_LAST_SHOT_IN_CLIP, 1, 0);
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
  pathnode_t *v7; 
  sentient_s *TargetSentient; 
  ai_scripted_t *v10; 
  int dangerReactGoalTime; 
  ai_scripted_t *v12; 
  gentity_s *ent; 
  ai_script_goal_t *p_scriptGoal; 
  aiGoalSources v16; 

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
    v7 = BTGoal->node;
    if ( v7 )
      pathnode_t::GetPos(v7, &BTGoal->pos);
  }
  if ( !this->UseEnemyGoal(this) || IsBTGoalValid )
  {
    v10 = this->m_pAI;
    if ( v10->nodeSelect.doDangerReact && (dangerReactGoalTime = v10->nodeSelect.dangerReactGoalTime, level.time >= dangerReactGoalTime) && level.time <= v10->nodeSelect.dangerReactDuration + dangerReactGoalTime )
    {
      v10->codeGoalSrc = AI_GOAL_SRC_DANGER_REACT;
      this->m_pAI->codeGoal.node = NULL;
      EntHandle::setEnt(&this->m_pAI->codeGoal.hVolume, NULL);
      v12 = this->m_pAI;
      ent = v12->ent;
      v12->codeGoal.pos.v[0] = v12->ent->r.currentOrigin.v[0];
      v12->codeGoal.pos.v[1] = ent->r.currentOrigin.v[1];
      v12->codeGoal.pos.v[2] = ent->r.currentOrigin.v[2];
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_ai_dangerReactGoalRadius, "ai_dangerReactGoalRadius");
      __asm { vmovaps xmm1, xmm0; radius }
      AICommonInterface::SetGoalRadius(&this->m_pAI->codeGoal, *(float *)&_XMM1);
    }
    else
    {
      if ( IsBTGoalValid )
      {
        p_scriptGoal = AIScriptedInterface::GetBTGoal(this);
        v16 = AI_GOAL_SRC_BT;
      }
      else
      {
        if ( !v10->scriptGoal.bValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 7541, ASSERT_TYPE_ASSERT, "( m_pAI->scriptGoal.bValid )", (const char *)&queryFormat, "m_pAI->scriptGoal.bValid") )
          __debugbreak();
        p_scriptGoal = &this->m_pAI->scriptGoal;
        v16 = AI_GOAL_SRC_SCRIPT_GOAL;
      }
      AIScriptedInterface::SetCodeGoalFromScriptGoal(this, p_scriptGoal, v16);
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
    *(double *)&_XMM0 = ((double (__fastcall *)(AIScriptedInterface *))this->GetPathEnemyFightDist)(this);
    __asm { vmovaps xmm1, xmm0; radius }
    AICommonInterface::SetGoalRadius(&this->m_pAI->codeGoal, *(float *)&_XMM1);
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

  HasPath = AICommonInterface::HasPath(this);
  m_pAI = this->m_pAI;
  if ( HasPath )
  {
    *(float *)&_XMM0 = m_pAI->pNavigator->GetPathDistToGoal(m_pAI->pNavigator);
    *(double *)&_XMM0 = GetMaxSpeedForPathLength(*(float *)&_XMM0);
    _RAX = this->m_pAI;
    __asm { vmovss  dword ptr [rax+0B4Ch], xmm0 }
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
  XAnimTree *v29; 
  float v31; 

  _RAX = this->m_pAI;
  if ( _RAX->moveAnimKnob )
  {
    if ( !_RAX->speedScaleMode[0] )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rdx]
        vmovss  xmm2, dword ptr [rdx+4]
        vmovss  xmm3, dword ptr [rdx+8]
        vmulss  xmm1, xmm0, xmm0
        vmulss  xmm0, xmm2, xmm2
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm3, xmm3
        vaddss  xmm2, xmm2, xmm1
        vsqrtss xmm4, xmm2, xmm2
        vcomiss xmm4, cs:__real@3a83126f
        vmovaps [rsp+48h+var_18], xmm6
        vmovss  xmm0, dword ptr [rax+888h]
        vmovss  xmm2, dword ptr [rax+88Ch]
        vmovss  xmm3, dword ptr [rax+890h]
        vmulss  xmm1, xmm0, xmm0
        vmulss  xmm0, xmm2, xmm2
        vaddss  xmm2, xmm1, xmm0
        vmovss  xmm0, dword ptr [rax+0E78h]
        vmulss  xmm1, xmm3, xmm3
        vaddss  xmm2, xmm2, xmm1
        vsqrtss xmm3, xmm2, xmm2
        vdivss  xmm1, xmm0, xmm4
        vmulss  xmm0, xmm3, xmm1; val
        vmovss  xmm2, cs:__real@40000000; max
        vmovss  xmm1, cs:__real@3f000000; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm { vmovaps xmm6, xmm0 }
      v29 = this->GetAnimTree(this);
      __asm { vmovss  [rsp+48h+var_28], xmm6 }
      XAnimSetAnimRate(v29, 0, XANIM_SUBTREE_DEFAULT, this->m_pAI->moveAnimKnob, v31);
      __asm { vmovaps xmm6, [rsp+48h+var_18] }
    }
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
  const XAnimTree *v6; 
  char v7; 
  char v8; 

  m_pAI = this->m_pAI;
  _RDI = translation;
  if ( !m_pAI->speedScaleMode[0] && m_pAI->moveAnimKnob )
  {
    v6 = this->GetAnimTree(this);
    *(double *)&_XMM0 = XAnimGetRate(v6, 0, XANIM_SUBTREE_DEFAULT, this->m_pAI->moveAnimKnob);
    __asm { vcomiss xmm0, cs:__real@3a83126f }
    if ( !(v7 | v8) )
    {
      _RAX = this->m_pAI;
      __asm
      {
        vmovss  xmm1, dword ptr [rax+0E78h]
        vdivss  xmm2, xmm1, xmm0
        vmulss  xmm0, xmm2, dword ptr [rdi]
        vmovss  dword ptr [rdi], xmm0
        vmulss  xmm0, xmm2, dword ptr [rdi+4]
        vmovss  dword ptr [rdi+4], xmm0
        vmulss  xmm0, xmm2, dword ptr [rdi+8]
        vmovss  dword ptr [rdi+8], xmm0
      }
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
  int v8; 
  int v10; 
  bool v11; 
  bool v12; 
  bool v13; 
  int v46; 
  __int64 v47; 
  unsigned __int64 v50; 
  __int64 v70; 
  __int64 v77; 
  unsigned __int64 v79; 
  __int64 v99; 
  _BYTE v106[16]; 

  m_pAI = this->m_pAI;
  moveHistoryIndex = m_pAI->moveHistoryIndex;
  _RSI = 3 * moveHistoryIndex + 621;
  v8 = 10;
  _R12 = (char *)m_pAI + 4 * _RSI;
  if ( (_DWORD)moveHistoryIndex )
    v8 = m_pAI->moveHistoryIndex;
  v10 = 10;
  if ( v8 != 1 )
    v10 = v8 - 1;
  v11 = _R12 < v106;
  v12 = _R12 <= v106;
  if ( _R12 == v106 )
  {
    v13 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1667, ASSERT_TYPE_ASSERT, "( &v0 != &cross )", (const char *)&queryFormat, "&v0 != &cross");
    v11 = 0;
    v12 = !v13;
    if ( v13 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm2, dword ptr [r12+4]
    vmovss  xmm0, dword ptr [r12]
    vxorps  xmm4, xmm0, cs:__xmm@80000000800000008000000080000000
  }
  this->m_pAI->moveHistoryConsistent = 0;
  _R8 = this->m_pAI;
  __asm { vmovss  xmm5, dword ptr [r8+rsi*4] }
  _RDX = 3i64 * v10 + 618;
  __asm
  {
    vmulss  xmm1, xmm2, dword ptr [r8+rdx*4]
    vmulss  xmm0, xmm4, dword ptr [r8+rdx*4+4]
    vaddss  xmm3, xmm1, xmm0
    vmulss  xmm1, xmm4, dword ptr [r8+rsi*4+4]
    vmulss  xmm2, xmm2, xmm5
    vaddss  xmm0, xmm2, xmm1
    vmulss  xmm3, xmm3, xmm0
    vxorps  xmm4, xmm4, xmm4
    vcomiss xmm3, xmm4
  }
  if ( v12 )
  {
    __asm
    {
      vmovaps [rsp+0A8h+var_38], xmm6
      vmovaps [rsp+0A8h+var_48], xmm7
      vmovaps [rsp+0A8h+var_58], xmm8
    }
    _RCX = 3i64 * v8 + 618;
    __asm
    {
      vmovss  xmm6, dword ptr [r8+rcx*4+4]
      vmovss  xmm7, dword ptr [r8+rcx*4]
      vmulss  xmm0, xmm6, dword ptr [r8+rsi*4+4]
      vmovss  xmm8, dword ptr [r8+rcx*4+8]
      vmulss  xmm1, xmm7, xmm5
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm8, dword ptr [r8+rsi*4+8]
      vaddss  xmm3, xmm2, xmm1
      vcomiss xmm3, xmm4
    }
    if ( !v11 )
    {
      __asm
      {
        vmulss  xmm1, xmm7, dword ptr [r8+rdx*4]
        vmulss  xmm0, xmm6, dword ptr [r8+rdx*4+4]
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm8, dword ptr [r8+rdx*4+8]
        vaddss  xmm3, xmm2, xmm1
        vcomiss xmm3, xmm4
        vmovss  dword ptr [r8+rdx*4], xmm5
      }
      *((_DWORD *)&_R8->ent + _RDX + 1) = *((_DWORD *)&_R8->ent + _RSI + 1);
      *((_DWORD *)&_R8->sentient + _RDX) = *((_DWORD *)&_R8->sentient + _RSI);
    }
    __asm
    {
      vmovaps xmm7, [rsp+0A8h+var_48]
      vmovaps xmm6, [rsp+0A8h+var_38]
      vmovaps xmm8, [rsp+0A8h+var_58]
    }
  }
  __asm { vmovss  xmm5, cs:__real@3f800000 }
  v46 = moveHistoryIndex + 1;
  v47 = (int)moveHistoryIndex + 1;
  __asm { vmovaps xmm4, xmm5 }
  if ( v47 < 10 )
  {
    if ( 10i64 - v46 >= 4 )
    {
      _RCX = (__int64)&_R8->moveHistory[v46].y;
      v50 = ((unsigned __int64)(6i64 - v46) >> 2) + 1;
      v47 = v46 + 4 * v50;
      do
      {
        _RCX += 48i64;
        __asm
        {
          vaddss  xmm3, xmm4, xmm5
          vdivss  xmm2, xmm4, xmm3
          vmulss  xmm0, xmm2, dword ptr [rcx-34h]
          vmovss  dword ptr [rcx-34h], xmm0
          vmulss  xmm1, xmm2, dword ptr [rcx-30h]
          vmovss  dword ptr [rcx-30h], xmm1
          vmulss  xmm0, xmm2, dword ptr [rcx-2Ch]
          vmovss  dword ptr [rcx-2Ch], xmm0
          vaddss  xmm4, xmm3, xmm5
          vdivss  xmm2, xmm3, xmm4
          vmulss  xmm0, xmm2, dword ptr [rcx-28h]
          vmovss  dword ptr [rcx-28h], xmm0
          vmulss  xmm1, xmm2, dword ptr [rcx-24h]
          vmovss  dword ptr [rcx-24h], xmm1
          vmulss  xmm0, xmm2, dword ptr [rcx-20h]
          vmovss  dword ptr [rcx-20h], xmm0
          vaddss  xmm3, xmm4, xmm5
          vdivss  xmm1, xmm4, xmm3
          vmulss  xmm0, xmm1, dword ptr [rcx-1Ch]
          vmovss  dword ptr [rcx-1Ch], xmm0
          vmulss  xmm0, xmm1, dword ptr [rcx-18h]
          vmovss  dword ptr [rcx-18h], xmm0
          vmulss  xmm1, xmm1, dword ptr [rcx-14h]
          vmovss  dword ptr [rcx-14h], xmm1
          vaddss  xmm4, xmm3, xmm5
          vdivss  xmm2, xmm3, xmm4
          vmulss  xmm0, xmm2, dword ptr [rcx-10h]
          vmovss  dword ptr [rcx-10h], xmm0
          vmulss  xmm0, xmm2, dword ptr [rcx-0Ch]
          vmovss  dword ptr [rcx-0Ch], xmm0
          vmulss  xmm0, xmm2, dword ptr [rcx-8]
          vmovss  dword ptr [rcx-8], xmm0
        }
        --v50;
      }
      while ( v50 );
    }
    if ( v47 < 10 )
    {
      v70 = 10 - v47;
      _RCX = (__int64)&_R8->moveHistory[v47].y;
      do
      {
        _RCX += 12i64;
        __asm
        {
          vmovaps xmm0, xmm4
          vaddss  xmm4, xmm4, xmm5
          vdivss  xmm2, xmm0, xmm4
          vmulss  xmm0, xmm2, dword ptr [rcx-10h]
          vmovss  dword ptr [rcx-10h], xmm0
          vmulss  xmm1, xmm2, dword ptr [rcx-0Ch]
          vmovss  dword ptr [rcx-0Ch], xmm1
          vmulss  xmm0, xmm2, dword ptr [rcx-8]
          vmovss  dword ptr [rcx-8], xmm0
        }
        --v70;
      }
      while ( v70 );
    }
  }
  v77 = 0i64;
  if ( moveHistoryIndex >= 4 )
  {
    _RAX = &_R8->moveHistory[0].v[1];
    v79 = ((unsigned __int64)(moveHistoryIndex - 4) >> 2) + 1;
    v77 = 4 * v79;
    do
    {
      _RAX += 12;
      __asm
      {
        vaddss  xmm3, xmm4, xmm5
        vdivss  xmm2, xmm4, xmm3
        vmulss  xmm0, xmm2, dword ptr [rax-34h]
        vmovss  dword ptr [rax-34h], xmm0
        vmulss  xmm1, xmm2, dword ptr [rax-30h]
        vmovss  dword ptr [rax-30h], xmm1
        vmulss  xmm0, xmm2, dword ptr [rax-2Ch]
        vmovss  dword ptr [rax-2Ch], xmm0
        vaddss  xmm4, xmm3, xmm5
        vdivss  xmm2, xmm3, xmm4
        vmulss  xmm0, xmm2, dword ptr [rax-28h]
        vmovss  dword ptr [rax-28h], xmm0
        vmulss  xmm1, xmm2, dword ptr [rax-24h]
        vmovss  dword ptr [rax-24h], xmm1
        vmulss  xmm0, xmm2, dword ptr [rax-20h]
        vmovss  dword ptr [rax-20h], xmm0
        vaddss  xmm3, xmm4, xmm5
        vdivss  xmm1, xmm4, xmm3
        vmulss  xmm0, xmm1, dword ptr [rax-1Ch]
        vmovss  dword ptr [rax-1Ch], xmm0
        vmulss  xmm0, xmm1, dword ptr [rax-18h]
        vmovss  dword ptr [rax-18h], xmm0
        vmulss  xmm1, xmm1, dword ptr [rax-14h]
        vmovss  dword ptr [rax-14h], xmm1
        vaddss  xmm4, xmm3, xmm5
        vdivss  xmm2, xmm3, xmm4
        vmulss  xmm0, xmm2, dword ptr [rax-10h]
        vmovss  dword ptr [rax-10h], xmm0
        vmulss  xmm0, xmm2, dword ptr [rax-0Ch]
        vmovss  dword ptr [rax-0Ch], xmm0
        vmulss  xmm0, xmm2, dword ptr [rax-8]
        vmovss  dword ptr [rax-8], xmm0
      }
      --v79;
    }
    while ( v79 );
  }
  if ( v77 < moveHistoryIndex )
  {
    v99 = moveHistoryIndex - v77;
    _RCX = (__int64)&_R8->moveHistory[v77].y;
    do
    {
      _RCX += 12i64;
      __asm
      {
        vmovaps xmm0, xmm4
        vaddss  xmm4, xmm4, xmm5
        vdivss  xmm2, xmm0, xmm4
        vmulss  xmm0, xmm2, dword ptr [rcx-10h]
        vmovss  dword ptr [rcx-10h], xmm0
        vmulss  xmm1, xmm2, dword ptr [rcx-0Ch]
        vmovss  dword ptr [rcx-0Ch], xmm1
        vmulss  xmm0, xmm2, dword ptr [rcx-8]
        vmovss  dword ptr [rcx-8], xmm0
      }
      --v99;
    }
    while ( v99 );
  }
  _R8->moveHistoryIndex = v46 % 10;
}

/*
==============
AIScriptedInterface::UpdateMovementDelta
==============
*/

void __fastcall AIScriptedInterface::UpdateMovementDelta(AIScriptedInterface *this, double fMoveDist)
{
  bool HasPath; 
  int blendWithOldVelocity; 
  nav_posAlongPathResults_t pathResults; 
  char v35; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmm6, xmm1
  }
  bfx::AreaHandle::AreaHandle(&pathResults.m_hArea);
  bfx::LinkHandle::LinkHandle(&pathResults.m_hLink);
  HasPath = Nav_HasPath(this->m_pAI->pNavigator);
  blendWithOldVelocity = this->m_pAI->Physics.bSpace && AICommonInterface::Use3DPathing(this);
  __asm { vmovaps xmm1, xmm6; fMoveDist }
  AIScriptedInterface::GetDesiredMoveDelta(this, *(float *)&_XMM1, this->m_pAI->Physics.groundEntNum, &this->m_pAI->Physics.vWishDelta, &this->m_pAI->Physics.vWishDelta, &pathResults, &this->m_pAI->Physics.vVelocity, blendWithOldVelocity);
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
  _RCX = this->m_pAI;
  __asm
  {
    vmovss  xmm6, dword ptr [rcx+88Ch]
    vmovss  xmm4, dword ptr [rcx+888h]
    vmovss  xmm5, dword ptr [rcx+890h]
    vmulss  xmm1, xmm4, xmm4
    vmulss  xmm0, xmm6, xmm6
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm3, xmm2, xmm2
    vcmpless xmm0, xmm3, cs:__real@80000000
    vmovss  xmm2, cs:__real@3f800000
    vblendvps xmm1, xmm3, xmm2, xmm0
    vdivss  xmm0, xmm2, xmm1
    vmulss  xmm7, xmm4, xmm0
    vmulss  xmm6, xmm6, xmm0
    vmulss  xmm8, xmm5, xmm0
  }
  if ( HasPath )
  {
    _RDX = 3i64 * _RCX->moveHistoryIndex + 621;
    __asm
    {
      vmovss  dword ptr [rcx+rdx*4], xmm7
      vmovss  dword ptr [rcx+rdx*4+4], xmm6
      vmovss  dword ptr [rcx+rdx*4+8], xmm8
    }
    AIScriptedInterface::UpdateMoveHistory(this);
  }
  else
  {
    memset_0(_RCX->moveHistory, 0, sizeof(_RCX->moveHistory));
    _RAX = this->m_pAI;
    __asm
    {
      vmovss  dword ptr [rax+9B4h], xmm7
      vmovss  dword ptr [rax+9B8h], xmm6
      vmovss  dword ptr [rax+9BCh], xmm8
    }
    this->m_pAI->moveHistoryIndex = 1;
  }
  bfx::LinkHandle::~LinkHandle(&pathResults.m_hLink);
  bfx::AreaHandle::~AreaHandle(&pathResults.m_hArea);
  _R11 = &v35;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
AIScriptedInterface::UpdateOriginAndAngles
==============
*/
void AIScriptedInterface::UpdateOriginAndAngles(AIScriptedInterface *this)
{
  gentity_s *ent; 
  BOOL blendOnlyYaw; 
  ai_scripted_t *m_pAI; 
  ai_scripted_t *v30; 
  ai_scripted_t *v31; 
  ai_scripted_t *v32; 
  ai_scripted_t *v33; 
  vec3_t outTargetOrigin; 
  vec4_t out; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 6345, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  ent = this->m_pAI->ent;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 6347, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( this->m_pAI->eAnimMode != AI_ANIM_NOPHYSICS )
  {
    _RSI = ent->tagInfo;
    if ( _RSI )
    {
      if ( _RSI->blendToParent )
      {
        __asm
        {
          vmovaps [rsp+98h+var_38], xmm6
          vmovups xmm6, cs:__xmm@3f800000000000000000000000000000
        }
        Axis43ToQuat(&_RSI->axis, &out);
        __asm
        {
          vsubps  xmm1, xmm6, xmmword ptr [rsp+98h+out]
          vmulps  xmm1, xmm1, cs:__xmm@3f0000003f0000003f0000003f000000
          vaddps  xmm2, xmm1, xmmword ptr [rsp+98h+out]
          vmovups xmmword ptr [rsp+98h+out], xmm2
        }
        QuatToAxis(&out, (tmat33_t<vec3_t> *)&_RSI->axis);
        __asm
        {
          vmovss  xmm0, dword ptr cs:?vec3_origin@@3Tvec3_t@@B; vec3_t const vec3_origin
          vsubss  xmm1, xmm0, dword ptr [rsi+44h]
          vmovss  xmm5, cs:__real@3e800000
          vmovaps xmm6, [rsp+98h+var_38]
          vmulss  xmm1, xmm1, xmm5
          vaddss  xmm0, xmm1, dword ptr [rsi+44h]
          vmovss  dword ptr [rsi+44h], xmm0
          vmovss  xmm0, dword ptr cs:?vec3_origin@@3Tvec3_t@@B+4; vec3_t const vec3_origin
          vsubss  xmm1, xmm0, dword ptr [rsi+48h]
          vmulss  xmm2, xmm1, xmm5
          vaddss  xmm3, xmm2, dword ptr [rsi+48h]
          vmovss  dword ptr [rsi+48h], xmm3
          vmovss  xmm0, dword ptr cs:?vec3_origin@@3Tvec3_t@@B+8; vec3_t const vec3_origin
          vsubss  xmm1, xmm0, dword ptr [rsi+4Ch]
          vmulss  xmm2, xmm1, xmm5
          vaddss  xmm3, xmm2, dword ptr [rsi+4Ch]
          vmovss  dword ptr [rsi+4Ch], xmm3
        }
        blendOnlyYaw = _RSI->blendOnlyYaw;
      }
      else if ( _RSI->movementChangesOffset )
      {
        AIScriptedInterface::CalcTagAxisMoveOffset(this, _RSI);
        blendOnlyYaw = 0;
      }
      else
      {
        blendOnlyYaw = Com_GameMode_SupportsFeature(WEAPON_MELEE_END);
      }
      if ( !G_SetFixedLinkNonPlayer(ent, blendOnlyYaw, 33685521, &outTargetOrigin, 1) && _RSI->collisionPhysics )
      {
        if ( !Com_GameMode_SupportsFeature(WEAPON_EXECUTION) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 6376, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_LINKED_COLLISION ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_LINKED_COLLISION )") )
          __debugbreak();
        if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 6254, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
          __debugbreak();
        if ( !this->m_pAI->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 6255, ASSERT_TYPE_ASSERT, "( m_pAI->ent )", (const char *)&queryFormat, "m_pAI->ent") )
          __debugbreak();
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+98h+outTargetOrigin]
          vmovss  xmm1, dword ptr [rsp+98h+outTargetOrigin+4]
          vsubss  xmm2, xmm0, dword ptr [rax+130h]
          vsubss  xmm0, xmm1, dword ptr [rax+134h]
        }
        this->m_pAI->Physics.ePhysicsType = AIPHYS_ZONLY_PHYSICS_ABSOLUTE;
        _RAX = this->m_pAI;
        __asm
        {
          vmovss  dword ptr [rax+888h], xmm2
          vmovss  dword ptr [rax+88Ch], xmm0
        }
        this->m_pAI->Physics.vWishDelta.v[2] = 0.0;
        this->DoMove(this);
      }
      this->ClearPath(this);
      if ( !_RSI->movementChangesOffset )
      {
        if ( !_RSI->blendToParent )
          AIScriptedInterface::UpdateAnglesAndDelta(this);
        m_pAI = this->m_pAI;
        *(_QWORD *)m_pAI->Physics.vVelocity.v = 0i64;
        m_pAI->Physics.vVelocity.v[2] = 0.0;
        v30 = this->m_pAI;
        *(_QWORD *)v30->Physics.vWishDelta.v = 0i64;
        v30->Physics.vWishDelta.v[2] = 0.0;
      }
      v31 = this->m_pAI;
      v31->Physics.vOrigin.v[0] = ent->r.currentOrigin.v[0];
      v31->Physics.vOrigin.v[1] = ent->r.currentOrigin.v[1];
      v31->Physics.vOrigin.v[2] = ent->r.currentOrigin.v[2];
      AIScriptedInterface::GetGroundTraceOrigin(this, &this->m_pAI->Physics.groundTraceOrigin);
      AIScriptedInterface::Physics_GroundTraceOnly(this);
      ent->s.groundEntityNum = this->m_pAI->Physics.groundEntNum;
      if ( !_RSI->blendToParent && !_RSI->movementChangesOffset )
        G_CalcTagAxis(ent, 1);
      Nav_Teleport(this->m_pAI->pNavigator, &ent->r.currentOrigin);
    }
    else
    {
      AIScriptedInterface::UpdateAnglesAndDelta(this);
      AIScriptedInterface::Physics_SimulateChildren(this);
      this->DoMove(this);
      v32 = this->m_pAI;
      v33 = v32;
      if ( level.time > v32->iTeamMoveWaitTime && level.gentities[v32->Physics.iHitEntnum].sentient && !v32->noDodgeMove )
      {
        AIScriptedInterface::Debug_NotMoving(this, "hit someone - cant dodge");
        AIScriptedInterface::TeamMoveBlocked(this);
        v33 = this->m_pAI;
      }
      this->TouchEnts(this, v33->Physics.iNumTouch, v33->Physics.iTouchEnts);
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
  ai_scripted_t *m_pAI; 
  sentient_s *sentient; 
  sentient_s *v12; 
  bool v13; 
  unsigned int v17; 
  EffectiveStance EffectiveStance; 
  ai_scripted_t *v28; 
  unsigned int Instance; 
  int v42; 
  Bounds bounds; 
  bitarray<224> result; 
  vec3_t vFinalGoal; 

  _RSI = player;
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 1471, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 1472, ASSERT_TYPE_ASSERT, "( m_pAI->ent )", (const char *)&queryFormat, "m_pAI->ent") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 1473, ASSERT_TYPE_ASSERT, "( m_pAI->sentient )", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 1475, ASSERT_TYPE_ASSERT, "( player )", (const char *)&queryFormat, rowName) )
    __debugbreak();
  if ( !_RSI->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 1476, ASSERT_TYPE_ASSERT, "( player->client )", (const char *)&queryFormat, "player->client") )
    __debugbreak();
  if ( !_RSI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 1477, ASSERT_TYPE_ASSERT, "( player->sentient )", (const char *)&queryFormat, "player->sentient") )
    __debugbreak();
  m_pAI = this->m_pAI;
  if ( !m_pAI->bDontAvoidPlayer && (m_pAI->Physics.iTraceMask & 0x2000000) != 0 && m_pAI->eState[m_pAI->stateLevel] != AIS_TURRET )
  {
    sentient = m_pAI->sentient;
    v12 = _RSI->sentient;
    if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.h", 258, ASSERT_TYPE_ASSERT, "(self)", (const char *)&queryFormat, "self") )
      __debugbreak();
    if ( !sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.h", 259, ASSERT_TYPE_ASSERT, "(other)", (const char *)&queryFormat, "other") )
      __debugbreak();
    if ( level.teammode == TEAMMODE_FFA )
    {
      v13 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80);
      if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
        _RAX = Com_TeamsSP_GetAllCombatTeamFlags();
      else
        _RAX = Com_TeamsMP_GetAllTeamFlags();
      __asm
      {
        vmovups xmm0, xmmword ptr [rax]
        vmovsd  xmm1, qword ptr [rax+10h]
      }
      v17 = _RAX->array[6] & 0xFFEFFFFF;
      __asm
      {
        vmovups xmmword ptr [rsp+0F8h+result.array], xmm0
        vmovsd  qword ptr [rsp+0F8h+result.array+10h], xmm1
      }
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
      _RBX = &_RSI->client->ps;
      __asm
      {
        vmovaps [rsp+0F8h+var_28], xmm6
        vmovaps [rsp+0F8h+var_38], xmm7
        vmovss  xmm7, dword ptr [rsi+130h]
        vmovss  xmm6, dword ptr [rbx+3Ch]
        vmovaps [rsp+0F8h+var_48], xmm8
        vmovss  xmm8, dword ptr [rbx+40h]
        vmovaps [rsp+0F8h+var_58], xmm9
        vmovss  xmm9, dword ptr [rsi+134h]
        vmovaps [rsp+0F8h+var_68], xmm10
        vmovss  xmm10, dword ptr [rbx+44h]
        vmovaps [rsp+0F8h+var_78], xmm11
        vmovss  xmm11, dword ptr [rsi+138h]
      }
      EffectiveStance = PM_GetEffectiveStance(_RBX);
      _RAX = BG_Suit_GetBounds(_RBX->suitIndex, EffectiveStance);
      __asm { vmovss  xmm3, cs:__real@3dcccccd }
      v28 = this->m_pAI;
      __asm
      {
        vmulss  xmm0, xmm3, xmm6
        vaddss  xmm1, xmm0, xmm7
        vaddss  xmm2, xmm1, dword ptr [rax]
        vmovss  dword ptr [rsp+0F8h+bounds.midPoint], xmm2
        vmulss  xmm0, xmm3, xmm8
        vaddss  xmm1, xmm0, xmm9
        vaddss  xmm2, xmm1, dword ptr [rax+4]
        vmovss  dword ptr [rsp+0F8h+bounds.midPoint+4], xmm2
        vmulss  xmm0, xmm3, xmm10
        vaddss  xmm1, xmm0, xmm11
        vaddss  xmm2, xmm1, dword ptr [rax+8]
        vmovss  dword ptr [rsp+0F8h+bounds.midPoint+8], xmm2
        vmovss  xmm0, dword ptr [rax+0Ch]
        vmovss  dword ptr [rsp+0F8h+bounds.halfSize], xmm0
        vmovss  xmm1, dword ptr [rax+10h]
        vmovss  dword ptr [rsp+0F8h+bounds.halfSize+4], xmm1
        vmovss  xmm0, dword ptr [rax+14h]
        vmovss  dword ptr [rsp+0F8h+bounds.halfSize+8], xmm0
      }
      Instance = G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_FIRST, v28->ent);
      v42 = PhysicsQuery_LegacyEntityContactCapsule(PHYSICS_WORLD_ID_FIRST, &bounds, Instance, this->m_pAI->ent);
      __asm
      {
        vmovaps xmm11, [rsp+0F8h+var_78]
        vmovaps xmm10, [rsp+0F8h+var_68]
        vmovaps xmm9, [rsp+0F8h+var_58]
        vmovaps xmm8, [rsp+0F8h+var_48]
        vmovaps xmm7, [rsp+0F8h+var_38]
        vmovaps xmm6, [rsp+0F8h+var_28]
      }
      if ( v42 )
      {
        if ( AIScriptedInterface::AtClaimNode(this) )
        {
          if ( _RSI->client->playerMoved )
            return;
          Sentient_StealClaimNode(_RSI->sentient, this->m_pAI->sentient);
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
  actor_s *v11; 
  char v12; 
  bool v13; 
  FeetDirection feetDirection; 
  GHandler *handler; 
  actor_s *v16; 
  const DObj *ServerDObjForEnt; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float pfTorsoPitch; 
  float pfTorsoPitcha; 
  float pfTorsoPitchb; 
  float pfWaistPitch; 
  float pfWaistPitcha; 
  float pfWaistPitchb; 
  float v68; 
  char v75; 

  m_pAI = this->m_pAI;
  __asm { vmovaps [rsp+0F8h+var_38], xmm8 }
  if ( (!m_pAI->prone.animProneLow || !m_pAI->prone.animProneLevel || !m_pAI->prone.animProneHigh) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 3777, ASSERT_TYPE_ASSERT, "( m_pAI->prone.animProneLow && m_pAI->prone.animProneLevel && m_pAI->prone.animProneHigh )", (const char *)&queryFormat, "m_pAI->prone.animProneLow && m_pAI->prone.animProneLevel && m_pAI->prone.animProneHigh") )
    __debugbreak();
  v11 = this->m_pAI;
  v12 = 0;
  v13 = bDoProneCheck == 0;
  if ( bDoProneCheck )
  {
    feetDirection = v11->prone.feetDirection;
    handler = GHandler::getHandler();
    v16 = this->m_pAI;
    _ER10 = 1;
    __asm { vmovss  xmm2, cs:__real@42480000 }
    _RCX = v16->ent;
    __asm
    {
      vmovd   xmm1, r10d
      vmovd   xmm0, ebx
      vmovss  xmm4, dword ptr [rcx+140h]
      vpcmpeqd xmm3, xmm0, xmm1
      vmovss  xmm1, cs:__real@41c80000
      vblendvps xmm0, xmm1, xmm2, xmm3
      vmovss  xmm3, cs:__real@42400000; fHeight
      vmovss  xmm2, cs:__real@41700000; fSize
      vmovss  [rsp+0F8h+var_90], xmm0
      vmovss  dword ptr [rsp+0F8h+fmt], xmm4
    }
    v16->prone.bProneOK = BG_CheckProneValid(v16->ent->s.number, &v16->ent->r.currentOrigin, *(const float *)&_XMM2, *(const float *)&_XMM3, fmt, &v16->ProneInfo.fTorsoPitch, &v16->ProneInfo.fWaistPitch, 1, 1, 1, handler, PHYSICS_WORLD_ID_FIRST, PCT_ACTOR, v68, feetDirection, NULL, NULL);
    _RAX = this->m_pAI;
    v12 = 0;
    v13 = !_RAX->prone.bProneOK;
    if ( _RAX->prone.bProneOK )
    {
      __asm
      {
        vmovss  xmm2, cs:__real@42340000; max
        vmovss  xmm1, cs:__real@c2340000; min
        vmovss  xmm0, dword ptr [rax+0BC0h]; val
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      _RAX = this->m_pAI;
      __asm { vmovss  dword ptr [rax+0BC0h], xmm0 }
    }
    else
    {
      _RAX->ProneInfo.fTorsoPitch = 0.0;
    }
  }
  else
  {
    v11->prone.fProneLastDiff = 360.0;
  }
  _RCX = this->m_pAI;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+0BC4h]
    vsubss  xmm1, xmm0, dword ptr [rcx+0BC0h]
    vmulss  xmm5, xmm1, cs:__real@3b360b61
    vaddss  xmm2, xmm5, cs:__real@3f000000
    vxorps  xmm1, xmm1, xmm1
    vroundss xmm4, xmm1, xmm2, 1
    vsubss  xmm0, xmm5, xmm4
    vmulss  xmm8, xmm0, cs:__real@43b40000
    vucomiss xmm8, dword ptr [rcx+0BD8h]
  }
  if ( !v13 )
  {
    __asm
    {
      vmovaps [rsp+0F8h+var_18], xmm6
      vmovaps [rsp+0F8h+var_28], xmm7
      vmovaps [rsp+0F8h+var_48], xmm9
      vmovss  xmm9, cs:__real@3f800000
      vmovaps [rsp+0F8h+var_58], xmm10
      vxorps  xmm7, xmm7, xmm7
      vcomiss xmm8, xmm7
      vmovaps [rsp+0F8h+var_68], xmm11
      vxorps  xmm10, xmm10, xmm10
    }
    if ( v12 )
    {
      __asm
      {
        vmulss  xmm0, xmm8, dword ptr [rcx+0BD0h]
        vminss  xmm7, xmm0, cs:__real@3f7d70a4
        vsubss  xmm11, xmm9, xmm7
      }
    }
    else
    {
      __asm
      {
        vmulss  xmm0, xmm8, dword ptr [rcx+0BD4h]
        vminss  xmm10, xmm0, cs:__real@3f7d70a4
        vsubss  xmm11, xmm9, xmm10
      }
    }
    __asm { vmovss  xmm6, cs:__real@3d4ccccd }
    ServerDObjForEnt = Com_GetServerDObjForEnt(_RCX->ent);
    __asm
    {
      vmovss  dword ptr [rsp+0F8h+pfWaistPitch], xmm9
      vmovss  dword ptr [rsp+0F8h+pfTorsoPitch], xmm6
      vmovss  dword ptr [rsp+0F8h+fmt], xmm7
    }
    XAnimSetGoalWeight(ServerDObjForEnt, 0, XANIM_SUBTREE_DEFAULT, this->m_pAI->prone.animProneLow, fmta, pfTorsoPitch, pfWaistPitch, (scr_string_t)0, 0, 0, LINEAR, NULL);
    __asm
    {
      vmovss  dword ptr [rsp+0F8h+pfWaistPitch], xmm9
      vmovss  dword ptr [rsp+0F8h+pfTorsoPitch], xmm6
      vmovss  dword ptr [rsp+0F8h+fmt], xmm11
    }
    XAnimSetGoalWeight(ServerDObjForEnt, 0, XANIM_SUBTREE_DEFAULT, this->m_pAI->prone.animProneLevel, fmtb, pfTorsoPitcha, pfWaistPitcha, (scr_string_t)0, 0, 0, LINEAR, NULL);
    __asm
    {
      vmovss  dword ptr [rsp+0F8h+pfWaistPitch], xmm9
      vmovss  dword ptr [rsp+0F8h+pfTorsoPitch], xmm6
      vmovss  dword ptr [rsp+0F8h+fmt], xmm10
    }
    XAnimSetGoalWeight(ServerDObjForEnt, 0, XANIM_SUBTREE_DEFAULT, this->m_pAI->prone.animProneHigh, fmtc, pfTorsoPitchb, pfWaistPitchb, (scr_string_t)0, 0, 0, LINEAR, NULL);
    _RAX = this->m_pAI;
    __asm
    {
      vmovaps xmm11, [rsp+0F8h+var_68]
      vmovaps xmm10, [rsp+0F8h+var_58]
      vmovaps xmm9, [rsp+0F8h+var_48]
      vmovaps xmm7, [rsp+0F8h+var_28]
      vmovaps xmm6, [rsp+0F8h+var_18]
      vmovss  dword ptr [rax+0BD8h], xmm8
    }
  }
  _R11 = &v75;
  __asm { vmovaps xmm8, xmmword ptr [r11-30h] }
}

/*
==============
AIScriptedInterface::UpdateSharpTurn
==============
*/
void AIScriptedInterface::UpdateSharpTurn(AIScriptedInterface *this, vec3_t *wishDelta)
{
  ai_scripted_t *m_pAI; 
  BOOL ShouldDoSharpTurnSpace; 
  BOOL ShouldDoSharpTurn; 
  scrContext_t *v49; 
  float v51; 
  float v52; 
  bool IsDoingReacquire; 
  ai_scripted_t *v54; 
  int v57; 
  AINavigator *pNavigator; 
  AINavigator_vtbl *v60; 
  __int64 v61; 
  __int64 v63; 
  const dvar_t *v67; 
  const dvar_t *v113; 
  ai_scripted_t *v117; 
  ai_scripted_t *v217; 
  ai_scripted_t *v234; 
  char v244; 
  bool v245; 
  bool v259; 
  bool Bool_Internal_DebugName; 
  char v265; 
  const char *v274; 
  const char *v283; 
  AINavigator2D *v312; 
  const bfx::AreaHandle *CurArea; 
  int fmt; 
  float maxDistanceFromCorner; 
  float v350; 
  float v351; 
  float outDistToCorner[2]; 
  float outTurnDegrees; 
  vec3_t v361; 
  bfx::AreaHandle hStartArea; 
  __int64 v363; 
  vec3_t outCorner; 
  vec3_t v365; 
  vec3_t forward; 
  vec3_t nextPathPoint; 
  vec3_t v368; 
  vec3_t angles; 
  vec4_t to; 
  vec4_t quat; 
  vec3_t center; 
  vec3_t startPos; 
  vec2_t vec; 
  vec2_t v376; 
  vec3_t v378; 
  vec4_t result; 
  tmat33_t<vec3_t> axis; 
  bfx::PathSpec pathSpec; 
  vec3_t endPos; 
  bfx::AreaHandle v383; 
  bfx::LinkHandle v384; 
  nav_probe_results_s pOutResults; 
  nav_cornerdata_t ptr[10]; 
  char v387; 
  void *retaddr; 

  _RAX = &retaddr;
  v363 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmmword ptr [rax-88h], xmm11
    vmovaps xmmword ptr [rax-98h], xmm12
    vmovaps xmmword ptr [rax-0A8h], xmm13
    vmovaps xmmword ptr [rax-0B8h], xmm14
    vmovaps xmmword ptr [rax-0C8h], xmm15
  }
  _R15 = wishDelta;
  if ( !this->m_pAI->pNavigator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 7000, ASSERT_TYPE_ASSERT, "( m_pAI->pNavigator )", (const char *)&queryFormat, "m_pAI->pNavigator") )
    __debugbreak();
  __asm
  {
    vmovss  xmm2, dword ptr [r15+4]
    vmovss  xmm0, dword ptr [r15]
    vmovss  xmm3, dword ptr [r15+8]
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm11, xmm2, xmm2
  }
  m_pAI = this->m_pAI;
  if ( m_pAI->bCheckNewPathSharpTurn )
  {
LABEL_11:
    if ( AIScriptedInterface::ShouldEarlySharpTurnTick(this) && AIScriptedInterface::TryEarlyASMTick(this, 0) )
      goto LABEL_64;
    goto LABEL_13;
  }
  __asm
  {
    vmovss  xmm8, cs:__real@bf800000
    vmovss  [rsp+4E8h+outDistToCorner], xmm8
  }
  if ( m_pAI->Physics.bSpace )
  {
    ShouldDoSharpTurnSpace = AIScriptedInterface::ShouldDoSharpTurnSpace(this, &nextPathPoint, outDistToCorner);
    __asm
    {
      vmovsd  xmm0, qword ptr [rsp+4E8h+nextPathPoint]
      vmovsd  qword ptr [rsp+4E8h+outCorner], xmm0
    }
    outCorner.v[2] = nextPathPoint.v[2];
    __asm { vmovss  xmm8, [rsp+4E8h+outDistToCorner] }
  }
  else
  {
    Sys_ProfBeginNamedEvent(0xFFFFFFFF, "ShouldDoSharpTurn");
    __asm
    {
      vxorps  xmm2, xmm2, xmm2
      vcvtsi2ss xmm2, xmm2, eax; postTurnCheckDist
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, eax; preTurnCheckDist
    }
    ShouldDoSharpTurn = AIScriptedInterface::ShouldDoSharpTurn(this, *(float *)&_XMM1, *(float *)&_XMM2, &outCorner, &nextPathPoint);
    Sys_ProfEndNamedEvent();
    if ( !ShouldDoSharpTurn )
      goto LABEL_13;
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+4E8h+nextPathPoint]
      vsubss  xmm1, xmm0, dword ptr [rsp+4E8h+outCorner]
      vmovss  dword ptr [rsp+4E8h+vec], xmm1
      vmovss  xmm2, dword ptr [rsp+4E8h+nextPathPoint+4]
      vsubss  xmm0, xmm2, dword ptr [rsp+4E8h+outCorner+4]
      vmovss  dword ptr [rsp+4E8h+vec+4], xmm0
      vmovss  xmm1, dword ptr [rsp+4E8h+nextPathPoint+8]
      vsubss  xmm2, xmm1, dword ptr [rsp+4E8h+outCorner+8]
      vmovss  [rsp+4E8h+var_3B0], xmm2
    }
    *(double *)&_XMM0 = vectoyaw(&vec);
    __asm
    {
      vsubss  xmm0, xmm0, dword ptr [rcx+140h]
      vmulss  xmm4, xmm0, cs:__real@3b360b61
      vaddss  xmm2, xmm4, cs:__real@3f000000
      vxorps  xmm1, xmm1, xmm1
      vmovss  xmm3, xmm1, xmm2
      vxorps  xmm0, xmm0, xmm0
      vroundss xmm1, xmm0, xmm3, 1
      vsubss  xmm0, xmm4, xmm1
      vmulss  xmm2, xmm0, cs:__real@43b40000
      vandps  xmm2, xmm2, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vcomiss xmm2, cs:__real@42870000
    }
    ShouldDoSharpTurnSpace = 0;
  }
  if ( ShouldDoSharpTurnSpace )
  {
    v49 = ScriptContext_Server();
    __asm { vmovsd  xmm6, qword ptr [rsp+4E8h+outCorner] }
    v51 = outCorner.v[2];
    __asm { vmovsd  xmm7, qword ptr [rsp+4E8h+nextPathPoint] }
    v52 = nextPathPoint.v[2];
    IsDoingReacquire = AIScriptedInterface::IsDoingReacquire(this);
    __asm { vmovsd  qword ptr [rsp+4E8h+var_488], xmm6 }
    v361.v[2] = v51;
    __asm { vmovsd  qword ptr [rsp+4E8h+angles], xmm7 }
    angles.v[2] = v52;
    __asm { vmovss  dword ptr [rsp+4E8h+var_4B8], xmm8 }
    AIScriptedInterface::FireSharpTurnEvent(this, v49, IsDoingReacquire, &angles, 0, &v361, v350);
    goto LABEL_11;
  }
LABEL_13:
  v54 = this->m_pAI;
  if ( v54->iLastASMEarlyTickSuccessTime != level.time )
  {
    v54->pNavigator->GetPrevCornerPassed(v54->pNavigator, &center);
    `eh vector constructor iterator'(ptr, 0x28ui64, 0xAui64, (void (__fastcall *)(void *))nav_cornerdata_t::nav_cornerdata_t, (void (__fastcall *)(void *))nav_cornerdata_t::~nav_cornerdata_t);
    __asm
    {
      vmovss  xmm6, cs:__real@43000000
      vmovaps xmm3, xmm6
    }
    v57 = ((__int64 (__fastcall *)(AINavigator *, nav_cornerdata_t *, __int64))this->m_pAI->pNavigator->GetNextNCorners)(this->m_pAI->pNavigator, ptr, 10i64);
    __asm
    {
      vmovss  xmm0, cs:__real@41f00000
      vmovss  dword ptr [rsp+4E8h+var_4B8], xmm0
      vmovss  [rsp+4E8h+maxDistanceFromCorner], xmm6
    }
    v245 = !AIScriptedInterface::HasUpcomingSharpTurn(this, &this->m_pAI->ent->r.currentOrigin, ptr, v57, 0, maxDistanceFromCorner, v351, 0, &outTurnDegrees);
    pNavigator = this->m_pAI->pNavigator;
    v60 = pNavigator->__vftable;
    if ( v245 )
    {
      if ( ((unsigned __int8 (*)(void))v60->IsNextCornerMultiGoalPathGoal)() )
      {
        this->m_pAI->pNavigator->GetNextCorner(this->m_pAI->pNavigator, &v365);
      }
      else
      {
        bfx::AreaHandle::AreaHandle(&v383);
        bfx::LinkHandle::LinkHandle(&v384);
        LOBYTE(fmt) = 0;
        LOBYTE(v61) = 1;
        __asm { vmovaps xmm1, xmm6 }
        ((void (__fastcall *)(AINavigator *, __int64, __int64, vec3_t *, int))this->m_pAI->pNavigator->GetPosAlongPath)(this->m_pAI->pNavigator, v63, v61, &endPos, fmt);
        if ( AINavigator::IsStraightLineReachable(this->m_pAI->pNavigator, &endPos) )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+4E8h+endPos]
            vmovss  dword ptr [rsp+4E8h+var_450], xmm0
            vmovss  xmm1, dword ptr [rsp+4E8h+endPos+4]
            vmovss  dword ptr [rsp+4E8h+var_450+4], xmm1
            vmovss  xmm0, dword ptr [rsp+4E8h+endPos+8]
            vmovss  dword ptr [rsp+4E8h+var_450+8], xmm0
          }
        }
        else
        {
          this->m_pAI->pNavigator->GetNextCorner(this->m_pAI->pNavigator, &v365);
        }
        bfx::LinkHandle::~LinkHandle(&v384);
        bfx::AreaHandle::~AreaHandle(&v383);
      }
    }
    else
    {
      v60->GetNextCorner(pNavigator, &v365);
    }
    v67 = DVARBOOL_ai_debuglocomotion;
    if ( !DVARBOOL_ai_debuglocomotion && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debuglocomotion") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v67);
    if ( v67->current.enabled )
    {
      __asm { vmovss  xmm1, cs:__real@40c00000; radius }
      G_DebugCircle(&center, *(float *)&_XMM1, &colorRed, 0, 1, 1);
      __asm { vmovss  xmm1, cs:__real@40c00000; radius }
      G_DebugCircle(&v365, *(float *)&_XMM1, &colorGreen, 0, 1, 1);
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+4E8h+var_450]
      vsubss  xmm5, xmm0, dword ptr [rsp+4E8h+center]
      vmovss  xmm1, dword ptr [rsp+4E8h+var_450+4]
      vsubss  xmm6, xmm1, dword ptr [rsp+4E8h+center+4]
      vmovss  xmm0, dword ptr [rsp+4E8h+var_450+8]
      vsubss  xmm4, xmm0, dword ptr [rsp+4E8h+center+8]
      vmulss  xmm2, xmm6, xmm6
      vmulss  xmm1, xmm5, xmm5
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm2, xmm3, xmm0
      vsqrtss xmm12, xmm2, xmm2
      vmovss  xmm15, cs:__real@80000000
      vcmpless xmm0, xmm12, xmm15
      vmovss  xmm10, cs:__real@3f800000
      vblendvps xmm1, xmm12, xmm10, xmm0
      vmovss  [rsp+4E8h+var_498], xmm1
      vdivss  xmm0, xmm10, xmm1
      vmulss  xmm13, xmm5, xmm0
      vmovss  dword ptr [rsp+4E8h+var_3A8], xmm13
      vmulss  xmm6, xmm6, xmm0
      vmovss  dword ptr [rsp+4E8h+var_3A8+4], xmm6
      vmulss  xmm3, xmm4, xmm0
      vmovss  [rsp+4E8h+var_3A0], xmm3
    }
    _RCX = this->m_pAI->ent;
    __asm
    {
      vmovss  xmm0, dword ptr [rcx+130h]
      vsubss  xmm14, xmm0, dword ptr [rsp+4E8h+center]
      vmovss  xmm1, dword ptr [rcx+134h]
      vsubss  xmm5, xmm1, dword ptr [rsp+4E8h+center+4]
      vmovss  xmm0, dword ptr [rcx+138h]
      vsubss  xmm2, xmm0, dword ptr [rsp+4E8h+center+8]
      vmulss  xmm0, xmm5, xmm6
      vmovss  [rsp+4E8h+outDistToCorner], xmm0
      vmulss  xmm0, xmm2, xmm3
      vmovss  [rsp+4E8h+var_490], xmm0
      vxorps  xmm4, xmm13, cs:__xmm@80000000800000008000000080000000
      vmulss  xmm1, xmm4, xmm4
      vmulss  xmm0, xmm6, xmm6
      vaddss  xmm1, xmm1, xmm0
      vsqrtss xmm2, xmm1, xmm1
      vcmpless xmm0, xmm2, xmm15
      vblendvps xmm1, xmm2, xmm10, xmm0
      vmovss  [rsp+4E8h+var_498], xmm1
      vdivss  xmm0, xmm10, xmm1
      vmulss  xmm8, xmm6, xmm0
      vmulss  xmm9, xmm4, xmm0
      vmulss  xmm1, xmm5, xmm9
      vmovss  [rsp+4E8h+var_498], xmm1
      vmulss  xmm0, xmm14, xmm8
      vaddss  xmm6, xmm0, xmm1
    }
    v113 = DVARBOOL_ai_debuglocomotion;
    if ( !DVARBOOL_ai_debuglocomotion && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debuglocomotion") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v113);
    __asm { vxorps  xmm7, xmm7, xmm7 }
    if ( v113->current.enabled )
    {
      __asm
      {
        vmulss  xmm1, xmm8, xmm6
        vmovss  dword ptr [rsp+4E8h+outCorner], xmm1
        vmulss  xmm3, xmm9, xmm6
        vmovss  dword ptr [rsp+4E8h+outCorner+4], xmm3
        vmovss  dword ptr [rsp+4E8h+outCorner+8], xmm7
      }
      v117 = this->m_pAI;
      _RAX = v117->ent;
      __asm
      {
        vmovss  xmm0, dword ptr [rax+130h]
        vsubss  xmm1, xmm0, xmm1
        vmovss  dword ptr [rsp+4E8h+outCorner], xmm1
        vmovss  xmm2, dword ptr [rax+134h]
        vsubss  xmm0, xmm2, xmm3
        vmovss  dword ptr [rsp+4E8h+outCorner+4], xmm0
        vmovss  xmm1, dword ptr [rax+138h]
        vmovss  dword ptr [rsp+4E8h+outCorner+8], xmm1
      }
      G_DebugLine(&v117->ent->r.currentOrigin, &outCorner, &colorRed, 0);
    }
    __asm
    {
      vaddss  xmm0, xmm13, xmm8
      vmulss  xmm1, xmm0, xmm14
      vaddss  xmm2, xmm1, [rsp+4E8h+outDistToCorner]
      vaddss  xmm3, xmm2, [rsp+4E8h+var_490]
      vaddss  xmm0, xmm3, [rsp+4E8h+var_498]
      vdivss  xmm0, xmm0, xmm12; val
      vmovaps xmm2, xmm10; max
      vxorps  xmm1, xmm1, xmm1; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm { vmovaps xmm12, xmm0 }
    _RCX = this->m_pAI;
    __asm { vmovsd  xmm6, qword ptr [rcx+838h] }
    outCorner.v[2] = _RCX->Physics.vVelocity.v[2];
    __asm { vmovsd  qword ptr [rsp+4E8h+outCorner], xmm6 }
    outCorner.v[1] = *((float *)&_RT0 + 1);
    __asm
    {
      vmulss  xmm2, xmm6, xmm6
      vmovss  xmm5, dword ptr [rsp+4E8h+outCorner+4]
      vmulss  xmm1, xmm5, xmm5
      vaddss  xmm3, xmm2, xmm1
      vmovss  xmm4, dword ptr [rsp+4E8h+outCorner+8]
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm1, xmm3, xmm0
      vsqrtss xmm8, xmm1, xmm1
      vcmpless xmm0, xmm8, xmm15
      vblendvps xmm1, xmm8, xmm10, xmm0
      vmovss  [rsp+4E8h+var_498], xmm1
      vdivss  xmm2, xmm10, xmm1
      vmulss  xmm0, xmm6, xmm2
      vmovss  dword ptr [rsp+4E8h+outCorner], xmm0
      vmulss  xmm1, xmm5, xmm2
      vmovss  dword ptr [rsp+4E8h+outCorner+4], xmm1
      vmulss  xmm0, xmm4, xmm2
      vmovss  dword ptr [rsp+4E8h+outCorner+8], xmm0
    }
    if ( _RCX->orientation.faceMotion && !_RCX->orientation.sharpTurnForceUseVelocity )
    {
      AngleVectors(&_RCX->ent->r.currentAngles, &forward, NULL, NULL);
      _RCX = &this->m_pAI->ent->r.currentAngles;
      __asm
      {
        vmovss  xmm14, dword ptr [rcx+4]
        vmovss  [rsp+4E8h+outDistToCorner], xmm14
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+83Ch]
        vmovss  xmm4, dword ptr [rcx+838h]
        vmovss  xmm3, dword ptr [rcx+840h]
        vmulss  xmm1, xmm4, xmm4
        vmulss  xmm0, xmm0, xmm0
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm3, xmm3
        vaddss  xmm2, xmm2, xmm1
        vcomiss xmm2, xmm10
        vmovss  dword ptr [rsp+4E8h+forward], xmm4
        vmovss  xmm0, dword ptr [rcx+83Ch]
        vmovss  dword ptr [rsp+4E8h+forward+4], xmm0
        vmovss  xmm1, dword ptr [rcx+840h]
        vmovss  dword ptr [rsp+4E8h+forward+8], xmm1
      }
      vectoangles(&_RCX->Physics.vVelocity, &angles);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+4E8h+angles+4]
        vmovss  [rsp+4E8h+outDistToCorner], xmm0
      }
      _RCX = &angles;
    }
    AnglesToQuat(_RCX, &quat);
    __asm
    {
      vmovss  xmm6, dword ptr [rsp+4E8h+forward+4]
      vmulss  xmm1, xmm6, xmm6
      vmovss  xmm4, dword ptr [rsp+4E8h+forward]
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm2, xmm1, xmm0
      vmovss  xmm5, dword ptr [rsp+4E8h+forward+8]
      vmulss  xmm1, xmm5, xmm5
      vaddss  xmm0, xmm2, xmm1
      vsqrtss xmm3, xmm0, xmm0
      vcmpless xmm0, xmm3, xmm15
      vblendvps xmm1, xmm3, xmm10, xmm0
      vmovss  [rsp+4E8h+var_498], xmm1
      vdivss  xmm0, xmm10, xmm1
      vmulss  xmm9, xmm4, xmm0
      vmovss  dword ptr [rsp+4E8h+forward], xmm9
      vmulss  xmm13, xmm6, xmm0
      vmovss  dword ptr [rsp+4E8h+forward+4], xmm13
      vmulss  xmm0, xmm5, xmm0
      vmovss  dword ptr [rsp+4E8h+forward+8], xmm0
      vmovss  xmm0, dword ptr [rsp+4E8h+var_450]
      vsubss  xmm4, xmm0, dword ptr [rax+130h]
      vmovss  xmm1, dword ptr [rsp+4E8h+var_450+4]
      vsubss  xmm3, xmm1, dword ptr [rax+134h]
      vmulss  xmm2, xmm3, xmm3
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm1, xmm2, xmm0
      vsqrtss xmm14, xmm1, xmm1
      vcmpless xmm0, xmm14, xmm15
      vblendvps xmm1, xmm14, xmm10, xmm0
      vmovss  [rsp+4E8h+var_498], xmm1
      vdivss  xmm0, xmm10, xmm1
      vmulss  xmm5, xmm4, xmm0
      vmulss  xmm2, xmm3, xmm0
    }
    if ( this->m_pAI->avoidance_active )
    {
      __asm
      {
        vmovss  xmm6, dword ptr [r15+4]
        vmovss  xmm4, dword ptr [r15]
        vmovss  xmm5, dword ptr [r15+8]
        vmulss  xmm1, xmm4, xmm4
        vmulss  xmm0, xmm6, xmm6
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm5, xmm5
        vaddss  xmm2, xmm2, xmm1
        vsqrtss xmm3, xmm2, xmm2
        vcmpless xmm0, xmm3, xmm15
        vblendvps xmm1, xmm3, xmm10, xmm0
        vmovss  [rsp+4E8h+var_498], xmm1
        vdivss  xmm1, xmm10, xmm1
        vmulss  xmm2, xmm4, xmm1
        vmulss  xmm0, xmm6, xmm1
        vmulss  xmm3, xmm5, xmm1
        vmulss  xmm1, xmm13, xmm0
        vmulss  xmm0, xmm9, xmm2
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm3, dword ptr [rsp+4E8h+forward+8]
        vaddss  xmm2, xmm2, xmm1
        vmaxss  xmm0, xmm2, cs:__real@3f5db22d
        vmovaps xmm12, xmm10
      }
    }
    else
    {
      __asm
      {
        vmulss  xmm2, xmm13, xmm2
        vmulss  xmm0, xmm9, xmm5
        vaddss  xmm0, xmm2, xmm0; val
      }
    }
    __asm
    {
      vmovaps xmm2, xmm10; max
      vmovss  xmm1, cs:__real@bf800000; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    *(float *)&_XMM0 = acosf_0(*(float *)&_XMM0);
    __asm { vmovaps xmm9, xmm0 }
    v217 = this->m_pAI;
    if ( v217->orientation.faceMotion )
      goto LABEL_41;
    __asm { vcomiss xmm0, cs:__real@4016cbd1 }
    if ( !v217->orientation.faceMotion )
    {
LABEL_41:
      __asm
      {
        vmulss  xmm0, xmm8, cs:__real@3b94f209; val
        vmovaps xmm2, xmm10; max
        vxorps  xmm1, xmm1, xmm1; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmovaps xmm6, xmm0
        vmulss  xmm0, xmm9, cs:__real@3f05571d; val
        vmovaps xmm2, xmm10; max
        vxorps  xmm1, xmm1, xmm1; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmulss  xmm0, xmm0, xmm6
        vmulss  xmm2, xmm0, dword ptr [rax+0B44h]
        vsubss  xmm3, xmm10, xmm2
        vmulss  xmm1, xmm3, cs:__real@3eb33333
        vmulss  xmm0, xmm2, cs:__real@3f000000
        vaddss  xmm6, xmm1, xmm0
        vmulss  xmm2, xmm2, cs:__real@3e800000
        vmulss  xmm1, xmm3, cs:__real@3e4ccccd
        vaddss  xmm13, xmm2, xmm1
      }
      v234 = this->m_pAI;
      __asm { vcomiss xmm8, xmm7 }
      if ( !(v244 | v245) && !this->m_pAI->avoidance_active )
      {
        __asm
        {
          vsubss  xmm0, xmm8, xmm14
          vdivss  xmm0, xmm0, xmm8; val
          vmovaps xmm2, xmm10; max
          vxorps  xmm1, xmm1, xmm1; min
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm { vmaxss  xmm12, xmm0, xmm12 }
        v234 = this->m_pAI;
      }
      __asm
      {
        vmulss  xmm0, xmm6, xmm12
        vaddss  xmm0, xmm0, xmm13
        vmovss  [rsp+4E8h+var_498], xmm0
        vmulss  xmm1, xmm0, xmm9
        vmovss  xmm15, cs:__real@3c23d70a
        vmaxss  xmm8, xmm1, xmm15
      }
      *(double *)&_XMM0 = ((double (__fastcall *)(AINavigator *))v234->pNavigator->GetPathDistToGoalOrLink)(v234->pNavigator);
      __asm { vmovaps xmm13, xmm0 }
      _RCX = this->m_pAI;
      __asm
      {
        vmovss  xmm3, dword ptr [rcx+83Ch]
        vmovss  xmm1, dword ptr [rcx+838h]
        vmovss  xmm4, dword ptr [rcx+840h]
        vmulss  xmm2, xmm1, xmm1
        vmulss  xmm1, xmm3, xmm3
        vaddss  xmm3, xmm2, xmm1
        vmulss  xmm2, xmm4, xmm4
        vaddss  xmm3, xmm3, xmm2
        vsqrtss xmm1, xmm3, xmm3
        vmulss  xmm4, xmm1, cs:__real@3f333333
        vmaxss  xmm6, xmm4, cs:__real@42200000
        vcomiss xmm0, xmm6
      }
      if ( v244 )
      {
        v259 = _RCX->pNavigator->IsStraightLineToGoalOrLink(_RCX->pNavigator);
        v244 = 0;
        v245 = !v259;
        if ( v259 )
        {
          __asm
          {
            vsubss  xmm0, xmm6, xmm13
            vmulss  xmm1, xmm0, cs:__real@40490fdb
            vdivss  xmm2, xmm1, xmm6
            vmaxss  xmm8, xmm8, xmm2
          }
        }
      }
      __asm
      {
        vmovss  xmm14, cs:__real@40c90fdb
        vcomiss xmm8, xmm14
      }
      if ( v244 | v245 )
      {
        Bool_Internal_DebugName = Dvar_GetBool_Internal_DebugName(DVARBOOL_ai_debuglocomotion, "ai_debuglocomotion");
        v265 = 0;
        if ( Bool_Internal_DebugName )
        {
          __asm { vmulss  xmm3, xmm8, cs:__real@42652ee0 }
          _RCX = this->m_pAI->ent;
          __asm
          {
            vmovss  xmm0, dword ptr [rcx+130h]
            vmovss  dword ptr [rsp+4E8h+outCorner], xmm0
            vmovss  xmm1, dword ptr [rcx+134h]
            vmovss  dword ptr [rsp+4E8h+outCorner+4], xmm1
            vmovss  xmm0, dword ptr [rcx+138h]
            vsubss  xmm2, xmm0, cs:__real@41c00000
            vmovss  dword ptr [rsp+4E8h+outCorner+8], xmm2
            vcvtss2sd xmm1, xmm3, xmm3
            vmovq   rdx, xmm1
          }
          v274 = j_va("maxturn: %.1f", _RDX);
          __asm { vmovss  xmm2, cs:__real@3ecccccd; scale }
          G_Main_AddDebugString(&outCorner, &colorLtGrey, *(float *)&_XMM2, v274);
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+4E8h+outCorner+8]
            vaddss  xmm1, xmm0, cs:__real@c1c00000
            vmovss  dword ptr [rsp+4E8h+outCorner+8], xmm1
            vmovss  xmm2, [rsp+4E8h+var_498]
            vcvtss2sd xmm2, xmm2, xmm2
            vcvtss2sd xmm1, xmm12, xmm12
            vmovq   r8, xmm2
            vmovq   rdx, xmm1
          }
          v283 = j_va("t value: %.1f - percent %.2f", _RDX, _R8);
          __asm { vmovss  xmm2, cs:__real@3ecccccd; scale }
          G_Main_AddDebugString(&outCorner, &colorLtGrey, *(float *)&_XMM2, v283);
        }
        __asm
        {
          vmovss  dword ptr [rsp+4E8h+var_420], xmm7
          vmovss  dword ptr [rsp+4E8h+var_420+8], xmm7
          vmovss  xmm2, dword ptr [r15+4]
          vmovss  xmm0, dword ptr [r15]
          vmovss  xmm3, dword ptr [r15+8]
          vmulss  xmm1, xmm0, xmm0
          vmulss  xmm0, xmm2, xmm2
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm3, xmm3
          vaddss  xmm2, xmm2, xmm1
          vcomiss xmm2, xmm15
        }
        if ( v265 )
          __asm { vmovss  xmm0, [rsp+4E8h+outDistToCorner] }
        else
          *(double *)&_XMM0 = vectoyaw((const vec2_t *)_R15);
        __asm { vmovss  dword ptr [rsp+4E8h+var_420+4], xmm0 }
        AnglesToQuat(&v368, &to);
        __asm
        {
          vdivss  xmm6, xmm9, xmm8
          vmovss  xmm0, dword ptr [rsp+4E8h+quat]
          vmulss  xmm3, xmm0, dword ptr [rsp+4E8h+to]
          vmovss  xmm1, dword ptr [rsp+4E8h+quat+4]
          vmulss  xmm2, xmm1, dword ptr [rsp+4E8h+to+4]
          vaddss  xmm4, xmm3, xmm2
          vmovss  xmm0, dword ptr [rsp+4E8h+quat+8]
          vmulss  xmm1, xmm0, dword ptr [rsp+4E8h+to+8]
          vaddss  xmm3, xmm4, xmm1
          vmovss  xmm2, dword ptr [rsp+4E8h+quat+0Ch]
          vmulss  xmm0, xmm2, dword ptr [rsp+4E8h+to+0Ch]
          vaddss  xmm0, xmm3, xmm0
          vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff; X
        }
        *(float *)&_XMM0 = acosf_0(*(float *)&_XMM0);
        __asm
        {
          vmulss  xmm1, xmm0, cs:__real@42e52ee0
          vandps  xmm1, xmm1, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
          vcomiss xmm1, cs:__real@432a0000
        }
        if ( !(v244 | v245) )
        {
          *(double *)&_XMM0 = vectoyaw(&v376);
          __asm { vmovss  dword ptr [rsp+4E8h+var_420+4], xmm0 }
          AnglesToQuat(&v368, &to);
        }
        __asm { vmovaps xmm2, xmm8; limit }
        QuatSlerpLimited(&quat, &to, *(float *)&_XMM2, &result);
        QuatToAxis(&result, &axis);
        __asm
        {
          vmovss  xmm9, dword ptr [rsp+4E8h+axis]
          vmovss  xmm12, dword ptr [rsp+4E8h+axis+4]
          vmovss  xmm13, dword ptr [rsp+4E8h+axis+8]
        }
        bfx::AreaHandle::AreaHandle(&pOutResults.m_hEndArea);
        pathSpec.m_obstacleMode = BLOCKED_IF_ANY_MATCH;
        *(_QWORD *)&pathSpec.m_obstacleBlockageFlags = -1i64;
        *(_QWORD *)&pathSpec.m_areaPenaltyFlags = -1i64;
        pathSpec.m_usePathSharingPenalty = 0;
        __asm
        {
          vmovss  [rsp+4E8h+pathSpec.m_pathSharingPenalty], xmm7
          vmovss  [rsp+4E8h+pathSpec.m_maxPathSharingPenalty], xmm7
          vmovss  [rsp+4E8h+pathSpec.m_maxSearchDist], xmm7
        }
        bfx::PenaltyTable::PenaltyTable(&pathSpec.m_penaltyTable);
        pathSpec.m_snapMode = SNAP_CLOSEST;
        v312 = this->m_pAI->pNavigator->Get2DNavigator(this->m_pAI->pNavigator);
        if ( !v312 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor.cpp", 7252, ASSERT_TYPE_ASSERT, "(pNav2d)", (const char *)&queryFormat, "pNav2d") )
          __debugbreak();
        CurArea = AINavigator2D::GetCurArea(v312);
        bfx::AreaHandle::AreaHandle(&hStartArea, CurArea);
        this->m_pAI->pNavigator->GetCurPos(this->m_pAI->pNavigator, &startPos);
        _RAX = AINavigator2D::GetPathSpec(v312);
        __asm
        {
          vmovups ymm0, ymmword ptr [rax]
          vmovups ymmword ptr [rsp+4E8h+pathSpec.m_obstacleMode], ymm0
          vmovups ymm1, ymmword ptr [rax+20h]
          vmovups ymmword ptr [rsp+4E8h+pathSpec.m_maxSearchDist], ymm1
          vmovups xmm0, xmmword ptr [rax+40h]
          vmovups xmmword ptr [rsp+1E0h], xmm0
          vmulss  xmm6, xmm6, xmm11
          vmulss  xmm0, xmm9, xmm6
          vaddss  xmm1, xmm0, dword ptr [rsp+4E8h+startPos]
          vmovss  dword ptr [rsp+4E8h+var_398], xmm1
          vmulss  xmm2, xmm12, xmm6
          vaddss  xmm0, xmm2, dword ptr [rsp+4E8h+startPos+4]
          vmovss  dword ptr [rsp+4E8h+var_398+4], xmm0
          vmulss  xmm1, xmm6, xmm13
          vaddss  xmm2, xmm1, dword ptr [rsp+4E8h+startPos+8]
          vmovss  dword ptr [rsp+4E8h+var_398+8], xmm2
        }
        if ( Nav_Trace(&startPos, &hStartArea, &v378, &pathSpec, &pOutResults) )
        {
          __asm
          {
            vmovss  xmm0, [rsp+4E8h+pOutResults.m_DistTraveled]
            vcomiss xmm0, cs:__real@3a83126f
            vcomiss xmm0, xmm10
            vdivss  xmm0, xmm6, xmm0
            vmulss  xmm0, xmm0, xmm8; val
            vmovaps xmm2, xmm14; max
            vmovss  xmm1, cs:__real@3d0efa39; min
          }
          *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
          __asm { vmovaps xmm2, xmm0; limit }
          QuatSlerpLimited(&quat, &to, *(float *)&_XMM2, &result);
          QuatToAxis(&result, &axis);
          __asm
          {
            vmulss  xmm1, xmm11, dword ptr [rsp+4E8h+axis]
            vmovss  dword ptr [r15], xmm1
            vmulss  xmm0, xmm11, dword ptr [rsp+4E8h+axis+4]
            vmovss  dword ptr [r15+4], xmm0
            vmulss  xmm2, xmm11, dword ptr [rsp+4E8h+axis+8]
            vmovss  dword ptr [r15+8], xmm2
          }
        }
        else
        {
          __asm
          {
            vmulss  xmm0, xmm9, xmm11
            vmovss  dword ptr [r15], xmm0
            vmulss  xmm1, xmm12, xmm11
            vmovss  dword ptr [r15+4], xmm1
            vmulss  xmm0, xmm13, xmm11
            vmovss  dword ptr [r15+8], xmm0
          }
        }
        bfx::AreaHandle::~AreaHandle(&hStartArea);
        bfx::AreaHandle::~AreaHandle(&pOutResults.m_hEndArea);
      }
    }
    `eh vector destructor iterator'(ptr, 0x28ui64, 0xAui64, (void (__fastcall *)(void *))nav_cornerdata_t::~nav_cornerdata_t);
  }
LABEL_64:
  _R11 = &v387;
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
__int64 usingCodeGoal(ai_scripted_t *pAI)
{
  _RBX = pAI;
  if ( pAI->codeGoalSrc )
  {
    if ( EntHandle::isDefined(&pAI->scriptGoal.hEnt) )
      return 1i64;
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+258h]
      vucomiss xmm0, dword ptr [rbx+288h]
      vmovss  xmm0, dword ptr [rbx+25Ch]
      vucomiss xmm0, dword ptr [rbx+28Ch]
      vmovss  xmm0, dword ptr [rbx+260h]
      vucomiss xmm0, dword ptr [rbx+290h]
      vmovss  xmm0, dword ptr [rbx+264h]
      vucomiss xmm0, dword ptr [rbx+294h]
    }
  }
  return 0i64;
}

