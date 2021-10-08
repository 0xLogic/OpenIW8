/*
==============
BG_MatchRules_Initialize
==============
*/

void __fastcall BG_MatchRules_Initialize(MatchRules *matchRules)
{
  ?BG_MatchRules_Initialize@@YAXPEAUMatchRules@@@Z(matchRules);
}

/*
==============
BG_MatchRulesData_GetHardcoreMode
==============
*/

bool __fastcall BG_MatchRulesData_GetHardcoreMode(MatchRules *matchRules)
{
  return ?BG_MatchRulesData_GetHardcoreMode@@YA_NPEAUMatchRules@@@Z(matchRules);
}

/*
==============
MatchRules_IsEquipmentRestricted
==============
*/

int __fastcall MatchRules_IsEquipmentRestricted(const char *equipmentName)
{
  return ?MatchRules_IsEquipmentRestricted@@YAHPEBD@Z(equipmentName);
}

/*
==============
BG_MatchRulesData_GetMLGVersion
==============
*/

const char *__fastcall BG_MatchRulesData_GetMLGVersion(MatchRules *matchRules)
{
  return ?BG_MatchRulesData_GetMLGVersion@@YAPEBDPEAUMatchRules@@@Z(matchRules);
}

/*
==============
MatchRules_SetAttachmentRestricted
==============
*/

int __fastcall MatchRules_SetAttachmentRestricted(const char *attachmentName, bool restricted)
{
  return ?MatchRules_SetAttachmentRestricted@@YAHPEBD_N@Z(attachmentName, restricted);
}

/*
==============
GetMatchRulesDefaultDataFromFF
==============
*/

const MatchRulesRawfileCache *__fastcall GetMatchRulesDefaultDataFromFF(const char *gametype)
{
  return ?GetMatchRulesDefaultDataFromFF@@YAPEBUMatchRulesRawfileCache@@PEBD@Z(gametype);
}

/*
==============
MatchRules_SetWeaponClassRestricted
==============
*/

int __fastcall MatchRules_SetWeaponClassRestricted(const char *weaponClassName, bool restricted)
{
  return ?MatchRules_SetWeaponClassRestricted@@YAHPEBD_N@Z(weaponClassName, restricted);
}

/*
==============
MatchRules_SetLoadoutItemRestricted
==============
*/

int __fastcall MatchRules_SetLoadoutItemRestricted(const char *itemName, const scr_string_t itemType, bool restricted)
{
  return ?MatchRules_SetLoadoutItemRestricted@@YAHPEBDW4scr_string_t@@_N@Z(itemName, itemType, restricted);
}

/*
==============
AreMatchRulesDefaultFromFF
==============
*/

int __fastcall AreMatchRulesDefaultFromFF(MatchRules *matchRules)
{
  return ?AreMatchRulesDefaultFromFF@@YAHPEAUMatchRules@@@Z(matchRules);
}

/*
==============
MatchRules_IsAttachmentClassRestricted
==============
*/

int __fastcall MatchRules_IsAttachmentClassRestricted(const char *attachmentClassName)
{
  return ?MatchRules_IsAttachmentClassRestricted@@YAHPEBD@Z(attachmentClassName);
}

/*
==============
BG_MatchRulesData_GetCWLEnabled
==============
*/

bool __fastcall BG_MatchRulesData_GetCWLEnabled(MatchRules *matchRules)
{
  return ?BG_MatchRulesData_GetCWLEnabled@@YA_NPEAUMatchRules@@@Z(matchRules);
}

/*
==============
MatchRules_ValidateCustomClass
==============
*/

int __fastcall MatchRules_ValidateCustomClass(const int localControllerIndex, const char *squadLocation, int squadMemberIndex, const char *squadSlotLocation, int slot, const StatsGroup statsGroup)
{
  return ?MatchRules_ValidateCustomClass@@YAHHPEBDH0HW4StatsGroup@@@Z(localControllerIndex, squadLocation, squadMemberIndex, squadSlotLocation, slot, statsGroup);
}

/*
==============
MatchRules_SetWeaponRestricted
==============
*/

int __fastcall MatchRules_SetWeaponRestricted(const char *weaponName, bool restricted)
{
  return ?MatchRules_SetWeaponRestricted@@YAHPEBD_N@Z(weaponName, restricted);
}

/*
==============
MatchRules_IsPerkRestricted
==============
*/

int __fastcall MatchRules_IsPerkRestricted(const char *perkName)
{
  return ?MatchRules_IsPerkRestricted@@YAHPEBD@Z(perkName);
}

/*
==============
MatchRules_Frame
==============
*/

void __fastcall MatchRules_Frame(const int controllerIndex)
{
  ?MatchRules_Frame@@YAXH@Z(controllerIndex);
}

/*
==============
BG_MatchRulesData_GetTacticalMode
==============
*/

bool __fastcall BG_MatchRulesData_GetTacticalMode(MatchRules *matchRules)
{
  return ?BG_MatchRulesData_GetTacticalMode@@YA_NPEAUMatchRules@@@Z(matchRules);
}

/*
==============
MatchRules_SetPerkRestricted
==============
*/

int __fastcall MatchRules_SetPerkRestricted(const char *perkName, bool restricted)
{
  return ?MatchRules_SetPerkRestricted@@YAHPEBD_N@Z(perkName, restricted);
}

/*
==============
MatchRules_IsWeaponAttachmentRestricted
==============
*/

int __fastcall MatchRules_IsWeaponAttachmentRestricted(const char *weaponAttachmentName)
{
  return ?MatchRules_IsWeaponAttachmentRestricted@@YAHPEBD@Z(weaponAttachmentName);
}

/*
==============
MatchRules_IsLoadoutItemRestricted
==============
*/

int __fastcall MatchRules_IsLoadoutItemRestricted(const char *itemName, scr_string_t itemType)
{
  return ?MatchRules_IsLoadoutItemRestricted@@YAHPEBDW4scr_string_t@@@Z(itemName, itemType);
}

/*
==============
MatchRules_LoadFromFF
==============
*/

int __fastcall MatchRules_LoadFromFF(MatchRules *matchRules, const char *recipeName)
{
  return ?MatchRules_LoadFromFF@@YAHPEAUMatchRules@@PEBD@Z(matchRules, recipeName);
}

/*
==============
WriteMatchRulesSnapshotDeltaFromBuffer
==============
*/

int __fastcall WriteMatchRulesSnapshotDeltaFromBuffer(MatchRulesSnapshotDelta *delta, MatchRules *matchRules, const unsigned __int8 *fromBuf)
{
  return ?WriteMatchRulesSnapshotDeltaFromBuffer@@YAHPEAUMatchRulesSnapshotDelta@@PEAUMatchRules@@PEBE@Z(delta, matchRules, fromBuf);
}

/*
==============
MatchRules_DeserializeDeltaHeader
==============
*/

int __fastcall MatchRules_DeserializeDeltaHeader(msg_t *msg, unsigned __int16 *outOffset, unsigned __int16 *outLength)
{
  return ?MatchRules_DeserializeDeltaHeader@@YAHPEAUmsg_t@@AEAG1@Z(msg, outOffset, outLength);
}

/*
==============
BG_MatchRulesData_GetGameTypeFromIndex
==============
*/

const char *__fastcall BG_MatchRulesData_GetGameTypeFromIndex(unsigned int index)
{
  return ?BG_MatchRulesData_GetGameTypeFromIndex@@YAPEBDI@Z(index);
}

/*
==============
MatchRules_GetAttachmentClassName
==============
*/

const char *__fastcall MatchRules_GetAttachmentClassName(const char *attachmentName)
{
  return ?MatchRules_GetAttachmentClassName@@YAPEBDPEBD@Z(attachmentName);
}

/*
==============
MatchRules_GetWeaponClassName
==============
*/

const char *__fastcall MatchRules_GetWeaponClassName(const char *weaponName)
{
  return ?MatchRules_GetWeaponClassName@@YAPEBDPEBD@Z(weaponName);
}

/*
==============
MatchRules_IsLoadoutItemRestricted
==============
*/

int __fastcall MatchRules_IsLoadoutItemRestricted(const char *itemName, scr_string_t itemType, bool errorOnMissing, bool suppressPrintErrorOnMissing)
{
  return ?MatchRules_IsLoadoutItemRestricted@@YAHPEBDW4scr_string_t@@_N2@Z(itemName, itemType, errorOnMissing, suppressPrintErrorOnMissing);
}

/*
==============
MatchRules_SetAttachmentClassRestricted
==============
*/

int __fastcall MatchRules_SetAttachmentClassRestricted(const char *attachmentClassName, bool restricted)
{
  return ?MatchRules_SetAttachmentClassRestricted@@YAHPEBD_N@Z(attachmentClassName, restricted);
}

/*
==============
MatchRules_RegisterCommands
==============
*/

void MatchRules_RegisterCommands(void)
{
  ?MatchRules_RegisterCommands@@YAXXZ();
}

/*
==============
MatchRules_SetSuperRestricted
==============
*/

int __fastcall MatchRules_SetSuperRestricted(const char *superName, bool restricted)
{
  return ?MatchRules_SetSuperRestricted@@YAHPEBD_N@Z(superName, restricted);
}

/*
==============
BG_MatchRulesData_GetGameType
==============
*/

const char *__fastcall BG_MatchRulesData_GetGameType(MatchRules *matchRules)
{
  return ?BG_MatchRulesData_GetGameType@@YAPEBDPEAUMatchRules@@@Z(matchRules);
}

/*
==============
MatchRules_SetKillstreakRestricted
==============
*/

int __fastcall MatchRules_SetKillstreakRestricted(const char *killstreakName, bool restricted)
{
  return ?MatchRules_SetKillstreakRestricted@@YAHPEBD_N@Z(killstreakName, restricted);
}

/*
==============
MatchRules_UnregisterCommands
==============
*/

void MatchRules_UnregisterCommands(void)
{
  ?MatchRules_UnregisterCommands@@YAXXZ();
}

/*
==============
BG_MatchRulesData_GetMatchRulesEditingCache
==============
*/

MatchRules *__fastcall BG_MatchRulesData_GetMatchRulesEditingCache()
{
  return ?BG_MatchRulesData_GetMatchRulesEditingCache@@YAPEAUMatchRules@@XZ();
}

/*
==============
BG_MatchRules_LoadDefaultFromFF
==============
*/

int __fastcall BG_MatchRules_LoadDefaultFromFF(MatchRules *matchRules, const char *gametype)
{
  return ?BG_MatchRules_LoadDefaultFromFF@@YAHPEAUMatchRules@@PEBD@Z(matchRules, gametype);
}

/*
==============
MatchRules_IsSuperRestricted
==============
*/

int __fastcall MatchRules_IsSuperRestricted(const char *superName)
{
  return ?MatchRules_IsSuperRestricted@@YAHPEBD@Z(superName);
}

/*
==============
MatchRules_IsWeaponClassRestricted
==============
*/

int __fastcall MatchRules_IsWeaponClassRestricted(const char *weaponClassName)
{
  return ?MatchRules_IsWeaponClassRestricted@@YAHPEBD@Z(weaponClassName);
}

/*
==============
LoadMatchRulesFromPlaylists
==============
*/

int __fastcall LoadMatchRulesFromPlaylists(MatchRules *matchRules, const char *gametype, int controllerIndex)
{
  return ?LoadMatchRulesFromPlaylists@@YAHPEAUMatchRules@@PEBDH@Z(matchRules, gametype, controllerIndex);
}

/*
==============
BG_MatchRules_UpdateChecksumAndVersion
==============
*/

void __fastcall BG_MatchRules_UpdateChecksumAndVersion(MatchRules *matchRules)
{
  ?BG_MatchRules_UpdateChecksumAndVersion@@YAXPEAUMatchRules@@@Z(matchRules);
}

