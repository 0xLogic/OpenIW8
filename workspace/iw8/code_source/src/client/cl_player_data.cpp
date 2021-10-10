/*
==============
CL_PlayerData_ApplyValidationHints
==============
*/

void __fastcall CL_PlayerData_ApplyValidationHints(int controllerIndex, StatsSource statsSource, StatsGroup statsGroup)
{
  ?CL_PlayerData_ApplyValidationHints@@YAXHW4StatsSource@@W4StatsGroup@@@Z(controllerIndex, statsSource, statsGroup);
}

/*
==============
CL_PlayerData_GetZombieConsumableImageName
==============
*/

bool __fastcall CL_PlayerData_GetZombieConsumableImageName(const int controllerIndex, const int index, const char **outImageName)
{
  return ?CL_PlayerData_GetZombieConsumableImageName@@YA_NHHPEAPEBD@Z(controllerIndex, index, outImageName);
}

/*
==============
CL_PlayerData_InitCustomization
==============
*/

void CL_PlayerData_InitCustomization(void)
{
  ?CL_PlayerData_InitCustomization@@YAXXZ();
}

/*
==============
CL_PlayerData_GetDDLBuffer
==============
*/

bool __fastcall CL_PlayerData_GetDDLBuffer(DDLContext *context, const int controllerIndex, StatsSource statsSource, StatsGroup statsGroup)
{
  return ?CL_PlayerData_GetDDLBuffer@@YA_NPEAUDDLContext@@HW4StatsSource@@W4StatsGroup@@@Z(context, controllerIndex, statsSource, statsGroup);
}

/*
==============
CL_PlayerData_SetClanTag
==============
*/

void __fastcall CL_PlayerData_SetClanTag(const int controllerIndex, const char *clanTagText)
{
  ?CL_PlayerData_SetClanTag@@YAXHPEBD@Z(controllerIndex, clanTagText);
}

/*
==============
PlayerDataGetByteByName
==============
*/

unsigned __int8 __fastcall PlayerDataGetByteByName(const int controllerIndex, const scr_string_t name, const StatsGroup statsGroup)
{
  return ?PlayerDataGetByteByName@@YAEHW4scr_string_t@@W4StatsGroup@@@Z(controllerIndex, name, statsGroup);
}

/*
==============
CL_PlayerData_GetRankMP
==============
*/

int __fastcall CL_PlayerData_GetRankMP(const int controllerIndex)
{
  return ?CL_PlayerData_GetRankMP@@YAHH@Z(controllerIndex);
}

/*
==============
CL_PlayerData_GetDDLBufferForDemo
==============
*/

bool __fastcall CL_PlayerData_GetDDLBufferForDemo(DDLContext *context, const int controllerIndex, StatsGroup statsGroup)
{
  return ?CL_PlayerData_GetDDLBufferForDemo@@YA_NPEAUDDLContext@@HW4StatsGroup@@@Z(context, controllerIndex, statsGroup);
}

/*
==============
CL_PlayerData_GetCustomizationBackground
==============
*/

int __fastcall CL_PlayerData_GetCustomizationBackground(const int controllerIndex)
{
  return ?CL_PlayerData_GetCustomizationBackground@@YAHH@Z(controllerIndex);
}

/*
==============
CL_PlayerData_GetPlayerRole
==============
*/

const char *__fastcall CL_PlayerData_GetPlayerRole(const int controllerIndex, const int client_num)
{
  return ?CL_PlayerData_GetPlayerRole@@YAPEBDHH@Z(controllerIndex, client_num);
}

/*
==============
PlayerDataSetStringByName
==============
*/

bool __fastcall PlayerDataSetStringByName(const int controllerIndex, const scr_string_t name, const StatsGroup statsGroup, const char *value)
{
  return ?PlayerDataSetStringByName@@YA_NHW4scr_string_t@@W4StatsGroup@@PEBD@Z(controllerIndex, name, statsGroup, value);
}

/*
==============
CL_PlayerData_GetCustomizationPatch
==============
*/

int __fastcall CL_PlayerData_GetCustomizationPatch(const int controllerIndex)
{
  return ?CL_PlayerData_GetCustomizationPatch@@YAHH@Z(controllerIndex);
}

/*
==============
CL_PlayerData_RegisterCommands
==============
*/

void CL_PlayerData_RegisterCommands(void)
{
  ?CL_PlayerData_RegisterCommands@@YAXXZ();
}

/*
==============
CL_PlayerData_GetPlayerCardBackgroundHandleForStatsGroup
==============
*/

int __fastcall CL_PlayerData_GetPlayerCardBackgroundHandleForStatsGroup(const int controllerIndex, const StatsGroup statsGroup)
{
  return ?CL_PlayerData_GetPlayerCardBackgroundHandleForStatsGroup@@YAHHW4StatsGroup@@@Z(controllerIndex, statsGroup);
}

/*
==============
CL_PlayerData_GetPrestigeMP
==============
*/

int __fastcall CL_PlayerData_GetPrestigeMP(const int controllerIndex)
{
  return ?CL_PlayerData_GetPrestigeMP@@YAHH@Z(controllerIndex);
}

/*
==============
GetUseEliteClanTag
==============
*/

int __fastcall GetUseEliteClanTag(const int controllerIndex)
{
  return ?GetUseEliteClanTag@@YAHH@Z(controllerIndex);
}

/*
==============
CL_PlayerData_SetIntByName
==============
*/

void __fastcall CL_PlayerData_SetIntByName(const int controllerIndex, unsigned int hash, int value, const StatsGroup statsGroup)
{
  ?CL_PlayerData_SetIntByName@@YAXHIHW4StatsGroup@@@Z(controllerIndex, hash, value, statsGroup);
}

/*
==============
CL_PlayerData_GetPlayerCardPatchHandle
==============
*/

int __fastcall CL_PlayerData_GetPlayerCardPatchHandle(const int controllerIndex)
{
  return ?CL_PlayerData_GetPlayerCardPatchHandle@@YAHH@Z(controllerIndex);
}

/*
==============
CL_PlayerData_PrestigeReset
==============
*/

void __fastcall CL_PlayerData_PrestigeReset(int controllerIndex)
{
  ?CL_PlayerData_PrestigeReset@@YAXH@Z(controllerIndex);
}

/*
==============
PlayerDataGetStringByName
==============
*/

const char *__fastcall PlayerDataGetStringByName(const int controllerIndex, const scr_string_t name, const StatsGroup statsGroup)
{
  return ?PlayerDataGetStringByName@@YAPEBDHW4scr_string_t@@W4StatsGroup@@@Z(controllerIndex, name, statsGroup);
}

/*
==============
CL_PlayerData_UpdateDDLChecksum
==============
*/

void __fastcall CL_PlayerData_UpdateDDLChecksum(int controllerIndex, StatsSource statsSource, StatsGroup statsGroup)
{
  ?CL_PlayerData_UpdateDDLChecksum@@YAXHW4StatsSource@@W4StatsGroup@@@Z(controllerIndex, statsSource, statsGroup);
}

/*
==============
SetEliteClanLevel
==============
*/

bool __fastcall SetEliteClanLevel(const int controllerIndex, int value)
{
  return ?SetEliteClanLevel@@YA_NHH@Z(controllerIndex, value);
}

/*
==============
CL_PlayerData_GetCPFieldUpgradeRef
==============
*/

const char *__fastcall CL_PlayerData_GetCPFieldUpgradeRef(const int controllerIndex)
{
  return ?CL_PlayerData_GetCPFieldUpgradeRef@@YAPEBDH@Z(controllerIndex);
}

/*
==============
CL_PlayerData_GetXpMP
==============
*/

int __fastcall CL_PlayerData_GetXpMP(const int controllerIndex)
{
  return ?CL_PlayerData_GetXpMP@@YAHH@Z(controllerIndex);
}

/*
==============
CL_PlayerData_GetClanTagType
==============
*/

unsigned __int8 __fastcall CL_PlayerData_GetClanTagType(const int controllerIndex)
{
  return ?CL_PlayerData_GetClanTagType@@YAEH@Z(controllerIndex);
}

/*
==============
CL_PlayerData_GetStringByName
==============
*/

const char *__fastcall CL_PlayerData_GetStringByName(const int controllerIndex, unsigned int hash, const StatsGroup statsGroup)
{
  return ?CL_PlayerData_GetStringByName@@YAPEBDHIW4StatsGroup@@@Z(controllerIndex, hash, statsGroup);
}

/*
==============
CL_PlayerData_SetStatsBlobDirty
==============
*/

void __fastcall CL_PlayerData_SetStatsBlobDirty(int controllerIndex, unsigned int startByteIndex, unsigned int dataBlockSize)
{
  ?CL_PlayerData_SetStatsBlobDirty@@YAXHII@Z(controllerIndex, startByteIndex, dataBlockSize);
}

/*
==============
CL_PlayerData_GetIntByName
==============
*/

int __fastcall CL_PlayerData_GetIntByName(const int controllerIndex, unsigned int hash, const StatsGroup statsGroup)
{
  return ?CL_PlayerData_GetIntByName@@YAHHIW4StatsGroup@@@Z(controllerIndex, hash, statsGroup);
}

/*
==============
CL_PlayerData_ValidateClanChecksum
==============
*/

void __fastcall CL_PlayerData_ValidateClanChecksum(const int controllerIndex)
{
  ?CL_PlayerData_ValidateClanChecksum@@YAXH@Z(controllerIndex);
}

/*
==============
CL_PlayerData_SetCustomizationPatch
==============
*/

void __fastcall CL_PlayerData_SetCustomizationPatch(const int controllerIndex, int background)
{
  ?CL_PlayerData_SetCustomizationPatch@@YAXHH@Z(controllerIndex, background);
}

/*
==============
CL_PlayerData_UpdateClanChecksum
==============
*/

void __fastcall CL_PlayerData_UpdateClanChecksum(const int controllerIndex)
{
  ?CL_PlayerData_UpdateClanChecksum@@YAXH@Z(controllerIndex);
}

/*
==============
CL_PlayerData_GetCustomizationForMPPublic
==============
*/

void __fastcall CL_PlayerData_GetCustomizationForMPPublic(const int controllerIndex, bool *outSelectedOperatorIndex, CustomizationModels *outInfoWest, CustomizationModels *outInfoEast)
{
  ?CL_PlayerData_GetCustomizationForMPPublic@@YAXHPEA_NPEAUCustomizationModels@@1@Z(controllerIndex, outSelectedOperatorIndex, outInfoWest, outInfoEast);
}

/*
==============
CL_PlayerData_GetString
==============
*/

const char *__fastcall CL_PlayerData_GetString(const int controllerIndex, const unsigned int *navHashes, int navHashCount, const StatsGroup statsGroup)
{
  return ?CL_PlayerData_GetString@@YAPEBDHQEBIHW4StatsGroup@@@Z(controllerIndex, navHashes, navHashCount, statsGroup);
}

/*
==============
CL_PlayerData_GetRankAlien
==============
*/

int __fastcall CL_PlayerData_GetRankAlien(const int controllerIndex)
{
  return ?CL_PlayerData_GetRankAlien@@YAHH@Z(controllerIndex);
}

/*
==============
CL_PlayerData_SetCustomClanTag
==============
*/

void __fastcall CL_PlayerData_SetCustomClanTag(const int controllerIndex, const char *clan_tag)
{
  ?CL_PlayerData_SetCustomClanTag@@YAXHPEBD@Z(controllerIndex, clan_tag);
}

/*
==============
CL_PlayerData_GetInt
==============
*/

int __fastcall CL_PlayerData_GetInt(const int controllerIndex, const unsigned int *navHashes, int navHashCount, const StatsGroup statsGroup)
{
  return ?CL_PlayerData_GetInt@@YAHHQEBIHW4StatsGroup@@@Z(controllerIndex, navHashes, navHashCount, statsGroup);
}

/*
==============
CL_PlayerData_GetFavoriteLoadoutIndex
==============
*/

int __fastcall CL_PlayerData_GetFavoriteLoadoutIndex(const int controllerIndex)
{
  return ?CL_PlayerData_GetFavoriteLoadoutIndex@@YAHH@Z(controllerIndex);
}

/*
==============
CL_PlayerData_GetCustomizationWeaponSetup
==============
*/

void __fastcall CL_PlayerData_GetCustomizationWeaponSetup(const int controllerIndex, UIWeaponSetupDef *setup)
{
  ?CL_PlayerData_GetCustomizationWeaponSetup@@YAXHPEAUUIWeaponSetupDef@@@Z(controllerIndex, setup);
}

/*
==============
CL_PlayerData_UnregisterCommands
==============
*/

void CL_PlayerData_UnregisterCommands(void)
{
  ?CL_PlayerData_UnregisterCommands@@YAXXZ();
}

/*
==============
CL_PlayerData_GetCustomization
==============
*/

void __fastcall CL_PlayerData_GetCustomization(const int controllerIndex, ClientCustomizationInfo *outInfo)
{
  ?CL_PlayerData_GetCustomization@@YAXHPEAUClientCustomizationInfo@@@Z(controllerIndex, outInfo);
}

/*
==============
CL_PlayerData_SanitizeClanName
==============
*/

void __fastcall CL_PlayerData_SanitizeClanName(char *clanName)
{
  ?CL_PlayerData_SanitizeClanName@@YAXPEAD@Z(clanName);
}

/*
==============
CL_PlayerData_SetInt
==============
*/

void __fastcall CL_PlayerData_SetInt(const int controllerIndex, const unsigned int *navHashes, int navHashCount, int value, const StatsGroup statsGroup)
{
  ?CL_PlayerData_SetInt@@YAXHQEBIHHW4StatsGroup@@@Z(controllerIndex, navHashes, navHashCount, value, statsGroup);
}

/*
==============
CL_PlayerData_GetCustomizationForMPPrivate
==============
*/

void __fastcall CL_PlayerData_GetCustomizationForMPPrivate(const int controllerIndex, bool *outSelectedOperatorIndex, CustomizationModels *outInfoWest, CustomizationModels *outInfoEast)
{
  ?CL_PlayerData_GetCustomizationForMPPrivate@@YAXHPEA_NPEAUCustomizationModels@@1@Z(controllerIndex, outSelectedOperatorIndex, outInfoWest, outInfoEast);
}

/*
==============
CL_PlayerData_GetPlayerCardBackgroundHandle
==============
*/

int __fastcall CL_PlayerData_GetPlayerCardBackgroundHandle(const int controllerIndex)
{
  return ?CL_PlayerData_GetPlayerCardBackgroundHandle@@YAHH@Z(controllerIndex);
}

/*
==============
CL_PlayerData_GetPlayerCardPatchHandleForStatsGroup
==============
*/

int __fastcall CL_PlayerData_GetPlayerCardPatchHandleForStatsGroup(const int controllerIndex, const StatsGroup statsGroup)
{
  return ?CL_PlayerData_GetPlayerCardPatchHandleForStatsGroup@@YAHHW4StatsGroup@@@Z(controllerIndex, statsGroup);
}

/*
==============
CL_PlayerData_SetCustomizationBackground
==============
*/

void __fastcall CL_PlayerData_SetCustomizationBackground(const int controllerIndex, int background)
{
  ?CL_PlayerData_SetCustomizationBackground@@YAXHH@Z(controllerIndex, background);
}

/*
==============
CL_PlayerData_GetPlayerCardPatchbackingHandle
==============
*/

int __fastcall CL_PlayerData_GetPlayerCardPatchbackingHandle(const int controllerIndex)
{
  return ?CL_PlayerData_GetPlayerCardPatchbackingHandle@@YAHH@Z(controllerIndex);
}

/*
==============
CL_PlayerData_SetClanTagType
==============
*/

void __fastcall CL_PlayerData_SetClanTagType(const int controllerIndex, const int typeValue)
{
  ?CL_PlayerData_SetClanTagType@@YAXHH@Z(controllerIndex, typeValue);
}

/*
==============
GetClanTag
==============
*/

const char *__fastcall GetClanTag(const int controllerIndex)
{
  return ?GetClanTag@@YAPEBDH@Z(controllerIndex);
}

/*
==============
GetEliteClanTag
==============
*/

const char *__fastcall GetEliteClanTag(const int controllerIndex)
{
  return ?GetEliteClanTag@@YAPEBDH@Z(controllerIndex);
}

/*
==============
CL_PlayerData_AliensPrestigeReset
==============
*/

void __fastcall CL_PlayerData_AliensPrestigeReset(int controllerIndex, int rank)
{
  ?CL_PlayerData_AliensPrestigeReset@@YAXHH@Z(controllerIndex, rank);
}

/*
==============
CL_PlayerData_GetCurrency
==============
*/

int __fastcall CL_PlayerData_GetCurrency(const int controllerIndex)
{
  return ?CL_PlayerData_GetCurrency@@YAHH@Z(controllerIndex);
}

/*
==============
CL_PlayerData_GetCPFieldUpgradeRowNum
==============
*/

unsigned int __fastcall CL_PlayerData_GetCPFieldUpgradeRowNum(const int controllerIndex)
{
  return ?CL_PlayerData_GetCPFieldUpgradeRowNum@@YAIH@Z(controllerIndex);
}

/*
==============
CL_PlayerData_ResetCustomClanTagIfInvalid
==============
*/

void __fastcall CL_PlayerData_ResetCustomClanTagIfInvalid(const int controllerIndex)
{
  ?CL_PlayerData_ResetCustomClanTagIfInvalid@@YAXH@Z(controllerIndex);
}

/*
==============
CL_PlayerData_SanitizeLocalClanName
==============
*/

void __fastcall CL_PlayerData_SanitizeLocalClanName(const int controllerIndex)
{
  ?CL_PlayerData_SanitizeLocalClanName@@YAXH@Z(controllerIndex);
}

/*
==============
PlayerDataGetIntByName
==============
*/

int __fastcall PlayerDataGetIntByName(const int controllerIndex, const scr_string_t name, const StatsGroup statsGroup)
{
  return ?PlayerDataGetIntByName@@YAHHW4scr_string_t@@W4StatsGroup@@@Z(controllerIndex, name, statsGroup);
}

/*
==============
SetUseEliteClanTag
==============
*/

bool __fastcall SetUseEliteClanTag(const int controllerIndex, int value)
{
  return ?SetUseEliteClanTag@@YA_NHH@Z(controllerIndex, value);
}

/*
==============
CL_PlayerData_GetXpAlien
==============
*/

int __fastcall CL_PlayerData_GetXpAlien(const int controllerIndex)
{
  return ?CL_PlayerData_GetXpAlien@@YAHH@Z(controllerIndex);
}

/*
==============
CL_PlayerData_GetCustomClanTag
==============
*/

const char *__fastcall CL_PlayerData_GetCustomClanTag(const int controllerIndex)
{
  return ?CL_PlayerData_GetCustomClanTag@@YAPEBDH@Z(controllerIndex);
}

/*
==============
CL_PlayerData_GetSquadPrestigeLevel
==============
*/

int __fastcall CL_PlayerData_GetSquadPrestigeLevel(const int controllerIndex)
{
  return ?CL_PlayerData_GetSquadPrestigeLevel@@YAHH@Z(controllerIndex);
}

/*
==============
CL_PlayerData_CloneLoadouts
==============
*/

void __fastcall CL_PlayerData_CloneLoadouts(const int controllerIndex, bool clonePrivateLoadouts)
{
  ?CL_PlayerData_CloneLoadouts@@YAXH_N@Z(controllerIndex, clonePrivateLoadouts);
}

/*
==============
PlayerDataSetByteByName
==============
*/

bool __fastcall PlayerDataSetByteByName(const int controllerIndex, const scr_string_t name, const StatsGroup statsGroup, int value)
{
  return ?PlayerDataSetByteByName@@YA_NHW4scr_string_t@@W4StatsGroup@@H@Z(controllerIndex, name, statsGroup, value);
}

/*
==============
PlayerDataSetIntByName
==============
*/

