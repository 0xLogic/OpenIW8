/*
==============
Game_GetServerTime
==============
*/

int __fastcall Game_GetServerTime(const LocalClientNum_t localClientNum)
{
  return ?Game_GetServerTime@@YAHW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
Game_IsInSpaceship
==============
*/

bool __fastcall Game_IsInSpaceship(LocalClientNum_t localClientNum, bool *outIsInSpaceship)
{
  return ?Game_IsInSpaceship@@YA_NW4LocalClientNum_t@@PEA_N@Z(localClientNum, outIsInSpaceship);
}

/*
==============
Game_InvalidCommandHint_PushToLUIModel
==============
*/

void __fastcall Game_InvalidCommandHint_PushToLUIModel(LocalClientNum_t localClientNum)
{
  ?Game_InvalidCommandHint_PushToLUIModel@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
LUI_CoD_RegisterCommonGameFunctions
==============
*/

void __fastcall LUI_CoD_RegisterCommonGameFunctions(lua_State *luaVM)
{
  ?LUI_CoD_RegisterCommonGameFunctions@@YAXPEAUlua_State@@@Z(luaVM);
}

/*
==============
Game_GetPlayerStateClientNum
==============
*/

int __fastcall Game_GetPlayerStateClientNum(LocalClientNum_t localClientNum)
{
  return ?Game_GetPlayerStateClientNum@@YAHW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
Game_GetPlayerClientNum
==============
*/

bool __fastcall Game_GetPlayerClientNum(LocalClientNum_t localClientNum, int *outPlayerClientNum)
{
  return ?Game_GetPlayerClientNum@@YA_NW4LocalClientNum_t@@PEAH@Z(localClientNum, outPlayerClientNum);
}

/*
==============
LUI_LuaCall_Game_GetTime
==============
*/
__int64 LUI_LuaCall_Game_GetTime(lua_State *const luaVM)
{
  LocalClientNum_t CurrentValidLocalClient; 
  __int64 v3; 
  ClActiveClient *Client; 
  int v5; 
  unsigned int v6; 

  CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
  v3 = CurrentValidLocalClient;
  if ( (unsigned int)CurrentValidLocalClient >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", CurrentValidLocalClient, 2) )
    __debugbreak();
  if ( clientUIActives[v3].frontEndSceneState[0] || !clientUIActives[v3].cgameInitialized )
  {
    v5 = 0;
  }
  else
  {
    Client = ClActiveClient::GetClient((const LocalClientNum_t)v3);
    v5 = Client->GetServerTime(Client);
  }
  j_lua_pushinteger(luaVM, v5);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v6);
  }
  return 1i64;
}

/*
==============
LUI_LuaCall_Game_IsInitialized
==============
*/
__int64 LUI_LuaCall_Game_IsInitialized(lua_State *const luaVM)
{
  LocalClientNum_t CurrentValidLocalClient; 
  LocalClientNum_t v3; 
  int v4; 
  unsigned int v5; 
  LocalClientNum_t v7; 
  int v8; 

  CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
  v3 = CurrentValidLocalClient;
  if ( (unsigned int)CurrentValidLocalClient >= LOCAL_CLIENT_COUNT )
  {
    v8 = 2;
    v7 = CurrentValidLocalClient;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1193, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  v4 = v3 < cg_t::ms_allocatedCount && CG_IsFullyInitialized(v3);
  j_lua_pushboolean(luaVM, v4);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v5);
  }
  return 1i64;
}

/*
==============
LUI_LuaCall_Game_GetOmnvar
==============
*/
__int64 LUI_LuaCall_Game_GetOmnvar(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_Game_GetOmnvar_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_Game_IsOmnvarPerClient
==============
*/
__int64 LUI_LuaCall_Game_IsOmnvarPerClient(lua_State *const luaVM)
{
  const char *v2; 
  unsigned int IndexByName; 
  const OmnvarDef *Def; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: Game.IsOmnvarPerClient( omnvarName );");
  v2 = j_lua_tolstring(luaVM, 1, NULL);
  IndexByName = BG_Omnvar_GetIndexByName(v2);
  if ( IndexByName == -1 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "omnIdx != OMNVAR_NONE");
  Def = BG_Omnvar_GetDef(IndexByName);
  j_lua_pushboolean(luaVM, (Def->flags >> 1) & 1);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v5);
  }
  return 1i64;
}

/*
==============
LUI_LuaCall_Game_IsInSpaceship
==============
*/
__int64 LUI_LuaCall_Game_IsInSpaceship(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Game.IsInSpaceship()");
  if ( j_lua_gettop(luaVM) )
  {
    v2 = 0;
  }
  else
  {
    LUI_CoD_GetCurrentValidLocalClient();
    j_lua_pushboolean(luaVM, 0);
    v2 = 1;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_Game_GetActionSlotCount
==============
*/
__int64 LUI_LuaCall_Game_GetActionSlotCount(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Engine.GetActionSlotCount()");
  if ( j_lua_gettop(luaVM) )
  {
    v2 = 0;
  }
  else
  {
    j_lua_pushnumber(luaVM, 8.0);
    v2 = 1;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_Game_HasMapName
==============
*/
__int64 LUI_LuaCall_Game_HasMapName(lua_State *const luaVM)
{
  unsigned int v2; 

  j_lua_pushboolean(luaVM, cls.m_activeGameMapName[0] != 0);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_LuaCall_Game_GetMapName
==============
*/
__int64 LUI_LuaCall_Game_GetMapName(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( !cls.m_activeGameMapName[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 295, ASSERT_TYPE_ASSERT, "(m_activeGameMapName[0])", "%s\n\tRequested mapname before it was set", "m_activeGameMapName[0]") )
    __debugbreak();
  j_lua_pushstring(luaVM, cls.m_activeGameMapName);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_LuaCall_Game_GetGameType
==============
*/
__int64 LUI_LuaCall_Game_GetGameType(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( !cls.m_activeGameTypeName[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 309, ASSERT_TYPE_ASSERT, "(m_activeGameTypeName[0])", "%s\n\tRequested gametype before it was set", "m_activeGameTypeName[0]") )
    __debugbreak();
  j_lua_pushstring(luaVM, cls.m_activeGameTypeName);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_LuaCall_Game_GetNumWeaponAttachmentWidgets
==============
*/
__int64 LUI_LuaCall_Game_GetNumWeaponAttachmentWidgets(lua_State *const luaVM)
{
  unsigned int v2; 
  double v3; 
  LocalClientNum_t ClientFromController; 
  cg_t *LocalClientGlobals; 
  const Weapon *WeaponForHud; 
  bool v7; 
  const WeaponCompleteDef *v8; 
  int v9; 
  const WeaponCompleteDef *v10; 
  __int16 v11; 
  __int64 attachmentCount; 
  int v13; 
  unsigned int v14; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Game.GetNumWeaponAttachmentWidgets( <controllerIndex> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v3 = lui_tonumber32(luaVM, 1);
    ClientFromController = CL_Mgr_GetClientFromController((int)*(float *)&v3);
    LocalClientGlobals = CG_GetLocalClientGlobals(ClientFromController);
    WeaponForHud = CG_GetWeaponForHud(LocalClientGlobals);
    v7 = BG_UsingAlternate(&LocalClientGlobals->predictedPlayerState);
    v8 = BG_WeaponCompleteDef(WeaponForHud, v7);
    v9 = 0;
    v10 = v8;
    v11 = 1;
    attachmentCount = v8->attachments[13].attachmentCount;
    if ( (_DWORD)attachmentCount )
    {
      do
      {
        v13 = v9 + 1;
        if ( (WeaponForHud->weaponOthers & (unsigned __int16)v11) == 0 )
          v13 = v9;
        v11 *= 2;
        v9 = v13;
        --attachmentCount;
      }
      while ( attachmentCount );
    }
    j_lua_pushinteger(luaVM, v9 + 2 * v10->attachments[9].attachmentCount);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v14 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v14);
  }
  return v2;
}

/*
==============
LUI_LuaCall_Game_GetWeaponAttachmentWidgetName
==============
*/
__int64 LUI_LuaCall_Game_GetWeaponAttachmentWidgetName(lua_State *const luaVM)
{
  unsigned int v2; 
  double v3; 
  LocalClientNum_t ClientFromController; 
  double v5; 
  const WeaponAttachment *WeaponAttachment; 
  const char *szLUIWeaponInfoWidgetName; 
  unsigned int v8; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Game.LUI_LuaCall_Game_GetWeaponAttachmentWidgetName( <controller>, <attachmentIndex> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_isnumber(luaVM, 2) && (v3 = lui_tonumber32(luaVM, 1), ClientFromController = CL_Mgr_GetClientFromController((int)*(float *)&v3), v5 = lui_tonumber32(luaVM, 2), (WeaponAttachment = GetWeaponAttachment(ClientFromController, (int)*(float *)&v5)) != NULL) && (szLUIWeaponInfoWidgetName = WeaponAttachment->szLUIWeaponInfoWidgetName) != NULL )
    j_lua_pushstring(luaVM, szLUIWeaponInfoWidgetName);
  else
    v2 = 0;
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v8 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v8);
  }
  return v2;
}

/*
==============
LUI_LuaCall_Game_GetWeaponAttachmentWidgetTag
==============
*/
__int64 LUI_LuaCall_Game_GetWeaponAttachmentWidgetTag(lua_State *const luaVM)
{
  unsigned int v2; 
  double v3; 
  LocalClientNum_t ClientFromController; 
  double v5; 
  const WeaponAttachment *WeaponAttachment; 
  const char *szLUIWeaponInfoWidgetTag; 
  unsigned int v8; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Game.GetWeaponAttachmentWidgetTag( <controller>, <attachmentIndex> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_isnumber(luaVM, 2) && (v3 = lui_tonumber32(luaVM, 1), ClientFromController = CL_Mgr_GetClientFromController((int)*(float *)&v3), v5 = lui_tonumber32(luaVM, 2), (WeaponAttachment = GetWeaponAttachment(ClientFromController, (int)*(float *)&v5)) != NULL) && (szLUIWeaponInfoWidgetTag = WeaponAttachment->szLUIWeaponInfoWidgetTag) != NULL )
    j_lua_pushstring(luaVM, szLUIWeaponInfoWidgetTag);
  else
    v2 = 0;
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v8 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v8);
  }
  return v2;
}

/*
==============
LUI_LuaCall_Game_GetWeaponAttachmentWidgetUsesScopeStencil
==============
*/
__int64 LUI_LuaCall_Game_GetWeaponAttachmentWidgetUsesScopeStencil(lua_State *const luaVM)
{
  unsigned int v2; 
  double v3; 
  LocalClientNum_t ClientFromController; 
  double v5; 
  const WeaponAttachment *WeaponAttachment; 
  unsigned int v7; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Game.GetWeaponAttachmentWidgetUsesScopeStencil( <controller>, <attachmentIndex> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    v3 = lui_tonumber32(luaVM, 1);
    ClientFromController = CL_Mgr_GetClientFromController((int)*(float *)&v3);
    v5 = lui_tonumber32(luaVM, 2);
    WeaponAttachment = GetWeaponAttachment(ClientFromController, (int)*(float *)&v5);
    if ( WeaponAttachment )
      j_lua_pushboolean(luaVM, WeaponAttachment->luiWeaponInfoWidgetUsesScopeStencil);
    else
      j_lua_pushboolean(luaVM, 0);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v7 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v7);
  }
  return v2;
}

/*
==============
LUI_LuaCall_Game_GetWeaponWidgetName
==============
*/
__int64 LUI_LuaCall_Game_GetWeaponWidgetName(lua_State *const luaVM)
{
  unsigned int v2; 
  double v3; 
  LocalClientNum_t ClientFromController; 
  cg_t *LocalClientGlobals; 
  const Weapon *WeaponForHud; 
  bool v7; 
  const char *szLUIWeaponInfoWidgetName; 
  unsigned int v9; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Game.GetWeaponWidgetName( <controller> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) && (v3 = lui_tonumber32(luaVM, 1), ClientFromController = CL_Mgr_GetClientFromController((int)*(float *)&v3), LocalClientGlobals = CG_GetLocalClientGlobals(ClientFromController), WeaponForHud = CG_GetWeaponForHud(LocalClientGlobals), v7 = BG_UsingAlternate(&LocalClientGlobals->predictedPlayerState), (szLUIWeaponInfoWidgetName = BG_WeaponCompleteDef(WeaponForHud, v7)->szLUIWeaponInfoWidgetName) != NULL) )
    j_lua_pushstring(luaVM, szLUIWeaponInfoWidgetName);
  else
    v2 = 0;
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v9 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v9);
  }
  return v2;
}

/*
==============
LUI_LuaCall_Game_GetWeaponWidgetTag
==============
*/
__int64 LUI_LuaCall_Game_GetWeaponWidgetTag(lua_State *const luaVM)
{
  unsigned int v2; 
  double v3; 
  LocalClientNum_t ClientFromController; 
  cg_t *LocalClientGlobals; 
  const Weapon *WeaponForHud; 
  bool v7; 
  const char *szLUIWeaponInfoWidgetTag; 
  unsigned int v9; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Game.GetWeaponWidgetTag( <controller> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) && (v3 = lui_tonumber32(luaVM, 1), ClientFromController = CL_Mgr_GetClientFromController((int)*(float *)&v3), LocalClientGlobals = CG_GetLocalClientGlobals(ClientFromController), WeaponForHud = CG_GetWeaponForHud(LocalClientGlobals), v7 = BG_UsingAlternate(&LocalClientGlobals->predictedPlayerState), (szLUIWeaponInfoWidgetTag = BG_WeaponCompleteDef(WeaponForHud, v7)->szLUIWeaponInfoWidgetTag) != NULL) )
    j_lua_pushstring(luaVM, szLUIWeaponInfoWidgetTag);
  else
    v2 = 0;
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v9 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v9);
  }
  return v2;
}

/*
==============
LUI_LuaCall_Game_GetTagIsVisible
==============
*/
__int64 LUI_LuaCall_Game_GetTagIsVisible(lua_State *const luaVM)
{
  unsigned int v2; 
  double v3; 
  LocalClientNum_t ClientFromController; 
  const char *v5; 
  bool IsBoneVisibleOnEitherHand; 
  unsigned int v7; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isstring(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Game.GetTagIsVisible( <controller>, <boneName> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_isstring(luaVM, 2) )
  {
    v3 = lui_tonumber32(luaVM, 1);
    ClientFromController = CL_Mgr_GetClientFromController((int)*(float *)&v3);
    v5 = j_lua_tolstring(luaVM, 2, NULL);
    IsBoneVisibleOnEitherHand = BG_IsBoneVisibleOnEitherHand(ClientFromController, v5);
    j_lua_pushboolean(luaVM, IsBoneVisibleOnEitherHand);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v7 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v7);
  }
  return v2;
}

/*
==============
LUI_LuaCall_Game_GetEntityWorldPosition
==============
*/
__int64 LUI_LuaCall_Game_GetEntityWorldPosition(lua_State *const luaVM)
{
  unsigned int v2; 
  double v3; 
  LocalClientNum_t ClientFromController; 
  double v5; 
  centity_t *Entity; 
  unsigned int v7; 
  vec3_t outOrigin; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Game.GetEntityWorldPosition( <controllerIndex>, <entityNum>");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_isnumber(luaVM, 2) && (v3 = lui_tonumber32(luaVM, 1), ClientFromController = CL_Mgr_GetClientFromController((int)*(float *)&v3), v5 = lui_tonumber32(luaVM, 2), (Entity = CG_GetEntity(ClientFromController, (int)*(float *)&v5)) != NULL) )
  {
    CG_GetPoseOrigin(&Entity->pose, &outOrigin);
    j_lua_createtable(luaVM, 0, 3);
    LUI_SetTableNumber("x", outOrigin.v[0], LUI_luaVM);
    LUI_SetTableNumber("y", outOrigin.v[1], LUI_luaVM);
    LUI_SetTableNumber("z", outOrigin.v[2], LUI_luaVM);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v7 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v7);
  }
  return v2;
}

