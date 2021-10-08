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

  _RBX = savedState;
  _RDI = ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_playerextrapolation.cpp", 54, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_playerextrapolation.cpp", 55, ASSERT_TYPE_ASSERT, "(savedState)", (const char *)&queryFormat, "savedState") )
    __debugbreak();
  commandTime = _RBX->commandTime;
  if ( _RBX->commandTime )
  {
    _RDI->commandTime = commandTime;
    _RDI->commandTimeInterpolated = commandTime;
    _RDI->origin.v[0] = _RBX->origin.v[0];
    _RDI->origin.v[1] = _RBX->origin.v[1];
    _RDI->origin.v[2] = _RBX->origin.v[2];
    _RDI->viewangles.v[0] = _RBX->angles.v[0];
    _RDI->viewangles.v[1] = _RBX->angles.v[1];
    _RDI->viewangles.v[2] = _RBX->angles.v[2];
    _RDI->movementDir = _RBX->movementDir;
    _RDI->movementDirPrecise = _RBX->movementDirPrecise;
    _RDI->velocityClipDir = _RBX->velocityClipDir;
    _RDI->moveSpeedForAnimBlend = _RBX->moveSpeedForAnimBlend;
    __asm
    {
      vmovsd  xmm0, qword ptr [rbx+38h]
      vmovsd  qword ptr [rdi+28h], xmm0
    }
    _RDI->weapCommon.weaponIdleTime = _RBX->weaponIdleTime;
    _RDI->weapCommon.weaponIdleTime2 = _RBX->weaponIdleTime2;
    _RDI->mountState.eyePoint.v[0] = _RBX->mountEyePos.v[0];
    _RDI->mountState.eyePoint.v[1] = _RBX->mountEyePos.v[1];
    _RDI->mountState.eyePoint.v[2] = _RBX->mountEyePos.v[2];
    _RDI->mountState.eyePointMover.v[0] = _RBX->mountEyePosMover.v[0];
    _RDI->mountState.eyePointMover.v[1] = _RBX->mountEyePosMover.v[1];
    _RDI->mountState.eyePointMover.v[2] = _RBX->mountEyePosMover.v[2];
    _RDI->mountState.mountFraction = _RBX->mountFraction;
    _RDI->mountState.flags = _RBX->mountFlags;
    _RDI->doorState[0].angle = _RBX->doorAngle[0];
    _RDI->doorState[1].angle = _RBX->doorAngle[1];
    _RDI->skydivePlayerState.pitch = _RBX->skydiveState.pitch;
    _RDI->skydivePlayerState.roll = _RBX->skydiveState.roll;
    _RDI->weapCommon.fWeaponPosFrac = _RBX->fWeaponPosFrac;
    _RDI->weapCommon.fWeaponPosFracIn = _RBX->fWeaponPosFracIn;
    _RDI->weapCommon.fWeaponPosFracMomentum = _RBX->fWeaponPosFracMomentum;
    _RDI->weapCommon.fWeaponPosFracChangeTime = _RBX->fWeaponPosFracChangeTime;
    _RDI->weapCommon.fWeaponPosFracChangeFracVel = _RBX->fWeaponPosFracChangeFracVel;
    _RDI->viewHeightCurrent = _RBX->viewHeightCurrent;
    _RDI->viewHeightLerpTime = _RBX->viewHeightLerpTime;
    _RDI->viewHeightLerpTarget = _RBX->viewHeightLerpTarget;
    _RDI->vehicleState.origin.v[0] = _RBX->vehicleOrigin.v[0];
    _RDI->vehicleState.origin.v[1] = _RBX->vehicleOrigin.v[1];
    _RDI->vehicleState.origin.v[2] = _RBX->vehicleOrigin.v[2];
    _RDI->vehicleState.angles.v[0] = _RBX->vehicleAngles.v[0];
    _RDI->vehicleState.angles.v[1] = _RBX->vehicleAngles.v[1];
    _RDI->vehicleState.angles.v[2] = _RBX->vehicleAngles.v[2];
    _RDI->vehicleState.gunAngles.v[0] = _RBX->vehicleGunAngles.v[0];
    _RDI->vehicleState.gunAngles.v[1] = _RBX->vehicleGunAngles.v[1];
    _RDI->vehicleState.tilt.v[0] = _RBX->vehicleTilt.v[0];
    _RDI->vehicleState.tilt.v[1] = _RBX->vehicleTilt.v[1];
  }
}