bool __fastcall PlayerDataSetIntByName(const int controllerIndex, const scr_string_t name, const StatsGroup statsGroup, int value)
{
  return ?PlayerDataSetIntByName@@YA_NHW4scr_string_t@@W4StatsGroup@@H@Z(controllerIndex, name, statsGroup, value);
}

/*
==============
CL_PlayerData_InitializeNewLoadoutSlots
==============
*/

void __fastcall CL_PlayerData_InitializeNewLoadoutSlots(const int controllerIndex)
{
  ?CL_PlayerData_InitializeNewLoadoutSlots@@YAXH@Z(controllerIndex);
}

/*
==============
GetEliteClanLevel
==============
*/

int __fastcall GetEliteClanLevel(const int controllerIndex)
{
  return ?GetEliteClanLevel@@YAHH@Z(controllerIndex);
}

/*
==============
SetEliteClanTag
==============
*/

bool __fastcall SetEliteClanTag(const int controllerIndex, const char *value)
{
  return ?SetEliteClanTag@@YA_NHPEBD@Z(controllerIndex, value);
}

/*
==============
CL_PlayerData_SetMountedDLCBits
==============
*/

void __fastcall CL_PlayerData_SetMountedDLCBits(const int controllerIndex)
{
  ?CL_PlayerData_SetMountedDLCBits@@YAXH@Z(controllerIndex);
}

/*
==============
CL_PlayerData_ValidateActivisionClanNames
==============
*/

bool __fastcall CL_PlayerData_ValidateActivisionClanNames(const int controllerIndex, const char *clanName)
{
  return ?CL_PlayerData_ValidateActivisionClanNames@@YA_NHPEBD@Z(controllerIndex, clanName);
}

/*
==============
CL_PlayerData_GetPrestigeAlien
==============
*/

int __fastcall CL_PlayerData_GetPrestigeAlien(const int controllerIndex)
{
  return ?CL_PlayerData_GetPrestigeAlien@@YAHH@Z(controllerIndex);
}

/*
==============
CL_PlayerData_GetZombieConsumable
==============
*/

unsigned int __fastcall CL_PlayerData_GetZombieConsumable(const int controllerIndex, const int index)
{
  return ?CL_PlayerData_GetZombieConsumable@@YAIHH@Z(controllerIndex, index);
}

/*
==============
CL_PlayerData_GetClanTag
==============
*/

const char *__fastcall CL_PlayerData_GetClanTag(const int controllerIndex)
{
  return ?CL_PlayerData_GetClanTag@@YAPEBDH@Z(controllerIndex);
}

/*
==============
LiveStorage_DevRandomizeCustomizationCmd
==============
*/
void LiveStorage_DevRandomizeCustomizationCmd()
{
  ClientCustomizationInfo *v0; 
  __int64 v1; 
  unsigned int randSeed; 

  randSeed = Sys_Milliseconds();
  v0 = s_activeCustomization;
  v1 = 8i64;
  do
  {
    BG_Customization_SetRandomCustomization(v0++, &randSeed);
    --v1;
  }
  while ( v1 );
  s_activeCustomizationDevOverride = 1;
}

/*
==============
LiveStorage_DevSetActiveCustomizationCmd
==============
*/
void LiveStorage_DevSetActiveCustomizationCmd()
{
  unsigned int v0; 
  __int64 v1; 
  const char *v2; 

  if ( Cmd_Argc() >= 3 && (v0 = Cmd_ArgInt(1), v1 = v0, v0 < 8) && (v2 = Cmd_Argv(2)) != NULL && *v2 )
  {
    BG_Customization_SetSpecifiedCustomization(&s_activeCustomization[v1], v2);
    s_activeCustomizationDevOverride = 1;
  }
  else
  {
    Com_PrintError(18, "Usage: setactivecustomization <controller index (0-3)> <model name>\n");
  }
}

/*
==============
LiveStorage_DevUpdateActiveCustomizationCmd
==============
*/
void LiveStorage_DevUpdateActiveCustomizationCmd()
{
  unsigned int v0; 

  if ( Cmd_Argc() < 2 || (v0 = Cmd_ArgInt(1), v0 >= 8) )
  {
    Com_PrintError(18, "Usage: updateactivecustomization <controller index (0-3)>\n");
  }
  else
  {
    s_activeCustomizationDevOverride = 0;
    LiveStorage_UpdateCustomizationModelsFromSquad(v0);
  }
}

/*
==============
LiveStorage_StatResetCmd
==============
*/
void LiveStorage_StatResetCmd()
{
  void *m_ptr; 
  int v1; 
  StatsSource ActiveStatsSource; 
  const DDLDef *def; 
  const DDLDef *Asset; 
  StatsSource v5; 
  Mem_LargeLocal scratchBuff; 
  DDLContext context; 

  Mem_LargeLocal::Mem_LargeLocal(&scratchBuff, 0x1046Cui64, "PersistentStatsBuffer tempBuffer");
  m_ptr = scratchBuff.m_ptr;
  if ( Cmd_Argc() == 1 )
  {
    v1 = Cmd_LocalControllerIndex();
    if ( LiveStorage_DoWeHaveStats(v1) )
    {
      ActiveStatsSource = LiveStorage_GetActiveStatsSource(v1);
      LiveStorage_ResetStats_SetStatsSource(v1, ActiveStatsSource);
      CL_PlayerData_GetDDLBuffer(&context, v1, ActiveStatsSource, STATSGROUP_RANKED);
      def = context.def;
      Asset = Com_DDL_LoadAsset("ddl/mp/resetdata.ddl");
      DDL_ForceConvert(&context, Asset, m_ptr, 66668);
      DDL_ForceConvert(&context, def, m_ptr, 66668);
      LiveStorage_StatsInit(v1, 0, 0, ActiveStatsSource);
      v5 = LiveStorage_GetActiveStatsSource(v1);
      GamerProfile_UpdateProfileFromStats(v1, v5);
      LiveStorage_ResetStats_ClearStatsSource(v1);
      GamerProfile_UpdateProfileAndSaveIfNeeded(v1);
      LiveStorage_SetAllStatsBlobsDirty(v1, ActiveStatsSource, 1);
      LiveStorage_SaveStats(v1);
    }
    else
    {
      Com_PrintError(15, "statsReset: we don't have stats.\n");
    }
  }
  else
  {
    Com_PrintError(15, "statsReset usage: statsReset\n");
  }
  Mem_LargeLocal::~Mem_LargeLocal(&scratchBuff);
}

/*
==============
LiveStorage_StatPrestigeResetCmd
==============
*/
void LiveStorage_StatPrestigeResetCmd()
{
  int v0; 

  if ( Cmd_Argc() == 1 )
  {
    v0 = Cmd_LocalControllerIndex();
    LiveStorage_StatPrestigeReset(v0);
  }
  else
  {
    Com_PrintError(15, "prestigeReset usage: prestigeReset\n");
  }
}

/*
==============
LiveStorage_SetRankedPlayerDataCmd
==============
*/
void LiveStorage_SetRankedPlayerDataCmd()
{
  LiveStorage_SetPlayerDataCmdInternal(STATSGROUP_RANKED);
}

/*
==============
LiveStorage_SetRankedLoadoutsPlayerDataCmd
==============
*/
void LiveStorage_SetRankedLoadoutsPlayerDataCmd()
{
  LiveStorage_SetPlayerDataCmdInternal(STATSGROUP_RANKEDLOADOUTS);
}

/*
==============
LiveStorage_SetPrivateLoadoutsPlayerDataCmd
==============
*/
void LiveStorage_SetPrivateLoadoutsPlayerDataCmd()
{
  LiveStorage_SetPlayerDataCmdInternal(STATSGROUP_PRIVATELOADOUTS);
}

/*
==============
LiveStorage_SetCoopPlayerDataCmd
==============
*/
void LiveStorage_SetCoopPlayerDataCmd()
{
  LiveStorage_SetPlayerDataCmdInternal(STATSGROUP_COOP);
}

/*
==============
LiveStorage_SetCommonPlayerDataCmd
==============
*/
void LiveStorage_SetCommonPlayerDataCmd()
{
  LiveStorage_SetPlayerDataCmdInternal(STATSGROUP_COMMON);
}

/*
==============
LiveStorage_GetRankedPlayerDataCmd
==============
*/
void LiveStorage_GetRankedPlayerDataCmd()
{
  LiveStorage_GetPlayerDataCmdInternal(STATSGROUP_RANKED);
}

/*
==============
LiveStorage_GetRankedLoadoutsPlayerDataCmd
==============
*/
void LiveStorage_GetRankedLoadoutsPlayerDataCmd()
{
  LiveStorage_GetPlayerDataCmdInternal(STATSGROUP_RANKEDLOADOUTS);
}

/*
==============
LiveStorage_GetPrivateLoadoutsPlayerDataCmd
==============
*/
void LiveStorage_GetPrivateLoadoutsPlayerDataCmd()
{
  LiveStorage_GetPlayerDataCmdInternal(STATSGROUP_PRIVATELOADOUTS);
}

/*
==============
LiveStorage_GetCoopPlayerDataCmd
==============
*/
void LiveStorage_GetCoopPlayerDataCmd()
{
  LiveStorage_GetPlayerDataCmdInternal(STATSGROUP_COOP);
}

/*
==============
LiveStorage_GetCommonPlayerDataCmd
==============
*/
void LiveStorage_GetCommonPlayerDataCmd()
{
  LiveStorage_GetPlayerDataCmdInternal(STATSGROUP_COMMON);
}

/*
==============
LiveStorage_DataSetCmd
==============
*/
void LiveStorage_DataSetCmd()
{
  const char *v0; 

  v0 = Cmd_Argv(0);
  Com_PrintWarning(16, "Calling dev only command '%s' instead of stats group specific version, will attempt to use Ranked data.\n", v0);
  LiveStorage_SetPlayerDataCmdInternal(STATSGROUP_RANKED);
}

/*
==============
LiveStorage_DataGetCmd
==============
*/
void LiveStorage_DataGetCmd()
{
  const char *v0; 

  v0 = Cmd_Argv(0);
  Com_PrintWarning(16, "Calling dev only command '%s' instead of stats group specific version, will attempt to use Ranked data.\n", v0);
  LiveStorage_GetPlayerDataCmdInternal(STATSGROUP_RANKED);
}

/*
==============
LiveStorage_DataDumpCmd
==============
*/
void LiveStorage_DataDumpCmd()
{
  int v0; 
  StatsSource ActiveStatsSource; 
  StatsSource v2; 
  StatsSource v3; 
  StatsSource v4; 
  StatsSource v5; 
  StatsSource v6; 
  DDLContext context; 
  DDLContext buffer; 
  DDLContext v9; 
  DDLContext v10; 
  DDLContext v11; 
  DDLContext v12; 

  v0 = Cmd_LocalControllerIndex();
  ActiveStatsSource = LiveStorage_GetActiveStatsSource(v0);
  if ( !CL_PlayerData_GetDDLBuffer(&context, v0, ActiveStatsSource, STATSGROUP_COMMON) )
    goto LABEL_8;
  Com_DDL_WriteAsText(&context, "DDL_DumpCommonData.txt", (const char *)&queryFormat.fmt + 3);
  v2 = LiveStorage_GetActiveStatsSource(v0);
  if ( !CL_PlayerData_GetDDLBuffer(&buffer, v0, v2, STATSGROUP_RANKED) )
    goto LABEL_8;
  Com_DDL_WriteAsText(&buffer, "DDL_DumpMPData.txt", (const char *)&queryFormat.fmt + 3);
  v3 = LiveStorage_GetActiveStatsSource(v0);
  if ( !CL_PlayerData_GetDDLBuffer(&v9, v0, v3, STATSGROUP_COOP) )
    goto LABEL_8;
  Com_DDL_WriteAsText(&v9, "DDL_DumpCPData.txt", (const char *)&queryFormat.fmt + 3);
  v4 = LiveStorage_GetActiveStatsSource(v0);
  if ( CL_PlayerData_GetDDLBuffer(&v10, v0, v4, STATSGROUP_RANKEDLOADOUTS) && (Com_DDL_WriteAsText(&v10, "DDL_DumpRankedLoadouts.txt", (const char *)&queryFormat.fmt + 3), v5 = LiveStorage_GetActiveStatsSource(v0), CL_PlayerData_GetDDLBuffer(&v11, v0, v5, STATSGROUP_PRIVATELOADOUTS)) && (Com_DDL_WriteAsText(&v11, "DDL_DumpPrivateLoadouts.txt", (const char *)&queryFormat.fmt + 3), v6 = LiveStorage_GetActiveStatsSource(v0), CL_PlayerData_GetDDLBuffer(&v12, v0, v6, STATSGROUP_NONGAME)) )
    Com_DDL_WriteAsText(&v12, "DDL_DumpNonGameData.txt", (const char *)&queryFormat.fmt + 3);
  else
LABEL_8:
    Com_Printf(14, "Cannot get data: we have not downloaded player stats\n");
}

/*
==============
LiveStorage_UpdateProfileFromStatsCmd
==============
*/
void LiveStorage_UpdateProfileFromStatsCmd()
{
  int v0; 
  StatsSource ActiveStatsSource; 

  v0 = Cmd_LocalControllerIndex();
  ActiveStatsSource = LiveStorage_GetActiveStatsSource(v0);
  GamerProfile_UpdateProfileFromStats(v0, ActiveStatsSource);
  GamerProfile_UpdateProfileAndSaveIfNeeded(v0);
}

/*
==============
LiveStorage_SetExtinctionTokensCmd
==============
*/
void LiveStorage_SetExtinctionTokensCmd()
{
  int v0; 
  int v1; 
  unsigned int RawHash; 

  if ( Cmd_Argc() == 2 )
  {
    v0 = Cmd_LocalControllerIndex();
    v1 = Cmd_ArgInt(1);
    if ( LiveStorage_DoWeHaveStats(v0) )
    {
      RawHash = j_SL_GetRawHash(scr_const.extinction_tokens);
      CL_PlayerData_SetIntByName(v0, RawHash, v1, STATSGROUP_COOP);
    }
  }
  else
  {
    Com_PrintError(15, "setExtinctionTokens usage: setExtinctionTokens <num>\n");
  }
}

/*
==============
LiveStorage_RankedSetCmd
==============
*/
void LiveStorage_RankedSetCmd()
{
  LiveStorage_PlayerDataSetCmd_Internal(LiveStorage_Ranked_Argc, LiveStorage_RankedArgv, STATSGROUP_RANKED, 0);
}

/*
==============
LiveStorage_RankedLoadoutsSetCmd_Loc
==============
*/
void LiveStorage_RankedLoadoutsSetCmd_Loc()
{
  LiveStorage_PlayerDataSetCmd_Internal(LiveStorage_RankedLoadout_Argc, LiveStorage_RankedLoadoutsArgv, STATSGROUP_RANKEDLOADOUTS, 1);
}

/*
==============
LiveStorage_RankedLoadoutSetCmd
==============
*/
void LiveStorage_RankedLoadoutSetCmd()
{
  LiveStorage_PlayerDataSetCmd_Internal(LiveStorage_RankedLoadout_Argc, LiveStorage_RankedLoadoutsArgv, STATSGROUP_RANKEDLOADOUTS, 0);
}

/*
==============
LiveStorage_PrivateLoadoutSetCmd_Loc
==============
*/
void LiveStorage_PrivateLoadoutSetCmd_Loc()
{
  LiveStorage_PlayerDataSetCmd_Internal(LiveStorage_RankedLoadout_Argc, LiveStorage_PrivateLoadouts_Argv, STATSGROUP_PRIVATELOADOUTS, 1);
}

/*
==============
LiveStorage_PrivateLoadoutSetCmd
==============
*/
void LiveStorage_PrivateLoadoutSetCmd()
{
  LiveStorage_PlayerDataSetCmd_Internal(LiveStorage_RankedLoadout_Argc, LiveStorage_PrivateLoadouts_Argv, STATSGROUP_PRIVATELOADOUTS, 0);
}

/*
==============
LiveStorage_CoopSetCmd
==============
*/
void LiveStorage_CoopSetCmd()
{
  LiveStorage_PlayerDataSetCmd_Internal(LiveStorage_Ranked_Argc, LiveStorage_Coop_Argv, STATSGROUP_COOP, 0);
}

/*
==============
CL_PlayerData_AliensPrestigeReset
==============
*/

void __fastcall CL_PlayerData_AliensPrestigeReset(int controllerIndex, int rank)
{
  LiveStorage_StatAliensPrestigeReset(controllerIndex, rank);
}

