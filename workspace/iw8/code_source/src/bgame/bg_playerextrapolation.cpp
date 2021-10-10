/*
==============
BG_PlayerExtrap_ClearSavedPlayerState
==============
*/

void __fastcall BG_PlayerExtrap_ClearSavedPlayerState(SavedPlayerState *savedState)
{
  ?BG_PlayerExtrap_ClearSavedPlayerState@@YAXPEAUSavedPlayerState@@@Z(savedState);
}

/*
==============
BG_PlayerExtrap_SetPlayerState
==============
*/

void __fastcall BG_PlayerExtrap_SetPlayerState(playerState_s *ps, const playerState_s *extrapolatedPlayerState)
{
  ?BG_PlayerExtrap_SetPlayerState@@YAXPEAUplayerState_s@@PEBU1@@Z(ps, extrapolatedPlayerState);
}

/*
==============
BG_PlayerExtrap_SavePlayerState
==============
*/

void __fastcall BG_PlayerExtrap_SavePlayerState(const playerState_s *ps, SavedPlayerState *outSavedState)
{
  ?BG_PlayerExtrap_SavePlayerState@@YAXPEBUplayerState_s@@PEAUSavedPlayerState@@@Z(ps, outSavedState);
}

/*
==============
BG_PlayerExtrap_RestorePlayerState
==============
*/

void __fastcall BG_PlayerExtrap_RestorePlayerState(playerState_s *ps, const SavedPlayerState *savedState)
{
  ?BG_PlayerExtrap_RestorePlayerState@@YAXPEAUplayerState_s@@PEBUSavedPlayerState@@@Z(ps, savedState);
}

/*
==============
BG_PlayerExtrap_ClearSavedPlayerState
==============
*/
void BG_PlayerExtrap_ClearSavedPlayerState(SavedPlayerState *savedState)
{
  if ( !savedState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_playerextrapolation.cpp", 142, ASSERT_TYPE_ASSERT, "(savedState)", (const char *)&queryFormat, "savedState") )
    __debugbreak();
  DebugWipe(savedState, 0xE0ui64);
  savedState->commandTime = 0;
}

/*
==============
BG_PlayerExtrap_RestorePlayerState
==============
*/
void BG_PlayerExtrap_RestorePlayerState(playerState_s *ps, const SavedPlayerState *savedState)
{
  int commandTime; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_playerextrapolation.cpp", 54, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !savedState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_playerextrapolation.cpp", 55, ASSERT_TYPE_ASSERT, "(savedState)", (const char *)&queryFormat, "savedState") )
    __debugbreak();
  commandTime = savedState->commandTime;
  if ( savedState->commandTime )
  {
    ps->commandTime = commandTime;
    ps->commandTimeInterpolated = commandTime;
    ps->origin.v[0] = savedState->origin.v[0];
    ps->origin.v[1] = savedState->origin.v[1];
    ps->origin.v[2] = savedState->origin.v[2];
    ps->viewangles.v[0] = savedState->angles.v[0];
    ps->viewangles.v[1] = savedState->angles.v[1];
    ps->viewangles.v[2] = savedState->angles.v[2];
    ps->movementDir = savedState->movementDir;
    ps->movementDirPrecise = savedState->movementDirPrecise;
    ps->velocityClipDir = savedState->velocityClipDir;
    ps->moveSpeedForAnimBlend = savedState->moveSpeedForAnimBlend;
    *(double *)ps->packedBobCycle = *(double *)savedState->packedBobCycle;
    ps->weapCommon.weaponIdleTime = savedState->weaponIdleTime;
    ps->weapCommon.weaponIdleTime2 = savedState->weaponIdleTime2;
    ps->mountState.eyePoint.v[0] = savedState->mountEyePos.v[0];
    ps->mountState.eyePoint.v[1] = savedState->mountEyePos.v[1];
    ps->mountState.eyePoint.v[2] = savedState->mountEyePos.v[2];
    ps->mountState.eyePointMover.v[0] = savedState->mountEyePosMover.v[0];
    ps->mountState.eyePointMover.v[1] = savedState->mountEyePosMover.v[1];
    ps->mountState.eyePointMover.v[2] = savedState->mountEyePosMover.v[2];
    ps->mountState.mountFraction = savedState->mountFraction;
    ps->mountState.flags = savedState->mountFlags;
    ps->doorState[0].angle = savedState->doorAngle[0];
    ps->doorState[1].angle = savedState->doorAngle[1];
    ps->skydivePlayerState.pitch = savedState->skydiveState.pitch;
    ps->skydivePlayerState.roll = savedState->skydiveState.roll;
    ps->weapCommon.fWeaponPosFrac = savedState->fWeaponPosFrac;
    ps->weapCommon.fWeaponPosFracIn = savedState->fWeaponPosFracIn;
    ps->weapCommon.fWeaponPosFracMomentum = savedState->fWeaponPosFracMomentum;
    ps->weapCommon.fWeaponPosFracChangeTime = savedState->fWeaponPosFracChangeTime;
    ps->weapCommon.fWeaponPosFracChangeFracVel = savedState->fWeaponPosFracChangeFracVel;
    ps->viewHeightCurrent = savedState->viewHeightCurrent;
    ps->viewHeightLerpTime = savedState->viewHeightLerpTime;
    ps->viewHeightLerpTarget = savedState->viewHeightLerpTarget;
    ps->vehicleState.origin.v[0] = savedState->vehicleOrigin.v[0];
    ps->vehicleState.origin.v[1] = savedState->vehicleOrigin.v[1];
    ps->vehicleState.origin.v[2] = savedState->vehicleOrigin.v[2];
    ps->vehicleState.angles.v[0] = savedState->vehicleAngles.v[0];
    ps->vehicleState.angles.v[1] = savedState->vehicleAngles.v[1];
    ps->vehicleState.angles.v[2] = savedState->vehicleAngles.v[2];
    ps->vehicleState.gunAngles.v[0] = savedState->vehicleGunAngles.v[0];
    ps->vehicleState.gunAngles.v[1] = savedState->vehicleGunAngles.v[1];
    ps->vehicleState.tilt.v[0] = savedState->vehicleTilt.v[0];
    ps->vehicleState.tilt.v[1] = savedState->vehicleTilt.v[1];
  }
}