/*
==============
BG_PlayerExtrap_SavePlayerState
==============
*/
void BG_PlayerExtrap_SavePlayerState(const playerState_s *ps, SavedPlayerState *outSavedState)
{
  _RBX = outSavedState;
  _RDI = ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_playerextrapolation.cpp", 9, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_playerextrapolation.cpp", 10, ASSERT_TYPE_ASSERT, "(outSavedState)", (const char *)&queryFormat, "outSavedState") )
    __debugbreak();
  memset_0(_RBX, 0, sizeof(SavedPlayerState));
  _RBX->commandTime = _RDI->commandTime;
  _RBX->origin.v[0] = _RDI->origin.v[0];
  _RBX->origin.v[1] = _RDI->origin.v[1];
  _RBX->origin.v[2] = _RDI->origin.v[2];
  _RBX->angles.v[0] = _RDI->viewangles.v[0];
  _RBX->angles.v[1] = _RDI->viewangles.v[1];
  _RBX->angles.v[2] = _RDI->viewangles.v[2];
  _RBX->movementDir = _RDI->movementDir;
  _RBX->movementDirPrecise = _RDI->movementDirPrecise;
  _RBX->velocityClipDir = _RDI->velocityClipDir;
  _RBX->moveSpeedForAnimBlend = _RDI->moveSpeedForAnimBlend;
  __asm
  {
    vmovsd  xmm0, qword ptr [rdi+28h]
    vmovsd  qword ptr [rbx+38h], xmm0
  }
  _RBX->weaponIdleTime = _RDI->weapCommon.weaponIdleTime;
  _RBX->weaponIdleTime2 = _RDI->weapCommon.weaponIdleTime2;
  _RBX->mountEyePos.v[0] = _RDI->mountState.eyePoint.v[0];
  _RBX->mountEyePos.v[1] = _RDI->mountState.eyePoint.v[1];
  _RBX->mountEyePos.v[2] = _RDI->mountState.eyePoint.v[2];
  _RBX->mountEyePosMover.v[0] = _RDI->mountState.eyePointMover.v[0];
  _RBX->mountEyePosMover.v[1] = _RDI->mountState.eyePointMover.v[1];
  _RBX->mountEyePosMover.v[2] = _RDI->mountState.eyePointMover.v[2];
  _RBX->mountFraction = _RDI->mountState.mountFraction;
  _RBX->mountFlags = _RDI->mountState.flags;
  _RBX->doorAngle[0] = _RDI->doorState[0].angle;
  _RBX->doorAngle[1] = _RDI->doorState[1].angle;
  _RBX->skydiveState.pitch = _RDI->skydivePlayerState.pitch;
  _RBX->skydiveState.roll = _RDI->skydivePlayerState.roll;
  _RBX->fWeaponPosFrac = _RDI->weapCommon.fWeaponPosFrac;
  _RBX->fWeaponPosFracIn = _RDI->weapCommon.fWeaponPosFracIn;
  _RBX->fWeaponPosFracMomentum = _RDI->weapCommon.fWeaponPosFracMomentum;
  _RBX->fWeaponPosFracChangeTime = _RDI->weapCommon.fWeaponPosFracChangeTime;
  _RBX->fWeaponPosFracChangeFracVel = _RDI->weapCommon.fWeaponPosFracChangeFracVel;
  _RBX->viewHeightCurrent = _RDI->viewHeightCurrent;
  _RBX->viewHeightLerpTime = _RDI->viewHeightLerpTime;
  _RBX->viewHeightLerpTarget = _RDI->viewHeightLerpTarget;
  _RBX->vehicleOrigin.v[0] = _RDI->vehicleState.origin.v[0];
  _RBX->vehicleOrigin.v[1] = _RDI->vehicleState.origin.v[1];
  _RBX->vehicleOrigin.v[2] = _RDI->vehicleState.origin.v[2];
  _RBX->vehicleAngles.v[0] = _RDI->vehicleState.angles.v[0];
  _RBX->vehicleAngles.v[1] = _RDI->vehicleState.angles.v[1];
  _RBX->vehicleAngles.v[2] = _RDI->vehicleState.angles.v[2];
  _RBX->vehicleGunAngles.v[0] = _RDI->vehicleState.gunAngles.v[0];
  _RBX->vehicleGunAngles.v[1] = _RDI->vehicleState.gunAngles.v[1];
  _RBX->vehicleTilt.v[0] = _RDI->vehicleState.tilt.v[0];
  _RBX->vehicleTilt.v[1] = _RDI->vehicleState.tilt.v[1];
}

