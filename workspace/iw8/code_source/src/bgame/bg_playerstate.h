/*
==============
BG_GetCrouchProneBlendMap
==============
*/

double __fastcall BG_GetCrouchProneBlendMap(const playerState_s *ps)
{
  double result; 

  *(float *)&result = ?BG_GetCrouchProneBlendMap@@YAMPEBUplayerState_s@@@Z(ps);
  return result;
}

/*
==============
BG_SetADSVelocity
==============
*/

void __fastcall BG_SetADSVelocity(playerState_s *ps, float value)
{
  ?BG_SetADSVelocity@@YAXPEAUplayerState_s@@M@Z(ps, value);
}

/*
==============
BG_SetSpeedScaleMultiplier
==============
*/

void __fastcall BG_SetSpeedScaleMultiplier(playerState_s *ps, float value)
{
  ?BG_SetSpeedScaleMultiplier@@YAXPEAUplayerState_s@@M@Z(ps, value);
}

/*
==============
BG_SetAdsZoomLevelOnStateChange
==============
*/

void __fastcall BG_SetAdsZoomLevelOnStateChange(playerState_s *ps, float value)
{
  ?BG_SetAdsZoomLevelOnStateChange@@YAXPEAUplayerState_s@@M@Z(ps, value);
}

/*
==============
UsableKeyEncode
==============
*/

unsigned int __fastcall UsableKeyEncode(const unsigned int useIndex, const UsableClass useClass, const unsigned __int8 useData)
{
  return ?UsableKeyEncode@@YAIIW4UsableClass@@E@Z(useIndex, useClass, useData);
}

/*
==============
BG_SetHoldBlendFractionStartFast
==============
*/

void __fastcall BG_SetHoldBlendFractionStartFast(playerState_s *ps, float value)
{
  ?BG_SetHoldBlendFractionStartFast@@YAXPEAUplayerState_s@@M@Z(ps, value);
}

/*
==============
BG_SetHoldBlendFractionStartSlow
==============
*/

void __fastcall BG_SetHoldBlendFractionStartSlow(playerState_s *ps, float value)
{
  ?BG_SetHoldBlendFractionStartSlow@@YAXPEAUplayerState_s@@M@Z(ps, value);
}

/*
==============
BG_GetHoldBlendFractionStartSlow
==============
*/

double __fastcall BG_GetHoldBlendFractionStartSlow(const playerState_s *ps)
{
  double result; 

  *(float *)&result = ?BG_GetHoldBlendFractionStartSlow@@YAMPEBUplayerState_s@@@Z(ps);
  return result;
}

/*
==============
BG_SetAdsBlendFractionStart
==============
*/

void __fastcall BG_SetAdsBlendFractionStart(playerState_s *ps, float value)
{
  ?BG_SetAdsBlendFractionStart@@YAXPEAUplayerState_s@@M@Z(ps, value);
}

/*
==============
BG_SetLastReloadFraction
==============
*/

void __fastcall BG_SetLastReloadFraction(playerState_s *ps, float value)
{
  ?BG_SetLastReloadFraction@@YAXPEAUplayerState_s@@M@Z(ps, value);
}

/*
==============
BG_GetSkydiveCurrentThrottle
==============
*/

double __fastcall BG_GetSkydiveCurrentThrottle(const playerState_s *ps)
{
  double result; 

  *(float *)&result = ?BG_GetSkydiveCurrentThrottle@@YAMPEBUplayerState_s@@@Z(ps);
  return result;
}

/*
==============
BG_GetMantleEndPosOffset
==============
*/

void __fastcall BG_GetMantleEndPosOffset(const playerState_s *ps, vec3_t *outVec)
{
  ?BG_GetMantleEndPosOffset@@YAXPEBUplayerState_s@@AEATvec3_t@@@Z(ps, outVec);
}

/*
==============
BG_GetAdsBlendFractionStart
==============
*/

