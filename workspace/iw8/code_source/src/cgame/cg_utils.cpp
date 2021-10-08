/*
==============
CG_Utils_ShouldHighlightInShield
==============
*/

bool __fastcall CG_Utils_ShouldHighlightInShield(const LocalClientNum_t localClientNum)
{
  return ?CG_Utils_ShouldHighlightInShield@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_Utils_GetDObjOrientation
==============
*/

void __fastcall CG_Utils_GetDObjOrientation(LocalClientNum_t localClientNum, int dobjHandle, tmat33_t<vec3_t> *outAxis, vec3_t *outOrigin)
{
  ?CG_Utils_GetDObjOrientation@@YAXW4LocalClientNum_t@@HAEAT?$tmat33_t@Tvec3_t@@@@AEATvec3_t@@@Z(localClientNum, dobjHandle, outAxis, outOrigin);
}

/*
==============
CG_Utils_GetActiveWeaponBoneIndex
==============
*/

bool __fastcall CG_Utils_GetActiveWeaponBoneIndex(LocalClientNum_t localClientNum, DObj *obj, const playerState_s *ps, const entityState_t *es, PlayerHandIndex hand, scr_string_t boneTag, unsigned __int8 *index)
{
  return ?CG_Utils_GetActiveWeaponBoneIndex@@YA_NW4LocalClientNum_t@@PEAUDObj@@PEBUplayerState_s@@PEBUentityState_t@@W4PlayerHandIndex@@W4scr_string_t@@PEAE@Z(localClientNum, obj, ps, es, hand, boneTag, index);
}

/*
==============
CG_Utils_UpdateActiveInputContext
==============
*/

void __fastcall CG_Utils_UpdateActiveInputContext(LocalClientNum_t localClientNum)
{
  ?CG_Utils_UpdateActiveInputContext@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_Utils_GetHudOutlineColor
==============
*/

unsigned int __fastcall CG_Utils_GetHudOutlineColor(unsigned int index)
{
  return ?CG_Utils_GetHudOutlineColor@@YAII@Z(index);
}

/*
==============
CG_IsBumperPingLayoutAllowed
==============
*/

bool __fastcall CG_IsBumperPingLayoutAllowed()
{
  return ?CG_IsBumperPingLayoutAllowed@@YA_NXZ();
}

/*
==============
CG_Utils_PlayerLockedOn
==============
*/

bool __fastcall CG_Utils_PlayerLockedOn(const LocalClientNum_t localClientNum, const centity_t *const cent)
{
  return ?CG_Utils_PlayerLockedOn@@YA_NW4LocalClientNum_t@@QEBUcentity_t@@@Z(localClientNum, cent);
}

/*
==============
CG_Utils_GetHudOutlineTeamColor
==============
*/

unsigned int __fastcall CG_Utils_GetHudOutlineTeamColor(CgGlobalsMP *cgameGlobMP, const LocalClientNum_t localClientNum, const team_t team, bool fade, float outsideFade)
{
  return ?CG_Utils_GetHudOutlineTeamColor@@YAIPEAVCgGlobalsMP@@W4LocalClientNum_t@@W4team_t@@_NM@Z(cgameGlobMP, localClientNum, team, fade, outsideFade);
}

/*
==============
CG_Utils_ScriptNotifySoundDone
==============
*/

void __fastcall CG_Utils_ScriptNotifySoundDone(int entnum, int index)
{
  ?CG_Utils_ScriptNotifySoundDone@@YAXHH@Z(entnum, index);
}

/*
==============
CG_Utils_SetRightStickDeadzoneOverride
==============
*/

void __fastcall CG_Utils_SetRightStickDeadzoneOverride(float rightStickDeadzoneOverrideVal)
{
  ?CG_Utils_SetRightStickDeadzoneOverride@@YAXM@Z(rightStickDeadzoneOverrideVal);
}

/*
==============
CG_Utils_GetHudOutlineColorVector
==============
*/

void __fastcall CG_Utils_GetHudOutlineColorVector(unsigned int index, vec4_t *outColorVector)
{
  ?CG_Utils_GetHudOutlineColorVector@@YAXIAEATvec4_t@@@Z(index, outColorVector);
}

/*
==============
CG_Utils_GetWeaponAttachmentBoneIndex
==============
*/

bool __fastcall CG_Utils_GetWeaponAttachmentBoneIndex(LocalClientNum_t localClientNum, DObj *obj, const Weapon *weapon, const bool isViewModel, const bool usingAlternate, scr_string_t boneTag, unsigned __int8 *index)
{
  return ?CG_Utils_GetWeaponAttachmentBoneIndex@@YA_NW4LocalClientNum_t@@PEAUDObj@@AEBUWeapon@@_N3W4scr_string_t@@PEAE@Z(localClientNum, obj, weapon, isViewModel, usingAlternate, boneTag, index);
}

/*
==============
CG_Utils_ShouldHighlightVehicle
==============
*/

bool __fastcall CG_Utils_ShouldHighlightVehicle(const LocalClientNum_t localClientNum)
{
  return ?CG_Utils_ShouldHighlightVehicle@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_Utils_GetActiveWeaponAttachmentBoneIndex
==============
*/

bool __fastcall CG_Utils_GetActiveWeaponAttachmentBoneIndex(LocalClientNum_t localClientNum, DObj *obj, const playerState_s *ps, const entityState_t *es, PlayerHandIndex hand, scr_string_t boneTag, unsigned __int8 *index)
{
  return ?CG_Utils_GetActiveWeaponAttachmentBoneIndex@@YA_NW4LocalClientNum_t@@PEAUDObj@@PEBUplayerState_s@@PEBUentityState_t@@W4PlayerHandIndex@@W4scr_string_t@@PEAE@Z(localClientNum, obj, ps, es, hand, boneTag, index);
}

/*
==============
CG_Utils_GetBoneOrigin
==============
*/

void __fastcall CG_Utils_GetBoneOrigin(DObj *dObj, const cpose_t *cpose, scr_string_t boneName, unsigned __int8 *outBoneIndex, vec3_t *outBoneOrigin)
{
  ?CG_Utils_GetBoneOrigin@@YAXPEAUDObj@@PEBUcpose_t@@W4scr_string_t@@PEAEAEATvec3_t@@@Z(dObj, cpose, boneName, outBoneIndex, outBoneOrigin);
}

/*
==============
CG_Utils_ShouldHighlightInScope
==============
*/

bool __fastcall CG_Utils_ShouldHighlightInScope(const LocalClientNum_t localClientNum)
{
  return ?CG_Utils_ShouldHighlightInScope@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_Utils_PlayNotetrackMeleeAttackSound
==============
*/

void __fastcall CG_Utils_PlayNotetrackMeleeAttackSound(const LocalClientNum_t localClientNum, int entNum, bool isViewmodel)
{
  ?CG_Utils_PlayNotetrackMeleeAttackSound@@YAXW4LocalClientNum_t@@H_N@Z(localClientNum, entNum, isViewmodel);
}

/*
==============
CG_Utils_HidePart
==============
*/

void __fastcall CG_Utils_HidePart(DObj *dObj, const char *modelName, scr_string_t boneName, const int doHide)
{
  ?CG_Utils_HidePart@@YAXPEAUDObj@@PEBDW4scr_string_t@@H@Z(dObj, modelName, boneName, doHide);
}

/*
==============
CG_Utils_ShouldHighlightAgents
==============
*/

bool __fastcall CG_Utils_ShouldHighlightAgents(const LocalClientNum_t localClientNum)
{
  return ?CG_Utils_ShouldHighlightAgents@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_Utils_ShouldHighlightCharacters
==============
*/

bool __fastcall CG_Utils_ShouldHighlightCharacters(const LocalClientNum_t localClientNum)
{
  return ?CG_Utils_ShouldHighlightCharacters@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_Utils_GetPlayerClipAmmoCount
==============
*/

int __fastcall CG_Utils_GetPlayerClipAmmoCount(const LocalClientNum_t localClientNum, PlayerHandIndex hand)
{
  return ?CG_Utils_GetPlayerClipAmmoCount@@YAHW4LocalClientNum_t@@W4PlayerHandIndex@@@Z(localClientNum, hand);
}

/*
==============
CG_Utils_GetActiveBindingSetMouseSentitivityFactors
==============
*/

void __fastcall CG_Utils_GetActiveBindingSetMouseSentitivityFactors(LocalClientNum_t localClientNum, float *outSensFactorX, float *outSensFactorY)
{
  ?CG_Utils_GetActiveBindingSetMouseSentitivityFactors@@YAXW4LocalClientNum_t@@PEAM1@Z(localClientNum, outSensFactorX, outSensFactorY);
}

/*
==============
CG_Utils_WhizbyPoint
==============
*/

void __fastcall CG_Utils_WhizbyPoint(LocalClientNum_t localClientNum, const vec3_t *start, const vec3_t *end, vec3_t *outPoint)
{
  ?CG_Utils_WhizbyPoint@@YAXW4LocalClientNum_t@@AEBTvec3_t@@1AEAT2@@Z(localClientNum, start, end, outPoint);
}

/*
==============
CG_Utils_PlayNotetrackSound
==============
*/

unsigned int __fastcall CG_Utils_PlayNotetrackSound(const LocalClientNum_t localClientNum, const char *aliasName, const int entNum, const vec3_t *origin, const bool isViewmodel, const bool isMayhem, const bool playOnTag)
{
  return ?CG_Utils_PlayNotetrackSound@@YAIW4LocalClientNum_t@@PEBDHAEBTvec3_t@@_N33@Z(localClientNum, aliasName, entNum, origin, isViewmodel, isMayhem, playOnTag);
}

/*
==============
CG_IsFullyInitialized
==============
*/

bool __fastcall CG_IsFullyInitialized(const LocalClientNum_t localClientNum)
{
  return ?CG_IsFullyInitialized@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_Utils_ProcessNotetracks
==============
*/

void __fastcall CG_Utils_ProcessNotetracks(LocalClientNum_t localClientNum, const int entNum, DObj *dObj, const cpose_t *cpose, const XAnimNotify *notify, const bool isViewmodel, const bool isMayhem, const unsigned int mayhemEntId, const unsigned int subObjIdx, bool processFxNotetracks)
{
  ?CG_Utils_ProcessNotetracks@@YAXW4LocalClientNum_t@@HPEAUDObj@@PEBUcpose_t@@PEBUXAnimNotify@@_N4II_N@Z(localClientNum, entNum, dObj, cpose, notify, isViewmodel, isMayhem, mayhemEntId, subObjIdx, processFxNotetracks);
}

/*
==============
CG_Utils_IsActionCamActive
==============
*/

bool __fastcall CG_Utils_IsActionCamActive(const LocalClientNum_t localClientNum)
{
  return ?CG_Utils_IsActionCamActive@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_Utils_BoldGameMessage
==============
*/

void __fastcall CG_Utils_BoldGameMessage(LocalClientNum_t localClientNum, const char *msg, int flags)
{
  ?CG_Utils_BoldGameMessage@@YAXW4LocalClientNum_t@@PEBDH@Z(localClientNum, msg, flags);
}

/*
==============
CG_Utils_ShouldHighlightScriptMovers
==============
*/

bool __fastcall CG_Utils_ShouldHighlightScriptMovers(const LocalClientNum_t localClientNum)
{
  return ?CG_Utils_ShouldHighlightScriptMovers@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_Utils_ShouldHighlightTurrets
==============
*/

bool __fastcall CG_Utils_ShouldHighlightTurrets(const LocalClientNum_t localClientNum)
{
  return ?CG_Utils_ShouldHighlightTurrets@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_Utils_SubtitlePrint
==============
*/

void __fastcall CG_Utils_SubtitlePrint(const LocalClientNum_t localClientNum, int msec, const SndAlias *alias)
{
  ?CG_Utils_SubtitlePrint@@YAXW4LocalClientNum_t@@HPEBUSndAlias@@@Z(localClientNum, msec, alias);
}

/*
==============
CG_IsPlayerUsingButtonLayoutBumperPing
==============
*/

bool __fastcall CG_IsPlayerUsingButtonLayoutBumperPing(const int controllerIndex)
{
  return ?CG_IsPlayerUsingButtonLayoutBumperPing@@YA_NH@Z(controllerIndex);
}

/*
==============
CG_IsCurrentButtonLayoutFlipped
==============
*/

bool __fastcall CG_IsCurrentButtonLayoutFlipped(const int controllerIndex)
{
  return ?CG_IsCurrentButtonLayoutFlipped@@YA_NH@Z(controllerIndex);
}

/*
==============
CG_Utils_TimeIsInThePast
==============
*/

int __fastcall CG_Utils_TimeIsInThePast(LocalClientNum_t localClientNum, int msecWhenPlayed)
{
  return ?CG_Utils_TimeIsInThePast@@YAHW4LocalClientNum_t@@H@Z(localClientNum, msecWhenPlayed);
}

/*
==============
GetOutlineFadeAmount
==============
*/

double __fastcall GetOutlineFadeAmount(const int *beginFadeTime, LocalClientNum_t localClientNum)
{
  double result; 

  *(float *)&result = ?GetOutlineFadeAmount@@YAMAEBHW4LocalClientNum_t@@@Z(beginFadeTime, localClientNum);
  return result;
}

/*
==============
CG_Utils_StencilScriptControlled
==============
*/

bool __fastcall CG_Utils_StencilScriptControlled(const LocalClientNum_t localClientNum)
{
  return ?CG_Utils_StencilScriptControlled@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_Utils_GetWeaponBoneIndex
==============
*/

bool __fastcall CG_Utils_GetWeaponBoneIndex(LocalClientNum_t localClientNum, DObj *obj, const Weapon *weapon, const bool isViewModel, const bool isDefaultModel, const bool isDualWield, PlayerHandIndex hand, scr_string_t boneTag, unsigned __int8 *index)
{
  return ?CG_Utils_GetWeaponBoneIndex@@YA_NW4LocalClientNum_t@@PEAUDObj@@AEBUWeapon@@_N33W4PlayerHandIndex@@W4scr_string_t@@PEAE@Z(localClientNum, obj, weapon, isViewModel, isDefaultModel, isDualWield, hand, boneTag, index);
}

/*
==============
CG_Utils_GameMessage
==============
*/

void __fastcall CG_Utils_GameMessage(LocalClientNum_t localClientNum, const char *msg, int flags)
{
  ?CG_Utils_GameMessage@@YAXW4LocalClientNum_t@@PEBDH@Z(localClientNum, msg, flags);
}

/*
==============
CG_IsBumperPingLayoutAllowed
==============
*/

bool __fastcall CG_IsBumperPingLayoutAllowed()
{
  return CG_GameInterface_PlayingBR();
}

/*
==============
CG_IsCurrentButtonLayoutFlipped
==============
*/
bool CG_IsCurrentButtonLayoutFlipped(const int controllerIndex)
{
  bool result; 
  int ClientFromController; 
  const char *CurrentButtonLayout; 

  result = GamerProfile_GetGamepadEnabled(controllerIndex);
  if ( result )
  {
    ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
    CurrentButtonLayout = GamerProfile_GetCurrentButtonLayout(ClientFromController);
    return I_strstr(CurrentButtonLayout, "_alt") != NULL;
  }
  return result;
}

/*
==============
CG_IsFullyInitialized
==============
*/
bool CG_IsFullyInitialized(const LocalClientNum_t localClientNum)
{
  return CG_GetLocalClientGlobals(localClientNum)->nextSnap != NULL;
}

/*
==============
CG_IsPlayerUsingButtonLayoutBumperPing
==============
*/
bool CG_IsPlayerUsingButtonLayoutBumperPing(const int controllerIndex)
{
  int ClientFromController; 
  const char *CurrentButtonLayout; 

  if ( !GamerProfile_GetGamepadEnabled(controllerIndex) || !CG_GameInterface_PlayingBR() )
    return 0;
  ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
  CurrentButtonLayout = GamerProfile_GetCurrentButtonLayout(ClientFromController);
  return I_strstr(CurrentButtonLayout, "buttons_br_ping_lb") != NULL;
}

/*
==============
CG_Utils_BoldGameMessage
==============
*/
void CG_Utils_BoldGameMessage(LocalClientNum_t localClientNum, const char *msg, int flags)
{
  lua_State *v3; 
  int ControllerFromClient; 
  const dvar_t *v8; 

  v3 = LUI_luaVM;
  ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
  LUI_GameMessage(ControllerFromClient, msg, 1, v3);
  v8 = DVARINT_cg_gameBoldMessageWidth;
  if ( !DVARINT_cg_gameBoldMessageWidth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_gameBoldMessageWidth") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  CL_ConsolePrint(localClientNum, 3, msg, 0, v8->current.integer, flags);
}

/*
==============
CG_Utils_FindBone
==============
*/
__int64 CG_Utils_FindBone(const XModel *model, const XModel *rightModel, const DObj *obj, PlayerHandIndex hand, scr_string_t boneTag, unsigned __int8 *index)
{
  const XModel **models; 
  unsigned int v8; 
  unsigned int numModels; 
  bool v10; 
  unsigned int v11; 
  const XModel *v12; 

  if ( !model )
    return 0i64;
  models = obj->models;
  v8 = 0;
  numModels = obj->numModels;
  v10 = 0;
  if ( hand == WEAPON_HAND_LEFT )
  {
    if ( rightModel )
      v10 = rightModel == model;
  }
  v11 = 0;
  if ( !obj->numModels )
    return 0i64;
  while ( model != *models )
  {
LABEL_10:
    v12 = *models;
    ++v11;
    ++models;
    v8 += v12->numBones;
    if ( v11 >= numModels )
      return 0i64;
  }
  if ( v10 )
  {
    v10 = 0;
    goto LABEL_10;
  }
  if ( !XModelGetBoneIndex(model, boneTag, v8, index) )
    goto LABEL_10;
  return 1i64;
}

/*
==============
CG_Utils_GameMessage
==============
*/
void CG_Utils_GameMessage(LocalClientNum_t localClientNum, const char *msg, int flags)
{
  lua_State *v3; 
  int ControllerFromClient; 
  const dvar_t *v8; 

  v3 = LUI_luaVM;
  ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
  LUI_GameMessage(ControllerFromClient, msg, 0, v3);
  v8 = DVARINT_cg_gameMessageWidth;
  if ( !DVARINT_cg_gameMessageWidth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_gameMessageWidth") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  CL_ConsolePrint(localClientNum, 2, msg, 0, v8->current.integer, flags);
}

/*
==============
CG_Utils_GetActiveBindingSetMouseSentitivityFactors
==============
*/
void CG_Utils_GetActiveBindingSetMouseSentitivityFactors(LocalClientNum_t localClientNum, float *outSensFactorX, float *outSensFactorY)
{
  VehicleType v6; 
  const dvar_t *v7; 
  const dvar_t *v8; 
  const char *v9; 
  const dvar_t *v10; 
  VehiclePhysicsGameProfile vehicleGameProfile; 

  if ( (!outSensFactorX || !outSensFactorY) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_utils.cpp", 1322, ASSERT_TYPE_ASSERT, "(outSensFactorX != nullptr && outSensFactorY != nullptr)", (const char *)&queryFormat, "outSensFactorX != nullptr && outSensFactorY != nullptr") )
    __debugbreak();
  v6 = CG_Vehicle_RemoteControlledVehicleType(localClientNum, &vehicleGameProfile);
  *outSensFactorX = 1.0;
  *outSensFactorY = 1.0;
  if ( v6 == VEH_TREADED )
  {
    if ( vehicleGameProfile )
    {
      if ( vehicleGameProfile != VEH_GAMEPROFILE_WHEELSON )
        return;
      v7 = DCONST_DVARFLT_cl_wheelsonMouseSensFactorX;
      if ( !DCONST_DVARFLT_cl_wheelsonMouseSensFactorX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_wheelsonMouseSensFactorX") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v7);
      *outSensFactorX = v7->current.value;
      v8 = DCONST_DVARFLT_cl_wheelsonMouseSensFactorY;
      if ( DCONST_DVARFLT_cl_wheelsonMouseSensFactorY )
        goto LABEL_20;
      v9 = "cl_wheelsonMouseSensFactorY";
    }
    else
    {
      v10 = DCONST_DVARFLT_cl_bradleyMouseSensFactorX;
      if ( !DCONST_DVARFLT_cl_bradleyMouseSensFactorX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_bradleyMouseSensFactorX") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v10);
      *outSensFactorX = v10->current.value;
      v8 = DCONST_DVARFLT_cl_bradleyMouseSensFactorY;
      if ( DCONST_DVARFLT_cl_bradleyMouseSensFactorY )
        goto LABEL_20;
      v9 = "cl_bradleyMouseSensFactorY";
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v9) )
      __debugbreak();
LABEL_20:
    Dvar_CheckFrontendServerThread(v8);
    *outSensFactorY = v8->current.value;
  }
}

/*
==============
CG_Utils_GetActiveWeaponAttachmentBoneIndex
==============
*/
char CG_Utils_GetActiveWeaponAttachmentBoneIndex(LocalClientNum_t localClientNum, DObj *obj, const playerState_s *ps, const entityState_t *es, PlayerHandIndex hand, scr_string_t boneTag, unsigned __int8 *index)
{
  unsigned __int8 *v7; 
  __int64 v11; 
  unsigned int v12; 
  unsigned __int8 *v13; 
  WeaponAttachment **v14; 
  const XModel *AttachmentModel; 
  unsigned int v16; 
  unsigned int v17; 
  const XModel **v18; 
  unsigned int v19; 
  const XModel *v20; 
  bool usingAlternate; 
  bool isViewModel; 
  bool isDualWield; 
  bool isDefaultModel; 
  unsigned int WeaponAttachmentsWithIds; 
  DObj *v27; 
  unsigned __int8 *v28; 
  Weapon weapon; 
  WeaponAttachment *attachments[30]; 
  unsigned __int8 attachmentIds[32]; 

  v7 = index;
  v28 = index;
  v27 = obj;
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_utils.cpp", 240, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  CG_Utils_GetActiveWeaponState(localClientNum, ps, es, &weapon, &isViewModel, &usingAlternate, &isDefaultModel, &isDualWield);
  v11 = (__int64)v27;
  if ( !v27 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_utils.cpp", 181, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  v12 = 0;
  WeaponAttachmentsWithIds = BG_GetWeaponAttachmentsWithIds(&weapon, usingAlternate, (const WeaponAttachment **)attachments, attachmentIds);
  if ( !WeaponAttachmentsWithIds )
  {
LABEL_17:
    *v7 = -1;
    return 0;
  }
  v13 = attachmentIds;
  v14 = attachments;
  while ( 1 )
  {
    AttachmentModel = BG_GetAttachmentModel(*v14, weapon.attachmentVariationIndices[*v13], isViewModel);
    if ( AttachmentModel )
      break;
LABEL_15:
    ++v12;
    ++v13;
    ++v14;
    if ( v12 >= WeaponAttachmentsWithIds )
    {
      v7 = v28;
      goto LABEL_17;
    }
  }
  v16 = *(unsigned __int8 *)(v11 + 15);
  v17 = 0;
  v18 = *(const XModel ***)(v11 + 240);
  v19 = 0;
  if ( !v16 )
  {
LABEL_14:
    v11 = (__int64)v27;
    goto LABEL_15;
  }
  while ( AttachmentModel != *v18 || !XModelGetBoneIndex(AttachmentModel, boneTag, v17, v28) )
  {
    v20 = *v18;
    ++v19;
    ++v18;
    v17 += v20->numBones;
    if ( v19 >= v16 )
      goto LABEL_14;
  }
  return 1;
}

/*
==============
CG_Utils_GetActiveWeaponBoneIndex
==============
*/
char CG_Utils_GetActiveWeaponBoneIndex(LocalClientNum_t localClientNum, DObj *obj, const playerState_s *ps, const entityState_t *es, PlayerHandIndex hand, scr_string_t boneTag, unsigned __int8 *index)
{
  bool v8; 
  const XModel *WeaponModels; 
  const XModel *v10; 
  bool isDefaultModel; 
  bool isViewModel; 
  bool isDualWield; 
  bool usingAlternate; 
  Weapon weapon; 

  CG_Utils_GetActiveWeaponState(localClientNum, ps, es, &weapon, &isViewModel, &usingAlternate, &isDefaultModel, &isDualWield);
  v8 = isDualWield;
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_utils.cpp", 204, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  WeaponModels = BG_GetWeaponModels(hand, &weapon, isViewModel, isDefaultModel, v8, 0, 0);
  if ( hand == WEAPON_HAND_LEFT )
    v10 = BG_GetWeaponModels(WEAPON_HAND_DEFAULT, &weapon, isViewModel, isDefaultModel, v8, 0, 0);
  else
    v10 = NULL;
  if ( (unsigned int)CG_Utils_FindBone(WeaponModels, v10, obj, hand, boneTag, index) )
    return 1;
  *index = -1;
  return 0;
}

/*
==============
CG_Utils_GetActiveWeaponState
==============
*/
void CG_Utils_GetActiveWeaponState(LocalClientNum_t localClientNum, const playerState_s *ps, const entityState_t *es, Weapon *weapon, bool *isViewModel, bool *usingAlternate, bool *isDefaultModel, bool *isDualWield)
{
  __int64 v8; 
  cg_t *LocalClientGlobals; 
  __int64 v12; 
  CgWeaponMap *v13; 
  CgWeaponSystem *v14; 
  unsigned int number; 
  const characterInfo_t *CharacterInfo; 
  bool inAltWeaponMode; 
  bool isWeaponDefault; 
  __int64 v23; 
  __int64 v24; 

  v8 = localClientNum;
  _RBP = weapon;
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_utils.cpp", 116, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( !_RBP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_utils.cpp", 117, ASSERT_TYPE_ASSERT, "(weapon)", (const char *)&queryFormat, "weapon") )
    __debugbreak();
  if ( !isViewModel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_utils.cpp", 118, ASSERT_TYPE_ASSERT, "(isViewModel)", (const char *)&queryFormat, "isViewModel") )
    __debugbreak();
  if ( !usingAlternate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_utils.cpp", 119, ASSERT_TYPE_ASSERT, "(usingAlternate)", (const char *)&queryFormat, "usingAlternate") )
    __debugbreak();
  if ( !isDefaultModel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_utils.cpp", 120, ASSERT_TYPE_ASSERT, "(isDefaultModel)", (const char *)&queryFormat, "isDefaultModel") )
    __debugbreak();
  if ( !isDualWield && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_utils.cpp", 121, ASSERT_TYPE_ASSERT, "(isDualWield)", (const char *)&queryFormat, "isDualWield") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v8);
  v12 = v8;
  if ( !CgWeaponMap::ms_instance[v8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v13 = CgWeaponMap::ms_instance[v12];
  if ( CgWeaponSystem::ms_allocatedType == WEAPONS_TYPE_NONE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 530, ASSERT_TYPE_ASSERT, "(ms_allocatedType != CgWeaponsType::WEAPONS_TYPE_NONE)", "%s\n\tTrying to access the weapon system for localClientNum %d but the weapon system type is not known\n", "ms_allocatedType != CgWeaponsType::WEAPONS_TYPE_NONE", v8) )
    __debugbreak();
  if ( (unsigned int)v8 >= CgWeaponSystem::ms_allocatedCount )
  {
    LODWORD(v24) = CgWeaponSystem::ms_allocatedCount;
    LODWORD(v23) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 531, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v23, v24) )
      __debugbreak();
  }
  if ( !CgWeaponSystem::ms_weaponSystemArray[v12] )
  {
    LODWORD(v24) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 532, ASSERT_TYPE_ASSERT, "(ms_weaponSystemArray[localClientNum])", "%s\n\tTrying to access unallocated weapon system for localClientNum %d\n", "ms_weaponSystemArray[localClientNum]", v24) )
      __debugbreak();
  }
  v14 = CgWeaponSystem::ms_weaponSystemArray[v12];
  number = es->number;
  if ( LocalClientGlobals->HasCharacterInfo(LocalClientGlobals, number) )
    CharacterInfo = CG_GetCharacterInfo(LocalClientGlobals, number);
  else
    CharacterInfo = NULL;
  *isDualWield = BG_PlayerOrEntityDualWielding(v13, ps, es, CharacterInfo);
  if ( !ps || LocalClientGlobals->renderingThirdPerson )
  {
    *isViewModel = 0;
    if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 438, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    _RAX = BgWeaponMap::GetWeapon(v13, es->weaponHandle);
  }
  else
  {
    *isViewModel = 1;
    _RAX = BG_GetViewmodelWeapon(v13, ps);
  }
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rbp+0], ymm0
    vmovups xmm1, xmmword ptr [rax+20h]
    vmovups xmmword ptr [rbp+20h], xmm1
    vmovsd  xmm0, qword ptr [rax+30h]
    vmovsd  qword ptr [rbp+30h], xmm0
  }
  *(_DWORD *)&_RBP->weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
  if ( *isViewModel )
    inAltWeaponMode = BG_UsingAlternate(ps);
  else
    inAltWeaponMode = es->inAltWeaponMode;
  *usingAlternate = inAltWeaponMode;
  if ( *isViewModel )
    isWeaponDefault = LocalClientGlobals->playerWeaponInfo.isWeaponDefault;
  else
    isWeaponDefault = !v14->IsWeaponWorldModelLoaded(v14, _RBP);
  *isDefaultModel = isWeaponDefault;
}

/*
==============
CG_Utils_GetBoneOrigin
==============
*/
void CG_Utils_GetBoneOrigin(DObj *dObj, const cpose_t *cpose, scr_string_t boneName, unsigned __int8 *outBoneIndex, vec3_t *outBoneOrigin)
{
  char *debugName; 
  const char *Name; 
  const char *v11; 
  int modelIndex; 
  tmat33_t<vec3_t> outTagMat; 

  if ( !dObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_utils.cpp", 382, ASSERT_TYPE_ASSERT, "(dObj)", (const char *)&queryFormat, "dObj") )
    __debugbreak();
  if ( !cpose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_utils.cpp", 383, ASSERT_TYPE_ASSERT, "(cpose)", (const char *)&queryFormat, "cpose") )
    __debugbreak();
  if ( !outBoneIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_utils.cpp", 384, ASSERT_TYPE_ASSERT, "(outBoneIndex)", (const char *)&queryFormat, "outBoneIndex") )
    __debugbreak();
  DObjGetBoneIndexInternal_59(dObj, boneName, outBoneIndex, &modelIndex);
  if ( *outBoneIndex == 0xFF )
  {
    debugName = "<null anim>";
    if ( dObj->tree->anims )
      debugName = dObj->tree->anims->debugName;
    Name = DObjGetName(dObj);
    v11 = SL_ConvertToString(boneName);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_utils.cpp", 389, ASSERT_TYPE_ASSERT, "(*outBoneIndex != 255)", "%s\n\tERROR: Failed to find bone '%s' on model '%s' to play a notetrack on, for anim '%s'", "*outBoneIndex != NO_BONEINDEX", v11, Name, debugName) )
      __debugbreak();
  }
  CG_DObjGetWorldBoneMatrix(cpose, dObj, *outBoneIndex, &outTagMat, outBoneOrigin);
}

/*
==============
CG_Utils_GetDObjOrientation
==============
*/
void CG_Utils_GetDObjOrientation(LocalClientNum_t localClientNum, int dobjHandle, tmat33_t<vec3_t> *outAxis, vec3_t *outOrigin)
{
  centity_t *Entity; 
  cg_t *LocalClientGlobals; 
  const tmat33_t<vec3_t> *ViewModelTransform; 
  __int64 v11; 

  if ( (unsigned int)dobjHandle > 0x9E4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_utils.cpp", 93, ASSERT_TYPE_ASSERT, "( ( dobjHandle >= 0 && dobjHandle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "( dobjHandle ) = %i", dobjHandle) )
    __debugbreak();
  if ( dobjHandle >= 2048 )
  {
    if ( dobjHandle - 2048 >= 550 )
    {
      LODWORD(v11) = dobjHandle;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_utils.cpp", 102, ASSERT_TYPE_ASSERT, "( ( dobjHandle >= ((( 2048 ) + 0)) && dobjHandle - ((( 2048 ) + 0)) < 550 ) )", "( dobjHandle ) = %i", v11) )
        __debugbreak();
    }
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    ViewModelTransform = (const tmat33_t<vec3_t> *)cg_t::GetViewModelTransform(LocalClientGlobals);
    AxisCopy(ViewModelTransform, outAxis);
    *outOrigin = ViewModelTransform[1].m[0];
  }
  else
  {
    Entity = CG_GetEntity(localClientNum, dobjHandle);
    AnglesToAxis(&Entity->pose.angles, outAxis);
    CG_GetPoseOrigin(&Entity->pose, outOrigin);
  }
}

/*
==============
CG_Utils_GetHudOutlineColor
==============
*/
__int64 CG_Utils_GetHudOutlineColor(unsigned int index)
{
  __int64 v1; 
  const dvar_t *v2; 

  v1 = index;
  if ( index >= 0xC && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_utils.cpp", 922, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( HUD_OUTLINE_COLOR_MAX )", "index doesn't index HUD_OUTLINE_COLOR_MAX\n\t%i not in [0, %i)", index, 12) )
    __debugbreak();
  v2 = cg_hud_outline_colors[v1];
  if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 683, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  return (unsigned __int8)v2->current.integer | v2->current.integer & 0xFF000000 | (((unsigned __int8)BYTE1(v2->current.integer) | ((unsigned __int8)BYTE2(v2->current.integer) << 8)) << 8);
}

/*
==============
CG_Utils_GetHudOutlineColorVector
==============
*/
void CG_Utils_GetHudOutlineColorVector(unsigned int index, vec4_t *outColorVector)
{
  __int64 v2; 

  v2 = index;
  _RDI = outColorVector;
  if ( index >= 0xC && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_utils.cpp", 932, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( HUD_OUTLINE_COLOR_MAX )", "index doesn't index HUD_OUTLINE_COLOR_MAX\n\t%i not in [0, %i)", index, 12) )
    __debugbreak();
  _RBX = cg_hud_outline_colors[v2];
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 683, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovd   xmm0, dword ptr [rbx+28h]
    vpmovzxbd xmm1, xmm0
    vcvtdq2ps xmm3, xmm1
    vmulps  xmm0, xmm3, cs:__xmm@3b8080813b8080813b8080813b808081
    vmovups xmmword ptr [rdi], xmm0
  }
}

/*
==============
CG_Utils_GetHudOutlineTeamColor
==============
*/
__int64 CG_Utils_GetHudOutlineTeamColor(CgGlobalsMP *cgameGlobMP, const LocalClientNum_t localClientNum, const team_t team, bool fade)
{
  __int64 v6; 
  CgCompassSystemMP *v9; 
  CgMLGSpectator *MLGSpectator; 
  unsigned int OutlineFadeTime; 
  unsigned int time; 
  bool v13; 
  unsigned int v29; 
  HudOutlineColor PlayerOutlineColor; 
  __int64 v32; 
  const dvar_t *v33; 
  __int64 v35; 
  __int64 v36; 
  vec4_t color; 

  v6 = localClientNum;
  if ( (_BYTE)CgCompassSystem::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 586, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::COMPASS_SYSTEM_TYPE)", "%s\n\tTrying to access the compass system for localClientNum %d but the compass system type does not match-> System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::COMPASS_SYSTEM_TYPE", localClientNum, 2, (unsigned __int8)CgCompassSystem::ms_allocatedType) )
    __debugbreak();
  if ( (unsigned int)v6 >= CgCompassSystem::ms_allocatedCount )
  {
    LODWORD(v36) = CgCompassSystem::ms_allocatedCount;
    LODWORD(v35) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 587, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v35, v36) )
      __debugbreak();
  }
  if ( !CgCompassSystem::ms_compassSystemArray[v6] )
  {
    LODWORD(v36) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 588, ASSERT_TYPE_ASSERT, "(ms_compassSystemArray[localClientNum])", "%s\n\tTrying to access unallocated compass system for localClientNum %d\n", "ms_compassSystemArray[localClientNum]", v36) )
      __debugbreak();
  }
  v9 = (CgCompassSystemMP *)CgCompassSystem::ms_compassSystemArray[v6];
  MLGSpectator = CgMLGSpectator::GetMLGSpectator((const LocalClientNum_t)v6);
  if ( CgCompassSystemMP::GetTeamCompassColor(v9, cgameGlobMP, team, &color) )
  {
    if ( fade )
    {
      OutlineFadeTime = CgMLGSpectator::GetOutlineFadeTime(MLGSpectator);
      time = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)v6)->time;
      v13 = OutlineFadeTime <= time;
      if ( (int)OutlineFadeTime < (int)time )
      {
        __asm
        {
          vmovss  xmm1, cs:__real@3f800000
          vxorps  xmm0, xmm0, xmm0
        }
        v13 = time <= OutlineFadeTime;
        __asm
        {
          vcvtsi2ss xmm0, xmm0, ecx
          vmulss  xmm2, xmm0, cs:__real@3a2ec33e
          vsubss  xmm0, xmm1, xmm2
        }
      }
      else
      {
        __asm { vmovss  xmm0, cs:__real@3f800000 }
      }
      __asm
      {
        vminss  xmm1, xmm0, [rsp+0A8h+outsideFade]
        vxorps  xmm0, xmm0, xmm0
        vcomiss xmm1, xmm0
      }
      if ( v13 )
      {
        __asm
        {
          vshufps xmm1, xmm0, xmm0, 0FFh
          vmovups xmmword ptr [rsp+0A8h+color], xmm0
        }
      }
    }
    else
    {
      __asm { vmovss  xmm1, dword ptr [rsp+0A8h+color+0Ch] }
    }
    __asm
    {
      vmovss  xmm2, cs:__real@437f0000
      vmulss  xmm0, xmm1, xmm2
      vmulss  xmm1, xmm2, dword ptr [rsp+0A8h+color+4]
      vcvttss2si rcx, xmm1
      vmulss  xmm1, xmm2, dword ptr [rsp+0A8h+color]
      vcvttss2si rdx, xmm0
      vmulss  xmm0, xmm2, dword ptr [rsp+0A8h+color+8]
      vcvttss2si rax, xmm0
    }
    v29 = ((unsigned int)_RCX | ((((_DWORD)_RDX << 8) | (unsigned int)_RAX) << 8)) << 8;
    __asm { vcvttss2si rcx, xmm1 }
  }
  else
  {
    PlayerOutlineColor = CgMLGSpectator::GetPlayerOutlineColor(MLGSpectator, (const LocalClientNum_t)v6, team);
    v32 = (unsigned int)PlayerOutlineColor;
    if ( (unsigned int)PlayerOutlineColor >= HUD_OUTLINE_COLOR_MAX )
    {
      LODWORD(v36) = 12;
      LODWORD(v35) = PlayerOutlineColor;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_utils.cpp", 922, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( HUD_OUTLINE_COLOR_MAX )", "index doesn't index HUD_OUTLINE_COLOR_MAX\n\t%i not in [0, %i)", v35, v36) )
        __debugbreak();
    }
    v33 = cg_hud_outline_colors[v32];
    if ( !v33 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 683, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v33);
    v29 = v33->current.integer & 0xFF000000 | (((unsigned __int8)BYTE1(v33->current.integer) | ((unsigned __int8)BYTE2(v33->current.integer) << 8)) << 8);
    LODWORD(_RCX) = (unsigned __int8)v33->current.integer;
  }
  return (unsigned int)_RCX | v29;
}

/*
==============
CG_Utils_GetPlayerClipAmmoCount
==============
*/
__int64 CG_Utils_GetPlayerClipAmmoCount(const LocalClientNum_t localClientNum, PlayerHandIndex hand)
{
  cg_t *LocalClientGlobals; 
  const playerState_s *p_predictedPlayerState; 
  const Weapon *WeaponForHud; 
  bool UsingAltForHud; 
  int v10; 
  AmmoStore result; 
  AmmoStore r_clip2; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
  WeaponForHud = CG_GetWeaponForHud(LocalClientGlobals);
  UsingAltForHud = CG_GetUsingAltForHud(&LocalClientGlobals->predictedPlayerState);
  if ( !p_predictedPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1248, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  _RAX = BG_AmmoStoreForWeapon(&result, WeaponForHud, UsingAltForHud);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rsp+0D8h+r_clip2.weapon.weaponIdx], ymm0
    vmovups ymm1, ymmword ptr [rax+20h]
    vmovups ymmword ptr [rsp+0D8h+r_clip2.weapon.attachmentVariationIndices+5], ymm1
  }
  if ( !p_predictedPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1229, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( BG_HasLadderHand(p_predictedPlayerState) && hand == WEAPON_HAND_LEFT )
    hand = WEAPON_HAND_DEFAULT;
  v10 = 0;
  while ( !BG_IsClipCompatible(&p_predictedPlayerState->weapCommon.ammoInClip[v10].clipIndex, &r_clip2) )
  {
    if ( (unsigned int)++v10 >= 0xF )
      return 0i64;
  }
  return (unsigned int)p_predictedPlayerState->weapCommon.ammoInClip[v10].ammoCount[hand];
}

/*
==============
CG_Utils_GetWeaponAttachmentBoneIndex
==============
*/
char CG_Utils_GetWeaponAttachmentBoneIndex(LocalClientNum_t localClientNum, DObj *obj, const Weapon *weapon, const bool isViewModel, const bool usingAlternate, scr_string_t boneTag, unsigned __int8 *index)
{
  unsigned __int8 *v7; 
  bool v8; 
  const Weapon *v9; 
  DObj *v10; 
  unsigned int v11; 
  unsigned __int8 *v12; 
  WeaponAttachment **v13; 
  const XModel *AttachmentModel; 
  unsigned int numModels; 
  unsigned int v16; 
  const XModel **models; 
  unsigned int v18; 
  const XModel *v19; 
  unsigned int WeaponAttachmentsWithIds; 
  WeaponAttachment *attachments[30]; 
  unsigned __int8 attachmentIds[32]; 

  v7 = index;
  v8 = isViewModel;
  v9 = weapon;
  v10 = obj;
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_utils.cpp", 181, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  v11 = 0;
  WeaponAttachmentsWithIds = BG_GetWeaponAttachmentsWithIds(v9, usingAlternate, (const WeaponAttachment **)attachments, attachmentIds);
  if ( !WeaponAttachmentsWithIds )
  {
LABEL_16:
    *v7 = -1;
    return 0;
  }
  v12 = attachmentIds;
  v13 = attachments;
  while ( 1 )
  {
    AttachmentModel = BG_GetAttachmentModel(*v13, v9->attachmentVariationIndices[*v12], v8);
    if ( !AttachmentModel )
      goto LABEL_12;
    numModels = v10->numModels;
    v16 = 0;
    models = v10->models;
    v18 = 0;
    if ( numModels )
      break;
LABEL_11:
    v9 = weapon;
    v10 = obj;
LABEL_12:
    ++v11;
    ++v12;
    ++v13;
    if ( v11 >= WeaponAttachmentsWithIds )
    {
      v7 = index;
      goto LABEL_16;
    }
    v8 = isViewModel;
  }
  while ( AttachmentModel != *models || !XModelGetBoneIndex(AttachmentModel, boneTag, v16, index) )
  {
    v19 = *models;
    ++v18;
    ++models;
    v16 += v19->numBones;
    if ( v18 >= numModels )
      goto LABEL_11;
  }
  return 1;
}

/*
==============
CG_Utils_GetWeaponBoneIndex
==============
*/
char CG_Utils_GetWeaponBoneIndex(LocalClientNum_t localClientNum, DObj *obj, const Weapon *weapon, const bool isViewModel, const bool isDefaultModel, const bool isDualWield, PlayerHandIndex hand, scr_string_t boneTag, unsigned __int8 *index)
{
  const XModel *WeaponModels; 
  const XModel *v13; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_utils.cpp", 204, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  WeaponModels = BG_GetWeaponModels(hand, weapon, isViewModel, isDefaultModel, isDualWield, 0, 0);
  if ( hand == WEAPON_HAND_LEFT )
    v13 = BG_GetWeaponModels(WEAPON_HAND_DEFAULT, weapon, isViewModel, isDefaultModel, isDualWield, 0, 0);
  else
    v13 = NULL;
  if ( (unsigned int)CG_Utils_FindBone(WeaponModels, v13, obj, hand, boneTag, index) )
    return 1;
  *index = -1;
  return 0;
}

/*
==============
CG_Utils_HidePart
==============
*/
void CG_Utils_HidePart(DObj *dObj, const char *modelName, scr_string_t boneName, const int doHide)
{
  unsigned __int8 ReverseModelBoneIndex; 
  const char *v9; 
  const char *v10; 
  unsigned int v11; 
  unsigned __int64 v12; 
  DObjPartBits partBits; 

  if ( !dObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_utils.cpp", 329, ASSERT_TYPE_ASSERT, "(dObj)", (const char *)&queryFormat, "dObj") )
    __debugbreak();
  if ( !boneName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_utils.cpp", 330, ASSERT_TYPE_ASSERT, "(boneName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "boneName != NULL_SCR_STRING") )
    __debugbreak();
  if ( modelName && *modelName )
  {
    ReverseModelBoneIndex = DObjGetReverseModelBoneIndex(dObj, modelName, boneName);
    if ( ReverseModelBoneIndex == 0xFF )
    {
      v9 = SL_ConvertToString(boneName);
      Com_PrintError(19, "CG_Utils_HidePart: Cannot find part '%s' in entity model '%s'\n", v9, modelName);
    }
  }
  else
  {
    ReverseModelBoneIndex = DObjGetReverseBoneIndex(dObj, boneName);
    if ( ReverseModelBoneIndex == 0xFF )
    {
      v10 = SL_ConvertToString(boneName);
      Com_PrintError(19, "CG_Utils_HidePart: Cannot find part '%s' in entity model\n", v10);
    }
  }
  DObjGetHidePartBits(dObj, &partBits);
  v11 = 0x80000000 >> (ReverseModelBoneIndex & 0x1F);
  v12 = (unsigned __int64)ReverseModelBoneIndex >> 5;
  if ( doHide )
    partBits.array[v12] |= v11;
  else
    partBits.array[v12] &= ~v11;
  DObjSetHidePartBits(dObj, &partBits);
}

/*
==============
CG_Utils_IsActionCamActive
==============
*/
bool CG_Utils_IsActionCamActive(const LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  cg_t *v2; 
  const playerState_s *p_predictedPlayerState; 
  const dvar_t *v5; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v2 = LocalClientGlobals;
  if ( LocalClientGlobals->renderingThirdPerson )
    return 0;
  p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
  if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2184, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_predictedPlayerState->eFlags, ACTIVE, 0xBu) )
    return 0;
  if ( !p_predictedPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2166, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( p_predictedPlayerState == (const playerState_s *)-376i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2072, ASSERT_TYPE_ASSERT, "(esFlags)", (const char *)&queryFormat, "esFlags") )
    __debugbreak();
  if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_predictedPlayerState->eFlags, ACTIVE, 7u) )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2076, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL )") )
      __debugbreak();
    return 0;
  }
  v5 = DCONST_DVARBOOL_helmetCamForceEnable;
  if ( !DCONST_DVARBOOL_helmetCamForceEnable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "helmetCamForceEnable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  return v5->current.enabled || BG_IsSpectating(p_predictedPlayerState) && GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&p_predictedPlayerState->otherFlags, GameModeFlagValues::ms_mpValue, 0x2Cu) || BG_IsSpectating(p_predictedPlayerState) && v2->spectatingHelmetCam;
}

/*
==============
CG_Utils_PlayNotetrackMeleeAttackSound
==============
*/
void CG_Utils_PlayNotetrackMeleeAttackSound(const LocalClientNum_t localClientNum, int entNum, bool isViewmodel)
{
  cg_t *LocalClientGlobals; 
  cg_t *v7; 
  unsigned int clothType; 
  cg_t *v9; 
  const characterInfo_t *v11; 
  CgWeaponMap *Instance; 
  WeaponSFXPackage *SfxPackage; 
  MeleeImpactType sfxMeleeImpactType; 
  const SndAliasList *ClothMeleeAttackSoundPLR; 
  centity_t *Entity; 
  float v32; 
  float v33; 
  CgSoundSystem *SoundSystem; 
  bool outIsAltMelee; 
  WeaponMaterialType materialType; 
  MeleeResult outResult; 
  unsigned int variant; 
  vec3_t outOrg; 
  MeleeAnimType outAnimType; 
  __int64 v51; 
  vec3_t origin; 
  Weapon r_weapon; 

  v51 = -2i64;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v7 = LocalClientGlobals;
  *(_QWORD *)outOrg.v = LocalClientGlobals;
  if ( isViewmodel )
    entNum = LocalClientGlobals->predictedPlayerState.clientNum;
  clothType = 0;
  outAnimType = COUNT|DODGE;
  materialType = MOVEMENT;
  outIsAltMelee = 0;
  variant = 0;
  outResult = HIT;
  v9 = CG_GetLocalClientGlobals(localClientNum);
  if ( !v9->HasCharacterInfo(v9, entNum) )
    goto LABEL_12;
  _RAX = CG_GetCharacterInfo(v9, entNum);
  v11 = _RAX;
  if ( !_RAX )
  {
    v7 = *(cg_t **)outOrg.v;
LABEL_12:
    sfxMeleeImpactType = MELEE_IMPACT_TYPE_GUN_MEDIUM;
    goto LABEL_13;
  }
  clothType = _RAX->clothType;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax+5F4h]
    vmovups ymmword ptr [rbp+57h+r_weapon.weaponIdx], ymm0
    vmovups xmm1, xmmword ptr [rax+614h]
    vmovups xmmword ptr [rbp+57h+r_weapon.attachmentVariationIndices+5], xmm1
    vmovsd  xmm0, qword ptr [rax+624h]
    vmovsd  qword ptr [rbp+57h+r_weapon.attachmentVariationIndices+15h], xmm0
  }
  *(_DWORD *)&r_weapon.weaponCamo = *(_DWORD *)&_RAX->dobjHeldWeapon.weaponCamo;
  if ( v9->predictedPlayerState.clientNum == entNum )
  {
    Instance = CgWeaponMap::GetInstance(localClientNum);
    _RAX = BG_GetViewmodelWeapon(Instance, &v9->predictedPlayerState);
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rbp+57h+r_weapon.weaponIdx], ymm0
      vmovups xmm1, xmmword ptr [rax+20h]
      vmovups xmmword ptr [rbp+57h+r_weapon.attachmentVariationIndices+5], xmm1
      vmovsd  xmm0, qword ptr [rax+30h]
      vmovsd  qword ptr [rbp+57h+r_weapon.attachmentVariationIndices+15h], xmm0
    }
    *(_DWORD *)&r_weapon.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
  }
  SfxPackage = BG_GetSfxPackage(&r_weapon, v11->isUsingWeaponAltMode != 0);
  if ( SfxPackage )
  {
    sfxMeleeImpactType = SfxPackage->sfxMeleeImpactType;
    materialType = SfxPackage->sfxMaterialType;
  }
  else
  {
    sfxMeleeImpactType = MELEE_IMPACT_TYPE_GUN_MEDIUM;
  }
  BG_UnpackMeleeAttackAnimParam(v11->meleeAnimDataPacked, &outAnimType, &outResult, &outIsAltMelee, (int *)&variant);
  v7 = *(cg_t **)outOrg.v;