/*
==============
LUI_LuaCall_Game_GetTagWorldPosition
==============
*/
__int64 LUI_LuaCall_Game_GetTagWorldPosition(lua_State *const luaVM)
{
  unsigned int v2; 
  double v3; 
  LocalClientNum_t ClientFromController; 
  double v5; 
  const char *v6; 
  unsigned int v7; 
  vec3_t outWorldPosition; 
  tmat33_t<vec3_t> outLocalAxis; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 3 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || !j_lua_isstring(luaVM, 3) )
    j_luaL_error(luaVM, "USAGE: Game.GetTagWorldPosition( <controllerIndex>, <entityNum>, <tagName> ");
  if ( j_lua_gettop(luaVM) == 3 && j_lua_isnumber(luaVM, 1) && j_lua_isnumber(luaVM, 2) && j_lua_isstring(luaVM, 3) && (v3 = lui_tonumber32(luaVM, 1), ClientFromController = CL_Mgr_GetClientFromController((int)*(float *)&v3), v5 = lui_tonumber32(luaVM, 2), v6 = j_lua_tolstring(luaVM, 3, NULL), LUI_GetEntityTagPositionAndAxis(ClientFromController, (int)*(float *)&v5, v6, &outLocalAxis, &outWorldPosition)) )
  {
    j_lua_createtable(luaVM, 0, 3);
    LUI_SetTableNumber("x", outWorldPosition.v[0], LUI_luaVM);
    LUI_SetTableNumber("y", outWorldPosition.v[1], LUI_luaVM);
    LUI_SetTableNumber("z", outWorldPosition.v[2], LUI_luaVM);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v7 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v7);
  }
  return v2;
}

/*
==============
LUI_LuaCall_Game_GetViewModelTagScreenOffset
==============
*/
__int64 LUI_LuaCall_Game_GetViewModelTagScreenOffset(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_Game_GetViewModelTagScreenOffset_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_Game_GetOffsetForHitmarker
==============
*/
__int64 LUI_LuaCall_Game_GetOffsetForHitmarker(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_Game_GetOffsetForHitmarker_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_Game_GetWeaponWidgetUsesScopeStencil
==============
*/
__int64 LUI_LuaCall_Game_GetWeaponWidgetUsesScopeStencil(lua_State *const luaVM)
{
  unsigned int v2; 
  double v3; 
  LocalClientNum_t ClientFromController; 
  cg_t *LocalClientGlobals; 
  const Weapon *WeaponForHud; 
  bool v7; 
  const WeaponCompleteDef *v8; 
  unsigned int v9; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Game.GetWeaponWidgetUsesScopeStencil( <controller> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v3 = lui_tonumber32(luaVM, 1);
    ClientFromController = CL_Mgr_GetClientFromController((int)*(float *)&v3);
    LocalClientGlobals = CG_GetLocalClientGlobals(ClientFromController);
    WeaponForHud = CG_GetWeaponForHud(LocalClientGlobals);
    v7 = BG_UsingAlternate(&LocalClientGlobals->predictedPlayerState);
    v8 = BG_WeaponCompleteDef(WeaponForHud, v7);
    j_lua_pushboolean(luaVM, v8->luiWeaponInfoWidgetUsesScopeStencil);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v9 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v9);
  }
  return v2;
}

/*
==============
LUI_LuaCall_Game_GetScopeReticleName
==============
*/
__int64 LUI_LuaCall_Game_GetScopeReticleName(lua_State *const luaVM)
{
  unsigned int v2; 
  double v3; 
  bool v4; 
  LocalClientNum_t ClientFromController; 
  const ReticleDef *Reticle; 
  unsigned int v7; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, "USAGE: Game.GetScopeReticleName( <controller>, <isAlternate> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_type(luaVM, 2) == 1 && (v3 = lui_tonumber32(luaVM, 1), v4 = j_lua_toboolean(luaVM, 2) == 1, ClientFromController = CL_Mgr_GetClientFromController((int)*(float *)&v3), (Reticle = GetReticle(ClientFromController, v4)) != NULL) && Reticle->name )
    j_lua_pushstring(luaVM, Reticle->name);
  else
    v2 = 0;
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v7 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v7);
  }
  return v2;
}

/*
==============
LUI_LuaCall_Game_GetScopeReticleWidget
==============
*/
__int64 LUI_LuaCall_Game_GetScopeReticleWidget(lua_State *const luaVM)
{
  unsigned int v2; 
  double v3; 
  LocalClientNum_t ClientFromController; 
  int v5; 
  const ReticleDef *Reticle; 
  const char *widgetName; 
  unsigned int v8; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, "USAGE: Game.GetScopeReticleWidget( <controller>, <isAlternate> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_type(luaVM, 2) == 1 && (v3 = lui_tonumber32(luaVM, 1), ClientFromController = CL_Mgr_GetClientFromController((int)*(float *)&v3), v5 = j_lua_toboolean(luaVM, 2), (Reticle = GetReticle(ClientFromController, v5 == 1)) != NULL) && (widgetName = Reticle->widgetName) != NULL )
    j_lua_pushstring(luaVM, widgetName);
  else
    v2 = 0;
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v8 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v8);
  }
  return v2;
}

/*
==============
LUI_LuaCall_Game_GetReticleWidgetLockToTag
==============
*/
__int64 LUI_LuaCall_Game_GetReticleWidgetLockToTag(lua_State *const luaVM)
{
  unsigned int v2; 
  double v3; 
  LocalClientNum_t ClientFromController; 
  int v5; 
  const ReticleDef *Reticle; 
  unsigned int v7; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, "USAGE: Game.GetReticleWidgetLockToTag( <controller>, <isAlternate> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_type(luaVM, 2) == 1 )
  {
    v3 = lui_tonumber32(luaVM, 1);
    ClientFromController = CL_Mgr_GetClientFromController((int)*(float *)&v3);
    v5 = j_lua_toboolean(luaVM, 2);
    Reticle = GetReticle(ClientFromController, v5 == 1);
    if ( Reticle )
      j_lua_pushboolean(luaVM, Reticle->lockReticleToTag);
    else
      j_lua_pushboolean(luaVM, 0);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v7 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v7);
  }
  return v2;
}

/*
==============
LUI_LuaCall_Game_GetPrimaryReticleData
==============
*/
__int64 LUI_LuaCall_Game_GetPrimaryReticleData(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_Game_GetPrimaryReticleData_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_Game_GetSecondaryReticleData
==============
*/
__int64 LUI_LuaCall_Game_GetSecondaryReticleData(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_Game_GetSecondaryReticleData_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_Game_GetReticleOffsetFromTag
==============
*/
__int64 LUI_LuaCall_Game_GetReticleOffsetFromTag(lua_State *const luaVM)
{
  unsigned int v2; 
  double v3; 
  LocalClientNum_t ClientFromController; 
  int v5; 
  const ReticleDef *Reticle; 
  unsigned int v7; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, "USAGE: Game.GetReticleOffsetFromTag( <controller>, <isAltReticle> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_type(luaVM, 2) == 1 )
  {
    v3 = lui_tonumber32(luaVM, 1);
    ClientFromController = CL_Mgr_GetClientFromController((int)*(float *)&v3);
    v5 = j_lua_toboolean(luaVM, 2);
    Reticle = GetReticle(ClientFromController, v5 == 1);
    if ( Reticle )
      j_lua_pushnumber(luaVM, Reticle->offsetFromTag);
    else
      j_lua_pushnumber(luaVM, 0.0);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v7 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v7);
  }
  return v2;
}

/*
==============
LUI_LuaCall_Game_GetReticleScaleWithFOV
==============
*/
__int64 LUI_LuaCall_Game_GetReticleScaleWithFOV(lua_State *const luaVM)
{
  unsigned int v2; 
  double v3; 
  LocalClientNum_t ClientFromController; 
  int v5; 
  const ReticleDef *Reticle; 
  unsigned int v7; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, "USAGE: Game.GetReticleScaleWithFOV( <controller>, <isAltReticle> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_type(luaVM, 2) == 1 )
  {
    v3 = lui_tonumber32(luaVM, 1);
    ClientFromController = CL_Mgr_GetClientFromController((int)*(float *)&v3);
    v5 = j_lua_toboolean(luaVM, 2);
    Reticle = GetReticle(ClientFromController, v5 == 1);
    if ( Reticle )
      j_lua_pushboolean(luaVM, Reticle->scaleWithFOV);
    else
      j_lua_pushboolean(luaVM, 0);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v7 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v7);
  }
  return v2;
}

/*
==============
LUI_LuaCall_Game_GetScopeSecondaryReticleWidget
==============
*/
__int64 LUI_LuaCall_Game_GetScopeSecondaryReticleWidget(lua_State *const luaVM)
{
  unsigned int v2; 
  double v3; 
  LocalClientNum_t ClientFromController; 
  int v5; 
  const ReticleDef *Reticle; 
  const char *secondaryWidgetName; 
  unsigned int v8; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, "USAGE: Game.GetScopeSecondaryReticleWidget( <controller>, <isAlternate> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_type(luaVM, 2) == 1 && (v3 = lui_tonumber32(luaVM, 1), ClientFromController = CL_Mgr_GetClientFromController((int)*(float *)&v3), v5 = j_lua_toboolean(luaVM, 2), (Reticle = GetReticle(ClientFromController, v5 == 1)) != NULL) && (secondaryWidgetName = Reticle->secondaryWidgetName) != NULL )
    j_lua_pushstring(luaVM, secondaryWidgetName);
  else
    v2 = 0;
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v8 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v8);
  }
  return v2;
}

/*
==============
LUI_LuaCall_Game_GetSecondaryReticleWidgetLockToTag
==============
*/
__int64 LUI_LuaCall_Game_GetSecondaryReticleWidgetLockToTag(lua_State *const luaVM)
{
  unsigned int v2; 
  double v3; 
  LocalClientNum_t ClientFromController; 
  int v5; 
  const ReticleDef *Reticle; 
  unsigned int v7; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, "USAGE: Game.GetSecondaryReticleWidgetLockToTag( <controller>, <isAltReticle> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_type(luaVM, 2) == 1 )
  {
    v3 = lui_tonumber32(luaVM, 1);
    ClientFromController = CL_Mgr_GetClientFromController((int)*(float *)&v3);
    v5 = j_lua_toboolean(luaVM, 2);
    Reticle = GetReticle(ClientFromController, v5 == 1);
    if ( Reticle )
      j_lua_pushboolean(luaVM, Reticle->secondaryLockReticleToTag);
    else
      j_lua_pushboolean(luaVM, 0);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v7 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v7);
  }
  return v2;
}

/*
==============
LUI_LuaCall_Game_GetSecondaryReticleOffsetFromTag
==============
*/
__int64 LUI_LuaCall_Game_GetSecondaryReticleOffsetFromTag(lua_State *const luaVM)
{
  unsigned int v2; 
  double v3; 
  LocalClientNum_t ClientFromController; 
  int v5; 
  const ReticleDef *Reticle; 
  unsigned int v7; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, "USAGE: Game.GetSecondaryReticleOffsetFromTag( <controller>, <isAltReticle> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_type(luaVM, 2) == 1 )
  {
    v3 = lui_tonumber32(luaVM, 1);
    ClientFromController = CL_Mgr_GetClientFromController((int)*(float *)&v3);
    v5 = j_lua_toboolean(luaVM, 2);
    Reticle = GetReticle(ClientFromController, v5 == 1);
    if ( Reticle )
      j_lua_pushnumber(luaVM, Reticle->secondaryOffsetFromTag);
    else
      j_lua_pushnumber(luaVM, 0.0);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v7 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v7);
  }
  return v2;
}

/*
==============
LUI_LuaCall_Game_GetReticleNaturalDistance
==============
*/
__int64 LUI_LuaCall_Game_GetReticleNaturalDistance(lua_State *const luaVM)
{
  unsigned int v2; 
  double v3; 
  LocalClientNum_t ClientFromController; 
  int v5; 
  const ReticleDef *Reticle; 
  unsigned int v7; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, "USAGE: Game.GetReticleNaturalDistance( <controller>, <isAltReticle> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_type(luaVM, 2) == 1 )
  {
    v3 = lui_tonumber32(luaVM, 1);
    ClientFromController = CL_Mgr_GetClientFromController((int)*(float *)&v3);
    v5 = j_lua_toboolean(luaVM, 2);
    Reticle = GetReticle(ClientFromController, v5 == 1);
    if ( Reticle )
      j_lua_pushnumber(luaVM, Reticle->naturalDistance);
    else
      j_lua_pushnumber(luaVM, 0.0);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v7 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v7);
  }
  return v2;
}

/*
==============
LUI_LuaCall_Game_GetReticleNaturalFOV
==============
*/
__int64 LUI_LuaCall_Game_GetReticleNaturalFOV(lua_State *const luaVM)
{
  unsigned int v2; 
  double v3; 
  LocalClientNum_t ClientFromController; 
  int v5; 
  unsigned int v8; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, "USAGE: Game.GetReticleNaturalFOV( <controller>, <isAltReticle> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_type(luaVM, 2) == 1 )
  {
    v3 = lui_tonumber32(luaVM, 1);
    ClientFromController = CL_Mgr_GetClientFromController((int)*(float *)&v3);
    v5 = j_lua_toboolean(luaVM, 2);
    GetReticle(ClientFromController, v5 == 1);
    _XMM1 = 0i64;
    __asm { vcvtsi2sd xmm1, xmm1, eax; n }
    j_lua_pushnumber(luaVM, *(long double *)&_XMM1);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v8 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v8);
  }
  return v2;
}

/*
==============
LUI_LuaCall_Game_GetReticlePrimaryDefaultScale
==============
*/
__int64 LUI_LuaCall_Game_GetReticlePrimaryDefaultScale(lua_State *const luaVM)
{
  unsigned int v2; 
  double v3; 
  LocalClientNum_t ClientFromController; 
  int v5; 
  const ReticleDef *Reticle; 
  unsigned int v7; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, "USAGE: Game.GetReticlePrimaryDefaultScale( <controller>, <isAltReticle> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_type(luaVM, 2) == 1 )
  {
    v3 = lui_tonumber32(luaVM, 1);
    ClientFromController = CL_Mgr_GetClientFromController((int)*(float *)&v3);
    v5 = j_lua_toboolean(luaVM, 2);
    Reticle = GetReticle(ClientFromController, v5 == 1);
    if ( Reticle )
      j_lua_pushnumber(luaVM, Reticle->primaryDefaultScale);
    else
      j_lua_pushnumber(luaVM, 1.0);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v7 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v7);
  }
  return v2;
}

/*
==============
LUI_LuaCall_Game_GetReticleSecondaryDefaultScale
==============
*/
__int64 LUI_LuaCall_Game_GetReticleSecondaryDefaultScale(lua_State *const luaVM)
{
  unsigned int v2; 
  double v3; 
  LocalClientNum_t ClientFromController; 
  int v5; 
  const ReticleDef *Reticle; 
  unsigned int v7; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, "USAGE: Game.GetReticleSecondaryDefaultScale( <controller>, <isAltReticle> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_type(luaVM, 2) == 1 )
  {
    v3 = lui_tonumber32(luaVM, 1);
    ClientFromController = CL_Mgr_GetClientFromController((int)*(float *)&v3);
    v5 = j_lua_toboolean(luaVM, 2);
    Reticle = GetReticle(ClientFromController, v5 == 1);
    if ( Reticle )
      j_lua_pushnumber(luaVM, Reticle->secondaryDefaultScale);
    else
      j_lua_pushnumber(luaVM, 1.0);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v7 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v7);
  }
  return v2;
}