double __fastcall BG_GetAdsBlendFractionStart(const playerState_s *ps)
{
  double result; 

  *(float *)&result = ?BG_GetAdsBlendFractionStart@@YAMPEBUplayerState_s@@@Z(ps);
  return result;
}

/*
==============
BG_SetPreciseMovementDir
==============
*/

void __fastcall BG_SetPreciseMovementDir(playerState_s *ps, float value)
{
  ?BG_SetPreciseMovementDir@@YAXPEAUplayerState_s@@M@Z(ps, value);
}

/*
==============
BG_HandsOccupied
==============
*/

bool __fastcall BG_HandsOccupied(const playerState_s *ps)
{
  return ?BG_HandsOccupied@@YA_NPEBUplayerState_s@@@Z(ps);
}

/*
==============
BG_GetMantleLedgePosOffset
==============
*/

void __fastcall BG_GetMantleLedgePosOffset(const playerState_s *ps, vec3_t *outVec)
{
  ?BG_GetMantleLedgePosOffset@@YAXPEBUplayerState_s@@AEATvec3_t@@@Z(ps, outVec);
}

/*
==============
BG_GetHoldBlendFractionStartFast
==============
*/

double __fastcall BG_GetHoldBlendFractionStartFast(const playerState_s *ps)
{
  double result; 

  *(float *)&result = ?BG_GetHoldBlendFractionStartFast@@YAMPEBUplayerState_s@@@Z(ps);
  return result;
}

/*
==============
BG_GetSkydiveCurrentThrottle
==============
*/
double BG_GetSkydiveCurrentThrottle(const playerState_s *ps)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_playerstate.h", 1196, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return MSG_UnpackUnsignedFloat(ps->skydivePlayerState.currentThrottle, 1.0, 0xAu);
}

/*
==============
BG_GetAdsBlendFractionStart
==============
*/
double BG_GetAdsBlendFractionStart(const playerState_s *ps)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_playerstate.h", 1172, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return MSG_UnpackUnsignedFloat(ps->weapCommon.weaponOffsetAdsBlendFraction, 1.0, 0x10u);
}

/*
==============
BG_GetCrouchProneBlendMap
==============
*/
double BG_GetCrouchProneBlendMap(const playerState_s *ps)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_playerstate.h", 1188, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return MSG_UnpackUnsignedFloat(ps->weapCommon.crouchProneBlendMap, 1.0, 0xCu);
}

/*
==============
BG_GetHoldBlendFractionStartFast
==============
*/
double BG_GetHoldBlendFractionStartFast(const playerState_s *ps)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_playerstate.h", 1168, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return MSG_UnpackUnsignedFloat(ps->weapCommon.weaponOffsetHoldBlendFractionFast, 1.0, 0x10u);
}

/*
==============
BG_GetHoldBlendFractionStartSlow
==============
*/
double BG_GetHoldBlendFractionStartSlow(const playerState_s *ps)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_playerstate.h", 1167, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return MSG_UnpackUnsignedFloat(ps->weapCommon.weaponOffsetHoldBlendFractionSlow, 1.0, 0x10u);
}

/*
==============
BG_SetAdsBlendFractionStart
==============
*/
void BG_SetAdsBlendFractionStart(playerState_s *ps, float value)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_playerstate.h", 1172, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  ps->weapCommon.weaponOffsetAdsBlendFraction = MSG_PackUnsignedFloat(value, 1.0, 0x10u);
}

/*
==============
BG_SetHoldBlendFractionStartFast
==============
*/
void BG_SetHoldBlendFractionStartFast(playerState_s *ps, float value)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_playerstate.h", 1168, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  ps->weapCommon.weaponOffsetHoldBlendFractionFast = MSG_PackUnsignedFloat(value, 1.0, 0x10u);
}

/*
==============
BG_SetHoldBlendFractionStartSlow
==============
*/
void BG_SetHoldBlendFractionStartSlow(playerState_s *ps, float value)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_playerstate.h", 1167, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  ps->weapCommon.weaponOffsetHoldBlendFractionSlow = MSG_PackUnsignedFloat(value, 1.0, 0x10u);
}

