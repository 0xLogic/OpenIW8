/*
==============
Online_GunSmith::UploadBlueprints
==============
*/

void __fastcall Online_GunSmith::UploadBlueprints(Online_GunSmith *this, const int controllerIndex)
{
  ?UploadBlueprints@Online_GunSmith@@QEAAXH@Z(this, controllerIndex);
}

/*
==============
Online_GunSmith::GetInstance
==============
*/

Online_GunSmith *__fastcall Online_GunSmith::GetInstance()
{
  return ?GetInstance@Online_GunSmith@@SAAEAV1@XZ();
}

/*
==============
Online_GunSmith::GetGunUnlock
==============
*/

AttachmentProgression *__fastcall Online_GunSmith::GetGunUnlock(Online_GunSmith *this, const int controllerIndex, const int id)
{
  return ?GetGunUnlock@Online_GunSmith@@QEAAPEAUAttachmentProgression@@HH@Z(this, controllerIndex, id);
}

/*
==============
Online_GunSmith::GetWeapon
==============
*/

WeaponProgression *__fastcall Online_GunSmith::GetWeapon(Online_GunSmith *this, const int controllerIndex, const char *ref)
{
  return ?GetWeapon@Online_GunSmith@@QEAAPEAUWeaponProgression@@HPEBD@Z(this, controllerIndex, ref);
}

/*
==============
Online_GunSmith::SetBlueprintsDirty
==============
*/

void __fastcall Online_GunSmith::SetBlueprintsDirty(Online_GunSmith *this, const int controllerIndex, bool dirty)
{
  ?SetBlueprintsDirty@Online_GunSmith@@QEAAXH_N@Z(this, controllerIndex, dirty);
}

/*
==============
Online_GunSmith::GetWeaponMastery
==============
*/

AttachmentProgression *__fastcall Online_GunSmith::GetWeaponMastery(Online_GunSmith *this, const int controllerIndex, const int id)
{
  return ?GetWeaponMastery@Online_GunSmith@@QEAAPEAUAttachmentProgression@@HH@Z(this, controllerIndex, id);
}

/*
==============
Online_GunSmith::FenceDependeciesUpdated
==============
*/

void __fastcall Online_GunSmith::FenceDependeciesUpdated(const int controllerIndex, const bool value)
{
  ?FenceDependeciesUpdated@Online_GunSmith@@SAXH_N@Z(controllerIndex, value);
}

/*
==============
Online_GunSmith::ResetProgression
==============
*/

void __fastcall Online_GunSmith::ResetProgression(Online_GunSmith *this, const int controllerIndex)
{
  ?ResetProgression@Online_GunSmith@@QEAAXH@Z(this, controllerIndex);
}

/*
==============
Online_GunSmith::Frame
==============
*/

void __fastcall Online_GunSmith::Frame(Online_GunSmith *this)
{
  ?Frame@Online_GunSmith@@UEAAXXZ(this);
}

/*
==============
Online_GunSmith::OnSignedOut
==============
*/

void __fastcall Online_GunSmith::OnSignedOut(Online_GunSmith *this, const int controllerIndex, GenericSignOutState signOutState)
{
  ?OnSignedOut@Online_GunSmith@@UEAAXHW4GenericSignOutState@@@Z(this, controllerIndex, signOutState);
}

/*
==============
Online_GunSmith::UploadBlueprints_Internal
==============
*/

void __fastcall Online_GunSmith::UploadBlueprints_Internal(Online_GunSmith *this, const int controllerIndex)
{
  ?UploadBlueprints_Internal@Online_GunSmith@@AEAAXH@Z(this, controllerIndex);
}

/*
==============
Online_GunSmith::Uninit
==============
*/

void __fastcall Online_GunSmith::Uninit(Online_GunSmith *this)
{
  ?Uninit@Online_GunSmith@@UEAAXXZ(this);
}

/*
==============
Online_GunSmith::GetBlueprintsFenceStatusCode
==============
*/

FenceBluePrintsStatusCode __fastcall Online_GunSmith::GetBlueprintsFenceStatusCode(Online_GunSmith *this, const int controllerIndex)
{
  return ?GetBlueprintsFenceStatusCode@Online_GunSmith@@QEAA?AW4FenceBluePrintsStatusCode@@H@Z(this, controllerIndex);
}

/*
==============
Online_GunSmith::GetAttachment
==============
*/

AttachmentProgression *__fastcall Online_GunSmith::GetAttachment(Online_GunSmith *this, const int controllerIndex, const int id)
{
  return ?GetAttachment@Online_GunSmith@@QEAAPEAUAttachmentProgression@@HH@Z(this, controllerIndex, id);
}

/*
==============
Online_GunSmith::OnSignedIn
==============
*/

void __fastcall Online_GunSmith::OnSignedIn(Online_GunSmith *this, const int controllerIndex, GenericSignInState signinState)
{
  ?OnSignedIn@Online_GunSmith@@UEAAXHW4GenericSignInState@@@Z(this, controllerIndex, signinState);
}

/*
==============
Online_GunSmith::RegisterLuaFunctions
==============
*/

void __fastcall Online_GunSmith::RegisterLuaFunctions(Online_GunSmith *this, lua_State *luaVM)
{
  ?RegisterLuaFunctions@Online_GunSmith@@UEAAXPEAUlua_State@@@Z(this, luaVM);
}

/*
==============
Online_GunSmith::GetReticle
==============
*/

AttachmentProgression *__fastcall Online_GunSmith::GetReticle(Online_GunSmith *this, const int controllerIndex, const int id)
{
  return ?GetReticle@Online_GunSmith@@QEAAPEAUAttachmentProgression@@HH@Z(this, controllerIndex, id);
}

/*
==============
Online_GunSmith::Init
==============
*/

bool __fastcall Online_GunSmith::Init(Online_GunSmith *this)
{
  return ?Init@Online_GunSmith@@UEAA_NXZ(this);
}

/*
==============
Online_GunSmith::HasBlueprints
==============
*/

bool __fastcall Online_GunSmith::HasBlueprints(Online_GunSmith *this, const int controllerIndex)
{
  return ?HasBlueprints@Online_GunSmith@@QEAA_NH@Z(this, controllerIndex);
}

/*
==============
Online_GunSmith::OnRegistered
==============
*/

void __fastcall Online_GunSmith::OnRegistered(Online_GunSmith *this)
{
  ?OnRegistered@Online_GunSmith@@UEAAXXZ(this);
}

/*
==============
Online_GunSmith::GetInstancePtr
==============
*/

Online_GunSmith *__fastcall Online_GunSmith::GetInstancePtr()
{
  return ?GetInstancePtr@Online_GunSmith@@SAPEAV1@XZ();
}

/*
==============
OnBlueprintsDownloadComplete
==============
*/

void __fastcall OnBlueprintsDownloadComplete(OnlineStorageTask *storageTask)
{
  ?OnBlueprintsDownloadComplete@@YAXPEAUOnlineStorageTask@@@Z(storageTask);
}

/*
==============
Online_GunSmith::OutputCurrentState
==============
*/

void __fastcall Online_GunSmith::OutputCurrentState(Online_GunSmith *this, const int controllerIndex)
{
  ?OutputCurrentState@Online_GunSmith@@UEAAXH@Z(this, controllerIndex);
}

/*
==============
Online_GunSmith::DiscardBlueprints
==============
*/

void __fastcall Online_GunSmith::DiscardBlueprints(Online_GunSmith *this, const int controllerIndex)
{
  ?DiscardBlueprints@Online_GunSmith@@QEAAXH@Z(this, controllerIndex);
}

/*
==============
Online_GunSmith::OnUnregistered
==============
*/

void __fastcall Online_GunSmith::OnUnregistered(Online_GunSmith *this)
{
  ?OnUnregistered@Online_GunSmith@@UEAAXXZ(this);
}

/*
==============
Online_GunSmith::ControllerFrame
==============
*/

void __fastcall Online_GunSmith::ControllerFrame(Online_GunSmith *this, const int controllerIndex)
{
  ?ControllerFrame@Online_GunSmith@@UEAAXH@Z(this, controllerIndex);
}

/*
==============
Online_GunSmith::GetWeapons
==============
*/

GunsmithWeapons *__fastcall Online_GunSmith::GetWeapons(Online_GunSmith *this, const int controllerIndex)
{
  return ?GetWeapons@Online_GunSmith@@QEAAPEAUGunsmithWeapons@@H@Z(this, controllerIndex);
}

/*
==============
Online_GunSmith::AddProgression
==============
*/

void __fastcall Online_GunSmith::AddProgression(Online_GunSmith *this, const int controllerIndex, int kind, bdAchievementState *state)
{
  ?AddProgression@Online_GunSmith@@QEAAXHHPEAVbdAchievementState@@@Z(this, controllerIndex, kind, state);
}

/*
==============
Online_GunSmith::DownloadBlueprints
==============
*/

void __fastcall Online_GunSmith::DownloadBlueprints(Online_GunSmith *this, const int controllerIndex)
{
  ?DownloadBlueprints@Online_GunSmith@@QEAAXH@Z(this, controllerIndex);
}

/*
==============
Online_GunSmith::OnDisconnect
==============
*/

void __fastcall Online_GunSmith::OnDisconnect(Online_GunSmith *this, ONLINE_DISCONNECT reason)
{
  ?OnDisconnect@Online_GunSmith@@UEAAXW4ONLINE_DISCONNECT@@@Z(this, reason);
}

/*
==============
Online_GunSmith::UpdateWeaponStats
==============
*/

void __fastcall Online_GunSmith::UpdateWeaponStats(Online_GunSmith *this, const int controllerIndex, const int weaponIndex)
{
  ?UpdateWeaponStats@Online_GunSmith@@QEAAXHH@Z(this, controllerIndex, weaponIndex);
}

/*
==============
Online_GunSmith::UpdateWeapon
==============
*/

bool __fastcall Online_GunSmith::UpdateWeapon(Online_GunSmith *this, const int controllerIndex, bdJSONDeserializer *json, int kind, bool complete)
{
  return ?UpdateWeapon@Online_GunSmith@@QEAA_NHPEAVbdJSONDeserializer@@H_N@Z(this, controllerIndex, json, kind, complete);
}

/*
==============
Online_GunSmith::Reset
==============
*/

void __fastcall Online_GunSmith::Reset(Online_GunSmith *this, const int controllerIndex)
{
  ?Reset@Online_GunSmith@@QEAAXH@Z(this, controllerIndex);
}