/*
==============
LUI_LuaCall_Game_GetReticlePrimaryAffectedByEMP
==============
*/
__int64 LUI_LuaCall_Game_GetReticlePrimaryAffectedByEMP(lua_State *const luaVM)
{
  unsigned int v2; 
  double v3; 
  LocalClientNum_t ClientFromController; 
  int v5; 
  const ReticleDef *Reticle; 
  unsigned int v7; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, "USAGE: Game.GetReticlePrimaryAffectedByEMP( <controller>, <isAltReticle> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_type(luaVM, 2) == 1 )
  {
    v3 = lui_tonumber32(luaVM, 1);
    ClientFromController = CL_Mgr_GetClientFromController((int)*(float *)&v3);
    v5 = j_lua_toboolean(luaVM, 2);
    Reticle = GetReticle(ClientFromController, v5 == 1);
    if ( Reticle )
      j_lua_pushboolean(luaVM, Reticle->primaryAffectedByEMP);
    else
      j_lua_pushboolean(luaVM, 1);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v7 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v7);
  }
  return v2;
}

/*
==============
LUI_LuaCall_Game_GetReticleSecondaryAffectedByEMP
==============
*/
__int64 LUI_LuaCall_Game_GetReticleSecondaryAffectedByEMP(lua_State *const luaVM)
{
  unsigned int v2; 
  double v3; 
  LocalClientNum_t ClientFromController; 
  int v5; 
  const ReticleDef *Reticle; 
  unsigned int v7; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, "USAGE: Game.GetReticleSecondaryAffectedByEMP( <controller>, <isAltReticle> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_type(luaVM, 2) == 1 )
  {
    v3 = lui_tonumber32(luaVM, 1);
    ClientFromController = CL_Mgr_GetClientFromController((int)*(float *)&v3);
    v5 = j_lua_toboolean(luaVM, 2);
    Reticle = GetReticle(ClientFromController, v5 == 1);
    if ( Reticle )
      j_lua_pushboolean(luaVM, Reticle->secondaryAffectedByEMP);
    else
      j_lua_pushboolean(luaVM, 1);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v7 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v7);
  }
  return v2;
}

/*
==============
LUI_LuaCall_Game_GetReticleMinScale
==============
*/
__int64 LUI_LuaCall_Game_GetReticleMinScale(lua_State *const luaVM)
{
  unsigned int v2; 
  double v3; 
  LocalClientNum_t ClientFromController; 
  int v5; 
  const ReticleDef *Reticle; 
  unsigned int v7; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, "USAGE: Game.GetReticleMinScale( <controller>, <isAltReticle> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_type(luaVM, 2) == 1 )
  {
    v3 = lui_tonumber32(luaVM, 1);
    ClientFromController = CL_Mgr_GetClientFromController((int)*(float *)&v3);
    v5 = j_lua_toboolean(luaVM, 2);
    Reticle = GetReticle(ClientFromController, v5 == 1);
    if ( Reticle )
      j_lua_pushnumber(luaVM, Reticle->minReticleScale);
    else
      j_lua_pushnumber(luaVM, 0.0);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v7 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v7);
  }
  return v2;
}

/*
==============
LUI_LuaCall_Game_GetReticleMaxScale
==============
*/
__int64 LUI_LuaCall_Game_GetReticleMaxScale(lua_State *const luaVM)
{
  unsigned int v2; 
  double v3; 
  LocalClientNum_t ClientFromController; 
  int v5; 
  const ReticleDef *Reticle; 
  unsigned int v7; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, "USAGE: Game.GetReticleMaxScale( <controller>, <isAltReticle> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_type(luaVM, 2) == 1 )
  {
    v3 = lui_tonumber32(luaVM, 1);
    ClientFromController = CL_Mgr_GetClientFromController((int)*(float *)&v3);
    v5 = j_lua_toboolean(luaVM, 2);
    Reticle = GetReticle(ClientFromController, v5 == 1);
    if ( Reticle )
      j_lua_pushnumber(luaVM, Reticle->maxReticleScale);
    else
      j_lua_pushnumber(luaVM, 0.0);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v7 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v7);
  }
  return v2;
}

/*
==============
LUI_LuaCall_Game_GetReticleShakeProperties
==============
*/
__int64 LUI_LuaCall_Game_GetReticleShakeProperties(lua_State *const luaVM)
{
  unsigned int v2; 
  double v3; 
  LocalClientNum_t ClientFromController; 
  const cg_t *LocalClientGlobals; 
  __int64 v6; 
  WeaponDef *v7; 
  unsigned int v8; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: Game.GetReticleShakeProperties( controllerIndex )");
  v2 = 1;
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Game.GetReticleShakeProperties( controllerIndex )");
  v3 = lui_tonumber32(luaVM, 1);
  ClientFromController = CL_Mgr_GetClientFromController((int)*(float *)&v3);
  LocalClientGlobals = CG_GetLocalClientGlobals(ClientFromController);
  LODWORD(v6) = CG_GetWeaponForHud(LocalClientGlobals)->weaponIdx;
  if ( (unsigned int)v6 > bg_lastParsedWeaponIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v6, bg_lastParsedWeaponIndex) )
    __debugbreak();
  v6 = (unsigned __int16)v6;
  if ( !bg_weaponDefs[(unsigned __int16)v6] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
    __debugbreak();
  v7 = bg_weaponDefs[v6];
  if ( v7 )
  {
    j_lua_createtable(luaVM, 0, 5);
    LUI_SetTableInt("duration", v7->iReticleShakeDuration, LUI_luaVM);
    LUI_SetTableNumber("magnitude", v7->fReticleShakeMagnitude, LUI_luaVM);
    LUI_SetTableInt("settleDuration", v7->iReticleSettleDuration, LUI_luaVM);
    LUI_SetTableNumber("multiplier", v7->fReticleRapidFireMultiplier, LUI_luaVM);
    LUI_SetTableInt("numRapidFireBullets", v7->iReticleNumBulletsToRapidFire, LUI_luaVM);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v8 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v8);
  }
  return v2;
}

/*
==============
LUI_LuaCall_Game_GetHitmarkerType
==============
*/
__int64 LUI_LuaCall_Game_GetHitmarkerType(lua_State *const luaVM)
{
  double v2; 
  LocalClientNum_t ClientFromController; 
  const cg_t *LocalClientGlobals; 
  const Weapon *WeaponForHud; 
  int HitmarkerType; 
  unsigned int v7; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: Game.GetHitmarkerType( controllerIndex )");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Game.GetHitmarkerType( controllerIndex )");
  v2 = lui_tonumber32(luaVM, 1);
  ClientFromController = CL_Mgr_GetClientFromController((int)*(float *)&v2);
  LocalClientGlobals = CG_GetLocalClientGlobals(ClientFromController);
  WeaponForHud = CG_GetWeaponForHud(LocalClientGlobals);
  HitmarkerType = BG_GetHitmarkerType(WeaponForHud, 0);
  j_lua_pushinteger(luaVM, HitmarkerType);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v7 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v7);
  }
  return 1i64;
}

/*
==============
LUI_LuaCall_Game_GetLootData
==============
*/
__int64 LUI_LuaCall_Game_GetLootData(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_Game_GetLootData_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_Game_GetCurrentWeaponRef
==============
*/
__int64 LUI_LuaCall_Game_GetCurrentWeaponRef(lua_State *const luaVM)
{
  bool v2; 
  double v3; 
  LocalClientNum_t ClientFromController; 
  const cg_t *LocalClientGlobals; 
  Weapon *Weapon; 
  __int128 v7; 
  double v8; 
  __int64 v9; 
  unsigned int v10; 
  Weapon result; 
  __m256i v13; 
  __int128 v14; 
  double v15; 
  int v16; 

  if ( j_lua_gettop(luaVM) < 1 )
    j_luaL_error(luaVM, "USAGE: Game.GetCurrentWeaponRef( controllerIndex )");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Game.GetCurrentWeaponRef( controllerIndex )");
  v2 = 0;
  if ( j_lua_gettop(luaVM) == 2 )
  {
    if ( j_lua_type(luaVM, 2) != 1 )
      j_luaL_error(luaVM, "USAGE: Game.GetCurrentWeaponRef( controllerIndex, isInteractive )");
    v2 = j_lua_toboolean(luaVM, 2) != 0;
  }
  v3 = lui_tonumber32(luaVM, 1);
  ClientFromController = CL_Mgr_GetClientFromController((int)*(float *)&v3);
  LocalClientGlobals = CG_GetLocalClientGlobals(ClientFromController);
  if ( v2 )
    Weapon = LUI_DataBinding_Interactions_GetWeapon(&result, ClientFromController);
  else
    Weapon = (Weapon *)CG_GetWeaponForHud(LocalClientGlobals);
  v7 = *(_OWORD *)&Weapon->attachmentVariationIndices[5];
  v13 = *(__m256i *)&Weapon->weaponIdx;
  v8 = *(double *)&Weapon->attachmentVariationIndices[21];
  v16 = *(_DWORD *)&Weapon->weaponCamo;
  v15 = v8;
  v14 = v7;
  v9 = v13.m256i_u16[0];
  if ( v13.m256i_u16[0] > bg_lastParsedWeaponIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1218, ASSERT_TYPE_ASSERT, "( weaponIndex ) <= ( bg_lastParsedWeaponIndex )", "weaponIndex not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v13.m256i_u16[0], bg_lastParsedWeaponIndex) )
    __debugbreak();
  if ( !bg_weaponCompleteDefs[v9] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1219, ASSERT_TYPE_ASSERT, "(bg_weaponCompleteDefs[weaponIndex])", (const char *)&queryFormat, "bg_weaponCompleteDefs[weaponIndex]") )
    __debugbreak();
  j_lua_pushstring(luaVM, bg_weaponCompleteDefs[v9]->szInternalName);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v10 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v10);
  }
  return 1i64;
}

/*
==============
LUI_LuaCall_Game_GetWeaponDynamicIconAnimationName
==============
*/
__int64 LUI_LuaCall_Game_GetWeaponDynamicIconAnimationName(lua_State *const luaVM)
{
  bool v2; 
  double v3; 
  LocalClientNum_t ClientFromController; 
  const cg_t *LocalClientGlobals; 
  Weapon *Weapon; 
  __int128 v7; 
  double v8; 
  __int64 v9; 
  unsigned int v10; 
  Weapon result; 
  __m256i v13; 
  __int128 v14; 
  double v15; 
  int v16; 

  if ( j_lua_gettop(luaVM) < 1 )
    j_luaL_error(luaVM, "USAGE: Game.GetWeaponDynamicIconAnimationName( controllerIndex )");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Game.GetWeaponDynamicIconAnimationName( controllerIndex )");
  v2 = 0;
  if ( j_lua_gettop(luaVM) == 2 )
  {
    if ( j_lua_type(luaVM, 2) != 1 )
      j_luaL_error(luaVM, "USAGE: Game.GetWeaponDynamicIconAnimationName( controllerIndex, isInteractive )");
    v2 = j_lua_toboolean(luaVM, 2) != 0;
  }
  v3 = lui_tonumber32(luaVM, 1);
  ClientFromController = CL_Mgr_GetClientFromController((int)*(float *)&v3);
  LocalClientGlobals = CG_GetLocalClientGlobals(ClientFromController);
  if ( v2 )
    Weapon = LUI_DataBinding_Interactions_GetWeapon(&result, ClientFromController);
  else
    Weapon = (Weapon *)CG_GetWeaponForHud(LocalClientGlobals);
  v7 = *(_OWORD *)&Weapon->attachmentVariationIndices[5];
  v13 = *(__m256i *)&Weapon->weaponIdx;
  v8 = *(double *)&Weapon->attachmentVariationIndices[21];
  v16 = *(_DWORD *)&Weapon->weaponCamo;
  v15 = v8;
  v14 = v7;
  v9 = v13.m256i_u16[0];
  if ( v13.m256i_u16[0] > bg_lastParsedWeaponIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1218, ASSERT_TYPE_ASSERT, "( weaponIndex ) <= ( bg_lastParsedWeaponIndex )", "weaponIndex not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v13.m256i_u16[0], bg_lastParsedWeaponIndex) )
    __debugbreak();
  if ( !bg_weaponCompleteDefs[v9] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1219, ASSERT_TYPE_ASSERT, "(bg_weaponCompleteDefs[weaponIndex])", (const char *)&queryFormat, "bg_weaponCompleteDefs[weaponIndex]") )
    __debugbreak();
  j_lua_pushstring(luaVM, bg_weaponCompleteDefs[v9]->dynamicIconAnimationName);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v10 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v10);
  }
  return 1i64;
}

/*
==============
LUI_LuaCall_Game_GetCurrentWeaponAttachments
==============
*/
__int64 LUI_LuaCall_Game_GetCurrentWeaponAttachments(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_Game_GetCurrentWeaponAttachments_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_Game_GetClientNumFromEntityNum
==============
*/
__int64 LUI_LuaCall_Game_GetClientNumFromEntityNum(lua_State *const luaVM)
{
  LocalClientNum_t CurrentValidLocalClient; 
  unsigned int v3; 
  int v4; 
  centity_t *Entity; 
  unsigned int v6; 

  CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
  v3 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Game.GetClientNumFromEntityNum( <entityNumber> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v4 = lui_tointeger32(luaVM, 1);
    Entity = CG_GetEntity(CurrentValidLocalClient, v4);
    j_lua_pushinteger(luaVM, Entity->nextState.clientNum - 1);
  }
  else
  {
    v3 = 0;
  }
  if ( (int)v3 > j_lua_gettop(luaVM) )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v3, v6);
  }
  return v3;
}

/*
==============
LUI_LuaCall_Game_GetPlayerDataForTacOpsMap
==============
*/
__int64 LUI_LuaCall_Game_GetPlayerDataForTacOpsMap(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_Game_GetPlayerDataForTacOpsMap_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_Game_GetTeamForEntity
==============
*/
__int64 LUI_LuaCall_Game_GetTeamForEntity(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_Game_GetTeamForEntity_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_Game_IsPlayerFlashed
==============
*/
__int64 LUI_LuaCall_Game_IsPlayerFlashed(lua_State *const luaVM)
{
  unsigned int v2; 
  double v3; 
  LocalClientNum_t ClientFromController; 
  int FlashbangedRemainingTime; 
  unsigned int v6; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Game.IsPlayerFlashed( <controllerIndex> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v3 = lui_tonumber32(luaVM, 1);
    ClientFromController = CL_Mgr_GetClientFromController((int)*(float *)&v3);
    FlashbangedRemainingTime = CG_GetFlashbangedRemainingTime(ClientFromController);
    j_lua_pushboolean(luaVM, FlashbangedRemainingTime != 0);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v6);
  }
  return v2;
}

/*
==============
LUI_LuaCall_Game_IsEntityAlive
==============
*/
__int64 LUI_LuaCall_Game_IsEntityAlive(lua_State *const luaVM)
{
  unsigned int v2; 
  double v3; 
  LocalClientNum_t ClientFromController; 
  double v5; 
  centity_t *Entity; 
  bool v7; 
  unsigned int v8; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Game.IsEntityAlive( <controllerIndex>, <entityNum> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_isnumber(luaVM, 2) && (v3 = lui_tonumber32(luaVM, 1), ClientFromController = CL_Mgr_GetClientFromController((int)*(float *)&v3), v5 = lui_tonumber32(luaVM, 2), (Entity = CG_GetEntity(ClientFromController, (int)*(float *)&v5)) != NULL) )
  {
    v7 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&Entity->nextState.lerp.eFlags, ACTIVE, 0x11u);
    j_lua_pushboolean(luaVM, !v7);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v8 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v8);
  }
  return v2;
}