/*
==============
MatchRules_IsKillstreakRestricted
==============
*/

int __fastcall MatchRules_IsKillstreakRestricted(const char *killstreakName)
{
  return ?MatchRules_IsKillstreakRestricted@@YAHPEBD@Z(killstreakName);
}

/*
==============
SaveMatchRulesDataToFilesystem
==============
*/

void __fastcall SaveMatchRulesDataToFilesystem(MatchRules *matchRules, const char *gametype)
{
  ?SaveMatchRulesDataToFilesystem@@YAXPEAUMatchRules@@PEBD@Z(matchRules, gametype);
}

/*
==============
WriteMatchRulesSnapshotFullDelta
==============
*/

int __fastcall WriteMatchRulesSnapshotFullDelta(MatchRulesSnapshotDelta *delta, MatchRules *matchRules)
{
  return ?WriteMatchRulesSnapshotFullDelta@@YAHPEAUMatchRulesSnapshotDelta@@PEAUMatchRules@@@Z(delta, matchRules);
}

/*
==============
MatchRules_ValidateWeapon
==============
*/

int __fastcall MatchRules_ValidateWeapon(const char *weaponName)
{
  return ?MatchRules_ValidateWeapon@@YAHPEBD@Z(weaponName);
}

/*
==============
BG_MatchRulesData_GetGameTypeIndex
==============
*/

unsigned int __fastcall BG_MatchRulesData_GetGameTypeIndex(MatchRules *matchRules)
{
  return ?BG_MatchRulesData_GetGameTypeIndex@@YAIPEAUMatchRules@@@Z(matchRules);
}

/*
==============
MatchRules_SetEquipmentRestricted
==============
*/

int __fastcall MatchRules_SetEquipmentRestricted(const char *equipmentName, bool restricted)
{
  return ?MatchRules_SetEquipmentRestricted@@YAHPEBD_N@Z(equipmentName, restricted);
}

/*
==============
MatchRules_Shutdown
==============
*/

void MatchRules_Shutdown(void)
{
  ?MatchRules_Shutdown@@YAXXZ();
}

/*
==============
BG_MatchRulesData_GetRecipeDescription
==============
*/

const char *__fastcall BG_MatchRulesData_GetRecipeDescription(MatchRules *matchRules)
{
  return ?BG_MatchRulesData_GetRecipeDescription@@YAPEBDPEAUMatchRules@@@Z(matchRules);
}

/*
==============
MatchRules_Init
==============
*/

void MatchRules_Init(void)
{
  ?MatchRules_Init@@YAXXZ();
}

/*
==============
BG_MatchRulesData_GetCodcasterEnabled
==============
*/

bool __fastcall BG_MatchRulesData_GetCodcasterEnabled(MatchRules *matchRules)
{
  return ?BG_MatchRulesData_GetCodcasterEnabled@@YA_NPEAUMatchRules@@@Z(matchRules);
}

/*
==============
MatchRulesChanged
==============
*/

void __fastcall MatchRulesChanged(MatchRules *matchRules)
{
  ?MatchRulesChanged@@YAXPEAUMatchRules@@@Z(matchRules);
}

/*
==============
MatchRules_IsAttachmentRestricted
==============
*/

int __fastcall MatchRules_IsAttachmentRestricted(const char *attachmentName)
{
  return ?MatchRules_IsAttachmentRestricted@@YAHPEBD@Z(attachmentName);
}

/*
==============
MatchRules_IsWeaponRestricted
==============
*/

int __fastcall MatchRules_IsWeaponRestricted(const char *weaponName)
{
  return ?MatchRules_IsWeaponRestricted@@YAHPEBD@Z(weaponName);
}

/*
==============
BG_MatchRulesData_GetRecipeName
==============
*/

const char *__fastcall BG_MatchRulesData_GetRecipeName(MatchRules *matchRules)
{
  return ?BG_MatchRulesData_GetRecipeName@@YAPEBDPEAUMatchRules@@@Z(matchRules);
}

/*
==============
BG_MatchRulesData_GetInputSwapEnabled
==============
*/

bool __fastcall BG_MatchRulesData_GetInputSwapEnabled(MatchRules *matchRules)
{
  return ?BG_MatchRulesData_GetInputSwapEnabled@@YA_NPEAUMatchRules@@@Z(matchRules);
}

/*
==============
WriteMatchRulesSnapshotDeltaFromDefaults
==============
*/

int __fastcall WriteMatchRulesSnapshotDeltaFromDefaults(MatchRulesSnapshotDelta *delta, MatchRules *matchRules)
{
  return ?WriteMatchRulesSnapshotDeltaFromDefaults@@YAHPEAUMatchRulesSnapshotDelta@@PEAUMatchRules@@@Z(delta, matchRules);
}

/*
==============
MatchRules_CanLoadFromFF
==============
*/

int __fastcall MatchRules_CanLoadFromFF(const char *recipeName)
{
  return ?MatchRules_CanLoadFromFF@@YAHPEBD@Z(recipeName);
}

/*
==============
MatchRules_PrintCurrentIdentifiers
==============
*/
void MatchRules_PrintCurrentIdentifiers()
{
  GameStateInfo *v0; 
  const char *RootString; 
  const char *v2; 
  const char *v3; 

  v0 = GameStateInfo_Get();
  if ( !v0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules.cpp", 1274, ASSERT_TYPE_ASSERT, "(gInfo)", (const char *)&queryFormat, "gInfo") )
    __debugbreak();
  RootString = BG_MatchRulesData_GetRootString(v0->matchRules, (const scr_string_t)scr_const.recipeName);
  v2 = BG_MatchRulesData_GetRootString(v0->matchRules, (const scr_string_t)scr_const.recipeDescription);
  v3 = BG_MatchRulesData_GetRootString(v0->matchRules, (const scr_string_t)scr_const.gametype);
  Com_Printf(16, "RECIPE: %s, %s, %s\n", RootString, v2, v3);
}

/*
==============
MatchRules_MLGSet_f
==============
*/

void __fastcall MatchRules_MLGSet_f(double _XMM0_8)
{
  const char *v2; 
  int i; 
  const char *v4; 
  GameStateInfo *v5; 
  const DDLDef *Asset; 
  unsigned int RawHash; 
  DDLState toState; 
  DDLState fromState; 
  DDLContext ddlContext; 
  DDLState result; 
  char dest[32]; 

  fromState.isValid = 0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  fromState.offset = 0;
  __asm { vmovdqu xmmword ptr [rbp+57h+fromState.member], xmm0 }
  toState.isValid = 0;
  toState.offset = 0;
  __asm { vmovdqu xmmword ptr [rbp+57h+toState.member], xmm0 }
  fromState.arrayIndex = -1;
  toState.arrayIndex = -1;
  if ( Cmd_Argc() >= 2 )
  {
    v2 = Cmd_Argv(1);
    Core_strcpy(dest, 0x20ui64, v2);
    for ( i = 2; i < Cmd_Argc(); ++i )
    {
      I_strcat(dest, 0x20ui64, " ");
      v4 = Cmd_Argv(i);
      I_strcat(dest, 0x20ui64, v4);
    }
    v5 = GameStateInfo_Get();
    if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules.cpp", 1306, ASSERT_TYPE_ASSERT, "(gInfo)", (const char *)&queryFormat, "gInfo", *(_QWORD *)&toState.isValid, *(_QWORD *)&toState.arrayIndex, toState.member, toState.ddlDef, *(_QWORD *)&fromState.isValid, *(_QWORD *)&fromState.arrayIndex, fromState.member, fromState.ddlDef) )
      __debugbreak();
    Asset = Com_DDL_LoadAsset("ddl/mp/recipes.ddl");
    Com_DDL_CreateContext(v5->matchRules, 4097, Asset, &ddlContext, NULL, NULL);
    _RAX = DDL_GetRootState(&result, Asset);
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rbp+57h+fromState.isValid], ymm0
    }
    DDL_MoveToName(&fromState, &toState, "mlgVersion");
    DDL_SetString(&toState, &ddlContext, dest);
    RawHash = j_SL_GetRawHash(scr_const.recipeName);
    DDL_MoveToNameByHash(&fromState, &toState, RawHash, NULL);
    DDL_SetString(&toState, &ddlContext, (const char *)&queryFormat.fmt + 3);
    MatchRulesChanged(v5->matchRules);
    Com_Printf(0, "\n[MR] Set mlgVersion to \"%s\" and recipeName to \"\".\n\n", dest);
  }
  else
  {
    Com_Printf(0, "USAGE: mr_mlg_set <version string>\n");
  }
}

/*
==============
MatchRules_Clear_f
==============
*/

void __fastcall MatchRules_Clear_f(double _XMM0_8)
{
  GameStateInfo *v2; 
  const DDLDef *Asset; 
  unsigned int RawHash; 
  DDLState toState; 
  DDLState fromState; 
  DDLContext ddlContext; 
  DDLState result; 

  fromState.isValid = 0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  fromState.offset = 0;
  __asm { vmovdqu xmmword ptr [rsp+0C8h+fromState.member], xmm0 }
  toState.isValid = 0;
  toState.offset = 0;
  __asm { vmovdqu xmmword ptr [rsp+0C8h+toState.member], xmm0 }
  fromState.arrayIndex = -1;
  toState.arrayIndex = -1;
  v2 = GameStateInfo_Get();
  if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules.cpp", 1332, ASSERT_TYPE_ASSERT, "(gInfo)", (const char *)&queryFormat, "gInfo", *(_QWORD *)&toState.isValid, *(_QWORD *)&toState.arrayIndex, toState.member, toState.ddlDef, *(_QWORD *)&fromState.isValid, *(_QWORD *)&fromState.arrayIndex, fromState.member, fromState.ddlDef) )
    __debugbreak();
  Asset = Com_DDL_LoadAsset("ddl/mp/recipes.ddl");
  Com_DDL_CreateContext(v2->matchRules, 4097, Asset, &ddlContext, NULL, NULL);
  _RAX = DDL_GetRootState(&result, Asset);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rsp+0C8h+fromState.isValid], ymm0
  }
  DDL_MoveToName(&fromState, &toState, "mlgVersion");
  DDL_SetString(&toState, &ddlContext, (const char *)&queryFormat.fmt + 3);
  RawHash = j_SL_GetRawHash(scr_const.recipeName);
  DDL_MoveToNameByHash(&fromState, &toState, RawHash, NULL);
  DDL_SetString(&toState, &ddlContext, (const char *)&queryFormat.fmt + 3);
  MatchRulesChanged(v2->matchRules);
  Com_Printf(0, "\n[MR] Set mlgVersion and recipeName to \"\".\n\n");
}

