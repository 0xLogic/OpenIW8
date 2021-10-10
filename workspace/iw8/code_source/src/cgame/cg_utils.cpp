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
  const Weapon *ViewmodelWeapon; 
  bool inAltWeaponMode; 
  bool isWeaponDefault; 
  __int64 v20; 
  __int64 v21; 

  v8 = localClientNum;
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_utils.cpp", 116, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( !weapon && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_utils.cpp", 117, ASSERT_TYPE_ASSERT, "(weapon)", (const char *)&queryFormat, "weapon") )
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
    LODWORD(v21) = CgWeaponSystem::ms_allocatedCount;
    LODWORD(v20) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 531, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v20, v21) )
      __debugbreak();
  }
  if ( !CgWeaponSystem::ms_weaponSystemArray[v12] )
  {
    LODWORD(v21) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 532, ASSERT_TYPE_ASSERT, "(ms_weaponSystemArray[localClientNum])", "%s\n\tTrying to access unallocated weapon system for localClientNum %d\n", "ms_weaponSystemArray[localClientNum]", v21) )
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
    ViewmodelWeapon = BgWeaponMap::GetWeapon(v13, es->weaponHandle);
  }
  else
  {
    *isViewModel = 1;
    ViewmodelWeapon = BG_GetViewmodelWeapon(v13, ps);
  }
  *(__m256i *)&weapon->weaponIdx = *(__m256i *)&ViewmodelWeapon->weaponIdx;
  *(_OWORD *)&weapon->attachmentVariationIndices[5] = *(_OWORD *)&ViewmodelWeapon->attachmentVariationIndices[5];
  *(double *)&weapon->attachmentVariationIndices[21] = *(double *)&ViewmodelWeapon->attachmentVariationIndices[21];
  *(_DWORD *)&weapon->weaponCamo = *(_DWORD *)&ViewmodelWeapon->weaponCamo;
  if ( *isViewModel )
    inAltWeaponMode = BG_UsingAlternate(ps);
  else
    inAltWeaponMode = es->inAltWeaponMode;
  *usingAlternate = inAltWeaponMode;
  if ( *isViewModel )
    isWeaponDefault = LocalClientGlobals->playerWeaponInfo.isWeaponDefault;
  else
    isWeaponDefault = !v14->IsWeaponWorldModelLoaded(v14, weapon);
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
  const dvar_t *v4; 

  v2 = index;
  if ( index >= 0xC && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_utils.cpp", 932, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( HUD_OUTLINE_COLOR_MAX )", "index doesn't index HUD_OUTLINE_COLOR_MAX\n\t%i not in [0, %i)", index, 12) )
    __debugbreak();
  v4 = cg_hud_outline_colors[v2];
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 683, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  _XMM0 = v4->current.unsignedInt;
  __asm { vpmovzxbd xmm1, xmm0 }
  *(__m128 *)outColorVector = _mm128_mul_ps(_mm_cvtepi32_ps(_XMM1), (__m128)_xmm);
}