/*
==============
LUI_LuaCall_Game_GetTargetMarkerGroups
==============
*/
__int64 LUI_LuaCall_Game_GetTargetMarkerGroups(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_Game_GetTargetMarkerGroups_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_Game_GetObjectives
==============
*/
__int64 LUI_LuaCall_Game_GetObjectives(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_Game_GetObjectives_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_Game_GetCalloutMarkerPings
==============
*/
__int64 LUI_LuaCall_Game_GetCalloutMarkerPings(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_Game_GetCalloutMarkerPings_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_Game_SetLocationSelectionMapCursorActive
==============
*/
__int64 LUI_LuaCall_Game_SetLocationSelectionMapCursorActive(lua_State *const luaVM)
{
  LocalClientNum_t CurrentValidLocalClient; 
  char v3; 
  bool v4; 
  cg_t *LocalClientGlobals; 
  unsigned int v6; 

  if ( j_lua_gettop(luaVM) != 1 || j_lua_type(luaVM, 1) != 1 )
    j_luaL_error(luaVM, "USAGE: Game.SetLocationSelectionMapCursorActive( <boolean> )\n");
  CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
  v3 = 0;
  v4 = 0;
  if ( !CL_Keys_IsCatcherActive(CurrentValidLocalClient, 8) )
  {
    v3 = 1;
    v4 = !CL_Keys_IsCatcherActive(CurrentValidLocalClient, 16);
  }
  if ( j_lua_toboolean(luaVM, 1) > 0 )
  {
    CL_Keys_AddCatcher(CurrentValidLocalClient, 16);
    goto LABEL_9;
  }
  CL_Keys_RemoveCatcher(CurrentValidLocalClient, -17);
  if ( v3 != 1 )
  {
LABEL_9:
    if ( !v4 )
      goto LABEL_14;
  }
  LocalClientGlobals = CG_GetLocalClientGlobals(CurrentValidLocalClient);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_game.cpp", 2585, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  LocalClientGlobals->locationSelectorCursor.v[0] = 0.5;
  *(_QWORD *)&LocalClientGlobals->locationSelectorCursor.y = 1056964608i64;
  LocalClientGlobals->locationSelectorNumInputs = 0;
LABEL_14:
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v6);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_Game_CancelLocationSelection
==============
*/
__int64 LUI_LuaCall_Game_CancelLocationSelection(lua_State *const luaVM)
{
  LocalClientNum_t CurrentValidLocalClient; 
  unsigned int v3; 

  CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
  CL_Keys_GetKeyState(CurrentValidLocalClient)->overrideLocSelInputState = LOC_SEL_INPUT_CANCEL;
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_Game_ConfirmLocationSelection
==============
*/
__int64 LUI_LuaCall_Game_ConfirmLocationSelection(lua_State *const luaVM)
{
  LocalClientNum_t CurrentValidLocalClient; 
  unsigned int v3; 

  CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
  CL_Keys_GetKeyState(CurrentValidLocalClient)->overrideLocSelInputState = LOC_SEL_INPUT_CONFIRM;
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_Game_IsCursorInTacMap
==============
*/
__int64 LUI_LuaCall_Game_IsCursorInTacMap(lua_State *const luaVM)
{
  int v2; 
  LocalClientNum_t ClientFromController; 
  CgCompassSystem *CompassSystem; 
  int IsCursorInTacMap; 
  unsigned int v6; 

  v2 = j_lua_tointeger(luaVM, 1);
  ClientFromController = CL_Mgr_GetClientFromController(v2);
  CompassSystem = CgCompassSystem::GetCompassSystem(ClientFromController);
  if ( CompassSystem )
    IsCursorInTacMap = CgCompassSystem::IsCursorInTacMap(CompassSystem);
  else
    IsCursorInTacMap = 0;
  j_lua_pushboolean(luaVM, IsCursorInTacMap);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v6);
  }
  return 1i64;
}

/*
==============
LUI_LuaCall_Game_ConfirmAltLocationSelection
==============
*/
__int64 LUI_LuaCall_Game_ConfirmAltLocationSelection(lua_State *const luaVM)
{
  LocalClientNum_t CurrentValidLocalClient; 
  unsigned int v3; 

  CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
  CL_Keys_GetKeyState(CurrentValidLocalClient)->overrideLocSelInputState = LOC_SEL_INPUT_CONFIRM_ALT;
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_Game_LocationSelectionSetCursorToPlayerPos
==============
*/
__int64 LUI_LuaCall_Game_LocationSelectionSetCursorToPlayerPos(lua_State *const luaVM)
{
  LocalClientNum_t CurrentValidLocalClient; 
  __int64 v3; 
  cg_t *LocalClientGlobals; 
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  CgCompassSystem *CompassSystem; 
  unsigned int v10; 
  vec3_t outOrg; 
  __int64 v13; 

  v13 = -2i64;
  CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
  v3 = CurrentValidLocalClient;
  LocalClientGlobals = CG_GetLocalClientGlobals(CurrentValidLocalClient);
  v5 = LocalClientGlobals->compassNorth.v[1];
  LODWORD(v6) = LODWORD(LocalClientGlobals->compassNorth.v[0]) ^ _xmm;
  if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_game.cpp", 2703, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( LocalClientGlobals->renderingThirdPerson )
    goto LABEL_10;
  if ( !CgWeaponMap::ms_instance[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  if ( BG_IsThirdPersonMode(CgWeaponMap::ms_instance[v3], &LocalClientGlobals->predictedPlayerState) )
LABEL_10:
    CG_GetPoseOrigin(&LocalClientGlobals->predictedPlayerEntity->pose, &outOrg);
  else
    RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
  v7 = outOrg.v[0] - LocalClientGlobals->compassMapUpperLeft.v[0];
  v8 = outOrg.v[1] - LocalClientGlobals->compassMapUpperLeft.v[1];
  LocalClientGlobals->locationSelectorCursor.v[0] = (float)((float)(v8 * v6) + (float)(v7 * v5)) / LocalClientGlobals->compassMapWorldSize.v[0];
  LocalClientGlobals->locationSelectorCursor.v[1] = (float)((float)(v7 * v6) - (float)(v8 * v5)) / LocalClientGlobals->compassMapWorldSize.v[1];
  CompassSystem = CgCompassSystem::GetCompassSystem((const LocalClientNum_t)v3);
  CgCompassSystem::SetTacmapMapCenter(CompassSystem, LocalClientGlobals->locationSelectorCursor);
  memset(&outOrg, 0, sizeof(outOrg));
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v10 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v10);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_Game_LocationSelectionOverrideIsMaster
==============
*/
__int64 LUI_LuaCall_Game_LocationSelectionOverrideIsMaster(lua_State *const luaVM)
{
  LocalClientNum_t CurrentValidLocalClient; 
  PlayerKeyState *KeyState; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 1 || j_lua_type(luaVM, 1) != 1 )
    j_luaL_error(luaVM, "USAGE: Game.LocationSelectionOverrideIsMaster( <boolean> )\n");
  CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
  KeyState = CL_Keys_GetKeyState(CurrentValidLocalClient);
  KeyState->overrideIsMaster = j_lua_toboolean(luaVM, 1) > 0;
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_Game_LocationSelectionFlipSticks
==============
*/
__int64 LUI_LuaCall_Game_LocationSelectionFlipSticks(lua_State *const luaVM)
{
  LocalClientNum_t CurrentValidLocalClient; 
  PlayerKeyState *KeyState; 
  int v4; 
  bool v5; 
  int integer; 
  unsigned int v7; 

  if ( j_lua_gettop(luaVM) != 1 || j_lua_type(luaVM, 1) != 1 )
    j_luaL_error(luaVM, "USAGE: Game.LocationSelectionFlipSticks( <boolean> )\n");
  CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
  KeyState = CL_Keys_GetKeyState(CurrentValidLocalClient);
  v4 = j_lua_toboolean(luaVM, 1);
  v5 = v4 > 0;
  if ( v4 <= 0 )
    integer = 0;
  else
    integer = gpad_stick_deadzone_min->current.integer;
  CG_Utils_SetRightStickDeadzoneOverride(*(float *)&integer);
  KeyState->flipSticks = v5;
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v7 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v7);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_Game_GetMapSizeData
==============
*/
__int64 LUI_LuaCall_Game_GetMapSizeData(lua_State *const luaVM)
{
  unsigned int v2; 
  double v3; 
  LocalClientNum_t ClientFromController; 
  cg_t *LocalClientGlobals; 
  unsigned int v6; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Game.GetMapSizeData( <controllerIndex> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v3 = lui_tonumber32(luaVM, 1);
    ClientFromController = CL_Mgr_GetClientFromController((int)*(float *)&v3);
    LocalClientGlobals = CG_GetLocalClientGlobals(ClientFromController);
    j_lua_createtable(luaVM, 0, 4);
    LUI_SetTableNumber("mapWidth", LocalClientGlobals->compassMapWorldSize.v[0], LUI_luaVM);
    LUI_SetTableNumber("mapHeight", LocalClientGlobals->compassMapWorldSize.v[1], LUI_luaVM);
    LUI_SetTableNumber("mapLeft", LocalClientGlobals->compassMapUpperLeft.v[0], LUI_luaVM);
    LUI_SetTableNumber("mapTop", LocalClientGlobals->compassMapUpperLeft.v[1], LUI_luaVM);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v6);
  }
  return v2;
}

/*
==============
LUI_LuaCall_Game_IsPlayerRemoteControlling
==============
*/
__int64 LUI_LuaCall_Game_IsPlayerRemoteControlling(lua_State *const luaVM)
{
  LocalClientNum_t CurrentValidLocalClient; 
  bool IsPlayerRemoteControlling; 
  unsigned int v4; 

  CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
  IsPlayerRemoteControlling = CG_Players_IsPlayerRemoteControlling(CurrentValidLocalClient);
  j_lua_pushboolean(luaVM, IsPlayerRemoteControlling);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
Game_GetPlayerClientNum
==============
*/
bool Game_GetPlayerClientNum(LocalClientNum_t localClientNum, int *outPlayerClientNum)
{
  int clientNum; 
  bool result; 
  int v7; 

  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v7 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1193, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v7) )
      __debugbreak();
  }
  if ( localClientNum >= cg_t::ms_allocatedCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_game.cpp", 2071, ASSERT_TYPE_ASSERT, "(cg_t::IsClientAllocated( localClientNum ))", (const char *)&queryFormat, "cg_t::IsClientAllocated( localClientNum )") )
    __debugbreak();
  clientNum = CG_GetLocalClientGlobals(localClientNum)->clientNum;
  result = 1;
  *outPlayerClientNum = clientNum;
  return result;
}

/*
==============
Game_GetPlayerStateClientNum
==============
*/
__int64 Game_GetPlayerStateClientNum(LocalClientNum_t localClientNum)
{
  int v4; 

  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v4 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1193, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v4) )
      __debugbreak();
  }
  if ( localClientNum >= cg_t::ms_allocatedCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_game.cpp", 2079, ASSERT_TYPE_ASSERT, "(cg_t::IsClientAllocated( localClientNum ))", (const char *)&queryFormat, "cg_t::IsClientAllocated( localClientNum )") )
    __debugbreak();
  return (unsigned int)CG_GetLocalClientGlobals(localClientNum)->predictedPlayerState.clientNum;
}

/*
==============
Game_GetServerTime
==============
*/
__int64 Game_GetServerTime(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  ClActiveClient *Client; 
  int v5; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v5 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v5) )
      __debugbreak();
  }
  if ( clientUIActives[v1].frontEndSceneState[0] || !clientUIActives[v1].cgameInitialized )
    return 0i64;
  Client = ClActiveClient::GetClient((const LocalClientNum_t)v1);
  return ((__int64 (__fastcall *)(ClActiveClient *))Client->GetServerTime)(Client);
}

/*
==============
Game_InvalidCommandHint_PushToLUIModel
==============
*/
void Game_InvalidCommandHint_PushToLUIModel(LocalClientNum_t localClientNum)
{
  int ControllerFromClient; 
  unsigned __int16 ModelForController; 
  unsigned __int16 ModelFromPath; 
  const char *InvalidCmdHintString; 
  const char *v6; 
  bool v7; 
  unsigned __int16 v8; 
  unsigned __int16 v9; 
  int v11; 

  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v11 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1193, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v11) )
      __debugbreak();
  }
  if ( localClientNum >= cg_t::ms_allocatedCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_game.cpp", 152, ASSERT_TYPE_ASSERT, "(cg_t::IsClientAllocated( localClientNum ))", (const char *)&queryFormat, "cg_t::IsClientAllocated( localClientNum )") )
    __debugbreak();
  ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
  ModelForController = LUI_Model_GetModelForController(ControllerFromClient);
  ModelFromPath = LUI_Model_CreateModelFromPath(ModelForController, "cg.HUD.hints.tutorial.string");
  InvalidCmdHintString = CG_Draw_GetInvalidCmdHintString(localClientNum);
  v6 = InvalidCmdHintString;
  if ( InvalidCmdHintString && *InvalidCmdHintString )
  {
    v7 = 1;
  }
  else
  {
    v7 = 0;
    v6 = (char *)&queryFormat.fmt + 3;
  }
  v8 = LUI_Model_CreateModelFromPath(ModelFromPath, "invalidCmdHint");
  LUI_Model_SetString(v8, v6);
  v9 = LUI_Model_CreateModelFromPath(ModelFromPath, "invalidCmdHintShow");
  LUI_Model_SetBool(v9, v7);
}

/*
==============
Game_IsInSpaceship
==============
*/
char Game_IsInSpaceship(LocalClientNum_t localClientNum, bool *outIsInSpaceship)
{
  *outIsInSpaceship = 0;
  return 1;
}

/*
==============
GetWeaponAttachment
==============
*/
WeaponAttachment *GetWeaponAttachment(const LocalClientNum_t localClientNum, unsigned int attachmentIndex)
{
  __int64 v2; 
  cg_t *LocalClientGlobals; 
  const Weapon *WeaponForHud; 
  bool v5; 
  const WeaponCompleteDef *v6; 
  const WeaponCompleteDef *v7; 
  unsigned int attachmentCount; 
  unsigned int v9; 
  unsigned int v10; 
  int v11; 
  __int64 v12; 
  __int16 i; 
  int weaponOthers; 
  AttachmentSlot slot; 

  v2 = attachmentIndex;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  WeaponForHud = CG_GetWeaponForHud(LocalClientGlobals);
  v5 = BG_UsingAlternate(&LocalClientGlobals->predictedPlayerState);
  v6 = BG_WeaponCompleteDef(WeaponForHud, v5);
  v7 = v6;
  attachmentCount = v6->attachments[9].attachmentCount;
  if ( (unsigned int)v2 < attachmentCount )
  {
    slot = ATT_SLOT_SCOPE;
  }
  else
  {
    v2 = (unsigned int)v2 - attachmentCount;
    if ( (unsigned int)v2 >= attachmentCount )
    {
      v9 = v6->attachments[13].attachmentCount;
      v10 = v2 - attachmentCount;
      if ( v10 < v9 )
      {
        v11 = 0;
        v12 = 0i64;
        for ( i = 1; (unsigned int)v12 < v9; i *= 2 )
        {
          if ( (WeaponForHud->weaponOthers & (unsigned __int16)i) != 0 && v10 < ++v11 )
            break;
          v12 = (unsigned int)(v12 + 1);
        }
        if ( v10 == v11 - 1 )
        {
          weaponOthers = WeaponForHud->weaponOthers;
          if ( _bittest(&weaponOthers, v12) )
            return v7->attachments[13].attachments[v12];
        }
      }
      return 0i64;
    }
    slot = ATT_SLOT_UNDERBARREL;
  }
  if ( (_DWORD)v2 == BG_Weapon_GetPrimaryAttachmentIndex(WeaponForHud, &slot) - 1 )
    return v7->attachments[9].attachments[v2];
  return 0i64;
}