/*
==============
AreMatchRulesDefaultFromFF
==============
*/
int AreMatchRulesDefaultFromFF(MatchRules *matchRules)
{
  const char *RootString; 
  int result; 

  if ( !matchRules && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules.cpp", 925, ASSERT_TYPE_ASSERT, "(matchRules)", (const char *)&queryFormat, "matchRules") )
    __debugbreak();
  RootString = BG_MatchRulesData_GetRootString(matchRules, (const scr_string_t)scr_const.gametype);
  if ( !RootString && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules.cpp", 927, ASSERT_TYPE_ASSERT, "(gametype)", (const char *)&queryFormat, "gametype") )
    __debugbreak();
  result = BG_MatchRules_GetDataFromFF(&g_matchRulesDefaultsCache, RootString, "GetMatchRulesDefaultDataFromFF");
  if ( result )
    return memcmp_0(matchRules, g_matchRulesDefaultsCache.data, g_matchRulesDefaultsCache.length) == 0;
  return result;
}

/*
==============
BG_MatchRulesData_GetCWLEnabled
==============
*/
_BOOL8 BG_MatchRulesData_GetCWLEnabled(MatchRules *matchRules)
{
  scr_string_t String; 
  const DDLDef *Asset; 
  const char *v6; 
  unsigned int RawHash; 
  const char *v10; 
  bool Bool; 
  const char *v12; 
  DDLState fromState; 
  DDLState result; 
  DDLContext ddlContext; 

  fromState.isValid = 0;
  String = SL_GetString("cwlRulesEnabled", 0);
  fromState.offset = 0;
  fromState.arrayIndex = -1;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rsp+0A8h+fromState.member], xmm0
  }
  if ( !matchRules && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules.cpp", 596, ASSERT_TYPE_ASSERT, "(matchRules)", (const char *)&queryFormat, "matchRules", *(_QWORD *)&fromState.isValid, *(_QWORD *)&fromState.arrayIndex, fromState.member, fromState.ddlDef) )
    __debugbreak();
  if ( !String && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules.cpp", 597, ASSERT_TYPE_ASSERT, "(lookupString != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "lookupString != NULL_SCR_STRING") )
    __debugbreak();
  Asset = Com_DDL_LoadAsset("ddl/mp/recipes.ddl");
  if ( !Com_DDL_CreateContext(matchRules, 4096, Asset, &ddlContext, NULL, NULL) )
  {
    v6 = SL_ConvertToString(String);
    Com_PrintWarning(13, "Accessing matchrules field %s on an invalid buffer.\n", v6);
LABEL_15:
    Bool = 1;
    goto LABEL_16;
  }
  _RAX = DDL_GetRootState(&result, Asset);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rsp+0A8h+fromState.isValid], ymm0
  }
  RawHash = j_SL_GetRawHash(String);
  if ( !DDL_MoveToNameByHash(&fromState, &fromState, RawHash, NULL) )
  {
    v10 = SL_ConvertToString(String);
    Com_PrintError(28, "Could not find '%s' field in 'ddl/mp/recipes.ddl'\n", v10);
    Com_Error_impl(genericError[1].level, (const ObfuscateErrorText)&queryFormat, genericError[1].error);
  }
  if ( DDL_GetType(&fromState) != DDL_UINT_TYPE || DDL_StateGetBitSize(&fromState) != 1 )
  {
    v12 = SL_ConvertToString(String);
    Com_PrintError(28, "'%s' field in 'ddl/mp/recipes.ddl' is not of string type\n", v12);
    Com_Error_impl(genericError[1].level, (const ObfuscateErrorText)&queryFormat, genericError[1].error);
    goto LABEL_15;
  }
  Bool = DDL_GetBool(&fromState, &ddlContext);
LABEL_16:
  SL_RemoveRefToString(String);
  return Bool;
}

/*
==============
BG_MatchRulesData_GetCodcasterEnabled
==============
*/
__int64 BG_MatchRulesData_GetCodcasterEnabled(MatchRules *matchRules)
{
  scr_string_t String; 

  String = SL_GetString("codcasterEnabled", 0);
  LOBYTE(matchRules) = BG_MatchRulesData_GetCommonOptionsBool(matchRules, String);
  SL_RemoveRefToString(String);
  return (unsigned __int8)matchRules;
}

/*
==============
BG_MatchRulesData_GetCommonOptionsBool
==============
*/
bool BG_MatchRulesData_GetCommonOptionsBool(MatchRules *matchRules, const scr_string_t lookupString)
{
  const DDLDef *Asset; 
  const char *v8; 
  unsigned int RawHash; 
  const char *v13; 
  unsigned int v14; 
  const char *v15; 
  const char *v16; 
  DDLState fromState; 
  DDLState result; 
  DDLContext ddlContext; 
  void *retaddr; 

  _RAX = &retaddr;
  fromState.isValid = 0;
  fromState.offset = 0;
  fromState.arrayIndex = -1;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rax-68h], xmm0
  }
  if ( !matchRules && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules.cpp", 642, ASSERT_TYPE_ASSERT, "(matchRules)", (const char *)&queryFormat, "matchRules", *(_QWORD *)&fromState.isValid, *(_QWORD *)&fromState.arrayIndex) )
    __debugbreak();
  if ( !lookupString && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules.cpp", 643, ASSERT_TYPE_ASSERT, "(lookupString != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "lookupString != NULL_SCR_STRING") )
    __debugbreak();
  Asset = Com_DDL_LoadAsset("ddl/mp/recipes.ddl");
  if ( Com_DDL_CreateContext(matchRules, 4096, Asset, &ddlContext, NULL, NULL) )
  {
    _RAX = DDL_GetRootState(&result, Asset);
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rsp+0A8h+fromState.isValid], ymm0
    }
    RawHash = j_SL_GetRawHash(scr_const.commonOption);
    if ( !DDL_MoveToNameByHash(&fromState, &fromState, RawHash, NULL) )
    {
      v13 = SL_ConvertToString(scr_const.commonOption);
      Com_PrintError(28, "Could not find '%s' field in 'ddl/mp/recipes.ddl'\n", v13);
      Com_Error_impl(genericError[1].level, (const ObfuscateErrorText)&queryFormat, genericError[1].error);
    }
    v14 = j_SL_GetRawHash(lookupString);
    if ( !DDL_MoveToNameByHash(&fromState, &fromState, v14, NULL) )
    {
      v15 = SL_ConvertToString(lookupString);
      Com_PrintError(28, "Could not find '%s' field in 'ddl/mp/recipes.ddl'\n", v15);
      Com_Error_impl(genericError[1].level, (const ObfuscateErrorText)&queryFormat, genericError[1].error);
    }
    if ( DDL_GetType(&fromState) == DDL_UINT_TYPE && DDL_StateGetBitSize(&fromState) == 1 )
    {
      return DDL_GetBool(&fromState, &ddlContext);
    }
    else
    {
      v16 = SL_ConvertToString(lookupString);
      Com_PrintError(28, "'%s' field in 'ddl/mp/recipes.ddl' is not of bool/integer type\n", v16);
      Com_Error_impl(genericError[1].level, (const ObfuscateErrorText)&queryFormat, genericError[1].error);
      return 0;
    }
  }
  else
  {
    v8 = SL_ConvertToString(lookupString);
    Com_PrintWarning(13, "Accessing matchrules field %s on an invalid buffer.\n", v8);
    return 1;
  }
}

/*
==============
BG_MatchRulesData_GetGameType
==============
*/
const char *BG_MatchRulesData_GetGameType(MatchRules *matchRules)
{
  return BG_MatchRulesData_GetRootString(matchRules, (const scr_string_t)scr_const.gametype);
}

/*
==============
BG_MatchRulesData_GetGameTypeFromIndex
==============
*/
const char *BG_MatchRulesData_GetGameTypeFromIndex(unsigned int index)
{
  __int64 v3; 
  const DDLDef *Asset; 
  unsigned int RawHash; 
  const char *v9; 
  const char *v10; 
  const char *v11; 
  const char *v12; 
  int externalIndex; 
  int enumCount; 
  DDLState fromState; 
  DDLState result; 
  void *retaddr; 

  _RAX = &retaddr;
  v3 = index;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rax-38h], xmm0
  }
  fromState.isValid = 0;
  fromState.offset = 0;
  fromState.arrayIndex = -1;
  Asset = Com_DDL_LoadAsset("ddl/mp/recipes.ddl");
  _RAX = DDL_GetRootState(&result, Asset);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rsp+88h+fromState.isValid], ymm0
  }
  RawHash = j_SL_GetRawHash(scr_const.gametype);
  if ( !DDL_MoveToNameByHash(&fromState, &fromState, RawHash, NULL) )
  {
    v9 = SL_ConvertToString(scr_const.recipeName);
    v10 = SL_ConvertToString(scr_const.gametype);
    Com_PrintError(28, "Could not find '%s' field in '%s'\n", v10, v9);
    Com_Error_impl(genericError[1].level, (const ObfuscateErrorText)&queryFormat, genericError[1].error);
  }
  if ( DDL_GetType(&fromState) != DDL_ENUM_TYPE )
  {
    v11 = SL_ConvertToString(scr_const.recipeName);
    v12 = SL_ConvertToString(scr_const.gametype);
    Com_PrintError(28, "'%s' field in '%s' is not of enum type\n", v12, v11);
    Com_Error_impl(genericError[1].level, (const ObfuscateErrorText)&queryFormat, genericError[1].error);
  }
  if ( fromState.member->externalIndex >= (unsigned int)Asset->enumCount )
  {
    enumCount = Asset->enumCount;
    externalIndex = fromState.member->externalIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules.cpp", 783, ASSERT_TYPE_ASSERT, "(unsigned)( currentState.member->externalIndex ) < (unsigned)( def->enumCount )", "currentState.member->externalIndex doesn't index def->enumCount\n\t%i not in [0, %i)", externalIndex, enumCount) )
      __debugbreak();
  }
  return Asset->enumList[fromState.member->externalIndex].members[v3];
}

/*
==============
BG_MatchRulesData_GetGameTypeIndex
==============
*/
unsigned int BG_MatchRulesData_GetGameTypeIndex(MatchRules *matchRules)
{
  const DDLDef *Asset; 
  unsigned int RawHash; 
  const char *v8; 
  const char *v9; 
  const char *v10; 
  const char *v11; 
  DDLState fromState; 
  DDLState result; 
  DDLContext ddlContext; 

  fromState.isValid = 0;
  fromState.offset = 0;
  fromState.arrayIndex = -1;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rsp+0A8h+fromState.member], xmm0
  }
  if ( !matchRules && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules.cpp", 797, ASSERT_TYPE_ASSERT, "(matchRules)", (const char *)&queryFormat, "matchRules", *(_QWORD *)&fromState.isValid, *(_QWORD *)&fromState.arrayIndex, fromState.member, fromState.ddlDef) )
    __debugbreak();
  Asset = Com_DDL_LoadAsset("ddl/mp/recipes.ddl");
  _RAX = DDL_GetRootState(&result, Asset);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rsp+0A8h+fromState.isValid], ymm0
  }
  RawHash = j_SL_GetRawHash(scr_const.gametype);
  if ( !DDL_MoveToNameByHash(&fromState, &fromState, RawHash, NULL) )
  {
    v8 = SL_ConvertToString(scr_const.recipeName);
    v9 = SL_ConvertToString(scr_const.gametype);
    Com_PrintError(16, "Could not find '%s' field in '%s'\n", v9, v8);
    Com_Error_impl(genericError[1].level, (const ObfuscateErrorText)&queryFormat, genericError[1].error);
  }
  if ( DDL_GetType(&fromState) != DDL_ENUM_TYPE )
  {
    v10 = SL_ConvertToString(scr_const.recipeName);
    v11 = SL_ConvertToString(scr_const.gametype);
    Com_PrintError(16, "'%s' field in '%s' is not of enum type\n", v11, v10);
    Com_Error_impl(genericError[1].level, (const ObfuscateErrorText)&queryFormat, genericError[1].error);
  }
  Com_DDL_CreateContext(matchRules, 4096, Asset, &ddlContext, NULL, NULL);
  return DDL_GetUInt(&fromState, &ddlContext);
}

/*
==============
BG_MatchRulesData_GetHardcoreMode
==============
*/
bool BG_MatchRulesData_GetHardcoreMode(MatchRules *matchRules)
{
  return BG_MatchRulesData_GetCommonOptionsBool(matchRules, (const scr_string_t)scr_const.hardcoreModeOn);
}