/*
==============
BG_PlayerExtrap_SetPlayerState
==============
*/
void BG_PlayerExtrap_SetPlayerState(playerState_s *ps, const playerState_s *extrapolatedPlayerState)
{
  int commandTime; 

  _RBX = extrapolatedPlayerState;
  _RDI = ps;
  if ( !extrapolatedPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_playerextrapolation.cpp", 100, ASSERT_TYPE_ASSERT, "(extrapolatedPlayerState)", (const char *)&queryFormat, "extrapolatedPlayerState") )
    __debugbreak();
  commandTime = _RBX->commandTime;
  _RDI->commandTime = _RBX->commandTime;
  _RDI->commandTimeInterpolated = commandTime;
  _RDI->origin.v[0] = _RBX->origin.v[0];
  _RDI->origin.v[1] = _RBX->origin.v[1];
  _RDI->origin.v[2] = _RBX->origin.v[2];
  _RDI->viewangles.v[0] = _RBX->viewangles.v[0];
  _RDI->viewangles.v[1] = _RBX->viewangles.v[1];
  _RDI->viewangles.v[2] = _RBX->viewangles.v[2];
  _RDI->movementDir = _RBX->movementDir;
  _RDI->movementDirPrecise = _RBX->movementDirPrecise;
  _RDI->velocityClipDir = _RBX->velocityClipDir;
  _RDI->moveSpeedForAnimBlend = _RBX->moveSpeedForAnimBlend;
  __asm
  {
    vmovsd  xmm0, qword ptr [rbx+28h]
    vmovsd  qword ptr [rdi+28h], xmm0
  }
  _RDI->weapCommon.weaponIdleTime = _RBX->weapCommon.weaponIdleTime;
  _RDI->weapCommon.weaponIdleTime2 = _RBX->weapCommon.weaponIdleTime2;
  _RDI->mountState.eyePoint.v[0] = _RBX->mountState.eyePoint.v[0];
  _RDI->mountState.eyePoint.v[1] = _RBX->mountState.eyePoint.v[1];
  _RDI->mountState.eyePoint.v[2] = _RBX->mountState.eyePoint.v[2];
  _RDI->mountState.eyePointMover.v[0] = _RBX->mountState.eyePointMover.v[0];
  _RDI->mountState.eyePointMover.v[1] = _RBX->mountState.eyePointMover.v[1];
  _RDI->mountState.eyePointMover.v[2] = _RBX->mountState.eyePointMover.v[2];
  _RDI->mountState.mountFraction = _RBX->mountState.mountFraction;
  _RDI->mountState.flags = _RBX->mountState.flags;
  _RDI->doorState[0].angle = _RBX->doorState[0].angle;
  _RDI->doorState[1].angle = _RBX->doorState[1].angle;
  _RDI->skydivePlayerState.pitch = _RBX->skydivePlayerState.pitch;
  _RDI->skydivePlayerState.roll = _RBX->skydivePlayerState.roll;
  _RDI->weapCommon.fWeaponPosFrac = _RBX->weapCommon.fWeaponPosFrac;
  _RDI->weapCommon.fWeaponPosFracIn = _RBX->weapCommon.fWeaponPosFracIn;
  _RDI->weapCommon.fWeaponPosFracMomentum = _RBX->weapCommon.fWeaponPosFracMomentum;
  _RDI->weapCommon.fWeaponPosFracChangeTime = _RBX->weapCommon.fWeaponPosFracChangeTime;
  _RDI->weapCommon.fWeaponPosFracChangeFracVel = _RBX->weapCommon.fWeaponPosFracChangeFracVel;
  _RDI->viewHeightCurrent = _RBX->viewHeightCurrent;
  _RDI->viewHeightLerpTime = _RBX->viewHeightLerpTime;
  _RDI->viewHeightLerpTarget = _RBX->viewHeightLerpTarget;
  _RDI->vehicleState.origin.v[0] = _RBX->vehicleState.origin.v[0];
  _RDI->vehicleState.origin.v[1] = _RBX->vehicleState.origin.v[1];
  _RDI->vehicleState.origin.v[2] = _RBX->vehicleState.origin.v[2];
  _RDI->vehicleState.angles.v[0] = _RBX->vehicleState.angles.v[0];
  _RDI->vehicleState.angles.v[1] = _RBX->vehicleState.angles.v[1];
  _RDI->vehicleState.angles.v[2] = _RBX->vehicleState.angles.v[2];
  _RDI->vehicleState.gunAngles.v[0] = _RBX->vehicleState.gunAngles.v[0];
  _RDI->vehicleState.gunAngles.v[1] = _RBX->vehicleState.gunAngles.v[1];
  _RDI->vehicleState.tilt.v[0] = _RBX->vehicleState.tilt.v[0];
  _RDI->vehicleState.tilt.v[1] = _RBX->vehicleState.tilt.v[1];
}