/*
==============
CL_PlayerData_ApplyValidationHints
==============
*/
void CL_PlayerData_ApplyValidationHints(int controllerIndex, StatsSource statsSource, StatsGroup statsGroup)
{
  StatsBlobId StatsBlob; 
  StatsSource ActiveStatsSource; 
  unsigned int RawHash; 
  unsigned int v11; 
  unsigned int v12; 
  bool IsStatsBlobStatsReset; 
  unsigned int v14; 
  bool IsStatsBlobPrestigeReset; 
  unsigned int v16; 
  bool IsStatsBlobFirstUpload; 
  unsigned int v18; 
  bool IsStatsBlobFailedUpload; 
  unsigned int v20; 
  bool IsStatsBlobDoubleXPUsed; 
  DDLState fromState; 
  DDLState toState; 
  DDLContext context; 
  DDLState result; 

  fromState.isValid = 0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  fromState.offset = 0;
  toState.isValid = 0;
  *(_OWORD *)&fromState.member = _XMM0;
  toState.offset = 0;
  *(_OWORD *)&toState.member = _XMM0;
  fromState.arrayIndex = -1;
  toState.arrayIndex = -1;
  StatsBlob = Com_PlayerData_GetStatsBlob(statsGroup);
  ActiveStatsSource = LiveStorage_GetActiveStatsSource(controllerIndex);
  CL_PlayerData_GetDDLBuffer(&context, controllerIndex, ActiveStatsSource, statsGroup);
  fromState = *DDL_GetRootState(&result, context.def);
  RawHash = j_SL_GetRawHash(scr_const.validationData);
  if ( !DDL_MoveToNameByHash(&fromState, &fromState, RawHash, NULL) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_player_data.cpp", 107, ASSERT_TYPE_ASSERT, "(DDL_MoveToNameByHash( &validationHintsState, &validationHintsState, SL_GetRawHash( scr_const.validationData ) ))", (const char *)&queryFormat, "DDL_MoveToNameByHash( &validationHintsState, &validationHintsState, SL_GetRawHash( scr_const.validationData ) )", *(_QWORD *)&fromState.isValid, *(_QWORD *)&fromState.arrayIndex, fromState.member, fromState.ddlDef, *(_QWORD *)&toState.isValid, *(_QWORD *)&toState.arrayIndex, toState.member) )
    __debugbreak();
  v11 = j_SL_GetRawHash(scr_const.validationHint);
  if ( !DDL_MoveToNameByHash(&fromState, &fromState, v11, NULL) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_player_data.cpp", 108, ASSERT_TYPE_ASSERT, "(DDL_MoveToNameByHash( &validationHintsState, &validationHintsState, SL_GetRawHash( scr_const.validationHint ) ))", (const char *)&queryFormat, "DDL_MoveToNameByHash( &validationHintsState, &validationHintsState, SL_GetRawHash( scr_const.validationHint ) )") )
    __debugbreak();
  v12 = j_SL_GetRawHash(scr_const.StatsReset);
  if ( !DDL_MoveToNameByHash(&fromState, &toState, v12, NULL) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_player_data.cpp", 110, ASSERT_TYPE_ASSERT, "(DDL_MoveToNameByHash( &validationHintsState, &curState, SL_GetRawHash( scr_const.StatsReset ) ))", (const char *)&queryFormat, "DDL_MoveToNameByHash( &validationHintsState, &curState, SL_GetRawHash( scr_const.StatsReset ) )") )
    __debugbreak();
  IsStatsBlobStatsReset = LiveStorage_IsStatsBlobStatsReset(controllerIndex, statsSource, StatsBlob);
  if ( !DDL_SetBool(&toState, &context, IsStatsBlobStatsReset) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_player_data.cpp", 111, ASSERT_TYPE_ASSERT, "(DDL_SetBool( &curState, &context, LiveStorage_IsStatsBlobStatsReset( controllerIndex, statsSource, statsBlob) ))", (const char *)&queryFormat, "DDL_SetBool( &curState, &context, LiveStorage_IsStatsBlobStatsReset( controllerIndex, statsSource, statsBlob) )") )
    __debugbreak();
  v14 = j_SL_GetRawHash(scr_const.PrestigeReset);
  if ( !DDL_MoveToNameByHash(&fromState, &toState, v14, NULL) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_player_data.cpp", 113, ASSERT_TYPE_ASSERT, "(DDL_MoveToNameByHash( &validationHintsState, &curState, SL_GetRawHash( scr_const.PrestigeReset ) ))", (const char *)&queryFormat, "DDL_MoveToNameByHash( &validationHintsState, &curState, SL_GetRawHash( scr_const.PrestigeReset ) )") )
    __debugbreak();
  IsStatsBlobPrestigeReset = LiveStorage_IsStatsBlobPrestigeReset(controllerIndex, statsSource, StatsBlob);
  if ( !DDL_SetBool(&toState, &context, IsStatsBlobPrestigeReset) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_player_data.cpp", 114, ASSERT_TYPE_ASSERT, "(DDL_SetBool( &curState, &context, LiveStorage_IsStatsBlobPrestigeReset( controllerIndex, statsSource, statsBlob ) ))", (const char *)&queryFormat, "DDL_SetBool( &curState, &context, LiveStorage_IsStatsBlobPrestigeReset( controllerIndex, statsSource, statsBlob ) )") )
    __debugbreak();
  v16 = j_SL_GetRawHash(scr_const.FirstUpload);
  if ( !DDL_MoveToNameByHash(&fromState, &toState, v16, NULL) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_player_data.cpp", 116, ASSERT_TYPE_ASSERT, "(DDL_MoveToNameByHash( &validationHintsState, &curState, SL_GetRawHash( scr_const.FirstUpload ) ))", (const char *)&queryFormat, "DDL_MoveToNameByHash( &validationHintsState, &curState, SL_GetRawHash( scr_const.FirstUpload ) )") )
    __debugbreak();
  IsStatsBlobFirstUpload = LiveStorage_IsStatsBlobFirstUpload(controllerIndex, statsSource, StatsBlob);
  if ( !DDL_SetBool(&toState, &context, IsStatsBlobFirstUpload) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_player_data.cpp", 117, ASSERT_TYPE_ASSERT, "(DDL_SetBool( &curState, &context, LiveStorage_IsStatsBlobFirstUpload( controllerIndex, statsSource, statsBlob ) ))", (const char *)&queryFormat, "DDL_SetBool( &curState, &context, LiveStorage_IsStatsBlobFirstUpload( controllerIndex, statsSource, statsBlob ) )") )
    __debugbreak();
  v18 = j_SL_GetRawHash(scr_const.FailedUpload);
  if ( !DDL_MoveToNameByHash(&fromState, &toState, v18, NULL) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_player_data.cpp", 119, ASSERT_TYPE_ASSERT, "(DDL_MoveToNameByHash( &validationHintsState, &curState, SL_GetRawHash( scr_const.FailedUpload ) ))", (const char *)&queryFormat, "DDL_MoveToNameByHash( &validationHintsState, &curState, SL_GetRawHash( scr_const.FailedUpload ) )") )
    __debugbreak();
  IsStatsBlobFailedUpload = LiveStorage_IsStatsBlobFailedUpload(controllerIndex, statsSource, StatsBlob);
  if ( !DDL_SetBool(&toState, &context, IsStatsBlobFailedUpload) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_player_data.cpp", 120, ASSERT_TYPE_ASSERT, "(DDL_SetBool( &curState, &context, LiveStorage_IsStatsBlobFailedUpload( controllerIndex, statsSource, statsBlob ) ))", (const char *)&queryFormat, "DDL_SetBool( &curState, &context, LiveStorage_IsStatsBlobFailedUpload( controllerIndex, statsSource, statsBlob ) )") )
    __debugbreak();
  v20 = j_SL_GetRawHash(scr_const.DoubleXPUsed);
  if ( !DDL_MoveToNameByHash(&fromState, &toState, v20, NULL) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_player_data.cpp", 122, ASSERT_TYPE_ASSERT, "(DDL_MoveToNameByHash( &validationHintsState, &curState, SL_GetRawHash( scr_const.DoubleXPUsed) ))", (const char *)&queryFormat, "DDL_MoveToNameByHash( &validationHintsState, &curState, SL_GetRawHash( scr_const.DoubleXPUsed) )") )
    __debugbreak();
  IsStatsBlobDoubleXPUsed = LiveStorage_IsStatsBlobDoubleXPUsed(controllerIndex, statsSource, StatsBlob);
  if ( !DDL_SetBool(&toState, &context, IsStatsBlobDoubleXPUsed) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_player_data.cpp", 123, ASSERT_TYPE_ASSERT, "(DDL_SetBool( &curState, &context, LiveStorage_IsStatsBlobDoubleXPUsed( controllerIndex, statsSource, statsBlob ) ))", (const char *)&queryFormat, "DDL_SetBool( &curState, &context, LiveStorage_IsStatsBlobDoubleXPUsed( controllerIndex, statsSource, statsBlob ) )") )
    __debugbreak();
}

/*
==============
CL_PlayerData_CloneLoadouts
==============
*/
void CL_PlayerData_CloneLoadouts(const int controllerIndex, bool clonePrivateLoadouts)
{
  bool v4; 
  int v5; 
  StatsSource ActiveStatsSource; 
  int ArraySize; 
  int v8; 
  int v9; 
  StatsSource v10; 
  int v11; 
  DDLState result; 
  DDLState toState; 
  DDLState v14; 
  DDLState fromState; 
  DDLContext context; 
  DDLContext fromDDLContext; 
  unsigned int path; 
  unsigned int RawHash; 

  fromState.isValid = 0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  fromState.offset = 0;
  v4 = clonePrivateLoadouts;
  *(_OWORD *)&fromState.member = _XMM0;
  toState.isValid = 0;
  v5 = controllerIndex;
  toState.offset = 0;
  *(_OWORD *)&toState.member = _XMM0;
  fromState.arrayIndex = -1;
  toState.arrayIndex = -1;
  ActiveStatsSource = LiveStorage_GetActiveStatsSource(controllerIndex);
  if ( !CL_PlayerData_GetDDLBuffer(&context, v5, ActiveStatsSource, STATSGROUP_RANKEDLOADOUTS) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_player_data.cpp", 1577, ASSERT_TYPE_ASSERT, "(CL_PlayerData_GetDDLBuffer( &rankedLoadoutsBuffer, controllerIndex, LiveStorage_GetActiveStatsSource( controllerIndex ), STATSGROUP_RANKEDLOADOUTS ))", (const char *)&queryFormat, "CL_PlayerData_GetDDLBuffer( &rankedLoadoutsBuffer, controllerIndex, LiveStorage_GetActiveStatsSource( controllerIndex ), STATSGROUP_RANKEDLOADOUTS )") )
    __debugbreak();
  fromState = *DDL_GetRootState(&result, context.def);
  path = j_SL_GetRawHash(scr_const.squadMembers);
  RawHash = j_SL_GetRawHash(scr_const.loadouts);
  if ( !DDL_MoveToPathByHash(&fromState, &toState, 2, &path) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_player_data.cpp", 1584, ASSERT_TYPE_ASSERT, "(DDL_MoveToPathByHash( &rootState, &loadoutsState, 2, navStrings ))", (const char *)&queryFormat, "DDL_MoveToPathByHash( &rootState, &loadoutsState, 2, navStrings )") )
    __debugbreak();
  ArraySize = DDL_StateGetArraySize(&toState);
  if ( ArraySize > 100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_player_data.cpp", 1588, ASSERT_TYPE_ASSERT, "(totalLoadoutCount <= 100)", (const char *)&queryFormat, "totalLoadoutCount <= MAX_TOTAL_LOADOUT_COUNT") )
    __debugbreak();
  v8 = 10;
  v9 = 10;
  if ( ArraySize > 10 )
  {
    do
    {
      __asm { vpxor   xmm0, xmm0, xmm0 }
      v14.isValid = 0;
      v14.offset = 0;
      v14.arrayIndex = -1;
      *(_OWORD *)&v14.member = _XMM0;
      result.isValid = 0;
      result.offset = 0;
      result.arrayIndex = -1;
      *(_OWORD *)&result.member = _XMM0;
      if ( !DDL_MoveToIndex(&toState, &result, v9 % 0xAu) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_player_data.cpp", 1597, ASSERT_TYPE_ASSERT, "(DDL_MoveToIndex( &loadoutsState, &sourceState, sourceIndex ))", (const char *)&queryFormat, "DDL_MoveToIndex( &loadoutsState, &sourceState, sourceIndex )") )
        __debugbreak();
      if ( !DDL_MoveToIndex(&toState, &v14, v9) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_player_data.cpp", 1598, ASSERT_TYPE_ASSERT, "(DDL_MoveToIndex( &loadoutsState, &targetState, loadoutIndex ))", (const char *)&queryFormat, "DDL_MoveToIndex( &loadoutsState, &targetState, loadoutIndex )") )
        __debugbreak();
      if ( !DDL_Copy(&result, &context, &v14, &context) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_player_data.cpp", 1600, ASSERT_TYPE_ASSERT, "(DDL_Copy( &sourceState, &rankedLoadoutsBuffer, &targetState, &rankedLoadoutsBuffer ))", (const char *)&queryFormat, "DDL_Copy( &sourceState, &rankedLoadoutsBuffer, &targetState, &rankedLoadoutsBuffer )") )
        __debugbreak();
      ++v9;
    }
    while ( v9 < ArraySize );
    v5 = controllerIndex;
    v8 = 10;
    v4 = clonePrivateLoadouts;
  }
  if ( v4 )
  {
    v10 = LiveStorage_GetActiveStatsSource(v5);
    if ( !CL_PlayerData_GetDDLBuffer(&fromDDLContext, v5, v10, STATSGROUP_PRIVATELOADOUTS) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_player_data.cpp", 1605, ASSERT_TYPE_ASSERT, "(CL_PlayerData_GetDDLBuffer( &privateLoadoutsBuffer, controllerIndex, LiveStorage_GetActiveStatsSource( controllerIndex ), STATSGROUP_PRIVATELOADOUTS ))", (const char *)&queryFormat, "CL_PlayerData_GetDDLBuffer( &privateLoadoutsBuffer, controllerIndex, LiveStorage_GetActiveStatsSource( controllerIndex ), STATSGROUP_PRIVATELOADOUTS )") )
      __debugbreak();
    fromState = *DDL_GetRootState(&result, fromDDLContext.def);
    if ( !DDL_MoveToPathByHash(&fromState, &toState, 2, &path) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_player_data.cpp", 1612, ASSERT_TYPE_ASSERT, "(DDL_MoveToPathByHash( &rootState, &loadoutsState, 2, navStrings ))", (const char *)&queryFormat, "DDL_MoveToPathByHash( &rootState, &loadoutsState, 2, navStrings )") )
      __debugbreak();
    v11 = DDL_StateGetArraySize(&toState);
    if ( v11 > 100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_player_data.cpp", 1616, ASSERT_TYPE_ASSERT, "(totalLoadoutCount <= 100)", (const char *)&queryFormat, "totalLoadoutCount <= MAX_TOTAL_LOADOUT_COUNT") )
      __debugbreak();
    if ( v11 > 10 )
    {
      do
      {
        __asm { vpxor   xmm0, xmm0, xmm0 }
        result.isValid = 0;
        result.offset = 0;
        result.arrayIndex = -1;
        *(_OWORD *)&result.member = _XMM0;
        v14.isValid = 0;
        v14.offset = 0;
        v14.arrayIndex = -1;
        *(_OWORD *)&v14.member = _XMM0;
        if ( !DDL_MoveToIndex(&toState, &v14, v8 % 0xAu) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_player_data.cpp", 1625, ASSERT_TYPE_ASSERT, "(DDL_MoveToIndex( &loadoutsState, &sourceState, sourceIndex ))", (const char *)&queryFormat, "DDL_MoveToIndex( &loadoutsState, &sourceState, sourceIndex )") )
          __debugbreak();
        if ( !DDL_MoveToIndex(&toState, &result, v8) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_player_data.cpp", 1626, ASSERT_TYPE_ASSERT, "(DDL_MoveToIndex( &loadoutsState, &targetState, loadoutIndex ))", (const char *)&queryFormat, "DDL_MoveToIndex( &loadoutsState, &targetState, loadoutIndex )") )
          __debugbreak();
        if ( !DDL_Copy(&v14, &fromDDLContext, &result, &fromDDLContext) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_player_data.cpp", 1628, ASSERT_TYPE_ASSERT, "(DDL_Copy( &sourceState, &privateLoadoutsBuffer, &targetState, &privateLoadoutsBuffer ))", (const char *)&queryFormat, "DDL_Copy( &sourceState, &privateLoadoutsBuffer, &targetState, &privateLoadoutsBuffer )") )
          __debugbreak();
        ++v8;
      }
      while ( v8 < v11 );
    }
  }
}

/*
==============
CL_PlayerData_GetCPFieldUpgradeRef
==============
*/
const char *CL_PlayerData_GetCPFieldUpgradeRef(const int controllerIndex)
{
  StatsGroup LoadoutStatsGroupForGameMode; 
  StatsSource ActiveStatsSource; 
  DDLContext context; 
  unsigned int navHashes; 
  unsigned int RawHash; 

  if ( LiveStorage_PersistentDataEnabled() && (LoadoutStatsGroupForGameMode = Com_PlayerData_GetLoadoutStatsGroupForGameMode(), (unsigned int)(LoadoutStatsGroupForGameMode - 3) <= 1) && (navHashes = j_SL_GetRawHash(scr_const.squadMembers), RawHash = j_SL_GetRawHash(scr_const.cpFieldUpgrade), ActiveStatsSource = LiveStorage_GetActiveStatsSource(controllerIndex), CL_PlayerData_GetDDLBuffer(&context, controllerIndex, ActiveStatsSource, LoadoutStatsGroupForGameMode)) )
    return Com_PlayerData_GetInternalString(&navHashes, 2, &context, LoadoutStatsGroupForGameMode);
  else
    return (char *)&queryFormat.fmt + 3;
}

/*
==============
CL_PlayerData_GetCPFieldUpgradeRowNum
==============
*/
int CL_PlayerData_GetCPFieldUpgradeRowNum(const int controllerIndex)
{
  StatsGroup LoadoutStatsGroupForGameMode; 
  StatsSource ActiveStatsSource; 
  const char *InternalString; 
  DDLContext context; 
  unsigned int navHashes; 
  unsigned int RawHash; 
  StringTable *tablePtr; 

  if ( !LiveStorage_PersistentDataEnabled() )
    return 0;
  LoadoutStatsGroupForGameMode = Com_PlayerData_GetLoadoutStatsGroupForGameMode();
  if ( (unsigned int)(LoadoutStatsGroupForGameMode - 3) > 1 )
    return 0;
  navHashes = j_SL_GetRawHash(scr_const.squadMembers);
  RawHash = j_SL_GetRawHash(scr_const.cpFieldUpgrade);
  ActiveStatsSource = LiveStorage_GetActiveStatsSource(controllerIndex);
  if ( !CL_PlayerData_GetDDLBuffer(&context, controllerIndex, ActiveStatsSource, LoadoutStatsGroupForGameMode) )
    return 0;
  InternalString = Com_PlayerData_GetInternalString(&navHashes, 2, &context, LoadoutStatsGroupForGameMode);
  if ( !*InternalString )
    return 0;
  StringTable_GetAsset("cp/cp_fieldupgrades.csv", (const StringTable **)&tablePtr);
  return StringTable_LookupRowNumForValue(tablePtr, 1, InternalString);
}

/*
==============
CL_PlayerData_GetClanTag
==============
*/
char *CL_PlayerData_GetClanTag(const int controllerIndex)
{
  scr_string_t clanTagType; 
  StatsSource ActiveStatsSource; 
  unsigned int RawHash; 
  OnlineClansManager *Instance; 
  OnlineClansManager *v8; 
  OnlineClan *ClanById; 
  DDLState state; 
  DDLContext context; 
  unsigned __int64 clanIdOut; 

  clanTagType = scr_const.clanTagType;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&state.member = _XMM0;
  state.isValid = 0;
  state.offset = 0;
  state.arrayIndex = -1;
  ActiveStatsSource = LiveStorage_GetActiveStatsSource(controllerIndex);
  if ( CL_PlayerData_GetDDLBuffer(&context, controllerIndex, ActiveStatsSource, STATSGROUP_COMMON) )
  {
    LiveStorage_InitializeDDLStateForStatsGroup(context.def, &state, STATSGROUP_COMMON);
    RawHash = j_SL_GetRawHash(clanTagType);
    DDL_MoveToNameByHash(&state, &state, RawHash, NULL);
    if ( DDL_GetByte(&state, &context) == 2 )
    {
      Instance = OnlineClansManager::GetInstance();
      if ( OnlineClansManager::GetActiveClan(Instance, controllerIndex, &clanIdOut) )
      {
        v8 = OnlineClansManager::GetInstance();
        ClanById = OnlineClansManager::GetClanById(v8, controllerIndex, clanIdOut);
        if ( ClanById )
          return ClanById->m_clanTag;
      }
      return (char *)&queryFormat.fmt + 3;
    }
  }
  if ( LiveAntiCheat_FeatureIsBanned(17) )
    return (char *)&queryFormat.fmt + 3;
  return (char *)PlayerDataGetStringByName(controllerIndex, (const scr_string_t)scr_const.clanTag, STATSGROUP_COMMON);
}

/*
==============
CL_PlayerData_GetClanTagType
==============
*/
unsigned __int8 CL_PlayerData_GetClanTagType(const int controllerIndex)
{
  scr_string_t clanTagType; 
  StatsSource ActiveStatsSource; 
  unsigned __int8 result; 
  unsigned int RawHash; 
  DDLState state; 
  DDLContext context; 

  clanTagType = scr_const.clanTagType;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&state.member = _XMM0;
  state.isValid = 0;
  state.offset = 0;
  state.arrayIndex = -1;
  ActiveStatsSource = LiveStorage_GetActiveStatsSource(controllerIndex);
  result = CL_PlayerData_GetDDLBuffer(&context, controllerIndex, ActiveStatsSource, STATSGROUP_COMMON);
  if ( result )
  {
    LiveStorage_InitializeDDLStateForStatsGroup(context.def, &state, STATSGROUP_COMMON);
    RawHash = j_SL_GetRawHash(clanTagType);
    DDL_MoveToNameByHash(&state, &state, RawHash, NULL);
    return DDL_GetByte(&state, &context);
  }
  return result;
}

/*
==============
CL_PlayerData_GetCurrency
==============
*/
int CL_PlayerData_GetCurrency(const int controllerIndex)
{
  StatsSource ActiveStatsSource; 
  DDLContext context; 
  unsigned int navHashes; 
  unsigned int RawHash; 

  if ( LiveStorage_PersistentDataEnabled() && (navHashes = j_SL_GetRawHash(scr_const.coopCareerStats), RawHash = j_SL_GetRawHash(scr_const.currency), ActiveStatsSource = LiveStorage_GetActiveStatsSource(controllerIndex), CL_PlayerData_GetDDLBuffer(&context, controllerIndex, ActiveStatsSource, STATSGROUP_COOP)) )
    return Com_PlayerData_GetInternalInt(&navHashes, 2, &context, STATSGROUP_COOP);
  else
    return 0;
}

/*
==============
CL_PlayerData_GetCustomClanTag
==============
*/
const char *CL_PlayerData_GetCustomClanTag(const int controllerIndex)
{
  if ( LiveAntiCheat_FeatureIsBanned(17) )
    return (char *)&queryFormat.fmt + 3;
  else
    return PlayerDataGetStringByName(controllerIndex, (const scr_string_t)scr_const.clanTag, STATSGROUP_COMMON);
}

/*
==============
CL_PlayerData_GetCustomization
==============
*/
void CL_PlayerData_GetCustomization(const int controllerIndex, ClientCustomizationInfo *outInfo)
{
  __int64 v2; 

  v2 = controllerIndex;
  if ( !outInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_player_data.cpp", 971, ASSERT_TYPE_ASSERT, "(outInfo)", (const char *)&queryFormat, "outInfo") )
    __debugbreak();
  if ( LiveStorage_PersistentDataEnabled() )
  {
    LiveStorage_UpdateCustomizationModelsFromSquad(v2);
    *(_OWORD *)outInfo->modelIndex = *(_OWORD *)s_activeCustomization[v2].modelIndex;
    *(double *)&outInfo->modelIndexMLG[1] = *(double *)&s_activeCustomization[v2].modelIndexMLG[1];
  }
  else
  {
    *(_QWORD *)outInfo->modelIndex = 0i64;
    *(_QWORD *)&outInfo->modelIndex[2] = 0i64;
    *(_QWORD *)&outInfo->modelIndexMLG[1] = 0i64;
  }
}

/*
==============
CL_PlayerData_GetCustomizationBackground
==============
*/
__int64 CL_PlayerData_GetCustomizationBackground(const int controllerIndex)
{
  unsigned int v2; 
  StatsSource ActiveStatsSource; 
  DDLContext context; 
  unsigned int navHashes; 
  int v7; 

  v2 = 0;
  navHashes = j_SL_GetRawHash(scr_const.customization_background);
  v7 = 0;
  if ( !LiveStorage_PersistentDataEnabled() )
    return 0i64;
  ActiveStatsSource = LiveStorage_GetActiveStatsSource(controllerIndex);
  if ( CL_PlayerData_GetDDLBuffer(&context, controllerIndex, ActiveStatsSource, STATSGROUP_NONGAME) )
    return (unsigned int)Com_PlayerData_GetInternalInt(&navHashes, 2, &context, STATSGROUP_NONGAME);
  return v2;
}

/*
==============
CL_PlayerData_GetCustomizationForMPPrivate
==============
*/
void CL_PlayerData_GetCustomizationForMPPrivate(const int controllerIndex, bool *outSelectedOperatorIndex, CustomizationModels *outInfoWest, CustomizationModels *outInfoEast)
{
  StatsSource ActiveStatsSource; 
  DDLState state; 
  DDLContext context; 
  DDLState v13; 
  DDLContext v14; 

  if ( !outInfoWest && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_player_data.cpp", 1200, ASSERT_TYPE_ASSERT, "(outInfoWest)", (const char *)&queryFormat, "outInfoWest") )
    __debugbreak();
  if ( !outInfoEast && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_player_data.cpp", 1201, ASSERT_TYPE_ASSERT, "(outInfoEast)", (const char *)&queryFormat, "outInfoEast") )
    __debugbreak();
  if ( LiveStorage_PersistentDataEnabled() )
  {
    __asm { vpxor   xmm0, xmm0, xmm0 }
    *(_OWORD *)&state.member = _XMM0;
    state.isValid = 0;
    state.offset = 0;
    state.arrayIndex = -1;
    if ( !s_activeCustomizationDevOverride )
    {
      ActiveStatsSource = LiveStorage_GetActiveStatsSource(controllerIndex);
      if ( CL_PlayerData_GetDDLBuffer(&context, controllerIndex, ActiveStatsSource, STATSGROUP_PRIVATELOADOUTS) )
      {
        LiveStorage_InitializeDDLStateForStatsGroup(context.def, &state, STATSGROUP_PRIVATELOADOUTS);
        v13 = state;
        v14 = context;
        CL_PlayerData_GetCustomizationFromLoadouts(controllerIndex, outSelectedOperatorIndex, outInfoWest, outInfoEast, &v14, &v13);
      }
      else
      {
        Com_Printf(16, "LiveStorage_UpdateCustomizationModelsFromSquad: Can't get persistent data for controller %d\n", (unsigned int)controllerIndex);
      }
    }
  }
  else
  {
    *(_QWORD *)&outInfoWest->headModelIndex = 0i64;
    outInfoWest->executionId = 0;
    *(_QWORD *)&outInfoEast->headModelIndex = 0i64;
    outInfoEast->executionId = 0;
  }
}

/*
==============
CL_PlayerData_GetCustomizationForMPPublic
==============
*/
void CL_PlayerData_GetCustomizationForMPPublic(const int controllerIndex, bool *outSelectedOperatorIndex, CustomizationModels *outInfoWest, CustomizationModels *outInfoEast)
{
  StatsSource ActiveStatsSource; 
  DDLState state; 
  DDLContext context; 
  DDLState v13; 
  DDLContext v14; 

  if ( !outInfoWest && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_player_data.cpp", 1235, ASSERT_TYPE_ASSERT, "(outInfoWest)", (const char *)&queryFormat, "outInfoWest") )
    __debugbreak();
  if ( !outInfoEast && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_player_data.cpp", 1236, ASSERT_TYPE_ASSERT, "(outInfoEast)", (const char *)&queryFormat, "outInfoEast") )
    __debugbreak();
  if ( LiveStorage_PersistentDataEnabled() )
  {
    __asm { vpxor   xmm0, xmm0, xmm0 }
    *(_OWORD *)&state.member = _XMM0;
    state.isValid = 0;
    state.offset = 0;
    state.arrayIndex = -1;
    if ( !s_activeCustomizationDevOverride )
    {
      ActiveStatsSource = LiveStorage_GetActiveStatsSource(controllerIndex);
      if ( CL_PlayerData_GetDDLBuffer(&context, controllerIndex, ActiveStatsSource, STATSGROUP_RANKEDLOADOUTS) )
      {
        LiveStorage_InitializeDDLStateForStatsGroup(context.def, &state, STATSGROUP_RANKEDLOADOUTS);
        v13 = state;
        v14 = context;
        CL_PlayerData_GetCustomizationFromLoadouts(controllerIndex, outSelectedOperatorIndex, outInfoWest, outInfoEast, &v14, &v13);
      }
      else
      {
        Com_Printf(16, "LiveStorage_UpdateCustomizationModelsFromSquad: Can't get persistent data for controller %d\n", (unsigned int)controllerIndex);
      }
    }
  }
  else
  {
    *(_QWORD *)&outInfoWest->headModelIndex = 0i64;
    outInfoWest->executionId = 0;
    *(_QWORD *)&outInfoEast->headModelIndex = 0i64;
    outInfoEast->executionId = 0;
  }
}

/*
==============
CL_PlayerData_GetCustomizationFromLoadouts
==============
*/
void CL_PlayerData_GetCustomizationFromLoadouts(const int controllerIndex, bool *outSelectedOperatorIndex, CustomizationModels *outInfoWest, CustomizationModels *outInfoEast, DDLContext *buffer, DDLState *activeSquadState)
{
  unsigned int RawHash; 
  unsigned int v12; 
  unsigned int v13; 
  unsigned int v14; 
  unsigned int EnumHash; 
  unsigned int v16; 
  int Int; 
  unsigned int v18; 
  unsigned int v19; 
  const char *v20; 
  int v21; 
  int v22; 
  const char *ColumnValueForRow; 
  const char *v24; 
  int v25; 
  const char *v26; 
  int v27; 
  const char *v28; 
  int v29; 
  unsigned int v30; 
  unsigned int v31; 
  int v32; 
  unsigned int v33; 
  unsigned int v34; 
  const char *v35; 
  int v36; 
  int v37; 
  const char *v38; 
  const char *v39; 
  int v40; 
  const char *v41; 
  int v42; 
  const char *v43; 
  StringTable *tablePtr; 
  StringTable *table; 
  StringTable *v46; 
  DDLState state; 
  DDLState toState; 
  DDLState v49; 
  DDLState v50; 

  toState.isValid = 0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  toState.offset = 0;
  v50.isValid = 0;
  v50.offset = 0;
  *(_OWORD *)&toState.member = _XMM0;
  *(_OWORD *)&v50.member = _XMM0;
  state.isValid = 0;
  state.offset = 0;
  *(_OWORD *)&state.member = _XMM0;
  v49.isValid = 0;
  v49.offset = 0;
  *(_OWORD *)&v49.member = _XMM0;
  toState.arrayIndex = -1;
  v50.arrayIndex = -1;
  state.arrayIndex = -1;
  v49.arrayIndex = -1;
  StringTable_GetAsset("operatorSkins.csv", (const StringTable **)&tablePtr);
  StringTable_GetAsset("mp/cac/heads.csv", (const StringTable **)&v46);
  StringTable_GetAsset("mp/cac/bodies.csv", (const StringTable **)&table);
  if ( tablePtr )
  {
    RawHash = j_SL_GetRawHash(scr_const.customizationSetup);
    if ( !DDL_MoveToNameByHash(activeSquadState, &toState, RawHash, NULL) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_player_data.cpp", 1113, ASSERT_TYPE_ASSERT, "(DDL_MoveToNameByHash( &activeSquadState, &operatorsState, SL_GetRawHash( scr_const.customizationSetup ) ))", (const char *)&queryFormat, "DDL_MoveToNameByHash( &activeSquadState, &operatorsState, SL_GetRawHash( scr_const.customizationSetup ) )") )
      __debugbreak();
    v12 = j_SL_GetRawHash(scr_const.selectedOperatorIndex);
    if ( !DDL_MoveToNameByHash(&toState, &state, v12, NULL) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_player_data.cpp", 1115, ASSERT_TYPE_ASSERT, "(DDL_MoveToNameByHash( &operatorsState, &currentState, SL_GetRawHash( scr_const.selectedOperatorIndex ) ))", (const char *)&queryFormat, "DDL_MoveToNameByHash( &operatorsState, &currentState, SL_GetRawHash( scr_const.selectedOperatorIndex ) )") )
      __debugbreak();
    *outSelectedOperatorIndex = DDL_GetBool(&state, buffer);
    v13 = j_SL_GetRawHash(scr_const.operatorCustomization);
    if ( !DDL_MoveToNameByHash(&toState, &v50, v13, NULL) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_player_data.cpp", 1118, ASSERT_TYPE_ASSERT, "(DDL_MoveToNameByHash( &operatorsState, &operatorCustomizationState, SL_GetRawHash( scr_const.operatorCustomization ) ))", (const char *)&queryFormat, "DDL_MoveToNameByHash( &operatorsState, &operatorCustomizationState, SL_GetRawHash( scr_const.operatorCustomization ) )") )
      __debugbreak();
    v14 = j_SL_GetRawHash(scr_const.operators);
    if ( !DDL_MoveToNameByHash(&toState, &toState, v14, NULL) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_player_data.cpp", 1119, ASSERT_TYPE_ASSERT, "(DDL_MoveToNameByHash( &operatorsState, &operatorsState, SL_GetRawHash( scr_const.operators ) ))", (const char *)&queryFormat, "DDL_MoveToNameByHash( &operatorsState, &operatorsState, SL_GetRawHash( scr_const.operators ) )") )
      __debugbreak();
    if ( !DDL_MoveToIndex(&toState, &state, 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_player_data.cpp", 1123, ASSERT_TYPE_ASSERT, "(DDL_MoveToIndex( &operatorsState, &currentState, 0 ))", (const char *)&queryFormat, "DDL_MoveToIndex( &operatorsState, &currentState, 0 )") )
      __debugbreak();
    EnumHash = DDL_GetEnumHash(&state, buffer);
    if ( !DDL_MoveToNameByHash(&v50, &v49, EnumHash, NULL) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_player_data.cpp", 1126, ASSERT_TYPE_ASSERT, "(DDL_MoveToNameByHash( &operatorCustomizationState, &customizationState, operatorNameHash ))", (const char *)&queryFormat, "DDL_MoveToNameByHash( &operatorCustomizationState, &customizationState, operatorNameHash )") )
      __debugbreak();
    v16 = j_SL_GetRawHash(scr_const.execution);
    if ( !DDL_MoveToNameByHash(&v49, &state, v16, NULL) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_player_data.cpp", 1128, ASSERT_TYPE_ASSERT, "(DDL_MoveToNameByHash( &customizationState, &currentState, SL_GetRawHash( scr_const.execution ) ))", (const char *)&queryFormat, "DDL_MoveToNameByHash( &customizationState, &currentState, SL_GetRawHash( scr_const.execution ) )") )
      __debugbreak();
    Int = DDL_GetInt(&state, buffer);
    v18 = j_SL_GetRawHash(scr_const.skin);
    if ( !DDL_MoveToNameByHash(&v49, &state, v18, NULL) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_player_data.cpp", 1131, ASSERT_TYPE_ASSERT, "(DDL_MoveToNameByHash( &customizationState, &currentState, SL_GetRawHash( scr_const.skin ) ))", (const char *)&queryFormat, "DDL_MoveToNameByHash( &customizationState, &currentState, SL_GetRawHash( scr_const.skin ) )") )
      __debugbreak();
    v19 = DDL_GetInt(&state, buffer);
    v20 = j_va("%d", v19);
    v21 = StringTable_LookupRowNumForValue(tablePtr, 0, v20);
    v22 = v21;
    if ( v21 >= 0 )
    {
      ColumnValueForRow = StringTable_GetColumnValueForRow(tablePtr, v21, 4);
      v24 = StringTable_GetColumnValueForRow(tablePtr, v22, 5);
      v25 = StringTable_LookupRowNumForValue(table, 1, ColumnValueForRow);
      v26 = StringTable_GetColumnValueForRow(table, v25, 0);
      LODWORD(ColumnValueForRow) = atoi(v26);
      v27 = StringTable_LookupRowNumForValue(v46, 1, v24);
      v28 = StringTable_GetColumnValueForRow(v46, v27, 0);
      v29 = atoi(v28);
      outInfoWest->bodyModelIndex = (int)ColumnValueForRow;
      outInfoWest->headModelIndex = v29;
      outInfoWest->executionId = Int;
      if ( !DDL_MoveToIndex(&toState, &state, 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_player_data.cpp", 1161, ASSERT_TYPE_ASSERT, "(DDL_MoveToIndex( &operatorsState, &currentState, 1 ))", (const char *)&queryFormat, "DDL_MoveToIndex( &operatorsState, &currentState, 1 )") )
        __debugbreak();
      v30 = DDL_GetEnumHash(&state, buffer);
      if ( !DDL_MoveToNameByHash(&v50, &v49, v30, NULL) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_player_data.cpp", 1164, ASSERT_TYPE_ASSERT, "(DDL_MoveToNameByHash( &operatorCustomizationState, &customizationState, operatorNameHash ))", (const char *)&queryFormat, "DDL_MoveToNameByHash( &operatorCustomizationState, &customizationState, operatorNameHash )") )
        __debugbreak();
      v31 = j_SL_GetRawHash(scr_const.execution);
      if ( !DDL_MoveToNameByHash(&v49, &state, v31, NULL) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_player_data.cpp", 1166, ASSERT_TYPE_ASSERT, "(DDL_MoveToNameByHash( &customizationState, &currentState, SL_GetRawHash( scr_const.execution ) ))", (const char *)&queryFormat, "DDL_MoveToNameByHash( &customizationState, &currentState, SL_GetRawHash( scr_const.execution ) )") )
        __debugbreak();
      v32 = DDL_GetInt(&state, buffer);
      v33 = j_SL_GetRawHash(scr_const.skin);
      if ( !DDL_MoveToNameByHash(&v49, &state, v33, NULL) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_player_data.cpp", 1169, ASSERT_TYPE_ASSERT, "(DDL_MoveToNameByHash( &customizationState, &currentState, SL_GetRawHash( scr_const.skin ) ))", (const char *)&queryFormat, "DDL_MoveToNameByHash( &customizationState, &currentState, SL_GetRawHash( scr_const.skin ) )") )
        __debugbreak();
      v34 = DDL_GetInt(&state, buffer);
      v35 = j_va("%d", v34);
      v36 = StringTable_LookupRowNumForValue(tablePtr, 0, v35);
      v37 = v36;
      if ( v36 >= 0 )
      {
        v38 = StringTable_GetColumnValueForRow(tablePtr, v36, 4);
        v39 = StringTable_GetColumnValueForRow(tablePtr, v37, 5);
        v40 = StringTable_LookupRowNumForValue(table, 1, v38);
        v41 = StringTable_GetColumnValueForRow(table, v40, 0);
        LODWORD(v38) = atoi(v41);
        v42 = StringTable_LookupRowNumForValue(v46, 1, v39);
        v43 = StringTable_GetColumnValueForRow(v46, v42, 0);
        outInfoEast->headModelIndex = atoi(v43);
        outInfoEast->bodyModelIndex = (int)v38;
        outInfoEast->executionId = v32;
      }
    }
  }
}

/*
==============
CL_PlayerData_GetCustomizationPatch
==============
*/
__int64 CL_PlayerData_GetCustomizationPatch(const int controllerIndex)
{
  unsigned int v2; 
  StatsSource ActiveStatsSource; 
  DDLContext context; 
  unsigned int navHashes; 
  int v7; 

  v2 = 0;
  navHashes = j_SL_GetRawHash(scr_const.customization_patch);
  v7 = 0;
  if ( !LiveStorage_PersistentDataEnabled() )
    return 0i64;
  ActiveStatsSource = LiveStorage_GetActiveStatsSource(controllerIndex);
  if ( CL_PlayerData_GetDDLBuffer(&context, controllerIndex, ActiveStatsSource, STATSGROUP_NONGAME) )
    return (unsigned int)Com_PlayerData_GetInternalInt(&navHashes, 2, &context, STATSGROUP_NONGAME);
  return v2;
}

/*
==============
CL_PlayerData_GetCustomizationWeaponSetup
==============
*/
void CL_PlayerData_GetCustomizationWeaponSetup(const int controllerIndex, UIWeaponSetupDef *setup)
{
  unsigned int v5; 
  StatsGroup LoadoutStatsGroupForGameMode; 
  StatsSource ActiveStatsSource; 
  const DDLDef *DefForStatsGroup; 
  unsigned int RawHash; 
  int Int; 
  unsigned int v13; 
  unsigned int v15; 
  unsigned int v16; 
  int ArraySize; 
  unsigned int v19; 
  unsigned int *attachEnum; 
  unsigned int v21; 
  unsigned int v22; 
  DDLState toState; 
  DDLState state; 
  DDLState fromState; 
  DDLState v26; 
  DDLState v27; 
  DDLContext context; 
  unsigned int path[4]; 

  if ( !setup && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_player_data.cpp", 987, ASSERT_TYPE_ASSERT, "(setup)", (const char *)&queryFormat, "setup") )
    __debugbreak();
  memset_0(setup, 0, sizeof(UIWeaponSetupDef));
  if ( LiveStorage_PersistentDataEnabled() )
  {
    v5 = 0;
    __asm { vpxor   xmm0, xmm0, xmm0 }
    state.offset = 0;
    state.isValid = 0;
    state.arrayIndex = -1;
    *(_OWORD *)&state.member = _XMM0;
    LoadoutStatsGroupForGameMode = Com_PlayerData_GetLoadoutStatsGroupForGameMode();
    if ( (unsigned int)(LoadoutStatsGroupForGameMode - 3) <= 1 )
    {
      if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_SLIDE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_player_data.cpp", 999, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::CHARACTER_CUSTOMIZATION_INGAME ))", "%s\n\tThis will not ultimately work, will not be able to resolve indice", "Com_GameMode_SupportsFeature( Com_GameMode_Feature::CHARACTER_CUSTOMIZATION_INGAME )") )
        __debugbreak();
      ActiveStatsSource = LiveStorage_GetActiveStatsSource(controllerIndex);
      if ( CL_PlayerData_GetDDLBuffer(&context, controllerIndex, ActiveStatsSource, LoadoutStatsGroupForGameMode) )
      {
        __asm { vpxor   xmm0, xmm0, xmm0 }
        fromState.isValid = 0;
        *(_OWORD *)&fromState.member = _XMM0;
        fromState.offset = 0;
        fromState.arrayIndex = -1;
        DefForStatsGroup = Com_PlayerData_GetDefForStatsGroup(LoadoutStatsGroupForGameMode);
        LiveStorage_InitializeDDLStateForStatsGroup(DefForStatsGroup, &state, LoadoutStatsGroupForGameMode);
        RawHash = j_SL_GetRawHash(scr_const.squadMembers);
        if ( DDL_MoveToNameByHash(&state, &state, RawHash, NULL) )
        {
          Int = 0;
          fromState = state;
          v13 = j_SL_GetRawHash(scr_const.ai_loadout);
          DDL_MoveToNameByHash(&fromState, &fromState, v13, NULL);
          if ( DDL_StateIsLeaf(&fromState) )
            Int = DDL_GetInt(&fromState, &context);
          path[0] = j_SL_GetRawHash(scr_const.loadouts);
          path[1] = Int;
          path[2] = j_SL_GetRawHash(scr_const.weaponSetups);
          path[3] = 0;
          if ( DDL_MoveToPathByHash(&state, &state, 4, path) )
          {
            __asm { vpxor   xmm0, xmm0, xmm0 }
            *(_OWORD *)&toState.member = _XMM0;
            toState.isValid = 0;
            toState.offset = 0;
            toState.arrayIndex = -1;
            v15 = j_SL_GetRawHash(scr_const.weapon);
            DDL_MoveToNameByHash(&state, &toState, v15, NULL);
            if ( DDL_StateIsLeaf(&toState) )
              setup->weaponEnum = DDL_GetInt(&toState, &context);
            v16 = j_SL_GetRawHash(scr_const.attachmentSetup);
            if ( !DDL_MoveToNameByHash(&state, &toState, v16, NULL) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_player_data.cpp", 1043, ASSERT_TYPE_ASSERT, "(DDL_MoveToNameByHash( &activeSquadState, &tmpState, SL_GetRawHash( scr_const.attachmentSetup ) ))", (const char *)&queryFormat, "DDL_MoveToNameByHash( &activeSquadState, &tmpState, SL_GetRawHash( scr_const.attachmentSetup ) )", *(_QWORD *)&toState.isValid, *(_QWORD *)&toState.arrayIndex, toState.member, toState.ddlDef) )
              __debugbreak();
            if ( !DDL_StateIsLeaf(&toState) )
            {
              __asm { vpxor   xmm0, xmm0, xmm0 }
              v27.isValid = 0;
              *(_OWORD *)&v27.member = _XMM0;
              *(_OWORD *)&v26.member = _XMM0;
              v27.offset = 0;
              v27.arrayIndex = -1;
              v26.isValid = 0;
              v26.offset = 0;
              v26.arrayIndex = -1;
              ArraySize = DDL_StateGetArraySize(&toState);
              v19 = 29;
              if ( ArraySize < 29 )
                v19 = ArraySize;
              if ( v19 )
              {
                attachEnum = setup->attachEnum;
                do
                {
                  if ( !DDL_MoveToIndex(&toState, &v27, v5) )
                    break;
                  v21 = j_SL_GetRawHash(scr_const.attachment);
                  if ( !DDL_MoveToNameByHash(&v27, &v26, v21, NULL) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_player_data.cpp", 1058, ASSERT_TYPE_ASSERT, "(DDL_MoveToNameByHash( &attachIndexState, &attachState, SL_GetRawHash( scr_const.attachment ) ))", (const char *)&queryFormat, "DDL_MoveToNameByHash( &attachIndexState, &attachState, SL_GetRawHash( scr_const.attachment ) )") )
                    __debugbreak();
                  if ( DDL_StateIsLeaf(&v26) )
                    *attachEnum = DDL_GetInt(&v26, &context);
                  ++v5;
                  ++attachEnum;
                }
                while ( v5 < v19 );
              }
            }
            v22 = j_SL_GetRawHash(scr_const.camo);
            DDL_MoveToNameByHash(&state, &toState, v22, NULL);
            if ( DDL_StateIsLeaf(&toState) )
              setup->camoEnum = DDL_GetInt(&toState, &context);
          }
        }
        else
        {
          Com_PrintWarning(16, "LiveStorage_GetSquadMemberLookup: Couldn't get to the squad member struct.\n");
        }
      }
      else
      {
        Com_Printf(16, "Live_GetCustomizationWeapon: Can't get persistent data for controller %d\n", (unsigned int)controllerIndex);
      }
    }
  }
}

/*
==============
CL_PlayerData_GetDDLBuffer
==============
*/
bool CL_PlayerData_GetDDLBuffer(DDLContext *context, const int controllerIndex, StatsSource statsSource, StatsGroup statsGroup)
{
  __int64 v4; 
  __int64 v6; 
  LocalClientNum_t ClientFromController; 
  const DDLDef *DefForStatsGroup; 
  unsigned __int8 *DemoPlayerDataBuffer; 
  int PlayerDataBufferSize; 
  bool result; 
  StatsBlobId StatsBlob; 
  _DWORD *userData; 

  v4 = controllerIndex;
  v6 = statsSource;
  ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
  if ( CL_Demo_IsPlayingServer(ClientFromController) )
  {
    DefForStatsGroup = Com_PlayerData_GetDefForStatsGroup(statsGroup);
    if ( !DefForStatsGroup && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_player_data.cpp", 221, ASSERT_TYPE_ASSERT, "(def != nullptr)", (const char *)&queryFormat, "def != nullptr") )
      __debugbreak();
    DemoPlayerDataBuffer = LiveStorage_GetDemoPlayerDataBuffer(v4, statsGroup);
    if ( !DemoPlayerDataBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_player_data.cpp", 224, ASSERT_TYPE_ASSERT, "(buffer != nullptr)", (const char *)&queryFormat, "buffer != nullptr") )
      __debugbreak();
    PlayerDataBufferSize = LiveStorage_GetPlayerDataBufferSize(statsGroup);
    return Com_DDL_CreateContext(DemoPlayerDataBuffer, PlayerDataBufferSize, DefForStatsGroup, context, DDLAccessCBForDemo, NULL);
  }
  else
  {
    StatsBlob = Com_PlayerData_GetStatsBlob(statsGroup);
    result = 0;
    if ( StatsBlob != STATS_BLOB_COUNT )
    {
      userData = (_DWORD *)((char *)s_callbackData_0 + 144 * v4 + 72 * v6 + 12 * StatsBlob);
      userData[2] = StatsBlob;
      userData[1] = v6;
      *userData = v4;
      if ( LiveStorage_CreateDDLContext(v4, statsGroup, (const StatsSource)v6, context, DDLAccessCB_0, userData) )
        return 1;
    }
  }
  return result;
}

/*
==============
CL_PlayerData_GetDDLBufferForDemo
==============
*/
bool CL_PlayerData_GetDDLBufferForDemo(DDLContext *context, const int controllerIndex, StatsGroup statsGroup)
{
  const DDLDef *DefForStatsGroup; 
  unsigned __int8 *DemoPlayerDataBuffer; 
  int PlayerDataBufferSize; 

  DefForStatsGroup = Com_PlayerData_GetDefForStatsGroup(statsGroup);
  if ( !DefForStatsGroup && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_player_data.cpp", 221, ASSERT_TYPE_ASSERT, "(def != nullptr)", (const char *)&queryFormat, "def != nullptr") )
    __debugbreak();
  DemoPlayerDataBuffer = LiveStorage_GetDemoPlayerDataBuffer(controllerIndex, statsGroup);
  if ( !DemoPlayerDataBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_player_data.cpp", 224, ASSERT_TYPE_ASSERT, "(buffer != nullptr)", (const char *)&queryFormat, "buffer != nullptr") )
    __debugbreak();
  PlayerDataBufferSize = LiveStorage_GetPlayerDataBufferSize(statsGroup);
  return Com_DDL_CreateContext(DemoPlayerDataBuffer, PlayerDataBufferSize, DefForStatsGroup, context, DDLAccessCBForDemo, NULL);
}

/*
==============
CL_PlayerData_GetFavoriteLoadoutIndex
==============
*/
int CL_PlayerData_GetFavoriteLoadoutIndex(const int controllerIndex)
{
  StatsGroup LoadoutStatsGroupForGameMode; 
  StatsSource ActiveStatsSource; 
  DDLContext context; 
  unsigned int navHashes; 
  unsigned int RawHash; 

  LoadoutStatsGroupForGameMode = Com_PlayerData_GetLoadoutStatsGroupForGameMode();
  if ( (unsigned int)(LoadoutStatsGroupForGameMode - 3) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_player_data.cpp", 813, ASSERT_TYPE_ASSERT, "(statsGroup == StatsGroup::STATSGROUP_RANKEDLOADOUTS || statsGroup == StatsGroup::STATSGROUP_PRIVATELOADOUTS)", (const char *)&queryFormat, "statsGroup == StatsGroup::STATSGROUP_RANKEDLOADOUTS || statsGroup == StatsGroup::STATSGROUP_PRIVATELOADOUTS") )
    __debugbreak();
  navHashes = j_SL_GetRawHash(scr_const.customizationFavorites);
  RawHash = j_SL_GetRawHash(scr_const.favoriteLoadoutIndex);
  if ( LiveStorage_PersistentDataEnabled() && (ActiveStatsSource = LiveStorage_GetActiveStatsSource(controllerIndex), CL_PlayerData_GetDDLBuffer(&context, controllerIndex, ActiveStatsSource, LoadoutStatsGroupForGameMode)) )
    return Com_PlayerData_GetInternalInt(&navHashes, 2, &context, LoadoutStatsGroupForGameMode);
  else
    return 0;
}

/*
==============
CL_PlayerData_GetInt
==============
*/
int CL_PlayerData_GetInt(const int controllerIndex, const unsigned int *navHashes, int navHashCount, const StatsGroup statsGroup)
{
  StatsSource ActiveStatsSource; 
  DDLContext context; 

  ActiveStatsSource = LiveStorage_GetActiveStatsSource(controllerIndex);
  if ( CL_PlayerData_GetDDLBuffer(&context, controllerIndex, ActiveStatsSource, statsGroup) )
    return Com_PlayerData_GetInternalInt(navHashes, navHashCount, &context, statsGroup);
  else
    return 0;
}

/*
==============
CL_PlayerData_GetIntByName
==============
*/
int CL_PlayerData_GetIntByName(const int controllerIndex, unsigned int hash, const StatsGroup statsGroup)
{
  StatsSource ActiveStatsSource; 
  DDLContext context; 

  ActiveStatsSource = LiveStorage_GetActiveStatsSource(controllerIndex);
  if ( CL_PlayerData_GetDDLBuffer(&context, controllerIndex, ActiveStatsSource, statsGroup) )
    return Com_PlayerData_GetInternalIntByName(hash, &context, statsGroup);
  else
    return 0;
}

/*
==============
CL_PlayerData_GetPlayerCardBackgroundHandle
==============
*/
int CL_PlayerData_GetPlayerCardBackgroundHandle(const int controllerIndex)
{
  StatsGroup v2; 
  unsigned int RawHash; 
  StatsSource ActiveStatsSource; 
  DDLContext context; 
  unsigned int navHashes; 
  unsigned int v8; 

  v2 = STATSGROUP_RANKEDLOADOUTS;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() == LONG )
    v2 = STATSGROUP_COOP;
  RawHash = j_SL_GetRawHash(scr_const.squadMembers);
  if ( LiveStorage_PersistentDataEnabled() && (navHashes = RawHash, v8 = j_SL_GetRawHash(scr_const.background), ActiveStatsSource = LiveStorage_GetActiveStatsSource(controllerIndex), CL_PlayerData_GetDDLBuffer(&context, controllerIndex, ActiveStatsSource, v2)) )
    return Com_PlayerData_GetInternalInt(&navHashes, 2, &context, v2);
  else
    return 0;
}

/*
==============
CL_PlayerData_GetPlayerCardBackgroundHandleForStatsGroup
==============
*/
int CL_PlayerData_GetPlayerCardBackgroundHandleForStatsGroup(const int controllerIndex, const StatsGroup statsGroup)
{
  unsigned int RawHash; 
  StatsSource ActiveStatsSource; 
  DDLContext context; 
  unsigned int navHashes; 
  unsigned int v9; 

  RawHash = j_SL_GetRawHash(scr_const.squadMembers);
  if ( LiveStorage_PersistentDataEnabled() && (navHashes = RawHash, v9 = j_SL_GetRawHash(scr_const.background), ActiveStatsSource = LiveStorage_GetActiveStatsSource(controllerIndex), CL_PlayerData_GetDDLBuffer(&context, controllerIndex, ActiveStatsSource, statsGroup)) )
    return Com_PlayerData_GetInternalInt(&navHashes, 2, &context, statsGroup);
  else
    return 0;
}

/*
==============
CL_PlayerData_GetPlayerCardPatchHandle
==============
*/
int CL_PlayerData_GetPlayerCardPatchHandle(const int controllerIndex)
{
  StatsGroup v2; 
  unsigned int RawHash; 
  StatsSource ActiveStatsSource; 
  DDLContext context; 
  unsigned int navHashes; 
  unsigned int v8; 

  v2 = STATSGROUP_RANKEDLOADOUTS;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() == LONG )
    v2 = STATSGROUP_COOP;
  RawHash = j_SL_GetRawHash(scr_const.squadMembers);
  if ( LiveStorage_PersistentDataEnabled() && (navHashes = RawHash, v8 = j_SL_GetRawHash(scr_const.patch), ActiveStatsSource = LiveStorage_GetActiveStatsSource(controllerIndex), CL_PlayerData_GetDDLBuffer(&context, controllerIndex, ActiveStatsSource, v2)) )
    return Com_PlayerData_GetInternalInt(&navHashes, 2, &context, v2);
  else
    return 0;
}

/*
==============
CL_PlayerData_GetPlayerCardPatchHandleForStatsGroup
==============
*/
int CL_PlayerData_GetPlayerCardPatchHandleForStatsGroup(const int controllerIndex, const StatsGroup statsGroup)
{
  unsigned int RawHash; 
  StatsSource ActiveStatsSource; 
  DDLContext context; 
  unsigned int navHashes; 
  unsigned int v9; 

  RawHash = j_SL_GetRawHash(scr_const.squadMembers);
  if ( LiveStorage_PersistentDataEnabled() && (navHashes = RawHash, v9 = j_SL_GetRawHash(scr_const.patch), ActiveStatsSource = LiveStorage_GetActiveStatsSource(controllerIndex), CL_PlayerData_GetDDLBuffer(&context, controllerIndex, ActiveStatsSource, statsGroup)) )
    return Com_PlayerData_GetInternalInt(&navHashes, 2, &context, statsGroup);
  else
    return 0;
}

/*
==============
CL_PlayerData_GetPlayerCardPatchbackingHandle
==============
*/
int CL_PlayerData_GetPlayerCardPatchbackingHandle(const int controllerIndex)
{
  StatsGroup v2; 
  unsigned int RawHash; 
  StatsSource ActiveStatsSource; 
  DDLContext context; 
  unsigned int navHashes; 
  unsigned int v8; 

  v2 = STATSGROUP_RANKEDLOADOUTS;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() == LONG )
    v2 = STATSGROUP_COOP;
  RawHash = j_SL_GetRawHash(scr_const.squadMembers);
  if ( LiveStorage_PersistentDataEnabled() && (navHashes = RawHash, v8 = j_SL_GetRawHash(scr_const.patchbacking), ActiveStatsSource = LiveStorage_GetActiveStatsSource(controllerIndex), CL_PlayerData_GetDDLBuffer(&context, controllerIndex, ActiveStatsSource, v2)) )
    return Com_PlayerData_GetInternalInt(&navHashes, 2, &context, v2);
  else
    return 0;
}

/*
==============
CL_PlayerData_GetPlayerRole
==============
*/
const char *CL_PlayerData_GetPlayerRole(const int controllerIndex, const int client_num)
{
  StatsSource ActiveStatsSource; 
  DDLContext context; 
  unsigned int navHashes[4]; 

  if ( !LiveStorage_PersistentDataEnabled() )
    return 0i64;
  navHashes[0] = j_SL_GetRawHash(scr_const.eogPlayer);
  navHashes[1] = client_num;
  navHashes[2] = j_SL_GetRawHash(scr_const.playerRole);
  ActiveStatsSource = LiveStorage_GetActiveStatsSource(controllerIndex);
  if ( CL_PlayerData_GetDDLBuffer(&context, controllerIndex, ActiveStatsSource, STATSGROUP_COOP) )
    return Com_PlayerData_GetInternalString(navHashes, 3, &context, STATSGROUP_COOP);
  else
    return (char *)&queryFormat.fmt + 3;
}

/*
==============
CL_PlayerData_GetPrestigeAlien
==============
*/
int CL_PlayerData_GetPrestigeAlien(const int controllerIndex)
{
  StatsSource ActiveStatsSource; 
  DDLContext context; 
  unsigned int navHashes[4]; 

  navHashes[0] = j_SL_GetRawHash(scr_const.progression);
  navHashes[1] = j_SL_GetRawHash(scr_const.playerLevel);
  navHashes[2] = j_SL_GetRawHash(scr_const.prestige);
  if ( LiveStorage_PersistentDataEnabled() && (ActiveStatsSource = LiveStorage_GetActiveStatsSource(controllerIndex), CL_PlayerData_GetDDLBuffer(&context, controllerIndex, ActiveStatsSource, STATSGROUP_COOP)) )
    return Com_PlayerData_GetInternalInt(navHashes, 3, &context, STATSGROUP_COOP);
  else
    return 0;
}

/*
==============
CL_PlayerData_GetPrestigeMP
==============
*/
__int64 CL_PlayerData_GetPrestigeMP(const int controllerIndex)
{
  const dvar_t *v1; 
  int integer; 
  OnlineProgression *Instance; 
  OnlineProgression *v5; 
  int rank; 
  __int64 result; 
  int v8; 

  v1 = DVARINT_current_season;
  if ( !DVARINT_current_season && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "current_season") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  integer = v1->current.integer;
  Instance = OnlineProgression::GetInstance();
  if ( !OnlineProgression::GetSeasonProgression(Instance, controllerIndex, integer)->xp )
    return 0i64;
  v5 = OnlineProgression::GetInstance();
  rank = OnlineProgression::GetSeasonProgression(v5, controllerIndex, integer)->rank;
  result = 100i64;
  v8 = rank + 1;
  if ( v8 < 100 )
    return (unsigned int)v8;
  return result;
}

/*
==============
CL_PlayerData_GetRankAlien
==============
*/
int CL_PlayerData_GetRankAlien(const int controllerIndex)
{
  StatsSource ActiveStatsSource; 
  int InternalInt; 
  DDLContext context; 
  unsigned int navHashes[4]; 

  if ( !LiveStorage_PersistentDataEnabled() )
    return 0;
  navHashes[0] = j_SL_GetRawHash(scr_const.progression);
  navHashes[1] = j_SL_GetRawHash(scr_const.playerLevel);
  navHashes[2] = j_SL_GetRawHash(scr_const.xp);
  if ( LiveStorage_PersistentDataEnabled() && (ActiveStatsSource = LiveStorage_GetActiveStatsSource(controllerIndex), CL_PlayerData_GetDDLBuffer(&context, controllerIndex, ActiveStatsSource, STATSGROUP_COOP)) )
    InternalInt = Com_PlayerData_GetInternalInt(navHashes, 3, &context, STATSGROUP_COOP);
  else
    InternalInt = 0;
  return Com_GetRankForXpAlien(InternalInt);
}

/*
==============
CL_PlayerData_GetRankMP
==============
*/
__int64 CL_PlayerData_GetRankMP(const int controllerIndex)
{
  return LODWORD(OnlineProgression::GetInstance()->m_playerProgression[controllerIndex].rank);
}

/*
==============
CL_PlayerData_GetSquadPrestigeLevel
==============
*/
int CL_PlayerData_GetSquadPrestigeLevel(const int controllerIndex)
{
  StatsSource ActiveStatsSource; 
  DDLContext context; 

  ActiveStatsSource = LiveStorage_GetActiveStatsSource(controllerIndex);
  if ( CL_PlayerData_GetDDLBuffer(&context, controllerIndex, ActiveStatsSource, STATSGROUP_RANKED) )
    return Com_PlayerData_GetPrestigeLevel(&context);
  else
    return -1;
}

/*
==============
CL_PlayerData_GetString
==============
*/
const char *CL_PlayerData_GetString(const int controllerIndex, const unsigned int *navHashes, int navHashCount, const StatsGroup statsGroup)
{
  StatsSource ActiveStatsSource; 
  DDLContext context; 

  ActiveStatsSource = LiveStorage_GetActiveStatsSource(controllerIndex);
  if ( CL_PlayerData_GetDDLBuffer(&context, controllerIndex, ActiveStatsSource, statsGroup) )
    return Com_PlayerData_GetInternalString(navHashes, navHashCount, &context, statsGroup);
  else
    return (char *)&queryFormat.fmt + 3;
}

/*
==============
CL_PlayerData_GetStringByName
==============
*/
const char *CL_PlayerData_GetStringByName(const int controllerIndex, unsigned int hash, const StatsGroup statsGroup)
{
  StatsSource ActiveStatsSource; 
  DDLContext context; 

  ActiveStatsSource = LiveStorage_GetActiveStatsSource(controllerIndex);
  if ( CL_PlayerData_GetDDLBuffer(&context, controllerIndex, ActiveStatsSource, statsGroup) )
    return Com_PlayerData_GetInternalStringByName(hash, &context, statsGroup);
  else
    return (char *)&queryFormat.fmt + 3;
}

/*
==============
CL_PlayerData_GetXpAlien
==============
*/
int CL_PlayerData_GetXpAlien(const int controllerIndex)
{
  StatsSource ActiveStatsSource; 
  DDLContext context; 
  unsigned int navHashes[4]; 

  navHashes[0] = j_SL_GetRawHash(scr_const.progression);
  navHashes[1] = j_SL_GetRawHash(scr_const.playerLevel);
  navHashes[2] = j_SL_GetRawHash(scr_const.xp);
  if ( LiveStorage_PersistentDataEnabled() && (ActiveStatsSource = LiveStorage_GetActiveStatsSource(controllerIndex), CL_PlayerData_GetDDLBuffer(&context, controllerIndex, ActiveStatsSource, STATSGROUP_COOP)) )
    return Com_PlayerData_GetInternalInt(navHashes, 3, &context, STATSGROUP_COOP);
  else
    return 0;
}

/*
==============
CL_PlayerData_GetXpMP
==============
*/
__int64 CL_PlayerData_GetXpMP(const int controllerIndex)
{
  return LODWORD(OnlineProgression::GetInstance()->m_playerProgression[controllerIndex].xp);
}

/*
==============
CL_PlayerData_GetZombieConsumable
==============
*/
int CL_PlayerData_GetZombieConsumable(const int controllerIndex, const int index)
{
  StatsSource ActiveStatsSource; 
  const char *InternalString; 
  int v8; 
  StringTable *tablePtr; 
  DDLContext context; 
  unsigned int navHashes[4]; 

  if ( (unsigned int)index >= 5 )
  {
    v8 = 5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_player_data.cpp", 2193, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( 5 )", "index doesn't index CP_CONSUMABLE_SLOT_COUNT\n\t%i not in [0, %i)", index, v8) )
      __debugbreak();
  }
  if ( !LiveStorage_PersistentDataEnabled() )
    return 0;
  navHashes[0] = j_SL_GetRawHash(scr_const.zombiePlayerLoadout);
  navHashes[1] = j_SL_GetRawHash(scr_const.zombie_consumables);
  navHashes[2] = index;
  ActiveStatsSource = LiveStorage_GetActiveStatsSource(controllerIndex);
  if ( CL_PlayerData_GetDDLBuffer(&context, controllerIndex, ActiveStatsSource, STATSGROUP_COOP) )
    InternalString = Com_PlayerData_GetInternalString(navHashes, 3, &context, STATSGROUP_COOP);
  else
    InternalString = (char *)&queryFormat.fmt + 3;
  StringTable_GetAsset("cp/loot/iw7_zombiefatefortune_loot_master.csv", (const StringTable **)&tablePtr);
  return StringTable_LookupRowNumForValue(tablePtr, 1, InternalString);
}

/*
==============
CL_PlayerData_GetZombieConsumableImageName
==============
*/
bool CL_PlayerData_GetZombieConsumableImageName(const int controllerIndex, const int index, const char **outImageName)
{
  StatsSource ActiveStatsSource; 
  const char *InternalString; 
  int v8; 
  const char *ColumnValueForRow; 
  StringTable *tablePtr; 
  DDLContext context; 
  unsigned int navHashes[4]; 

  if ( (unsigned int)index >= 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_player_data.cpp", 2211, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( 5 )", "index doesn't index CP_CONSUMABLE_SLOT_COUNT\n\t%i not in [0, %i)", index, 5) )
    __debugbreak();
  if ( Com_GameMode_SupportsFeature(WEAPON_SPRINT_LOOP|0x80) && LiveStorage_PersistentDataEnabled() )
  {
    navHashes[0] = j_SL_GetRawHash(scr_const.zombiePlayerLoadout);
    navHashes[1] = j_SL_GetRawHash(scr_const.zombie_consumables);
    navHashes[2] = index;
    ActiveStatsSource = LiveStorage_GetActiveStatsSource(controllerIndex);
    if ( CL_PlayerData_GetDDLBuffer(&context, controllerIndex, ActiveStatsSource, STATSGROUP_COOP) )
      InternalString = Com_PlayerData_GetInternalString(navHashes, 3, &context, STATSGROUP_COOP);
    else
      InternalString = (char *)&queryFormat.fmt + 3;
    StringTable_GetAsset("cp/loot/iw7_zombiefatefortune_loot_master.csv", (const StringTable **)&tablePtr);
    v8 = StringTable_LookupRowNumForValue(tablePtr, 1, InternalString);
    ColumnValueForRow = StringTable_GetColumnValueForRow(tablePtr, v8, 10);
    if ( !ColumnValueForRow && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_player_data.cpp", 2223, ASSERT_TYPE_ASSERT, "(imageName)", (const char *)&queryFormat, "imageName") )
      __debugbreak();
    *outImageName = ColumnValueForRow;
    return *ColumnValueForRow != 0;
  }
  else
  {
    *outImageName = NULL;
    return 0;
  }
}

/*
==============
CL_PlayerData_InitCustomization
==============
*/
void CL_PlayerData_InitCustomization(void)
{
  ClientCustomizationInfo *v0; 
  __int64 v1; 
  unsigned int randSeed; 

  randSeed = Sys_Milliseconds();
  v0 = s_activeCustomization;
  v1 = 8i64;
  do
  {
    BG_Customization_SetRandomCustomization(v0++, &randSeed);
    --v1;
  }
  while ( v1 );
  s_activeCustomizationDevOverride = 0;
}

/*
==============
CL_PlayerData_InitializeNewLoadoutSlots
==============
*/
void CL_PlayerData_InitializeNewLoadoutSlots(const int controllerIndex)
{
  StatsSource ActiveStatsSource; 
  const char *v5; 
  __int64 v6; 
  const char *Enum; 
  signed __int64 v8; 
  char v9; 
  __int64 v10; 
  char v11; 
  const char *v12; 
  DDLState fromState; 
  DDLState toState; 
  DDLContext context; 
  DDLState result; 
  unsigned int path[6]; 

  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&fromState.member = _XMM0;
  *(_OWORD *)&toState.member = _XMM0;
  fromState.isValid = 0;
  fromState.offset = 0;
  fromState.arrayIndex = -1;
  toState.isValid = 0;
  toState.offset = 0;
  toState.arrayIndex = -1;
  ActiveStatsSource = LiveStorage_GetActiveStatsSource(controllerIndex);
  if ( !CL_PlayerData_GetDDLBuffer(&context, controllerIndex, ActiveStatsSource, STATSGROUP_PRIVATELOADOUTS) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_player_data.cpp", 1641, ASSERT_TYPE_ASSERT, "(CL_PlayerData_GetDDLBuffer( &privateLoadoutsContext, controllerIndex, LiveStorage_GetActiveStatsSource( controllerIndex ), STATSGROUP_PRIVATELOADOUTS ))", (const char *)&queryFormat, "CL_PlayerData_GetDDLBuffer( &privateLoadoutsContext, controllerIndex, LiveStorage_GetActiveStatsSource( controllerIndex ), STATSGROUP_PRIVATELOADOUTS )", *(_QWORD *)&fromState.isValid, *(_QWORD *)&fromState.arrayIndex, fromState.member, fromState.ddlDef, *(_QWORD *)&toState.isValid, *(_QWORD *)&toState.arrayIndex, toState.member, toState.ddlDef) )
    __debugbreak();
  fromState = *DDL_GetRootState(&result, context.def);
  path[0] = j_SL_GetRawHash(scr_const.squadMembers);
  path[1] = j_SL_GetRawHash(scr_const.loadouts);
  path[2] = 9;
  path[3] = j_SL_GetRawHash(scr_const.loadoutPerks);
  path[4] = 2;
  if ( DDL_MoveToPathByHash(&fromState, &toState, 5, path) )
  {
    v5 = "specialty_null";
    v6 = 0x7FFFFFFFi64;
    Enum = DDL_GetEnum(&toState, &context);
    if ( !Enum && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0", *(_QWORD *)&fromState.isValid, *(_QWORD *)&fromState.arrayIndex, fromState.member, fromState.ddlDef) )
      __debugbreak();
    v8 = Enum - "specialty_null";
    do
    {
      v9 = v5[v8];
      v10 = v6;
      v11 = *v5++;
      --v6;
      if ( !v10 )
        break;
      if ( v9 != v11 )
        return;
    }
    while ( v9 );
    if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.h", 552, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
      __debugbreak();
    Cmd_TokenizeString("exec mp/stats_init_new_loadouts.cfg");
    if ( Cmd_Argc() )
    {
      cmd_args.localClientNum[cmd_args.nesting] = LOCAL_CLIENT_0;
      cmd_args.controllerIndex[cmd_args.nesting] = controllerIndex;
      v12 = Cmd_Argv(0);
      if ( !Cmd_ExecuteCommandFunctions(v12, "exec mp/stats_init_new_loadouts.cfg", &s_cmd_functions) && !Dvar_Command(0) )
        CL_Main_ForwardCommandToServer(LOCAL_CLIENT_0, "exec mp/stats_init_new_loadouts.cfg");
    }
    Cmd_EndTokenizedString();
  }
  else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_player_data.cpp", 1661, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unable to find the expansion loadout slots!") )
  {
    __debugbreak();
  }
}

/*
==============
CL_PlayerData_PrestigeReset
==============
*/

void __fastcall CL_PlayerData_PrestigeReset(int controllerIndex)
{
  LiveStorage_StatPrestigeReset(controllerIndex);
}

/*
==============
CL_PlayerData_RegisterCommands
==============
*/
void CL_PlayerData_RegisterCommands(void)
{
  Cmd_AddClientCommandList(S_CL_PLAYER_DATA_CMD, 0x1Au);
}

/*
==============
CL_PlayerData_ResetCustomClanTagIfInvalid
==============
*/
void CL_PlayerData_ResetCustomClanTagIfInvalid(const int controllerIndex)
{
  const char *StringByName; 

  if ( LiveAntiCheat_FeatureIsBanned(17) )
  {
    StringByName = (char *)&queryFormat.fmt + 3;
  }
  else
  {
    StringByName = PlayerDataGetStringByName(controllerIndex, (const scr_string_t)scr_const.clanTag, STATSGROUP_COMMON);
    if ( !StringByName )
      return;
  }
  if ( !UI_ActivisionClanTagAllowedForGamerTag(controllerIndex, StringByName) || !UI_VerifyString(StringByName, NULL) || ProfanityFilter_IsBadWord(controllerIndex, StringByName) )
    CL_PlayerData_SetClanTag(controllerIndex, (const char *)&queryFormat.fmt + 3);
}

/*
==============
CL_PlayerData_SanitizeClanName
==============
*/
void CL_PlayerData_SanitizeClanName(char *clanName)
{
  char v1; 
  char *v2; 

  if ( clanName )
  {
    v1 = *clanName;
    v2 = clanName;
    if ( *clanName )
    {
      while ( 1 )
      {
        ++clanName;
        if ( v1 == 94 )
          break;
        if ( (unsigned __int8)v1 >= 0x20u )
          goto LABEL_6;
LABEL_7:
        v1 = *clanName;
        if ( !*clanName )
          goto LABEL_8;
      }
      v1 = 32;
LABEL_6:
      *v2++ = v1;
      goto LABEL_7;
    }
LABEL_8:
    *v2 = 0;
  }
}

/*
==============
CL_PlayerData_SanitizeLocalClanName
==============
*/
void CL_PlayerData_SanitizeLocalClanName(const int controllerIndex)
{
  const char *StringByName; 
  char v4; 
  char *v5; 
  char *v6; 
  scr_string_t eliteClanTag; 
  StatsSource ActiveStatsSource; 
  unsigned int RawHash; 
  DDLState state; 
  DDLContext context; 
  char Destination[8]; 

  StringByName = PlayerDataGetStringByName(controllerIndex, (const scr_string_t)scr_const.eliteClanTag, STATSGROUP_COMMON);
  strncpy(Destination, StringByName, 6ui64);
  v4 = Destination[0];
  v5 = Destination;
  v6 = Destination;
  if ( Destination[0] )
  {
    while ( 1 )
    {
      ++v5;
      if ( v4 == 94 )
        break;
      if ( (unsigned __int8)v4 >= 0x20u )
        goto LABEL_5;
LABEL_6:
      v4 = *v5;
      if ( !*v5 )
        goto LABEL_7;
    }
    v4 = 32;
LABEL_5:
    *v6++ = v4;
    goto LABEL_6;
  }
LABEL_7:
  eliteClanTag = scr_const.eliteClanTag;
  *v6 = 0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&state.member = _XMM0;
  state.isValid = 0;
  state.offset = 0;
  state.arrayIndex = -1;
  ActiveStatsSource = LiveStorage_GetActiveStatsSource(controllerIndex);
  if ( CL_PlayerData_GetDDLBuffer(&context, controllerIndex, ActiveStatsSource, STATSGROUP_COMMON) )
  {
    LiveStorage_InitializeDDLStateForStatsGroup(context.def, &state, STATSGROUP_COMMON);
    RawHash = j_SL_GetRawHash(eliteClanTag);
    DDL_MoveToNameByHash(&state, &state, RawHash, NULL);
    DDL_SetString(&state, &context, Destination);
  }
  if ( !UI_ActivisionClanTagAllowedForGamerTag(controllerIndex, Destination) )
    PlayerDataSetStringByName(controllerIndex, (const scr_string_t)scr_const.eliteClanTag, STATSGROUP_COMMON, (const char *)&queryFormat.fmt + 3);
}

/*
==============
CL_PlayerData_SetClanTag
==============
*/
void CL_PlayerData_SetClanTag(const int controllerIndex, const char *clanTagText)
{
  const char *StringByName; 
  char v5; 
  char *v6; 
  char *v7; 
  scr_string_t eliteClanTag; 
  StatsSource ActiveStatsSource; 
  unsigned int RawHash; 
  DDLState state; 
  DDLContext context; 
  char Destination[8]; 

  PlayerDataSetStringByName(controllerIndex, (const scr_string_t)scr_const.clanTag, STATSGROUP_COMMON, clanTagText);
  StringByName = PlayerDataGetStringByName(controllerIndex, (const scr_string_t)scr_const.eliteClanTag, STATSGROUP_COMMON);
  strncpy(Destination, StringByName, 6ui64);
  v5 = Destination[0];
  v6 = Destination;
  v7 = Destination;
  if ( Destination[0] )
  {
    while ( 1 )
    {
      ++v6;
      if ( v5 == 94 )
        break;
      if ( (unsigned __int8)v5 >= 0x20u )
        goto LABEL_5;
LABEL_6:
      v5 = *v6;
      if ( !*v6 )
        goto LABEL_7;
    }
    v5 = 32;
LABEL_5:
    *v7++ = v5;
    goto LABEL_6;
  }
LABEL_7:
  eliteClanTag = scr_const.eliteClanTag;
  *v7 = 0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&state.member = _XMM0;
  state.isValid = 0;
  state.offset = 0;
  state.arrayIndex = -1;
  ActiveStatsSource = LiveStorage_GetActiveStatsSource(controllerIndex);
  if ( CL_PlayerData_GetDDLBuffer(&context, controllerIndex, ActiveStatsSource, STATSGROUP_COMMON) )
  {
    LiveStorage_InitializeDDLStateForStatsGroup(context.def, &state, STATSGROUP_COMMON);
    RawHash = j_SL_GetRawHash(eliteClanTag);
    DDL_MoveToNameByHash(&state, &state, RawHash, NULL);
    DDL_SetString(&state, &context, Destination);
  }
  if ( !UI_ActivisionClanTagAllowedForGamerTag(controllerIndex, Destination) )
    PlayerDataSetStringByName(controllerIndex, (const scr_string_t)scr_const.eliteClanTag, STATSGROUP_COMMON, (const char *)&queryFormat.fmt + 3);
}

/*
==============
CL_PlayerData_SetClanTagType
==============
*/
void CL_PlayerData_SetClanTagType(const int controllerIndex, const int typeValue)
{
  scr_string_t clanTagType; 
  unsigned __int8 v4; 
  StatsSource ActiveStatsSource; 
  unsigned int RawHash; 
  DDLState state; 
  DDLContext context; 

  clanTagType = scr_const.clanTagType;
  v4 = typeValue;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&state.member = _XMM0;
  state.isValid = 0;
  state.offset = 0;
  state.arrayIndex = -1;
  ActiveStatsSource = LiveStorage_GetActiveStatsSource(controllerIndex);
  if ( CL_PlayerData_GetDDLBuffer(&context, controllerIndex, ActiveStatsSource, STATSGROUP_COMMON) )
  {
    LiveStorage_InitializeDDLStateForStatsGroup(context.def, &state, STATSGROUP_COMMON);
    RawHash = j_SL_GetRawHash(clanTagType);
    DDL_MoveToNameByHash(&state, &state, RawHash, NULL);
    DDL_SetByte(&state, &context, v4);
  }
}

/*
==============
CL_PlayerData_SetCustomClanTag
==============
*/
void CL_PlayerData_SetCustomClanTag(const int controllerIndex, const char *clan_tag)
{
  const char *StringByName; 
  char v5; 
  char *v6; 
  char *v7; 
  scr_string_t eliteClanTag; 
  StatsSource ActiveStatsSource; 
  unsigned int RawHash; 
  DDLState state; 
  DDLContext context; 
  char Destination[8]; 

  PlayerDataSetStringByName(controllerIndex, (const scr_string_t)scr_const.clanTag, STATSGROUP_COMMON, clan_tag);
  StringByName = PlayerDataGetStringByName(controllerIndex, (const scr_string_t)scr_const.eliteClanTag, STATSGROUP_COMMON);
  strncpy(Destination, StringByName, 6ui64);
  v5 = Destination[0];
  v6 = Destination;
  v7 = Destination;
  if ( Destination[0] )
  {
    while ( 1 )
    {
      ++v6;
      if ( v5 == 94 )
        break;
      if ( (unsigned __int8)v5 >= 0x20u )
        goto LABEL_5;
LABEL_6:
      v5 = *v6;
      if ( !*v6 )
        goto LABEL_7;
    }
    v5 = 32;
LABEL_5:
    *v7++ = v5;
    goto LABEL_6;
  }
LABEL_7:
  eliteClanTag = scr_const.eliteClanTag;
  *v7 = 0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&state.member = _XMM0;
  state.isValid = 0;
  state.offset = 0;
  state.arrayIndex = -1;
  ActiveStatsSource = LiveStorage_GetActiveStatsSource(controllerIndex);
  if ( CL_PlayerData_GetDDLBuffer(&context, controllerIndex, ActiveStatsSource, STATSGROUP_COMMON) )
  {
    LiveStorage_InitializeDDLStateForStatsGroup(context.def, &state, STATSGROUP_COMMON);
    RawHash = j_SL_GetRawHash(eliteClanTag);
    DDL_MoveToNameByHash(&state, &state, RawHash, NULL);
    DDL_SetString(&state, &context, Destination);
  }
  if ( !UI_ActivisionClanTagAllowedForGamerTag(controllerIndex, Destination) )
    PlayerDataSetStringByName(controllerIndex, (const scr_string_t)scr_const.eliteClanTag, STATSGROUP_COMMON, (const char *)&queryFormat.fmt + 3);
}

/*
==============
CL_PlayerData_SetCustomizationBackground
==============
*/
void CL_PlayerData_SetCustomizationBackground(const int controllerIndex, int background)
{
  StatsSource ActiveStatsSource; 
  int modifiedFlags; 
  DDLContext context; 
  unsigned int navHashes; 
  int v8; 

  navHashes = j_SL_GetRawHash(scr_const.customization_background);
  v8 = 0;
  if ( LiveStorage_PersistentDataEnabled() )
  {
    ActiveStatsSource = LiveStorage_GetActiveStatsSource(controllerIndex);
    if ( !CL_PlayerData_GetDDLBuffer(&context, controllerIndex, ActiveStatsSource, STATSGROUP_NONGAME) )
    {
      modifiedFlags = background;
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1441FC320, 583i64, navHashes, modifiedFlags);
    }
    Com_PlayerData_SetInternalInt(&navHashes, 2, background, &context, NULL, STATSGROUP_NONGAME);
  }
}

/*
==============
CL_PlayerData_SetCustomizationPatch
==============
*/
void CL_PlayerData_SetCustomizationPatch(const int controllerIndex, int background)
{
  StatsSource ActiveStatsSource; 
  int modifiedFlags; 
  DDLContext context; 
  unsigned int navHashes; 
  int v8; 

  navHashes = j_SL_GetRawHash(scr_const.customization_patch);
  v8 = 0;
  if ( LiveStorage_PersistentDataEnabled() )
  {
    ActiveStatsSource = LiveStorage_GetActiveStatsSource(controllerIndex);
    if ( !CL_PlayerData_GetDDLBuffer(&context, controllerIndex, ActiveStatsSource, STATSGROUP_NONGAME) )
    {
      modifiedFlags = background;
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1441FC320, 583i64, navHashes, modifiedFlags);
    }
    Com_PlayerData_SetInternalInt(&navHashes, 2, background, &context, NULL, STATSGROUP_NONGAME);
  }
}

/*
==============
CL_PlayerData_SetInt
==============
*/
void CL_PlayerData_SetInt(const int controllerIndex, const unsigned int *navHashes, int navHashCount, int value, const StatsGroup statsGroup)
{
  StatsSource ActiveStatsSource; 
  int modifiedFlags; 
  DDLContext context; 

  ActiveStatsSource = LiveStorage_GetActiveStatsSource(controllerIndex);
  if ( !CL_PlayerData_GetDDLBuffer(&context, controllerIndex, ActiveStatsSource, statsGroup) )
  {
    modifiedFlags = value;
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1441FC320, 583i64, *navHashes, modifiedFlags);
  }
  Com_PlayerData_SetInternalInt(navHashes, navHashCount, value, &context, NULL, statsGroup);
}

/*
==============
CL_PlayerData_SetIntByName
==============
*/
void CL_PlayerData_SetIntByName(const int controllerIndex, unsigned int hash, int value, const StatsGroup statsGroup)
{
  StatsSource ActiveStatsSource; 
  int modifiedFlags; 
  DDLContext context; 
  unsigned int navHashes; 

  navHashes = hash;
  ActiveStatsSource = LiveStorage_GetActiveStatsSource(controllerIndex);
  if ( !CL_PlayerData_GetDDLBuffer(&context, controllerIndex, ActiveStatsSource, statsGroup) )
  {
    modifiedFlags = value;
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1441FC2C0, 582i64, navHashes, modifiedFlags);
  }
  Com_PlayerData_SetInternalInt(&navHashes, 1, value, &context, NULL, statsGroup);
}

/*
==============
CL_PlayerData_SetMountedDLCBits
==============
*/
void CL_PlayerData_SetMountedDLCBits(const int controllerIndex)
{
  const dvar_t *v1; 
  int v3; 
  unsigned int RawHash; 

  v1 = DVARBOOL_online_is_devmapping;
  if ( !DVARBOOL_online_is_devmapping && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_is_devmapping") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.enabled )
  {
    Com_PrintWarning(16, "NOT setting \"common_mounted_dlc_bits\" in playerdata due to devmap command!\n");
  }
  else if ( LiveStorage_PersistentDataEnabled() && LiveStorage_DoWeHaveStats(controllerIndex) )
  {
    v3 = Content_GetAvailableContentPacks() >> 2;
    RawHash = j_SL_GetRawHash(scr_const.common_mounted_dlc_bits);
    CL_PlayerData_SetIntByName(controllerIndex, RawHash, v3, STATSGROUP_COMMON);
  }
}

/*
==============
CL_PlayerData_SetStatsBlobDirty
==============
*/
void CL_PlayerData_SetStatsBlobDirty(int controllerIndex, unsigned int startByteIndex, unsigned int dataBlockSize)
{
  StatsSource ActiveStatsSource; 
  StatsGroup StatsGroupByByteOffset; 
  StatsBlobId StatsBlob; 
  StatsGroup v9; 
  StatsBlobId v10; 

  ActiveStatsSource = LiveStorage_GetActiveStatsSource(controllerIndex);
  StatsGroupByByteOffset = Com_PlayerData_FindStatsGroupByByteOffset(startByteIndex);
  StatsBlob = Com_PlayerData_GetStatsBlob(StatsGroupByByteOffset);
  v9 = Com_PlayerData_FindStatsGroupByByteOffset(startByteIndex + dataBlockSize - 1);
  v10 = Com_PlayerData_GetStatsBlob(v9);
  LiveStorage_SetStatsBlobDirty(controllerIndex, ActiveStatsSource, StatsBlob, 1);
  LiveStorage_SetStatsBlobDirty(controllerIndex, ActiveStatsSource, v10, 1);
}

/*
==============
CL_PlayerData_UnregisterCommands
==============
*/
void CL_PlayerData_UnregisterCommands(void)
{
  Cmd_RemoveClientCommandList(S_CL_PLAYER_DATA_CMD, 0x1Au);
}

/*
==============
CL_PlayerData_UpdateClanChecksum
==============
*/
void CL_PlayerData_UpdateClanChecksum(const int controllerIndex)
{
  ;
}

/*
==============
CL_PlayerData_UpdateDDLChecksum
==============
*/
void CL_PlayerData_UpdateDDLChecksum(int controllerIndex, StatsSource statsSource, StatsGroup statsGroup)
{
  StatsSource ActiveStatsSource; 
  DDLContext context; 

  Com_PlayerData_GetStatsBlob(statsGroup);
  ActiveStatsSource = LiveStorage_GetActiveStatsSource(controllerIndex);
  CL_PlayerData_GetDDLBuffer(&context, controllerIndex, ActiveStatsSource, statsGroup);
  if ( LiveStorage_IsStatsGroupObfuscated(controllerIndex, statsGroup, statsSource) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_player_data.cpp", 139, ASSERT_TYPE_ASSERT, "(LiveStorage_IsStatsGroupObfuscated( controllerIndex, statsGroup, statsSource ) == false)", (const char *)&queryFormat, "LiveStorage_IsStatsGroupObfuscated( controllerIndex, statsGroup, statsSource ) == false") )
    __debugbreak();
  context.obfuscated = LiveStorage_IsStatsGroupObfuscated(controllerIndex, statsGroup, statsSource);
  DDL_UpdateChecksum(&context);
}

/*
==============
CL_PlayerData_ValidateActivisionClanNames
==============
*/
bool CL_PlayerData_ValidateActivisionClanNames(const int controllerIndex, const char *clanName)
{
  return UI_ActivisionClanTagAllowedForGamerTag(controllerIndex, clanName);
}

/*
==============
CL_PlayerData_ValidateClanChecksum
==============
*/
void CL_PlayerData_ValidateClanChecksum(const int controllerIndex)
{
  ;
}

/*
==============
DDLAccessCBForDemo
==============
*/
void DDLAccessCBForDemo(const DDLContext *ddlContext, unsigned int bitStart, unsigned int bitSize, DDLAccessOp accessOp)
{
  if ( accessOp == DDL_ACCESS_WRITE )
  {
    if ( ddlContext->userData )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_player_data.cpp", 173, ASSERT_TYPE_ASSERT, "(ddlContext->userData == nullptr)", (const char *)&queryFormat, "ddlContext->userData == nullptr") )
        __debugbreak();
    }
    LUI_CoD_PlayerData_TriggerCallbackOnContextWrite(ddlContext, bitStart, bitSize);
  }
}

/*
==============
GetClanTag
==============
*/
const char *GetClanTag(const int controllerIndex)
{
  return PlayerDataGetStringByName(controllerIndex, (const scr_string_t)scr_const.clanTag, STATSGROUP_COMMON);
}

/*
==============
GetEliteClanLevel
==============
*/
int GetEliteClanLevel(const int controllerIndex)
{
  return PlayerDataGetIntByName(controllerIndex, (const scr_string_t)scr_const.eliteClanLevel, STATSGROUP_COMMON);
}

/*
==============
GetEliteClanTag
==============
*/
const char *GetEliteClanTag(const int controllerIndex)
{
  return PlayerDataGetStringByName(controllerIndex, (const scr_string_t)scr_const.eliteClanTag, STATSGROUP_COMMON);
}

/*
==============
GetUseEliteClanTag
==============
*/
int GetUseEliteClanTag(const int controllerIndex)
{
  return PlayerDataGetIntByName(controllerIndex, (const scr_string_t)scr_const.useEliteClanTag, STATSGROUP_COMMON);
}

/*
==============
LiveStorage_Coop_Argv
==============
*/
const char *LiveStorage_Coop_Argv(int argIndex)
{
  if ( argIndex < 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_player_data.cpp", 1998, ASSERT_TYPE_ASSERT, "( ( argIndex >= 1 ) )", "( argIndex ) = %i", argIndex) )
    __debugbreak();
  if ( !g_useStatsGroups->current.enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_player_data.cpp", 1999, ASSERT_TYPE_ASSERT, "(g_useStatsGroups->current.enabled)", "%s\n\tif we are no longer using stats groups, we need to revisit LiveStorage_PrivateArgv", "g_useStatsGroups->current.enabled") )
    __debugbreak();
  if ( argIndex == 1 )
    return Com_PlayerData_GetStatsGroupPropertyName(STATSGROUP_COOP);
  else
    return Cmd_Argv(argIndex - 1);
}

/*
==============
LiveStorage_GetPlayerDataCmdInternal
==============
*/
void LiveStorage_GetPlayerDataCmdInternal(const StatsGroup statsGroup)
{
  int v4; 
  StatsSource ActiveStatsSource; 
  const DDLDef *DefForStatsGroup; 
  int v7; 
  unsigned int *v8; 
  const char *v9; 
  int v10; 
  DDLState state; 
  DDLContext context; 
  unsigned int path[16]; 

  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&state.member = _XMM0;
  state.isValid = 0;
  state.offset = 0;
  state.arrayIndex = -1;
  v4 = Cmd_LocalControllerIndex();
  ActiveStatsSource = LiveStorage_GetActiveStatsSource(v4);
  if ( CL_PlayerData_GetDDLBuffer(&context, v4, ActiveStatsSource, statsGroup) )
  {
    DefForStatsGroup = Com_PlayerData_GetDefForStatsGroup(statsGroup);
    v7 = 1;
    if ( Cmd_Argc() > 1 )
    {
      v8 = path;
      do
      {
        v9 = Cmd_Argv(v7);
        *v8++ = Com_DDL_ConvertNavStringToHash(v9);
        ++v7;
      }
      while ( v7 < Cmd_Argc() );
    }
    LiveStorage_InitializeDDLStateForStatsGroup(DefForStatsGroup, &state, statsGroup);
    v10 = Cmd_Argc();
    if ( DDL_MoveToPathByHash(&state, &state, v10 - 1, path) )
      Com_DDL_PrintState(&state, &context);
  }
  else
  {
    Com_Printf(14, "Cannot get data: we have not downloaded player stats\n");
  }
}

/*
==============
LiveStorage_PlayerDataSetCmd_Internal
==============
*/
void LiveStorage_PlayerDataSetCmd_Internal(int (*argc)(), const char *(*argv)(int), StatsGroup statsGroup, bool localize)
{
  int v10; 
  LocalClientNum_t v11; 
  StatsSource ActiveStatsSource; 
  int v13; 
  const char *v14; 
  DDLState state; 
  DDLContext context; 

  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&state.member = _XMM0;
  state.isValid = 0;
  state.offset = 0;
  state.arrayIndex = -1;
  v10 = Cmd_LocalControllerIndex();
  v11 = Cmd_LocalClientNum();
  LiveStorage_EnsureMaySetPersistentData(v11, "LiveStorage_LoadoutSetCmd");
  ActiveStatsSource = LiveStorage_GetActiveStatsSource(v10);
  if ( CL_PlayerData_GetDDLBuffer(&context, v10, ActiveStatsSource, statsGroup) )
  {
    if ( Com_DDL_NavigateFromCmd(context.def, argc, argv, &state, 1) )
    {
      if ( DDL_StateIsLeaf(&state) )
      {
        v13 = argc();
        v14 = argv(v13 - 1);
        if ( localize )
          v14 = UI_SafeTranslateString(v14);
        if ( !Com_DDL_SetDataFromString(&state, &context, v14) )
        {
          Com_PrintError(16, "setPlayerData:\n");
          PrintArgs();
        }
      }
      else
      {
        Com_PrintError(16, "Not enough arguments to setPlayerData\n");
      }
    }
  }
  else
  {
    Com_PrintError(14, "Cannot set data: we have not downloaded player stats\n");
  }
}

/*
==============
LiveStorage_PrivateLoadouts_Argv
==============
*/
const char *LiveStorage_PrivateLoadouts_Argv(int argIndex)
{
  if ( argIndex < 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_player_data.cpp", 1981, ASSERT_TYPE_ASSERT, "( ( argIndex >= 1 ) )", "( argIndex ) = %i", argIndex) )
    __debugbreak();
  if ( g_useStatsGroups->current.enabled )
  {
    if ( argIndex != 1 )
      return Cmd_Argv(argIndex - 1);
  }
  else if ( argIndex != 1 )
  {
    return Cmd_Argv(argIndex - 1);
  }
  return "squadMembers";
}

/*
==============
LiveStorage_RankedArgv
==============
*/
const char *LiveStorage_RankedArgv(int argIndex)
{
  if ( argIndex < 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_player_data.cpp", 1953, ASSERT_TYPE_ASSERT, "( ( argIndex >= 1 ) )", "( argIndex ) = %i", argIndex) )
    __debugbreak();
  if ( !g_useStatsGroups->current.enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_player_data.cpp", 1954, ASSERT_TYPE_ASSERT, "(g_useStatsGroups->current.enabled)", "%s\n\tif we are no longer using stats groups, we need to revisit LiveStorage_RankedArgv", "g_useStatsGroups->current.enabled") )
    __debugbreak();
  if ( argIndex == 1 )
    return Com_PlayerData_GetStatsGroupPropertyName(STATSGROUP_RANKED);
  else
    return Cmd_Argv(argIndex - 1);
}

/*
==============
LiveStorage_RankedLoadout_Argc
==============
*/
__int64 LiveStorage_RankedLoadout_Argc()
{
  return (unsigned int)(Cmd_Argc() + 1);
}

/*
==============
LiveStorage_RankedLoadoutsArgv
==============
*/
const char *LiveStorage_RankedLoadoutsArgv(int argIndex)
{
  if ( argIndex < 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_player_data.cpp", 1964, ASSERT_TYPE_ASSERT, "( ( argIndex >= 1 ) )", "( argIndex ) = %i", argIndex) )
    __debugbreak();
  if ( g_useStatsGroups->current.enabled )
  {
    if ( argIndex != 1 )
      return Cmd_Argv(argIndex - 1);
  }
  else if ( argIndex != 1 )
  {
    return Cmd_Argv(argIndex - 1);
  }
  return "squadMembers";
}

/*
==============
LiveStorage_Ranked_Argc
==============
*/
__int64 LiveStorage_Ranked_Argc()
{
  if ( !g_useStatsGroups->current.enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_player_data.cpp", 1938, ASSERT_TYPE_ASSERT, "(g_useStatsGroups->current.enabled)", "%s\n\tif we are no longer using stats groups, we need to revisit LiveStorage_RankedStat_Argc", "g_useStatsGroups->current.enabled") )
    __debugbreak();
  return (unsigned int)(Cmd_Argc() + 1);
}

/*
==============
LiveStorage_SetPlayerDataCmdInternal
==============
*/
void LiveStorage_SetPlayerDataCmdInternal(const StatsGroup statsGroup)
{
  int v4; 
  const char *v5; 
  LocalClientNum_t v6; 
  StatsSource ActiveStatsSource; 
  int v8; 
  const DDLDef *def; 
  unsigned int *v10; 
  const char *v11; 
  int v12; 
  const char *v13; 
  int v14; 
  const char *v15; 
  const char *v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 
  DDLState state; 
  DDLContext context; 
  unsigned int path[16]; 

  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&state.member = _XMM0;
  state.isValid = 0;
  state.offset = 0;
  state.arrayIndex = -1;
  v4 = Cmd_LocalControllerIndex();
  v5 = Cmd_Argv(0);
  Com_PrintWarning(16, "Calling dev only command '%s'.\n", v5);
  v6 = Cmd_LocalClientNum();
  LiveStorage_EnsureMaySetPersistentData(v6, "LiveStorage_SetPlayerDataCmdInternal");
  ActiveStatsSource = LiveStorage_GetActiveStatsSource(v4);
  if ( CL_PlayerData_GetDDLBuffer(&context, v4, ActiveStatsSource, statsGroup) )
  {
    v8 = 1;
    def = context.def;
    if ( Cmd_Argc() > 1 )
    {
      v10 = path;
      do
      {
        v11 = Cmd_Argv(v8);
        *v10++ = Com_DDL_ConvertNavStringToHash(v11);
        ++v8;
      }
      while ( v8 < Cmd_Argc() );
    }
    LiveStorage_InitializeDDLStateForStatsGroup(def, &state, statsGroup);
    v12 = Cmd_Argc();
    if ( DDL_MoveToPathByHash(&state, &state, v12 - 2, path) )
    {
      if ( DDL_StateIsLeaf(&state) )
      {
        v14 = Cmd_Argc();
        v15 = Cmd_Argv(v14 - 1);
        if ( !Com_DDL_SetDataFromString(&state, &context, v15) )
        {
          v16 = Cmd_Argv(0);
          Com_PrintError(16, "Com_DDL_SetDataFromString failed %s\n", v16);
          PrintArgs(v18, v17, v19, v20);
        }
      }
      else
      {
        v13 = Cmd_Argv(0);
        Com_PrintError(16, "Not enough arguments to %s\n", v13);
      }
    }
  }
  else
  {
    Com_PrintError(14, "Cannot set data: we have not downloaded player stats\n");
  }
}

/*
==============
LiveStorage_StatAliensPrestigeReset
==============
*/
void LiveStorage_StatAliensPrestigeReset(int controllerIndex, int rank)
{
  int v4; 
  int v5; 
  const char *v6; 
  const char *v7; 
  StatsSource ActiveStatsSource; 
  int InternalInt; 
  int v10; 
  StatsSource v11; 
  StatsSource v12; 
  StatsSource v13; 
  StatsSource v14; 
  int modifiedFlagsb; 
  unsigned __int8 *modifiedFlags; 
  unsigned __int8 *modifiedFlagsa; 
  unsigned int v18[2]; 
  DDLContext context; 
  unsigned int navHashes; 
  unsigned int RawHash; 
  unsigned int v22; 
  unsigned int v23; 

  if ( LiveStorage_DoWeHaveStats(controllerIndex) )
  {
    v4 = -1;
    v5 = -1;
    v6 = StringTable_LookupFromAsset("cp/zombies/rankTable.csv", 0, "maxrank", 1);
    if ( v6 )
      v5 = atoi(v6);
    if ( rank >= v5 )
    {
      v7 = StringTable_LookupFromAsset("cp/zombies/rankIconTable.csv", 0, "maxprestige", 1);
      if ( v7 )
        v4 = atoi(v7);
      navHashes = j_SL_GetRawHash(scr_const.alienPlayerStats);
      RawHash = j_SL_GetRawHash(scr_const.prestige);
      ActiveStatsSource = LiveStorage_GetActiveStatsSource(controllerIndex);
      if ( CL_PlayerData_GetDDLBuffer(&context, controllerIndex, ActiveStatsSource, STATSGROUP_COOP) )
        InternalInt = Com_PlayerData_GetInternalInt(&navHashes, 2, &context, STATSGROUP_COOP);
      else
        InternalInt = 0;
      v10 = InternalInt + 1;
      if ( InternalInt >= v4 )
        v10 = InternalInt;
      v22 = j_SL_GetRawHash(scr_const.alienPlayerStats);
      v23 = j_SL_GetRawHash(scr_const.experience);
      v18[0] = j_SL_GetRawHash(scr_const.alienPlayerStats);
      v18[1] = j_SL_GetRawHash(scr_const.rank);
      v11 = LiveStorage_GetActiveStatsSource(controllerIndex);
      if ( !CL_PlayerData_GetDDLBuffer(&context, controllerIndex, v11, STATSGROUP_COOP) )
      {
        modifiedFlagsb = v10;
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1441FC320, 583i64, navHashes, modifiedFlagsb);
      }
      Com_PlayerData_SetInternalInt(&navHashes, 2, v10, &context, NULL, STATSGROUP_COOP);
      v12 = LiveStorage_GetActiveStatsSource(controllerIndex);
      if ( !CL_PlayerData_GetDDLBuffer(&context, controllerIndex, v12, STATSGROUP_COOP) )
      {
        LODWORD(modifiedFlags) = 0;
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1441FC320, 583i64, v22, modifiedFlags);
      }
      Com_PlayerData_SetInternalInt(&v22, 2, 0, &context, NULL, STATSGROUP_COOP);
      v13 = LiveStorage_GetActiveStatsSource(controllerIndex);
      if ( !CL_PlayerData_GetDDLBuffer(&context, controllerIndex, v13, STATSGROUP_COOP) )
      {
        LODWORD(modifiedFlagsa) = 0;
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1441FC320, 583i64, v18[0], modifiedFlagsa);
      }
      Com_PlayerData_SetInternalInt(v18, 2, 0, &context, NULL, STATSGROUP_COOP);
      v14 = LiveStorage_GetActiveStatsSource(controllerIndex);
      LiveStorage_SetAllStatsBlobsDirty(controllerIndex, v14, 1);
      LiveStorage_SaveStats(controllerIndex);
    }
    else
    {
      Com_PrintError(15, "aliensPrestigeReset rank too low\n");
    }
  }
  else
  {
    Com_PrintError(15, "aliensPrestigeReset: we don't have stats\n");
  }
}

/*
==============
LiveStorage_StatPrestigeReset
==============
*/
void LiveStorage_StatPrestigeReset(int controllerIndex)
{
  StatsSource ActiveStatsSource; 
  const XUID *v3; 
  XUID xuid; 
  XUID result; 

  XUID::XUID(&xuid);
  if ( LiveStorage_DoWeHaveStats(controllerIndex) )
  {
    LiveStorage_StatPrestigeResetHelper(controllerIndex);
    ActiveStatsSource = LiveStorage_GetActiveStatsSource(controllerIndex);
    LiveStorage_SetAllStatsBlobsDirty(controllerIndex, ActiveStatsSource, 1);
    if ( Live_IsSignedIn(controllerIndex) && Live_IsUserSignedInToLive(controllerIndex) )
    {
      v3 = Live_GetXuid(&result, controllerIndex);
      XUID::operator=(&xuid, v3);
      LiveStorage_LogPrestige(controllerIndex, xuid);
    }
  }
  else
  {
    Com_PrintError(15, "prestigeReset: we don't have stats\n");
  }
}

/*
==============
LiveStorage_StatPrestigeResetHelper
==============
*/
void LiveStorage_StatPrestigeResetHelper(int controllerIndex)
{
  __int64 v1; 
  StatsSource ActiveStatsSource; 
  __int64 v3; 
  LocalClientNum_t ClientFromController; 
  const DDLDef *DefForStatsGroup; 
  unsigned __int8 *DemoPlayerDataBuffer; 
  int PlayerDataBufferSize; 
  bool v8; 
  StatsBlobId StatsBlob; 
  _DWORD *userData; 
  StatsSource v11; 
  DDLContext ddlContext; 

  v1 = controllerIndex;
  ActiveStatsSource = LiveStorage_GetActiveStatsSource(controllerIndex);
  v3 = ActiveStatsSource;
  LiveStorage_ResetStats_SetStatsSource(v1, ActiveStatsSource);
  ClientFromController = CL_Mgr_GetClientFromController(v1);
  if ( CL_Demo_IsPlayingServer(ClientFromController) )
  {
    DefForStatsGroup = Com_PlayerData_GetDefForStatsGroup(STATSGROUP_RANKEDLOADOUTS);
    if ( !DefForStatsGroup && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_player_data.cpp", 221, ASSERT_TYPE_ASSERT, "(def != nullptr)", (const char *)&queryFormat, "def != nullptr") )
      __debugbreak();
    DemoPlayerDataBuffer = LiveStorage_GetDemoPlayerDataBuffer(v1, STATSGROUP_RANKEDLOADOUTS);
    if ( !DemoPlayerDataBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_player_data.cpp", 224, ASSERT_TYPE_ASSERT, "(buffer != nullptr)", (const char *)&queryFormat, "buffer != nullptr") )
      __debugbreak();
    PlayerDataBufferSize = LiveStorage_GetPlayerDataBufferSize(STATSGROUP_RANKEDLOADOUTS);
    v8 = Com_DDL_CreateContext(DemoPlayerDataBuffer, PlayerDataBufferSize, DefForStatsGroup, &ddlContext, DDLAccessCBForDemo, NULL);
LABEL_11:
    if ( v8 )
      goto LABEL_14;
    goto LABEL_12;
  }
  StatsBlob = Com_PlayerData_GetStatsBlob(STATSGROUP_RANKEDLOADOUTS);
  if ( StatsBlob != STATS_BLOB_COUNT )
  {
    userData = (_DWORD *)((char *)s_callbackData_0 + 144 * v1 + 72 * v3 + 12 * StatsBlob);
    userData[2] = StatsBlob;
    userData[1] = v3;
    *userData = v1;
    v8 = LiveStorage_CreateDDLContext(v1, STATSGROUP_RANKEDLOADOUTS, (const StatsSource)v3, &ddlContext, DDLAccessCB_0, userData);
    goto LABEL_11;
  }
LABEL_12:
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_player_data.cpp", 1373, ASSERT_TYPE_ASSERT, "(CL_PlayerData_GetDDLBuffer( &rankedLoadoutsContext, controllerIndex, statsSource, STATSGROUP_RANKEDLOADOUTS ))", (const char *)&queryFormat, "CL_PlayerData_GetDDLBuffer( &rankedLoadoutsContext, controllerIndex, statsSource, STATSGROUP_RANKEDLOADOUTS )") )
    __debugbreak();
LABEL_14:
  DDL_ResetContext(ddlContext.buff, ddlContext.len, ddlContext.def, &ddlContext, NULL, NULL);
  LiveStorage_SetStatsBlobPrestigeReset(v1, (StatsSource)v3, STATS_BLOB_COMMON, 1);
  LiveStorage_SetStatsBlobPrestigeReset(v1, (StatsSource)v3, STATS_BLOB_RANKEDLOADOUTS, 1);
  LiveStorage_SetStatsBlobPrestigeReset(v1, (StatsSource)v3, STATS_BLOB_MP, 1);
  v11 = LiveStorage_GetActiveStatsSource(v1);
  GamerProfile_UpdateProfileFromStats(v1, v11);
  LiveStorage_ResetStats_ClearStatsSource(v1);
  GamerProfile_UpdateProfileAndSaveIfNeeded(v1);
}

/*
==============
LiveStorage_UpdateCustomizationModelsFromSquad
==============
*/
void LiveStorage_UpdateCustomizationModelsFromSquad(const int controllerIndex)
{
  __int64 v3; 
  StatsGroup LoadoutStatsGroupForGameMode; 
  StatsSource ActiveStatsSource; 
  const DDLDef *DefForStatsGroup; 
  unsigned int RawHash; 
  unsigned int v8; 
  __int64 v9; 
  scr_string_t v10; 
  unsigned int v11; 
  const char *v12; 
  const char *v13; 
  __int64 v14; 
  int v15; 
  DDLState state; 
  DDLState fromState; 
  DDLContext context; 
  scr_string_t stringValue[4]; 
  unsigned int headIndex[4]; 

  stringValue[0] = scr_const.head;
  stringValue[1] = scr_const.helmet;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  stringValue[2] = scr_const.body;
  v3 = controllerIndex;
  state.isValid = 0;
  state.offset = 0;
  state.arrayIndex = -1;
  *(_OWORD *)&state.member = _XMM0;
  if ( !s_activeCustomizationDevOverride )
  {
    LoadoutStatsGroupForGameMode = Com_PlayerData_GetLoadoutStatsGroupForGameMode();
    if ( (unsigned int)(LoadoutStatsGroupForGameMode - 3) <= 1 )
    {
      if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_SLIDE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_player_data.cpp", 925, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::CHARACTER_CUSTOMIZATION_INGAME ))", "%s\n\tThis will not ultimately work, will not be able to resolve indice", "Com_GameMode_SupportsFeature( Com_GameMode_Feature::CHARACTER_CUSTOMIZATION_INGAME )") )
        __debugbreak();
      ActiveStatsSource = LiveStorage_GetActiveStatsSource(v3);
      if ( CL_PlayerData_GetDDLBuffer(&context, v3, ActiveStatsSource, LoadoutStatsGroupForGameMode) )
      {
        DefForStatsGroup = Com_PlayerData_GetDefForStatsGroup(LoadoutStatsGroupForGameMode);
        LiveStorage_InitializeDDLStateForStatsGroup(DefForStatsGroup, &state, LoadoutStatsGroupForGameMode);
        RawHash = j_SL_GetRawHash(scr_const.squadMembers);
        if ( DDL_MoveToNameByHash(&state, &state, RawHash, NULL) )
        {
          v8 = 0;
          v9 = 0i64;
          do
          {
            v10 = stringValue[v9];
            fromState = state;
            v11 = j_SL_GetRawHash(v10);
            DDL_MoveToNameByHash(&fromState, &fromState, v11, NULL);
            if ( !DDL_StateIsLeaf(&fromState) )
            {
              v13 = SL_ConvertToString(stringValue[v8]);
              Com_PrintWarning(16, "LiveStorage_UpdateCustomizationModelsFromSquad: Couldn't get to the squad member field %i (%s).\n", v8, v13);
              return;
            }
            if ( DDL_GetType(&fromState) != DDL_SHORT_TYPE )
            {
              v12 = SL_ConvertToString(stringValue[v8]);
              Com_PrintWarning(16, "LiveStorage_UpdateCustomizationModelsFromSquad: Wrong type for squad member field %i (%s)\n", v8, v12);
              return;
            }
            ++v8;
            headIndex[v9++] = DDL_GetShort(&fromState, &context);
          }
          while ( v8 < 3 );
          if ( (unsigned int)v3 >= 8 )
          {
            v15 = 8;
            LODWORD(v14) = v3;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_player_data.cpp", 962, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( ( sizeof( *array_counter( s_activeCustomization ) ) + 0 ) )", "controllerIndex doesn't index ARRAY_COUNT( s_activeCustomization )\n\t%i not in [0, %i)", v14, v15) )
              __debugbreak();
          }
          BG_Customization_BuildClientCustomization(&s_activeCustomization[v3], headIndex[0], headIndex[1], headIndex[2], NULL);
        }
        else
        {
          Com_PrintWarning(16, "LiveStorage_GetSquadMemberLookup: Couldn't get to the squad member struct.\n");
        }
      }
      else
      {
        Com_Printf(16, "LiveStorage_UpdateCustomizationModelsFromSquad: Can't get persistent data for controller %d\n", (unsigned int)v3);
      }
    }
  }
}

/*
==============
PlayerDataGetByteByName
==============
*/
unsigned __int8 PlayerDataGetByteByName(const int controllerIndex, const scr_string_t name, const StatsGroup statsGroup)
{
  StatsSource ActiveStatsSource; 
  unsigned __int8 result; 
  unsigned int RawHash; 
  DDLState state; 
  DDLContext context; 

  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&state.member = _XMM0;
  state.isValid = 0;
  state.offset = 0;
  state.arrayIndex = -1;
  ActiveStatsSource = LiveStorage_GetActiveStatsSource(controllerIndex);
  result = CL_PlayerData_GetDDLBuffer(&context, controllerIndex, ActiveStatsSource, statsGroup);
  if ( result )
  {
    LiveStorage_InitializeDDLStateForStatsGroup(context.def, &state, statsGroup);
    RawHash = j_SL_GetRawHash(name);
    DDL_MoveToNameByHash(&state, &state, RawHash, NULL);
    return DDL_GetByte(&state, &context);
  }
  return result;
}

/*
==============
PlayerDataGetIntByName
==============
*/
int PlayerDataGetIntByName(const int controllerIndex, const scr_string_t name, const StatsGroup statsGroup)
{
  StatsSource ActiveStatsSource; 
  unsigned int RawHash; 
  DDLState state; 
  DDLContext context; 

  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&state.member = _XMM0;
  state.isValid = 0;
  state.offset = 0;
  state.arrayIndex = -1;
  ActiveStatsSource = LiveStorage_GetActiveStatsSource(controllerIndex);
  if ( !CL_PlayerData_GetDDLBuffer(&context, controllerIndex, ActiveStatsSource, statsGroup) )
    return 0;
  LiveStorage_InitializeDDLStateForStatsGroup(context.def, &state, statsGroup);
  RawHash = j_SL_GetRawHash(name);
  DDL_MoveToNameByHash(&state, &state, RawHash, NULL);
  return DDL_GetInt(&state, &context);
}

/*
==============
PlayerDataGetStringByName
==============
*/
const char *PlayerDataGetStringByName(const int controllerIndex, const scr_string_t name, const StatsGroup statsGroup)
{
  StatsSource ActiveStatsSource; 
  unsigned int RawHash; 
  DDLState state; 
  DDLContext context; 

  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&state.member = _XMM0;
  state.isValid = 0;
  state.offset = 0;
  state.arrayIndex = -1;
  ActiveStatsSource = LiveStorage_GetActiveStatsSource(controllerIndex);
  if ( !CL_PlayerData_GetDDLBuffer(&context, controllerIndex, ActiveStatsSource, statsGroup) )
    return (char *)&queryFormat.fmt + 3;
  LiveStorage_InitializeDDLStateForStatsGroup(context.def, &state, statsGroup);
  RawHash = j_SL_GetRawHash(name);
  DDL_MoveToNameByHash(&state, &state, RawHash, NULL);
  return DDL_GetString(&state, &context);
}

/*
==============
PlayerDataSetByteByName
==============
*/
bool PlayerDataSetByteByName(const int controllerIndex, const scr_string_t name, const StatsGroup statsGroup, int value)
{
  unsigned __int8 v6; 
  StatsSource ActiveStatsSource; 
  bool result; 
  unsigned int RawHash; 
  DDLState state; 
  DDLContext context; 

  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&state.member = _XMM0;
  v6 = value;
  state.isValid = 0;
  state.offset = 0;
  state.arrayIndex = -1;
  ActiveStatsSource = LiveStorage_GetActiveStatsSource(controllerIndex);
  result = CL_PlayerData_GetDDLBuffer(&context, controllerIndex, ActiveStatsSource, statsGroup);
  if ( result )
  {
    LiveStorage_InitializeDDLStateForStatsGroup(context.def, &state, statsGroup);
    RawHash = j_SL_GetRawHash(name);
    DDL_MoveToNameByHash(&state, &state, RawHash, NULL);
    return DDL_SetByte(&state, &context, v6);
  }
  return result;
}

/*
==============
PlayerDataSetIntByName
==============
*/
bool PlayerDataSetIntByName(const int controllerIndex, const scr_string_t name, const StatsGroup statsGroup, int value)
{
  StatsSource ActiveStatsSource; 
  bool result; 
  unsigned int RawHash; 
  DDLState state; 
  DDLContext context; 

  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&state.member = _XMM0;
  state.isValid = 0;
  state.offset = 0;
  state.arrayIndex = -1;
  ActiveStatsSource = LiveStorage_GetActiveStatsSource(controllerIndex);
  result = CL_PlayerData_GetDDLBuffer(&context, controllerIndex, ActiveStatsSource, statsGroup);
  if ( result )
  {
    LiveStorage_InitializeDDLStateForStatsGroup(context.def, &state, statsGroup);
    RawHash = j_SL_GetRawHash(name);
    DDL_MoveToNameByHash(&state, &state, RawHash, NULL);
    return DDL_SetInt(&state, &context, value);
  }
  return result;
}

/*
==============
PlayerDataSetStringByName
==============
*/
bool PlayerDataSetStringByName(const int controllerIndex, const scr_string_t name, const StatsGroup statsGroup, const char *value)
{
  StatsSource ActiveStatsSource; 
  bool result; 
  unsigned int RawHash; 
  DDLState state; 
  DDLContext context; 

  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&state.member = _XMM0;
  state.isValid = 0;
  state.offset = 0;
  state.arrayIndex = -1;
  ActiveStatsSource = LiveStorage_GetActiveStatsSource(controllerIndex);
  result = CL_PlayerData_GetDDLBuffer(&context, controllerIndex, ActiveStatsSource, statsGroup);
  if ( result )
  {
    LiveStorage_InitializeDDLStateForStatsGroup(context.def, &state, statsGroup);
    RawHash = j_SL_GetRawHash(name);
    DDL_MoveToNameByHash(&state, &state, RawHash, NULL);
    return DDL_SetString(&state, &context, value);
  }
  return result;
}

/*
==============
PrintArgs
==============
*/
void PrintArgs()
{
  int i; 
  const char *v1; 

  Com_Printf(16, "Command was: ");
  for ( i = 0; i < Cmd_Argc(); ++i )
  {
    v1 = Cmd_Argv(i);
    Com_Printf(16, "%s ", v1);
  }
  Com_Printf(16, "\n");
}

/*
==============
SetEliteClanLevel
==============
*/
bool SetEliteClanLevel(const int controllerIndex, int value)
{
  return PlayerDataSetIntByName(controllerIndex, (const scr_string_t)scr_const.eliteClanLevel, STATSGROUP_COMMON, value);
}

/*
==============
SetEliteClanTag
==============
*/
bool SetEliteClanTag(const int controllerIndex, const char *value)
{
  return PlayerDataSetStringByName(controllerIndex, (const scr_string_t)scr_const.eliteClanTag, STATSGROUP_COMMON, value);
}

/*
==============
SetUseEliteClanTag
==============
*/
bool SetUseEliteClanTag(const int controllerIndex, int value)
{
  return PlayerDataSetIntByName(controllerIndex, (const scr_string_t)scr_const.useEliteClanTag, STATSGROUP_COMMON, value);
}