/*
==============
CG_Utils_GetHudOutlineTeamColor
==============
*/
__int64 CG_Utils_GetHudOutlineTeamColor(CgGlobalsMP *cgameGlobMP, const LocalClientNum_t localClientNum, const team_t team, bool fade)
{
  __int64 v5; 
  CgCompassSystemMP *v8; 
  CgMLGSpectator *MLGSpectator; 
  int OutlineFadeTime; 
  int time; 
  __int128 v13; 
  unsigned int v15; 
  int integer; 
  HudOutlineColor PlayerOutlineColor; 
  __int64 v18; 
  const dvar_t *v19; 
  __int64 v21; 
  __int64 v22; 
  vec4_t color; 

  v5 = localClientNum;
  if ( (_BYTE)CgCompassSystem::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 586, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::COMPASS_SYSTEM_TYPE)", "%s\n\tTrying to access the compass system for localClientNum %d but the compass system type does not match-> System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::COMPASS_SYSTEM_TYPE", localClientNum, 2, (unsigned __int8)CgCompassSystem::ms_allocatedType) )
    __debugbreak();
  if ( (unsigned int)v5 >= CgCompassSystem::ms_allocatedCount )
  {
    LODWORD(v22) = CgCompassSystem::ms_allocatedCount;
    LODWORD(v21) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 587, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v21, v22) )
      __debugbreak();
  }
  if ( !CgCompassSystem::ms_compassSystemArray[v5] )
  {
    LODWORD(v22) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 588, ASSERT_TYPE_ASSERT, "(ms_compassSystemArray[localClientNum])", "%s\n\tTrying to access unallocated compass system for localClientNum %d\n", "ms_compassSystemArray[localClientNum]", v22) )
      __debugbreak();
  }
  v8 = (CgCompassSystemMP *)CgCompassSystem::ms_compassSystemArray[v5];
  MLGSpectator = CgMLGSpectator::GetMLGSpectator((const LocalClientNum_t)v5);
  if ( CgCompassSystemMP::GetTeamCompassColor(v8, cgameGlobMP, team, &color) )
  {
    if ( fade )
    {
      OutlineFadeTime = CgMLGSpectator::GetOutlineFadeTime(MLGSpectator);
      time = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)v5)->time;
      if ( OutlineFadeTime < time )
      {
        v13 = LODWORD(FLOAT_1_0);
        *(float *)&v13 = 1.0 - (float)((float)(time - OutlineFadeTime) * 0.00066666666);
        _XMM0 = v13;
      }
      else
      {
        _XMM0 = LODWORD(FLOAT_1_0);
      }
      __asm { vminss  xmm1, xmm0, [rsp+0A8h+outsideFade] }
      if ( *(float *)&_XMM1 <= 0.0 )
      {
        LODWORD(_XMM1) = _mm_shuffle_ps((__m128)0i64, (__m128)0i64, 255).m128_u32[0];
        color = 0i64;
      }
    }
    else
    {
      *(float *)&_XMM1 = color.v[3];
    }
    v15 = ((int)(float)(255.0 * color.v[1]) | ((((int)(float)(*(float *)&_XMM1 * 255.0) << 8) | (int)(float)(255.0 * color.v[2])) << 8)) << 8;
    integer = (int)(float)(255.0 * color.v[0]);
  }
  else
  {
    PlayerOutlineColor = CgMLGSpectator::GetPlayerOutlineColor(MLGSpectator, (const LocalClientNum_t)v5, team);
    v18 = (unsigned int)PlayerOutlineColor;
    if ( (unsigned int)PlayerOutlineColor >= HUD_OUTLINE_COLOR_MAX )
    {
      LODWORD(v22) = 12;
      LODWORD(v21) = PlayerOutlineColor;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_utils.cpp", 922, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( HUD_OUTLINE_COLOR_MAX )", "index doesn't index HUD_OUTLINE_COLOR_MAX\n\t%i not in [0, %i)", v21, v22) )
        __debugbreak();
    }
    v19 = cg_hud_outline_colors[v18];
    if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 683, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v19);
    v15 = v19->current.integer & 0xFF000000 | (((unsigned __int8)BYTE1(v19->current.integer) | ((unsigned __int8)BYTE2(v19->current.integer) << 8)) << 8);
    integer = (unsigned __int8)v19->current.integer;
  }
  return integer | v15;
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
  int v7; 
  AmmoStore result; 
  AmmoStore r_clip2; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
  WeaponForHud = CG_GetWeaponForHud(LocalClientGlobals);
  UsingAltForHud = CG_GetUsingAltForHud(&LocalClientGlobals->predictedPlayerState);
  if ( !p_predictedPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1248, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  r_clip2 = *BG_AmmoStoreForWeapon(&result, WeaponForHud, UsingAltForHud);
  if ( !p_predictedPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1229, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( BG_HasLadderHand(p_predictedPlayerState) && hand == WEAPON_HAND_LEFT )
    hand = WEAPON_HAND_DEFAULT;
  v7 = 0;
  while ( !BG_IsClipCompatible(&p_predictedPlayerState->weapCommon.ammoInClip[v7].clipIndex, &r_clip2) )
  {
    if ( (unsigned int)++v7 >= 0xF )
      return 0i64;
  }
  return (unsigned int)p_predictedPlayerState->weapCommon.ammoInClip[v7].ammoCount[hand];
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
  const characterInfo_t *CharacterInfo; 
  const characterInfo_t *v11; 
  CgWeaponMap *Instance; 
  WeaponSFXPackage *SfxPackage; 
  MeleeImpactType sfxMeleeImpactType; 
  const SndAliasList *ClothMeleeAttackSoundPLR; 
  centity_t *Entity; 
  trajectory_t_secure *p_pos; 
  float v18; 
  float v19; 
  CgSoundSystem *SoundSystem; 
  bool outIsAltMelee; 
  WeaponMaterialType materialType; 
  MeleeResult outResult; 
  unsigned int variant; 
  vec3_t outOrg; 
  MeleeAnimType outAnimType; 
  __int64 v27; 
  vec3_t origin; 
  Weapon r_weapon; 

  v27 = -2i64;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v7 = LocalClientGlobals;
  *(_QWORD *)outOrg.v = LocalClientGlobals;
  if ( isViewmodel )
    entNum = LocalClientGlobals->predictedPlayerState.clientNum;
  clothType = 0;
  outAnimType = COUNT|DODGE;
  *(float *)&materialType = 0.0;
  outIsAltMelee = 0;
  variant = 0;
  outResult = HIT;
  v9 = CG_GetLocalClientGlobals(localClientNum);
  if ( !v9->HasCharacterInfo(v9, entNum) )
    goto LABEL_12;
  CharacterInfo = CG_GetCharacterInfo(v9, entNum);
  v11 = CharacterInfo;
  if ( !CharacterInfo )
  {
    v7 = *(cg_t **)outOrg.v;
LABEL_12:
    sfxMeleeImpactType = MELEE_IMPACT_TYPE_GUN_MEDIUM;
    goto LABEL_13;
  }
  clothType = CharacterInfo->clothType;
  r_weapon = CharacterInfo->dobjHeldWeapon;
  if ( v9->predictedPlayerState.clientNum == entNum )
  {
    Instance = CgWeaponMap::GetInstance(localClientNum);
    r_weapon = *BG_GetViewmodelWeapon(Instance, &v9->predictedPlayerState);
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
    origin.v[0] = (float)(s_meleeAttackVmOffset * v7->refdef.view.axis.m[0].v[0]) + outOrg.v[0];
    origin.v[1] = (float)(s_meleeAttackVmOffset * v7->refdef.view.axis.m[0].v[1]) + outOrg.v[1];
    origin.v[2] = (float)(s_meleeAttackVmOffset * v7->refdef.view.axis.m[0].v[2]) + outOrg.v[2];
    memset(&outOrg, 0, sizeof(outOrg));
  }
  else
  {
    ClothMeleeAttackSoundPLR = BG_GetClothMeleeAttackSoundNPC(clothType, outAnimType, materialType, outIsAltMelee, variant, outResult);
    Entity = CG_GetEntity(localClientNum, entNum);
    if ( !Entity || (Entity->flags & 1) == 0 )
      return;
    p_pos = &Entity->nextState.lerp.pos;
    if ( Entity == (centity_t *)-416i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", (_DWORD)Entity + 523, ASSERT_TYPE_ASSERT, "(traj)", (const char *)&queryFormat, "traj") )
      __debugbreak();
    if ( p_pos->trType == TR_LINEAR_STOP_SECURE )
    {
      v18 = p_pos->trBase.v[0];
      v19 = p_pos->trBase.v[1];
      LODWORD(origin.v[2]) = s_trbase_aab_Z ^ LODWORD(v19) ^ LODWORD(p_pos->trBase.v[2]);
      LODWORD(origin.v[1]) = LODWORD(v18) ^ s_trbase_aab_Y ^ LODWORD(v19);
      LODWORD(origin.v[0]) = LODWORD(v18) ^ ~s_trbase_aab_X;
      memset(&outOrg, 0, 8ui64);
      materialType = SLODWORD(origin.v[0]);
      if ( (LODWORD(origin.v[0]) & 0x7F800000) == 2139095040 || (materialType = SLODWORD(origin.v[1]), (LODWORD(origin.v[1]) & 0x7F800000) == 2139095040) || (materialType = SLODWORD(origin.v[2]), (LODWORD(origin.v[2]) & 0x7F800000) == 2139095040) )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 74, ASSERT_TYPE_SANITY, "( !IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] )") )
          __debugbreak();
      }
    }
    else
    {
      origin = p_pos->trBase;
    }
    if ( CG_UsePreciseSoundLocation() && CG_GetTagOrientation(localClientNum, entNum, scr_const.tag_weapon_right, (orientation_t *)&r_weapon) )
    {
      origin.v[0] = *(float *)&r_weapon.weaponIdx;
      origin.v[1] = *(float *)&r_weapon.stickerIndices[1];
      origin.v[2] = *(float *)&r_weapon.stickerIndices[3] + s_meleeAttackHeightOffset;
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
  __int64 v10; 
  const char *v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  unsigned int v16; 
  int v17; 
  const char *v18; 
  signed __int64 v19; 
  __int64 v20; 
  unsigned int v21; 
  int v22; 
  __int64 v23; 
  float v24; 

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
    v24 = FLOAT_1_0;
    j_sscanf(noteParam, "%f", &v24);
    CgVehicleAnimSystem::AnimateAngularImpulse(&VehicleSystem->m_vehicleAnimSystem, entNum, v24);
  }
  else
  {
    v10 = 5i64;
    v11 = "vfxds";
    v12 = 5i64;
    if ( noteName == (const char *)-4i64 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    do
    {
      v13 = (unsigned __int8)v11[noteName + 4 - "vfxds"];
      v14 = v12;
      v15 = *(unsigned __int8 *)v11++;
      --v12;
      if ( !v14 )
        break;
      if ( (_DWORD)v13 != (_DWORD)v15 )
      {
        v16 = v13 + 32;
        if ( (unsigned int)(v13 - 65) > 0x19 )
          v16 = v13;
        v13 = v16;
        v17 = v15 + 32;
        if ( (unsigned int)(v15 - 65) > 0x19 )
          v17 = v15;
        if ( (_DWORD)v13 != v17 )
        {
          v18 = "smoke";
          if ( noteName == (const char *)-4i64 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
            __debugbreak();
          v19 = noteName - "smoke";
          while ( 1 )
          {
            v13 = (unsigned __int8)v18[v19 + 4];
            v20 = v10;
            v15 = *(unsigned __int8 *)v18++;
            --v10;
            if ( !v20 )
              goto LABEL_38;
            if ( (_DWORD)v13 != (_DWORD)v15 )
            {
              v21 = v13 + 32;
              if ( (unsigned int)(v13 - 65) > 0x19 )
                v21 = v13;
              v13 = v21;
              v22 = v15 + 32;
              if ( (unsigned int)(v15 - 65) > 0x19 )
                v22 = v15;
              if ( (_DWORD)v13 != v22 )
                return;
            }
            if ( !(_DWORD)v13 )
              goto LABEL_38;
          }
        }
      }
    }
    while ( (_DWORD)v13 );
LABEL_38:
    v23 = ((__int64 (__fastcall *)(CgVehicleSystem *, __int64, __int64))VehicleSystem->PhysicsGetEventSystem)(VehicleSystem, v13, v15);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v23 + 96i64))(v23, (unsigned int)entNum);
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
  const char *v13; 
  int v14; 
  __int64 v15; 
  __int64 v16; 
  const char *v17; 
  char *v18; 
  signed __int64 v19; 
  int v20; 
  int v21; 
  int v23; 
  int v24; 
  char *v25; 
  scr_string_t String; 
  __int64 v27; 
  const char *v28; 
  char *v29; 
  signed __int64 v30; 
  int v31; 
  int v32; 
  int v34; 
  int v35; 
  char *v36; 
  scr_string_t v37; 
  __int64 v38; 
  const char *v39; 
  char *v40; 
  signed __int64 v41; 
  int v42; 
  int v43; 
  int v45; 
  int v46; 
  char *v47; 
  scr_string_t v48; 
  __int64 v49; 
  const char *v50; 
  char *v51; 
  signed __int64 v52; 
  int v53; 
  int v54; 
  int v56; 
  int v57; 
  char *v58; 
  char *v59; 
  scr_string_t v60; 
  scr_string_t v61; 
  const char *v62; 
  char *v63; 
  signed __int64 v64; 
  int v65; 
  int v66; 
  int v68; 
  int v69; 
  char *v70; 
  cg_t *LocalClientGlobals; 
  const char *v72; 
  int v73; 
  __int64 v74; 
  const char *v75; 
  char *v76; 
  signed __int64 v77; 
  int v78; 
  int v79; 
  int v81; 
  int v82; 
  scr_string_t v83; 
  cg_t *v84; 
  CgHandler *Handler; 
  scr_string_t v86; 
  char *v87; 
  CgSoundSystem *SoundSystem; 
  unsigned int v89; 
  __int64 v90; 
  __int64 v91; 
  const char *v92; 
  char *v93; 
  signed __int64 v94; 
  int v95; 
  int v96; 
  int v98; 
  int v99; 
  __int64 v100; 
  const char *v101; 
  char *v102; 
  signed __int64 v103; 
  int v104; 
  int v105; 
  int v107; 
  int v108; 
  const char *v109; 
  char *v110; 
  signed __int64 v111; 
  int v112; 
  int v113; 
  int v115; 
  int v116; 
  __int64 v117; 
  const char *v118; 
  char *v119; 
  signed __int64 v120; 
  int v121; 
  int v122; 
  int v124; 
  int v125; 
  scr_string_t v126; 
  __int64 v127; 
  __int64 v128; 
  const char *v129; 
  char *v130; 
  signed __int64 v131; 
  int v132; 
  int v133; 
  int v135; 
  int v136; 
  cg_t *v137; 
  CgHandler *v138; 
  scr_string_t v139; 
  const char *v140; 
  char *v141; 
  signed __int64 v142; 
  int v143; 
  int v144; 
  int v146; 
  int v147; 
  __int64 v148; 
  __int64 v149; 
  const char *v150; 
  char *v151; 
  signed __int64 v152; 
  int v153; 
  int v154; 
  int v156; 
  int v157; 
  __int64 v158; 
  __int64 v159; 
  const char *v160; 
  char *v161; 
  signed __int64 v162; 
  int v163; 
  int v164; 
  int v166; 
  int v167; 
  cg_t *v168; 
  int v169; 
  const characterInfo_t *v170; 
  const characterInfo_t *v171; 
  team_t v172; 
  __int64 v173; 
  const char *v174; 
  char *v175; 
  signed __int64 v176; 
  int v177; 
  int v178; 
  int v180; 
  int v181; 
  cg_t *v182; 
  const characterInfo_t *CharacterInfo; 
  const characterInfo_t *v184; 
  team_t team; 
  const char *v186; 
  char *v187; 
  signed __int64 v188; 
  int v189; 
  int v190; 
  int v192; 
  int v193; 
  char *v194; 
  CgSoundSystem *v195; 
  scr_string_t noteName; 
  const char *v197; 
  char *v198; 
  signed __int64 v199; 
  int v200; 
  int v201; 
  int v203; 
  int v204; 
  __int64 v205; 
  const char *v206; 
  char *v207; 
  signed __int64 v208; 
  int v209; 
  int v210; 
  int v212; 
  int v213; 
  unsigned __int8 outBoneIndex[8]; 
  char *outCommand; 
  FXRegisteredDef outDef; 
  FXRegisteredDef def; 
  char *effectName; 
  DObj *obj; 
  char *str[2]; 
  vec3_t origin; 
  const XAnimNotify *v222; 
  float v223; 
  tmat33_t<vec3_t> out; 
  vec3_t outOrigin; 
  tmat33_t<vec3_t> outTagMat; 
  tmat33_t<vec3_t> axis; 
  char paramBuf[272]; 
  char targetBuf[272]; 
  char commandBuf[272]; 
  char v231; 
  char v232[272]; 

  str[1] = (char *)-2i64;
  m_particleSystemDef = cpose;
  outDef.m_particleSystemDef = (const ParticleSystemDef *)cpose;
  obj = dObj;
  LODWORD(def.m_particleSystemDef) = entNum;
  v222 = notify;
  if ( !cpose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_utils.cpp", 550, ASSERT_TYPE_ASSERT, "(cpose)", (const char *)&queryFormat, "cpose") )
    __debugbreak();
  commandBuf[0] = 0;
  paramBuf[0] = 0;
  targetBuf[0] = 0;
  outCommand = NULL;
  effectName = NULL;
  str[0] = NULL;
  v13 = SL_ConvertToString(notify->noteName);
  v14 = Com_ParseNoteTrack(v13, commandBuf, paramBuf, targetBuf, (const char **)&outCommand, (const char **)&effectName, (const char **)str);
  switch ( v14 )
  {
    case 3:
      if ( processFxNotetracks )
      {
        v15 = 0x7FFFFFFFi64;
        v16 = 0x7FFFFFFFi64;
        v17 = "fx_playfxontag";
        v18 = outCommand;
        if ( !outCommand && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
          __debugbreak();
        v19 = v18 - "fx_playfxontag";
        while ( 1 )
        {
          v20 = (unsigned __int8)v17[v19];
          v21 = *(unsigned __int8 *)v17++;
          if ( !v16-- )
          {
LABEL_18:
            outDef.m_particleSystemDef = NULL;
            v25 = effectName;
            if ( !effectName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_utils.cpp", 368, ASSERT_TYPE_ASSERT, "(fxName)", (const char *)&queryFormat, "fxName") )
              __debugbreak();
            FX_LoadEffect(v25, &outDef);
            if ( !outDef.m_particleSystemDef )
              Com_PrintError(19, "ERROR: Failed to find fx (%s) to play as a notetrack", v25);
            String = SL_GetString(str[0], 0);
            CG_PlayBoltedEffect(localClientNum, &outDef, entNum, String);
            SL_RemoveRefToString(String);
            return;
          }
          if ( v20 != v21 )
          {
            v23 = v20 + 32;
            if ( (unsigned int)(v20 - 65) > 0x19 )
              v23 = v20;
            v20 = v23;
            v24 = v21 + 32;
            if ( (unsigned int)(v21 - 65) > 0x19 )
              v24 = v21;
            if ( v20 != v24 )
              break;
          }
          if ( !v20 )
            goto LABEL_18;
        }
        v27 = 0x7FFFFFFFi64;
        v28 = "fx_stopfxontag";
        v29 = outCommand;
        if ( !outCommand && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
          __debugbreak();
        v30 = v29 - "fx_stopfxontag";
        while ( 1 )
        {
          v31 = (unsigned __int8)v28[v30];
          v32 = *(unsigned __int8 *)v28++;
          if ( !v27-- )
          {
LABEL_36:
            outDef.m_particleSystemDef = NULL;
            v36 = effectName;
            if ( !effectName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_utils.cpp", 368, ASSERT_TYPE_ASSERT, "(fxName)", (const char *)&queryFormat, "fxName") )
              __debugbreak();
            FX_LoadEffect(v36, &outDef);
            if ( !outDef.m_particleSystemDef )
              Com_PrintError(19, "ERROR: Failed to find fx (%s) to play as a notetrack", v36);
            v37 = SL_GetString(str[0], 0);
            CG_StopBoltedEffects(localClientNum, &outDef, entNum, v37);
            SL_RemoveRefToString(v37);
            return;
          }
          if ( v31 != v32 )
          {
            v34 = v31 + 32;
            if ( (unsigned int)(v31 - 65) > 0x19 )
              v34 = v31;
            v31 = v34;
            v35 = v32 + 32;
            if ( (unsigned int)(v32 - 65) > 0x19 )
              v35 = v32;
            if ( v31 != v35 )
              break;
          }
          if ( !v31 )
            goto LABEL_36;
        }
        v38 = 0x7FFFFFFFi64;
        v39 = "fx_killfxontag";
        v40 = outCommand;
        if ( !outCommand && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
          __debugbreak();
        v41 = v40 - "fx_killfxontag";
        while ( 1 )
        {
          v42 = (unsigned __int8)v39[v41];
          v43 = *(unsigned __int8 *)v39++;
          if ( !v38-- )
          {
LABEL_54:
            outDef.m_particleSystemDef = NULL;
            v47 = effectName;
            if ( !effectName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_utils.cpp", 368, ASSERT_TYPE_ASSERT, "(fxName)", (const char *)&queryFormat, "fxName") )
              __debugbreak();
            FX_LoadEffect(v47, &outDef);
            if ( !outDef.m_particleSystemDef )
              Com_PrintError(19, "ERROR: Failed to find fx (%s) to play as a notetrack", v47);
            v48 = SL_GetString(str[0], 0);
            CG_KillBoltedEffects(localClientNum, &outDef, entNum, v48);
            SL_RemoveRefToString(v48);
            return;
          }
          if ( v42 != v43 )
          {
            v45 = v42 + 32;
            if ( (unsigned int)(v42 - 65) > 0x19 )
              v45 = v42;
            v42 = v45;
            v46 = v43 + 32;
            if ( (unsigned int)(v43 - 65) > 0x19 )
              v46 = v43;
            if ( v42 != v46 )
              break;
          }
          if ( !v42 )
            goto LABEL_54;
        }
        v49 = 0x7FFFFFFFi64;
        v50 = "fx_debris";
        v51 = outCommand;
        if ( !outCommand && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
          __debugbreak();
        v52 = v51 - "fx_debris";
        do
        {
          v53 = (unsigned __int8)v50[v52];
          v54 = *(unsigned __int8 *)v50++;
          if ( !v49-- )
            break;
          if ( v53 != v54 )
          {
            v56 = v53 + 32;
            if ( (unsigned int)(v53 - 65) > 0x19 )
              v56 = v53;
            v53 = v56;
            v57 = v54 + 32;
            if ( (unsigned int)(v54 - 65) > 0x19 )
              v57 = v54;
            if ( v53 != v57 )
            {
              v62 = "fx_playfx";
              v63 = outCommand;
              if ( !outCommand && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
                __debugbreak();
              v64 = v63 - "fx_playfx";
              do
              {
                v65 = (unsigned __int8)v62[v64];
                v66 = *(unsigned __int8 *)v62++;
                if ( !v15-- )
                  break;
                if ( v65 != v66 )
                {
                  v68 = v65 + 32;
                  if ( (unsigned int)(v65 - 65) > 0x19 )
                    v68 = v65;
                  v65 = v68;
                  v69 = v66 + 32;
                  if ( (unsigned int)(v66 - 65) > 0x19 )
                    v69 = v66;
                  if ( v65 != v69 )
                  {
                    m_particleSystemDef = (const cpose_t *)outDef.m_particleSystemDef;
                    goto LABEL_105;
                  }
                }
              }
              while ( v65 );
              def.m_particleSystemDef = NULL;
              MatrixIdentity33(&out);
              v222 = NULL;
              v223 = 0.0;
              v70 = effectName;
              if ( !effectName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_utils.cpp", 368, ASSERT_TYPE_ASSERT, "(fxName)", (const char *)&queryFormat, "fxName") )
                __debugbreak();
              FX_LoadEffect(v70, &def);
              if ( !def.m_particleSystemDef )
                Com_PrintError(19, "ERROR: Failed to find fx (%s) to play as a notetrack", v70);
              if ( j_sscanf(str[0], "%f,%f,%f,%f,%f,%f,%f,%f,%f", &v222, (char *)&v222 + 4, &v223, &out, &out.row0.y, &out.row0.z, &out.row2, &out.row2.y, &out.row2.z) != 9 )
                Com_PrintError(14, "Unexpected number of parameters for 'fx_playfx' note track\n");
              out.m[1].v[0] = (float)(out.m[0].v[2] * out.m[2].v[1]) - (float)(out.m[0].v[1] * out.m[2].v[2]);
              out.m[1].v[1] = (float)(out.m[2].v[2] * out.m[0].v[0]) - (float)(out.m[0].v[2] * out.m[2].v[0]);
              out.m[1].v[2] = (float)(out.m[0].v[1] * out.m[2].v[0]) - (float)(out.m[2].v[1] * out.m[0].v[0]);
              CG_DObjGetWorldBoneMatrix((const cpose_t *)outDef.m_particleSystemDef, obj, 0, &outTagMat, &outOrigin);
              MatrixMultiply(&outTagMat, &out, &axis);
              origin.v[0] = (float)((float)((float)(*((float *)&v222 + 1) * outTagMat.m[1].v[0]) + (float)(*(float *)&v222 * outTagMat.m[0].v[0])) + (float)(v223 * outTagMat.m[2].v[0])) + outOrigin.v[0];
              origin.v[1] = (float)((float)((float)(*((float *)&v222 + 1) * outTagMat.m[1].v[1]) + (float)(*(float *)&v222 * outTagMat.m[0].v[1])) + (float)(v223 * outTagMat.m[2].v[1])) + outOrigin.v[1];
              origin.v[2] = (float)((float)((float)(*((float *)&v222 + 1) * outTagMat.m[1].v[2]) + (float)(*(float *)&v222 * outTagMat.m[0].v[2])) + (float)(v223 * outTagMat.m[2].v[2])) + outOrigin.v[2];
              LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
              FX_PlayOrientedEffect(localClientNum, &def, LocalClientGlobals->time, &origin, &axis);
              return;
            }
          }
        }
        while ( v53 );
        outDef.m_particleSystemDef = NULL;
        v58 = effectName;
        if ( !effectName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_utils.cpp", 368, ASSERT_TYPE_ASSERT, "(fxName)", (const char *)&queryFormat, "fxName") )
          __debugbreak();
        FX_LoadEffect(v58, &outDef);
        if ( !outDef.m_particleSystemDef )
          Com_PrintError(19, "ERROR: Failed to find fx (%s) to play as a notetrack", v58);
        v59 = &v231;
        if ( j_sscanf(str[0], "%[^','],%[^',']", v232, &v231) != 2 )
          v59 = NULL;
        v60 = SL_GetString(v232, 0);
        CG_PlayBoltedEffect(localClientNum, &outDef, entNum, v60);
        v61 = v60;
        if ( !isMayhem )
        {
          v72 = v59;
          goto LABEL_102;
        }
LABEL_80:
        Mayhem_HidePart(1, mayhemEntId, v61);
        SL_RemoveRefToString(v60);
        return;
      }
LABEL_105:
      v74 = 4i64;
      v75 = "pst_";
      v76 = outCommand;
      if ( !outCommand && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      v77 = v76 - "pst_";
      do
      {
        v78 = (unsigned __int8)v75[v77];
        v79 = *(unsigned __int8 *)v75++;
        if ( !v74-- )
          break;
        if ( v78 != v79 )
        {
          v81 = v78 + 32;
          if ( (unsigned int)(v78 - 65) > 0x19 )
            v81 = v78;
          v78 = v81;
          v82 = v79 + 32;
          if ( (unsigned int)(v79 - 65) > 0x19 )
            v82 = v79;
          if ( v78 != v82 )
            return;
        }
      }
      while ( v78 );
      outBoneIndex[0] = -2;
      v83 = SL_GetString(effectName, 0);
      CG_Utils_GetBoneOrigin(obj, m_particleSystemDef, v83, outBoneIndex, &origin);
      v84 = CG_GetLocalClientGlobals(localClientNum);
      Handler = CgHandler::getHandler(localClientNum);
      CgHandler::GetPlayerTeam(Handler, v84->predictedPlayerState.clientNum, (team_t *)&obj);
      v86 = SL_GetString(str[0], 0);
      if ( !Com_Teams_TeamFromString(v86, (team_t *)&def) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_utils.cpp", 673, ASSERT_TYPE_ASSERT, "(Com_Teams_TeamFromString( SL_GetString( notetrackCmdTarget, 0 ), playToTeam ))", (const char *)&queryFormat, "Com_Teams_TeamFromString( SL_GetString( notetrackCmdTarget, 0 ), playToTeam )") )
        __debugbreak();
      if ( (_DWORD)obj == LODWORD(def.m_particleSystemDef) )
      {
        v87 = outCommand + 4;
        if ( outCommand == (char *)-4i64 )
        {
LABEL_122:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_utils.cpp", 399, ASSERT_TYPE_ASSERT, "(aliasName)", (const char *)&queryFormat, "aliasName") )
            __debugbreak();
        }
LABEL_124:
        SoundSystem = CgSoundSystem::GetSoundSystem(localClientNum);
        v89 = SoundSystem->PlaySoundAliasByName2(SoundSystem, entNum, &origin, v87);
        if ( isMayhem )
          Mayhem_SetSoundEntry(v89, mayhemEntId, subObjIdx, outBoneIndex[0]);
      }
      break;
    case 2:
      v90 = 0x7FFFFFFFi64;
      v91 = 0x7FFFFFFFi64;
      v92 = "rumble_play";
      v93 = outCommand;
      if ( !outCommand && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      v94 = v93 - "rumble_play";
      while ( 1 )
      {
        v95 = (unsigned __int8)v92[v94];
        v96 = *(unsigned __int8 *)v92++;
        if ( !v91-- )
        {
LABEL_139:
          CG_Rumble_PlayOnClientSafeByName(localClientNum, effectName);
          return;
        }
        if ( v95 != v96 )
        {
          v98 = v95 + 32;
          if ( (unsigned int)(v95 - 65) > 0x19 )
            v98 = v95;
          v95 = v98;
          v99 = v96 + 32;
          if ( (unsigned int)(v96 - 65) > 0x19 )
            v99 = v96;
          if ( v95 != v99 )
            break;
        }
        if ( !v95 )
          goto LABEL_139;
      }
      v100 = 0x7FFFFFFFi64;
      v101 = "hide";
      v102 = outCommand;
      if ( !outCommand && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      v103 = v102 - "hide";
      do
      {
        v104 = (unsigned __int8)v101[v103];
        v105 = *(unsigned __int8 *)v101++;
        if ( !v100-- )
          break;
        if ( v104 != v105 )
        {
          v107 = v104 + 32;
          if ( (unsigned int)(v104 - 65) > 0x19 )
            v107 = v104;
          v104 = v107;
          v108 = v105 + 32;
          if ( (unsigned int)(v105 - 65) > 0x19 )
            v108 = v105;
          if ( v104 != v108 )
          {
            v109 = "show";
            v110 = outCommand;
            if ( !outCommand && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
              __debugbreak();
            v111 = v110 - "show";
            do
            {
              v112 = (unsigned __int8)v109[v111];
              v113 = *(unsigned __int8 *)v109++;
              if ( !v90-- )
                break;
              if ( v112 != v113 )
              {
                v115 = v112 + 32;
                if ( (unsigned int)(v112 - 65) > 0x19 )
                  v115 = v112;
                v112 = v115;
                v116 = v113 + 32;
                if ( (unsigned int)(v113 - 65) > 0x19 )
                  v116 = v113;
                if ( v112 != v116 )
                {
                  v117 = 3i64;
                  v118 = "ps_";
                  v119 = outCommand;
                  if ( !outCommand && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
                    __debugbreak();
                  v120 = v119 - "ps_";
                  do
                  {
                    v121 = (unsigned __int8)v118[v120];
                    v122 = *(unsigned __int8 *)v118++;
                    if ( !v117-- )
                      break;
                    if ( v121 != v122 )
                    {
                      v124 = v121 + 32;
                      if ( (unsigned int)(v121 - 65) > 0x19 )
                        v124 = v121;
                      v121 = v124;
                      v125 = v122 + 32;
                      if ( (unsigned int)(v122 - 65) > 0x19 )
                        v125 = v122;
                      if ( v121 != v125 )
                      {
                        v127 = 4i64;
                        v128 = 4i64;
                        v129 = "pst_";
                        v130 = outCommand;
                        if ( !outCommand && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
                          __debugbreak();
                        v131 = v130 - "pst_";
                        do
                        {
                          v132 = (unsigned __int8)v129[v131];
                          v133 = *(unsigned __int8 *)v129++;
                          if ( !v128-- )
                            break;
                          if ( v132 != v133 )
                          {
                            v135 = v132 + 32;
                            if ( (unsigned int)(v132 - 65) > 0x19 )
                              v135 = v132;
                            v132 = v135;
                            v136 = v133 + 32;
                            if ( (unsigned int)(v133 - 65) > 0x19 )
                              v136 = v133;
                            if ( v132 != v136 )
                            {
                              v140 = "veh_";
                              v141 = outCommand;
                              if ( !outCommand && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
                                __debugbreak();
                              v142 = v141 - "veh_";
                              do
                              {
                                v143 = (unsigned __int8)v140[v142];
                                v144 = *(unsigned __int8 *)v140++;
                                if ( !v127-- )
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
                                    return;
                                }
                              }
                              while ( v143 );
                              CG_Utils_PlayVehicleNotetracks(localClientNum, entNum, outCommand, paramBuf);
                              return;
                            }
                          }
                        }
                        while ( v132 );
                        v137 = CG_GetLocalClientGlobals(localClientNum);
                        v138 = CgHandler::getHandler(localClientNum);
                        CgHandler::GetPlayerTeam(v138, v137->predictedPlayerState.clientNum, (team_t *)&def);
                        v139 = SL_GetString(effectName, 0);
                        Com_Teams_TeamFromString(v139, (team_t *)&obj);
                        if ( LODWORD(def.m_particleSystemDef) != (_DWORD)obj )
                          return;
                        CG_GetPoseOrigin((const cpose_t *)outDef.m_particleSystemDef, &origin);
                        CG_Utils_PlayNotetrackSound(localClientNum, outCommand + 4, entNum, &origin, isViewmodel, isMayhem, 1);
                        goto LABEL_224;
                      }
                    }
                  }
                  while ( v121 );
                  outBoneIndex[0] = -2;
                  v126 = SL_GetString(effectName, 0);
                  CG_Utils_GetBoneOrigin(obj, (const cpose_t *)outDef.m_particleSystemDef, v126, outBoneIndex, &origin);
                  SL_RemoveRefToString(v126);
                  v87 = outCommand + 3;
                  if ( outCommand != (char *)-3i64 )
                    goto LABEL_124;
                  goto LABEL_122;
                }
              }
            }
            while ( v112 );
            v60 = SL_GetString(effectName, 0);
            v61 = v60;
            if ( isMayhem )
            {
              Mayhem_HidePart(0, mayhemEntId, v60);
              SL_RemoveRefToString(v60);
              return;
            }
            v73 = 0;
            v72 = NULL;
            goto LABEL_103;
          }
        }
      }
      while ( v104 );
      v60 = SL_GetString(effectName, 0);
      v61 = v60;
      if ( !isMayhem )
      {
        v72 = NULL;
LABEL_102:
        v73 = 1;
LABEL_103:
        CG_Utils_HidePart(obj, v72, v61, v73);
        SL_RemoveRefToString(v60);
        return;
      }
      goto LABEL_80;
    case 1:
      v148 = 3i64;
      v149 = 3i64;
      v150 = "ps_";
      v151 = outCommand;
      if ( !outCommand && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      v152 = v151 - "ps_";
      while ( 1 )
      {
        v153 = (unsigned __int8)v150[v152];
        v154 = *(unsigned __int8 *)v150++;
        if ( !v149-- )
        {
LABEL_223:
          CG_GetPoseOrigin((const cpose_t *)outDef.m_particleSystemDef, &origin);
          CG_Utils_PlayNotetrackSound(localClientNum, outCommand + 3, entNum, &origin, isViewmodel, isMayhem, 0);
LABEL_224:
          memset(&origin, 0, sizeof(origin));
          return;
        }
        if ( v153 != v154 )
        {
          v156 = v153 + 32;
          if ( (unsigned int)(v153 - 65) > 0x19 )
            v156 = v153;
          v153 = v156;
          v157 = v154 + 32;
          if ( (unsigned int)(v154 - 65) > 0x19 )
            v157 = v154;
          if ( v153 != v157 )
            break;
        }
        if ( !v153 )
          goto LABEL_223;
      }
      v158 = 4i64;
      v159 = 4i64;
      v160 = "psa_";
      v161 = outCommand;
      if ( !outCommand && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      v162 = v161 - "psa_";
      do
      {
        v163 = (unsigned __int8)v160[v162];
        v164 = *(unsigned __int8 *)v160++;
        if ( !v159-- )
          break;
        if ( v163 != v164 )
        {
          v166 = v163 + 32;
          if ( (unsigned int)(v163 - 65) > 0x19 )
            v166 = v163;
          v163 = v166;
          v167 = v164 + 32;
          if ( (unsigned int)(v164 - 65) > 0x19 )
            v167 = v164;
          if ( v163 != v167 )
          {
            v173 = 4i64;
            v174 = "pse_";
            v175 = outCommand;
            if ( !outCommand && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
              __debugbreak();
            v176 = v175 - "pse_";
            do
            {
              v177 = (unsigned __int8)v174[v176];
              v178 = *(unsigned __int8 *)v174++;
              if ( !v173-- )
                break;
              if ( v177 != v178 )
              {
                v180 = v177 + 32;
                if ( (unsigned int)(v177 - 65) > 0x19 )
                  v180 = v177;
                v177 = v180;
                v181 = v178 + 32;
                if ( (unsigned int)(v178 - 65) > 0x19 )
                  v181 = v178;
                if ( v177 != v181 )
                {
                  v186 = "vo_";
                  v187 = outCommand;
                  if ( !outCommand && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
                    __debugbreak();
                  v188 = v187 - "vo_";
                  while ( 1 )
                  {
                    v189 = (unsigned __int8)v186[v188];
                    v190 = *(unsigned __int8 *)v186++;
                    if ( !v148-- )
                    {
LABEL_272:
                      outBoneIndex[0] = -2;
                      CG_Utils_GetBoneOrigin(obj, (const cpose_t *)outDef.m_particleSystemDef, scr_const.j_head, outBoneIndex, &origin);
                      v194 = outCommand + 3;
                      if ( outCommand == (char *)-3i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_utils.cpp", 399, ASSERT_TYPE_ASSERT, "(aliasName)", (const char *)&queryFormat, "aliasName") )
                        __debugbreak();
                      v195 = CgSoundSystem::GetSoundSystem(localClientNum);
                      v195->PlaySoundAliasByName2(v195, (const int)def.m_particleSystemDef, &origin, v194);
                      return;
                    }
                    if ( v189 != v190 )
                    {
                      v192 = v189 + 32;
                      if ( (unsigned int)(v189 - 65) > 0x19 )
                        v192 = v189;
                      v189 = v192;
                      v193 = v190 + 32;
                      if ( (unsigned int)(v190 - 65) > 0x19 )
                        v193 = v190;
                      if ( v189 != v193 )
                        break;
                    }
                    if ( !v189 )
                      goto LABEL_272;
                  }
                  noteName = v222->noteName;
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
                    v197 = "veh_";
                    v198 = outCommand;
                    if ( !outCommand && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
                      __debugbreak();
                    v199 = v198 - "veh_";
                    do
                    {
                      v200 = (unsigned __int8)v197[v199];
                      v201 = *(unsigned __int8 *)v197++;
                      if ( !v158-- )
                        break;
                      if ( v200 != v201 )
                      {
                        v203 = v200 + 32;
                        if ( (unsigned int)(v200 - 65) > 0x19 )
                          v203 = v200;
                        v200 = v203;
                        v204 = v201 + 32;
                        if ( (unsigned int)(v201 - 65) > 0x19 )
                          v204 = v201;
                        if ( v200 != v204 )
                        {
                          v205 = 9i64;
                          v206 = "vfx_smoke";
                          v207 = outCommand;
                          if ( !outCommand && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
                            __debugbreak();
                          v208 = v207 - "vfx_smoke";
                          while ( 1 )
                          {
                            v209 = (unsigned __int8)v206[v208];
                            v210 = *(unsigned __int8 *)v206++;
                            if ( !v205-- )
                              goto LABEL_305;
                            if ( v209 != v210 )
                            {
                              v212 = v209 + 32;
                              if ( (unsigned int)(v209 - 65) > 0x19 )
                                v212 = v209;
                              v209 = v212;
                              v213 = v210 + 32;
                              if ( (unsigned int)(v210 - 65) > 0x19 )
                                v213 = v210;
                              if ( v209 != v213 )
                                return;
                            }
                            if ( !v209 )
                              goto LABEL_305;
                          }
                        }
                      }
                    }
                    while ( v200 );
LABEL_305:
                    CG_Utils_PlayVehicleNotetracks(localClientNum, (const int)def.m_particleSystemDef, outCommand, paramBuf);
                  }
                  return;
                }
              }
            }
            while ( v177 );
            v182 = CG_GetLocalClientGlobals(localClientNum);
            v169 = (int)def.m_particleSystemDef;
            CharacterInfo = cg_t::TryGetCharacterInfo(v182, (const int)def.m_particleSystemDef);
            v184 = cg_t::TryGetCharacterInfo(v182, v182->predictedPlayerState.clientNum);
            if ( !CharacterInfo )
              return;
            if ( !v184 )
              return;
            team = v184->team;
            if ( team )
            {
              if ( team == CharacterInfo->team )
                return;
            }
            goto LABEL_242;
          }
        }
      }
      while ( v163 );
      v168 = CG_GetLocalClientGlobals(localClientNum);
      v169 = (int)def.m_particleSystemDef;
      v170 = cg_t::TryGetCharacterInfo(v168, (const int)def.m_particleSystemDef);
      v171 = cg_t::TryGetCharacterInfo(v168, v168->predictedPlayerState.clientNum);
      if ( v170 )
      {
        if ( v171 )
        {
          v172 = v171->team;
          if ( v172 )
          {
            if ( v172 == v170->team )
            {
LABEL_242:
              CG_GetPoseOrigin((const cpose_t *)outDef.m_particleSystemDef, &origin);
              CG_Utils_PlayNotetrackSound(localClientNum, outCommand + 4, v169, &origin, isViewmodel, isMayhem, 1);
              goto LABEL_224;
            }
          }
        }
      }
      break;
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
  __int64 v1; 
  cg_t *LocalClientGlobals; 
  CgWeaponMap *v3; 
  double v4; 
  bool result; 

  v1 = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !CgWeaponMap::ms_instance[v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v3 = CgWeaponMap::ms_instance[v1];
  if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_utils.cpp", 947, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  result = 0;
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.pm_flags, ACTIVE, 9u) && !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.weapCommon.weapFlags, ACTIVE, 1u) )
  {
    v4 = BG_WeaponADSFractionAffectedByReload(v3, &LocalClientGlobals->predictedPlayerState);
    if ( *(float *)&v4 > 0.75 && BG_GetHudOutlineWeapon(v3, &LocalClientGlobals->predictedPlayerState) && !BG_IsEMPJammed(&LocalClientGlobals->predictedPlayerState) )
      return 1;
  }
  return result;
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
  __int64 v3; 
  const dvar_t *v6; 
  cgs_t *v7; 
  const dvar_t *v8; 
  const char *v9; 
  int Int_Internal_DebugName; 
  bool v11; 
  int v12; 
  __int64 v15; 
  __int64 v16; 

  v3 = localClientNum;
  if ( !alias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_utils.cpp", 271, ASSERT_TYPE_ASSERT, "(alias)", (const char *)&queryFormat, "alias") )
    __debugbreak();
  if ( msec && alias->subtitle )
  {
    v6 = DVARBOOL_cg_ignoreSubtitle;
    if ( !DVARBOOL_cg_ignoreSubtitle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_ignoreSubtitle") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    if ( !v6->current.enabled )
    {
      if ( (unsigned int)v3 >= 2 )
      {
        LODWORD(v16) = 2;
        LODWORD(v15) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals_static.h", 98, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v15, v16) )
          __debugbreak();
      }
      if ( (int)v3 < cgs_t::ms_allocatedCount )
      {
        if ( (unsigned int)v3 >= cgs_t::ms_allocatedCount )
        {
          LODWORD(v16) = cgs_t::ms_allocatedCount;
          LODWORD(v15) = v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals_static.h", 112, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cgs_t::ms_allocatedCount )", "localClientNum doesn't index cgs_t::ms_allocatedCount\n\t%i not in [0, %i)", v15, v16) )
            __debugbreak();
        }
        if ( !cgs_t::ms_cgsArray[v3] )
        {
          LODWORD(v16) = v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals_static.h", 113, ASSERT_TYPE_ASSERT, "(cgs_t::ms_cgsArray[localClientNum])", "%s\n\tTrying to access unallocated client static globals for localClientNum %d\n", "cgs_t::ms_cgsArray[localClientNum]", v16) )
            __debugbreak();
        }
        if ( cgs_t::ms_allocatedType == STATIC_GLOB_TYPE_UNKNOWN )
        {
          LODWORD(v16) = v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals_static.h", 114, ASSERT_TYPE_ASSERT, "(cgs_t::ms_allocatedType != CgStaticGlobalsType::STATIC_GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client static globals for localClientNum %d but the client static global type is not known\n", "cgs_t::ms_allocatedType != CgStaticGlobalsType::STATIC_GLOB_TYPE_UNKNOWN", v16) )
            __debugbreak();
        }
        v7 = cgs_t::ms_cgsArray[v3];
        if ( v7 )
        {
          if ( v7->viewAspect <= 1.3333334 )
          {
            v8 = DVARINT_cg_subtitleWidthStandard;
            v9 = "cg_subtitleWidthStandard";
          }
          else
          {
            v8 = DVARINT_cg_subtitleWidthWidescreen;
            v9 = "cg_subtitleWidthWidescreen";
          }
          Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(v8, v9);
          v11 = HIBYTE(alias->flags) & 1;
          v12 = Int_Internal_DebugName;
          Dvar_GetFloat_Internal_DebugName(DVARFLT_cg_subtitleMinTime, "cg_subtitleMinTime");
          _XMM0 = 0i64;
          __asm { vroundss xmm1, xmm0, xmm4, 1 }
          if ( (int)*(float *)&_XMM1 > msec )
            msec = (int)*(float *)&_XMM1;
          CL_SubtitlePrint((LocalClientNum_t)v3, alias->subtitle, msec, v12, v11);
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
  float v6; 
  float v7; 
  __int128 v8; 
  float v9; 
  float v13; 
  float v14; 
  cg_t *LocalClientGlobals; 
  float v16; 
  vec3_t outOrg; 
  __int64 v18; 

  v18 = -2i64;
  v6 = end->v[0] - start->v[0];
  v8 = LODWORD(end->v[1]);
  v7 = end->v[1] - start->v[1];
  v9 = end->v[2] - start->v[2];
  *(float *)&v8 = fsqrt((float)((float)(v7 * v7) + (float)(v6 * v6)) + (float)(v9 * v9));
  _XMM1 = v8;
  __asm
  {
    vcmpless xmm0, xmm1, cs:__real@80000000
    vblendvps xmm1, xmm1, xmm2, xmm0
  }
  v13 = (float)(1.0 / *(float *)&_XMM1) * v6;
  v14 = (float)(1.0 / *(float *)&_XMM1) * v7;
  *(float *)&v8 = (float)(1.0 / *(float *)&_XMM1) * v9;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
  v16 = (float)((float)(v14 * (float)(outOrg.v[1] - start->v[1])) + (float)(v13 * (float)(outOrg.v[0] - start->v[0]))) + (float)(*(float *)&v8 * (float)(outOrg.v[2] - start->v[2]));
  outPoint->v[0] = (float)(v13 * v16) + start->v[0];
  outPoint->v[1] = (float)(v14 * v16) + start->v[1];
  outPoint->v[2] = (float)(*(float *)&v8 * v16) + start->v[2];
  memset(&outOrg, 0, sizeof(outOrg));
}

/*
==============
GetOutlineFadeAmount
==============
*/
float GetOutlineFadeAmount(const int *beginFadeTime, LocalClientNum_t localClientNum)
{
  int time; 

  time = CgGlobalsMP::GetLocalClientGlobals(localClientNum)->time;
  if ( *beginFadeTime < time )
    return 1.0 - (float)((float)(time - *beginFadeTime) * 0.00066666666);
  else
    return FLOAT_1_0;
}