LABEL_13:
  if ( isViewmodel )
  {
    ClothMeleeAttackSoundPLR = BG_GetClothMeleeAttackSoundPLR(clothType, sfxMeleeImpactType, materialType, outIsAltMelee, variant, outResult);
    RefdefView_GetOrg(&v7->refdef.view, &outOrg);
    __asm
    {
      vmovss  xmm2, cs:s_meleeAttackVmOffset
      vmulss  xmm0, xmm2, dword ptr [rbx+6944h]
      vaddss  xmm1, xmm0, dword ptr [rbp+57h+outOrg]
      vmovss  dword ptr [rbp+57h+origin], xmm1
      vmulss  xmm0, xmm2, dword ptr [rbx+6948h]
      vaddss  xmm1, xmm0, dword ptr [rbp+57h+outOrg+4]
      vmovss  dword ptr [rbp+57h+origin+4], xmm1
      vmulss  xmm0, xmm2, dword ptr [rbx+694Ch]
      vaddss  xmm1, xmm0, dword ptr [rbp+57h+outOrg+8]
      vmovss  dword ptr [rbp+57h+origin+8], xmm1
    }
    memset(&outOrg, 0, sizeof(outOrg));
  }
  else
  {
    ClothMeleeAttackSoundPLR = BG_GetClothMeleeAttackSoundNPC(clothType, outAnimType, materialType, outIsAltMelee, variant, outResult);
    Entity = CG_GetEntity(localClientNum, entNum);
    if ( !Entity || (Entity->flags & 1) == 0 )
      return;
    _RDI = &Entity->nextState.lerp.pos;
    if ( Entity == (centity_t *)-416i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 107, ASSERT_TYPE_ASSERT, "(traj)", (const char *)&queryFormat, "traj") )
      __debugbreak();
    if ( _RDI->trType == TR_LINEAR_STOP_SECURE )
    {
      v32 = _RDI->trBase.v[0];
      v33 = _RDI->trBase.v[1];
      LODWORD(origin.v[2]) = s_trbase_aab_Z ^ LODWORD(v33) ^ LODWORD(_RDI->trBase.v[2]);
      LODWORD(origin.v[1]) = LODWORD(v32) ^ s_trbase_aab_Y ^ LODWORD(v33);
      LODWORD(origin.v[0]) = LODWORD(v32) ^ ~s_trbase_aab_X;
      memset(&outOrg, 0, 8ui64);
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+57h+origin]
        vmovss  [rbp+57h+materialType], xmm0
      }
      if ( (materialType & 0x7F800000) == 2139095040 )
        goto LABEL_36;
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+57h+origin+4]
        vmovss  [rbp+57h+materialType], xmm0
      }
      if ( (materialType & 0x7F800000) == 2139095040 )
        goto LABEL_36;
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+57h+origin+8]
        vmovss  [rbp+57h+materialType], xmm0
      }
      if ( (materialType & 0x7F800000) == 2139095040 )
      {
LABEL_36:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 74, ASSERT_TYPE_SANITY, "( !IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] )") )
          __debugbreak();
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+0Ch]
        vmovss  dword ptr [rbp+57h+origin], xmm0
        vmovss  xmm1, dword ptr [rdi+10h]
        vmovss  dword ptr [rbp+57h+origin+4], xmm1
        vmovss  xmm0, dword ptr [rdi+14h]
        vmovss  dword ptr [rbp+57h+origin+8], xmm0
      }
    }
    if ( CG_UsePreciseSoundLocation() && CG_GetTagOrientation(localClientNum, entNum, scr_const.tag_weapon_right, (orientation_t *)&r_weapon) )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+57h+r_weapon.weaponIdx]
        vmovss  dword ptr [rbp+57h+origin], xmm0
        vmovss  xmm1, dword ptr [rbp+57h+r_weapon.stickerIndices+2]
        vmovss  dword ptr [rbp+57h+origin+4], xmm1
        vmovss  xmm0, dword ptr [rbp+57h+r_weapon.stickerIndices+6]
        vaddss  xmm2, xmm0, cs:s_meleeAttackHeightOffset
        vmovss  dword ptr [rbp+57h+origin+8], xmm2
      }
    }
  }
  SoundSystem = CgSoundSystem::GetSoundSystem(localClientNum);
  if ( !SoundSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_utils.cpp", 508, ASSERT_TYPE_ASSERT, "(soundSystem)", (const char *)&queryFormat, "soundSystem") )
    __debugbreak();
  CgSoundSystem::PlaySoundAlias(SoundSystem, entNum, &origin, ClothMeleeAttackSoundPLR);
}