/*
==============
LUI_CoD_LuaCall_GetWeaponInfo
==============
*/
__int64 LUI_CoD_LuaCall_GetWeaponInfo(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_CoD_LuaCall_GetWeaponInfo_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_GetChallengeInfo
==============
*/
__int64 LUI_CoD_LuaCall_GetChallengeInfo(lua_State *const luaVM)
{
  int v2; 
  __int64 progress; 
  __int64 v4; 
  int v5; 
  LocalClientNum_t ClientFromController; 
  unsigned int v7; 
  __int64 v8; 
  AttachmentProgression *v9; 
  unsigned int v10; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, "USAGE: Gunsmith.GetChallengeInfo( <controllerIndex><challengeID> )\n");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Gunsmith.GetChallengeInfo( <controllerIndex> )\n");
  if ( !j_lua_isstring(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Gunsmith.GetChallengeInfo( <challengeID> )\n");
  v2 = lui_tointeger32(luaVM, 1);
  progress = 0i64;
  v4 = lui_tointeger32(luaVM, 2);
  v5 = 0;
  ClientFromController = CL_Mgr_GetClientFromController(v2);
  v7 = Online_GunSmith::s_instance.m_totalAttachments[ClientFromController];
  if ( v7 )
  {
    v8 = ClientFromController;
    while ( v4 != Online_GunSmith::s_instance.m_attachments[v8][v5].id )
    {
      if ( ++v5 >= v7 )
        goto LABEL_11;
    }
    v9 = &Online_GunSmith::s_instance.m_attachments[v8][v5];
  }
  else
  {
LABEL_11:
    v9 = NULL;
  }
  j_lua_createtable(luaVM, 0, 0);
  if ( v9 )
    progress = v9->progress;
  LUI_SetTableInt("progress", progress, luaVM);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v10 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v10);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetReticleInfo
==============
*/
__int64 LUI_CoD_LuaCall_GetReticleInfo(lua_State *const luaVM)
{
  int v2; 
  __int64 progress; 
  __int64 v4; 
  int v5; 
  LocalClientNum_t ClientFromController; 
  unsigned int v7; 
  __int64 v8; 
  AttachmentProgression *v9; 
  unsigned int v10; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, "USAGE: Gunsmith.GetReticleInfo( <controllerIndex><challengeID> )\n");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Gunsmith.GetReticleInfo( <controllerIndex> )\n");
  if ( !j_lua_isstring(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Gunsmith.GetReticleInfo( <challengeID> )\n");
  v2 = lui_tointeger32(luaVM, 1);
  progress = 0i64;
  v4 = lui_tointeger32(luaVM, 2);
  v5 = 0;
  ClientFromController = CL_Mgr_GetClientFromController(v2);
  v7 = Online_GunSmith::s_instance.m_totalReticles[ClientFromController];
  if ( v7 )
  {
    v8 = ClientFromController;
    while ( v4 != Online_GunSmith::s_instance.m_reticles[v8][v5].id )
    {
      if ( ++v5 >= v7 )
        goto LABEL_11;
    }
    v9 = &Online_GunSmith::s_instance.m_reticles[v8][v5];
  }
  else
  {
LABEL_11:
    v9 = NULL;
  }
  j_lua_createtable(luaVM, 0, 0);
  if ( v9 )
    progress = v9->progress;
  LUI_SetTableInt("progress", progress, luaVM);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v10 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v10);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetGunUnlockInfo
==============
*/
__int64 LUI_CoD_LuaCall_GetGunUnlockInfo(lua_State *const luaVM)
{
  int v2; 
  __int64 progress; 
  __int64 v4; 
  int v5; 
  LocalClientNum_t ClientFromController; 
  unsigned int v7; 
  __int64 v8; 
  AttachmentProgression *v9; 
  unsigned int v10; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, "USAGE: Gunsmith.GetGunUnlockInfo( <controllerIndex><challengeID> )\n");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Gunsmith.GetGunUnlockInfo( <controllerIndex> )\n");
  if ( !j_lua_isstring(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Gunsmith.GetGunUnlockInfo( <challengeID> )\n");
  v2 = lui_tointeger32(luaVM, 1);
  progress = 0i64;
  v4 = lui_tointeger32(luaVM, 2);
  v5 = 0;
  ClientFromController = CL_Mgr_GetClientFromController(v2);
  v7 = Online_GunSmith::s_instance.m_totalGunUnlocks[ClientFromController];
  if ( v7 )
  {
    v8 = ClientFromController;
    while ( v4 != Online_GunSmith::s_instance.m_gunUnlocks[v8][v5].id )
    {
      if ( ++v5 >= v7 )
        goto LABEL_11;
    }
    v9 = &Online_GunSmith::s_instance.m_gunUnlocks[v8][v5];
  }
  else
  {
LABEL_11:
    v9 = NULL;
  }
  j_lua_createtable(luaVM, 0, 0);
  if ( v9 )
    progress = v9->progress;
  LUI_SetTableInt("progress", progress, luaVM);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v10 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v10);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetWeaponMasteryInfo
==============
*/
__int64 LUI_CoD_LuaCall_GetWeaponMasteryInfo(lua_State *const luaVM)
{
  int v2; 
  __int64 progress; 
  __int64 v4; 
  int v5; 
  LocalClientNum_t ClientFromController; 
  unsigned int v7; 
  __int64 v8; 
  AttachmentProgression *v9; 
  unsigned int v10; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, "USAGE: Gunsmith.GetWeaponMasteryInfo( <controllerIndex><challengeID> )\n");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Gunsmith.GetWeaponMasteryInfo( <controllerIndex> )\n");
  if ( !j_lua_isstring(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Gunsmith.GetWeaponMasteryInfo( <challengeID> )\n");
  v2 = lui_tointeger32(luaVM, 1);
  progress = 0i64;
  v4 = lui_tointeger32(luaVM, 2);
  v5 = 0;
  ClientFromController = CL_Mgr_GetClientFromController(v2);
  v7 = Online_GunSmith::s_instance.m_totalWeaponMastery[ClientFromController];
  if ( v7 )
  {
    v8 = ClientFromController;
    while ( v4 != Online_GunSmith::s_instance.m_weaponMastery[v8][v5].id )
    {
      if ( ++v5 >= v7 )
        goto LABEL_11;
    }
    v9 = &Online_GunSmith::s_instance.m_weaponMastery[v8][v5];
  }
  else
  {
LABEL_11:
    v9 = NULL;
  }
  j_lua_createtable(luaVM, 0, 0);
  if ( v9 )
    progress = v9->progress;
  LUI_SetTableInt("progress", progress, luaVM);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v10 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v10);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetBlueprintData
==============
*/
__int64 LUI_CoD_LuaCall_GetBlueprintData(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_CoD_LuaCall_GetBlueprintData_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_SetBlueprintData
==============
*/
__int64 LUI_CoD_LuaCall_SetBlueprintData(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_CoD_LuaCall_SetBlueprintData_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_UploadBlueprintData
==============
*/
__int64 LUI_CoD_LuaCall_UploadBlueprintData(lua_State *const luaVM)
{
  int v2; 
  __int64 v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: Gunsmith.UploadBlueprintData( <controllerIndex> )\n");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Gunsmith.UploadBlueprintData( <controllerIndex> )\n");
  v2 = lui_tointeger32(luaVM, 1);
  v3 = v2;
  if ( (unsigned int)v2 >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_gunsmith.cpp", 216, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( ( sizeof( *array_counter( s_blueprintsDirty ) ) + 0 ) )", "controllerIndex doesn't index ARRAY_COUNT( s_blueprintsDirty )\n\t%i not in [0, %i)", v2, 8) )
    __debugbreak();
  s_blueprintsDirty[v3] = 1;
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_HasBlueprintData
==============
*/
__int64 LUI_CoD_LuaCall_HasBlueprintData(lua_State *const luaVM)
{
  int v2; 
  bool IsValid; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: Gunsmith.HasBlueprintData( <controllerIndex> )\n");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Gunsmith.HasBlueprintData( <controllerIndex> )\n");
  v2 = lui_tointeger32(luaVM, 1);
  IsValid = XUID::IsValid(&s_blueprintData[v2].xuid);
  j_lua_pushboolean(luaVM, IsValid);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
Online_GunSmith::OnRegistered
==============
*/
void Online_GunSmith::OnRegistered(Online_GunSmith *this)
{
  ;
}

/*
==============
Online_GunSmith::OnUnregistered
==============
*/
void Online_GunSmith::OnUnregistered(Online_GunSmith *this)
{
  ;
}

/*
==============
Online_GunSmith::Init
==============
*/
char Online_GunSmith::Init(Online_GunSmith *this)
{
  FenceBluePrintsStatusCode *v2; 
  int v3; 
  XUID *p_xuid; 
  __int64 ClientFromController; 
  const XUID *v6; 
  __int64 v8; 
  __int64 v9; 
  XUID result; 

  FenceManager_RegisterForFenceDependenciesUpdatesForAllControllers(FENCE_GUNSMITH, (void (__fastcall *)(int, bool))Online_GunSmith::FenceDependeciesUpdated);
  v2 = s_blueprintsFenceStatusCode;
  v3 = 0;
  p_xuid = &s_blueprintData[0].xuid;
  do
  {
    ClientFromController = CL_Mgr_GetClientFromController(v3);
    memset_0(&this->m_weapons[ClientFromController], 0, sizeof(this->m_weapons[ClientFromController]));
    memset_0(this->m_attachments[ClientFromController], 0, sizeof(this->m_attachments[ClientFromController]));
    this->m_totalAttachments[ClientFromController] = 0;
    memset_0(this->m_reticles[ClientFromController], 0, sizeof(this->m_reticles[ClientFromController]));
    this->m_totalReticles[ClientFromController] = 0;
    memset_0(this->m_gunUnlocks[ClientFromController], 0, sizeof(this->m_gunUnlocks[ClientFromController]));
    this->m_totalGunUnlocks[ClientFromController] = 0;
    memset_0(this->m_weaponMastery[ClientFromController], 0, sizeof(this->m_weaponMastery[ClientFromController]));
    this->m_totalWeaponMastery[ClientFromController] = 0;
    if ( (unsigned int)v3 >= 8 )
    {
      LODWORD(v9) = 8;
      LODWORD(v8) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_gunsmith.cpp", 207, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( ( sizeof( *array_counter( s_blueprintData ) ) + 0 ) )", "controllerIndex doesn't index ARRAY_COUNT( s_blueprintData )\n\t%i not in [0, %i)", v8, v9) )
        __debugbreak();
    }
    v6 = XUID::NullXUID(&result);
    XUID::operator=(p_xuid, v6);
    *v2 = WAITING_TO_BE_DOWNLOADED;
    ++v3;
    ++v2;
    p_xuid += 6401;
  }
  while ( v3 < 8 );
  return 1;
}

/*
==============
Online_GunSmith::Uninit
==============
*/
void Online_GunSmith::Uninit(Online_GunSmith *this)
{
  ;
}

/*
==============
Online_GunSmith::Frame
==============
*/
void Online_GunSmith::Frame(Online_GunSmith *this)
{
  const dvar_t *v1; 
  int v3; 
  const dvar_t *v4; 
  unsigned int v5; 
  unsigned int v6; 
  int v7; 
  bool *v8; 

  v1 = DVARBOOL_online_blueprints_enabled;
  if ( !DVARBOOL_online_blueprints_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_blueprints_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.enabled )
  {
    v3 = Sys_Milliseconds();
    v4 = DVARINT_online_blueprints_retry_delay;
    v5 = v3 - s_blueprintTaskAttemptTime;
    v6 = s_blueprintTaskFailureCount;
    if ( !DVARINT_online_blueprints_retry_delay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_blueprints_retry_delay") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    if ( Live_GetShouldDemonwareRetryWithBase(v4->current.unsignedInt, v5, v6, 0x493E0u) )
    {
      v7 = 0;
      v8 = s_blueprintsDirty;
      do
      {
        if ( Live_IsUserSignedInToDemonware(v7) && !Live_UserIsGuest(v7) )
        {
          if ( !XUID::IsValid(&s_blueprintData[v7].xuid) )
          {
            Online_GunSmith::DownloadBlueprints(&Online_GunSmith::s_instance, v7);
            return;
          }
          if ( *v8 )
          {
            Online_GunSmith::UploadBlueprints_Internal(this, v7);
            return;
          }
        }
        ++v7;
        ++v8;
      }
      while ( v7 < 8 );
    }
  }
}

/*
==============
Online_GunSmith::ControllerFrame
==============
*/
void Online_GunSmith::ControllerFrame(Online_GunSmith *this, const int controllerIndex)
{
  ;
}

/*
==============
Online_GunSmith::OnSignedIn
==============
*/
void Online_GunSmith::OnSignedIn(Online_GunSmith *this, const int controllerIndex, GenericSignInState signinState)
{
  ;
}

/*
==============
Online_GunSmith::OnSignedOut
==============
*/

void __fastcall Online_GunSmith::OnSignedOut(Online_GunSmith *this, const int controllerIndex, GenericSignOutState signOutState)
{
  Online_GunSmith::Reset(this, controllerIndex);
}

/*
==============
Online_GunSmith::OnDisconnect
==============
*/
void Online_GunSmith::OnDisconnect(Online_GunSmith *this, ONLINE_DISCONNECT reason)
{
  ;
}

/*
==============
Online_GunSmith::RegisterLuaFunctions
==============
*/
void Online_GunSmith::RegisterLuaFunctions(Online_GunSmith *this, lua_State *luaVM)
{
  j_luaL_register(luaVM, "Gunsmith", Gunsmith_methods);
  j_lua_settop(luaVM, -2);
}

/*
==============
Online_GunSmith::OutputCurrentState
==============
*/
void Online_GunSmith::OutputCurrentState(Online_GunSmith *this, const int controllerIndex)
{
  Com_Printf(25, "Online_GunSmith DUMP START controllerIndex %d\n", (unsigned int)controllerIndex);
  Com_Printf(25, "%s is %.2fkb in size.\n", this->m_name, DOUBLE_132_984375);
  Com_Printf(25, "Online_GunSmith DUMP END\n");
}

/*
==============
Online_GunSmith::AddProgression
==============
*/
void Online_GunSmith::AddProgression(Online_GunSmith *this, const int controllerIndex, int kind, bdAchievementState *state)
{
  bdAchievementState *v4; 
  __int64 v7; 
  __int64 ClientFromController; 
  GunsmithWeapons *v9; 
  unsigned __int64 Id; 
  int v11; 
  int total_weapons; 
  __int64 v13; 
  unsigned __int64 *p_id; 
  const char *v15; 
  unsigned int i; 
  const bdAchievementProgress *MultiProgress; 
  unsigned __int64 AchievementCurrentProgress; 
  const char *TargetName; 
  const char *Name; 
  const char *v21; 
  __int64 v22; 
  const char *v23; 
  signed __int64 v24; 
  int v25; 
  int v26; 
  int v28; 
  int v29; 
  _BYTE *v30; 
  unsigned __int64 v31; 
  unsigned int v32; 
  bdAchievementState *v33; 
  const bdAchievementProgress *v34; 
  unsigned __int64 v35; 
  const char *v36; 
  const char *v37; 
  const char *v38; 
  __int64 v39; 
  const char *v40; 
  signed __int64 v41; 
  int v42; 
  int v43; 
  int v45; 
  int v46; 
  _BYTE *v47; 
  unsigned __int64 v48; 
  const char *v49; 
  __int64 v50; 
  const char *v51; 
  signed __int64 v52; 
  int v53; 
  int v54; 
  int v56; 
  int v57; 
  const dvar_t *v58; 
  const char *v59; 
  __int64 v60; 
  const char *v61; 
  signed __int64 v62; 
  int v63; 
  int v64; 
  int v66; 
  int v67; 
  const dvar_t *v68; 
  AttachmentProgression *v69; 
  const char *v70; 
  unsigned int v71; 
  AttachmentProgression *v72; 
  const char *v73; 
  unsigned int Progress; 
  AttachmentProgression *v75; 
  const char *v76; 
  unsigned int v77; 
  AttachmentProgression *v78; 
  const char *v79; 
  unsigned int v80; 
  StringTable *tablePtr; 
  unsigned int v82; 
  int v83; 
  int v84; 
  int controllerIndexa; 
  Online_GunSmith *v86; 
  __int64 v87; 
  bdAchievementProgress Buf; 

  v87 = -2i64;
  v4 = state;
  tablePtr = (StringTable *)state;
  controllerIndexa = controllerIndex;
  v86 = this;
  v7 = 0i64;
  v84 = 0;
  ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
  v9 = &this->m_weapons[ClientFromController];
  Id = bdAchievementState::getId(v4);
  if ( Id >= 0x1E8480 )
  {
    if ( kind == 5 )
    {
      v11 = 0;
      v83 = 0;
      total_weapons = v9->total_weapons;
      if ( total_weapons <= 0 )
      {
LABEL_8:
        if ( (unsigned int)total_weapons >= 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_gunsmith.cpp", 852, ASSERT_TYPE_ASSERT, "(unsigned)( weapons->total_weapons ) < (unsigned)( 64 )", "weapons->total_weapons doesn't index MAX_PROGRESSION_WEAPONS\n\t%i not in [0, %i)", total_weapons, 64) )
          __debugbreak();
        if ( v9->total_weapons < 64 )
        {
          v9->weapons[v9->total_weapons].id = bdAchievementState::getId(v4);
          StringTable_GetAsset("loot/weapon_ids.csv", (const StringTable **)&tablePtr);
          if ( !tablePtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_gunsmith.cpp", 860, ASSERT_TYPE_ASSERT, "(weaponTable)", (const char *)&queryFormat, "weaponTable") )
            __debugbreak();
          v15 = j_va("%ld", v9->weapons[v9->total_weapons].id - 2000000);
          v9->weapons[v9->total_weapons].ref = StringTable_Lookup(tablePtr, 0, v15, 1);
          for ( i = 0; i < bdAchievementState::getNumMultiProgresses(v4); ++i )
          {
            MultiProgress = bdAchievementState::getMultiProgress(v4, i);
            *((_QWORD *)&Buf.__vftable + 1) = &bdAchievementProgress::`vbtable';
            bdReferencable::bdReferencable((bdReferencable *)Buf.gap48, (const bdReferencable *)((char *)&MultiProgress->__vftable + *(int *)(*((_QWORD *)&MultiProgress->__vftable + 1) + 4i64) + 8));
            LODWORD(v7) = v7 | 2;
            v84 = v7;
            bdStructBufferSerializable::bdStructBufferSerializable(&Buf, MultiProgress);
            Buf.__vftable = (bdAchievementProgress_vtbl *)&bdAchievementProgress::`vftable'{for `bdStructBufferSerializable'};
            *(_QWORD *)&Buf.m_targetName[*(int *)(*((_QWORD *)&Buf.__vftable + 1) + 4i64) - 24] = &bdAchievementProgress::`vftable'{for `bdReferencable'};
            *(bdStructBufferSerializable *)((char *)&Buf.bdStructBufferSerializable + 16) = *(bdStructBufferSerializable *)((char *)&MultiProgress->bdStructBufferSerializable + 16);
            Buf.m_targetName[16] = MultiProgress->m_targetName[16];
            Buf.m_currentProgress = MultiProgress->m_currentProgress;
            Buf.m_targetProgress = MultiProgress->m_targetProgress;
            AchievementCurrentProgress = bdAchievementProgress::getAchievementCurrentProgress(&Buf);
            TargetName = bdAchievementProgress::getTargetName(&Buf);
            Name = bdAchievementState::getName(v4);
            Com_Printf(25, "Added (%s) %s = %ld\n", Name, TargetName, AchievementCurrentProgress);
            v21 = bdAchievementProgress::getTargetName(&Buf);
            v22 = 0x7FFFFFFFi64;
            v23 = "xp";
            if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
              __debugbreak();
            v24 = v21 - "xp";
            while ( 1 )
            {
              v25 = (unsigned __int8)v23[v24];
              v26 = *(unsigned __int8 *)v23++;
              if ( !v22-- )
              {
LABEL_28:
                v9->weapons[v9->total_weapons].xp = bdAchievementProgress::getAchievementCurrentProgress(&Buf);
                goto LABEL_29;
              }
              if ( v25 != v26 )
              {
                v28 = v25 + 32;
                if ( (unsigned int)(v25 - 65) > 0x19 )
                  v28 = v25;
                v25 = v28;
                v29 = v26 + 32;
                if ( (unsigned int)(v26 - 65) > 0x19 )
                  v29 = v26;
                if ( v25 != v29 )
                  break;
              }
              if ( !v25 )
                goto LABEL_28;
            }
            v59 = bdAchievementProgress::getTargetName(&Buf);
            v60 = 0x7FFFFFFFi64;
            v61 = "rank";
            if ( !v59 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
              __debugbreak();
            v62 = v59 - "rank";
            do
            {
              v63 = (unsigned __int8)v61[v62];
              v64 = *(unsigned __int8 *)v61++;
              if ( !v60-- )
                break;
              if ( v63 != v64 )
              {
                v66 = v63 + 32;
                if ( (unsigned int)(v63 - 65) > 0x19 )
                  v66 = v63;
                v63 = v66;
                v67 = v64 + 32;
                if ( (unsigned int)(v64 - 65) > 0x19 )
                  v67 = v64;
                if ( v63 != v67 )
                  goto LABEL_29;
              }
            }
            while ( v63 );
            v9->weapons[v9->total_weapons].rank = bdAchievementProgress::getAchievementCurrentProgress(&Buf);
LABEL_29:
            v30 = memchr_0(&Buf.__vftable + 2, 0, 0x21ui64);
            if ( v30 )
              v31 = v30 - (_BYTE *)(&Buf.__vftable + 2);
            else
              v31 = 33i64;
            bdHandleAssert(v31 < 0x21, "bdStrnlen(m_buffer, BufferSize) < BufferSize", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<32>::~bdStructFixedSizeString", 0x1Fu, "Buffer overrun detected");
            bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&Buf.__vftable + 2));
            bdReferencable::~bdReferencable((bdReferencable *)Buf.gap48);
          }
          v68 = DVARBOOL_online_challenge_update_player_data_once_when_done;
          if ( !DVARBOOL_online_challenge_update_player_data_once_when_done && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_challenge_update_player_data_once_when_done") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v68);
          if ( !v68->current.enabled )
            Online_GunSmith::UpdateWeaponStats(v86, controllerIndexa, v9->total_weapons);
          ++v9->total_weapons;
        }
      }
      else
      {
        v13 = 0i64;
        p_id = &v9->weapons[0].id;
        while ( *p_id != Id )
        {
          v83 = ++v11;
          ++v13;
          p_id += 4;
          if ( v11 >= total_weapons )
          {
            v4 = (bdAchievementState *)tablePtr;
            goto LABEL_8;
          }
        }
        v32 = 0;
        v82 = 0;
        if ( bdAchievementState::getNumMultiProgresses((bdAchievementState *)tablePtr) )
        {
          v33 = (bdAchievementState *)tablePtr;
          do
          {
            v34 = bdAchievementState::getMultiProgress(v33, v32);
            *((_QWORD *)&Buf.__vftable + 1) = &bdAchievementProgress::`vbtable';
            bdReferencable::bdReferencable((bdReferencable *)Buf.gap48, (const bdReferencable *)((char *)&v34->__vftable + *(int *)(*((_QWORD *)&v34->__vftable + 1) + 4i64) + 8));
            LODWORD(v7) = v7 | 1;
            v84 = v7;
            bdStructBufferSerializable::bdStructBufferSerializable(&Buf, v34);
            Buf.__vftable = (bdAchievementProgress_vtbl *)&bdAchievementProgress::`vftable'{for `bdStructBufferSerializable'};
            *(_QWORD *)&Buf.m_targetName[*(int *)(*((_QWORD *)&Buf.__vftable + 1) + 4i64) - 24] = &bdAchievementProgress::`vftable'{for `bdReferencable'};
            *(bdStructBufferSerializable *)((char *)&Buf.bdStructBufferSerializable + 16) = *(bdStructBufferSerializable *)((char *)&v34->bdStructBufferSerializable + 16);
            Buf.m_targetName[16] = v34->m_targetName[16];
            Buf.m_currentProgress = v34->m_currentProgress;
            Buf.m_targetProgress = v34->m_targetProgress;
            v35 = bdAchievementProgress::getAchievementCurrentProgress(&Buf);
            v36 = bdAchievementProgress::getTargetName(&Buf);
            v37 = bdAchievementState::getName(v33);
            Com_Printf(25, "Updated (%s) %s = %ld\n", v37, v36, v35);
            v38 = bdAchievementProgress::getTargetName(&Buf);
            v39 = 0x7FFFFFFFi64;
            v40 = "xp";
            if ( !v38 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
              __debugbreak();
            v41 = v38 - "xp";
            while ( 1 )
            {
              v42 = (unsigned __int8)v40[v41];
              v43 = *(unsigned __int8 *)v40++;
              if ( !v39-- )
              {
LABEL_45:
                v9->weapons[v13].xp = bdAchievementProgress::getAchievementCurrentProgress(&Buf);
                goto LABEL_46;
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
                goto LABEL_45;
            }
            v49 = bdAchievementProgress::getTargetName(&Buf);
            v50 = 0x7FFFFFFFi64;
            v51 = "rank";
            if ( !v49 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
              __debugbreak();
            v52 = v49 - "rank";
            do
            {
              v53 = (unsigned __int8)v51[v52];
              v54 = *(unsigned __int8 *)v51++;
              if ( !v50-- )
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
                  goto LABEL_46;
              }
            }
            while ( v53 );
            v9->weapons[v13].rank = bdAchievementProgress::getAchievementCurrentProgress(&Buf);
LABEL_46:
            v47 = memchr_0(&Buf.__vftable + 2, 0, 0x21ui64);
            if ( v47 )
              v48 = v47 - (_BYTE *)(&Buf.__vftable + 2);
            else
              v48 = 33i64;
            bdHandleAssert(v48 < 0x21, "bdStrnlen(m_buffer, BufferSize) < BufferSize", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<32>::~bdStructFixedSizeString", 0x1Fu, "Buffer overrun detected");
            bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&Buf.__vftable + 2));
            bdReferencable::~bdReferencable((bdReferencable *)Buf.gap48);
            v32 = ++v82;
          }
          while ( v82 < bdAchievementState::getNumMultiProgresses(v33) );
          v11 = v83;
        }
        v58 = DVARBOOL_online_challenge_update_player_data_once_when_done;
        if ( !DVARBOOL_online_challenge_update_player_data_once_when_done && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_challenge_update_player_data_once_when_done") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v58);
        if ( !v58->current.enabled )
          Online_GunSmith::UpdateWeaponStats(v86, controllerIndexa, v11);
      }
      return;
    }
    goto LABEL_100;
  }
  if ( kind != 5 )
  {
LABEL_100:
    switch ( kind )
    {
      case 16:
        v72 = this->m_reticles[ClientFromController];
        do
        {
          if ( Id == v72->id )
          {
            v72->progress = bdAchievementState::getProgress(v4);
            Progress = bdAchievementState::getProgress(v4);
            Com_Printf(25, "Updated Reticle Challenge %lu with progress %d\n", Id, Progress);
            return;
          }
          ++v7;
          ++v72;
        }
        while ( v7 < 1792 );
        if ( this->m_totalReticles[ClientFromController] >= 0x700 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_gunsmith.cpp", 934, ASSERT_TYPE_ASSERT, "(unsigned)( m_totalReticles[localClientNum] ) < (unsigned)( 64 * 28 )", "m_totalReticles[localClientNum] doesn't index MAX_PROGRESSION_ATTACHMENTS\n\t%i not in [0, %i)", this->m_totalReticles[ClientFromController], 1792) )
          __debugbreak();
        if ( this->m_totalReticles[ClientFromController] < 0x700 )
        {
          v73 = bdAchievementState::getName(v4);
          Com_Printf(25, "GUNSMITH RETICLE: %lu (%s) has been found and added.\n", Id, v73);
          this->m_reticles[ClientFromController][this->m_totalReticles[ClientFromController]].id = Id;
          this->m_reticles[ClientFromController][this->m_totalReticles[ClientFromController]++].progress = bdAchievementState::getProgress(v4);
        }
        break;
      case 25:
        v75 = this->m_gunUnlocks[ClientFromController];
        do
        {
          if ( Id == v75->id )
          {
            v75->progress = bdAchievementState::getProgress(v4);
            v77 = bdAchievementState::getProgress(v4);
            Com_Printf(25, "Updated Gun Unlock Challenge %lu with progress %d\n", Id, v77);
            return;
          }
          ++v7;
          ++v75;
        }
        while ( v7 < 40 );
        if ( this->m_totalGunUnlocks[ClientFromController] >= 0x28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_gunsmith.cpp", 962, ASSERT_TYPE_ASSERT, "(unsigned)( m_totalGunUnlocks[localClientNum] ) < (unsigned)( 40 )", "m_totalGunUnlocks[localClientNum] doesn't index MAX_GUN_UNLOCKS\n\t%i not in [0, %i)", this->m_totalGunUnlocks[ClientFromController], 40) )
          __debugbreak();
        if ( this->m_totalGunUnlocks[ClientFromController] < 0x28 )
        {
          v76 = bdAchievementState::getName(v4);
          Com_Printf(25, "GUNSMITH GUN UNLOCK: %lu (%s) has been found and added.\n", Id, v76);
          this->m_gunUnlocks[ClientFromController][this->m_totalGunUnlocks[ClientFromController]].id = Id;
          this->m_gunUnlocks[ClientFromController][this->m_totalGunUnlocks[ClientFromController]++].progress = bdAchievementState::getProgress(v4);
        }
        break;
      case 31:
        v78 = this->m_weaponMastery[ClientFromController];
        do
        {
          if ( Id == v78->id )
          {
            v78->progress = bdAchievementState::getProgress(v4);
            v80 = bdAchievementState::getProgress(v4);
            Com_Printf(25, "Updated Weapon Mastery Challenge %lu with progress %d\n", Id, v80);
            return;
          }
          ++v7;
          ++v78;
        }
        while ( v7 < 500 );
        if ( this->m_totalWeaponMastery[ClientFromController] >= 0x1F4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_gunsmith.cpp", 990, ASSERT_TYPE_ASSERT, "(unsigned)( m_totalWeaponMastery[localClientNum] ) < (unsigned)( 500 )", "m_totalWeaponMastery[localClientNum] doesn't index MAX_MASTERY_CHALLENGES\n\t%i not in [0, %i)", this->m_totalWeaponMastery[ClientFromController], 500) )
          __debugbreak();
        if ( this->m_totalWeaponMastery[ClientFromController] < 0x1F4 )
        {
          v79 = bdAchievementState::getName(v4);
          Com_Printf(25, "GUNSMITH WEAPON MASTERY: %lu (%s) has been found and added.\n", Id, v79);
          this->m_weaponMastery[ClientFromController][this->m_totalWeaponMastery[ClientFromController]].id = Id;
          this->m_weaponMastery[ClientFromController][this->m_totalWeaponMastery[ClientFromController]++].progress = bdAchievementState::getProgress(v4);
        }
        break;
    }
    return;
  }
  v69 = this->m_attachments[ClientFromController];
  do
  {
    if ( Id == v69->id )
    {
      v69->progress = bdAchievementState::getProgress(v4);
      v71 = bdAchievementState::getProgress(v4);
      Com_Printf(25, "Updated Camo/Attachment Challenge %lu with progress %d\n", Id, v71);
      return;
    }
    ++v7;
    ++v69;
  }
  while ( v7 < 1792 );
  if ( this->m_totalAttachments[ClientFromController] >= 0x700 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_gunsmith.cpp", 906, ASSERT_TYPE_ASSERT, "(unsigned)( m_totalAttachments[localClientNum] ) < (unsigned)( 64 * 28 )", "m_totalAttachments[localClientNum] doesn't index MAX_PROGRESSION_ATTACHMENTS\n\t%i not in [0, %i)", this->m_totalAttachments[ClientFromController], 1792) )
    __debugbreak();
  if ( this->m_totalAttachments[ClientFromController] < 0x700 )
  {
    v70 = bdAchievementState::getName(v4);
    Com_Printf(25, "GUNSMITH: %lu (%s) has been found and added.\n", Id, v70);
    this->m_attachments[ClientFromController][this->m_totalAttachments[ClientFromController]].id = Id;
    this->m_attachments[ClientFromController][this->m_totalAttachments[ClientFromController]++].progress = bdAchievementState::getProgress(v4);
  }
}

/*
==============
Online_GunSmith::DiscardBlueprints
==============
*/
void Online_GunSmith::DiscardBlueprints(Online_GunSmith *this, const int controllerIndex)
{
  __int64 v2; 
  const XUID *v3; 
  int v5; 
  XUID result; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v5 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_gunsmith.cpp", 207, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( ( sizeof( *array_counter( s_blueprintData ) ) + 0 ) )", "controllerIndex doesn't index ARRAY_COUNT( s_blueprintData )\n\t%i not in [0, %i)", controllerIndex, v5) )
      __debugbreak();
  }
  v3 = XUID::NullXUID(&result);
  XUID::operator=(&s_blueprintData[v2].xuid, v3);
  s_blueprintsFenceStatusCode[v2] = WAITING_TO_BE_DOWNLOADED;
}

/*
==============
Online_GunSmith::DownloadBlueprints
==============
*/
void Online_GunSmith::DownloadBlueprints(Online_GunSmith *this, const int controllerIndex)
{
  __int64 v2; 
  OnlineStorageTaskFileEntry *fileEntries; 
  __int64 v4; 
  DWServicesAccess *Instance; 
  OnlineStorage *v6; 
  char CurrentPlatform; 
  __int64 v8; 
  unsigned int m_size; 
  unsigned int m_capacity; 
  bdObjectStoreErrorWrappedObject *m_data; 
  unsigned int v12; 
  bdArray<bdObjectStoreTag> *p_m_tags; 
  __int64 v14; 
  __int64 v15; 
  bool v16; 
  bdObjectStoreErrorWrappedObject *v17; 
  OnlineStorage *v18; 
  bdArray<bdObjectStoreTag> *v19; 
  __int64 v20; 
  bdArray<bdObjectStoreErrorWrappedObject> objectList; 
  XUID result; 
  __int64 v23; 
  bdObjectStoreErrorWrappedObject *v24; 
  bdObjectStoreErrorWrappedObject *v25; 
  OnlineStorageTask newTask; 
  bdObjectStoreErrorWrappedObject __that; 
  bdObjectStoreObject object; 

  v23 = -2i64;
  v2 = controllerIndex;
  result.m_id = (unsigned __int64)&newTask;
  *(_QWORD *)&newTask.taskCreateRequest.m_controllerIndex = -1i64;
  memset(&newTask.taskCreateRequest.m_appData, 0, 48);
  newTask.taskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
  newTask.taskCreateRequest.m_timeoutInSeconds = 0;
  fileEntries = newTask.fileEntries;
  v4 = 16i64;
  do
  {
    OnlineStorageTaskFileEntry::OnlineStorageTaskFileEntry(fileEntries++);
    --v4;
  }
  while ( v4 );
  objectList.m_data = NULL;
  *(_QWORD *)&objectList.m_capacity = 0i64;
  if ( !Live_UserIsGuest(v2) )
  {
    if ( s_downloadingBlueprints )
    {
      s_blueprintsFenceStatusCode[v2] = ATTEMPTING_DOWNLOAD_ALREADY_IN_PROGRESS;
    }
    else if ( Live_IsUserSignedInToDemonware(v2) )
    {
      Instance = DWServicesAccess::GetInstance();
      if ( DWServicesAccess::isReady(Instance, v2) )
      {
        if ( OnlineStorage::GetInstance()->m_initialized )
        {
          memset_0(&newTask, 0, sizeof(newTask));
          Live_GetXuid(&result, v2);
          newTask.fileEntryCount = 0;
          *(_WORD *)&newTask.operation = 1;
          newTask.priority[0] = 4;
          newTask.controllerIndex = v2;
          newTask.onTaskCompleteCallback = OnBlueprintsDownloadComplete;
          bdObjectStoreGetUserObjectsVectorizedResponse::reset(&s_getUserStorageResponse);
          newTask.getUserStorageResponse = &s_getUserStorageResponse;
          Com_DPrintf(16, "Requesting user storage file %s for controller %d\n", "blueprints", (unsigned int)v2);
          Core_strcpy_truncate(newTask.fileEntries[newTask.fileEntryCount].fileName, 0x40ui64, "blueprints");
          XUID::operator=(&newTask.fileEntries[newTask.fileEntryCount].xuid, &result);
          v6 = OnlineStorage::GetInstance();
          CurrentPlatform = OnlineStorage::GetCurrentPlatform(v6);
          newTask.fileEntries[newTask.fileEntryCount].platform[0] = CurrentPlatform;
          v8 = v2;
          newTask.fileEntries[newTask.fileEntryCount].buffer = s_blueprintData[v2].data;
          newTask.fileEntries[newTask.fileEntryCount].bufferSize = 51200;
          bdObjectStoreErrorWrappedObject::bdObjectStoreErrorWrappedObject(&__that);
          bdObjectStoreObject::bdObjectStoreObject(&object, s_blueprintData[v2].data, 0xC800ui64);
          bdObjectStoreErrorWrappedObject::setObject(&__that, &object);
          m_size = objectList.m_size;
          if ( objectList.m_size == objectList.m_capacity )
          {
            m_capacity = objectList.m_capacity;
            if ( !objectList.m_capacity )
              m_capacity = 1;
            m_data = NULL;
            v12 = objectList.m_capacity + m_capacity;
            if ( v12 )
            {
              m_data = (bdObjectStoreErrorWrappedObject *)bdMemory::allocate(3528i64 * v12);
              bdArray<bdObjectStoreErrorWrappedObject>::copyConstructArrayArray(&objectList, m_data, objectList.m_data, objectList.m_size);
              m_size = objectList.m_size;
            }
            if ( m_size )
            {
              p_m_tags = &objectList.m_data->m_object.m_metadata.m_tags;
              v14 = m_size;
              do
              {
                bdMemory::deallocate(p_m_tags->m_data);
                p_m_tags->m_data = NULL;
                *(_QWORD *)&p_m_tags->m_capacity = 0i64;
                bdObjectStoreACL::~bdObjectStoreACL((bdObjectStoreACL *)&p_m_tags[-201]);
                p_m_tags = (bdArray<bdObjectStoreTag> *)((char *)p_m_tags + 3528);
                --v14;
              }
              while ( v14 );
            }
            bdMemory::deallocate(objectList.m_data);
            objectList.m_data = m_data;
            objectList.m_capacity = v12;
            m_size = objectList.m_size;
          }
          else
          {
            m_data = objectList.m_data;
          }
          v15 = m_size;
          v16 = &m_data[v15] == NULL;
          v17 = &m_data[v15];
          v24 = v17;
          v25 = v17;
          if ( !v16 )
          {
            bdObjectStoreErrorWrappedObject::bdObjectStoreErrorWrappedObject(v17, &__that);
            m_size = objectList.m_size;
          }
          objectList.m_size = m_size + 1;
          ++newTask.fileEntryCount;
          bdMemory::deallocate(object.m_metadata.m_tags.m_data);
          object.m_metadata.m_tags.m_data = NULL;
          *(_QWORD *)&object.m_metadata.m_tags.m_capacity = 0i64;
          bdObjectStoreACL::~bdObjectStoreACL(&object.m_metadata.m_acl);
          bdMemory::deallocate(__that.m_object.m_metadata.m_tags.m_data);
          __that.m_object.m_metadata.m_tags.m_data = NULL;
          *(_QWORD *)&__that.m_object.m_metadata.m_tags.m_capacity = 0i64;
          bdObjectStoreACL::~bdObjectStoreACL(&__that.m_object.m_metadata.m_acl);
          bdObjectStoreGetUserObjectsVectorizedResponse::setObjectList(newTask.getUserStorageResponse, &objectList);
          s_blueprintTaskAttemptTime = Sys_Milliseconds();
          v18 = OnlineStorage::GetInstance();
          if ( OnlineStorage::EnqueueTask(v18, &newTask) )
          {
            s_blueprintsFenceStatusCode[v8] = DOWNLOAD_ATTEMPTED;
            s_downloadingBlueprints = 1;
          }
          else
          {
            ++s_blueprintTaskFailureCount;
            s_blueprintsFenceStatusCode[v8] = DOWNLOAD_ATTEMPT_UNABLE_TO_ENQUEUE_TASK;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_gunsmith.cpp", 534, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unable to download user storage file: Unable to enqueue the task!") )
              __debugbreak();
          }
        }
        else
        {
          s_blueprintsFenceStatusCode[v2] = ATTEMPTING_DOWNLOAD_ONLINE_STORAGE_NOT_INITED;
        }
      }
      else
      {
        s_blueprintsFenceStatusCode[v2] = ATTEMPTING_DOWNLOAD_SERVICES_NOT_READY;
      }
    }
    else
    {
      s_blueprintsFenceStatusCode[v2] = ATTEMPTING_DOWNLOAD_NOT_SIGNED_IN;
    }
  }
  if ( objectList.m_size )
  {
    v19 = &objectList.m_data->m_object.m_metadata.m_tags;
    v20 = objectList.m_size;
    do
    {
      bdMemory::deallocate(v19->m_data);
      v19->m_data = NULL;
      *(_QWORD *)&v19->m_capacity = 0i64;
      bdObjectStoreACL::~bdObjectStoreACL((bdObjectStoreACL *)&v19[-201]);
      v19 = (bdArray<bdObjectStoreTag> *)((char *)v19 + 3528);
      --v20;
    }
    while ( v20 );
  }
  bdMemory::deallocate(objectList.m_data);
  objectList.m_data = NULL;
  *(_QWORD *)&objectList.m_capacity = 0i64;
  TaskCreateRequest::~TaskCreateRequest(&newTask.taskCreateRequest);
}

/*
==============
Online_GunSmith::FenceDependeciesUpdated
==============
*/
void Online_GunSmith::FenceDependeciesUpdated(const int controllerIndex, const bool value)
{
  ;
}

/*
==============
Online_GunSmith::GetAttachment
==============
*/
AttachmentProgression *Online_GunSmith::GetAttachment(Online_GunSmith *this, const int controllerIndex, const int id)
{
  __int64 v4; 
  __int64 v5; 
  LocalClientNum_t ClientFromController; 
  unsigned int v7; 
  __int64 v8; 
  AttachmentProgression *i; 

  v4 = id;
  v5 = 0i64;
  ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
  v7 = this->m_totalAttachments[ClientFromController];
  if ( !v7 )
    return 0i64;
  v8 = ClientFromController;
  for ( i = this->m_attachments[v8]; v4 != i->id; ++i )
  {
    v5 = (unsigned int)(v5 + 1);
    if ( (unsigned int)v5 >= v7 )
      return 0i64;
  }
  return &this->m_attachments[0][v5 + v8 * 1792];
}

/*
==============
Online_GunSmith::GetBlueprintsFenceStatusCode
==============
*/
__int64 Online_GunSmith::GetBlueprintsFenceStatusCode(Online_GunSmith *this, const int controllerIndex)
{
  return (unsigned int)s_blueprintsFenceStatusCode[controllerIndex];
}

/*
==============
Online_GunSmith::GetGunUnlock
==============
*/
AttachmentProgression *Online_GunSmith::GetGunUnlock(Online_GunSmith *this, const int controllerIndex, const int id)
{
  __int64 v4; 
  __int64 v5; 
  LocalClientNum_t ClientFromController; 
  __int64 v7; 
  unsigned int v8; 
  AttachmentProgression *i; 

  v4 = id;
  v5 = 0i64;
  ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
  v7 = ClientFromController;
  v8 = this->m_totalGunUnlocks[ClientFromController];
  if ( !v8 )
    return 0i64;
  for ( i = this->m_gunUnlocks[ClientFromController]; v4 != i->id; ++i )
  {
    v5 = (unsigned int)(v5 + 1);
    if ( (unsigned int)v5 >= v8 )
      return 0i64;
  }
  return &this->m_gunUnlocks[v7][v5];
}

/*
==============
Online_GunSmith::GetInstance
==============
*/
Online_GunSmith *Online_GunSmith::GetInstance()
{
  return &Online_GunSmith::s_instance;
}

/*
==============
Online_GunSmith::GetInstancePtr
==============
*/
Online_GunSmith *Online_GunSmith::GetInstancePtr()
{
  return &Online_GunSmith::s_instance;
}

/*
==============
Online_GunSmith::GetReticle
==============
*/
AttachmentProgression *Online_GunSmith::GetReticle(Online_GunSmith *this, const int controllerIndex, const int id)
{
  __int64 v4; 
  int v5; 
  LocalClientNum_t ClientFromController; 
  unsigned int v7; 
  AttachmentProgression *i; 

  v4 = id;
  v5 = 0;
  ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
  v7 = this->m_totalReticles[ClientFromController];
  if ( !v7 )
    return 0i64;
  for ( i = this->m_reticles[ClientFromController]; v4 != i->id; ++i )
  {
    if ( ++v5 >= v7 )
      return 0i64;
  }
  return &this->m_reticles[ClientFromController][v5];
}

/*
==============
Online_GunSmith::GetWeapon
==============
*/
WeaponProgression *Online_GunSmith::GetWeapon(Online_GunSmith *this, const int controllerIndex, const char *ref)
{
  int v4; 
  char *v5; 
  const char **v6; 
  const char *v7; 
  __int64 v8; 
  const char *v9; 
  int v10; 
  __int64 v11; 
  int v12; 
  int v13; 
  int v14; 

  v4 = 0;
  v5 = (char *)this + 2056 * CL_Mgr_GetClientFromController(controllerIndex);
  v6 = (const char **)(v5 + 64);
  if ( *((int *)v5 + 528) > 0 )
  {
    do
    {
      v7 = *v6;
      v8 = 0x7FFFFFFFi64;
      if ( !ref && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
        __debugbreak();
      v9 = (const char *)(ref - v7);
      while ( 1 )
      {
        v10 = (unsigned __int8)v7[(_QWORD)v9];
        v11 = v8;
        v12 = *(unsigned __int8 *)v7++;
        --v8;
        if ( !v11 )
          return (WeaponProgression *)&v5[32 * v4 + 64];
        if ( v10 != v12 )
        {
          v13 = v10 + 32;
          if ( (unsigned int)(v10 - 65) > 0x19 )
            v13 = v10;
          v10 = v13;
          v14 = v12 + 32;
          if ( (unsigned int)(v12 - 65) > 0x19 )
            v14 = v12;
          if ( v10 != v14 )
            break;
        }
        if ( !v10 )
          return (WeaponProgression *)&v5[32 * v4 + 64];
      }
      ++v4;
      v6 += 4;
    }
    while ( v4 < *((_DWORD *)v5 + 528) );
  }
  return 0i64;
}

/*
==============
Online_GunSmith::GetWeaponMastery
==============
*/
AttachmentProgression *Online_GunSmith::GetWeaponMastery(Online_GunSmith *this, const int controllerIndex, const int id)
{
  __int64 v4; 
  int v5; 
  LocalClientNum_t ClientFromController; 
  unsigned int v7; 
  AttachmentProgression *i; 

  v4 = id;
  v5 = 0;
  ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
  v7 = this->m_totalWeaponMastery[ClientFromController];
  if ( !v7 )
    return 0i64;
  for ( i = this->m_weaponMastery[ClientFromController]; v4 != i->id; ++i )
  {
    if ( ++v5 >= v7 )
      return 0i64;
  }
  return &this->m_weaponMastery[ClientFromController][v5];
}

/*
==============
Online_GunSmith::GetWeapons
==============
*/
GunsmithWeapons *Online_GunSmith::GetWeapons(Online_GunSmith *this, const int controllerIndex)
{
  return &this->m_weapons[CL_Mgr_GetClientFromController(controllerIndex)];
}

/*
==============
Online_GunSmith::HasBlueprints
==============
*/
bool Online_GunSmith::HasBlueprints(Online_GunSmith *this, const int controllerIndex)
{
  return XUID::IsValid(&s_blueprintData[controllerIndex].xuid);
}

/*
==============
LUI_CoD_LuaCall_GetBlueprintData_impl
==============
*/
__int64 LUI_CoD_LuaCall_GetBlueprintData_impl(lua_State *const luaVM)
{
  int v3; 
  __int64 v4; 
  const char *v5; 
  const DDLDef *Asset; 
  DDLType Type; 
  const char *Enum; 
  const char *String; 
  double Float; 
  DDLState state; 
  DDLState result; 
  DDLContext ddlContext; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, "USAGE: Gunsmith.GetBlueprintData( <controllerIndex>, <path> )\n");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Gunsmith.GetBlueprintData( <controllerIndex>, <path> )\n");
  if ( !j_lua_isstring(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Gunsmith.GetBlueprintData( <controllerIndex>, <path> )\n");
  v3 = lui_tointeger32(luaVM, 1);
  v4 = v3;
  if ( (unsigned int)v3 >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_gunsmith.cpp", 1332, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v3, 8) )
    __debugbreak();
  v5 = j_lua_tolstring(luaVM, 2, NULL);
  if ( !XUID::IsValid(&s_blueprintData[v4].xuid) )
  {
    Com_PrintWarning(13, "Blueprint data is not available for controller %d right now.\n", (unsigned int)v4);
    return 0i64;
  }
  __asm { vpxor   xmm0, xmm0, xmm0 }
  state.isValid = 0;
  *(_OWORD *)&state.member = _XMM0;
  state.offset = 0;
  state.arrayIndex = -1;
  Asset = Com_DDL_LoadAsset("ddl/mp/blueprints.ddl");
  if ( !Com_DDL_CreateContext(&s_blueprintData[v4], 51200, Asset, &ddlContext, NULL, NULL) )
  {
    Com_PrintWarning(13, "DDL: Unable to create ddl context for controller %d. This really shouldn't happen.\n", (unsigned int)v4);
    return 0i64;
  }
  state = *DDL_GetRootState(&result, Asset);
  if ( !NavigateBlueprintDDL(&state, v5) )
  {
    Com_PrintWarning(13, "DDL: Unable to navigate to blueprint field for controller %d. Double check that %s exists.\n", (unsigned int)v4, v5);
    return 0i64;
  }
  Type = DDL_GetType(&state);
  switch ( Type )
  {
    case DDL_UINT64_TYPE:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_gunsmith.cpp", 1369, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "uint64 is not a supported type in the blueprint interface due to lack of lua support") )
        __debugbreak();
      break;
    case DDL_FLOAT_TYPE:
      Float = DDL_GetFloat(&state, &ddlContext);
      j_lua_pushnumber(luaVM, *(float *)&Float);
      return 1i64;
    case DDL_STRING_TYPE:
      String = DDL_GetString(&state, &ddlContext);
      j_lua_pushstring(luaVM, String);
      return 1i64;
    case DDL_ENUM_TYPE:
      Enum = DDL_GetEnum(&state, &ddlContext);
      j_lua_pushstring(luaVM, Enum);
      return 1i64;
  }
  DDL_GetInt(&state, &ddlContext);
  _XMM1 = 0i64;
  __asm { vcvtsi2sd xmm1, xmm1, eax; n }
  j_lua_pushnumber(luaVM, *(long double *)&_XMM1);
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetWeaponInfo_impl
==============
*/
__int64 LUI_CoD_LuaCall_GetWeaponInfo_impl(lua_State *const luaVM)
{
  int v2; 
  const char *v3; 
  __int64 rank; 
  __int64 ClientFromController; 
  int v6; 
  int *p_total_weapons; 
  GunsmithWeapons *v8; 
  const char *ref; 
  __int64 v10; 
  signed __int64 v11; 
  int v12; 
  __int64 v13; 
  int v14; 
  int v15; 
  int v16; 
  WeaponProgression *v17; 
  GunsmithWeapons *v19; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, "USAGE: Gunsmith.GetWeaponInfo( <controllerIndex><weaponref> )\n");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Gunsmith.GetWeaponInfo( <controllerIndex> )\n");
  if ( !j_lua_isstring(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Gunsmith.GetWeaponInfo( <weaponref> )\n");
  v2 = lui_tointeger32(luaVM, 1);
  v3 = j_lua_tolstring(luaVM, 2, NULL);
  rank = 0i64;
  ClientFromController = CL_Mgr_GetClientFromController(v2);
  v6 = 0;
  p_total_weapons = &Online_GunSmith::s_instance.m_weapons[ClientFromController].total_weapons;
  v19 = &Online_GunSmith::s_instance.m_weapons[ClientFromController];
  if ( *p_total_weapons > 0 )
  {
    v8 = &Online_GunSmith::s_instance.m_weapons[ClientFromController];
    do
    {
      ref = v8->weapons[0].ref;
      v10 = 0x7FFFFFFFi64;
      if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      if ( !ref && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
        __debugbreak();
      v11 = v3 - ref;
      while ( 1 )
      {
        v12 = (unsigned __int8)ref[v11];
        v13 = v10;
        v14 = *(unsigned __int8 *)ref++;
        --v10;
        if ( !v13 )
        {
LABEL_24:
          v17 = &v19->weapons[v6];
          goto LABEL_27;
        }
        if ( v12 != v14 )
        {
          v15 = v12 + 32;
          if ( (unsigned int)(v12 - 65) > 0x19 )
            v15 = v12;
          v12 = v15;
          v16 = v14 + 32;
          if ( (unsigned int)(v14 - 65) > 0x19 )
            v16 = v14;
          if ( v12 != v16 )
            break;
        }
        if ( !v12 )
          goto LABEL_24;
      }
      ++v6;
      v8 = (GunsmithWeapons *)((char *)v8 + 32);
    }
    while ( v6 < *p_total_weapons );
  }
  v17 = NULL;
LABEL_27:
  j_lua_createtable(luaVM, 0, 0);
  if ( v17 )
  {
    LUI_SetTableInt("xp", v17->xp, luaVM);
    rank = v17->rank;
  }
  else
  {
    LUI_SetTableInt("xp", 0i64, luaVM);
  }
  LUI_SetTableInt("rank", rank, luaVM);
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_SetBlueprintData_impl
==============
*/
__int64 LUI_CoD_LuaCall_SetBlueprintData_impl(lua_State *const luaVM)
{
  __int64 v3; 
  const char *v4; 
  const DDLDef *Asset; 
  DDLType Type; 
  const char *v8; 
  int v9; 
  const char *v10; 
  double v11; 
  int v12; 
  DDLState state; 
  DDLState result; 
  DDLContext ddlContext; 

  if ( j_lua_gettop(luaVM) != 3 )
    j_luaL_error(luaVM, "USAGE: Gunsmith.SetBlueprintData( <controllerIndex>, <path>, <value> )\n");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Gunsmith.SetBlueprintData( <controllerIndex>, <path>, <value> )\n");
  if ( !j_lua_isstring(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Gunsmith.SetBlueprintData( <controllerIndex>, <path>, <value> )\n");
  v3 = lui_tointeger32(luaVM, 1);
  v4 = j_lua_tolstring(luaVM, 2, NULL);
  if ( !XUID::IsValid(&s_blueprintData[v3].xuid) )
  {
    Com_PrintWarning(13, "Blueprint data is not available for controller %d right now.\n", (unsigned int)v3);
    goto LABEL_23;
  }
  __asm { vpxor   xmm0, xmm0, xmm0 }
  state.isValid = 0;
  *(_OWORD *)&state.member = _XMM0;
  state.offset = 0;
  state.arrayIndex = -1;
  Asset = Com_DDL_LoadAsset("ddl/mp/blueprints.ddl");
  if ( !Com_DDL_CreateContext(&s_blueprintData[v3], 51200, Asset, &ddlContext, NULL, NULL) )
  {
    Com_PrintWarning(13, "DDL: Unable to create ddl context for controller %d. This really shouldn't happen.\n", (unsigned int)v3);
    goto LABEL_23;
  }
  state = *DDL_GetRootState(&result, Asset);
  if ( !NavigateBlueprintDDL(&state, v4) )
  {
    Com_PrintWarning(13, "DDL: Unable to navigate to blueprint field for controller %d. Double check that %s exists.\n", (unsigned int)v3, v4);
LABEL_23:
    v9 = 0;
    goto LABEL_24;
  }
  Type = DDL_GetType(&state);
  switch ( Type )
  {
    case DDL_UINT64_TYPE:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_gunsmith.cpp", 1449, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "uint64 is not a supported type in the blueprint interface due to lack of lua support") )
        __debugbreak();
      goto LABEL_19;
    case DDL_FLOAT_TYPE:
      v11 = lui_tonumber32(luaVM, 3);
      v9 = DDL_SetFloat(&state, &ddlContext, *(float *)&v11);
      goto LABEL_24;
    case DDL_STRING_TYPE:
      v10 = j_lua_tolstring(luaVM, 3, NULL);
      v9 = DDL_SetString(&state, &ddlContext, v10);
      goto LABEL_24;
  }
  if ( Type != DDL_ENUM_TYPE )
  {
LABEL_19:
    v12 = lui_tointeger32(luaVM, 3);
    v9 = DDL_SetInt(&state, &ddlContext, v12);
    goto LABEL_24;
  }
  v8 = j_lua_tolstring(luaVM, 3, NULL);
  v9 = DDL_SetEnum(&state, &ddlContext, v8);
LABEL_24:
  j_lua_pushboolean(luaVM, v9);
  return 1i64;
}

/*
==============
NavigateBlueprintDDL
==============
*/
char NavigateBlueprintDDL(DDLState *state, const char *path)
{
  unsigned __int64 v4; 
  char *v5; 
  int v6; 
  unsigned int v7; 
  char dest[256]; 

  v4 = -1i64;
  do
    ++v4;
  while ( path[v4] );
  if ( v4 > 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_gunsmith.cpp", 1296, ASSERT_TYPE_ASSERT, "(strlen( path ) <= sizeof( pathTemp ))", (const char *)&queryFormat, "strlen( path ) <= sizeof( pathTemp )") )
    __debugbreak();
  Core_strcpy(dest, 0x100ui64, path);
  v5 = strtok(dest, ".");
  if ( !v5 )
    return 1;
  while ( DDL_StateIsArrayRoot(state) )
  {
    v6 = atoi(v5);
    if ( !DDL_MoveToIndex(state, state, v6) )
    {
      v7 = atoi(v5);
      Com_Printf(28, "DDL: Failed to move to index %d\n.", v7);
      return 0;
    }
LABEL_11:
    v5 = strtok(NULL, ".");
    if ( !v5 )
      return 1;
  }
  if ( DDL_MoveToName(state, state, v5, 0) )
    goto LABEL_11;
  Com_Printf(28, "DDL: Failed to move to field %s\n.", v5);
  return 0;
}

/*
==============
OnBlueprintsDownloadComplete
==============
*/
void OnBlueprintsDownloadComplete(OnlineStorageTask *storageTask)
{
  unsigned int m_size; 
  __int64 controllerIndex; 
  int v4; 
  unsigned int v5; 
  __int64 v6; 
  unsigned __int8 **p_buffer; 
  const bdArray<bdObjectStoreErrorWrappedObject> *ObjectList; 
  bdObjectStoreErrorWrappedObject *v9; 
  bdObjectStoreObject *Object; 
  const unsigned __int8 *Content; 
  bdObjectStoreObject *v12; 
  unsigned __int64 ContentSize; 
  int v14; 
  size_t v15; 
  unsigned int fileEntryCount; 
  char *format; 
  Mem_LargeLocal v18; 
  DDLContext ddlContext; 
  DDLDef *def; 
  __int64 v21; 
  unsigned __int8 *to; 

  Mem_LargeLocal::Mem_LargeLocal(&v18, 0xC808ui64, "BlueprintData_t uncompressedData");
  to = (unsigned __int8 *)v18.m_ptr;
  if ( !storageTask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_gunsmith.cpp", 376, ASSERT_TYPE_ASSERT, "(storageTask != 0)", (const char *)&queryFormat, "storageTask != NULL") )
    __debugbreak();
  m_size = bdObjectStoreGetUserObjectsVectorizedResponse::getObjectList(storageTask->getUserStorageResponse)->m_size;
  controllerIndex = storageTask->controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    LODWORD(format) = storageTask->controllerIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_gunsmith.cpp", 381, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( ( sizeof( *array_counter( s_blueprintData ) ) + 0 ) )", "controllerIndex doesn't index ARRAY_COUNT( s_blueprintData )\n\t%i not in [0, %i)", format, 8) )
      __debugbreak();
  }
  if ( m_size != storageTask->fileEntryCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_gunsmith.cpp", 382, ASSERT_TYPE_ASSERT, "(responseCount == storageTask->fileEntryCount)", (const char *)&queryFormat, "responseCount == storageTask->fileEntryCount") )
    __debugbreak();
  def = (DDLDef *)Com_DDL_LoadAsset("ddl/mp/blueprints.ddl");
  v4 = 0;
  v5 = 0;
  if ( m_size )
  {
    v6 = 0i64;
    v21 = 0i64;
    p_buffer = &storageTask->fileEntries[0].buffer;
    do
    {
      ObjectList = bdObjectStoreGetUserObjectsVectorizedResponse::getObjectList(storageTask->getUserStorageResponse);
      bdHandleAssert(v5 < ObjectList->m_size, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdObjectStoreErrorWrappedObject>::operator []", 0x70u, "bdArray<T>::operator[], rangecheck failed");
      v9 = (bdObjectStoreErrorWrappedObject *)((char *)ObjectList->m_data + v6);
      if ( bdObjectStoreErrorWrappedObject::hasError(v9) )
      {
        if ( *bdObjectStoreErrorWrappedObject::getError(v9) == BD_OBJECTSTORE_OBJECT_NOT_FOUND_ERROR )
        {
          Com_PrintWarning(16, "No blueprints found for this user.  Resetting the file.\n");
          if ( !DDL_ResetContext(&s_blueprintData[controllerIndex], 51200, def, &ddlContext, NULL, NULL) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_gunsmith.cpp", 423, ASSERT_TYPE_ASSERT, "(DDL_ResetContext( s_blueprintData[controllerIndex].data, sizeof( s_blueprintData[controllerIndex].data ), bluePrintDDLDef, &context ))", (const char *)&queryFormat, "DDL_ResetContext( s_blueprintData[controllerIndex].data, sizeof( s_blueprintData[controllerIndex].data ), bluePrintDDLDef, &context )") )
            __debugbreak();
          ++v4;
        }
      }
      else
      {
        Object = (bdObjectStoreObject *)bdObjectStoreErrorWrappedObject::getObject(v9);
        Content = bdObjectStoreObject::getContent(Object);
        v12 = (bdObjectStoreObject *)bdObjectStoreErrorWrappedObject::getObject(v9);
        ContentSize = bdObjectStoreObject::getContentSize(v12);
        if ( (ContentSize > 0x7FFFFFFFFFFFFFFFi64 || ContentSize + 0x80000000 > 0xFFFFFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,unsigned __int64>(unsigned __int64)", "signed", (int)ContentSize, "unsigned", ContentSize) )
          __debugbreak();
        v14 = MemFile_DecompressWithZLib(Content, ContentSize, to, 51200);
        v15 = v14;
        if ( v14 > 0 )
        {
          if ( (unsigned int)v14 > *((_DWORD *)p_buffer + 2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_gunsmith.cpp", 401, ASSERT_TYPE_ASSERT, "(static_cast<uint32_t>( decompressedSize ) <= storageTask->fileEntries[fileIndex].bufferSize)", (const char *)&queryFormat, "static_cast<uint32_t>( decompressedSize ) <= storageTask->fileEntries[fileIndex].bufferSize") )
            __debugbreak();
          if ( DDL_IsChecksumValid(to, def) )
          {
            memcpy_0(*p_buffer, to, v15);
          }
          else
          {
            Com_PrintWarning(16, "Downloaded blueprints, but the checksum was invalid.  Resetting the file.\n");
            if ( !DDL_ResetContext(&s_blueprintData[controllerIndex], 51200, def, &ddlContext, NULL, NULL) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_gunsmith.cpp", 412, ASSERT_TYPE_ASSERT, "(DDL_ResetContext( s_blueprintData[controllerIndex].data, sizeof( s_blueprintData[controllerIndex].data ), bluePrintDDLDef, &context ))", (const char *)&queryFormat, "DDL_ResetContext( s_blueprintData[controllerIndex].data, sizeof( s_blueprintData[controllerIndex].data ), bluePrintDDLDef, &context )") )
              __debugbreak();
          }
          ++v4;
        }
        v6 = v21;
      }
      ++v5;
      v6 += 3528i64;
      v21 = v6;
      p_buffer += 12;
    }
    while ( v5 < m_size );
  }
  s_downloadingBlueprints = 0;
  fileEntryCount = storageTask->fileEntryCount;
  if ( v4 == fileEntryCount )
  {
    if ( fileEntryCount != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_gunsmith.cpp", 433, ASSERT_TYPE_ASSERT, "(storageTask->fileEntryCount == 1)", "%s\n\tBlueprints: currently we don't support downloading more than 1 player at a time.", "storageTask->fileEntryCount == 1") )
      __debugbreak();
    XUID::operator=(&s_blueprintData[controllerIndex].xuid, &storageTask->fileEntries[0].xuid);
    s_blueprintTaskFailureCount = 0;
    s_blueprintsFenceStatusCode[controllerIndex] = DOWNLOAD_SUCCEEDED;
  }
  else
  {
    ++s_blueprintTaskFailureCount;
    if ( m_size )
      s_blueprintsFenceStatusCode[controllerIndex] = DOWNLOAD_FAILED_WITH_ERROR;
    else
      s_blueprintsFenceStatusCode[controllerIndex] = DOWNLOAD_FAILED_NO_RESPONSE;
  }
  Mem_LargeLocal::~Mem_LargeLocal(&v18);
}

/*
==============
OnBlueprintsUploadComplete
==============
*/
void OnBlueprintsUploadComplete(OnlineStorageTask *storageTask)
{
  __int64 controllerIndex; 
  __int64 v3; 
  int v4; 

  if ( storageTask->status == AERIAL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_gunsmith.cpp", 224, ASSERT_TYPE_ASSERT, "(storageTask->status != OnlineStorageTaskStatus::IN_PROGRESS)", (const char *)&queryFormat, "storageTask->status != OnlineStorageTaskStatus::IN_PROGRESS") )
    __debugbreak();
  if ( storageTask->controllerIndex >= 8u )
  {
    v4 = 8;
    LODWORD(v3) = storageTask->controllerIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_gunsmith.cpp", 225, ASSERT_TYPE_ASSERT, "(unsigned)( storageTask->controllerIndex ) < (unsigned)( ( sizeof( *array_counter( s_blueprintsDirty ) ) + 0 ) )", "storageTask->controllerIndex doesn't index ARRAY_COUNT( s_blueprintsDirty )\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  if ( storageTask->status == (AERIAL|FREE) )
  {
    s_blueprintTaskFailureCount = 0;
    Com_Printf(16, "Successfully uploaded blueprints\n");
  }
  else
  {
    Com_PrintError(16, "Failed to upload blueprints\n");
    controllerIndex = storageTask->controllerIndex;
    ++s_blueprintTaskFailureCount;
    s_blueprintsDirty[controllerIndex] = 1;
  }
}

/*
==============
Online_GunSmith::Reset
==============
*/
void Online_GunSmith::Reset(Online_GunSmith *this, const int controllerIndex)
{
  __int64 ClientFromController; 

  ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
  memset_0(&this->m_weapons[ClientFromController], 0, sizeof(this->m_weapons[ClientFromController]));
  memset_0(this->m_attachments[ClientFromController], 0, sizeof(this->m_attachments[ClientFromController]));
  this->m_totalAttachments[ClientFromController] = 0;
  memset_0(this->m_reticles[ClientFromController], 0, sizeof(this->m_reticles[ClientFromController]));
  this->m_totalReticles[ClientFromController] = 0;
  memset_0(this->m_gunUnlocks[ClientFromController], 0, sizeof(this->m_gunUnlocks[ClientFromController]));
  this->m_totalGunUnlocks[ClientFromController] = 0;
  memset_0(this->m_weaponMastery[ClientFromController], 0, sizeof(this->m_weaponMastery[ClientFromController]));
  this->m_totalWeaponMastery[ClientFromController] = 0;
  Online_GunSmith::DiscardBlueprints(this, controllerIndex);
}

/*
==============
Online_GunSmith::ResetProgression
==============
*/
void Online_GunSmith::ResetProgression(Online_GunSmith *this, const int controllerIndex)
{
  int v3; 
  __int64 ClientFromController; 
  __int64 v5; 
  unsigned __int64 *p_xp; 
  unsigned int v7; 
  __int64 v8; 
  __int64 v9; 

  v3 = 0;
  ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
  v5 = ClientFromController;
  if ( this->m_weapons[ClientFromController].total_weapons > 0 )
  {
    p_xp = &this->m_weapons[v5].weapons[0].xp;
    do
    {
      p_xp[1] = 0i64;
      ++v3;
      *p_xp = 0i64;
      p_xp += 4;
    }
    while ( v3 < this->m_weapons[v5].total_weapons );
  }
  v7 = 0;
  if ( this->m_totalAttachments[ClientFromController] )
  {
    v8 = ClientFromController;
    do
    {
      v9 = v7++;
      this->m_attachments[v8][v9].id = 0i64;
      this->m_attachments[v8][v9].progress = 0i64;
    }
    while ( v7 < this->m_totalAttachments[ClientFromController] );
  }
  this->m_totalAttachments[ClientFromController] = 0;
}

/*
==============
Online_GunSmith::SetBlueprintsDirty
==============
*/
void Online_GunSmith::SetBlueprintsDirty(Online_GunSmith *this, const int controllerIndex, bool dirty)
{
  __int64 v3; 
  int v6; 

  v3 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v6 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_gunsmith.cpp", 216, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( ( sizeof( *array_counter( s_blueprintsDirty ) ) + 0 ) )", "controllerIndex doesn't index ARRAY_COUNT( s_blueprintsDirty )\n\t%i not in [0, %i)", controllerIndex, v6) )
      __debugbreak();
  }
  s_blueprintsDirty[v3] = dirty;
}

/*
==============
Online_GunSmith::UpdateWeapon
==============
*/
__int64 Online_GunSmith::UpdateWeapon(Online_GunSmith *this, const int controllerIndex, bdJSONDeserializer *json, int kind, bool complete)
{
  __int64 v7; 
  __int64 v9; 
  LocalClientNum_t ClientFromController; 
  __int64 v11; 
  __int64 v12; 
  AttachmentProgression *v13; 
  AttachmentProgression *v14; 
  const char *v15; 
  GunsmithWeapons *v16; 
  int v17; 
  int total_weapons; 
  unsigned __int64 v19; 
  unsigned __int64 *p_id; 
  const char *v21; 
  signed int m_count; 
  signed int i; 
  __int64 v24; 
  __int64 v25; 
  unsigned int v26; 
  unsigned int v27; 
  unsigned int v29; 
  unsigned int v30; 
  int v31; 
  const char *v32; 
  unsigned int v33; 
  unsigned __int64 v34; 
  WeaponProgression *v35; 
  unsigned __int64 v36; 
  lua_State *v37; 
  LocalClientNum_t v38; 
  __int64 v40; 
  __int64 v41; 
  unsigned __int64 value; 
  unsigned __int64 v43; 
  StringTable *tablePtr; 
  unsigned __int64 v45; 
  unsigned __int64 v46; 
  bdJSONDeserializer v47; 
  bdJSONDeserializer v48; 
  __int64 v49; 
  char v50[64]; 
  char v51[64]; 

  v49 = -2i64;
  v7 = controllerIndex;
  bdJSONDeserializer::bdJSONDeserializer(&v48);
  v9 = 0i64;
  v45 = 0i64;
  v46 = 0i64;
  if ( bdJSONDeserializer::getUInt64(json, "id_", &value) )
  {
    ClientFromController = CL_Mgr_GetClientFromController(v7);
    v11 = ClientFromController;
    v12 = ClientFromController;
    switch ( kind )
    {
      case 31:
        if ( bdJSONDeserializer::getUInt64(json, "id_", &value) && bdJSONDeserializer::getUInt64(json, "progress", &v43) )
        {
          v13 = this->m_weaponMastery[v12];
          while ( value != v13->id )
          {
            ++v9;
            ++v13;
            if ( v9 >= 500 )
            {
              Com_Printf(25, "Adding Weapon Mastery Challenge %lu with progress %lu\n", value, v43);
              if ( this->m_totalWeaponMastery[v11] >= 0x1F4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_gunsmith.cpp", 592, ASSERT_TYPE_ASSERT, "(unsigned)( m_totalWeaponMastery[localClientNum] ) < (unsigned)( 500 )", "m_totalWeaponMastery[localClientNum] doesn't index MAX_MASTERY_CHALLENGES\n\t%i not in [0, %i)", this->m_totalWeaponMastery[v11], 500) )
                __debugbreak();
              this->m_weaponMastery[v12][this->m_totalWeaponMastery[v11]].id = value;
              this->m_weaponMastery[v12][this->m_totalWeaponMastery[v11]++].progress = v43;
              goto LABEL_106;
            }
          }
          v13->progress = v43;
          if ( complete )
          {
            Com_Printf(25, "Weapon Mastery Challenge %lu completed with progress %lu\n", value, v43);
            if ( LUI_BeginEvent((LocalClientNum_t)v11, "completed_weapon_master_challenge", LUI_luaVM) )
            {
              LUI_SetTableBool("immediate", 1, LUI_luaVM);
              LUI_SetTableInt((const char *)&valueOut, value, LUI_luaVM);
              LUI_SetTableInt("progress", v43, LUI_luaVM);
              LUI_EndEvent(LUI_luaVM);
            }
          }
          else
          {
            Com_Printf(25, "Updated Weapon Mastery Challenge %lu with progress %lu\n", value, v43);
          }
        }
        goto LABEL_106;
      case 25:
        if ( bdJSONDeserializer::getUInt64(json, "id_", &value) && bdJSONDeserializer::getUInt64(json, "progress", &v43) )
        {
          v14 = this->m_gunUnlocks[v11];
          do
          {
            if ( value == v14->id )
            {
              v15 = "Updated Gun Unlock Challenge %lu with progress %lu\n";
              goto LABEL_105;
            }
            ++v9;
            ++v14;
          }
          while ( v9 < 40 );
          Com_Printf(25, "Adding Gun Unlock Challenge %lu with progress %lu\n", value, v43);
          if ( this->m_totalGunUnlocks[v11] >= 0x28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_gunsmith.cpp", 622, ASSERT_TYPE_ASSERT, "(unsigned)( m_totalGunUnlocks[localClientNum] ) < (unsigned)( 40 )", "m_totalGunUnlocks[localClientNum] doesn't index MAX_GUN_UNLOCKS\n\t%i not in [0, %i)", this->m_totalGunUnlocks[v11], 40) )
            __debugbreak();
          this->m_gunUnlocks[v11][this->m_totalGunUnlocks[v11]].id = value;
          this->m_gunUnlocks[v11][this->m_totalGunUnlocks[v11]++].progress = v43;
        }
        goto LABEL_106;
      case 16:
        if ( bdJSONDeserializer::getUInt64(json, "id_", &value) && bdJSONDeserializer::getUInt64(json, "progress", &v43) )
        {
          v14 = this->m_reticles[v12];
          do
          {
            if ( value == v14->id )
            {
              v15 = "Updated Reticle Challenge %lu with progress %lu\n";
              goto LABEL_105;
            }
            ++v9;
            ++v14;
          }
          while ( v9 < 1792 );
          Com_Printf(25, "Adding Reticle Challenge %lu with progress %lu\n", value, v43);
          if ( this->m_totalReticles[v11] >= 0x700 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_gunsmith.cpp", 652, ASSERT_TYPE_ASSERT, "(unsigned)( m_totalReticles[localClientNum] ) < (unsigned)( 64 * 28 )", "m_totalReticles[localClientNum] doesn't index MAX_PROGRESSION_ATTACHMENTS\n\t%i not in [0, %i)", this->m_totalReticles[v11], 1792) )
            __debugbreak();
          this->m_reticles[v12][this->m_totalReticles[v11]].id = value;
          this->m_reticles[v12][this->m_totalReticles[v11]++].progress = v43;
        }
        goto LABEL_106;
    }
    if ( value <= 0x1E8480 )
    {
      if ( bdJSONDeserializer::getUInt64(json, "progress", &v43) )
      {
        v14 = this->m_attachments[v12];
        while ( value != v14->id )
        {
          ++v9;
          ++v14;
          if ( v9 >= 1792 )
          {
            Com_Printf(25, "Adding Camo/Attachment Challenge %lu with progress %lu\n", value, v43);
            if ( this->m_totalAttachments[v11] >= 0x700 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_gunsmith.cpp", 802, ASSERT_TYPE_ASSERT, "(unsigned)( m_totalAttachments[localClientNum] ) < (unsigned)( 64 * 28 )", "m_totalAttachments[localClientNum] doesn't index MAX_PROGRESSION_ATTACHMENTS\n\t%i not in [0, %i)", this->m_totalAttachments[v11], 1792) )
              __debugbreak();
            this->m_attachments[v12][this->m_totalAttachments[v11]].id = value;
            this->m_attachments[v12][this->m_totalAttachments[v11]++].progress = v43;
            goto LABEL_106;
          }
        }
        v15 = "Updated Camo/Attachment Challenge %lu with progress %lu\n";
LABEL_105:
        v14->progress = v43;
        Com_Printf(25, v15, value, v43);
      }
      goto LABEL_106;
    }
    if ( bdJSONDeserializer::getObject(json, "multiProgress", &v48) )
    {
      bdJSONDeserializer::bdJSONDeserializer(&v47);
      v16 = &this->m_weapons[v12];
      if ( bdJSONDeserializer::getObject(&v48, "xp", &v47) )
        bdJSONDeserializer::getUInt64(&v47, (const char *const)&stru_143CE7590, &v45);
      if ( bdJSONDeserializer::getObject(&v48, "rank", &v47) )
        bdJSONDeserializer::getUInt64(&v47, (const char *const)&stru_143CE7590, &v46);
      v17 = 0;
      total_weapons = this->m_weapons[v12].total_weapons;
      v19 = value;
      if ( total_weapons > 0 )
      {
        p_id = &this->m_weapons[v12].weapons[0].id;
        while ( *p_id != value )
        {
          ++v17;
          p_id += 4;
          if ( v17 >= total_weapons )
            goto LABEL_48;
        }
        v34 = v45;
        v35 = &v16->weapons[v17];
        v35->xp = v45;
        v36 = v46;
        v35->rank = v46;
        if ( complete )
        {
          Com_Printf(25, "Weapon Gunsmith %lu with XP %lu and Rank %lu has ranked up\n", value, v34, v36);
          if ( !Dvar_GetBool_Internal_DebugName(DVARBOOL_online_challenge_update_player_data_once_when_done, "online_challenge_update_player_data_once_when_done") )
            Online_GunSmith::UpdateWeaponStats(this, v7, v17);
          v37 = LUI_luaVM;
          v38 = CL_Mgr_GetClientFromController(v7);
          if ( LUI_BeginEvent(v38, "weapon_ranked_up", v37) )
          {
            LUI_SetTableBool("immediate", 1, LUI_luaVM);
            LUI_SetTableInt("xp", v35->xp, LUI_luaVM);
            LUI_SetTableInt("rank", v35->rank, LUI_luaVM);
            LUI_SetTableString("weapon_ref", v35->ref, LUI_luaVM);
            LUI_SetTableInt("controller", v7, LUI_luaVM);
            LUI_EndEvent(LUI_luaVM);
          }
        }
        else
        {
          Com_Printf(25, "Updated Weapon Gunsmith %lu with XP %lu and Rank %lu\n", value, v34, v36);
        }
        goto LABEL_85;
      }
LABEL_48:
      if ( (unsigned int)total_weapons >= 0x40 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_gunsmith.cpp", 716, ASSERT_TYPE_ASSERT, "(unsigned)( weapons->total_weapons ) < (unsigned)( 64 )", "weapons->total_weapons doesn't index MAX_PROGRESSION_WEAPONS\n\t%i not in [0, %i)", this->m_weapons[v12].total_weapons, 64) )
          __debugbreak();
        v19 = value;
      }
      if ( this->m_weapons[v12].total_weapons < 64 )
      {
        Com_Printf(25, "Adding Weapon Gunsmith %lu with XP %lu and Rank %lu\n", v19, v45, v46);
        StringTable_GetAsset("loot/weapon_ids.csv", (const StringTable **)&tablePtr);
        if ( !tablePtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_gunsmith.cpp", 724, ASSERT_TYPE_ASSERT, "(weaponTable)", (const char *)&queryFormat, "weaponTable") )
          __debugbreak();
        v21 = j_va("%ld", value - 2000000);
        this->m_weapons[v12].weapons[this->m_weapons[v12].total_weapons].ref = StringTable_Lookup(tablePtr, 0, v21, 1);
        this->m_weapons[v12].weapons[this->m_weapons[v12].total_weapons].id = value;
        this->m_weapons[v12].weapons[this->m_weapons[v12].total_weapons].xp = v45;
        v16->weapons[this->m_weapons[v12].total_weapons].rank = v46;
        if ( complete && !Dvar_GetBool_Internal_DebugName(DVARBOOL_online_challenge_update_player_data_once_when_done, "online_challenge_update_player_data_once_when_done") )
          Online_GunSmith::UpdateWeaponStats(this, v7, this->m_weapons[v12].total_weapons);
        ++this->m_weapons[v12].total_weapons;
      }
      bdJSONDeserializer::~bdJSONDeserializer(&v47);
    }
    if ( !bdJSONDeserializer::getArray(json, "triggers", &v48) )
    {
LABEL_106:
      LOBYTE(v9) = 1;
      goto LABEL_107;
    }
    bdJSONDeserializer::bdJSONDeserializer(&v47);
    m_count = v48.m_count;
    for ( i = 0; i < m_count; ++i )
    {
      if ( bdJSONDeserializer::getElementByIndex(&v48, i, &v47) && bdJSONDeserializer::getString(&v47, "type", v51, 0x40u) )
      {
        v24 = 0x7FFFFFFFi64;
        v25 = 0i64;
        while ( 1 )
        {
          v26 = (unsigned __int8)v51[v25];
          v27 = (unsigned __int8)aActivateAchiev[v25++];
          if ( !v24-- )
          {
LABEL_74:
            v31 = 0;
            goto LABEL_75;
          }
          if ( v26 != v27 )
          {
            v29 = v26 + 32;
            if ( v26 - 65 > 0x19 )
              v29 = v26;
            v26 = v29;
            v30 = v27 + 32;
            if ( v27 - 65 > 0x19 )
              v30 = v27;
            if ( v26 != v30 )
              break;
          }
          if ( !v26 )
            goto LABEL_74;
        }
        v31 = 1;
        if ( v26 < v30 )
          v31 = -1;
LABEL_75:
        if ( !v31 && bdJSONDeserializer::getString(&v47, (const char *const)&stru_143C9A1A4, v50, 0x40u) )
        {
          if ( this->m_totalAttachments[v12] >= 0x700 )
          {
            LODWORD(v41) = 1792;
            LODWORD(v40) = this->m_totalAttachments[v12];
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_gunsmith.cpp", 763, ASSERT_TYPE_ASSERT, "(unsigned)( m_totalAttachments[localClientNum] ) < (unsigned)( 64 * 28 )", "m_totalAttachments[localClientNum] doesn't index MAX_PROGRESSION_ATTACHMENTS\n\t%i not in [0, %i)", v40, v41) )
              __debugbreak();
          }
          StringTable_GetAsset("gs_challenges.csv", (const StringTable **)&tablePtr);
          if ( !tablePtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_gunsmith.cpp", 766, ASSERT_TYPE_ASSERT, "(gs_challenges)", (const char *)&queryFormat, "gs_challenges") )
            __debugbreak();
          v32 = StringTable_Lookup(tablePtr, 1, v50, 0);
          v33 = atoi(v32);
          Com_Printf(25, "GUNSMITH: %s (%d) has been unlocked and added\n", v50, v33);
          this->m_attachments[v12][this->m_totalAttachments[v12]].id = atoi(v32);
          this->m_attachments[v12][this->m_totalAttachments[v12]++].progress = 0i64;
        }
      }
    }
LABEL_85:
    bdJSONDeserializer::~bdJSONDeserializer(&v47);
    goto LABEL_106;
  }
LABEL_107:
  bdJSONDeserializer::~bdJSONDeserializer(&v48);
  return (unsigned __int8)v9;
}

/*
==============
Online_GunSmith::UpdateWeaponStats
==============
*/
void Online_GunSmith::UpdateWeaponStats(Online_GunSmith *this, const int controllerIndex, const int weaponIndex)
{
  __int64 v5; 
  __int64 ClientFromController; 
  StatsSource ActiveStatsSource; 
  char *v10; 
  int navStringCount; 
  DDLState fromState; 
  DDLContext context; 
  DDLState result; 
  char *navStrings[16]; 

  v5 = weaponIndex;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  fromState.isValid = 0;
  *(_OWORD *)&fromState.member = _XMM0;
  fromState.offset = 0;
  fromState.arrayIndex = -1;
  ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
  ActiveStatsSource = LiveStorage_GetActiveStatsSource(controllerIndex);
  if ( CL_PlayerData_GetDDLBuffer(&context, controllerIndex, ActiveStatsSource, STATSGROUP_RANKEDLOADOUTS) )
  {
    v10 = j_va("squadMembers.weapon_xp.%s", this->m_weapons[ClientFromController].weapons[v5].ref);
    Com_ParseNavStrings(v10, (const char **)navStrings, 16, &navStringCount);
    fromState = *DDL_GetRootState(&result, context.def);
    if ( DDL_MoveToPath(&fromState, &fromState, navStringCount, (const char **)navStrings) && DDL_GetType(&fromState) == DDL_INT_TYPE )
      DDL_SetInt(&fromState, &context, this->m_weapons[ClientFromController].weapons[v5].xp);
  }
}

/*
==============
Online_GunSmith::UploadBlueprints
==============
*/

void __fastcall Online_GunSmith::UploadBlueprints(Online_GunSmith *this, const int controllerIndex)
{
  Online_GunSmith::UploadBlueprints_Internal(this, controllerIndex);
}

/*
==============
Online_GunSmith::UploadBlueprints_Internal
==============
*/
void Online_GunSmith::UploadBlueprints_Internal(Online_GunSmith *this, const int controllerIndex)
{
  unsigned __int64 v2; 
  OnlineStorageTaskFileEntry *fileEntries; 
  __int64 v5; 
  unsigned __int64 v6; 
  const DDLDef *Asset; 
  signed int v8; 
  OnlineStorage *Instance; 
  char CurrentPlatform; 
  OnlineStorage *v11; 
  __int64 v12; 
  XUID result; 
  __int64 v14; 
  DDLContext ddlContext; 
  OnlineStorageTask newTask; 

  v14 = -2i64;
  v2 = controllerIndex;
  result.m_id = (unsigned __int64)&newTask;
  *(_QWORD *)&newTask.taskCreateRequest.m_controllerIndex = -1i64;
  memset(&newTask.taskCreateRequest.m_appData, 0, 48);
  newTask.taskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
  newTask.taskCreateRequest.m_timeoutInSeconds = 0;
  fileEntries = newTask.fileEntries;
  v5 = 16i64;
  do
  {
    OnlineStorageTaskFileEntry::OnlineStorageTaskFileEntry(fileEntries++);
    --v5;
  }
  while ( v5 );
  Live_GetXuid(&result, v2);
  if ( (unsigned int)v2 >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_gunsmith.cpp", 252, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( ( sizeof( *array_counter( s_blueprintData ) ) + 0 ) )", "controllerIndex doesn't index ARRAY_COUNT( s_blueprintData )\n\t%i not in [0, %i)", v2, 8) )
    __debugbreak();
  v6 = v2;
  if ( !XUID::operator==(&s_blueprintData[v2].xuid, &result) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_gunsmith.cpp", 253, ASSERT_TYPE_ASSERT, "(s_blueprintData[controllerIndex].xuid == userXuid)", (const char *)&queryFormat, "s_blueprintData[controllerIndex].xuid == userXuid") )
    __debugbreak();
  if ( !XUID::IsValid(&s_blueprintData[v2].xuid) || XUID::operator!=(&s_blueprintData[v2].xuid, &result) )
  {
    Com_Printf(16, "Paranoid check failed.  We are trying to upload blueprints for a differe xuid that is not currently signed in \n");
    Online_GunSmith::DiscardBlueprints(this, v2);
  }
  else
  {
    newTask.fileEntryCount = 0;
    *(_WORD *)&newTask.operation = 0;
    newTask.priority[0] = 4;
    newTask.controllerIndex = v2;
    newTask.onTaskCompleteCallback = OnBlueprintsUploadComplete;
    bdObjectStoreUploadUserObjectsVectorizedResponse::reset(&s_uploadUserStorageResponse);
    newTask.uploadUserStorageResponse = &s_uploadUserStorageResponse;
    Core_strcpy_truncate(newTask.fileEntries[newTask.fileEntryCount].fileName, 0x40ui64, "blueprints");
    Asset = Com_DDL_LoadAsset("ddl/mp/blueprints.ddl");
    if ( !DDL_CreateContext(&s_blueprintData[v6], 51200, Asset, &ddlContext, NULL, NULL) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_gunsmith.cpp", 275, ASSERT_TYPE_ASSERT, "(DDL_CreateContext( s_blueprintData[controllerIndex].data, sizeof( s_blueprintData[controllerIndex].data ), blueprintDDLDef, &context ))", (const char *)&queryFormat, "DDL_CreateContext( s_blueprintData[controllerIndex].data, sizeof( s_blueprintData[controllerIndex].data ), blueprintDDLDef, &context )") )
      __debugbreak();
    DDL_UpdateChecksum(&ddlContext);
    v8 = MemFile_CompressWithZLib(s_blueprintData[v6].data, Asset->byteSize, s_blueprintWriteBuffer, 51200);
    if ( v8 > 0 )
    {
      newTask.fileEntries[newTask.fileEntryCount].buffer = s_blueprintWriteBuffer;
      newTask.fileEntries[newTask.fileEntryCount].bufferSize = v8;
      XUID::operator=(&newTask.fileEntries[newTask.fileEntryCount].xuid, &result);
      Instance = OnlineStorage::GetInstance();
      CurrentPlatform = OnlineStorage::GetCurrentPlatform(Instance);
      newTask.fileEntries[newTask.fileEntryCount++].platform[0] = CurrentPlatform;
      s_blueprintTaskAttemptTime = Sys_Milliseconds();
      v11 = OnlineStorage::GetInstance();
      if ( OnlineStorage::EnqueueTask(v11, &newTask) )
      {
        Com_Printf(16, "Beginning stats upload (%d files) for controller %i\n", newTask.fileEntryCount, (unsigned int)v2);
        if ( v2 >= 8 )
        {
          j___report_rangecheckfailure(v12);
          JUMPOUT(0x140BF2DDAi64);
        }
        s_blueprintsDirty[v2] = 0;
      }
      else
      {
        ++s_blueprintTaskFailureCount;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_gunsmith.cpp", 308, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unable to upload gunsmith blueprint: Unable to enqueue the task!") )
          __debugbreak();
      }
    }
    else
    {
      Com_PrintWarning(16, "Couldn't compress blueprint upload, will retry.\n");
      ++s_blueprintTaskFailureCount;
    }
  }
  TaskCreateRequest::~TaskCreateRequest(&newTask.taskCreateRequest);
}

/*
==============
GetReticle
==============
*/
ReticleDef *GetReticle(const LocalClientNum_t localClientNum, const bool isAlternate)
{
  cg_t *LocalClientGlobals; 
  const Weapon *WeaponForHud; 
  bool v5; 
  __int64 v6; 
  bool v7; 
  const WeaponAttachment *UnderbarrelAttachment; 
  __int64 scopeVariation; 
  ReticleDef *result; 
  const WeaponAttachment *ScopeAttachment; 
  const WeaponAttachment *v12; 
  unsigned int numReticles; 
  __int64 v14; 
  ReticleDef **reticles; 
  const WeaponAttachment *v16; 
  __int64 v17; 
  const WeaponCompleteDef *v18; 
  __int16 v19; 
  unsigned int attachmentCount; 
  WeaponAttachment *v21; 
  unsigned int v22; 
  __int64 v23; 
  ReticleDef **v24; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  WeaponForHud = CG_GetWeaponForHud(LocalClientGlobals);
  v5 = BG_UsingAlternate(&LocalClientGlobals->predictedPlayerState);
  v6 = 0i64;
  v7 = v5;
  if ( !isAlternate )
    goto LABEL_35;
  UnderbarrelAttachment = BG_GetUnderbarrelAttachment(WeaponForHud);
  if ( !UnderbarrelAttachment )
    goto LABEL_35;
  scopeVariation = WeaponForHud->scopeVariation;
  if ( (int)scopeVariation >= (signed int)UnderbarrelAttachment->numAltReticles )
    scopeVariation = 0i64;
  if ( (int)scopeVariation >= (signed int)UnderbarrelAttachment->numAltReticles || (result = UnderbarrelAttachment->altReticles[scopeVariation]) == NULL )
  {
LABEL_35:
    ScopeAttachment = BG_GetScopeAttachment(WeaponForHud);
    v12 = ScopeAttachment;
    if ( !ScopeAttachment || (!isAlternate ? (numReticles = ScopeAttachment->numReticles) : (numReticles = ScopeAttachment->numAltReticles), (v14 = WeaponForHud->scopeVariation, (unsigned int)v14 >= numReticles) || (!isAlternate ? (reticles = v12->reticles) : (reticles = v12->altReticles), (result = reticles[v14]) == NULL)) )
    {
      if ( isAlternate || (v16 = BG_GetUnderbarrelAttachment(WeaponForHud)) == NULL || (v17 = WeaponForHud->scopeVariation, (unsigned int)v17 >= v16->numReticles) || (result = v16->reticles[v17]) == NULL )
      {
        if ( WeaponForHud->weaponOthers && (v18 = BG_WeaponCompleteDef(WeaponForHud, v7), v19 = 1, (attachmentCount = v18->attachments[13].attachmentCount) != 0) )
        {
          while ( 1 )
          {
            if ( (WeaponForHud->weaponOthers & (unsigned __int16)v19) != 0 )
            {
              v21 = v18->attachments[13].attachments[v6];
              v22 = isAlternate ? v21->numAltReticles : v21->numReticles;
              v23 = WeaponForHud->scopeVariation;
              if ( (unsigned int)v23 < v22 )
              {
                v24 = isAlternate ? v21->altReticles : v21->reticles;
                result = v24[v23];
                if ( result )
                  break;
              }
            }
            v6 = (unsigned int)(v6 + 1);
            v19 *= 2;
            if ( (unsigned int)v6 >= attachmentCount )
              return 0i64;
          }
        }
        else
        {
          return 0i64;
        }
      }
    }
  }
  return result;
}