/*
==============
LUI_CoD_RegisterCommonGameFunctions
==============
*/
void LUI_CoD_RegisterCommonGameFunctions(lua_State *luaVM)
{
  if ( LUI_CoD_InFrontend() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_game.cpp", 2926, ASSERT_TYPE_ASSERT, "(!LUI_CoD_InFrontend())", (const char *)&queryFormat, "!LUI_CoD_InFrontend()") )
    __debugbreak();
  j_luaL_register(luaVM, "Game", Game_methods);
  j_lua_settop(luaVM, -2);
}

/*
==============
LUI_LuaCall_Game_GetCalloutMarkerPings_impl
==============
*/
__int64 LUI_LuaCall_Game_GetCalloutMarkerPings_impl(lua_State *const luaVM)
{
  double v2; 
  LocalClientNum_t ClientFromController; 
  playerState_s *p_predictedPlayerState; 
  int v5; 
  int v6; 
  unsigned __int8 LookAtIndex; 
  int v8; 
  unsigned __int8 v9; 
  unsigned __int8 v10; 
  const CalloutMarkerPingView *View; 
  CalloutMarkerPingPool v12; 
  char v13; 
  int LastTimeChanged; 
  unsigned __int8 owner; 
  int v16; 
  const GfxImage *Icon; 
  const BG_SpawnGroup_Loot_ItemDef *LootItemDef; 
  __int64 rarity; 
  const char *name; 
  double ZOffset; 
  unsigned int v22; 
  unsigned int v23; 
  unsigned __int8 v24; 
  __int16 x; 
  int v26; 
  __int64 index; 
  const char *v28; 
  lua_State *v29; 
  const char *v34; 
  long double v35; 
  float v36; 
  float v37; 
  float v38; 
  int IsMovingPlatform; 
  bool v41; 
  CalloutMarkerPingBackgroundType BackgroundType; 
  unsigned __int8 feedback; 
  bool v44; 
  bool v45; 
  unsigned __int8 LastPredictedViewIndex; 
  unsigned __int8 v47; 
  unsigned int value; 
  int value_4; 
  team_t Friendliness; 
  int v51; 
  int v52; 
  playerState_s *v53; 
  vec3_t outWorldOrigin; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: Game.GetObjectives( controllerIndex )");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Game.GetObjectives( controllerIndex )");
  v2 = lui_tonumber32(luaVM, 1);
  ClientFromController = CL_Mgr_GetClientFromController((int)*(float *)&v2);
  p_predictedPlayerState = &CG_GetLocalClientGlobals(ClientFromController)->predictedPlayerState;
  v53 = p_predictedPlayerState;
  j_lua_createtable(luaVM, 52, 0);
  v5 = ScriptableCl_ObjectivePeak(ClientFromController);
  LastPredictedViewIndex = CG_CalloutMarkerPing_GetLastPredictedViewIndex(ClientFromController);
  v6 = 0;
  LookAtIndex = CG_CalloutMarkerPing_GetLookAtIndex(ClientFromController);
  v8 = v5 + 33;
  v9 = LookAtIndex;
  v10 = 0;
  v52 = v5 + 33;
  v47 = LookAtIndex;
  do
  {
    value = v8 + v10;
    View = CG_CalloutMarkerPing_GetView(ClientFromController, v10, p_predictedPlayerState);
    if ( !View->origin.owner )
      goto LABEL_48;
    v12 = CG_CalloutMarkerPing_ViewIndexToPool(ClientFromController, v10);
    if ( (unsigned __int8)(v12 - 9) > 2u )
    {
      v13 = 0;
LABEL_10:
      v51 = v6 + 1;
      LUI_BeginTable(v6 + 1, luaVM);
      feedback = View->origin.feedback;
      v44 = v9 == v10;
      LastTimeChanged = CG_CalloutMarkerPing_GetLastTimeChanged(ClientFromController, v10);
      owner = View->origin.owner;
      value_4 = LastTimeChanged;
      if ( owner )
        v16 = owner - 1;
      else
        v16 = -1;
      Icon = CG_CalloutMarkerPing_GetIcon(v12, View, ClientFromController, COMPASS_TYPE_WAYPOINT);
      BackgroundType = CG_CalloutMarkerPing_GetBackgroundType(v12, View, ClientFromController);
      if ( v13 )
        LootItemDef = ScriptableCl_GetLootItemDef(ClientFromController, View->scriptable.index);
      else
        LootItemDef = NULL;
      Friendliness = CG_CalloutMarkerPing_GetFriendliness(v12, View, ClientFromController);
      if ( !Icon || (v41 = 0, Icon == cgMedia.compass.calloutMarkerPing_OvalBackground) )
        v41 = 1;
      v45 = Icon == cgMedia.compass.calloutMarkerPing_Caution;
      if ( LootItemDef )
        rarity = LootItemDef->rarity;
      else
        rarity = 0i64;
      LUI_SetTableInt("uid", value, luaVM);
      if ( Icon )
        name = Icon->name;
      else
        name = (char *)&queryFormat.fmt + 3;
      LUI_SetTableString("icon", name, luaVM);
      LUI_SetTableInt("background", (unsigned __int8)BackgroundType, luaVM);
      LUI_SetTableInt("ownerClientNum", v16, luaVM);
      LUI_SetTableInt("feedback", feedback, luaVM);
      LUI_SetTableInt("lastChangedTime", value_4, luaVM);
      LUI_SetTableBool("isLookedAt", v44, luaVM);
      LUI_SetTableInt("rarity", rarity, luaVM);
      LUI_SetTableInt("teamFriendliness", Friendliness, luaVM);
      LUI_SetTableBool("isBracket", v41, luaVM);
      LUI_SetTableBool("isCaution", v45, luaVM);
      if ( v10 == 52 )
        LUI_SetTableBool("isPredicted", 1, LUI_luaVM);
      if ( LastPredictedViewIndex == v10 )
      {
        LUI_SetTableBool("wasPredicted", 1, LUI_luaVM);
        CG_CalloutMarkerPing_ResetLastPredicted(ClientFromController);
      }
      LUI_BeginTable("location", luaVM);
      CG_CalloutMarkerPing_GetWorldOrigin(v12, View, ClientFromController, &outWorldOrigin);
      ZOffset = CG_CalloutMarkerPing_GetZOffset(v12, View, ClientFromController);
      LOBYTE(v22) = CG_CalloutMarkerPing_ClassifyPing(ClientFromController, v12, View);
      v23 = v22;
      if ( v12 == CONST_CALLOUT_POOL_ID_REQUEST )
      {
        v24 = View->origin.owner;
        if ( v24 )
          x = v24 - 1;
        else
          x = -1;
      }
      else
      {
        if ( v12 != CONST_CALLOUT_POOL_ID_VEHICLE && (unsigned __int8)(v12 - 4) > 2u )
        {
          x = 2047;
          goto LABEL_36;
        }
        x = View->origin.x;
      }
      if ( x != 2047 )
      {
        LUI_SetTableInt("entNum", x, luaVM);
        _XMM1 = 0i64;
        __asm { vcvtsi2sd xmm1, xmm1, eax; value }
        LUI_SetTableNumber("x", *(long double *)&_XMM1, luaVM);
        _XMM1 = 0i64;
        __asm { vcvtsi2sd xmm1, xmm1, eax; value }
        LUI_SetTableNumber("y", *(long double *)&_XMM1, luaVM);
        v34 = "zOffset";
        v35 = *(float *)&ZOffset;
        goto LABEL_46;
      }
LABEL_36:
      if ( v22 <= 0x16 && (v26 = 5193728, _bittest(&v26, v23)) )
      {
        index = View->scriptable.index;
        v28 = "scriptableIndex";
        v29 = luaVM;
      }
      else
      {
        v29 = luaVM;
        if ( v12 != CONST_CALLOUT_POOL_ID_WORLD )
        {
          LUI_SetTableNumber("x", outWorldOrigin.v[0], luaVM);
          LUI_SetTableNumber("y", outWorldOrigin.v[1], luaVM);
          v35 = outWorldOrigin.v[2];
          v34 = "z";
          goto LABEL_46;
        }
        index = View->origin.x;
        v28 = "objectiveIndex";
      }
      LUI_SetTableInt(v28, index, v29);
      v34 = "zOffset";
      v35 = *(float *)&ZOffset;
LABEL_46:
      LUI_SetTableNumber(v34, v35, luaVM);
      LUI_EndTable(luaVM);
      v36 = outWorldOrigin.v[0];
      v37 = outWorldOrigin.v[1];
      v38 = outWorldOrigin.v[2] - *(float *)&ZOffset;
      LUI_BeginTable("bottom", luaVM);
      LUI_SetTableNumber("x", v36, luaVM);
      LUI_SetTableNumber("y", v37, luaVM);
      LUI_SetTableNumber("z", v38, luaVM);
      LUI_EndTable(luaVM);
      IsMovingPlatform = BGMovingPlatforms::IsMovingPlatform(x);
      LUI_SetTableBool("isTrain", IsMovingPlatform != 0, luaVM);
      LUI_EndTable(luaVM);
      v6 = v51;
      v9 = v47;
      goto LABEL_47;
    }
    v13 = 1;
    if ( ScriptableCl_GetInstanceInUse(ClientFromController, View->scriptable.index) )
      goto LABEL_10;
LABEL_47:
    p_predictedPlayerState = v53;
LABEL_48:
    v8 = v52;
    ++v10;
  }
  while ( v10 < 0x35u );
  CG_CalloutMarkerPing_MarkDataConsumed(ClientFromController);
  return 1i64;
}

/*
==============
LUI_LuaCall_Game_GetCurrentWeaponAttachments_impl
==============
*/
__int64 LUI_LuaCall_Game_GetCurrentWeaponAttachments_impl(lua_State *const luaVM)
{
  bool v2; 
  double v3; 
  LocalClientNum_t ClientFromController; 
  cg_t *LocalClientGlobals; 
  bool v6; 
  const cg_t *v7; 
  Weapon *Weapon; 
  __int128 v9; 
  double v10; 
  __int64 AllWeaponAttachments; 
  __int64 WeaponFireType; 
  int v13; 
  const char ***v14; 
  AttachmentSlot DynamicAttachmentSlot; 
  __int64 v16; 
  Weapon result; 
  __m256i v19; 
  __int128 v20; 
  double v21; 
  int v22; 
  Weapon r_weapon; 
  WeaponAttachment *attachments[30]; 

  if ( j_lua_gettop(luaVM) < 1 )
    j_luaL_error(luaVM, "USAGE: Game.GetCurrentWeaponAttachments( controllerIndex )");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Game.GetCurrentWeaponAttachments( controllerIndex )");
  v2 = 0;
  if ( j_lua_gettop(luaVM) == 2 )
  {
    if ( j_lua_type(luaVM, 2) != 1 )
      j_luaL_error(luaVM, "USAGE: Game.GetCurrentWeaponAttachments( controllerIndex, isInteractive )");
    v2 = j_lua_toboolean(luaVM, 2) != 0;
  }
  v3 = lui_tonumber32(luaVM, 1);
  ClientFromController = CL_Mgr_GetClientFromController((int)*(float *)&v3);
  LocalClientGlobals = CG_GetLocalClientGlobals(ClientFromController);
  v6 = BG_UsingAlternate(&LocalClientGlobals->predictedPlayerState);
  v7 = CG_GetLocalClientGlobals(ClientFromController);
  if ( v2 )
    Weapon = LUI_DataBinding_Interactions_GetWeapon(&result, ClientFromController);
  else
    Weapon = (Weapon *)CG_GetWeaponForHud(v7);
  v9 = *(_OWORD *)&Weapon->attachmentVariationIndices[5];
  v19 = *(__m256i *)&Weapon->weaponIdx;
  v10 = *(double *)&Weapon->attachmentVariationIndices[21];
  v22 = *(_DWORD *)&Weapon->weaponCamo;
  v21 = v10;
  v20 = v9;
  *(__m256i *)&r_weapon.weaponIdx = v19;
  *(double *)&r_weapon.attachmentVariationIndices[21] = v10;
  *(_DWORD *)&r_weapon.weaponCamo = v22;
  *(_OWORD *)&r_weapon.attachmentVariationIndices[5] = v9;
  AllWeaponAttachments = BG_GetAllWeaponAttachments(&r_weapon, (const WeaponAttachment **)attachments);
  WeaponFireType = BG_GetWeaponFireType(&r_weapon, v6);
  v13 = 0;
  j_lua_createtable(luaVM, 0, 0);
  if ( (_DWORD)AllWeaponAttachments )
  {
    v14 = (const char ***)attachments;
    do
    {
      if ( **v14 )
      {
        LUI_BeginTable(++v13, luaVM);
        LUI_SetTableString("ref", **v14, LUI_luaVM);
        LUI_SetTableInt("type", *((int *)*v14 + 46), LUI_luaVM);
        LUI_SetTableString("animateSeq", (*v14)[24], LUI_luaVM);
        LUI_SetTableString("icon", (*v14)[25], LUI_luaVM);
        DynamicAttachmentSlot = BG_GetDynamicAttachmentSlot(*((const DynamicAttachmentType *)*v14 + 46));
        if ( DynamicAttachmentSlot == ATT_SLOT_OTHER )
          v16 = 0i64;
        else
          v16 = r_weapon.attachmentVariationIndices[DynamicAttachmentSlot];
        LUI_SetTableInt("variantID", v16, LUI_luaVM);
        LUI_EndTable(LUI_luaVM);
      }
      ++v14;
      --AllWeaponAttachments;
    }
    while ( AllWeaponAttachments );
  }
  LUI_BeginTable(v13 + 1, luaVM);
  LUI_SetTableInt("fireType", WeaponFireType, LUI_luaVM);
  LUI_SetTableInt("type", 8i64, LUI_luaVM);
  LUI_EndTable(LUI_luaVM);
  return 1i64;
}