/*
==============
BG_PlayerExtrap_SavePlayerState
==============
*/
void BG_PlayerExtrap_SavePlayerState(const playerState_s *ps, SavedPlayerState *outSavedState)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_playerextrapolation.cpp", 9, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !outSavedState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_playerextrapolation.cpp", 10, ASSERT_TYPE_ASSERT, "(outSavedState)", (const char *)&queryFormat, "outSavedState") )
    __debugbreak();
  memset_0(outSavedState, 0, sizeof(SavedPlayerState));
  outSavedState->commandTime = ps->commandTime;
  outSavedState->origin.v[0] = ps->origin.v[0];
  outSavedState->origin.v[1] = ps->origin.v[1];
  outSavedState->origin.v[2] = ps->origin.v[2];
  outSavedState->angles.v[0] = ps->viewangles.v[0];
  outSavedState->angles.v[1] = ps->viewangles.v[1];
  outSavedState->angles.v[2] = ps->viewangles.v[2];
  outSavedState->movementDir = ps->movementDir;
  outSavedState->movementDirPrecise = ps->movementDirPrecise;
  outSavedState->velocityClipDir = ps->velocityClipDir;
  outSavedState->moveSpeedForAnimBlend = ps->moveSpeedForAnimBlend;
  *(double *)outSavedState->packedBobCycle = *(double *)ps->packedBobCycle;
  outSavedState->weaponIdleTime = ps->weapCommon.weaponIdleTime;
  outSavedState->weaponIdleTime2 = ps->weapCommon.weaponIdleTime2;
  outSavedState->mountEyePos.v[0] = ps->mountState.eyePoint.v[0];
  outSavedState->mountEyePos.v[1] = ps->mountState.eyePoint.v[1];
  outSavedState->mountEyePos.v[2] = ps->mountState.eyePoint.v[2];
  outSavedState->mountEyePosMover.v[0] = ps->mountState.eyePointMover.v[0];
  outSavedState->mountEyePosMover.v[1] = ps->mountState.eyePointMover.v[1];
  outSavedState->mountEyePosMover.v[2] = ps->mountState.eyePointMover.v[2];
  outSavedState->mountFraction = ps->mountState.mountFraction;
  outSavedState->mountFlags = ps->mountState.flags;
  outSavedState->doorAngle[0] = ps->doorState[0].angle;
  outSavedState->doorAngle[1] = ps->doorState[1].angle;
  outSavedState->skydiveState.pitch = ps->skydivePlayerState.pitch;
  outSavedState->skydiveState.roll = ps->skydivePlayerState.roll;
  outSavedState->fWeaponPosFrac = ps->weapCommon.fWeaponPosFrac;
  outSavedState->fWeaponPosFracIn = ps->weapCommon.fWeaponPosFracIn;
  outSavedState->fWeaponPosFracMomentum = ps->weapCommon.fWeaponPosFracMomentum;
  outSavedState->fWeaponPosFracChangeTime = ps->weapCommon.fWeaponPosFracChangeTime;
  outSavedState->fWeaponPosFracChangeFracVel = ps->weapCommon.fWeaponPosFracChangeFracVel;
  outSavedState->viewHeightCurrent = ps->viewHeightCurrent;
  outSavedState->viewHeightLerpTime = ps->viewHeightLerpTime;
  outSavedState->viewHeightLerpTarget = ps->viewHeightLerpTarget;
  outSavedState->vehicleOrigin.v[0] = ps->vehicleState.origin.v[0];
  outSavedState->vehicleOrigin.v[1] = ps->vehicleState.origin.v[1];
  outSavedState->vehicleOrigin.v[2] = ps->vehicleState.origin.v[2];
  outSavedState->vehicleAngles.v[0] = ps->vehicleState.angles.v[0];
  outSavedState->vehicleAngles.v[1] = ps->vehicleState.angles.v[1];
  outSavedState->vehicleAngles.v[2] = ps->vehicleState.angles.v[2];
  outSavedState->vehicleGunAngles.v[0] = ps->vehicleState.gunAngles.v[0];
  outSavedState->vehicleGunAngles.v[1] = ps->vehicleState.gunAngles.v[1];
  outSavedState->vehicleTilt.v[0] = ps->vehicleState.tilt.v[0];
  outSavedState->vehicleTilt.v[1] = ps->vehicleState.tilt.v[1];
}

