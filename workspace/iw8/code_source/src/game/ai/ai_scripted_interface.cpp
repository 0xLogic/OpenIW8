/*
==============
AIScriptedInterface::ProcessSharpTurnSpeedScale
==============
*/

bool __fastcall AIScriptedInterface::ProcessSharpTurnSpeedScale(AIScriptedInterface *this, float distanceAlongPath, vec3_t *outNextCorner, float *outTargetSpeed, bool *outUsingCachedValue)
{
  return ?ProcessSharpTurnSpeedScale@AIScriptedInterface@@IEBA_NMPEATvec3_t@@PEAMPEA_N@Z(this, distanceAlongPath, outNextCorner, outTargetSpeed, outUsingCachedValue);
}

/*
==============
AIScriptedInterface::ShouldSlowDueToFacing
==============
*/

bool __fastcall AIScriptedInterface::ShouldSlowDueToFacing(AIScriptedInterface *this, const vec3_t *dirToCorner, const float distanceToCornerSq, float *outTurnDegrees)
{
  return ?ShouldSlowDueToFacing@AIScriptedInterface@@IEBA_NAEBTvec3_t@@MPEAM@Z(this, dirToCorner, distanceToCornerSq, outTurnDegrees);
}

/*
==============
AIScriptedInterface::SetBTGoalPos
==============
*/

void __fastcall AIScriptedInterface::SetBTGoalPos(AIScriptedInterface *this, ai_bt_goal_priority_t priority, const vec3_t *goalPos)
{
  ?SetBTGoalPos@AIScriptedInterface@@QEBAXW4ai_bt_goal_priority_t@@AEBTvec3_t@@@Z(this, priority, goalPos);
}

/*
==============
AIScriptedInterface::AnimStateChanged_ClearAnimParams
==============
*/

void __fastcall AIScriptedInterface::AnimStateChanged_ClearAnimParams(AIScriptedInterface *this)
{
  ?AnimStateChanged_ClearAnimParams@AIScriptedInterface@@QEBAXXZ(this);
}

/*
==============
AIScriptedInterface::Debug_NotMoving_Cached
==============
*/

void __fastcall AIScriptedInterface::Debug_NotMoving_Cached(AIScriptedInterface *this)
{
  ?Debug_NotMoving_Cached@AIScriptedInterface@@IEBAXXZ(this);
}

/*
==============
AIScriptedInterface::SightTracePassed
==============
*/

bool __fastcall AIScriptedInterface::SightTracePassed(AIScriptedInterface *this, const vec3_t *startPos, const vec3_t *endPos, int ignoreEnt1, int ignoreEnt2, bool bIgnoreCharacters, bool bIgnoreFoliage, bool bIgnoreFx)
{
  return ?SightTracePassed@AIScriptedInterface@@QEBA_NAEBTvec3_t@@0HH_N11@Z(this, startPos, endPos, ignoreEnt1, ignoreEnt2, bIgnoreCharacters, bIgnoreFoliage, bIgnoreFx);
}

/*
==============
AIScriptedInterface::Free
==============
*/

void __fastcall AIScriptedInterface::Free(AIScriptedInterface *this)
{
  ?Free@AIScriptedInterface@@UEBAXXZ(this);
}

/*
==============
AIScriptedInterface::GetClosestPlayerOnTeam
==============
*/

gentity_s *__fastcall AIScriptedInterface::GetClosestPlayerOnTeam(AIScriptedInterface *this, float maxDist)
{
  return ?GetClosestPlayerOnTeam@AIScriptedInterface@@IEBAPEAUgentity_s@@M@Z(this, maxDist);
}

/*
==============
AIScriptedInterface::DetermineDesiredExitSpeed
==============
*/

double __fastcall AIScriptedInterface::DetermineDesiredExitSpeed(AIScriptedInterface *this)
{
  double result; 

  *(float *)&result = ?DetermineDesiredExitSpeed@AIScriptedInterface@@QEBAMXZ(this);
  return result;
}

/*
==============
AIScriptedInterface::ShouldShoot
==============
*/

bool __fastcall AIScriptedInterface::ShouldShoot(AIScriptedInterface *this)
{
  return ?ShouldShoot@AIScriptedInterface@@QEBA_NXZ(this);
}

/*
==============
AIScriptedInterface::GetMotionAngles
==============
*/

void __fastcall AIScriptedInterface::GetMotionAngles(AIScriptedInterface *this, vec3_t *angles)
{
  ?GetMotionAngles@AIScriptedInterface@@UEBAXAEATvec3_t@@@Z(this, angles);
}

/*
==============
AIScriptedInterface::IsOnStairs
==============
*/

bool __fastcall AIScriptedInterface::IsOnStairs(AIScriptedInterface *this)
{
  return ?IsOnStairs@AIScriptedInterface@@QEBA_NXZ(this);
}

/*
==============
AIScriptedInterface::BTMayShoot
==============
*/

bool __fastcall AIScriptedInterface::BTMayShoot(AIScriptedInterface *this)
{
  return ?BTMayShoot@AIScriptedInterface@@QEBA_NXZ(this);
}

/*
==============
AIScriptedInterface::GetCoverNode
==============
*/

pathnode_t *__fastcall AIScriptedInterface::GetCoverNode(AIScriptedInterface *this)
{
  return ?GetCoverNode@AIScriptedInterface@@QEBAPEAUpathnode_t@@XZ(this);
}

/*
==============
AIScriptedInterface::GetNextCornerTurnSpeed
==============
*/

bool __fastcall AIScriptedInterface::GetNextCornerTurnSpeed(AIScriptedInterface *this, float *outTargetSpeed)
{
  return ?GetNextCornerTurnSpeed@AIScriptedInterface@@IEBA_NPEAM@Z(this, outTargetSpeed);
}

/*
==============
AIScriptedInterface::GetExecutionVictimStance
==============
*/

ExecutionVictimStance __fastcall AIScriptedInterface::GetExecutionVictimStance(AIScriptedInterface *this)
{
  return ?GetExecutionVictimStance@AIScriptedInterface@@QEBA?AW4ExecutionVictimStance@@XZ(this);
}

/*
==============
AIScriptedInterface::SetReacquire
==============
*/

void __fastcall AIScriptedInterface::SetReacquire(AIScriptedInterface *this, ai_reacquire_state_t reacquireState, __int16 targetEntNum)
{
  ?SetReacquire@AIScriptedInterface@@QEBAXW4ai_reacquire_state_t@@F@Z(this, reacquireState, targetEntNum);
}

/*
==============
AIScriptedInterface::UpdateCover
==============
*/

pathnode_t *__fastcall AIScriptedInterface::UpdateCover(AIScriptedInterface *this, const tacpoint_t **ppOutCoverTacPoint)
{
  return ?UpdateCover@AIScriptedInterface@@QEBAPEAUpathnode_t@@PEAPEBUtacpoint_t@@@Z(this, ppOutCoverTacPoint);
}

/*
==============
AIScriptedInterface::IsNearAnyPlayers
==============
*/

bool __fastcall AIScriptedInterface::IsNearAnyPlayers(AIScriptedInterface *this, float dist)
{
  return ?IsNearAnyPlayers@AIScriptedInterface@@IEBA_NM@Z(this, dist);
}

/*
==============
AIScriptedInterface::SetUnitType
==============
*/

bool __fastcall AIScriptedInterface::SetUnitType(AIScriptedInterface *this, scr_string_t unitTypeString)
{
  return ?SetUnitType@AIScriptedInterface@@QEBA_NW4scr_string_t@@@Z(this, unitTypeString);
}

/*
==============
AIScriptedInterface::ValidateSpawn
==============
*/

bool __fastcall AIScriptedInterface::ValidateSpawn(AIScriptedInterface *this)
{
  return ?ValidateSpawn@AIScriptedInterface@@UEBA_NXZ(this);
}

/*
==============
AIScriptedInterface::IsDoingReacquire
==============
*/

bool __fastcall AIScriptedInterface::IsDoingReacquire(AIScriptedInterface *this)
{
  return ?IsDoingReacquire@AIScriptedInterface@@QEBA_NXZ(this);
}

/*
==============
AIScriptedInterface::SetBTGoalVolume
==============
*/

void __fastcall AIScriptedInterface::SetBTGoalVolume(AIScriptedInterface *this, ai_bt_goal_priority_t priority, gentity_s *pVolume)
{
  ?SetBTGoalVolume@AIScriptedInterface@@QEBAXW4ai_bt_goal_priority_t@@PEAUgentity_s@@@Z(this, priority, pVolume);
}

/*
==============
AIScriptedInterface::PointNearClaimNode
==============
*/

bool __fastcall AIScriptedInterface::PointNearClaimNode(AIScriptedInterface *this, const vec3_t *vPoint)
{
  return ?PointNearClaimNode@AIScriptedInterface@@QEBA_NAEBTvec3_t@@@Z(this, vPoint);
}

/*
==============
AIScriptedInterface::GetDesiredMoveDelta
==============
*/

bool __fastcall AIScriptedInterface::GetDesiredMoveDelta(AIScriptedInterface *this, float fMoveDist, int groundEntNum, const vec3_t *currentMoveDelta, vec3_t *outMoveDelta, nav_posAlongPathResults_t *pathResults, vec3_t *velocity, int blendWithOldVelocity)
{
  return ?GetDesiredMoveDelta@AIScriptedInterface@@QEBA_NMHAEBTvec3_t@@AEAT2@AEAUnav_posAlongPathResults_t@@1H@Z(this, fMoveDist, groundEntNum, currentMoveDelta, outMoveDelta, pathResults, velocity, blendWithOldVelocity);
}

/*
==============
AIScriptedInterface::GetWeaponFlashTagName
==============
*/

TagPair *__fastcall AIScriptedInterface::GetWeaponFlashTagName(AIScriptedInterface *this, TagPair *result)
{
  return ?GetWeaponFlashTagName@AIScriptedInterface@@UEBA?AVTagPair@@XZ(this, result);
}

/*
==============
AIScriptedInterface::GetBaseOverrideArchetype
==============
*/

scr_string_t __fastcall AIScriptedInterface::GetBaseOverrideArchetype(AIScriptedInterface *this)
{
  return ?GetBaseOverrideArchetype@AIScriptedInterface@@QEBA?AW4scr_string_t@@XZ(this);
}

/*
==============
AIScriptedInterface::OnSetNewEnemy
==============
*/

void __fastcall AIScriptedInterface::OnSetNewEnemy(AIScriptedInterface *this, const gentity_s *pPrevEnemy, const gentity_s *pNewEnemy, bool bResetThreatUpdate)
{
  ?OnSetNewEnemy@AIScriptedInterface@@QEBAXPEBUgentity_s@@0_N@Z(this, pPrevEnemy, pNewEnemy, bResetThreatUpdate);
}

/*
==============
AIScriptedInterface::ClampAimAngles
==============
*/

void __fastcall AIScriptedInterface::ClampAimAngles(AIScriptedInterface *this, bool zeroIfNotInLimits, vec3_t *inOutAimAngles)
{
  ?ClampAimAngles@AIScriptedInterface@@QEBAX_NAEATvec3_t@@@Z(this, zeroIfNotInLimits, inOutAimAngles);
}

/*
==============
AIScriptedInterface::Retreat_AttemptMove
==============
*/

bool __fastcall AIScriptedInterface::Retreat_AttemptMove(AIScriptedInterface *this)
{
  return ?Retreat_AttemptMove@AIScriptedInterface@@QEBA_NXZ(this);
}

/*
==============
AIScriptedInterface::GetReacquire
==============
*/

ai_reacquire_state_t __fastcall AIScriptedInterface::GetReacquire(AIScriptedInterface *this)
{
  return ?GetReacquire@AIScriptedInterface@@QEBA?AW4ai_reacquire_state_t@@XZ(this);
}

/*
==============
AIScriptedInterface::ModifySpeedForTightCorner
==============
*/

bool __fastcall AIScriptedInterface::ModifySpeedForTightCorner(AIScriptedInterface *this, const vec3_t *nextCorner, const vec3_t *dirToCorner, const vec3_t *followingCorner, float *outTargetSpeed)
{
  return ?ModifySpeedForTightCorner@AIScriptedInterface@@IEBA_NAEBTvec3_t@@T2@0PEAM@Z(this, nextCorner, dirToCorner, followingCorner, outTargetSpeed);
}

/*
==============
AIScriptedInterface::GetCoverSearchInterval
==============
*/

int __fastcall AIScriptedInterface::GetCoverSearchInterval(AIScriptedInterface *this)
{
  return ?GetCoverSearchInterval@AIScriptedInterface@@QEBAHXZ(this);
}

/*
==============
AIScriptedInterface::UnsupportedScriptCommand
==============
*/

void __fastcall AIScriptedInterface::UnsupportedScriptCommand(AIScriptedInterface *this, scrContext_t *scrContext)
{
  ?UnsupportedScriptCommand@AIScriptedInterface@@AEBAXAEAUscrContext_t@@@Z(this, scrContext);
}

/*
==============
AIScriptedInterface::DissociateSentient
==============
*/

void __fastcall AIScriptedInterface::DissociateSentient(AIScriptedInterface *this, sentient_s *other)
{
  ?DissociateSentient@AIScriptedInterface@@UEBAXPEAUsentient_s@@@Z(this, other);
}

/*
==============
AIScriptedInterface::IsHumanAI
==============
*/

bool __fastcall AIScriptedInterface::IsHumanAI(AIScriptedInterface *this)
{
  return ?IsHumanAI@AIScriptedInterface@@UEBA_NXZ(this);
}

/*
==============
AIScriptedInterface::ClearPath
==============
*/

void __fastcall AIScriptedInterface::ClearPath(AIScriptedInterface *this)
{
  ?ClearPath@AIScriptedInterface@@UEBAXXZ(this);
}

/*
==============
AIScriptedInterface::GetUnitType
==============
*/

bool __fastcall AIScriptedInterface::GetUnitType(scr_string_t unitTypeString, AIUnitType *unitType)
{
  return ?GetUnitType@AIScriptedInterface@@SA_NW4scr_string_t@@PEAW4AIUnitType@@@Z(unitTypeString, unitType);
}

/*
==============
AIScriptedInterface::SetAlertLevel
==============
*/

bool __fastcall AIScriptedInterface::SetAlertLevel(AIScriptedInterface *this, scr_string_t alertLevel)
{
  return ?SetAlertLevel@AIScriptedInterface@@QEBA_NW4scr_string_t@@@Z(this, alertLevel);
}

/*
==============
AIScriptedInterface::OnScrCmd_StairsWithinDistance
==============
*/

void __fastcall AIScriptedInterface::OnScrCmd_StairsWithinDistance(AIScriptedInterface *this, scrContext_t *scrContext)
{
  ?OnScrCmd_StairsWithinDistance@AIScriptedInterface@@UEBAXAEAUscrContext_t@@@Z(this, scrContext);
}

/*
==============
AIScriptedInterface::GetBestStance
==============
*/

ai_stance_e __fastcall AIScriptedInterface::GetBestStance(AIScriptedInterface *this, ai_stance_e desiredStance)
{
  return ?GetBestStance@AIScriptedInterface@@QEBA?AW4ai_stance_e@@W42@@Z(this, desiredStance);
}

/*
==============
AIScriptedInterface::Debug_NotMoving
==============
*/

void __fastcall AIScriptedInterface::Debug_NotMoving(AIScriptedInterface *this, const char *str)
{
  ?Debug_NotMoving@AIScriptedInterface@@IEBAXPEBD@Z(this, str);
}

/*
==============
AIScriptedInterface::IsCurrentEnemyValid
==============
*/

bool __fastcall AIScriptedInterface::IsCurrentEnemyValid(AIScriptedInterface *this)
{
  return ?IsCurrentEnemyValid@AIScriptedInterface@@QEBA_NXZ(this);
}

/*
==============
AIScriptedInterface::GetDefaultSpeed
==============
*/

double __fastcall AIScriptedInterface::GetDefaultSpeed(AIScriptedInterface *this)
{
  double result; 

  *(float *)&result = ?GetDefaultSpeed@AIScriptedInterface@@QEBAMXZ(this);
  return result;
}

/*
==============
AIScriptedInterface::GetWishDelta
==============
*/

void __fastcall AIScriptedInterface::GetWishDelta(AIScriptedInterface *this, vec3_t *vWishDelta)
{
  ?GetWishDelta@AIScriptedInterface@@QEBAXAEATvec3_t@@@Z(this, vWishDelta);
}

/*
==============
AIScriptedInterface::OnScrCmd_SetAimState
==============
*/

void __fastcall AIScriptedInterface::OnScrCmd_SetAimState(AIScriptedInterface *this, scrContext_t *scrContext)
{
  ?OnScrCmd_SetAimState@AIScriptedInterface@@QEBAXAEAUscrContext_t@@@Z(this, scrContext);
}

/*
==============
AIScriptedInterface::OrientMode_FaceCurrent
==============
*/

void __fastcall AIScriptedInterface::OrientMode_FaceCurrent(AIScriptedInterface *this, bool bRelative)
{
  ?OrientMode_FaceCurrent@AIScriptedInterface@@UEBAX_N@Z(this, bRelative);
}

/*
==============
AIScriptedInterface::SetBTGoalEnt
==============
*/

void __fastcall AIScriptedInterface::SetBTGoalEnt(AIScriptedInterface *this, ai_bt_goal_priority_t priority, gentity_s *pGoalEnt)
{
  ?SetBTGoalEnt@AIScriptedInterface@@QEBAXW4ai_bt_goal_priority_t@@PEAUgentity_s@@@Z(this, priority, pGoalEnt);
}

/*
==============
AIScriptedInterface::UpdateGroundSlopeValues
==============
*/

void __fastcall AIScriptedInterface::UpdateGroundSlopeValues(AIScriptedInterface *this)
{
  ?UpdateGroundSlopeValues@AIScriptedInterface@@QEBAXXZ(this);
}

/*
==============
AIScriptedInterface::IsTraversing
==============
*/

bool __fastcall AIScriptedInterface::IsTraversing(AIScriptedInterface *this)
{
  return ?IsTraversing@AIScriptedInterface@@QEBA_NXZ(this);
}

/*
==============
AIScriptedInterface::SetAnimMode
==============
*/

bool __fastcall AIScriptedInterface::SetAnimMode(AIScriptedInterface *this, ai_animmode_t animMode)
{
  return ?SetAnimMode@AIScriptedInterface@@UEBA_NW4ai_animmode_t@@@Z(this, animMode);
}

/*
==============
AIScriptedInterface::GetVelocity
==============
*/

void __fastcall AIScriptedInterface::GetVelocity(AIScriptedInterface *this, vec3_t *outVelocity)
{
  ?GetVelocity@AIScriptedInterface@@UEBAXAEATvec3_t@@@Z(this, outVelocity);
}

/*
==============
AIScriptedInterface::IsInTightQuarters
==============
*/

bool __fastcall AIScriptedInterface::IsInTightQuarters(AIScriptedInterface *this)
{
  return ?IsInTightQuarters@AIScriptedInterface@@QEBA_NXZ(this);
}

/*
==============
AIScriptedInterface::SetScriptGoalEntity
==============
*/

void __fastcall AIScriptedInterface::SetScriptGoalEntity(AIScriptedInterface *this, gentity_s *pGoalEnt)
{
  ?SetScriptGoalEntity@AIScriptedInterface@@QEBAXPEAUgentity_s@@@Z(this, pGoalEnt);
}

/*
==============
AIScriptedInterface::IsDoingAmbush
==============
*/

bool __fastcall AIScriptedInterface::IsDoingAmbush(AIScriptedInterface *this)
{
  return ?IsDoingAmbush@AIScriptedInterface@@QEBA_NXZ(this);
}

/*
==============
AIScriptedInterface::UpdateAimAngleValues
==============
*/

void __fastcall AIScriptedInterface::UpdateAimAngleValues(AIScriptedInterface *this)
{
  ?UpdateAimAngleValues@AIScriptedInterface@@QEBAXXZ(this);
}

/*
==============
AIScriptedInterface::GetCoverTacPoint
==============
*/

const tacpoint_t *__fastcall AIScriptedInterface::GetCoverTacPoint(AIScriptedInterface *this)
{
  return ?GetCoverTacPoint@AIScriptedInterface@@QEBAPEBUtacpoint_t@@XZ(this);
}

/*
==============
AIScriptedInterface::SetAnimMode
==============
*/

bool __fastcall AIScriptedInterface::SetAnimMode(AIScriptedInterface *this, scr_string_t mode)
{
  return ?SetAnimMode@AIScriptedInterface@@UEBA_NW4scr_string_t@@@Z(this, mode);
}

/*
==============
AIScriptedInterface::UpdateCustomNodes
==============
*/

void __fastcall AIScriptedInterface::UpdateCustomNodes(AIScriptedInterface *this)
{
  ?UpdateCustomNodes@AIScriptedInterface@@QEBAXXZ(this);
}

/*
==============
AIScriptedInterface::GetAI
==============
*/

ai_scripted_t *__fastcall AIScriptedInterface::GetAI(AIScriptedInterface *this)
{
  return ?GetAI@AIScriptedInterface@@UEBAPEAUai_scripted_t@@XZ(this);
}

/*
==============
AIScriptedInterface::UpdatePlayerSightAccuracy
==============
*/

void __fastcall AIScriptedInterface::UpdatePlayerSightAccuracy(AIScriptedInterface *this)
{
  ?UpdatePlayerSightAccuracy@AIScriptedInterface@@QEBAXXZ(this);
}

/*
==============
AIScriptedInterface::DrawGunPoseDebug
==============
*/

void __fastcall AIScriptedInterface::DrawGunPoseDebug(AIScriptedInterface *this, const char *trigger, unsigned __int8 option)
{
  ?DrawGunPoseDebug@AIScriptedInterface@@QEBAXPEBDE@Z(this, trigger, option);
}

/*
==============
AIScriptedInterface::GetStairsWithinDist
==============
*/

bool __fastcall AIScriptedInterface::GetStairsWithinDist(AIScriptedInterface *this, float dist)
{
  return ?GetStairsWithinDist@AIScriptedInterface@@UEBA_NM@Z(this, dist);
}

/*
==============
AIScriptedInterface::GetGroundEntNum
==============
*/

unsigned __int16 __fastcall AIScriptedInterface::GetGroundEntNum(AIScriptedInterface *this)
{
  return ?GetGroundEntNum@AIScriptedInterface@@QEBAGXZ(this);
}

/*
==============
AIScriptedInterface::IsMoving
==============
*/

bool __fastcall AIScriptedInterface::IsMoving(AIScriptedInterface *this)
{
  return ?IsMoving@AIScriptedInterface@@UEBA_NXZ(this);
}

/*
==============
AIScriptedInterface::SetScriptGoalVolume
==============
*/

void __fastcall AIScriptedInterface::SetScriptGoalVolume(AIScriptedInterface *this, gentity_s *volume)
{
  ?SetScriptGoalVolume@AIScriptedInterface@@QEBAXPEAUgentity_s@@@Z(this, volume);
}

/*
==============
AIScriptedInterface::SetMayMoveTime
==============
*/

void __fastcall AIScriptedInterface::SetMayMoveTime(AIScriptedInterface *this, int time)
{
  ?SetMayMoveTime@AIScriptedInterface@@UEBAXH@Z(this, time);
}

/*
==============
AIScriptedInterface::IsStanceAllowed
==============
*/

bool __fastcall AIScriptedInterface::IsStanceAllowed(AIScriptedInterface *this, ai_stance_e eStance)
{
  return ?IsStanceAllowed@AIScriptedInterface@@QEBA_NW4ai_stance_e@@@Z(this, eStance);
}

/*
==============
AIScriptedInterface::OnScrCmd_SetAnimset
==============
*/

void __fastcall AIScriptedInterface::OnScrCmd_SetAnimset(AIScriptedInterface *this, scrContext_t *scrContext)
{
  ?OnScrCmd_SetAnimset@AIScriptedInterface@@QEBAXAEAUscrContext_t@@@Z(this, scrContext);
}

/*
==============
AIScriptedInterface::GetAIScriptedIterator
==============
*/

AIIterator *__fastcall AIScriptedInterface::GetAIScriptedIterator()
{
  return ?GetAIScriptedIterator@AIScriptedInterface@@SAPEAVAIIterator@@XZ();
}

/*
==============
AIScriptedInterface::SlowOnPathEnd
==============
*/

bool __fastcall AIScriptedInterface::SlowOnPathEnd(AIScriptedInterface *this, vec3_t *outWishDelta, float inTargetSpeed, float deceleration, float *outTargetSpeed, bool *bOutUseWishDelta)
{
  return ?SlowOnPathEnd@AIScriptedInterface@@IEBA_NAEATvec3_t@@MMPEAMPEA_N@Z(this, outWishDelta, inTargetSpeed, deceleration, outTargetSpeed, bOutUseWishDelta);
}

/*
==============
AIScriptedInterface::MayMove_CheckFriendlyFire
==============
*/

int __fastcall AIScriptedInterface::MayMove_CheckFriendlyFire(AIScriptedInterface *this, const vec3_t *start, const vec3_t *end)
{
  return ?MayMove_CheckFriendlyFire@AIScriptedInterface@@QEBAHAEBTvec3_t@@0@Z(this, start, end);
}

/*
==============
AIScriptedInterface::GetPrevCoverNode
==============
*/

pathnode_t *__fastcall AIScriptedInterface::GetPrevCoverNode(AIScriptedInterface *this)
{
  return ?GetPrevCoverNode@AIScriptedInterface@@QEBAPEAUpathnode_t@@XZ(this);
}

/*
==============
AIScriptedInterface::SetBaseOverrideArchetype
==============
*/

void __fastcall AIScriptedInterface::SetBaseOverrideArchetype(AIScriptedInterface *this, const scr_string_t archetype)
{
  ?SetBaseOverrideArchetype@AIScriptedInterface@@QEBAXW4scr_string_t@@@Z(this, archetype);
}

/*
==============
AIScriptedInterface::OnScrCmd_CalcSuppressSpot
==============
*/

void __fastcall AIScriptedInterface::OnScrCmd_CalcSuppressSpot(AIScriptedInterface *this, scrContext_t *scrContext)
{
  ?OnScrCmd_CalcSuppressSpot@AIScriptedInterface@@QEBAXAEAUscrContext_t@@@Z(this, scrContext);
}

/*
==============
AIScriptedInterface::GetAimAnglesForNoShootPos
==============
*/

void __fastcall AIScriptedInterface::GetAimAnglesForNoShootPos(AIScriptedInterface *this, ActorAimAngleParam *params, const vec3_t *shootFromPos, vec3_t *outAimAngles)
{
  ?GetAimAnglesForNoShootPos@AIScriptedInterface@@QEBAXPEAUActorAimAngleParam@@AEBTvec3_t@@AEAT3@@Z(this, params, shootFromPos, outAimAngles);
}

/*
==============
AIScriptedInterface::InitBlackboard
==============
*/

void __fastcall AIScriptedInterface::InitBlackboard(AIScriptedInterface *this)
{
  ?InitBlackboard@AIScriptedInterface@@UEBAXXZ(this);
}

/*
==============
AIScriptedInterface::SetBTGoalRadius
==============
*/

void __fastcall AIScriptedInterface::SetBTGoalRadius(AIScriptedInterface *this, ai_bt_goal_priority_t priority, float radius)
{
  ?SetBTGoalRadius@AIScriptedInterface@@QEBAXW4ai_bt_goal_priority_t@@M@Z(this, priority, radius);
}

/*
==============
AIScriptedInterface::FixupExtraAnimParams
==============
*/

unsigned int __fastcall AIScriptedInterface::FixupExtraAnimParams(scrContext_t *scrContext, unsigned int firstParamIndex, unsigned int *outGraftAnimIndex, XAnimSubTreeID *outSubTreeID, unsigned int *outAnimIndex, XAnimCurveID *outBlendCurveID)
{
  return ?FixupExtraAnimParams@AIScriptedInterface@@KAIAEAUscrContext_t@@IPEAIPEAW4XAnimSubTreeID@@1PEAW4XAnimCurveID@@@Z(scrContext, firstParamIndex, outGraftAnimIndex, outSubTreeID, outAnimIndex, outBlendCurveID);
}

/*
==============
AIScriptedInterface::GetRandomAlias
==============
*/

scr_anim_t __fastcall AIScriptedInterface::GetRandomAlias(AIScriptedInterface *this, scr_string_t assetName, scr_string_t stateName, scr_string_t aliasName, int *outAnimIndex)
{
  return ?GetRandomAlias@AIScriptedInterface@@UEBA?AUscr_anim_t@@W4scr_string_t@@00PEAH@Z(this, assetName, stateName, aliasName, outAnimIndex);
}

/*
==============
AIScriptedInterface::ClearBTGoal
==============
*/

void __fastcall AIScriptedInterface::ClearBTGoal(AIScriptedInterface *this, ai_bt_goal_priority_t priority)
{
  ?ClearBTGoal@AIScriptedInterface@@QEBAXW4ai_bt_goal_priority_t@@@Z(this, priority);
}

/*
==============
AIScriptedInterface::GetScarinessForDistance
==============
*/

double __fastcall AIScriptedInterface::GetScarinessForDistance(AIScriptedInterface *this, sentient_s *enemy, float fDist)
{
  double result; 

  *(float *)&result = ?GetScarinessForDistance@AIScriptedInterface@@UEBAMPEAUsentient_s@@M@Z(this, enemy, fDist);
  return result;
}

/*
==============
AIScriptedInterface::SetScriptGoalPath
==============
*/

void __fastcall AIScriptedInterface::SetScriptGoalPath(AIScriptedInterface *this, const vec3_t *pathPoints, int numPathPoints)
{
  ?SetScriptGoalPath@AIScriptedInterface@@QEBAXPEBTvec3_t@@H@Z(this, pathPoints, numPathPoints);
}

/*
==============
AIScriptedInterface::SetEquippedWeapon
==============
*/

void __fastcall AIScriptedInterface::SetEquippedWeapon(AIScriptedInterface *this, const Weapon *r_Weapon)
{
  ?SetEquippedWeapon@AIScriptedInterface@@UEBAXAEBUWeapon@@@Z(this, r_Weapon);
}

/*
==============
AIScriptedInterface::SetUnitType
==============
*/

void __fastcall AIScriptedInterface::SetUnitType(AIScriptedInterface *this, AIUnitType unitType)
{
  ?SetUnitType@AIScriptedInterface@@MEBAXW4AIUnitType@@@Z(this, unitType);
}

/*
==============
AIScriptedInterface::GetGoalVolume
==============
*/

EntHandle __fastcall AIScriptedInterface::GetGoalVolume(AIScriptedInterface *this)
{
  return ?GetGoalVolume@AIScriptedInterface@@QEBA?AVEntHandle@@XZ(this);
}

/*
==============
AIScriptedInterface::HasValidUpcomingTurnCached
==============
*/

bool __fastcall AIScriptedInterface::HasValidUpcomingTurnCached(AIScriptedInterface *this)
{
  return ?HasValidUpcomingTurnCached@AIScriptedInterface@@QEBA_NXZ(this);
}

/*
==============
AIScriptedInterface::CanSee
==============
*/

bool __fastcall AIScriptedInterface::CanSee(AIScriptedInterface *this, gentity_s *pOther, int cacheLength)
{
  return ?CanSee@AIScriptedInterface@@UEBA_NPEAUgentity_s@@H@Z(this, pOther, cacheLength);
}

/*
==============
AIScriptedInterface::ClearGoalVolume
==============
*/

void __fastcall AIScriptedInterface::ClearGoalVolume(AIScriptedInterface *this)
{
  ?ClearGoalVolume@AIScriptedInterface@@QEBAXXZ(this);
}

/*
==============
AIScriptedInterface::SetAI
==============
*/

void __fastcall AIScriptedInterface::SetAI(AIScriptedInterface *this, ai_scripted_t *pAI)
{
  ?SetAI@AIScriptedInterface@@IEAAXPEAUai_scripted_t@@@Z(this, pAI);
}

/*
==============
AIScriptedInterface::CanSeePeripheral
==============
*/

bool __fastcall AIScriptedInterface::CanSeePeripheral(AIScriptedInterface *this, gentity_s *pOther, int cacheLength)
{
  return ?CanSeePeripheral@AIScriptedInterface@@UEBA_NPEAUgentity_s@@H@Z(this, pOther, cacheLength);
}

/*
==============
AIScriptedInterface::OrientMode_FaceAngles
==============
*/

void __fastcall AIScriptedInterface::OrientMode_FaceAngles(AIScriptedInterface *this, const vec3_t *angles, bool bSetBodyPitchAndRoll, bool bRelative)
{
  ?OrientMode_FaceAngles@AIScriptedInterface@@UEBAXAEBTvec3_t@@_N1@Z(this, angles, bSetBodyPitchAndRoll, bRelative);
}

/*
==============
AIScriptedInterface::GetPathLookaheadDir
==============
*/

void __fastcall AIScriptedInterface::GetPathLookaheadDir(AIScriptedInterface *this, vec3_t *vLookaheadDir)
{
  ?GetPathLookaheadDir@AIScriptedInterface@@QEBAXAEATvec3_t@@@Z(this, vLookaheadDir);
}

/*
==============
AIScriptedInterface::IsCurrentlyBlockingOtherAI
==============
*/

bool __fastcall AIScriptedInterface::IsCurrentlyBlockingOtherAI(AIScriptedInterface *this)
{
  return ?IsCurrentlyBlockingOtherAI@AIScriptedInterface@@QEBA_NXZ(this);
}

/*
==============
AIScriptedInterface::GetBTGoal
==============
*/

ai_script_goal_t *__fastcall AIScriptedInterface::GetBTGoal(AIScriptedInterface *this)
{
  return ?GetBTGoal@AIScriptedInterface@@QEBAPEAUai_script_goal_t@@XZ(this);
}

/*
==============
AIScriptedInterface::SetCoverTacPoint
==============
*/

void __fastcall AIScriptedInterface::SetCoverTacPoint(AIScriptedInterface *this, const tacpoint_t *pTacPoint)
{
  ?SetCoverTacPoint@AIScriptedInterface@@QEBAXPEBUtacpoint_t@@@Z(this, pTacPoint);
}

/*
==============
AIScriptedInterface::GetPitchToTarget
==============
*/

double __fastcall AIScriptedInterface::GetPitchToTarget(AIScriptedInterface *this, scrContext_t *scrContext)
{
  double result; 

  *(float *)&result = ?GetPitchToTarget@AIScriptedInterface@@QEBAMAEAUscrContext_t@@@Z(this, scrContext);
  return result;
}

/*
==============
AIScriptedInterface::SetScriptGoalPos
==============
*/

bool __fastcall AIScriptedInterface::SetScriptGoalPos(AIScriptedInterface *this, const vec3_t *vGoalPos, pathnode_t *node)
{
  return ?SetScriptGoalPos@AIScriptedInterface@@QEBA_NAEBTvec3_t@@PEAUpathnode_t@@@Z(this, vGoalPos, node);
}

/*
==============
AIScriptedInterface::PickOverrideArchetype
==============
*/

void __fastcall AIScriptedInterface::PickOverrideArchetype(AIScriptedInterface *this, bool forceChangeNow)
{
  ?PickOverrideArchetype@AIScriptedInterface@@IEBAX_N@Z(this, forceChangeNow);
}

/*
==============
AIScriptedInterface::OrientMode_FaceDirection
==============
*/

void __fastcall AIScriptedInterface::OrientMode_FaceDirection(AIScriptedInterface *this, const vec3_t *direction, bool bRelative)
{
  ?OrientMode_FaceDirection@AIScriptedInterface@@UEBAXAEBTvec3_t@@_N@Z(this, direction, bRelative);
}

/*
==============
AIScriptedInterface::HandleNotetrack
==============
*/

void __fastcall AIScriptedInterface::HandleNotetrack(AIScriptedInterface *this, const scr_string_t notetrackName)
{
  ?HandleNotetrack@AIScriptedInterface@@QEBAXW4scr_string_t@@@Z(this, notetrackName);
}

/*
==============
AIScriptedInterface::GetGunUpPose
==============
*/

AIGunAdditiveOptions __fastcall AIScriptedInterface::GetGunUpPose(AIScriptedInterface *this)
{
  return ?GetGunUpPose@AIScriptedInterface@@QEBA?AW4AIGunAdditiveOptions@@XZ(this);
}

/*
==============
AIScriptedInterface::GetCodeOrientmode
==============
*/

ai_orient_mode_t __fastcall AIScriptedInterface::GetCodeOrientmode(AIScriptedInterface *this)
{
  return ?GetCodeOrientmode@AIScriptedInterface@@QEBA?AW4ai_orient_mode_t@@XZ(this);
}

/*
==============
AIScriptedInterface::ResetASMInstanceData
==============
*/

void __fastcall AIScriptedInterface::ResetASMInstanceData(AIScriptedInterface *this)
{
  ?ResetASMInstanceData@AIScriptedInterface@@QEBAXXZ(this);
}

/*
==============
AIScriptedInterface::OrientMode_Sync
==============
*/

void __fastcall AIScriptedInterface::OrientMode_Sync(AIScriptedInterface *this)
{
  ?OrientMode_Sync@AIScriptedInterface@@UEBAXXZ(this);
}

/*
==============
AIScriptedInterface::HasStealth
==============
*/

bool __fastcall AIScriptedInterface::HasStealth(AIScriptedInterface *this)
{
  return ?HasStealth@AIScriptedInterface@@QEBA_NXZ(this);
}

/*
==============
AIScriptedInterface::PathPending
==============
*/

bool __fastcall AIScriptedInterface::PathPending(AIScriptedInterface *this)
{
  return ?PathPending@AIScriptedInterface@@QEBA_NXZ(this);
}

/*
==============
AIScriptedInterface::IsSniper
==============
*/

bool __fastcall AIScriptedInterface::IsSniper(AIScriptedInterface *this, bool bCheckCurrentlyUsingSniper)
{
  return ?IsSniper@AIScriptedInterface@@QEBA_N_N@Z(this, bCheckCurrentlyUsingSniper);
}

/*
==============
AIScriptedInterface::IsCombatHot
==============
*/

bool __fastcall AIScriptedInterface::IsCombatHot(AIScriptedInterface *this)
{
  return ?IsCombatHot@AIScriptedInterface@@QEBA_NXZ(this);
}

/*
==============
AIScriptedInterface::UsingCoverNodes
==============
*/

bool __fastcall AIScriptedInterface::UsingCoverNodes(AIScriptedInterface *this)
{
  return ?UsingCoverNodes@AIScriptedInterface@@QEBA_NXZ(this);
}

/*
==============
AIScriptedInterface::CanShoot
==============
*/

bool __fastcall AIScriptedInterface::CanShoot(AIScriptedInterface *this, const vec3_t *position, const vec3_t *muzzleOffset, bool bUseActualMuzzlePos)
{
  return ?CanShoot@AIScriptedInterface@@QEBA_NAEBTvec3_t@@0_N@Z(this, position, muzzleOffset, bUseActualMuzzlePos);
}

/*
==============
AIScriptedInterface::OnScrCmd_GetAnimset
==============
*/

void __fastcall AIScriptedInterface::OnScrCmd_GetAnimset(AIScriptedInterface *this, scrContext_t *scrContext)
{
  ?OnScrCmd_GetAnimset@AIScriptedInterface@@QEBAXAEAUscrContext_t@@@Z(this, scrContext);
}

/*
==============
AIScriptedInterface::UpdateAnimGameParams
==============
*/

void __fastcall AIScriptedInterface::UpdateAnimGameParams(AIScriptedInterface *this, bool bASMTransitioned)
{
  ?UpdateAnimGameParams@AIScriptedInterface@@UEBAX_N@Z(this, bASMTransitioned);
}

/*
==============
AIScriptedInterface::GetApproxEyePos
==============
*/

void __fastcall AIScriptedInterface::GetApproxEyePos(AIScriptedInterface *this, vec3_t *outEyePos, bool bIgnoreNode)
{
  ?GetApproxEyePos@AIScriptedInterface@@QEBAXAEATvec3_t@@_N@Z(this, outEyePos, bIgnoreNode);
}

/*
==============
AIScriptedInterface::SetBTGoalNode
==============
*/

void __fastcall AIScriptedInterface::SetBTGoalNode(AIScriptedInterface *this, ai_bt_goal_priority_t priority, pathnode_t *pNode)
{
  ?SetBTGoalNode@AIScriptedInterface@@QEBAXW4ai_bt_goal_priority_t@@PEAUpathnode_t@@@Z(this, priority, pNode);
}

/*
==============
AIScriptedInterface::IsBTGoalValid
==============
*/

bool __fastcall AIScriptedInterface::IsBTGoalValid(AIScriptedInterface *this)
{
  return ?IsBTGoalValid@AIScriptedInterface@@QEBA_NXZ(this);
}

/*
==============
AIScriptedInterface::SetOverrideArchetype
==============
*/

void __fastcall AIScriptedInterface::SetOverrideArchetype(AIScriptedInterface *this, const ArcOverridePriority priority, const scr_string_t archetype, bool forceChangeNow)
{
  ?SetOverrideArchetype@AIScriptedInterface@@QEBAXW4ArcOverridePriority@@W4scr_string_t@@_N@Z(this, priority, archetype, forceChangeNow);
}

/*
==============
AIScriptedInterface::FindOverrideArchetype
==============
*/

scr_string_t __fastcall AIScriptedInterface::FindOverrideArchetype(AIScriptedInterface *this, const ArcOverridePriority priority)
{
  return ?FindOverrideArchetype@AIScriptedInterface@@QEBA?AW4scr_string_t@@W4ArcOverridePriority@@@Z(this, priority);
}

/*
==============
AIScriptedInterface::GetTargetSpeed
==============
*/

double __fastcall AIScriptedInterface::GetTargetSpeed(AIScriptedInterface *this)
{
  double result; 

  *(float *)&result = ?GetTargetSpeed@AIScriptedInterface@@QEBAMXZ(this);
  return result;
}

/*
==============
AIScriptedInterface::IsGunBlockedByWall
==============
*/

bool __fastcall AIScriptedInterface::IsGunBlockedByWall(AIScriptedInterface *this, float bufferDist)
{
  return ?IsGunBlockedByWall@AIScriptedInterface@@QEBA_NM@Z(this, bufferDist);
}

/*
==============
AIScriptedInterface::CanBoundingOverwatchMove
==============
*/

bool __fastcall AIScriptedInterface::CanBoundingOverwatchMove(AIScriptedInterface *this)
{
  return ?CanBoundingOverwatchMove@AIScriptedInterface@@QEBA_NXZ(this);
}

/*
==============
AIScriptedInterface::SetFacialIndexFromASM
==============
*/

void __fastcall AIScriptedInterface::SetFacialIndexFromASM(AIScriptedInterface *this, ASM_Instance *pInst, const Animset *pAnimset, int stateIndex, int entryIndex)
{
  ?SetFacialIndexFromASM@AIScriptedInterface@@QEBAXPEAUASM_Instance@@PEBUAnimset@@HH@Z(this, pInst, pAnimset, stateIndex, entryIndex);
}

/*
==============
AIScriptedInterface::SetCodeGoalFromScriptGoal
==============
*/

void __fastcall AIScriptedInterface::SetCodeGoalFromScriptGoal(AIScriptedInterface *this, ai_script_goal_t *pScriptGoal, aiGoalSources src)
{
  ?SetCodeGoalFromScriptGoal@AIScriptedInterface@@QEBAXPEAUai_script_goal_t@@W4aiGoalSources@@@Z(this, pScriptGoal, src);
}

/*
==============
AIScriptedInterface::UpdateStance
==============
*/

void __fastcall AIScriptedInterface::UpdateStance(AIScriptedInterface *this)
{
  ?UpdateStance@AIScriptedInterface@@QEBAXXZ(this);
}

/*
==============
AIScriptedInterface::IsApproachingTightQuarters
==============
*/

bool __fastcall AIScriptedInterface::IsApproachingTightQuarters(AIScriptedInterface *this)
{
  return ?IsApproachingTightQuarters@AIScriptedInterface@@QEBA_NXZ(this);
}

/*
==============
AIScriptedInterface::ShouldDoSharpTurn
==============
*/

bool __fastcall AIScriptedInterface::ShouldDoSharpTurn(AIScriptedInterface *this, float preTurnCheckDist, float postTurnCheckDist, vec3_t *outCorner, vec3_t *outNextPathPoint)
{
  return ?ShouldDoSharpTurn@AIScriptedInterface@@IEBA_NMMAEATvec3_t@@0@Z(this, preTurnCheckDist, postTurnCheckDist, outCorner, outNextPathPoint);
}

/*
==============
AIScriptedInterface::Blocking_AttemptMove
==============
*/

bool __fastcall AIScriptedInterface::Blocking_AttemptMove(AIScriptedInterface *this)
{
  return ?Blocking_AttemptMove@AIScriptedInterface@@QEBA_NXZ(this);
}

/*
==============
AIScriptedInterface::InitSpawn
==============
*/

bool __fastcall AIScriptedInterface::InitSpawn(AIScriptedInterface *this, bool bEnemyInfo, bool bDontShareEnemyInfo)
{
  return ?InitSpawn@AIScriptedInterface@@QEBA_N_N0@Z(this, bEnemyInfo, bDontShareEnemyInfo);
}

/*
==============
AIScriptedInterface::ClearKeepClaimedNode
==============
*/

void __fastcall AIScriptedInterface::ClearKeepClaimedNode(AIScriptedInterface *this)
{
  ?ClearKeepClaimedNode@AIScriptedInterface@@UEBAXXZ(this);
}

/*
==============
AIScriptedInterface::AIScriptedInterface
==============
*/

void __fastcall AIScriptedInterface::AIScriptedInterface(AIScriptedInterface *this)
{
  ??0AIScriptedInterface@@QEAA@XZ(this);
}

/*
==============
AIScriptedInterface::GetUnitType
==============
*/

scr_string_t __fastcall AIScriptedInterface::GetUnitType(AIScriptedInterface *this)
{
  return ?GetUnitType@AIScriptedInterface@@QEBA?AW4scr_string_t@@XZ(this);
}

/*
==============
AIScriptedInterface::UpdateWhizbyAnim
==============
*/

void __fastcall AIScriptedInterface::UpdateWhizbyAnim(AIScriptedInterface *this)
{
  ?UpdateWhizbyAnim@AIScriptedInterface@@QEBAXXZ(this);
}

/*
==============
AIScriptedInterface::OrientMode
==============
*/

void __fastcall AIScriptedInterface::OrientMode(AIScriptedInterface *this, ai_orient_mode_t orientMode)
{
  ?OrientMode@AIScriptedInterface@@UEBAXW4ai_orient_mode_t@@@Z(this, orientMode);
}

/*
==============
AIScriptedInterface::UpdateLeanAngles
==============
*/

void __fastcall AIScriptedInterface::UpdateLeanAngles(AIScriptedInterface *this)
{
  ?UpdateLeanAngles@AIScriptedInterface@@QEBAXXZ(this);
}

/*
==============
AIScriptedInterface::GetEquippedWeapon
==============
*/

const Weapon *__fastcall AIScriptedInterface::GetEquippedWeapon(AIScriptedInterface *this)
{
  return ?GetEquippedWeapon@AIScriptedInterface@@UEBAAEBUWeapon@@XZ(this);
}

/*
==============
AIScriptedInterface::MayMoveFromPointToPoint
==============
*/

bool __fastcall AIScriptedInterface::MayMoveFromPointToPoint(AIScriptedInterface *this, const vec3_t *vStart, const bfx::AreaHandle *hStartArea, const vec3_t *vEnd, int ignoreActors, int checkDrop)
{
  return ?MayMoveFromPointToPoint@AIScriptedInterface@@QEBA_NAEBTvec3_t@@AEBVAreaHandle@bfx@@0HH@Z(this, vStart, hStartArea, vEnd, ignoreActors, checkDrop);
}

/*
==============
AIScriptedInterface::GetDesiredAimAngles
==============
*/

void __fastcall AIScriptedInterface::GetDesiredAimAngles(AIScriptedInterface *this, ActorAimAngleParam *params, vec3_t *outAimAngles)
{
  ?GetDesiredAimAngles@AIScriptedInterface@@QEBAXPEAUActorAimAngleParam@@AEATvec3_t@@@Z(this, params, outAimAngles);
}

/*
==============
AIScriptedInterface::IsCodeMoveRequested
==============
*/

bool __fastcall AIScriptedInterface::IsCodeMoveRequested(AIScriptedInterface *this)
{
  return ?IsCodeMoveRequested@AIScriptedInterface@@UEBA_NXZ(this);
}

/*
==============
AIScriptedInterface::SetGunAdditiveAnim
==============
*/

void __fastcall AIScriptedInterface::SetGunAdditiveAnim(AIScriptedInterface *this, AIGunAdditiveOptions desiredGunAdditive)
{
  ?SetGunAdditiveAnim@AIScriptedInterface@@QEBAXW4AIGunAdditiveOptions@@@Z(this, desiredGunAdditive);
}

/*
==============
AIScriptedInterface::GetScriptGoal
==============
*/

ai_goal_t *__fastcall AIScriptedInterface::GetScriptGoal(AIScriptedInterface *this)
{
  return ?GetScriptGoal@AIScriptedInterface@@UEBAPEAUai_goal_t@@XZ(this);
}

/*
==============
AIScriptedInterface::GetApproxAdjustedGunParams
==============
*/

void __fastcall AIScriptedInterface::GetApproxAdjustedGunParams(AIScriptedInterface *this, ApproxGunParams *pOutGunParams)
{
  ?GetApproxAdjustedGunParams@AIScriptedInterface@@QEBAXPEAUApproxGunParams@@@Z(this, pOutGunParams);
}

/*
==============
AIScriptedInterface::GetAlertLevel
==============
*/

scr_string_t __fastcall AIScriptedInterface::GetAlertLevel(AIScriptedInterface *this)
{
  return ?GetAlertLevel@AIScriptedInterface@@QEBA?AW4scr_string_t@@XZ(this);
}

/*
==============
AIScriptedInterface::MayMove_TraceCheck
==============
*/

int __fastcall AIScriptedInterface::MayMove_TraceCheck(AIScriptedInterface *this, const vec3_t *vStart, const vec3_t *vEnd, int allowStartSolid, int checkDrop, int ignoreActors)
{
  return ?MayMove_TraceCheck@AIScriptedInterface@@QEBAHAEBTvec3_t@@0HHH@Z(this, vStart, vEnd, allowStartSolid, checkDrop, ignoreActors);
}

/*
==============
AIScriptedInterface::SetCurrentStance
==============
*/

void __fastcall AIScriptedInterface::SetCurrentStance(AIScriptedInterface *this, const ai_stance_e stance)
{
  ?SetCurrentStance@AIScriptedInterface@@QEBAXW4ai_stance_e@@@Z(this, stance);
}

/*
==============
AIScriptedInterface::IsRetreatNeeded
==============
*/

bool __fastcall AIScriptedInterface::IsRetreatNeeded(AIScriptedInterface *this)
{
  return ?IsRetreatNeeded@AIScriptedInterface@@QEBA_NXZ(this);
}

/*
==============
AIScriptedInterface::UpdateGunPose
==============
*/

void __fastcall AIScriptedInterface::UpdateGunPose(AIScriptedInterface *this)
{
  ?UpdateGunPose@AIScriptedInterface@@QEBAXXZ(this);
}

/*
==============
AIScriptedInterface::GetCachedTurnSpeed
==============
*/

bool __fastcall AIScriptedInterface::GetCachedTurnSpeed(AIScriptedInterface *this, const vec3_t *nextCorner, float *outTargetSpeed)
{
  return ?GetCachedTurnSpeed@AIScriptedInterface@@IEBA_NAEBTvec3_t@@PEAM@Z(this, nextCorner, outTargetSpeed);
}

/*
==============
AIScriptedInterface::UpdateTightQuarters
==============
*/

void __fastcall AIScriptedInterface::UpdateTightQuarters(AIScriptedInterface *this)
{
  ?UpdateTightQuarters@AIScriptedInterface@@IEBAXXZ(this);
}

/*
==============
AIScriptedInterface::HasUpcomingSharpTurn
==============
*/

bool __fastcall AIScriptedInterface::HasUpcomingSharpTurn(AIScriptedInterface *this, const vec3_t *originPoint, const nav_cornerdata_t *corners, const int numCorners, const int startCorner, const float maxDistanceFromCorner, const float minAngleForScaling, const bool checkFacing, float *outTurnDegrees)
{
  return ?HasUpcomingSharpTurn@AIScriptedInterface@@IEBA_NAEBTvec3_t@@PEBUnav_cornerdata_t@@HHMM_NPEAM@Z(this, originPoint, corners, numCorners, startCorner, maxDistanceFromCorner, minAngleForScaling, checkFacing, outTurnDegrees);
}

/*
==============
AIScriptedInterface::UpdateSpeedScaleValues
==============
*/

void __fastcall AIScriptedInterface::UpdateSpeedScaleValues(AIScriptedInterface *this)
{
  ?UpdateSpeedScaleValues@AIScriptedInterface@@QEBAXXZ(this);
}

/*
==============
AIScriptedInterface::AtClaimNode
==============
*/

bool __fastcall AIScriptedInterface::AtClaimNode(AIScriptedInterface *this)
{
  return ?AtClaimNode@AIScriptedInterface@@QEBA_NXZ(this);
}

/*
==============
AIScriptedInterface::ModifySharpTurnSpeed
==============
*/

void __fastcall AIScriptedInterface::ModifySharpTurnSpeed(AIScriptedInterface *this, float turnAngle, float minSlowDownAngle, float *outTargetSpeed)
{
  ?ModifySharpTurnSpeed@AIScriptedInterface@@IEBAXMMPEAM@Z(this, turnAngle, minSlowDownAngle, outTargetSpeed);
}

/*
==============
AIScriptedInterface::UpdateMoveDirBasedOnHistory
==============
*/

void __fastcall AIScriptedInterface::UpdateMoveDirBasedOnHistory(AIScriptedInterface *this, const vec3_t *lookAhead, vec3_t *inOutMoveDir)
{
  ?UpdateMoveDirBasedOnHistory@AIScriptedInterface@@UEBAXAEBTvec3_t@@AEAT2@@Z(this, lookAhead, inOutMoveDir);
}

/*
==============
AIScriptedInterface::GetScriptOrientMode
==============
*/

ai_orient_mode_t __fastcall AIScriptedInterface::GetScriptOrientMode(AIScriptedInterface *this)
{
  return ?GetScriptOrientMode@AIScriptedInterface@@QEBA?AW4ai_orient_mode_t@@XZ(this);
}

/*
==============
AIScriptedInterface::GetAnimMode
==============
*/

ai_animmode_t __fastcall AIScriptedInterface::GetAnimMode(AIScriptedInterface *this)
{
  return ?GetAnimMode@AIScriptedInterface@@QEBA?AW4ai_animmode_t@@XZ(this);
}

/*
==============
AIScriptedInterface::CanAimWhileMoving
==============
*/

bool __fastcall AIScriptedInterface::CanAimWhileMoving(AIScriptedInterface *this)
{
  return ?CanAimWhileMoving@AIScriptedInterface@@QEBA_NXZ(this);
}

/*
==============
AIScriptedInterface::ConstrainToScriptGoalRadius
==============
*/

void __fastcall AIScriptedInterface::ConstrainToScriptGoalRadius(AIScriptedInterface *this, vec3_t *position)
{
  ?ConstrainToScriptGoalRadius@AIScriptedInterface@@QEBAXAEATvec3_t@@@Z(this, position);
}

/*
==============
AIScriptedInterface::MaybeMove_DebugMidPoint
==============
*/

void __fastcall AIScriptedInterface::MaybeMove_DebugMidPoint(const vec3_t *vec1, const vec3_t *vec2, const vec3_t *vec3, const vec4_t *color1, const vec4_t *color2, DEBUGMAYMOVE_LIFT_ENUM liftBehavior)
{
  ?MaybeMove_DebugMidPoint@AIScriptedInterface@@SAXAEBTvec3_t@@00AEBTvec4_t@@1W4DEBUGMAYMOVE_LIFT_ENUM@@@Z(vec1, vec2, vec3, color1, color2, liftBehavior);
}

/*
==============
AIScriptedInterface::MayMove_Debug
==============
*/

void __fastcall AIScriptedInterface::MayMove_Debug(const vec3_t *vec1, const vec3_t *vec2, const vec4_t *color, DEBUGMAYMOVE_LIFT_ENUM liftBehavior)
{
  ?MayMove_Debug@AIScriptedInterface@@SAXAEBTvec3_t@@0AEBTvec4_t@@W4DEBUGMAYMOVE_LIFT_ENUM@@@Z(vec1, vec2, color, liftBehavior);
}

/*
==============
AIScriptedInterface::IsWithinScriptGoalRadius
==============
*/

bool __fastcall AIScriptedInterface::IsWithinScriptGoalRadius(AIScriptedInterface *this, const vec3_t *position, float buffer)
{
  return ?IsWithinScriptGoalRadius@AIScriptedInterface@@QEBA_NAEBTvec3_t@@M@Z(this, position, buffer);
}

/*
==============
AIScriptedInterface::DissociateNode
==============
*/

void __fastcall AIScriptedInterface::DissociateNode(AIScriptedInterface *this, pathnode_t *pNode)
{
  ?DissociateNode@AIScriptedInterface@@UEBAXPEAUpathnode_t@@@Z(this, pNode);
}

/*
==============
AIScriptedInterface::ClearOverrideArchetype
==============
*/

void __fastcall AIScriptedInterface::ClearOverrideArchetype(AIScriptedInterface *this, const ArcOverridePriority priority, bool dontPickNewArchetype, bool forceChangeNow)
{
  ?ClearOverrideArchetype@AIScriptedInterface@@QEBAXW4ArcOverridePriority@@_N1@Z(this, priority, dontPickNewArchetype, forceChangeNow);
}

/*
==============
AIScriptedInterface::HasRoomToFullExposeCorner
==============
*/

bool __fastcall AIScriptedInterface::HasRoomToFullExposeCorner(AIScriptedInterface *this, const pathnode_t *pNode)
{
  return ?HasRoomToFullExposeCorner@AIScriptedInterface@@QEBA_NPEBUpathnode_t@@@Z(this, pNode);
}

/*
==============
AIScriptedInterface::GetStairsStateWithinDist
==============
*/

AI_STAIRS_STATE __fastcall AIScriptedInterface::GetStairsStateWithinDist(AIScriptedInterface *this, float dist, bool bCurrentlyOnStairs)
{
  return ?GetStairsStateWithinDist@AIScriptedInterface@@UEBA?AW4AI_STAIRS_STATE@@M_N@Z(this, dist, bCurrentlyOnStairs);
}

/*
==============
AIScriptedInterface::AIScriptedInterface
==============
*/
void AIScriptedInterface::AIScriptedInterface(AIScriptedInterface *this)
{
  AICommonInterface::AICommonInterface(this);
  this->m_pAI = NULL;
  this->__vftable = (AIScriptedInterface_vtbl *)&AIScriptedInterface::`vftable';
}

/*
==============
AI_IsPlayerInMyLineOfFire
==============
*/

bool __fastcall AI_IsPlayerInMyLineOfFire(const ai_scripted_t *pScripted, double closeAngleDot, double angleDot, double closeDist, float dist)
{
  vec3_t *p_currentAngles; 
  int v29; 
  __int64 v31; 
  sentient_s *sentient; 
  team_t eTeam; 
  bool result; 
  __int64 v78; 
  __int64 v79; 
  __int64 v80; 
  vec3_t angles; 
  vec3_t forward; 
  vec3_t v84; 
  char v88; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmmword ptr [rax-88h], xmm11
    vmovaps xmmword ptr [rax-98h], xmm12
    vmovaps xmmword ptr [rax-0A8h], xmm13
    vmovaps xmmword ptr [rax-0C8h], xmm15
    vmovss  xmm9, [rsp+148h+dist]
    vcomiss xmm9, xmm3
    vmovss  [rsp+148h+var_108], xmm1
    vmovaps xmm10, xmm3
    vmovaps xmm15, xmm2
  }
  if ( (unsigned __int64)&v78 == _security_cookie && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 3413, ASSERT_TYPE_ASSERT, "(dist > closeDist)", (const char *)&queryFormat, "dist > closeDist") )
    __debugbreak();
  _RCX = pScripted->ent;
  __asm
  {
    vmovss  xmm11, dword ptr [rcx+130h]
    vmovss  xmm12, dword ptr [rcx+134h]
    vmovss  xmm13, dword ptr [rcx+138h]
  }
  p_currentAngles = &pScripted->ent->r.currentAngles;
  __asm
  {
    vmovaps [rsp+148h+var_38], xmm6
    vmovaps [rsp+148h+var_48], xmm7
    vmovaps [rsp+148h+var_B8], xmm14
  }
  AngleVectors(p_currentAngles, &forward, NULL, NULL);
  _RAX = pScripted->ent;
  __asm
  {
    vxorps  xmm8, xmm8, xmm8
    vmovss  xmm0, dword ptr [rax+140h]
    vaddss  xmm1, xmm0, dword ptr [r15+478h]
    vmovss  dword ptr [rsp+148h+angles+4], xmm1
    vmovss  dword ptr [rsp+148h+angles], xmm8
    vmovss  dword ptr [rsp+148h+angles+8], xmm8
  }
  AngleVectors(&angles, &v84, NULL, NULL);
  v29 = 0;
  if ( level.maxclients <= 0 )
  {
LABEL_25:
    result = 0;
  }
  else
  {
    __asm { vmovss  xmm14, cs:__real@3f800000 }
    v31 = 0i64;
    _RBX = 0i64;
    while ( 1 )
    {
      if ( (unsigned int)v29 >= 0x800 )
      {
        LODWORD(v80) = 2048;
        LODWORD(v79) = v29;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v79, v80) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[_RBX].r.isInUse != g_entityIsInUse[v31] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( g_entityIsInUse[v31] )
      {
        _RDI = g_entities;
        if ( g_entities[_RBX].health > 0 )
        {
          if ( !g_entities[_RBX].sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 3437, ASSERT_TYPE_ASSERT, "( pPlayer->sentient )", (const char *)&queryFormat, "pPlayer->sentient") )
            __debugbreak();
          sentient = _RDI[_RBX].sentient;
          eTeam = pScripted->sentient->eTeam;
          if ( sentient->eTeam == eTeam )
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rbx+rdi+130h]
              vmovss  xmm1, dword ptr [rbx+rdi+134h]
              vsubss  xmm6, xmm0, xmm11
              vmulss  xmm0, xmm6, dword ptr [rsp+148h+forward]
              vsubss  xmm7, xmm1, xmm12
              vmulss  xmm2, xmm7, dword ptr [rsp+148h+forward+4]
              vmovss  xmm1, dword ptr [rbx+rdi+138h]
              vaddss  xmm3, xmm2, xmm0
              vsubss  xmm2, xmm1, xmm13
              vmulss  xmm0, xmm2, dword ptr [rsp+148h+forward+8]
              vaddss  xmm4, xmm3, xmm0
              vcomiss xmm4, xmm9
            }
            if ( sentient->eTeam <= (unsigned int)eTeam )
            {
              __asm { vcomiss xmm4, xmm8 }
              if ( sentient->eTeam >= (unsigned int)eTeam )
              {
                __asm
                {
                  vsubss  xmm1, xmm4, xmm10
                  vsubss  xmm0, xmm9, xmm10
                  vdivss  xmm5, xmm1, xmm0
                  vmulss  xmm1, xmm6, xmm6
                  vmulss  xmm2, xmm7, xmm7
                  vaddss  xmm0, xmm2, xmm1
                  vsqrtss xmm3, xmm0, xmm0
                  vcmpless xmm0, xmm3, cs:__real@80000000
                  vblendvps xmm0, xmm3, xmm14, xmm0
                  vdivss  xmm1, xmm14, xmm0
                  vmulss  xmm0, xmm7, xmm1
                  vmulss  xmm3, xmm0, dword ptr [rsp+148h+var_E0+4]
                  vmulss  xmm1, xmm6, xmm1
                  vmulss  xmm2, xmm1, dword ptr [rsp+148h+var_E0]
                  vaddss  xmm4, xmm3, xmm2
                  vsubss  xmm0, xmm14, xmm5
                  vmulss  xmm2, xmm0, [rsp+148h+var_108]
                  vmulss  xmm1, xmm5, xmm15
                  vaddss  xmm2, xmm2, xmm1
                  vcomiss xmm4, xmm2
                }
                if ( sentient->eTeam > (unsigned int)eTeam )
                  break;
              }
            }
          }
        }
      }
      ++v29;
      ++v31;
      ++_RBX;
      if ( v29 >= level.maxclients )
        goto LABEL_25;
    }
    result = 1;
  }
  __asm
  {
    vmovaps xmm14, [rsp+148h+var_B8]
    vmovaps xmm7, [rsp+148h+var_48]
    vmovaps xmm6, [rsp+148h+var_38]
  }
  _R11 = &v88;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-40h]
    vmovaps xmm9, xmmword ptr [r11-50h]
    vmovaps xmm10, xmmword ptr [r11-60h]
    vmovaps xmm11, xmmword ptr [r11-70h]
    vmovaps xmm12, xmmword ptr [r11-80h]
    vmovaps xmm13, xmmword ptr [r11-90h]
    vmovaps xmm15, xmmword ptr [r11-0B0h]
  }
  return result;
}

/*
==============
AIScriptedInterface::AnimStateChanged_ClearAnimParams
==============
*/
void AIScriptedInterface::AnimStateChanged_ClearAnimParams(AIScriptedInterface *this)
{
  ai_scripted_t *m_pAI; 

  m_pAI = this->m_pAI;
  if ( m_pAI->animData.gestureIndex )
  {
    m_pAI->animData.gestureIndex = 0;
    G_AIAnim_UpdateFieldByParam(this->m_pAI->ent, AGENT_ANIM_PARAM_GESTURE_INDEX);
  }
}

/*
==============
AIScriptedInterface::AtClaimNode
==============
*/
bool AIScriptedInterface::AtClaimNode(AIScriptedInterface *this)
{
  ai_scripted_t *m_pAI; 

  m_pAI = this->m_pAI;
  return m_pAI->sentient->pClaimedNode && AIScriptedInterface::PointNearClaimNode(this, &m_pAI->ent->r.currentOrigin);
}

/*
==============
AIScriptedInterface::BTMayShoot
==============
*/
char AIScriptedInterface::BTMayShoot(AIScriptedInterface *this)
{
  if ( this->GetEquippedWeapon(this)->weaponIdx )
  {
    if ( AIScriptedInterface::ShouldShoot(this) )
    {
      if ( AIScriptedInterface::CalcGoodShootPos(this) )
        return 1;
    }
    else
    {
      this->m_pAI->bGoodShootPos = 0;
    }
  }
  return 0;
}

/*
==============
AIScriptedInterface::Blocking_AttemptMove
==============
*/
bool AIScriptedInterface::Blocking_AttemptMove(AIScriptedInterface *this)
{
  sentient_s *TargetSentient; 
  sentient_s *v3; 
  const tacpoint_t *v4; 
  ai_scripted_t *m_pAI; 
  const tacpoint_t *ClosestPointWithVisWithinRadiusIgnorePoints; 
  const tacpoint_t *v25; 
  AINavigator *pNavigator; 
  bool (__fastcall *IsAreaReachable)(AINavigator *, const bfx::AreaHandle *); 
  bfx::AreaHandle *AreaForPoint; 
  ai_scripted_t *v29; 
  bool result; 
  const tacpoint_t *v31; 
  ai_scripted_t *v32; 
  const tacpoint_t *ClosestPointWithoutVisWithinRadiusIgnorePoints; 
  AINavigator *v40; 
  bool (__fastcall *v41)(AINavigator *, const bfx::AreaHandle *); 
  bfx::AreaHandle *v42; 
  float v43; 
  float v44; 
  vec3_t pIgnoreVecs; 
  vec3_t v46; 

  TargetSentient = AICommonInterface::GetTargetSentient(this);
  v3 = TargetSentient;
  if ( TargetSentient )
  {
    v4 = Sentient_NearestTacPoint(TargetSentient);
    if ( !v4 )
      return 0;
    _R8 = v3->ent;
    __asm
    {
      vmovss  xmm0, dword ptr [r8+130h]
      vmovss  xmm1, dword ptr [r8+134h]
      vsubss  xmm3, xmm0, dword ptr [rdx+130h]
      vsubss  xmm2, xmm1, dword ptr [rdx+134h]
      vmovss  xmm0, dword ptr [r8+138h]
      vsubss  xmm4, xmm0, dword ptr [rdx+138h]
      vmulss  xmm2, xmm2, xmm2
      vmulss  xmm1, xmm3, xmm3
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm3, xmm2, xmm1
      vaddss  xmm2, xmm3, xmm0
      vcomiss xmm2, cs:__real@48ef4200
    }
    if ( AICommonInterface::CanSeeEnemy(this) )
    {
      m_pAI = this->m_pAI;
      _RAX = m_pAI->ent;
      __asm
      {
        vmovss  xmm0, dword ptr [rax+130h]
        vmovss  dword ptr [rsp+78h+var_38], xmm0
        vmovss  xmm1, dword ptr [rax+134h]
        vmovss  dword ptr [rsp+78h+var_38+4], xmm1
        vmovss  xmm0, dword ptr [rax+138h]
        vmovss  xmm1, cs:__real@43fa0000; radius
        vmovss  dword ptr [rsp+78h+var_38+8], xmm0
        vmovss  xmm0, cs:__real@43480000
        vmovss  [rsp+78h+var_48], xmm0
      }
      ClosestPointWithVisWithinRadiusIgnorePoints = TacGraph_FindClosestPointWithVisWithinRadiusIgnorePoints(&m_pAI->ent->r.currentOrigin, *(float *)&_XMM1, &m_pAI->ent->r.currentOrigin, v4, &pIgnoreVecs, 1, v43);
      v25 = ClosestPointWithVisWithinRadiusIgnorePoints;
      if ( ClosestPointWithVisWithinRadiusIgnorePoints )
      {
        pNavigator = this->m_pAI->pNavigator;
        IsAreaReachable = pNavigator->IsAreaReachable;
        AreaForPoint = TacGraph_GetAreaForPoint(ClosestPointWithVisWithinRadiusIgnorePoints);
        if ( IsAreaReachable(pNavigator, AreaForPoint) )
          goto LABEL_6;
      }
    }
  }
  v31 = Sentient_NearestTacPoint(this->m_pAI->sentient);
  if ( v31 )
  {
    v32 = this->m_pAI;
    _RCX = v32->ent;
    __asm
    {
      vmovss  xmm0, dword ptr [rcx+130h]
      vmovss  dword ptr [rsp+78h+var_28], xmm0
      vmovss  xmm1, dword ptr [rcx+134h]
      vmovss  dword ptr [rsp+78h+var_28+4], xmm1
      vmovss  xmm0, dword ptr [rcx+138h]
      vmovss  xmm1, cs:__real@447a0000; radius
      vmovss  dword ptr [rsp+78h+var_28+8], xmm0
      vmovss  xmm0, cs:__real@43960000
      vmovss  [rsp+78h+var_48], xmm0
    }
    ClosestPointWithoutVisWithinRadiusIgnorePoints = TacGraph_FindClosestPointWithoutVisWithinRadiusIgnorePoints(&v32->ent->r.currentOrigin, *(float *)&_XMM1, &v32->ent->r.currentOrigin, v31, &v46, 1, v44);
    v25 = ClosestPointWithoutVisWithinRadiusIgnorePoints;
    if ( ClosestPointWithoutVisWithinRadiusIgnorePoints )
    {
      v40 = this->m_pAI->pNavigator;
      v41 = v40->IsAreaReachable;
      v42 = TacGraph_GetAreaForPoint(ClosestPointWithoutVisWithinRadiusIgnorePoints);
      if ( v41(v40, v42) )
      {
LABEL_6:
        v29 = this->m_pAI;
        TacGraph_GetApproxGroundPosForPoint(v25, &v29->btGoals[2].pos);
        v29->btGoals[2].radius = 24.0;
        v29->btGoals[2].node = NULL;
        EntHandle::setEnt(&v29->btGoals[2].hEnt, NULL);
        EntHandle::setEnt(&v29->btGoals[2].hVolume, NULL);
        result = 1;
        v29->btGoals[2].bValid = 1;
        return result;
      }
    }
  }
  return 0;
}

/*
==============
AIScriptedInterface::CanAimWhileMoving
==============
*/
bool AIScriptedInterface::CanAimWhileMoving(AIScriptedInterface *this)
{
  bool result; 
  scr_string_t AnimsetName; 
  scr_string_t v8; 
  bool v10; 

  _RAX = this->m_pAI;
  if ( _RAX->bRunNGunDisableAim )
    return 0;
  __asm { vmovaps [rsp+38h+var_18], xmm6 }
  if ( _RAX->Physics.stairsState == AI_STAIRS_NONE )
  {
    __asm { vmovss  xmm6, dword ptr [rax+0D4Ch] }
    if ( !_RAX->overrideArchetypes[0] )
    {
      AnimsetName = BG_AnimationState_GetAnimsetName(&_RAX->ent->s);
      AIScriptedInterface::SetBaseOverrideArchetype(this, AnimsetName);
      _RAX = this->m_pAI;
    }
    v8 = _RAX->overrideArchetypes[0];
    if ( !HasAnimSpeedThresholdEntryForArchetype(v8, scr_const.fast) )
      goto LABEL_9;
    if ( !HasAnimSpeedThresholdEntryForArchetype(v8, scr_const.jog) )
      goto LABEL_9;
    __asm { vmovss  xmm3, cs:__real@3ecccccd; fractionValue }
    *(double *)&_XMM0 = GetAnimSpeedBetweenThresholdEntries(v8, scr_const.fast, scr_const.jog, *(float *)&_XMM3);
    __asm { vcomiss xmm6, xmm0 }
    if ( !v10 )
    {
LABEL_9:
      v10 = (unsigned int)v8 < scr_const.juggernaut;
      if ( v8 == scr_const.juggernaut || (v10 = (unsigned int)v8 < scr_const.juggernaut_cp, v8 == scr_const.juggernaut_cp) || (v10 = (unsigned int)v8 < scr_const.juggernaut_lw, v8 == scr_const.juggernaut_lw) )
      {
        __asm
        {
          vcomiss xmm6, cs:__real@42700000
          vmovaps xmm6, [rsp+38h+var_18]
        }
        return v10;
      }
      if ( !this->m_pAI->bRunNGun )
      {
        result = 0;
        __asm { vmovaps xmm6, [rsp+38h+var_18] }
        return result;
      }
    }
  }
  result = 1;
  __asm { vmovaps xmm6, [rsp+38h+var_18] }
  return result;
}

/*
==============
AIScriptedInterface::CanBoundingOverwatchMove
==============
*/
char AIScriptedInterface::CanBoundingOverwatchMove(AIScriptedInterface *this)
{
  ai_scripted_t *m_pAI; 
  unsigned __int8 v13; 
  AIScriptedInterface_vtbl *v21; 
  __int64 v36; 
  AIScriptedInterface *v40; 
  ai_scripted_t *v41; 
  gentity_s *v54; 
  const dvar_t *v81; 
  const char *v92; 
  const char *v96; 
  const dvar_t *v99; 
  const dvar_t *v100; 
  AIWrapper v101; 
  vec3_t xyz; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 4193, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !EntHandle::isDefined(&this->m_pAI->sentient->targetEnt) || !AICommonInterface::PointAtGoal(this, &this->m_pAI->ent->r.currentOrigin, &this->m_pAI->codeGoal) )
    return 1;
  _R12 = EntHandle::ent(&this->m_pAI->sentient->targetEnt);
  m_pAI = this->m_pAI;
  v13 = 0;
  if ( m_pAI->squadNumber >= 0 )
    return m_pAI->squadMovementAllowed;
  __asm
  {
    vmovss  xmm0, dword ptr [r12+130h]
    vmovss  xmm1, dword ptr [r12+134h]
    vsubss  xmm5, xmm1, dword ptr [rax+134h]
    vmovaps [rsp+178h+var_38], xmm6
    vsubss  xmm6, xmm0, dword ptr [rax+130h]
    vmovss  xmm0, dword ptr [r12+138h]
    vsubss  xmm4, xmm0, dword ptr [rax+138h]
  }
  v21 = this->__vftable;
  __asm
  {
    vmovaps [rsp+178h+var_68], xmm9
    vmovss  xmm9, cs:__real@3f800000
    vmovaps [rsp+178h+var_88], xmm11
    vmovss  xmm11, cs:__real@80000000
    vmulss  xmm2, xmm5, xmm5
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm1, xmm2, xmm2
    vcmpless xmm0, xmm1, xmm11
    vmovaps [rsp+178h+var_98], xmm12
    vblendvps xmm0, xmm1, xmm9, xmm0
    vdivss  xmm1, xmm9, xmm0
    vmovaps [rsp+178h+var_A8], xmm13
    vmovaps [rsp+178h+var_B8], xmm14
    vmulss  xmm12, xmm6, xmm1
    vmulss  xmm13, xmm5, xmm1
    vmulss  xmm14, xmm4, xmm1
  }
  v36 = (__int64)v21->GetAIIterator(this);
  _RBX = (const gentity_s *)(**(__int64 (__fastcall ***)(__int64))v36)(v36);
  if ( _RBX )
  {
    __asm
    {
      vmovaps [rsp+178h+var_58], xmm8
      vmovss  xmm8, cs:__real@49afc800
      vmovaps [rsp+178h+var_78], xmm10
      vxorps  xmm10, xmm10, xmm10
      vmovaps [rsp+178h+var_48], xmm7
    }
    while ( 1 )
    {
      AIWrapper::AIWrapper(&v101, _RBX);
      v40 = v101.m_pAI;
      v41 = this->m_pAI;
      if ( v101.m_pAI->GetAI(v101.m_pAI) != v41 && v41->sentient->eTeam == _RBX->sentient->eTeam )
      {
        if ( v40->IsCodeMoveRequested(v40) )
        {
          _RCX = this->m_pAI->ent;
          __asm
          {
            vmovss  xmm0, dword ptr [rcx+130h]
            vsubss  xmm3, xmm0, dword ptr [rbx+130h]
            vmovss  xmm1, dword ptr [rcx+134h]
            vsubss  xmm2, xmm1, dword ptr [rbx+134h]
            vmovss  xmm0, dword ptr [rcx+138h]
            vsubss  xmm4, xmm0, dword ptr [rbx+138h]
            vmulss  xmm2, xmm2, xmm2
            vmulss  xmm1, xmm3, xmm3
            vmulss  xmm0, xmm4, xmm4
            vaddss  xmm3, xmm2, xmm1
            vaddss  xmm2, xmm3, xmm0
            vcomiss xmm2, xmm8
          }
        }
        if ( EntHandle::isDefined(&_RBX->sentient->targetEnt) )
        {
          v54 = EntHandle::ent(&_RBX->sentient->targetEnt);
          if ( v54 == _R12 )
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rbx+130h]
              vmovss  xmm1, dword ptr [rbx+134h]
              vsubss  xmm7, xmm0, dword ptr [rcx+130h]
              vsubss  xmm4, xmm1, dword ptr [rcx+134h]
              vmovss  xmm0, dword ptr [rbx+138h]
              vsubss  xmm6, xmm0, dword ptr [rcx+138h]
              vmulss  xmm2, xmm4, xmm4
              vmulss  xmm0, xmm6, xmm6
              vmulss  xmm1, xmm7, xmm7
              vaddss  xmm3, xmm2, xmm1
              vaddss  xmm2, xmm3, xmm0
              vsqrtss xmm1, xmm2, xmm2
              vcmpless xmm0, xmm1, xmm11
              vblendvps xmm0, xmm1, xmm9, xmm0
              vdivss  xmm5, xmm9, xmm0
              vmulss  xmm0, xmm4, xmm5
              vmulss  xmm1, xmm7, xmm5
              vmulss  xmm2, xmm1, xmm12
              vmulss  xmm3, xmm0, xmm13
              vmulss  xmm0, xmm6, xmm5
              vmulss  xmm1, xmm0, xmm14
              vaddss  xmm4, xmm3, xmm2
              vaddss  xmm2, xmm4, xmm1
              vcomiss xmm2, xmm10
            }
            if ( v54 < _R12 )
              break;
          }
        }
      }
      _RBX = (const gentity_s *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v36 + 8i64))(v36);
      if ( !_RBX )
        goto LABEL_20;
    }
    v13 = 1;
LABEL_20:
    __asm
    {
      vmovaps xmm7, [rsp+178h+var_48]
      vmovaps xmm8, [rsp+178h+var_58]
      vmovaps xmm10, [rsp+178h+var_78]
    }
  }
  v81 = DVARBOOL_ai_debugBoundingOverwatch;
  __asm
  {
    vmovaps xmm14, [rsp+178h+var_B8]
    vmovaps xmm13, [rsp+178h+var_A8]
    vmovaps xmm12, [rsp+178h+var_98]
    vmovaps xmm11, [rsp+178h+var_88]
    vmovaps xmm9, [rsp+178h+var_68]
  }
  if ( !DVARBOOL_ai_debugBoundingOverwatch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugBoundingOverwatch") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v81);
  if ( v81->current.enabled )
  {
    _RCX = this->m_pAI->ent;
    __asm
    {
      vmovss  xmm0, dword ptr [rcx+130h]
      vmovss  dword ptr [rsp+178h+xyz], xmm0
      vmovss  xmm1, dword ptr [rcx+134h]
      vmovss  dword ptr [rsp+178h+xyz+4], xmm1
      vmovss  xmm0, dword ptr [rcx+138h]
      vsubss  xmm2, xmm0, cs:__real@41200000
      vmovss  dword ptr [rsp+178h+xyz+8], xmm2
    }
    v92 = j_va("advancing squad members: %d, advancing allies: %d", 0i64, 0i64);
    __asm { vmovss  xmm2, cs:__real@3ecccccd; scale }
    G_Main_AddDebugStringWithDuration(&xyz, &colorLtGrey, *(float *)&_XMM2, v92, 100);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+178h+xyz+8]
      vaddss  xmm1, xmm0, cs:__real@c1000000
      vmovss  dword ptr [rsp+178h+xyz+8], xmm1
    }
    v96 = j_va("found further ally: %d", v13);
    __asm { vmovss  xmm2, cs:__real@3ecccccd; scale }
    G_Main_AddDebugStringWithDuration(&xyz, &colorLtGrey, *(float *)&_XMM2, v96, 100);
  }
  __asm { vmovaps xmm6, [rsp+178h+var_38] }
  if ( v13 )
    return 0;
  v99 = DCONST_DVARINT_ai_maxSquadBoundingOverwatchMovingAI;
  if ( !DCONST_DVARINT_ai_maxSquadBoundingOverwatchMovingAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_maxSquadBoundingOverwatchMovingAI") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v99);
  if ( v99->current.integer - 1 < 0 )
    return 0;
  v100 = DCONST_DVARINT_ai_maxBoundingOverwatchMovingAI;
  if ( !DCONST_DVARINT_ai_maxBoundingOverwatchMovingAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_maxBoundingOverwatchMovingAI") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v100);
  return v100->current.integer - 1 >= 0;
}

/*
==============
AIScriptedInterface::CanSee
==============
*/
bool AIScriptedInterface::CanSee(AIScriptedInterface *this, gentity_s *pOther, int cacheLength)
{
  sentient_s *sentient; 
  int CanSeeSentient; 

  if ( !pOther && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 576, ASSERT_TYPE_ASSERT, "(pOther)", (const char *)&queryFormat, "pOther") )
    __debugbreak();
  if ( cacheLength == -1 )
  {
    cacheLength = 250;
    if ( this->m_pAI->sight.latency > 250 )
      cacheLength = this->m_pAI->sight.latency;
  }
  sentient = pOther->sentient;
  if ( sentient )
    CanSeeSentient = AICommonInterface::CanSeeSentient(this, sentient, cacheLength);
  else
    CanSeeSentient = AICommonInterface::CanSeeEntity(this, pOther);
  return CanSeeSentient == 1;
}

/*
==============
AIScriptedInterface::CanSeePeripheral
==============
*/
bool AIScriptedInterface::CanSeePeripheral(AIScriptedInterface *this, gentity_s *pOther, int cacheLength)
{
  sentient_s *sentient; 

  if ( !pOther && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 596, ASSERT_TYPE_ASSERT, "(pOther)", (const char *)&queryFormat, "pOther") )
    __debugbreak();
  if ( cacheLength == -1 )
  {
    cacheLength = 250;
    if ( this->m_pAI->sight.latency > 250 )
      cacheLength = this->m_pAI->sight.latency;
  }
  sentient = pOther->sentient;
  return sentient && AICommonInterface::CanSeeSentientPeripheral(this, sentient, cacheLength) == 1;
}

/*
==============
AIScriptedInterface::CanShoot
==============
*/
bool AIScriptedInterface::CanShoot(AIScriptedInterface *this, const vec3_t *position, const vec3_t *muzzleOffset, bool bUseActualMuzzlePos)
{
  pathnode_t *v8; 
  __int16 type; 
  bool CanShootFrom; 
  const dvar_t *v17; 
  bool v18; 
  const dvar_t *v19; 
  int integer; 
  const vec4_t *v21; 
  vec3_t outOrigin; 
  vec3_t outForward; 

  if ( !this->GetEquippedWeapon(this)->weaponIdx )
    return 0;
  if ( bUseActualMuzzlePos )
  {
    if ( !AIScriptedInterface::GetMuzzleInfo(this, &outOrigin, &outForward) )
      return 0;
  }
  else
  {
    if ( !Path_NodeValid(this->m_pAI->coverInfo.nodeID) )
      goto LABEL_12;
    v8 = Path_ConvertIndexToNode(this->m_pAI->coverInfo.nodeID);
    if ( !v8 || this->m_pAI->blackboard.m_CoverState == scr_const.exposed )
      goto LABEL_12;
    type = v8->constant.type;
    if ( type == 31 )
      type = v8->dynamic.turretEntNumber;
    if ( type == 9 )
LABEL_12:
      AIScriptedInterface::GetMuzzlePosApprox(this, &outOrigin);
    else
      AIScriptedInterface::GetApproxEyePos(this, &outOrigin, 1);
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+98h+outOrigin]
    vaddss  xmm1, xmm0, dword ptr [rsi]
    vmovss  xmm2, dword ptr [rsp+98h+outOrigin+4]
    vaddss  xmm0, xmm2, dword ptr [rsi+4]
    vmovss  dword ptr [rsp+98h+outOrigin], xmm1
    vmovss  xmm1, dword ptr [rsp+98h+outOrigin+8]
    vaddss  xmm2, xmm1, dword ptr [rsi+8]
    vmovss  dword ptr [rsp+98h+outOrigin+8], xmm2
    vmovss  dword ptr [rsp+98h+outOrigin+4], xmm0
  }
  CanShootFrom = AICommonInterface::CanShootFrom(this, position, &outOrigin);
  v17 = DVARBOOL_ai_ShowCanshootChecks;
  v18 = CanShootFrom;
  if ( !DVARBOOL_ai_ShowCanshootChecks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_ShowCanshootChecks") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v17);
  if ( v17->current.enabled )
  {
    v19 = DVARINT_ai_debugEntIndex;
    if ( !DVARINT_ai_debugEntIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugEntIndex") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v19);
    integer = v19->current.integer;
    if ( integer <= 0 || integer == this->m_pAI->ent->s.number )
    {
      v21 = &colorGreen;
      if ( !v18 )
        v21 = &colorRed;
      G_DebugLineWithDuration(position, &outOrigin, v21, 0, 30);
    }
  }
  return v18;
}

/*
==============
AIScriptedInterface::ClampAimAngles
==============
*/
void AIScriptedInterface::ClampAimAngles(AIScriptedInterface *this, bool zeroIfNotInLimits, vec3_t *inOutAimAngles)
{
  _RAX = this->m_pAI;
  _RBX = inOutAimAngles;
  if ( zeroIfNotInLimits )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [r8+4]
      vcomiss xmm0, dword ptr [rax+0F0h]
      vcomiss xmm0, dword ptr [rax+0F4h]
      vmovss  xmm0, dword ptr [r8]
      vcomiss xmm0, dword ptr [rax+0E8h]
      vcomiss xmm0, dword ptr [rax+0ECh]
    }
  }
  else
  {
    if ( _RAX->orientation.gunBlockedByWall )
    {
      __asm
      {
        vmovss  xmm1, cs:__real@c1200000
        vmovss  xmm2, cs:__real@41200000
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm1, dword ptr [rax+0F0h]; min
        vmovss  xmm2, dword ptr [rax+0F4h]; max
      }
    }
    __asm { vmovss  xmm0, dword ptr [r8+4]; val }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm { vmovss  dword ptr [rbx+4], xmm0 }
    _RAX = this->m_pAI;
    __asm
    {
      vmovss  xmm0, dword ptr [rbx]; val
      vmovss  xmm2, dword ptr [rax+0ECh]; max
      vmovss  xmm1, dword ptr [rax+0E8h]; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm { vmovss  dword ptr [rbx], xmm0 }
  }
}

/*
==============
AIScriptedInterface::ClearBTGoal
==============
*/
void AIScriptedInterface::ClearBTGoal(AIScriptedInterface *this, ai_bt_goal_priority_t priority)
{
  EntHandle *v2; 

  v2 = (EntHandle *)((char *)this->m_pAI + 56 * priority);
  EntHandle::setEnt(v2 + 186, NULL);
  *(_QWORD *)&v2[182].number = 0i64;
  EntHandle::setEnt(v2 + 184, NULL);
  LOBYTE(v2[188].number) = 0;
}

/*
==============
AIScriptedInterface::ClearGoalVolume
==============
*/
void AIScriptedInterface::ClearGoalVolume(AIScriptedInterface *this)
{
  EntHandle::setEnt(&this->m_pAI->scriptGoal.hVolume, NULL);
}

/*
==============
AIScriptedInterface::ClearKeepClaimedNode
==============
*/
void AIScriptedInterface::ClearKeepClaimedNode(AIScriptedInterface *this)
{
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 1077, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  this->m_pAI->nodeSelect.keepClaimedNode = 0;
  this->m_pAI->nodeSelect.keepClaimedNodeIfValid = 0;
}

/*
==============
AIScriptedInterface::ClearOverrideArchetype
==============
*/
void AIScriptedInterface::ClearOverrideArchetype(AIScriptedInterface *this, const ArcOverridePriority priority, bool dontPickNewArchetype, bool forceChangeNow)
{
  if ( (unsigned __int8)priority >= ARC_PRIORITY_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 4545, ASSERT_TYPE_ASSERT, "(priority < ARC_PRIORITY_COUNT)", (const char *)&queryFormat, "priority < ARC_PRIORITY_COUNT") )
    __debugbreak();
  Scr_SetString(&this->m_pAI->overrideArchetypes[(unsigned __int8)priority], (scr_string_t)0);
  if ( !dontPickNewArchetype )
    AIScriptedInterface::PickOverrideArchetype(this, forceChangeNow);
}

/*
==============
AIScriptedInterface::ClearPath
==============
*/
void AIScriptedInterface::ClearPath(AIScriptedInterface *this)
{
  AITask_PathFind *p_pathFindTask; 

  AICommonInterface::ClearPath(this);
  this->m_pAI->isInCautiousCornerStrafe = 0;
  p_pathFindTask = &this->m_pAI->pathFindTask;
  if ( p_pathFindTask->status[0] == 1 )
    AIScheduler::RemovePathFindTask(p_pathFindTask);
}

/*
==============
AIScriptedInterface::ConstrainToScriptGoalRadius
==============
*/
void AIScriptedInterface::ConstrainToScriptGoalRadius(AIScriptedInterface *this, vec3_t *position)
{
  const ai_goal_t *v6; 

  _RSI = position;
  v6 = this->GetScriptGoal(this);
  _RDI = v6;
  if ( v6 )
  {
    if ( !AICommonInterface::PointAtGoal(this, _RSI, v6) )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rsi]
        vsubss  xmm5, xmm0, dword ptr [rdi]
        vmovss  xmm0, dword ptr [rsi+4]
        vmovaps [rsp+48h+var_18], xmm6
        vsubss  xmm6, xmm0, dword ptr [rdi+4]
        vmovss  xmm0, dword ptr [rsi+8]
        vmovaps [rsp+48h+var_28], xmm7
        vsubss  xmm7, xmm0, dword ptr [rdi+8]
        vmulss  xmm0, xmm7, xmm7
        vmulss  xmm2, xmm6, xmm6
        vmulss  xmm1, xmm5, xmm5
        vaddss  xmm3, xmm2, xmm1
        vmovss  xmm1, cs:__real@3f800000
        vaddss  xmm2, xmm3, xmm0
        vsqrtss xmm4, xmm2, xmm2
        vcmpless xmm0, xmm4, cs:__real@80000000
        vblendvps xmm0, xmm4, xmm1, xmm0
        vmovss  xmm4, dword ptr [rdi+0Ch]
        vdivss  xmm3, xmm1, xmm0
        vmulss  xmm0, xmm5, xmm3
        vmulss  xmm1, xmm0, xmm4
        vaddss  xmm2, xmm1, dword ptr [rdi]
        vmulss  xmm0, xmm6, xmm3
        vmovaps xmm6, [rsp+48h+var_18]
        vmulss  xmm1, xmm0, xmm4
        vmovss  dword ptr [rsi], xmm2
        vaddss  xmm2, xmm1, dword ptr [rdi+4]
        vmulss  xmm0, xmm7, xmm3
        vmovaps xmm7, [rsp+48h+var_28]
        vmulss  xmm1, xmm0, xmm4
        vmovss  dword ptr [rsi+4], xmm2
        vaddss  xmm2, xmm1, dword ptr [rdi+8]
        vmovss  dword ptr [rsi+8], xmm2
      }
    }
  }
}

/*
==============
AIScriptedInterface::Debug_NotMoving
==============
*/
void AIScriptedInterface::Debug_NotMoving(AIScriptedInterface *this, const char *str)
{
  const dvar_t *v2; 
  vec3_t xyz; 
  char dest[512]; 

  v2 = DVARBOOL_ai_whyaminotmoving;
  if ( !DVARBOOL_ai_whyaminotmoving && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_whyaminotmoving") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled )
  {
    Com_sprintf_truncate(dest, 0x200ui64, "Not Moving: %s", str);
    _RCX = this->m_pAI->ent;
    __asm
    {
      vmovss  xmm0, dword ptr [rcx+130h]
      vmovss  dword ptr [rsp+268h+xyz], xmm0
      vmovss  xmm1, dword ptr [rcx+134h]
      vmovss  dword ptr [rsp+268h+xyz+4], xmm1
      vmovss  xmm0, dword ptr [rcx+138h]
      vsubss  xmm2, xmm0, cs:__real@41000000
      vmovss  dword ptr [rsp+268h+xyz+8], xmm2
      vmovss  xmm2, cs:__real@3f4ccccd; scale
    }
    G_Main_AddDebugString(&xyz, &colorLtRed, *(float *)&_XMM2, dest);
  }
  Core_strcpy(this->m_pAI->notMovingString, 0x32ui64, str);
  this->m_pAI->notMovingStringTime = level.time;
}

/*
==============
AIScriptedInterface::Debug_NotMoving_Cached
==============
*/
void AIScriptedInterface::Debug_NotMoving_Cached(AIScriptedInterface *this)
{
  const dvar_t *v1; 
  vec3_t xyz; 
  char dest[512]; 

  v1 = DVARBOOL_ai_whyaminotmoving;
  if ( !DVARBOOL_ai_whyaminotmoving && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_whyaminotmoving") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.enabled )
  {
    Com_sprintf_truncate(dest, 0x200ui64, "Not Moving: %s", this->m_pAI->notMovingString);
    _RCX = this->m_pAI->ent;
    __asm
    {
      vmovss  xmm0, dword ptr [rcx+130h]
      vmovss  dword ptr [rsp+268h+xyz], xmm0
      vmovss  xmm1, dword ptr [rcx+134h]
      vmovss  dword ptr [rsp+268h+xyz+4], xmm1
      vmovss  xmm0, dword ptr [rcx+138h]
      vsubss  xmm2, xmm0, cs:__real@41000000
      vmovss  dword ptr [rsp+268h+xyz+8], xmm2
      vmovss  xmm2, cs:__real@3f4ccccd; scale
    }
    G_Main_AddDebugString(&xyz, &colorLtRed, *(float *)&_XMM2, dest);
  }
}

/*
==============
AIScriptedInterface::DetermineDesiredExitSpeed
==============
*/
float AIScriptedInterface::DetermineDesiredExitSpeed(AIScriptedInterface *this)
{
  bool outUsingCachedValue; 
  float outTargetSpeed; 
  vec3_t outNextCorner; 

  if ( this->m_pAI->cautiousNavigationEnabled )
  {
    __asm { vmovss  xmm0, cs:__real@42b40000 }
  }
  else
  {
    *(double *)&_XMM0 = AIScriptedInterface::GetTargetSpeed(this);
    __asm
    {
      vmovss  xmm1, cs:__real@428c0000; distanceAlongPath
      vmovss  [rsp+58h+outTargetSpeed], xmm0
    }
    AIScriptedInterface::ProcessSharpTurnSpeedScale(this, *(float *)&_XMM1, &outNextCorner, &outTargetSpeed, &outUsingCachedValue);
    __asm { vmovss  xmm0, [rsp+58h+outTargetSpeed] }
  }
  return *(float *)&_XMM0;
}

/*
==============
AIScriptedInterface::DissociateNode
==============
*/
void AIScriptedInterface::DissociateNode(AIScriptedInterface *this, pathnode_t *pNode)
{
  ai_scripted_t *m_pAI; 
  char v18; 
  char v19; 
  unsigned __int16 v20; 
  __int64 i; 
  ai_scripted_t *v22; 
  unsigned __int16 v34; 
  vec3_t pos; 

  __asm
  {
    vmovaps [rsp+68h+var_28], xmm6
    vmovss  xmm6, cs:__real@42100000
  }
  m_pAI = this->m_pAI;
  if ( m_pAI->scriptGoal.node == pNode )
  {
    m_pAI->scriptGoal.node = NULL;
    pathnode_t::GetPos(pNode, &pos);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+68h+pos]
      vmovss  xmm1, dword ptr [rsp+68h+pos+4]
    }
    m_pAI = this->m_pAI;
    __asm
    {
      vsubss  xmm2, xmm1, dword ptr [rax+134h]
      vsubss  xmm4, xmm0, dword ptr [rax+130h]
      vmovss  xmm0, dword ptr [rsp+68h+pos+8]
      vsubss  xmm3, xmm0, dword ptr [rax+138h]
      vmulss  xmm1, xmm2, xmm2
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm2, xmm2, xmm1
      vcomiss xmm2, xmm6
    }
    if ( !(v18 | v19) )
    {
      v20 = Path_ConvertNodeToIndex(pNode);
      Com_PrintWarning(18, "Guy %d's scripted goal node %d despawned before he got there.\n", (unsigned int)this->m_pAI->ent->s.number, v20);
      m_pAI = this->m_pAI;
    }
  }
  if ( m_pAI->codeGoal.node == pNode )
    m_pAI->codeGoal.node = NULL;
  for ( i = 2i64; i >= 0; --i )
  {
    v22 = this->m_pAI;
    if ( v22->btGoals[i].node == pNode )
    {
      v22->btGoals[i].node = NULL;
      v22->btGoals[i].bValid = 0;
      pathnode_t::GetPos(pNode, &pos);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+68h+pos]
        vmovss  xmm1, dword ptr [rsp+68h+pos+4]
        vsubss  xmm3, xmm0, dword ptr [rcx+130h]
        vsubss  xmm2, xmm1, dword ptr [rcx+134h]
        vmovss  xmm0, dword ptr [rsp+68h+pos+8]
        vsubss  xmm4, xmm0, dword ptr [rcx+138h]
        vmulss  xmm2, xmm2, xmm2
        vmulss  xmm1, xmm3, xmm3
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm3, xmm2, xmm1
        vaddss  xmm2, xmm3, xmm0
        vcomiss xmm2, xmm6
      }
      if ( !(v18 | v19) )
      {
        v34 = Path_ConvertNodeToIndex(pNode);
        Com_PrintWarning(18, "Guy %d's bt goal node %d despawned before he got there.\n", (unsigned int)this->m_pAI->ent->s.number, v34);
      }
    }
  }
  __asm { vmovaps xmm6, [rsp+68h+var_28] }
}

/*
==============
AIScriptedInterface::DissociateSentient
==============
*/
void AIScriptedInterface::DissociateSentient(AIScriptedInterface *this, sentient_s *other)
{
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 1717, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 1718, ASSERT_TYPE_ASSERT, "( m_pAI->sentient )", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  if ( this->m_pAI->sentient == other && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 1719, ASSERT_TYPE_ASSERT, "( m_pAI->sentient != other )", (const char *)&queryFormat, "m_pAI->sentient != other") )
    __debugbreak();
  AIScriptedInterface::DissociateSuppressor(this, other);
  if ( other->ent->s.number == AIScriptedInterface::GetLookAtEntityNum(this) )
    AIScriptedInterface::ClearLookAtEntity(this);
  AICommonInterface::DissociateSentient(this, other);
}

/*
==============
AIScriptedInterface::DrawGunPoseDebug
==============
*/
void AIScriptedInterface::DrawGunPoseDebug(AIScriptedInterface *this, const char *trigger, unsigned __int8 option)
{
  const char *v4; 
  vec3_t point; 
  char dest[64]; 

  _RCX = this->m_pAI->ent;
  v4 = g_AIGunAdditiveOptionStrings[option];
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+130h]
    vmovss  dword ptr [rsp+98h+point], xmm0
    vmovss  xmm1, dword ptr [rcx+134h]
    vmovss  dword ptr [rsp+98h+point+4], xmm1
    vmovss  xmm0, dword ptr [rcx+138h]
    vaddss  xmm2, xmm0, cs:__real@42700000
    vmovss  dword ptr [rsp+98h+point+8], xmm2
  }
  Com_sprintf<64>((char (*)[64])dest, "gunpos: [%s] [%s]", trigger, v4);
  __asm { vmovss  xmm2, cs:__real@3f000000; scale }
  G_DebugString(&point, &colorYellow, *(float *)&_XMM2, dest, 1);
}

/*
==============
AIScriptedInterface::FindOverrideArchetype
==============
*/
__int64 AIScriptedInterface::FindOverrideArchetype(AIScriptedInterface *this, const ArcOverridePriority priority)
{
  if ( (unsigned __int8)priority >= ARC_PRIORITY_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 4591, ASSERT_TYPE_ASSERT, "(priority < ARC_PRIORITY_COUNT)", (const char *)&queryFormat, "priority < ARC_PRIORITY_COUNT") )
    __debugbreak();
  return (unsigned int)this->m_pAI->overrideArchetypes[(unsigned __int8)priority];
}

/*
==============
AIScriptedInterface::FixupExtraAnimParams
==============
*/

unsigned int __fastcall AIScriptedInterface::FixupExtraAnimParams(scrContext_t *scrContext, unsigned int firstParamIndex, unsigned int *outGraftAnimIndex, XAnimSubTreeID *outSubTreeID, unsigned int *outAnimIndex, XAnimCurveID *outBlendCurveID)
{
  return Scr_FixupExtraAnimParams(scrContext, firstParamIndex, outGraftAnimIndex, outSubTreeID, outAnimIndex, outBlendCurveID);
}

/*
==============
AIScriptedInterface::Free
==============
*/
void AIScriptedInterface::Free(AIScriptedInterface *this)
{
  Scr_FreeBlackboard(this->m_pAI->ent->s.number);
}

/*
==============
AIScriptedInterface::GetAI
==============
*/
ai_scripted_t *AIScriptedInterface::GetAI(AIScriptedInterface *this)
{
  if ( this->m_pAI )
    return this->m_pAI;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 84, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  return this->m_pAI;
}

/*
==============
AIScriptedInterface::GetAIScriptedIterator
==============
*/
AIIterator *AIScriptedInterface::GetAIScriptedIterator()
{
  if ( Com_GameMode_SupportsFeature(WEAPON_READY) )
    return AIActorInterface::GetAIActorIterator();
  if ( !BG_AgentSystemEnabled() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 96, ASSERT_TYPE_ASSERT, "( BG_AgentSystemEnabled() )", (const char *)&queryFormat, "BG_AgentSystemEnabled()") )
    __debugbreak();
  return AIAgentInterface::GetAIAgentIterator();
}

/*
==============
AIScriptedInterface::GetAimAnglesForNoShootPos
==============
*/
void AIScriptedInterface::GetAimAnglesForNoShootPos(AIScriptedInterface *this, ActorAimAngleParam *params, const vec3_t *shootFromPos, vec3_t *outAimAngles)
{
  gentity_s *TargetEntity; 
  gentity_s *v11; 
  sentient_s *sentient; 
  scrContext_t *v13; 
  pathnode_t *pClaimedNode; 
  unsigned int type; 
  int v29; 
  bool v30; 
  unsigned __int16 v31; 
  char v43; 
  vec3_t outShootAtPos; 
  vec3_t pos; 

  __asm
  {
    vmovaps [rsp+0A8h+var_38], xmm6
    vmovaps [rsp+0A8h+var_48], xmm7
  }
  _RBP = outAimAngles;
  _RSI = params;
  TargetEntity = AICommonInterface::GetTargetEntity(this);
  v11 = TargetEntity;
  if ( TargetEntity && ((sentient = TargetEntity->sentient) != NULL && AICommonInterface::RecentlySeeSentient(this, sentient, 5000) || !v11->sentient && AICommonInterface::CanSeeEntity(this, v11)) )
  {
    __asm { vmovaps [rsp+0A8h+var_58], xmm8 }
    v13 = ScriptContext_Server();
    GScr_EntityGetShootAtPos(v13, v11, &outShootAtPos);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+0A8h+outShootAtPos]
      vsubss  xmm6, xmm0, dword ptr [rdi+130h]
      vmovss  xmm1, dword ptr [rsp+0A8h+outShootAtPos+4]
      vmovss  xmm0, dword ptr [rsp+0A8h+outShootAtPos+8]
      vsubss  xmm7, xmm1, dword ptr [rdi+134h]
      vsubss  xmm8, xmm0, dword ptr [rdi+138h]
    }
    Sentient_GetLastKnownEnemyPos(this->m_pAI->sentient, v11, &outShootAtPos);
    __asm
    {
      vaddss  xmm3, xmm6, dword ptr [rsp+0A8h+outShootAtPos]
      vsubss  xmm0, xmm3, dword ptr [r14]
      vaddss  xmm1, xmm7, dword ptr [rsp+0A8h+outShootAtPos+4]
      vaddss  xmm2, xmm8, dword ptr [rsp+0A8h+outShootAtPos+8]
      vmovss  dword ptr [rsi], xmm0
      vmovss  dword ptr [rsp+0A8h+outShootAtPos+4], xmm1
      vsubss  xmm1, xmm1, dword ptr [r14+4]
      vmovss  dword ptr [rsi+4], xmm1
      vsubss  xmm0, xmm2, dword ptr [r14+8]
      vmovss  dword ptr [rsi+8], xmm0
      vmovss  dword ptr [rsp+0A8h+outShootAtPos], xmm3
      vmovss  dword ptr [rsp+0A8h+outShootAtPos+8], xmm2
    }
    AIScriptedInterface::GetDesiredAimAngles(this, _RSI, _RBP);
    __asm { vmovaps xmm8, [rsp+0A8h+var_58] }
  }
  else
  {
    pClaimedNode = this->m_pAI->sentient->pClaimedNode;
    if ( !pClaimedNode )
      goto LABEL_24;
    type = pClaimedNode->constant.type;
    v30 = 0;
    if ( (unsigned __int16)type <= 0x19u )
    {
      v29 = 35127808;
      if ( _bittest(&v29, type) )
        v30 = 1;
    }
    if ( AIScriptedInterface::IsDoingAmbush(this) )
      goto LABEL_24;
    if ( !v30 )
      goto LABEL_24;
    v31 = pClaimedNode->constant.type;
    if ( v31 == 25 )
      goto LABEL_24;
    if ( v31 == 20 )
      goto LABEL_24;
    pathnode_t::GetPos(pClaimedNode, &pos);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+0A8h+pos]
      vmovss  xmm1, dword ptr [rsp+0A8h+pos+4]
      vsubss  xmm3, xmm0, dword ptr [rsi+130h]
      vsubss  xmm2, xmm1, dword ptr [rsi+134h]
      vmovss  xmm0, dword ptr [rsp+0A8h+pos+8]
      vsubss  xmm4, xmm0, dword ptr [rsi+138h]
      vmulss  xmm2, xmm2, xmm2
      vmulss  xmm1, xmm3, xmm3
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm3, xmm2, xmm1
      vaddss  xmm2, xmm3, xmm0
      vcomiss xmm2, cs:__real@41800000
    }
    if ( !v43 )
    {
LABEL_24:
      if ( !this->Is3D(this) && tacpoint_ref_t::IsDefined(&this->m_pAI->sight.faceLikelyEnemyTacPoint) )
      {
        _RAX = this->m_pAI;
        __asm
        {
          vmovss  xmm4, cs:__real@3b360b61
          vxorps  xmm7, xmm7, xmm7
          vmovss  xmm0, dword ptr [rax+0C8h]
          vsubss  xmm1, xmm0, dword ptr [rcx+140h]
          vmulss  xmm3, xmm1, xmm4
          vaddss  xmm1, xmm3, cs:__real@3f000000
          vroundss xmm2, xmm7, xmm1, 1
          vsubss  xmm0, xmm3, xmm2
          vmulss  xmm0, xmm0, cs:__real@43b40000
          vmovss  dword ptr [rbp+4], xmm0
          vmulss  xmm4, xmm4, dword ptr [rax+0C4h]
          vaddss  xmm2, xmm4, cs:__real@3f000000
          vroundss xmm3, xmm7, xmm2, 1
          vsubss  xmm0, xmm4, xmm3
          vmulss  xmm1, xmm0, cs:__real@43b40000
          vmovss  dword ptr [rbp+0], xmm1
        }
      }
    }
    else
    {
      *(double *)&_XMM0 = pathnode_t::GetAngle(pClaimedNode);
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
        vmovss  dword ptr [rbp+4], xmm1
      }
    }
  }
  __asm
  {
    vmovaps xmm6, [rsp+0A8h+var_38]
    vmovaps xmm7, [rsp+0A8h+var_48]
  }
}

/*
==============
AIScriptedInterface::GetAlertLevel
==============
*/
__int64 AIScriptedInterface::GetAlertLevel(AIScriptedInterface *this)
{
  return *(unsigned int *)g_AIAlertLevelStrs[this->m_pAI->combat.alertLevel];
}

/*
==============
AIScriptedInterface::GetAnimMode
==============
*/
__int64 AIScriptedInterface::GetAnimMode(AIScriptedInterface *this)
{
  return (unsigned int)this->m_pAI->eAnimMode;
}

/*
==============
AIScriptedInterface::GetApproxAdjustedGunParams
==============
*/
void AIScriptedInterface::GetApproxAdjustedGunParams(AIScriptedInterface *this, ApproxGunParams *pOutGunParams)
{
  const Weapon *v4; 
  weapClass_t WeaponClass; 

  v4 = this->GetEquippedWeapon(this);
  WeaponClass = BG_GetWeaponClass(v4, 0);
  if ( AIScriptedInterface::IsMountedAtLMGNode(this) )
  {
    GetApproxGunParamsForMountedLMG(pOutGunParams);
  }
  else if ( this->HasRiotshield(this) )
  {
    GetApproxGunParamsForRiotshield(pOutGunParams);
  }
  else
  {
    GetApproxGunParams(WeaponClass, pOutGunParams);
  }
}

/*
==============
AIScriptedInterface::GetApproxEyePos
==============
*/
void AIScriptedInterface::GetApproxEyePos(AIScriptedInterface *this, vec3_t *outEyePos, bool bIgnoreNode)
{
  const nav_space_s *m_pSpace; 
  pathnode_t *v10; 
  ai_scripted_t *m_pAI; 
  ai_stance_e eCurrentStance; 
  __int16 type; 
  const Weapon *v22; 
  ai_scripted_t *v26; 
  AINavigator *pNavigator; 
  vec3_t outUp; 

  __asm { vmovaps [rsp+88h+var_38], xmm6 }
  _R15 = outEyePos;
  m_pSpace = NULL;
  if ( Path_NodeValid(this->m_pAI->coverInfo.nodeID) )
    v10 = Path_ConvertIndexToNode(this->m_pAI->coverInfo.nodeID);
  else
    v10 = NULL;
  m_pAI = this->m_pAI;
  eCurrentStance = m_pAI->eCurrentStance;
  if ( eCurrentStance == STANCE_PRONE )
  {
    __asm { vmovss  xmm6, cs:__real@41300000 }
  }
  else if ( eCurrentStance == STANCE_CROUCH )
  {
    if ( bIgnoreNode || !v10 || m_pAI->blackboard.m_CoverState == scr_const.exposed )
    {
      __asm { vmovss  xmm6, cs:__real@422c0000 }
    }
    else
    {
      _ECX = 1;
      __asm
      {
        vmovss  xmm2, cs:__real@42180000
        vmovd   xmm1, ecx
      }
      _EAX = v10->constant.type - 6;
      __asm
      {
        vmovd   xmm0, eax
        vpcmpgtq xmm3, xmm0, xmm1
        vmovss  xmm1, cs:__real@41f00000
        vblendvps xmm6, xmm1, xmm2, xmm3
      }
    }
  }
  else
  {
    if ( eCurrentStance != STANCE_STAND && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 1830, ASSERT_TYPE_ASSERT, "(m_pAI->eCurrentStance == STANCE_STAND)", (const char *)&queryFormat, "m_pAI->eCurrentStance == STANCE_STAND") )
      __debugbreak();
    if ( v10 )
    {
      type = v10->constant.type;
      if ( type == 31 )
        type = v10->dynamic.turretEntNumber;
    }
    else
    {
      type = 9;
    }
    v22 = this->GetEquippedWeapon(this);
    if ( v22->weaponIdx && BG_GetWeaponClass(v22, 0) == WEAPCLASS_MG && v10 && type == 2 && (v10->constant.spawnflags & 0x10200) == 0x10000 )
    {
      __asm { vmovss  xmm6, cs:__real@42800000 }
    }
    else if ( bIgnoreNode || !v10 || type == 9 )
    {
      __asm { vmovss  xmm6, cs:__real@42680000 }
    }
    else
    {
      __asm { vmovss  xmm6, cs:__real@42500000 }
    }
  }
  v26 = this->m_pAI;
  __asm
  {
    vmovss  xmm3, cs:__real@3f800000
    vxorps  xmm0, xmm0, xmm0
    vxorps  xmm2, xmm2, xmm2
    vmovss  dword ptr [rsp+88h+outUp], xmm0
    vmovss  dword ptr [rsp+88h+outUp+4], xmm2
    vmovss  dword ptr [rsp+88h+outUp+8], xmm3
  }
  pNavigator = v26->pNavigator;
  if ( pNavigator )
    m_pSpace = pNavigator->m_pSpace;
  if ( m_pSpace )
  {
    Nav_GetSpaceUp(m_pSpace, &outUp);
    __asm
    {
      vmovss  xmm3, dword ptr [rsp+88h+outUp+8]
      vmovss  xmm2, dword ptr [rsp+88h+outUp+4]
      vmovss  xmm0, dword ptr [rsp+88h+outUp]
    }
  }
  __asm
  {
    vmulss  xmm0, xmm0, xmm6
    vmulss  xmm2, xmm2, xmm6
    vaddss  xmm1, xmm0, dword ptr [rax+130h]
    vmovss  dword ptr [r15], xmm1
    vaddss  xmm0, xmm2, dword ptr [rax+134h]
    vmulss  xmm1, xmm3, xmm6
    vmovss  dword ptr [r15+4], xmm0
    vaddss  xmm2, xmm1, dword ptr [rax+138h]
    vmovss  dword ptr [r15+8], xmm2
    vmovaps xmm6, [rsp+88h+var_38]
  }
}

/*
==============
AIScriptedInterface::GetBTGoal
==============
*/
ai_script_goal_t *AIScriptedInterface::GetBTGoal(AIScriptedInterface *this)
{
  ai_scripted_t *m_pAI; 
  int v2; 
  __int64 v3; 
  bool *i; 

  m_pAI = this->m_pAI;
  v2 = 2;
  v3 = 2i64;
  for ( i = &m_pAI->btGoals[2].bValid; !*i; i -= 56 )
  {
    --v2;
    if ( --v3 < 0 )
      return 0i64;
  }
  return &m_pAI->btGoals[v2];
}

/*
==============
AIScriptedInterface::GetBaseOverrideArchetype
==============
*/
__int64 AIScriptedInterface::GetBaseOverrideArchetype(AIScriptedInterface *this)
{
  ai_scripted_t *m_pAI; 
  scr_string_t AnimsetName; 

  m_pAI = this->m_pAI;
  if ( !m_pAI->overrideArchetypes[0] )
  {
    AnimsetName = BG_AnimationState_GetAnimsetName(&m_pAI->ent->s);
    AIScriptedInterface::SetBaseOverrideArchetype(this, AnimsetName);
    m_pAI = this->m_pAI;
  }
  return (unsigned int)m_pAI->overrideArchetypes[0];
}

/*
==============
AIScriptedInterface::GetBestStance
==============
*/
__int64 AIScriptedInterface::GetBestStance(AIScriptedInterface *this, ai_stance_e desiredStance)
{
  bool DoesNodeAllowStance; 
  bool v5; 
  bool v6; 
  pathnode_t *v7; 
  ai_scripted_t *m_pAI; 
  pathnode_t *pClaimedNode; 
  ai_scripted_t *v10; 
  const Weapon *v23; 
  sentient_s *sentient; 
  pathnode_t *v25; 
  char v37; 
  char v48; 
  ai_scripted_t *v49; 
  vec3_t pos; 

  DoesNodeAllowStance = 1;
  v5 = 1;
  v6 = 1;
  if ( Path_NodeValid(this->m_pAI->coverInfo.nodeID) )
  {
    v7 = Path_ConvertIndexToNode(this->m_pAI->coverInfo.nodeID);
    if ( v7 )
    {
      if ( v7 == this->m_pAI->sentient->pClaimedNode )
      {
        DoesNodeAllowStance = Path_DoesNodeAllowStance(v7, (const scr_string_t)scr_const.stand);
        v5 = Path_DoesNodeAllowStance(v7, (const scr_string_t)scr_const.crouch);
        v6 = Path_DoesNodeAllowStance(v7, (const scr_string_t)scr_const.prone);
        goto LABEL_29;
      }
    }
  }
  if ( !AICommonInterface::HasPath(this) )
  {
    m_pAI = this->m_pAI;
    pClaimedNode = m_pAI->sentient->pClaimedNode;
    if ( pClaimedNode )
    {
      if ( ((1 << LOBYTE(pClaimedNode->constant.type)) & 0x2000200) != 0 && AIScriptedInterface::PointNearClaimNode(this, &m_pAI->ent->r.currentOrigin) )
      {
        DoesNodeAllowStance = Path_DoesNodeAllowStance(this->m_pAI->sentient->pClaimedNode, (const scr_string_t)scr_const.stand);
        v5 = Path_DoesNodeAllowStance(this->m_pAI->sentient->pClaimedNode, (const scr_string_t)scr_const.crouch);
        v6 = Path_DoesNodeAllowStance(this->m_pAI->sentient->pClaimedNode, (const scr_string_t)scr_const.prone);
        goto LABEL_29;
      }
    }
  }
  if ( desiredStance == STANCE_STAND && !this->IsCodeMoveRequested(this) && !this->Is3D(this) && AIScriptedInterface::IsStanceAllowed(this, STANCE_CROUCH) )
  {
    v10 = this->m_pAI;
    if ( v10->fixedNode && v10->scriptGoal.node && !((unsigned __int8 (__fastcall *)(AINavigator *))v10->pNavigator->IsNodeUsable)(v10->pNavigator) )
      return 2i64;
    _RCX = this->m_pAI;
    if ( _RCX->blackboard.m_ShootParams.m_bValid && _RCX->blackboard.m_ShootParams.m_bPosValid )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+1F0h]
        vmovss  xmm1, dword ptr [rcx+1F4h]
        vsubss  xmm3, xmm0, dword ptr [rax+130h]
        vsubss  xmm2, xmm1, dword ptr [rax+134h]
        vmovss  xmm0, dword ptr [rcx+1F8h]
        vsubss  xmm4, xmm0, dword ptr [rax+138h]
        vmulss  xmm2, xmm2, xmm2
        vmulss  xmm1, xmm3, xmm3
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm3, xmm2, xmm1
        vaddss  xmm2, xmm3, xmm0
        vcomiss xmm2, cs:__real@48800000
      }
      if ( _RCX->blackboard.m_ShootParams.m_bPosValid )
      {
        v23 = this->GetEquippedWeapon(this);
        if ( !v23->weaponIdx || BG_GetWeaponClass(v23, 0) != WEAPCLASS_PISTOL )
        {
          sentient = this->m_pAI->sentient;
          v25 = sentient->pClaimedNode;
          if ( !v25 )
            goto LABEL_56;
          pathnode_t::GetPos(sentient->pClaimedNode, &pos);
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+78h+pos]
            vmovss  xmm1, dword ptr [rsp+78h+pos+4]
            vsubss  xmm3, xmm0, dword ptr [rcx+130h]
            vsubss  xmm2, xmm1, dword ptr [rcx+134h]
            vmovss  xmm0, dword ptr [rsp+78h+pos+8]
            vsubss  xmm4, xmm0, dword ptr [rcx+138h]
            vmulss  xmm2, xmm2, xmm2
            vmulss  xmm1, xmm3, xmm3
            vmulss  xmm0, xmm4, xmm4
            vaddss  xmm3, xmm2, xmm1
            vaddss  xmm2, xmm3, xmm0
            vcomiss xmm2, cs:__real@41800000
          }
          if ( !v37 )
            goto LABEL_56;
          if ( Path_DoesNodeAllowStance(v25, (const scr_string_t)scr_const.crouch) )
            goto LABEL_56;
          *(double *)&_XMM0 = pathnode_t::GetAngle(v25);
          __asm
          {
            vsubss  xmm1, xmm0, dword ptr [rbx+140h]
            vmulss  xmm5, xmm1, cs:__real@3b360b61
            vaddss  xmm2, xmm5, cs:__real@3f000000
            vxorps  xmm1, xmm1, xmm1
            vxorps  xmm0, xmm0, xmm0
            vmovss  xmm3, xmm0, xmm2
            vroundss xmm4, xmm1, xmm3, 1
            vsubss  xmm0, xmm5, xmm4
            vmulss  xmm1, xmm0, cs:__real@43b40000
            vandps  xmm1, xmm1, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
            vcomiss xmm1, cs:__real@42b40000
          }
          if ( !(v37 | v48) )
          {
LABEL_56:
            v49 = this->m_pAI;
            if ( !v49->avoidanceBlockedData.blocked && level.time > v49->iTeamMoveWaitTime )
            {
              _RAX = v49->ent;
              __asm
              {
                vmovss  xmm0, dword ptr [rax+130h]
                vmovss  dword ptr [rsp+78h+pos], xmm0
                vmovss  xmm1, dword ptr [rax+134h]
                vmovss  dword ptr [rsp+78h+pos+4], xmm1
                vmovss  xmm0, dword ptr [rax+138h]
                vaddss  xmm2, xmm0, cs:__real@42000000
                vmovss  dword ptr [rsp+78h+pos+8], xmm2
              }
              if ( AICommonInterface::SightTrace(this, &pos, &v49->blackboard.m_ShootParams.m_Pos, 2047, NORMAL_FOLIAGE_CHECKS) )
                return 2i64;
            }
          }
        }
      }
    }
  }
  while ( 1 )
  {
LABEL_29:
    if ( desiredStance == STANCE_STAND )
    {
      if ( !DoesNodeAllowStance )
        goto LABEL_42;
      if ( AIScriptedInterface::IsStanceAllowed(this, STANCE_STAND) )
        return 1i64;
    }
    else if ( desiredStance == STANCE_CROUCH )
    {
      if ( v5 && AIScriptedInterface::IsStanceAllowed(this, STANCE_CROUCH) )
        return 2i64;
    }
    else if ( desiredStance == STANCE_PRONE && v6 && AIScriptedInterface::IsStanceAllowed(this, STANCE_PRONE) )
    {
      return 4i64;
    }
    if ( DoesNodeAllowStance && AIScriptedInterface::IsStanceAllowed(this, STANCE_STAND) )
      return 1i64;
LABEL_42:
    if ( v5 && AIScriptedInterface::IsStanceAllowed(this, STANCE_CROUCH) )
      return 2i64;
    if ( v6 && AIScriptedInterface::IsStanceAllowed(this, STANCE_PRONE) )
      return 4i64;
    if ( DoesNodeAllowStance && v5 && v6 )
      break;
    DoesNodeAllowStance = 1;
    v5 = 1;
    v6 = 1;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 960, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "No stances allowed on actor - at least one stance must always be allowed") )
    __debugbreak();
  return 2i64;
}

/*
==============
AIScriptedInterface::GetCachedTurnSpeed
==============
*/
char AIScriptedInterface::GetCachedTurnSpeed(AIScriptedInterface *this, const vec3_t *nextCorner, float *outTargetSpeed)
{
  int v4; 

  _R9 = this->m_pAI;
  v4 = _R9->turnSlowdownData.timeStamp + 500;
  if ( v4 <= level.time )
    return 0;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx]
    vucomiss xmm0, dword ptr [r9+634h]
  }
  if ( v4 != level.time )
    return 0;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+4]
    vucomiss xmm0, dword ptr [r9+638h]
  }
  if ( v4 != level.time )
    return 0;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+8]
    vucomiss xmm0, dword ptr [r9+63Ch]
  }
  if ( v4 != level.time )
    return 0;
  *outTargetSpeed = _R9->turnSlowdownData.scaledSpeed;
  return 1;
}

/*
==============
AIScriptedInterface::GetClosestPlayerOnTeam
==============
*/

gentity_s *__fastcall AIScriptedInterface::GetClosestPlayerOnTeam(AIScriptedInterface *this, double maxDist)
{
  ai_scripted_t *m_pAI; 
  gentity_s *v8; 
  int v9; 
  bool v10; 
  sentient_s *sentient; 
  team_t eTeam; 
  __int64 v19; 
  sentient_s *v21; 
  gentity_s *result; 
  __int64 v38; 
  __int64 v39; 
  void *retaddr; 

  _R11 = &retaddr;
  m_pAI = this->m_pAI;
  v8 = NULL;
  __asm { vmovaps [rsp+0A8h+var_38], xmm6 }
  v9 = 0;
  v10 = level.maxclients <= 0;
  __asm { vmovaps [rsp+0A8h+var_48], xmm7 }
  sentient = m_pAI->sentient;
  __asm
  {
    vmovaps xmmword ptr [r11-58h], xmm8
    vmovaps xmmword ptr [r11-68h], xmm9
    vmulss  xmm6, xmm1, xmm1
  }
  eTeam = sentient->eTeam;
  _RAX = m_pAI->ent;
  __asm
  {
    vmovss  xmm7, dword ptr [rax+130h]
    vmovss  xmm8, dword ptr [rax+134h]
    vmovss  xmm9, dword ptr [rax+138h]
  }
  if ( !v10 )
  {
    _RDI = 0i64;
    v19 = 0i64;
    do
    {
      if ( (unsigned int)v9 >= 0x800 )
      {
        LODWORD(v39) = 2048;
        LODWORD(v38) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v38, v39) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[_RDI].r.isInUse != g_entityIsInUse[v19] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( g_entityIsInUse[v19] )
      {
        _RCX = g_entities;
        if ( eTeam )
        {
          v21 = g_entities[_RDI].sentient;
          if ( eTeam == v21->eTeam )
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rdi+rcx+130h]
              vmovss  xmm1, dword ptr [rdi+rcx+134h]
              vsubss  xmm3, xmm0, xmm7
              vmovss  xmm0, dword ptr [rdi+rcx+138h]
              vsubss  xmm2, xmm1, xmm8
              vsubss  xmm4, xmm0, xmm9
              vmulss  xmm2, xmm2, xmm2
              vmulss  xmm1, xmm3, xmm3
              vmulss  xmm0, xmm4, xmm4
              vaddss  xmm3, xmm2, xmm1
              vaddss  xmm5, xmm3, xmm0
              vcomiss xmm5, xmm6
            }
            if ( (unsigned int)eTeam < v21->eTeam )
            {
              __asm { vmovaps xmm6, xmm5 }
              v8 = &g_entities[v9];
            }
          }
        }
      }
      ++v9;
      ++v19;
      ++_RDI;
    }
    while ( v9 < level.maxclients );
  }
  __asm { vmovaps xmm6, [rsp+0A8h+var_38] }
  result = v8;
  __asm
  {
    vmovaps xmm7, [rsp+0A8h+var_48]
    vmovaps xmm8, [rsp+0A8h+var_58]
    vmovaps xmm9, [rsp+0A8h+var_68]
  }
  return result;
}

/*
==============
AIScriptedInterface::GetCodeOrientmode
==============
*/
__int64 AIScriptedInterface::GetCodeOrientmode(AIScriptedInterface *this)
{
  return (unsigned int)this->m_pAI->CodeOrient.eMode;
}

/*
==============
AIScriptedInterface::GetCoverNode
==============
*/
pathnode_t *AIScriptedInterface::GetCoverNode(AIScriptedInterface *this)
{
  if ( Path_NodeValid(this->m_pAI->coverInfo.nodeID) )
    return Path_ConvertIndexToNode(this->m_pAI->coverInfo.nodeID);
  else
    return 0i64;
}

/*
==============
AIScriptedInterface::GetCoverSearchInterval
==============
*/
__int64 AIScriptedInterface::GetCoverSearchInterval(AIScriptedInterface *this)
{
  __int64 result; 
  const dvar_t *v2; 

  result = (unsigned int)this->m_pAI->nodeSelect.coverSearchInterval;
  if ( (int)result < 1000 )
  {
    v2 = DVARINT_ai_coverSearchInterval;
    if ( !DVARINT_ai_coverSearchInterval && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_coverSearchInterval") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v2);
    return v2->current.unsignedInt;
  }
  return result;
}

/*
==============
AIScriptedInterface::GetCoverTacPoint
==============
*/
tacpoint_t *AIScriptedInterface::GetCoverTacPoint(AIScriptedInterface *this)
{
  return tacpoint_ref_t::GetPoint(&this->m_pAI->coverTacPoint);
}

/*
==============
AIScriptedInterface::GetDefaultSpeed
==============
*/
float AIScriptedInterface::GetDefaultSpeed(AIScriptedInterface *this)
{
  const dvar_t *v4; 
  int iLastWhizbyAnimTime; 
  const char *v7; 

  _RAX = this->m_pAI;
  if ( !_RAX->script_desiredSpeedEnabled )
  {
    if ( !_RAX->bAllowSpeedUpWhenCombatHot )
      goto LABEL_12;
    v4 = DVARBOOL_ai_hotCombatSpeedEnabled;
    if ( !DVARBOOL_ai_hotCombatSpeedEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_hotCombatSpeedEnabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    if ( v4->current.enabled && (iLastWhizbyAnimTime = this->m_pAI->iLastWhizbyAnimTime, iLastWhizbyAnimTime > 0) && level.time < iLastWhizbyAnimTime + 10000 )
    {
      _RBX = DVARFLT_ai_movementHotDefaultSpeed;
      if ( !DVARFLT_ai_movementHotDefaultSpeed )
      {
        v7 = "ai_movementHotDefaultSpeed";
        goto LABEL_14;
      }
    }
    else
    {
LABEL_12:
      _RBX = DVARFLT_ai_movementDefaultSpeed;
      if ( !DVARFLT_ai_movementDefaultSpeed )
      {
        v7 = "ai_movementDefaultSpeed";
LABEL_14:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v7) )
          __debugbreak();
      }
    }
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+28h]
      vmulss  xmm0, xmm0, dword ptr [rax+0B38h]
    }
    return *(float *)&_XMM0;
  }
  __asm { vmovss  xmm0, dword ptr [rax+0B48h] }
  return *(float *)&_XMM0;
}

/*
==============
AIScriptedInterface::GetDesiredAimAngles
==============
*/
void AIScriptedInterface::GetDesiredAimAngles(AIScriptedInterface *this, ActorAimAngleParam *params, vec3_t *outAimAngles)
{
  ai_scripted_t *m_pAI; 
  vec3_t vec; 
  vec3_t angles; 
  tmat33_t<vec3_t> out; 
  tmat33_t<vec3_t> axis; 
  char v92; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
  }
  _RSI = outAimAngles;
  _RBX = params;
  if ( this->Is3D(this) )
  {
    AnglesToAxis(&this->m_pAI->ent->r.currentAngles, &axis);
    MatrixInverse(&axis, &out);
    if ( _RBX == (ActorAimAngleParam *)&vec && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
      __debugbreak();
    __asm
    {
      vmovss  xmm6, dword ptr [rbx+4]
      vmovss  xmm5, dword ptr [rbx]
      vmovss  xmm7, dword ptr [rbx+8]
      vmulss  xmm1, xmm5, dword ptr [rsp+108h+out]
      vmulss  xmm3, xmm5, dword ptr [rsp+108h+out+4]
      vmulss  xmm0, xmm6, dword ptr [rsp+108h+out+0Ch]
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm7, dword ptr [rsp+108h+out+18h]
      vaddss  xmm2, xmm2, xmm1
      vmulss  xmm1, xmm6, dword ptr [rsp+108h+out+10h]
      vaddss  xmm4, xmm3, xmm1
      vmulss  xmm3, xmm5, dword ptr [rsp+108h+out+8]
      vmovss  dword ptr [rsp+108h+vec], xmm2
      vmulss  xmm2, xmm7, dword ptr [rsp+108h+out+1Ch]
      vaddss  xmm1, xmm4, xmm2
      vmulss  xmm2, xmm6, dword ptr [rsp+108h+out+14h]
      vmovss  dword ptr [rsp+108h+vec+4], xmm1
      vmulss  xmm1, xmm7, dword ptr [rsp+108h+out+20h]
      vaddss  xmm4, xmm3, xmm2
      vaddss  xmm2, xmm4, xmm1
      vmovss  dword ptr [rsp+108h+vec+8], xmm2
    }
    vectoangles(&vec, _RSI);
    __asm
    {
      vmovss  xmm4, cs:__real@3b360b61
      vmulss  xmm3, xmm4, dword ptr [rsi]
      vmovss  xmm7, cs:__real@3f000000
      vmulss  xmm5, xmm4, dword ptr [rsi+4]
      vmulss  xmm4, xmm4, dword ptr [rsi+8]
      vmovss  xmm6, cs:__real@43b40000
      vaddss  xmm1, xmm3, xmm7
      vxorps  xmm8, xmm8, xmm8
      vroundss xmm2, xmm8, xmm1, 1
      vsubss  xmm0, xmm3, xmm2
      vmulss  xmm0, xmm0, xmm6
      vmovss  dword ptr [rsi], xmm0
      vaddss  xmm2, xmm4, xmm7
      vroundss xmm3, xmm8, xmm2, 1
      vsubss  xmm1, xmm4, xmm3
      vmulss  xmm0, xmm1, xmm6
      vmovss  dword ptr [rsi+8], xmm0
      vaddss  xmm2, xmm5, xmm7
      vroundss xmm3, xmm8, xmm2, 1
      vsubss  xmm1, xmm5, xmm3
      vmulss  xmm0, xmm1, xmm6
      vmovss  dword ptr [rsi+4], xmm0
    }
  }
  else
  {
    __asm { vmovaps [rsp+108h+var_58], xmm9 }
    vectoangles(&_RBX->shootDir, &angles);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+10h]
      vmovss  xmm1, dword ptr [rbx+0Ch]
      vmovss  xmm5, cs:__real@3b360b61
      vmovss  xmm7, cs:__real@3f000000
      vmovss  xmm8, cs:__real@43b40000
      vxorps  xmm6, xmm6, xmm6
      vaddss  xmm9, xmm0, dword ptr [rcx+140h]
      vaddss  xmm2, xmm1, dword ptr [rcx+13Ch]
      vmovss  xmm0, dword ptr [rsp+108h+angles]
      vsubss  xmm3, xmm0, xmm2
      vmulss  xmm4, xmm3, xmm5
      vaddss  xmm1, xmm4, xmm7
      vroundss xmm2, xmm6, xmm1, 1
      vsubss  xmm0, xmm4, xmm2
      vmulss  xmm0, xmm0, xmm8
      vmovss  dword ptr [rsi], xmm0
    }
    if ( _RBX->useStepoutYaw )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+108h+angles+4]
        vsubss  xmm1, xmm0, dword ptr [rbx+18h]
        vsubss  xmm2, xmm1, dword ptr [rbx+10h]
      }
    }
    else
    {
      m_pAI = this->m_pAI;
      _RCX = m_pAI->ent;
      if ( m_pAI->ent->tagInfo )
      {
        __asm { vxorps  xmm1, xmm1, xmm1 }
      }
      else
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rcx+140h]
          vsubss  xmm1, xmm0, dword ptr [rax+138h]
          vmulss  xmm4, xmm1, xmm5
          vaddss  xmm2, xmm4, xmm7
          vroundss xmm3, xmm6, xmm2, 1
          vsubss  xmm0, xmm4, xmm3
          vmulss  xmm1, xmm0, cs:__real@43340000
        }
      }
      __asm
      {
        vmovss  dword ptr [rsi+4], xmm1
        vmovss  xmm0, dword ptr [rsp+108h+angles+4]
        vsubss  xmm1, xmm0, xmm9
        vaddss  xmm2, xmm1, dword ptr [rsi+4]
      }
    }
    __asm
    {
      vmulss  xmm3, xmm2, xmm5
      vaddss  xmm1, xmm3, xmm7
      vroundss xmm2, xmm6, xmm1, 1
      vsubss  xmm0, xmm3, xmm2
      vmulss  xmm0, xmm0, xmm8
      vmovss  dword ptr [rsi+4], xmm0
      vmovaps xmm9, [rsp+108h+var_58]
    }
  }
  _R11 = &v92;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
AIScriptedInterface::GetDesiredMoveDelta
==============
*/

__int64 __fastcall AIScriptedInterface::GetDesiredMoveDelta(AIScriptedInterface *this, double fMoveDist, int groundEntNum, const vec3_t *currentMoveDelta, vec3_t *outMoveDelta, nav_posAlongPathResults_t *pathResults, vec3_t *velocity, int blendWithOldVelocity)
{
  __int64 v17; 
  AINavigator *pNavigator; 
  int m_TimeOfLastBlockage; 
  unsigned __int8 v24; 
  __int64 result; 
  int v41; 
  vec3_t desiredMoveDelta; 
  vec3_t myPos; 
  vec3_t endPos; 
  vec3_t outCurPos; 
  int ptr[10]; 
  char v105; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovaps xmmword ptr [rax-88h], xmm9
    vmovaps xmmword ptr [rax-98h], xmm11
    vmovaps xmmword ptr [rax-0A8h], xmm12
    vmovaps xmmword ptr [rax-0B8h], xmm13
  }
  v17 = groundEntNum;
  __asm { vmovaps xmm8, xmm1 }
  _RDI = outMoveDelta;
  _RSI = pathResults;
  Sys_ProfBeginNamedEvent(0xFF808080, "AI_GetDesiredMoveDelta");
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 3141, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  pNavigator = this->m_pAI->pNavigator;
  if ( !pNavigator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 3144, ASSERT_TYPE_ASSERT, "(pNavigator)", (const char *)&queryFormat, "pNavigator") )
    __debugbreak();
  m_TimeOfLastBlockage = pNavigator->m_TimeOfLastBlockage;
  if ( m_TimeOfLastBlockage && level.time - m_TimeOfLastBlockage <= 500 )
  {
    *(_QWORD *)outMoveDelta->v = 0i64;
    outMoveDelta->v[2] = 0.0;
  }
  else
  {
    __asm { vmovaps xmm1, xmm8; dist }
    if ( Nav_GetPosAlongPath(pNavigator, *(float *)&_XMM1, 1, pathResults) )
    {
      _RCX = this->m_pAI->ent;
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+130h]
        vmovss  dword ptr [rsp+1A0h+myPos], xmm0
        vmovss  xmm1, dword ptr [rcx+134h]
        vmovss  dword ptr [rsp+1A0h+myPos+4], xmm1
      }
      Nav_GetPos(pNavigator, &outCurPos);
      __asm
      {
        vmovss  xmm2, dword ptr [rbp+0A0h+outCurPos+8]
        vmovss  dword ptr [rsp+1A0h+myPos+8], xmm2
        vmovss  xmm9, cs:__real@3f800000
      }
      if ( pathResults->m_PosType == POS_ON_SURFACE )
      {
        `eh vector constructor iterator'(ptr, 0x28ui64, 2ui64, (void (__fastcall *)(void *))nav_cornerdata_t::nav_cornerdata_t, (void (__fastcall *)(void *))nav_cornerdata_t::~nav_cornerdata_t);
        __asm { vmovss  xmm3, cs:__real@7f7fffff }
        v41 = ((__int64 (__fastcall *)(AINavigator *, int *, __int64))pNavigator->GetNextNCorners)(pNavigator, ptr, 2i64);
        __asm
        {
          vmovss  xmm4, dword ptr [rsp+1A0h+myPos]
          vmovss  xmm5, [rbp+0A0h+ptr]
          vsubss  xmm2, xmm4, xmm5
          vmovss  xmm6, dword ptr [rsp+1A0h+myPos+4]
          vmovss  xmm11, [rbp+0A0h+var_10C]
          vsubss  xmm0, xmm6, xmm11
          vmovss  xmm12, dword ptr [rsp+1A0h+myPos+8]
          vmovss  xmm13, [rbp+0A0h+var_108]
          vsubss  xmm3, xmm12, xmm13
          vmulss  xmm1, xmm0, xmm0
          vmulss  xmm0, xmm2, xmm2
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm3, xmm3
          vaddss  xmm7, xmm2, xmm1
        }
        if ( v41 == 2 )
          __asm { vcomiss xmm7, xmm9 }
        `eh vector destructor iterator'(ptr, 0x28ui64, 2ui64, (void (__fastcall *)(void *))nav_cornerdata_t::~nav_cornerdata_t);
        __asm { vmovss  xmm2, dword ptr [rsp+1A0h+myPos+8] }
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rsi]
        vsubss  xmm7, xmm0, dword ptr [rsp+1A0h+myPos]
        vmovss  xmm1, dword ptr [rsi+4]
        vsubss  xmm6, xmm1, dword ptr [rsp+1A0h+myPos+4]
        vmovss  xmm0, dword ptr [rsi+8]
        vsubss  xmm5, xmm0, xmm2
        vmulss  xmm2, xmm6, xmm6
        vmulss  xmm1, xmm7, xmm7
        vaddss  xmm3, xmm2, xmm1
        vmulss  xmm0, xmm5, xmm5
        vaddss  xmm2, xmm3, xmm0
        vsqrtss xmm4, xmm2, xmm2
        vcmpless xmm0, xmm4, cs:__real@80000000
        vblendvps xmm1, xmm4, xmm9, xmm0
        vdivss  xmm0, xmm9, xmm1
        vmulss  xmm2, xmm0, xmm7
        vmulss  xmm3, xmm0, xmm6
        vmulss  xmm1, xmm0, xmm5
        vminss  xmm8, xmm8, xmm4
        vmulss  xmm4, xmm2, xmm8
        vmovss  dword ptr [rsp+1A0h+desiredMoveDelta], xmm4
        vmulss  xmm2, xmm3, xmm8
        vmovss  dword ptr [rsp+1A0h+desiredMoveDelta+4], xmm2
        vmulss  xmm0, xmm1, xmm8
        vmovss  dword ptr [rsp+1A0h+desiredMoveDelta+8], xmm0
      }
      if ( blendWithOldVelocity )
      {
        AICommonInterface::BlendOldVelocityWithMoveDelta(this, &myPos, currentMoveDelta, &desiredMoveDelta, outMoveDelta);
        __asm
        {
          vmovss  xmm2, dword ptr [rdi+4]
          vmovss  xmm0, dword ptr [rdi]
          vmovss  xmm3, dword ptr [rdi+8]
          vmulss  xmm1, xmm0, xmm0
          vmulss  xmm0, xmm2, xmm2
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm3, xmm3
          vaddss  xmm2, xmm2, xmm1
          vsqrtss xmm8, xmm2, xmm2
        }
      }
      else
      {
        __asm
        {
          vmovss  dword ptr [rdi], xmm4
          vmovss  dword ptr [rdi+4], xmm2
          vmovss  dword ptr [rdi+8], xmm0
        }
      }
      if ( pathResults->m_PosType == POS_ON_SURFACE )
      {
        if ( AINavigator::ShouldPathOutOfBounds(pNavigator) )
          Nav_GetRequestedGoalPos(pNavigator, &endPos);
        else
          Nav_GetGoalPos(pNavigator, &endPos);
        __asm
        {
          vmovss  xmm6, cs:__real@41c00000
          vmovaps xmm3, xmm6; buffer
        }
        if ( !AICommonInterface::PointNearPoint(this, &endPos, &this->m_pAI->ent->r.currentOrigin, *(float *)&_XMM3) )
        {
          if ( BGMovingPlatforms::IsMovingPlatform(v17) )
          {
            _RSI = &g_entities[v17];
            if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 3242, ASSERT_TYPE_ASSERT, "(movingPlatformEnt)", (const char *)&queryFormat, "movingPlatformEnt") )
              __debugbreak();
            __asm
            {
              vmovss  xmm2, dword ptr [rsi+2ACh]
              vmovss  xmm0, dword ptr [rsi+2A8h]
              vmovss  xmm3, dword ptr [rsi+2B0h]
              vmulss  xmm1, xmm0, xmm0
              vmulss  xmm0, xmm2, xmm2
              vaddss  xmm2, xmm1, xmm0
              vmulss  xmm1, xmm3, xmm3
              vaddss  xmm4, xmm2, xmm1
              vcomiss xmm4, cs:__real@41200000
            }
          }
          __asm { vmovaps xmm1, xmm6 }
          if ( !((unsigned __int8 (__fastcall *)(AINavigator *))pNavigator->HasTraversalWithin)(pNavigator) )
          {
            __asm { vmovaps xmm1, xmm8; fMoveDist }
            AIScriptedInterface::GetAvoidanceDelta(this, *(const float *)&_XMM1, 1, velocity, outMoveDelta);
            v24 = 1;
            goto LABEL_11;
          }
        }
      }
    }
  }
  v24 = 0;
LABEL_11:
  Sys_ProfEndNamedEvent();
  result = v24;
  _R11 = &v105;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm11, xmmword ptr [r11-58h]
    vmovaps xmm12, xmmword ptr [r11-68h]
    vmovaps xmm13, xmmword ptr [r11-78h]
  }
  return result;
}

/*
==============
AIScriptedInterface::GetEquippedWeapon
==============
*/
const Weapon *AIScriptedInterface::GetEquippedWeapon(AIScriptedInterface *this)
{
  const scrContext_t *v2; 

  v2 = ScriptContext_Server();
  return GScr_Weapon_GetWeapon(v2, (const scr_weapon_t)this->m_pAI->currentWeapon);
}

/*
==============
AIScriptedInterface::GetExecutionVictimStance
==============
*/
__int64 AIScriptedInterface::GetExecutionVictimStance(AIScriptedInterface *this)
{
  return (unsigned int)(this->m_pAI->eCurrentStance == STANCE_PRONE) + 1;
}

/*
==============
AIScriptedInterface::GetGoalVolume
==============
*/
EntHandle *AIScriptedInterface::GetGoalVolume(AIScriptedInterface *this, EntHandle *a2)
{
  EntHandle *result; 

  result = a2;
  *a2 = this->m_pAI->scriptGoal.hVolume;
  return result;
}

/*
==============
AIScriptedInterface::GetGroundEntNum
==============
*/
__int64 AIScriptedInterface::GetGroundEntNum(AIScriptedInterface *this)
{
  return this->m_pAI->Physics.groundEntNum;
}

/*
==============
AIScriptedInterface::GetGunUpPose
==============
*/
char AIScriptedInterface::GetGunUpPose(AIScriptedInterface *this)
{
  const Weapon *v2; 

  if ( this->InScriptedState(this) )
    return 0;
  v2 = this->GetEquippedWeapon(this);
  if ( BG_GetWeaponClass(v2, 0) == WEAPCLASS_MG )
    return 3;
  if ( !this->m_pAI->bVisorDown )
    return 0;
  else
    return 4;
}

/*
==============
AIScriptedInterface::GetMotionAngles
==============
*/
void AIScriptedInterface::GetMotionAngles(AIScriptedInterface *this, vec3_t *angles)
{
  char v14; 
  char v15; 
  vec3_t vec; 
  vec3_t outLookaheadDir; 
  char v56; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm8
    vmovaps xmmword ptr [rax-38h], xmm9
  }
  _RDI = angles;
  this->GetVelocity(this, &vec);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+98h+vec]
    vmovss  xmm1, dword ptr [rsp+98h+vec+4]
    vmovss  xmm6, cs:__real@3f800000
    vmulss  xmm3, xmm0, xmm0
    vmulss  xmm2, xmm1, xmm1
    vaddss  xmm0, xmm3, xmm2
    vcomiss xmm0, xmm6
  }
  if ( v14 | v15 )
  {
    if ( !AICommonInterface::HasPath(this) )
      goto LABEL_12;
    *(double *)&_XMM0 = Nav_GetPathDistToGoal(this->m_pAI->pNavigator);
    __asm { vcomiss xmm0, xmm6 }
    if ( v14 )
    {
LABEL_12:
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vxorps  xmm9, xmm9, xmm9
      }
    }
    else
    {
      if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 1048, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
        __debugbreak();
      if ( !AICommonInterface::HasPath(this) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 1049, ASSERT_TYPE_ASSERT, "( HasPath() )", (const char *)&queryFormat, "HasPath()") )
        __debugbreak();
      Nav_GetLookaheadDir(this->m_pAI->pNavigator, &outLookaheadDir);
      *(double *)&_XMM0 = vectoyaw((const vec2_t *)&outLookaheadDir);
      __asm { vmovaps xmm6, xmm0 }
      *(double *)&_XMM0 = vectopitch(&outLookaheadDir);
      __asm
      {
        vxorps  xmm8, xmm8, xmm8
        vsubss  xmm0, xmm0, dword ptr [rax+134h]
        vsubss  xmm1, xmm6, dword ptr [rax+138h]
        vmulss  xmm4, xmm1, cs:__real@3b360b61
        vaddss  xmm2, xmm4, cs:__real@3f000000
        vxorps  xmm1, xmm1, xmm1
        vmovss  xmm2, xmm1, xmm2
        vroundss xmm3, xmm8, xmm2, 1
        vsubss  xmm1, xmm4, xmm3
        vmulss  xmm4, xmm0, cs:__real@3b360b61
        vmulss  xmm9, xmm1, cs:__real@43b40000
        vaddss  xmm2, xmm4, cs:__real@3f000000
        vxorps  xmm1, xmm1, xmm1
        vmovss  xmm0, xmm1, xmm2
        vroundss xmm3, xmm8, xmm0, 1
        vsubss  xmm1, xmm4, xmm3
        vmulss  xmm0, xmm1, cs:__real@43b40000
      }
    }
  }
  else
  {
    *(double *)&_XMM0 = vectoyaw((const vec2_t *)&vec);
    __asm { vmovaps xmm6, xmm0 }
    *(double *)&_XMM0 = vectopitch(&vec);
    __asm
    {
      vxorps  xmm8, xmm8, xmm8
      vsubss  xmm0, xmm0, dword ptr [rax+134h]
      vsubss  xmm1, xmm6, dword ptr [rax+138h]
      vmulss  xmm4, xmm1, cs:__real@3b360b61
      vaddss  xmm2, xmm4, cs:__real@3f000000
      vxorps  xmm1, xmm1, xmm1
      vmovss  xmm2, xmm1, xmm2
      vroundss xmm3, xmm8, xmm2, 1
      vsubss  xmm1, xmm4, xmm3
      vmulss  xmm4, xmm0, cs:__real@3b360b61
      vmulss  xmm9, xmm1, cs:__real@43b40000
      vaddss  xmm2, xmm4, cs:__real@3f000000
      vxorps  xmm1, xmm1, xmm1
      vmovss  xmm0, xmm1, xmm2
      vroundss xmm3, xmm8, xmm0, 1
      vsubss  xmm1, xmm4, xmm3
      vmulss  xmm0, xmm1, cs:__real@43b40000
    }
  }
  __asm
  {
    vmovss  dword ptr [rdi], xmm0
    vmovss  dword ptr [rdi+4], xmm9
  }
  _RDI->v[2] = 0.0;
  _R11 = &v56;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm8, xmmword ptr [r11-20h]
    vmovaps xmm9, xmmword ptr [r11-30h]
  }
}

/*
==============
AIScriptedInterface::GetNextCornerTurnSpeed
==============
*/
bool AIScriptedInterface::GetNextCornerTurnSpeed(AIScriptedInterface *this, float *outTargetSpeed)
{
  char v18; 
  bool v21; 
  bool outUsingCachedValue; 
  float outTargetSpeeda; 
  vec3_t outNextCorner; 

  _RSI = outTargetSpeed;
  if ( !this->m_pAI->pNavigator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 2636, ASSERT_TYPE_ASSERT, "(m_pAI->pNavigator)", (const char *)&queryFormat, "m_pAI->pNavigator") )
    __debugbreak();
  _RAX = this->m_pAI;
  if ( !_RAX->sharpTurnSpeedScalingEnabled )
    return 0;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+838h]
    vmovss  xmm2, dword ptr [rax+83Ch]
    vmovss  xmm3, dword ptr [rax+840h]
    vmulss  xmm1, xmm0, xmm0
  }
  _RDI = DCONST_DVARFLT_ai_minVelocityForTurnSlowdown;
  __asm
  {
    vmovaps [rsp+78h+var_18], xmm6
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm6, xmm2, xmm1
  }
  if ( !DCONST_DVARFLT_ai_minVelocityForTurnSlowdown && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_minVelocityForTurnSlowdown") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+28h]
    vmulss  xmm1, xmm0, xmm0
    vcomiss xmm6, xmm1
    vmovaps xmm6, [rsp+78h+var_18]
  }
  if ( v18 )
    return 0;
  __asm { vmovss  xmm0, dword ptr [rsi] }
  outUsingCachedValue = 0;
  __asm
  {
    vxorps  xmm1, xmm1, xmm1; distanceAlongPath
    vmovss  [rsp+78h+outTargetSpeed], xmm0
  }
  v21 = AIScriptedInterface::ProcessSharpTurnSpeedScale(this, *(float *)&_XMM1, &outNextCorner, &outTargetSpeeda, &outUsingCachedValue);
  if ( v21 && !outUsingCachedValue )
  {
    _RCX = this->m_pAI;
    __asm
    {
      vmovss  xmm1, dword ptr [rsp+78h+outNextCorner]
      vmovss  xmm0, dword ptr [rcx+0B58h]
      vmulss  xmm2, xmm0, dword ptr [rsi]
      vmovss  dword ptr [rcx+634h], xmm1
      vmovss  xmm0, dword ptr [rsp+78h+outNextCorner+4]
      vmovss  dword ptr [rcx+638h], xmm0
      vmovss  xmm1, dword ptr [rsp+78h+outNextCorner+8]
      vmaxss  xmm0, xmm2, [rsp+78h+outTargetSpeed]
      vmovss  dword ptr [rcx+63Ch], xmm1
      vmovss  dword ptr [rcx+640h], xmm0
    }
    this->m_pAI->turnSlowdownData.timeStamp = level.time;
    *_RSI = this->m_pAI->turnSlowdownData.scaledSpeed;
  }
  return v21;
}

/*
==============
AIScriptedInterface::GetPathLookaheadDir
==============
*/
void AIScriptedInterface::GetPathLookaheadDir(AIScriptedInterface *this, vec3_t *vLookaheadDir)
{
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 1048, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !AICommonInterface::HasPath(this) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 1049, ASSERT_TYPE_ASSERT, "( HasPath() )", (const char *)&queryFormat, "HasPath()") )
    __debugbreak();
  Nav_GetLookaheadDir(this->m_pAI->pNavigator, vLookaheadDir);
}

/*
==============
AIScriptedInterface::GetPitchToTarget
==============
*/
float AIScriptedInterface::GetPitchToTarget(AIScriptedInterface *this, scrContext_t *scrContext)
{
  bool v5; 
  sentient_s *sentient; 
  unsigned __int16 number; 
  __int64 v10; 
  unsigned int v11; 
  __int64 v12; 
  gentity_s *v13; 
  char v37; 
  __int64 v39; 
  __int64 v40; 
  int v41; 
  vec3_t vec; 
  vec3_t outShootAtPos; 
  vec3_t outOrigin; 
  void *retaddr; 

  _R11 = &retaddr;
  v5 = this->m_pAI == NULL;
  __asm
  {
    vmovaps xmmword ptr [r11-28h], xmm6
    vmovaps xmmword ptr [r11-38h], xmm7
  }
  if ( v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 4169, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  sentient = this->m_pAI->sentient;
  number = sentient->targetEnt.number;
  if ( !number )
    goto LABEL_25;
  v10 = number;
  v11 = number - 1;
  if ( v11 >= 0x800 )
  {
    v41 = 2048;
    LODWORD(v39) = v11;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v39, v41) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v12 = v10 - 1;
  if ( g_entities[v12].r.isInUse != g_entityIsInUse[v12] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v12] )
  {
    LODWORD(v40) = sentient->targetEnt.number - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v40) )
      __debugbreak();
  }
  if ( !sentient->targetEnt.number )
  {
LABEL_25:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 4170, ASSERT_TYPE_ASSERT, "(m_pAI->sentient->targetEnt.isDefined())", (const char *)&queryFormat, "m_pAI->sentient->targetEnt.isDefined()") )
      __debugbreak();
  }
  v13 = EntHandle::ent(&this->m_pAI->sentient->targetEnt);
  AIScriptedInterface::GetMuzzlePosApprox(this, &outOrigin);
  GScr_EntityGetShootAtPos(scrContext, v13, &outShootAtPos);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+0B8h+outShootAtPos]
    vsubss  xmm5, xmm0, dword ptr [rsp+0B8h+outOrigin]
    vmovss  xmm1, dword ptr [rsp+0B8h+outShootAtPos+4]
    vsubss  xmm6, xmm1, dword ptr [rsp+0B8h+outOrigin+4]
    vmovss  xmm0, dword ptr [rsp+0B8h+outShootAtPos+8]
    vsubss  xmm7, xmm0, dword ptr [rsp+0B8h+outOrigin+8]
    vmulss  xmm2, xmm6, xmm6
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm3, xmm2, xmm1
    vmovss  xmm1, cs:__real@3f800000
    vmulss  xmm0, xmm7, xmm7
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm4, xmm2, xmm2
    vcmpless xmm0, xmm4, cs:__real@80000000
    vblendvps xmm0, xmm4, xmm1, xmm0
    vdivss  xmm2, xmm1, xmm0
    vmulss  xmm0, xmm5, xmm2
    vmovss  dword ptr [rsp+0B8h+vec], xmm0
    vmulss  xmm0, xmm7, xmm2
    vmulss  xmm1, xmm6, xmm2
    vmovss  dword ptr [rsp+0B8h+vec+8], xmm0
    vmovss  dword ptr [rsp+0B8h+vec+4], xmm1
  }
  *(double *)&_XMM0 = vectopitch(&vec);
  __asm
  {
    vmovss  xmm1, dword ptr [rsp+0B8h+vec+8]
    vmovaps xmm7, [rsp+0B8h+var_38]
    vmovaps xmm6, [rsp+0B8h+var_28]
    vxorps  xmm2, xmm2, xmm2
    vcomiss xmm1, xmm2
  }
  if ( v37 )
    __asm { vmulss  xmm0, xmm0, cs:__real@bf800000 }
  return *(float *)&_XMM0;
}

/*
==============
AIScriptedInterface::GetPrevCoverNode
==============
*/
pathnode_t *AIScriptedInterface::GetPrevCoverNode(AIScriptedInterface *this)
{
  if ( Path_NodeValid(this->m_pAI->coverInfo.prevNodeID) )
    return Path_ConvertIndexToNode(this->m_pAI->coverInfo.prevNodeID);
  else
    return 0i64;
}

/*
==============
AIScriptedInterface::GetRandomAlias
==============
*/
scr_anim_t AIScriptedInterface::GetRandomAlias(AIScriptedInterface *this, unsigned __int64 *assetName, scr_string_t stateName, scr_string_t aliasName, int *outAnimIndex, int *pOutAnimSubtreeID)
{
  int *v6; 
  int IndexOfRandomAnimFromAlias; 
  int v11; 
  unsigned __int64 linkPointer; 
  __int16 AnimsIndex; 
  const XAnim_s *Anims; 
  int pOutStateIndex; 
  unsigned int pOutAnimIndex; 
  int pOutAnimtreeIndex; 
  unsigned int pOutGraftNode; 
  unsigned __int64 v20; 
  AnimsetState *outState; 

  v6 = pOutAnimSubtreeID;
  if ( !pOutAnimSubtreeID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 3950, ASSERT_TYPE_ASSERT, "(outAnimIndex)", (const char *)&queryFormat, "outAnimIndex") )
    __debugbreak();
  IndexOfRandomAnimFromAlias = G_Animset_GetIndexOfRandomAnimFromAlias(stateName, aliasName, (const scr_string_t)outAnimIndex);
  *v6 = IndexOfRandomAnimFromAlias;
  v11 = IndexOfRandomAnimFromAlias;
  if ( IndexOfRandomAnimFromAlias >= 0 )
  {
    BG_Animset_GetStateInfoByName(stateName, aliasName, &outState, &pOutStateIndex);
    BG_Animset_GetAnimIndexFromStateIndexAndEntry(stateName, pOutStateIndex, v11, &pOutAnimIndex, &pOutGraftNode, (XAnimSubTreeID *)&pOutAnimSubtreeID, NULL, &pOutAnimtreeIndex, 1);
    LOWORD(v20) = pOutAnimIndex;
    AnimsIndex = pOutAnimtreeIndex;
    if ( pOutAnimtreeIndex < 0 )
    {
      Anims = BG_AnimationState_GetAnims(stateName);
      AnimsIndex = Scr_GetAnimsIndex(Anims, 1u);
    }
    WORD1(v20) = AnimsIndex;
    linkPointer = v20;
  }
  else
  {
    linkPointer = UNDEFINED_ANIM_0.linkPointer;
  }
  *assetName = linkPointer;
  return (scr_anim_t)assetName;
}

/*
==============
AIScriptedInterface::GetReacquire
==============
*/
__int64 AIScriptedInterface::GetReacquire(AIScriptedInterface *this)
{
  if ( this->m_pAI )
    return (unsigned int)this->m_pAI->combat.reacquireState;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 1175, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  return (unsigned int)this->m_pAI->combat.reacquireState;
}

/*
==============
AIScriptedInterface::GetScarinessForDistance
==============
*/

double __fastcall AIScriptedInterface::GetScarinessForDistance(AIScriptedInterface *this, sentient_s *enemy, double fDist)
{
  const scrContext_t *v6; 
  const Weapon *Weapon; 

  __asm
  {
    vmovaps [rsp+38h+var_18], xmm6
    vmovaps xmm6, xmm2
  }
  v6 = ScriptContext_Server();
  Weapon = GScr_Weapon_GetWeapon(v6, (const scr_weapon_t)this->m_pAI->currentWeapon);
  __asm
  {
    vmovaps xmm1, xmm6; dist
    vmovaps xmm6, [rsp+38h+var_18]
  }
  return AICommonInterface::GetAccuracyFraction(this->m_pAI, *(float *)&_XMM1, Weapon, WEAP_ACCURACY_AI_VS_AI);
}

/*
==============
AIScriptedInterface::GetScriptGoal
==============
*/
ai_script_goal_t *AIScriptedInterface::GetScriptGoal(AIScriptedInterface *this)
{
  return &this->m_pAI->scriptGoal;
}

/*
==============
AIScriptedInterface::GetScriptOrientMode
==============
*/
__int64 AIScriptedInterface::GetScriptOrientMode(AIScriptedInterface *this)
{
  return (unsigned int)this->m_pAI->ScriptOrient.eMode;
}

/*
==============
AIScriptedInterface::GetStairsStateWithinDist
==============
*/
__int64 AIScriptedInterface::GetStairsStateWithinDist(AIScriptedInterface *this, float dist, bool bCurrentlyOnStairs)
{
  __int64 v3; 
  char v5[16]; 

  return ((__int64 (__fastcall *)(AINavigator *, __int64, char *))this->m_pAI->pNavigator->GetStairsStateAtDist)(this->m_pAI->pNavigator, v3, v5);
}

/*
==============
AIScriptedInterface::GetStairsWithinDist
==============
*/
__int64 AIScriptedInterface::GetStairsWithinDist(AIScriptedInterface *this, float dist)
{
  return ((__int64 (__fastcall *)(AINavigator *))this->m_pAI->pNavigator->GetStairsWithinDist_OLD)(this->m_pAI->pNavigator);
}

/*
==============
AIScriptedInterface::GetTargetSpeed
==============
*/
float AIScriptedInterface::GetTargetSpeed(AIScriptedInterface *this)
{
  const dvar_t *v6; 
  int iLastWhizbyAnimTime; 
  const char *v9; 
  ai_scripted_t *m_pAI; 
  bool HasPath; 
  bool v14; 

  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  _RCX = this->m_pAI;
  if ( _RCX->script_desiredSpeedEnabled )
  {
    __asm { vmovss  xmm6, dword ptr [rcx+0B48h] }
    goto LABEL_17;
  }
  if ( !_RCX->bAllowSpeedUpWhenCombatHot )
    goto LABEL_12;
  v6 = DVARBOOL_ai_hotCombatSpeedEnabled;
  if ( !DVARBOOL_ai_hotCombatSpeedEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_hotCombatSpeedEnabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( v6->current.enabled && (iLastWhizbyAnimTime = this->m_pAI->iLastWhizbyAnimTime, iLastWhizbyAnimTime > 0) && level.time < iLastWhizbyAnimTime + 10000 )
  {
    _RDI = DVARFLT_ai_movementHotDefaultSpeed;
    if ( !DVARFLT_ai_movementHotDefaultSpeed )
    {
      v9 = "ai_movementHotDefaultSpeed";
      goto LABEL_14;
    }
  }
  else
  {
LABEL_12:
    _RDI = DVARFLT_ai_movementDefaultSpeed;
    if ( !DVARFLT_ai_movementDefaultSpeed )
    {
      v9 = "ai_movementDefaultSpeed";
LABEL_14:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v9) )
        __debugbreak();
    }
  }
  Dvar_CheckFrontendServerThread(_RDI);
  _RCX = this->m_pAI;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+28h]
    vmulss  xmm6, xmm0, dword ptr [rcx+0B38h]
  }
LABEL_17:
  if ( _RCX->speedScaleMode[0] == 2 )
    __asm { vminss  xmm6, xmm6, cs:__real@42f00000 }
  if ( EntHandle::isDefined(&_RCX->grenade.pGrenade) )
  {
    __asm { vmovss  xmm0, cs:__real@43480000 }
  }
  else
  {
    m_pAI = this->m_pAI;
    if ( m_pAI->cautiousNavigationEnabled )
    {
      _RDI = DVARFLT_ai_maxSpeedForCautiousNavigation;
      if ( !DVARFLT_ai_maxSpeedForCautiousNavigation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_maxSpeedForCautiousNavigation") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RDI);
      __asm { vmovss  xmm0, dword ptr [rdi+28h] }
      m_pAI = this->m_pAI;
      __asm { vminss  xmm6, xmm0, xmm6 }
    }
    if ( m_pAI->bArrivalFailed )
      __asm { vminss  xmm6, xmm6, cs:__real@432a0000 }
    HasPath = AICommonInterface::HasPath(this);
    v14 = !HasPath;
    if ( HasPath )
    {
      _RAX = this->m_pAI;
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vmovss  xmm1, dword ptr [rax+0B4Ch]
        vcomiss xmm1, xmm0
      }
      if ( !v14 )
        __asm { vminss  xmm6, xmm1, xmm6 }
    }
    if ( HasAnimSpeedThresholdsForArchetype(this->m_pAI->baseArchetype) )
    {
      *(double *)&_XMM0 = GetMaxAnimSpeedThreshold(this->m_pAI->baseArchetype);
      __asm { vminss  xmm6, xmm0, xmm6 }
    }
    __asm { vmovaps xmm0, xmm6 }
  }
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
  return *(float *)&_XMM0;
}

/*
==============
AIScriptedInterface::GetUnitType
==============
*/
__int64 AIScriptedInterface::GetUnitType(AIScriptedInterface *this)
{
  AIUnitType unitType; 
  AIUnitType v4; 
  int v5; 

  unitType = this->m_pAI->unitType;
  if ( (unsigned int)unitType >= MAX_AI_UNITTYPES )
  {
    v5 = 7;
    v4 = unitType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 2105, ASSERT_TYPE_ASSERT, "(unsigned)( m_pAI->unitType ) < (unsigned)( MAX_AI_UNITTYPES )", "m_pAI->unitType doesn't index MAX_AI_UNITTYPES\n\t%i not in [0, %i)", v4, v5) )
      __debugbreak();
  }
  return *(unsigned int *)g_AIUnitTypeNames[this->m_pAI->unitType];
}

/*
==============
AIScriptedInterface::GetUnitType
==============
*/
bool AIScriptedInterface::GetUnitType(scr_string_t unitTypeString, AIUnitType *unitType)
{
  AIUnitType v4; 
  const scr_string_t **v5; 
  bool result; 

  if ( !unitType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 2112, ASSERT_TYPE_ASSERT, "(unitType)", (const char *)&queryFormat, "unitType") )
    __debugbreak();
  v4 = AI_UNITTYPE_SOLDIER;
  v5 = g_AIUnitTypeNames;
  while ( unitTypeString != **v5 )
  {
    ++v4;
    if ( (__int64)++v5 >= (__int64)g_AIGunAdditiveOptionStrings )
      return 0;
  }
  result = 1;
  *unitType = v4;
  return result;
}

/*
==============
AIScriptedInterface::GetVelocity
==============
*/
void AIScriptedInterface::GetVelocity(AIScriptedInterface *this, vec3_t *outVelocity)
{
  *outVelocity = this->m_pAI->Physics.vVelocity;
}

/*
==============
AIScriptedInterface::GetWeaponFlashTagName
==============
*/
TagPair *AIScriptedInterface::GetWeaponFlashTagName(AIScriptedInterface *this, TagPair *result)
{
  Weapon r_weapon; 

  _RAX = this->GetEquippedWeapon(this);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rsp+78h+r_weapon.weaponIdx], ymm0
    vmovups xmm1, xmmword ptr [rax+20h]
    vmovups xmmword ptr [rsp+78h+r_weapon.attachmentVariationIndices+5], xmm1
    vmovsd  xmm0, qword ptr [rax+30h]
    vmovsd  qword ptr [rsp+78h+r_weapon.attachmentVariationIndices+15h], xmm0
  }
  *(_DWORD *)&r_weapon.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
  BG_GetWeaponFlashTagname(result, &r_weapon, 0, 0);
  return result;
}

/*
==============
AIScriptedInterface::GetWishDelta
==============
*/
void AIScriptedInterface::GetWishDelta(AIScriptedInterface *this, vec3_t *vWishDelta)
{
  *vWishDelta = this->m_pAI->Physics.vWishDelta;
}

/*
==============
AIScriptedInterface::HandleNotetrack
==============
*/
void AIScriptedInterface::HandleNotetrack(AIScriptedInterface *this, const scr_string_t notetrackName)
{
  if ( notetrackName == scr_const.footstep_left_large || notetrackName == scr_const.footstep_left_small )
  {
    this->m_pAI->asmData.m_Foot = LEFT;
    this->m_pAI->asmData.m_FootTime = level.time;
  }
  else if ( notetrackName == scr_const.footstep_right_large || notetrackName == scr_const.footstep_right_small )
  {
    this->m_pAI->asmData.m_Foot = RIGHT;
    this->m_pAI->asmData.m_FootTime = level.time;
  }
}

/*
==============
AIScriptedInterface::HasRoomToFullExposeCorner
==============
*/
_BOOL8 AIScriptedInterface::HasRoomToFullExposeCorner(AIScriptedInterface *this, const pathnode_t *pNode)
{
  __int16 type; 
  int v48; 
  bool v49; 
  bfx::PathSpec *p_blockPlanes; 
  AINavigator *Navigator; 
  bool v69; 
  HavokPhysics_CollisionQueryResult *CollisionQueryResult; 
  HavokPhysics_CollisionQueryResult *v71; 
  hknpShape *ShapeCapsuleUpAxis; 
  hkMemoryAllocator *v77; 
  hkMemoryAllocator *v78; 
  _BOOL8 result; 
  HavokPhysics_IgnoreBodies v87; 
  Physics_ShapecastExtendedData extendedData; 
  __int64 v89; 
  vec3_t right; 
  vec3_t end; 
  vec3_t pos; 
  vec3_t vec2; 
  vec3_t vector; 
  bfx::PathSpec blockPlanes; 
  char optionalInplaceBuffer[440]; 
  char v97; 
  void *retaddr; 

  _RAX = &retaddr;
  v89 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmmword ptr [rax-88h], xmm11
  }
  Sys_ProfBeginNamedEvent(0xFF808080, "AIHasRoomToFullExposeCorner");
  pathnode_t::GetPos((pathnode_t *)pNode, &pos);
  pathnode_t::GetAngles((pathnode_t *)pNode, &vector);
  type = pNode->constant.type;
  if ( type == 31 )
    type = pNode->dynamic.turretEntNumber;
  AngleVectors(&vector, NULL, &right, NULL);
  if ( (type & 0x80u) == 0 )
  {
    __asm
    {
      vmovss  xmm4, dword ptr [rbp+2A0h+right+8]
      vmovss  xmm3, dword ptr [rbp+2A0h+right+4]
      vmovss  xmm2, dword ptr [rbp+2A0h+right]
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm1, dword ptr cs:__xmm@80000000800000008000000080000000
      vmovss  xmm0, dword ptr [rbp+2A0h+right]
      vxorps  xmm2, xmm0, xmm1
      vmovss  dword ptr [rbp+2A0h+right], xmm2
      vmovss  xmm0, dword ptr [rbp+2A0h+right+4]
      vxorps  xmm3, xmm0, xmm1
      vmovss  dword ptr [rbp+2A0h+right+4], xmm3
      vmovss  xmm0, dword ptr [rbp+2A0h+right+8]
      vxorps  xmm4, xmm0, xmm1
      vmovss  dword ptr [rbp+2A0h+right+8], xmm4
    }
  }
  __asm
  {
    vmovss  xmm11, cs:__real@42100000
    vmulss  xmm0, xmm2, xmm11
    vaddss  xmm1, xmm0, dword ptr [rbp+2A0h+pos]
    vmovss  dword ptr [rbp+2A0h+end], xmm1
    vmulss  xmm2, xmm3, xmm11
    vaddss  xmm0, xmm2, dword ptr [rbp+2A0h+pos+4]
    vmovss  dword ptr [rbp+2A0h+end+4], xmm0
    vmulss  xmm1, xmm4, xmm11
    vaddss  xmm2, xmm1, dword ptr [rbp+2A0h+pos+8]
    vmovss  dword ptr [rbp+2A0h+end+8], xmm2
  }
  _RBX = &this->m_pAI->ent->r.currentOrigin;
  __asm { vxorps  xmm9, xmm9, xmm9 }
  if ( !AIScriptedInterface::IsMoveSuppressed(this) )
    goto LABEL_11;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+2A0h+end]
    vsubss  xmm5, xmm0, dword ptr [rbx]
    vmovss  xmm0, dword ptr [rbp+2A0h+end+4]
    vsubss  xmm6, xmm0, dword ptr [rbx+4]
    vmulss  xmm2, xmm6, xmm6
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm0, xmm2, xmm1
    vsqrtss xmm4, xmm0, xmm0
    vcmpless xmm0, xmm4, cs:__real@80000000
    vmovss  xmm2, cs:__real@3f800000
    vblendvps xmm1, xmm4, xmm2, xmm0
    vdivss  xmm3, xmm2, xmm1
    vaddss  xmm4, xmm4, cs:__real@41f00000
    vmulss  xmm0, xmm5, xmm3
    vmulss  xmm1, xmm0, xmm4
    vaddss  xmm10, xmm1, dword ptr [rbx]
    vmovss  dword ptr [rbp+2A0h+vec2], xmm10
    vmulss  xmm0, xmm6, xmm3
    vmulss  xmm1, xmm0, xmm4
    vaddss  xmm8, xmm1, dword ptr [rbx+4]
    vmovss  dword ptr [rbp+2A0h+vec2+4], xmm8
    vmovss  xmm0, dword ptr [rbp+2A0h+end+8]
    vmovss  dword ptr [rbp+2A0h+vec2+8], xmm0
  }
  AIScriptedInterface::GetMoveOnlySuppressionPlanes(this, (PathBlockPlanes *)&blockPlanes);
  v48 = 0;
  v49 = 0;
  if ( *(int *)&blockPlanes.m_penaltyTable.m_perFlagPenalties[8] > 0 )
  {
    __asm
    {
      vmovss  xmm6, dword ptr [rbx+4]
      vmovss  xmm7, dword ptr [rbx]
    }
    _RDX = &blockPlanes.m_maxSearchDist;
    p_blockPlanes = &blockPlanes;
    while ( 1 )
    {
      __asm
      {
        vmovss  xmm5, dword ptr [rdx]
        vmulss  xmm1, xmm6, dword ptr [rax+4]
        vmulss  xmm0, xmm7, dword ptr [rax]
        vaddss  xmm1, xmm1, xmm0
        vsubss  xmm3, xmm5, xmm1
        vmulss  xmm2, xmm10, dword ptr [rax]
        vmulss  xmm0, xmm8, dword ptr [rax+4]
        vaddss  xmm1, xmm2, xmm0
        vsubss  xmm2, xmm5, xmm1
        vmulss  xmm3, xmm2, xmm3
        vcomiss xmm3, xmm9
      }
      if ( v49 )
        break;
      ++v48;
      p_blockPlanes = (bfx::PathSpec *)((char *)p_blockPlanes + 8);
      ++_RDX;
      v49 = (unsigned int)v48 < *(_DWORD *)&blockPlanes.m_penaltyTable.m_perFlagPenalties[8];
      if ( v48 >= *(int *)&blockPlanes.m_penaltyTable.m_perFlagPenalties[8] )
        goto LABEL_11;
    }
    AIScriptedInterface::MayMove_Debug(_RBX, &vec2, &colorYellow, DEBUGMAYMOVE_LIFTED);
    v69 = 0;
  }
  else
  {
LABEL_11:
    Navigator = AICommonInterface::GetNavigator(this);
    _RAX = (__int64)Navigator->Get2DNavigator(Navigator);
    if ( !_RAX )
      goto LABEL_15;
    __asm
    {
      vmovups ymm0, ymmword ptr [rax+4A4h]
      vmovups ymmword ptr [rbp+2A0h+blockPlanes.vNormal], ymm0
      vmovups ymm1, ymmword ptr [rax+4C4h]
      vmovups ymmword ptr [rbp+2A0h+blockPlanes.fDist], ymm1
      vmovups xmm0, xmmword ptr [rax+4E4h]
      vmovups [rbp+2A0h+var_250], xmm0
    }
    if ( Nav_IsPointOnMeshCustom(*(nav_space_s **)(_RAX + 16), &end, *(AINavLayer *)(_RAX + 112), &blockPlanes, &vec2) )
    {
LABEL_15:
      CollisionQueryResult = Physics_AllocateCollisionQueryResult(PHYSICS_WORLD_ID_FIRST, PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_ANY);
      if ( !CollisionQueryResult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 1485, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
        __debugbreak();
      v71 = Physics_AllocateCollisionQueryResult(PHYSICS_WORLD_ID_FIRST, PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_ANY);
      if ( !v71 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 1487, ASSERT_TYPE_ASSERT, "(startResult)", (const char *)&queryFormat, "startResult") )
        __debugbreak();
      __asm
      {
        vmovss  xmm3, cs:__real@41700000; radius
        vmovaps xmm2, xmm11; halfHeight
      }
      ShapeCapsuleUpAxis = Physics_CreateShapeCapsuleUpAxis(PHYSICS_WORLD_ID_FIRST, &vec3_origin, *(float *)&_XMM2, *(float *)&_XMM3, optionalInplaceBuffer, 432, Temporary);
      __asm
      {
        vmovss  [rbp+2A0h+extendedData.startTolerance], xmm9
        vmovss  xmm0, cs:__real@3c83126f
        vmovss  [rbp+2A0h+extendedData.accuracy], xmm0
      }
      extendedData.simplifyStart = 0;
      extendedData.ignoreBodies = NULL;
      __asm
      {
        vmovss  [rbp+2A0h+extendedData.collisionBuffer], xmm9
        vpxor   xmm0, xmm0, xmm0
        vmovdqu xmmword ptr [rbp+2A0h+extendedData.nonBrushShape], xmm0
      }
      extendedData.phaseSelection = All;
      extendedData.permitOutwardTrace = 0;
      extendedData.contents = 33570816;
      HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v87, 1, 0);
      HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v87, 0, this->m_pAI->ent->s.number, 1, 1, 0, 1, 1);
      extendedData.ignoreBodies = &v87;
      Physics_Shapecast(PHYSICS_WORLD_ID_FIRST, ShapeCapsuleUpAxis, &pos, &end, &quat_identity, &extendedData, CollisionQueryResult, v71);
      LOBYTE(ShapeCapsuleUpAxis) = HavokPhysics_CollisionQueryResult::HasHit(CollisionQueryResult);
      Physics_FreeCollisionQueryResult(CollisionQueryResult);
      Physics_FreeCollisionQueryResult(v71);
      v69 = (_BYTE)ShapeCapsuleUpAxis == 0;
      v77 = hkMemHeapAllocator();
      v87.m_ignoreBodies.m_size = 0;
      if ( v87.m_ignoreBodies.m_capacityAndFlags >= 0 )
        hkMemoryAllocator::bufFree2(v77, v87.m_ignoreBodies.m_data, 4, v87.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
      v87.m_ignoreBodies.m_data = NULL;
      v87.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
      v78 = hkMemHeapAllocator();
      v87.m_ignoreEntities.m_size = 0;
      if ( v87.m_ignoreEntities.m_capacityAndFlags >= 0 )
        hkMemoryAllocator::bufFree2(v78, v87.m_ignoreEntities.m_data, 8, v87.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
      v87.m_ignoreEntities.m_data = NULL;
      v87.m_ignoreEntities.m_capacityAndFlags = 0x80000000;
    }
    else
    {
      v69 = 0;
    }
  }
  Sys_ProfEndNamedEvent();
  result = v69;
  _R11 = &v97;
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
AIScriptedInterface::HasStealth
==============
*/
unsigned int AIScriptedInterface::HasStealth(AIScriptedInterface *this)
{
  scrContext_t *v2; 
  unsigned int result; 
  unsigned int v4; 
  unsigned int CanonicalString; 
  bool v6; 
  VariableValue out; 

  v2 = ScriptContext_Server();
  result = Scr_FindEntityId(v2, this->m_pAI->ent->s.number, ENTITY_CLASS_GENTITY, LOCAL_CLIENT_0);
  v4 = result;
  if ( result )
  {
    CanonicalString = SL_GetCanonicalString("stealth");
    Scr_FindVariableField_Out(v2, v4, CanonicalString, &out);
    v6 = out.type != VAR_UNDEFINED;
    RemoveRefToValue(v2, (unsigned __int8)out.type, out.u);
    return v6;
  }
  return result;
}

/*
==============
AIScriptedInterface::HasUpcomingSharpTurn
==============
*/
__int64 AIScriptedInterface::HasUpcomingSharpTurn(AIScriptedInterface *this, const vec3_t *originPoint, const nav_cornerdata_t *corners, const int numCorners, const int startCorner, const float maxDistanceFromCorner, const float minAngleForScaling, const bool checkFacing, float *outTurnDegrees)
{
  __int64 v23; 
  char v42; 
  bool v43; 
  unsigned __int8 v60; 
  AINavigator2D *v64; 
  char v65; 
  __int64 v66; 
  char v85; 
  char v86; 
  __int64 result; 
  vec3_t forward; 
  char v117; 
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
    vmovaps [rsp+138h+var_C8], xmm15
  }
  _RDI = corners;
  v23 = startCorner;
  _R12 = outTurnDegrees;
  Sys_ProfBeginNamedEvent(0xFF808080, "AI_HasUpcomingSharpTurn");
  if ( !this->m_pAI->pNavigator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 2333, ASSERT_TYPE_ASSERT, "(m_pAI->pNavigator)", (const char *)&queryFormat, "m_pAI->pNavigator") )
    __debugbreak();
  if ( numCorners < 1 )
    goto LABEL_25;
  _R14 = 5i64 * startCorner;
  __asm
  {
    vmovss  xmm6, dword ptr [rdi+r14*8]
    vmovss  xmm9, dword ptr [rdi+r14*8+4]
    vmovss  xmm10, dword ptr [rdi+r14*8+8]
    vsubss  xmm3, xmm6, dword ptr [r15]
    vsubss  xmm4, xmm9, dword ptr [r15+4]
    vmulss  xmm1, xmm4, xmm4
    vmulss  xmm0, xmm3, xmm3
    vaddss  xmm8, xmm1, xmm0
    vsqrtss xmm2, xmm8, xmm8
    vmovss  xmm5, cs:__real@80000000
    vcmpless xmm0, xmm2, xmm5
    vmovss  xmm13, cs:__real@3f800000
    vblendvps xmm1, xmm2, xmm13, xmm0
    vmovss  [rsp+138h+var_108], xmm1
    vdivss  xmm0, xmm13, xmm1
    vmulss  xmm12, xmm0, xmm3
    vmulss  xmm11, xmm0, xmm4
  }
  v42 = 0;
  v43 = !checkFacing;
  if ( checkFacing )
  {
    __asm { vcomiss xmm8, cs:__real@43c80000 }
    _RAX = this->m_pAI;
    v42 = 0;
    v43 = !_RAX->orientation.faceMotion;
    if ( _RAX->orientation.faceMotion )
    {
      AngleVectors(&_RAX->ent->r.currentAngles, &forward, NULL, NULL);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+138h+forward+4]
        vmovss  xmm1, dword ptr [rsp+138h+forward]
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rax+83Ch]
        vmovss  xmm3, dword ptr [rax+838h]
        vmulss  xmm1, xmm3, xmm3
        vmulss  xmm0, xmm0, xmm0
        vaddss  xmm1, xmm1, xmm0
        vsqrtss xmm2, xmm1, xmm1
        vcmpless xmm0, xmm2, xmm5
        vblendvps xmm1, xmm2, xmm13, xmm0
        vmovss  [rsp+138h+var_108], xmm1
        vdivss  xmm0, xmm13, xmm1
        vmulss  xmm1, xmm3, xmm0
        vmovss  dword ptr [rsp+138h+forward], xmm1
        vmulss  xmm0, xmm0, dword ptr [rax+83Ch]
      }
    }
    __asm
    {
      vmulss  xmm1, xmm1, xmm12
      vmulss  xmm0, xmm0, xmm11
      vaddss  xmm0, xmm1, xmm0; X
      vcomiss xmm0, cs:__real@3f34fdf4
    }
    if ( v42 )
    {
      __asm { vcomiss xmm0, cs:__real@bf70624e }
      if ( !(v42 | v43) )
      {
        *(float *)&_XMM0 = acosf_0(*(float *)&_XMM0);
        __asm
        {
          vmulss  xmm1, xmm0, cs:__real@42652ee0
          vmovss  dword ptr [r12], xmm1
        }
        v60 = 1;
        goto LABEL_26;
      }
    }
  }
  __asm
  {
    vmovss  xmm0, [rsp+138h+maxDistanceFromCorner]
    vmulss  xmm14, xmm0, xmm0
    vcomiss xmm8, xmm14
  }
  if ( !(v42 | v43) )
    goto LABEL_25;
  __asm { vxorps  xmm7, xmm7, xmm7 }
  v64 = this->m_pAI->pNavigator->Get2DNavigator(this->m_pAI->pNavigator);
  v65 = 0;
  v66 = numCorners - 1;
  if ( startCorner >= v66 )
    goto LABEL_25;
  _RDI = (__int64)&_RDI[startCorner + 1].m_Pos.z;
  do
  {
    __asm
    {
      vmovss  xmm15, dword ptr [rdi-8]
      vmovss  xmm0, dword ptr [rdi-4]
      vmovss  [rsp+138h+var_104], xmm0
      vmovss  xmm1, dword ptr [rdi]
      vmovss  [rsp+138h+var_108], xmm1
      vsubss  xmm5, xmm15, xmm6
      vsubss  xmm6, xmm0, xmm9
      vsubss  xmm2, xmm1, xmm10
      vmulss  xmm1, xmm6, xmm6
      vmulss  xmm0, xmm5, xmm5
      vaddss  xmm3, xmm1, xmm0
      vmulss  xmm1, xmm2, xmm2
      vaddss  xmm2, xmm1, xmm3
      vaddss  xmm8, xmm8, xmm2
      vsqrtss xmm4, xmm3, xmm3
      vcmpless xmm0, xmm4, cs:__real@80000000
      vblendvps xmm1, xmm4, xmm13, xmm0
      vdivss  xmm0, xmm13, xmm1
      vmulss  xmm9, xmm0, xmm5
      vmulss  xmm10, xmm0, xmm6
    }
    *(double *)&_XMM0 = AINavigator2D::GetCornerCurrentAngle(v64, *(_DWORD *)(_RDI - 12));
    __asm
    {
      vmovaps xmm6, xmm0
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm6, xmm0
    }
    if ( v85 )
    {
      __asm
      {
        vmulss  xmm1, xmm9, xmm12
        vmulss  xmm0, xmm11, xmm10
        vaddss  xmm0, xmm1, xmm0; val
        vmovaps xmm2, xmm13; max
        vmovss  xmm1, cs:__real@bf800000; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      *(float *)&_XMM0 = acosf_0(*(float *)&_XMM0);
      __asm
      {
        vmulss  xmm6, xmm0, cs:__real@42652ee0
        vmovaps xmm2, xmm6; currentAngle
      }
      AINavigator2D::SetCornerCurrentAngle(v64, *(_DWORD *)(_RDI - 12), *(float *)&_XMM2);
    }
    __asm
    {
      vmovaps xmm11, xmm10
      vmovaps xmm12, xmm9
      vaddss  xmm7, xmm7, xmm6
      vcomiss xmm6, cs:__real@41a00000
    }
    if ( !v85 )
      v65 = 1;
    __asm { vcomiss xmm8, xmm14 }
    if ( !(v85 | v86) )
      break;
    __asm
    {
      vmovaps xmm6, xmm15
      vmovss  xmm9, [rsp+138h+var_104]
      vmovss  xmm10, [rsp+138h+var_108]
    }
    ++v23;
    _RDI += 40i64;
  }
  while ( v23 < v66 );
  if ( !v65 )
  {
LABEL_25:
    v60 = 0;
    goto LABEL_26;
  }
  __asm
  {
    vcomiss xmm7, [rsp+138h+minAngleForScaling]
    vmovss  dword ptr [r12], xmm7
  }
  v60 = 1;
LABEL_26:
  Sys_ProfEndNamedEvent();
  result = v60;
  _R11 = &v117;
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
    vmovaps xmm15, [rsp+138h+var_C8]
  }
  return result;
}

/*
==============
AIScriptedInterface::HasValidUpcomingTurnCached
==============
*/
bool AIScriptedInterface::HasValidUpcomingTurnCached(AIScriptedInterface *this)
{
  int v3; 
  int v8[4]; 

  if ( !this->m_pAI->pNavigator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 2605, ASSERT_TYPE_ASSERT, "(m_pAI->pNavigator)", (const char *)&queryFormat, "m_pAI->pNavigator") )
    __debugbreak();
  this->m_pAI->pNavigator->GetNextCorner(this->m_pAI->pNavigator, (vec3_t *)v8);
  _RCX = this->m_pAI;
  v3 = _RCX->turnSlowdownData.timeStamp + 500;
  if ( v3 <= level.time )
    return 0;
  __asm
  {
    vmovss  xmm0, [rsp+58h+var_28]
    vucomiss xmm0, dword ptr [rcx+634h]
  }
  if ( v3 != level.time )
    return 0;
  __asm
  {
    vmovss  xmm0, [rsp+58h+var_24]
    vucomiss xmm0, dword ptr [rcx+638h]
  }
  if ( v3 != level.time )
    return 0;
  __asm
  {
    vmovss  xmm0, [rsp+58h+var_20]
    vucomiss xmm0, dword ptr [rcx+63Ch]
  }
  return v3 == level.time;
}

/*
==============
AIScriptedInterface::InitBlackboard
==============
*/
void AIScriptedInterface::InitBlackboard(AIScriptedInterface *this)
{
  AIBlackboard *p_blackboard; 

  p_blackboard = &this->m_pAI->blackboard;
  Scr_SetString(&p_blackboard->m_MoveType, (scr_string_t)0);
  Scr_SetString(&p_blackboard->m_CoverState, (scr_string_t)0);
  Scr_SetString(&p_blackboard->m_CoverExposeType, (scr_string_t)0);
  memset_0(p_blackboard, 0, sizeof(AIBlackboard));
  p_blackboard->m_DesiredStance = STANCE_STAND;
  Scr_SetString(&p_blackboard->m_MoveType, scr_const.combat);
  Scr_SetString(&p_blackboard->m_CoverState, scr_const.none);
  Scr_SetString(&p_blackboard->m_CoverExposeType, scr_const.none);
  p_blackboard->m_WeaponRequest = WEAPCLASS_NONE;
}

/*
==============
AIScriptedInterface::InitSpawn
==============
*/
bool AIScriptedInterface::InitSpawn(AIScriptedInterface *this, bool bEnemyInfo, bool bDontShareEnemyInfo)
{
  gentity_s *ent; 
  const dvar_t *v7; 
  sentient_s *i; 
  __int64 v12; 
  bool result; 
  const dvar_t *v14; 
  team_t eTeam; 
  AIIterator *v16; 
  const gentity_s *j; 
  __int64 v18; 
  unsigned int v19; 
  AIScriptedInterface *m_pAI; 
  AIWrapper v21; 
  bitarray<224> iTeamFlags; 

  if ( !this->m_pAI->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 128, ASSERT_TYPE_ASSERT, "(m_pAI->ent)", (const char *)&queryFormat, "m_pAI->ent") )
    __debugbreak();
  ent = this->m_pAI->ent;
  if ( bEnemyInfo )
  {
    v7 = DVARINT_g_aiEventDump;
    if ( !DVARINT_g_aiEventDump && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_aiEventDump") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    if ( v7->current.integer > 0 )
      Com_Printf(18, "%d ^3 copy exact enemy info on spawn^7 at time^5 %d\n", (unsigned int)ent->s.number, (unsigned int)level.time);
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
      _RAX = Com_TeamsSP_GetAllTeamFlags();
    else
      _RAX = Com_TeamsMP_GetAllTeamFlags();
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vmovups xmmword ptr [rsp+0E8h+iTeamFlags.array], xmm0
      vmovsd  xmm1, qword ptr [rax+10h]
      vmovsd  qword ptr [rsp+0E8h+iTeamFlags.array+10h], xmm1
    }
    iTeamFlags.array[6] = _RAX->array[6];
    for ( i = Sentient_FirstSentient(&iTeamFlags); i; i = Sentient_NextSentient(i, &iTeamFlags) )
    {
      LOBYTE(v12) = 15;
      this->GetPerfectInfo(this, i, v12);
    }
  }
  AIActorInterface::RunAITypeScript(this->m_pAI->ent);
  result = this->ValidateSpawn(this);
  if ( result )
  {
    G_Utils_CreateEntityDObjScriptable(ent);
    if ( !bDontShareEnemyInfo )
    {
      v14 = DVARINT_g_aiEventDump;
      if ( !DVARINT_g_aiEventDump && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_aiEventDump") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v14);
      if ( v14->current.integer > 0 )
        Com_Printf(18, "%d ^3 copy enemy info from teammates on spawn^7 at time^5 %d\n", (unsigned int)ent->s.number, (unsigned int)level.time);
      eTeam = this->m_pAI->sentient->eTeam;
      v16 = this->GetAIIterator(this);
      for ( j = (const gentity_s *)v16->GetFirst(v16); j; j = v16->GetNext(v16) )
      {
        if ( !j->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 170, ASSERT_TYPE_ASSERT, "(pOther->sentient)", (const char *)&queryFormat, "pOther->sentient") )
          __debugbreak();
        if ( ent != j && eTeam != j->sentient->eTeam )
        {
          AIWrapper::AIWrapper(&v21, j);
          v19 = 0;
          if ( level.maxSentients )
          {
            m_pAI = v21.m_pAI;
            do
            {
              LOBYTE(v18) = 16;
              this->SentientInfo_Copy(this, m_pAI->m_pAI, v19++, v18);
            }
            while ( v19 < level.maxSentients );
          }
        }
      }
    }
    AICommonInterface::UpdateSight(this);
    AIScriptedInterface::UpdateThreatImmediate(this);
    AIScriptedInterface::InitAnimScript(this);
    return 1;
  }
  return result;
}

/*
==============
AIScriptedInterface::IsApproachingTightQuarters
==============
*/
bool AIScriptedInterface::IsApproachingTightQuarters(AIScriptedInterface *this)
{
  AINavigator2D *v1; 
  AINavigator2D *v2; 

  v1 = this->m_pAI->pNavigator->Get2DNavigator(this->m_pAI->pNavigator);
  v2 = v1;
  if ( v1 )
  {
    _RBX = DCONST_DVARFLT_ai_tightQuartersLookaheadDistance;
    if ( !DCONST_DVARFLT_ai_tightQuartersLookaheadDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_tightQuartersLookaheadDistance") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm1, dword ptr [rbx+28h]; maxDistance }
    LOBYTE(v1) = AINavigator2D::IsApproachingTightQuarters(v2, *(float *)&_XMM1);
  }
  return (char)v1;
}

/*
==============
AIScriptedInterface::IsBTGoalValid
==============
*/
char AIScriptedInterface::IsBTGoalValid(AIScriptedInterface *this)
{
  __int64 v1; 
  bool *i; 

  v1 = 2i64;
  for ( i = &this->m_pAI->btGoals[2].bValid; !*i; i -= 56 )
  {
    if ( --v1 < 0 )
      return 0;
  }
  return 1;
}

/*
==============
AIScriptedInterface::IsCodeMoveRequested
==============
*/
bool AIScriptedInterface::IsCodeMoveRequested(AIScriptedInterface *this)
{
  bool result; 
  gentity_s *v3; 
  bool v5; 
  bool v6; 
  ai_scripted_t *m_pAI; 
  int iPathEndTime; 
  vec3_t vFinalGoal; 

  result = AICommonInterface::HasPath(this);
  if ( result )
  {
    v3 = this->GetCloseEnt(this);
    if ( v3 )
    {
      _RCX = this->m_pAI;
      v5 = _RCX->pushable && _RCX->script_pushable;
      v6 = v3->client && _RCX->avoidance.pushPlayerEnabled;
      if ( v5 )
      {
        if ( !_RCX->moveMode )
        {
          AIScriptedInterface::Debug_NotMoving(this, "pushed & stopped");
          return 0;
        }
        __asm
        {
          vmovss  xmm1, dword ptr [rcx+83Ch]
          vmovss  xmm0, dword ptr [rcx+838h]
          vmulss  xmm2, xmm0, xmm0
          vmulss  xmm1, xmm1, xmm1
          vaddss  xmm2, xmm2, xmm1
          vcomiss xmm2, cs:__real@3f800000
        }
      }
      AICommonInterface::GetPathFinalGoal(this, &vFinalGoal);
      if ( !v6 )
      {
        __asm { vmovss  xmm3, cs:__real@42160000; buffer }
        if ( AICommonInterface::PointNearPoint(this, &v3->r.currentOrigin, &vFinalGoal, *(float *)&_XMM3) )
        {
          AIScriptedInterface::Debug_NotMoving(this, "closeent near goal");
          return 0;
        }
      }
    }
    m_pAI = this->m_pAI;
    if ( m_pAI->avoidanceBlockedData.blocked )
    {
      AIScriptedInterface::Debug_NotMoving(this, "path blocked");
      return 0;
    }
    iPathEndTime = m_pAI->iPathEndTime;
    return !iPathEndTime || iPathEndTime - level.time >= 200;
  }
  return result;
}

/*
==============
AIScriptedInterface::IsCombatHot
==============
*/
char AIScriptedInterface::IsCombatHot(AIScriptedInterface *this)
{
  const dvar_t *v2; 
  int iLastWhizbyAnimTime; 

  if ( !this->m_pAI->bAllowSpeedUpWhenCombatHot )
    return 0;
  v2 = DVARBOOL_ai_hotCombatSpeedEnabled;
  if ( !DVARBOOL_ai_hotCombatSpeedEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_hotCombatSpeedEnabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled && (iLastWhizbyAnimTime = this->m_pAI->iLastWhizbyAnimTime, iLastWhizbyAnimTime > 0) && level.time < iLastWhizbyAnimTime + 10000 )
    return 1;
  else
    return 0;
}

/*
==============
AIScriptedInterface::IsCurrentEnemyValid
==============
*/
bool AIScriptedInterface::IsCurrentEnemyValid(AIScriptedInterface *this)
{
  sentient_s *sentient; 
  const sentient_s *v4; 
  sentient_info_t *SentientInfo; 
  bool v6; 
  int v7; 
  EntHandle targetEnt; 
  float v21; 

  sentient = this->m_pAI->sentient;
  if ( !sentient )
    return 0;
  targetEnt = sentient->targetEnt;
  if ( !EntHandle::isDefined(&targetEnt) )
    return 0;
  _RDI = EntHandle::ent(&targetEnt);
  v4 = _RDI->sentient;
  if ( !v4 )
    return 1;
  SentientInfo = Sentient_GetSentientInfo(this->m_pAI->sentient, v4);
  if ( !SentientInfo->lastKnownPosTime )
    return 0;
  if ( AICommonInterface::CanSeeEnemy(this) )
    return 1;
  v6 = _RDI->client == NULL;
  if ( !_RDI->client )
  {
    v7 = level.time - SentientInfo->lastKnownPosTime;
    v6 = (unsigned int)v7 <= 0x2710;
    if ( v7 > 10000 )
      return 0;
  }
  __asm
  {
    vmovsd  xmm1, qword ptr [rdi+130h]
    vshufps xmm0, xmm1, xmm1, 55h ; 'U'
  }
  v21 = _RDI->r.currentOrigin.v[2];
  __asm
  {
    vsubss  xmm3, xmm1, dword ptr [rcx+130h]
    vsubss  xmm1, xmm0, dword ptr [rcx+134h]
    vmovss  xmm0, [rsp+48h+var_18]
    vsubss  xmm4, xmm0, dword ptr [rcx+138h]
    vmulss  xmm2, xmm1, xmm1
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm3, xmm0
    vcomiss xmm2, cs:__real@4a800000
  }
  return v6;
}

/*
==============
AIScriptedInterface::IsCurrentlyBlockingOtherAI
==============
*/
_BOOL8 AIScriptedInterface::IsCurrentlyBlockingOtherAI(AIScriptedInterface *this)
{
  return this->m_pAI->isBlockingOtherAI;
}

/*
==============
AIScriptedInterface::IsDoingAmbush
==============
*/
_BOOL8 AIScriptedInterface::IsDoingAmbush(AIScriptedInterface *this)
{
  if ( this->m_pAI )
    return this->m_pAI->combat.doingAmbush;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 1036, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  return this->m_pAI->combat.doingAmbush;
}

/*
==============
AIScriptedInterface::IsDoingReacquire
==============
*/
bool AIScriptedInterface::IsDoingReacquire(AIScriptedInterface *this)
{
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 1169, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  return EntHandle::isDefined(&this->m_pAI->sentient->targetEnt) && this->m_pAI->combat.reacquireState;
}

/*
==============
AIScriptedInterface::IsGunBlockedByWall
==============
*/

__int64 __fastcall AIScriptedInterface::IsGunBlockedByWall(AIScriptedInterface *this, double bufferDist)
{
  const Weapon *v11; 
  weapClass_t WeaponClass; 
  int v45; 
  const dvar_t *v46; 
  unsigned __int8 v47; 
  __int64 result; 
  vec3_t end; 
  vec3_t start; 
  vec3_t out; 
  int v59; 
  vec3_t outOrigin; 
  ApproxGunParams paramsOut; 
  vec4_t quat; 
  char vars0; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmm11, xmm1
  }
  Sys_ProfBeginNamedEvent(0xFF808080, "IsGunBlockedByWall");
  if ( this->Is3D(this) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 1647, ASSERT_TYPE_ASSERT, "( !Is3D() )", (const char *)&queryFormat, "!Is3D()") )
    __debugbreak();
  AIScriptedInterface::GetMuzzlePosApprox(this, &outOrigin);
  this->GetEyePosition(this, (vec3_t *)&v59);
  v11 = this->GetEquippedWeapon(this);
  WeaponClass = BG_GetWeaponClass(v11, 0);
  if ( AIScriptedInterface::IsMountedAtLMGNode(this) )
  {
    GetApproxGunParamsForMountedLMG(&paramsOut);
  }
  else if ( this->HasRiotshield(this) )
  {
    GetApproxGunParamsForRiotshield(&paramsOut);
  }
  else
  {
    GetApproxGunParams(WeaponClass, &paramsOut);
  }
  AnglesToQuat(&this->m_pAI->ent->r.currentAngles, &quat);
  QuatTransform(&quat, &paramsOut.m_offset, &out);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+130h+out]
    vaddss  xmm8, xmm0, [rbp+30h+var_B0]
    vmovss  dword ptr [rsp+130h+start], xmm8
    vmovss  xmm0, dword ptr [rsp+130h+out+4]
    vaddss  xmm9, xmm0, [rbp+30h+var_AC]
    vmovss  dword ptr [rsp+130h+start+4], xmm9
    vmovss  xmm0, dword ptr [rsp+130h+out+8]
    vaddss  xmm10, xmm0, [rbp+30h+var_A8]
    vmovss  dword ptr [rsp+130h+start+8], xmm10
    vmovss  xmm0, dword ptr [rbp+30h+outOrigin]
    vsubss  xmm5, xmm0, xmm8
    vmovss  xmm1, dword ptr [rbp+30h+outOrigin+4]
    vsubss  xmm6, xmm1, xmm9
    vmovss  xmm0, dword ptr [rbp+30h+outOrigin+8]
    vsubss  xmm7, xmm0, xmm10
    vmulss  xmm2, xmm6, xmm6
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm7, xmm7
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm4, xmm2, xmm2
    vcmpless xmm0, xmm4, cs:__real@80000000
    vmovss  xmm2, cs:__real@3f800000
    vblendvps xmm1, xmm4, xmm2, xmm0
    vdivss  xmm3, xmm2, xmm1
    vaddss  xmm4, xmm4, xmm11
    vmulss  xmm0, xmm5, xmm3
    vmulss  xmm1, xmm0, xmm4
    vaddss  xmm2, xmm1, xmm8
    vmovss  dword ptr [rsp+130h+end], xmm2
    vmulss  xmm0, xmm6, xmm3
    vmulss  xmm1, xmm0, xmm4
    vaddss  xmm2, xmm1, xmm9
    vmovss  dword ptr [rsp+130h+end+4], xmm2
    vmulss  xmm0, xmm7, xmm3
    vmulss  xmm1, xmm0, xmm4
    vaddss  xmm2, xmm1, xmm10
    vmovss  dword ptr [rsp+130h+end+8], xmm2
  }
  v45 = PhysicsQuery_LegacySightTrace(PHYSICS_WORLD_ID_FIRST, &start, &end, &bounds_origin, this->m_pAI->ent->s.number, 2047, 8399137);
  v46 = DVARBOOL_ai_debugGunBlocked;
  if ( v45 )
  {
    if ( !DVARBOOL_ai_debugGunBlocked && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugGunBlocked") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v46);
    if ( v46->current.enabled )
      G_DebugLine(&start, &end, &colorRed, 0);
    v47 = 1;
  }
  else
  {
    if ( !DVARBOOL_ai_debugGunBlocked && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugGunBlocked") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v46);
    if ( v46->current.enabled )
      G_DebugLine(&start, &end, &colorGreen, 0);
    v47 = 0;
  }
  Sys_ProfEndNamedEvent();
  result = v47;
  _R11 = &vars0;
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
AIScriptedInterface::IsHumanAI
==============
*/
bool AIScriptedInterface::IsHumanAI(AIScriptedInterface *this)
{
  return this->m_pAI->species <= (unsigned int)AI_SPECIES_CIVILIAN;
}

/*
==============
AIScriptedInterface::IsInTightQuarters
==============
*/
bool AIScriptedInterface::IsInTightQuarters(AIScriptedInterface *this)
{
  AINavigator2D *v1; 
  AINavigator2D *v2; 

  v1 = this->m_pAI->pNavigator->Get2DNavigator(this->m_pAI->pNavigator);
  v2 = v1;
  if ( v1 )
  {
    _RBX = DCONST_DVARFLT_ai_tightQuartersLookaheadDistance;
    if ( !DCONST_DVARFLT_ai_tightQuartersLookaheadDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_tightQuartersLookaheadDistance") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm1, dword ptr [rbx+28h]; maxDistance }
    LOBYTE(v1) = AINavigator2D::IsInOrApproachingTightQuarters(v2, *(float *)&_XMM1);
  }
  return (char)v1;
}

/*
==============
AIScriptedInterface::IsMoving
==============
*/
bool AIScriptedInterface::IsMoving(AIScriptedInterface *this)
{
  return this->m_pAI->moveMode != 0;
}

/*
==============
AIScriptedInterface::IsNearAnyPlayers
==============
*/

bool __fastcall AIScriptedInterface::IsNearAnyPlayers(AIScriptedInterface *this, double dist)
{
  int v7; 
  bool v8; 
  __int64 v14; 
  bool result; 
  __int64 v34; 
  __int64 v35; 
  char v38; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-28h], xmm6 }
  v7 = 0;
  v8 = level.maxclients <= 0;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmulss  xmm6, xmm1, xmm1
  }
  _RCX = this->m_pAI->ent;
  __asm
  {
    vmovss  xmm7, dword ptr [rcx+130h]
    vmovss  xmm8, dword ptr [rcx+134h]
    vmovss  xmm9, dword ptr [rcx+138h]
  }
  if ( !v8 )
  {
    v14 = 0i64;
    _RSI = 0i64;
    do
    {
      if ( (unsigned int)v7 >= 0x800 )
      {
        LODWORD(v35) = 2048;
        LODWORD(v34) = v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v34, v35) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[_RSI].r.isInUse != g_entityIsInUse[v14] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( g_entityIsInUse[v14] )
      {
        _RAX = g_entities;
        __asm
        {
          vmovss  xmm0, dword ptr [rsi+rax+130h]
          vmovss  xmm1, dword ptr [rsi+rax+134h]
          vsubss  xmm3, xmm0, xmm7
          vmovss  xmm0, dword ptr [rsi+rax+138h]
          vsubss  xmm2, xmm1, xmm8
          vmulss  xmm2, xmm2, xmm2
          vsubss  xmm4, xmm0, xmm9
          vmulss  xmm1, xmm3, xmm3
          vmulss  xmm0, xmm4, xmm4
          vaddss  xmm3, xmm2, xmm1
          vaddss  xmm2, xmm3, xmm0
          vcomiss xmm2, xmm6
        }
      }
      ++v7;
      ++v14;
      ++_RSI;
    }
    while ( v7 < level.maxclients );
  }
  result = 0;
  __asm { vmovaps xmm6, [rsp+98h+var_28] }
  _R11 = &v38;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm7, [rsp+98h+var_38]
  }
  return result;
}

/*
==============
AIScriptedInterface::IsOnStairs
==============
*/
bool AIScriptedInterface::IsOnStairs(AIScriptedInterface *this)
{
  return this->m_pAI->Physics.stairsState != AI_STAIRS_NONE;
}

/*
==============
AIScriptedInterface::IsRetreatNeeded
==============
*/
bool AIScriptedInterface::IsRetreatNeeded(AIScriptedInterface *this)
{
  return this->m_pAI->postGoldPadding & 1;
}

/*
==============
AIScriptedInterface::IsSniper
==============
*/
bool AIScriptedInterface::IsSniper(AIScriptedInterface *this, bool bCheckCurrentlyUsingSniper)
{
  const scrContext_t *v4; 
  const Weapon *Weapon; 
  ai_scripted_t *m_pAI; 
  scr_weapon_t currentWeapon; 
  const Weapon *v8; 
  bool result; 

  result = 0;
  if ( !this->m_pAI->weaponInfo.bDisableSniperBehaviors )
  {
    v4 = ScriptContext_Server();
    Weapon = GScr_Weapon_GetWeapon(v4, (const scr_weapon_t)this->m_pAI->primaryWeapon);
    if ( BG_GetWeaponClass(Weapon, 0) == WEAPCLASS_SNIPER )
    {
      if ( !bCheckCurrentlyUsingSniper )
        return 1;
      m_pAI = this->m_pAI;
      currentWeapon = m_pAI->currentWeapon;
      if ( m_pAI->primaryWeapon == currentWeapon )
        return 1;
      v8 = GScr_Weapon_GetWeapon(v4, currentWeapon);
      if ( BG_GetWeaponClass(v8, 0) == WEAPCLASS_SNIPER )
        return 1;
    }
  }
  return result;
}

/*
==============
AIScriptedInterface::IsStanceAllowed
==============
*/
bool AIScriptedInterface::IsStanceAllowed(AIScriptedInterface *this, ai_stance_e eStance)
{
  int v4; 
  bool HasPath; 
  ai_scripted_t *m_pAI; 
  ai_stance_e v7; 
  __int32 eAllowedStances; 

  v4 = 7;
  HasPath = AICommonInterface::HasPath(this);
  m_pAI = this->m_pAI;
  if ( HasPath )
  {
    v7 = m_pAI->pNavigator->GetAllowedStances(m_pAI->pNavigator);
LABEL_9:
    v4 = v7;
    goto LABEL_10;
  }
  if ( m_pAI->sentient->pClaimedNode && AIScriptedInterface::PointNearClaimNode(this, &m_pAI->ent->r.currentOrigin) )
  {
    if ( !this->m_pAI->sentient->pClaimedNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 815, ASSERT_TYPE_ASSERT, "(m_pAI->sentient->pClaimedNode)", (const char *)&queryFormat, "m_pAI->sentient->pClaimedNode") )
      __debugbreak();
    v7 = Path_AllowedStancesForNode(this->m_pAI->sentient->pClaimedNode);
    goto LABEL_9;
  }
LABEL_10:
  eAllowedStances = v4 & this->m_pAI->eAllowedStances;
  if ( !eAllowedStances )
    eAllowedStances = this->m_pAI->eAllowedStances;
  return (eAllowedStances & eStance) != 0;
}

/*
==============
AIScriptedInterface::IsTraversing
==============
*/
bool AIScriptedInterface::IsTraversing(AIScriptedInterface *this)
{
  return this->m_pAI->traverseName != 0;
}

/*
==============
AIScriptedInterface::IsWithinScriptGoalRadius
==============
*/

bool __fastcall AIScriptedInterface::IsWithinScriptGoalRadius(AIScriptedInterface *this, const vec3_t *position, double buffer)
{
  const ai_goal_t *v8; 

  __asm
  {
    vmovaps [rsp+38h+var_18], xmm6
    vmovaps xmm6, xmm2
  }
  v8 = this->GetScriptGoal(this);
  if ( v8 )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vucomiss xmm6, xmm0
      vmovaps xmm3, xmm6; buffer
      vmovaps xmm6, [rsp+38h+var_18]
    }
    LOBYTE(v8) = AICommonInterface::PointNearGoal(this, position, v8, *(float *)&_XMM3);
  }
  else
  {
    __asm { vmovaps xmm6, [rsp+38h+var_18] }
  }
  return (char)v8;
}

/*
==============
AIScriptedInterface::MayMoveFromPointToPoint
==============
*/
_BOOL8 AIScriptedInterface::MayMoveFromPointToPoint(AIScriptedInterface *this, const vec3_t *vStart, const bfx::AreaHandle *hStartArea, const vec3_t *vEnd, int ignoreActors)
{
  scrContext_t *v20; 
  AINavLayer Layer; 
  AINavigator *pNavigator; 
  nav_space_s *m_pSpace; 
  AINavigator2D *v30; 
  unsigned __int64 eTeam; 
  unsigned int ObstacleBlockageFlagsFromTeamFlags; 
  bool v37; 
  bool v38; 
  ai_scripted_t *m_pAI; 
  char v59; 
  _BOOL8 result; 
  vec3_t startPos; 
  vec3_t endPos; 
  bitarray<224> teamflags; 
  bfx::PathSpec pathSpec; 
  nav_probe_results_s pOutResults; 
  trace_t results; 
  char v77; 
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
  }
  _RBX = vEnd;
  _RSI = vStart;
  pathSpec.m_obstacleMode = BLOCKED_IF_ANY_MATCH;
  *(_QWORD *)&pathSpec.m_obstacleBlockageFlags = -1i64;
  *(_QWORD *)&pathSpec.m_areaPenaltyFlags = -1i64;
  pathSpec.m_usePathSharingPenalty = 0;
  __asm
  {
    vxorps  xmm7, xmm7, xmm7
    vmovss  [rbp+170h+pathSpec.m_pathSharingPenalty], xmm7
    vmovss  [rbp+170h+pathSpec.m_maxPathSharingPenalty], xmm7
    vmovss  [rbp+170h+pathSpec.m_maxSearchDist], xmm7
  }
  bfx::PenaltyTable::PenaltyTable(&pathSpec.m_penaltyTable);
  pathSpec.m_snapMode = SNAP_CLOSEST;
  if ( AICommonInterface::Use3DPathing(this) )
  {
    v20 = ScriptContext_Server();
    Scr_Error(COM_ERR_1772, v20, "MayMoveFromPointToPoint: does not work on 3D actors.  Use a nav trace (allow edge) instead.");
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vmovss  dword ptr [rsp+270h+startPos], xmm0
    vmovss  xmm1, dword ptr [rsi+4]
    vmovss  dword ptr [rsp+270h+startPos+4], xmm1
    vmovss  xmm0, dword ptr [rsi+8]
    vmovss  dword ptr [rsp+270h+startPos+8], xmm0
    vmovss  xmm1, dword ptr [rbx]
    vmovss  dword ptr [rsp+270h+endPos], xmm1
    vmovss  xmm0, dword ptr [rbx+4]
    vmovss  dword ptr [rsp+270h+endPos+4], xmm0
    vmovss  xmm1, dword ptr [rbx+8]
    vmovss  dword ptr [rsp+270h+endPos+8], xmm1
  }
  Layer = Nav_GetLayer(this->m_pAI->pNavigator);
  pNavigator = this->m_pAI->pNavigator;
  m_pSpace = pNavigator->m_pSpace;
  v30 = pNavigator->Get2DNavigator(pNavigator);
  if ( v30 )
  {
    _RAX = AINavigator2D::GetPathSpec(v30);
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rbp+170h+pathSpec.m_obstacleMode], ymm0
      vmovups ymm1, ymmword ptr [rax+20h]
      vmovups ymmword ptr [rbp+170h+pathSpec.m_maxSearchDist], ymm1
      vmovups xmm0, xmmword ptr [rax+40h]
      vmovups xmmword ptr [rbp-20h], xmm0
    }
  }
  if ( !this->IsAlive(this) )
  {
    eTeam = (unsigned int)this->m_pAI->sentient->eTeam;
    memset(&teamflags, 0, sizeof(teamflags));
    if ( (unsigned int)eTeam >= 0xE0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", eTeam, 224) )
      __debugbreak();
    teamflags.array[eTeam >> 5] |= 0x80000000 >> (eTeam & 0x1F);
    ObstacleBlockageFlagsFromTeamFlags = Nav_GetObstacleBlockageFlagsFromTeamFlags(&teamflags);
    pathSpec.m_obstacleBlockageFlags &= ~ObstacleBlockageFlagsFromTeamFlags;
  }
  bfx::AreaHandle::AreaHandle(&pOutResults.m_hEndArea);
  if ( bfx::AreaHandle::IsValid((bfx::AreaHandle *)hStartArea) )
    v37 = Nav_Trace(&startPos, hStartArea, &endPos, &pathSpec, &pOutResults);
  else
    v37 = Nav_Trace(m_pSpace, &startPos, &endPos, Layer, &pathSpec, &pOutResults);
  v38 = !v37;
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+270h+endPos]
    vsubss  xmm8, xmm0, dword ptr [rsp+270h+startPos]
    vmovss  xmm1, dword ptr [rsp+270h+endPos+4]
    vsubss  xmm9, xmm1, dword ptr [rsp+270h+startPos+4]
    vmovss  xmm0, dword ptr [rsp+270h+endPos+8]
    vsubss  xmm3, xmm0, dword ptr [rsp+270h+startPos+8]
    vmulss  xmm2, xmm9, xmm9
    vmulss  xmm1, xmm8, xmm8
    vaddss  xmm12, xmm2, xmm1
    vmulss  xmm0, xmm3, xmm3
    vaddss  xmm2, xmm0, xmm12
    vsqrtss xmm1, xmm2, xmm2
    vmovss  xmm10, [rbp+170h+pOutResults.m_DistTraveled]
    vdivss  xmm0, xmm10, xmm1
    vmovss  xmm11, cs:__real@3f800000
    vcomiss xmm0, cs:__real@3f733333
  }
  if ( v37 )
    v38 = 1;
  if ( ignoreActors )
    goto LABEL_19;
  m_pAI = this->m_pAI;
  _RAX = m_pAI->ent;
  __asm
  {
    vmovups xmm0, xmmword ptr [rax+100h]
    vmovups xmmword ptr [rbp+170h+teamflags.array], xmm0
    vmovsd  xmm1, qword ptr [rax+110h]
    vmovsd  qword ptr [rbp+170h+teamflags.array+10h], xmm1
  }
  G_Main_TraceCapsule(&results, &startPos, &endPos, (const Bounds *)&teamflags, m_pAI->ent->s.number, 33570816);
  __asm
  {
    vmovss  xmm0, [rbp+170h+results.fraction]
    vucomiss xmm0, xmm11
  }
  if ( v59 )
  {
    v38 = 1;
LABEL_19:
    this->SetMayMoveTime(this, level.time);
    goto LABEL_20;
  }
  v38 = 0;
LABEL_20:
  bfx::AreaHandle::~AreaHandle(&pOutResults.m_hEndArea);
  result = v38;
  _R11 = &v77;
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
  }
  return result;
}

/*
==============
AIScriptedInterface::MayMove_CheckFriendlyFire
==============
*/
__int64 AIScriptedInterface::MayMove_CheckFriendlyFire(AIScriptedInterface *this, const vec3_t *start, const vec3_t *end)
{
  int v32; 
  bool v33; 
  PathBlockPlanes *p_blockPlanes; 
  __int64 result; 
  vec3_t vec2; 
  PathBlockPlanes blockPlanes; 
  char v58; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
  }
  _RSI = end;
  _RBX = start;
  if ( !AIScriptedInterface::IsMoveSuppressed(this) )
    goto LABEL_6;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vsubss  xmm4, xmm0, dword ptr [rbx]
    vmovss  xmm0, dword ptr [rsi+4]
    vsubss  xmm5, xmm0, dword ptr [rbx+4]
    vmulss  xmm2, xmm5, xmm5
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm0, xmm2, xmm1
    vmovss  xmm1, cs:__real@3f800000
    vsqrtss xmm3, xmm0, xmm0
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm1, xmm0
    vaddss  xmm3, xmm3, cs:__real@41f00000
    vdivss  xmm2, xmm1, xmm0
    vmulss  xmm0, xmm4, xmm2
    vmulss  xmm1, xmm0, xmm3
    vaddss  xmm10, xmm1, dword ptr [rbx]
    vmulss  xmm0, xmm5, xmm2
    vmulss  xmm1, xmm0, xmm3
    vaddss  xmm9, xmm1, dword ptr [rbx+4]
    vmovss  xmm0, dword ptr [rsi+8]
    vmovss  dword ptr [rsp+0C8h+vec2+4], xmm9
    vmovss  dword ptr [rsp+0C8h+vec2], xmm10
    vmovss  dword ptr [rsp+0C8h+vec2+8], xmm0
  }
  AIScriptedInterface::GetMoveOnlySuppressionPlanes(this, &blockPlanes);
  v32 = 0;
  v33 = 0;
  if ( blockPlanes.iPlaneCount > 0 )
  {
    __asm
    {
      vmovss  xmm6, dword ptr [rbx+4]
      vmovss  xmm7, dword ptr [rbx]
    }
    _RDX = blockPlanes.fDist;
    p_blockPlanes = &blockPlanes;
    __asm { vxorps  xmm8, xmm8, xmm8 }
    while ( 1 )
    {
      __asm
      {
        vmulss  xmm1, xmm10, dword ptr [rax]
        vmulss  xmm0, xmm9, dword ptr [rax+4]
        vmovss  xmm5, dword ptr [rdx]
        vmulss  xmm2, xmm6, dword ptr [rax+4]
        vaddss  xmm1, xmm1, xmm0
        vmulss  xmm0, xmm7, dword ptr [rax]
        vsubss  xmm3, xmm5, xmm1
        vaddss  xmm1, xmm2, xmm0
        vsubss  xmm2, xmm5, xmm1
        vmulss  xmm3, xmm3, xmm2
        vcomiss xmm3, xmm8
      }
      if ( v33 )
        break;
      ++v32;
      p_blockPlanes = (PathBlockPlanes *)((char *)p_blockPlanes + 8);
      ++_RDX;
      v33 = (unsigned int)v32 < blockPlanes.iPlaneCount;
      if ( v32 >= blockPlanes.iPlaneCount )
        goto LABEL_6;
    }
    AIScriptedInterface::MayMove_Debug(_RBX, &vec2, &colorYellow, DEBUGMAYMOVE_LIFTED);
    result = 1i64;
  }
  else
  {
LABEL_6:
    result = 0i64;
  }
  _R11 = &v58;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
  return result;
}

/*
==============
AIScriptedInterface::MayMove_Debug
==============
*/
void AIScriptedInterface::MayMove_Debug(const vec3_t *vec1, const vec3_t *vec2, const vec4_t *color, DEBUGMAYMOVE_LIFT_ENUM liftBehavior)
{
  const dvar_t *v4; 
  vec3_t end; 
  vec3_t start; 

  v4 = DVARBOOL_ai_debugMayMove;
  _RDI = vec2;
  _RSI = vec1;
  if ( !DVARBOOL_ai_debugMayMove && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugMayMove") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.enabled )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rsi]
      vmovss  xmm1, dword ptr [rsi+4]
      vmovss  xmm2, dword ptr [rsi+8]
      vmovss  xmm3, dword ptr [rdi+8]
      vmovss  dword ptr [rsp+88h+start], xmm0
      vmovss  xmm0, dword ptr [rdi]
      vmovss  dword ptr [rsp+88h+start+4], xmm1
      vmovss  xmm1, dword ptr [rdi+4]
      vmovss  dword ptr [rsp+88h+end], xmm0
      vmovss  dword ptr [rsp+88h+end+4], xmm1
      vmovss  dword ptr [rsp+88h+start+8], xmm2
      vmovss  dword ptr [rsp+88h+end+8], xmm3
    }
    if ( liftBehavior == DEBUGMAYMOVE_LIFTED )
    {
      __asm
      {
        vaddss  xmm0, xmm2, cs:__real@42000000
        vaddss  xmm1, xmm3, cs:__real@42000000
        vmovss  dword ptr [rsp+88h+start+8], xmm0
        vmovss  dword ptr [rsp+88h+end+8], xmm1
      }
    }
    G_DebugLineWithDuration(&start, &end, color, 0, 100);
  }
}

/*
==============
AIScriptedInterface::MayMove_TraceCheck
==============
*/
__int64 AIScriptedInterface::MayMove_TraceCheck(AIScriptedInterface *this, const vec3_t *vStart, const vec3_t *vEnd, int allowStartSolid, int checkDrop, int ignoreActors)
{
  int v13; 
  int v14; 
  ai_scripted_t *m_pAI; 
  const dvar_t *v21; 
  ai_scripted_t *v46; 
  unsigned __int16 groundEnt; 
  bool b3D; 
  const dvar_t *v52; 
  int contentmask; 
  vec3_t end; 
  vec3_t start; 
  vec3_t vec2; 
  vec3_t vTraceEndPos; 
  vec3_t v90; 
  trace_t results; 

  _R14 = vEnd;
  _R15 = vStart;
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 1244, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  v13 = this->GetTraceMask(this);
  if ( ignoreActors )
    v14 = v13 & 0xFDFFBFFF;
  else
    v14 = v13 | 0x2004000;
  __asm
  {
    vmovss  xmm1, dword ptr [r14]
    vmovss  xmm0, dword ptr [r14+4]
    vmovss  xmm2, dword ptr [r14+8]
  }
  m_pAI = this->m_pAI;
  __asm
  {
    vmovss  dword ptr [rsp+180h+start], xmm1
    vmovss  dword ptr [rsp+180h+start+4], xmm0
    vmovss  dword ptr [rsp+180h+end], xmm1
    vsubss  xmm1, xmm2, cs:__real@42900000
    vmovss  dword ptr [rsp+180h+end+4], xmm0
    vaddss  xmm0, xmm2, cs:__real@42900000
    vmovss  dword ptr [rsp+180h+start+8], xmm0
    vmovss  dword ptr [rsp+180h+end+8], xmm1
  }
  G_Main_TraceCapsule(&results, &start, &end, &bounds_origin, m_pAI->ent->s.number, v14 | 0x2000);
  if ( results.allsolid )
  {
    v21 = DVARBOOL_ai_debugMayMove;
    if ( !DVARBOOL_ai_debugMayMove && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugMayMove") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v21);
    if ( v21->current.enabled )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+180h+start]
        vmovss  xmm1, dword ptr [rsp+180h+start+4]
        vmovss  xmm3, cs:__real@42000000
        vmovss  dword ptr [rbp+80h+var_E0], xmm0
        vmovss  xmm0, dword ptr [rsp+180h+end]
        vmovss  dword ptr [rbp+80h+var_E0+4], xmm1
        vmovss  xmm1, dword ptr [rsp+180h+end+4]
        vmovss  dword ptr [rbp+80h+vec2], xmm0
        vaddss  xmm0, xmm3, dword ptr [rsp+180h+end+8]
        vmovss  dword ptr [rbp+80h+vec2+4], xmm1
        vaddss  xmm1, xmm3, dword ptr [rsp+180h+start+8]
        vmovss  dword ptr [rbp+80h+var_E0+8], xmm1
        vmovss  dword ptr [rbp+80h+vec2+8], xmm0
      }
      G_DebugLineWithDuration(&v90, &vec2, &colorOrange, 0, 100);
      return 0i64;
    }
    return 0i64;
  }
  if ( checkDrop )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+180h+end]
      vsubss  xmm1, xmm0, dword ptr [rsp+180h+start]
      vmovss  xmm5, [rbp+80h+results.fraction]
      vmulss  xmm1, xmm1, xmm5
      vaddss  xmm0, xmm1, dword ptr [rsp+180h+start]
      vmovss  xmm1, dword ptr [rsp+180h+end+4]
      vmovss  dword ptr [rsp+180h+end], xmm0
      vsubss  xmm0, xmm1, dword ptr [rsp+180h+start+4]
      vmulss  xmm2, xmm0, xmm5
      vmovss  xmm0, dword ptr [rsp+180h+end+8]
      vsubss  xmm1, xmm0, dword ptr [rsp+180h+start+8]
      vaddss  xmm3, xmm2, dword ptr [rsp+180h+start+4]
      vmovss  xmm0, dword ptr [r15+8]
      vmulss  xmm2, xmm1, xmm5
      vmovss  dword ptr [rsp+180h+end+4], xmm3
      vaddss  xmm3, xmm2, dword ptr [rsp+180h+start+8]
      vsubss  xmm1, xmm0, xmm3
      vcomiss xmm1, cs:__real@42000000
      vmovss  dword ptr [rsp+180h+end+8], xmm3
    }
    AIScriptedInterface::MayMove_Debug(_R14, &end, &colorOrange, DEBUGMAYMOVE_NOT_LIFTED);
    return 0i64;
  }
  else
  {
    __asm { vmovss  xmm0, dword ptr [r15] }
    v46 = this->m_pAI;
    __asm
    {
      vmovss  xmm1, dword ptr [r15+4]
      vmovss  dword ptr [rbp+80h+vTraceEndPos], xmm0
      vmovss  xmm0, dword ptr [r15+8]
      vmovss  dword ptr [rbp+80h+vTraceEndPos+8], xmm0
      vmovss  dword ptr [rbp+80h+vTraceEndPos+4], xmm1
    }
    groundEnt = v46->Physics.groundEntNum;
    b3D = AICommonInterface::Use3DPathing(this);
    __asm
    {
      vmovss  xmm0, cs:__real@41200000
      vmovss  [rsp+180h+contentmask], xmm0
    }
    if ( !Path_PredictionTrace(_R15, _R14, this->m_pAI->ent->s.number, v14, &vTraceEndPos, *(float *)&contentmask, allowStartSolid, b3D, NULL, NULL, groundEnt) )
    {
      v52 = DVARBOOL_ai_debugMayMove;
      if ( !DVARBOOL_ai_debugMayMove && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugMayMove") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v52);
      if ( v52->current.enabled )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [r14]
          vmovss  xmm1, dword ptr [r14+4]
          vmovaps [rsp+180h+var_40], xmm6
          vsubss  xmm6, xmm0, dword ptr [r15]
          vmovss  xmm0, dword ptr [r14+8]
          vmovaps [rsp+180h+var_50], xmm7
          vsubss  xmm7, xmm1, dword ptr [r15+4]
          vmovss  xmm1, dword ptr [rbp+80h+vTraceEndPos+4]
          vsubss  xmm2, xmm1, dword ptr [r15+4]
          vmulss  xmm3, xmm2, xmm7
          vmovaps [rsp+180h+var_60], xmm8
          vsubss  xmm8, xmm0, dword ptr [r15+8]
          vmovss  xmm0, dword ptr [rbp+80h+vTraceEndPos]
          vsubss  xmm1, xmm0, dword ptr [r15]
          vmovss  xmm0, dword ptr [rbp+80h+vTraceEndPos+8]
          vmulss  xmm2, xmm1, xmm6
          vsubss  xmm1, xmm0, dword ptr [r15+8]
          vaddss  xmm4, xmm3, xmm2
          vmulss  xmm2, xmm1, xmm8
          vaddss  xmm5, xmm4, xmm2
          vmulss  xmm3, xmm7, xmm7
          vmulss  xmm0, xmm6, xmm6
          vaddss  xmm2, xmm3, xmm0
          vmulss  xmm1, xmm8, xmm8
          vaddss  xmm2, xmm2, xmm1
          vdivss  xmm3, xmm5, xmm2
          vmulss  xmm0, xmm3, xmm6
          vaddss  xmm1, xmm0, dword ptr [r15]
          vmulss  xmm2, xmm3, xmm7
          vaddss  xmm0, xmm2, dword ptr [r15+4]
          vmovss  dword ptr [rbp+80h+vec2], xmm1
          vmulss  xmm1, xmm3, xmm8
          vaddss  xmm2, xmm1, dword ptr [r15+8]
          vmovss  dword ptr [rbp+80h+vec2+8], xmm2
          vmovss  dword ptr [rbp+80h+vec2+4], xmm0
        }
        AIScriptedInterface::MayMove_Debug(_R15, &vec2, &colorLtOrange, DEBUGMAYMOVE_LIFTED);
        AIScriptedInterface::MayMove_Debug(&vec2, _R14, &colorRed, DEBUGMAYMOVE_LIFTED);
        __asm
        {
          vmovaps xmm8, [rsp+180h+var_60]
          vmovaps xmm7, [rsp+180h+var_50]
          vmovaps xmm6, [rsp+180h+var_40]
        }
      }
      return 0i64;
    }
    return 1i64;
  }
}

/*
==============
AIScriptedInterface::MaybeMove_DebugMidPoint
==============
*/
void AIScriptedInterface::MaybeMove_DebugMidPoint(const vec3_t *vec1, const vec3_t *vec2, const vec3_t *vec3, const vec4_t *color1, const vec4_t *color2, DEBUGMAYMOVE_LIFT_ENUM liftBehavior)
{
  const dvar_t *v9; 
  vec3_t vec2a; 

  v9 = DVARBOOL_ai_debugMayMove;
  _RSI = vec3;
  _RBP = vec2;
  if ( !DVARBOOL_ai_debugMayMove && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugMayMove") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( v9->current.enabled )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rsi]
      vmovss  xmm1, dword ptr [rsi+4]
      vmovaps [rsp+0B8h+var_38], xmm6
      vsubss  xmm6, xmm0, dword ptr [rdi]
      vmovss  xmm0, dword ptr [rsi+8]
      vmovaps [rsp+0B8h+var_48], xmm7
      vsubss  xmm7, xmm1, dword ptr [rdi+4]
      vmovss  xmm1, dword ptr [rbp+4]
      vsubss  xmm2, xmm1, dword ptr [rdi+4]
      vmulss  xmm3, xmm2, xmm7
      vmovaps [rsp+0B8h+var_58], xmm8
      vsubss  xmm8, xmm0, dword ptr [rdi+8]
      vmovss  xmm0, dword ptr [rbp+0]
      vsubss  xmm1, xmm0, dword ptr [rdi]
      vmovss  xmm0, dword ptr [rbp+8]
      vmulss  xmm2, xmm1, xmm6
      vsubss  xmm1, xmm0, dword ptr [rdi+8]
      vaddss  xmm4, xmm3, xmm2
      vmulss  xmm2, xmm1, xmm8
      vaddss  xmm5, xmm4, xmm2
      vmulss  xmm3, xmm7, xmm7
      vmulss  xmm0, xmm6, xmm6
      vaddss  xmm2, xmm3, xmm0
      vmulss  xmm1, xmm8, xmm8
      vaddss  xmm2, xmm2, xmm1
      vdivss  xmm3, xmm5, xmm2
      vmulss  xmm0, xmm3, xmm6
      vaddss  xmm1, xmm0, dword ptr [rdi]
      vmulss  xmm2, xmm3, xmm7
      vaddss  xmm0, xmm2, dword ptr [rdi+4]
      vmovss  dword ptr [rsp+0B8h+vec2], xmm1
      vmulss  xmm1, xmm3, xmm8
      vaddss  xmm2, xmm1, dword ptr [rdi+8]
      vmovss  dword ptr [rsp+0B8h+vec2+8], xmm2
      vmovss  dword ptr [rsp+0B8h+vec2+4], xmm0
    }
    AIScriptedInterface::MayMove_Debug(vec1, &vec2a, color1, liftBehavior);
    AIScriptedInterface::MayMove_Debug(&vec2a, _RSI, color2, liftBehavior);
    __asm
    {
      vmovaps xmm8, [rsp+0B8h+var_58]
      vmovaps xmm7, [rsp+0B8h+var_48]
      vmovaps xmm6, [rsp+0B8h+var_38]
    }
  }
}

/*
==============
AIScriptedInterface::ModifySharpTurnSpeed
==============
*/

void __fastcall AIScriptedInterface::ModifySharpTurnSpeed(AIScriptedInterface *this, double turnAngle, double minSlowDownAngle, float *outTargetSpeed)
{
  const char *v33; 
  ai_scripted_t *m_pAI; 
  char v48; 
  bool v49; 
  double v76; 
  double v77; 
  char v79; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-18h], xmm6 }
  _RDI = outTargetSpeed;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovaps [rsp+0C8h+var_88], xmm13
    vmovaps xmm10, xmm2
    vmovaps xmm6, xmm1
  }
  if ( !outTargetSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 2454, ASSERT_TYPE_ASSERT, "(outTargetSpeed)", (const char *)&queryFormat, "outTargetSpeed") )
    __debugbreak();
  _RBX = DCONST_DVARFLT_ai_maxTurnAngleForSpeedScaling;
  if ( !DCONST_DVARFLT_ai_maxTurnAngleForSpeedScaling && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_maxTurnAngleForSpeedScaling") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm12, dword ptr [rbx+28h]
    vmovaps xmm2, xmm12; max
    vmovaps xmm1, xmm10; min
    vmovaps xmm0, xmm6; val
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm11, cs:__real@3f800000
    vmovss  xmm7, dword ptr [rdi]
    vmovaps xmm13, xmm0
    vmovaps xmm9, xmm11
    vmovaps xmm8, xmm11
    vmovaps xmm6, xmm11
  }
  if ( this->m_pAI->speedScaleMode[0] == 2 )
  {
    _RBX = DCONST_DVARFLT_ai_minStrafeCornerSlowDownMultiplier;
    if ( !DCONST_DVARFLT_ai_minStrafeCornerSlowDownMultiplier && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_minStrafeCornerSlowDownMultiplier") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm9, dword ptr [rbx+28h] }
    _RBX = DCONST_DVARFLT_ai_maxStrafeCornerSlowDownMultiplier;
    if ( !DCONST_DVARFLT_ai_maxStrafeCornerSlowDownMultiplier && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_maxStrafeCornerSlowDownMultiplier") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm8, dword ptr [rbx+28h] }
    _RBX = DCONST_DVARFLT_ai_maxSpeedDuringStrafeCornerSlowDown;
    if ( !DCONST_DVARFLT_ai_maxSpeedDuringStrafeCornerSlowDown && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_maxSpeedDuringStrafeCornerSlowDown") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm7, dword ptr [rbx+28h] }
    _RBX = DCONST_DVARFLT_ai_minSpeedDuringStrafeCornerSlowDown;
    if ( DCONST_DVARFLT_ai_minSpeedDuringStrafeCornerSlowDown )
      goto LABEL_51;
    v33 = "ai_minSpeedDuringStrafeCornerSlowDown";
LABEL_49:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v33) )
      __debugbreak();
LABEL_51:
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm6, dword ptr [rbx+28h] }
    goto LABEL_52;
  }
  _RBX = DCONST_DVARFLT_ai_minSpeedForCombatCornerSlowDownMultiplier;
  if ( !DCONST_DVARFLT_ai_minSpeedForCombatCornerSlowDownMultiplier && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_minSpeedForCombatCornerSlowDownMultiplier") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vcomiss xmm0, dword ptr [rdi]
  }
  if ( v48 )
  {
    _RBX = DCONST_DVARFLT_ai_minCombatCornerSlowDownMultiplier;
    if ( !DCONST_DVARFLT_ai_minCombatCornerSlowDownMultiplier && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_minCombatCornerSlowDownMultiplier") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm9, dword ptr [rbx+28h] }
    _RBX = DCONST_DVARFLT_ai_maxCombatCornerSlowDownMultiplier;
    if ( !DCONST_DVARFLT_ai_maxCombatCornerSlowDownMultiplier && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_maxCombatCornerSlowDownMultiplier") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm8, dword ptr [rbx+28h] }
    _RBX = DCONST_DVARFLT_ai_maxSpeedDuringCombatCornerSlowDown;
    if ( !DCONST_DVARFLT_ai_maxSpeedDuringCombatCornerSlowDown && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_maxSpeedDuringCombatCornerSlowDown") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm7, dword ptr [rbx+28h] }
    _RBX = DCONST_DVARFLT_ai_minSpeedDuringCombatCornerSlowDown;
    if ( DCONST_DVARFLT_ai_minSpeedDuringCombatCornerSlowDown )
      goto LABEL_51;
    v33 = "ai_minSpeedDuringCombatCornerSlowDown";
    goto LABEL_49;
  }
  _RBX = DCONST_DVARFLT_ai_minSpeedForCQBCornerSlowDownMultiplier;
  if ( !DCONST_DVARFLT_ai_minSpeedForCQBCornerSlowDownMultiplier && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_minSpeedForCQBCornerSlowDownMultiplier") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vcomiss xmm0, dword ptr [rdi]
  }
  if ( v48 )
  {
    _RBX = DCONST_DVARFLT_ai_minCombatCQBCornerSlowDownMultiplier;
    if ( !DCONST_DVARFLT_ai_minCombatCQBCornerSlowDownMultiplier && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_minCombatCQBCornerSlowDownMultiplier") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm9, dword ptr [rbx+28h] }
    _RBX = DCONST_DVARFLT_ai_maxCombatCQBCornerSlowDownMultiplier;
    if ( !DCONST_DVARFLT_ai_maxCombatCQBCornerSlowDownMultiplier && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_maxCombatCQBCornerSlowDownMultiplier") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm8, dword ptr [rbx+28h] }
    _RBX = DCONST_DVARFLT_ai_maxSpeedDuringCQBCornerSlowDown;
    if ( !DCONST_DVARFLT_ai_maxSpeedDuringCQBCornerSlowDown && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_maxSpeedDuringCQBCornerSlowDown") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm7, dword ptr [rbx+28h] }
    _RBX = DCONST_DVARFLT_ai_minSpeedDuringCQBCornerSlowDown;
    if ( DCONST_DVARFLT_ai_minSpeedDuringCQBCornerSlowDown )
      goto LABEL_51;
    v33 = "ai_minSpeedDuringCQBCornerSlowDown";
    goto LABEL_49;
  }
LABEL_52:
  m_pAI = this->m_pAI;
  v48 = 0;
  v49 = !m_pAI->cautiousNavigationEnabled;
  if ( m_pAI->cautiousNavigationEnabled )
  {
    _RBX = DCONST_DVARFLT_ai_maxSpeedDuringCautiousCornerSlowDown;
    if ( !DCONST_DVARFLT_ai_maxSpeedDuringCautiousCornerSlowDown && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_maxSpeedDuringCautiousCornerSlowDown") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm7, dword ptr [rbx+28h] }
    _RBX = DCONST_DVARFLT_ai_minSpeedDuringCautiousCornerSlowDown;
    if ( !DCONST_DVARFLT_ai_minSpeedDuringCautiousCornerSlowDown && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_minSpeedDuringCautiousCornerSlowDown") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm6, dword ptr [rbx+28h] }
  }
  __asm
  {
    vmovss  xmm4, dword ptr [rdi]
    vsubss  xmm1, xmm13, xmm10
    vsubss  xmm0, xmm12, xmm10
    vdivss  xmm2, xmm1, xmm0
    vsubss  xmm3, xmm11, xmm2
    vsubss  xmm0, xmm9, xmm8
    vmulss  xmm1, xmm3, xmm0
    vminss  xmm6, xmm4, xmm6
    vcomiss xmm6, xmm7
    vaddss  xmm2, xmm1, xmm8
    vmulss  xmm8, xmm2, xmm4
  }
  if ( !(v48 | v49) )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm7, xmm7
      vmovsd  [rsp+0C8h+var_98], xmm0
      vcvtss2sd xmm1, xmm6, xmm6
      vmovsd  [rsp+0C8h+var_A0], xmm1
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 713, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%g, %g", v76, v77) )
      __debugbreak();
  }
  _R11 = &v79;
  __asm
  {
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmaxss  xmm0, xmm8, xmm6
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vminss  xmm1, xmm0, xmm7
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovss  dword ptr [rdi], xmm1
  }
}

/*
==============
AIScriptedInterface::ModifySpeedForTightCorner
==============
*/
char AIScriptedInterface::ModifySpeedForTightCorner(AIScriptedInterface *this, const vec3_t *nextCorner, const vec3_t *dirToCorner, const vec3_t *followingCorner, float *outTargetSpeed)
{
  _QWORD *v8; 
  char v9; 
  _QWORD *v10; 
  __int64 v12; 
  int v41[4]; 

  _RBX = outTargetSpeed;
  v8 = (_QWORD *)((__int64 (__fastcall *)(AINavigator *, const vec3_t *, const vec3_t *, const vec3_t *))this->m_pAI->pNavigator->Get2DNavigator)(this->m_pAI->pNavigator, nextCorner, dirToCorner, followingCorner);
  v9 = 0;
  v10 = v8;
  if ( !v8 )
    return v9;
  _RCX = this->m_pAI;
  v12 = *v8;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+838h]
    vmovss  xmm2, dword ptr [rcx+83Ch]
    vmovss  xmm3, dword ptr [rcx+840h]
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm0, xmm2, xmm2
    vmulss  xmm3, xmm0, cs:__real@3bb60b61
    vminss  xmm1, xmm3, cs:__real@3f800000
    vmulss  xmm2, xmm1, cs:__real@42700000
    vmulss  xmm0, xmm2, dword ptr [r14]
    vaddss  xmm1, xmm0, dword ptr [rbp+0]
    vmulss  xmm0, xmm2, dword ptr [r14+4]
    vmovss  [rsp+78h+var_38], xmm1
    vaddss  xmm1, xmm0, dword ptr [rbp+4]
    vmulss  xmm0, xmm2, dword ptr [r14+8]
    vmovss  [rsp+78h+var_34], xmm1
    vaddss  xmm1, xmm0, dword ptr [rbp+8]
    vmovss  [rsp+78h+var_30], xmm1
  }
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, const vec3_t *, int *))(v12 + 296))(v10, nextCorner, v41) )
  {
    _RDI = DCONST_DVARFLT_ai_nearEdgeCornerSpeedMultiplier;
    if ( !DCONST_DVARFLT_ai_nearEdgeCornerSpeedMultiplier && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_nearEdgeCornerSpeedMultiplier") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+28h]
      vmulss  xmm1, xmm0, dword ptr [rbx]
      vmovss  dword ptr [rbx], xmm1
    }
    v9 = 1;
  }
  if ( !AIScriptedInterface::IsApproachingTightQuarters(this) )
    return v9;
  _RDI = DCONST_DVARFLT_ai_tightCornerSpeedMultiplier;
  if ( !DCONST_DVARFLT_ai_tightCornerSpeedMultiplier && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_tightCornerSpeedMultiplier") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+28h]
    vmulss  xmm1, xmm0, dword ptr [rbx]
    vmovss  dword ptr [rbx], xmm1
  }
  _RDI = DCONST_DVARFLT_ai_maxSpeedDuringTightQuartersSlowDown;
  if ( !DCONST_DVARFLT_ai_maxSpeedDuringTightQuartersSlowDown && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_maxSpeedDuringTightQuartersSlowDown") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+28h]
    vminss  xmm1, xmm0, dword ptr [rbx]
    vmovss  dword ptr [rbx], xmm1
  }
  return 1;
}

/*
==============
AIScriptedInterface::OnScrCmd_CalcSuppressSpot
==============
*/
void AIScriptedInterface::OnScrCmd_CalcSuppressSpot(AIScriptedInterface *this, scrContext_t *scrContext)
{
  int NumParam; 
  int Int; 
  vec3_t v6; 
  vec3_t vectorValue; 
  float value[6]; 

  Sys_ProfBeginNamedEvent(0xFF808080, "AIScr_CalcSuppressSpot");
  NumParam = Scr_GetNumParam(scrContext);
  Scr_GetVector(scrContext, 0, &vectorValue);
  Scr_GetVector(scrContext, 1u, &v6);
  Int = -1;
  if ( NumParam > 2 && Scr_GetType(scrContext, 2u) )
    Int = Scr_GetInt(scrContext, 2u);
  if ( this->CalcSuppressSpot(this, &vectorValue, &v6, Int, (vec3_t *)value) )
    Scr_AddVector(scrContext, value);
  Sys_ProfEndNamedEvent();
}

/*
==============
AIScriptedInterface::OnScrCmd_GetAnimset
==============
*/
void AIScriptedInterface::OnScrCmd_GetAnimset(AIScriptedInterface *this, scrContext_t *scrContext)
{
  scr_string_t AnimsetName; 

  AnimsetName = BG_AnimationState_GetAnimsetName((const entityState_t *)this->m_pAI->ent);
  Scr_AddConstString(scrContext, AnimsetName);
}

/*
==============
AIScriptedInterface::OnScrCmd_SetAimState
==============
*/
void AIScriptedInterface::OnScrCmd_SetAimState(AIScriptedInterface *this, scrContext_t *scrContext)
{
  if ( Scr_GetNumParam(scrContext) && Scr_GetType(scrContext, 0) )
    this->m_pAI->animData.aimState = Scr_GetInt(scrContext, 0);
  else
    Scr_Error(COM_ERR_1777, scrContext, "SetAimState requires an integer argument");
}

/*
==============
AIScriptedInterface::OnScrCmd_SetAnimset
==============
*/
void AIScriptedInterface::OnScrCmd_SetAnimset(AIScriptedInterface *this, scrContext_t *scrContext)
{
  const char *String; 
  const char *v5; 

  String = Scr_GetString(scrContext, 0);
  if ( !this->SetAnimset(this, String) )
  {
    v5 = j_va("Attempting to set invalid animset %s", String);
    Scr_Error(COM_ERR_1774, scrContext, v5);
  }
}

/*
==============
AIScriptedInterface::OnScrCmd_StairsWithinDistance
==============
*/
void AIScriptedInterface::OnScrCmd_StairsWithinDistance(AIScriptedInterface *this, scrContext_t *scrContext)
{
  unsigned __int8 v6; 

  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 0);
  __asm { vmovaps xmm1, xmm0 }
  v6 = ((__int64 (__fastcall *)(AIScriptedInterface *))this->GetStairsWithinDist)(this);
  Scr_AddBool(scrContext, v6);
}

/*
==============
AIScriptedInterface::OnSetNewEnemy
==============
*/
void AIScriptedInterface::OnSetNewEnemy(AIScriptedInterface *this, const gentity_s *pPrevEnemy, const gentity_s *pNewEnemy, bool bResetThreatUpdate)
{
  ai_scripted_t *m_pAI; 
  const sentient_s *sentient; 
  sentient_info_t *SentientInfo; 
  ai_scripted_t *v22; 

  _RDI = pNewEnemy;
  if ( pPrevEnemy == pNewEnemy && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 4106, ASSERT_TYPE_ASSERT, "( pPrevEnemy != pNewEnemy )", (const char *)&queryFormat, "pPrevEnemy != pNewEnemy") )
    __debugbreak();
  m_pAI = this->m_pAI;
  if ( _RDI )
  {
    m_pAI->iLastSetEnemyTime = level.time;
    this->EnterAlertState(this);
  }
  else
  {
    m_pAI->threat.newEnemyReaction = 0;
    this->m_pAI->noTargetTimeToGunDown = level.time + G_irand(2000, 5000);
  }
  AIScriptedInterface::ClearUseEnemyGoal(this);
  if ( bResetThreatUpdate && !_RDI && pPrevEnemy )
    this->m_pAI->threat.threatUpdateTime = 0;
  tacpoint_ref_t::SetPoint(&this->m_pAI->sight.faceLikelyEnemyTacPoint, NULL);
  this->m_pAI->sight.faceLikelyEnemyPathNeedRecalculateTime = 0;
  this->m_pAI->sight.faceLikelyEnemyPathNeedCheckTime = 0;
  this->m_pAI->shoot.lastCanShootEnemyTime = 0;
  this->m_pAI->shoot.lastCanShootEnemyFromStepOutTime = 0;
  this->m_pAI->shoot.lastCanShootEnemyFromExposedAtNodeTime = 0;
  if ( _RDI )
  {
    sentient = _RDI->sentient;
    if ( sentient )
    {
      SentientInfo = Sentient_GetSentientInfo(this->m_pAI->sentient, sentient);
      if ( !SentientInfo->VisCache.bVisible )
        SentientInfo->VisCache.iLastUpdateTime = 0;
    }
  }
  if ( !pPrevEnemy )
    goto LABEL_18;
  if ( _RDI )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+130h]
      vsubss  xmm3, xmm0, dword ptr [rsi+130h]
      vmovss  xmm1, dword ptr [rdi+134h]
      vsubss  xmm2, xmm1, dword ptr [rsi+134h]
      vmovss  xmm0, dword ptr [rdi+138h]
      vsubss  xmm4, xmm0, dword ptr [rsi+138h]
      vmulss  xmm2, xmm2, xmm2
      vmulss  xmm1, xmm3, xmm3
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm3, xmm2, xmm1
      vaddss  xmm2, xmm3, xmm0
      vcomiss xmm2, cs:__real@48800000
    }
LABEL_18:
    this->m_pAI->nodeSelect.iPotentialAmbushNodeCount = 0;
  }
  v22 = this->m_pAI;
  if ( v22->combat.provideCoveringFire && _RDI && _RDI->sentient )
  {
    v22->sight.lastEnemySightPosValid = 1;
    Sentient_GetEyePosition(_RDI->sentient, &this->m_pAI->sight.lastEnemySightPos);
  }
  else
  {
    v22->sight.lastEnemySightPosValid = 0;
    AICommonInterface::UpdateLastEnemySightPos(this);
  }
}

/*
==============
AIScriptedInterface::OrientMode
==============
*/
void AIScriptedInterface::OrientMode(AIScriptedInterface *this, ai_orient_mode_t orientMode)
{
  this->m_pAI->ScriptOrient.eMode = orientMode;
}

/*
==============
AIScriptedInterface::OrientMode_FaceAngles
==============
*/
void AIScriptedInterface::OrientMode_FaceAngles(AIScriptedInterface *this, const vec3_t *angles, bool bSetBodyPitchAndRoll, bool bRelative)
{
  bool v4; 
  ai_orient_mode_t v5; 

  v4 = !bRelative;
  v5 = AI_ORIENT_DONT_CHANGE_RELATIVE;
  if ( v4 )
    v5 = AI_ORIENT_DONT_CHANGE;
  this->m_pAI->ScriptOrient.eMode = v5;
  this->SetDesiredBodyAngles(this, &this->m_pAI->ScriptOrient, angles, bSetBodyPitchAndRoll);
}

/*
==============
AIScriptedInterface::OrientMode_FaceCurrent
==============
*/
void AIScriptedInterface::OrientMode_FaceCurrent(AIScriptedInterface *this, bool bRelative)
{
  bool v2; 
  ai_orient_mode_t v3; 

  v2 = !bRelative;
  v3 = AI_ORIENT_DONT_CHANGE_RELATIVE;
  if ( v2 )
    v3 = AI_ORIENT_DONT_CHANGE;
  this->m_pAI->ScriptOrient.eMode = v3;
  this->m_pAI->ScriptOrient.vDesiredAngles.v[1] = this->m_pAI->orientation.vDesiredAngles.v[1];
}

/*
==============
AIScriptedInterface::OrientMode_FaceDirection
==============
*/
void AIScriptedInterface::OrientMode_FaceDirection(AIScriptedInterface *this, const vec3_t *direction, bool bRelative)
{
  bool v3; 
  ai_orient_mode_t v4; 

  v3 = !bRelative;
  v4 = AI_ORIENT_DONT_CHANGE_RELATIVE;
  if ( v3 )
    v4 = AI_ORIENT_DONT_CHANGE;
  this->m_pAI->ScriptOrient.eMode = v4;
  AIScriptedInterface::FaceVector(this, &this->m_pAI->ScriptOrient, direction);
}

/*
==============
AIScriptedInterface::OrientMode_Sync
==============
*/

void __fastcall AIScriptedInterface::OrientMode_Sync(AIScriptedInterface *this, double _XMM1_8)
{
  AIScriptedInterface_vtbl *v3; 
  int v7[4]; 

  _RDX = this->m_pAI;
  v3 = this->__vftable;
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vmovss  xmm0, dword ptr [rdx+99Ch]
    vmovss  [rsp+48h+var_24], xmm0
    vmovss  [rsp+48h+var_28], xmm1
    vmovss  [rsp+48h+var_20], xmm1
  }
  v3->SetDesiredBodyAngles(this, &_RDX->CodeOrient, (const vec3_t *)v7, 0);
  this->SetBodyAngles(this, (const vec3_t *)v7);
}

/*
==============
AIScriptedInterface::PathPending
==============
*/
bool AIScriptedInterface::PathPending(AIScriptedInterface *this)
{
  return this->m_pAI->pathFindTask.status[0] == 1;
}

/*
==============
AIScriptedInterface::PickOverrideArchetype
==============
*/
void AIScriptedInterface::PickOverrideArchetype(AIScriptedInterface *this, bool forceChangeNow)
{
  ai_scripted_t *m_pAI; 
  int number; 
  Ai_Asm *v6; 
  ASM_Instance *Instance; 
  bool (__fastcall *SetAnimset)(AIScriptedInterface *, const char *); 
  const char *v9; 
  Ai_Asm *v10; 

  Scr_SetString(&this->m_pAI->changeArchetype, (scr_string_t)0);
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 4567, ASSERT_TYPE_ASSERT, "(archetype != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "archetype != NULL_SCR_STRING") )
    __debugbreak();
  if ( BG_AnimationState_GetAnimsetName((const entityState_t *)this->m_pAI->ent) )
  {
    m_pAI = this->m_pAI;
    if ( forceChangeNow )
    {
      number = m_pAI->ent->s.number;
      v6 = Ai_Asm::Singleton();
      Instance = Ai_Asm::GetInstance(v6, NULL, number);
      SetAnimset = this->SetAnimset;
      v9 = SL_ConvertToString((scr_string_t)0);
      SetAnimset(this, v9);
      v10 = Ai_Asm::Singleton();
      Ai_Asm::RunSetArchetype(v10, (const scr_string_t)Instance->m_pASM->m_Name, Instance->m_EntNum, (const scr_string_t)0);
    }
    else
    {
      Scr_SetString(&m_pAI->changeArchetype, (scr_string_t)0);
    }
  }
}

/*
==============
AIScriptedInterface::PointNearClaimNode
==============
*/
bool AIScriptedInterface::PointNearClaimNode(AIScriptedInterface *this, const vec3_t *vPoint)
{
  pathnode_t *pClaimedNode; 
  vec3_t pos; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 1061, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 1062, ASSERT_TYPE_ASSERT, "( m_pAI->sentient )", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  pClaimedNode = this->m_pAI->sentient->pClaimedNode;
  if ( !pClaimedNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 1064, ASSERT_TYPE_ASSERT, "( node )", (const char *)&queryFormat, "node") )
    __debugbreak();
  pathnode_t::GetPos(pClaimedNode, &pos);
  __asm { vmovss  xmm3, cs:__real@43610000; bufferSq }
  return AICommonInterface::PointNearPointSqDist(this, vPoint, &pos, *(float *)&_XMM3);
}

/*
==============
AIScriptedInterface::ProcessSharpTurnSpeedScale
==============
*/

__int64 __fastcall AIScriptedInterface::ProcessSharpTurnSpeedScale(AIScriptedInterface *this, double distanceAlongPath, vec3_t *outNextCorner, float *outTargetSpeed, bool *outUsingCachedValue)
{
  int v12; 
  int v13; 
  int v24; 
  unsigned __int8 v25; 
  const char *v27; 
  __int64 result; 
  float maxDistanceFromCorner; 
  float minAngleForScaling; 
  float outTurnDegrees; 
  __int64 v57; 
  vec3_t originPoint; 
  float v59; 
  bfx::AreaHandle v60; 
  bfx::LinkHandle v61; 
  nav_cornerdata_t ptr; 
  vec3_t v63[30]; 

  v57 = -2i64;
  __asm { vmovaps [rsp+2B0h+var_50], xmm6 }
  _R14 = outNextCorner;
  __asm { vmovaps xmm6, xmm1 }
  Sys_ProfBeginNamedEvent(0xFF808080, "AIProcessSharpTurnSpeedScale");
  bfx::AreaHandle::AreaHandle(&v60);
  bfx::LinkHandle::LinkHandle(&v61);
  `eh vector constructor iterator'(&ptr, 0x28ui64, 0xAui64, (void (__fastcall *)(void *))nav_cornerdata_t::nav_cornerdata_t, (void (__fastcall *)(void *))nav_cornerdata_t::~nav_cornerdata_t);
  __asm { vaddss  xmm3, xmm6, cs:__real@430c0000 }
  *(double *)&_XMM0 = ((double (__fastcall *)(AINavigator *, nav_cornerdata_t *, __int64))this->m_pAI->pNavigator->GetNextNCorners)(this->m_pAI->pNavigator, &ptr, 10i64);
  v13 = v12;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm6, xmm0
  }
  _RDX = this->m_pAI;
  _RAX = _RDX->ent;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+130h]
    vmovss  dword ptr [rsp+2B0h+originPoint], xmm0
    vmovss  xmm1, dword ptr [rax+134h]
    vmovss  xmm0, dword ptr [rax+138h]
    vmovss  dword ptr [rsp+2B0h+originPoint+8], xmm0
    vmovss  dword ptr [rsp+2B0h+originPoint+4], xmm1
  }
  _RCX = 0i64;
  __asm
  {
    vmovss  xmm0, [rbp+rcx*8+1B0h+ptr]
    vmovss  dword ptr [r14], xmm0
    vmovss  xmm1, [rbp+rcx*8+1B0h+var_1EC]
    vmovss  dword ptr [r14+4], xmm1
    vmovss  xmm2, [rbp+rcx*8+1B0h+var_1E8]
    vmovss  dword ptr [r14+8], xmm2
  }
  v24 = _RDX->turnSlowdownData.timeStamp + 500;
  if ( v24 > level.time )
  {
    __asm { vucomiss xmm0, dword ptr [rdx+634h] }
    if ( v24 == level.time )
    {
      __asm { vucomiss xmm1, dword ptr [rdx+638h] }
      if ( v24 == level.time )
      {
        __asm { vucomiss xmm2, dword ptr [rdx+63Ch] }
        if ( v24 == level.time )
        {
          *outTargetSpeed = _RDX->turnSlowdownData.scaledSpeed;
          *outUsingCachedValue = 1;
          v25 = 1;
          goto LABEL_16;
        }
      }
    }
  }
  v25 = 0;
  if ( AIScriptedInterface::IsApproachingTightQuarters(this) )
  {
    _RDI = DCONST_DVARFLT_ai_minTurnAngleForTightQuartersSpeedScaling;
    if ( !DCONST_DVARFLT_ai_minTurnAngleForTightQuartersSpeedScaling )
    {
      v27 = "ai_minTurnAngleForTightQuartersSpeedScaling";
      goto LABEL_11;
    }
  }
  else
  {
    _RDI = DCONST_DVARFLT_ai_minTurnAngleForSpeedScaling;
    if ( !DCONST_DVARFLT_ai_minTurnAngleForSpeedScaling )
    {
      v27 = "ai_minTurnAngleForSpeedScaling";
LABEL_11:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v27) )
        __debugbreak();
    }
  }
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm6, dword ptr [rdi+28h]
    vmovss  [rsp+2B0h+minAngleForScaling], xmm6
    vmovss  xmm0, cs:__real@42a00000
    vmovss  [rsp+2B0h+maxDistanceFromCorner], xmm0
  }
  if ( AIScriptedInterface::HasUpcomingSharpTurn(this, &originPoint, &ptr, v13, 0, maxDistanceFromCorner, minAngleForScaling, 1, &outTurnDegrees) )
  {
    __asm
    {
      vmovaps xmm2, xmm6; minSlowDownAngle
      vmovss  xmm1, [rsp+2B0h+var_25C]; turnAngle
    }
    AIScriptedInterface::ModifySharpTurnSpeed(this, *(float *)&_XMM1, *(float *)&_XMM2, outTargetSpeed);
    v25 = 1;
    if ( v13 > 1 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [r14]
        vsubss  xmm6, xmm0, dword ptr [rsp+2B0h+originPoint]
        vmovss  xmm1, dword ptr [r14+4]
        vsubss  xmm5, xmm1, dword ptr [rsp+2B0h+originPoint+4]
        vmovss  xmm0, dword ptr [r14+8]
        vsubss  xmm4, xmm0, dword ptr [rsp+2B0h+originPoint+8]
        vmulss  xmm2, xmm5, xmm5
        vmulss  xmm1, xmm6, xmm6
        vaddss  xmm3, xmm2, xmm1
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm2, xmm3, xmm0
        vsqrtss xmm1, xmm2, xmm2
        vcmpless xmm0, xmm1, cs:__real@80000000
        vmovss  xmm2, cs:__real@3f800000
        vblendvps xmm1, xmm1, xmm2, xmm0
        vdivss  xmm0, xmm2, xmm1
        vmulss  xmm2, xmm0, xmm6
        vmulss  xmm1, xmm0, xmm5
        vmulss  xmm0, xmm4, xmm0
        vmovss  [rsp+2B0h+var_238], xmm0
        vunpcklps xmm1, xmm2, xmm1
        vmovsd  qword ptr [rsp+2B0h+originPoint], xmm1
      }
      originPoint.v[2] = v59;
      AIScriptedInterface::ModifySpeedForTightCorner(this, _R14, &originPoint, v63, outTargetSpeed);
    }
  }
LABEL_16:
  `eh vector destructor iterator'(&ptr, 0x28ui64, 0xAui64, (void (__fastcall *)(void *))nav_cornerdata_t::~nav_cornerdata_t);
  bfx::LinkHandle::~LinkHandle(&v61);
  bfx::AreaHandle::~AreaHandle(&v60);
  Sys_ProfEndNamedEvent();
  result = v25;
  __asm { vmovaps xmm6, [rsp+2B0h+var_50] }
  return result;
}

/*
==============
AIScriptedInterface::ResetASMInstanceData
==============
*/
void AIScriptedInterface::ResetASMInstanceData(AIScriptedInterface *this)
{
  ;
}

/*
==============
AIScriptedInterface::Retreat_AttemptMove
==============
*/
bool AIScriptedInterface::Retreat_AttemptMove(AIScriptedInterface *this)
{
  ai_scripted_t *m_pAI; 
  unsigned __int16 prevNodeID; 
  const pathnode_t *v6; 
  pathnode_t *BestCover; 
  ai_scripted_t *v8; 
  float outBestScore[4]; 
  CoverNodeMetricParams metricParams; 

  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rsp+0A8h+var_78], xmm0
  }
  AIScriptedInterface::GetCoverNodeMetricParams(this, &metricParams);
  m_pAI = this->m_pAI;
  if ( m_pAI->sentient->pClaimedNode || (prevNodeID = m_pAI->coverInfo.prevNodeID, prevNodeID == 0xFFFF) || m_pAI->blackboard.m_ReacquireStepTime + 1000 < level.time )
  {
    BestCover = AIScriptedInterface::Cover_FindBestCover(this, scr_const.cover_retreat, 1, 1, &metricParams, outBestScore);
  }
  else
  {
    v6 = Path_ConvertIndexToNode(prevNodeID);
    BestCover = AIScriptedInterface::Cover_FindBestCover(this, scr_const.cover_retreat, v6, 0, &metricParams, outBestScore);
  }
  if ( BestCover )
  {
    v8 = this->m_pAI;
    v8->btGoals[2].node = BestCover;
    pathnode_t::GetPos(BestCover, &v8->btGoals[2].pos);
    EntHandle::setEnt(&v8->btGoals[2].hEnt, NULL);
    EntHandle::setEnt(&v8->btGoals[2].hVolume, NULL);
    LOBYTE(BestCover) = 1;
    v8->btGoals[2].bValid = 1;
  }
  return (char)BestCover;
}

/*
==============
AIScriptedInterface::SetAI
==============
*/
void AIScriptedInterface::SetAI(AIScriptedInterface *this, ai_scripted_t *pAI)
{
  AIScriptedInterface_vtbl *v2; 

  v2 = this->__vftable;
  this->m_pAI = pAI;
  ((void (*)(void))v2->SetAICommon)();
}

/*
==============
AIScriptedInterface::SetAlertLevel
==============
*/
char AIScriptedInterface::SetAlertLevel(AIScriptedInterface *this, scr_string_t alertLevel)
{
  AlertLevel v2; 
  const scr_string_t **v3; 

  v2 = AI_ALERTNESS_ASLEEP;
  v3 = g_AIAlertLevelStrs;
  while ( alertLevel != **v3 )
  {
    ++v2;
    if ( (__int64)++v3 >= (__int64)&unk_1450828B8 )
      return 0;
  }
  this->m_pAI->combat.alertLevel = v2;
  return 1;
}

/*
==============
AIScriptedInterface::SetAnimMode
==============
*/
char AIScriptedInterface::SetAnimMode(AIScriptedInterface *this, ai_animmode_t animMode)
{
  EntityTagInfo *tagInfo; 
  gentity_s *ent; 

  tagInfo = this->GetEntity(this)->tagInfo;
  if ( !tagInfo || !tagInfo->blendToParent )
  {
    this->m_pAI->eScriptSetAnimMode = animMode;
    ent = this->m_pAI->ent;
    if ( animMode == AI_ANIM_NOPHYSICS )
    {
      ent->flags.m_flags[0] |= 0x800u;
      return 1;
    }
    ent->flags.m_flags[0] &= ~0x800u;
  }
  return 1;
}

/*
==============
AIScriptedInterface::SetAnimMode
==============
*/
bool AIScriptedInterface::SetAnimMode(AIScriptedInterface *this, scr_string_t mode)
{
  if ( mode == scr_const.nophysics )
    return this->SetAnimMode(this, AI_ANIM_NOPHYSICS);
  if ( mode == scr_const.gravity )
    return this->SetAnimMode(this, AI_ANIM_USE_BOTH_DELTAS);
  if ( mode == scr_const.gravity_off_nav )
    return this->SetAnimMode(this, AI_ANIM_USE_BOTH_DELTAS_OFF_NAV);
  if ( mode == scr_const.nogravity )
    return this->SetAnimMode(this, AI_ANIM_USE_BOTH_DELTAS_NOGRAVITY);
  if ( mode == scr_const.angle_deltas )
    return this->SetAnimMode(this, AI_ANIM_USE_ANGLE_DELTAS);
  if ( mode == scr_const.zonly_physics )
    return this->SetAnimMode(this, AI_ANIM_USE_BOTH_DELTAS_ZONLY_PHYSICS);
  if ( mode == scr_const.noclip )
    return this->SetAnimMode(this, AI_ANIM_USE_BOTH_DELTAS_NOCLIP);
  if ( mode == scr_const.none )
    return this->SetAnimMode(this, AI_ANIM_UNKNOWN);
  if ( mode == scr_const.normal )
    return this->SetAnimMode(this, AI_ANIM_MOVE_CODE);
  if ( mode == scr_const.physics_drift )
    return this->SetAnimMode(this, AI_ANIM_PHYSICS_DRIFT);
  if ( mode == scr_const.execution )
    return this->SetAnimMode(this, AI_ANIM_EXECUTION);
  return 0;
}

/*
==============
AIScriptedInterface::SetBTGoalEnt
==============
*/
void AIScriptedInterface::SetBTGoalEnt(AIScriptedInterface *this, ai_bt_goal_priority_t priority, gentity_s *pGoalEnt)
{
  ai_scripted_t *m_pAI; 
  __int64 v5; 

  m_pAI = this->m_pAI;
  v5 = priority;
  EntHandle::setEnt(&m_pAI->btGoals[v5].hEnt, pGoalEnt);
  m_pAI->btGoals[v5].pos = pGoalEnt->r.currentOrigin;
  m_pAI->btGoals[v5].node = NULL;
  EntHandle::setEnt(&m_pAI->btGoals[v5].hVolume, NULL);
  m_pAI->btGoals[v5].bValid = 1;
}

/*
==============
AIScriptedInterface::SetBTGoalNode
==============
*/
void AIScriptedInterface::SetBTGoalNode(AIScriptedInterface *this, ai_bt_goal_priority_t priority, pathnode_t *pNode)
{
  ai_script_goal_t *v3; 

  v3 = &this->m_pAI->btGoals[priority];
  v3->node = pNode;
  pathnode_t::GetPos(pNode, &v3->pos);
  EntHandle::setEnt(&v3->hEnt, NULL);
  EntHandle::setEnt(&v3->hVolume, NULL);
  v3->bValid = 1;
}

/*
==============
AIScriptedInterface::SetBTGoalPos
==============
*/
void AIScriptedInterface::SetBTGoalPos(AIScriptedInterface *this, ai_bt_goal_priority_t priority, const vec3_t *goalPos)
{
  __int64 v3; 
  __int64 v6; 
  ai_scripted_t *m_pAI; 

  v3 = priority;
  if ( priority >= AI_BT_GOAL_PRIORITY_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 388, ASSERT_TYPE_ASSERT, "(priority < AI_BT_GOAL_PRIORITY_COUNT)", (const char *)&queryFormat, "priority < AI_BT_GOAL_PRIORITY_COUNT") )
    __debugbreak();
  v6 = v3;
  m_pAI = this->m_pAI;
  m_pAI->btGoals[v6].pos.v[0] = goalPos->v[0];
  m_pAI->btGoals[v6].pos.v[1] = goalPos->v[1];
  m_pAI->btGoals[v6].pos.v[2] = goalPos->v[2];
  m_pAI->btGoals[v6].node = NULL;
  EntHandle::setEnt(&m_pAI->btGoals[v6].hEnt, NULL);
  EntHandle::setEnt(&m_pAI->btGoals[v6].hVolume, NULL);
  m_pAI->btGoals[v6].bValid = 1;
}

/*
==============
AIScriptedInterface::SetBTGoalRadius
==============
*/

void __fastcall AIScriptedInterface::SetBTGoalRadius(AIScriptedInterface *this, ai_bt_goal_priority_t priority, double radius)
{
  _RDX = 56i64 * (int)priority;
  _RAX = this->m_pAI;
  __asm { vmovss  dword ptr [rdx+rax+2CCh], xmm2 }
}

/*
==============
AIScriptedInterface::SetBTGoalVolume
==============
*/
void AIScriptedInterface::SetBTGoalVolume(AIScriptedInterface *this, ai_bt_goal_priority_t priority, gentity_s *pVolume)
{
  scrContext_t *v17; 

  _RBP = this->m_pAI;
  _RDI = pVolume;
  _RSI = priority;
  EntHandle::setEnt(&_RBP->btGoals[_RSI].hVolume, NULL);
  _RBP->btGoals[_RSI].pos.v[0] = _RDI->r.absBox.midPoint.v[0];
  _RBP->btGoals[_RSI].pos.v[1] = _RDI->r.absBox.midPoint.v[1];
  _RBP->btGoals[_RSI].pos.v[2] = _RDI->r.absBox.midPoint.v[2];
  this->m_pAI->nodeSelect.keepClaimedNode = 0;
  __asm
  {
    vmovss  xmm1, dword ptr [rdi+128h]
    vmovss  xmm0, dword ptr [rdi+124h]
    vmulss  xmm2, xmm0, xmm0
    vmulss  xmm1, xmm1, xmm1
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm0, xmm2, xmm2
    vaddss  xmm3, xmm0, cs:__real@41700000
    vmaxss  xmm1, xmm3, cs:__real@42800000
    vmovss  dword ptr [rsi+rbp+2CCh], xmm1
    vmovss  xmm0, dword ptr [rdi+12Ch]
    vaddss  xmm2, xmm0, cs:__real@42100000
    vmovss  dword ptr [rsi+rbp+2D0h], xmm2
  }
  v17 = ScriptContext_Server();
  if ( !Scr_IsTouchingInternal(v17, this->m_pAI->ent, _RDI) )
    this->ClearKeepClaimedNode(this);
  EntHandle::setEnt(&_RBP->btGoals[_RSI].hVolume, _RDI);
  this->m_pAI->fixedNodeNudged = 0;
  _RBP->btGoals[_RSI].bValid = 1;
}

/*
==============
AIScriptedInterface::SetBaseOverrideArchetype
==============
*/
void AIScriptedInterface::SetBaseOverrideArchetype(AIScriptedInterface *this, const scr_string_t archetype)
{
  ai_scripted_t *m_pAI; 

  m_pAI = this->m_pAI;
  if ( !m_pAI->overrideArchetypes[1] )
  {
    Scr_SetString(&m_pAI->overrideArchetypes[1], archetype);
    m_pAI = this->m_pAI;
  }
  Scr_SetString(m_pAI->overrideArchetypes, archetype);
  Scr_SetString(&this->m_pAI->baseArchetype, archetype);
  AIScriptedInterface::PickOverrideArchetype(this, 0);
}

/*
==============
AIScriptedInterface::SetCodeGoalFromScriptGoal
==============
*/
void AIScriptedInterface::SetCodeGoalFromScriptGoal(AIScriptedInterface *this, ai_script_goal_t *pScriptGoal, aiGoalSources src)
{
  int number; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  unsigned __int16 v11; 
  __int64 v12; 
  unsigned int v13; 
  __int64 v14; 
  ai_scripted_t *m_pAI; 
  gentity_s *v16; 
  ai_scripted_t *v17; 
  int v18; 
  ai_scripted_t *v19; 
  ai_scripted_t *v20; 
  const gentity_s *v21; 
  ai_scripted_t *v22; 
  bool v23; 
  bool v25; 
  __int64 v27; 
  __int64 v28; 

  _RBX = pScriptGoal;
  if ( !pScriptGoal && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 1085, ASSERT_TYPE_ASSERT, "( pScriptGoal )", (const char *)&queryFormat, "pScriptGoal") )
    __debugbreak();
  if ( !_RBX->bValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 1086, ASSERT_TYPE_ASSERT, "( pScriptGoal->bValid )", (const char *)&queryFormat, "pScriptGoal->bValid") )
    __debugbreak();
  if ( EntHandle::isDefined(&_RBX->hEnt) )
  {
    number = _RBX->hEnt.number;
    if ( (unsigned int)(number - 1) >= 0x7FF )
    {
      LODWORD(v27) = number - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 231, ASSERT_TYPE_ASSERT, "(unsigned)( number - 1 ) < (unsigned)( ENTITYNUM_NONE )", "number - 1 doesn't index ENTITYNUM_NONE\n\t%i not in [0, %i)", v27, 2047) )
        __debugbreak();
    }
    v7 = _RBX->hEnt.number;
    if ( (unsigned int)(v7 - 1) >= 0x800 )
    {
      LODWORD(v28) = 2048;
      LODWORD(v27) = v7 - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v27, v28) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    v8 = v7 - 1;
    if ( g_entities[v8].r.isInUse != g_entityIsInUse[v8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( !g_entityIsInUse[v8] )
    {
      LODWORD(v28) = _RBX->hEnt.number - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 232, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( G_IsEntityInUse( number - 1 ) )", v28) )
        __debugbreak();
    }
    v9 = (__int16)_RBX->hEnt.number;
    if ( (unsigned int)(v9 - 1) >= 0x800 )
    {
      LODWORD(v28) = 2048;
      LODWORD(v27) = v9 - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v27, v28) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    v10 = v9 - 1;
    if ( g_entities[v10].r.isInUse != g_entityIsInUse[v10] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( !g_entityIsInUse[v10] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 1090, ASSERT_TYPE_ASSERT, "( G_IsEntityInUse( pScriptGoal->hEnt.entnum() ) )", (const char *)&queryFormat, "G_IsEntityInUse( pScriptGoal->hEnt.entnum() )") )
      __debugbreak();
    if ( _RBX->node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 1091, ASSERT_TYPE_ASSERT, "( !pScriptGoal->node )", (const char *)&queryFormat, "!pScriptGoal->node") )
      __debugbreak();
    v11 = _RBX->hVolume.number;
    if ( v11 )
    {
      v12 = v11;
      v13 = v11 - 1;
      if ( v13 >= 0x800 )
      {
        LODWORD(v28) = 2048;
        LODWORD(v27) = v13;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v27, v28) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      v14 = v12 - 1;
      if ( g_entities[v14].r.isInUse != g_entityIsInUse[v14] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( !g_entityIsInUse[v14] )
      {
        LODWORD(v28) = _RBX->hVolume.number - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v28) )
          __debugbreak();
      }
      if ( _RBX->hVolume.number && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 1092, ASSERT_TYPE_ASSERT, "( !pScriptGoal->hVolume.isDefined() )", (const char *)&queryFormat, "!pScriptGoal->hVolume.isDefined()") )
        __debugbreak();
    }
    this->m_pAI->codeGoal.bMultiGoalPath = 0;
    this->m_pAI->codeGoal.node = NULL;
    EntHandle::setEnt(&this->m_pAI->codeGoal.hVolume, NULL);
    m_pAI = this->m_pAI;
    if ( m_pAI->codeGoalSrc != src || level.time > _RBX->entUpdateInterval + m_pAI->scriptGoalEntLastUpdate )
    {
      v16 = EntHandle::ent(&_RBX->hEnt);
      m_pAI->codeGoal.pos.v[0] = v16->r.currentOrigin.v[0];
      m_pAI->codeGoal.pos.v[1] = v16->r.currentOrigin.v[1];
      v17 = this->m_pAI;
      m_pAI->codeGoal.pos.v[2] = v16->r.currentOrigin.v[2];
      v17->scriptGoalEntLastUpdate = level.time;
      m_pAI = this->m_pAI;
    }
    v18 = 1;
    if ( src == AI_GOAL_SRC_BT )
      v18 = 6;
    m_pAI->codeGoalSrc = v18;
  }
  else
  {
    v19 = this->m_pAI;
    v19->codeGoal.pos.v[0] = _RBX->pos.v[0];
    v19->codeGoal.pos.v[1] = _RBX->pos.v[1];
    v19->codeGoal.pos.v[2] = _RBX->pos.v[2];
    v19->codeGoalSrc = src;
    this->m_pAI->codeGoal.node = _RBX->node;
    v20 = this->m_pAI;
    if ( EntHandle::isDefined(&_RBX->hVolume) )
      v21 = EntHandle::ent(&_RBX->hVolume);
    else
      v21 = NULL;
    EntHandle::setEnt(&v20->codeGoal.hVolume, v21);
    v22 = this->m_pAI;
    v23 = _RBX->bMultiGoalPath && v22->scriptGoalPath.numPoints;
    v22->codeGoal.bMultiGoalPath = v23;
  }
  __asm { vmovss  xmm1, dword ptr [rbx+0Ch]; radius }
  AICommonInterface::SetGoalRadius(&this->m_pAI->codeGoal, *(float *)&_XMM1);
  v25 = AICommonInterface::Use3DPathing(this);
  __asm { vmovss  xmm1, dword ptr [rbx+10h]; height }
  AICommonInterface::SetGoalHeight(&this->m_pAI->codeGoal, *(float *)&_XMM1, !v25);
}

/*
==============
AIScriptedInterface::SetCoverTacPoint
==============
*/
void AIScriptedInterface::SetCoverTacPoint(AIScriptedInterface *this, const tacpoint_t *pTacPoint)
{
  tacpoint_ref_t::SetPoint(&this->m_pAI->coverTacPoint, pTacPoint);
}

/*
==============
AIScriptedInterface::SetCurrentStance
==============
*/
void AIScriptedInterface::SetCurrentStance(AIScriptedInterface *this, const ai_stance_e stance)
{
  char v2; 
  gentity_s *ent; 
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *p_eFlags; 
  unsigned int v5; 

  v2 = stance;
  this->m_pAI->eCurrentStance = stance;
  this->m_pAI->blackboard.m_DesiredStance = stance;
  ent = this->m_pAI->ent;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 1004, ASSERT_TYPE_ASSERT, "( ent ) != ( nullptr )", "%s != %s\n\t%p, %p", "ent", "nullptr", NULL, NULL) )
    __debugbreak();
  p_eFlags = &ent->s.lerp.eFlags;
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(p_eFlags, ACTIVE, 4u);
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(p_eFlags, ACTIVE, 3u);
  if ( (v2 & 4) != 0 )
  {
    v5 = 4;
  }
  else
  {
    if ( (v2 & 2) == 0 )
      return;
    v5 = 3;
  }
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(p_eFlags, ACTIVE, v5);
}

/*
==============
AIScriptedInterface::SetEquippedWeapon
==============
*/
void AIScriptedInterface::SetEquippedWeapon(AIScriptedInterface *this, const Weapon *r_Weapon)
{
  scrContext_t *v4; 
  gentity_s *ent; 
  GWeaponMap *Instance; 

  v4 = ScriptContext_Server();
  GScr_Weapon_SetWeapon(v4, &this->m_pAI->currentWeapon, r_Weapon, 0);
  ent = this->m_pAI->ent;
  Instance = GWeaponMap::GetInstance();
  if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 447, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 448, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  Instance->SetWeapon(Instance, &ent->s.weaponHandle, r_Weapon);
}

/*
==============
AIScriptedInterface::SetFacialIndexFromASM
==============
*/
void AIScriptedInterface::SetFacialIndexFromASM(AIScriptedInterface *this, ASM_Instance *pInst, const Animset *pAnimset, int stateIndex, int entryIndex)
{
  ASM_State *v9; 
  ai_scripted_t *m_pAI; 
  const XAnimTree *v11; 
  const XAnim_s *SubTreeAnims; 
  XAnimSubTreeID *pOutAnimSubtreeID; 
  unsigned int pOutAnimIndex; 
  unsigned int pOutGraftNode; 
  int pOutStateIndex; 
  AnimsetState *outState; 
  AnimsetAlias *outAlias[3]; 
  XAnimSubTreeID v19; 

  outAlias[1] = (AnimsetAlias *)-2i64;
  if ( !pInst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 3997, ASSERT_TYPE_ASSERT, "(pInst)", (const char *)&queryFormat, "pInst") )
    __debugbreak();
  if ( pInst->m_bPrimary )
  {
    Sys_ProfBeginNamedEvent(0xFF808080, "SetFacialIndexFromASM");
    if ( pInst->m_CurState >= (unsigned int)pInst->m_pASM->m_NumStates )
    {
      LODWORD(pOutAnimSubtreeID) = pInst->m_CurState;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 4003, ASSERT_TYPE_ASSERT, "(unsigned)( pInst->m_CurState ) < (unsigned)( pInst->m_pASM->m_NumStates )", "pInst->m_CurState doesn't index pInst->m_pASM->m_NumStates\n\t%i not in [0, %i)", pOutAnimSubtreeID, pInst->m_pASM->m_NumStates) )
        __debugbreak();
    }
    v9 = &pInst->m_pASM->m_States[pInst->m_CurState];
    m_pAI = this->m_pAI;
    if ( v9->m_FacialState )
    {
      if ( m_pAI->facialState <= ASM )
      {
        if ( entryIndex < 0 )
          goto LABEL_18;
        v11 = this->GetAnimTree(this);
        BG_Animset_GetAnimIndexFromStateIndexAndEntry(pAnimset, stateIndex, entryIndex, &pOutAnimIndex, &pOutGraftNode, &v19, NULL);
        SubTreeAnims = XAnimGetSubTreeAnims(v11, v19);
        if ( !SubTreeAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 4025, ASSERT_TYPE_ASSERT, "(pAnims)", (const char *)&queryFormat, "pAnims") )
          __debugbreak();
        if ( !XAnimIsLeafNode(SubTreeAnims, pOutAnimIndex) || !XAnimNotetrackExists(SubTreeAnims, pOutAnimIndex, scr_const.facial_override) )
        {
LABEL_18:
          outState = NULL;
          if ( BG_Animset_GetStateInfoByName(pAnimset, (const scr_string_t)scr_const.knobs, &outState, &pOutStateIndex) )
          {
            if ( !outState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 4034, ASSERT_TYPE_ASSERT, "(pAnimsetState)", (const char *)&queryFormat, "pAnimsetState") )
              __debugbreak();
            outAlias[0] = NULL;
            if ( BG_Animset_GetCompleteAliasInfo(pAnimset, outState, (const scr_string_t)scr_const.head, outAlias) )
            {
              this->m_pAI->facialState = ASM;
              this->m_pAI->animData.facialIndex = AI_StringToFacialIndex((const scr_string_t)v9->m_FacialState);
            }
          }
        }
      }
    }
    else if ( m_pAI->facialState != FILLER )
    {
      m_pAI->animData.facialIndex = 0;
    }
    Sys_ProfEndNamedEvent();
  }
}

/*
==============
AIScriptedInterface::SetGunAdditiveAnim
==============
*/
void AIScriptedInterface::SetGunAdditiveAnim(AIScriptedInterface *this, AIGunAdditiveOptions desiredGunAdditive)
{
  this->m_pAI->animData.gunAdditiveIndex = desiredGunAdditive;
}

/*
==============
AIScriptedInterface::SetMayMoveTime
==============
*/
void AIScriptedInterface::SetMayMoveTime(AIScriptedInterface *this, int time)
{
  this->m_pAI->mayMoveTime = time;
}

/*
==============
AIScriptedInterface::SetOverrideArchetype
==============
*/
void AIScriptedInterface::SetOverrideArchetype(AIScriptedInterface *this, const ArcOverridePriority priority, const scr_string_t archetype, bool forceChangeNow)
{
  ai_scripted_t *m_pAI; 
  scr_string_t AnimsetName; 

  if ( (unsigned __int8)priority >= ARC_PRIORITY_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 4529, ASSERT_TYPE_ASSERT, "(priority < ARC_PRIORITY_COUNT)", (const char *)&queryFormat, "priority < ARC_PRIORITY_COUNT") )
    __debugbreak();
  m_pAI = this->m_pAI;
  if ( !m_pAI->overrideArchetypes[0] )
  {
    AnimsetName = BG_AnimationState_GetAnimsetName(&m_pAI->ent->s);
    AIScriptedInterface::SetBaseOverrideArchetype(this, AnimsetName);
    m_pAI = this->m_pAI;
  }
  Scr_SetString(&m_pAI->overrideArchetypes[(unsigned __int8)priority], archetype);
  AIScriptedInterface::PickOverrideArchetype(this, forceChangeNow);
}

/*
==============
AIScriptedInterface::SetReacquire
==============
*/
void AIScriptedInterface::SetReacquire(AIScriptedInterface *this, ai_reacquire_state_t reacquireState, __int16 targetEntNum)
{
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 1181, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  this->m_pAI->combat.reacquireState = reacquireState;
  this->m_pAI->combat.reacquireTarget = targetEntNum;
}

/*
==============
AIScriptedInterface::SetScriptGoalEntity
==============
*/
void AIScriptedInterface::SetScriptGoalEntity(AIScriptedInterface *this, gentity_s *pGoalEnt)
{
  signed __int64 v4; 
  ai_scripted_t *m_pAI; 
  __int64 v6; 
  __int64 v7; 

  if ( !pGoalEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 732, ASSERT_TYPE_ASSERT, "(pGoalEnt)", (const char *)&queryFormat, "pGoalEnt") )
    __debugbreak();
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 196, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v4 = pGoalEnt - g_entities;
  if ( (unsigned int)v4 >= 0x800 )
  {
    LODWORD(v6) = pGoalEnt - g_entities;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 199, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( 2048 ) )", "index doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v6, 2048) )
      __debugbreak();
  }
  v4 = (__int16)v4;
  if ( (unsigned int)(__int16)v4 >= 0x800 )
  {
    LODWORD(v7) = 2048;
    LODWORD(v6) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v6, v7) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[v4].r.isInUse != g_entityIsInUse[v4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 733, ASSERT_TYPE_ASSERT, "(G_IsEntityInUse( G_GetEntityIndex( pGoalEnt ) ))", (const char *)&queryFormat, "G_IsEntityInUse( G_GetEntityIndex( pGoalEnt ) )") )
    __debugbreak();
  this->ClearKeepClaimedNode(this);
  EntHandle::setEnt(&this->m_pAI->scriptGoal.hEnt, pGoalEnt);
  this->m_pAI->scriptGoal.node = NULL;
  EntHandle::setEnt(&this->m_pAI->scriptGoal.hVolume, NULL);
  this->m_pAI->scriptGoal.bMultiGoalPath = 0;
  this->m_pAI->scriptGoal.bValid = 1;
  m_pAI = this->m_pAI;
  if ( m_pAI->fixedNodeNudged )
    m_pAI->fixedNodeNudged = 0;
}

/*
==============
AIScriptedInterface::SetScriptGoalPath
==============
*/
void AIScriptedInterface::SetScriptGoalPath(AIScriptedInterface *this, const vec3_t *pathPoints, int numPathPoints)
{
  __int64 v3; 
  ai_scripted_t *m_pAI; 
  const gentity_s *v12; 
  unsigned int Instance; 
  const gentity_s *v14; 
  ai_scripted_t *v15; 

  v3 = numPathPoints;
  if ( !this->m_pAI->pNavigator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 775, ASSERT_TYPE_ASSERT, "(m_pAI->pNavigator)", (const char *)&queryFormat, "m_pAI->pNavigator") )
    __debugbreak();
  if ( !pathPoints && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 776, ASSERT_TYPE_ASSERT, "(pathPoints)", (const char *)&queryFormat, "pathPoints") )
    __debugbreak();
  if ( (int)v3 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 777, ASSERT_TYPE_ASSERT, "(numPathPoints > 0)", (const char *)&queryFormat, "numPathPoints > 0") )
    __debugbreak();
  _RSI = &pathPoints[v3 - 1];
  EntHandle::setEnt(&this->m_pAI->scriptGoal.hEnt, NULL);
  _RCX = this->m_pAI;
  if ( _RCX->scriptGoal.node )
    goto LABEL_14;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+288h]
    vucomiss xmm0, dword ptr [rsi]
  }
  if ( _RCX->scriptGoal.node )
    goto LABEL_14;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+28Ch]
    vucomiss xmm0, dword ptr [rsi+4]
  }
  if ( _RCX->scriptGoal.node )
    goto LABEL_14;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+290h]
    vucomiss xmm0, dword ptr [rsi+8]
  }
  if ( _RCX->scriptGoal.node )
  {
LABEL_14:
    _RCX->nodeSelect.keepClaimedNode = 0;
    m_pAI = this->m_pAI;
    m_pAI->scriptGoal.pos.v[0] = _RSI->v[0];
    m_pAI->scriptGoal.pos.v[1] = _RSI->v[1];
    m_pAI->scriptGoal.pos.v[2] = _RSI->v[2];
    m_pAI->scriptGoal.node = NULL;
    _RCX = this->m_pAI;
  }
  if ( EntHandle::isDefined(&_RCX->scriptGoal.hVolume) )
  {
    v12 = EntHandle::ent(&this->m_pAI->scriptGoal.hVolume);
    Instance = G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_FIRST, v12);
    v14 = EntHandle::ent(&this->m_pAI->scriptGoal.hVolume);
    if ( !PhysicsQuery_LegacyEntityContactPoint(PHYSICS_WORLD_ID_FIRST, &pathPoints[v3 - 1], Instance, v14) )
      EntHandle::setEnt(&this->m_pAI->scriptGoal.hVolume, NULL);
  }
  this->m_pAI->scriptGoal.bMultiGoalPath = 0;
  this->m_pAI->scriptGoal.bValid = 1;
  v15 = this->m_pAI;
  if ( v15->fixedNodeNudged )
  {
    v15->fixedNodeNudged = 0;
    v15 = this->m_pAI;
  }
  memcpy_0(&v15->scriptGoalPath, pathPoints, 12 * v3);
  this->m_pAI->scriptGoalPath.numPoints = v3;
  this->m_pAI->scriptGoalPath.curPoint = 0;
  this->m_pAI->scriptGoalPath.lastPathedPoint = -1;
  this->m_pAI->scriptGoal.bMultiGoalPath = 1;
}

/*
==============
AIScriptedInterface::SetScriptGoalPos
==============
*/
char AIScriptedInterface::SetScriptGoalPos(AIScriptedInterface *this, const vec3_t *vGoalPos, pathnode_t *node)
{
  ai_scripted_t *m_pAI; 
  const gentity_s *v11; 
  unsigned int Instance; 
  const gentity_s *v13; 
  ai_scripted_t *v14; 

  _RSI = vGoalPos;
  EntHandle::setEnt(&this->m_pAI->scriptGoal.hEnt, NULL);
  _RCX = this->m_pAI;
  if ( node != _RCX->scriptGoal.node )
    goto LABEL_5;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+288h]
    vucomiss xmm0, dword ptr [rsi]
  }
  if ( node != _RCX->scriptGoal.node )
    goto LABEL_5;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+28Ch]
    vucomiss xmm0, dword ptr [rsi+4]
  }
  if ( node != _RCX->scriptGoal.node )
    goto LABEL_5;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+290h]
    vucomiss xmm0, dword ptr [rsi+8]
  }
  if ( node != _RCX->scriptGoal.node )
  {
LABEL_5:
    _RCX->nodeSelect.keepClaimedNode = 0;
    m_pAI = this->m_pAI;
    m_pAI->scriptGoal.pos.v[0] = _RSI->v[0];
    m_pAI->scriptGoal.pos.v[1] = _RSI->v[1];
    m_pAI->scriptGoal.pos.v[2] = _RSI->v[2];
    m_pAI->scriptGoal.node = node;
    _RCX = this->m_pAI;
  }
  if ( EntHandle::isDefined(&_RCX->scriptGoal.hVolume) )
  {
    v11 = EntHandle::ent(&this->m_pAI->scriptGoal.hVolume);
    Instance = G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_FIRST, v11);
    v13 = EntHandle::ent(&this->m_pAI->scriptGoal.hVolume);
    if ( !PhysicsQuery_LegacyEntityContactPoint(PHYSICS_WORLD_ID_FIRST, _RSI, Instance, v13) )
      EntHandle::setEnt(&this->m_pAI->scriptGoal.hVolume, NULL);
  }
  this->m_pAI->scriptGoal.bMultiGoalPath = 0;
  this->m_pAI->scriptGoal.bValid = 1;
  v14 = this->m_pAI;
  if ( v14->fixedNodeNudged )
    v14->fixedNodeNudged = 0;
  return 1;
}

/*
==============
AIScriptedInterface::SetScriptGoalVolume
==============
*/
void AIScriptedInterface::SetScriptGoalVolume(AIScriptedInterface *this, gentity_s *volume)
{
  signed __int64 v4; 
  ai_scripted_t *m_pAI; 
  unsigned __int16 number; 
  __int64 v7; 
  unsigned int v8; 
  __int64 v9; 
  ai_scripted_t *v10; 
  __int64 v11; 
  __int64 v12; 

  if ( !volume && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 751, ASSERT_TYPE_ASSERT, "(volume)", (const char *)&queryFormat, "volume") )
    __debugbreak();
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 196, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v4 = volume - g_entities;
  if ( (unsigned int)v4 >= 0x800 )
  {
    LODWORD(v11) = volume - g_entities;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 199, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( 2048 ) )", "index doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v11, 2048) )
      __debugbreak();
  }
  v4 = (__int16)v4;
  if ( (unsigned int)(__int16)v4 >= 0x800 )
  {
    LODWORD(v12) = 2048;
    LODWORD(v11) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v11, v12) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[v4].r.isInUse != g_entityIsInUse[v4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 752, ASSERT_TYPE_ASSERT, "(G_IsEntityInUse( G_GetEntityIndex( volume ) ))", (const char *)&queryFormat, "G_IsEntityInUse( G_GetEntityIndex( volume ) )") )
    __debugbreak();
  m_pAI = this->m_pAI;
  number = m_pAI->scriptGoal.hEnt.number;
  if ( number )
  {
    v7 = number;
    v8 = number - 1;
    if ( v8 >= 0x800 )
    {
      LODWORD(v12) = 2048;
      LODWORD(v11) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v11, v12) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    v9 = v7 - 1;
    if ( g_entities[v9].r.isInUse != g_entityIsInUse[v9] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( !g_entityIsInUse[v9] )
    {
      LODWORD(v12) = m_pAI->scriptGoal.hEnt.number - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v12) )
        __debugbreak();
    }
    if ( m_pAI->scriptGoal.hEnt.number && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 753, ASSERT_TYPE_ASSERT, "(!m_pAI->scriptGoal.hEnt.isDefined())", (const char *)&queryFormat, "!m_pAI->scriptGoal.hEnt.isDefined()") )
      __debugbreak();
  }
  this->m_pAI->scriptGoal.bMultiGoalPath = 0;
  EntHandle::setEnt(&this->m_pAI->scriptGoal.hVolume, volume);
  this->m_pAI->scriptGoal.bValid = 1;
  v10 = this->m_pAI;
  if ( v10->fixedNodeNudged )
    v10->fixedNodeNudged = 0;
}

/*
==============
AIScriptedInterface::SetUnitType
==============
*/
void AIScriptedInterface::SetUnitType(AIScriptedInterface *this, AIUnitType unitType)
{
  AINavigator *pNavigator; 

  this->m_pAI->unitType = unitType;
  pNavigator = this->m_pAI->pNavigator;
  if ( pNavigator )
    Nav_SetLinkUsageFlagsForUnitType(pNavigator, unitType);
}

/*
==============
AIScriptedInterface::SetUnitType
==============
*/
char AIScriptedInterface::SetUnitType(AIScriptedInterface *this, scr_string_t unitTypeString)
{
  const scr_string_t **v3; 
  __int64 v4; 

  v3 = g_AIUnitTypeNames;
  v4 = 0i64;
  while ( unitTypeString != **v3 )
  {
    v4 = (unsigned int)(v4 + 1);
    if ( (__int64)++v3 >= (__int64)g_AIGunAdditiveOptionStrings )
      return 0;
  }
  this->SetUnitType(this, (AIUnitType)v4);
  return 1;
}

/*
==============
AIScriptedInterface::ShouldDoSharpTurn
==============
*/

__int64 __fastcall AIScriptedInterface::ShouldDoSharpTurn(AIScriptedInterface *this, double preTurnCheckDist, double postTurnCheckDist, vec3_t *outCorner)
{
  AIScriptedInterface *v18; 
  const AINavigator *pNavigator; 
  char v20; 
  char v21; 
  int v26; 
  int v47; 
  __int64 v48; 
  bool v49; 
  bool v50; 
  unsigned __int64 v51; 
  int v52; 
  bool v110; 
  ai_scripted_t *m_pAI; 
  __int64 result; 
  int v181; 
  vec3_t outHitPoint; 
  vec3_t endPos; 
  float v0[2]; 
  vec3_t outCurPos; 
  vec3_t startPos; 
  vec3_t vVelOut; 
  tmat33_t<vec3_t> axis; 
  nav_cornerdata_t ptr; 
  char v197; 
  char v198; 
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
    vmovaps xmm6, xmm2
    vmovss  dword ptr [rsp+340h+var_2F0], xmm2
    vmovaps xmm13, xmm1
    vmovss  [rsp+340h+var_2F4], xmm1
  }
  v18 = this;
  *(_QWORD *)startPos.v = this;
  `eh vector constructor iterator'(&ptr, 0x28ui64, 4ui64, (void (__fastcall *)(void *))nav_cornerdata_t::nav_cornerdata_t, (void (__fastcall *)(void *))nav_cornerdata_t::~nav_cornerdata_t);
  if ( !v18->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 2805, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  pNavigator = v18->m_pAI->pNavigator;
  if ( !pNavigator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 2808, ASSERT_TYPE_ASSERT, "(pNav)", (const char *)&queryFormat, "pNav") )
    __debugbreak();
  if ( !pNavigator->HasPath((AINavigator *)pNavigator) )
    goto LABEL_40;
  if ( pNavigator->m_TimeOfLastPathUpdate == level.time )
    goto LABEL_40;
  *(double *)&_XMM0 = ((double (__fastcall *)(const AINavigator *))pNavigator->GetPathDistToGoalOrLink)(pNavigator);
  __asm
  {
    vmovss  dword ptr [rsp+340h+var_2F0+4], xmm0
    vaddss  xmm1, xmm13, xmm6
    vcomiss xmm0, xmm1
  }
  if ( v20 )
    goto LABEL_40;
  _RAX = v18->m_pAI;
  __asm
  {
    vmovss  xmm1, cs:__real@43160000
    vcomiss xmm1, dword ptr [rax+0D4Ch]
  }
  if ( !(v20 | v21) )
    goto LABEL_40;
  __asm { vmovss  xmm3, cs:__real@447a0000; pathDistThreshold }
  v26 = Nav_CalculateNextNCorners(pNavigator, 4, &ptr, *(float *)&_XMM3);
  if ( v26 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 2826, ASSERT_TYPE_ASSERT, "( nCorners >= 0 )", (const char *)&queryFormat, "nCorners >= 0") )
    __debugbreak();
  Nav_GetPos(pNavigator, &outCurPos);
  __asm
  {
    vmovss  xmm6, [rbp+240h+ptr]
    vsubss  xmm3, xmm6, dword ptr [rbp+240h+outCurPos]
    vmovss  xmm11, [rbp+240h+var_17C]
    vsubss  xmm4, xmm11, dword ptr [rbp+240h+outCurPos+4]
    vmovss  xmm12, [rbp+240h+var_178]
    vsubss  xmm5, xmm12, dword ptr [rbp+240h+outCurPos+8]
    vmulss  xmm1, xmm4, xmm4
    vmulss  xmm0, xmm3, xmm3
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm9, xmm2, xmm2
    vcmpless xmm0, xmm9, cs:__real@80000000
    vmovss  xmm14, cs:__real@3f800000
    vblendvps xmm1, xmm9, xmm14, xmm0
    vmovss  [rsp+340h+var_2FC], xmm1
    vdivss  xmm0, xmm14, xmm1
    vmulss  xmm7, xmm3, xmm0
    vmovss  dword ptr [rbp+240h+lineAxis], xmm7
    vmulss  xmm8, xmm4, xmm0
    vmovss  dword ptr [rbp+240h+lineAxis+4], xmm8
    vmulss  xmm10, xmm5, xmm0
    vmovss  dword ptr [rbp+240h+lineAxis+8], xmm10
    vcomiss xmm9, cs:__real@3a83126f
  }
  if ( v20 )
    goto LABEL_40;
  __asm
  {
    vmovss  dword ptr [rbp+240h+var_298], xmm7
    vmovss  dword ptr [rbp+240h+var_298+4], xmm8
    vmovss  dword ptr [rbp+240h+var_298+8], xmm10
    vmovss  dword ptr [rsp+340h+outHitPoint], xmm6
    vmovss  dword ptr [rsp+340h+outHitPoint+4], xmm11
    vmovss  dword ptr [rsp+340h+outHitPoint+8], xmm12
  }
  _EDI = 0;
  v47 = 0;
  v181 = 0;
  v48 = v26 - 1;
  *(_QWORD *)endPos.v = v48;
  v49 = 0;
  v50 = v48 == 0;
  if ( v48 <= 0 )
    goto LABEL_28;
  v51 = 0i64;
  v52 = 2;
  _RBX = &v197;
  __asm { vmovaps xmm4, xmm14 }
  while ( 1 )
  {
    __asm
    {
      vmovss  xmm5, dword ptr [rbx-8]
      vsubss  xmm13, xmm5, dword ptr [rbx-30h]
      vmovss  xmm0, dword ptr [rbx-4]
      vsubss  xmm14, xmm0, dword ptr [rbx-2Ch]
      vmovss  xmm0, dword ptr [rbx]
      vsubss  xmm15, xmm0, dword ptr [rbx-28h]
      vmulss  xmm1, xmm14, xmm14
      vmulss  xmm0, xmm13, xmm13
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm15, xmm15
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm3, xmm2, xmm2
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm1, xmm3, xmm4, xmm0
      vdivss  xmm1, xmm4, xmm1
      vmulss  xmm2, xmm1, xmm13
      vmulss  xmm0, xmm1, xmm14
      vmulss  xmm3, xmm1, xmm15
      vmulss  xmm1, xmm8, xmm0
      vmulss  xmm0, xmm7, xmm2
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm10, xmm3
      vaddss  xmm2, xmm2, xmm1
      vcomiss xmm2, cs:__real@3f70902e
    }
    if ( v50 )
      break;
LABEL_24:
    __asm
    {
      vmulss  xmm0, xmm7, xmm13
      vmulss  xmm1, xmm8, xmm14
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm10, xmm15
      vaddss  xmm2, xmm2, xmm1
      vaddss  xmm9, xmm9, xmm2
      vmulss  xmm0, xmm7, xmm9
      vaddss  xmm6, xmm0, dword ptr [rbp+240h+outCurPos]
      vmulss  xmm0, xmm10, xmm9
      vmulss  xmm1, xmm8, xmm9
      vaddss  xmm12, xmm0, dword ptr [rbp+240h+outCurPos+8]
      vaddss  xmm11, xmm1, dword ptr [rbp+240h+outCurPos+4]
      vmovss  dword ptr [rsp+340h+outHitPoint+8], xmm12
      vmovss  dword ptr [rsp+340h+outHitPoint+4], xmm11
      vmovss  dword ptr [rsp+340h+outHitPoint], xmm6
    }
    v181 = ++v47;
    ++v52;
    ++v51;
    _RBX += 40;
    v49 = v51 < v48;
    v50 = v51 <= v48;
    if ( (__int64)v51 >= v48 )
    {
      __asm { vmovss  xmm14, cs:__real@3f800000 }
      goto LABEL_27;
    }
  }
  __asm
  {
    vmovss  xmm0, [rsp+340h+var_2F4]
    vsubss  xmm0, xmm0, cs:__real@41c00000
    vcomiss xmm9, xmm0
  }
  if ( v49 )
  {
    if ( v52 < v26 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+20h]
        vsubss  xmm7, xmm0, xmm5
        vmovss  xmm1, dword ptr [rbx+24h]
        vsubss  xmm6, xmm1, dword ptr [rbx-4]
        vmovss  xmm0, dword ptr [rbx+28h]
        vsubss  xmm5, xmm0, dword ptr [rbx]
        vxorps  xmm3, xmm7, cs:__xmm@80000000800000008000000080000000
        vxorps  xmm0, xmm0, xmm0
        vmovss  [rbp+240h+var_2B0], xmm0
        vmulss  xmm4, xmm6, xmm6
        vmulss  xmm0, xmm3, xmm3
        vaddss  xmm1, xmm0, xmm4
        vsqrtss xmm2, xmm1, xmm1
        vcmpless xmm0, xmm2, cs:__real@80000000
        vmovss  xmm8, cs:__real@3f800000
        vblendvps xmm1, xmm2, xmm8, xmm0
        vdivss  xmm1, xmm8, xmm1
        vmulss  xmm0, xmm1, xmm6
        vmovss  [rbp+240h+v0], xmm0
        vmulss  xmm1, xmm1, xmm3
        vmovss  [rbp+240h+v0+4], xmm1
        vmulss  xmm0, xmm7, xmm7
        vaddss  xmm2, xmm0, xmm4
        vmulss  xmm1, xmm5, xmm5
        vaddss  xmm2, xmm2, xmm1
        vsqrtss xmm3, xmm2, xmm2
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm1, xmm3, xmm8, xmm0
        vdivss  xmm0, xmm8, xmm1
        vmulss  xmm10, xmm0, xmm7
        vmulss  xmm6, xmm0, xmm6
        vmulss  xmm11, xmm0, xmm5
        vmovss  xmm2, cs:__real@3a83126f; epsilon
      }
      v110 = VecNCompareCustomEpsilon(v0, vec3_origin.v, *(float *)&_XMM2, 3);
      __asm
      {
        vmovss  xmm8, dword ptr [rbp+240h+lineAxis+4]
        vmovss  xmm7, dword ptr [rbp+240h+lineAxis]
      }
      if ( v110 )
      {
        __asm { vmovss  xmm10, dword ptr [rbp+240h+lineAxis+8] }
      }
      else
      {
        __asm
        {
          vmulss  xmm1, xmm8, xmm6
          vmulss  xmm0, xmm7, xmm10
          vaddss  xmm2, xmm1, xmm0
          vmovss  xmm10, dword ptr [rbp+240h+lineAxis+8]
          vmulss  xmm1, xmm10, xmm11
          vaddss  xmm0, xmm2, xmm1
          vcomiss xmm0, cs:__real@3f5db22d
        }
      }
      v48 = *(_QWORD *)endPos.v;
      v47 = v181;
      __asm { vmovss  xmm4, cs:__real@3f800000 }
    }
    goto LABEL_24;
  }
  __asm
  {
    vsubss  xmm4, xmm6, dword ptr [rbp+240h+outCurPos]
    vsubss  xmm5, xmm11, dword ptr [rbp+240h+outCurPos+4]
    vsubss  xmm6, xmm12, dword ptr [rbp+240h+outCurPos+8]
    vmulss  xmm1, xmm8, xmm5
    vmulss  xmm0, xmm7, xmm4
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm10, xmm6
    vaddss  xmm9, xmm2, xmm1
    vmulss  xmm3, xmm5, xmm5
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm3, xmm0
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm3, xmm2, xmm2
    vcmpless xmm0, xmm3, cs:__real@80000000
    vmovss  xmm14, cs:__real@3f800000
    vblendvps xmm1, xmm3, xmm14, xmm0
    vdivss  xmm2, xmm14, xmm1
    vmulss  xmm0, xmm4, xmm2
    vmovss  dword ptr [rbp+240h+var_298], xmm0
    vmulss  xmm1, xmm5, xmm2
    vmovss  dword ptr [rbp+240h+var_298+4], xmm1
    vmulss  xmm0, xmm2, xmm6
    vmovss  dword ptr [rbp+240h+var_298+8], xmm0
  }
LABEL_27:
  v18 = *(AIScriptedInterface **)startPos.v;
  __asm { vmovss  xmm13, [rsp+340h+var_2F4] }
LABEL_28:
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; zOffset
    vmovss  xmm12, cs:__real@40000000
    vmovaps xmm1, xmm12; radius
  }
  TurnDebug_DrawSphere(&outHitPoint, *(float *)&_XMM1, *(float *)&_XMM2, &colorOrangeHeat, 10);
  if ( !v18->m_pAI->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 2905, ASSERT_TYPE_ASSERT, "(m_pAI->ent)", (const char *)&queryFormat, "m_pAI->ent") )
    __debugbreak();
  AnglesToAxis(&v18->m_pAI->ent->r.currentAngles, &axis);
  m_pAI = v18->m_pAI;
  if ( m_pAI->orientation.faceMotion )
  {
    __asm
    {
      vmovss  xmm3, dword ptr [rbp+240h+axis+4]
      vmulss  xmm1, xmm3, dword ptr [rbp+240h+var_298+4]
      vmovss  xmm4, dword ptr [rbp+240h+axis]
      vmulss  xmm0, xmm4, dword ptr [rbp+240h+var_298]
      vaddss  xmm2, xmm1, xmm0
      vmovss  xmm5, dword ptr [rbp+240h+axis+8]
      vmulss  xmm1, xmm5, dword ptr [rbp+240h+var_298+8]
      vaddss  xmm0, xmm2, xmm1
      vcomiss xmm0, cs:__real@3f000000
    }
  }
  if ( !*((_DWORD *)&ptr.m_LinkType + 10 * v181) && !*(&ptr.m_bIsGoal + 40 * v181) && v181 + 1 < v26 )
  {
    if ( !m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 2919, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
      __debugbreak();
    Sentient_GetVelocity(v18->m_pAI->sentient, &vVelOut);
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+240h+vVelOut]
      vmulss  xmm3, xmm0, xmm0
      vmovss  xmm1, dword ptr [rbp+240h+vVelOut+4]
      vmulss  xmm2, xmm1, xmm1
      vaddss  xmm4, xmm3, xmm2
      vmovss  xmm0, dword ptr [rbp+240h+vVelOut+8]
      vmulss  xmm1, xmm0, xmm0
      vaddss  xmm2, xmm4, xmm1
      vcomiss xmm2, xmm14
      vmovd   xmm1, edi
    }
    _EAX = 0;
    __asm
    {
      vmovd   xmm0, eax
      vpcmpeqd xmm2, xmm0, xmm1
      vmovss  xmm0, cs:__real@41c00000
      vblendvps xmm0, xmm13, xmm0, xmm2
      vmovss  [rsp+340h+var_2F4], xmm0
      vaddss  xmm15, xmm13, xmm12
      vcomiss xmm9, xmm15
    }
  }
LABEL_40:
  `eh vector destructor iterator'(&ptr, 0x28ui64, 4ui64, (void (__fastcall *)(void *))nav_cornerdata_t::~nav_cornerdata_t);
  result = 0i64;
  _R11 = &v198;
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
AIScriptedInterface::ShouldShoot
==============
*/
bool AIScriptedInterface::ShouldShoot(AIScriptedInterface *this)
{
  const dvar_t *v3; 
  const char *v4; 
  bool result; 
  bool PathGoalPos; 
  bool v14; 
  scr_string_t AnimsetName; 
  scr_string_t v29; 
  bool v31; 
  vec3_t xyz; 
  vec3_t goalPos; 

  __asm { vmovaps [rsp+88h+var_18], xmm6 }
  if ( !AIScriptedInterface::MayShoot(this) )
    goto LABEL_9;
  if ( this->m_pAI->blackboard.m_bPartialGesturePlaying )
  {
    v3 = DVARBOOL_ai_whyaminotshooting;
    if ( !DVARBOOL_ai_whyaminotshooting && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_whyaminotshooting") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v3);
    if ( !v3->current.enabled )
      goto LABEL_9;
    v4 = "gesturing";
    goto LABEL_8;
  }
  PathGoalPos = AIScriptedInterface::GetPathGoalPos(this, &goalPos);
  v14 = !PathGoalPos;
  if ( !PathGoalPos )
    goto LABEL_24;
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+88h+goalPos]
    vmovss  xmm1, dword ptr [rsp+88h+goalPos+4]
  }
  _RAX = this->m_pAI;
  __asm
  {
    vsubss  xmm3, xmm0, dword ptr [rcx+130h]
    vsubss  xmm2, xmm1, dword ptr [rcx+134h]
    vmovss  xmm0, dword ptr [rsp+88h+goalPos+8]
    vsubss  xmm4, xmm0, dword ptr [rcx+138h]
    vmulss  xmm2, xmm2, xmm2
    vmulss  xmm1, xmm3, xmm3
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm2, xmm3, xmm0
    vcomiss xmm2, cs:__real@41800000
  }
  if ( v14 )
  {
LABEL_24:
    result = 1;
    goto LABEL_10;
  }
  if ( !_RAX->bRunNGunDisableAim )
  {
    if ( _RAX->Physics.stairsState )
      goto LABEL_24;
    __asm { vmovss  xmm6, dword ptr [rax+0D4Ch] }
    if ( !_RAX->overrideArchetypes[0] )
    {
      AnimsetName = BG_AnimationState_GetAnimsetName(&_RAX->ent->s);
      AIScriptedInterface::SetBaseOverrideArchetype(this, AnimsetName);
      _RAX = this->m_pAI;
    }
    v29 = _RAX->overrideArchetypes[0];
    if ( HasAnimSpeedThresholdEntryForArchetype(v29, scr_const.fast) && HasAnimSpeedThresholdEntryForArchetype(v29, scr_const.jog) )
    {
      __asm { vmovss  xmm3, cs:__real@3ecccccd; fractionValue }
      *(double *)&_XMM0 = GetAnimSpeedBetweenThresholdEntries(v29, scr_const.fast, scr_const.jog, *(float *)&_XMM3);
      __asm { vcomiss xmm6, xmm0 }
      if ( v31 )
        goto LABEL_24;
    }
    v31 = (unsigned int)v29 < scr_const.juggernaut;
    if ( v29 == scr_const.juggernaut || (v31 = (unsigned int)v29 < scr_const.juggernaut_cp, v29 == scr_const.juggernaut_cp) || (v31 = (unsigned int)v29 < scr_const.juggernaut_lw, v29 == scr_const.juggernaut_lw) )
    {
      __asm { vcomiss xmm6, cs:__real@42700000 }
      if ( v31 )
        goto LABEL_24;
    }
    else if ( this->m_pAI->bRunNGun )
    {
      goto LABEL_24;
    }
  }
  if ( !Dvar_GetBool_Internal_DebugName(DVARBOOL_ai_whyaminotshooting, "ai_whyaminotshooting") )
    goto LABEL_9;
  v4 = "moving fast";
LABEL_8:
  _RCX = this->m_pAI->ent;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+130h]
    vmovss  dword ptr [rsp+88h+xyz], xmm0
    vmovss  xmm1, dword ptr [rcx+134h]
    vmovss  dword ptr [rsp+88h+xyz+4], xmm1
    vmovss  xmm0, dword ptr [rcx+138h]
    vsubss  xmm2, xmm0, cs:__real@41400000
    vmovss  dword ptr [rsp+88h+xyz+8], xmm2
    vmovss  xmm2, cs:__real@3f4ccccd; scale
  }
  G_Main_AddDebugString(&xyz, &colorLtRed, *(float *)&_XMM2, v4);
LABEL_9:
  result = 0;
LABEL_10:
  __asm { vmovaps xmm6, [rsp+88h+var_18] }
  return result;
}

/*
==============
AIScriptedInterface::ShouldSlowDueToFacing
==============
*/

char __fastcall AIScriptedInterface::ShouldSlowDueToFacing(AIScriptedInterface *this, const vec3_t *dirToCorner, double distanceToCornerSq, float *outTurnDegrees)
{
  char v6; 
  bool v7; 
  vec3_t forward; 

  __asm { vcomiss xmm2, cs:__real@43c80000 }
  _RDI = outTurnDegrees;
  if ( v7 )
    return 0;
  _RAX = this->m_pAI;
  v6 = 0;
  v7 = !_RAX->orientation.faceMotion;
  if ( _RAX->orientation.faceMotion )
  {
    AngleVectors(&_RAX->ent->r.currentAngles, &forward, NULL, NULL);
    __asm
    {
      vmovss  xmm1, dword ptr [rsp+48h+forward+4]
      vmovss  xmm0, dword ptr [rsp+48h+forward]
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rax+83Ch]
      vmovss  xmm3, dword ptr [rax+838h]
      vmulss  xmm0, xmm0, xmm0
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm1, xmm1, xmm0
      vsqrtss xmm2, xmm1, xmm1
      vcmpless xmm0, xmm2, cs:__real@80000000
      vmovss  xmm1, cs:__real@3f800000
      vblendvps xmm0, xmm2, xmm1, xmm0
      vdivss  xmm1, xmm1, xmm0
      vmulss  xmm0, xmm3, xmm1
      vmovss  dword ptr [rsp+48h+forward], xmm0
      vmulss  xmm1, xmm1, dword ptr [rax+83Ch]
    }
  }
  __asm
  {
    vmulss  xmm1, xmm1, dword ptr [rbx+4]
    vmulss  xmm0, xmm0, dword ptr [rbx]
    vaddss  xmm0, xmm1, xmm0; X
    vcomiss xmm0, cs:__real@3f34fdf4
  }
  if ( !v6 )
    return 0;
  __asm { vcomiss xmm0, cs:__real@bf70624e }
  if ( v6 | v7 )
    return 0;
  *(float *)&_XMM0 = acosf_0(*(float *)&_XMM0);
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@42652ee0
    vmovss  dword ptr [rdi], xmm1
  }
  return 1;
}

/*
==============
AIScriptedInterface::SightTracePassed
==============
*/
_BOOL8 AIScriptedInterface::SightTracePassed(AIScriptedInterface *this, const vec3_t *startPos, const vec3_t *endPos, int ignoreEnt1, int ignoreEnt2, bool bIgnoreCharacters, bool bIgnoreFoliage, bool bIgnoreFx)
{
  int v12; 
  int contentmask; 
  bool v14; 
  _BOOL8 result; 

  v12 = 8394755;
  if ( !bIgnoreCharacters )
    v12 = 41965571;
  contentmask = v12 & 0xFFFFFFFD;
  if ( !bIgnoreFoliage )
    contentmask = v12;
  v14 = G_Main_SightTrace(startPos, endPos, ignoreEnt1, ignoreEnt2, contentmask);
  if ( !v14 || bIgnoreFx || (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    return v14;
  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  if ( SV_IsDemoPlaying() )
  {
    *(double *)&_XMM0 = SV_DemoSP_GetFxVisibility();
    __asm { vmovaps xmm6, xmm0 }
  }
  else
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_system_api_inline.h", 118, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::CLIENT_SERVER_SHARED_MEMORY ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::CLIENT_SERVER_SHARED_MEMORY )") )
      __debugbreak();
    *(double *)&_XMM0 = FX_GetClientVisibility(fx_serverVisClient, startPos, endPos);
    __asm { vmovaps xmm6, xmm0 }
    SV_DemoSP_RecordFxVisibility(*(float *)&_XMM0);
  }
  result = v14;
  __asm
  {
    vcomiss xmm6, cs:__real@3e4ccccd
    vmovaps xmm6, [rsp+48h+var_18]
  }
  return result;
}

/*
==============
AIScriptedInterface::SlowOnPathEnd
==============
*/

bool __fastcall AIScriptedInterface::SlowOnPathEnd(AIScriptedInterface *this, vec3_t *outWishDelta, double inTargetSpeed, double deceleration, float *outTargetSpeed, bool *bOutUseWishDelta)
{
  ai_scripted_t *m_pAI; 
  bool v20; 
  bool result; 
  ai_scripted_t *v34; 
  ai_scripted_t *v48; 
  __int64 v66; 
  vec3_t vFinalGoal; 
  char v69; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
  }
  _RDI = outWishDelta;
  __asm
  {
    vxorps  xmm8, xmm8, xmm8
    vcomiss xmm3, xmm8
    vmovaps xmm9, xmm3
    vmovaps xmm7, xmm2
  }
  if ( (unsigned __int64)&v66 == _security_cookie && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 2167, ASSERT_TYPE_ASSERT, "(deceleration > 0.f)", (const char *)&queryFormat, "deceleration > 0.f") )
    __debugbreak();
  *bOutUseWishDelta = 0;
  *(double *)&_XMM0 = Nav_GetPathDistToGoal(this->m_pAI->pNavigator);
  m_pAI = this->m_pAI;
  __asm { vmovaps xmm6, xmm0 }
  if ( m_pAI->speedScaleMode[0] )
  {
    __asm { vcomiss xmm0, cs:__real@43160000 }
LABEL_13:
    result = 0;
    goto LABEL_23;
  }
  if ( !m_pAI->iPathEndTime )
  {
    __asm { vucomiss xmm6, xmm8 }
    if ( m_pAI->iPathEndTime && !Nav_IsStraightLineToGoal(m_pAI->pNavigator) )
      goto LABEL_13;
    v20 = AICommonInterface::Use3DPathing(this);
    _RCX = this->m_pAI;
    __asm { vmovss  xmm0, dword ptr [rcx+838h] }
    if ( v20 )
    {
      __asm
      {
        vmovss  xmm2, dword ptr [rcx+83Ch]
        vmovss  xmm3, dword ptr [rcx+840h]
        vmulss  xmm1, xmm0, xmm0
        vmulss  xmm0, xmm2, xmm2
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm3, xmm3
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm1, dword ptr [rcx+83Ch]
        vmulss  xmm1, xmm1, xmm1
        vmulss  xmm2, xmm0, xmm0
      }
    }
    __asm
    {
      vaddss  xmm4, xmm2, xmm1
      vmulss  xmm1, xmm4, cs:__real@3d800000
      vmulss  xmm0, xmm6, xmm6
      vcomiss xmm1, xmm0
    }
    _RCX->iPathEndTime = level.time + 500;
  }
  AICommonInterface::GetPathFinalGoal(this, &vFinalGoal);
  v34 = this->m_pAI;
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+0A8h+vFinalGoal]
    vsubss  xmm7, xmm0, dword ptr [rax+130h]
    vmovss  xmm0, dword ptr [rsp+0A8h+vFinalGoal+4]
    vsubss  xmm8, xmm0, dword ptr [rax+134h]
    vmovss  xmm0, dword ptr [rsp+0A8h+vFinalGoal+8]
    vsubss  xmm6, xmm0, dword ptr [rax+138h]
  }
  if ( v34->iPathEndTime - level.time <= 0 )
  {
    this->ClearPath(this);
    __asm
    {
      vmulss  xmm1, xmm7, xmm7
      vmulss  xmm0, xmm8, xmm8
      vaddss  xmm9, xmm1, xmm0
    }
    this->m_pAI->iPathEndTime = 0;
    if ( AICommonInterface::Use3DPathing(this) )
    {
      __asm
      {
        vmulss  xmm0, xmm6, xmm6
        vaddss  xmm1, xmm0, xmm9
        vcomiss xmm1, cs:__real@43800000
      }
    }
    else
    {
      __asm { vcomiss xmm9, cs:__real@43800000 }
    }
    goto LABEL_13;
  }
  if ( v34->Physics.bHasGroundPlane )
  {
    __asm
    {
      vmovss  xmm0, cs:__real@3f800000
      vdivss  xmm9, xmm0, dword ptr [rcx+850h]
    }
  }
  else
  {
    __asm { vmovss  xmm9, cs:__real@3f800000 }
  }
  G_Level_GetFrameDuration();
  v48 = this->m_pAI;
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, eax
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vdivss  xmm3, xmm1, xmm0
    vmovss  xmm1, cs:__real@40000000
    vsubss  xmm2, xmm1, xmm3
    vmulss  xmm0, xmm2, xmm3
    vmulss  xmm4, xmm0, xmm9
    vmulss  xmm1, xmm7, xmm4
    vmovss  dword ptr [rdi], xmm1
    vmulss  xmm1, xmm6, xmm4
    vmulss  xmm0, xmm8, xmm4
    vmovss  dword ptr [rdi+8], xmm1
    vmovss  dword ptr [rdi+4], xmm0
  }
  v48->moveMode = 1;
  *bOutUseWishDelta = 1;
  result = 1;
LABEL_23:
  _R11 = &v69;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, [rsp+0A8h+var_38]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
  return result;
}

/*
==============
TurnDebug_DrawSphere
==============
*/

void __fastcall TurnDebug_DrawSphere(const vec3_t *pos, double radius, double zOffset, const vec4_t *color, int duration)
{
  const dvar_t *v7; 
  vec3_t center; 

  __asm
  {
    vmovaps [rsp+88h+var_18], xmm6
    vmovaps [rsp+88h+var_28], xmm7
  }
  v7 = DVARBOOL_ai_debugTurns;
  _RDI = pos;
  __asm
  {
    vmovaps xmm6, xmm2
    vmovaps xmm7, xmm1
  }
  if ( !DVARBOOL_ai_debugTurns && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugTurns") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( v7->current.enabled )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rdi]
      vmovss  xmm2, dword ptr [rdi+4]
      vmovss  dword ptr [rsp+88h+center], xmm0
      vaddss  xmm0, xmm6, dword ptr [rdi+8]
      vmovaps xmm1, xmm7; radius
      vmovss  dword ptr [rsp+88h+center+8], xmm0
      vmovss  dword ptr [rsp+88h+center+4], xmm2
    }
    G_DebugSphere(&center, *(float *)&_XMM1, color, 0, duration);
  }
  __asm
  {
    vmovaps xmm6, [rsp+88h+var_18]
    vmovaps xmm7, [rsp+88h+var_28]
  }
}

/*
==============
AIScriptedInterface::UnsupportedScriptCommand
==============
*/
void AIScriptedInterface::UnsupportedScriptCommand(AIScriptedInterface *this, scrContext_t *scrContext)
{
  Scr_Error(COM_ERR_1773, scrContext, "Script command is not supported yet.");
}

/*
==============
AIScriptedInterface::UpdateAimAngleValues
==============
*/
void AIScriptedInterface::UpdateAimAngleValues(AIScriptedInterface *this)
{
  DObj *ServerDObjForEnt; 
  DObj *v3; 

  ServerDObjForEnt = Com_GetServerDObjForEnt(this->m_pAI->ent);
  v3 = ServerDObjForEnt;
  if ( ServerDObjForEnt )
  {
    if ( ServerDObjForEnt->tree )
    {
      _RDX = this->m_pAI;
      __asm { vmovss  xmm2, dword ptr [rdx+478h]; value }
      XAnimSetFloatGameParameterByName(ServerDObjForEnt, scr_const.aim_yaw, *(float *)&_XMM2);
      _RCX = this->m_pAI;
      __asm { vmovss  xmm2, dword ptr [rcx+474h]; value }
      XAnimSetFloatGameParameterByName(v3, scr_const.aim_pitch, *(float *)&_XMM2);
    }
  }
}

/*
==============
AIScriptedInterface::UpdateAnimGameParams
==============
*/
void AIScriptedInterface::UpdateAnimGameParams(AIScriptedInterface *this, bool bASMTransitioned)
{
  ai_scripted_t *m_pAI; 
  bool aimActive; 
  int number; 
  Ai_Asm *v9; 
  const ASM_Instance *InstanceIfExists; 
  const ASM_Instance *v11; 
  DObj *ServerDObjForEnt; 

  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_28], xmm7
    vmovaps [rsp+68h+var_38], xmm8
  }
  Sys_ProfBeginNamedEvent(0xFF808080, "AI_UpdateAnimGameParams");
  this->UpdateClientOnlyAnimGameParams(this);
  G_AIAnim_UpdateFieldByParam(this->m_pAI->ent, AGENT_ANIM_PARAM_GUNADDITIVEINDEX);
  G_AIAnim_UpdateFieldByParam(this->m_pAI->ent, AGENT_ANIM_PARAM_LEANYAW);
  m_pAI = this->m_pAI;
  aimActive = m_pAI->animData.aimActive;
  if ( m_pAI->animData.gunAdditiveIndex != 1 )
  {
    number = m_pAI->ent->s.number;
    v9 = Ai_Asm::Singleton();
    InstanceIfExists = Ai_Asm::GetInstanceIfExists(v9, NULL, number);
    v11 = InstanceIfExists;
    if ( InstanceIfExists && (Common_Asm::Utils::CurrentStateHasFlag(InstanceIfExists, (const scr_string_t)scr_const.aim) || Common_Asm::Utils::CurrentStateHasFlag(v11, (const scr_string_t)scr_const.notetrackaim) && Common_Asm::Utils::EventFired(v11, (const scr_string_t)scr_const.start_aim)) )
    {
      this->m_pAI->animData.aimActive = 1;
      goto LABEL_9;
    }
    m_pAI = this->m_pAI;
  }
  m_pAI->animData.aimActive = 0;
LABEL_9:
  this->m_pAI->animData.strafeForwardIndex[0] = this->m_pAI->blackboard.m_bUseBackwardStrafeSpace + 1;
  G_AIAnim_UpdateFieldByParam(this->m_pAI->ent, AGENT_ANIM_PARAM_STRAFE_FORWARD_INDEX);
  _RCX = this->m_pAI;
  if ( aimActive != _RCX->animData.aimActive )
  {
    G_AIAnim_UpdateFieldByParam(_RCX->ent, AGENT_ANIM_PARAM_AIMACTIVE);
    _RCX = this->m_pAI;
  }
  if ( _RCX->animData.aimActive )
  {
    __asm
    {
      vxorps  xmm7, xmm7, xmm7
      vcomiss xmm7, dword ptr [rcx+0CACh]
      vmovss  xmm0, dword ptr [rcx+478h]
      vmovss  dword ptr [rcx+0D5Ch], xmm0
    }
    _RAX = this->m_pAI;
    __asm
    {
      vmovss  xmm0, dword ptr [rax+474h]
      vmovss  dword ptr [rax+0D60h], xmm0
    }
    _RCX = this->m_pAI;
    _RAX = _RCX->ent;
    __asm
    {
      vmovss  xmm0, dword ptr [rax+140h]
      vsubss  xmm1, xmm0, dword ptr [rcx+0CA4h]
      vmovss  xmm4, cs:__real@3b360b61
      vmulss  xmm3, xmm1, xmm4
      vmovss  xmm5, cs:__real@3f000000
      vaddss  xmm2, xmm3, xmm5
      vxorps  xmm8, xmm8, xmm8
      vroundss xmm0, xmm8, xmm2, 1
      vsubss  xmm0, xmm3, xmm0
      vmulss  xmm6, xmm0, cs:__real@43b40000
      vmovss  xmm0, dword ptr [rcx+0D5Ch]
      vcomiss xmm7, dword ptr [rcx+0CACh]
      vsubss  xmm1, xmm0, xmm6
      vmulss  xmm4, xmm1, xmm4
      vaddss  xmm2, xmm4, xmm5
      vroundss xmm3, xmm8, xmm2, 1
      vsubss  xmm0, xmm4, xmm3
      vmulss  xmm1, xmm0, cs:__real@43b40000
      vmovss  dword ptr [rcx+0D5Ch], xmm1
    }
    G_AIAnim_UpdateFieldByParam(this->m_pAI->ent, AGENT_ANIM_PARAM_AIMYAW);
    G_AIAnim_UpdateFieldByParam(this->m_pAI->ent, AGENT_ANIM_PARAM_AIMPITCH);
    G_Level_GetFrameDurationInSeconds();
    __asm { vdivss  xmm1, xmm6, xmm0 }
    _RAX = this->m_pAI;
    __asm { vmovss  dword ptr [rax+0D64h], xmm1 }
    G_AIAnim_UpdateFieldByParam(this->m_pAI->ent, AGENT_ANIM_PARAM_AIM_YAW_DELTA);
    _RCX = this->m_pAI;
  }
  _RAX = _RCX->ent;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+140h]
    vmovss  dword ptr [rcx+0CA4h], xmm0
  }
  this->m_pAI->prevAimYaw = this->m_pAI->animData.aimYaw;
  AIScriptedInterface::UpdateLookAtAnimParams(this);
  if ( AICommonInterface::HasPath(this) )
  {
    G_AIAnim_UpdateFieldByParam(this->m_pAI->ent, AGENT_ANIM_PARAM_DESIREDSPEED);
    G_AIAnim_UpdateFieldByParam(this->m_pAI->ent, AGENT_ANIM_PARAM_DOOR_SPEED_INDEX);
    G_AIAnim_UpdateFieldByParam(this->m_pAI->ent, AGENT_ANIM_PARAM_DOOR_INDEX);
  }
  G_AIAnim_UpdateFieldByParam(this->m_pAI->ent, AGENT_ANIM_PARAM_GESTURE_INDEX);
  G_AIAnim_UpdateFieldByParam(this->m_pAI->ent, AGENT_ANIM_PARAM_CIVILIAN_FOCUS);
  G_AIAnim_UpdateFieldByParam(this->m_pAI->ent, AGENT_ANIM_PARAM_AIM_STATE);
  G_AIAnim_UpdateFieldByParam(this->m_pAI->ent, AGENT_ANIM_PARAM_SHOOTSTYLE_INDEX);
  G_AIAnim_UpdateFieldByParam(this->m_pAI->ent, AGENT_ANIM_PARAM_NUMSHOTS);
  ServerDObjForEnt = Com_GetServerDObjForEnt(this->m_pAI->ent);
  BG_AIAnim_UpdateAnimTimeParameter(ServerDObjForEnt, this->m_pAI->ent->s.number);
  this->UpdateExecutionAnimParams(this);
  Sys_ProfEndNamedEvent();
  __asm
  {
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm7, [rsp+68h+var_28]
    vmovaps xmm8, [rsp+68h+var_38]
  }
}

/*
==============
AIScriptedInterface::UpdateCover
==============
*/
pathnode_t *AIScriptedInterface::UpdateCover(AIScriptedInterface *this, const tacpoint_t **ppOutCoverTacPoint)
{
  pathnode_t *v5; 
  ai_scripted_t *m_pAI; 
  const gentity_s *v7; 
  ai_scripted_t *v8; 
  bool searchCenteredAroundAI; 
  bool v10; 
  bool keepClaimedNode; 
  bool keepClaimedNodeIfValid; 
  char v14; 
  ai_scripted_t *v15; 
  pathnode_t *BestCover; 
  ai_scripted_t *v17; 
  unsigned __int16 prevNodeID; 
  const pathnode_t *v19; 
  const gentity_s *v20; 
  const tacpoint_t *BestTacPoint; 
  ai_scripted_t *v23; 
  int coverSearchInterval; 
  const dvar_t *v25; 
  ai_scripted_t *v26; 
  float outBestScore; 
  float v29; 
  __int64 v30; 
  int v31; 
  __int64 v32; 
  vec3_t pos; 
  CoverNodeMetricParams metricParams; 

  v30 = -2i64;
  v31 = 50;
  v5 = NULL;
  v32 = 0i64;
  SV_Profile_BeginEvent(SVPROF_AI_COVER_FINDING);
  if ( ppOutCoverTacPoint )
    *ppOutCoverTacPoint = NULL;
  m_pAI = this->m_pAI;
  if ( !m_pAI->ent->tagInfo && (m_pAI->boundingOverwatchEnabled || !AIScriptedInterface::KeepClaimedNode(this)) && !AIScriptedInterface::ShouldHoldGroundAgainstEnemy(this) && (!this->m_pAI->boundingOverwatchEnabled || this->IsCodeMoveRequested(this) || AIScriptedInterface::CanBoundingOverwatchMove(this)) && !AIScriptedInterface::IsDoingAmbush(this) )
  {
    AIScriptedInterface::GetCoverNodeMetricParams(this, &metricParams);
    v7 = this->GetCloseEnt(this);
    v8 = this->m_pAI;
    searchCenteredAroundAI = v8->boundingOverwatchEnabled;
    v10 = v8->squadNumber >= 0 || v8->nodeSelect.requestDifferentCover;
    keepClaimedNode = v8->nodeSelect.keepClaimedNode;
    keepClaimedNodeIfValid = v8->nodeSelect.keepClaimedNodeIfValid;
    v8->nodeSelect.keepClaimedNode = 0;
    this->m_pAI->nodeSelect.keepClaimedNodeIfValid = 0;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vmovss  [rsp+108h+outBestScore], xmm0
    }
    v14 = 0;
    if ( !v7 || (v15 = this->m_pAI, v15->combat.combatMode == AI_COMBAT_COVER_3D) )
    {
      v14 = 1;
      v17 = this->m_pAI;
      if ( v17->sentient->pClaimedNode || (prevNodeID = v17->coverInfo.prevNodeID, prevNodeID == 0xFFFF) || v17->blackboard.m_ReacquireStepTime + 1000 < level.time )
      {
        BestCover = AIScriptedInterface::Cover_FindBestCover(this, v17->nodeSelect.coverSelectorOverride, v10, searchCenteredAroundAI, &metricParams, &outBestScore);
      }
      else
      {
        v19 = Path_ConvertIndexToNode(prevNodeID);
        BestCover = AIScriptedInterface::Cover_FindBestCover(this, this->m_pAI->nodeSelect.coverSelectorOverride, v19, searchCenteredAroundAI, &metricParams, &outBestScore);
      }
    }
    else
    {
      BestCover = AIScriptedInterface::Cover_FindBestCoverAwayFrom(this, v7, v15->nodeSelect.coverSelectorOverride, v10, searchCenteredAroundAI, &metricParams);
    }
    v5 = BestCover;
    if ( ppOutCoverTacPoint )
    {
      *ppOutCoverTacPoint = NULL;
      if ( v14 )
      {
        v20 = NULL;
        if ( EntHandle::isDefined(&this->m_pAI->codeGoal.hVolume) )
          v20 = EntHandle::ent(&this->m_pAI->codeGoal.hVolume);
        BestTacPoint = AIScriptedInterface::Cover_FindBestTacPoint(this, this->m_pAI->nodeSelect.coverSelectorOverride, v10, v20, searchCenteredAroundAI, &metricParams, &v29);
        *ppOutCoverTacPoint = BestTacPoint;
        if ( BestTacPoint )
        {
          __asm
          {
            vmovss  xmm0, [rsp+108h+var_C4]
            vcomiss xmm0, [rsp+108h+outBestScore]
          }
          v5 = NULL;
LABEL_29:
          v23 = this->m_pAI;
          coverSearchInterval = v23->nodeSelect.coverSearchInterval;
          if ( coverSearchInterval < 1000 )
          {
            v25 = DVARINT_ai_coverSearchInterval;
            if ( !DVARINT_ai_coverSearchInterval && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_coverSearchInterval") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(v25);
            coverSearchInterval = v25->current.integer;
            v23 = this->m_pAI;
          }
          v23->nodeSelect.nextFindBestCoverTime = level.time + coverSearchInterval;
          this->m_pAI->nodeSelect.repeatCoverFindIfFailed = 0;
          this->m_pAI->nodeSelect.requestDifferentCover = 0;
          Scr_SetString(&this->m_pAI->nodeSelect.coverSelectorOverride, (scr_string_t)0);
          goto LABEL_40;
        }
      }
    }
    if ( v5 )
    {
      pathnode_t::GetPos(v5, &pos);
      if ( AICommonInterface::PointAtGoal(this, &pos, &this->m_pAI->codeGoal) )
        goto LABEL_29;
      v5 = NULL;
    }
    this->m_pAI->nodeSelect.keepClaimedNode = keepClaimedNode;
    this->m_pAI->nodeSelect.keepClaimedNodeIfValid = keepClaimedNodeIfValid;
    v26 = this->m_pAI;
    if ( v26->nodeSelect.repeatCoverFindIfFailed )
    {
      v26->nodeSelect.nextFindBestCoverTime = level.time + v26->nodeSelect.coverSearchIntervalAfterFailure;
      goto LABEL_40;
    }
    goto LABEL_29;
  }
LABEL_40:
  SV_Profile_EndEvent(SVPROF_AI_COVER_FINDING);
  return v5;
}

/*
==============
AIScriptedInterface::UpdateCustomNodes
==============
*/

void __fastcall AIScriptedInterface::UpdateCustomNodes(AIScriptedInterface *this, __int64 a2, double _XMM2_8)
{
  DObj *ServerDObjForEnt; 
  const DObj *v5; 

  ServerDObjForEnt = Com_GetServerDObjForEnt(this->m_pAI->ent);
  v5 = ServerDObjForEnt;
  if ( ServerDObjForEnt && ServerDObjForEnt->tree )
  {
    do
    {
      G_AIAnim_UpdateActiveFields(this->m_pAI->ent);
      XAnimTreeUpdateParameters(v5);
      __asm { vxorps  xmm2, xmm2, xmm2; dtime }
    }
    while ( XAnimUpdateDirtyCustomNodes(v5, v5->tree->children, *(float *)&_XMM2_8) );
  }
  else
  {
    G_AIAnim_UpdateActiveFields(this->m_pAI->ent);
  }
}

/*
==============
AIScriptedInterface::UpdateGroundSlopeValues
==============
*/
void AIScriptedInterface::UpdateGroundSlopeValues(AIScriptedInterface *this)
{
  char v10; 
  char v11; 

  _RAX = this->m_pAI;
  __asm
  {
    vmovaps [rsp+38h+var_18], xmm6
    vxorps  xmm6, xmm6, xmm6
  }
  if ( _RAX->Physics.bHasGroundPlane )
  {
    __asm
    {
      vmovss  xmm2, cs:__real@3f800000; max
      vmovss  xmm1, cs:__real@bf800000; min
      vmovss  xmm0, dword ptr [rax+850h]; val
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    *(float *)&_XMM0 = acosf_0(*(float *)&_XMM0);
    _RAX = this->m_pAI;
    __asm
    {
      vmulss  xmm1, xmm0, cs:__real@42652ee0
      vcomiss xmm6, dword ptr [rax+840h]
    }
    if ( v10 | v11 )
    {
      __asm
      {
        vmovss  dword ptr [rax+0D54h], xmm1
        vmovaps xmm6, [rsp+38h+var_18]
      }
    }
    else
    {
      __asm
      {
        vxorps  xmm0, xmm1, cs:__xmm@80000000800000008000000080000000
        vmovss  dword ptr [rax+0D54h], xmm0
        vmovaps xmm6, [rsp+38h+var_18]
      }
    }
  }
  else
  {
    __asm
    {
      vmovss  dword ptr [rax+0D54h], xmm6
      vmovaps xmm6, [rsp+38h+var_18]
    }
  }
}

/*
==============
AIScriptedInterface::UpdateGunPose
==============
*/
void AIScriptedInterface::UpdateGunPose(AIScriptedInterface *this)
{
  const dvar_t *v5; 
  bool enabled; 
  ai_scripted_t *m_pAI; 
  AIGunAdditiveOptions gunPoseOverride_internal; 
  const char *v9; 
  char v14; 
  scr_string_t baseArchetype; 
  char v19; 
  char v20; 
  ai_scripted_t *v38; 
  AIGunAdditiveOptions gunPoseOverride; 
  int number; 
  Ai_Asm *v41; 
  const ASM_Instance *InstanceIfExists; 
  const ASM_Instance *v43; 
  const Weapon *v44; 
  weapClass_t WeaponClass; 
  ai_scripted_t *v47; 
  sentient_s *TargetSentient; 
  ai_scripted_t *v78; 
  ai_scripted_t *v79; 
  ai_scripted_t *v80; 
  float v84; 
  vec2_t vec; 
  char v88; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-18h], xmm6
    vmovaps [rsp+98h+var_28], xmm7
  }
  v5 = DCONST_DVARBOOL_ai_debuggunpose;
  if ( !DCONST_DVARBOOL_ai_debuggunpose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debuggunpose") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  enabled = v5->current.enabled;
  Sys_ProfBeginNamedEvent(0xFF808080, "AI_UpdateGunPose");
  m_pAI = this->m_pAI;
  gunPoseOverride_internal = m_pAI->gunPoseOverride_internal;
  if ( gunPoseOverride_internal == 5 )
  {
    if ( !m_pAI->gunDiscipline )
      goto LABEL_15;
    __asm
    {
      vmovss  xmm0, cs:__real@43000000
      vmovss  [rsp+98h+var_78], xmm0
      vmovss  xmm3, cs:__real@42000000; closeDist
      vmovss  xmm2, cs:__real@3f7ef9db; angleDot
      vmovss  xmm1, cs:__real@3f441893; closeAngleDot
    }
    if ( AI_IsPlayerInMyLineOfFire(m_pAI, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, v84) )
    {
      this->m_pAI->bAimedAtAimTarget = 0;
      this->m_pAI->animData.gunAdditiveIndex = 1;
      if ( enabled )
      {
        v9 = "player in line of fire";
        goto LABEL_68;
      }
    }
    else
    {
LABEL_15:
      v14 = 0;
      __asm { vxorps  xmm6, xmm6, xmm6 }
      if ( AICommonInterface::HasPath(this) )
      {
        baseArchetype = this->m_pAI->baseArchetype;
        GetAnimSpeedThresholdValue(baseArchetype, scr_const.fast);
        __asm
        {
          vxorps  xmm7, xmm7, xmm7
          vcvtsi2ss xmm7, xmm7, eax
        }
        GetAnimSpeedThresholdValue(baseArchetype, scr_const.jog);
        __asm
        {
          vxorps  xmm5, xmm5, xmm5
          vcvtsi2ss xmm5, xmm5, eax
          vcomiss xmm7, xmm6
        }
        if ( !(v19 | v20) )
        {
          __asm { vcomiss xmm5, xmm6 }
          if ( !(v19 | v20) )
          {
            __asm
            {
              vmulss  xmm1, xmm5, cs:__real@3f666666
              vmulss  xmm0, xmm7, cs:__real@3dccccd0
              vaddss  xmm4, xmm1, xmm0
            }
            _RAX = this->m_pAI;
            __asm
            {
              vmovss  xmm2, dword ptr [rax+83Ch]
              vmovss  xmm0, dword ptr [rax+838h]
              vmovss  xmm3, dword ptr [rax+840h]
              vmulss  xmm1, xmm0, xmm0
              vmulss  xmm0, xmm2, xmm2
              vaddss  xmm2, xmm1, xmm0
              vmulss  xmm1, xmm3, xmm3
              vaddss  xmm2, xmm2, xmm1
              vsqrtss xmm0, xmm2, xmm2
              vmovss  xmm3, dword ptr [rax+0D4Ch]
              vcomiss xmm0, xmm4
            }
            if ( v19 )
            {
              v14 = 0;
            }
            else
            {
              __asm { vcomiss xmm3, xmm5 }
              v14 = 1;
            }
          }
        }
      }
      v38 = this->m_pAI;
      gunPoseOverride = v38->gunPoseOverride;
      if ( gunPoseOverride == 5 || v14 )
      {
        if ( this->InScriptedState(this) )
        {
          if ( enabled )
          {
            v9 = "in scripted";
            goto LABEL_68;
          }
        }
        else
        {
          number = this->m_pAI->ent->s.number;
          v41 = Ai_Asm::Singleton();
          InstanceIfExists = Ai_Asm::GetInstanceIfExists(v41, NULL, number);
          v43 = InstanceIfExists;
          if ( InstanceIfExists && Common_Asm::Utils::CurrentStateHasFlag(InstanceIfExists, (const scr_string_t)scr_const.notetrackaim) && !Common_Asm::Utils::EventFired(v43, (const scr_string_t)scr_const.start_aim) )
          {
            this->m_pAI->bAimedAtAimTarget = 0;
            this->m_pAI->animData.gunAdditiveIndex = 0;
            if ( enabled )
            {
              v9 = "waiting for aim";
              goto LABEL_68;
            }
          }
          else if ( v14 )
          {
            this->m_pAI->animData.gunAdditiveIndex = 0;
            if ( enabled )
            {
              v9 = "moving to fast gunup";
              goto LABEL_68;
            }
          }
          else
          {
            v44 = this->GetEquippedWeapon(this);
            WeaponClass = BG_GetWeaponClass(v44, 0);
            if ( (unsigned int)WeaponClass <= WEAPCLASS_SMG || WeaponClass == WEAPCLASS_PISTOL )
            {
              if ( AICommonInterface::GetTargetEntity(this) )
              {
                __asm
                {
                  vmovss  xmm0, dword ptr [rdx+130h]
                  vsubss  xmm1, xmm0, dword ptr [rcx+130h]
                  vmovss  dword ptr [rsp+98h+vec], xmm1
                  vmovss  xmm2, dword ptr [rdx+134h]
                  vsubss  xmm0, xmm2, dword ptr [rcx+134h]
                  vmovss  dword ptr [rsp+98h+vec+4], xmm0
                  vmovss  xmm1, dword ptr [rdx+138h]
                  vsubss  xmm2, xmm1, dword ptr [rcx+138h]
                  vmovss  [rsp+98h+var_40], xmm2
                }
                *(double *)&_XMM0 = vectoyaw(&vec);
                __asm { vmovaps xmm4, xmm0 }
                _RCX = this->m_pAI;
                _EDX = 0;
                __asm { vmovd   xmm2, edx }
                _EAX = (unsigned __int8)(_RCX->animData.gunAdditiveIndex - 3) <= 1u;
                __asm
                {
                  vmovd   xmm1, eax
                  vpcmpeqd xmm3, xmm1, xmm2
                  vmovss  xmm2, cs:__real@40a00000
                  vblendvps xmm5, xmm2, xmm6, xmm3
                  vmovss  xmm0, dword ptr [rcx+478h]
                  vaddss  xmm1, xmm0, dword ptr [rax+140h]
                  vsubss  xmm2, xmm4, xmm1
                  vmulss  xmm4, xmm2, cs:__real@3b360b61
                  vaddss  xmm3, xmm4, cs:__real@3f000000
                  vxorps  xmm0, xmm0, xmm0
                  vmovss  xmm2, xmm0, xmm3
                  vxorps  xmm1, xmm1, xmm1
                  vroundss xmm0, xmm1, xmm2, 1
                  vsubss  xmm0, xmm4, xmm0
                  vmulss  xmm2, xmm0, cs:__real@43b40000
                  vmovss  xmm1, dword ptr [rcx+0F0h]
                  vsubss  xmm0, xmm1, xmm5
                  vcomiss xmm2, xmm0
                  vaddss  xmm0, xmm5, dword ptr [rcx+0F4h]
                  vcomiss xmm2, xmm0
                }
                if ( _RCX->animData.shootStyleIndex == 1 )
                {
                  TargetSentient = AICommonInterface::GetTargetSentient(this);
                  if ( TargetSentient )
                  {
                    if ( !AICommonInterface::RecentlySeeSentient(this, TargetSentient, 1000) )
                    {
                      v78 = this->m_pAI;
                      if ( v78->blackboard.m_ShootParams.m_Objective == NORMAL )
                      {
                        v78->bAimedAtAimTarget = 0;
                        this->m_pAI->animData.gunAdditiveIndex = 2;
                        if ( enabled )
                        {
                          v9 = "no see sentient";
                          goto LABEL_68;
                        }
                        goto LABEL_69;
                      }
                    }
                    v79 = this->m_pAI;
                    if ( !v79->blackboard.m_ShootParams.m_bValid )
                    {
                      v79->bAimedAtAimTarget = 0;
                      this->m_pAI->animData.gunAdditiveIndex = 2;
                      if ( enabled )
                      {
                        v9 = "invalid shoot params";
                        goto LABEL_68;
                      }
                      goto LABEL_69;
                    }
                  }
                  else if ( !AICommonInterface::CanSeeEnemy(this) )
                  {
                    this->m_pAI->bAimedAtAimTarget = 0;
                    this->m_pAI->animData.gunAdditiveIndex = 2;
                    if ( enabled )
                    {
                      v9 = "can't see enemy";
                      goto LABEL_68;
                    }
                    goto LABEL_69;
                  }
                }
                if ( AICommonInterface::HasPath(this) || (v80 = this->m_pAI, v80->arrivalInfo.arriving) )
                {
                  this->m_pAI->animData.gunAdditiveIndex = AIScriptedInterface::GetGunUpPose(this);
                  if ( enabled )
                  {
                    v9 = "has path";
                    goto LABEL_68;
                  }
                }
                else
                {
                  v80->animData.gunAdditiveIndex = v80->bVisorDown + 3;
                  if ( enabled )
                  {
                    v9 = "GetGunADSPose";
                    goto LABEL_68;
                  }
                }
                goto LABEL_69;
              }
              v47 = this->m_pAI;
              if ( level.time > v47->noTargetTimeToGunDown )
              {
                v47->animData.gunAdditiveIndex = 1;
                v47 = this->m_pAI;
              }
              v47->bAimedAtAimTarget = 0;
              if ( enabled )
              {
                v9 = "no target";
                goto LABEL_68;
              }
            }
            else
            {
              this->m_pAI->animData.gunAdditiveIndex = AIScriptedInterface::GetGunUpPose(this);
              if ( enabled )
              {
                v9 = "bad weapon class";
                goto LABEL_68;
              }
            }
          }
        }
      }
      else
      {
        if ( (unsigned __int8)(gunPoseOverride - 3) > 1u )
        {
          if ( gunPoseOverride == ENABLE )
          {
            gunPoseOverride = AIScriptedInterface::GetGunUpPose(this);
            v38 = this->m_pAI;
          }
        }
        else
        {
          gunPoseOverride = v38->bVisorDown + 3;
        }
        v38->animData.gunAdditiveIndex = gunPoseOverride;
        if ( enabled )
        {
          v9 = "pose override";
          goto LABEL_68;
        }
      }
    }
  }
  else
  {
    if ( (unsigned __int8)(gunPoseOverride_internal - 3) > 1u )
    {
      if ( gunPoseOverride_internal == ENABLE )
      {
        gunPoseOverride_internal = AIScriptedInterface::GetGunUpPose(this);
        m_pAI = this->m_pAI;
      }
    }
    else
    {
      gunPoseOverride_internal = m_pAI->bVisorDown + 3;
    }
    m_pAI->animData.gunAdditiveIndex = gunPoseOverride_internal;
    if ( enabled )
    {
      v9 = "override internal";
LABEL_68:
      AIScriptedInterface::DrawGunPoseDebug(this, v9, this->m_pAI->animData.gunAdditiveIndex);
    }
  }
LABEL_69:
  Sys_ProfEndNamedEvent();
  _R11 = &v88;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, [rsp+98h+var_28]
  }
}

/*
==============
AIScriptedInterface::UpdateLeanAngles
==============
*/
void AIScriptedInterface::UpdateLeanAngles(AIScriptedInterface *this)
{
  ai_scripted_t *v4; 
  __int64 v5; 
  __int64 v7; 
  ai_scripted_t *m_pAI; 
  char v17; 
  const dvar_t *v26; 
  char v36; 
  char fmt; 
  vec2_t vec; 
  int v42[5]; 
  bfx::AreaHandle v43; 
  bfx::LinkHandle v44; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-18h], xmm6 }
  if ( AICommonInterface::HasPath(this) && ((v4 = this->m_pAI, v4->orientation.faceMotion) || v4->cautiousNavigationEnabled) && v4->Physics.stairsState == AI_STAIRS_NONE )
  {
    bfx::AreaHandle::AreaHandle(&v43);
    bfx::LinkHandle::LinkHandle(&v44);
    fmt = 0;
    LOBYTE(v5) = 1;
    __asm { vmovss  xmm1, cs:__real@42c80000 }
    ((void (__fastcall *)(AINavigator *, __int64, __int64, int *, char))this->m_pAI->pNavigator->GetPosAlongPath)(this->m_pAI->pNavigator, v7, v5, v42, fmt);
    m_pAI = this->m_pAI;
    __asm
    {
      vmovss  xmm0, [rsp+0B8h+var_60]
      vsubss  xmm1, xmm0, dword ptr [rax+130h]
      vmovss  dword ptr [rsp+0B8h+vec], xmm1
      vmovss  xmm2, [rsp+0B8h+var_5C]
      vsubss  xmm0, xmm2, dword ptr [rax+134h]
      vmovss  dword ptr [rsp+0B8h+vec+4], xmm0
      vmovss  xmm1, [rsp+0B8h+var_58]
      vsubss  xmm2, xmm1, dword ptr [rax+138h]
      vmovss  [rsp+0B8h+var_68], xmm2
    }
    *(double *)&_XMM0 = vectoyaw((const vec2_t *)&m_pAI->Physics.vVelocity);
    __asm
    {
      vmovaps xmm6, xmm0
      vmovss  xmm1, [rsp+0B8h+var_50]
      vcomiss xmm1, cs:__real@41400000
    }
    if ( !v17 )
      *(double *)&_XMM0 = vectoyaw(&vec);
    __asm
    {
      vsubss  xmm0, xmm0, xmm6
      vmulss  xmm4, xmm0, cs:__real@3b360b61
      vaddss  xmm2, xmm4, cs:__real@3f000000
      vxorps  xmm1, xmm1, xmm1
      vmovss  xmm3, xmm1, xmm2
      vxorps  xmm0, xmm0, xmm0
      vroundss xmm1, xmm0, xmm3, 1
      vsubss  xmm6, xmm4, xmm1
    }
    v26 = DCONST_DVARFLT_ai_leanScalar;
    if ( !DCONST_DVARFLT_ai_leanScalar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_leanScalar") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v26);
    __asm
    {
      vmulss  xmm0, xmm6, dword ptr [rdi+28h]
      vmulss  xmm0, xmm0, cs:__real@43b40000; val
      vmovss  xmm2, cs:__real@42b40000; max
      vmovss  xmm1, cs:__real@c2b40000; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm { vmovaps xmm2, xmm0 }
    _RAX = this->m_pAI;
    __asm
    {
      vmovss  xmm0, dword ptr [rax+0D68h]
      vmovss  xmm3, cs:__real@41200000
      vaddss  xmm1, xmm0, xmm3
      vcomiss xmm2, xmm1
    }
    if ( v17 | v36 )
    {
      __asm
      {
        vsubss  xmm0, xmm0, xmm3
        vmaxss  xmm1, xmm0, xmm2
      }
    }
    __asm { vmovss  dword ptr [rax+0D68h], xmm1 }
    bfx::LinkHandle::~LinkHandle(&v44);
    bfx::AreaHandle::~AreaHandle(&v43);
  }
  else
  {
    this->m_pAI->animData.leanYaw = 0.0;
  }
  __asm { vmovaps xmm6, [rsp+0B8h+var_18] }
}

/*
==============
AIScriptedInterface::UpdateMoveDirBasedOnHistory
==============
*/
void AIScriptedInterface::UpdateMoveDirBasedOnHistory(AIScriptedInterface *this, const vec3_t *lookAhead, vec3_t *inOutMoveDir)
{
  char v25; 

  _RBX = inOutMoveDir;
  _RDI = lookAhead;
  if ( this->m_pAI->moveHistoryConsistent )
  {
    inOutMoveDir->v[0] = lookAhead->v[0];
    *(_QWORD *)&inOutMoveDir->y = LODWORD(lookAhead->v[1]);
  }
  else
  {
    AIScriptedInterface::GetMoveHistoryAverage(this, inOutMoveDir);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi]
      vaddss  xmm5, xmm0, dword ptr [rbx]
      vmovss  dword ptr [rbx], xmm5
      vmovss  xmm0, dword ptr [rdi+4]
      vaddss  xmm4, xmm0, dword ptr [rbx+4]
      vmovss  dword ptr [rbx+4], xmm4
      vmovss  xmm0, dword ptr [rdi+8]
      vaddss  xmm1, xmm0, dword ptr [rbx+8]
      vmovss  dword ptr [rbx+8], xmm1
      vmulss  xmm0, xmm5, xmm5
      vmulss  xmm2, xmm4, xmm4
      vaddss  xmm1, xmm2, xmm0
      vsqrtss xmm3, xmm1, xmm1
      vcmpless xmm0, xmm3, cs:__real@80000000
      vmovss  xmm1, cs:__real@3f800000
      vblendvps xmm0, xmm3, xmm1, xmm0
      vdivss  xmm1, xmm1, xmm0
      vmulss  xmm2, xmm5, xmm1
      vmulss  xmm0, xmm4, xmm1
      vmovss  dword ptr [rbx+4], xmm0
      vmovss  dword ptr [rbx], xmm2
      vmulss  xmm1, xmm0, dword ptr [rdi+4]
      vmovss  xmm3, dword ptr [rdi]
      vmulss  xmm0, xmm2, xmm3
      vaddss  xmm1, xmm1, xmm0
      vcomiss xmm1, cs:__real@3f34fdf4
    }
    if ( v25 )
    {
      __asm { vmovss  dword ptr [rbx], xmm3 }
      _RBX->v[1] = _RDI->v[1];
    }
  }
}

/*
==============
AIScriptedInterface::UpdatePlayerSightAccuracy
==============
*/
void AIScriptedInterface::UpdatePlayerSightAccuracy(AIScriptedInterface *this)
{
  sentient_s *TargetSentient; 
  const sentient_s *v4; 

  TargetSentient = AICommonInterface::GetTargetSentient(this);
  v4 = TargetSentient;
  if ( !TargetSentient )
    goto LABEL_7;
  if ( !TargetSentient->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 674, ASSERT_TYPE_ASSERT, "(enemy->ent)", (const char *)&queryFormat, "enemy->ent") )
    __debugbreak();
  if ( v4->ent->client )
  {
    *(double *)&_XMM0 = AICommonInterface::GetPlayerSightAccuracy(this, v4);
    _RAX = this->m_pAI;
    __asm { vmovss  dword ptr [rax+434h], xmm0 }
  }
  else
  {
LABEL_7:
    this->m_pAI->shoot.playerSightAccuracy = 1.0;
  }
}

/*
==============
AIScriptedInterface::UpdateSpeedScaleValues
==============
*/
void AIScriptedInterface::UpdateSpeedScaleValues(AIScriptedInterface *this)
{
  const char *v12; 
  bool CanSlowOnPath; 
  bool v19; 
  bool v20; 
  const char *v30; 
  bool v34; 
  bool v38; 
  bool v39; 
  int *p_runNGunTime; 
  int *p_outTargetSpeed; 
  bool v72; 
  bool outUsingCachedValue; 
  bool bOutUseWishDelta; 
  float outTargetSpeed; 
  __int64 v83; 
  vec3_t outNextCorner; 
  vec3_t outWishDelta; 
  char v86; 
  void *retaddr; 

  _RAX = &retaddr;
  v83 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
  }
  Sys_ProfBeginNamedEvent(0xFF808080, "AI_UpdateSpeedScaleValues");
  _RDI = DCONST_DVARFLT_ai_maxSpeedDeltaDown;
  if ( !DCONST_DVARFLT_ai_maxSpeedDeltaDown && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_maxSpeedDeltaDown") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm { vmovss  xmm7, dword ptr [rdi+28h] }
  if ( this->m_pAI->cautiousNavigationEnabled )
  {
    _RDI = DCONST_DVARFLT_ai_maxSpeedDeltaUpCautious;
    if ( DCONST_DVARFLT_ai_maxSpeedDeltaUpCautious )
      goto LABEL_11;
    v12 = "ai_maxSpeedDeltaUpCautious";
  }
  else
  {
    _RDI = DCONST_DVARFLT_ai_maxSpeedDeltaUp;
    if ( DCONST_DVARFLT_ai_maxSpeedDeltaUp )
      goto LABEL_11;
    v12 = "ai_maxSpeedDeltaUp";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v12) )
    __debugbreak();
LABEL_11:
  Dvar_CheckFrontendServerThread(_RDI);
  __asm { vmovss  xmm10, dword ptr [rdi+28h] }
  if ( this->m_pAI->cautiousNavigationEnabled )
  {
    _RDI = DCONST_DVARFLT_ai_maxSpeedDeltaDownCautious;
    if ( !DCONST_DVARFLT_ai_maxSpeedDeltaDownCautious && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_maxSpeedDeltaDownCautious") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm { vmovss  xmm7, dword ptr [rdi+28h] }
  }
  *(double *)&_XMM0 = AIScriptedInterface::GetTargetSpeed(this);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovss  [rbp+57h+outTargetSpeed], xmm0
  }
  bOutUseWishDelta = 0;
  CanSlowOnPath = AIScriptedInterface::CanSlowOnPath(this);
  __asm { vxorps  xmm8, xmm8, xmm8 }
  v19 = 0;
  v20 = !CanSlowOnPath;
  if ( !CanSlowOnPath )
    goto LABEL_27;
  _RAX = this->m_pAI;
  __asm
  {
    vmovss  xmm1, dword ptr [rax+83Ch]
    vmovss  xmm0, dword ptr [rax+838h]
    vmulss  xmm2, xmm0, xmm0
    vmulss  xmm1, xmm1, xmm1
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm0, xmm2, xmm2
    vaddss  xmm0, xmm0, dword ptr [rax+0D4Ch]
    vmulss  xmm9, xmm0, cs:__real@3f000000
  }
  if ( _RAX->cautiousNavigationEnabled )
  {
    _RDI = DCONST_DVARFLT_ai_maxSpeedDeltaDownForCautiousPathEnd;
    if ( !DCONST_DVARFLT_ai_maxSpeedDeltaDownForCautiousPathEnd )
    {
      v30 = "ai_maxSpeedDeltaDownForCautiousPathEnd";
      goto LABEL_22;
    }
  }
  else
  {
    _RDI = DCONST_DVARFLT_ai_maxSpeedDeltaDownForPathEnd;
    if ( !DCONST_DVARFLT_ai_maxSpeedDeltaDownForPathEnd )
    {
      v30 = "ai_maxSpeedDeltaDownForPathEnd";
LABEL_22:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v30) )
        __debugbreak();
    }
  }
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm6, dword ptr [rdi+28h]
    vmovaps xmm3, xmm6; deceleration
    vmovaps xmm2, xmm9; inTargetSpeed
  }
  v34 = AIScriptedInterface::SlowOnPathEnd(this, &outWishDelta, *(float *)&_XMM2, *(float *)&_XMM3, &outTargetSpeed, &bOutUseWishDelta);
  v19 = 0;
  v20 = !v34;
  if ( v34 )
  {
    __asm { vmovaps xmm7, xmm6 }
LABEL_26:
    __asm { vmovss  xmm6, [rbp+57h+outTargetSpeed] }
    goto LABEL_27;
  }
  if ( !this->m_pAI->pNavigator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 2636, ASSERT_TYPE_ASSERT, "(m_pAI->pNavigator)", (const char *)&queryFormat, "m_pAI->pNavigator") )
    __debugbreak();
  _RAX = this->m_pAI;
  v19 = 0;
  v20 = !_RAX->sharpTurnSpeedScalingEnabled;
  if ( !_RAX->sharpTurnSpeedScalingEnabled )
    goto LABEL_26;
  __asm
  {
    vmovss  xmm2, dword ptr [rax+83Ch]
    vmovss  xmm0, dword ptr [rax+838h]
    vmovss  xmm3, dword ptr [rax+840h]
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm6, xmm2, xmm1
  }
  _RDI = DCONST_DVARFLT_ai_minVelocityForTurnSlowdown;
  if ( !DCONST_DVARFLT_ai_minVelocityForTurnSlowdown && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_minVelocityForTurnSlowdown") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+28h]
    vmulss  xmm1, xmm0, xmm0
    vcomiss xmm6, xmm1
  }
  if ( v19 )
    goto LABEL_26;
  outUsingCachedValue = 0;
  __asm
  {
    vmovss  xmm6, [rbp+57h+outTargetSpeed]
    vmovss  [rbp+57h+outTargetSpeed], xmm6
    vxorps  xmm1, xmm1, xmm1; distanceAlongPath
  }
  v72 = AIScriptedInterface::ProcessSharpTurnSpeedScale(this, *(float *)&_XMM1, &outNextCorner, &outTargetSpeed, &outUsingCachedValue);
  v19 = 0;
  v20 = !v72;
  if ( v72 )
  {
    _RAX = this->m_pAI;
    if ( !outUsingCachedValue )
    {
      __asm
      {
        vmulss  xmm2, xmm6, dword ptr [rax+0B58h]
        vmovss  xmm0, dword ptr [rbp+57h+outNextCorner]
        vmovss  dword ptr [rax+634h], xmm0
        vmovss  xmm1, dword ptr [rbp+57h+outNextCorner+4]
        vmovss  dword ptr [rax+638h], xmm1
        vmovss  xmm0, dword ptr [rbp+57h+outNextCorner+8]
        vmovss  dword ptr [rax+63Ch], xmm0
        vmaxss  xmm1, xmm2, [rbp+57h+outTargetSpeed]
        vmovss  dword ptr [rax+640h], xmm1
      }
      this->m_pAI->turnSlowdownData.timeStamp = level.time;
      _RAX = this->m_pAI;
      __asm { vmovss  xmm6, dword ptr [rax+640h] }
    }
    if ( _RAX->cautiousNavigationEnabled )
    {
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_ai_maxSpeedDeltaDownForCautiousCorners, "ai_maxSpeedDeltaDownForCautiousCorners");
      __asm { vmovaps xmm7, xmm0 }
    }
    else
    {
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_ai_maxSpeedDeltaDownForCorners, "ai_maxSpeedDeltaDownForCorners");
      __asm { vmovaps xmm7, xmm0 }
    }
  }
LABEL_27:
  _RAX = this->m_pAI;
  __asm { vmovss  dword ptr [rax+0B54h], xmm6 }
  _RAX = this->m_pAI;
  __asm { vcomiss xmm8, dword ptr [rax+0B50h] }
  if ( v19 || v20 )
  {
    v19 = 0;
    v20 = !_RAX->bRunNGun;
    if ( _RAX->bRunNGun )
    {
      v38 = HasAnimSpeedThresholdEntryForArchetype(_RAX->baseArchetype, scr_const.fast);
      v19 = 0;
      v20 = !v38;
      if ( v38 )
      {
        v39 = HasAnimSpeedThresholdEntryForArchetype(this->m_pAI->baseArchetype, scr_const.jog);
        v19 = 0;
        v20 = !v39;
        if ( v39 )
        {
          __asm { vmovss  xmm3, cs:__real@3f666666; fractionValue }
          *(double *)&_XMM0 = GetAnimSpeedBetweenThresholdEntries(this->m_pAI->baseArchetype, scr_const.fast, scr_const.jog, *(float *)&_XMM3);
          _RAX = this->m_pAI;
          __asm { vcomiss xmm0, dword ptr [rax+0B50h] }
          if ( !v19 && !v20 )
          {
            __asm { vmovss  dword ptr [rax+0B50h], xmm0 }
            LODWORD(outTargetSpeed) = level.time + 500;
            p_runNGunTime = &this->m_pAI->runNGunTime;
            p_outTargetSpeed = (int *)&outTargetSpeed;
            v19 = *p_runNGunTime < (unsigned int)(level.time + 500);
            v20 = *p_runNGunTime == level.time + 500;
            if ( *p_runNGunTime < level.time + 500 )
              p_outTargetSpeed = &this->m_pAI->runNGunTime;
            *p_runNGunTime = *p_outTargetSpeed;
          }
        }
      }
    }
    _RAX = this->m_pAI;
    __asm
    {
      vmovss  xmm0, dword ptr [rax+0B50h]
      vminss  xmm6, xmm0, xmm6
    }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rax+0D4Ch]
    vaddss  xmm1, xmm0, xmm10
    vcomiss xmm6, xmm1
  }
  if ( v19 || v20 )
  {
    __asm
    {
      vsubss  xmm1, xmm0, xmm7
      vcmpltss xmm0, xmm6, xmm1
      vblendvps xmm1, xmm6, xmm1, xmm0
    }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rax+0B4Ch]
    vcomiss xmm0, xmm8
  }
  if ( !v19 && !v20 )
    __asm { vminss  xmm1, xmm0, xmm1 }
  __asm { vmovss  dword ptr [rax+0D4Ch], xmm1 }
  _RAX = this->m_pAI;
  if ( _RAX->avoidanceBlockedData.blocked )
  {
    *(_QWORD *)_RAX->Physics.vWishDelta.v = 0i64;
    _RAX->Physics.vWishDelta.v[2] = 0.0;
  }
  if ( bOutUseWishDelta )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+57h+outWishDelta]
      vmovss  dword ptr [rax+888h], xmm0
      vmovss  xmm1, dword ptr [rbp+57h+outWishDelta+4]
      vmovss  dword ptr [rax+88Ch], xmm1
      vmovss  xmm0, dword ptr [rbp+57h+outWishDelta+8]
      vmovss  dword ptr [rax+890h], xmm0
    }
  }
  Sys_ProfEndNamedEvent();
  _R11 = &v86;
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
AIScriptedInterface::UpdateStance
==============
*/
void AIScriptedInterface::UpdateStance(AIScriptedInterface *this)
{
  ai_scripted_t *m_pAI; 
  scr_string_t m_MoveType; 
  ai_stance_e m_DesiredStance; 
  char v17; 
  char v18; 
  ai_stance_e BestStance; 
  vec3_t outGoalPos; 

  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "UpdateStance");
  m_pAI = this->m_pAI;
  m_MoveType = m_pAI->blackboard.m_MoveType;
  m_DesiredStance = m_pAI->blackboard.m_DesiredStance;
  if ( m_MoveType == scr_const.casual || m_MoveType == scr_const.casual_gun )
  {
    BestStance = STANCE_STAND;
  }
  else
  {
    if ( AICommonInterface::HasPath(this) )
    {
      Nav_GetGoalPos(this->m_pAI->pNavigator, &outGoalPos);
      _RCX = this->m_pAI->ent;
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+130h]
        vsubss  xmm3, xmm0, dword ptr [rsp+48h+outGoalPos]
        vmovss  xmm1, dword ptr [rcx+134h]
        vmovss  xmm0, dword ptr [rcx+138h]
        vsubss  xmm2, xmm1, dword ptr [rsp+48h+outGoalPos+4]
        vsubss  xmm4, xmm0, dword ptr [rsp+48h+outGoalPos+8]
        vmulss  xmm2, xmm2, xmm2
        vmulss  xmm1, xmm3, xmm3
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm3, xmm2, xmm1
        vaddss  xmm4, xmm3, xmm0
        vcomiss xmm4, cs:__real@3f800000
      }
      if ( !(v17 | v18) )
        m_DesiredStance = STANCE_STAND;
    }
    if ( this->m_pAI->blackboard.m_bGrenadeReturnThrow )
      m_DesiredStance = STANCE_STAND;
    BestStance = AIScriptedInterface::GetBestStance(this, m_DesiredStance);
    m_pAI = this->m_pAI;
  }
  m_pAI->blackboard.m_DesiredStance = BestStance;
  Sys_ProfEndNamedEvent();
}

/*
==============
AIScriptedInterface::UpdateTightQuarters
==============
*/
void AIScriptedInterface::UpdateTightQuarters(AIScriptedInterface *this)
{
  AINavigator2D *v3; 
  AINavigator2D *v7; 
  bool v10; 
  const dvar_t *v11; 
  bool IsApproachingTightQuarters; 
  const char *v19; 
  const char *v20; 
  bool v21; 
  const char *v22; 
  const char *v27; 
  const char *v28; 
  ai_scripted_t *m_pAI; 
  const char *v33; 
  vec3_t xyz; 

  v3 = this->m_pAI->pNavigator->Get2DNavigator(this->m_pAI->pNavigator);
  if ( v3 )
  {
    _RBX = DCONST_DVARFLT_ai_tightQuartersLookaheadDistance;
    __asm { vmovaps [rsp+98h+var_38], xmm6 }
    if ( !DCONST_DVARFLT_ai_tightQuartersLookaheadDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_tightQuartersLookaheadDistance") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovss  xmm6, dword ptr [rbx+28h]
      vmovaps xmm1, xmm6; updateDistance
    }
    AINavigator2D::UpdateTightQuarters(v3, *(float *)&_XMM1);
    if ( AICommonInterface::HasPath(this) )
    {
      v7 = this->m_pAI->pNavigator->Get2DNavigator(this->m_pAI->pNavigator);
      if ( v7 )
      {
        _RBX = DCONST_DVARFLT_ai_tightQuartersLookaheadDistance;
        if ( !DCONST_DVARFLT_ai_tightQuartersLookaheadDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_tightQuartersLookaheadDistance") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_RBX);
        __asm { vmovss  xmm1, dword ptr [rbx+28h]; maxDistance }
        v10 = AINavigator2D::IsInOrApproachingTightQuarters(v7, *(float *)&_XMM1);
      }
      else
      {
        v10 = 0;
      }
      this->m_pAI->inTightQuarters = v10;
    }
    v11 = DVARBOOL_ai_debugtightquarters;
    if ( !DVARBOOL_ai_debugtightquarters && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugtightquarters") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    if ( v11->current.enabled )
    {
      __asm { vmovaps xmm1, xmm6; maxDistance }
      _RCX = this->m_pAI->ent;
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+130h]
        vmovss  dword ptr [rsp+98h+xyz], xmm0
        vmovss  xmm2, dword ptr [rcx+134h]
        vmovss  dword ptr [rsp+98h+xyz+4], xmm2
        vmovss  xmm0, dword ptr [rcx+138h]
        vsubss  xmm3, xmm0, cs:__real@41000000
        vmovss  dword ptr [rsp+98h+xyz+8], xmm3
      }
      IsApproachingTightQuarters = AINavigator2D::IsApproachingTightQuarters(v3, *(float *)&_XMM1);
      v19 = "false";
      v20 = "false";
      v21 = IsApproachingTightQuarters;
      if ( this->m_pAI->inTightQuarters )
        v20 = "true";
      v22 = j_va("In tight quarters: %s", v20);
      __asm
      {
        vmovss  xmm6, cs:__real@3ecccccd
        vmovaps xmm2, xmm6; scale
      }
      G_Main_AddDebugString(&xyz, &colorLtGrey, *(float *)&_XMM2, v22);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+98h+xyz+8]
        vaddss  xmm1, xmm0, cs:__real@c1200000
      }
      v27 = "false";
      if ( v21 )
        v27 = "true";
      __asm { vmovss  dword ptr [rsp+98h+xyz+8], xmm1 }
      v28 = j_va("Approaching tight quarters: %s", v27);
      __asm { vmovaps xmm2, xmm6; scale }
      G_Main_AddDebugString(&xyz, &colorLtGrey, *(float *)&_XMM2, v28);
      __asm { vmovss  xmm0, dword ptr [rsp+98h+xyz+8] }
      m_pAI = this->m_pAI;
      __asm
      {
        vaddss  xmm1, xmm0, cs:__real@c1400000
        vmovss  dword ptr [rsp+98h+xyz+8], xmm1
      }
      if ( m_pAI->cautiousNavigationEnabled )
        v19 = "true";
      v33 = j_va("Cautious Navigation: %s", v19);
      __asm { vmovaps xmm2, xmm6; scale }
      G_Main_AddDebugString(&xyz, &colorLtGrey, *(float *)&_XMM2, v33);
    }
    __asm { vmovaps xmm6, [rsp+98h+var_38] }
  }
}

/*
==============
AIScriptedInterface::UpdateWhizbyAnim
==============
*/
void AIScriptedInterface::UpdateWhizbyAnim(AIScriptedInterface *this)
{
  ai_scripted_t *m_pAI; 
  scr_string_t AnimsetName; 
  int numAnimAliases; 
  char v5; 
  ai_scripted_t *v6; 
  unsigned __int8 v7; 
  AnimsetState *outState; 

  if ( !this->InScriptedState(this) && this->IsAlive(this) )
  {
    m_pAI = this->m_pAI;
    if ( !m_pAI->arrivalInfo.arriving && level.time - m_pAI->iLastWhizbyAnimTime >= 3000 )
    {
      AnimsetName = BG_AnimationState_GetAnimsetName(&m_pAI->ent->s);
      outState = NULL;
      BG_Animset_GetStateInfoByName(AnimsetName, (const scr_string_t)scr_const.whizby, &outState, NULL);
      if ( outState )
      {
        numAnimAliases = outState->numAnimAliases;
        if ( numAnimAliases > 0 )
        {
          if ( numAnimAliases >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 3759, ASSERT_TYPE_ASSERT, "( numWhizbys < (1 << 3) )", (const char *)&queryFormat, "numWhizbys < (1 << NUM_AI_WHIZBY_BITS)") )
            __debugbreak();
          v5 = G_irand(0, numAnimAliases);
          v6 = this->m_pAI;
          v7 = v5 + 1;
          if ( v6->animData.whizbyIndex == v7 )
          {
            v7 = (v7 + 1) % (numAnimAliases + 1);
            if ( !v7 )
              v7 = 1;
          }
          v6->animData.whizbyIndex = v7;
          G_AIAnim_UpdateFieldByParam(this->m_pAI->ent, AGENT_ANIM_PARAM_WHIZBY_INDEX);
          this->m_pAI->iLastWhizbyAnimTime = level.time;
        }
      }
    }
  }
}

/*
==============
AIScriptedInterface::UsingCoverNodes
==============
*/
__int64 AIScriptedInterface::UsingCoverNodes(AIScriptedInterface *this)
{
  return ((__int64 (__fastcall *)(AIScriptedInterface *))this->IsHumanAI)(this);
}

/*
==============
AIScriptedInterface::ValidateSpawn
==============
*/
char AIScriptedInterface::ValidateSpawn(AIScriptedInterface *this)
{
  return 1;
}