/*
==============
LUI_LuaCall_Game_GetLootData_impl
==============
*/
__int64 LUI_LuaCall_Game_GetLootData_impl(lua_State *const luaVM)
{
  double v2; 
  LocalClientNum_t ClientFromController; 
  const BG_SpawnGroup_Loot_ItemDef *LootItemFromCursor; 
  unsigned __int16 ModelForController; 
  unsigned __int16 ModelFromPath; 
  HintParamValue v7; 
  int Int; 
  const char *pickupString; 
  const char *v10; 
  const BG_SpawnGroup_Loot_ItemDef *LootItemFromScriptableIndex; 
  unsigned __int16 v12; 
  int v13; 
  __int64 WeaponFireType; 
  __int64 v15; 
  cg_t *LocalClientGlobals; 
  int v17; 
  __int64 v18; 
  __int64 LootWeaponNumActiveAttachments; 
  const char *WeaponBaseName; 
  __int64 WeaponAttachments; 
  __int64 v22; 
  const char ***v23; 
  Weapon result; 
  Weapon r_weapon; 
  WeaponAttachment *attachments[30]; 

  if ( j_lua_gettop(luaVM) < 1 )
    j_luaL_error(luaVM, "USAGE: Game.GetLootData( controllerIndex )");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Game.GetLootData( controllerIndex )");
  v2 = lui_tonumber32(luaVM, 1);
  ClientFromController = CL_Mgr_GetClientFromController((int)*(float *)&v2);
  LootItemFromCursor = LUI_DataBinding_Interactions_GetLootItemFromCursor(ClientFromController);
  ModelForController = LUI_Model_GetModelForController((int)*(float *)&v2);
  ModelFromPath = LUI_Model_GetModelFromPath(ModelForController, "cg.HUD.hints.lootCard.shouldShow");
  v7.intVal = 0;
  if ( LUI_Model_GetDataType(ModelFromPath) == LUI_MODEL_DT_INT )
    Int = LUI_Model_GetInt(ModelFromPath);
  else
    Int = 0;
  pickupString = NULL;
  if ( j_lua_gettop(luaVM) < 2 )
  {
    if ( Int != 1 )
      goto LABEL_16;
    v12 = LUI_Model_GetModelFromPath(ModelForController, "cg.HUD.hints.lootCard.targetEntityNum");
    if ( LUI_Model_GetDataType(v12) != LUI_MODEL_DT_INT )
      goto LABEL_16;
    v13 = LUI_Model_GetInt(v12);
    LootItemFromScriptableIndex = LUI_DataBinding_Interactions_GetLootItemFromScriptableIndex(ClientFromController, v13 & 0x3FFFFF);
    LootItemFromCursor = LootItemFromScriptableIndex;
    if ( !LootItemFromScriptableIndex )
      goto LABEL_16;
  }
  else
  {
    if ( !j_lua_isstring(luaVM, 2) )
      j_luaL_error(luaVM, "USAGE: Game.GetLootData( controllerIndex, ?brLootItemNameRef );");
    v10 = j_lua_tolstring(luaVM, 2, NULL);
    LootItemFromScriptableIndex = LUI_DataBinding_Interactions_GetLootItemFromName(ClientFromController, v10);
    LootItemFromCursor = LootItemFromScriptableIndex;
  }
  pickupString = LootItemFromScriptableIndex->pickupString;
LABEL_16:
  r_weapon = *LUI_DataBinding_Interactions_GetWeapon(&result, ClientFromController);
  WeaponFireType = BG_GetWeaponFireType(&r_weapon, 0);
  v15 = BG_GetWeaponFireType(&r_weapon, 1);
  LocalClientGlobals = CG_GetLocalClientGlobals(ClientFromController);
  v17 = 0;
  v18 = 0i64;
  while ( LocalClientGlobals->predictedPlayerState.cursorHintParams.types[v18] != 2 )
  {
    ++v17;
    if ( ++v18 >= 2 )
      goto LABEL_21;
  }
  LODWORD(v7.floatVal) = LocalClientGlobals->predictedPlayerState.cursorHintParams.values[v17];
LABEL_21:
  if ( !LootItemFromCursor )
    return 0i64;
  LootWeaponNumActiveAttachments = (int)LUI_DataBinding_Interactions_GetLootWeaponNumActiveAttachments(LootItemFromCursor);
  j_lua_createtable(luaVM, 0, 0);
  LUI_SetTableString((const char *)&stru_143C9A1A4, LootItemFromCursor->name, luaVM);
  LUI_SetTableString("weaponFullString", LootItemFromCursor->weaponFullString, luaVM);
  LUI_SetTableString("pickupString", pickupString, luaVM);
  LUI_SetTableString("pickupIcon", NULL, luaVM);
  LUI_SetTableInt("type", LootItemFromCursor->type, luaVM);
  LUI_SetTableInt("rarity", LootItemFromCursor->rarity, luaVM);
  LUI_SetTableInt("quantity", v7.intVal, luaVM);
  LUI_SetTableInt("startQuantity", (int)LootItemFromCursor->startQuantity, luaVM);
  LUI_SetTableInt("weaponIndex", (int)LootItemFromCursor->weaponIndex, luaVM);
  LUI_SetTableInt("fireType", WeaponFireType, luaVM);
  LUI_SetTableInt("fireTypeAlt", v15, luaVM);
  LUI_SetTableInt("maxNumAttachments", 5i64, luaVM);
  LUI_SetTableInt("numActiveAttachments", LootWeaponNumActiveAttachments, luaVM);
  LUI_BeginTable("attachmentData", luaVM);
  LUI_EndTable(LUI_luaVM);
  if ( BG_SpawnGroup_Loot_IsCustomWeaponItemDef(LootItemFromCursor) )
  {
    WeaponBaseName = BG_GetWeaponBaseName(&r_weapon, 0);
    LUI_SetTableString("customWeaponName", WeaponBaseName, luaVM);
    WeaponAttachments = BG_GetWeaponAttachments(&r_weapon, 0, (const WeaponAttachment **)attachments);
    LUI_BeginTable("customWeaponAttachments", luaVM);
    if ( (_DWORD)WeaponAttachments )
    {
      v22 = 1i64;
      v23 = (const char ***)attachments;
      do
      {
        LUI_SetTableString(v22++, **v23++, luaVM);
        --WeaponAttachments;
      }
      while ( WeaponAttachments );
    }
    LUI_EndTable(LUI_luaVM);
  }
  return 1i64;
}

/*
==============
LUI_LuaCall_Game_GetObjectives_impl
==============
*/
__int64 LUI_LuaCall_Game_GetObjectives_impl(lua_State *const luaVM)
{
  double v2; 
  LocalClientNum_t v3; 
  playerState_s *p_predictedPlayerState; 
  const ClConfigStrings *v5; 
  cg_t *LocalClientGlobals; 
  bool m_isMLGSpectator; 
  char *m_activeGameTypeName; 
  int v9; 
  __int64 v10; 
  ObjectiveSide *p_side; 
  unsigned __int8 v14; 
  int v15; 
  ObjectiveBackground background; 
  const char *v17; 
  __int64 v18; 
  char v19; 
  __int64 v20; 
  char v21; 
  ObjectiveSide v22; 
  int v23; 
  __int64 v24; 
  ObjectiveSide *v25; 
  float *v26; 
  int v27; 
  __int64 v28; 
  unsigned __int8 v29; 
  __int64 v30; 
  char v33; 
  unsigned int InstanceIndex; 
  char v35; 
  const ObjectiveSettings *v36; 
  const ObjectiveSettings *v37; 
  int v38; 
  int v39; 
  const char *v40; 
  const char *v41; 
  int v43; 
  int v44; 
  unsigned __int8 v46; 
  bool v47; 
  unsigned __int8 v48; 
  int v49; 
  LocalClientNum_t ClientFromController; 
  __int64 v51; 
  __int64 v52; 
  ClConfigStrings *ClConfigStrings; 
  char *v54; 
  vec3_t out_origin; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: Game.GetObjectives( controllerIndex )");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Game.GetObjectives( controllerIndex )");
  v2 = lui_tonumber32(luaVM, 1);
  ClientFromController = CL_Mgr_GetClientFromController((int)*(float *)&v2);
  v3 = ClientFromController;
  p_predictedPlayerState = &CG_GetLocalClientGlobals(ClientFromController)->predictedPlayerState;
  *(_QWORD *)out_origin.v = p_predictedPlayerState;
  ClConfigStrings = ClConfigStrings::GetClConfigStrings();
  v5 = ClConfigStrings;
  LocalClientGlobals = CG_GetLocalClientGlobals(ClientFromController);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_game.cpp", 2260, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  m_isMLGSpectator = LocalClientGlobals->m_isMLGSpectator;
  m_activeGameTypeName = cls.m_activeGameTypeName;
  v9 = 0;
  v47 = m_isMLGSpectator;
  if ( !cls.m_activeGameTypeName[0] )
    m_activeGameTypeName = NULL;
  v54 = m_activeGameTypeName;
  v48 = ScriptableCl_ObjectiveCount(ClientFromController);
  v46 = ScriptableCl_ObjectivePeak(ClientFromController);
  j_lua_createtable(luaVM, v46 + 32, 0);
  v10 = 1i64;
  v49 = 0;
  v52 = 1i64;
  p_side = &p_predictedPlayerState->objectives[0].side;
  do
  {
    if ( !m_isMLGSpectator || (*(_WORD *)(p_side - 5) & 0x4000) == 0 )
    {
      _XMM1 = 0i64;
      __asm { vcvtsi2sd xmm1, xmm1, eax; n }
      j_lua_pushnumber(LUI_luaVM, *(long double *)&_XMM1);
      j_lua_createtable(luaVM, 0, 16);
      LUI_SetTableInt("index", v10, luaVM);
      v14 = *((_BYTE *)p_side - 2);
      if ( ((v14 - 2) & 0xFD) == 0 && CG_CalloutMarkerPing_CheckSquadPingsForTarget(v3, *(_DWORD *)(p_side - 161), 0xFFFFFFFF, v9) != 53 )
        v14 = 1;
      if ( m_isMLGSpectator && (v15 = *(_DWORD *)(p_side + 3)) != 0 )
      {
        background = *((_BYTE *)p_side + 7);
      }
      else
      {
        v15 = *(_DWORD *)(p_side - 17);
        background = *((_BYTE *)p_side - 3);
      }
      LUI_SetTableObjectiveStringsAndIcon(luaVM, v5, *(_DWORD *)(p_side - 21), *(_DWORD *)(p_side - 25), v15, background, *(_DWORD *)(p_side - 29), -1);
      LUI_SetTableObjectiveFlags(luaVM, (const ObjectiveFlags *)(p_side - 5));
      if ( !m_isMLGSpectator || !m_activeGameTypeName )
        goto LABEL_28;
      v17 = "ctf";
      v18 = 0x7FFFFFFFi64;
      do
      {
        v19 = v17[m_activeGameTypeName - "ctf"];
        v20 = v18;
        v21 = *v17++;
        --v18;
        if ( !v20 )
          break;
        if ( v19 != v21 )
          goto LABEL_28;
      }
      while ( v19 );
      if ( *(int *)(p_side - 29) > 0 )
        v22 = (*p_side == FRIENDLY) + 1;
      else
LABEL_28:
        v22 = *p_side;
      LUI_SetTableObjectiveStatus(luaVM, v14, v22, *(float *)(p_side - 13), p_side[1]);
      LUI_BeginTable("locations", luaVM);
      v23 = 1;
      v51 = 8i64;
      v24 = 1i64;
      v25 = p_side - 161;
      v26 = (float *)(p_side - 121);
      do
      {
        v27 = *(_DWORD *)(p_side - 33);
        v28 = *(int *)v25;
        LUI_BeginTable(v24, luaVM);
        if ( (v23 & v27) != 0 )
        {
          if ( (_DWORD)v28 == 2047 )
          {
            LUI_SetTableNumber("x", *(v26 - 2), luaVM);
            LUI_SetTableNumber("y", *(v26 - 1), luaVM);
            LUI_SetTableNumber("z", *v26, luaVM);
          }
          else
          {
            LUI_SetTableInt("entNum", v28, luaVM);
          }
        }
        LUI_EndTable(luaVM);
        ++v24;
        v23 = __ROL4__(v23, 1);
        v26 += 3;
        v25 += 4;
        --v51;
      }
      while ( v51 );
      LUI_EndTable(luaVM);
      v5 = ClConfigStrings;
      CG_GameInterface_SetObjectiveLuaData(ClConfigStrings, (const ObjectiveView *const)(p_side - 161), luaVM);
      j_lua_settable(LUI_luaVM, -3);
      v9 = v49;
      m_isMLGSpectator = v47;
      v10 = v52;
      v3 = ClientFromController;
      m_activeGameTypeName = v54;
    }
    ++v9;
    ++v10;
    p_side += 172;
    v49 = v9;
    v52 = v10;
  }
  while ( v9 < 32 );
  v29 = 0;
  if ( !v46 )
    return 1i64;
  v30 = *(_QWORD *)out_origin.v;
  do
  {
    _XMM1 = 0i64;
    __asm { vcvtsi2sd xmm1, xmm1, ebx; n }
    j_lua_pushnumber(LUI_luaVM, *(long double *)&_XMM1);
    j_lua_createtable(luaVM, 0, 16);
    LUI_SetTableInt("index", (unsigned int)v29 + 33, luaVM);
    if ( CG_Players_IsPlayerInGulag(v3, *(_DWORD *)(v30 + 460)) || v29 >= v48 )
    {
      v33 = 0;
      InstanceIndex = -1;
    }
    else
    {
      v33 = 1;
      InstanceIndex = ScriptableCl_ObjectiveGetInstanceIndex(v3, v29);
    }
    v35 = 0;
    if ( InstanceIndex != -1 )
      v35 = v33;
    if ( v35 && ScriptableCl_GetInstanceInUse(v3, InstanceIndex) && CG_CalloutMarkerPing_CheckSquadPingsForTarget(v3, 2047, InstanceIndex, -1) == 53 && (v36 = ScriptableCl_ObjectiveGet(v3, v29, &out_origin), (v37 = v36) != NULL) )
    {
      LUI_SetTableObjectiveStringsAndIcon(luaVM, v5, v36->description, v36->label, v36->icon, v36->background, v36->zOffset, -1);
      LUI_SetTableObjectiveFlags(luaVM, (const ObjectiveFlags *)v37);
      LUI_SetTableObjectiveStatus(luaVM, (unsigned __int8)v37->state, NEUTRAL, 0.0, NEUTRAL);
      LUI_BeginTable("locations", luaVM);
      v38 = 0;
      do
      {
        v39 = v38 + 1;
        LUI_BeginTable(v38 + 1, luaVM);
        if ( !v38 )
        {
          if ( InstanceIndex == -1 )
          {
            LUI_SetTableNumber("x", out_origin.v[0], luaVM);
            LUI_SetTableNumber("y", out_origin.v[1], luaVM);
            LUI_SetTableNumber("z", out_origin.v[2], luaVM);
          }
          else
          {
            LUI_SetTableInt("scriptableIndex", InstanceIndex, luaVM);
          }
        }
        LUI_EndTable(luaVM);
        ++v38;
      }
      while ( v39 < 8 );
    }
    else
    {
      v40 = (const char *)v5->GetLocalizedString((ClConfigStrings *)v5, 0);
      LUI_SetTableString("description", v40, luaVM);
      v41 = (const char *)v5->GetLocalizedString((ClConfigStrings *)v5, 0);
      LUI_SetTableString("label", v41, luaVM);
      LUI_SetTableInt("background", 1i64, luaVM);
      __asm { vxorpd  xmm1, xmm1, xmm1; value }
      LUI_SetTableNumber("zOffset", *(long double *)&_XMM1, luaVM);
      LUI_SetTableInt("ownerClientNum", -1i64, luaVM);
      LUI_SetTableBool("showDistance", 0, luaVM);
      LUI_SetTableBool("pinned", 0, luaVM);
      LUI_SetTableBool("playIntro", 0, luaVM);
      LUI_SetTableBool("playOutro", 0, luaVM);
      LUI_SetTableBool("pulsate", 0, luaVM);
      LUI_SetTableBool("showProgress", 0, luaVM);
      LUI_SetTableBool("fadeDisabled", 0, luaVM);
      LUI_SetTableObjectiveStatus(luaVM, 3, NEUTRAL, 0.0, NEUTRAL);
      LUI_BeginTable("locations", luaVM);
      v43 = 0;
      do
      {
        v44 = v43 + 1;
        LUI_BeginTable(v43 + 1, luaVM);
        if ( !v43 )
        {
          LUI_SetTableNumber("x", 0.0, luaVM);
          LUI_SetTableNumber("y", 0.0, luaVM);
          LUI_SetTableNumber("z", 0.0, luaVM);
        }
        LUI_EndTable(luaVM);
        ++v43;
      }
      while ( v44 < 8 );
    }
    LUI_EndTable(luaVM);
    j_lua_settable(LUI_luaVM, -3);
    ++v29;
  }
  while ( v29 < v46 );
  return 1i64;
}