/*
==============
BG_MatchRulesData_GetInputSwapEnabled
==============
*/
__int64 BG_MatchRulesData_GetInputSwapEnabled(MatchRules *matchRules)
{
  scr_string_t String; 

  String = SL_GetString("inputSwapEnabled", 0);
  LOBYTE(matchRules) = BG_MatchRulesData_GetCommonOptionsBool(matchRules, String);
  SL_RemoveRefToString(String);
  return (unsigned __int8)matchRules;
}

/*
==============
BG_MatchRulesData_GetMLGVersion
==============
*/
const char *BG_MatchRulesData_GetMLGVersion(MatchRules *matchRules)
{
  scr_string_t String; 
  const char *RootString; 

  String = SL_GetString("mlgVersion", 0);
  RootString = BG_MatchRulesData_GetRootString(matchRules, String);
  SL_RemoveRefToString(String);
  return RootString;
}

/*
==============
BG_MatchRulesData_GetMatchRulesEditingCache
==============
*/
MatchRules *BG_MatchRulesData_GetMatchRulesEditingCache()
{
  return &g_matchRulesEditingCache;
}

/*
==============
BG_MatchRulesData_GetRecipeDescription
==============
*/
const char *BG_MatchRulesData_GetRecipeDescription(MatchRules *matchRules)
{
  return BG_MatchRulesData_GetRootString(matchRules, (const scr_string_t)scr_const.recipeDescription);
}

/*
==============
BG_MatchRulesData_GetRecipeName
==============
*/
const char *BG_MatchRulesData_GetRecipeName(MatchRules *matchRules)
{
  return BG_MatchRulesData_GetRootString(matchRules, (const scr_string_t)scr_const.recipeName);
}

/*
==============
BG_MatchRulesData_GetRootString
==============
*/
const char *BG_MatchRulesData_GetRootString(MatchRules *matchRules, const scr_string_t lookupString)
{
  const DDLDef *Asset; 
  const char *v8; 
  unsigned int RawHash; 
  const char *v13; 
  DDLType Type; 
  const char *v15; 
  DDLState fromState; 
  DDLState result; 
  DDLContext ddlContext; 
  void *retaddr; 

  _RAX = &retaddr;
  fromState.isValid = 0;
  fromState.offset = 0;
  fromState.arrayIndex = -1;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rax-68h], xmm0
  }
  if ( !matchRules && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules.cpp", 551, ASSERT_TYPE_ASSERT, "(matchRules)", (const char *)&queryFormat, "matchRules", *(_QWORD *)&fromState.isValid, *(_QWORD *)&fromState.arrayIndex) )
    __debugbreak();
  if ( !lookupString && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules.cpp", 552, ASSERT_TYPE_ASSERT, "(lookupString != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "lookupString != NULL_SCR_STRING") )
    __debugbreak();
  Asset = Com_DDL_LoadAsset("ddl/mp/recipes.ddl");
  if ( Com_DDL_CreateContext(matchRules, 4096, Asset, &ddlContext, NULL, NULL) )
  {
    _RAX = DDL_GetRootState(&result, Asset);
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rsp+0A8h+fromState.isValid], ymm0
    }
    RawHash = j_SL_GetRawHash(lookupString);
    if ( !DDL_MoveToNameByHash(&fromState, &fromState, RawHash, NULL) )
    {
      v13 = SL_ConvertToString(lookupString);
      Com_PrintError(28, "Could not find '%s' field in 'ddl/mp/recipes.ddl'\n", v13);
      Com_Error_impl(genericError[1].level, (const ObfuscateErrorText)&queryFormat, genericError[1].error);
    }
    Type = DDL_GetType(&fromState);
    if ( Type == DDL_STRING_TYPE )
    {
      return DDL_GetString(&fromState, &ddlContext);
    }
    else if ( Type == DDL_ENUM_TYPE )
    {
      return DDL_GetEnum(&fromState, &ddlContext);
    }
    else
    {
      v15 = SL_ConvertToString(lookupString);
      Com_PrintError(28, "'%s' field in 'ddl/mp/recipes.ddl' is not of string type\n", v15);
      Com_Error_impl(genericError[1].level, (const ObfuscateErrorText)&queryFormat, genericError[1].error);
      return (char *)&queryFormat.fmt + 3;
    }
  }
  else
  {
    v8 = SL_ConvertToString(lookupString);
    Com_PrintWarning(13, "Accessing matchrules field %s on an invalid buffer.\n", v8);
    return (char *)&queryFormat.fmt + 3;
  }
}

/*
==============
BG_MatchRulesData_GetTacticalMode
==============
*/
bool BG_MatchRulesData_GetTacticalMode(MatchRules *matchRules)
{
  return BG_MatchRulesData_GetCommonOptionsBool(matchRules, (const scr_string_t)scr_const.tacticalModeOn);
}