/*
==============
CG_Utils_PlayNotetrackSound
==============
*/
__int64 CG_Utils_PlayNotetrackSound(const LocalClientNum_t localClientNum, const char *aliasName, const int entNum, const vec3_t *origin, const bool isViewmodel, const bool isMayhem, const bool playOnTag)
{
  CgSoundSystem *SoundSystem; 

  if ( !aliasName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_utils.cpp", 399, ASSERT_TYPE_ASSERT, "(aliasName)", (const char *)&queryFormat, "aliasName") )
    __debugbreak();
  SoundSystem = CgSoundSystem::GetSoundSystem(localClientNum);
  if ( playOnTag || !isViewmodel )
    return ((__int64 (__fastcall *)(CgSoundSystem *, _QWORD, const vec3_t *, const char *))SoundSystem->PlaySoundAliasByName2)(SoundSystem, (unsigned int)entNum, origin, aliasName);
  else
    return SoundSystem->PlayLocalSoundAliasByName(SoundSystem, aliasName);
}

/*
==============
CG_Utils_PlayVehicleNotetracks
==============
*/
void CG_Utils_PlayVehicleNotetracks(LocalClientNum_t localClientNum, const int entNum, const char *noteName, const char *noteParam)
{
  CgVehicleSystem *VehicleSystem; 
  char v9; 
  __int64 v12; 
  const char *v13; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  unsigned int v18; 
  int v19; 
  const char *v20; 
  signed __int64 v21; 
  __int64 v22; 
  unsigned int v23; 
  int v24; 
  __int64 v25; 
  int v26; 

  if ( !noteName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_utils.cpp", 517, ASSERT_TYPE_ASSERT, "(noteName)", (const char *)&queryFormat, "noteName") )
    __debugbreak();
  if ( !noteParam && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_utils.cpp", 518, ASSERT_TYPE_ASSERT, "(noteParam)", (const char *)&queryFormat, "noteParam") )
    __debugbreak();
  VehicleSystem = CgVehicleSystem::GetVehicleSystem(localClientNum);
  if ( !VehicleSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_utils.cpp", 521, ASSERT_TYPE_ASSERT, "(vehSystem)", (const char *)&queryFormat, "vehSystem") )
    __debugbreak();
  v9 = noteName[4];
  if ( v9 == 100 )
  {
    CgVehicleAnimSystem::AnimateDoorNotetrack(&VehicleSystem->m_vehicleAnimSystem, entNum, noteParam, noteName[5] == 102);
  }
  else if ( v9 == 105 )
  {
    __asm
    {
      vmovss  xmm0, cs:__real@3f800000
      vmovss  [rsp+58h+arg_10], xmm0
    }
    j_sscanf(noteParam, "%f", &v26);
    __asm { vmovss  xmm2, [rsp+58h+arg_10]; impK }
    CgVehicleAnimSystem::AnimateAngularImpulse(&VehicleSystem->m_vehicleAnimSystem, entNum, *(float *)&_XMM2);
  }
  else
  {
    v12 = 5i64;
    v13 = "vfxds";
    v14 = 5i64;
    if ( noteName == (const char *)-4i64 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    do
    {
      v15 = (unsigned __int8)v13[noteName + 4 - "vfxds"];
      v16 = v14;
      v17 = *(unsigned __int8 *)v13++;
      --v14;
      if ( !v16 )
        break;
      if ( (_DWORD)v15 != (_DWORD)v17 )
      {
        v18 = v15 + 32;
        if ( (unsigned int)(v15 - 65) > 0x19 )
          v18 = v15;
        v15 = v18;
        v19 = v17 + 32;
        if ( (unsigned int)(v17 - 65) > 0x19 )
          v19 = v17;
        if ( (_DWORD)v15 != v19 )
        {
          v20 = "smoke";
          if ( noteName == (const char *)-4i64 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
            __debugbreak();
          v21 = noteName - "smoke";
          while ( 1 )
          {
            v15 = (unsigned __int8)v20[v21 + 4];
            v22 = v12;
            v17 = *(unsigned __int8 *)v20++;
            --v12;
            if ( !v22 )
              goto LABEL_38;
            if ( (_DWORD)v15 != (_DWORD)v17 )
            {
              v23 = v15 + 32;
              if ( (unsigned int)(v15 - 65) > 0x19 )
                v23 = v15;
              v15 = v23;
              v24 = v17 + 32;
              if ( (unsigned int)(v17 - 65) > 0x19 )
                v24 = v17;
              if ( (_DWORD)v15 != v24 )
                return;
            }
            if ( !(_DWORD)v15 )
              goto LABEL_38;
          }
        }
      }
    }
    while ( (_DWORD)v15 );
LABEL_38:
    v25 = ((__int64 (__fastcall *)(CgVehicleSystem *, __int64, __int64))VehicleSystem->PhysicsGetEventSystem)(VehicleSystem, v15, v17);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v25 + 96i64))(v25, (unsigned int)entNum);
  }
}

/*
==============
CG_Utils_PlayerLockedOn
==============
*/
char CG_Utils_PlayerLockedOn(const LocalClientNum_t localClientNum, const centity_t *const cent)
{
  CgWeaponMap **v4; 
  cg_t *LocalClientGlobals; 
  const BgWeaponMap *v6; 
  const Weapon *CurrentWeaponForPlayer; 
  bool v8; 

  v4 = &CgWeaponMap::ms_instance[localClientNum];
  while ( 1 )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    if ( !*v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
      __debugbreak();
    v6 = *v4;
    if ( !*v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_utils.cpp", 1053, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(v6, &LocalClientGlobals->predictedPlayerState);
    if ( (cent->flags & 1) == 0 )
      break;
    v8 = BG_UsingAlternate(&LocalClientGlobals->predictedPlayerState);
    if ( !BG_ScopeOutlinesLockOn(CurrentWeaponForPlayer, v8) )
      break;
    if ( LocalClientGlobals->predictedPlayerState.weapCommon.weapLockedEntnum == cent->nextState.number )
      return 1;
    if ( (*(_DWORD *)&cent->nextState.clientLinkInfo & 0x7FF) == 0 )
      break;
    cent = CG_GetEntity(localClientNum, (*(_DWORD *)&cent->nextState.clientLinkInfo & 0x7FFu) - 1);
  }
  return 0;
}

/*
==============
CG_Utils_ProcessNotetracks
==============
*/
void CG_Utils_ProcessNotetracks(LocalClientNum_t localClientNum, const int entNum, DObj *dObj, const cpose_t *cpose, const XAnimNotify *notify, const bool isViewmodel, const bool isMayhem, const unsigned int mayhemEntId, const unsigned int subObjIdx, bool processFxNotetracks)
{
  const cpose_t *m_particleSystemDef; 
  const char *v17; 
  int v18; 
  __int64 v19; 
  __int64 v20; 
  const char *v21; 
  char *v22; 
  signed __int64 v23; 
  int v24; 
  int v25; 
  int v27; 
  int v28; 
  char *v29; 
  scr_string_t String; 
  __int64 v31; 
  const char *v32; 
  char *v33; 
  signed __int64 v34; 
  int v35; 
  int v36; 
  int v38; 
  int v39; 
  char *v40; 
  scr_string_t v41; 
  __int64 v42; 
  const char *v43; 
  char *v44; 
  signed __int64 v45; 
  int v46; 
  int v47; 
  int v49; 
  int v50; 
  char *v51; 
  scr_string_t v52; 
  __int64 v53; 
  const char *v54; 
  char *v55; 
  signed __int64 v56; 
  int v57; 
  int v58; 
  int v60; 
  int v61; 
  char *v62; 
  char *v63; 
  scr_string_t v64; 
  scr_string_t v65; 
  const char *v66; 
  char *v67; 
  signed __int64 v68; 
  int v69; 
  int v70; 
  int v72; 
  int v73; 
  char *v75; 
  cg_t *LocalClientGlobals; 
  const char *v111; 
  int v112; 
  __int64 v113; 
  const char *v114; 
  char *v115; 
  signed __int64 v116; 
  int v117; 
  int v118; 
  int v120; 
  int v121; 
  scr_string_t v122; 
  cg_t *v123; 
  CgHandler *Handler; 
  scr_string_t v125; 
  char *v126; 
  CgSoundSystem *SoundSystem; 
  unsigned int v128; 
  __int64 v129; 
  __int64 v130; 
  const char *v131; 
  char *v132; 
  signed __int64 v133; 
  int v134; 
  int v135; 
  int v137; 
  int v138; 
  __int64 v139; 
  const char *v140; 
  char *v141; 
  signed __int64 v142; 
  int v143; 
  int v144; 
  int v146; 
  int v147; 
  const char *v148; 
  char *v149; 
  signed __int64 v150; 
  int v151; 
  int v152; 
  int v154; 
  int v155; 
  __int64 v156; 
  const char *v157; 
  char *v158; 
  signed __int64 v159; 
  int v160; 
  int v161; 
  int v163; 
  int v164; 
  scr_string_t v165; 
  __int64 v166; 
  __int64 v167; 
  const char *v168; 
  char *v169; 
  signed __int64 v170; 
  int v171; 
  int v172; 
  int v174; 
  int v175; 
  cg_t *v176; 
  CgHandler *v177; 
  scr_string_t v178; 
  const char *v179; 
  char *v180; 
  signed __int64 v181; 
  int v182; 
  int v183; 
  int v185; 
  int v186; 
  __int64 v187; 
  __int64 v188; 
  const char *v189; 
  char *v190; 
  signed __int64 v191; 
  int v192; 
  int v193; 
  int v195; 
  int v196; 
  __int64 v199; 
  __int64 v200; 
  const char *v201; 
  char *v202; 
  signed __int64 v203; 
  int v204; 
  int v205; 
  int v207; 
  int v208; 
  cg_t *v209; 
  int v210; 
  const characterInfo_t *v211; 
  const characterInfo_t *v212; 
  team_t v213; 
  __int64 v214; 
  const char *v215; 
  char *v216; 
  signed __int64 v217; 
  int v218; 
  int v219; 
  int v221; 
  int v222; 
  cg_t *v223; 
  const characterInfo_t *CharacterInfo; 
  const characterInfo_t *v225; 
  team_t team; 
  const char *v227; 
  char *v228; 
  signed __int64 v229; 
  int v230; 
  int v231; 
  int v233; 
  int v234; 
  char *v235; 
  CgSoundSystem *v236; 
  scr_string_t noteName; 
  const char *v238; 
  char *v239; 
  signed __int64 v240; 
  int v241; 
  int v242; 
  int v244; 
  int v245; 
  __int64 v246; 
  const char *v247; 
  char *v248; 
  signed __int64 v249; 
  int v250; 
  int v251; 
  int v253; 
  int v254; 
  unsigned __int8 outBoneIndex[8]; 
  char *outCommand; 
  FXRegisteredDef outDef; 
  FXRegisteredDef def; 
  char *effectName; 
  DObj *obj; 
  char *str[2]; 
  vec3_t origin; 
  const XAnimNotify *v263; 
  int v264; 
  tmat33_t<vec3_t> out; 
  vec3_t outOrigin; 
  tmat33_t<vec3_t> outTagMat; 
  tmat33_t<vec3_t> axis; 
  char paramBuf[272]; 
  char targetBuf[272]; 
  char commandBuf[272]; 
  char v272; 
  char v273[272]; 
  void *retaddr; 

  _RAX = &retaddr;
  str[1] = (char *)-2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
  }
  m_particleSystemDef = cpose;
  outDef.m_particleSystemDef = (const ParticleSystemDef *)cpose;
  obj = dObj;
  LODWORD(def.m_particleSystemDef) = entNum;
  v263 = notify;
  if ( !cpose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_utils.cpp", 550, ASSERT_TYPE_ASSERT, "(cpose)", (const char *)&queryFormat, "cpose") )
    __debugbreak();
  commandBuf[0] = 0;
  paramBuf[0] = 0;
  targetBuf[0] = 0;
  outCommand = NULL;
  effectName = NULL;
  str[0] = NULL;
  v17 = SL_ConvertToString(notify->noteName);
  v18 = Com_ParseNoteTrack(v17, commandBuf, paramBuf, targetBuf, (const char **)&outCommand, (const char **)&effectName, (const char **)str);
  switch ( v18 )
  {
    case 3:
      if ( processFxNotetracks )
      {
        v19 = 0x7FFFFFFFi64;
        v20 = 0x7FFFFFFFi64;
        v21 = "fx_playfxontag";
        v22 = outCommand;
        if ( !outCommand && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
          __debugbreak();
        v23 = v22 - "fx_playfxontag";
        while ( 1 )
        {
          v24 = (unsigned __int8)v21[v23];
          v25 = *(unsigned __int8 *)v21++;
          if ( !v20-- )
          {
LABEL_18:
            outDef.m_particleSystemDef = NULL;
            v29 = effectName;
            if ( !effectName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_utils.cpp", 368, ASSERT_TYPE_ASSERT, "(fxName)", (const char *)&queryFormat, "fxName") )
              __debugbreak();
            FX_LoadEffect(v29, &outDef);
            if ( !outDef.m_particleSystemDef )
              Com_PrintError(19, "ERROR: Failed to find fx (%s) to play as a notetrack", v29);
            String = SL_GetString(str[0], 0);
            CG_PlayBoltedEffect(localClientNum, &outDef, entNum, String);
            SL_RemoveRefToString(String);
            goto LABEL_225;
          }
          if ( v24 != v25 )
          {
            v27 = v24 + 32;
            if ( (unsigned int)(v24 - 65) > 0x19 )
              v27 = v24;
            v24 = v27;
            v28 = v25 + 32;
            if ( (unsigned int)(v25 - 65) > 0x19 )
              v28 = v25;
            if ( v24 != v28 )
              break;
          }
          if ( !v24 )
            goto LABEL_18;
        }
        v31 = 0x7FFFFFFFi64;
        v32 = "fx_stopfxontag";
        v33 = outCommand;
        if ( !outCommand && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
          __debugbreak();
        v34 = v33 - "fx_stopfxontag";
        while ( 1 )
        {
          v35 = (unsigned __int8)v32[v34];
          v36 = *(unsigned __int8 *)v32++;
          if ( !v31-- )
          {
LABEL_36:
            outDef.m_particleSystemDef = NULL;
            v40 = effectName;
            if ( !effectName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_utils.cpp", 368, ASSERT_TYPE_ASSERT, "(fxName)", (const char *)&queryFormat, "fxName") )
              __debugbreak();
            FX_LoadEffect(v40, &outDef);
            if ( !outDef.m_particleSystemDef )
              Com_PrintError(19, "ERROR: Failed to find fx (%s) to play as a notetrack", v40);
            v41 = SL_GetString(str[0], 0);
            CG_StopBoltedEffects(localClientNum, &outDef, entNum, v41);
            SL_RemoveRefToString(v41);
            goto LABEL_225;
          }
          if ( v35 != v36 )
          {
            v38 = v35 + 32;
            if ( (unsigned int)(v35 - 65) > 0x19 )
              v38 = v35;
            v35 = v38;
            v39 = v36 + 32;
            if ( (unsigned int)(v36 - 65) > 0x19 )
              v39 = v36;
            if ( v35 != v39 )
              break;
          }
          if ( !v35 )
            goto LABEL_36;
        }
        v42 = 0x7FFFFFFFi64;
        v43 = "fx_killfxontag";
        v44 = outCommand;
        if ( !outCommand && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
          __debugbreak();
        v45 = v44 - "fx_killfxontag";
        while ( 1 )
        {
          v46 = (unsigned __int8)v43[v45];
          v47 = *(unsigned __int8 *)v43++;
          if ( !v42-- )
          {
LABEL_54:
            outDef.m_particleSystemDef = NULL;
            v51 = effectName;
            if ( !effectName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_utils.cpp", 368, ASSERT_TYPE_ASSERT, "(fxName)", (const char *)&queryFormat, "fxName") )
              __debugbreak();
            FX_LoadEffect(v51, &outDef);
            if ( !outDef.m_particleSystemDef )
              Com_PrintError(19, "ERROR: Failed to find fx (%s) to play as a notetrack", v51);
            v52 = SL_GetString(str[0], 0);
            CG_KillBoltedEffects(localClientNum, &outDef, entNum, v52);
            SL_RemoveRefToString(v52);
            goto LABEL_225;
          }
          if ( v46 != v47 )
          {
            v49 = v46 + 32;
            if ( (unsigned int)(v46 - 65) > 0x19 )
              v49 = v46;
            v46 = v49;
            v50 = v47 + 32;
            if ( (unsigned int)(v47 - 65) > 0x19 )
              v50 = v47;
            if ( v46 != v50 )
              break;
          }
          if ( !v46 )
            goto LABEL_54;
        }
        v53 = 0x7FFFFFFFi64;
        v54 = "fx_debris";
        v55 = outCommand;
        if ( !outCommand && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
          __debugbreak();
        v56 = v55 - "fx_debris";
        do
        {
          v57 = (unsigned __int8)v54[v56];
          v58 = *(unsigned __int8 *)v54++;
          if ( !v53-- )
            break;
          if ( v57 != v58 )
          {
            v60 = v57 + 32;
            if ( (unsigned int)(v57 - 65) > 0x19 )
              v60 = v57;
            v57 = v60;
            v61 = v58 + 32;
            if ( (unsigned int)(v58 - 65) > 0x19 )
              v61 = v58;
            if ( v57 != v61 )
            {
              v66 = "fx_playfx";
              v67 = outCommand;
              if ( !outCommand && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
                __debugbreak();
              v68 = v67 - "fx_playfx";
              do
              {
                v69 = (unsigned __int8)v66[v68];
                v70 = *(unsigned __int8 *)v66++;
                if ( !v19-- )
                  break;
                if ( v69 != v70 )
                {
                  v72 = v69 + 32;
                  if ( (unsigned int)(v69 - 65) > 0x19 )
                    v72 = v69;
                  v69 = v72;
                  v73 = v70 + 32;
                  if ( (unsigned int)(v70 - 65) > 0x19 )
                    v73 = v70;
                  if ( v69 != v73 )
                  {
                    m_particleSystemDef = (const cpose_t *)outDef.m_particleSystemDef;
                    goto LABEL_105;
                  }
                }
              }
              while ( v69 );
              def.m_particleSystemDef = NULL;
              MatrixIdentity33(&out);
              __asm
              {
                vxorps  xmm0, xmm0, xmm0
                vmovss  dword ptr [rbp+610h+var_660], xmm0
                vmovss  dword ptr [rbp+610h+var_660+4], xmm0
                vmovss  [rbp+610h+var_658], xmm0
              }
              v75 = effectName;
              if ( !effectName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_utils.cpp", 368, ASSERT_TYPE_ASSERT, "(fxName)", (const char *)&queryFormat, "fxName") )
                __debugbreak();
              FX_LoadEffect(v75, &def);
              if ( !def.m_particleSystemDef )
                Com_PrintError(19, "ERROR: Failed to find fx (%s) to play as a notetrack", v75);
              if ( j_sscanf(str[0], "%f,%f,%f,%f,%f,%f,%f,%f,%f", &v263, (char *)&v263 + 4, &v264, &out, &out.row0.y, &out.row0.z, &out.row2, &out.row2.y, &out.row2.z) != 9 )
                Com_PrintError(14, "Unexpected number of parameters for 'fx_playfx' note track\n");
              __asm
              {
                vmovss  xmm7, dword ptr [rbp+610h+out+1Ch]
                vmovss  xmm5, dword ptr [rbp+610h+out+8]
                vmulss  xmm1, xmm5, xmm7
                vmovss  xmm2, dword ptr [rbp+610h+out+20h]
                vmovss  xmm6, dword ptr [rbp+610h+out+4]
                vmulss  xmm0, xmm6, xmm2
                vsubss  xmm1, xmm1, xmm0
                vmovss  dword ptr [rbp+610h+out+0Ch], xmm1
                vmulss  xmm2, xmm2, dword ptr [rbp+610h+out]
                vmulss  xmm0, xmm5, dword ptr [rbp+610h+out+18h]
                vsubss  xmm1, xmm2, xmm0
                vmovss  dword ptr [rbp+610h+out+10h], xmm1
                vmulss  xmm2, xmm6, dword ptr [rbp+610h+out+18h]
                vmulss  xmm0, xmm7, dword ptr [rbp+610h+out]
                vsubss  xmm1, xmm2, xmm0
                vmovss  dword ptr [rbp+610h+out+14h], xmm1
              }
              CG_DObjGetWorldBoneMatrix((const cpose_t *)outDef.m_particleSystemDef, obj, 0, &outTagMat, &outOrigin);
              MatrixMultiply(&outTagMat, &out, &axis);
              __asm
              {
                vmovss  xmm7, dword ptr [rbp+610h+var_660+4]
                vmulss  xmm2, xmm7, dword ptr [rbp+610h+outTagMat+0Ch]
                vmovss  xmm6, dword ptr [rbp+610h+var_660]
                vmulss  xmm0, xmm6, dword ptr [rbp+610h+outTagMat]
                vaddss  xmm3, xmm2, xmm0
                vmovss  xmm5, [rbp+610h+var_658]
                vmulss  xmm0, xmm5, dword ptr [rbp+610h+outTagMat+18h]
                vaddss  xmm2, xmm3, xmm0
                vaddss  xmm3, xmm2, dword ptr [rbp+610h+outOrigin]
                vmovss  dword ptr [rbp+610h+origin], xmm3
                vmulss  xmm4, xmm7, dword ptr [rbp+610h+outTagMat+10h]
                vmulss  xmm2, xmm6, dword ptr [rbp+610h+outTagMat+4]
                vaddss  xmm3, xmm4, xmm2
                vmulss  xmm1, xmm5, dword ptr [rbp+610h+outTagMat+1Ch]
                vaddss  xmm2, xmm3, xmm1
                vaddss  xmm3, xmm2, dword ptr [rbp+610h+outOrigin+4]
                vmovss  dword ptr [rbp+610h+origin+4], xmm3
                vmulss  xmm4, xmm7, dword ptr [rbp+610h+outTagMat+14h]
                vmulss  xmm2, xmm6, dword ptr [rbp+610h+outTagMat+8]
                vaddss  xmm3, xmm4, xmm2
                vmulss  xmm1, xmm5, dword ptr [rbp+610h+outTagMat+20h]
                vaddss  xmm2, xmm3, xmm1
                vaddss  xmm3, xmm2, dword ptr [rbp+610h+outOrigin+8]
                vmovss  dword ptr [rbp+610h+origin+8], xmm3
              }
              LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
              FX_PlayOrientedEffect(localClientNum, &def, LocalClientGlobals->time, &origin, &axis);
              goto LABEL_225;
            }
          }
        }
        while ( v57 );
        outDef.m_particleSystemDef = NULL;
        v62 = effectName;
        if ( !effectName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_utils.cpp", 368, ASSERT_TYPE_ASSERT, "(fxName)", (const char *)&queryFormat, "fxName") )
          __debugbreak();
        FX_LoadEffect(v62, &outDef);
        if ( !outDef.m_particleSystemDef )
          Com_PrintError(19, "ERROR: Failed to find fx (%s) to play as a notetrack", v62);
        v63 = &v272;
        if ( j_sscanf(str[0], "%[^','],%[^',']", v273, &v272) != 2 )
          v63 = NULL;
        v64 = SL_GetString(v273, 0);
        CG_PlayBoltedEffect(localClientNum, &outDef, entNum, v64);
        v65 = v64;
        if ( !isMayhem )
        {
          v111 = v63;
          goto LABEL_102;
        }
LABEL_80:
        Mayhem_HidePart(1, mayhemEntId, v65);
        SL_RemoveRefToString(v64);
        break;
      }
LABEL_105:
      v113 = 4i64;
      v114 = "pst_";
      v115 = outCommand;
      if ( !outCommand && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      v116 = v115 - "pst_";
      do
      {
        v117 = (unsigned __int8)v114[v116];
        v118 = *(unsigned __int8 *)v114++;
        if ( !v113-- )
          break;
        if ( v117 != v118 )
        {
          v120 = v117 + 32;
          if ( (unsigned int)(v117 - 65) > 0x19 )
            v120 = v117;
          v117 = v120;
          v121 = v118 + 32;
          if ( (unsigned int)(v118 - 65) > 0x19 )
            v121 = v118;
          if ( v117 != v121 )
            goto LABEL_225;
        }
      }
      while ( v117 );
      outBoneIndex[0] = -2;
      v122 = SL_GetString(effectName, 0);
      CG_Utils_GetBoneOrigin(obj, m_particleSystemDef, v122, outBoneIndex, &origin);
      v123 = CG_GetLocalClientGlobals(localClientNum);
      Handler = CgHandler::getHandler(localClientNum);
      CgHandler::GetPlayerTeam(Handler, v123->predictedPlayerState.clientNum, (team_t *)&obj);
      v125 = SL_GetString(str[0], 0);
      if ( !Com_Teams_TeamFromString(v125, (team_t *)&def) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_utils.cpp", 673, ASSERT_TYPE_ASSERT, "(Com_Teams_TeamFromString( SL_GetString( notetrackCmdTarget, 0 ), playToTeam ))", (const char *)&queryFormat, "Com_Teams_TeamFromString( SL_GetString( notetrackCmdTarget, 0 ), playToTeam )") )
        __debugbreak();
      if ( (_DWORD)obj == LODWORD(def.m_particleSystemDef) )
      {
        v126 = outCommand + 4;
        if ( outCommand == (char *)-4i64 )
        {
LABEL_122:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_utils.cpp", 399, ASSERT_TYPE_ASSERT, "(aliasName)", (const char *)&queryFormat, "aliasName") )
            __debugbreak();
        }
LABEL_124:
        SoundSystem = CgSoundSystem::GetSoundSystem(localClientNum);
        v128 = SoundSystem->PlaySoundAliasByName2(SoundSystem, entNum, &origin, v126);
        if ( isMayhem )
          Mayhem_SetSoundEntry(v128, mayhemEntId, subObjIdx, outBoneIndex[0]);
      }
      break;
    case 2:
      v129 = 0x7FFFFFFFi64;
      v130 = 0x7FFFFFFFi64;
      v131 = "rumble_play";
      v132 = outCommand;
      if ( !outCommand && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      v133 = v132 - "rumble_play";
      while ( 1 )
      {
        v134 = (unsigned __int8)v131[v133];
        v135 = *(unsigned __int8 *)v131++;
        if ( !v130-- )
        {
LABEL_139:
          CG_Rumble_PlayOnClientSafeByName(localClientNum, effectName);
          goto LABEL_225;
        }
        if ( v134 != v135 )
        {
          v137 = v134 + 32;
          if ( (unsigned int)(v134 - 65) > 0x19 )
            v137 = v134;
          v134 = v137;
          v138 = v135 + 32;
          if ( (unsigned int)(v135 - 65) > 0x19 )
            v138 = v135;
          if ( v134 != v138 )
            break;
        }
        if ( !v134 )
          goto LABEL_139;
      }
      v139 = 0x7FFFFFFFi64;
      v140 = "hide";
      v141 = outCommand;
      if ( !outCommand && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      v142 = v141 - "hide";
      do
      {
        v143 = (unsigned __int8)v140[v142];
        v144 = *(unsigned __int8 *)v140++;
        if ( !v139-- )
          break;
        if ( v143 != v144 )
        {
          v146 = v143 + 32;
          if ( (unsigned int)(v143 - 65) > 0x19 )
            v146 = v143;
          v143 = v146;
          v147 = v144 + 32;
          if ( (unsigned int)(v144 - 65) > 0x19 )
            v147 = v144;
          if ( v143 != v147 )
          {
            v148 = "show";
            v149 = outCommand;
            if ( !outCommand && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
              __debugbreak();
            v150 = v149 - "show";
            do
            {
              v151 = (unsigned __int8)v148[v150];
              v152 = *(unsigned __int8 *)v148++;
              if ( !v129-- )
                break;
              if ( v151 != v152 )
              {
                v154 = v151 + 32;
                if ( (unsigned int)(v151 - 65) > 0x19 )
                  v154 = v151;
                v151 = v154;
                v155 = v152 + 32;
                if ( (unsigned int)(v152 - 65) > 0x19 )
                  v155 = v152;
                if ( v151 != v155 )
                {
                  v156 = 3i64;
                  v157 = "ps_";
                  v158 = outCommand;
                  if ( !outCommand && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
                    __debugbreak();
                  v159 = v158 - "ps_";
                  do
                  {
                    v160 = (unsigned __int8)v157[v159];
                    v161 = *(unsigned __int8 *)v157++;
                    if ( !v156-- )
                      break;
                    if ( v160 != v161 )
                    {
                      v163 = v160 + 32;
                      if ( (unsigned int)(v160 - 65) > 0x19 )
                        v163 = v160;
                      v160 = v163;
                      v164 = v161 + 32;
                      if ( (unsigned int)(v161 - 65) > 0x19 )
                        v164 = v161;
                      if ( v160 != v164 )
                      {
                        v166 = 4i64;
                        v167 = 4i64;
                        v168 = "pst_";
                        v169 = outCommand;
                        if ( !outCommand && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
                          __debugbreak();
                        v170 = v169 - "pst_";
                        do
                        {
                          v171 = (unsigned __int8)v168[v170];
                          v172 = *(unsigned __int8 *)v168++;
                          if ( !v167-- )
                            break;
                          if ( v171 != v172 )
                          {
                            v174 = v171 + 32;
                            if ( (unsigned int)(v171 - 65) > 0x19 )
                              v174 = v171;
                            v171 = v174;
                            v175 = v172 + 32;
                            if ( (unsigned int)(v172 - 65) > 0x19 )
                              v175 = v172;
                            if ( v171 != v175 )
                            {
                              v179 = "veh_";
                              v180 = outCommand;
                              if ( !outCommand && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
                                __debugbreak();
                              v181 = v180 - "veh_";
                              do
                              {
                                v182 = (unsigned __int8)v179[v181];
                                v183 = *(unsigned __int8 *)v179++;
                                if ( !v166-- )
                                  break;
                                if ( v182 != v183 )
                                {
                                  v185 = v182 + 32;
                                  if ( (unsigned int)(v182 - 65) > 0x19 )
                                    v185 = v182;
                                  v182 = v185;
                                  v186 = v183 + 32;
                                  if ( (unsigned int)(v183 - 65) > 0x19 )
                                    v186 = v183;
                                  if ( v182 != v186 )
                                    goto LABEL_225;
                                }
                              }
                              while ( v182 );
                              CG_Utils_PlayVehicleNotetracks(localClientNum, entNum, outCommand, paramBuf);
                              goto LABEL_225;
                            }
                          }
                        }
                        while ( v171 );
                        v176 = CG_GetLocalClientGlobals(localClientNum);
                        v177 = CgHandler::getHandler(localClientNum);
                        CgHandler::GetPlayerTeam(v177, v176->predictedPlayerState.clientNum, (team_t *)&def);
                        v178 = SL_GetString(effectName, 0);
                        Com_Teams_TeamFromString(v178, (team_t *)&obj);
                        if ( LODWORD(def.m_particleSystemDef) != (_DWORD)obj )
                          goto LABEL_225;
                        CG_GetPoseOrigin((const cpose_t *)outDef.m_particleSystemDef, &origin);
                        CG_Utils_PlayNotetrackSound(localClientNum, outCommand + 4, entNum, &origin, isViewmodel, isMayhem, 1);
                        goto LABEL_224;
                      }
                    }
                  }
                  while ( v160 );
                  outBoneIndex[0] = -2;
                  v165 = SL_GetString(effectName, 0);
                  CG_Utils_GetBoneOrigin(obj, (const cpose_t *)outDef.m_particleSystemDef, v165, outBoneIndex, &origin);
                  SL_RemoveRefToString(v165);
                  v126 = outCommand + 3;
                  if ( outCommand != (char *)-3i64 )
                    goto LABEL_124;
                  goto LABEL_122;
                }
              }
            }
            while ( v151 );
            v64 = SL_GetString(effectName, 0);
            v65 = v64;
            if ( isMayhem )
            {
              Mayhem_HidePart(0, mayhemEntId, v64);
              SL_RemoveRefToString(v64);
              goto LABEL_225;
            }
            v112 = 0;
            v111 = NULL;
            goto LABEL_103;
          }
        }
      }
      while ( v143 );
      v64 = SL_GetString(effectName, 0);
      v65 = v64;
      if ( !isMayhem )
      {
        v111 = NULL;
LABEL_102:
        v112 = 1;
LABEL_103:
        CG_Utils_HidePart(obj, v111, v65, v112);
        SL_RemoveRefToString(v64);
        break;
      }
      goto LABEL_80;
    case 1:
      v187 = 3i64;
      v188 = 3i64;
      v189 = "ps_";
      v190 = outCommand;
      if ( !outCommand && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      v191 = v190 - "ps_";
      while ( 1 )
      {
        v192 = (unsigned __int8)v189[v191];
        v193 = *(unsigned __int8 *)v189++;
        if ( !v188-- )
        {
LABEL_223:
          CG_GetPoseOrigin((const cpose_t *)outDef.m_particleSystemDef, &origin);
          CG_Utils_PlayNotetrackSound(localClientNum, outCommand + 3, entNum, &origin, isViewmodel, isMayhem, 0);
LABEL_224:
          memset(&origin, 0, sizeof(origin));
          goto LABEL_225;
        }
        if ( v192 != v193 )
        {
          v195 = v192 + 32;
          if ( (unsigned int)(v192 - 65) > 0x19 )
            v195 = v192;
          v192 = v195;
          v196 = v193 + 32;
          if ( (unsigned int)(v193 - 65) > 0x19 )
            v196 = v193;
          if ( v192 != v196 )
            break;
        }
        if ( !v192 )
          goto LABEL_223;
      }
      v199 = 4i64;
      v200 = 4i64;
      v201 = "psa_";
      v202 = outCommand;
      if ( !outCommand && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      v203 = v202 - "psa_";
      do
      {
        v204 = (unsigned __int8)v201[v203];
        v205 = *(unsigned __int8 *)v201++;
        if ( !v200-- )
          break;
        if ( v204 != v205 )
        {
          v207 = v204 + 32;
          if ( (unsigned int)(v204 - 65) > 0x19 )
            v207 = v204;
          v204 = v207;
          v208 = v205 + 32;
          if ( (unsigned int)(v205 - 65) > 0x19 )
            v208 = v205;
          if ( v204 != v208 )
          {
            v214 = 4i64;
            v215 = "pse_";
            v216 = outCommand;
            if ( !outCommand && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
              __debugbreak();
            v217 = v216 - "pse_";
            do
            {
              v218 = (unsigned __int8)v215[v217];
              v219 = *(unsigned __int8 *)v215++;
              if ( !v214-- )
                break;
              if ( v218 != v219 )
              {
                v221 = v218 + 32;
                if ( (unsigned int)(v218 - 65) > 0x19 )
                  v221 = v218;
                v218 = v221;
                v222 = v219 + 32;
                if ( (unsigned int)(v219 - 65) > 0x19 )
                  v222 = v219;
                if ( v218 != v222 )
                {
                  v227 = "vo_";
                  v228 = outCommand;
                  if ( !outCommand && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
                    __debugbreak();
                  v229 = v228 - "vo_";
                  while ( 1 )
                  {
                    v230 = (unsigned __int8)v227[v229];
                    v231 = *(unsigned __int8 *)v227++;
                    if ( !v187-- )
                    {
LABEL_272:
                      outBoneIndex[0] = -2;
                      CG_Utils_GetBoneOrigin(obj, (const cpose_t *)outDef.m_particleSystemDef, scr_const.j_head, outBoneIndex, &origin);
                      v235 = outCommand + 3;
                      if ( outCommand == (char *)-3i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_utils.cpp", 399, ASSERT_TYPE_ASSERT, "(aliasName)", (const char *)&queryFormat, "aliasName") )
                        __debugbreak();
                      v236 = CgSoundSystem::GetSoundSystem(localClientNum);
                      v236->PlaySoundAliasByName2(v236, (const int)def.m_particleSystemDef, &origin, v235);
                      goto LABEL_225;
                    }
                    if ( v230 != v231 )
                    {
                      v233 = v230 + 32;
                      if ( (unsigned int)(v230 - 65) > 0x19 )
                        v233 = v230;
                      v230 = v233;
                      v234 = v231 + 32;
                      if ( (unsigned int)(v231 - 65) > 0x19 )
                        v234 = v231;
                      if ( v230 != v234 )
                        break;
                    }
                    if ( !v230 )
                      goto LABEL_272;
                  }
                  noteName = v263->noteName;
                  if ( noteName == scr_const.melee_attack_sfx )
                  {
                    CG_Utils_PlayNotetrackMeleeAttackSound(localClientNum, (int)def.m_particleSystemDef, isViewmodel);
                  }
                  else if ( noteName == scr_const.exec_fire )
                  {
                    CG_Execution_QueueFireWeapon(localClientNum, (int)def.m_particleSystemDef);
                  }
                  else
                  {
                    v238 = "veh_";
                    v239 = outCommand;
                    if ( !outCommand && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
                      __debugbreak();
                    v240 = v239 - "veh_";
                    do
                    {
                      v241 = (unsigned __int8)v238[v240];
                      v242 = *(unsigned __int8 *)v238++;
                      if ( !v199-- )
                        break;
                      if ( v241 != v242 )
                      {
                        v244 = v241 + 32;
                        if ( (unsigned int)(v241 - 65) > 0x19 )
                          v244 = v241;
                        v241 = v244;
                        v245 = v242 + 32;
                        if ( (unsigned int)(v242 - 65) > 0x19 )
                          v245 = v242;
                        if ( v241 != v245 )
                        {
                          v246 = 9i64;
                          v247 = "vfx_smoke";
                          v248 = outCommand;
                          if ( !outCommand && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
                            __debugbreak();
                          v249 = v248 - "vfx_smoke";
                          while ( 1 )
                          {
                            v250 = (unsigned __int8)v247[v249];
                            v251 = *(unsigned __int8 *)v247++;
                            if ( !v246-- )
                              goto LABEL_305;
                            if ( v250 != v251 )
                            {
                              v253 = v250 + 32;
                              if ( (unsigned int)(v250 - 65) > 0x19 )
                                v253 = v250;
                              v250 = v253;
                              v254 = v251 + 32;
                              if ( (unsigned int)(v251 - 65) > 0x19 )
                                v254 = v251;
                              if ( v250 != v254 )
                                goto LABEL_225;
                            }
                            if ( !v250 )
                              goto LABEL_305;
                          }
                        }
                      }
                    }
                    while ( v241 );
LABEL_305:
                    CG_Utils_PlayVehicleNotetracks(localClientNum, (const int)def.m_particleSystemDef, outCommand, paramBuf);
                  }
                  goto LABEL_225;
                }
              }
            }
            while ( v218 );
            v223 = CG_GetLocalClientGlobals(localClientNum);
            v210 = (int)def.m_particleSystemDef;
            CharacterInfo = cg_t::TryGetCharacterInfo(v223, (const int)def.m_particleSystemDef);
            v225 = cg_t::TryGetCharacterInfo(v223, v223->predictedPlayerState.clientNum);
            if ( !CharacterInfo )
              goto LABEL_225;
            if ( !v225 )
              goto LABEL_225;
            team = v225->team;
            if ( team )
            {
              if ( team == CharacterInfo->team )
                goto LABEL_225;
            }
            goto LABEL_242;
          }
        }
      }
      while ( v204 );
      v209 = CG_GetLocalClientGlobals(localClientNum);
      v210 = (int)def.m_particleSystemDef;
      v211 = cg_t::TryGetCharacterInfo(v209, (const int)def.m_particleSystemDef);
      v212 = cg_t::TryGetCharacterInfo(v209, v209->predictedPlayerState.clientNum);
      if ( v211 )
      {
        if ( v212 )
        {
          v213 = v212->team;
          if ( v213 )
          {
            if ( v213 == v211->team )
            {
LABEL_242:
              CG_GetPoseOrigin((const cpose_t *)outDef.m_particleSystemDef, &origin);
              CG_Utils_PlayNotetrackSound(localClientNum, outCommand + 4, v210, &origin, isViewmodel, isMayhem, 1);
              goto LABEL_224;
            }
          }
        }
      }
      break;
  }
LABEL_225:
  __asm
  {
    vmovaps xmm6, xmmword ptr [rsp+710h+var_58+8]
    vmovaps xmm7, [rsp+710h+var_68+8]
  }
}

/*
==============
CG_Utils_ScriptNotifySoundDone
==============
*/
void CG_Utils_ScriptNotifySoundDone(int entnum, int index)
{
  const char *v4; 
  __int64 v5; 

  if ( !index && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_utils.cpp", 302, ASSERT_TYPE_ASSERT, "(index)", (const char *)&queryFormat, "index") )
    __debugbreak();
  if ( ClConnection::ms_connections[0] )
    goto LABEL_9;
  if ( (_BYTE)ClConnection::ms_activeConnectionType )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_connection.h", 107, ASSERT_TYPE_ASSERT, "(ms_connections[localClientNum] || ms_activeConnectionType == GameModeType::NONE)", (const char *)&queryFormat, "ms_connections[localClientNum] || ms_activeConnectionType == GameModeType::NONE") )
      __debugbreak();
    if ( ClConnection::ms_connections[0] )
    {
LABEL_9:
      v4 = j_va("sl %i %i", (unsigned int)entnum, (unsigned int)index);
      if ( !ClConnection::ms_connections[0] )
      {
        if ( !(_BYTE)ClConnection::ms_activeConnectionType )
          goto LABEL_29;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_connection.h", 107, ASSERT_TYPE_ASSERT, "(ms_connections[localClientNum] || ms_activeConnectionType == GameModeType::NONE)", (const char *)&queryFormat, "ms_connections[localClientNum] || ms_activeConnectionType == GameModeType::NONE") )
          __debugbreak();
        if ( !ClConnection::ms_connections[0] )
        {
LABEL_29:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_api_inline.h", 14, ASSERT_TYPE_ASSERT, "(ClConnection::HasClientConnection( localClientNum ))", "%s\n\tTrying to send a reliable command but we are not connected to a server", "ClConnection::HasClientConnection( localClientNum )") )
            __debugbreak();
        }
      }
      if ( !CL_Demo_IsPlayingServer(LOCAL_CLIENT_0) )
      {
        if ( !LODWORD(cl_maxLocalClients) )
        {
          *(float *)&v5 = cl_maxLocalClients;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_connection.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( (cl_maxLocalClients) )", "localClientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v5, cl_maxLocalClients) )
            __debugbreak();
        }
        if ( !(_BYTE)ClConnection::ms_activeConnectionType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_connection.h", 98, ASSERT_TYPE_ASSERT, "(ms_activeConnectionType != GameModeType::NONE)", (const char *)&queryFormat, "ms_activeConnectionType != GameModeType::NONE") )
          __debugbreak();
        if ( !ClConnection::ms_connections[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_connection.h", 99, ASSERT_TYPE_ASSERT, "(ms_connections[localClientNum])", (const char *)&queryFormat, "ms_connections[localClientNum]") )
          __debugbreak();
        ClConnection::ms_connections[0]->AddReliableCommand(ClConnection::ms_connections[0], v4);
      }
    }
  }
}

/*
==============
CG_Utils_SetRightStickDeadzoneOverride
==============
*/

void __fastcall CG_Utils_SetRightStickDeadzoneOverride(float rightStickDeadzoneOverrideVal)
{
  GPad_SetRightStickDeadzoneOverride(rightStickDeadzoneOverrideVal);
}

/*
==============
CG_Utils_ShouldHighlightAgents
==============
*/
bool CG_Utils_ShouldHighlightAgents(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  cg_t *LocalClientGlobals; 
  bool v3; 
  const BgWeaponMap **v4; 
  const BgWeaponMap *v5; 
  const Weapon *CurrentWeaponForPlayer; 
  bool v7; 

  v1 = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v3 = CgWeaponMap::ms_instance[v1] == NULL;
  v4 = (const BgWeaponMap **)&CgWeaponMap::ms_instance[v1];
  if ( v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v5 = *v4;
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_utils.cpp", 1041, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(v5, &LocalClientGlobals->predictedPlayerState);
  v7 = BG_UsingAlternate(&LocalClientGlobals->predictedPlayerState);
  return BG_ScopeOutlinesAgents(CurrentWeaponForPlayer, v7);
}

/*
==============
CG_Utils_ShouldHighlightCharacters
==============
*/
bool CG_Utils_ShouldHighlightCharacters(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  cg_t *LocalClientGlobals; 
  bool v3; 
  const BgWeaponMap **v4; 
  const BgWeaponMap *v5; 
  const Weapon *CurrentWeaponForPlayer; 
  bool v7; 

  v1 = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v3 = CgWeaponMap::ms_instance[v1] == NULL;
  v4 = (const BgWeaponMap **)&CgWeaponMap::ms_instance[v1];
  if ( v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v5 = *v4;
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_utils.cpp", 1029, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(v5, &LocalClientGlobals->predictedPlayerState);
  v7 = BG_UsingAlternate(&LocalClientGlobals->predictedPlayerState);
  return BG_ScopeOutlinesCharacters(CurrentWeaponForPlayer, v7);
}

/*
==============
CG_Utils_ShouldHighlightInScope
==============
*/
bool CG_Utils_ShouldHighlightInScope(const LocalClientNum_t localClientNum)
{
  __int64 v2; 
  cg_t *LocalClientGlobals; 
  CgWeaponMap *v4; 
  char v5; 
  char v6; 

  v2 = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !CgWeaponMap::ms_instance[v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v4 = CgWeaponMap::ms_instance[v2];
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_utils.cpp", 947, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.pm_flags, ACTIVE, 9u) )
    return 0;
  if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.weapCommon.weapFlags, ACTIVE, 1u) )
    return 0;
  *(double *)&_XMM0 = BG_WeaponADSFractionAffectedByReload(v4, &LocalClientGlobals->predictedPlayerState);
  __asm { vcomiss xmm0, cs:__real@3f400000 }
  return !(v5 | v6) && BG_GetHudOutlineWeapon(v4, &LocalClientGlobals->predictedPlayerState) && !BG_IsEMPJammed(&LocalClientGlobals->predictedPlayerState);
}

/*
==============
CG_Utils_ShouldHighlightInShield
==============
*/
bool CG_Utils_ShouldHighlightInShield(const LocalClientNum_t localClientNum)
{
  return 0;
}

/*
==============
CG_Utils_ShouldHighlightScriptMovers
==============
*/
bool CG_Utils_ShouldHighlightScriptMovers(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  cg_t *LocalClientGlobals; 
  bool v3; 
  const BgWeaponMap **v4; 
  const BgWeaponMap *v5; 
  const Weapon *CurrentWeaponForPlayer; 
  bool v7; 

  v1 = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v3 = CgWeaponMap::ms_instance[v1] == NULL;
  v4 = (const BgWeaponMap **)&CgWeaponMap::ms_instance[v1];
  if ( v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v5 = *v4;
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_utils.cpp", 1017, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(v5, &LocalClientGlobals->predictedPlayerState);
  v7 = BG_UsingAlternate(&LocalClientGlobals->predictedPlayerState);
  return BG_ScopeOutlinesScriptMovers(CurrentWeaponForPlayer, v7);
}

/*
==============
CG_Utils_ShouldHighlightTurrets
==============
*/
bool CG_Utils_ShouldHighlightTurrets(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  cg_t *LocalClientGlobals; 
  bool v3; 
  const BgWeaponMap **v4; 
  const BgWeaponMap *v5; 
  const Weapon *CurrentWeaponForPlayer; 
  bool v7; 

  v1 = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v3 = CgWeaponMap::ms_instance[v1] == NULL;
  v4 = (const BgWeaponMap **)&CgWeaponMap::ms_instance[v1];
  if ( v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v5 = *v4;
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_utils.cpp", 1005, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(v5, &LocalClientGlobals->predictedPlayerState);
  v7 = BG_UsingAlternate(&LocalClientGlobals->predictedPlayerState);
  return BG_ScopeOutlinesTurrets(CurrentWeaponForPlayer, v7);
}

/*
==============
CG_Utils_ShouldHighlightVehicle
==============
*/
bool CG_Utils_ShouldHighlightVehicle(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  cg_t *LocalClientGlobals; 
  bool v3; 
  const BgWeaponMap **v4; 
  const BgWeaponMap *v5; 
  const Weapon *CurrentWeaponForPlayer; 
  bool v7; 

  v1 = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v3 = CgWeaponMap::ms_instance[v1] == NULL;
  v4 = (const BgWeaponMap **)&CgWeaponMap::ms_instance[v1];
  if ( v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v5 = *v4;
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_utils.cpp", 993, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(v5, &LocalClientGlobals->predictedPlayerState);
  v7 = BG_UsingAlternate(&LocalClientGlobals->predictedPlayerState);
  return BG_ScopeOutlinesVehicles(CurrentWeaponForPlayer, v7);
}

/*
==============
CG_Utils_StencilScriptControlled
==============
*/
bool CG_Utils_StencilScriptControlled(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  cg_t *LocalClientGlobals; 
  bool v3; 
  const BgWeaponMap **v4; 
  const BgWeaponMap *v5; 

  v1 = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v3 = CgWeaponMap::ms_instance[v1] == NULL;
  v4 = (const BgWeaponMap **)&CgWeaponMap::ms_instance[v1];
  if ( v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v5 = *v4;
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_utils.cpp", 983, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  return BG_GetHudOutlineScriptControlled(v5, &LocalClientGlobals->predictedPlayerState);
}

/*
==============
CG_Utils_SubtitlePrint
==============
*/
void CG_Utils_SubtitlePrint(const LocalClientNum_t localClientNum, int msec, const SndAlias *alias)
{
  __int64 v4; 
  const dvar_t *v7; 
  int Int_Internal_DebugName; 
  bool v11; 
  int v12; 
  __int64 v20; 
  __int64 v21; 

  v4 = localClientNum;
  if ( !alias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_utils.cpp", 271, ASSERT_TYPE_ASSERT, "(alias)", (const char *)&queryFormat, "alias") )
    __debugbreak();
  if ( msec && alias->subtitle )
  {
    v7 = DVARBOOL_cg_ignoreSubtitle;
    if ( !DVARBOOL_cg_ignoreSubtitle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_ignoreSubtitle") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    if ( !v7->current.enabled )
    {
      if ( (unsigned int)v4 >= 2 )
      {
        LODWORD(v21) = 2;
        LODWORD(v20) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals_static.h", 98, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v20, v21) )
          __debugbreak();
      }
      if ( (int)v4 < cgs_t::ms_allocatedCount )
      {
        if ( (unsigned int)v4 >= cgs_t::ms_allocatedCount )
        {
          LODWORD(v21) = cgs_t::ms_allocatedCount;
          LODWORD(v20) = v4;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals_static.h", 112, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cgs_t::ms_allocatedCount )", "localClientNum doesn't index cgs_t::ms_allocatedCount\n\t%i not in [0, %i)", v20, v21) )
            __debugbreak();
        }
        if ( !cgs_t::ms_cgsArray[v4] )
        {
          LODWORD(v21) = v4;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals_static.h", 113, ASSERT_TYPE_ASSERT, "(cgs_t::ms_cgsArray[localClientNum])", "%s\n\tTrying to access unallocated client static globals for localClientNum %d\n", "cgs_t::ms_cgsArray[localClientNum]", v21) )
            __debugbreak();
        }
        if ( cgs_t::ms_allocatedType == STATIC_GLOB_TYPE_UNKNOWN )
        {
          LODWORD(v21) = v4;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals_static.h", 114, ASSERT_TYPE_ASSERT, "(cgs_t::ms_allocatedType != CgStaticGlobalsType::STATIC_GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client static globals for localClientNum %d but the client static global type is not known\n", "cgs_t::ms_allocatedType != CgStaticGlobalsType::STATIC_GLOB_TYPE_UNKNOWN", v21) )
            __debugbreak();
        }
        if ( cgs_t::ms_cgsArray[v4] )
        {
          __asm
          {
            vmovss  xmm0, cs:__real@3faaaaab
            vcomiss xmm0, dword ptr [rax+18h]
          }
          Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_cg_subtitleWidthStandard, "cg_subtitleWidthStandard");
          v11 = HIBYTE(alias->flags) & 1;
          v12 = Int_Internal_DebugName;
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_cg_subtitleMinTime, "cg_subtitleMinTime");
          __asm
          {
            vmulss  xmm1, xmm0, cs:__real@447a0000
            vaddss  xmm3, xmm1, cs:__real@3f000000
            vxorps  xmm2, xmm2, xmm2
            vmovss  xmm4, xmm2, xmm3
            vxorps  xmm0, xmm0, xmm0
            vroundss xmm1, xmm0, xmm4, 1
            vcvttss2si eax, xmm1
          }
          if ( _EAX > msec )
            msec = _EAX;
          CL_SubtitlePrint((LocalClientNum_t)v4, alias->subtitle, msec, v12, v11);
        }
      }
    }
  }
}

/*
==============
CG_Utils_TimeIsInThePast
==============
*/
_BOOL8 CG_Utils_TimeIsInThePast(LocalClientNum_t localClientNum, int msecWhenPlayed)
{
  return msecWhenPlayed < CG_GetLocalClientGlobals(localClientNum)->oldTime;
}

/*
==============
CG_Utils_UpdateActiveInputContext
==============
*/
void CG_Utils_UpdateActiveInputContext(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  char v2; 
  bool v3; 
  cg_t *LocalClientGlobals; 
  VehicleType v5; 
  __int16 remoteControlEnt; 
  const centity_t *Entity; 
  CgVehicleSystem *VehicleSystem; 
  const VehicleClient *Client; 
  const VehicleDef *ClientDef; 
  int v11; 
  int v12; 
  const centity_t *v13; 
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *p_eFlags; 
  CgHandler *Handler; 
  bool IsCatcherActive; 
  bool v17; 
  bool IsGameTypeQuick_BR; 
  int v19; 
  char ActiveGameMode; 
  CgGlobalsMP *v21; 
  CgMLGCameraManager *CameraManager; 
  CoDCasterCameraType MLGCameraType; 
  InputContext v24; 
  __int64 v25; 
  LocalClientNum_t outLocalClientNum; 

  v1 = localClientNum;
  v2 = 10;
  v3 = 0;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v5 = CG_Vehicle_RemoteControlledVehicleType((LocalClientNum_t)v1, NULL);
  if ( v5 == VEH_AIRCRAFT )
  {
    remoteControlEnt = LocalClientGlobals->predictedPlayerState.remoteControlEnt;
    if ( remoteControlEnt != 2047 )
    {
      Entity = CG_GetEntity((const LocalClientNum_t)LocalClientGlobals->localClientNum, remoteControlEnt);
      if ( CG_Vehicle_IsVehicleEntity(Entity) )
      {
        VehicleSystem = CgVehicleSystem::GetVehicleSystem((const LocalClientNum_t)v1);
        if ( !VehicleSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_utils.cpp", 1194, ASSERT_TYPE_ASSERT, "(vehicleSystem)", (const char *)&queryFormat, "vehicleSystem") )
          __debugbreak();
        Client = CgVehicleSystem::GetClient(VehicleSystem, Entity);
        if ( !Client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_utils.cpp", 1196, ASSERT_TYPE_ASSERT, "(vehicleClient)", (const char *)&queryFormat, "vehicleClient") )
          __debugbreak();
        ClientDef = CgVehicleSystem::GetClientDef(Client);
        if ( !ClientDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_utils.cpp", 1198, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef") )
          __debugbreak();
        if ( ClientDef->inputBindingSet == 1 && ClientDef->vehiclePhysicsDef.physics_gameProfile == VEH_GAMEPROFILE_FIXEDWING_RCPLANE )
        {
          v5 = VEH_CAR;
          v3 = 1;
        }
      }
    }
  }
  v11 = LocalClientGlobals->predictedPlayerState.vehicleState.entity;
  v12 = 0;
  if ( v11 != 2047 )
  {
    v13 = CG_GetEntity((const LocalClientNum_t)LocalClientGlobals->localClientNum, v11);
    if ( CG_Vehicle_IsVehicleEntity(v13) )
    {
      v3 = 1;
      p_eFlags = &LocalClientGlobals->predictedPlayerState.eFlags;
      if ( !p_eFlags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2042, ASSERT_TYPE_ASSERT, "(esFlags)", (const char *)&queryFormat, "esFlags") )
        __debugbreak();
      if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(p_eFlags, ACTIVE, 5u) && !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(p_eFlags, ACTIVE, 6u) )
      {
        if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(p_eFlags, ACTIVE, 7u) )
          goto LABEL_28;
        if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2052, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL )") )
          __debugbreak();
      }
      v3 = v5 != VEH_HELICOPTER;
    }
  }
LABEL_28:
  Handler = CgHandler::getHandler((LocalClientNum_t)v1);
  IsCatcherActive = CL_Keys_IsCatcherActive((LocalClientNum_t)v1, 8);
  v17 = CL_Keys_IsCatcherActive((LocalClientNum_t)v1, 16);
  IsGameTypeQuick_BR = BG_IsGameTypeQuick_BR(Handler);
  if ( !v3 || v5 == VEH_TYPE_COUNT || (IsCatcherActive || v17) && !IsGameTypeQuick_BR )
  {
    ActiveGameMode = Com_GameMode_GetActiveGameMode();
    if ( ActiveGameMode )
    {
      switch ( ActiveGameMode )
      {
        case 1:
          v2 = 0;
          goto LABEL_45;
        case 2:
          if ( CG_GameInterface_PlayingBR() )
          {
            v2 = 13;
            goto LABEL_45;
          }
          break;
        case 3:
          break;
        case 4:
          goto LABEL_42;
        default:
          goto LABEL_45;
      }
      v2 = 1;
      goto LABEL_45;
    }
LABEL_42:
    v19 = 1270;
LABEL_43:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_utils.cpp", v19, ASSERT_TYPE_ASSERT, "(false)", (const char *)&queryFormat, "false") )
      __debugbreak();
    goto LABEL_45;
  }
  switch ( v5 )
  {
    case VEH_WHEELS_4:
    case VEH_BOAT:
    case VEH_ARTILLERY:
    case VEH_SNOWMOBILE:
    case VEH_SUBMARINE:
    case VEH_UGV:
    case VEH_TREADED:
    case VEH_ARMOURED:
    case VEH_CAR:
    case VEH_SEACRAFT:
      v2 = 3;
      break;
    case VEH_PLANE:
    case VEH_HELICOPTER:
    case VEH_SPACESHIP:
    case VEH_AIRCRAFT:
      v2 = 4;
      break;
    case VEH_TYPE_COUNT:
      v19 = 1249;
      goto LABEL_43;
    default:
      break;
  }
LABEL_45:
  if ( cg_t::ms_allocatedType == GLOB_TYPE_MP )
  {
    v21 = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)v1);
    if ( v21->m_isMLGSpectator )
    {
      CameraManager = CgMLGSpectator::GetCameraManager(v21->m_mlgSpectatorPtr);
      MLGCameraType = CgMLGCameraManager::GetMLGCameraType(CameraManager, (const LocalClientNum_t)v1);
      if ( MLGCameraType == FREE )
      {
        v2 = 11;
      }
      else
      {
        v2 = 9;
        if ( MLGCameraType == AERIAL )
          v2 = 12;
      }
    }
  }
  if ( (unsigned int)v1 >= 2 )
  {
    LODWORD(v25) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v25, 2) )
      __debugbreak();
  }
  v24 = v2;
  if ( (clientUIActives[v1].keyCatchers & 0x40) != 0 )
    v24 = VEC3_POINTER;
  if ( Com_FrontEnd_IsInFrontEnd() )
  {
    do
    {
      if ( CL_Mgr_IsControllerMappedToClient(v12, &outLocalClientNum) )
      {
        CL_Keys_UpdateActiveBindings(outLocalClientNum, v24);
        CL_Gamepad_UpdateActiveMappings(outLocalClientNum, v24);
      }
      ++v12;
    }
    while ( v12 < 8 );
  }
  else
  {
    CL_Keys_UpdateActiveBindings((LocalClientNum_t)v1, v24);
    CL_Gamepad_UpdateActiveMappings((LocalClientNum_t)v1, v24);
  }
}

/*
==============
CG_Utils_WhizbyPoint
==============
*/
void CG_Utils_WhizbyPoint(LocalClientNum_t localClientNum, const vec3_t *start, const vec3_t *end, vec3_t *outPoint)
{
  cg_t *LocalClientGlobals; 
  vec3_t outOrg; 
  __int64 v52; 
  void *retaddr; 

  _RAX = &retaddr;
  v52 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
  }
  _RBX = outPoint;
  __asm
  {
    vmovss  xmm0, dword ptr [r8]
    vsubss  xmm6, xmm0, dword ptr [rdx]
    vmovss  xmm1, dword ptr [r8+4]
    vsubss  xmm5, xmm1, dword ptr [rdx+4]
    vmovss  xmm0, dword ptr [r8+8]
    vsubss  xmm4, xmm0, dword ptr [rdx+8]
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
    vmulss  xmm7, xmm0, xmm6
    vmulss  xmm8, xmm0, xmm5
    vmulss  xmm9, xmm0, xmm4
  }
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+88h+outOrg]
    vsubss  xmm3, xmm0, dword ptr [rdi]
    vmovss  xmm1, dword ptr [rsp+88h+outOrg+4]
    vsubss  xmm2, xmm1, dword ptr [rdi+4]
    vmovss  xmm0, dword ptr [rsp+88h+outOrg+8]
    vsubss  xmm4, xmm0, dword ptr [rdi+8]
    vmulss  xmm2, xmm8, xmm2
    vmulss  xmm1, xmm7, xmm3
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm9, xmm4
    vaddss  xmm5, xmm3, xmm0
    vmulss  xmm1, xmm7, xmm5
    vaddss  xmm2, xmm1, dword ptr [rdi]
    vmovss  dword ptr [rbx], xmm2
    vmulss  xmm0, xmm8, xmm5
    vaddss  xmm1, xmm0, dword ptr [rdi+4]
    vmovss  dword ptr [rbx+4], xmm1
    vmulss  xmm2, xmm9, xmm5
    vaddss  xmm0, xmm2, dword ptr [rdi+8]
    vmovss  dword ptr [rbx+8], xmm0
  }
  memset(&outOrg, 0, sizeof(outOrg));
  __asm
  {
    vmovaps xmm6, [rsp+88h+var_18]
    vmovaps xmm7, [rsp+88h+var_28]
    vmovaps xmm8, [rsp+88h+var_38]
    vmovaps xmm9, [rsp+88h+var_48]
  }
}

/*
==============
GetOutlineFadeAmount
==============
*/
float GetOutlineFadeAmount(const int *beginFadeTime, LocalClientNum_t localClientNum)
{
  if ( *beginFadeTime < CgGlobalsMP::GetLocalClientGlobals(localClientNum)->time )
  {
    __asm
    {
      vmovss  xmm1, cs:__real@3f800000
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, ecx
      vmulss  xmm2, xmm0, cs:__real@3a2ec33e
      vsubss  xmm0, xmm1, xmm2
    }
  }
  else
  {
    __asm { vmovss  xmm0, cs:__real@3f800000 }
  }
  return *(float *)&_XMM0;
}