/*
==============
LUI_LuaCall_Game_GetOffsetForHitmarker_impl
==============
*/
__int64 LUI_LuaCall_Game_GetOffsetForHitmarker_impl(lua_State *const luaVM)
{
  double v2; 
  LocalClientNum_t ClientFromController; 
  cg_t *LocalClientGlobals; 
  const ScreenPlacement *ActivePlacement; 
  float v6; 
  float v7; 
  const LUIElement *CurrentRoot; 
  float unitScale; 
  float v10; 
  vec3_t outOrg; 
  __int64 v13; 
  vec2_t outScreenPos; 
  vec3_t angles; 
  vec3_t forward; 
  dvec3_t worldPos; 

  v13 = -2i64;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Game.GetOffsetForHitmarker( <controller> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v2 = lui_tonumber32(luaVM, 1);
    ClientFromController = CL_Mgr_GetClientFromController((int)*(float *)&v2);
    LocalClientGlobals = CG_GetLocalClientGlobals(ClientFromController);
    RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
    *(_QWORD *)angles.v = *(_QWORD *)LocalClientGlobals->gunAnglesExtrapolated.v;
    angles.v[2] = 0.0;
    AngleVectors(&angles, &forward, NULL, NULL);
    worldPos.x = (float)((float)(5.0 * forward.v[0]) + outOrg.v[0]);
    worldPos.y = (float)((float)(5.0 * forward.v[1]) + outOrg.v[1]);
    worldPos.z = (float)((float)(5.0 * forward.v[2]) + outOrg.v[2]);
    ActivePlacement = ScrPlace_GetActivePlacement(ClientFromController);
    v6 = 0.5 * ActivePlacement->realViewportSize.v[0];
    v7 = 0.5 * ActivePlacement->realViewportSize.v[1];
    CurrentRoot = LUI_CoD_GetCurrentRoot(luaVM);
    if ( !CurrentRoot && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_game.cpp", 855, ASSERT_TYPE_ASSERT, "(root)", (const char *)&queryFormat, "root") )
      __debugbreak();
    unitScale = LUI_GetRootData(CurrentRoot)->unitScale;
    if ( CG_WorldPosToScreenPosRealForScenePrecise(ClientFromController, ActivePlacement, &worldPos, 0, &outScreenPos) )
    {
      j_lua_createtable(luaVM, 0, 2);
      v10 = 1.0 / unitScale;
      LUI_SetTableNumber("x", (float)((float)(outScreenPos.v[0] - v6) * v10), LUI_luaVM);
      LUI_SetTableNumber("y", (float)((float)(outScreenPos.v[1] - v7) * v10), LUI_luaVM);
      memset(&outOrg, 0, sizeof(outOrg));
      return 1i64;
    }
    memset(&outOrg, 0, sizeof(outOrg));
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_Game_GetOmnvar_impl
==============
*/
__int64 LUI_LuaCall_Game_GetOmnvar_impl(lua_State *const luaVM)
{
  int v2; 
  LocalClientNum_t ClientFromController; 
  const char *v4; 
  __int64 result; 
  unsigned int IndexByName; 
  unsigned int v7; 
  const OmnvarDef *Def; 
  OmnvarData *Data; 
  OmnvarData *v10; 
  signed int integer; 
  char v12; 
  unsigned int Time; 
  char *outStringValue; 

  if ( j_lua_gettop(luaVM) < 2 )
    j_luaL_error(luaVM, "USAGE: Game.GetOmnvar( controllerIndex, omnvarName, ?bitFieldIndex );");
  if ( j_lua_gettop(luaVM) > 3 )
    j_luaL_error(luaVM, "USAGE: Game.GetOmnvar( controllerIndex, omnvarName, ?bitFieldIndex );");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Game.GetOmnvar( controllerIndex, omnvarName, ?bitFieldIndex );");
  if ( !j_lua_isstring(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Game.GetOmnvar( controllerIndex, omnvarName, ?bitFieldIndex );");
  if ( j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) )
    j_luaL_error(luaVM, "USAGE: Game.GetOmnvar( controllerIndex, omnvarName, ?bitFieldIndex );");
  v2 = j_lua_tointeger(luaVM, 1);
  ClientFromController = CL_Mgr_GetClientFromController(v2);
  v4 = j_lua_tolstring(luaVM, 2, NULL);
  if ( BG_Omnvar_IsInitialized() )
  {
    IndexByName = BG_Omnvar_GetIndexByName(v4);
    v7 = IndexByName;
    if ( IndexByName == -1 )
      j_luaL_error(luaVM, "GetOmnvar couldn't find the specified Omnvar '%s', did you add it to omnvars.csv?", v4);
    Def = BG_Omnvar_GetDef(IndexByName);
    Data = CG_Omnvar_GetData(ClientFromController, v7);
    v10 = Data;
    switch ( Def->type )
    {
      case OMNVAR_TYPE_BOOL:
        j_lua_pushboolean(luaVM, Data->current.enabled);
        result = 1i64;
        break;
      case OMNVAR_TYPE_FLOAT:
        j_lua_pushnumber(luaVM, Data->current.value);
        result = 1i64;
        break;
      case OMNVAR_TYPE_INT:
        if ( !Data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.h", 207, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
          __debugbreak();
        if ( Def->type != OMNVAR_TYPE_INT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.h", 208, ASSERT_TYPE_ASSERT, "(def->type == OMNVAR_TYPE_INT)", (const char *)&queryFormat, "def->type == OMNVAR_TYPE_INT") )
          __debugbreak();
        j_lua_pushinteger(luaVM, Def->minvalue + v10->current.integer);
        result = 1i64;
        break;
      case OMNVAR_TYPE_UINT:
        integer = Data->current.integer;
        if ( Def->userType == OMNVAR_USER_TYPE_BIT_FIELD && j_lua_gettop(luaVM) >= 3 )
        {
          v12 = lui_tointeger32(luaVM, 3);
          integer = ((1 << v12) & (unsigned int)integer) >> v12;
        }
        j_lua_pushinteger(luaVM, integer);
        result = 1i64;
        break;
      case OMNVAR_TYPE_TIME:
        Time = CG_Omnvar_GetTime(Def, Data, ClientFromController);
        j_lua_pushinteger(luaVM, Time);
        result = 1i64;
        break;
      case OMNVAR_TYPE_NCS_LUI:
        if ( !BG_Omnvar_GetNCString(Def, Data, (const char **)&outStringValue) )
          goto LABEL_33;
        j_lua_pushstring(luaVM, outStringValue);
        result = 1i64;
        break;
      default:
LABEL_33:
        result = 0i64;
        break;
    }
  }
  else
  {
    Com_PrintWarning(13, "LUI_LuaCall_Game_GetOmnvar '%s' before omnvars are initialized\n", v4);
    return 0i64;
  }
  return result;
}

/*
==============
LUI_LuaCall_Game_GetPlayerDataForTacOpsMap_impl
==============
*/
__int64 LUI_LuaCall_Game_GetPlayerDataForTacOpsMap_impl(lua_State *const luaVM)
{
  double v2; 
  LocalClientNum_t ClientFromController; 
  int v4; 
  centity_t *Entity; 
  int clientNum; 
  centity_t *v8; 
  vec4_t color; 
  char clanTagBuf[16]; 
  char nameBuf[40]; 
  char dest[48]; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Game.GetPlayerDataForTacOpsMap( <controllerIndex>, <entityNum> )");
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    return 0i64;
  v2 = lui_tonumber32(luaVM, 1);
  ClientFromController = CL_Mgr_GetClientFromController((int)*(float *)&v2);
  v4 = lui_tointeger32(luaVM, 2);
  Entity = CG_GetEntity(ClientFromController, v4);
  clientNum = Entity->nextState.clientNum;
  if ( Entity->nextState.eType == ET_SCRIPTMOVER )
  {
    if ( !clientNum )
    {
LABEL_12:
      j_lua_createtable(luaVM, 0, 1);
      LUI_SetTableString((const char *)&stru_143C9A1A4, (const char *)&queryFormat.fmt + 3, luaVM);
      return 1i64;
    }
    v4 = clientNum - 1;
  }
  if ( v4 >= cls.maxClients )
    goto LABEL_12;
  color = (vec4_t)_xmm;
  nameBuf[0] = 0;
  clanTagBuf[0] = 0;
  dest[0] = 0;
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid", *(_OWORD *)&color, *(_QWORD *)clanTagBuf) )
    __debugbreak();
  if ( v4 < cls.maxClients || v4 >= (int)ComCharacterLimits::ms_gameData.m_characterCount )
  {
    if ( CL_GetClientNameAndClanTag(ClientFromController, v4, nameBuf, 0x24ui64, clanTagBuf, 0xCui64) )
    {
      Com_sprintf(dest, 0x30ui64, "%s%s", clanTagBuf, nameBuf);
    }
    else
    {
      Com_sprintf(dest, 0x30ui64, "?");
      Com_PrintWarning(13, "DEBUGGING SQUAD NAME ... localClientNum: %d, clientNum: %d\n", (unsigned int)ClientFromController, (unsigned int)v4);
    }
    LUI_CoD_GameMP_GetBrColorForClientNum(v4, &color);
  }
  else
  {
    v8 = CG_GetEntity(ClientFromController, v4);
    if ( CL_GetAgentName(ClientFromController, v4, v8->nextState.otherEntityNum, nameBuf, 0x24ui64) )
    {
      Com_sprintf(dest, 0x30ui64, (const char *)&queryFormat, nameBuf);
    }
    else
    {
      Com_sprintf(dest, 0x30ui64, "?");
      Com_PrintWarning(13, "DEBUGGING SQUAD NAME ... localClientNum: %d, clientNum: %d\n", (unsigned int)ClientFromController, (unsigned int)v4);
    }
    LUI_CoD_GameMP_GetBrColorForIndex(0, &color);
  }
  j_lua_createtable(luaVM, 0, 2);
  LUI_SetTableString((const char *)&stru_143C9A1A4, dest, luaVM);
  j_lua_createtable(luaVM, 0, 3);
  LUI_SetTableNumber("r", color.v[0], luaVM);
  LUI_SetTableNumber("g", color.v[1], luaVM);
  LUI_SetTableNumber("b", color.v[2], luaVM);
  j_lua_setfield(luaVM, -2, "color");
  return 1i64;
}

/*
==============
LUI_LuaCall_Game_GetPrimaryReticleData_impl
==============
*/
__int64 LUI_LuaCall_Game_GetPrimaryReticleData_impl(lua_State *const luaVM)
{
  double v2; 
  LocalClientNum_t ClientFromController; 
  bool v4; 
  ReticleDef *Reticle; 
  bool lockReticleToTag; 
  ReticleDef *v7; 
  float maxReticleScale; 
  float offsetFromTag; 
  ReticleDef *v10; 
  float primaryDefaultScale; 
  ReticleDef *v12; 
  char primaryAffectedByEMP; 
  ReticleDef *v14; 
  float naturalDistance; 
  ReticleDef *v16; 
  float minReticleScale; 
  ReticleDef *v18; 
  ReticleDef *v19; 
  ReticleDef *v20; 
  int naturalFOV; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, "USAGE: Game.GetPrimaryReticleData( <controller>, <isAltReticle> )");
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || j_lua_type(luaVM, 2) != 1 )
    return 0i64;
  v2 = lui_tonumber32(luaVM, 1);
  ClientFromController = CL_Mgr_GetClientFromController((int)*(float *)&v2);
  v4 = j_lua_toboolean(luaVM, 2) == 1;
  Reticle = GetReticle(ClientFromController, v4);
  if ( Reticle )
    lockReticleToTag = Reticle->lockReticleToTag;
  else
    lockReticleToTag = 0;
  v7 = GetReticle(ClientFromController, v4);
  maxReticleScale = 0.0;
  if ( v7 )
    offsetFromTag = v7->offsetFromTag;
  else
    offsetFromTag = 0.0;
  v10 = GetReticle(ClientFromController, v4);
  if ( v10 )
    primaryDefaultScale = v10->primaryDefaultScale;
  else
    primaryDefaultScale = FLOAT_1_0;
  v12 = GetReticle(ClientFromController, v4);
  if ( v12 )
    primaryAffectedByEMP = v12->primaryAffectedByEMP;
  else
    primaryAffectedByEMP = 1;
  v14 = GetReticle(ClientFromController, v4);
  if ( v14 )
    naturalDistance = v14->naturalDistance;
  else
    naturalDistance = 0.0;
  v16 = GetReticle(ClientFromController, v4);
  if ( v16 )
    minReticleScale = v16->minReticleScale;
  else
    minReticleScale = 0.0;
  v18 = GetReticle(ClientFromController, v4);
  if ( v18 )
    maxReticleScale = v18->maxReticleScale;
  v19 = GetReticle(ClientFromController, v4);
  if ( v19 && v19->scaleWithFOV )
  {
    j_lua_createtable(luaVM, 0, 8);
    v20 = GetReticle(ClientFromController, v4);
    if ( v20 )
      naturalFOV = v20->naturalFOV;
    else
      naturalFOV = 65;
    LUI_SetTableInt("naturalFOV", naturalFOV, LUI_luaVM);
  }
  else
  {
    j_lua_createtable(luaVM, 0, 7);
  }
  LUI_SetTableBool("lockedToTag", lockReticleToTag, LUI_luaVM);
  LUI_SetTableNumber("tagOffset", offsetFromTag, LUI_luaVM);
  LUI_SetTableNumber("defaultScale", primaryDefaultScale, LUI_luaVM);
  LUI_SetTableBool("affectedByEMP", primaryAffectedByEMP, LUI_luaVM);
  LUI_SetTableNumber("naturalDistance", naturalDistance, LUI_luaVM);
  LUI_SetTableNumber("minScale", minReticleScale, LUI_luaVM);
  LUI_SetTableNumber("maxScale", maxReticleScale, LUI_luaVM);
  return 1i64;
}

/*
==============
LUI_LuaCall_Game_GetSecondaryReticleData_impl
==============
*/
__int64 LUI_LuaCall_Game_GetSecondaryReticleData_impl(lua_State *const luaVM)
{
  double v2; 
  LocalClientNum_t ClientFromController; 
  bool v4; 
  ReticleDef *Reticle; 
  bool secondaryLockReticleToTag; 
  ReticleDef *v7; 
  float maxReticleScale; 
  float secondaryOffsetFromTag; 
  ReticleDef *v10; 
  float secondaryDefaultScale; 
  ReticleDef *v12; 
  char secondaryAffectedByEMP; 
  ReticleDef *v14; 
  float naturalDistance; 
  ReticleDef *v16; 
  float minReticleScale; 
  ReticleDef *v18; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, "USAGE: Game.GetSecondaryReticleData( <controller>, <isAltReticle> )");
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || j_lua_type(luaVM, 2) != 1 )
    return 0i64;
  v2 = lui_tonumber32(luaVM, 1);
  ClientFromController = CL_Mgr_GetClientFromController((int)*(float *)&v2);
  v4 = j_lua_toboolean(luaVM, 2) == 1;
  Reticle = GetReticle(ClientFromController, v4);
  if ( Reticle )
    secondaryLockReticleToTag = Reticle->secondaryLockReticleToTag;
  else
    secondaryLockReticleToTag = 0;
  v7 = GetReticle(ClientFromController, v4);
  maxReticleScale = 0.0;
  if ( v7 )
    secondaryOffsetFromTag = v7->secondaryOffsetFromTag;
  else
    secondaryOffsetFromTag = 0.0;
  v10 = GetReticle(ClientFromController, v4);
  if ( v10 )
    secondaryDefaultScale = v10->secondaryDefaultScale;
  else
    secondaryDefaultScale = FLOAT_1_0;
  v12 = GetReticle(ClientFromController, v4);
  if ( v12 )
    secondaryAffectedByEMP = v12->secondaryAffectedByEMP;
  else
    secondaryAffectedByEMP = 1;
  v14 = GetReticle(ClientFromController, v4);
  if ( v14 )
    naturalDistance = v14->naturalDistance;
  else
    naturalDistance = 0.0;
  v16 = GetReticle(ClientFromController, v4);
  if ( v16 )
    minReticleScale = v16->minReticleScale;
  else
    minReticleScale = 0.0;
  v18 = GetReticle(ClientFromController, v4);
  if ( v18 )
    maxReticleScale = v18->maxReticleScale;
  j_lua_createtable(luaVM, 0, 7);
  LUI_SetTableBool("lockedToTag", secondaryLockReticleToTag, LUI_luaVM);
  LUI_SetTableNumber("tagOffset", secondaryOffsetFromTag, LUI_luaVM);
  LUI_SetTableNumber("defaultScale", secondaryDefaultScale, LUI_luaVM);
  LUI_SetTableBool("affectedByEMP", secondaryAffectedByEMP, LUI_luaVM);
  LUI_SetTableNumber("naturalDistance", naturalDistance, LUI_luaVM);
  LUI_SetTableNumber("minScale", minReticleScale, LUI_luaVM);
  LUI_SetTableNumber("maxScale", maxReticleScale, LUI_luaVM);
  return 1i64;
}

/*
==============
LUI_LuaCall_Game_GetTargetMarkerGroups_impl
==============
*/
__int64 LUI_LuaCall_Game_GetTargetMarkerGroups_impl(lua_State *const luaVM)
{
  double v2; 
  LocalClientNum_t ClientFromController; 
  __int64 v4; 
  cg_t *LocalClientGlobals; 
  TargetMarkerGroupView *targetMarkerGroups; 
  int v7; 
  __int64 v10; 
  int v11; 
  __int64 v16; 
  int v17; 
  __int64 v20; 
  int v21; 
  char *outName; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: Game.GetTargetMarkerGroups( controllerIndex )");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Game.GetTargetMarkerGroups( controllerIndex )");
  v2 = lui_tonumber32(luaVM, 1);
  ClientFromController = CL_Mgr_GetClientFromController((int)*(float *)&v2);
  v4 = 2i64;
  LocalClientGlobals = CG_GetLocalClientGlobals(ClientFromController);
  j_lua_createtable(luaVM, 2, 0);
  targetMarkerGroups = LocalClientGlobals->predictedPlayerState.targetMarkerGroups;
  v7 = 1;
  do
  {
    if ( (targetMarkerGroups->flags & 1) != 0 )
    {
      _XMM1 = 0i64;
      __asm { vcvtsi2sd xmm1, xmm1, r14d; n }
      j_lua_pushnumber(LUI_luaVM, *(long double *)&_XMM1);
      j_lua_createtable(luaVM, 0, 4);
      if ( NetConstStrings_GetNameFromIndex(NETCONSTSTRINGTYPE_LUI, targetMarkerGroups->widgetName, (const char **)&outName) )
        LUI_SetTableString("widgetName", outName, luaVM);
      j_lua_createtable(luaVM, 0, 20);
      v10 = 0i64;
      v11 = 1;
      do
      {
        if ( targetMarkerGroups->entityNumbers[v10] != 2047 )
        {
          _XMM1 = 0i64;
          __asm { vcvtsi2sd xmm1, xmm1, esi; n }
          j_lua_pushnumber(LUI_luaVM, *(long double *)&_XMM1);
          _XMM1 = 0i64;
          __asm { vcvtsi2sd xmm1, xmm1, eax; n }
          j_lua_pushnumber(LUI_luaVM, *(long double *)&_XMM1);
          j_lua_settable(LUI_luaVM, -3);
        }
        ++v11;
        ++v10;
      }
      while ( v10 < 20 );
      j_lua_setfield(luaVM, -2, "entityNumbers");
      j_lua_createtable(luaVM, 0, 20);
      v16 = 0i64;
      v17 = 1;
      do
      {
        if ( targetMarkerGroups->entityNumbers[v16] != 2047 )
        {
          _XMM1 = 0i64;
          __asm { vcvtsi2sd xmm1, xmm1, esi; n }
          j_lua_pushnumber(LUI_luaVM, *(long double *)&_XMM1);
          j_lua_pushboolean(LUI_luaVM, targetMarkerGroups->entityStates[v16]);
          j_lua_settable(LUI_luaVM, -3);
        }
        ++v17;
        ++v16;
      }
      while ( v16 < 20 );
      j_lua_setfield(luaVM, -2, "entityStates");
      j_lua_createtable(luaVM, 0, 20);
      v20 = 0i64;
      v21 = 1;
      do
      {
        if ( targetMarkerGroups->entityNumbers[v20] != 2047 )
        {
          _XMM1 = 0i64;
          __asm { vcvtsi2sd xmm1, xmm1, esi; n }
          j_lua_pushnumber(LUI_luaVM, *(long double *)&_XMM1);
          j_lua_pushboolean(LUI_luaVM, targetMarkerGroups->extraStates[v20]);
          j_lua_settable(LUI_luaVM, -3);
        }
        ++v21;
        ++v20;
      }
      while ( v20 < 20 );
      j_lua_setfield(luaVM, -2, "extraStates");
      j_lua_settable(LUI_luaVM, -3);
    }
    ++v7;
    ++targetMarkerGroups;
    --v4;
  }
  while ( v4 );
  return 1i64;
}

/*
==============
LUI_LuaCall_Game_GetTeamForEntity_impl
==============
*/
__int64 LUI_LuaCall_Game_GetTeamForEntity_impl(lua_State *const luaVM)
{
  int v2; 
  LocalClientNum_t CurrentValidLocalClient; 
  __int64 v4; 
  centity_t *Entity; 
  centity_t *v6; 
  entityType_s eType; 
  int otherEntityNum; 
  __int64 v10; 
  __int64 v11; 
  int team; 
  int actorIndex; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Game.GetTeamForEntity( <entityNum> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
    v4 = CurrentValidLocalClient;
    Entity = CG_GetEntity(CurrentValidLocalClient, v2);
    team = 0;
    v6 = Entity;
    if ( (Entity->flags & 1) != 0 )
    {
      eType = Entity->nextState.eType;
      switch ( eType )
      {
        case ET_TURRET:
          otherEntityNum = Entity->nextState.otherEntityNum;
          actorIndex = otherEntityNum;
          if ( !otherEntityNum || otherEntityNum == 2047 )
            break;
          goto LABEL_23;
        case ET_VEHICLE:
          if ( !(_BYTE)CgVehicleSystem::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 406, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the vehicle system for localClientNum %d but the vehicle system type is not known\n", "ms_allocatedType != GameModeType::NONE", v4) )
            __debugbreak();
          if ( (unsigned int)v4 >= CgVehicleSystem::ms_allocatedCount )
          {
            LODWORD(v11) = CgVehicleSystem::ms_allocatedCount;
            LODWORD(v10) = v4;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 407, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v10, v11) )
              __debugbreak();
          }
          if ( !CgVehicleSystem::ms_vehicleSystemArray[v4] )
          {
            LODWORD(v11) = v4;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 408, ASSERT_TYPE_ASSERT, "(ms_vehicleSystemArray[localClientNum])", "%s\n\tTrying to access unallocated vehicle system for localClientNum %d\n", "ms_vehicleSystemArray[localClientNum]", v11) )
              __debugbreak();
          }
          team = CgVehicleSystem::ms_vehicleSystemArray[v4]->GetTeam(CgVehicleSystem::ms_vehicleSystemArray[v4], &v6->nextState);
          break;
        case ET_ACTOR:
          otherEntityNum = v2;
LABEL_23:
          CG_GetClientActorIndexAndTeam(otherEntityNum, &actorIndex, &team);
          break;
      }
    }
    j_lua_pushinteger(luaVM, team);
    return 1i64;
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_Game_GetViewModelTagScreenOffset_impl
==============
*/