/*
==============
BG_MatchRules_GetDataFromFF
==============
*/
__int64 BG_MatchRules_GetDataFromFF(MatchRulesRawfileCache *rawfileCache, const char *recipeName, const char *callingFunc)
{
  __int64 result; 
  unsigned __int8 *data; 
  const DDLDef *Asset; 
  __int64 byteSize; 
  unsigned int i; 
  __int64 v10; 
  DDLContext ddlContext; 
  char dest[64]; 

  if ( !rawfileCache && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules.cpp", 860, ASSERT_TYPE_ASSERT, "(rawfileCache)", (const char *)&queryFormat, "rawfileCache") )
    __debugbreak();
  if ( rawfileCache->inUse && !I_strncmp(rawfileCache->recipeName, recipeName, 0x1Eui64) )
    return (unsigned int)rawfileCache->inUse;
  rawfileCache->inUse = 0;
  Com_sprintf<64>((char (*)[64])dest, "mp/recipes/%s.recipe", recipeName);
  data = rawfileCache->data;
  Asset = Com_DDL_LoadAsset("ddl/mp/recipes.ddl");
  if ( DDL_ResetContext(rawfileCache->data, 4096, Asset, &ddlContext, NULL, NULL) )
  {
    Com_DDL_ReadFromDBText(&ddlContext, dest);
  }
  else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules.cpp", 839, ASSERT_TYPE_SANITY, "( success )", (const char *)&queryFormat, "success") )
  {
    __debugbreak();
  }
  if ( Asset->byteSize > 4096 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules.cpp", 846, ASSERT_TYPE_ASSERT, "(def->byteSize <= (1024*4))", (const char *)&queryFormat, "def->byteSize <= RECIPE_DATA_DEF_MAXSIZE") )
    __debugbreak();
  Core_strcpy(rawfileCache->recipeName, 0x1Eui64, recipeName);
  byteSize = Asset->byteSize;
  for ( i = -1; byteSize; --byteSize )
  {
    v10 = *data++;
    i = (i >> 8) ^ g_crc32Table[v10 ^ (unsigned __int8)i];
  }
  rawfileCache->checksum = ~i;
  result = 1i64;
  rawfileCache->length = Asset->byteSize;
  rawfileCache->inUse = 1;
  return result;
}

/*
==============
BG_MatchRules_Initialize
==============
*/
void BG_MatchRules_Initialize(MatchRules *matchRules)
{
  char ActiveGameMode; 
  const dvar_t *v3; 
  const char *v4; 
  const char *string; 
  const DDLDef *Asset; 
  __int64 byteSize; 
  MatchRules *v8; 
  unsigned int i; 
  __int64 v10; 
  DDLContext ddlContext; 

  if ( !matchRules && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules.cpp", 465, ASSERT_TYPE_ASSERT, "(matchRules)", (const char *)&queryFormat, "matchRules") )
    __debugbreak();
  ActiveGameMode = Com_GameMode_GetActiveGameMode();
  if ( ActiveGameMode == 2 )
  {
    v3 = DVARSTR_default_gametype_mp;
    if ( DVARSTR_default_gametype_mp )
      goto LABEL_12;
    v4 = "default_gametype_mp";
    goto LABEL_10;
  }
  if ( ActiveGameMode != 3 )
  {
LABEL_13:
    BG_MatchRules_InitializeBufferZero(matchRules);
    return;
  }
  v3 = DVARSTR_default_gametype_cp;
  if ( !DVARSTR_default_gametype_cp )
  {
    v4 = "default_gametype_cp";
LABEL_10:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v4) )
      __debugbreak();
  }
LABEL_12:
  Dvar_CheckFrontendServerThread(v3);
  string = v3->current.string;
  if ( !string )
    goto LABEL_13;
  Com_Printf(131088, "[BG_MatchRules_Initialize] Attempting to load %s.recipe defaults\n", string);
  if ( !matchRules && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules.cpp", 880, ASSERT_TYPE_ASSERT, "(matchRules)", (const char *)&queryFormat, "matchRules") )
    __debugbreak();
  if ( (unsigned int)BG_MatchRules_GetDataFromFF(&g_matchRulesDefaultsCache, string, "LoadMatchRulesDefaultFromFF") )
  {
    memcpy_0(matchRules, g_matchRulesDefaultsCache.data, g_matchRulesDefaultsCache.length);
  }
  else
  {
    Com_PrintError(131088, "[BG_MatchRules_Initialize] Unable to load recipe, using defaults. This will error in non-dev builds.\n");
    if ( !matchRules && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules.cpp", 438, ASSERT_TYPE_ASSERT, "(matchRules)", (const char *)&queryFormat, "matchRules") )
      __debugbreak();
    Asset = Com_DDL_LoadAsset("ddl/mp/recipes.ddl");
    DDL_ResetContext(matchRules, 4096, Asset, &ddlContext, NULL, NULL);
    byteSize = Asset->byteSize;
    v8 = matchRules;
    for ( i = -1; byteSize; --byteSize )
    {
      v10 = v8->data[0];
      v8 = (MatchRules *)((char *)v8 + 1);
      i = (i >> 8) ^ g_crc32Table[v10 ^ (unsigned __int8)i];
    }
    matchRules->checksum = ~i;
  }
  BG_MatchRules_UpdateChecksumAndVersion(matchRules);
}

/*
==============
BG_MatchRules_InitializeBufferZero
==============
*/
void BG_MatchRules_InitializeBufferZero(MatchRules *matchRules)
{
  if ( !matchRules && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules.cpp", 429, ASSERT_TYPE_ASSERT, "(matchRules)", (const char *)&queryFormat, "matchRules") )
    __debugbreak();
  memset_0(matchRules, 0, 0x1001ui64);
  matchRules->checksum = 0;
}

/*
==============
BG_MatchRules_LoadDefaultFromFF
==============
*/
__int64 BG_MatchRules_LoadDefaultFromFF(MatchRules *matchRules, const char *gametype)
{
  if ( !matchRules && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules.cpp", 880, ASSERT_TYPE_ASSERT, "(matchRules)", (const char *)&queryFormat, "matchRules") )
    __debugbreak();
  if ( !gametype && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules.cpp", 881, ASSERT_TYPE_ASSERT, "(gametype)", (const char *)&queryFormat, "gametype") )
    __debugbreak();
  if ( !(unsigned int)BG_MatchRules_GetDataFromFF(&g_matchRulesDefaultsCache, gametype, "LoadMatchRulesDefaultFromFF") )
    return 0i64;
  memcpy_0(matchRules, g_matchRulesDefaultsCache.data, g_matchRulesDefaultsCache.length);
  return 1i64;
}

/*
==============
BG_MatchRules_UpdateChecksumAndVersion
==============
*/
void BG_MatchRules_UpdateChecksumAndVersion(MatchRules *matchRules)
{
  const DDLDef *Asset; 
  __int64 byteSize; 
  MatchRules *v4; 
  unsigned int i; 
  __int64 v6; 
  DDLContext ddlContext; 

  if ( !matchRules && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules.cpp", 383, ASSERT_TYPE_ASSERT, "(matchRules)", (const char *)&queryFormat, "matchRules") )
    __debugbreak();
  Asset = Com_DDL_LoadAsset("ddl/mp/recipes.ddl");
  Com_DDL_CreateContext(matchRules, 4096, Asset, &ddlContext, NULL, NULL);
  byteSize = Asset->byteSize;
  v4 = matchRules;
  for ( i = -1; byteSize; --byteSize )
  {
    v6 = v4->data[0];
    v4 = (MatchRules *)((char *)v4 + 1);
    i = (i >> 8) ^ g_crc32Table[v6 ^ (unsigned __int8)i];
  }
  matchRules->checksum = ~i;
}

/*
==============
GetMatchRulesDefaultDataFromFF
==============
*/
MatchRulesRawfileCache *GetMatchRulesDefaultDataFromFF(const char *gametype)
{
  if ( (unsigned int)BG_MatchRules_GetDataFromFF(&g_matchRulesDefaultsCache, gametype, "GetMatchRulesDefaultDataFromFF") )
    return &g_matchRulesDefaultsCache;
  else
    return 0i64;
}

/*
==============
LoadMatchRulesFromPlaylists
==============
*/
__int64 LoadMatchRulesFromPlaylists(MatchRules *matchRules, const char *gametype, int controllerIndex)
{
  int RecipeFromPackedPlaylist; 
  const DDLDef *Asset; 
  DDLContext ddlContext; 
  char dest[8192]; 

  if ( !matchRules && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules.cpp", 1173, ASSERT_TYPE_ASSERT, "(matchRules)", (const char *)&queryFormat, "matchRules") )
    __debugbreak();
  if ( !gametype && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules.cpp", 1174, ASSERT_TYPE_ASSERT, "(gametype)", (const char *)&queryFormat, "gametype") )
    __debugbreak();
  if ( !g_matchRulesPlaylistCache.inUse || I_stricmp(gametype, g_matchRulesPlaylistCache.gametype) )
  {
    RecipeFromPackedPlaylist = GetRecipeFromPackedPlaylist(gametype, dest, 0x2000);
    if ( !RecipeFromPackedPlaylist )
      return 0i64;
    Asset = Com_DDL_LoadAsset("ddl/mp/recipes.ddl");
    if ( !DDL_ResetContext(g_matchRulesPlaylistCache.data, 4096, Asset, &ddlContext, NULL, NULL) )
    {
      Com_PrintError(16, "[LoadMatchRulesFromPlaylists] Unable to create context\n");
      return 0i64;
    }
    Com_DDL_ReadFromText(&ddlContext, dest, RecipeFromPackedPlaylist);
    Core_strcpy(g_matchRulesPlaylistCache.gametype, 0x10ui64, gametype);
    g_matchRulesPlaylistCache.length = Asset->byteSize;
    g_matchRulesPlaylistCache.inUse = 1;
  }
  if ( g_matchRulesPlaylistCache.length < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules.cpp", 1200, ASSERT_TYPE_ASSERT, "(0 <= static_cast<int>(g_matchRulesPlaylistCache.length))", "%s\n\tMemcpy has negative length. (g_matchRulesPlaylistCache.length)", "0 <= static_cast<int>(g_matchRulesPlaylistCache.length)") )
    __debugbreak();
  if ( g_matchRulesPlaylistCache.data >= (unsigned __int8 *)matchRules && &g_matchRulesPlaylistCache.data[g_matchRulesPlaylistCache.length] <= &matchRules->data[g_matchRulesPlaylistCache.length] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules.cpp", 1200, ASSERT_TYPE_ASSERT, "(reinterpret_cast<const byte*>((g_matchRulesPlaylistCache.data)) < reinterpret_cast<const byte*>((matchRules->data)) || reinterpret_cast<const byte*>((g_matchRulesPlaylistCache.data))+((g_matchRulesPlaylistCache.length)) > reinterpret_cast<const byte*>((matchRules->data))+((g_matchRulesPlaylistCache.length)))", "%s\n\tMemcpy from (g_matchRulesPlaylistCache.data) to (matchRules->data) is copying between overlapping ranges ", "reinterpret_cast<const byte*>((g_matchRulesPlaylistCache.data)) < reinterpret_cast<const byte*>((matchRules->data)) || reinterpret_cast<const byte*>((g_matchRulesPlaylistCache.data))+((g_matchRulesPlaylistCache.length)) > reinterpret_cast<const byte*>((matchRules->data))+((g_matchRulesPlaylistCache.length))") )
    __debugbreak();
  if ( &g_matchRulesPlaylistCache.data[g_matchRulesPlaylistCache.length] > (unsigned __int8 *)&unk_150A66B98 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules.cpp", 1200, ASSERT_TYPE_ASSERT, "(reinterpret_cast<const byte*>((g_matchRulesPlaylistCache.data)) >= reinterpret_cast<const byte*>((g_matchRulesPlaylistCache.data)) && reinterpret_cast<const byte*>((g_matchRulesPlaylistCache.data))+((g_matchRulesPlaylistCache.length)) <= reinterpret_cast<const byte*>((g_matchRulesPlaylistCache.data))+((sizeof( g_matchRulesPlaylistCache.data ))))", "%s\n\tMemcpy from (g_matchRulesPlaylistCache.data) exceeded bounds of g_matchRulesPlaylistCache.data", "reinterpret_cast<const byte*>((g_matchRulesPlaylistCache.data)) >= reinterpret_cast<const byte*>((g_matchRulesPlaylistCache.data)) && reinterpret_cast<const byte*>((g_matchRulesPlaylistCache.data))+((g_matchRulesPlaylistCache.length)) <= reinterpret_cast<const byte*>((g_matchRulesPlaylistCache.data))+((sizeof( g_matchRulesPlaylistCache.data )))") )
    __debugbreak();
  if ( &matchRules->data[g_matchRulesPlaylistCache.length] > &matchRules->data[4097] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules.cpp", 1200, ASSERT_TYPE_ASSERT, "(reinterpret_cast<const byte*>((matchRules->data)) >= reinterpret_cast<const byte*>((matchRules->data)) && reinterpret_cast<const byte*>((matchRules->data))+((g_matchRulesPlaylistCache.length)) <= reinterpret_cast<const byte*>((matchRules->data))+((sizeof( matchRules->data ))))", "%s\n\tMemcpy to (matchRules->data) exceeded bounds of matchRules->data", "reinterpret_cast<const byte*>((matchRules->data)) >= reinterpret_cast<const byte*>((matchRules->data)) && reinterpret_cast<const byte*>((matchRules->data))+((g_matchRulesPlaylistCache.length)) <= reinterpret_cast<const byte*>((matchRules->data))+((sizeof( matchRules->data )))") )
    __debugbreak();
  memcpy_0(matchRules, g_matchRulesPlaylistCache.data, g_matchRulesPlaylistCache.length);
  BG_MatchRules_UpdateChecksumAndVersion(matchRules);
  return 1i64;
}

/*
==============
MatchRulesChanged
==============
*/
void MatchRulesChanged(MatchRules *matchRules)
{
  const char *RootString; 
  bool CommonOptionsBool; 
  bool v4; 
  PartyData *PartyData; 

  if ( !matchRules && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules.cpp", 510, ASSERT_TYPE_ASSERT, "(matchRules)", (const char *)&queryFormat, "matchRules") )
    __debugbreak();
  BG_MatchRules_UpdateChecksumAndVersion(matchRules);
  RootString = BG_MatchRulesData_GetRootString(matchRules, (const scr_string_t)scr_const.gametype);
  Dvar_SetString_Internal(DVARSTR_ui_gametype, RootString);
  CommonOptionsBool = BG_MatchRulesData_GetCommonOptionsBool(matchRules, (const scr_string_t)scr_const.hardcoreModeOn);
  Dvar_SetBool_Internal(DVARBOOL_ui_hardcore, CommonOptionsBool);
  v4 = BG_MatchRulesData_GetCommonOptionsBool(matchRules, (const scr_string_t)scr_const.tacticalModeOn);
  Dvar_SetBool_Internal(DVARBOOL_ui_tactical, v4);
  if ( Live_IsInSystemlinkLobby() )
  {
    if ( Party_AreWeHost(&g_partyData) )
      PartyHost_MatchRulesStateChanged(&g_partyData);
  }
  else if ( Lobby_AreWeHost() )
  {
    PartyData = Lobby_GetPartyData();
    PartyHost_MatchRulesStateChanged(PartyData);
  }
}

/*
==============
MatchRules_CanLoadFromFF
==============
*/
__int64 MatchRules_CanLoadFromFF(const char *recipeName)
{
  if ( !recipeName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules.cpp", 901, ASSERT_TYPE_ASSERT, "(recipeName)", (const char *)&queryFormat, "recipeName") )
    __debugbreak();
  return BG_MatchRules_GetDataFromFF(&g_matchRulesOtherCache, recipeName, "MatchRules_CanLoadFromFF");
}

/*
==============
MatchRules_DeserializeDeltaHeader
==============
*/
_BOOL8 MatchRules_DeserializeDeltaHeader(msg_t *msg, unsigned __int16 *outOffset, unsigned __int16 *outLength)
{
  __int16 buffer; 

  MSG_ReadData(msg, 2, &buffer, 2);
  *outOffset = truncate_cast<unsigned short,short>(buffer);
  MSG_ReadData(msg, 2, &buffer, 2);
  *outLength = truncate_cast<unsigned short,short>(buffer);
  return msg->overflowed == 0;
}

/*
==============
MatchRules_Frame
==============
*/
void MatchRules_Frame(const int controllerIndex)
{
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "MatchRules_Frame");
  BG_MatchRulesHistory_Frame(controllerIndex);
  Sys_ProfEndNamedEvent();
}

/*
==============
MatchRules_GetAttachmentClassName
==============
*/
const char *MatchRules_GetAttachmentClassName(const char *attachmentName)
{
  StringTable *tablePtr; 

  StringTable_GetAsset("mp/attachmenttable.csv", (const StringTable **)&tablePtr);
  if ( DB_IsXAssetDefault(ASSET_TYPE_STRINGTABLE, "mp/attachmenttable.csv") )
    Com_Error_impl(genericError[1].level, (const ObfuscateErrorText)&queryFormat, genericError[1].error);
  return StringTable_Lookup(tablePtr, 5, attachmentName, 2);
}

/*
==============
MatchRules_GetWeaponClassName
==============
*/
const char *MatchRules_GetWeaponClassName(const char *weaponName)
{
  StringTable *tablePtr; 

  StringTable_GetAsset("mp/statstable.csv", (const StringTable **)&tablePtr);
  if ( DB_IsXAssetDefault(ASSET_TYPE_STRINGTABLE, "mp/statstable.csv") )
    Com_Error_impl(genericError[1].level, (const ObfuscateErrorText)&queryFormat, genericError[1].error);
  return StringTable_Lookup(tablePtr, 4, weaponName, 1);
}

/*
==============
MatchRules_Init
==============
*/

void MatchRules_Init(void)
{
  BG_MatchRulesHistory_Init();
}

/*
==============
MatchRules_IsAttachmentClassRestricted
==============
*/
int MatchRules_IsAttachmentClassRestricted(const char *attachmentClassName)
{
  return MatchRules_IsLoadoutItemRestricted(attachmentClassName, scr_const.attachmentClassRestricted, 1, 0);
}

/*
==============
MatchRules_IsAttachmentRestricted
==============
*/
int MatchRules_IsAttachmentRestricted(const char *attachmentName)
{
  return MatchRules_IsLoadoutItemRestricted(attachmentName, scr_const.attachmentRestricted, 1, 0);
}

/*
==============
MatchRules_IsEquipmentRestricted
==============
*/
int MatchRules_IsEquipmentRestricted(const char *equipmentName)
{
  return MatchRules_IsLoadoutItemRestricted(equipmentName, scr_const.equipmentRestricted, 1, 0);
}

/*
==============
MatchRules_IsKillstreakRestricted
==============
*/
int MatchRules_IsKillstreakRestricted(const char *killstreakName)
{
  return MatchRules_IsLoadoutItemRestricted(killstreakName, scr_const.killstreakRestricted, 1, 0);
}

/*
==============
MatchRules_IsLoadoutItemRestricted
==============
*/
int MatchRules_IsLoadoutItemRestricted(const char *itemName, scr_string_t itemType)
{
  return MatchRules_IsLoadoutItemRestricted(itemName, itemType, 1, 0);
}

/*
==============
MatchRules_IsLoadoutItemRestricted
==============
*/
_BOOL8 MatchRules_IsLoadoutItemRestricted(const char *itemName, scr_string_t itemType, bool errorOnMissing, bool suppressPrintErrorOnMissing)
{
  const DDLDef *Asset; 
  GameStateInfo *v11; 
  unsigned int RawHash; 
  const char *v15; 
  unsigned int v16; 
  const char *v17; 
  const char *v18; 
  const char *v19; 
  const char *v20; 
  const char *v22; 
  const char *v23; 
  DDLState fromState; 
  DDLState result; 
  DDLContext ddlContext; 

  fromState.isValid = 0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  fromState.offset = 0;
  __asm { vmovdqu xmmword ptr [rsp+0B8h+fromState.member], xmm0 }
  fromState.arrayIndex = -1;
  Asset = Com_DDL_LoadAsset("ddl/mp/recipes.ddl");
  if ( !GameStateInfo_Get()->matchRules && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules.cpp", 104, ASSERT_TYPE_ASSERT, "(GameStateInfo_Get()->matchRules)", (const char *)&queryFormat, "GameStateInfo_Get()->matchRules", *(_QWORD *)&fromState.isValid, *(_QWORD *)&fromState.arrayIndex, fromState.member, fromState.ddlDef) )
    __debugbreak();
  v11 = GameStateInfo_Get();
  if ( DDL_CreateContext(v11->matchRules, 4096, Asset, &ddlContext, NULL, NULL) )
  {
    _RAX = DDL_GetRootState(&result, Asset);
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rsp+0B8h+fromState.isValid], ymm0
    }
    RawHash = j_SL_GetRawHash(scr_const.commonOption);
    if ( !DDL_MoveToNameHash(&fromState, &fromState, RawHash, NULL) )
    {
      v15 = SL_ConvertToString(scr_const.commonOption);
      Com_PrintError(28, "Could not find '%s' field in 'ddl/mp/recipes.ddl'\n", v15);
      Com_Error_impl(genericError[1].level, (const ObfuscateErrorText)&queryFormat, genericError[1].error);
    }
    v16 = j_SL_GetRawHash(itemType);
    if ( !DDL_MoveToNameHash(&fromState, &fromState, v16, NULL) )
    {
      v17 = SL_ConvertToString(itemType);
      v18 = SL_ConvertToString(scr_const.commonOption);
      Com_PrintError(28, "Could not find '%s %s' field in 'ddl/mp/recipes.ddl'\n", v18, v17);
      Com_Error_impl(genericError[1].level, (const ObfuscateErrorText)&queryFormat, genericError[1].error);
    }
    if ( !DDL_MoveToName(&fromState, &fromState, itemName, suppressPrintErrorOnMissing) )
    {
      if ( !errorOnMissing )
        return 0i64;
      v19 = SL_ConvertToString(itemType);
      v20 = SL_ConvertToString(scr_const.commonOption);
      Com_PrintError(28, "Could not find '%s %s %s' field in 'ddl/mp/recipes.ddl'\n", v20, v19, itemName);
      Com_Error_impl(genericError[1].level, (const ObfuscateErrorText)&queryFormat, genericError[1].error);
    }
    if ( DDL_GetType(&fromState) == DDL_UINT_TYPE && DDL_StateGetBitSize(&fromState) == 1 )
      return DDL_GetBool(&fromState, &ddlContext);
    v22 = SL_ConvertToString(itemType);
    v23 = SL_ConvertToString(scr_const.commonOption);
    Com_PrintError(28, "'%s %s %s' field in 'ddl/mp/recipes.ddl' is not of bool/integer type\n", v23, v22, itemName);
    Com_Error_impl(genericError[1].level, (const ObfuscateErrorText)&queryFormat, genericError[1].error);
  }
  else
  {
    Com_PrintWarning(13, "Accessing matchrules weaponRestricted field %s on an invalid buffer.\n", itemName);
  }
  return 0i64;
}

/*
==============
MatchRules_IsPerkRestricted
==============
*/
int MatchRules_IsPerkRestricted(const char *perkName)
{
  return MatchRules_IsLoadoutItemRestricted(perkName, scr_const.perkRestricted, 1, 0);
}

/*
==============
MatchRules_IsSuperRestricted
==============
*/
int MatchRules_IsSuperRestricted(const char *superName)
{
  return MatchRules_IsLoadoutItemRestricted(superName, scr_const.superRestricted, 1, 0);
}

/*
==============
MatchRules_IsWeaponAttachmentRestricted
==============
*/
int MatchRules_IsWeaponAttachmentRestricted(const char *weaponAttachmentName)
{
  return MatchRules_IsLoadoutItemRestricted(weaponAttachmentName, scr_const.attachmentRestrictedPerWeapon, 0, 1);
}

/*
==============
MatchRules_IsWeaponClassRestricted
==============
*/
int MatchRules_IsWeaponClassRestricted(const char *weaponClassName)
{
  return MatchRules_IsLoadoutItemRestricted(weaponClassName, scr_const.weaponClassRestricted, 1, 0);
}

/*
==============
MatchRules_IsWeaponRestricted
==============
*/
int MatchRules_IsWeaponRestricted(const char *weaponName)
{
  return MatchRules_IsLoadoutItemRestricted(weaponName, scr_const.weaponRestricted, 1, 0);
}

/*
==============
MatchRules_LoadFromFF
==============
*/
__int64 MatchRules_LoadFromFF(MatchRules *matchRules, const char *recipeName)
{
  __int64 result; 

  if ( !matchRules && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules.cpp", 908, ASSERT_TYPE_ASSERT, "(matchRules)", (const char *)&queryFormat, "matchRules") )
    __debugbreak();
  if ( !recipeName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules.cpp", 909, ASSERT_TYPE_ASSERT, "(recipeName)", (const char *)&queryFormat, "recipeName") )
    __debugbreak();
  result = BG_MatchRules_GetDataFromFF(&g_matchRulesOtherCache, recipeName, "MatchRules_LoadFromFF");
  if ( (_DWORD)result )
  {
    memcpy_0(matchRules, g_matchRulesOtherCache.data, g_matchRulesOtherCache.length);
    return 1i64;
  }
  return result;
}

/*
==============
MatchRules_RegisterCommands
==============
*/
void MatchRules_RegisterCommands(void)
{
  BG_MatchRulesHistory_RegisterCommands();
  Cmd_AddClientCommandList(S_BG_MATCHRULES_CMD, 3u);
}

/*
==============
MatchRules_SetAttachmentClassRestricted
==============
*/
int MatchRules_SetAttachmentClassRestricted(const char *attachmentClassName, bool restricted)
{
  return MatchRules_SetLoadoutItemRestricted(attachmentClassName, (const scr_string_t)scr_const.attachmentClassRestricted, restricted);
}

/*
==============
MatchRules_SetAttachmentRestricted
==============
*/
int MatchRules_SetAttachmentRestricted(const char *attachmentName, bool restricted)
{
  return MatchRules_SetLoadoutItemRestricted(attachmentName, (const scr_string_t)scr_const.attachmentRestricted, restricted);
}

/*
==============
MatchRules_SetEquipmentRestricted
==============
*/
int MatchRules_SetEquipmentRestricted(const char *equipmentName, bool restricted)
{
  return MatchRules_SetLoadoutItemRestricted(equipmentName, (const scr_string_t)scr_const.equipmentRestricted, restricted);
}

/*
==============
MatchRules_SetKillstreakRestricted
==============
*/
int MatchRules_SetKillstreakRestricted(const char *killstreakName, bool restricted)
{
  return MatchRules_SetLoadoutItemRestricted(killstreakName, (const scr_string_t)scr_const.killstreakRestricted, restricted);
}

/*
==============
MatchRules_SetLoadoutItemRestricted
==============
*/
__int64 MatchRules_SetLoadoutItemRestricted(const char *itemName, const scr_string_t itemType, bool restricted)
{
  const DDLDef *Asset; 
  GameStateInfo *v10; 
  const char *v11; 
  __int64 v12; 
  unsigned int RawHash; 
  const char *v16; 
  unsigned int v17; 
  const char *v18; 
  const char *v19; 
  const char *v20; 
  const char *v21; 
  const char *v22; 
  const char *v23; 
  DDLState fromState; 
  DDLState result; 
  DDLContext ddlContext; 
  void *retaddr; 

  _RAX = &retaddr;
  fromState.isValid = 0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  fromState.offset = 0;
  __asm { vmovdqu xmmword ptr [rax-68h], xmm0 }
  fromState.arrayIndex = -1;
  Asset = Com_DDL_LoadAsset("ddl/mp/recipes.ddl");
  if ( !GameStateInfo_Get()->matchRules && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules.cpp", 267, ASSERT_TYPE_ASSERT, "(GameStateInfo_Get()->matchRules)", (const char *)&queryFormat, "GameStateInfo_Get()->matchRules", *(_QWORD *)&fromState.isValid, *(_QWORD *)&fromState.arrayIndex) )
    __debugbreak();
  v10 = GameStateInfo_Get();
  if ( !DDL_CreateContext(v10->matchRules, 4096, Asset, &ddlContext, NULL, NULL) )
  {
    v11 = SL_ConvertToString(itemType);
    Com_PrintWarning(13, "Accessing matchrules weaponRestricted field %s (type %s) on an invalid buffer.\n", itemName, v11);
    return 0i64;
  }
  _RAX = DDL_GetRootState(&result, Asset);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rsp+0A8h+fromState.isValid], ymm0
  }
  RawHash = j_SL_GetRawHash(scr_const.commonOption);
  if ( !DDL_MoveToNameHash(&fromState, &fromState, RawHash, NULL) )
  {
    v16 = SL_ConvertToString(scr_const.commonOption);
    Com_PrintError(28, "Could not find '%s' field in 'ddl/mp/recipes.ddl'\n", v16);
LABEL_8:
    Com_Error_impl(genericError[1].level, (const ObfuscateErrorText)&queryFormat, genericError[1].error);
    return 0i64;
  }
  v17 = j_SL_GetRawHash(itemType);
  if ( !DDL_MoveToNameHash(&fromState, &fromState, v17, NULL) )
  {
    v18 = SL_ConvertToString(itemType);
    v19 = SL_ConvertToString(scr_const.commonOption);
    Com_PrintError(28, "Could not find '%s %s' field in 'ddl/mp/recipes.ddl'\n", v19, v18);
    goto LABEL_8;
  }
  if ( !DDL_MoveToName(&fromState, &fromState, itemName) )
  {
    v20 = SL_ConvertToString(itemType);
    v21 = SL_ConvertToString(scr_const.commonOption);
    Com_PrintError(28, "Could not find '%s %s %s' field in 'ddl/mp/recipes.ddl'\n", v21, v20, itemName);
    goto LABEL_8;
  }
  if ( DDL_GetType(&fromState) == DDL_UINT_TYPE && DDL_StateGetBitSize(&fromState) == 1 )
  {
    LOBYTE(v12) = DDL_SetBool(&fromState, &ddlContext, restricted);
  }
  else
  {
    v22 = SL_ConvertToString(itemType);
    v23 = SL_ConvertToString(scr_const.commonOption);
    Com_PrintError(28, "'%s %s %s' field in 'ddl/mp/recipes.ddl' is not of bool/integer type\n", v23, v22, itemName);
    Com_Error_impl(genericError[1].level, (const ObfuscateErrorText)&queryFormat, genericError[1].error);
    LOBYTE(v12) = 0;
  }
  return (unsigned __int8)v12;
}

/*
==============
MatchRules_SetPerkRestricted
==============
*/
int MatchRules_SetPerkRestricted(const char *perkName, bool restricted)
{
  return MatchRules_SetLoadoutItemRestricted(perkName, (const scr_string_t)scr_const.perkRestricted, restricted);
}

/*
==============
MatchRules_SetSuperRestricted
==============
*/
int MatchRules_SetSuperRestricted(const char *superName, bool restricted)
{
  return MatchRules_SetLoadoutItemRestricted(superName, (const scr_string_t)scr_const.superRestricted, restricted);
}

/*
==============
MatchRules_SetWeaponClassRestricted
==============
*/
int MatchRules_SetWeaponClassRestricted(const char *weaponClassName, bool restricted)
{
  return MatchRules_SetLoadoutItemRestricted(weaponClassName, (const scr_string_t)scr_const.weaponClassRestricted, restricted);
}

/*
==============
MatchRules_SetWeaponRestricted
==============
*/
int MatchRules_SetWeaponRestricted(const char *weaponName, bool restricted)
{
  return MatchRules_SetLoadoutItemRestricted(weaponName, (const scr_string_t)scr_const.weaponRestricted, restricted);
}

/*
==============
MatchRules_Shutdown
==============
*/

void MatchRules_Shutdown(void)
{
  BG_MatchRulesHistory_Shutdown();
}

/*
==============
MatchRules_UnregisterCommands
==============
*/
void MatchRules_UnregisterCommands(void)
{
  BG_MatchRulesHistory_UnregisterCommands();
  Cmd_RemoveClientCommandList(S_BG_MATCHRULES_CMD, 3u);
}

/*
==============
MatchRules_ValidateCustomClass
==============
*/
__int64 MatchRules_ValidateCustomClass(const int localControllerIndex, const char *squadLocation, int squadMemberIndex, const char *squadSlotLocation)
{
  return 1i64;
}

/*
==============
MatchRules_ValidateWeapon
==============
*/
__int64 MatchRules_ValidateWeapon(const char *weaponName)
{
  return 1i64;
}

/*
==============
SaveMatchRulesDataToFilesystem
==============
*/
void SaveMatchRulesDataToFilesystem(MatchRules *matchRules, const char *gametype)
{
  const DDLDef *Asset; 
  const char *v11; 
  fileHandle_t *v12; 
  const DDLDef *v13; 
  unsigned int RawHash; 
  DDLState fromState; 
  DDLHeader result; 
  DDLContext ddlContext; 
  fileHandle_t dest[8]; 
  char filename[64]; 

  fromState.isValid = 0;
  fromState.offset = 0;
  fromState.arrayIndex = -1;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rsp+148h+fromState.member], xmm0
  }
  if ( !matchRules && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules.cpp", 1234, ASSERT_TYPE_ASSERT, "(matchRules)", (const char *)&queryFormat, "matchRules", *(_QWORD *)&fromState.isValid, *(_QWORD *)&fromState.arrayIndex, fromState.member, fromState.ddlDef) )
    __debugbreak();
  Asset = Com_DDL_LoadAsset("ddl/mp/recipes.ddl");
  _RAX = DDL_GetHeader(&result, matchRules, 0);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vextractf128 xmm0, ymm0, 1
    vmovd   ecx, xmm0
  }
  if ( (_WORD)_ECX != Asset->version && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules.cpp", 1220, ASSERT_TYPE_ASSERT, "(bufferHeader.version == def->version)", (const char *)&queryFormat, "bufferHeader.version == def->version") )
    __debugbreak();
  Com_sprintf((char *)dest, 0x40ui64, "%s.recipe", gametype);
  Com_sprintf(filename, 0x40ui64, "raw_shared/%s", "mp/recipes");
  v12 = FS_FOpenFileWriteToDir(dest, filename, v11);
  if ( v12 == (fileHandle_t *)-1i64 )
  {
    Com_PrintError(13, "[SaveMatchRulesDataToFilesystem] Could not open %s/%s for writing\n", filename, (const char *)dest);
  }
  else
  {
    FS_FCloseFile((fileHandle_t)v12);
    v13 = Com_DDL_LoadAsset("ddl/mp/recipes.ddl");
    Com_DDL_CreateContext(matchRules, 4096, v13, &ddlContext, NULL, NULL);
    _RAX = DDL_GetRootState((DDLState *)&result, v13);
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rsp+148h+fromState.isValid], ymm0
    }
    RawHash = j_SL_GetRawHash(scr_const.recipeName);
    DDL_MoveToNameByHash(&fromState, &fromState, RawHash, NULL);
    DDL_SetString(&fromState, &ddlContext, (const char *)&queryFormat.fmt + 3);
    MatchRulesChanged(matchRules);
    Com_DDL_WriteAsText(&ddlContext, (const char *)dest, filename);
    Com_Printf(13, "[SaveMatchRulesDataToFilesystem] Succeeded writing defaults into %s/%s\n", filename, (const char *)dest);
  }
}

/*
==============
WriteMatchRulesSnapshotDeltaFromBuffer
==============
*/
__int64 WriteMatchRulesSnapshotDeltaFromBuffer(MatchRulesSnapshotDelta *delta, MatchRules *matchRules, const unsigned __int8 *fromBuf)
{
  const DDLDef *Asset; 

  if ( !delta && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules.cpp", 1124, ASSERT_TYPE_ASSERT, "(delta)", (const char *)&queryFormat, "delta") )
    __debugbreak();
  if ( !matchRules && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules.cpp", 1125, ASSERT_TYPE_ASSERT, "(matchRules)", (const char *)&queryFormat, "matchRules") )
    __debugbreak();
  if ( !fromBuf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules.cpp", 1126, ASSERT_TYPE_ASSERT, "(fromBuf)", (const char *)&queryFormat, "fromBuf") )
    __debugbreak();
  Asset = Com_DDL_LoadAsset("ddl/mp/recipes.ddl");
  WriteSnapshotDelta(delta, fromBuf, matchRules->data, Asset->byteSize);
  return 1i64;
}

/*
==============
WriteMatchRulesSnapshotDeltaFromDefaults
==============
*/
int WriteMatchRulesSnapshotDeltaFromDefaults(MatchRulesSnapshotDelta *delta, MatchRules *matchRules)
{
  const char *RootString; 
  const char *v6; 

  if ( !delta && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules.cpp", 1139, ASSERT_TYPE_ASSERT, "(delta)", (const char *)&queryFormat, "delta") )
    __debugbreak();
  if ( !matchRules && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules.cpp", 1140, ASSERT_TYPE_ASSERT, "(matchRules)", (const char *)&queryFormat, "matchRules") )
    __debugbreak();
  RootString = BG_MatchRulesData_GetRootString(matchRules, (const scr_string_t)scr_const.gametype);
  if ( (unsigned int)BG_MatchRules_GetDataFromFF(&g_matchRulesDefaultsCache, RootString, "GetMatchRulesDefaultDataFromFF") )
  {
    v6 = BG_MatchRulesData_GetRootString(matchRules, (const scr_string_t)scr_const.gametype);
    Com_Printf(25, "[WriteMatchRulesSnapshotDeltaFromDefaults] Building from defaults for %s.\n", v6);
    WriteSnapshotDelta(delta, g_matchRulesDefaultsCache.data, matchRules->data, g_matchRulesDefaultsCache.length);
    return 1;
  }
  else
  {
    Com_Printf(25, "[WriteMatchRulesSnapshotDeltaFromDefaults] Building full delta.\n");
    return WriteMatchRulesSnapshotFullDelta(delta, matchRules);
  }
}

/*
==============
WriteMatchRulesSnapshotFullDelta
==============
*/
__int64 WriteMatchRulesSnapshotFullDelta(MatchRulesSnapshotDelta *delta, MatchRules *matchRules)
{
  MatchRulesSnapshotDelta *v3; 
  __int64 v4; 
  const DDLDef *v5; 
  __int64 partitionCount; 
  __int64 v7; 
  unsigned __int8 *data; 
  unsigned __int8 *v9; 
  unsigned __int64 v10; 
  unsigned __int8 *v11; 
  MatchRules *v12; 
  char *v13; 
  size_t v14; 
  __int64 v15; 
  __int64 v17; 
  MatchRulesSnapshotDelta::Partition *v20; 
  const DDLDef *Asset; 

  v3 = delta;
  if ( !delta && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules.cpp", 1083, ASSERT_TYPE_ASSERT, "(delta)", (const char *)&queryFormat, "delta") )
    __debugbreak();
  if ( !matchRules && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules.cpp", 1084, ASSERT_TYPE_ASSERT, "(matchRules)", (const char *)&queryFormat, "matchRules") )
    __debugbreak();
  v4 = 0i64;
  Asset = Com_DDL_LoadAsset("ddl/mp/recipes.ddl");
  v3->partitionCount = 0;
  v5 = Asset;
  if ( Asset->byteSize )
  {
    do
    {
      partitionCount = v3->partitionCount;
      v3->partitionCount = partitionCount + 1;
      v7 = (unsigned int)(v5->byteSize - v4);
      data = v3->partition[partitionCount].data;
      v20 = &v3->partition[partitionCount];
      v9 = &v3->partition[partitionCount].data[2];
      if ( (int)v7 > 1209 )
        v7 = 1209i64;
      v10 = (unsigned __int64)&v3->partition[partitionCount].data[1213];
      if ( (unsigned __int64)v9 >= v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules.cpp", 1097, ASSERT_TYPE_ASSERT, "(( writePtr + sizeof( ushort ) ) < part->data + MAX_PARTITION_SIZE)", (const char *)&queryFormat, "( writePtr + sizeof( ushort ) ) < part->data + MAX_PARTITION_SIZE") )
        __debugbreak();
      v11 = v9 + 2;
      *(_WORD *)data = v4;
      if ( (unsigned __int64)(v9 + 2) >= v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules.cpp", 1102, ASSERT_TYPE_ASSERT, "(( writePtr + sizeof( ushort ) ) < part->data + MAX_PARTITION_SIZE)", (const char *)&queryFormat, "( writePtr + sizeof( ushort ) ) < part->data + MAX_PARTITION_SIZE") )
        __debugbreak();
      *(_WORD *)v9 = v7;
      if ( (int)v7 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules.cpp", 1110, ASSERT_TYPE_ASSERT, "(0 <= static_cast<int>(length))", "%s\n\tMemcpy has negative length. (length)", "0 <= static_cast<int>(length)") )
        __debugbreak();
      v12 = matchRules;
      v13 = (char *)&matchRules->data[v4];
      if ( &matchRules->data[v4] >= v11 && &matchRules->data[v7 + v4] <= &v11[(unsigned int)v7] )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules.cpp", 1110, ASSERT_TYPE_ASSERT, "(reinterpret_cast<const byte*>((&matchRules->data[offset])) < reinterpret_cast<const byte*>((writePtr)) || reinterpret_cast<const byte*>((&matchRules->data[offset]))+((length)) > reinterpret_cast<const byte*>((writePtr))+((length)))", "%s\n\tMemcpy from (&matchRules->data[offset]) to (writePtr) is copying between overlapping ranges ", "reinterpret_cast<const byte*>((&matchRules->data[offset])) < reinterpret_cast<const byte*>((writePtr)) || reinterpret_cast<const byte*>((&matchRules->data[offset]))+((length)) > reinterpret_cast<const byte*>((writePtr))+((length))") )
          __debugbreak();
        v12 = matchRules;
      }
      v14 = (unsigned int)v7;
      if ( (v13 < (char *)v12 || &v12->data[v4 + v7] > &v12->data[4097]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules.cpp", 1110, ASSERT_TYPE_ASSERT, "(reinterpret_cast<const byte*>((&matchRules->data[offset])) >= reinterpret_cast<const byte*>((matchRules->data)) && reinterpret_cast<const byte*>((&matchRules->data[offset]))+((length)) <= reinterpret_cast<const byte*>((matchRules->data))+((sizeof( matchRules->data ))))", "%s\n\tMemcpy from (&matchRules->data[offset]) exceeded bounds of matchRules->data", "reinterpret_cast<const byte*>((&matchRules->data[offset])) >= reinterpret_cast<const byte*>((matchRules->data)) && reinterpret_cast<const byte*>((&matchRules->data[offset]))+((length)) <= reinterpret_cast<const byte*>((matchRules->data))+((sizeof( matchRules->data )))") )
        __debugbreak();
      if ( v11 < data || (v14 = (unsigned int)v7, (unsigned __int64)&v11[v7] > v10) )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules.cpp", 1110, ASSERT_TYPE_ASSERT, "(reinterpret_cast<const byte*>((writePtr)) >= reinterpret_cast<const byte*>((part->data)) && reinterpret_cast<const byte*>((writePtr))+((length)) <= reinterpret_cast<const byte*>((part->data))+((MAX_PARTITION_SIZE)))", "%s\n\tMemcpy to (writePtr) exceeded bounds of part->data", "reinterpret_cast<const byte*>((writePtr)) >= reinterpret_cast<const byte*>((part->data)) && reinterpret_cast<const byte*>((writePtr))+((length)) <= reinterpret_cast<const byte*>((part->data))+((MAX_PARTITION_SIZE))") )
          __debugbreak();
      }
      memcpy_0(v11, v13, v14);
      v15 = (__int64)&v11[v14 - (_QWORD)v20 - 4];
      if ( (v15 < 0 || (unsigned __int64)v15 > 0xFFFFFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,__int64>(__int64)", "unsigned", (unsigned int)v15, "signed", v15) )
        __debugbreak();
      v20->len = v15;
      if ( (unsigned int)v15 > 0x4BD )
      {
        LODWORD(v17) = v15;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules.cpp", 1115, ASSERT_TYPE_ASSERT, "( ( part->len <= ( ( ( 1270 - 16 - 2 ) - 4 - 3 ) - ( ( ( (250) > ( 138 ) ? (250) : ( 138 ) ) + 7 ) / 8 ) ) ) )", "( part->len ) = %i", v17) )
          __debugbreak();
      }
      v5 = Asset;
      v3 = delta;
      v4 = (unsigned int)(v7 + v4);
    }
    while ( (unsigned int)v4 < Asset->byteSize );
  }
  return 1i64;
}

/*
==============
WriteSnapshotDelta
==============
*/
void WriteSnapshotDelta(MatchRulesSnapshotDelta *delta, const unsigned __int8 *fromBuf, const unsigned __int8 *toBuf, int size)
{
  __int64 v4; 
  const unsigned __int8 *v6; 
  MatchRulesSnapshotDelta *v7; 
  const unsigned __int8 *v8; 
  MatchRulesSnapshotDelta::Partition *partition; 
  const unsigned __int8 *v10; 
  unsigned __int8 *i; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 
  int v15; 
  char *v16; 
  int v17; 
  int v18; 
  __int64 v19; 
  int v20; 
  char v21; 
  char v22; 
  int v23; 
  unsigned __int64 v24; 
  _WORD *v25; 
  unsigned __int8 *v26; 
  size_t v27; 
  __int64 v28; 
  __int64 v29; 
  __int64 v30; 
  const unsigned __int8 *v31; 
  const unsigned __int8 *v33; 

  v33 = fromBuf;
  v4 = size;
  v6 = fromBuf;
  v7 = delta;
  if ( !delta && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules.cpp", 970, ASSERT_TYPE_ASSERT, "(delta)", (const char *)&queryFormat, "delta") )
    __debugbreak();
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules.cpp", 971, ASSERT_TYPE_ASSERT, "(fromBuf)", (const char *)&queryFormat, "fromBuf") )
    __debugbreak();
  if ( !toBuf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules.cpp", 972, ASSERT_TYPE_ASSERT, "(toBuf)", (const char *)&queryFormat, "toBuf") )
    __debugbreak();
  v8 = &toBuf[v4];
  v7->partitionCount = 0;
  partition = v7->partition;
  v31 = &toBuf[v4];
  v10 = toBuf;
  for ( i = v7->partition[0].data; v10 < v8; v33 = v6 )
  {
    if ( *v10 == *v6 )
    {
      ++v10;
      v12 = 1i64;
    }
    else
    {
      v13 = i - (unsigned __int8 *)partition - 4;
      if ( v13 % 1213 + 5 >= 1213 )
      {
        if ( (v13 < 0 || (unsigned __int64)v13 > 0xFFFFFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,__int64>(__int64)", "unsigned", (unsigned int)v13, "signed", i - (unsigned __int8 *)partition - 4) )
          __debugbreak();
        partition->len = v13;
        if ( (unsigned int)v7->partitionCount + 1 >= 4 )
        {
          LODWORD(v30) = 4;
          LODWORD(v29) = v7->partitionCount + 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules.cpp", 998, ASSERT_TYPE_ASSERT, "(unsigned)( delta->partitionCount + 1 ) < (unsigned)( ( sizeof( *array_counter( delta->partition ) ) + 0 ) )", "delta->partitionCount + 1 doesn't index ARRAY_COUNT( delta->partition )\n\t%i not in [0, %i)", v29, v30) )
            __debugbreak();
        }
        v14 = ++v7->partitionCount;
        v13 = 0i64;
        partition = &v7->partition[v14];
        i = v7->partition[v14].data;
      }
      v15 = 0;
      v16 = (char *)(v10 + 1);
      v17 = 1;
      v18 = 1;
      if ( v10 + 1 < v8 )
      {
        v19 = 1i64;
        do
        {
          v20 = v15;
          if ( v13 + v19 - 1213 * (v13 / 1213) == 1209 )
            break;
          v21 = *v16;
          v22 = v16[v33 - v10];
          if ( *v16 == v22 )
          {
            if ( (unsigned int)++v15 > 4 )
              break;
          }
          else
          {
            v17 += v15 + 1;
          }
          ++v18;
          ++v16;
          v23 = v20 + 1;
          v19 = v18;
          v15 = 0;
          if ( v21 == v22 )
            v15 = v23;
        }
        while ( &v10[v18] < v8 );
      }
      v24 = (unsigned __int64)&partition->data[1213];
      v25 = i + 2;
      if ( i + 2 >= &partition->data[1213] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules.cpp", 1030, ASSERT_TYPE_ASSERT, "(( writePtr + sizeof( ushort ) ) < part->data + MAX_PARTITION_SIZE)", (const char *)&queryFormat, "( writePtr + sizeof( ushort ) ) < part->data + MAX_PARTITION_SIZE") )
        __debugbreak();
      *(_WORD *)i = (_WORD)v10 - (_WORD)toBuf;
      v26 = i + 4;
      if ( (unsigned __int64)(v25 + 1) >= v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules.cpp", 1039, ASSERT_TYPE_ASSERT, "(( writePtr + sizeof( ushort ) ) < part->data + MAX_PARTITION_SIZE)", (const char *)&queryFormat, "( writePtr + sizeof( ushort ) ) < part->data + MAX_PARTITION_SIZE") )
        __debugbreak();
      *v25 = v17;
      if ( v17 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules.cpp", 1051, ASSERT_TYPE_ASSERT, "(0 <= static_cast<int>(length))", "%s\n\tMemcpy has negative length. (length)", "0 <= static_cast<int>(length)") )
        __debugbreak();
      if ( v10 >= v26 && &v10[v17] <= &v26[v17] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules.cpp", 1051, ASSERT_TYPE_ASSERT, "(reinterpret_cast<const byte*>((toReadPtr)) < reinterpret_cast<const byte*>((writePtr)) || reinterpret_cast<const byte*>((toReadPtr))+((length)) > reinterpret_cast<const byte*>((writePtr))+((length)))", "%s\n\tMemcpy from (toReadPtr) to (writePtr) is copying between overlapping ranges ", "reinterpret_cast<const byte*>((toReadPtr)) < reinterpret_cast<const byte*>((writePtr)) || reinterpret_cast<const byte*>((toReadPtr))+((length)) > reinterpret_cast<const byte*>((writePtr))+((length))") )
        __debugbreak();
      v27 = v17;
      if ( (v10 < toBuf || &v10[v17] > v31) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules.cpp", 1051, ASSERT_TYPE_ASSERT, "(reinterpret_cast<const byte*>((toReadPtr)) >= reinterpret_cast<const byte*>((toBuf)) && reinterpret_cast<const byte*>((toReadPtr))+((length)) <= reinterpret_cast<const byte*>((toBuf))+((size)))", "%s\n\tMemcpy from (toReadPtr) exceeded bounds of toBuf", "reinterpret_cast<const byte*>((toReadPtr)) >= reinterpret_cast<const byte*>((toBuf)) && reinterpret_cast<const byte*>((toReadPtr))+((length)) <= reinterpret_cast<const byte*>((toBuf))+((size))") )
        __debugbreak();
      if ( v26 < partition->data || (v27 = v17, (unsigned __int64)&v26[v17] > v24) )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules.cpp", 1051, ASSERT_TYPE_ASSERT, "(reinterpret_cast<const byte*>((writePtr)) >= reinterpret_cast<const byte*>((part->data)) && reinterpret_cast<const byte*>((writePtr))+((length)) <= reinterpret_cast<const byte*>((part->data))+((MAX_PARTITION_SIZE)))", "%s\n\tMemcpy to (writePtr) exceeded bounds of part->data", "reinterpret_cast<const byte*>((writePtr)) >= reinterpret_cast<const byte*>((part->data)) && reinterpret_cast<const byte*>((writePtr))+((length)) <= reinterpret_cast<const byte*>((part->data))+((MAX_PARTITION_SIZE))") )
          __debugbreak();
      }
      memcpy_0(v26, v10, v27);
      v8 = v31;
      v12 = (unsigned int)(v15 + v17);
      v7 = delta;
      v6 = v33;
      i = &v26[v27];
      v10 += v12;
    }
    v6 += v12;
  }
  if ( i != partition->data )
  {
    ++v7->partitionCount;
    if ( i < partition->data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules.cpp", 1065, ASSERT_TYPE_ASSERT, "(writePtr >= part->data)", (const char *)&queryFormat, "writePtr >= part->data") )
      __debugbreak();
  }
  v28 = i - (unsigned __int8 *)partition - 4;
  if ( (unsigned __int64)(v28 + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)v28, "signed", v28) )
    __debugbreak();
  partition->len = v28;
  if ( (unsigned int)v28 > 0x4BD )
  {
    LODWORD(v29) = v28;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_matchrules.cpp", 1068, ASSERT_TYPE_ASSERT, "( ( part->len <= ( ( ( 1270 - 16 - 2 ) - 4 - 3 ) - ( ( ( (250) > ( 138 ) ? (250) : ( 138 ) ) + 7 ) / 8 ) ) ) )", "( part->len ) = %i", v29) )
      __debugbreak();
  }
}

