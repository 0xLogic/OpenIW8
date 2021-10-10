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
char AI_IsPlayerInMyLineOfFire(const ai_scripted_t *pScripted, float closeAngleDot, float angleDot, float closeDist, float dist)
{
  float v7; 
  float v8; 
  float v9; 
  int v10; 
  __int64 v11; 
  __int64 i; 
  gentity_s *v13; 
  float v14; 
  __int128 v15; 
  __int128 v16; 
  float v17; 
  float v18; 
  __int128 v19; 
  __int64 v24; 
  __int64 v25; 
  vec3_t angles; 
  vec3_t forward; 
  vec3_t v28; 

  if ( dist <= closeDist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 3413, ASSERT_TYPE_ASSERT, "(dist > closeDist)", (const char *)&queryFormat, "dist > closeDist") )
    __debugbreak();
  v7 = pScripted->ent->r.currentOrigin.v[0];
  v8 = pScripted->ent->r.currentOrigin.v[1];
  v9 = pScripted->ent->r.currentOrigin.v[2];
  AngleVectors(&pScripted->ent->r.currentAngles, &forward, NULL, NULL);
  angles.v[1] = pScripted->ent->r.currentAngles.v[1] + pScripted->aimAngles.v[1];
  angles.v[0] = 0.0;
  angles.v[2] = 0.0;
  AngleVectors(&angles, &v28, NULL, NULL);
  v10 = 0;
  if ( level.maxclients <= 0 )
    return 0;
  v11 = 0i64;
  for ( i = 0i64; ; ++i )
  {
    if ( (unsigned int)v10 >= 0x800 )
    {
      LODWORD(v25) = 2048;
      LODWORD(v24) = v10;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v24, v25) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    if ( g_entities[i].r.isInUse != g_entityIsInUse[v11] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( g_entityIsInUse[v11] )
    {
      v13 = g_entities;
      if ( g_entities[i].health > 0 )
      {
        if ( !g_entities[i].sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 3437, ASSERT_TYPE_ASSERT, "( pPlayer->sentient )", (const char *)&queryFormat, "pPlayer->sentient") )
          __debugbreak();
        if ( v13[i].sentient->eTeam == pScripted->sentient->eTeam )
        {
          v14 = v13[i].r.currentOrigin.v[0] - v7;
          v16 = LODWORD(v13[i].r.currentOrigin.v[1]);
          *(float *)&v16 = v13[i].r.currentOrigin.v[1] - v8;
          v15 = v16;
          v17 = (float)((float)(*(float *)&v16 * forward.v[1]) + (float)(v14 * forward.v[0])) + (float)((float)(v13[i].r.currentOrigin.v[2] - v9) * forward.v[2]);
          if ( v17 <= dist && v17 >= 0.0 )
          {
            v18 = (float)(v17 - closeDist) / (float)(dist - closeDist);
            v19 = v15;
            *(float *)&v19 = fsqrt((float)(*(float *)&v15 * *(float *)&v15) + (float)(v14 * v14));
            _XMM3 = v19;
            __asm
            {
              vcmpless xmm0, xmm3, cs:__real@80000000
              vblendvps xmm0, xmm3, xmm14, xmm0
            }
            if ( (float)((float)((float)(*(float *)&v15 * (float)(1.0 / *(float *)&_XMM0)) * v28.v[1]) + (float)((float)(v14 * (float)(1.0 / *(float *)&_XMM0)) * v28.v[0])) > (float)((float)((float)(1.0 - v18) * closeAngleDot) + (float)(v18 * angleDot)) )
              break;
          }
        }
      }
    }
    ++v10;
    ++v11;
    if ( v10 >= level.maxclients )
      return 0;
  }
  return 1;
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
  float v6; 
  float v7; 
  float v8; 
  ai_scripted_t *v9; 
  const tacpoint_t *ClosestPointWithVisWithinRadiusIgnorePoints; 
  const tacpoint_t *v11; 
  AINavigator *pNavigator; 
  bool (__fastcall *IsAreaReachable)(AINavigator *, const bfx::AreaHandle *); 
  bfx::AreaHandle *AreaForPoint; 
  ai_scripted_t *v15; 
  bool result; 
  const tacpoint_t *v17; 
  ai_scripted_t *v18; 
  const tacpoint_t *ClosestPointWithoutVisWithinRadiusIgnorePoints; 
  AINavigator *v20; 
  bool (__fastcall *v21)(AINavigator *, const bfx::AreaHandle *); 
  bfx::AreaHandle *v22; 
  vec3_t pIgnoreVecs; 
  vec3_t currentOrigin; 

  TargetSentient = AICommonInterface::GetTargetSentient(this);
  v3 = TargetSentient;
  if ( TargetSentient )
  {
    v4 = Sentient_NearestTacPoint(TargetSentient);
    if ( !v4 )
      return 0;
    m_pAI = this->m_pAI;
    v6 = v3->ent->r.currentOrigin.v[0] - m_pAI->ent->r.currentOrigin.v[0];
    v7 = v3->ent->r.currentOrigin.v[1] - m_pAI->ent->r.currentOrigin.v[1];
    v8 = v3->ent->r.currentOrigin.v[2] - m_pAI->ent->r.currentOrigin.v[2];
    if ( (float)((float)((float)(v7 * v7) + (float)(v6 * v6)) + (float)(v8 * v8)) < 490000.0 || AICommonInterface::CanSeeEnemy(this) )
    {
      v9 = this->m_pAI;
      pIgnoreVecs = v9->ent->r.currentOrigin;
      ClosestPointWithVisWithinRadiusIgnorePoints = TacGraph_FindClosestPointWithVisWithinRadiusIgnorePoints(&v9->ent->r.currentOrigin, 500.0, &v9->ent->r.currentOrigin, v4, &pIgnoreVecs, 1, 200.0);
      v11 = ClosestPointWithVisWithinRadiusIgnorePoints;
      if ( ClosestPointWithVisWithinRadiusIgnorePoints )
      {
        pNavigator = this->m_pAI->pNavigator;
        IsAreaReachable = pNavigator->IsAreaReachable;
        AreaForPoint = TacGraph_GetAreaForPoint(ClosestPointWithVisWithinRadiusIgnorePoints);
        if ( IsAreaReachable(pNavigator, AreaForPoint) )
          goto LABEL_7;
      }
    }
  }
  v17 = Sentient_NearestTacPoint(this->m_pAI->sentient);
  if ( v17 )
  {
    v18 = this->m_pAI;
    currentOrigin = v18->ent->r.currentOrigin;
    ClosestPointWithoutVisWithinRadiusIgnorePoints = TacGraph_FindClosestPointWithoutVisWithinRadiusIgnorePoints(&v18->ent->r.currentOrigin, 1000.0, &v18->ent->r.currentOrigin, v17, &currentOrigin, 1, 300.0);
    v11 = ClosestPointWithoutVisWithinRadiusIgnorePoints;
    if ( ClosestPointWithoutVisWithinRadiusIgnorePoints )
    {
      v20 = this->m_pAI->pNavigator;
      v21 = v20->IsAreaReachable;
      v22 = TacGraph_GetAreaForPoint(ClosestPointWithoutVisWithinRadiusIgnorePoints);
      if ( v21(v20, v22) )
      {
LABEL_7:
        v15 = this->m_pAI;
        TacGraph_GetApproxGroundPosForPoint(v11, &v15->btGoals[2].pos);
        v15->btGoals[2].radius = 24.0;
        v15->btGoals[2].node = NULL;
        EntHandle::setEnt(&v15->btGoals[2].hEnt, NULL);
        EntHandle::setEnt(&v15->btGoals[2].hVolume, NULL);
        result = 1;
        v15->btGoals[2].bValid = 1;
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
  ai_scripted_t *m_pAI; 
  float desiredSpeed; 
  scr_string_t AnimsetName; 
  scr_string_t v6; 
  double AnimSpeedBetweenThresholdEntries; 

  m_pAI = this->m_pAI;
  if ( m_pAI->bRunNGunDisableAim )
    return 0;
  if ( m_pAI->Physics.stairsState == AI_STAIRS_NONE )
  {
    desiredSpeed = m_pAI->animData.desiredSpeed;
    if ( !m_pAI->overrideArchetypes[0] )
    {
      AnimsetName = BG_AnimationState_GetAnimsetName(&m_pAI->ent->s);
      AIScriptedInterface::SetBaseOverrideArchetype(this, AnimsetName);
      m_pAI = this->m_pAI;
    }
    v6 = m_pAI->overrideArchetypes[0];
    if ( !HasAnimSpeedThresholdEntryForArchetype(v6, scr_const.fast) || !HasAnimSpeedThresholdEntryForArchetype(v6, scr_const.jog) || (AnimSpeedBetweenThresholdEntries = GetAnimSpeedBetweenThresholdEntries(v6, scr_const.fast, scr_const.jog, 0.40000001), desiredSpeed >= *(float *)&AnimSpeedBetweenThresholdEntries) )
    {
      if ( v6 == scr_const.juggernaut || v6 == scr_const.juggernaut_cp || v6 == scr_const.juggernaut_lw )
        return desiredSpeed < 60.0;
      if ( !this->m_pAI->bRunNGun )
        return 0;
    }
  }
  return 1;
}

/*
==============
AIScriptedInterface::CanBoundingOverwatchMove
==============
*/
char AIScriptedInterface::CanBoundingOverwatchMove(AIScriptedInterface *this)
{
  __int128 v1; 
  __int128 v2; 
  __int128 v3; 
  __int128 v4; 
  __int128 v5; 
  __int128 v6; 
  __int128 v7; 
  __int128 v8; 
  __int128 v9; 
  gentity_s *v11; 
  int v12; 
  ai_scripted_t *m_pAI; 
  unsigned __int8 v14; 
  float *p_number; 
  float v17; 
  float v18; 
  __int128 v19; 
  float v20; 
  float v21; 
  AIScriptedInterface_vtbl *v22; 
  float v26; 
  float v27; 
  float v28; 
  __int64 v29; 
  const gentity_s *v30; 
  AIScriptedInterface *v31; 
  ai_scripted_t *v32; 
  ai_scripted_t *v33; 
  float v34; 
  float v35; 
  float v36; 
  ai_scripted_t *v37; 
  float v38; 
  float v39; 
  __int128 v40; 
  float v41; 
  const dvar_t *v45; 
  ai_scripted_t *v46; 
  gentity_s *ent; 
  const char *v48; 
  const char *v49; 
  const dvar_t *v50; 
  const dvar_t *v51; 
  AIWrapper v52; 
  vec3_t xyz; 
  __int128 v54; 
  __int128 v55; 
  __int128 v56; 
  __int128 v57; 
  __int128 v58; 
  __int128 v59; 
  __int128 v60; 
  __int128 v61; 
  __int128 v62; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 4193, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !EntHandle::isDefined(&this->m_pAI->sentient->targetEnt) || !AICommonInterface::PointAtGoal(this, &this->m_pAI->ent->r.currentOrigin, &this->m_pAI->codeGoal) )
    return 1;
  v11 = EntHandle::ent(&this->m_pAI->sentient->targetEnt);
  v12 = 0;
  m_pAI = this->m_pAI;
  v14 = 0;
  if ( m_pAI->squadNumber >= 0 )
    return m_pAI->squadMovementAllowed;
  p_number = (float *)&m_pAI->ent->s.number;
  v17 = v11->r.currentOrigin.v[0];
  v19 = LODWORD(v11->r.currentOrigin.v[1]);
  v18 = v11->r.currentOrigin.v[1] - p_number[77];
  v62 = v1;
  v20 = v17 - p_number[76];
  v21 = v11->r.currentOrigin.v[2] - p_number[78];
  v22 = this->__vftable;
  v59 = v4;
  v57 = v6;
  *(float *)&v19 = fsqrt((float)((float)(v18 * v18) + (float)(v20 * v20)) + (float)(v21 * v21));
  _XMM1 = v19;
  __asm { vcmpless xmm0, xmm1, xmm11 }
  v56 = v7;
  __asm { vblendvps xmm0, xmm1, xmm9, xmm0 }
  v55 = v8;
  v54 = v9;
  v26 = v20 * (float)(1.0 / *(float *)&_XMM0);
  v27 = v18 * (float)(1.0 / *(float *)&_XMM0);
  v28 = v21 * (float)(1.0 / *(float *)&_XMM0);
  v29 = (__int64)v22->GetAIIterator(this);
  v30 = (const gentity_s *)(**(__int64 (__fastcall ***)(__int64))v29)(v29);
  if ( v30 )
  {
    v60 = v3;
    v58 = v5;
    v61 = v2;
    while ( 1 )
    {
      AIWrapper::AIWrapper(&v52, v30);
      v31 = v52.m_pAI;
      v32 = this->m_pAI;
      if ( v52.m_pAI->GetAI(v52.m_pAI) != v32 && v32->sentient->eTeam == v30->sentient->eTeam )
      {
        if ( v31->IsCodeMoveRequested(v31) )
        {
          v33 = this->m_pAI;
          v34 = v33->ent->r.currentOrigin.v[0] - v30->r.currentOrigin.v[0];
          v35 = v33->ent->r.currentOrigin.v[1] - v30->r.currentOrigin.v[1];
          v36 = v33->ent->r.currentOrigin.v[2] - v30->r.currentOrigin.v[2];
          if ( (float)((float)((float)(v35 * v35) + (float)(v34 * v34)) + (float)(v36 * v36)) < 1440000.0 )
            ++v12;
        }
        if ( EntHandle::isDefined(&v30->sentient->targetEnt) )
        {
          if ( EntHandle::ent(&v30->sentient->targetEnt) == v11 )
          {
            v37 = this->m_pAI;
            v38 = v30->r.currentOrigin.v[0] - v37->ent->r.currentOrigin.v[0];
            v40 = LODWORD(v30->r.currentOrigin.v[1]);
            v39 = v30->r.currentOrigin.v[1] - v37->ent->r.currentOrigin.v[1];
            v41 = v30->r.currentOrigin.v[2] - v37->ent->r.currentOrigin.v[2];
            *(float *)&v40 = fsqrt((float)((float)(v39 * v39) + (float)(v38 * v38)) + (float)(v41 * v41));
            _XMM1 = v40;
            __asm
            {
              vcmpless xmm0, xmm1, xmm11
              vblendvps xmm0, xmm1, xmm9, xmm0
            }
            if ( (float)((float)((float)((float)(v39 * (float)(1.0 / *(float *)&_XMM0)) * v27) + (float)((float)(v38 * (float)(1.0 / *(float *)&_XMM0)) * v26)) + (float)((float)(v41 * (float)(1.0 / *(float *)&_XMM0)) * v28)) < 0.0 )
              break;
          }
        }
      }
      v30 = (const gentity_s *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v29 + 8i64))(v29);
      if ( !v30 )
        goto LABEL_21;
    }
    v14 = 1;
  }
LABEL_21:
  v45 = DVARBOOL_ai_debugBoundingOverwatch;
  if ( !DVARBOOL_ai_debugBoundingOverwatch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugBoundingOverwatch") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v45);
  if ( v45->current.enabled )
  {
    v46 = this->m_pAI;
    ent = v46->ent;
    *(_QWORD *)xyz.v = *(_QWORD *)v46->ent->r.currentOrigin.v;
    xyz.v[2] = ent->r.currentOrigin.v[2] - 10.0;
    v48 = j_va("advancing squad members: %d, advancing allies: %d", 0i64, (unsigned int)v12);
    G_Main_AddDebugStringWithDuration(&xyz, &colorLtGrey, 0.40000001, v48, 100);
    xyz.v[2] = xyz.v[2] + -8.0;
    v49 = j_va("found further ally: %d", v14);
    G_Main_AddDebugStringWithDuration(&xyz, &colorLtGrey, 0.40000001, v49, 100);
  }
  if ( v14 )
    return 0;
  v50 = DCONST_DVARINT_ai_maxSquadBoundingOverwatchMovingAI;
  if ( !DCONST_DVARINT_ai_maxSquadBoundingOverwatchMovingAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_maxSquadBoundingOverwatchMovingAI") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v50);
  if ( v50->current.integer - 1 < 0 )
    return 0;
  v51 = DCONST_DVARINT_ai_maxBoundingOverwatchMovingAI;
  if ( !DCONST_DVARINT_ai_maxBoundingOverwatchMovingAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_maxBoundingOverwatchMovingAI") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v51);
  return v12 <= v51->current.integer - 1;
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
  pathnode_t *v9; 
  __int16 type; 
  float v11; 
  bool CanShootFrom; 
  const dvar_t *v13; 
  bool v14; 
  const dvar_t *v15; 
  int integer; 
  const vec4_t *v17; 
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
    v9 = Path_ConvertIndexToNode(this->m_pAI->coverInfo.nodeID);
    if ( !v9 || this->m_pAI->blackboard.m_CoverState == scr_const.exposed )
      goto LABEL_12;
    type = v9->constant.type;
    if ( type == 31 )
      type = v9->dynamic.turretEntNumber;
    if ( type == 9 )
LABEL_12:
      AIScriptedInterface::GetMuzzlePosApprox(this, &outOrigin);
    else
      AIScriptedInterface::GetApproxEyePos(this, &outOrigin, 1);
  }
  v11 = outOrigin.v[1] + muzzleOffset->v[1];
  outOrigin.v[0] = outOrigin.v[0] + muzzleOffset->v[0];
  outOrigin.v[2] = outOrigin.v[2] + muzzleOffset->v[2];
  outOrigin.v[1] = v11;
  CanShootFrom = AICommonInterface::CanShootFrom(this, position, &outOrigin);
  v13 = DVARBOOL_ai_ShowCanshootChecks;
  v14 = CanShootFrom;
  if ( !DVARBOOL_ai_ShowCanshootChecks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_ShowCanshootChecks") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  if ( v13->current.enabled )
  {
    v15 = DVARINT_ai_debugEntIndex;
    if ( !DVARINT_ai_debugEntIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugEntIndex") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    integer = v15->current.integer;
    if ( integer <= 0 || integer == this->m_pAI->ent->s.number )
    {
      v17 = &colorGreen;
      if ( !v14 )
        v17 = &colorRed;
      G_DebugLineWithDuration(position, &outOrigin, v17, 0, 30);
    }
  }
  return v14;
}

/*
==============
AIScriptedInterface::ClampAimAngles
==============
*/
void AIScriptedInterface::ClampAimAngles(AIScriptedInterface *this, bool zeroIfNotInLimits, vec3_t *inOutAimAngles)
{
  ai_scripted_t *m_pAI; 
  float v6; 
  float rightAimLimit; 
  float leftAimLimit; 
  double v9; 
  double v10; 

  m_pAI = this->m_pAI;
  if ( zeroIfNotInLimits )
  {
    v6 = inOutAimAngles->v[1];
    if ( v6 < m_pAI->sight.rightAimLimit || v6 > m_pAI->sight.leftAimLimit )
      inOutAimAngles->v[1] = 0.0;
    if ( inOutAimAngles->v[0] < m_pAI->sight.upAimLimit || inOutAimAngles->v[0] > m_pAI->sight.downAimLimit )
      inOutAimAngles->v[0] = 0.0;
  }
  else
  {
    if ( m_pAI->orientation.gunBlockedByWall )
    {
      rightAimLimit = FLOAT_N10_0;
      leftAimLimit = FLOAT_10_0;
    }
    else
    {
      rightAimLimit = m_pAI->sight.rightAimLimit;
      leftAimLimit = m_pAI->sight.leftAimLimit;
    }
    v9 = I_fclamp(inOutAimAngles->v[1], rightAimLimit, leftAimLimit);
    inOutAimAngles->v[1] = *(float *)&v9;
    v10 = I_fclamp(inOutAimAngles->v[0], this->m_pAI->sight.upAimLimit, this->m_pAI->sight.downAimLimit);
    inOutAimAngles->v[0] = *(float *)&v10;
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
  const ai_goal_t *v4; 
  const ai_goal_t *v5; 
  float v6; 
  float v7; 
  __int128 v8; 
  float v9; 

  v4 = this->GetScriptGoal(this);
  v5 = v4;
  if ( v4 )
  {
    if ( !AICommonInterface::PointAtGoal(this, position, v4) )
    {
      v6 = position->v[0] - v5->pos.v[0];
      v8 = LODWORD(position->v[1]);
      v7 = position->v[1] - v5->pos.v[1];
      v9 = position->v[2] - v5->pos.v[2];
      *(float *)&v8 = fsqrt((float)((float)(v7 * v7) + (float)(v6 * v6)) + (float)(v9 * v9));
      _XMM4 = v8;
      __asm
      {
        vcmpless xmm0, xmm4, cs:__real@80000000
        vblendvps xmm0, xmm4, xmm1, xmm0
      }
      *(float *)&_XMM4 = v5->radius;
      position->v[0] = (float)((float)(v6 * (float)(1.0 / *(float *)&_XMM0)) * *(float *)&_XMM4) + v5->pos.v[0];
      position->v[1] = (float)((float)(v7 * (float)(1.0 / *(float *)&_XMM0)) * *(float *)&_XMM4) + v5->pos.v[1];
      position->v[2] = (float)((float)(v9 * (float)(1.0 / *(float *)&_XMM0)) * *(float *)&_XMM4) + v5->pos.v[2];
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
  ai_scripted_t *m_pAI; 
  gentity_s *ent; 
  vec3_t xyz; 
  char dest[512]; 

  v2 = DVARBOOL_ai_whyaminotmoving;
  if ( !DVARBOOL_ai_whyaminotmoving && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_whyaminotmoving") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled )
  {
    Com_sprintf_truncate(dest, 0x200ui64, "Not Moving: %s", str);
    m_pAI = this->m_pAI;
    ent = m_pAI->ent;
    *(_QWORD *)xyz.v = *(_QWORD *)m_pAI->ent->r.currentOrigin.v;
    xyz.v[2] = ent->r.currentOrigin.v[2] - 8.0;
    G_Main_AddDebugString(&xyz, &colorLtRed, 0.80000001, dest);
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
  ai_scripted_t *m_pAI; 
  gentity_s *ent; 
  vec3_t xyz; 
  char dest[512]; 

  v1 = DVARBOOL_ai_whyaminotmoving;
  if ( !DVARBOOL_ai_whyaminotmoving && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_whyaminotmoving") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.enabled )
  {
    Com_sprintf_truncate(dest, 0x200ui64, "Not Moving: %s", this->m_pAI->notMovingString);
    m_pAI = this->m_pAI;
    ent = m_pAI->ent;
    *(_QWORD *)xyz.v = *(_QWORD *)m_pAI->ent->r.currentOrigin.v;
    xyz.v[2] = ent->r.currentOrigin.v[2] - 8.0;
    G_Main_AddDebugString(&xyz, &colorLtRed, 0.80000001, dest);
  }
}

/*
==============
AIScriptedInterface::DetermineDesiredExitSpeed
==============
*/
float AIScriptedInterface::DetermineDesiredExitSpeed(AIScriptedInterface *this)
{
  double TargetSpeed; 
  bool outUsingCachedValue; 
  float outTargetSpeed; 
  vec3_t outNextCorner; 

  if ( this->m_pAI->cautiousNavigationEnabled )
    return FLOAT_90_0;
  TargetSpeed = AIScriptedInterface::GetTargetSpeed(this);
  outTargetSpeed = *(float *)&TargetSpeed;
  AIScriptedInterface::ProcessSharpTurnSpeedScale(this, 70.0, &outNextCorner, &outTargetSpeed, &outUsingCachedValue);
  return outTargetSpeed;
}

/*
==============
AIScriptedInterface::DissociateNode
==============
*/
void AIScriptedInterface::DissociateNode(AIScriptedInterface *this, pathnode_t *pNode)
{
  ai_scripted_t *m_pAI; 
  unsigned __int16 v5; 
  __int64 i; 
  ai_scripted_t *v7; 
  ai_scripted_t *v8; 
  unsigned __int16 v9; 
  vec3_t pos; 

  m_pAI = this->m_pAI;
  if ( m_pAI->scriptGoal.node == pNode )
  {
    m_pAI->scriptGoal.node = NULL;
    pathnode_t::GetPos(pNode, &pos);
    m_pAI = this->m_pAI;
    if ( (float)((float)((float)((float)(pos.v[1] - m_pAI->ent->r.currentOrigin.v[1]) * (float)(pos.v[1] - m_pAI->ent->r.currentOrigin.v[1])) + (float)((float)(pos.v[0] - m_pAI->ent->r.currentOrigin.v[0]) * (float)(pos.v[0] - m_pAI->ent->r.currentOrigin.v[0]))) + (float)((float)(pos.v[2] - m_pAI->ent->r.currentOrigin.v[2]) * (float)(pos.v[2] - m_pAI->ent->r.currentOrigin.v[2]))) > 36.0 )
    {
      v5 = Path_ConvertNodeToIndex(pNode);
      Com_PrintWarning(18, "Guy %d's scripted goal node %d despawned before he got there.\n", (unsigned int)this->m_pAI->ent->s.number, v5);
      m_pAI = this->m_pAI;
    }
  }
  if ( m_pAI->codeGoal.node == pNode )
    m_pAI->codeGoal.node = NULL;
  for ( i = 2i64; i >= 0; --i )
  {
    v7 = this->m_pAI;
    if ( v7->btGoals[i].node == pNode )
    {
      v7->btGoals[i].node = NULL;
      v7->btGoals[i].bValid = 0;
      pathnode_t::GetPos(pNode, &pos);
      v8 = this->m_pAI;
      if ( (float)((float)((float)((float)(pos.v[1] - v8->ent->r.currentOrigin.v[1]) * (float)(pos.v[1] - v8->ent->r.currentOrigin.v[1])) + (float)((float)(pos.v[0] - v8->ent->r.currentOrigin.v[0]) * (float)(pos.v[0] - v8->ent->r.currentOrigin.v[0]))) + (float)((float)(pos.v[2] - v8->ent->r.currentOrigin.v[2]) * (float)(pos.v[2] - v8->ent->r.currentOrigin.v[2]))) > 36.0 )
      {
        v9 = Path_ConvertNodeToIndex(pNode);
        Com_PrintWarning(18, "Guy %d's bt goal node %d despawned before he got there.\n", (unsigned int)this->m_pAI->ent->s.number, v9);
      }
    }
  }
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
  gentity_s *ent; 
  const char *v4; 
  vec3_t point; 
  char dest[64]; 

  ent = this->m_pAI->ent;
  v4 = g_AIGunAdditiveOptionStrings[option];
  *(_QWORD *)point.v = *(_QWORD *)ent->r.currentOrigin.v;
  point.v[2] = ent->r.currentOrigin.v[2] + 60.0;
  Com_sprintf<64>((char (*)[64])dest, "gunpos: [%s] [%s]", trigger, v4);
  G_DebugString(&point, &colorYellow, 0.5, dest, 1);
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
  gentity_s *v9; 
  sentient_s *sentient; 
  scrContext_t *v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  pathnode_t *pClaimedNode; 
  unsigned int type; 
  int v20; 
  char v21; 
  unsigned __int16 v22; 
  ai_scripted_t *m_pAI; 
  gentity_s *ent; 
  double Angle; 
  vec3_t outShootAtPos; 
  vec3_t pos; 

  TargetEntity = AICommonInterface::GetTargetEntity(this);
  v9 = TargetEntity;
  if ( TargetEntity && ((sentient = TargetEntity->sentient) != NULL && AICommonInterface::RecentlySeeSentient(this, sentient, 5000) || !v9->sentient && AICommonInterface::CanSeeEntity(this, v9)) )
  {
    v11 = ScriptContext_Server();
    GScr_EntityGetShootAtPos(v11, v9, &outShootAtPos);
    v12 = outShootAtPos.v[0] - v9->r.currentOrigin.v[0];
    v13 = outShootAtPos.v[1] - v9->r.currentOrigin.v[1];
    v14 = outShootAtPos.v[2] - v9->r.currentOrigin.v[2];
    Sentient_GetLastKnownEnemyPos(this->m_pAI->sentient, v9, &outShootAtPos);
    v15 = v12 + outShootAtPos.v[0];
    v16 = v13 + outShootAtPos.v[1];
    v17 = v14 + outShootAtPos.v[2];
    params->shootDir.v[0] = (float)(v12 + outShootAtPos.v[0]) - shootFromPos->v[0];
    outShootAtPos.v[1] = v16;
    params->shootDir.v[1] = v16 - shootFromPos->v[1];
    params->shootDir.v[2] = v17 - shootFromPos->v[2];
    outShootAtPos.v[0] = v15;
    outShootAtPos.v[2] = v17;
    AIScriptedInterface::GetDesiredAimAngles(this, params, outAimAngles);
  }
  else
  {
    pClaimedNode = this->m_pAI->sentient->pClaimedNode;
    if ( !pClaimedNode || ((type = pClaimedNode->constant.type, (unsigned __int16)type > 0x19u) || (v20 = 35127808, !_bittest(&v20, type)) ? (v21 = 0) : (v21 = 1), AIScriptedInterface::IsDoingAmbush(this) || !v21 || (v22 = pClaimedNode->constant.type, v22 == 25) || v22 == 20 || (pathnode_t::GetPos(pClaimedNode, &pos), m_pAI = this->m_pAI, ent = m_pAI->ent, (float)((float)((float)((float)(pos.v[1] - m_pAI->ent->r.currentOrigin.v[1]) * (float)(pos.v[1] - m_pAI->ent->r.currentOrigin.v[1])) + (float)((float)(pos.v[0] - m_pAI->ent->r.currentOrigin.v[0]) * (float)(pos.v[0] - m_pAI->ent->r.currentOrigin.v[0]))) + (float)((float)(pos.v[2] - m_pAI->ent->r.currentOrigin.v[2]) * (float)(pos.v[2] - m_pAI->ent->r.currentOrigin.v[2]))) >= 16.0)) )
    {
      if ( !this->Is3D(this) && tacpoint_ref_t::IsDefined(&this->m_pAI->sight.faceLikelyEnemyTacPoint) )
      {
        _XMM7 = 0i64;
        __asm { vroundss xmm2, xmm7, xmm1, 1 }
        outAimAngles->v[1] = (float)((float)((float)(this->m_pAI->sight.anglesToLikelyEnemyPath.v[1] - this->m_pAI->ent->r.currentAngles.v[1]) * 0.0027777778) - *(float *)&_XMM2) * 360.0;
        __asm { vroundss xmm3, xmm7, xmm2, 1 }
        outAimAngles->v[0] = (float)((float)(0.0027777778 * this->m_pAI->sight.anglesToLikelyEnemyPath.v[0]) - *(float *)&_XMM3) * 360.0;
      }
    }
    else
    {
      Angle = pathnode_t::GetAngle(pClaimedNode);
      _XMM1 = 0i64;
      __asm { vroundss xmm4, xmm1, xmm3, 1 }
      outAimAngles->v[1] = (float)((float)((float)(*(float *)&Angle - ent->r.currentAngles.v[1]) * 0.0027777778) - *(float *)&_XMM4) * 360.0;
    }
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
  pathnode_t *v7; 
  ai_scripted_t *m_pAI; 
  ai_stance_e eCurrentStance; 
  __int16 type; 
  const Weapon *v15; 
  ai_scripted_t *v16; 
  float v17; 
  float v18; 
  float v19; 
  AINavigator *pNavigator; 
  float *p_number; 
  vec3_t outUp; 

  m_pSpace = NULL;
  if ( Path_NodeValid(this->m_pAI->coverInfo.nodeID) )
    v7 = Path_ConvertIndexToNode(this->m_pAI->coverInfo.nodeID);
  else
    v7 = NULL;
  m_pAI = this->m_pAI;
  eCurrentStance = m_pAI->eCurrentStance;
  if ( eCurrentStance == STANCE_PRONE )
  {
    *(float *)&_XMM6 = FLOAT_11_0;
  }
  else if ( eCurrentStance == STANCE_CROUCH )
  {
    if ( bIgnoreNode || !v7 || m_pAI->blackboard.m_CoverState == scr_const.exposed )
    {
      *(float *)&_XMM6 = FLOAT_43_0;
    }
    else
    {
      _XMM0 = (unsigned int)v7->constant.type - 6;
      __asm { vpcmpgtq xmm3, xmm0, xmm1 }
      _XMM1 = LODWORD(FLOAT_30_0);
      __asm { vblendvps xmm6, xmm1, xmm2, xmm3 }
    }
  }
  else
  {
    if ( eCurrentStance != STANCE_STAND && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 1830, ASSERT_TYPE_ASSERT, "(m_pAI->eCurrentStance == STANCE_STAND)", (const char *)&queryFormat, "m_pAI->eCurrentStance == STANCE_STAND") )
      __debugbreak();
    if ( v7 )
    {
      type = v7->constant.type;
      if ( type == 31 )
        type = v7->dynamic.turretEntNumber;
    }
    else
    {
      type = 9;
    }
    v15 = this->GetEquippedWeapon(this);
    if ( v15->weaponIdx && BG_GetWeaponClass(v15, 0) == WEAPCLASS_MG && v7 && type == 2 && (v7->constant.spawnflags & 0x10200) == 0x10000 )
    {
      *(float *)&_XMM6 = FLOAT_64_0;
    }
    else if ( bIgnoreNode || !v7 || type == 9 )
    {
      *(float *)&_XMM6 = FLOAT_58_0;
    }
    else
    {
      *(float *)&_XMM6 = FLOAT_52_0;
    }
  }
  v16 = this->m_pAI;
  v17 = FLOAT_1_0;
  v18 = 0.0;
  v19 = 0.0;
  outUp.v[0] = 0.0;
  outUp.v[1] = 0.0;
  outUp.v[2] = FLOAT_1_0;
  pNavigator = v16->pNavigator;
  if ( pNavigator )
    m_pSpace = pNavigator->m_pSpace;
  if ( m_pSpace )
  {
    Nav_GetSpaceUp(m_pSpace, &outUp);
    v16 = this->m_pAI;
    v17 = outUp.v[2];
    v19 = outUp.v[1];
    v18 = outUp.v[0];
  }
  p_number = (float *)&v16->ent->s.number;
  outEyePos->v[0] = (float)(v18 * *(float *)&_XMM6) + p_number[76];
  outEyePos->v[1] = (float)(v19 * *(float *)&_XMM6) + p_number[77];
  outEyePos->v[2] = (float)(v17 * *(float *)&_XMM6) + p_number[78];
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
  ai_scripted_t *v11; 
  float v12; 
  float v13; 
  float v14; 
  const Weapon *v15; 
  sentient_s *sentient; 
  pathnode_t *v17; 
  ai_scripted_t *v18; 
  gentity_s *ent; 
  double Angle; 
  ai_scripted_t *v23; 
  gentity_s *v24; 
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
    v11 = this->m_pAI;
    if ( v11->blackboard.m_ShootParams.m_bValid && v11->blackboard.m_ShootParams.m_bPosValid )
    {
      v12 = v11->blackboard.m_ShootParams.m_Pos.v[0] - v11->ent->r.currentOrigin.v[0];
      v13 = v11->blackboard.m_ShootParams.m_Pos.v[1] - v11->ent->r.currentOrigin.v[1];
      v14 = v11->blackboard.m_ShootParams.m_Pos.v[2] - v11->ent->r.currentOrigin.v[2];
      if ( (float)((float)((float)(v13 * v13) + (float)(v12 * v12)) + (float)(v14 * v14)) > 262144.0 )
      {
        v15 = this->GetEquippedWeapon(this);
        if ( !v15->weaponIdx || BG_GetWeaponClass(v15, 0) != WEAPCLASS_PISTOL )
        {
          sentient = this->m_pAI->sentient;
          v17 = sentient->pClaimedNode;
          if ( !v17 )
            goto LABEL_56;
          pathnode_t::GetPos(sentient->pClaimedNode, &pos);
          v18 = this->m_pAI;
          if ( (float)((float)((float)((float)(pos.v[1] - v18->ent->r.currentOrigin.v[1]) * (float)(pos.v[1] - v18->ent->r.currentOrigin.v[1])) + (float)((float)(pos.v[0] - v18->ent->r.currentOrigin.v[0]) * (float)(pos.v[0] - v18->ent->r.currentOrigin.v[0]))) + (float)((float)(pos.v[2] - v18->ent->r.currentOrigin.v[2]) * (float)(pos.v[2] - v18->ent->r.currentOrigin.v[2]))) >= 16.0 )
            goto LABEL_56;
          if ( Path_DoesNodeAllowStance(v17, (const scr_string_t)scr_const.crouch) )
            goto LABEL_56;
          ent = this->m_pAI->ent;
          Angle = pathnode_t::GetAngle(v17);
          _XMM1 = 0i64;
          __asm { vroundss xmm4, xmm1, xmm3, 1 }
          if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(*(float *)&Angle - ent->r.currentAngles.v[1]) * 0.0027777778) - *(float *)&_XMM4) * 360.0) & _xmm) > 90.0 )
          {
LABEL_56:
            v23 = this->m_pAI;
            if ( !v23->avoidanceBlockedData.blocked && level.time > v23->iTeamMoveWaitTime )
            {
              v24 = v23->ent;
              *(_QWORD *)pos.v = *(_QWORD *)v23->ent->r.currentOrigin.v;
              pos.v[2] = v24->r.currentOrigin.v[2] + 32.0;
              if ( AICommonInterface::SightTrace(this, &pos, &v23->blackboard.m_ShootParams.m_Pos, 2047, NORMAL_FOLIAGE_CHECKS) )
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
  ai_scripted_t *m_pAI; 

  m_pAI = this->m_pAI;
  if ( m_pAI->turnSlowdownData.timeStamp + 500 <= level.time || nextCorner->v[0] != m_pAI->turnSlowdownData.turnCorner.v[0] || nextCorner->v[1] != m_pAI->turnSlowdownData.turnCorner.v[1] || nextCorner->v[2] != m_pAI->turnSlowdownData.turnCorner.v[2] )
    return 0;
  *outTargetSpeed = m_pAI->turnSlowdownData.scaledSpeed;
  return 1;
}

/*
==============
AIScriptedInterface::GetClosestPlayerOnTeam
==============
*/
gentity_s *AIScriptedInterface::GetClosestPlayerOnTeam(AIScriptedInterface *this, float maxDist)
{
  ai_scripted_t *m_pAI; 
  gentity_s *v3; 
  int v4; 
  float v5; 
  team_t eTeam; 
  float v7; 
  float v8; 
  float v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v13; 
  __int64 v14; 

  m_pAI = this->m_pAI;
  v3 = NULL;
  v4 = 0;
  v5 = maxDist * maxDist;
  eTeam = m_pAI->sentient->eTeam;
  v7 = m_pAI->ent->r.currentOrigin.v[0];
  v8 = m_pAI->ent->r.currentOrigin.v[1];
  v9 = m_pAI->ent->r.currentOrigin.v[2];
  if ( level.maxclients > 0 )
  {
    v10 = 0i64;
    v11 = 0i64;
    do
    {
      if ( (unsigned int)v4 >= 0x800 )
      {
        LODWORD(v14) = 2048;
        LODWORD(v13) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v13, v14) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[v10].r.isInUse != g_entityIsInUse[v11] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( g_entityIsInUse[v11] && eTeam && eTeam == g_entities[v10].sentient->eTeam && (float)((float)((float)((float)(g_entities[v10].r.currentOrigin.v[1] - v8) * (float)(g_entities[v10].r.currentOrigin.v[1] - v8)) + (float)((float)(g_entities[v10].r.currentOrigin.v[0] - v7) * (float)(g_entities[v10].r.currentOrigin.v[0] - v7))) + (float)((float)(g_entities[v10].r.currentOrigin.v[2] - v9) * (float)(g_entities[v10].r.currentOrigin.v[2] - v9))) < v5 )
      {
        v5 = (float)((float)((float)(g_entities[v10].r.currentOrigin.v[1] - v8) * (float)(g_entities[v10].r.currentOrigin.v[1] - v8)) + (float)((float)(g_entities[v10].r.currentOrigin.v[0] - v7) * (float)(g_entities[v10].r.currentOrigin.v[0] - v7))) + (float)((float)(g_entities[v10].r.currentOrigin.v[2] - v9) * (float)(g_entities[v10].r.currentOrigin.v[2] - v9));
        v3 = &g_entities[v4];
      }
      ++v4;
      ++v11;
      ++v10;
    }
    while ( v4 < level.maxclients );
  }
  return v3;
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
  ai_scripted_t *m_pAI; 
  const dvar_t *v4; 
  int iLastWhizbyAnimTime; 
  const dvar_t *v6; 
  const char *v7; 

  m_pAI = this->m_pAI;
  if ( m_pAI->script_desiredSpeedEnabled )
    return m_pAI->script_desiredSpeed;
  if ( !m_pAI->bAllowSpeedUpWhenCombatHot )
    goto LABEL_12;
  v4 = DVARBOOL_ai_hotCombatSpeedEnabled;
  if ( !DVARBOOL_ai_hotCombatSpeedEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_hotCombatSpeedEnabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.enabled && (iLastWhizbyAnimTime = this->m_pAI->iLastWhizbyAnimTime, iLastWhizbyAnimTime > 0) && level.time < iLastWhizbyAnimTime + 10000 )
  {
    v6 = DVARFLT_ai_movementHotDefaultSpeed;
    if ( !DVARFLT_ai_movementHotDefaultSpeed )
    {
      v7 = "ai_movementHotDefaultSpeed";
      goto LABEL_14;
    }
  }
  else
  {
LABEL_12:
    v6 = DVARFLT_ai_movementDefaultSpeed;
    if ( !DVARFLT_ai_movementDefaultSpeed )
    {
      v7 = "ai_movementDefaultSpeed";
LABEL_14:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v7) )
        __debugbreak();
    }
  }
  Dvar_CheckFrontendServerThread(v6);
  return v6->current.value * this->m_pAI->speedScaleMultiplier;
}

/*
==============
AIScriptedInterface::GetDesiredAimAngles
==============
*/
void AIScriptedInterface::GetDesiredAimAngles(AIScriptedInterface *this, ActorAimAngleParam *params, vec3_t *outAimAngles)
{
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  ai_scripted_t *m_pAI; 
  float v18; 
  float v20; 
  ai_scripted_t *v21; 
  float v23; 
  float v24; 
  vec3_t vec; 
  vec3_t angles; 
  tmat33_t<vec3_t> out; 
  tmat33_t<vec3_t> axis; 

  if ( this->Is3D(this) )
  {
    AnglesToAxis(&this->m_pAI->ent->r.currentAngles, &axis);
    MatrixInverse(&axis, &out);
    if ( params == (ActorAimAngleParam *)&vec && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
      __debugbreak();
    v6 = params->shootDir.v[1];
    v7 = params->shootDir.v[0];
    v8 = params->shootDir.v[2];
    v9 = params->shootDir.v[0] * out.m[0].v[2];
    vec.v[0] = (float)((float)(params->shootDir.v[0] * out.m[0].v[0]) + (float)(v6 * out.m[1].v[0])) + (float)(v8 * out.m[2].v[0]);
    vec.v[1] = (float)((float)(v7 * out.m[0].v[1]) + (float)(v6 * out.m[1].v[1])) + (float)(v8 * out.m[2].v[1]);
    vec.v[2] = (float)(v9 + (float)(v6 * out.m[1].v[2])) + (float)(v8 * out.m[2].v[2]);
    vectoangles(&vec, outAimAngles);
    v10 = 0.0027777778 * outAimAngles->v[1];
    v11 = 0.0027777778 * outAimAngles->v[2];
    _XMM8 = 0i64;
    __asm { vroundss xmm2, xmm8, xmm1, 1 }
    outAimAngles->v[0] = (float)((float)(0.0027777778 * outAimAngles->v[0]) - *(float *)&_XMM2) * 360.0;
    __asm { vroundss xmm3, xmm8, xmm2, 1 }
    outAimAngles->v[2] = (float)(v11 - *(float *)&_XMM3) * 360.0;
    __asm { vroundss xmm3, xmm8, xmm2, 1 }
    outAimAngles->v[1] = (float)(v10 - *(float *)&_XMM3) * 360.0;
  }
  else
  {
    vectoangles(&params->shootDir, &angles);
    m_pAI = this->m_pAI;
    _XMM6 = 0i64;
    v18 = params->angleOffset.v[1] + m_pAI->ent->r.currentAngles.v[1];
    __asm { vroundss xmm2, xmm6, xmm1, 1 }
    outAimAngles->v[0] = (float)((float)((float)(angles.v[0] - (float)(params->angleOffset.v[0] + m_pAI->ent->r.currentAngles.v[0])) * 0.0027777778) - *(float *)&_XMM2) * 360.0;
    if ( params->useStepoutYaw )
    {
      v20 = (float)(angles.v[1] - params->stepOutYaw) - params->angleOffset.v[1];
    }
    else
    {
      v21 = this->m_pAI;
      if ( v21->ent->tagInfo )
      {
        v23 = 0.0;
      }
      else
      {
        __asm { vroundss xmm3, xmm6, xmm2, 1 }
        v23 = (float)((float)((float)(v21->ent->r.currentAngles.v[1] - v21->orientation.vDesiredAngles.v[1]) * 0.0027777778) - *(float *)&_XMM3) * 180.0;
      }
      outAimAngles->v[1] = v23;
      v20 = (float)(angles.v[1] - v18) + outAimAngles->v[1];
    }
    v24 = v20 * 0.0027777778;
    __asm { vroundss xmm2, xmm6, xmm1, 1 }
    outAimAngles->v[1] = (float)(v24 - *(float *)&_XMM2) * 360.0;
  }
}

/*
==============
AIScriptedInterface::GetDesiredMoveDelta
==============
*/

__int64 __fastcall AIScriptedInterface::GetDesiredMoveDelta(AIScriptedInterface *this, double fMoveDist, int groundEntNum, const vec3_t *currentMoveDelta, vec3_t *outMoveDelta, nav_posAlongPathResults_t *pathResults, vec3_t *velocity, int blendWithOldVelocity)
{
  __int64 v9; 
  AINavigator *pNavigator; 
  int m_TimeOfLastBlockage; 
  unsigned __int8 v14; 
  float v16; 
  char v17; 
  int v18; 
  float v19; 
  __int128 v20; 
  AINavigator2D *v24; 
  const bfx::PathSpec *PathSpec; 
  float v26; 
  float v27; 
  __int128 v28; 
  float v29; 
  float v33; 
  float v34; 
  float v35; 
  bool v36; 
  gentity_s *v37; 
  vec3_t desiredMoveDelta; 
  vec3_t myPos; 
  vec3_t endPos; 
  vec3_t outCurPos; 
  float ptr; 
  float v43; 
  float v44; 
  vec3_t startPos; 

  v9 = groundEntNum;
  _XMM8 = *(_OWORD *)&fMoveDist;
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
    goto LABEL_10;
  }
  if ( !Nav_GetPosAlongPath(pNavigator, *(float *)&fMoveDist, 1, pathResults) )
    goto LABEL_10;
  *(_QWORD *)myPos.v = *(_QWORD *)this->m_pAI->ent->r.currentOrigin.v;
  Nav_GetPos(pNavigator, &outCurPos);
  v16 = outCurPos.v[2];
  myPos.v[2] = outCurPos.v[2];
  v17 = 0;
  if ( pathResults->m_PosType == POS_ON_SURFACE )
  {
    `eh vector constructor iterator'(&ptr, 0x28ui64, 2ui64, (void (__fastcall *)(void *))nav_cornerdata_t::nav_cornerdata_t, (void (__fastcall *)(void *))nav_cornerdata_t::~nav_cornerdata_t);
    v18 = ((__int64 (__fastcall *)(AINavigator *, float *, __int64))pNavigator->GetNextNCorners)(pNavigator, &ptr, 2i64);
    v19 = (float)((float)((float)(myPos.v[1] - v43) * (float)(myPos.v[1] - v43)) + (float)((float)(myPos.v[0] - ptr) * (float)(myPos.v[0] - ptr))) + (float)((float)(myPos.v[2] - v44) * (float)(myPos.v[2] - v44));
    if ( v18 == 2 && (float)((float)((float)((float)(myPos.v[1] - v43) * (float)(myPos.v[1] - v43)) + (float)((float)(myPos.v[0] - ptr) * (float)(myPos.v[0] - ptr))) + (float)((float)(myPos.v[2] - v44) * (float)(myPos.v[2] - v44))) > 1.0 )
    {
      v20 = LODWORD(v43);
      *(float *)&v20 = fsqrt((float)((float)((float)(v43 - myPos.v[1]) * (float)(v43 - myPos.v[1])) + (float)((float)(ptr - myPos.v[0]) * (float)(ptr - myPos.v[0]))) + (float)((float)(v44 - myPos.v[2]) * (float)(v44 - myPos.v[2])));
      _XMM3 = v20;
      __asm
      {
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm1, xmm3, xmm9, xmm0
      }
      desiredMoveDelta.v[0] = (float)((float)(ptr - myPos.v[0]) * (float)(1.0 / *(float *)&_XMM1)) * *(float *)&_XMM8;
      desiredMoveDelta.v[1] = (float)((float)(v43 - myPos.v[1]) * (float)(1.0 / *(float *)&_XMM1)) * *(float *)&_XMM8;
      desiredMoveDelta.v[2] = (float)((float)(v44 - myPos.v[2]) * (float)(1.0 / *(float *)&_XMM1)) * *(float *)&_XMM8;
      v24 = pNavigator->Get2DNavigator(pNavigator);
      if ( v24 )
      {
        if ( v19 < (float)(*(float *)&_XMM8 * *(float *)&_XMM8) )
        {
          PathSpec = AINavigator2D::GetPathSpec(v24);
          endPos.v[0] = desiredMoveDelta.v[0] + myPos.v[0];
          endPos.v[1] = desiredMoveDelta.v[1] + myPos.v[1];
          endPos.v[2] = desiredMoveDelta.v[2] + myPos.v[2];
          if ( !Nav_IsStraightLineReachable(pNavigator->m_pSpace, &startPos, &endPos, pNavigator->m_Layer, PathSpec) )
          {
            desiredMoveDelta.v[0] = (float)(ptr - myPos.v[0]) * 1.001;
            desiredMoveDelta.v[1] = (float)(v43 - myPos.v[1]) * 1.001;
            desiredMoveDelta.v[2] = (float)(v44 - myPos.v[2]) * 1.001;
          }
          v17 = 1;
        }
      }
    }
    `eh vector destructor iterator'(&ptr, 0x28ui64, 2ui64, (void (__fastcall *)(void *))nav_cornerdata_t::~nav_cornerdata_t);
    if ( v17 )
    {
      v35 = desiredMoveDelta.v[2];
      v34 = desiredMoveDelta.v[1];
      v33 = desiredMoveDelta.v[0];
      goto LABEL_24;
    }
    v16 = myPos.v[2];
  }
  v26 = pathResults->m_Pos.v[0] - myPos.v[0];
  v28 = LODWORD(pathResults->m_Pos.v[1]);
  v27 = pathResults->m_Pos.v[1] - myPos.v[1];
  v29 = pathResults->m_Pos.v[2] - v16;
  *(float *)&v28 = fsqrt((float)((float)(v27 * v27) + (float)(v26 * v26)) + (float)(v29 * v29));
  _XMM4 = v28;
  __asm
  {
    vcmpless xmm0, xmm4, cs:__real@80000000
    vblendvps xmm1, xmm4, xmm9, xmm0
    vminss  xmm8, xmm8, xmm4
  }
  v33 = (float)((float)(1.0 / *(float *)&_XMM1) * v26) * *(float *)&_XMM8;
  desiredMoveDelta.v[0] = v33;
  v34 = (float)((float)(1.0 / *(float *)&_XMM1) * v27) * *(float *)&_XMM8;
  desiredMoveDelta.v[1] = v34;
  v35 = (float)((float)(1.0 / *(float *)&_XMM1) * v29) * *(float *)&_XMM8;
  desiredMoveDelta.v[2] = v35;
LABEL_24:
  if ( blendWithOldVelocity )
  {
    AICommonInterface::BlendOldVelocityWithMoveDelta(this, &myPos, currentMoveDelta, &desiredMoveDelta, outMoveDelta);
    LODWORD(_XMM8) = fsqrt((float)((float)(outMoveDelta->v[0] * outMoveDelta->v[0]) + (float)(outMoveDelta->v[1] * outMoveDelta->v[1])) + (float)(outMoveDelta->v[2] * outMoveDelta->v[2]));
  }
  else
  {
    outMoveDelta->v[0] = v33;
    outMoveDelta->v[1] = v34;
    outMoveDelta->v[2] = v35;
  }
  if ( pathResults->m_PosType == POS_ON_SURFACE )
  {
    if ( AINavigator::ShouldPathOutOfBounds(pNavigator) )
      Nav_GetRequestedGoalPos(pNavigator, &endPos);
    else
      Nav_GetGoalPos(pNavigator, &endPos);
    if ( !AICommonInterface::PointNearPoint(this, &endPos, &this->m_pAI->ent->r.currentOrigin, 24.0) )
    {
      v36 = 1;
      if ( BGMovingPlatforms::IsMovingPlatform(v9) )
      {
        v37 = &g_entities[v9];
        if ( !v37 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 3242, ASSERT_TYPE_ASSERT, "(movingPlatformEnt)", (const char *)&queryFormat, "movingPlatformEnt") )
          __debugbreak();
        v36 = (float)((float)((float)(v37->moverInfo.m_deltaOrigin.v[0] * v37->moverInfo.m_deltaOrigin.v[0]) + (float)(v37->moverInfo.m_deltaOrigin.v[1] * v37->moverInfo.m_deltaOrigin.v[1])) + (float)(v37->moverInfo.m_deltaOrigin.v[2] * v37->moverInfo.m_deltaOrigin.v[2])) <= 10.0;
      }
      if ( !((unsigned __int8 (__fastcall *)(AINavigator *))pNavigator->HasTraversalWithin)(pNavigator) && v36 )
      {
        AIScriptedInterface::GetAvoidanceDelta(this, *(const float *)&_XMM8, 1, velocity, outMoveDelta);
        v14 = 1;
        goto LABEL_11;
      }
    }
  }
LABEL_10:
  v14 = 0;
LABEL_11:
  Sys_ProfEndNamedEvent();
  return v14;
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
  double v4; 
  float v5; 
  double v6; 
  ai_scripted_t *v7; 
  float v10; 
  float v12; 
  double PathDistToGoal; 
  double v14; 
  float v15; 
  double v16; 
  ai_scripted_t *m_pAI; 
  vec3_t vec; 
  vec3_t outLookaheadDir; 

  this->GetVelocity(this, &vec);
  if ( (float)((float)(vec.v[0] * vec.v[0]) + (float)(vec.v[1] * vec.v[1])) <= 1.0 )
  {
    if ( AICommonInterface::HasPath(this) && (PathDistToGoal = Nav_GetPathDistToGoal(this->m_pAI->pNavigator), *(float *)&PathDistToGoal >= 1.0) )
    {
      if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 1048, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
        __debugbreak();
      if ( !AICommonInterface::HasPath(this) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 1049, ASSERT_TYPE_ASSERT, "( HasPath() )", (const char *)&queryFormat, "HasPath()") )
        __debugbreak();
      Nav_GetLookaheadDir(this->m_pAI->pNavigator, &outLookaheadDir);
      v14 = vectoyaw((const vec2_t *)&outLookaheadDir);
      v15 = *(float *)&v14;
      v16 = vectopitch(&outLookaheadDir);
      m_pAI = this->m_pAI;
      _XMM8 = 0i64;
      __asm { vroundss xmm3, xmm8, xmm2, 1 }
      v10 = (float)((float)((float)(v15 - m_pAI->orientation.vDesiredAngles.v[1]) * 0.0027777778) - *(float *)&_XMM3) * 360.0;
      __asm { vroundss xmm3, xmm8, xmm0, 1 }
      v12 = (float)((float)((float)(*(float *)&v16 - m_pAI->orientation.vDesiredAngles.v[0]) * 0.0027777778) - *(float *)&_XMM3) * 360.0;
    }
    else
    {
      v12 = 0.0;
      v10 = 0.0;
    }
  }
  else
  {
    v4 = vectoyaw((const vec2_t *)&vec);
    v5 = *(float *)&v4;
    v6 = vectopitch(&vec);
    v7 = this->m_pAI;
    _XMM8 = 0i64;
    __asm { vroundss xmm3, xmm8, xmm2, 1 }
    v10 = (float)((float)((float)(v5 - v7->orientation.vDesiredAngles.v[1]) * 0.0027777778) - *(float *)&_XMM3) * 360.0;
    __asm { vroundss xmm3, xmm8, xmm0, 1 }
    v12 = (float)((float)((float)(*(float *)&v6 - v7->orientation.vDesiredAngles.v[0]) * 0.0027777778) - *(float *)&_XMM3) * 360.0;
  }
  angles->v[0] = v12;
  angles->v[1] = v10;
  angles->v[2] = 0.0;
}

/*
==============
AIScriptedInterface::GetNextCornerTurnSpeed
==============
*/
bool AIScriptedInterface::GetNextCornerTurnSpeed(AIScriptedInterface *this, float *outTargetSpeed)
{
  ai_scripted_t *m_pAI; 
  const dvar_t *v5; 
  float v6; 
  float v7; 
  bool v8; 
  ai_scripted_t *v9; 
  __int128 minCornerSpeedScalingMultiplier_low; 
  bool outUsingCachedValue; 
  float outTargetSpeeda; 
  vec3_t outNextCorner; 

  if ( !this->m_pAI->pNavigator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 2636, ASSERT_TYPE_ASSERT, "(m_pAI->pNavigator)", (const char *)&queryFormat, "m_pAI->pNavigator") )
    __debugbreak();
  m_pAI = this->m_pAI;
  if ( !m_pAI->sharpTurnSpeedScalingEnabled )
    return 0;
  v5 = DCONST_DVARFLT_ai_minVelocityForTurnSlowdown;
  v6 = (float)((float)(m_pAI->Physics.vVelocity.v[0] * m_pAI->Physics.vVelocity.v[0]) + (float)(m_pAI->Physics.vVelocity.v[1] * m_pAI->Physics.vVelocity.v[1])) + (float)(m_pAI->Physics.vVelocity.v[2] * m_pAI->Physics.vVelocity.v[2]);
  if ( !DCONST_DVARFLT_ai_minVelocityForTurnSlowdown && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_minVelocityForTurnSlowdown") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( v6 < (float)(v5->current.value * v5->current.value) )
    return 0;
  v7 = *outTargetSpeed;
  outUsingCachedValue = 0;
  outTargetSpeeda = v7;
  v8 = AIScriptedInterface::ProcessSharpTurnSpeedScale(this, 0.0, &outNextCorner, &outTargetSpeeda, &outUsingCachedValue);
  if ( v8 && !outUsingCachedValue )
  {
    v9 = this->m_pAI;
    minCornerSpeedScalingMultiplier_low = LODWORD(v9->minCornerSpeedScalingMultiplier);
    *(float *)&minCornerSpeedScalingMultiplier_low = v9->minCornerSpeedScalingMultiplier * *outTargetSpeed;
    _XMM2 = minCornerSpeedScalingMultiplier_low;
    v9->turnSlowdownData.turnCorner = outNextCorner;
    __asm { vmaxss  xmm0, xmm2, [rsp+78h+outTargetSpeed] }
    v9->turnSlowdownData.scaledSpeed = *(float *)&_XMM0;
    this->m_pAI->turnSlowdownData.timeStamp = level.time;
    *outTargetSpeed = this->m_pAI->turnSlowdownData.scaledSpeed;
  }
  return v8;
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
  sentient_s *sentient; 
  unsigned __int16 number; 
  __int64 v6; 
  unsigned int v7; 
  __int64 v8; 
  gentity_s *v9; 
  __int128 v10; 
  double v14; 
  __int64 v16; 
  __int64 v17; 
  int v18; 
  vec3_t vec; 
  vec3_t outShootAtPos; 
  vec3_t outOrigin; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 4169, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  sentient = this->m_pAI->sentient;
  number = sentient->targetEnt.number;
  if ( !number )
    goto LABEL_25;
  v6 = number;
  v7 = number - 1;
  if ( v7 >= 0x800 )
  {
    v18 = 2048;
    LODWORD(v16) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v16, v18) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v8 = v6 - 1;
  if ( g_entities[v8].r.isInUse != g_entityIsInUse[v8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v8] )
  {
    LODWORD(v17) = sentient->targetEnt.number - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v17) )
      __debugbreak();
  }
  if ( !sentient->targetEnt.number )
  {
LABEL_25:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 4170, ASSERT_TYPE_ASSERT, "(m_pAI->sentient->targetEnt.isDefined())", (const char *)&queryFormat, "m_pAI->sentient->targetEnt.isDefined()") )
      __debugbreak();
  }
  v9 = EntHandle::ent(&this->m_pAI->sentient->targetEnt);
  AIScriptedInterface::GetMuzzlePosApprox(this, &outOrigin);
  GScr_EntityGetShootAtPos(scrContext, v9, &outShootAtPos);
  v10 = LODWORD(outShootAtPos.v[1]);
  *(float *)&v10 = fsqrt((float)((float)((float)(outShootAtPos.v[1] - outOrigin.v[1]) * (float)(outShootAtPos.v[1] - outOrigin.v[1])) + (float)((float)(outShootAtPos.v[0] - outOrigin.v[0]) * (float)(outShootAtPos.v[0] - outOrigin.v[0]))) + (float)((float)(outShootAtPos.v[2] - outOrigin.v[2]) * (float)(outShootAtPos.v[2] - outOrigin.v[2])));
  _XMM4 = v10;
  __asm
  {
    vcmpless xmm0, xmm4, cs:__real@80000000
    vblendvps xmm0, xmm4, xmm1, xmm0
  }
  vec.v[0] = (float)(outShootAtPos.v[0] - outOrigin.v[0]) * (float)(1.0 / *(float *)&_XMM0);
  vec.v[2] = (float)(outShootAtPos.v[2] - outOrigin.v[2]) * (float)(1.0 / *(float *)&_XMM0);
  vec.v[1] = (float)(outShootAtPos.v[1] - outOrigin.v[1]) * (float)(1.0 / *(float *)&_XMM0);
  v14 = vectopitch(&vec);
  if ( vec.v[2] < 0.0 )
    *(float *)&v14 = *(float *)&v14 * -1.0;
  return *(float *)&v14;
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
double AIScriptedInterface::GetScarinessForDistance(AIScriptedInterface *this, sentient_s *enemy, float fDist)
{
  const scrContext_t *v4; 
  const Weapon *Weapon; 

  v4 = ScriptContext_Server();
  Weapon = GScr_Weapon_GetWeapon(v4, (const scr_weapon_t)this->m_pAI->currentWeapon);
  return AICommonInterface::GetAccuracyFraction(this->m_pAI, fDist, Weapon, WEAP_ACCURACY_AI_VS_AI);
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
  ai_scripted_t *m_pAI; 
  const dvar_t *v5; 
  int iLastWhizbyAnimTime; 
  const dvar_t *v7; 
  const char *v8; 
  __int128 v9; 
  ai_scripted_t *v11; 
  const dvar_t *v12; 

  m_pAI = this->m_pAI;
  if ( m_pAI->script_desiredSpeedEnabled )
  {
    _XMM6 = LODWORD(m_pAI->script_desiredSpeed);
    goto LABEL_17;
  }
  if ( !m_pAI->bAllowSpeedUpWhenCombatHot )
    goto LABEL_12;
  v5 = DVARBOOL_ai_hotCombatSpeedEnabled;
  if ( !DVARBOOL_ai_hotCombatSpeedEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_hotCombatSpeedEnabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( v5->current.enabled && (iLastWhizbyAnimTime = this->m_pAI->iLastWhizbyAnimTime, iLastWhizbyAnimTime > 0) && level.time < iLastWhizbyAnimTime + 10000 )
  {
    v7 = DVARFLT_ai_movementHotDefaultSpeed;
    if ( !DVARFLT_ai_movementHotDefaultSpeed )
    {
      v8 = "ai_movementHotDefaultSpeed";
      goto LABEL_14;
    }
  }
  else
  {
LABEL_12:
    v7 = DVARFLT_ai_movementDefaultSpeed;
    if ( !DVARFLT_ai_movementDefaultSpeed )
    {
      v8 = "ai_movementDefaultSpeed";
LABEL_14:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v8) )
        __debugbreak();
    }
  }
  Dvar_CheckFrontendServerThread(v7);
  m_pAI = this->m_pAI;
  _XMM0 = v7->current.unsignedInt;
  v9 = _XMM0;
  *(float *)&v9 = *(float *)&_XMM0 * m_pAI->speedScaleMultiplier;
  _XMM6 = v9;
LABEL_17:
  if ( m_pAI->speedScaleMode[0] == 2 )
    __asm { vminss  xmm6, xmm6, cs:__real@42f00000 }
  if ( EntHandle::isDefined(&m_pAI->grenade.pGrenade) )
    return FLOAT_200_0;
  v11 = this->m_pAI;
  if ( v11->cautiousNavigationEnabled )
  {
    v12 = DVARFLT_ai_maxSpeedForCautiousNavigation;
    if ( !DVARFLT_ai_maxSpeedForCautiousNavigation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_maxSpeedForCautiousNavigation") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    _XMM0 = v12->current.unsignedInt;
    v11 = this->m_pAI;
    __asm { vminss  xmm6, xmm0, xmm6 }
  }
  if ( v11->bArrivalFailed )
    __asm { vminss  xmm6, xmm6, cs:__real@432a0000 }
  if ( AICommonInterface::HasPath(this) )
  {
    _XMM0 = 0i64;
    _XMM1 = LODWORD(this->m_pAI->path_maxSpeed);
    if ( *(float *)&_XMM1 > 0.0 )
      __asm { vminss  xmm6, xmm1, xmm6 }
  }
  if ( HasAnimSpeedThresholdsForArchetype(this->m_pAI->baseArchetype) )
  {
    *(double *)&_XMM0 = GetMaxAnimSpeedThreshold(this->m_pAI->baseArchetype);
    __asm { vminss  xmm6, xmm0, xmm6 }
  }
  return *(float *)&_XMM6;
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

  r_weapon = *this->GetEquippedWeapon(this);
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
  float v5; 
  float v6; 
  float v7; 
  vec3_t *p_currentOrigin; 
  float v9; 
  float v10; 
  __int128 v11; 
  float v15; 
  float v16; 
  int v17; 
  float *p_m_maxSearchDist; 
  float *p_blockPlanes; 
  AINavigator *Navigator; 
  __int64 v21; 
  bool v22; 
  HavokPhysics_CollisionQueryResult *CollisionQueryResult; 
  HavokPhysics_CollisionQueryResult *v24; 
  hknpShape *ShapeCapsuleUpAxis; 
  hkMemoryAllocator *v28; 
  hkMemoryAllocator *v29; 
  HavokPhysics_IgnoreBodies v31; 
  Physics_ShapecastExtendedData extendedData; 
  __int64 v33; 
  vec3_t right; 
  vec3_t end; 
  vec3_t pos; 
  vec3_t vec2; 
  vec3_t vector; 
  bfx::PathSpec blockPlanes; 
  char optionalInplaceBuffer[440]; 

  v33 = -2i64;
  Sys_ProfBeginNamedEvent(0xFF808080, "AIHasRoomToFullExposeCorner");
  pathnode_t::GetPos((pathnode_t *)pNode, &pos);
  pathnode_t::GetAngles((pathnode_t *)pNode, &vector);
  type = pNode->constant.type;
  if ( type == 31 )
    type = pNode->dynamic.turretEntNumber;
  AngleVectors(&vector, NULL, &right, NULL);
  if ( (type & 0x80u) == 0 )
  {
    v7 = right.v[2];
    v6 = right.v[1];
    v5 = right.v[0];
  }
  else
  {
    LODWORD(v5) = LODWORD(right.v[0]) ^ _xmm;
    LODWORD(right.v[0]) ^= _xmm;
    LODWORD(v6) = LODWORD(right.v[1]) ^ _xmm;
    LODWORD(right.v[1]) ^= _xmm;
    LODWORD(v7) = LODWORD(right.v[2]) ^ _xmm;
    LODWORD(right.v[2]) ^= _xmm;
  }
  end.v[0] = (float)(v5 * 36.0) + pos.v[0];
  end.v[1] = (float)(v6 * 36.0) + pos.v[1];
  end.v[2] = (float)(v7 * 36.0) + pos.v[2];
  p_currentOrigin = &this->m_pAI->ent->r.currentOrigin;
  if ( !AIScriptedInterface::IsMoveSuppressed(this) )
    goto LABEL_11;
  v9 = end.v[0] - p_currentOrigin->v[0];
  v11 = LODWORD(end.v[1]);
  v10 = end.v[1] - p_currentOrigin->v[1];
  *(float *)&v11 = fsqrt((float)(v10 * v10) + (float)(v9 * v9));
  _XMM4 = v11;
  __asm
  {
    vcmpless xmm0, xmm4, cs:__real@80000000
    vblendvps xmm1, xmm4, xmm2, xmm0
  }
  *(float *)&_XMM4 = *(float *)&v11 + 30.0;
  v15 = (float)((float)(v9 * (float)(1.0 / *(float *)&_XMM1)) * (float)(*(float *)&v11 + 30.0)) + p_currentOrigin->v[0];
  vec2.v[0] = v15;
  v16 = (float)((float)(v10 * (float)(1.0 / *(float *)&_XMM1)) * (float)(*(float *)&v11 + 30.0)) + p_currentOrigin->v[1];
  vec2.v[1] = (float)((float)(v10 * (float)(1.0 / *(float *)&_XMM1)) * *(float *)&_XMM4) + p_currentOrigin->v[1];
  vec2.v[2] = end.v[2];
  AIScriptedInterface::GetMoveOnlySuppressionPlanes(this, (PathBlockPlanes *)&blockPlanes);
  v17 = 0;
  if ( *(int *)&blockPlanes.m_penaltyTable.m_perFlagPenalties[8] > 0 )
  {
    p_m_maxSearchDist = &blockPlanes.m_maxSearchDist;
    p_blockPlanes = (float *)&blockPlanes;
    while ( (float)((float)(*p_m_maxSearchDist - (float)((float)(v15 * *p_blockPlanes) + (float)(v16 * p_blockPlanes[1]))) * (float)(*p_m_maxSearchDist - (float)((float)(p_currentOrigin->v[1] * p_blockPlanes[1]) + (float)(p_currentOrigin->v[0] * *p_blockPlanes)))) >= 0.0 )
    {
      ++v17;
      p_blockPlanes += 2;
      ++p_m_maxSearchDist;
      if ( v17 >= *(int *)&blockPlanes.m_penaltyTable.m_perFlagPenalties[8] )
        goto LABEL_11;
    }
    AIScriptedInterface::MayMove_Debug(p_currentOrigin, &vec2, &colorYellow, DEBUGMAYMOVE_LIFTED);
    v22 = 0;
  }
  else
  {
LABEL_11:
    Navigator = AICommonInterface::GetNavigator(this);
    v21 = (__int64)Navigator->Get2DNavigator(Navigator);
    if ( !v21 || (blockPlanes = *(bfx::PathSpec *)(v21 + 1188), Nav_IsPointOnMeshCustom(*(nav_space_s **)(v21 + 16), &end, *(AINavLayer *)(v21 + 112), &blockPlanes, &vec2)) )
    {
      CollisionQueryResult = Physics_AllocateCollisionQueryResult(PHYSICS_WORLD_ID_FIRST, PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_ANY);
      if ( !CollisionQueryResult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 1485, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
        __debugbreak();
      v24 = Physics_AllocateCollisionQueryResult(PHYSICS_WORLD_ID_FIRST, PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_ANY);
      if ( !v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 1487, ASSERT_TYPE_ASSERT, "(startResult)", (const char *)&queryFormat, "startResult") )
        __debugbreak();
      ShapeCapsuleUpAxis = Physics_CreateShapeCapsuleUpAxis(PHYSICS_WORLD_ID_FIRST, &vec3_origin, 36.0, 15.0, optionalInplaceBuffer, 432, Temporary);
      extendedData.startTolerance = 0.0;
      _XMM0 = LODWORD(FLOAT_0_016000001);
      extendedData.accuracy = FLOAT_0_016000001;
      extendedData.simplifyStart = 0;
      extendedData.ignoreBodies = NULL;
      extendedData.collisionBuffer = 0.0;
      __asm { vpxor   xmm0, xmm0, xmm0 }
      *(_OWORD *)&extendedData.nonBrushShape = _XMM0;
      extendedData.phaseSelection = All;
      extendedData.permitOutwardTrace = 0;
      extendedData.contents = 33570816;
      HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v31, 1, 0);
      HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v31, 0, this->m_pAI->ent->s.number, 1, 1, 0, 1, 1);
      extendedData.ignoreBodies = &v31;
      Physics_Shapecast(PHYSICS_WORLD_ID_FIRST, ShapeCapsuleUpAxis, &pos, &end, &quat_identity, &extendedData, CollisionQueryResult, v24);
      LOBYTE(ShapeCapsuleUpAxis) = HavokPhysics_CollisionQueryResult::HasHit(CollisionQueryResult);
      Physics_FreeCollisionQueryResult(CollisionQueryResult);
      Physics_FreeCollisionQueryResult(v24);
      v22 = (_BYTE)ShapeCapsuleUpAxis == 0;
      v28 = hkMemHeapAllocator();
      v31.m_ignoreBodies.m_size = 0;
      if ( v31.m_ignoreBodies.m_capacityAndFlags >= 0 )
        hkMemoryAllocator::bufFree2(v28, v31.m_ignoreBodies.m_data, 4, v31.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
      v31.m_ignoreBodies.m_data = NULL;
      v31.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
      v29 = hkMemHeapAllocator();
      v31.m_ignoreEntities.m_size = 0;
      if ( v31.m_ignoreEntities.m_capacityAndFlags >= 0 )
        hkMemoryAllocator::bufFree2(v29, v31.m_ignoreEntities.m_data, 8, v31.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
      v31.m_ignoreEntities.m_data = NULL;
      v31.m_ignoreEntities.m_capacityAndFlags = 0x80000000;
    }
    else
    {
      v22 = 0;
    }
  }
  Sys_ProfEndNamedEvent();
  return v22;
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
  __int64 v13; 
  float v14; 
  __int128 v15; 
  float v16; 
  float v17; 
  float v18; 
  __int128 v19; 
  __int128 v20; 
  float v24; 
  float v25; 
  ai_scripted_t *m_pAI; 
  float v27; 
  float v28; 
  __int128 v29; 
  __int128 v30; 
  float v34; 
  unsigned __int8 v35; 
  __int128 v36; 
  AINavigator2D *v37; 
  char v38; 
  __int64 v39; 
  float *v40; 
  float v41; 
  float v42; 
  float v43; 
  __int128 v44; 
  __int128 v45; 
  float v46; 
  __int128 v47; 
  __int128 v49; 
  float v52; 
  float v53; 
  float v54; 
  double v55; 
  __int128 v56; 
  float v58; 
  float v59; 
  vec3_t forward; 

  v13 = startCorner;
  Sys_ProfBeginNamedEvent(0xFF808080, "AI_HasUpcomingSharpTurn");
  if ( !this->m_pAI->pNavigator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 2333, ASSERT_TYPE_ASSERT, "(m_pAI->pNavigator)", (const char *)&queryFormat, "m_pAI->pNavigator") )
    __debugbreak();
  if ( numCorners < 1 )
    goto LABEL_25;
  v14 = corners[startCorner].m_Pos.v[0];
  v15 = LODWORD(corners[startCorner].m_Pos.v[1]);
  v16 = corners[startCorner].m_Pos.v[2];
  v17 = v14 - originPoint->v[0];
  v19 = v15;
  v18 = *(float *)&v15 - originPoint->v[1];
  *(float *)&v19 = (float)(v18 * v18) + (float)(v17 * v17);
  v20 = v19;
  *(float *)&v19 = fsqrt(*(float *)&v19);
  _XMM2 = v19;
  __asm
  {
    vcmpless xmm0, xmm2, xmm5
    vblendvps xmm1, xmm2, xmm13, xmm0
  }
  v24 = (float)(1.0 / *(float *)&_XMM1) * v17;
  v25 = (float)(1.0 / *(float *)&_XMM1) * v18;
  if ( !checkFacing || *(float *)&v20 <= 400.0 )
    goto LABEL_23;
  m_pAI = this->m_pAI;
  if ( m_pAI->orientation.faceMotion )
  {
    AngleVectors(&m_pAI->ent->r.currentAngles, &forward, NULL, NULL);
    v27 = forward.v[1];
    v28 = forward.v[0];
  }
  else
  {
    v29 = LODWORD(m_pAI->Physics.vVelocity.v[0]);
    v30 = v29;
    *(float *)&v30 = fsqrt((float)(*(float *)&v29 * *(float *)&v29) + (float)(m_pAI->Physics.vVelocity.v[1] * m_pAI->Physics.vVelocity.v[1]));
    _XMM2 = v30;
    __asm
    {
      vcmpless xmm0, xmm2, xmm5
      vblendvps xmm1, xmm2, xmm13, xmm0
    }
    *(float *)&_XMM0 = 1.0 / *(float *)&_XMM1;
    v28 = *(float *)&v29 * *(float *)&_XMM0;
    forward.v[0] = *(float *)&v29 * *(float *)&_XMM0;
    v27 = *(float *)&_XMM0 * m_pAI->Physics.vVelocity.v[1];
  }
  v34 = (float)(v28 * v24) + (float)(v27 * v25);
  if ( v34 >= 0.70700002 || v34 <= -0.93900001 )
  {
LABEL_23:
    if ( *(float *)&v20 <= (float)(maxDistanceFromCorner * maxDistanceFromCorner) )
    {
      v36 = 0i64;
      v37 = this->m_pAI->pNavigator->Get2DNavigator(this->m_pAI->pNavigator);
      v38 = 0;
      v39 = numCorners - 1;
      if ( startCorner < v39 )
      {
        v40 = &corners[startCorner + 1].m_Pos.v[2];
        do
        {
          v41 = *(v40 - 2);
          v59 = *(v40 - 1);
          v58 = *v40;
          v42 = v41 - v14;
          v44 = LODWORD(v59);
          v43 = v59 - *(float *)&v15;
          *(float *)&v44 = (float)(v43 * v43) + (float)(v42 * v42);
          v45 = v44;
          v46 = (float)((float)(*v40 - v16) * (float)(*v40 - v16)) + *(float *)&v44;
          v47 = v20;
          *(float *)&v47 = *(float *)&v20 + v46;
          v20 = v47;
          v49 = v45;
          *(float *)&v49 = fsqrt(*(float *)&v45);
          _XMM4 = v49;
          __asm
          {
            vcmpless xmm0, xmm4, cs:__real@80000000
            vblendvps xmm1, xmm4, xmm13, xmm0
          }
          v52 = (float)(1.0 / *(float *)&_XMM1) * v42;
          v53 = (float)(1.0 / *(float *)&_XMM1) * v43;
          *(double *)&_XMM0 = AINavigator2D::GetCornerCurrentAngle(v37, *((_DWORD *)v40 - 3));
          v54 = *(float *)&_XMM0;
          if ( *(float *)&_XMM0 < 0.0 )
          {
            v55 = I_fclamp((float)(v52 * v24) + (float)(v25 * v53), -1.0, 1.0);
            v54 = acosf_0(*(float *)&v55) * 57.295776;
            AINavigator2D::SetCornerCurrentAngle(v37, *((_DWORD *)v40 - 3), v54);
          }
          v25 = v53;
          v24 = v52;
          v56 = v36;
          *(float *)&v56 = *(float *)&v36 + v54;
          v36 = v56;
          if ( v54 >= 20.0 )
            v38 = 1;
          if ( *(float *)&v20 > (float)(maxDistanceFromCorner * maxDistanceFromCorner) )
            break;
          v14 = v41;
          *(float *)&v15 = v59;
          v16 = v58;
          ++v13;
          v40 += 10;
        }
        while ( v13 < v39 );
        if ( v38 && *(float *)&v56 > minAngleForScaling )
        {
          *outTurnDegrees = *(float *)&v56;
          v35 = 1;
          goto LABEL_26;
        }
      }
    }
LABEL_25:
    v35 = 0;
    goto LABEL_26;
  }
  *outTurnDegrees = acosf_0(v34) * 57.295776;
  v35 = 1;
LABEL_26:
  Sys_ProfEndNamedEvent();
  return v35;
}

/*
==============
AIScriptedInterface::HasValidUpcomingTurnCached
==============
*/
bool AIScriptedInterface::HasValidUpcomingTurnCached(AIScriptedInterface *this)
{
  ai_scripted_t *m_pAI; 
  int v4[4]; 

  if ( !this->m_pAI->pNavigator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 2605, ASSERT_TYPE_ASSERT, "(m_pAI->pNavigator)", (const char *)&queryFormat, "m_pAI->pNavigator") )
    __debugbreak();
  this->m_pAI->pNavigator->GetNextCorner(this->m_pAI->pNavigator, (vec3_t *)v4);
  m_pAI = this->m_pAI;
  return m_pAI->turnSlowdownData.timeStamp + 500 > level.time && *(float *)v4 == m_pAI->turnSlowdownData.turnCorner.v[0] && *(float *)&v4[1] == m_pAI->turnSlowdownData.turnCorner.v[1] && *(float *)&v4[2] == m_pAI->turnSlowdownData.turnCorner.v[2];
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
  bitarray<224> *AllTeamFlags; 
  sentient_s *i; 
  __int64 v10; 
  bool result; 
  const dvar_t *v12; 
  team_t eTeam; 
  AIIterator *v14; 
  const gentity_s *j; 
  __int64 v16; 
  unsigned int v17; 
  AIScriptedInterface *m_pAI; 
  AIWrapper v19; 
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
      AllTeamFlags = (bitarray<224> *)Com_TeamsSP_GetAllTeamFlags();
    else
      AllTeamFlags = (bitarray<224> *)Com_TeamsMP_GetAllTeamFlags();
    iTeamFlags = *AllTeamFlags;
    for ( i = Sentient_FirstSentient(&iTeamFlags); i; i = Sentient_NextSentient(i, &iTeamFlags) )
    {
      LOBYTE(v10) = 15;
      this->GetPerfectInfo(this, i, v10);
    }
  }
  AIActorInterface::RunAITypeScript(this->m_pAI->ent);
  result = this->ValidateSpawn(this);
  if ( result )
  {
    G_Utils_CreateEntityDObjScriptable(ent);
    if ( !bDontShareEnemyInfo )
    {
      v12 = DVARINT_g_aiEventDump;
      if ( !DVARINT_g_aiEventDump && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_aiEventDump") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v12);
      if ( v12->current.integer > 0 )
        Com_Printf(18, "%d ^3 copy enemy info from teammates on spawn^7 at time^5 %d\n", (unsigned int)ent->s.number, (unsigned int)level.time);
      eTeam = this->m_pAI->sentient->eTeam;
      v14 = this->GetAIIterator(this);
      for ( j = (const gentity_s *)v14->GetFirst(v14); j; j = v14->GetNext(v14) )
      {
        if ( !j->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 170, ASSERT_TYPE_ASSERT, "(pOther->sentient)", (const char *)&queryFormat, "pOther->sentient") )
          __debugbreak();
        if ( ent != j && eTeam != j->sentient->eTeam )
        {
          AIWrapper::AIWrapper(&v19, j);
          v17 = 0;
          if ( level.maxSentients )
          {
            m_pAI = v19.m_pAI;
            do
            {
              LOBYTE(v16) = 16;
              this->SentientInfo_Copy(this, m_pAI->m_pAI, v17++, v16);
            }
            while ( v17 < level.maxSentients );
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
  const dvar_t *v3; 

  v1 = this->m_pAI->pNavigator->Get2DNavigator(this->m_pAI->pNavigator);
  v2 = v1;
  if ( v1 )
  {
    v3 = DCONST_DVARFLT_ai_tightQuartersLookaheadDistance;
    if ( !DCONST_DVARFLT_ai_tightQuartersLookaheadDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_tightQuartersLookaheadDistance") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v3);
    LOBYTE(v1) = AINavigator2D::IsApproachingTightQuarters(v2, v3->current.value);
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
  ai_scripted_t *m_pAI; 
  bool v5; 
  bool v6; 
  ai_scripted_t *v7; 
  int iPathEndTime; 
  vec3_t vFinalGoal; 

  result = AICommonInterface::HasPath(this);
  if ( result )
  {
    v3 = this->GetCloseEnt(this);
    if ( v3 )
    {
      m_pAI = this->m_pAI;
      v5 = m_pAI->pushable && m_pAI->script_pushable;
      v6 = v3->client && m_pAI->avoidance.pushPlayerEnabled;
      if ( v5 && (!m_pAI->moveMode || (float)((float)(m_pAI->Physics.vVelocity.v[0] * m_pAI->Physics.vVelocity.v[0]) + (float)(m_pAI->Physics.vVelocity.v[1] * m_pAI->Physics.vVelocity.v[1])) < 1.0) )
      {
        AIScriptedInterface::Debug_NotMoving(this, "pushed & stopped");
        return 0;
      }
      AICommonInterface::GetPathFinalGoal(this, &vFinalGoal);
      if ( !v6 && AICommonInterface::PointNearPoint(this, &v3->r.currentOrigin, &vFinalGoal, 37.5) )
      {
        AIScriptedInterface::Debug_NotMoving(this, "closeent near goal");
        return 0;
      }
    }
    v7 = this->m_pAI;
    if ( v7->avoidanceBlockedData.blocked )
    {
      AIScriptedInterface::Debug_NotMoving(this, "path blocked");
      return 0;
    }
    iPathEndTime = v7->iPathEndTime;
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
char AIScriptedInterface::IsCurrentEnemyValid(AIScriptedInterface *this)
{
  sentient_s *sentient; 
  gentity_s *v3; 
  const sentient_s *v4; 
  sentient_info_t *SentientInfo; 
  __m128 v6; 
  ai_scripted_t *m_pAI; 
  float v8; 
  EntHandle targetEnt; 
  float v11; 

  sentient = this->m_pAI->sentient;
  if ( !sentient )
    return 0;
  targetEnt = sentient->targetEnt;
  if ( !EntHandle::isDefined(&targetEnt) )
    return 0;
  v3 = EntHandle::ent(&targetEnt);
  v4 = v3->sentient;
  if ( !v4 )
    return 1;
  SentientInfo = Sentient_GetSentientInfo(this->m_pAI->sentient, v4);
  if ( SentientInfo->lastKnownPosTime && (AICommonInterface::CanSeeEnemy(this) || (v3->client || level.time - SentientInfo->lastKnownPosTime <= 10000) && (v6 = (__m128)*(unsigned __int64 *)v3->r.currentOrigin.v, v11 = v3->r.currentOrigin.v[2], m_pAI = this->m_pAI, v8 = v6.m128_f32[0] - m_pAI->ent->r.currentOrigin.v[0], v6.m128_f32[0] = _mm_shuffle_ps(v6, v6, 85).m128_f32[0] - m_pAI->ent->r.currentOrigin.v[1], (float)((float)((float)(v6.m128_f32[0] * v6.m128_f32[0]) + (float)(v8 * v8)) + (float)((float)(v11 - m_pAI->ent->r.currentOrigin.v[2]) * (float)(v11 - m_pAI->ent->r.currentOrigin.v[2]))) <= 4194304.0)) )
    return 1;
  else
    return 0;
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
__int64 AIScriptedInterface::IsGunBlockedByWall(AIScriptedInterface *this, float bufferDist)
{
  const Weapon *v4; 
  weapClass_t WeaponClass; 
  float v6; 
  float v7; 
  __int128 v8; 
  float v9; 
  int v13; 
  const dvar_t *v14; 
  unsigned __int8 v15; 
  vec3_t end; 
  vec3_t start; 
  vec3_t out; 
  float v20; 
  float v21; 
  float v22; 
  vec3_t outOrigin; 
  ApproxGunParams paramsOut; 
  vec4_t quat; 

  Sys_ProfBeginNamedEvent(0xFF808080, "IsGunBlockedByWall");
  if ( this->Is3D(this) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 1647, ASSERT_TYPE_ASSERT, "( !Is3D() )", (const char *)&queryFormat, "!Is3D()") )
    __debugbreak();
  AIScriptedInterface::GetMuzzlePosApprox(this, &outOrigin);
  this->GetEyePosition(this, (vec3_t *)&v20);
  v4 = this->GetEquippedWeapon(this);
  WeaponClass = BG_GetWeaponClass(v4, 0);
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
  start.v[0] = out.v[0] + v20;
  start.v[1] = out.v[1] + v21;
  start.v[2] = out.v[2] + v22;
  v6 = outOrigin.v[0] - (float)(out.v[0] + v20);
  v8 = LODWORD(outOrigin.v[1]);
  v7 = outOrigin.v[1] - (float)(out.v[1] + v21);
  v9 = outOrigin.v[2] - (float)(out.v[2] + v22);
  *(float *)&v8 = fsqrt((float)((float)(v7 * v7) + (float)(v6 * v6)) + (float)(v9 * v9));
  _XMM4 = v8;
  __asm
  {
    vcmpless xmm0, xmm4, cs:__real@80000000
    vblendvps xmm1, xmm4, xmm2, xmm0
  }
  end.v[0] = (float)((float)(v6 * (float)(1.0 / *(float *)&_XMM1)) * (float)(*(float *)&v8 + bufferDist)) + (float)(out.v[0] + v20);
  end.v[1] = (float)((float)(v7 * (float)(1.0 / *(float *)&_XMM1)) * (float)(*(float *)&v8 + bufferDist)) + (float)(out.v[1] + v21);
  end.v[2] = (float)((float)(v9 * (float)(1.0 / *(float *)&_XMM1)) * (float)(*(float *)&v8 + bufferDist)) + (float)(out.v[2] + v22);
  v13 = PhysicsQuery_LegacySightTrace(PHYSICS_WORLD_ID_FIRST, &start, &end, &bounds_origin, this->m_pAI->ent->s.number, 2047, 8399137);
  v14 = DVARBOOL_ai_debugGunBlocked;
  if ( v13 )
  {
    if ( !DVARBOOL_ai_debugGunBlocked && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugGunBlocked") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    if ( v14->current.enabled )
      G_DebugLine(&start, &end, &colorRed, 0);
    v15 = 1;
  }
  else
  {
    if ( !DVARBOOL_ai_debugGunBlocked && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugGunBlocked") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    if ( v14->current.enabled )
      G_DebugLine(&start, &end, &colorGreen, 0);
    v15 = 0;
  }
  Sys_ProfEndNamedEvent();
  return v15;
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
  const dvar_t *v3; 

  v1 = this->m_pAI->pNavigator->Get2DNavigator(this->m_pAI->pNavigator);
  v2 = v1;
  if ( v1 )
  {
    v3 = DCONST_DVARFLT_ai_tightQuartersLookaheadDistance;
    if ( !DCONST_DVARFLT_ai_tightQuartersLookaheadDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_tightQuartersLookaheadDistance") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v3);
    LOBYTE(v1) = AINavigator2D::IsInOrApproachingTightQuarters(v2, v3->current.value);
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
char AIScriptedInterface::IsNearAnyPlayers(AIScriptedInterface *this, float dist)
{
  int v2; 
  ai_scripted_t *m_pAI; 
  float v4; 
  float v5; 
  float v6; 
  __int64 v7; 
  __int64 i; 
  __int64 v10; 
  __int64 v11; 

  v2 = 0;
  m_pAI = this->m_pAI;
  v4 = m_pAI->ent->r.currentOrigin.v[0];
  v5 = m_pAI->ent->r.currentOrigin.v[1];
  v6 = m_pAI->ent->r.currentOrigin.v[2];
  if ( level.maxclients <= 0 )
    return 0;
  v7 = 0i64;
  for ( i = 0i64; ; ++i )
  {
    if ( (unsigned int)v2 >= 0x800 )
    {
      LODWORD(v11) = 2048;
      LODWORD(v10) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v10, v11) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    if ( g_entities[i].r.isInUse != g_entityIsInUse[v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( g_entityIsInUse[v7] && (float)((float)((float)((float)(g_entities[i].r.currentOrigin.v[1] - v5) * (float)(g_entities[i].r.currentOrigin.v[1] - v5)) + (float)((float)(g_entities[i].r.currentOrigin.v[0] - v4) * (float)(g_entities[i].r.currentOrigin.v[0] - v4))) + (float)((float)(g_entities[i].r.currentOrigin.v[2] - v6) * (float)(g_entities[i].r.currentOrigin.v[2] - v6))) < (float)(dist * dist) )
      break;
    ++v2;
    ++v7;
    if ( v2 >= level.maxclients )
      return 0;
  }
  return 1;
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
bool AIScriptedInterface::IsWithinScriptGoalRadius(AIScriptedInterface *this, const vec3_t *position, float buffer)
{
  const ai_goal_t *v5; 

  v5 = this->GetScriptGoal(this);
  if ( v5 )
  {
    if ( buffer == 0.0 )
      LOBYTE(v5) = AICommonInterface::PointAtGoal(this, position, v5);
    else
      LOBYTE(v5) = AICommonInterface::PointNearGoal(this, position, v5, buffer);
  }
  return (char)v5;
}

/*
==============
AIScriptedInterface::MayMoveFromPointToPoint
==============
*/
_BOOL8 AIScriptedInterface::MayMoveFromPointToPoint(AIScriptedInterface *this, const vec3_t *vStart, const bfx::AreaHandle *hStartArea, const vec3_t *vEnd, int ignoreActors)
{
  scrContext_t *v10; 
  AINavLayer Layer; 
  AINavigator *pNavigator; 
  nav_space_s *m_pSpace; 
  AINavigator2D *v14; 
  AINavigator2D *v15; 
  unsigned __int64 eTeam; 
  unsigned int ObstacleBlockageFlagsFromTeamFlags; 
  bool v18; 
  bool IsStraightLineReachable; 
  float v20; 
  float v21; 
  __int128 v22; 
  __int128 v23; 
  __int128 v24; 
  float v28; 
  float v29; 
  __int128 v31; 
  __int128 v34; 
  ai_scripted_t *m_pAI; 
  gentity_s *ent; 
  vec3_t startPos; 
  vec3_t endPos; 
  bitarray<224> teamflags; 
  bfx::PathSpec pathSpec; 
  nav_probe_results_s pOutResults; 
  trace_t results; 

  pathSpec.m_obstacleMode = BLOCKED_IF_ANY_MATCH;
  *(_QWORD *)&pathSpec.m_obstacleBlockageFlags = -1i64;
  *(_QWORD *)&pathSpec.m_areaPenaltyFlags = -1i64;
  pathSpec.m_usePathSharingPenalty = 0;
  _XMM7 = 0i64;
  pathSpec.m_pathSharingPenalty = 0.0;
  pathSpec.m_maxPathSharingPenalty = 0.0;
  pathSpec.m_maxSearchDist = 0.0;
  bfx::PenaltyTable::PenaltyTable(&pathSpec.m_penaltyTable);
  pathSpec.m_snapMode = SNAP_CLOSEST;
  if ( AICommonInterface::Use3DPathing(this) )
  {
    v10 = ScriptContext_Server();
    Scr_Error(COM_ERR_1772, v10, "MayMoveFromPointToPoint: does not work on 3D actors.  Use a nav trace (allow edge) instead.");
  }
  startPos = *vStart;
  endPos = *vEnd;
  Layer = Nav_GetLayer(this->m_pAI->pNavigator);
  pNavigator = this->m_pAI->pNavigator;
  m_pSpace = pNavigator->m_pSpace;
  v14 = pNavigator->Get2DNavigator(pNavigator);
  v15 = v14;
  if ( v14 )
    pathSpec = *AINavigator2D::GetPathSpec(v14);
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
    v18 = Nav_Trace(&startPos, hStartArea, &endPos, &pathSpec, &pOutResults);
  else
    v18 = Nav_Trace(m_pSpace, &startPos, &endPos, Layer, &pathSpec, &pOutResults);
  IsStraightLineReachable = !v18;
  v20 = endPos.v[0] - startPos.v[0];
  v22 = LODWORD(endPos.v[1]);
  v21 = endPos.v[1] - startPos.v[1];
  *(float *)&v22 = (float)(v21 * v21) + (float)(v20 * v20);
  v23 = v22;
  if ( (float)(pOutResults.m_DistTraveled / fsqrt((float)((float)(endPos.v[2] - startPos.v[2]) * (float)(endPos.v[2] - startPos.v[2])) + *(float *)&v22)) <= 0.94999999 )
  {
    if ( v18 )
    {
      if ( v15 )
      {
        v24 = LODWORD(pOutResults.m_edgeEndPos.v[1]);
        *(float *)&v24 = fsqrt((float)((float)(pOutResults.m_edgeEndPos.v[1] - pOutResults.m_edgeStartPos.v[1]) * (float)(pOutResults.m_edgeEndPos.v[1] - pOutResults.m_edgeStartPos.v[1])) + (float)((float)(pOutResults.m_edgeEndPos.v[0] - pOutResults.m_edgeStartPos.v[0]) * (float)(pOutResults.m_edgeEndPos.v[0] - pOutResults.m_edgeStartPos.v[0])));
        _XMM3 = v24;
        __asm
        {
          vcmpless xmm0, xmm3, cs:__real@80000000
          vblendvps xmm1, xmm3, xmm11, xmm0
        }
        v28 = (float)(1.0 / *(float *)&_XMM1) * (float)(pOutResults.m_edgeEndPos.v[0] - pOutResults.m_edgeStartPos.v[0]);
        v29 = (float)(pOutResults.m_edgeEndPos.v[1] - pOutResults.m_edgeStartPos.v[1]) * (float)(1.0 / *(float *)&_XMM1);
        v31 = v23;
        *(float *)&v31 = fsqrt(*(float *)&v23);
        _XMM6 = v31;
        __asm
        {
          vcmpless xmm0, xmm6, cs:__real@80000000
          vblendvps xmm1, xmm6, xmm11, xmm0
        }
        *(float *)&v31 = (float)((float)(v21 * (float)(1.0 / *(float *)&_XMM1)) * v29) + (float)((float)(v20 * (float)(1.0 / *(float *)&_XMM1)) * v28);
        if ( (float)(*(float *)&v31 * *(float *)&v31) > 0.99199998 )
        {
          startPos = pOutResults.m_EndPos;
          v34 = _XMM6;
          *(float *)&v34 = *(float *)&_XMM6 - pOutResults.m_DistTraveled;
          _XMM1 = v34 ^ _xmm;
          __asm
          {
            vcmpltss xmm0, xmm7, xmm3
            vblendvps xmm3, xmm1, xmm2, xmm0
          }
          endPos.v[0] = (float)(*(float *)&_XMM3 * v28) + pOutResults.m_EndPos.v[0];
          endPos.v[1] = (float)(*(float *)&_XMM3 * v29) + pOutResults.m_EndPos.v[1];
        }
      }
      IsStraightLineReachable = Nav_IsStraightLineReachable(m_pSpace, &startPos, &endPos, Layer, &pathSpec);
      if ( !IsStraightLineReachable )
        goto LABEL_26;
    }
  }
  else
  {
    IsStraightLineReachable = 1;
  }
  if ( ignoreActors )
  {
    if ( IsStraightLineReachable )
      goto LABEL_25;
  }
  else
  {
    m_pAI = this->m_pAI;
    ent = m_pAI->ent;
    *(_OWORD *)teamflags.array = *(_OWORD *)m_pAI->ent->r.box.midPoint.v;
    *(_QWORD *)&teamflags.array[4] = *(_QWORD *)&ent->r.box.halfSize.y;
    G_Main_TraceCapsule(&results, &startPos, &endPos, (const Bounds *)&teamflags, m_pAI->ent->s.number, 33570816);
    if ( results.fraction == 1.0 )
    {
      IsStraightLineReachable = 1;
LABEL_25:
      this->SetMayMoveTime(this, level.time);
      goto LABEL_26;
    }
    IsStraightLineReachable = 0;
  }
LABEL_26:
  bfx::AreaHandle::~AreaHandle(&pOutResults.m_hEndArea);
  return IsStraightLineReachable;
}

/*
==============
AIScriptedInterface::MayMove_CheckFriendlyFire
==============
*/
__int64 AIScriptedInterface::MayMove_CheckFriendlyFire(AIScriptedInterface *this, const vec3_t *start, const vec3_t *end)
{
  float v6; 
  float v7; 
  __int128 v8; 
  float v12; 
  float v13; 
  int v14; 
  float *fDist; 
  PathBlockPlanes *i; 
  vec3_t vec2; 
  PathBlockPlanes blockPlanes; 

  if ( !AIScriptedInterface::IsMoveSuppressed(this) )
    return 0i64;
  v6 = end->v[0] - start->v[0];
  v8 = LODWORD(end->v[1]);
  v7 = end->v[1] - start->v[1];
  *(float *)&v8 = fsqrt((float)(v7 * v7) + (float)(v6 * v6));
  _XMM3 = v8;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm1, xmm0
  }
  v12 = (float)((float)(v6 * (float)(1.0 / *(float *)&_XMM0)) * (float)(*(float *)&v8 + 30.0)) + start->v[0];
  v13 = (float)((float)(v7 * (float)(1.0 / *(float *)&_XMM0)) * (float)(*(float *)&v8 + 30.0)) + start->v[1];
  *(float *)&_XMM0 = end->v[2];
  vec2.v[1] = v13;
  vec2.v[0] = v12;
  vec2.v[2] = *(float *)&_XMM0;
  AIScriptedInterface::GetMoveOnlySuppressionPlanes(this, &blockPlanes);
  v14 = 0;
  if ( blockPlanes.iPlaneCount <= 0 )
    return 0i64;
  fDist = blockPlanes.fDist;
  for ( i = &blockPlanes; (float)((float)(*fDist - (float)((float)(v12 * i->vNormal[0].v[0]) + (float)(v13 * i->vNormal[0].v[1]))) * (float)(*fDist - (float)((float)(start->v[1] * i->vNormal[0].v[1]) + (float)(start->v[0] * i->vNormal[0].v[0])))) >= 0.0; i = (PathBlockPlanes *)((char *)i + 8) )
  {
    ++v14;
    ++fDist;
    if ( v14 >= blockPlanes.iPlaneCount )
      return 0i64;
  }
  AIScriptedInterface::MayMove_Debug(start, &vec2, &colorYellow, DEBUGMAYMOVE_LIFTED);
  return 1i64;
}

/*
==============
AIScriptedInterface::MayMove_Debug
==============
*/
void AIScriptedInterface::MayMove_Debug(const vec3_t *vec1, const vec3_t *vec2, const vec4_t *color, DEBUGMAYMOVE_LIFT_ENUM liftBehavior)
{
  const dvar_t *v4; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  vec3_t end; 
  vec3_t start; 

  v4 = DVARBOOL_ai_debugMayMove;
  if ( !DVARBOOL_ai_debugMayMove && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugMayMove") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.enabled )
  {
    v9 = vec1->v[1];
    v10 = vec1->v[2];
    v11 = vec2->v[2];
    start.v[0] = vec1->v[0];
    v12 = vec2->v[0];
    start.v[1] = v9;
    v13 = vec2->v[1];
    end.v[0] = v12;
    end.v[1] = v13;
    start.v[2] = v10;
    end.v[2] = v11;
    if ( liftBehavior == DEBUGMAYMOVE_LIFTED )
    {
      start.v[2] = v10 + 32.0;
      end.v[2] = v11 + 32.0;
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
  int v10; 
  int v11; 
  float v12; 
  float v13; 
  ai_scripted_t *m_pAI; 
  const dvar_t *v15; 
  float v17; 
  ai_scripted_t *v18; 
  float v19; 
  unsigned __int16 groundEnt; 
  bool b3D; 
  const dvar_t *v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  vec3_t end; 
  vec3_t start; 
  vec3_t vec2; 
  vec3_t vTraceEndPos; 
  vec3_t v32; 
  trace_t results; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 1244, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  v10 = this->GetTraceMask(this);
  if ( ignoreActors )
    v11 = v10 & 0xFDFFBFFF;
  else
    v11 = v10 | 0x2004000;
  v12 = vEnd->v[1];
  v13 = vEnd->v[2];
  m_pAI = this->m_pAI;
  start.v[0] = vEnd->v[0];
  start.v[1] = v12;
  end.v[0] = start.v[0];
  end.v[1] = v12;
  start.v[2] = v13 + 72.0;
  end.v[2] = v13 - 72.0;
  G_Main_TraceCapsule(&results, &start, &end, &bounds_origin, m_pAI->ent->s.number, v11 | 0x2000);
  if ( results.allsolid )
  {
    v15 = DVARBOOL_ai_debugMayMove;
    if ( !DVARBOOL_ai_debugMayMove && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugMayMove") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    if ( v15->current.enabled )
    {
      v32.v[0] = start.v[0];
      v32.v[1] = start.v[1];
      vec2.v[0] = end.v[0];
      vec2.v[1] = end.v[1];
      v32.v[2] = start.v[2] + 32.0;
      vec2.v[2] = end.v[2] + 32.0;
      G_DebugLineWithDuration(&v32, &vec2, &colorOrange, 0, 100);
      return 0i64;
    }
    return 0i64;
  }
  if ( checkDrop )
  {
    end.v[0] = (float)((float)(end.v[0] - start.v[0]) * results.fraction) + start.v[0];
    v17 = vStart->v[2];
    end.v[1] = (float)((float)(end.v[1] - start.v[1]) * results.fraction) + start.v[1];
    end.v[2] = (float)((float)(end.v[2] - start.v[2]) * results.fraction) + start.v[2];
    if ( (float)(v17 - end.v[2]) > 32.0 )
    {
      AIScriptedInterface::MayMove_Debug(vEnd, &end, &colorOrange, DEBUGMAYMOVE_NOT_LIFTED);
      return 0i64;
    }
  }
  v18 = this->m_pAI;
  v19 = vStart->v[1];
  vTraceEndPos.v[0] = vStart->v[0];
  vTraceEndPos.v[2] = vStart->v[2];
  vTraceEndPos.v[1] = v19;
  groundEnt = v18->Physics.groundEntNum;
  b3D = AICommonInterface::Use3DPathing(this);
  if ( !Path_PredictionTrace(vStart, vEnd, this->m_pAI->ent->s.number, v11, &vTraceEndPos, 10.0, allowStartSolid, b3D, NULL, NULL, groundEnt) )
  {
    v22 = DVARBOOL_ai_debugMayMove;
    if ( !DVARBOOL_ai_debugMayMove && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugMayMove") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v22);
    if ( v22->current.enabled )
    {
      v23 = vEnd->v[0] - vStart->v[0];
      v24 = vEnd->v[1] - vStart->v[1];
      v25 = vEnd->v[2] - vStart->v[2];
      v26 = (float)((float)((float)((float)(vTraceEndPos.v[1] - vStart->v[1]) * v24) + (float)((float)(vTraceEndPos.v[0] - vStart->v[0]) * v23)) + (float)((float)(vTraceEndPos.v[2] - vStart->v[2]) * v25)) / (float)((float)((float)(v24 * v24) + (float)(v23 * v23)) + (float)(v25 * v25));
      v27 = (float)(v26 * v24) + vStart->v[1];
      vec2.v[0] = (float)(v26 * v23) + vStart->v[0];
      vec2.v[2] = (float)(v26 * v25) + vStart->v[2];
      vec2.v[1] = v27;
      AIScriptedInterface::MayMove_Debug(vStart, &vec2, &colorLtOrange, DEBUGMAYMOVE_LIFTED);
      AIScriptedInterface::MayMove_Debug(&vec2, vEnd, &colorRed, DEBUGMAYMOVE_LIFTED);
    }
    return 0i64;
  }
  return 1i64;
}

/*
==============
AIScriptedInterface::MaybeMove_DebugMidPoint
==============
*/
void AIScriptedInterface::MaybeMove_DebugMidPoint(const vec3_t *vec1, const vec3_t *vec2, const vec3_t *vec3, const vec4_t *color1, const vec4_t *color2, DEBUGMAYMOVE_LIFT_ENUM liftBehavior)
{
  const dvar_t *v6; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  vec3_t vec2a; 

  v6 = DVARBOOL_ai_debugMayMove;
  if ( !DVARBOOL_ai_debugMayMove && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugMayMove") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( v6->current.enabled )
  {
    v11 = vec3->v[0] - vec1->v[0];
    v12 = vec3->v[1] - vec1->v[1];
    v13 = vec3->v[2] - vec1->v[2];
    v14 = (float)((float)((float)((float)(vec2->v[1] - vec1->v[1]) * v12) + (float)((float)(vec2->v[0] - vec1->v[0]) * v11)) + (float)((float)(vec2->v[2] - vec1->v[2]) * v13)) / (float)((float)((float)(v12 * v12) + (float)(v11 * v11)) + (float)(v13 * v13));
    v15 = (float)(v14 * v12) + vec1->v[1];
    vec2a.v[0] = (float)(v14 * v11) + vec1->v[0];
    vec2a.v[2] = (float)(v14 * v13) + vec1->v[2];
    vec2a.v[1] = v15;
    AIScriptedInterface::MayMove_Debug(vec1, &vec2a, color1, liftBehavior);
    AIScriptedInterface::MayMove_Debug(&vec2a, vec3, color2, liftBehavior);
  }
}

/*
==============
AIScriptedInterface::ModifySharpTurnSpeed
==============
*/
void AIScriptedInterface::ModifySharpTurnSpeed(AIScriptedInterface *this, float turnAngle, float minSlowDownAngle, float *outTargetSpeed)
{
  const dvar_t *v6; 
  float value; 
  double v8; 
  float v9; 
  float v10; 
  float v11; 
  const dvar_t *v12; 
  const dvar_t *v13; 
  const dvar_t *v14; 
  const dvar_t *v15; 
  const char *v16; 
  const dvar_t *v17; 
  const dvar_t *v18; 
  const dvar_t *v19; 
  const dvar_t *v20; 
  const dvar_t *v21; 
  const dvar_t *v22; 
  const dvar_t *v23; 
  const dvar_t *v24; 
  const dvar_t *v25; 
  const dvar_t *v26; 
  __int128 v28; 

  if ( !outTargetSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 2454, ASSERT_TYPE_ASSERT, "(outTargetSpeed)", (const char *)&queryFormat, "outTargetSpeed") )
    __debugbreak();
  v6 = DCONST_DVARFLT_ai_maxTurnAngleForSpeedScaling;
  if ( !DCONST_DVARFLT_ai_maxTurnAngleForSpeedScaling && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_maxTurnAngleForSpeedScaling") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  value = v6->current.value;
  v8 = I_fclamp(turnAngle, minSlowDownAngle, value);
  v9 = *outTargetSpeed;
  v10 = FLOAT_1_0;
  v11 = FLOAT_1_0;
  if ( this->m_pAI->speedScaleMode[0] == 2 )
  {
    v12 = DCONST_DVARFLT_ai_minStrafeCornerSlowDownMultiplier;
    if ( !DCONST_DVARFLT_ai_minStrafeCornerSlowDownMultiplier && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_minStrafeCornerSlowDownMultiplier") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    v10 = v12->current.value;
    v13 = DCONST_DVARFLT_ai_maxStrafeCornerSlowDownMultiplier;
    if ( !DCONST_DVARFLT_ai_maxStrafeCornerSlowDownMultiplier && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_maxStrafeCornerSlowDownMultiplier") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    v11 = v13->current.value;
    v14 = DCONST_DVARFLT_ai_maxSpeedDuringStrafeCornerSlowDown;
    if ( !DCONST_DVARFLT_ai_maxSpeedDuringStrafeCornerSlowDown && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_maxSpeedDuringStrafeCornerSlowDown") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    v9 = v14->current.value;
    v15 = DCONST_DVARFLT_ai_minSpeedDuringStrafeCornerSlowDown;
    if ( DCONST_DVARFLT_ai_minSpeedDuringStrafeCornerSlowDown )
      goto LABEL_51;
    v16 = "ai_minSpeedDuringStrafeCornerSlowDown";
LABEL_49:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v16) )
      __debugbreak();
LABEL_51:
    Dvar_CheckFrontendServerThread(v15);
    goto LABEL_52;
  }
  v17 = DCONST_DVARFLT_ai_minSpeedForCombatCornerSlowDownMultiplier;
  if ( !DCONST_DVARFLT_ai_minSpeedForCombatCornerSlowDownMultiplier && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_minSpeedForCombatCornerSlowDownMultiplier") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v17);
  if ( v17->current.value < *outTargetSpeed )
  {
    v18 = DCONST_DVARFLT_ai_minCombatCornerSlowDownMultiplier;
    if ( !DCONST_DVARFLT_ai_minCombatCornerSlowDownMultiplier && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_minCombatCornerSlowDownMultiplier") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v18);
    v10 = v18->current.value;
    v19 = DCONST_DVARFLT_ai_maxCombatCornerSlowDownMultiplier;
    if ( !DCONST_DVARFLT_ai_maxCombatCornerSlowDownMultiplier && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_maxCombatCornerSlowDownMultiplier") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v19);
    v11 = v19->current.value;
    v20 = DCONST_DVARFLT_ai_maxSpeedDuringCombatCornerSlowDown;
    if ( !DCONST_DVARFLT_ai_maxSpeedDuringCombatCornerSlowDown && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_maxSpeedDuringCombatCornerSlowDown") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v20);
    v9 = v20->current.value;
    v15 = DCONST_DVARFLT_ai_minSpeedDuringCombatCornerSlowDown;
    if ( DCONST_DVARFLT_ai_minSpeedDuringCombatCornerSlowDown )
      goto LABEL_51;
    v16 = "ai_minSpeedDuringCombatCornerSlowDown";
    goto LABEL_49;
  }
  v21 = DCONST_DVARFLT_ai_minSpeedForCQBCornerSlowDownMultiplier;
  if ( !DCONST_DVARFLT_ai_minSpeedForCQBCornerSlowDownMultiplier && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_minSpeedForCQBCornerSlowDownMultiplier") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v21);
  if ( v21->current.value < *outTargetSpeed )
  {
    v22 = DCONST_DVARFLT_ai_minCombatCQBCornerSlowDownMultiplier;
    if ( !DCONST_DVARFLT_ai_minCombatCQBCornerSlowDownMultiplier && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_minCombatCQBCornerSlowDownMultiplier") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v22);
    v10 = v22->current.value;
    v23 = DCONST_DVARFLT_ai_maxCombatCQBCornerSlowDownMultiplier;
    if ( !DCONST_DVARFLT_ai_maxCombatCQBCornerSlowDownMultiplier && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_maxCombatCQBCornerSlowDownMultiplier") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v23);
    v11 = v23->current.value;
    v24 = DCONST_DVARFLT_ai_maxSpeedDuringCQBCornerSlowDown;
    if ( !DCONST_DVARFLT_ai_maxSpeedDuringCQBCornerSlowDown && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_maxSpeedDuringCQBCornerSlowDown") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v24);
    v9 = v24->current.value;
    v15 = DCONST_DVARFLT_ai_minSpeedDuringCQBCornerSlowDown;
    if ( DCONST_DVARFLT_ai_minSpeedDuringCQBCornerSlowDown )
      goto LABEL_51;
    v16 = "ai_minSpeedDuringCQBCornerSlowDown";
    goto LABEL_49;
  }
LABEL_52:
  if ( this->m_pAI->cautiousNavigationEnabled )
  {
    v25 = DCONST_DVARFLT_ai_maxSpeedDuringCautiousCornerSlowDown;
    if ( !DCONST_DVARFLT_ai_maxSpeedDuringCautiousCornerSlowDown && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_maxSpeedDuringCautiousCornerSlowDown") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v25);
    v9 = v25->current.value;
    v26 = DCONST_DVARFLT_ai_minSpeedDuringCautiousCornerSlowDown;
    if ( !DCONST_DVARFLT_ai_minSpeedDuringCautiousCornerSlowDown && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_minSpeedDuringCautiousCornerSlowDown") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v26);
  }
  _XMM4 = *(unsigned int *)outTargetSpeed;
  v28 = LODWORD(FLOAT_1_0);
  __asm { vminss  xmm6, xmm4, xmm6 }
  *(float *)&v28 = (float)((float)((float)(1.0 - (float)((float)(*(float *)&v8 - minSlowDownAngle) / (float)(value - minSlowDownAngle))) * (float)(v10 - v11)) + v11) * *(float *)&_XMM4;
  _XMM8 = v28;
  if ( *(float *)&_XMM6 > v9 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 713, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%g, %g", *(float *)&_XMM6, v9) )
    __debugbreak();
  __asm
  {
    vmaxss  xmm0, xmm8, xmm6
    vminss  xmm1, xmm0, xmm7
  }
  *outTargetSpeed = *(float *)&_XMM1;
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
  ai_scripted_t *m_pAI; 
  __int64 v12; 
  __int128 v13; 
  float v16; 
  const dvar_t *v17; 
  const dvar_t *v18; 
  const dvar_t *v19; 
  int v23[4]; 

  v8 = (_QWORD *)((__int64 (__fastcall *)(AINavigator *, const vec3_t *, const vec3_t *, const vec3_t *))this->m_pAI->pNavigator->Get2DNavigator)(this->m_pAI->pNavigator, nextCorner, dirToCorner, followingCorner);
  v9 = 0;
  v10 = v8;
  if ( !v8 )
    return v9;
  m_pAI = this->m_pAI;
  v12 = *v8;
  v13 = LODWORD(m_pAI->Physics.vVelocity.v[0]);
  *(float *)&v13 = fsqrt((float)((float)(m_pAI->Physics.vVelocity.v[0] * m_pAI->Physics.vVelocity.v[0]) + (float)(m_pAI->Physics.vVelocity.v[1] * m_pAI->Physics.vVelocity.v[1])) + (float)(m_pAI->Physics.vVelocity.v[2] * m_pAI->Physics.vVelocity.v[2])) * 0.0055555557;
  _XMM3 = v13;
  __asm { vminss  xmm1, xmm3, cs:__real@3f800000 }
  v16 = (float)(*(float *)&_XMM1 * 60.0) * dirToCorner->v[1];
  *(float *)v23 = (float)((float)(*(float *)&_XMM1 * 60.0) * dirToCorner->v[0]) + nextCorner->v[0];
  *(float *)&v13 = (float)(*(float *)&_XMM1 * 60.0) * dirToCorner->v[2];
  *(float *)&v23[1] = v16 + nextCorner->v[1];
  *(float *)&v23[2] = *(float *)&v13 + nextCorner->v[2];
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, const vec3_t *, int *))(v12 + 296))(v10, nextCorner, v23) )
  {
    v17 = DCONST_DVARFLT_ai_nearEdgeCornerSpeedMultiplier;
    if ( !DCONST_DVARFLT_ai_nearEdgeCornerSpeedMultiplier && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_nearEdgeCornerSpeedMultiplier") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v17);
    *outTargetSpeed = v17->current.value * *outTargetSpeed;
    v9 = 1;
  }
  if ( !AIScriptedInterface::IsApproachingTightQuarters(this) )
    return v9;
  v18 = DCONST_DVARFLT_ai_tightCornerSpeedMultiplier;
  if ( !DCONST_DVARFLT_ai_tightCornerSpeedMultiplier && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_tightCornerSpeedMultiplier") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v18);
  *outTargetSpeed = v18->current.value * *outTargetSpeed;
  v19 = DCONST_DVARFLT_ai_maxSpeedDuringTightQuartersSlowDown;
  if ( !DCONST_DVARFLT_ai_maxSpeedDuringTightQuartersSlowDown && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_maxSpeedDuringTightQuartersSlowDown") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v19);
  _XMM0 = v19->current.unsignedInt;
  __asm { vminss  xmm1, xmm0, dword ptr [rbx] }
  *outTargetSpeed = *(float *)&_XMM1;
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
  unsigned __int8 v4; 

  Scr_GetFloat(scrContext, 0);
  v4 = ((__int64 (__fastcall *)(AIScriptedInterface *))this->GetStairsWithinDist)(this);
  Scr_AddBool(scrContext, v4);
}

/*
==============
AIScriptedInterface::OnSetNewEnemy
==============
*/
void AIScriptedInterface::OnSetNewEnemy(AIScriptedInterface *this, const gentity_s *pPrevEnemy, const gentity_s *pNewEnemy, bool bResetThreatUpdate)
{
  ai_scripted_t *m_pAI; 
  sentient_s *sentient; 
  sentient_info_t *SentientInfo; 
  float v11; 
  float v12; 
  float v13; 
  ai_scripted_t *v14; 

  if ( pPrevEnemy == pNewEnemy && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 4106, ASSERT_TYPE_ASSERT, "( pPrevEnemy != pNewEnemy )", (const char *)&queryFormat, "pPrevEnemy != pNewEnemy") )
    __debugbreak();
  m_pAI = this->m_pAI;
  if ( pNewEnemy )
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
  if ( bResetThreatUpdate && !pNewEnemy && pPrevEnemy )
    this->m_pAI->threat.threatUpdateTime = 0;
  tacpoint_ref_t::SetPoint(&this->m_pAI->sight.faceLikelyEnemyTacPoint, NULL);
  this->m_pAI->sight.faceLikelyEnemyPathNeedRecalculateTime = 0;
  this->m_pAI->sight.faceLikelyEnemyPathNeedCheckTime = 0;
  this->m_pAI->shoot.lastCanShootEnemyTime = 0;
  this->m_pAI->shoot.lastCanShootEnemyFromStepOutTime = 0;
  this->m_pAI->shoot.lastCanShootEnemyFromExposedAtNodeTime = 0;
  if ( pNewEnemy )
  {
    sentient = pNewEnemy->sentient;
    if ( sentient )
    {
      SentientInfo = Sentient_GetSentientInfo(this->m_pAI->sentient, sentient);
      if ( !SentientInfo->VisCache.bVisible )
        SentientInfo->VisCache.iLastUpdateTime = 0;
    }
  }
  if ( !pPrevEnemy || pNewEnemy && (v11 = pNewEnemy->r.currentOrigin.v[0] - pPrevEnemy->r.currentOrigin.v[0], v12 = pNewEnemy->r.currentOrigin.v[1] - pPrevEnemy->r.currentOrigin.v[1], v13 = pNewEnemy->r.currentOrigin.v[2] - pPrevEnemy->r.currentOrigin.v[2], (float)((float)((float)(v12 * v12) + (float)(v11 * v11)) + (float)(v13 * v13)) > 262144.0) )
    this->m_pAI->nodeSelect.iPotentialAmbushNodeCount = 0;
  v14 = this->m_pAI;
  if ( v14->combat.provideCoveringFire && pNewEnemy && pNewEnemy->sentient )
  {
    v14->sight.lastEnemySightPosValid = 1;
    Sentient_GetEyePosition(pNewEnemy->sentient, &this->m_pAI->sight.lastEnemySightPos);
  }
  else
  {
    v14->sight.lastEnemySightPosValid = 0;
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
void AIScriptedInterface::OrientMode_Sync(AIScriptedInterface *this)
{
  ai_scripted_t *m_pAI; 
  AIScriptedInterface_vtbl *v2; 
  int v4[4]; 

  m_pAI = this->m_pAI;
  v2 = this->__vftable;
  v4[1] = LODWORD(m_pAI->ScriptOrient.vDesiredAngles.v[1]);
  *(float *)v4 = 0.0;
  *(float *)&v4[2] = 0.0;
  v2->SetDesiredBodyAngles(this, &m_pAI->CodeOrient, (const vec3_t *)v4, 0);
  this->SetBodyAngles(this, (const vec3_t *)v4);
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
  return AICommonInterface::PointNearPointSqDist(this, vPoint, &pos, 225.0);
}

/*
==============
AIScriptedInterface::ProcessSharpTurnSpeedScale
==============
*/
__int64 AIScriptedInterface::ProcessSharpTurnSpeedScale(AIScriptedInterface *this, float distanceAlongPath, vec3_t *outNextCorner, float *outTargetSpeed, bool *outUsingCachedValue)
{
  __int64 v8; 
  int v9; 
  int v10; 
  float v11; 
  float v12; 
  ai_scripted_t *m_pAI; 
  gentity_s *ent; 
  float v15; 
  float v16; 
  float v17; 
  unsigned __int8 v18; 
  const dvar_t *v19; 
  const char *v20; 
  float minAngleForScaling; 
  float v22; 
  __int128 v23; 
  float v24; 
  __int128 v28; 
  int destructor; 
  bool checkFacing; 
  float outTurnDegrees; 
  __int64 v35; 
  vec3_t originPoint; 
  int v37; 
  int v38[5]; 
  bfx::AreaHandle v39; 
  bfx::LinkHandle v40; 
  int startCorner; 
  nav_cornerdata_t ptr; 
  vec3_t v43[30]; 

  v35 = -2i64;
  Sys_ProfBeginNamedEvent(0xFF808080, "AIProcessSharpTurnSpeedScale");
  bfx::AreaHandle::AreaHandle(&v39);
  bfx::LinkHandle::LinkHandle(&v40);
  `eh vector constructor iterator'(&ptr, 0x28ui64, 0xAui64, (void (__fastcall *)(void *))nav_cornerdata_t::nav_cornerdata_t, (void (__fastcall *)(void *))nav_cornerdata_t::~nav_cornerdata_t);
  v9 = ((__int64 (__fastcall *)(AINavigator *, nav_cornerdata_t *, __int64))this->m_pAI->pNavigator->GetNextNCorners)(this->m_pAI->pNavigator, &ptr, 10i64);
  v10 = 0;
  checkFacing = 1;
  if ( distanceAlongPath <= 0.0 )
  {
    m_pAI = this->m_pAI;
    ent = m_pAI->ent;
    originPoint.v[0] = m_pAI->ent->r.currentOrigin.v[0];
    v11 = ent->r.currentOrigin.v[1];
    v12 = ent->r.currentOrigin.v[2];
  }
  else
  {
    LOBYTE(destructor) = 0;
    LOBYTE(v8) = 1;
    ((void (__fastcall *)(AINavigator *, void (__fastcall *)(AINavigator *, float, bool, nav_posAlongPathResults_t *, bool), __int64, int *, int))this->m_pAI->pNavigator->GetPosAlongPath)(this->m_pAI->pNavigator, this->m_pAI->pNavigator->GetPosAlongPath, v8, v38, destructor);
    v10 = startCorner;
    originPoint.v[0] = *(float *)v38;
    v11 = *(float *)&v38[1];
    v12 = *(float *)&v38[2];
    checkFacing = 0;
    m_pAI = this->m_pAI;
  }
  originPoint.v[2] = v12;
  originPoint.v[1] = v11;
  v15 = ptr.m_Pos.v[10 * v10];
  outNextCorner->v[0] = v15;
  v16 = ptr.m_Pos.v[10 * v10 + 1];
  outNextCorner->v[1] = v16;
  v17 = ptr.m_Pos.v[10 * v10 + 2];
  outNextCorner->v[2] = v17;
  if ( m_pAI->turnSlowdownData.timeStamp + 500 > level.time && v15 == m_pAI->turnSlowdownData.turnCorner.v[0] && v16 == m_pAI->turnSlowdownData.turnCorner.v[1] && v17 == m_pAI->turnSlowdownData.turnCorner.v[2] )
  {
    *outTargetSpeed = m_pAI->turnSlowdownData.scaledSpeed;
    *outUsingCachedValue = 1;
    v18 = 1;
    goto LABEL_19;
  }
  v18 = 0;
  if ( AIScriptedInterface::IsApproachingTightQuarters(this) )
  {
    v19 = DCONST_DVARFLT_ai_minTurnAngleForTightQuartersSpeedScaling;
    if ( !DCONST_DVARFLT_ai_minTurnAngleForTightQuartersSpeedScaling )
    {
      v20 = "ai_minTurnAngleForTightQuartersSpeedScaling";
      goto LABEL_14;
    }
  }
  else
  {
    v19 = DCONST_DVARFLT_ai_minTurnAngleForSpeedScaling;
    if ( !DCONST_DVARFLT_ai_minTurnAngleForSpeedScaling )
    {
      v20 = "ai_minTurnAngleForSpeedScaling";
LABEL_14:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v20) )
        __debugbreak();
    }
  }
  Dvar_CheckFrontendServerThread(v19);
  minAngleForScaling = v19->current.value;
  if ( AIScriptedInterface::HasUpcomingSharpTurn(this, &originPoint, &ptr, v9, v10, 80.0, minAngleForScaling, checkFacing, &outTurnDegrees) )
  {
    AIScriptedInterface::ModifySharpTurnSpeed(this, outTurnDegrees, minAngleForScaling, outTargetSpeed);
    v18 = 1;
    if ( v9 > 1 )
    {
      v22 = outNextCorner->v[0] - originPoint.v[0];
      v23 = LODWORD(outNextCorner->v[1]);
      v24 = outNextCorner->v[2] - originPoint.v[2];
      *(float *)&v23 = fsqrt((float)((float)((float)(outNextCorner->v[1] - originPoint.v[1]) * (float)(outNextCorner->v[1] - originPoint.v[1])) + (float)(v22 * v22)) + (float)(v24 * v24));
      _XMM1 = v23;
      __asm
      {
        vcmpless xmm0, xmm1, cs:__real@80000000
        vblendvps xmm1, xmm1, xmm2, xmm0
      }
      v28 = LODWORD(FLOAT_1_0);
      *(float *)&v28 = (float)(1.0 / *(float *)&_XMM1) * v22;
      _XMM2 = v28;
      *(float *)&v28 = v24 * (float)(1.0 / *(float *)&_XMM1);
      v37 = v28;
      __asm { vunpcklps xmm1, xmm2, xmm1 }
      *(double *)originPoint.v = *(double *)&_XMM1;
      LODWORD(originPoint.v[2]) = v28;
      AIScriptedInterface::ModifySpeedForTightCorner(this, outNextCorner, &originPoint, v43, outTargetSpeed);
    }
  }
LABEL_19:
  `eh vector destructor iterator'(&ptr, 0x28ui64, 0xAui64, (void (__fastcall *)(void *))nav_cornerdata_t::~nav_cornerdata_t);
  bfx::LinkHandle::~LinkHandle(&v40);
  bfx::AreaHandle::~AreaHandle(&v39);
  Sys_ProfEndNamedEvent();
  return v18;
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
  const pathnode_t *v4; 
  pathnode_t *BestCover; 
  ai_scripted_t *v6; 
  float outBestScore[4]; 
  CoverNodeMetricParams metricParams; 

  outBestScore[0] = 0.0;
  AIScriptedInterface::GetCoverNodeMetricParams(this, &metricParams);
  m_pAI = this->m_pAI;
  if ( m_pAI->sentient->pClaimedNode || (prevNodeID = m_pAI->coverInfo.prevNodeID, prevNodeID == 0xFFFF) || m_pAI->blackboard.m_ReacquireStepTime + 1000 < level.time )
  {
    BestCover = AIScriptedInterface::Cover_FindBestCover(this, scr_const.cover_retreat, 1, 1, &metricParams, outBestScore);
  }
  else
  {
    v4 = Path_ConvertIndexToNode(prevNodeID);
    BestCover = AIScriptedInterface::Cover_FindBestCover(this, scr_const.cover_retreat, v4, 0, &metricParams, outBestScore);
  }
  if ( BestCover )
  {
    v6 = this->m_pAI;
    v6->btGoals[2].node = BestCover;
    pathnode_t::GetPos(BestCover, &v6->btGoals[2].pos);
    EntHandle::setEnt(&v6->btGoals[2].hEnt, NULL);
    EntHandle::setEnt(&v6->btGoals[2].hVolume, NULL);
    LOBYTE(BestCover) = 1;
    v6->btGoals[2].bValid = 1;
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
void AIScriptedInterface::SetBTGoalRadius(AIScriptedInterface *this, ai_bt_goal_priority_t priority, float radius)
{
  this->m_pAI->btGoals[priority].radius = radius;
}

/*
==============
AIScriptedInterface::SetBTGoalVolume
==============
*/
void AIScriptedInterface::SetBTGoalVolume(AIScriptedInterface *this, ai_bt_goal_priority_t priority, gentity_s *pVolume)
{
  ai_scripted_t *m_pAI; 
  __int64 v6; 
  __int128 v7; 
  scrContext_t *v10; 

  m_pAI = this->m_pAI;
  v6 = priority;
  EntHandle::setEnt(&m_pAI->btGoals[v6].hVolume, NULL);
  m_pAI->btGoals[v6].pos.v[0] = pVolume->r.absBox.midPoint.v[0];
  m_pAI->btGoals[v6].pos.v[1] = pVolume->r.absBox.midPoint.v[1];
  m_pAI->btGoals[v6].pos.v[2] = pVolume->r.absBox.midPoint.v[2];
  this->m_pAI->nodeSelect.keepClaimedNode = 0;
  v7 = LODWORD(pVolume->r.absBox.halfSize.v[0]);
  *(float *)&v7 = fsqrt((float)(pVolume->r.absBox.halfSize.v[0] * pVolume->r.absBox.halfSize.v[0]) + (float)(pVolume->r.absBox.halfSize.v[1] * pVolume->r.absBox.halfSize.v[1])) + 15.0;
  _XMM3 = v7;
  __asm { vmaxss  xmm1, xmm3, cs:__real@42800000 }
  m_pAI->btGoals[v6].radius = *(float *)&_XMM1;
  m_pAI->btGoals[v6].height = pVolume->r.absBox.halfSize.v[2] + 36.0;
  v10 = ScriptContext_Server();
  if ( !Scr_IsTouchingInternal(v10, this->m_pAI->ent, pVolume) )
    this->ClearKeepClaimedNode(this);
  EntHandle::setEnt(&m_pAI->btGoals[v6].hVolume, pVolume);
  this->m_pAI->fixedNodeNudged = 0;
  m_pAI->btGoals[v6].bValid = 1;
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
  bool v24; 
  __int64 v25; 
  __int64 v26; 

  if ( !pScriptGoal && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 1085, ASSERT_TYPE_ASSERT, "( pScriptGoal )", (const char *)&queryFormat, "pScriptGoal") )
    __debugbreak();
  if ( !pScriptGoal->bValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 1086, ASSERT_TYPE_ASSERT, "( pScriptGoal->bValid )", (const char *)&queryFormat, "pScriptGoal->bValid") )
    __debugbreak();
  if ( EntHandle::isDefined(&pScriptGoal->hEnt) )
  {
    number = pScriptGoal->hEnt.number;
    if ( (unsigned int)(number - 1) >= 0x7FF )
    {
      LODWORD(v25) = number - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 231, ASSERT_TYPE_ASSERT, "(unsigned)( number - 1 ) < (unsigned)( ENTITYNUM_NONE )", "number - 1 doesn't index ENTITYNUM_NONE\n\t%i not in [0, %i)", v25, 2047) )
        __debugbreak();
    }
    v7 = pScriptGoal->hEnt.number;
    if ( (unsigned int)(v7 - 1) >= 0x800 )
    {
      LODWORD(v26) = 2048;
      LODWORD(v25) = v7 - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v25, v26) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    v8 = v7 - 1;
    if ( g_entities[v8].r.isInUse != g_entityIsInUse[v8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( !g_entityIsInUse[v8] )
    {
      LODWORD(v26) = pScriptGoal->hEnt.number - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 232, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( G_IsEntityInUse( number - 1 ) )", v26) )
        __debugbreak();
    }
    v9 = (__int16)pScriptGoal->hEnt.number;
    if ( (unsigned int)(v9 - 1) >= 0x800 )
    {
      LODWORD(v26) = 2048;
      LODWORD(v25) = v9 - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v25, v26) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    v10 = v9 - 1;
    if ( g_entities[v10].r.isInUse != g_entityIsInUse[v10] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( !g_entityIsInUse[v10] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 1090, ASSERT_TYPE_ASSERT, "( G_IsEntityInUse( pScriptGoal->hEnt.entnum() ) )", (const char *)&queryFormat, "G_IsEntityInUse( pScriptGoal->hEnt.entnum() )") )
      __debugbreak();
    if ( pScriptGoal->node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 1091, ASSERT_TYPE_ASSERT, "( !pScriptGoal->node )", (const char *)&queryFormat, "!pScriptGoal->node") )
      __debugbreak();
    v11 = pScriptGoal->hVolume.number;
    if ( v11 )
    {
      v12 = v11;
      v13 = v11 - 1;
      if ( v13 >= 0x800 )
      {
        LODWORD(v26) = 2048;
        LODWORD(v25) = v13;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v25, v26) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      v14 = v12 - 1;
      if ( g_entities[v14].r.isInUse != g_entityIsInUse[v14] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( !g_entityIsInUse[v14] )
      {
        LODWORD(v26) = pScriptGoal->hVolume.number - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v26) )
          __debugbreak();
      }
      if ( pScriptGoal->hVolume.number && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 1092, ASSERT_TYPE_ASSERT, "( !pScriptGoal->hVolume.isDefined() )", (const char *)&queryFormat, "!pScriptGoal->hVolume.isDefined()") )
        __debugbreak();
    }
    this->m_pAI->codeGoal.bMultiGoalPath = 0;
    this->m_pAI->codeGoal.node = NULL;
    EntHandle::setEnt(&this->m_pAI->codeGoal.hVolume, NULL);
    m_pAI = this->m_pAI;
    if ( m_pAI->codeGoalSrc != src || level.time > pScriptGoal->entUpdateInterval + m_pAI->scriptGoalEntLastUpdate )
    {
      v16 = EntHandle::ent(&pScriptGoal->hEnt);
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
    v19->codeGoal.pos.v[0] = pScriptGoal->pos.v[0];
    v19->codeGoal.pos.v[1] = pScriptGoal->pos.v[1];
    v19->codeGoal.pos.v[2] = pScriptGoal->pos.v[2];
    v19->codeGoalSrc = src;
    this->m_pAI->codeGoal.node = pScriptGoal->node;
    v20 = this->m_pAI;
    if ( EntHandle::isDefined(&pScriptGoal->hVolume) )
      v21 = EntHandle::ent(&pScriptGoal->hVolume);
    else
      v21 = NULL;
    EntHandle::setEnt(&v20->codeGoal.hVolume, v21);
    v22 = this->m_pAI;
    v23 = pScriptGoal->bMultiGoalPath && v22->scriptGoalPath.numPoints;
    v22->codeGoal.bMultiGoalPath = v23;
  }
  AICommonInterface::SetGoalRadius(&this->m_pAI->codeGoal, pScriptGoal->radius);
  v24 = AICommonInterface::Use3DPathing(this);
  AICommonInterface::SetGoalHeight(&this->m_pAI->codeGoal, pScriptGoal->height, !v24);
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
  const vec3_t *v6; 
  ai_scripted_t *m_pAI; 
  ai_scripted_t *v8; 
  const gentity_s *v9; 
  unsigned int Instance; 
  const gentity_s *v11; 
  ai_scripted_t *v12; 

  v3 = numPathPoints;
  if ( !this->m_pAI->pNavigator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 775, ASSERT_TYPE_ASSERT, "(m_pAI->pNavigator)", (const char *)&queryFormat, "m_pAI->pNavigator") )
    __debugbreak();
  if ( !pathPoints && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 776, ASSERT_TYPE_ASSERT, "(pathPoints)", (const char *)&queryFormat, "pathPoints") )
    __debugbreak();
  if ( (int)v3 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 777, ASSERT_TYPE_ASSERT, "(numPathPoints > 0)", (const char *)&queryFormat, "numPathPoints > 0") )
    __debugbreak();
  v6 = &pathPoints[v3 - 1];
  EntHandle::setEnt(&this->m_pAI->scriptGoal.hEnt, NULL);
  m_pAI = this->m_pAI;
  if ( m_pAI->scriptGoal.node || m_pAI->scriptGoal.pos.v[0] != v6->v[0] || m_pAI->scriptGoal.pos.v[1] != v6->v[1] || m_pAI->scriptGoal.pos.v[2] != v6->v[2] )
  {
    m_pAI->nodeSelect.keepClaimedNode = 0;
    v8 = this->m_pAI;
    v8->scriptGoal.pos.v[0] = v6->v[0];
    v8->scriptGoal.pos.v[1] = v6->v[1];
    v8->scriptGoal.pos.v[2] = v6->v[2];
    v8->scriptGoal.node = NULL;
    m_pAI = this->m_pAI;
  }
  if ( EntHandle::isDefined(&m_pAI->scriptGoal.hVolume) )
  {
    v9 = EntHandle::ent(&this->m_pAI->scriptGoal.hVolume);
    Instance = G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_FIRST, v9);
    v11 = EntHandle::ent(&this->m_pAI->scriptGoal.hVolume);
    if ( !PhysicsQuery_LegacyEntityContactPoint(PHYSICS_WORLD_ID_FIRST, &pathPoints[v3 - 1], Instance, v11) )
      EntHandle::setEnt(&this->m_pAI->scriptGoal.hVolume, NULL);
  }
  this->m_pAI->scriptGoal.bMultiGoalPath = 0;
  this->m_pAI->scriptGoal.bValid = 1;
  v12 = this->m_pAI;
  if ( v12->fixedNodeNudged )
  {
    v12->fixedNodeNudged = 0;
    v12 = this->m_pAI;
  }
  memcpy_0(&v12->scriptGoalPath, pathPoints, 12 * v3);
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
  ai_scripted_t *v7; 
  const gentity_s *v8; 
  unsigned int Instance; 
  const gentity_s *v10; 
  ai_scripted_t *v11; 

  EntHandle::setEnt(&this->m_pAI->scriptGoal.hEnt, NULL);
  m_pAI = this->m_pAI;
  if ( node != m_pAI->scriptGoal.node || m_pAI->scriptGoal.pos.v[0] != vGoalPos->v[0] || m_pAI->scriptGoal.pos.v[1] != vGoalPos->v[1] || m_pAI->scriptGoal.pos.v[2] != vGoalPos->v[2] )
  {
    m_pAI->nodeSelect.keepClaimedNode = 0;
    v7 = this->m_pAI;
    v7->scriptGoal.pos.v[0] = vGoalPos->v[0];
    v7->scriptGoal.pos.v[1] = vGoalPos->v[1];
    v7->scriptGoal.pos.v[2] = vGoalPos->v[2];
    v7->scriptGoal.node = node;
    m_pAI = this->m_pAI;
  }
  if ( EntHandle::isDefined(&m_pAI->scriptGoal.hVolume) )
  {
    v8 = EntHandle::ent(&this->m_pAI->scriptGoal.hVolume);
    Instance = G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_FIRST, v8);
    v10 = EntHandle::ent(&this->m_pAI->scriptGoal.hVolume);
    if ( !PhysicsQuery_LegacyEntityContactPoint(PHYSICS_WORLD_ID_FIRST, vGoalPos, Instance, v10) )
      EntHandle::setEnt(&this->m_pAI->scriptGoal.hVolume, NULL);
  }
  this->m_pAI->scriptGoal.bMultiGoalPath = 0;
  this->m_pAI->scriptGoal.bValid = 1;
  v11 = this->m_pAI;
  if ( v11->fixedNodeNudged )
    v11->fixedNodeNudged = 0;
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

__int64 __fastcall AIScriptedInterface::ShouldDoSharpTurn(AIScriptedInterface *this, double preTurnCheckDist, float postTurnCheckDist, vec3_t *outCorner, vec3_t *outNextPathPoint)
{
  AIScriptedInterface *v7; 
  const AINavigator *pNavigator; 
  int NCorners; 
  __int64 v10; 
  float v11; 
  __int128 v12; 
  __int128 v13; 
  __int128 v14; 
  float v15; 
  float v16; 
  float v19; 
  float v21; 
  __int128 v22; 
  __int128 v23; 
  float v24; 
  int v25; 
  int v26; 
  __int64 v27; 
  __int64 v28; 
  int v29; 
  char *v30; 
  float v31; 
  float v32; 
  float v33; 
  float v34; 
  __int128 v35; 
  float v36; 
  __int128 v40; 
  __int128 v41; 
  float v42; 
  float v43; 
  __int128 v44; 
  __int128 v48; 
  float v52; 
  float v53; 
  float v54; 
  bool v55; 
  float v56; 
  bool v57; 
  bool v58; 
  __int128 v59; 
  __int128 v60; 
  float v61; 
  __int128 v62; 
  __int128 v63; 
  ai_scripted_t *m_pAI; 
  float v68; 
  float v69; 
  char v70; 
  gentity_s *ent; 
  unsigned __int8 v72; 
  int v73; 
  bool v74; 
  __int128 v78; 
  __int64 v79; 
  __int64 v80; 
  _WORD *v81; 
  __int128 v82; 
  __int128 v83; 
  float v84; 
  __int128 v86; 
  __int128 v90; 
  float v94; 
  __int128 v95; 
  AINavigator2D *v97; 
  const bfx::AreaHandle *CurArea; 
  double v99; 
  float v100; 
  float v101; 
  float v102; 
  vec3_t *v103; 
  float v104; 
  __int128 v105; 
  float v106; 
  float v107; 
  float v111; 
  float v112; 
  const vec3_t *v113; 
  const char *v114; 
  float v115; 
  bool v116; 
  char v117; 
  int v118; 
  int v119; 
  float v120; 
  float v122; 
  const AINavigator *v123; 
  vec3_t outHitPoint; 
  vec3_t endPos; 
  vec3_t v0; 
  vec3_t outCurPos; 
  vec3_t v128; 
  vec3_t lineAxis; 
  vec3_t planePoint; 
  vec3_t startPos; 
  vec3_t vVelOut; 
  tmat33_t<vec3_t> axis; 
  nav_probe_results_s pOutResults; 
  bfx::PathSpec pathSpec; 
  _WORD ptr[24]; 
  char v137; 

  _XMM13 = *(_OWORD *)&preTurnCheckDist;
  v120 = *(float *)&preTurnCheckDist;
  v7 = this;
  *(_QWORD *)startPos.v = this;
  `eh vector constructor iterator'(ptr, 0x28ui64, 4ui64, (void (__fastcall *)(void *))nav_cornerdata_t::nav_cornerdata_t, (void (__fastcall *)(void *))nav_cornerdata_t::~nav_cornerdata_t);
  if ( !v7->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 2805, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  pNavigator = v7->m_pAI->pNavigator;
  v123 = pNavigator;
  if ( !pNavigator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 2808, ASSERT_TYPE_ASSERT, "(pNav)", (const char *)&queryFormat, "pNav") )
    __debugbreak();
  if ( !pNavigator->HasPath((AINavigator *)pNavigator) )
    goto LABEL_58;
  if ( pNavigator->m_TimeOfLastPathUpdate == level.time )
    goto LABEL_58;
  v122 = pNavigator->GetPathDistToGoalOrLink((AINavigator *)pNavigator);
  if ( v122 < (float)(*(float *)&preTurnCheckDist + postTurnCheckDist) || v7->m_pAI->animData.desiredSpeed < 150.0 )
    goto LABEL_58;
  NCorners = Nav_CalculateNextNCorners(pNavigator, 4, (nav_cornerdata_t *)ptr, 1000.0);
  v10 = NCorners;
  if ( NCorners < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 2826, ASSERT_TYPE_ASSERT, "( nCorners >= 0 )", (const char *)&queryFormat, "nCorners >= 0") )
    __debugbreak();
  Nav_GetPos(pNavigator, &outCurPos);
  v11 = *(float *)ptr;
  v12 = *(unsigned int *)&ptr[2];
  v14 = *(unsigned int *)&ptr[2];
  *(float *)&v14 = *(float *)&ptr[2] - outCurPos.v[1];
  v13 = v14;
  v15 = *(float *)&ptr[4];
  v16 = *(float *)&ptr[4] - outCurPos.v[2];
  *(float *)&v14 = fsqrt((float)((float)(*(float *)&v14 * *(float *)&v14) + (float)((float)(*(float *)ptr - outCurPos.v[0]) * (float)(*(float *)ptr - outCurPos.v[0]))) + (float)(v16 * v16));
  _XMM9 = v14;
  __asm { vcmpless xmm0, xmm9, cs:__real@80000000 }
  v19 = FLOAT_1_0;
  __asm { vblendvps xmm1, xmm9, xmm14, xmm0 }
  v21 = (float)(*(float *)ptr - outCurPos.v[0]) * (float)(1.0 / *(float *)&_XMM1);
  lineAxis.v[0] = v21;
  v23 = v13;
  *(float *)&v23 = *(float *)&v13 * (float)(1.0 / *(float *)&_XMM1);
  v22 = v23;
  lineAxis.v[1] = *(float *)&v23;
  v24 = (float)(*(float *)&ptr[4] - outCurPos.v[2]) * (float)(1.0 / *(float *)&_XMM1);
  lineAxis.v[2] = v24;
  if ( *(float *)&_XMM9 < 0.001 )
    goto LABEL_58;
  v128.v[0] = (float)(*(float *)ptr - outCurPos.v[0]) * (float)(1.0 / *(float *)&_XMM1);
  v128.v[1] = *(float *)&v13 * (float)(1.0 / *(float *)&_XMM1);
  v128.v[2] = v16 * (float)(1.0 / *(float *)&_XMM1);
  outHitPoint = *(vec3_t *)ptr;
  v25 = 0;
  v26 = 0;
  v118 = 0;
  v27 = (int)v10 - 1;
  *(_QWORD *)endPos.v = v27;
  if ( v27 <= 0 )
    goto LABEL_32;
  v28 = 0i64;
  v29 = 2;
  v30 = &v137;
  v31 = FLOAT_1_0;
  while ( 1 )
  {
    v32 = *((float *)v30 - 2);
    v33 = v32 - *((float *)v30 - 12);
    v35 = *((unsigned int *)v30 - 1);
    v34 = *((float *)v30 - 1) - *((float *)v30 - 11);
    v36 = *(float *)v30 - *((float *)v30 - 10);
    *(float *)&v35 = fsqrt((float)((float)(v34 * v34) + (float)(v33 * v33)) + (float)(v36 * v36));
    _XMM3 = v35;
    __asm
    {
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm1, xmm3, xmm4, xmm0
    }
    if ( (float)((float)((float)(*(float *)&v22 * (float)((float)(v31 / *(float *)&_XMM1) * v34)) + (float)(v21 * (float)((float)(v31 / *(float *)&_XMM1) * v33))) + (float)(v24 * (float)((float)(v31 / *(float *)&_XMM1) * v36))) > 0.93970001 )
      goto LABEL_27;
    if ( *(float *)&_XMM9 >= (float)(v120 - 24.0) )
      break;
    if ( v29 >= (int)v10 )
      goto LABEL_27;
    v41 = *((unsigned int *)v30 + 8);
    *(float *)&v41 = *((float *)v30 + 8) - v32;
    v40 = v41;
    v42 = *((float *)v30 + 9) - *((float *)v30 - 1);
    v43 = *((float *)v30 + 10) - *(float *)v30;
    v0.v[2] = 0.0;
    v44 = v41 ^ _xmm;
    *(float *)&v44 = fsqrt((float)(*(float *)&v44 * *(float *)&v44) + (float)(v42 * v42));
    _XMM2 = v44;
    __asm
    {
      vcmpless xmm0, xmm2, cs:__real@80000000
      vblendvps xmm1, xmm2, xmm8, xmm0
    }
    *(float *)&_XMM1 = 1.0 / *(float *)&_XMM1;
    v0.v[0] = *(float *)&_XMM1 * v42;
    v0.v[1] = *(float *)&_XMM1 * COERCE_FLOAT(v40 ^ _xmm);
    v48 = v40;
    *(float *)&v48 = fsqrt((float)((float)(*(float *)&v40 * *(float *)&v40) + (float)(v42 * v42)) + (float)(v43 * v43));
    _XMM3 = v48;
    __asm
    {
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm1, xmm3, xmm8, xmm0
    }
    v52 = (float)(1.0 / *(float *)&_XMM1) * *(float *)&v40;
    v53 = (float)(1.0 / *(float *)&_XMM1) * v42;
    v54 = (float)(1.0 / *(float *)&_XMM1) * v43;
    v55 = VecNCompareCustomEpsilon(v0.v, vec3_origin.v, 0.001, 3);
    v22 = LODWORD(lineAxis.v[1]);
    v21 = lineAxis.v[0];
    if ( v55 )
    {
      v24 = lineAxis.v[2];
LABEL_25:
      v27 = *(_QWORD *)endPos.v;
      v26 = v118;
LABEL_26:
      v31 = FLOAT_1_0;
LABEL_27:
      v60 = _XMM9;
      *(float *)&v60 = *(float *)&_XMM9 + (float)((float)((float)(*(float *)&v22 * v34) + (float)(v21 * v33)) + (float)(v24 * v36));
      _XMM9 = v60;
      v11 = (float)(v21 * *(float *)&v60) + outCurPos.v[0];
      v61 = v24 * *(float *)&v60;
      v62 = v22;
      v15 = v61 + outCurPos.v[2];
      *(float *)&v62 = (float)(*(float *)&v22 * *(float *)&_XMM9) + outCurPos.v[1];
      v12 = v62;
      outHitPoint.v[2] = v61 + outCurPos.v[2];
      outHitPoint.v[1] = *(float *)&v62;
      outHitPoint.v[0] = v11;
      goto LABEL_28;
    }
    v56 = (float)(lineAxis.v[1] * v53) + (float)(lineAxis.v[0] * v52);
    v24 = lineAxis.v[2];
    if ( (float)(v56 + (float)(lineAxis.v[2] * v54)) >= 0.866 )
      goto LABEL_25;
    v57 = IntersectLinePlane((const vec3_t *)ptr, &lineAxis, (const vec3_t *)&ptr[20 * v29], &v0, &outHitPoint);
    v24 = lineAxis.v[2];
    v22 = LODWORD(lineAxis.v[1]);
    v21 = lineAxis.v[0];
    v26 = v118;
    v58 = !v57;
    v27 = *(_QWORD *)endPos.v;
    if ( v58 )
      goto LABEL_26;
    v11 = outHitPoint.v[0];
    v12 = LODWORD(outHitPoint.v[1]);
    v59 = LODWORD(outCurPos.v[1]);
    v15 = outHitPoint.v[2];
    *(float *)&v59 = fsqrt((float)((float)((float)(outCurPos.v[1] - outHitPoint.v[1]) * (float)(outCurPos.v[1] - outHitPoint.v[1])) + (float)((float)(outCurPos.v[0] - outHitPoint.v[0]) * (float)(outCurPos.v[0] - outHitPoint.v[0]))) + (float)((float)(outCurPos.v[2] - outHitPoint.v[2]) * (float)(outCurPos.v[2] - outHitPoint.v[2])));
    _XMM9 = v59;
    v31 = FLOAT_1_0;
LABEL_28:
    v118 = ++v26;
    ++v29;
    ++v28;
    v30 += 40;
    if ( v28 >= v27 )
    {
      v19 = FLOAT_1_0;
      goto LABEL_31;
    }
  }
  v63 = v12;
  *(float *)&_XMM9 = (float)((float)(*(float *)&v22 * (float)(*(float *)&v12 - outCurPos.v[1])) + (float)(v21 * (float)(v11 - outCurPos.v[0]))) + (float)(v24 * (float)(v15 - outCurPos.v[2]));
  *(float *)&v63 = fsqrt((float)((float)((float)(*(float *)&v12 - outCurPos.v[1]) * (float)(*(float *)&v12 - outCurPos.v[1])) + (float)((float)(v11 - outCurPos.v[0]) * (float)(v11 - outCurPos.v[0]))) + (float)((float)(v15 - outCurPos.v[2]) * (float)(v15 - outCurPos.v[2])));
  _XMM3 = v63;
  __asm { vcmpless xmm0, xmm3, cs:__real@80000000 }
  v19 = FLOAT_1_0;
  __asm { vblendvps xmm1, xmm3, xmm14, xmm0 }
  v128.v[0] = (float)(v11 - outCurPos.v[0]) * (float)(1.0 / *(float *)&_XMM1);
  v128.v[1] = (float)(*(float *)&v12 - outCurPos.v[1]) * (float)(1.0 / *(float *)&_XMM1);
  v128.v[2] = (float)(1.0 / *(float *)&_XMM1) * (float)(v15 - outCurPos.v[2]);
LABEL_31:
  v7 = *(AIScriptedInterface **)startPos.v;
  _XMM13 = LODWORD(v120);
LABEL_32:
  TurnDebug_DrawSphere(&outHitPoint, 2.0, 0.0, &colorOrangeHeat, 10);
  if ( !v7->m_pAI->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 2905, ASSERT_TYPE_ASSERT, "(m_pAI->ent)", (const char *)&queryFormat, "m_pAI->ent") )
    __debugbreak();
  AnglesToAxis(&v7->m_pAI->ent->r.currentAngles, &axis);
  m_pAI = v7->m_pAI;
  if ( !m_pAI->orientation.faceMotion || (v68 = axis.m[0].v[1], v69 = axis.m[0].v[2], (float)((float)((float)(axis.m[0].v[1] * v128.v[1]) + (float)(axis.m[0].v[0] * v128.v[0])) + (float)(axis.m[0].v[2] * v128.v[2])) >= 0.5) )
  {
    v70 = 0;
    v117 = 0;
    goto LABEL_40;
  }
  v70 = 1;
  v117 = 1;
  if ( *(float *)&_XMM9 <= *(float *)&_XMM13 )
  {
LABEL_40:
    if ( !*(_DWORD *)&ptr[20 * v118 + 6] && !LOBYTE(ptr[20 * v118 + 16]) )
    {
      v73 = v118 + 1;
      v119 = v73;
      if ( v73 < (int)v10 )
      {
        if ( !m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 2919, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
          __debugbreak();
        Sentient_GetVelocity(v7->m_pAI->sentient, &vVelOut);
        v74 = v70 || (float)((float)((float)(vVelOut.v[0] * vVelOut.v[0]) + (float)(vVelOut.v[1] * vVelOut.v[1])) + (float)(vVelOut.v[2] * vVelOut.v[2])) < v19;
        v116 = v74;
        _XMM0 = v74;
        __asm
        {
          vpcmpeqd xmm2, xmm0, xmm1
          vblendvps xmm0, xmm13, xmm0, xmm2
        }
        if ( *(float *)&_XMM9 < (float)(*(float *)&_XMM13 + 2.0) && *(float *)&_XMM9 > (float)(*(float *)&_XMM13 - *(float *)&_XMM0) )
        {
          v78 = 0i64;
          if ( v74 )
            v128 = axis.m[0];
          v79 = v73;
          v80 = v79;
          if ( v79 < v10 )
          {
            v81 = &ptr[20 * v79 + 4];
            while ( 1 )
            {
              planePoint = *(vec3_t *)(v81 - 4);
              v83 = LODWORD(planePoint.v[0]);
              *(float *)&v83 = planePoint.v[0] - outHitPoint.v[0];
              v82 = v83;
              v84 = planePoint.v[1] - outHitPoint.v[1];
              v86 = LODWORD(planePoint.v[2]);
              *(float *)&v86 = planePoint.v[2] - outHitPoint.v[2];
              _XMM6 = v86;
              _XMM0 = (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)startPos.v + 24i64))(*(_QWORD *)startPos.v);
              __asm
              {
                vpcmpeqd xmm2, xmm0, xmm1
                vblendvps xmm4, xmm6, xmm0, xmm2
              }
              v90 = v82;
              *(float *)&v90 = fsqrt((float)((float)(*(float *)&v82 * *(float *)&v82) + (float)(v84 * v84)) + (float)(*(float *)&_XMM4 * *(float *)&_XMM4));
              _XMM3 = v90;
              __asm
              {
                vcmpless xmm0, xmm3, cs:__real@80000000
                vblendvps xmm1, xmm3, xmm14, xmm0
              }
              v94 = (float)(v19 / *(float *)&_XMM1) * *(float *)&_XMM4;
              v95 = v78;
              *(float *)&v95 = *(float *)&v78 + *(float *)&_XMM3;
              v78 = v95;
              if ( *(float *)&v95 >= 15.0 )
                break;
              LODWORD(v79) = v79 + 1;
              ++v80;
              v81 += 20;
              if ( v80 >= v10 )
                goto LABEL_58;
            }
            if ( (!LOBYTE(ptr[20 * (int)v79 + 16]) && !*(_DWORD *)&ptr[20 * (int)v79 + 6] && (float)(v122 - *(float *)&_XMM9) > 128.0 || *(float *)&v95 > postTurnCheckDist) && (float)((float)((float)((float)(*(float *)&v82 * (float)(v19 / *(float *)&_XMM1)) * v128.v[0]) + (float)((float)(v84 * (float)(v19 / *(float *)&_XMM1)) * v128.v[1])) + (float)(v128.v[2] * v94)) < 0.5 )
            {
              if ( !v116 || !v117 && *(float *)&_XMM9 > 12.0 )
              {
                if ( (_DWORD)v79 == v119 )
                  goto LABEL_99;
                v105 = *(unsigned int *)&ptr[20 * (int)v79 + 2];
                v104 = *(float *)&ptr[20 * (int)v79 + 2] - *(float *)&pathSpec.m_penaltyTable.m_perFlagPenalties[40 * (int)v79 + 4];
                v106 = *(float *)&pathSpec.m_penaltyTable.m_perFlagPenalties[40 * (int)v79] - *(float *)&ptr[20 * (int)v79];
                v107 = 0.0;
                v0.v[2] = 0.0;
                *(float *)&v105 = fsqrt((float)(v104 * v104) + (float)(v106 * v106));
                _XMM2 = v105;
                __asm
                {
                  vcmpless xmm0, xmm2, cs:__real@80000000
                  vblendvps xmm1, xmm2, xmm14, xmm0
                }
                v111 = v104 * (float)(v19 / *(float *)&_XMM1);
                v0.v[0] = v111;
                v112 = v106 * (float)(v19 / *(float *)&_XMM1);
                v0.v[1] = v112;
                if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v112 * v112) + (float)(v111 * v111)) - v19) & _xmm) >= 0.0020000001 )
                {
                  if ( (int)v10 > 0 )
                  {
                    v113 = (const vec3_t *)ptr;
                    do
                    {
                      v114 = vtos(v113);
                      Com_PrintError(18, "corner %d: %s\n", (unsigned int)v25++, v114);
                      v113 = (const vec3_t *)((char *)v113 + 40);
                    }
                    while ( v25 < (int)v10 );
                    v107 = v0.v[2];
                    v112 = v0.v[1];
                    v111 = v0.v[0];
                  }
                  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(v112 * v112) + (float)(v111 * v111)) + (float)(v107 * v107)) - v19) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 3022, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( planeNormal ) )", "planeNormal not normalized: ( %.4f, %.4f, %.4f ).  See above for more info.", v111, v112, v107) )
                    __debugbreak();
                }
                if ( VecNCompareCustomEpsilon(v0.v, vec3_origin.v, 0.001, 3) || !IntersectLinePlane(&outHitPoint, &v128, &planePoint, &v0, outCorner) )
                {
LABEL_99:
                  outCorner->v[0] = outHitPoint.v[0];
                  v115 = outHitPoint.v[1];
                  outCorner->v[2] = outHitPoint.v[2];
                  outCorner->v[1] = v115;
                }
                *outNextPathPoint = planePoint;
                goto LABEL_101;
              }
              endPos.v[0] = (float)(v128.v[0] * *(float *)&_XMM13) + outCurPos.v[0];
              endPos.v[1] = (float)(v128.v[1] * *(float *)&_XMM13) + outCurPos.v[1];
              endPos.v[2] = (float)(v128.v[2] * *(float *)&_XMM13) + outCurPos.v[2];
              v0.v[0] = (float)(v128.v[0] * (float)(*(float *)&_XMM13 * 0.60000002)) + outCurPos.v[0];
              v0.v[1] = (float)(v128.v[1] * (float)(*(float *)&_XMM13 * 0.60000002)) + outCurPos.v[1];
              v0.v[2] = (float)(v128.v[2] * (float)(*(float *)&_XMM13 * 0.60000002)) + outCurPos.v[2];
              v97 = (AINavigator2D *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(*(_QWORD *)startPos.v + 16i64) + 392i64) + 592i64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)startPos.v + 16i64) + 392i64));
              if ( v97 )
              {
                bfx::AreaHandle::AreaHandle(&pOutResults.m_hEndArea);
                pathSpec = *AINavigator2D::GetPathSpec(v97);
                v97->GetCurPos(v97, &startPos);
                CurArea = AINavigator2D::GetCurArea(v97);
                if ( Nav_Trace(&startPos, CurArea, &endPos, &pathSpec, &pOutResults) )
                {
                  endPos.v[0] = (float)((float)(pOutResults.m_DistTraveled - 0.1) * v128.v[0]) + outCurPos.v[0];
                  endPos.v[1] = (float)((float)(pOutResults.m_DistTraveled - 0.1) * v128.v[1]) + outCurPos.v[1];
                  endPos.v[2] = (float)((float)(pOutResults.m_DistTraveled - 0.1) * v128.v[2]) + outCurPos.v[2];
                  v0.v[0] = (float)((float)(pOutResults.m_DistTraveled * 0.60000002) * v128.v[0]) + outCurPos.v[0];
                  v0.v[1] = (float)((float)(pOutResults.m_DistTraveled * 0.60000002) * v128.v[1]) + outCurPos.v[1];
                  v0.v[2] = (float)((float)(pOutResults.m_DistTraveled * 0.60000002) * v128.v[2]) + outCurPos.v[2];
                }
                if ( Nav_Trace(v97->m_pSpace, &endPos, &planePoint, v97->m_Layer, &pathSpec, &pOutResults) && pOutResults.m_DistTraveled < postTurnCheckDist )
                {
                  if ( Nav_Trace(v97->m_pSpace, &v0, &planePoint, v97->m_Layer, &pathSpec, &pOutResults) && pOutResults.m_DistTraveled < postTurnCheckDist )
                  {
                    v99 = *(double *)outHitPoint.v;
                    v100 = outHitPoint.v[2];
                  }
                  else
                  {
                    v99 = *(double *)v0.v;
                    v100 = v0.v[2];
                  }
                  endPos.v[2] = v100;
                  *(double *)endPos.v = v99;
                }
                bfx::AreaHandle::~AreaHandle(&pOutResults.m_hEndArea);
              }
              if ( fsqrt((float)((float)((float)(outHitPoint.v[1] - endPos.v[1]) * (float)(outHitPoint.v[1] - endPos.v[1])) + (float)((float)(outHitPoint.v[0] - endPos.v[0]) * (float)(outHitPoint.v[0] - endPos.v[0]))) + (float)((float)(outHitPoint.v[2] - endPos.v[2]) * (float)(outHitPoint.v[2] - endPos.v[2]))) <= (float)(*(float *)&_XMM13 + 2.0) || v123->IsStraightLineReachable((AINavigator *)v123, &endPos, &planePoint) )
              {
                if ( (int)v79 + 1 < (int)v10 )
                {
                  v103 = (vec3_t *)&ptr[20 * (int)v79 + 20];
                  if ( v123->IsStraightLineReachable((AINavigator *)v123, &v0, v103) )
                  {
                    *outNextPathPoint = *v103;
LABEL_87:
                    *outCorner = endPos;
LABEL_101:
                    TurnDebug_DrawSphere(outCorner, 2.0, 4.0, &colorGreen, 10);
                    TurnDebug_DrawSphere(outNextPathPoint, 2.0, 0.0, &colorGreen, 10);
                    v72 = 1;
                    goto LABEL_59;
                  }
                }
                outNextPathPoint->v[0] = planePoint.v[0];
                v101 = planePoint.v[1];
                v102 = planePoint.v[2];
              }
              else
              {
                outNextPathPoint->v[0] = outHitPoint.v[0];
                v101 = outHitPoint.v[1];
                v102 = outHitPoint.v[2];
              }
              outNextPathPoint->v[2] = v102;
              outNextPathPoint->v[1] = v101;
              goto LABEL_87;
            }
          }
        }
      }
    }
LABEL_58:
    v72 = 0;
    goto LABEL_59;
  }
  ent = m_pAI->ent;
  outCorner->v[0] = (float)(axis.m[0].v[0] * *(float *)&_XMM13) + m_pAI->ent->r.currentOrigin.v[0];
  outCorner->v[1] = (float)(v68 * *(float *)&_XMM13) + ent->r.currentOrigin.v[1];
  outCorner->v[2] = (float)(v69 * *(float *)&_XMM13) + ent->r.currentOrigin.v[2];
  v7->m_pAI->pNavigator->TraceFromCurPos(v7->m_pAI->pNavigator, outCorner, outCorner);
  *outNextPathPoint = outHitPoint;
  v72 = 1;
LABEL_59:
  `eh vector destructor iterator'(ptr, 0x28ui64, 4ui64, (void (__fastcall *)(void *))nav_cornerdata_t::~nav_cornerdata_t);
  return v72;
}

/*
==============
AIScriptedInterface::ShouldShoot
==============
*/
char AIScriptedInterface::ShouldShoot(AIScriptedInterface *this)
{
  const dvar_t *v2; 
  const char *v3; 
  ai_scripted_t *v4; 
  gentity_s *ent; 
  ai_scripted_t *m_pAI; 
  float desiredSpeed; 
  scr_string_t AnimsetName; 
  scr_string_t v10; 
  double AnimSpeedBetweenThresholdEntries; 
  vec3_t xyz; 
  vec3_t goalPos; 

  if ( !AIScriptedInterface::MayShoot(this) )
    return 0;
  if ( this->m_pAI->blackboard.m_bPartialGesturePlaying )
  {
    v2 = DVARBOOL_ai_whyaminotshooting;
    if ( !DVARBOOL_ai_whyaminotshooting && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_whyaminotshooting") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v2);
    if ( !v2->current.enabled )
      return 0;
    v3 = "gesturing";
    goto LABEL_8;
  }
  if ( !AIScriptedInterface::GetPathGoalPos(this, &goalPos) )
    return 1;
  m_pAI = this->m_pAI;
  if ( (float)((float)((float)((float)(goalPos.v[1] - m_pAI->ent->r.currentOrigin.v[1]) * (float)(goalPos.v[1] - m_pAI->ent->r.currentOrigin.v[1])) + (float)((float)(goalPos.v[0] - m_pAI->ent->r.currentOrigin.v[0]) * (float)(goalPos.v[0] - m_pAI->ent->r.currentOrigin.v[0]))) + (float)((float)(goalPos.v[2] - m_pAI->ent->r.currentOrigin.v[2]) * (float)(goalPos.v[2] - m_pAI->ent->r.currentOrigin.v[2]))) <= 16.0 )
    return 1;
  if ( !m_pAI->bRunNGunDisableAim )
  {
    if ( m_pAI->Physics.stairsState )
      return 1;
    desiredSpeed = m_pAI->animData.desiredSpeed;
    if ( !m_pAI->overrideArchetypes[0] )
    {
      AnimsetName = BG_AnimationState_GetAnimsetName(&m_pAI->ent->s);
      AIScriptedInterface::SetBaseOverrideArchetype(this, AnimsetName);
      m_pAI = this->m_pAI;
    }
    v10 = m_pAI->overrideArchetypes[0];
    if ( HasAnimSpeedThresholdEntryForArchetype(v10, scr_const.fast) && HasAnimSpeedThresholdEntryForArchetype(v10, scr_const.jog) )
    {
      AnimSpeedBetweenThresholdEntries = GetAnimSpeedBetweenThresholdEntries(v10, scr_const.fast, scr_const.jog, 0.40000001);
      if ( desiredSpeed < *(float *)&AnimSpeedBetweenThresholdEntries )
        return 1;
    }
    if ( v10 == scr_const.juggernaut || v10 == scr_const.juggernaut_cp || v10 == scr_const.juggernaut_lw )
    {
      if ( desiredSpeed < 60.0 )
        return 1;
    }
    else if ( this->m_pAI->bRunNGun )
    {
      return 1;
    }
  }
  if ( !Dvar_GetBool_Internal_DebugName(DVARBOOL_ai_whyaminotshooting, "ai_whyaminotshooting") )
    return 0;
  v3 = "moving fast";
LABEL_8:
  v4 = this->m_pAI;
  ent = v4->ent;
  *(_QWORD *)xyz.v = *(_QWORD *)v4->ent->r.currentOrigin.v;
  xyz.v[2] = ent->r.currentOrigin.v[2] - 12.0;
  G_Main_AddDebugString(&xyz, &colorLtRed, 0.80000001, v3);
  return 0;
}

/*
==============
AIScriptedInterface::ShouldSlowDueToFacing
==============
*/
char AIScriptedInterface::ShouldSlowDueToFacing(AIScriptedInterface *this, const vec3_t *dirToCorner, const float distanceToCornerSq, float *outTurnDegrees)
{
  ai_scripted_t *m_pAI; 
  float v7; 
  float v8; 
  __int128 v9; 
  __int128 v10; 
  float v14; 
  vec3_t forward; 

  if ( distanceToCornerSq <= 400.0 )
    return 0;
  m_pAI = this->m_pAI;
  if ( m_pAI->orientation.faceMotion )
  {
    AngleVectors(&m_pAI->ent->r.currentAngles, &forward, NULL, NULL);
    v7 = forward.v[1];
    v8 = forward.v[0];
  }
  else
  {
    v9 = LODWORD(m_pAI->Physics.vVelocity.v[0]);
    v10 = v9;
    *(float *)&v10 = fsqrt((float)(*(float *)&v9 * *(float *)&v9) + (float)(m_pAI->Physics.vVelocity.v[1] * m_pAI->Physics.vVelocity.v[1]));
    _XMM2 = v10;
    __asm
    {
      vcmpless xmm0, xmm2, cs:__real@80000000
      vblendvps xmm0, xmm2, xmm1, xmm0
    }
    *(float *)&v10 = 1.0 / *(float *)&_XMM0;
    v8 = *(float *)&v9 * (float)(1.0 / *(float *)&_XMM0);
    forward.v[0] = v8;
    v7 = *(float *)&v10 * m_pAI->Physics.vVelocity.v[1];
  }
  v14 = (float)(v7 * dirToCorner->v[1]) + (float)(v8 * dirToCorner->v[0]);
  if ( v14 >= 0.70700002 || v14 <= -0.93900001 )
    return 0;
  *outTurnDegrees = acosf_0(v14) * 57.295776;
  return 1;
}

/*
==============
AIScriptedInterface::SightTracePassed
==============
*/
_BOOL8 AIScriptedInterface::SightTracePassed(AIScriptedInterface *this, const vec3_t *startPos, const vec3_t *endPos, int ignoreEnt1, int ignoreEnt2, bool bIgnoreCharacters, bool bIgnoreFoliage, bool bIgnoreFx)
{
  int v10; 
  int contentmask; 
  bool v12; 
  double ClientVisibility; 
  float v14; 
  double FxVisibility; 
  _BOOL8 result; 

  v10 = 8394755;
  if ( !bIgnoreCharacters )
    v10 = 41965571;
  contentmask = v10 & 0xFFFFFFFD;
  if ( !bIgnoreFoliage )
    contentmask = v10;
  v12 = G_Main_SightTrace(startPos, endPos, ignoreEnt1, ignoreEnt2, contentmask);
  if ( !v12 || bIgnoreFx || (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    return v12;
  if ( SV_IsDemoPlaying() )
  {
    FxVisibility = SV_DemoSP_GetFxVisibility();
    v14 = *(float *)&FxVisibility;
  }
  else
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_system_api_inline.h", 118, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::CLIENT_SERVER_SHARED_MEMORY ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::CLIENT_SERVER_SHARED_MEMORY )") )
      __debugbreak();
    ClientVisibility = FX_GetClientVisibility(fx_serverVisClient, startPos, endPos);
    v14 = *(float *)&ClientVisibility;
    SV_DemoSP_RecordFxVisibility(*(float *)&ClientVisibility);
  }
  result = v12;
  if ( v14 < 0.2 )
    return 0i64;
  return result;
}

/*
==============
AIScriptedInterface::SlowOnPathEnd
==============
*/

char __fastcall AIScriptedInterface::SlowOnPathEnd(AIScriptedInterface *this, vec3_t *outWishDelta, double inTargetSpeed, float deceleration, float *outTargetSpeed, bool *bOutUseWishDelta)
{
  double PathDistToGoal; 
  ai_scripted_t *m_pAI; 
  float v12; 
  __int128 v13; 
  float v16; 
  gentity_s *ent; 
  float v18; 
  ai_scripted_t *v19; 
  float v20; 
  double FrameDurationInSeconds; 
  unsigned int v22; 
  __m128 v23; 
  bool v26; 
  ai_scripted_t *v27; 
  float v28; 
  float v29; 
  float v30; 
  ai_scripted_t *v32; 
  float v33; 
  float v34; 
  float v35; 
  bool v36; 
  float v37; 
  int FrameDuration; 
  ai_scripted_t *v39; 
  float v40; 
  vec3_t vFinalGoal; 

  _XMM7 = *(_OWORD *)&inTargetSpeed;
  if ( deceleration <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 2167, ASSERT_TYPE_ASSERT, "(deceleration > 0.f)", (const char *)&queryFormat, "deceleration > 0.f") )
    __debugbreak();
  *bOutUseWishDelta = 0;
  PathDistToGoal = Nav_GetPathDistToGoal(this->m_pAI->pNavigator);
  m_pAI = this->m_pAI;
  v12 = *(float *)&PathDistToGoal;
  if ( !m_pAI->speedScaleMode[0] )
  {
    if ( !m_pAI->iPathEndTime )
    {
      if ( *(float *)&PathDistToGoal != 0.0 && !Nav_IsStraightLineToGoal(m_pAI->pNavigator) )
        return 0;
      v26 = AICommonInterface::Use3DPathing(this);
      v27 = this->m_pAI;
      v28 = v27->Physics.vVelocity.v[0];
      if ( v26 )
      {
        v29 = (float)(v28 * v28) + (float)(v27->Physics.vVelocity.v[1] * v27->Physics.vVelocity.v[1]);
        v30 = v27->Physics.vVelocity.v[2] * v27->Physics.vVelocity.v[2];
      }
      else
      {
        v30 = v27->Physics.vVelocity.v[1] * v27->Physics.vVelocity.v[1];
        v29 = v28 * v28;
      }
      if ( (float)((float)(v29 + v30) * 0.0625) < (float)(v12 * v12) )
        return 0;
      v27->iPathEndTime = level.time + 500;
    }
    AICommonInterface::GetPathFinalGoal(this, &vFinalGoal);
    v32 = this->m_pAI;
    v33 = vFinalGoal.v[0] - v32->ent->r.currentOrigin.v[0];
    v34 = vFinalGoal.v[1] - v32->ent->r.currentOrigin.v[1];
    v35 = vFinalGoal.v[2] - v32->ent->r.currentOrigin.v[2];
    if ( v32->iPathEndTime - level.time > 0 )
    {
      if ( v32->Physics.bHasGroundPlane )
        v37 = 1.0 / v32->Physics.groundplaneSlope;
      else
        v37 = FLOAT_1_0;
      FrameDuration = G_Level_GetFrameDuration();
      v39 = this->m_pAI;
      v40 = (float)((float)(2.0 - (float)((float)FrameDuration / (float)(v39->iPathEndTime - level.time))) * (float)((float)FrameDuration / (float)(v39->iPathEndTime - level.time))) * v37;
      outWishDelta->v[0] = v33 * v40;
      outWishDelta->v[2] = v35 * v40;
      outWishDelta->v[1] = v34 * v40;
      v39->moveMode = 1;
    }
    else
    {
      this->ClearPath(this);
      this->m_pAI->iPathEndTime = 0;
      if ( AICommonInterface::Use3DPathing(this) )
        v36 = (float)((float)(v35 * v35) + (float)((float)(v33 * v33) + (float)(v34 * v34))) < 256.0;
      else
        v36 = (float)((float)(v33 * v33) + (float)(v34 * v34)) < 256.0;
      if ( !v36 )
        return 0;
      outWishDelta->v[0] = v33;
      outWishDelta->v[1] = v34;
      outWishDelta->v[2] = v35;
    }
    *bOutUseWishDelta = 1;
    return 1;
  }
  if ( *(float *)&PathDistToGoal >= 150.0 )
    return 0;
  v13 = LODWORD(m_pAI->Physics.vWishDelta.v[0]);
  *(float *)&v13 = fsqrt((float)((float)(m_pAI->Physics.vWishDelta.v[0] * m_pAI->Physics.vWishDelta.v[0]) + (float)(m_pAI->Physics.vWishDelta.v[1] * m_pAI->Physics.vWishDelta.v[1])) + (float)(m_pAI->Physics.vWishDelta.v[2] * m_pAI->Physics.vWishDelta.v[2]));
  _XMM1 = v13;
  __asm { vmaxss  xmm3, xmm1, cs:__real@40800000 }
  if ( *(float *)&PathDistToGoal > *(float *)&_XMM3 )
  {
    if ( m_pAI->iPathEndTime )
    {
      m_pAI->iPathEndTime = level.time + 500;
      goto LABEL_18;
    }
    if ( m_pAI->pNavigator->IsStraightLineToGoal(m_pAI->pNavigator) )
    {
      this->m_pAI->pNavigator->GetRequestedGoalPos(this->m_pAI->pNavigator, &vFinalGoal);
      v19 = this->m_pAI;
      v20 = fsqrt((float)((float)((float)(v19->ent->r.currentOrigin.v[1] - vFinalGoal.v[1]) * (float)(v19->ent->r.currentOrigin.v[1] - vFinalGoal.v[1])) + (float)((float)(v19->ent->r.currentOrigin.v[0] - vFinalGoal.v[0]) * (float)(v19->ent->r.currentOrigin.v[0] - vFinalGoal.v[0]))) + (float)((float)(v19->ent->r.currentOrigin.v[2] - vFinalGoal.v[2]) * (float)(v19->ent->r.currentOrigin.v[2] - vFinalGoal.v[2])));
      v12 = v20;
      if ( v19->sentient->pClaimedNode )
      {
        if ( !AICommonInterface::GetTargetEntity(this) || AIScriptedInterface::Cover_IsValidAgainstEnemy(this, this->m_pAI->sentient->pClaimedNode, 1) )
          v12 = v20 + -6.0;
      }
    }
    if ( !this->m_pAI->orientation.faceMotion )
      __asm { vminss  xmm7, xmm7, cs:__real@42f00000 }
    FrameDurationInSeconds = G_Level_GetFrameDurationInSeconds();
    v22 = (int)(float)((float)((float)(*(float *)&_XMM7 - 30.0) / deceleration) + 0.69999999);
    v23 = _mm_cvtepi32_ps((__m128i)v22);
    v23.m128_f32[0] = (float)((float)((float)((float)(v23.m128_f32[0] + 1.5) * *(float *)&_XMM7) + 15.0) * *(float *)&FrameDurationInSeconds) - (float)((float)((float)((float)(v23.m128_f32[0] * deceleration) * _mm_cvtepi32_ps((__m128i)(v22 - 1)).m128_f32[0]) * 0.5) * *(float *)&FrameDurationInSeconds);
    _XMM1 = v23;
    __asm { vmaxss  xmm2, xmm1, cs:__real@41400000 }
    if ( v12 < *(float *)&_XMM2 )
    {
      this->m_pAI->iPathEndTime = level.time + 500;
LABEL_18:
      this->m_pAI->moveMode = 1;
      *outTargetSpeed = 30.0;
      return 1;
    }
    return 0;
  }
  AICommonInterface::GetPathFinalGoal(this, &vFinalGoal);
  v16 = vFinalGoal.v[1];
  ent = this->m_pAI->ent;
  outWishDelta->v[0] = vFinalGoal.v[0] - ent->r.currentOrigin.v[0];
  v18 = vFinalGoal.v[2];
  outWishDelta->v[1] = v16 - ent->r.currentOrigin.v[1];
  outWishDelta->v[2] = v18 - ent->r.currentOrigin.v[2];
  *outTargetSpeed = 30.0;
  *bOutUseWishDelta = 1;
  this->ClearPath(this);
  return 1;
}

/*
==============
TurnDebug_DrawSphere
==============
*/
void TurnDebug_DrawSphere(const vec3_t *pos, float radius, float zOffset, const vec4_t *color, int duration)
{
  const dvar_t *v5; 
  float v9; 
  vec3_t center; 

  v5 = DVARBOOL_ai_debugTurns;
  if ( !DVARBOOL_ai_debugTurns && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugTurns") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( v5->current.enabled )
  {
    v9 = pos->v[1];
    center.v[0] = pos->v[0];
    center.v[2] = zOffset + pos->v[2];
    center.v[1] = v9;
    G_DebugSphere(&center, radius, color, 0, duration);
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
      XAnimSetFloatGameParameterByName(ServerDObjForEnt, scr_const.aim_yaw, this->m_pAI->aimAngles.v[1]);
      XAnimSetFloatGameParameterByName(v3, scr_const.aim_pitch, this->m_pAI->aimAngles.v[0]);
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
  Ai_Asm *v6; 
  const ASM_Instance *InstanceIfExists; 
  const ASM_Instance *v8; 
  ai_scripted_t *v9; 
  __int128 v10; 
  float v11; 
  ai_scripted_t *v12; 
  __int128 v14; 
  ai_scripted_t *v18; 
  float v21; 
  float aimYaw; 
  double v23; 
  double FrameDurationInSeconds; 
  DObj *ServerDObjForEnt; 

  Sys_ProfBeginNamedEvent(0xFF808080, "AI_UpdateAnimGameParams");
  this->UpdateClientOnlyAnimGameParams(this);
  G_AIAnim_UpdateFieldByParam(this->m_pAI->ent, AGENT_ANIM_PARAM_GUNADDITIVEINDEX);
  G_AIAnim_UpdateFieldByParam(this->m_pAI->ent, AGENT_ANIM_PARAM_LEANYAW);
  m_pAI = this->m_pAI;
  aimActive = m_pAI->animData.aimActive;
  if ( m_pAI->animData.gunAdditiveIndex != 1 )
  {
    number = m_pAI->ent->s.number;
    v6 = Ai_Asm::Singleton();
    InstanceIfExists = Ai_Asm::GetInstanceIfExists(v6, NULL, number);
    v8 = InstanceIfExists;
    if ( InstanceIfExists && (Common_Asm::Utils::CurrentStateHasFlag(InstanceIfExists, (const scr_string_t)scr_const.aim) || Common_Asm::Utils::CurrentStateHasFlag(v8, (const scr_string_t)scr_const.notetrackaim) && Common_Asm::Utils::EventFired(v8, (const scr_string_t)scr_const.start_aim)) )
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
  v9 = this->m_pAI;
  if ( aimActive != v9->animData.aimActive )
  {
    G_AIAnim_UpdateFieldByParam(v9->ent, AGENT_ANIM_PARAM_AIMACTIVE);
    v9 = this->m_pAI;
  }
  if ( v9->animData.aimActive )
  {
    if ( v9->aimYawSpeed <= 0.0 )
    {
      v9->animData.aimYaw = v9->aimAngles.v[1];
    }
    else
    {
      if ( !aimActive )
      {
        v9->animData.aimYaw = 0.0;
        this->m_pAI->prevAimYaw = 0.0;
        v9 = this->m_pAI;
      }
      v10 = LODWORD(v9->aimAngles.v[1]);
      v11 = *(float *)&v10 - v9->prevAimYaw;
      v12 = this->m_pAI;
      *(double *)&v10 = G_Level_GetFrameDurationInSeconds();
      v14 = v10;
      *(float *)&v14 = *(float *)&v10 * v12->aimYawSpeed;
      _XMM1 = v14;
      if ( v11 <= 0.0 )
      {
        _XMM2 = v14 ^ _xmm;
        __asm { vmaxss  xmm3, xmm2, xmm6 }
        v12->animData.aimYaw = *(float *)&_XMM3 + v12->animData.aimYaw;
      }
      else
      {
        __asm { vminss  xmm2, xmm1, xmm6 }
        v12->animData.aimYaw = *(float *)&_XMM2 + v12->animData.aimYaw;
      }
    }
    this->m_pAI->animData.aimPitch = this->m_pAI->aimAngles.v[0];
    v18 = this->m_pAI;
    _XMM8 = 0i64;
    __asm { vroundss xmm0, xmm8, xmm2, 1 }
    v21 = (float)((float)((float)(v18->ent->r.currentAngles.v[1] - v18->prevYaw) * 0.0027777778) - *(float *)&_XMM0) * 360.0;
    aimYaw = v18->animData.aimYaw;
    if ( v18->aimYawSpeed <= 0.0 )
    {
      __asm { vroundss xmm3, xmm8, xmm2, 1 }
      v18->animData.aimYaw = (float)((float)((float)(aimYaw - v21) * 0.0027777778) - *(float *)&_XMM3) * 360.0;
    }
    else
    {
      v23 = I_fclamp(aimYaw - v21, -180.0, 180.0);
      this->m_pAI->animData.aimYaw = *(float *)&v23;
    }
    G_AIAnim_UpdateFieldByParam(this->m_pAI->ent, AGENT_ANIM_PARAM_AIMYAW);
    G_AIAnim_UpdateFieldByParam(this->m_pAI->ent, AGENT_ANIM_PARAM_AIMPITCH);
    FrameDurationInSeconds = G_Level_GetFrameDurationInSeconds();
    this->m_pAI->animData.aimYawDelta = v21 / *(float *)&FrameDurationInSeconds;
    G_AIAnim_UpdateFieldByParam(this->m_pAI->ent, AGENT_ANIM_PARAM_AIM_YAW_DELTA);
    v9 = this->m_pAI;
  }
  v9->prevYaw = v9->ent->r.currentAngles.v[1];
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
}

/*
==============
AIScriptedInterface::UpdateCover
==============
*/
pathnode_t *AIScriptedInterface::UpdateCover(AIScriptedInterface *this, const tacpoint_t **ppOutCoverTacPoint)
{
  pathnode_t *v4; 
  ai_scripted_t *m_pAI; 
  const gentity_s *v6; 
  ai_scripted_t *v7; 
  bool searchCenteredAroundAI; 
  bool v9; 
  bool keepClaimedNode; 
  bool keepClaimedNodeIfValid; 
  char v12; 
  ai_scripted_t *v13; 
  pathnode_t *BestCover; 
  ai_scripted_t *v15; 
  unsigned __int16 prevNodeID; 
  const pathnode_t *v17; 
  const gentity_s *v18; 
  const tacpoint_t *BestTacPoint; 
  ai_scripted_t *v20; 
  int coverSearchInterval; 
  const dvar_t *v22; 
  ai_scripted_t *v23; 
  float outBestScore; 
  float v26; 
  __int64 v27; 
  int v28; 
  __int64 v29; 
  vec3_t pos; 
  CoverNodeMetricParams metricParams; 

  v27 = -2i64;
  v28 = 50;
  v4 = NULL;
  v29 = 0i64;
  SV_Profile_BeginEvent(SVPROF_AI_COVER_FINDING);
  if ( ppOutCoverTacPoint )
    *ppOutCoverTacPoint = NULL;
  m_pAI = this->m_pAI;
  if ( !m_pAI->ent->tagInfo && (m_pAI->boundingOverwatchEnabled || !AIScriptedInterface::KeepClaimedNode(this)) && !AIScriptedInterface::ShouldHoldGroundAgainstEnemy(this) && (!this->m_pAI->boundingOverwatchEnabled || this->IsCodeMoveRequested(this) || AIScriptedInterface::CanBoundingOverwatchMove(this)) && !AIScriptedInterface::IsDoingAmbush(this) )
  {
    AIScriptedInterface::GetCoverNodeMetricParams(this, &metricParams);
    v6 = this->GetCloseEnt(this);
    v7 = this->m_pAI;
    searchCenteredAroundAI = v7->boundingOverwatchEnabled;
    v9 = v7->squadNumber >= 0 || v7->nodeSelect.requestDifferentCover;
    keepClaimedNode = v7->nodeSelect.keepClaimedNode;
    keepClaimedNodeIfValid = v7->nodeSelect.keepClaimedNodeIfValid;
    v7->nodeSelect.keepClaimedNode = 0;
    this->m_pAI->nodeSelect.keepClaimedNodeIfValid = 0;
    outBestScore = 0.0;
    v12 = 0;
    if ( !v6 || (v13 = this->m_pAI, v13->combat.combatMode == AI_COMBAT_COVER_3D) )
    {
      v12 = 1;
      v15 = this->m_pAI;
      if ( v15->sentient->pClaimedNode || (prevNodeID = v15->coverInfo.prevNodeID, prevNodeID == 0xFFFF) || v15->blackboard.m_ReacquireStepTime + 1000 < level.time )
      {
        BestCover = AIScriptedInterface::Cover_FindBestCover(this, v15->nodeSelect.coverSelectorOverride, v9, searchCenteredAroundAI, &metricParams, &outBestScore);
      }
      else
      {
        v17 = Path_ConvertIndexToNode(prevNodeID);
        BestCover = AIScriptedInterface::Cover_FindBestCover(this, this->m_pAI->nodeSelect.coverSelectorOverride, v17, searchCenteredAroundAI, &metricParams, &outBestScore);
      }
    }
    else
    {
      BestCover = AIScriptedInterface::Cover_FindBestCoverAwayFrom(this, v6, v13->nodeSelect.coverSelectorOverride, v9, searchCenteredAroundAI, &metricParams);
    }
    v4 = BestCover;
    if ( ppOutCoverTacPoint )
    {
      *ppOutCoverTacPoint = NULL;
      if ( v12 )
      {
        v18 = NULL;
        if ( EntHandle::isDefined(&this->m_pAI->codeGoal.hVolume) )
          v18 = EntHandle::ent(&this->m_pAI->codeGoal.hVolume);
        BestTacPoint = AIScriptedInterface::Cover_FindBestTacPoint(this, this->m_pAI->nodeSelect.coverSelectorOverride, v9, v18, searchCenteredAroundAI, &metricParams, &v26);
        *ppOutCoverTacPoint = BestTacPoint;
        if ( BestTacPoint )
        {
          if ( v26 > outBestScore )
          {
            v4 = NULL;
LABEL_30:
            v20 = this->m_pAI;
            coverSearchInterval = v20->nodeSelect.coverSearchInterval;
            if ( coverSearchInterval < 1000 )
            {
              v22 = DVARINT_ai_coverSearchInterval;
              if ( !DVARINT_ai_coverSearchInterval && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_coverSearchInterval") )
                __debugbreak();
              Dvar_CheckFrontendServerThread(v22);
              coverSearchInterval = v22->current.integer;
              v20 = this->m_pAI;
            }
            v20->nodeSelect.nextFindBestCoverTime = level.time + coverSearchInterval;
            this->m_pAI->nodeSelect.repeatCoverFindIfFailed = 0;
            this->m_pAI->nodeSelect.requestDifferentCover = 0;
            Scr_SetString(&this->m_pAI->nodeSelect.coverSelectorOverride, (scr_string_t)0);
            goto LABEL_41;
          }
        }
      }
    }
    if ( v4 )
    {
      pathnode_t::GetPos(v4, &pos);
      if ( AICommonInterface::PointAtGoal(this, &pos, &this->m_pAI->codeGoal) )
        goto LABEL_30;
      v4 = NULL;
    }
    this->m_pAI->nodeSelect.keepClaimedNode = keepClaimedNode;
    this->m_pAI->nodeSelect.keepClaimedNodeIfValid = keepClaimedNodeIfValid;
    v23 = this->m_pAI;
    if ( v23->nodeSelect.repeatCoverFindIfFailed )
    {
      v23->nodeSelect.nextFindBestCoverTime = level.time + v23->nodeSelect.coverSearchIntervalAfterFailure;
      goto LABEL_41;
    }
    goto LABEL_30;
  }
LABEL_41:
  SV_Profile_EndEvent(SVPROF_AI_COVER_FINDING);
  return v4;
}

/*
==============
AIScriptedInterface::UpdateCustomNodes
==============
*/
void AIScriptedInterface::UpdateCustomNodes(AIScriptedInterface *this)
{
  DObj *ServerDObjForEnt; 
  const DObj *v3; 

  ServerDObjForEnt = Com_GetServerDObjForEnt(this->m_pAI->ent);
  v3 = ServerDObjForEnt;
  if ( ServerDObjForEnt && ServerDObjForEnt->tree )
  {
    do
    {
      G_AIAnim_UpdateActiveFields(this->m_pAI->ent);
      XAnimTreeUpdateParameters(v3);
    }
    while ( XAnimUpdateDirtyCustomNodes(v3, v3->tree->children, 0.0) );
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
  ai_scripted_t *m_pAI; 
  double v3; 
  ai_scripted_t *v4; 
  float v5; 

  m_pAI = this->m_pAI;
  if ( m_pAI->Physics.bHasGroundPlane )
  {
    v3 = I_fclamp(m_pAI->Physics.groundplaneSlope, -1.0, 1.0);
    *(float *)&v3 = acosf_0(*(float *)&v3);
    v4 = this->m_pAI;
    v5 = *(float *)&v3 * 57.295776;
    if ( v4->Physics.vVelocity.v[2] >= 0.0 )
      v4->animData.groundSlope = v5;
    else
      v4->animData.groundSlope = COERCE_FLOAT(LODWORD(v5) ^ _xmm);
  }
  else
  {
    m_pAI->animData.groundSlope = 0;
  }
}

/*
==============
AIScriptedInterface::UpdateGunPose
==============
*/
void AIScriptedInterface::UpdateGunPose(AIScriptedInterface *this)
{
  const dvar_t *v2; 
  bool enabled; 
  ai_scripted_t *m_pAI; 
  AIGunAdditiveOptions gunPoseOverride_internal; 
  const char *v6; 
  bool v7; 
  scr_string_t baseArchetype; 
  float AnimSpeedThresholdValue; 
  float v10; 
  ai_scripted_t *v11; 
  ai_scripted_t *v12; 
  AIGunAdditiveOptions gunPoseOverride; 
  int number; 
  Ai_Asm *v15; 
  const ASM_Instance *InstanceIfExists; 
  const ASM_Instance *v17; 
  const Weapon *v18; 
  weapClass_t WeaponClass; 
  gentity_s *TargetEntity; 
  ai_scripted_t *v21; 
  ai_scripted_t *v22; 
  gentity_s *ent; 
  double v24; 
  ai_scripted_t *v25; 
  float v30; 
  float v33; 
  sentient_s *TargetSentient; 
  ai_scripted_t *v35; 
  ai_scripted_t *v36; 
  ai_scripted_t *v37; 
  vec2_t vec; 
  float v39; 

  v2 = DCONST_DVARBOOL_ai_debuggunpose;
  if ( !DCONST_DVARBOOL_ai_debuggunpose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debuggunpose") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  enabled = v2->current.enabled;
  Sys_ProfBeginNamedEvent(0xFF808080, "AI_UpdateGunPose");
  m_pAI = this->m_pAI;
  gunPoseOverride_internal = m_pAI->gunPoseOverride_internal;
  if ( gunPoseOverride_internal == 5 )
  {
    if ( m_pAI->gunDiscipline && AI_IsPlayerInMyLineOfFire(m_pAI, 0.76599997, 0.99599999, 32.0, 128.0) )
    {
      this->m_pAI->bAimedAtAimTarget = 0;
      this->m_pAI->animData.gunAdditiveIndex = 1;
      if ( enabled )
      {
        v6 = "player in line of fire";
        goto LABEL_72;
      }
    }
    else
    {
      v7 = 0;
      if ( AICommonInterface::HasPath(this) )
      {
        baseArchetype = this->m_pAI->baseArchetype;
        AnimSpeedThresholdValue = (float)GetAnimSpeedThresholdValue(baseArchetype, scr_const.fast);
        v10 = (float)GetAnimSpeedThresholdValue(baseArchetype, scr_const.jog);
        if ( AnimSpeedThresholdValue > 0.0 && v10 > 0.0 )
        {
          v11 = this->m_pAI;
          v7 = fsqrt((float)((float)(v11->Physics.vVelocity.v[0] * v11->Physics.vVelocity.v[0]) + (float)(v11->Physics.vVelocity.v[1] * v11->Physics.vVelocity.v[1])) + (float)(v11->Physics.vVelocity.v[2] * v11->Physics.vVelocity.v[2])) >= (float)((float)(v10 * 0.89999998) + (float)(AnimSpeedThresholdValue * 0.10000002)) && v11->animData.desiredSpeed >= v10;
        }
      }
      v12 = this->m_pAI;
      gunPoseOverride = v12->gunPoseOverride;
      if ( gunPoseOverride == 5 || v7 )
      {
        if ( this->InScriptedState(this) )
        {
          if ( enabled )
          {
            v6 = "in scripted";
            goto LABEL_72;
          }
        }
        else
        {
          number = this->m_pAI->ent->s.number;
          v15 = Ai_Asm::Singleton();
          InstanceIfExists = Ai_Asm::GetInstanceIfExists(v15, NULL, number);
          v17 = InstanceIfExists;
          if ( InstanceIfExists && Common_Asm::Utils::CurrentStateHasFlag(InstanceIfExists, (const scr_string_t)scr_const.notetrackaim) && !Common_Asm::Utils::EventFired(v17, (const scr_string_t)scr_const.start_aim) )
          {
            this->m_pAI->bAimedAtAimTarget = 0;
            this->m_pAI->animData.gunAdditiveIndex = 0;
            if ( enabled )
            {
              v6 = "waiting for aim";
              goto LABEL_72;
            }
          }
          else if ( v7 )
          {
            this->m_pAI->animData.gunAdditiveIndex = 0;
            if ( enabled )
            {
              v6 = "moving to fast gunup";
              goto LABEL_72;
            }
          }
          else
          {
            v18 = this->GetEquippedWeapon(this);
            WeaponClass = BG_GetWeaponClass(v18, 0);
            if ( (unsigned int)WeaponClass <= WEAPCLASS_SMG || WeaponClass == WEAPCLASS_PISTOL )
            {
              TargetEntity = AICommonInterface::GetTargetEntity(this);
              if ( TargetEntity )
              {
                v22 = this->m_pAI;
                ent = v22->ent;
                vec.v[0] = TargetEntity->r.currentOrigin.v[0] - v22->ent->r.currentOrigin.v[0];
                vec.v[1] = TargetEntity->r.currentOrigin.v[1] - ent->r.currentOrigin.v[1];
                v39 = TargetEntity->r.currentOrigin.v[2] - ent->r.currentOrigin.v[2];
                v24 = vectoyaw(&vec);
                v25 = this->m_pAI;
                _XMM1 = (unsigned __int8)(v25->animData.gunAdditiveIndex - 3) <= 1u;
                __asm { vpcmpeqd xmm3, xmm1, xmm2 }
                _XMM2 = LODWORD(FLOAT_5_0);
                __asm { vblendvps xmm5, xmm2, xmm6, xmm3 }
                v30 = (float)(*(float *)&v24 - (float)(v25->aimAngles.v[1] + v25->ent->r.currentAngles.v[1])) * 0.0027777778;
                _XMM1 = 0i64;
                __asm { vroundss xmm0, xmm1, xmm2, 1 }
                v33 = (float)(v30 - *(float *)&_XMM0) * 360.0;
                if ( v33 < (float)(v25->sight.rightAimLimit - *(float *)&_XMM5) || v33 > (float)(*(float *)&_XMM5 + v25->sight.leftAimLimit) )
                {
                  v25->bAimedAtAimTarget = 0;
                  this->m_pAI->animData.gunAdditiveIndex = 1;
                  if ( enabled )
                  {
                    v6 = "outside shoot limits";
                    goto LABEL_72;
                  }
                  goto LABEL_73;
                }
                if ( v25->animData.shootStyleIndex == 1 )
                {
                  TargetSentient = AICommonInterface::GetTargetSentient(this);
                  if ( TargetSentient )
                  {
                    if ( !AICommonInterface::RecentlySeeSentient(this, TargetSentient, 1000) )
                    {
                      v35 = this->m_pAI;
                      if ( v35->blackboard.m_ShootParams.m_Objective == NORMAL )
                      {
                        v35->bAimedAtAimTarget = 0;
                        this->m_pAI->animData.gunAdditiveIndex = 2;
                        if ( enabled )
                        {
                          v6 = "no see sentient";
                          goto LABEL_72;
                        }
                        goto LABEL_73;
                      }
                    }
                    v36 = this->m_pAI;
                    if ( !v36->blackboard.m_ShootParams.m_bValid )
                    {
                      v36->bAimedAtAimTarget = 0;
                      this->m_pAI->animData.gunAdditiveIndex = 2;
                      if ( enabled )
                      {
                        v6 = "invalid shoot params";
                        goto LABEL_72;
                      }
                      goto LABEL_73;
                    }
                  }
                  else if ( !AICommonInterface::CanSeeEnemy(this) )
                  {
                    this->m_pAI->bAimedAtAimTarget = 0;
                    this->m_pAI->animData.gunAdditiveIndex = 2;
                    if ( enabled )
                    {
                      v6 = "can't see enemy";
                      goto LABEL_72;
                    }
                    goto LABEL_73;
                  }
                }
                if ( AICommonInterface::HasPath(this) || (v37 = this->m_pAI, v37->arrivalInfo.arriving) )
                {
                  this->m_pAI->animData.gunAdditiveIndex = AIScriptedInterface::GetGunUpPose(this);
                  if ( enabled )
                  {
                    v6 = "has path";
                    goto LABEL_72;
                  }
                }
                else
                {
                  v37->animData.gunAdditiveIndex = v37->bVisorDown + 3;
                  if ( enabled )
                  {
                    v6 = "GetGunADSPose";
                    goto LABEL_72;
                  }
                }
                goto LABEL_73;
              }
              v21 = this->m_pAI;
              if ( level.time > v21->noTargetTimeToGunDown )
              {
                v21->animData.gunAdditiveIndex = 1;
                v21 = this->m_pAI;
              }
              v21->bAimedAtAimTarget = 0;
              if ( enabled )
              {
                v6 = "no target";
                goto LABEL_72;
              }
            }
            else
            {
              this->m_pAI->animData.gunAdditiveIndex = AIScriptedInterface::GetGunUpPose(this);
              if ( enabled )
              {
                v6 = "bad weapon class";
                goto LABEL_72;
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
            v12 = this->m_pAI;
          }
        }
        else
        {
          gunPoseOverride = v12->bVisorDown + 3;
        }
        v12->animData.gunAdditiveIndex = gunPoseOverride;
        if ( enabled )
        {
          v6 = "pose override";
          goto LABEL_72;
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
      v6 = "override internal";
LABEL_72:
      AIScriptedInterface::DrawGunPoseDebug(this, v6, this->m_pAI->animData.gunAdditiveIndex);
    }
  }
LABEL_73:
  Sys_ProfEndNamedEvent();
}

/*
==============
AIScriptedInterface::UpdateLeanAngles
==============
*/
void AIScriptedInterface::UpdateLeanAngles(AIScriptedInterface *this)
{
  ai_scripted_t *v2; 
  __int64 v3; 
  __int64 v4; 
  const vec2_t *m_pAI; 
  vec2_t v6; 
  double v7; 
  float v8; 
  float v9; 
  float v12; 
  const dvar_t *v13; 
  float v14; 
  ai_scripted_t *v15; 
  float leanYaw; 
  __int128 leanYaw_low; 
  vec2_t vec; 
  float v21; 
  int v22[5]; 
  bfx::AreaHandle v23; 
  bfx::LinkHandle v24; 

  if ( AICommonInterface::HasPath(this) && ((v2 = this->m_pAI, v2->orientation.faceMotion) || v2->cautiousNavigationEnabled) && v2->Physics.stairsState == AI_STAIRS_NONE )
  {
    bfx::AreaHandle::AreaHandle(&v23);
    bfx::LinkHandle::LinkHandle(&v24);
    LOBYTE(v3) = 1;
    ((void (__fastcall *)(AINavigator *, __int64, __int64, int *, _BYTE))this->m_pAI->pNavigator->GetPosAlongPath)(this->m_pAI->pNavigator, v4, v3, v22, 0);
    m_pAI = (const vec2_t *)this->m_pAI;
    v6 = *m_pAI;
    vec.v[0] = *(float *)v22 - *(float *)(*(_QWORD *)m_pAI + 304i64);
    vec.v[1] = *(float *)&v22[1] - *(float *)(*(_QWORD *)&v6 + 308i64);
    v21 = *(float *)&v22[2] - *(float *)(*(_QWORD *)&v6 + 312i64);
    v7 = vectoyaw(m_pAI + 263);
    v8 = *(float *)&v7;
    if ( *(float *)&v22[4] >= 12.0 )
      v7 = vectoyaw(&vec);
    v9 = (float)(*(float *)&v7 - v8) * 0.0027777778;
    _XMM0 = 0i64;
    __asm { vroundss xmm1, xmm0, xmm3, 1 }
    v12 = v9 - *(float *)&_XMM1;
    v13 = DCONST_DVARFLT_ai_leanScalar;
    if ( !DCONST_DVARFLT_ai_leanScalar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_leanScalar") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    v14 = (float)(v12 * v13->current.value) * 360.0;
    I_fclamp(v14, -90.0, 90.0);
    v15 = this->m_pAI;
    leanYaw = v15->animData.leanYaw;
    *(float *)&_XMM1 = leanYaw + 10.0;
    if ( v14 <= (float)(leanYaw + 10.0) )
    {
      leanYaw_low = LODWORD(v15->animData.leanYaw);
      *(float *)&leanYaw_low = leanYaw - 10.0;
      _XMM0 = leanYaw_low;
      __asm { vmaxss  xmm1, xmm0, xmm2 }
    }
    v15->animData.leanYaw = *(float *)&_XMM1;
    bfx::LinkHandle::~LinkHandle(&v24);
    bfx::AreaHandle::~AreaHandle(&v23);
  }
  else
  {
    this->m_pAI->animData.leanYaw = 0.0;
  }
}

/*
==============
AIScriptedInterface::UpdateMoveDirBasedOnHistory
==============
*/
void AIScriptedInterface::UpdateMoveDirBasedOnHistory(AIScriptedInterface *this, const vec3_t *lookAhead, vec3_t *inOutMoveDir)
{
  float v5; 
  float v6; 
  __int128 v7; 
  float v11; 

  if ( this->m_pAI->moveHistoryConsistent )
  {
    inOutMoveDir->v[0] = lookAhead->v[0];
    *(_QWORD *)&inOutMoveDir->y = LODWORD(lookAhead->v[1]);
  }
  else
  {
    AIScriptedInterface::GetMoveHistoryAverage(this, inOutMoveDir);
    v5 = lookAhead->v[0] + inOutMoveDir->v[0];
    inOutMoveDir->v[0] = v5;
    v7 = LODWORD(lookAhead->v[1]);
    v6 = lookAhead->v[1] + inOutMoveDir->v[1];
    inOutMoveDir->v[1] = v6;
    inOutMoveDir->v[2] = lookAhead->v[2] + inOutMoveDir->v[2];
    *(float *)&v7 = fsqrt((float)(v6 * v6) + (float)(v5 * v5));
    _XMM3 = v7;
    __asm
    {
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm0, xmm3, xmm1, xmm0
    }
    v11 = v5 * (float)(1.0 / *(float *)&_XMM0);
    *(float *)&v7 = v6 * (float)(1.0 / *(float *)&_XMM0);
    inOutMoveDir->v[1] = *(float *)&v7;
    inOutMoveDir->v[0] = v11;
    if ( (float)((float)(*(float *)&v7 * lookAhead->v[1]) + (float)(v11 * lookAhead->v[0])) < 0.70700002 )
    {
      inOutMoveDir->v[0] = lookAhead->v[0];
      inOutMoveDir->v[1] = lookAhead->v[1];
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
  const sentient_s *v3; 
  double PlayerSightAccuracy; 

  TargetSentient = AICommonInterface::GetTargetSentient(this);
  v3 = TargetSentient;
  if ( !TargetSentient )
    goto LABEL_7;
  if ( !TargetSentient->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 674, ASSERT_TYPE_ASSERT, "(enemy->ent)", (const char *)&queryFormat, "enemy->ent") )
    __debugbreak();
  if ( v3->ent->client )
  {
    PlayerSightAccuracy = AICommonInterface::GetPlayerSightAccuracy(this, v3);
    this->m_pAI->shoot.playerSightAccuracy = *(float *)&PlayerSightAccuracy;
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
  __int128 v1; 
  const dvar_t *v3; 
  const dvar_t *v4; 
  const char *v5; 
  float value; 
  const dvar_t *v7; 
  ai_scripted_t *m_pAI; 
  float v10; 
  const dvar_t *v11; 
  const char *v12; 
  ai_scripted_t *v13; 
  double AnimSpeedBetweenThresholdEntries; 
  ai_scripted_t *v15; 
  int *p_runNGunTime; 
  int *p_outTargetSpeed; 
  ai_scripted_t *v22; 
  ai_scripted_t *v23; 
  float v24; 
  const dvar_t *v25; 
  ai_scripted_t *v26; 
  __int128 v28; 
  bool outUsingCachedValue; 
  bool bOutUseWishDelta; 
  float outTargetSpeed; 
  __int64 v33; 
  vec3_t outNextCorner; 
  vec3_t outWishDelta; 

  v33 = -2i64;
  Sys_ProfBeginNamedEvent(0xFF808080, "AI_UpdateSpeedScaleValues");
  v3 = DCONST_DVARFLT_ai_maxSpeedDeltaDown;
  if ( !DCONST_DVARFLT_ai_maxSpeedDeltaDown && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_maxSpeedDeltaDown") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( this->m_pAI->cautiousNavigationEnabled )
  {
    v4 = DCONST_DVARFLT_ai_maxSpeedDeltaUpCautious;
    if ( DCONST_DVARFLT_ai_maxSpeedDeltaUpCautious )
      goto LABEL_11;
    v5 = "ai_maxSpeedDeltaUpCautious";
  }
  else
  {
    v4 = DCONST_DVARFLT_ai_maxSpeedDeltaUp;
    if ( DCONST_DVARFLT_ai_maxSpeedDeltaUp )
      goto LABEL_11;
    v5 = "ai_maxSpeedDeltaUp";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v5) )
    __debugbreak();
LABEL_11:
  Dvar_CheckFrontendServerThread(v4);
  value = v4->current.value;
  if ( this->m_pAI->cautiousNavigationEnabled )
  {
    v7 = DCONST_DVARFLT_ai_maxSpeedDeltaDownCautious;
    if ( !DCONST_DVARFLT_ai_maxSpeedDeltaDownCautious && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_maxSpeedDeltaDownCautious") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
  }
  *(double *)&v1 = AIScriptedInterface::GetTargetSpeed(this);
  _XMM6 = v1;
  outTargetSpeed = *(float *)&v1;
  bOutUseWishDelta = 0;
  if ( AIScriptedInterface::CanSlowOnPath(this) )
  {
    m_pAI = this->m_pAI;
    v10 = (float)(fsqrt((float)(m_pAI->Physics.vVelocity.v[0] * m_pAI->Physics.vVelocity.v[0]) + (float)(m_pAI->Physics.vVelocity.v[1] * m_pAI->Physics.vVelocity.v[1])) + m_pAI->animData.desiredSpeed) * 0.5;
    if ( m_pAI->cautiousNavigationEnabled )
    {
      v11 = DCONST_DVARFLT_ai_maxSpeedDeltaDownForCautiousPathEnd;
      if ( !DCONST_DVARFLT_ai_maxSpeedDeltaDownForCautiousPathEnd )
      {
        v12 = "ai_maxSpeedDeltaDownForCautiousPathEnd";
        goto LABEL_22;
      }
    }
    else
    {
      v11 = DCONST_DVARFLT_ai_maxSpeedDeltaDownForPathEnd;
      if ( !DCONST_DVARFLT_ai_maxSpeedDeltaDownForPathEnd )
      {
        v12 = "ai_maxSpeedDeltaDownForPathEnd";
LABEL_22:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v12) )
          __debugbreak();
      }
    }
    Dvar_CheckFrontendServerThread(v11);
    if ( AIScriptedInterface::SlowOnPathEnd(this, &outWishDelta, v10, v11->current.value, &outTargetSpeed, &bOutUseWishDelta) )
      goto LABEL_25;
    if ( !this->m_pAI->pNavigator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_interface.cpp", 2636, ASSERT_TYPE_ASSERT, "(m_pAI->pNavigator)", (const char *)&queryFormat, "m_pAI->pNavigator") )
      __debugbreak();
    v23 = this->m_pAI;
    if ( !v23->sharpTurnSpeedScalingEnabled )
      goto LABEL_25;
    v24 = (float)((float)(v23->Physics.vVelocity.v[0] * v23->Physics.vVelocity.v[0]) + (float)(v23->Physics.vVelocity.v[1] * v23->Physics.vVelocity.v[1])) + (float)(v23->Physics.vVelocity.v[2] * v23->Physics.vVelocity.v[2]);
    v25 = DCONST_DVARFLT_ai_minVelocityForTurnSlowdown;
    if ( !DCONST_DVARFLT_ai_minVelocityForTurnSlowdown && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_minVelocityForTurnSlowdown") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v25);
    if ( v24 < (float)(v25->current.value * v25->current.value) )
    {
LABEL_25:
      _XMM6 = LODWORD(outTargetSpeed);
    }
    else
    {
      outUsingCachedValue = 0;
      _XMM6 = LODWORD(outTargetSpeed);
      if ( AIScriptedInterface::ProcessSharpTurnSpeedScale(this, 0.0, &outNextCorner, &outTargetSpeed, &outUsingCachedValue) )
      {
        v26 = this->m_pAI;
        if ( !outUsingCachedValue )
        {
          v28 = _XMM6;
          *(float *)&v28 = *(float *)&_XMM6 * v26->minCornerSpeedScalingMultiplier;
          _XMM2 = v28;
          v26->turnSlowdownData.turnCorner = outNextCorner;
          __asm { vmaxss  xmm1, xmm2, [rbp+57h+outTargetSpeed] }
          v26->turnSlowdownData.scaledSpeed = *(float *)&_XMM1;
          this->m_pAI->turnSlowdownData.timeStamp = level.time;
          v26 = this->m_pAI;
          _XMM6 = LODWORD(v26->turnSlowdownData.scaledSpeed);
        }
        if ( v26->cautiousNavigationEnabled )
          Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_ai_maxSpeedDeltaDownForCautiousCorners, "ai_maxSpeedDeltaDownForCautiousCorners");
        else
          Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_ai_maxSpeedDeltaDownForCorners, "ai_maxSpeedDeltaDownForCorners");
      }
    }
  }
  this->m_pAI->pre_avoidance_desiredSpeed = *(float *)&_XMM6;
  v13 = this->m_pAI;
  if ( v13->avoidance_maxSpeed >= 0.0 )
  {
    if ( v13->bRunNGun && HasAnimSpeedThresholdEntryForArchetype(v13->baseArchetype, scr_const.fast) && HasAnimSpeedThresholdEntryForArchetype(this->m_pAI->baseArchetype, scr_const.jog) )
    {
      AnimSpeedBetweenThresholdEntries = GetAnimSpeedBetweenThresholdEntries(this->m_pAI->baseArchetype, scr_const.fast, scr_const.jog, 0.89999998);
      v15 = this->m_pAI;
      if ( *(float *)&AnimSpeedBetweenThresholdEntries > v15->avoidance_maxSpeed )
      {
        v15->avoidance_maxSpeed = *(float *)&AnimSpeedBetweenThresholdEntries;
        LODWORD(outTargetSpeed) = level.time + 500;
        p_runNGunTime = &this->m_pAI->runNGunTime;
        p_outTargetSpeed = (int *)&outTargetSpeed;
        if ( *p_runNGunTime < level.time + 500 )
          p_outTargetSpeed = &this->m_pAI->runNGunTime;
        *p_runNGunTime = *p_outTargetSpeed;
      }
    }
    v13 = this->m_pAI;
    _XMM0 = LODWORD(v13->avoidance_maxSpeed);
    __asm { vminss  xmm6, xmm0, xmm6 }
  }
  *(float *)&_XMM1 = v13->animData.desiredSpeed + value;
  if ( *(float *)&_XMM6 <= *(float *)&_XMM1 )
  {
    __asm
    {
      vcmpltss xmm0, xmm6, xmm1
      vblendvps xmm1, xmm6, xmm1, xmm0
    }
  }
  _XMM0 = LODWORD(v13->path_maxSpeed);
  if ( *(float *)&_XMM0 > 0.0 )
    __asm { vminss  xmm1, xmm0, xmm1 }
  v13->animData.desiredSpeed = *(float *)&_XMM1;
  v22 = this->m_pAI;
  if ( v22->avoidanceBlockedData.blocked )
  {
    *(_QWORD *)v22->Physics.vWishDelta.v = 0i64;
    v22->Physics.vWishDelta.v[2] = 0.0;
  }
  if ( bOutUseWishDelta )
    v22->Physics.vWishDelta = outWishDelta;
  Sys_ProfEndNamedEvent();
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
  ai_scripted_t *v5; 
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
      v5 = this->m_pAI;
      if ( (float)((float)((float)((float)(v5->ent->r.currentOrigin.v[1] - outGoalPos.v[1]) * (float)(v5->ent->r.currentOrigin.v[1] - outGoalPos.v[1])) + (float)((float)(v5->ent->r.currentOrigin.v[0] - outGoalPos.v[0]) * (float)(v5->ent->r.currentOrigin.v[0] - outGoalPos.v[0]))) + (float)((float)(v5->ent->r.currentOrigin.v[2] - outGoalPos.v[2]) * (float)(v5->ent->r.currentOrigin.v[2] - outGoalPos.v[2]))) > 1.0 )
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
  AINavigator2D *v2; 
  const dvar_t *v3; 
  float value; 
  AINavigator2D *v5; 
  const dvar_t *v6; 
  bool v7; 
  const dvar_t *v8; 
  ai_scripted_t *m_pAI; 
  gentity_s *ent; 
  bool IsApproachingTightQuarters; 
  const char *v12; 
  const char *v13; 
  bool v14; 
  const char *v15; 
  const char *v16; 
  const char *v17; 
  ai_scripted_t *v18; 
  const char *v19; 
  vec3_t xyz; 

  v2 = this->m_pAI->pNavigator->Get2DNavigator(this->m_pAI->pNavigator);
  if ( v2 )
  {
    v3 = DCONST_DVARFLT_ai_tightQuartersLookaheadDistance;
    if ( !DCONST_DVARFLT_ai_tightQuartersLookaheadDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_tightQuartersLookaheadDistance") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v3);
    value = v3->current.value;
    AINavigator2D::UpdateTightQuarters(v2, value);
    if ( AICommonInterface::HasPath(this) )
    {
      v5 = this->m_pAI->pNavigator->Get2DNavigator(this->m_pAI->pNavigator);
      if ( v5 )
      {
        v6 = DCONST_DVARFLT_ai_tightQuartersLookaheadDistance;
        if ( !DCONST_DVARFLT_ai_tightQuartersLookaheadDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_tightQuartersLookaheadDistance") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v6);
        v7 = AINavigator2D::IsInOrApproachingTightQuarters(v5, v6->current.value);
      }
      else
      {
        v7 = 0;
      }
      this->m_pAI->inTightQuarters = v7;
    }
    v8 = DVARBOOL_ai_debugtightquarters;
    if ( !DVARBOOL_ai_debugtightquarters && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugtightquarters") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    if ( v8->current.enabled )
    {
      m_pAI = this->m_pAI;
      ent = m_pAI->ent;
      *(_QWORD *)xyz.v = *(_QWORD *)m_pAI->ent->r.currentOrigin.v;
      xyz.v[2] = ent->r.currentOrigin.v[2] - 8.0;
      IsApproachingTightQuarters = AINavigator2D::IsApproachingTightQuarters(v2, value);
      v12 = "false";
      v13 = "false";
      v14 = IsApproachingTightQuarters;
      if ( this->m_pAI->inTightQuarters )
        v13 = "true";
      v15 = j_va("In tight quarters: %s", v13);
      G_Main_AddDebugString(&xyz, &colorLtGrey, 0.40000001, v15);
      v16 = "false";
      if ( v14 )
        v16 = "true";
      xyz.v[2] = xyz.v[2] + -10.0;
      v17 = j_va("Approaching tight quarters: %s", v16);
      G_Main_AddDebugString(&xyz, &colorLtGrey, 0.40000001, v17);
      v18 = this->m_pAI;
      xyz.v[2] = xyz.v[2] + -12.0;
      if ( v18->cautiousNavigationEnabled )
        v12 = "true";
      v19 = j_va("Cautious Navigation: %s", v12);
      G_Main_AddDebugString(&xyz, &colorLtGrey, 0.40000001, v19);
    }
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