__int64 __fastcall LUI_LuaCall_Game_GetViewModelTagScreenOffset_impl(lua_State *const luaVM, double _XMM1_8)
{
  double v4; 
  LocalClientNum_t ClientFromController; 
  PlayerHandIndex PlayerHandIndexToUseForWidget; 
  const char *v7; 
  BOOL v8; 
  cg_t *LocalClientGlobals; 
  long double v12; 
  long double v13; 
  long double v14; 
  const ScreenPlacement *ActivePlacement; 
  float v20; 
  float v21; 
  const LUIElement *CurrentRoot; 
  float unitScale; 
  float v24; 
  vec3_t outOrg; 
  __int64 v27; 
  vec2_t outScreenPos; 
  dvec3_t outWorldPosition; 
  dvec3_t worldPos; 
  tmat33_t<vec3_t> outLocalAxis; 

  v27 = -2i64;
  if ( j_lua_gettop(luaVM) < 1 )
    j_luaL_error(luaVM, "USAGE: Game.GetViewModelTagScreenOffset( controllerIndex )");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Game.GetViewModelTagScreenOffset( controllerIndex )");
  v4 = lui_tonumber32(luaVM, 1);
  ClientFromController = CL_Mgr_GetClientFromController((int)*(float *)&v4);
  PlayerHandIndexToUseForWidget = LUI_GetPlayerHandIndexToUseForWidget(ClientFromController, 0);
  v7 = j_lua_tolstring(luaVM, 2, NULL);
  v8 = strcmp_0(v7, "tag_reticle_attach") == 0;
  if ( !LUI_GetViewModelTransform(ClientFromController, PlayerHandIndexToUseForWidget, v7, &outLocalAxis, &outWorldPosition) )
    return 0i64;
  if ( j_lua_gettop(luaVM) == 3 )
  {
    __asm { vxorpd  xmm1, xmm1, xmm1 }
    if ( j_lua_tonumber(luaVM, 3) == *(double *)&_XMM1 )
      j_luaL_error(luaVM, "USAGE: Game.GetViewModelTagScreenOffset( controllerIndex, tagName, worldOffset )");
    *(double *)&_XMM0 = j_lua_tonumber(luaVM, 3);
    __asm { vcvtsd2ss xmm12, xmm0, xmm0 }
    LocalClientGlobals = CG_GetLocalClientGlobals(ClientFromController);
    RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
    v12 = outWorldPosition.x - outOrg.v[0];
    v13 = outWorldPosition.y - outOrg.v[1];
    v14 = outWorldPosition.z - outOrg.v[2];
    _XMM2 = COERCE_UNSIGNED_INT64(v13 * v13 + v12 * v12 + v14 * v14);
    __asm
    {
      vsqrtsd xmm3, xmm2, xmm2
      vcmplesd xmm0, xmm3, cs:__real@8000000000000000
      vblendvpd xmm1, xmm3, xmm2, xmm0
    }
    worldPos.x = v12 * (1.0 / *(double *)&_XMM1) * *(float *)&_XMM12 + outWorldPosition.x;
    worldPos.y = v13 * (1.0 / *(double *)&_XMM1) * *(float *)&_XMM12 + outWorldPosition.y;
    worldPos.z = v14 * (1.0 / *(double *)&_XMM1) * *(float *)&_XMM12 + outWorldPosition.z;
    memset(&outOrg, 0, sizeof(outOrg));
  }
  else
  {
    worldPos = outWorldPosition;
  }
  ActivePlacement = ScrPlace_GetActivePlacement(ClientFromController);
  v20 = 0.5 * ActivePlacement->realViewportSize.v[0];
  v21 = 0.5 * ActivePlacement->realViewportSize.v[1];
  CurrentRoot = LUI_CoD_GetCurrentRoot(luaVM);
  if ( !CurrentRoot && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_game.cpp", 800, ASSERT_TYPE_ASSERT, "(root)", (const char *)&queryFormat, "root") )
    __debugbreak();
  unitScale = LUI_GetRootData(CurrentRoot)->unitScale;
  if ( !CG_WorldPosToScreenPosRealForScenePrecise(ClientFromController, ActivePlacement, &worldPos, v8, &outScreenPos) )
    return 0i64;
  j_lua_createtable(luaVM, 0, 2);
  v24 = 1.0 / unitScale;
  LUI_SetTableNumber("x", (float)((float)(outScreenPos.v[0] - v20) * v24), LUI_luaVM);
  LUI_SetTableNumber("y", (float)((float)(outScreenPos.v[1] - v21) * v24), LUI_luaVM);
  return 1i64;
}

/*
==============
LUI_SetTableObjectiveFlags
==============
*/
void LUI_SetTableObjectiveFlags(lua_State *luaVM, const ObjectiveFlags *flags)
{
  LUI_SetTableBool("showDistance", (*(_BYTE *)flags & 4) != 0, luaVM);
  LUI_SetTableBool("pinned", (*(_BYTE *)flags & 8) != 0, luaVM);
  LUI_SetTableBool("playIntro", (*(_BYTE *)flags & 0x10) != 0, luaVM);
  LUI_SetTableBool("playOutro", (*(_BYTE *)flags & 0x20) != 0, luaVM);
  LUI_SetTableBool("pulsate", *((_BYTE *)flags + 1) & 1, luaVM);
  LUI_SetTableBool("showProgress", *(_BYTE *)flags >> 7, luaVM);
  LUI_SetTableBool("fadeDisabled", (*(_WORD *)flags & 0x400) != 0, luaVM);
}

/*
==============
LUI_SetTableObjectiveStatus
==============
*/
void LUI_SetTableObjectiveStatus(lua_State *luaVM, int state, ObjectiveSide side, float progress, ObjectiveSide progressSide)
{
  const char *v7; 
  const char *v8; 

  LUI_SetTableInt("state", state, luaVM);
  LUI_SetTableNumber("progress", progress, luaVM);
  v7 = "neutral";
  switch ( progressSide )
  {
    case FRIENDLY:
      v8 = "friendly";
      break;
    case ENEMY:
      v8 = "enemy";
      break;
    case IN_FLUX:
      v8 = "inFlux";
      break;
    default:
      v8 = "neutral";
      break;
  }
  LUI_SetTableString("progressSide", v8, luaVM);
  switch ( side )
  {
    case FRIENDLY:
      v7 = "friendly";
      break;
    case ENEMY:
      v7 = "enemy";
      break;
    case IN_FLUX:
      v7 = "inFlux";
      break;
  }
  LUI_SetTableString("side", v7, luaVM);
}

/*
==============
LUI_SetTableObjectiveStringsAndIcon
==============
*/
void LUI_SetTableObjectiveStringsAndIcon(lua_State *luaVM, const ClConfigStrings *const cs, int descriptionIndex, int labelIndex, int iconIndex, ObjectiveBackground background, int zOffset, const int ownerClientNum)
{
  const char *v11; 
  const char *v12; 
  char *outName; 

  v11 = (const char *)cs->GetLocalizedString((ClConfigStrings *)cs, descriptionIndex);
  LUI_SetTableString("description", v11, luaVM);
  if ( iconIndex && NetConstStrings_GetNameFromIndexPlusOne(NETCONSTSTRINGTYPE_OBJECTIVEICON, iconIndex, (const char **)&outName) )
    LUI_SetTableString("icon", outName, luaVM);
  v12 = (const char *)cs->GetLocalizedString((ClConfigStrings *)cs, labelIndex);
  LUI_SetTableString("label", v12, luaVM);
  LUI_SetTableInt("background", (unsigned __int8)background, luaVM);
  _XMM1 = 0i64;
  __asm { vcvtsi2sd xmm1, xmm1, [rsp+28h+zOffset]; value }
  LUI_SetTableNumber("zOffset", *(long double *)&_XMM1, luaVM);
  LUI_SetTableInt("ownerClientNum", ownerClientNum, luaVM);
}

