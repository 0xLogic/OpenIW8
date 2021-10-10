/*
==============
BG_GameInterface_HasPerk_FastCrouch
==============
*/

bool __fastcall BG_GameInterface_HasPerk_FastCrouch(const playerState_s *ps)
{
  return ?BG_GameInterface_HasPerk_FastCrouch@@YA_NPEBUplayerState_s@@@Z(ps);
}

/*
==============
BG_GameInterface_SuperSprint_Enhanced_GetRechargeScale
==============
*/

double __fastcall BG_GameInterface_SuperSprint_Enhanced_GetRechargeScale()
{
  double result; 

  *(float *)&result = ?BG_GameInterface_SuperSprint_Enhanced_GetRechargeScale@@YAMXZ();
  return result;
}

/*
==============
BG_GameInterface_FastCrouch_GetSpeedScale
==============
*/

double __fastcall BG_GameInterface_FastCrouch_GetSpeedScale()
{
  double result; 

  *(float *)&result = ?BG_GameInterface_FastCrouch_GetSpeedScale@@YAMXZ();
  return result;
}

/*
==============
BG_GameInterface_VehicleGetBoneIndex_TagBody
==============
*/

unsigned __int8 __fastcall BG_GameInterface_VehicleGetBoneIndex_TagBody(const DObj *const vehicleObj)
{
  return ?BG_GameInterface_VehicleGetBoneIndex_TagBody@@YAEQEBUDObj@@@Z(vehicleObj);
}

/*
==============
BG_GameInterface_HasPerk_SuperSprintEnhanced
==============
*/

bool __fastcall BG_GameInterface_HasPerk_SuperSprintEnhanced(const playerState_s *ps)
{
  return ?BG_GameInterface_HasPerk_SuperSprintEnhanced@@YA_NPEBUplayerState_s@@@Z(ps);
}

/*
==============
BG_GameInterface_AddContributionToPlayerEye
==============
*/

void __fastcall BG_GameInterface_AddContributionToPlayerEye(const playerState_s *ps, const BgHandler *handler, vec3_t *outOrigin, const WorldUpReferenceFrame *refFrame)
{
  ?BG_GameInterface_AddContributionToPlayerEye@@YAXPEBUplayerState_s@@PEBVBgHandler@@AEATvec3_t@@PEBVWorldUpReferenceFrame@@@Z(ps, handler, outOrigin, refFrame);
}

/*
==============
BG_GameInterface_SuperSprint_Enhanced_GetTime
==============
*/

double __fastcall BG_GameInterface_SuperSprint_Enhanced_GetTime()
{
  double result; 

  *(float *)&result = ?BG_GameInterface_SuperSprint_Enhanced_GetTime@@YAMXZ();
  return result;
}

/*
==============
BG_GameInterface_OnPmoveTick
==============
*/

void __fastcall BG_GameInterface_OnPmoveTick(pmove_t *pm)
{
  ?BG_GameInterface_OnPmoveTick@@YAXPEAVpmove_t@@@Z(pm);
}

/*
==============
BG_GameInterface_GetRemoteControlledVehicleEntityNumFromType
==============
*/

__int16 __fastcall BG_GameInterface_GetRemoteControlledVehicleEntityNumFromType(const playerState_s *ps, const entityState_t *const es)
{
  return ?BG_GameInterface_GetRemoteControlledVehicleEntityNumFromType@@YAFPEBUplayerState_s@@QEBUentityState_t@@@Z(ps, es);
}

/*
==============
BG_GameInterface_AddContributionToPlayerEye
==============
*/
void BG_GameInterface_AddContributionToPlayerEye(const playerState_s *ps, const BgHandler *handler, vec3_t *outOrigin, const WorldUpReferenceFrame *refFrame)
{
  WorldUpReferenceFrame::AddUpContribution((WorldUpReferenceFrame *)refFrame, ps->viewHeightCurrent, outOrigin);
}

/*
==============
BG_GameInterface_FastCrouch_GetSpeedScale
==============
*/
float BG_GameInterface_FastCrouch_GetSpeedScale()
{
  const dvar_t *v0; 

  v0 = DCONST_DVARMPFLT_fastCrouchMovement_speedScale;
  if ( !DCONST_DVARMPFLT_fastCrouchMovement_speedScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fastCrouchMovement_speedScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  return v0->current.value;
}

/*
==============
BG_GameInterface_GetRemoteControlledVehicleEntityNumFromType
==============
*/
__int64 BG_GameInterface_GetRemoteControlledVehicleEntityNumFromType(const playerState_s *ps, const entityState_t *const es)
{
  if ( es->eType == ET_VEHICLE )
    return (unsigned __int16)ps->remoteControlEnt;
  else
    return 2047i64;
}

/*
==============
BG_GameInterface_HasPerk_FastCrouch
==============
*/
bool BG_GameInterface_HasPerk_FastCrouch(const playerState_s *ps)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\igame_iw8\\bgame\\bg_gameinterface.cpp", 68, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return BG_HasPerk(&ps->perks, 0x43u);
}

/*
==============
BG_GameInterface_HasPerk_SuperSprintEnhanced
==============
*/
bool BG_GameInterface_HasPerk_SuperSprintEnhanced(const playerState_s *ps)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\igame_iw8\\bgame\\bg_gameinterface.cpp", 48, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return BG_HasPerk(&ps->perks, 0x42u);
}

/*
==============
BG_GameInterface_OnPmoveTick
==============
*/

void __fastcall BG_GameInterface_OnPmoveTick(pmove_t *pm)
{
  BG_ExampleSystemFunctions_OnPmoveTick(pm);
}

/*
==============
BG_GameInterface_SuperSprint_Enhanced_GetRechargeScale
==============
*/
float BG_GameInterface_SuperSprint_Enhanced_GetRechargeScale()
{
  const dvar_t *v0; 

  v0 = DVARFLT_superSprint_enhancedRechargeScale;
  if ( !DVARFLT_superSprint_enhancedRechargeScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "superSprint_enhancedRechargeScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  return v0->current.value;
}

/*
==============
BG_GameInterface_SuperSprint_Enhanced_GetTime
==============
*/
float BG_GameInterface_SuperSprint_Enhanced_GetTime()
{
  const dvar_t *v0; 

  v0 = DVARFLT_superSprint_enhancedTime;
  if ( !DVARFLT_superSprint_enhancedTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "superSprint_enhancedTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  return v0->current.value;
}

/*
==============
BG_GameInterface_VehicleGetBoneIndex_TagBody
==============
*/
__int64 BG_GameInterface_VehicleGetBoneIndex_TagBody(const DObj *const vehicleObj)
{
  __int64 result; 
  unsigned __int8 inOutIndex; 
  int modelIndex; 

  inOutIndex = -2;
  if ( !DObjGetBoneIndexInternal_10(vehicleObj, scr_const.tag_body_animate, &inOutIndex, &modelIndex) || (result = inOutIndex, inOutIndex >= 0xFEu) )
  {
    inOutIndex = -2;
    DObjGetBoneIndexInternal_10(vehicleObj, scr_const.body_animate_jnt, &inOutIndex, &modelIndex);
    return inOutIndex;
  }
  return result;
}