/*
==============
BG_PlayerExtrap_SetPlayerState
==============
*/
void BG_PlayerExtrap_SetPlayerState(playerState_s *ps, const playerState_s *extrapolatedPlayerState)
{
  int commandTime; 

  if ( !extrapolatedPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_playerextrapolation.cpp", 100, ASSERT_TYPE_ASSERT, "(extrapolatedPlayerState)", (const char *)&queryFormat, "extrapolatedPlayerState") )
    __debugbreak();
  commandTime = extrapolatedPlayerState->commandTime;
  ps->commandTime = extrapolatedPlayerState->commandTime;
  ps->commandTimeInterpolated = commandTime;
  ps->origin.v[0] = extrapolatedPlayerState->origin.v[0];
  ps->origin.v[1] = extrapolatedPlayerState->origin.v[1];
  ps->origin.v[2] = extrapolatedPlayerState->origin.v[2];
  ps->viewangles.v[0] = extrapolatedPlayerState->viewangles.v[0];
  ps->viewangles.v[1] = extrapolatedPlayerState->viewangles.v[1];
  ps->viewangles.v[2] = extrapolatedPlayerState->viewangles.v[2];
  ps->movementDir = extrapolatedPlayerState->movementDir;
  ps->movementDirPrecise = extrapolatedPlayerState->movementDirPrecise;
  ps->velocityClipDir = extrapolatedPlayerState->velocityClipDir;
  ps->moveSpeedForAnimBlend = extrapolatedPlayerState->moveSpeedForAnimBlend;
  *(double *)ps->packedBobCycle = *(double *)extrapolatedPlayerState->packedBobCycle;
  ps->weapCommon.weaponIdleTime = extrapolatedPlayerState->weapCommon.weaponIdleTime;
  ps->weapCommon.weaponIdleTime2 = extrapolatedPlayerState->weapCommon.weaponIdleTime2;
  ps->mountState.eyePoint.v[0] = extrapolatedPlayerState->mountState.eyePoint.v[0];
  ps->mountState.eyePoint.v[1] = extrapolatedPlayerState->mountState.eyePoint.v[1];
  ps->mountState.eyePoint.v[2] = extrapolatedPlayerState->mountState.eyePoint.v[2];
  ps->mountState.eyePointMover.v[0] = extrapolatedPlayerState->mountState.eyePointMover.v[0];
  ps->mountState.eyePointMover.v[1] = extrapolatedPlayerState->mountState.eyePointMover.v[1];
  ps->mountState.eyePointMover.v[2] = extrapolatedPlayerState->mountState.eyePointMover.v[2];
  ps->mountState.mountFraction = extrapolatedPlayerState->mountState.mountFraction;
  ps->mountState.flags = extrapolatedPlayerState->mountState.flags;
  ps->doorState[0].angle = extrapolatedPlayerState->doorState[0].angle;
  ps->doorState[1].angle = extrapolatedPlayerState->doorState[1].angle;
  ps->skydivePlayerState.pitch = extrapolatedPlayerState->skydivePlayerState.pitch;
  ps->skydivePlayerState.roll = extrapolatedPlayerState->skydivePlayerState.roll;
  ps->weapCommon.fWeaponPosFrac = extrapolatedPlayerState->weapCommon.fWeaponPosFrac;
  ps->weapCommon.fWeaponPosFracIn = extrapolatedPlayerState->weapCommon.fWeaponPosFracIn;
  ps->weapCommon.fWeaponPosFracMomentum = extrapolatedPlayerState->weapCommon.fWeaponPosFracMomentum;
  ps->weapCommon.fWeaponPosFracChangeTime = extrapolatedPlayerState->weapCommon.fWeaponPosFracChangeTime;
  ps->weapCommon.fWeaponPosFracChangeFracVel = extrapolatedPlayerState->weapCommon.fWeaponPosFracChangeFracVel;
  ps->viewHeightCurrent = extrapolatedPlayerState->viewHeightCurrent;
  ps->viewHeightLerpTime = extrapolatedPlayerState->viewHeightLerpTime;
  ps->viewHeightLerpTarget = extrapolatedPlayerState->viewHeightLerpTarget;
  ps->vehicleState.origin.v[0] = extrapolatedPlayerState->vehicleState.origin.v[0];
  ps->vehicleState.origin.v[1] = extrapolatedPlayerState->vehicleState.origin.v[1];
  ps->vehicleState.origin.v[2] = extrapolatedPlayerState->vehicleState.origin.v[2];
  ps->vehicleState.angles.v[0] = extrapolatedPlayerState->vehicleState.angles.v[0];
  ps->vehicleState.angles.v[1] = extrapolatedPlayerState->vehicleState.angles.v[1];
  ps->vehicleState.angles.v[2] = extrapolatedPlayerState->vehicleState.angles.v[2];
  ps->vehicleState.gunAngles.v[0] = extrapolatedPlayerState->vehicleState.gunAngles.v[0];
  ps->vehicleState.gunAngles.v[1] = extrapolatedPlayerState->vehicleState.gunAngles.v[1];
  ps->vehicleState.tilt.v[0] = extrapolatedPlayerState->vehicleState.tilt.v[0];
  ps->vehicleState.tilt.v[1] = extrapolatedPlayerState->vehicleState.tilt.v[1];
}