/*
==============
UsableKeyEncode
==============
*/
__int64 UsableKeyEncode(const unsigned int useIndex, const UsableClass useClass, const unsigned __int8 useData)
{
  if ( useIndex > 0x3FFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_playerstate.h", 210, ASSERT_TYPE_ASSERT, "(useIndex <= ( 0x3FFFFF ))", (const char *)&queryFormat, "useIndex <= USABLEKEY_INDEX_MASK") )
    __debugbreak();
  return useIndex | ((useData | ((unsigned __int8)useClass << 8)) << 22);
}

/*
==============
BG_SetPreciseMovementDir
==============
*/
void BG_SetPreciseMovementDir(playerState_s *ps, float value)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_playerstate.h", 1149, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  ps->movementDirPrecise = MSG_PackUnsignedFloat(value, 360.0, 0x10u);
}

/*
==============
BG_GetMantleEndPosOffset
==============
*/
void BG_GetMantleEndPosOffset(const playerState_s *ps, vec3_t *outVec)
{
  double v4; 
  double v5; 
  double v6; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_playerstate.h", 1247, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v4 = MSG_UnpackSignedFloat(ps->mantleState.endPosOffset.v[0], 160.0, 0xFu);
  outVec->v[0] = *(float *)&v4;
  v5 = MSG_UnpackSignedFloat(ps->mantleState.endPosOffset.v[1], 160.0, 0xFu);
  outVec->v[1] = *(float *)&v5;
  v6 = MSG_UnpackSignedFloat(ps->mantleState.endPosOffset.v[2], 160.0, 0xFu);
  outVec->v[2] = *(float *)&v6;
}

/*
==============
BG_GetMantleLedgePosOffset
==============
*/
void BG_GetMantleLedgePosOffset(const playerState_s *ps, vec3_t *outVec)
{
  double v4; 
  double v5; 
  double v6; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_playerstate.h", 1243, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v4 = MSG_UnpackSignedFloat(ps->mantleState.ledgePosOffset.v[0], 110.0, 0xFu);
  outVec->v[0] = *(float *)&v4;
  v5 = MSG_UnpackSignedFloat(ps->mantleState.ledgePosOffset.v[1], 110.0, 0xFu);
  outVec->v[1] = *(float *)&v5;
  v6 = MSG_UnpackSignedFloat(ps->mantleState.ledgePosOffset.v[2], 110.0, 0xFu);
  outVec->v[2] = *(float *)&v6;
}

/*
==============
BG_SetSpeedScaleMultiplier
==============
*/
void BG_SetSpeedScaleMultiplier(playerState_s *ps, float value)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_playerstate.h", 1145, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  ps->moveSpeedScaleMultiplier = MSG_PackUnsignedFloat(value, 5.0, 0xCu);
}

/*
==============
BG_SetADSVelocity
==============
*/
void BG_SetADSVelocity(playerState_s *ps, float value)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_playerstate.h", 1192, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  ps->weapCommon.fWeaponPosFracChangeFracVel = MSG_PackSignedFloat(value, 20.0, 9u);
}

/*
==============
BG_SetAdsZoomLevelOnStateChange
==============
*/
void BG_SetAdsZoomLevelOnStateChange(playerState_s *ps, float value)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_playerstate.h", 1184, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  ps->weapCommon.adsZoomLevelFractionOnStateChange = MSG_PackUnsignedFloat(value, 3.0, 8u);
}

/*
==============
BG_SetLastReloadFraction
==============
*/
void BG_SetLastReloadFraction(playerState_s *ps, float value)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_playerstate.h", 1176, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  ps->weapCommon.lastReloadFraction = MSG_PackUnsignedFloat(value, 1.0, 6u);
}

/*
==============
BG_HandsOccupied
==============
*/
bool BG_HandsOccupied(const playerState_s *ps)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_playerstate.h", 1237, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_BLAST_IMPACT|0x80) )
    return 0;
  if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 127, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
    __debugbreak();
  return GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0x30u);
}

