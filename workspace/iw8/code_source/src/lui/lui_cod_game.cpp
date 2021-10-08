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
  unsigned int v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Engine.GetActionSlotCount()");
  if ( j_lua_gettop(luaVM) )
  {
    v3 = 0;
  }
  else
  {
    __asm { vmovsd  xmm1, cs:__real@4020000000000000; n }
    j_lua_pushnumber(luaVM, *(long double *)&_XMM1);
    v3 = 1;
  }
  if ( (int)v3 > j_lua_gettop(luaVM) )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v3, v4);
  }
  return v3;
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
  unsigned int v3; 
  LocalClientNum_t ClientFromController; 
  cg_t *LocalClientGlobals; 
  const Weapon *WeaponForHud; 
  bool v8; 
  const WeaponCompleteDef *v9; 
  int v10; 
  const WeaponCompleteDef *v11; 
  __int16 v12; 
  __int64 attachmentCount; 
  int v14; 
  unsigned int v15; 

  v3 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Game.GetNumWeaponAttachmentWidgets( <controllerIndex> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 1);
    __asm { vcvttss2si ecx, xmm0; controllerIndex }
    ClientFromController = CL_Mgr_GetClientFromController(_ECX);
    LocalClientGlobals = CG_GetLocalClientGlobals(ClientFromController);
    WeaponForHud = CG_GetWeaponForHud(LocalClientGlobals);
    v8 = BG_UsingAlternate(&LocalClientGlobals->predictedPlayerState);
    v9 = BG_WeaponCompleteDef(WeaponForHud, v8);
    v10 = 0;
    v11 = v9;
    v12 = 1;
    attachmentCount = v9->attachments[13].attachmentCount;
    if ( (_DWORD)attachmentCount )
    {
      do
      {
        v14 = v10 + 1;
        if ( (WeaponForHud->weaponOthers & (unsigned __int16)v12) == 0 )
          v14 = v10;
        v12 *= 2;
        v10 = v14;
        --attachmentCount;
      }
      while ( attachmentCount );
    }
    j_lua_pushinteger(luaVM, v10 + 2 * v11->attachments[9].attachmentCount);
  }
  else
  {
    v3 = 0;
  }
  if ( (int)v3 > j_lua_gettop(luaVM) )
  {
    v15 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v3, v15);
  }
  return v3;
}

/*
==============
LUI_LuaCall_Game_GetWeaponAttachmentWidgetName
==============
*/
__int64 LUI_LuaCall_Game_GetWeaponAttachmentWidgetName(lua_State *const luaVM)
{
  unsigned int v3; 
  LocalClientNum_t ClientFromController; 
  const WeaponAttachment *WeaponAttachment; 
  const char *szLUIWeaponInfoWidgetName; 
  unsigned int v9; 

  v3 = 1;
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Game.LUI_LuaCall_Game_GetWeaponAttachmentWidgetName( <controller>, <attachmentIndex> )");
  if ( j_lua_gettop(luaVM) != 2 )
    goto LABEL_11;
  if ( !j_lua_isnumber(luaVM, 1) )
    goto LABEL_11;
  if ( !j_lua_isnumber(luaVM, 2) )
    goto LABEL_11;
  *(double *)&_XMM0 = lui_tonumber32(luaVM, 1);
  __asm { vcvttss2si ecx, xmm0; controllerIndex }
  ClientFromController = CL_Mgr_GetClientFromController(_ECX);
  *(double *)&_XMM0 = lui_tonumber32(luaVM, 2);
  __asm { vcvttss2si edx, xmm0; attachmentIndex }
  WeaponAttachment = GetWeaponAttachment(ClientFromController, _EDX);
  if ( !WeaponAttachment )
    goto LABEL_11;
  szLUIWeaponInfoWidgetName = WeaponAttachment->szLUIWeaponInfoWidgetName;
  if ( szLUIWeaponInfoWidgetName )
    j_lua_pushstring(luaVM, szLUIWeaponInfoWidgetName);
  else
LABEL_11:
    v3 = 0;
  if ( (int)v3 > j_lua_gettop(luaVM) )
  {
    v9 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v3, v9);
  }
  return v3;
}

/*
==============
LUI_LuaCall_Game_GetWeaponAttachmentWidgetTag
==============
*/
__int64 LUI_LuaCall_Game_GetWeaponAttachmentWidgetTag(lua_State *const luaVM)
{
  unsigned int v3; 
  LocalClientNum_t ClientFromController; 
  const WeaponAttachment *WeaponAttachment; 
  const char *szLUIWeaponInfoWidgetTag; 
  unsigned int v9; 

  v3 = 1;
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Game.GetWeaponAttachmentWidgetTag( <controller>, <attachmentIndex> )");
  if ( j_lua_gettop(luaVM) != 2 )
    goto LABEL_11;
  if ( !j_lua_isnumber(luaVM, 1) )
    goto LABEL_11;
  if ( !j_lua_isnumber(luaVM, 2) )
    goto LABEL_11;
  *(double *)&_XMM0 = lui_tonumber32(luaVM, 1);
  __asm { vcvttss2si ecx, xmm0; controllerIndex }
  ClientFromController = CL_Mgr_GetClientFromController(_ECX);
  *(double *)&_XMM0 = lui_tonumber32(luaVM, 2);
  __asm { vcvttss2si edx, xmm0; attachmentIndex }
  WeaponAttachment = GetWeaponAttachment(ClientFromController, _EDX);
  if ( !WeaponAttachment )
    goto LABEL_11;
  szLUIWeaponInfoWidgetTag = WeaponAttachment->szLUIWeaponInfoWidgetTag;
  if ( szLUIWeaponInfoWidgetTag )
    j_lua_pushstring(luaVM, szLUIWeaponInfoWidgetTag);
  else
LABEL_11:
    v3 = 0;
  if ( (int)v3 > j_lua_gettop(luaVM) )
  {
    v9 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v3, v9);
  }
  return v3;
}

/*
==============
LUI_LuaCall_Game_GetWeaponAttachmentWidgetUsesScopeStencil
==============
*/
__int64 LUI_LuaCall_Game_GetWeaponAttachmentWidgetUsesScopeStencil(lua_State *const luaVM)
{
  unsigned int v3; 
  LocalClientNum_t ClientFromController; 
  const WeaponAttachment *WeaponAttachment; 
  unsigned int v8; 

  v3 = 1;
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Game.GetWeaponAttachmentWidgetUsesScopeStencil( <controller>, <attachmentIndex> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 1);
    __asm { vcvttss2si ecx, xmm0; controllerIndex }
    ClientFromController = CL_Mgr_GetClientFromController(_ECX);
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 2);
    __asm { vcvttss2si edx, xmm0; attachmentIndex }
    WeaponAttachment = GetWeaponAttachment(ClientFromController, _EDX);
    if ( WeaponAttachment )
      j_lua_pushboolean(luaVM, WeaponAttachment->luiWeaponInfoWidgetUsesScopeStencil);
    else
      j_lua_pushboolean(luaVM, 0);
  }
  else
  {
    v3 = 0;
  }
  if ( (int)v3 > j_lua_gettop(luaVM) )
  {
    v8 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v3, v8);
  }
  return v3;
}

/*
==============
LUI_LuaCall_Game_GetWeaponWidgetName
==============
*/
__int64 LUI_LuaCall_Game_GetWeaponWidgetName(lua_State *const luaVM)
{
  unsigned int v3; 
  LocalClientNum_t ClientFromController; 
  cg_t *LocalClientGlobals; 
  const Weapon *WeaponForHud; 
  bool v8; 
  const char *szLUIWeaponInfoWidgetName; 
  unsigned int v10; 

  v3 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Game.GetWeaponWidgetName( <controller> )");
  if ( j_lua_gettop(luaVM) != 1 )
    goto LABEL_8;
  if ( !j_lua_isnumber(luaVM, 1) )
    goto LABEL_8;
  *(double *)&_XMM0 = lui_tonumber32(luaVM, 1);
  __asm { vcvttss2si ecx, xmm0; controllerIndex }
  ClientFromController = CL_Mgr_GetClientFromController(_ECX);
  LocalClientGlobals = CG_GetLocalClientGlobals(ClientFromController);
  WeaponForHud = CG_GetWeaponForHud(LocalClientGlobals);
  v8 = BG_UsingAlternate(&LocalClientGlobals->predictedPlayerState);
  szLUIWeaponInfoWidgetName = BG_WeaponCompleteDef(WeaponForHud, v8)->szLUIWeaponInfoWidgetName;
  if ( szLUIWeaponInfoWidgetName )
    j_lua_pushstring(luaVM, szLUIWeaponInfoWidgetName);
  else
LABEL_8:
    v3 = 0;
  if ( (int)v3 > j_lua_gettop(luaVM) )
  {
    v10 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v3, v10);
  }
  return v3;
}

/*
==============
LUI_LuaCall_Game_GetWeaponWidgetTag
==============
*/
__int64 LUI_LuaCall_Game_GetWeaponWidgetTag(lua_State *const luaVM)
{
  unsigned int v3; 
  LocalClientNum_t ClientFromController; 
  cg_t *LocalClientGlobals; 
  const Weapon *WeaponForHud; 
  bool v8; 
  const char *szLUIWeaponInfoWidgetTag; 
  unsigned int v10; 

  v3 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Game.GetWeaponWidgetTag( <controller> )");
  if ( j_lua_gettop(luaVM) != 1 )
    goto LABEL_8;
  if ( !j_lua_isnumber(luaVM, 1) )
    goto LABEL_8;
  *(double *)&_XMM0 = lui_tonumber32(luaVM, 1);
  __asm { vcvttss2si ecx, xmm0; controllerIndex }
  ClientFromController = CL_Mgr_GetClientFromController(_ECX);
  LocalClientGlobals = CG_GetLocalClientGlobals(ClientFromController);
  WeaponForHud = CG_GetWeaponForHud(LocalClientGlobals);
  v8 = BG_UsingAlternate(&LocalClientGlobals->predictedPlayerState);
  szLUIWeaponInfoWidgetTag = BG_WeaponCompleteDef(WeaponForHud, v8)->szLUIWeaponInfoWidgetTag;
  if ( szLUIWeaponInfoWidgetTag )
    j_lua_pushstring(luaVM, szLUIWeaponInfoWidgetTag);
  else
LABEL_8:
    v3 = 0;
  if ( (int)v3 > j_lua_gettop(luaVM) )
  {
    v10 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v3, v10);
  }
  return v3;
}

/*
==============
LUI_LuaCall_Game_GetTagIsVisible
==============
*/
__int64 LUI_LuaCall_Game_GetTagIsVisible(lua_State *const luaVM)
{
  unsigned int v3; 
  LocalClientNum_t ClientFromController; 
  const char *v6; 
  bool IsBoneVisibleOnEitherHand; 
  unsigned int v8; 

  v3 = 1;
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isstring(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Game.GetTagIsVisible( <controller>, <boneName> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_isstring(luaVM, 2) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 1);
    __asm { vcvttss2si ecx, xmm0; controllerIndex }
    ClientFromController = CL_Mgr_GetClientFromController(_ECX);
    v6 = j_lua_tolstring(luaVM, 2, NULL);
    IsBoneVisibleOnEitherHand = BG_IsBoneVisibleOnEitherHand(ClientFromController, v6);
    j_lua_pushboolean(luaVM, IsBoneVisibleOnEitherHand);
  }
  else
  {
    v3 = 0;
  }
  if ( (int)v3 > j_lua_gettop(luaVM) )
  {
    v8 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v3, v8);
  }
  return v3;
}

/*
==============
LUI_LuaCall_Game_GetEntityWorldPosition
==============
*/
__int64 LUI_LuaCall_Game_GetEntityWorldPosition(lua_State *const luaVM)
{
  unsigned int v3; 
  LocalClientNum_t ClientFromController; 
  centity_t *Entity; 
  unsigned int v14; 
  vec3_t outOrigin; 

  v3 = 1;
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Game.GetEntityWorldPosition( <controllerIndex>, <entityNum>");
  if ( j_lua_gettop(luaVM) != 2 )
    goto LABEL_10;
  if ( !j_lua_isnumber(luaVM, 1) )
    goto LABEL_10;
  if ( !j_lua_isnumber(luaVM, 2) )
    goto LABEL_10;
  *(double *)&_XMM0 = lui_tonumber32(luaVM, 1);
  __asm { vcvttss2si ecx, xmm0; controllerIndex }
  ClientFromController = CL_Mgr_GetClientFromController(_ECX);
  *(double *)&_XMM0 = lui_tonumber32(luaVM, 2);
  __asm { vcvttss2si edx, xmm0; entityIndex }
  Entity = CG_GetEntity(ClientFromController, _EDX);
  if ( Entity )
  {
    CG_GetPoseOrigin(&Entity->pose, &outOrigin);
    j_lua_createtable(luaVM, 0, 3);
    __asm
    {
      vmovss  xmm1, dword ptr [rsp+48h+outOrigin]
      vcvtss2sd xmm1, xmm1, xmm1; value
    }
    LUI_SetTableNumber("x", *(long double *)&_XMM1, LUI_luaVM);
    __asm
    {
      vmovss  xmm1, dword ptr [rsp+48h+outOrigin+4]
      vcvtss2sd xmm1, xmm1, xmm1; value
    }
    LUI_SetTableNumber("y", *(long double *)&_XMM1, LUI_luaVM);
    __asm
    {
      vmovss  xmm1, dword ptr [rsp+48h+outOrigin+8]
      vcvtss2sd xmm1, xmm1, xmm1; value
    }
    LUI_SetTableNumber("z", *(long double *)&_XMM1, LUI_luaVM);
  }
  else
  {
LABEL_10:
    v3 = 0;
  }
  if ( (int)v3 > j_lua_gettop(luaVM) )
  {
    v14 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v3, v14);
  }
  return v3;
}

/*
==============
LUI_LuaCall_Game_GetTagWorldPosition
==============
*/
__int64 LUI_LuaCall_Game_GetTagWorldPosition(lua_State *const luaVM)
{
  unsigned int v3; 
  LocalClientNum_t ClientFromController; 
  const char *v7; 
  unsigned int v14; 
  vec3_t outWorldPosition; 
  tmat33_t<vec3_t> outLocalAxis; 

  v3 = 1;
  if ( j_lua_gettop(luaVM) != 3 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || !j_lua_isstring(luaVM, 3) )
    j_luaL_error(luaVM, "USAGE: Game.GetTagWorldPosition( <controllerIndex>, <entityNum>, <tagName> ");
  if ( j_lua_gettop(luaVM) != 3 )
    goto LABEL_12;
  if ( !j_lua_isnumber(luaVM, 1) )
    goto LABEL_12;
  if ( !j_lua_isnumber(luaVM, 2) )
    goto LABEL_12;
  if ( !j_lua_isstring(luaVM, 3) )
    goto LABEL_12;
  *(double *)&_XMM0 = lui_tonumber32(luaVM, 1);
  __asm { vcvttss2si ecx, xmm0; controllerIndex }
  ClientFromController = CL_Mgr_GetClientFromController(_ECX);
  *(double *)&_XMM0 = lui_tonumber32(luaVM, 2);
  __asm { vcvttss2si ebx, xmm0 }
  v7 = j_lua_tolstring(luaVM, 3, NULL);
  if ( LUI_GetEntityTagPositionAndAxis(ClientFromController, _EBX, v7, &outLocalAxis, &outWorldPosition) )
  {
    j_lua_createtable(luaVM, 0, 3);
    __asm
    {
      vmovss  xmm1, dword ptr [rsp+78h+var_48]
      vcvtss2sd xmm1, xmm1, xmm1; value
    }
    LUI_SetTableNumber("x", *(long double *)&_XMM1, LUI_luaVM);
    __asm
    {
      vmovss  xmm1, dword ptr [rsp+78h+var_48+4]
      vcvtss2sd xmm1, xmm1, xmm1; value
    }
    LUI_SetTableNumber("y", *(long double *)&_XMM1, LUI_luaVM);
    __asm
    {
      vmovss  xmm1, dword ptr [rsp+78h+var_48+8]
      vcvtss2sd xmm1, xmm1, xmm1; value
    }
    LUI_SetTableNumber("z", *(long double *)&_XMM1, LUI_luaVM);
  }
  else
  {
LABEL_12:
    v3 = 0;
  }
  if ( (int)v3 > j_lua_gettop(luaVM) )
  {
    v14 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v3, v14);
  }
  return v3;
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
  unsigned int v3; 
  LocalClientNum_t ClientFromController; 
  cg_t *LocalClientGlobals; 
  const Weapon *WeaponForHud; 
  bool v8; 
  const WeaponCompleteDef *v9; 
  unsigned int v10; 

  v3 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Game.GetWeaponWidgetUsesScopeStencil( <controller> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 1);
    __asm { vcvttss2si ecx, xmm0; controllerIndex }
    ClientFromController = CL_Mgr_GetClientFromController(_ECX);
    LocalClientGlobals = CG_GetLocalClientGlobals(ClientFromController);
    WeaponForHud = CG_GetWeaponForHud(LocalClientGlobals);
    v8 = BG_UsingAlternate(&LocalClientGlobals->predictedPlayerState);
    v9 = BG_WeaponCompleteDef(WeaponForHud, v8);
    j_lua_pushboolean(luaVM, v9->luiWeaponInfoWidgetUsesScopeStencil);
  }
  else
  {
    v3 = 0;
  }
  if ( (int)v3 > j_lua_gettop(luaVM) )
  {
    v10 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v3, v10);
  }
  return v3;
}

/*
==============
LUI_LuaCall_Game_GetScopeReticleName
==============
*/
__int64 LUI_LuaCall_Game_GetScopeReticleName(lua_State *const luaVM)
{
  unsigned int v3; 
  bool v5; 
  LocalClientNum_t ClientFromController; 
  const ReticleDef *Reticle; 
  unsigned int v8; 

  v3 = 1;
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, "USAGE: Game.GetScopeReticleName( <controller>, <isAlternate> )");
  if ( j_lua_gettop(luaVM) != 2 )
    goto LABEL_11;
  if ( !j_lua_isnumber(luaVM, 1) )
    goto LABEL_11;
  if ( j_lua_type(luaVM, 2) != 1 )
    goto LABEL_11;
  *(double *)&_XMM0 = lui_tonumber32(luaVM, 1);
  __asm { vcvttss2si edi, xmm0 }
  v5 = j_lua_toboolean(luaVM, 2) == 1;
  ClientFromController = CL_Mgr_GetClientFromController(_EDI);
  Reticle = GetReticle(ClientFromController, v5);
  if ( !Reticle )
    goto LABEL_11;
  if ( Reticle->name )
    j_lua_pushstring(luaVM, Reticle->name);
  else
LABEL_11:
    v3 = 0;
  if ( (int)v3 > j_lua_gettop(luaVM) )
  {
    v8 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v3, v8);
  }
  return v3;
}

/*
==============
LUI_LuaCall_Game_GetScopeReticleWidget
==============
*/
__int64 LUI_LuaCall_Game_GetScopeReticleWidget(lua_State *const luaVM)
{
  unsigned int v3; 
  LocalClientNum_t ClientFromController; 
  int v6; 
  const ReticleDef *Reticle; 
  const char *widgetName; 
  unsigned int v9; 

  v3 = 1;
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, "USAGE: Game.GetScopeReticleWidget( <controller>, <isAlternate> )");
  if ( j_lua_gettop(luaVM) != 2 )
    goto LABEL_11;
  if ( !j_lua_isnumber(luaVM, 1) )
    goto LABEL_11;
  if ( j_lua_type(luaVM, 2) != 1 )
    goto LABEL_11;
  *(double *)&_XMM0 = lui_tonumber32(luaVM, 1);
  __asm { vcvttss2si ecx, xmm0; controllerIndex }
  ClientFromController = CL_Mgr_GetClientFromController(_ECX);
  v6 = j_lua_toboolean(luaVM, 2);
  Reticle = GetReticle(ClientFromController, v6 == 1);
  if ( !Reticle )
    goto LABEL_11;
  widgetName = Reticle->widgetName;
  if ( widgetName )
    j_lua_pushstring(luaVM, widgetName);
  else
LABEL_11:
    v3 = 0;
  if ( (int)v3 > j_lua_gettop(luaVM) )
  {
    v9 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v3, v9);
  }
  return v3;
}

/*
==============
LUI_LuaCall_Game_GetReticleWidgetLockToTag
==============
*/
__int64 LUI_LuaCall_Game_GetReticleWidgetLockToTag(lua_State *const luaVM)
{
  unsigned int v3; 
  LocalClientNum_t ClientFromController; 
  int v6; 
  const ReticleDef *Reticle; 
  unsigned int v8; 

  v3 = 1;
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, "USAGE: Game.GetReticleWidgetLockToTag( <controller>, <isAlternate> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_type(luaVM, 2) == 1 )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 1);
    __asm { vcvttss2si ecx, xmm0; controllerIndex }
    ClientFromController = CL_Mgr_GetClientFromController(_ECX);
    v6 = j_lua_toboolean(luaVM, 2);
    Reticle = GetReticle(ClientFromController, v6 == 1);
    if ( Reticle )
      j_lua_pushboolean(luaVM, Reticle->lockReticleToTag);
    else
      j_lua_pushboolean(luaVM, 0);
  }
  else
  {
    v3 = 0;
  }
  if ( (int)v3 > j_lua_gettop(luaVM) )
  {
    v8 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v3, v8);
  }
  return v3;
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
  unsigned int v3; 
  LocalClientNum_t ClientFromController; 
  int v6; 
  unsigned int v11; 

  v3 = 1;
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, "USAGE: Game.GetReticleOffsetFromTag( <controller>, <isAltReticle> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_type(luaVM, 2) == 1 )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 1);
    __asm { vcvttss2si ecx, xmm0; controllerIndex }
    ClientFromController = CL_Mgr_GetClientFromController(_ECX);
    v6 = j_lua_toboolean(luaVM, 2);
    if ( GetReticle(ClientFromController, v6 == 1) )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rax+14h]
        vcvtss2sd xmm1, xmm0, xmm0; n
      }
    }
    else
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtss2sd xmm1, xmm0, xmm0; n
      }
    }
    j_lua_pushnumber(luaVM, *(long double *)&_XMM1);
  }
  else
  {
    v3 = 0;
  }
  if ( (int)v3 > j_lua_gettop(luaVM) )
  {
    v11 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v3, v11);
  }
  return v3;
}

/*
==============
LUI_LuaCall_Game_GetReticleScaleWithFOV
==============
*/
__int64 LUI_LuaCall_Game_GetReticleScaleWithFOV(lua_State *const luaVM)
{
  unsigned int v3; 
  LocalClientNum_t ClientFromController; 
  int v6; 
  const ReticleDef *Reticle; 
  unsigned int v8; 

  v3 = 1;
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, "USAGE: Game.GetReticleScaleWithFOV( <controller>, <isAltReticle> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_type(luaVM, 2) == 1 )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 1);
    __asm { vcvttss2si ecx, xmm0; controllerIndex }
    ClientFromController = CL_Mgr_GetClientFromController(_ECX);
    v6 = j_lua_toboolean(luaVM, 2);
    Reticle = GetReticle(ClientFromController, v6 == 1);
    if ( Reticle )
      j_lua_pushboolean(luaVM, Reticle->scaleWithFOV);
    else
      j_lua_pushboolean(luaVM, 0);
  }
  else
  {
    v3 = 0;
  }
  if ( (int)v3 > j_lua_gettop(luaVM) )
  {
    v8 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v3, v8);
  }
  return v3;
}

/*
==============
LUI_LuaCall_Game_GetScopeSecondaryReticleWidget
==============
*/
__int64 LUI_LuaCall_Game_GetScopeSecondaryReticleWidget(lua_State *const luaVM)
{
  unsigned int v3; 
  LocalClientNum_t ClientFromController; 
  int v6; 
  const ReticleDef *Reticle; 
  const char *secondaryWidgetName; 
  unsigned int v9; 

  v3 = 1;
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, "USAGE: Game.GetScopeSecondaryReticleWidget( <controller>, <isAlternate> )");
  if ( j_lua_gettop(luaVM) != 2 )
    goto LABEL_11;
  if ( !j_lua_isnumber(luaVM, 1) )
    goto LABEL_11;
  if ( j_lua_type(luaVM, 2) != 1 )
    goto LABEL_11;
  *(double *)&_XMM0 = lui_tonumber32(luaVM, 1);
  __asm { vcvttss2si ecx, xmm0; controllerIndex }
  ClientFromController = CL_Mgr_GetClientFromController(_ECX);
  v6 = j_lua_toboolean(luaVM, 2);
  Reticle = GetReticle(ClientFromController, v6 == 1);
  if ( !Reticle )
    goto LABEL_11;
  secondaryWidgetName = Reticle->secondaryWidgetName;
  if ( secondaryWidgetName )
    j_lua_pushstring(luaVM, secondaryWidgetName);
  else
LABEL_11:
    v3 = 0;
  if ( (int)v3 > j_lua_gettop(luaVM) )
  {
    v9 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v3, v9);
  }
  return v3;
}

/*
==============
LUI_LuaCall_Game_GetSecondaryReticleWidgetLockToTag
==============
*/
__int64 LUI_LuaCall_Game_GetSecondaryReticleWidgetLockToTag(lua_State *const luaVM)
{
  unsigned int v3; 
  LocalClientNum_t ClientFromController; 
  int v6; 
  const ReticleDef *Reticle; 
  unsigned int v8; 

  v3 = 1;
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, "USAGE: Game.GetSecondaryReticleWidgetLockToTag( <controller>, <isAltReticle> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_type(luaVM, 2) == 1 )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 1);
    __asm { vcvttss2si ecx, xmm0; controllerIndex }
    ClientFromController = CL_Mgr_GetClientFromController(_ECX);
    v6 = j_lua_toboolean(luaVM, 2);
    Reticle = GetReticle(ClientFromController, v6 == 1);
    if ( Reticle )
      j_lua_pushboolean(luaVM, Reticle->secondaryLockReticleToTag);
    else
      j_lua_pushboolean(luaVM, 0);
  }
  else
  {
    v3 = 0;
  }
  if ( (int)v3 > j_lua_gettop(luaVM) )
  {
    v8 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v3, v8);
  }
  return v3;
}

/*
==============
LUI_LuaCall_Game_GetSecondaryReticleOffsetFromTag
==============
*/
__int64 LUI_LuaCall_Game_GetSecondaryReticleOffsetFromTag(lua_State *const luaVM)
{
  unsigned int v3; 
  LocalClientNum_t ClientFromController; 
  int v6; 
  unsigned int v11; 

  v3 = 1;
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, "USAGE: Game.GetSecondaryReticleOffsetFromTag( <controller>, <isAltReticle> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_type(luaVM, 2) == 1 )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 1);
    __asm { vcvttss2si ecx, xmm0; controllerIndex }
    ClientFromController = CL_Mgr_GetClientFromController(_ECX);
    v6 = j_lua_toboolean(luaVM, 2);
    if ( GetReticle(ClientFromController, v6 == 1) )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rax+34h]
        vcvtss2sd xmm1, xmm0, xmm0; n
      }
    }
    else
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtss2sd xmm1, xmm0, xmm0; n
      }
    }
    j_lua_pushnumber(luaVM, *(long double *)&_XMM1);
  }
  else
  {
    v3 = 0;
  }
  if ( (int)v3 > j_lua_gettop(luaVM) )
  {
    v11 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v3, v11);
  }
  return v3;
}

/*
==============
LUI_LuaCall_Game_GetReticleNaturalDistance
==============
*/
__int64 LUI_LuaCall_Game_GetReticleNaturalDistance(lua_State *const luaVM)
{
  unsigned int v3; 
  LocalClientNum_t ClientFromController; 
  int v6; 
  unsigned int v11; 

  v3 = 1;
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, "USAGE: Game.GetReticleNaturalDistance( <controller>, <isAltReticle> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_type(luaVM, 2) == 1 )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 1);
    __asm { vcvttss2si ecx, xmm0; controllerIndex }
    ClientFromController = CL_Mgr_GetClientFromController(_ECX);
    v6 = j_lua_toboolean(luaVM, 2);
    if ( GetReticle(ClientFromController, v6 == 1) )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rax+38h]
        vcvtss2sd xmm1, xmm0, xmm0; n
      }
    }
    else
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtss2sd xmm1, xmm0, xmm0; n
      }
    }
    j_lua_pushnumber(luaVM, *(long double *)&_XMM1);
  }
  else
  {
    v3 = 0;
  }
  if ( (int)v3 > j_lua_gettop(luaVM) )
  {
    v11 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v3, v11);
  }
  return v3;
}

/*
==============
LUI_LuaCall_Game_GetReticleNaturalFOV
==============
*/

__int64 __fastcall LUI_LuaCall_Game_GetReticleNaturalFOV(lua_State *const luaVM, double _XMM1_8)
{
  unsigned int v4; 
  LocalClientNum_t ClientFromController; 
  int v7; 
  unsigned int v10; 

  v4 = 1;
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, "USAGE: Game.GetReticleNaturalFOV( <controller>, <isAltReticle> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_type(luaVM, 2) == 1 )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 1);
    __asm { vcvttss2si ecx, xmm0; controllerIndex }
    ClientFromController = CL_Mgr_GetClientFromController(_ECX);
    v7 = j_lua_toboolean(luaVM, 2);
    GetReticle(ClientFromController, v7 == 1);
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2sd xmm1, xmm1, eax; n
    }
    j_lua_pushnumber(luaVM, *(long double *)&_XMM1);
  }
  else
  {
    v4 = 0;
  }
  if ( (int)v4 > j_lua_gettop(luaVM) )
  {
    v10 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v4, v10);
  }
  return v4;
}

/*
==============
LUI_LuaCall_Game_GetReticlePrimaryDefaultScale
==============
*/
__int64 LUI_LuaCall_Game_GetReticlePrimaryDefaultScale(lua_State *const luaVM)
{
  unsigned int v3; 
  LocalClientNum_t ClientFromController; 
  int v6; 
  unsigned int v11; 

  v3 = 1;
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, "USAGE: Game.GetReticlePrimaryDefaultScale( <controller>, <isAltReticle> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_type(luaVM, 2) == 1 )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 1);
    __asm { vcvttss2si ecx, xmm0; controllerIndex }
    ClientFromController = CL_Mgr_GetClientFromController(_ECX);
    v6 = j_lua_toboolean(luaVM, 2);
    if ( GetReticle(ClientFromController, v6 == 1) )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rax+1Ch]
        vcvtss2sd xmm1, xmm0, xmm0; n
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm0, cs:__real@3f800000
        vcvtss2sd xmm1, xmm0, xmm0; n
      }
    }
    j_lua_pushnumber(luaVM, *(long double *)&_XMM1);
  }
  else
  {
    v3 = 0;
  }
  if ( (int)v3 > j_lua_gettop(luaVM) )
  {
    v11 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v3, v11);
  }
  return v3;
}

/*
==============
LUI_LuaCall_Game_GetReticleSecondaryDefaultScale
==============
*/
__int64 LUI_LuaCall_Game_GetReticleSecondaryDefaultScale(lua_State *const luaVM)
{
  unsigned int v3; 
  LocalClientNum_t ClientFromController; 
  int v6; 
  unsigned int v11; 

  v3 = 1;
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, "USAGE: Game.GetReticleSecondaryDefaultScale( <controller>, <isAltReticle> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_type(luaVM, 2) == 1 )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 1);
    __asm { vcvttss2si ecx, xmm0; controllerIndex }
    ClientFromController = CL_Mgr_GetClientFromController(_ECX);
    v6 = j_lua_toboolean(luaVM, 2);
    if ( GetReticle(ClientFromController, v6 == 1) )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rax+20h]
        vcvtss2sd xmm1, xmm0, xmm0; n
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm0, cs:__real@3f800000
        vcvtss2sd xmm1, xmm0, xmm0; n
      }
    }
    j_lua_pushnumber(luaVM, *(long double *)&_XMM1);
  }
  else
  {
    v3 = 0;
  }
  if ( (int)v3 > j_lua_gettop(luaVM) )
  {
    v11 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v3, v11);
  }
  return v3;
}

/*
==============
LUI_LuaCall_Game_GetReticlePrimaryAffectedByEMP
==============
*/
__int64 LUI_LuaCall_Game_GetReticlePrimaryAffectedByEMP(lua_State *const luaVM)
{
  unsigned int v3; 
  LocalClientNum_t ClientFromController; 
  int v6; 
  const ReticleDef *Reticle; 
  unsigned int v8; 

  v3 = 1;
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, "USAGE: Game.GetReticlePrimaryAffectedByEMP( <controller>, <isAltReticle> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_type(luaVM, 2) == 1 )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 1);
    __asm { vcvttss2si ecx, xmm0; controllerIndex }
    ClientFromController = CL_Mgr_GetClientFromController(_ECX);
    v6 = j_lua_toboolean(luaVM, 2);
    Reticle = GetReticle(ClientFromController, v6 == 1);
    if ( Reticle )
      j_lua_pushboolean(luaVM, Reticle->primaryAffectedByEMP);
    else
      j_lua_pushboolean(luaVM, 1);
  }
  else
  {
    v3 = 0;
  }
  if ( (int)v3 > j_lua_gettop(luaVM) )
  {
    v8 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v3, v8);
  }
  return v3;
}

/*
==============
LUI_LuaCall_Game_GetReticleSecondaryAffectedByEMP
==============
*/
__int64 LUI_LuaCall_Game_GetReticleSecondaryAffectedByEMP(lua_State *const luaVM)
{
  unsigned int v3; 
  LocalClientNum_t ClientFromController; 
  int v6; 
  const ReticleDef *Reticle; 
  unsigned int v8; 

  v3 = 1;
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, "USAGE: Game.GetReticleSecondaryAffectedByEMP( <controller>, <isAltReticle> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_type(luaVM, 2) == 1 )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 1);
    __asm { vcvttss2si ecx, xmm0; controllerIndex }
    ClientFromController = CL_Mgr_GetClientFromController(_ECX);
    v6 = j_lua_toboolean(luaVM, 2);
    Reticle = GetReticle(ClientFromController, v6 == 1);
    if ( Reticle )
      j_lua_pushboolean(luaVM, Reticle->secondaryAffectedByEMP);
    else
      j_lua_pushboolean(luaVM, 1);
  }
  else
  {
    v3 = 0;
  }
  if ( (int)v3 > j_lua_gettop(luaVM) )
  {
    v8 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v3, v8);
  }
  return v3;
}

/*
==============
LUI_LuaCall_Game_GetReticleMinScale
==============
*/
__int64 LUI_LuaCall_Game_GetReticleMinScale(lua_State *const luaVM)
{
  unsigned int v3; 
  LocalClientNum_t ClientFromController; 
  int v6; 
  unsigned int v11; 

  v3 = 1;
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, "USAGE: Game.GetReticleMinScale( <controller>, <isAltReticle> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_type(luaVM, 2) == 1 )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 1);
    __asm { vcvttss2si ecx, xmm0; controllerIndex }
    ClientFromController = CL_Mgr_GetClientFromController(_ECX);
    v6 = j_lua_toboolean(luaVM, 2);
    if ( GetReticle(ClientFromController, v6 == 1) )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rax+40h]
        vcvtss2sd xmm1, xmm0, xmm0; n
      }
    }
    else
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtss2sd xmm1, xmm0, xmm0; n
      }
    }
    j_lua_pushnumber(luaVM, *(long double *)&_XMM1);
  }
  else
  {
    v3 = 0;
  }
  if ( (int)v3 > j_lua_gettop(luaVM) )
  {
    v11 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v3, v11);
  }
  return v3;
}

/*
==============
LUI_LuaCall_Game_GetReticleMaxScale
==============
*/
__int64 LUI_LuaCall_Game_GetReticleMaxScale(lua_State *const luaVM)
{
  unsigned int v3; 
  LocalClientNum_t ClientFromController; 
  int v6; 
  unsigned int v11; 

  v3 = 1;
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, "USAGE: Game.GetReticleMaxScale( <controller>, <isAltReticle> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_type(luaVM, 2) == 1 )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 1);
    __asm { vcvttss2si ecx, xmm0; controllerIndex }
    ClientFromController = CL_Mgr_GetClientFromController(_ECX);
    v6 = j_lua_toboolean(luaVM, 2);
    if ( GetReticle(ClientFromController, v6 == 1) )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rax+44h]
        vcvtss2sd xmm1, xmm0, xmm0; n
      }
    }
    else
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtss2sd xmm1, xmm0, xmm0; n
      }
    }
    j_lua_pushnumber(luaVM, *(long double *)&_XMM1);
  }
  else
  {
    v3 = 0;
  }
  if ( (int)v3 > j_lua_gettop(luaVM) )
  {
    v11 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v3, v11);
  }
  return v3;
}

/*
==============
LUI_LuaCall_Game_GetReticleShakeProperties
==============
*/
__int64 LUI_LuaCall_Game_GetReticleShakeProperties(lua_State *const luaVM)
{
  unsigned int v3; 
  LocalClientNum_t ClientFromController; 
  const cg_t *LocalClientGlobals; 
  __int64 v7; 
  unsigned int v13; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: Game.GetReticleShakeProperties( controllerIndex )");
  v3 = 1;
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Game.GetReticleShakeProperties( controllerIndex )");
  *(double *)&_XMM0 = lui_tonumber32(luaVM, 1);
  __asm { vcvttss2si ecx, xmm0; controllerIndex }
  ClientFromController = CL_Mgr_GetClientFromController(_ECX);
  LocalClientGlobals = CG_GetLocalClientGlobals(ClientFromController);
  LODWORD(v7) = CG_GetWeaponForHud(LocalClientGlobals)->weaponIdx;
  if ( (unsigned int)v7 > bg_lastParsedWeaponIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v7, bg_lastParsedWeaponIndex) )
    __debugbreak();
  v7 = (unsigned __int16)v7;
  if ( !bg_weaponDefs[(unsigned __int16)v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
    __debugbreak();
  _RSI = bg_weaponDefs[v7];
  if ( _RSI )
  {
    j_lua_createtable(luaVM, 0, 5);
    LUI_SetTableInt("duration", _RSI->iReticleShakeDuration, LUI_luaVM);
    __asm
    {
      vmovss  xmm1, dword ptr [rsi+350h]
      vcvtss2sd xmm1, xmm1, xmm1; value
    }
    LUI_SetTableNumber("magnitude", *(long double *)&_XMM1, LUI_luaVM);
    LUI_SetTableInt("settleDuration", _RSI->iReticleSettleDuration, LUI_luaVM);
    __asm
    {
      vmovss  xmm1, dword ptr [rsi+354h]
      vcvtss2sd xmm1, xmm1, xmm1; value
    }
    LUI_SetTableNumber("multiplier", *(long double *)&_XMM1, LUI_luaVM);
    LUI_SetTableInt("numRapidFireBullets", _RSI->iReticleNumBulletsToRapidFire, LUI_luaVM);
  }
  else
  {
    v3 = 0;
  }
  if ( (int)v3 > j_lua_gettop(luaVM) )
  {
    v13 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v3, v13);
  }
  return v3;
}

/*
==============
LUI_LuaCall_Game_GetHitmarkerType
==============
*/
__int64 LUI_LuaCall_Game_GetHitmarkerType(lua_State *const luaVM)
{
  LocalClientNum_t ClientFromController; 
  const cg_t *LocalClientGlobals; 
  const Weapon *WeaponForHud; 
  int HitmarkerType; 
  unsigned int v8; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: Game.GetHitmarkerType( controllerIndex )");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Game.GetHitmarkerType( controllerIndex )");
  *(double *)&_XMM0 = lui_tonumber32(luaVM, 1);
  __asm { vcvttss2si ecx, xmm0; controllerIndex }
  ClientFromController = CL_Mgr_GetClientFromController(_ECX);
  LocalClientGlobals = CG_GetLocalClientGlobals(ClientFromController);
  WeaponForHud = CG_GetWeaponForHud(LocalClientGlobals);
  HitmarkerType = BG_GetHitmarkerType(WeaponForHud, 0);
  j_lua_pushinteger(luaVM, HitmarkerType);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v8 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v8);
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
  bool v3; 
  LocalClientNum_t ClientFromController; 
  const cg_t *LocalClientGlobals; 
  __int64 v11; 
  unsigned int v12; 
  Weapon result; 
  __m256i v15; 
  int v18; 

  if ( j_lua_gettop(luaVM) < 1 )
    j_luaL_error(luaVM, "USAGE: Game.GetCurrentWeaponRef( controllerIndex )");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Game.GetCurrentWeaponRef( controllerIndex )");
  v3 = 0;
  if ( j_lua_gettop(luaVM) == 2 )
  {
    if ( j_lua_type(luaVM, 2) != 1 )
      j_luaL_error(luaVM, "USAGE: Game.GetCurrentWeaponRef( controllerIndex, isInteractive )");
    v3 = j_lua_toboolean(luaVM, 2) != 0;
  }
  *(double *)&_XMM0 = lui_tonumber32(luaVM, 1);
  __asm { vcvttss2si ecx, xmm0; controllerIndex }
  ClientFromController = CL_Mgr_GetClientFromController(_ECX);
  LocalClientGlobals = CG_GetLocalClientGlobals(ClientFromController);
  if ( v3 )
    _RAX = LUI_DataBinding_Interactions_GetWeapon(&result, ClientFromController);
  else
    _RAX = (Weapon *)CG_GetWeaponForHud(LocalClientGlobals);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups xmm1, xmmword ptr [rax+20h]
    vmovups [rsp+118h+var_58], ymm0
    vmovsd  xmm0, qword ptr [rax+30h]
  }
  v18 = *(_DWORD *)&_RAX->weaponCamo;
  __asm
  {
    vmovsd  [rsp+118h+var_28], xmm0
    vmovups [rsp+118h+var_38], xmm1
  }
  v11 = v15.m256i_u16[0];
  if ( v15.m256i_u16[0] > bg_lastParsedWeaponIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1218, ASSERT_TYPE_ASSERT, "( weaponIndex ) <= ( bg_lastParsedWeaponIndex )", "weaponIndex not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v15.m256i_u16[0], bg_lastParsedWeaponIndex) )
    __debugbreak();
  if ( !bg_weaponCompleteDefs[v11] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1219, ASSERT_TYPE_ASSERT, "(bg_weaponCompleteDefs[weaponIndex])", (const char *)&queryFormat, "bg_weaponCompleteDefs[weaponIndex]") )
    __debugbreak();
  j_lua_pushstring(luaVM, bg_weaponCompleteDefs[v11]->szInternalName);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v12 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v12);
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
  bool v3; 
  LocalClientNum_t ClientFromController; 
  const cg_t *LocalClientGlobals; 
  __int64 v11; 
  unsigned int v12; 
  Weapon result; 
  __m256i v15; 
  int v18; 

  if ( j_lua_gettop(luaVM) < 1 )
    j_luaL_error(luaVM, "USAGE: Game.GetWeaponDynamicIconAnimationName( controllerIndex )");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Game.GetWeaponDynamicIconAnimationName( controllerIndex )");
  v3 = 0;
  if ( j_lua_gettop(luaVM) == 2 )
  {
    if ( j_lua_type(luaVM, 2) != 1 )
      j_luaL_error(luaVM, "USAGE: Game.GetWeaponDynamicIconAnimationName( controllerIndex, isInteractive )");
    v3 = j_lua_toboolean(luaVM, 2) != 0;
  }
  *(double *)&_XMM0 = lui_tonumber32(luaVM, 1);
  __asm { vcvttss2si ecx, xmm0; controllerIndex }
  ClientFromController = CL_Mgr_GetClientFromController(_ECX);
  LocalClientGlobals = CG_GetLocalClientGlobals(ClientFromController);
  if ( v3 )
    _RAX = LUI_DataBinding_Interactions_GetWeapon(&result, ClientFromController);
  else
    _RAX = (Weapon *)CG_GetWeaponForHud(LocalClientGlobals);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups xmm1, xmmword ptr [rax+20h]
    vmovups [rsp+118h+var_58], ymm0
    vmovsd  xmm0, qword ptr [rax+30h]
  }
  v18 = *(_DWORD *)&_RAX->weaponCamo;
  __asm
  {
    vmovsd  [rsp+118h+var_28], xmm0
    vmovups [rsp+118h+var_38], xmm1
  }
  v11 = v15.m256i_u16[0];
  if ( v15.m256i_u16[0] > bg_lastParsedWeaponIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1218, ASSERT_TYPE_ASSERT, "( weaponIndex ) <= ( bg_lastParsedWeaponIndex )", "weaponIndex not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v15.m256i_u16[0], bg_lastParsedWeaponIndex) )
    __debugbreak();
  if ( !bg_weaponCompleteDefs[v11] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1219, ASSERT_TYPE_ASSERT, "(bg_weaponCompleteDefs[weaponIndex])", (const char *)&queryFormat, "bg_weaponCompleteDefs[weaponIndex]") )
    __debugbreak();
  j_lua_pushstring(luaVM, bg_weaponCompleteDefs[v11]->dynamicIconAnimationName);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v12 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v12);
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
  unsigned int v3; 
  LocalClientNum_t ClientFromController; 
  int FlashbangedRemainingTime; 
  unsigned int v7; 

  v3 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Game.IsPlayerFlashed( <controllerIndex> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 1);
    __asm { vcvttss2si ecx, xmm0; controllerIndex }
    ClientFromController = CL_Mgr_GetClientFromController(_ECX);
    FlashbangedRemainingTime = CG_GetFlashbangedRemainingTime(ClientFromController);
    j_lua_pushboolean(luaVM, FlashbangedRemainingTime != 0);
  }
  else
  {
    v3 = 0;
  }
  if ( (int)v3 > j_lua_gettop(luaVM) )
  {
    v7 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v3, v7);
  }
  return v3;
}

/*
==============
LUI_LuaCall_Game_IsEntityAlive
==============
*/
__int64 LUI_LuaCall_Game_IsEntityAlive(lua_State *const luaVM)
{
  unsigned int v3; 
  LocalClientNum_t ClientFromController; 
  centity_t *Entity; 
  bool v8; 
  unsigned int v9; 

  v3 = 1;
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Game.IsEntityAlive( <controllerIndex>, <entityNum> )");
  if ( j_lua_gettop(luaVM) != 2 )
    goto LABEL_10;
  if ( !j_lua_isnumber(luaVM, 1) )
    goto LABEL_10;
  if ( !j_lua_isnumber(luaVM, 2) )
    goto LABEL_10;
  *(double *)&_XMM0 = lui_tonumber32(luaVM, 1);
  __asm { vcvttss2si ecx, xmm0; controllerIndex }
  ClientFromController = CL_Mgr_GetClientFromController(_ECX);
  *(double *)&_XMM0 = lui_tonumber32(luaVM, 2);
  __asm { vcvttss2si edx, xmm0; entityIndex }
  Entity = CG_GetEntity(ClientFromController, _EDX);
  if ( Entity )
  {
    v8 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&Entity->nextState.lerp.eFlags, ACTIVE, 0x11u);
    j_lua_pushboolean(luaVM, !v8);
  }
  else
  {
LABEL_10:
    v3 = 0;
  }
  if ( (int)v3 > j_lua_gettop(luaVM) )
  {
    v9 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v3, v9);
  }
  return v3;
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
  __int64 v6; 
  CgCompassSystem *CompassSystem; 
  unsigned int v24; 
  __int64 result; 
  vec3_t outOrg; 
  __int64 v29; 
  void *retaddr; 

  _RAX = &retaddr;
  v29 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
  }
  CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
  v6 = CurrentValidLocalClient;
  _RDI = CG_GetLocalClientGlobals(CurrentValidLocalClient);
  __asm
  {
    vmovss  xmm6, dword ptr [rax+4A004h]
    vmovss  xmm0, dword ptr [rax+4A000h]
    vxorps  xmm7, xmm0, cs:__xmm@80000000800000008000000080000000
  }
  if ( _RDI == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_game.cpp", 2703, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( _RDI->renderingThirdPerson )
    goto LABEL_10;
  if ( !CgWeaponMap::ms_instance[v6] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  if ( BG_IsThirdPersonMode(CgWeaponMap::ms_instance[v6], &_RDI->predictedPlayerState) )
LABEL_10:
    CG_GetPoseOrigin(&_RDI->predictedPlayerEntity->pose, &outOrg);
  else
    RefdefView_GetOrg(&_RDI->refdef.view, &outOrg);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+98h+outOrg]
    vsubss  xmm4, xmm0, dword ptr [rdi+4A018h]
    vmovss  xmm1, dword ptr [rsp+98h+outOrg+4]
    vsubss  xmm3, xmm1, dword ptr [rdi+4A01Ch]
    vmulss  xmm1, xmm3, xmm7
    vmulss  xmm0, xmm4, xmm6
    vaddss  xmm1, xmm1, xmm0
    vdivss  xmm2, xmm1, dword ptr [rdi+4A020h]
    vmovss  dword ptr [rdi+4A084h], xmm2
    vmulss  xmm1, xmm4, xmm7
    vmulss  xmm0, xmm3, xmm6
    vsubss  xmm1, xmm1, xmm0
    vdivss  xmm2, xmm1, dword ptr [rdi+4A024h]
    vmovss  dword ptr [rdi+4A088h], xmm2
  }
  CompassSystem = CgCompassSystem::GetCompassSystem((const LocalClientNum_t)v6);
  CgCompassSystem::SetTacmapMapCenter(CompassSystem, _RDI->locationSelectorCursor);
  memset(&outOrg, 0, sizeof(outOrg));
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v24 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v24);
  }
  result = 0i64;
  __asm
  {
    vmovaps xmm6, [rsp+98h+var_38]
    vmovaps xmm7, [rsp+98h+var_48]
  }
  return result;
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
  int v5; 
  bool v6; 
  unsigned int v9; 

  if ( j_lua_gettop(luaVM) != 1 || j_lua_type(luaVM, 1) != 1 )
    j_luaL_error(luaVM, "USAGE: Game.LocationSelectionFlipSticks( <boolean> )\n");
  CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
  KeyState = CL_Keys_GetKeyState(CurrentValidLocalClient);
  v5 = j_lua_toboolean(luaVM, 1);
  v6 = v5 > 0;
  if ( v5 <= 0 )
  {
    __asm { vxorps  xmm0, xmm0, xmm0; rightStickDeadzoneOverrideVal }
  }
  else
  {
    _RCX = gpad_stick_deadzone_min;
    __asm { vmovss  xmm0, dword ptr [rcx+28h] }
  }
  CG_Utils_SetRightStickDeadzoneOverride(*(float *)&_XMM0);
  KeyState->flipSticks = v6;
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v9 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v9);
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
  unsigned int v3; 
  LocalClientNum_t ClientFromController; 
  unsigned int v15; 

  v3 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Game.GetMapSizeData( <controllerIndex> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 1);
    __asm { vcvttss2si ecx, xmm0; controllerIndex }
    ClientFromController = CL_Mgr_GetClientFromController(_ECX);
    _RBX = CG_GetLocalClientGlobals(ClientFromController);
    j_lua_createtable(luaVM, 0, 4);
    __asm
    {
      vmovss  xmm1, dword ptr [rbx+4A020h]
      vcvtss2sd xmm1, xmm1, xmm1; value
    }
    LUI_SetTableNumber("mapWidth", *(long double *)&_XMM1, LUI_luaVM);
    __asm
    {
      vmovss  xmm1, dword ptr [rbx+4A024h]
      vcvtss2sd xmm1, xmm1, xmm1; value
    }
    LUI_SetTableNumber("mapHeight", *(long double *)&_XMM1, LUI_luaVM);
    __asm
    {
      vmovss  xmm1, dword ptr [rbx+4A018h]
      vcvtss2sd xmm1, xmm1, xmm1; value
    }
    LUI_SetTableNumber("mapLeft", *(long double *)&_XMM1, LUI_luaVM);
    __asm
    {
      vmovss  xmm1, dword ptr [rbx+4A01Ch]
      vcvtss2sd xmm1, xmm1, xmm1; value
    }
    LUI_SetTableNumber("mapTop", *(long double *)&_XMM1, LUI_luaVM);
  }
  else
  {
    v3 = 0;
  }
  if ( (int)v3 > j_lua_gettop(luaVM) )
  {
    v15 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v3, v15);
  }
  return v3;
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

__int64 __fastcall LUI_LuaCall_Game_GetCalloutMarkerPings_impl(lua_State *const luaVM, long double _XMM1_8)
{
  LocalClientNum_t ClientFromController; 
  playerState_s *p_predictedPlayerState; 
  int v10; 
  int v11; 
  unsigned __int8 LookAtIndex; 
  int v13; 
  unsigned __int8 v14; 
  unsigned __int8 v15; 
  const CalloutMarkerPingView *View; 
  CalloutMarkerPingPool v17; 
  char v18; 
  int LastTimeChanged; 
  unsigned __int8 owner; 
  int v21; 
  const GfxImage *Icon; 
  const BG_SpawnGroup_Loot_ItemDef *LootItemDef; 
  __int64 rarity; 
  const char *name; 
  unsigned int v27; 
  unsigned int v28; 
  unsigned __int8 v29; 
  __int16 x; 
  int v31; 
  __int64 index; 
  const char *v33; 
  lua_State *v34; 
  const char *v39; 
  int IsMovingPlatform; 
  __int64 result; 
  bool v56; 
  CalloutMarkerPingBackgroundType BackgroundType; 
  unsigned __int8 feedback; 
  bool v59; 
  bool v60; 
  unsigned __int8 LastPredictedViewIndex; 
  unsigned __int8 v62; 
  unsigned int value; 
  int value_4; 
  team_t Friendliness; 
  int v66; 
  int v67; 
  playerState_s *v68; 
  vec3_t outWorldOrigin; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: Game.GetObjectives( controllerIndex )");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Game.GetObjectives( controllerIndex )");
  *(double *)&_XMM0 = lui_tonumber32(luaVM, 1);
  __asm { vcvttss2si ecx, xmm0; controllerIndex }
  ClientFromController = CL_Mgr_GetClientFromController(_ECX);
  p_predictedPlayerState = &CG_GetLocalClientGlobals(ClientFromController)->predictedPlayerState;
  v68 = p_predictedPlayerState;
  j_lua_createtable(luaVM, 52, 0);
  v10 = ScriptableCl_ObjectivePeak(ClientFromController);
  LastPredictedViewIndex = CG_CalloutMarkerPing_GetLastPredictedViewIndex(ClientFromController);
  v11 = 0;
  LookAtIndex = CG_CalloutMarkerPing_GetLookAtIndex(ClientFromController);
  v13 = v10 + 33;
  __asm { vmovaps [rsp+0C8h+var_38], xmm6 }
  v14 = LookAtIndex;
  __asm { vmovaps [rsp+0C8h+var_48], xmm7 }
  v15 = 0;
  v67 = v10 + 33;
  __asm { vmovaps [rsp+0C8h+var_58], xmm8 }
  v62 = LookAtIndex;
  do
  {
    value = v13 + v15;
    View = CG_CalloutMarkerPing_GetView(ClientFromController, v15, p_predictedPlayerState);
    if ( !View->origin.owner )
      goto LABEL_48;
    v17 = CG_CalloutMarkerPing_ViewIndexToPool(ClientFromController, v15);
    if ( (unsigned __int8)(v17 - 9) > 2u )
    {
      v18 = 0;
LABEL_10:
      v66 = v11 + 1;
      LUI_BeginTable(v11 + 1, luaVM);
      feedback = View->origin.feedback;
      v59 = v14 == v15;
      LastTimeChanged = CG_CalloutMarkerPing_GetLastTimeChanged(ClientFromController, v15);
      owner = View->origin.owner;
      value_4 = LastTimeChanged;
      if ( owner )
        v21 = owner - 1;
      else
        v21 = -1;
      Icon = CG_CalloutMarkerPing_GetIcon(v17, View, ClientFromController, COMPASS_TYPE_WAYPOINT);
      BackgroundType = CG_CalloutMarkerPing_GetBackgroundType(v17, View, ClientFromController);
      if ( v18 )
        LootItemDef = ScriptableCl_GetLootItemDef(ClientFromController, View->scriptable.index);
      else
        LootItemDef = NULL;
      Friendliness = CG_CalloutMarkerPing_GetFriendliness(v17, View, ClientFromController);
      if ( !Icon || (v56 = 0, Icon == cgMedia.compass.calloutMarkerPing_OvalBackground) )
        v56 = 1;
      v60 = Icon == cgMedia.compass.calloutMarkerPing_Caution;
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
      LUI_SetTableInt("ownerClientNum", v21, luaVM);
      LUI_SetTableInt("feedback", feedback, luaVM);
      LUI_SetTableInt("lastChangedTime", value_4, luaVM);
      LUI_SetTableBool("isLookedAt", v59, luaVM);
      LUI_SetTableInt("rarity", rarity, luaVM);
      LUI_SetTableInt("teamFriendliness", Friendliness, luaVM);
      LUI_SetTableBool("isBracket", v56, luaVM);
      LUI_SetTableBool("isCaution", v60, luaVM);
      if ( v15 == 52 )
        LUI_SetTableBool("isPredicted", 1, LUI_luaVM);
      if ( LastPredictedViewIndex == v15 )
      {
        LUI_SetTableBool("wasPredicted", 1, LUI_luaVM);
        CG_CalloutMarkerPing_ResetLastPredicted(ClientFromController);
      }
      LUI_BeginTable("location", luaVM);
      CG_CalloutMarkerPing_GetWorldOrigin(v17, View, ClientFromController, &outWorldOrigin);
      *(double *)&_XMM0 = CG_CalloutMarkerPing_GetZOffset(v17, View, ClientFromController);
      __asm { vmovaps xmm8, xmm0 }
      LOBYTE(v27) = CG_CalloutMarkerPing_ClassifyPing(ClientFromController, v17, View);
      v28 = v27;
      if ( v17 == CONST_CALLOUT_POOL_ID_REQUEST )
      {
        v29 = View->origin.owner;
        if ( v29 )
          x = v29 - 1;
        else
          x = -1;
      }
      else
      {
        if ( v17 != CONST_CALLOUT_POOL_ID_VEHICLE && (unsigned __int8)(v17 - 4) > 2u )
        {
          x = 2047;
          goto LABEL_36;
        }
        x = View->origin.x;
      }
      if ( x != 2047 )
      {
        LUI_SetTableInt("entNum", x, luaVM);
        __asm
        {
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2sd xmm1, xmm1, eax; value
        }
        LUI_SetTableNumber("x", *(long double *)&_XMM1, luaVM);
        __asm
        {
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2sd xmm1, xmm1, eax; value
        }
        LUI_SetTableNumber("y", *(long double *)&_XMM1, luaVM);
        v39 = "zOffset";
        __asm { vcvtss2sd xmm1, xmm8, xmm8 }
        goto LABEL_46;
      }
LABEL_36:
      if ( v27 <= 0x16 && (v31 = 5193728, _bittest(&v31, v28)) )
      {
        index = View->scriptable.index;
        v33 = "scriptableIndex";
        v34 = luaVM;
      }
      else
      {
        v34 = luaVM;
        if ( v17 != CONST_CALLOUT_POOL_ID_WORLD )
        {
          __asm
          {
            vmovss  xmm1, dword ptr [rsp+0C8h+outWorldOrigin]
            vcvtss2sd xmm1, xmm1, xmm1; value
          }
          LUI_SetTableNumber("x", *(long double *)&_XMM1, luaVM);
          __asm
          {
            vmovss  xmm1, dword ptr [rsp+0C8h+outWorldOrigin+4]
            vcvtss2sd xmm1, xmm1, xmm1; value
          }
          LUI_SetTableNumber("y", *(long double *)&_XMM1, luaVM);
          __asm
          {
            vmovss  xmm1, dword ptr [rsp+0C8h+outWorldOrigin+8]
            vcvtss2sd xmm1, xmm1, xmm1; value
          }
          v39 = "z";
          goto LABEL_46;
        }
        index = View->origin.x;
        v33 = "objectiveIndex";
      }
      LUI_SetTableInt(v33, index, v34);
      v39 = "zOffset";
      __asm { vcvtss2sd xmm1, xmm8, xmm8 }
LABEL_46:
      LUI_SetTableNumber(v39, *(long double *)&_XMM1, luaVM);
      LUI_EndTable(luaVM);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+0C8h+outWorldOrigin+8]
        vmovss  xmm6, dword ptr [rsp+0C8h+outWorldOrigin]
        vmovss  xmm7, dword ptr [rsp+0C8h+outWorldOrigin+4]
        vsubss  xmm8, xmm0, xmm8
      }
      LUI_BeginTable("bottom", luaVM);
      __asm { vcvtss2sd xmm1, xmm6, xmm6; value }
      LUI_SetTableNumber("x", *(long double *)&_XMM1, luaVM);
      __asm { vcvtss2sd xmm1, xmm7, xmm7; value }
      LUI_SetTableNumber("y", *(long double *)&_XMM1, luaVM);
      __asm { vcvtss2sd xmm1, xmm8, xmm8; value }
      LUI_SetTableNumber("z", _XMM1_8, luaVM);
      LUI_EndTable(luaVM);
      IsMovingPlatform = BGMovingPlatforms::IsMovingPlatform(x);
      LUI_SetTableBool("isTrain", IsMovingPlatform != 0, luaVM);
      LUI_EndTable(luaVM);
      v11 = v66;
      v14 = v62;
      goto LABEL_47;
    }
    v18 = 1;
    if ( ScriptableCl_GetInstanceInUse(ClientFromController, View->scriptable.index) )
      goto LABEL_10;
LABEL_47:
    p_predictedPlayerState = v68;
LABEL_48:
    v13 = v67;
    ++v15;
  }
  while ( v15 < 0x35u );
  CG_CalloutMarkerPing_MarkDataConsumed(ClientFromController);
  __asm { vmovaps xmm8, [rsp+0C8h+var_58] }
  result = 1i64;
  __asm
  {
    vmovaps xmm7, [rsp+0C8h+var_48]
    vmovaps xmm6, [rsp+0C8h+var_38]
  }
  return result;
}

/*
==============
LUI_LuaCall_Game_GetCurrentWeaponAttachments_impl
==============
*/
__int64 LUI_LuaCall_Game_GetCurrentWeaponAttachments_impl(lua_State *const luaVM)
{
  bool v3; 
  LocalClientNum_t ClientFromController; 
  cg_t *LocalClientGlobals; 
  bool v7; 
  const cg_t *v8; 
  __int64 AllWeaponAttachments; 
  __int64 WeaponFireType; 
  int v19; 
  const char ***v20; 
  AttachmentSlot DynamicAttachmentSlot; 
  __int64 v22; 
  Weapon result; 
  __m256i v25; 
  int v28; 
  Weapon r_weapon; 
  WeaponAttachment *attachments[30]; 

  if ( j_lua_gettop(luaVM) < 1 )
    j_luaL_error(luaVM, "USAGE: Game.GetCurrentWeaponAttachments( controllerIndex )");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Game.GetCurrentWeaponAttachments( controllerIndex )");
  v3 = 0;
  if ( j_lua_gettop(luaVM) == 2 )
  {
    if ( j_lua_type(luaVM, 2) != 1 )
      j_luaL_error(luaVM, "USAGE: Game.GetCurrentWeaponAttachments( controllerIndex, isInteractive )");
    v3 = j_lua_toboolean(luaVM, 2) != 0;
  }
  *(double *)&_XMM0 = lui_tonumber32(luaVM, 1);
  __asm { vcvttss2si ecx, xmm0; controllerIndex }
  ClientFromController = CL_Mgr_GetClientFromController(_ECX);
  LocalClientGlobals = CG_GetLocalClientGlobals(ClientFromController);
  v7 = BG_UsingAlternate(&LocalClientGlobals->predictedPlayerState);
  v8 = CG_GetLocalClientGlobals(ClientFromController);
  if ( v3 )
    _RAX = LUI_DataBinding_Interactions_GetWeapon(&result, ClientFromController);
  else
    _RAX = (Weapon *)CG_GetWeaponForHud(v8);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups xmm1, xmmword ptr [rax+20h]
    vmovups [rsp+1F8h+var_198], ymm0
    vmovsd  xmm0, qword ptr [rax+30h]
  }
  v28 = *(_DWORD *)&_RAX->weaponCamo;
  _RAX = &v25;
  __asm
  {
    vmovsd  [rsp+1F8h+var_168], xmm0
    vmovups [rsp+1F8h+var_178], xmm1
    vmovups ymm0, ymmword ptr [rax]
    vmovups xmm1, xmmword ptr [rax+20h]
    vmovups ymmword ptr [rsp+1F8h+r_weapon.weaponIdx], ymm0
    vmovsd  xmm0, qword ptr [rax+30h]
    vmovsd  qword ptr [rsp+1F8h+r_weapon.attachmentVariationIndices+15h], xmm0
  }
  *(_DWORD *)&r_weapon.weaponCamo = v28;
  __asm { vmovups xmmword ptr [rsp+1F8h+r_weapon.attachmentVariationIndices+5], xmm1 }
  AllWeaponAttachments = BG_GetAllWeaponAttachments(&r_weapon, (const WeaponAttachment **)attachments);
  WeaponFireType = BG_GetWeaponFireType(&r_weapon, v7);
  v19 = 0;
  j_lua_createtable(luaVM, 0, 0);
  if ( (_DWORD)AllWeaponAttachments )
  {
    v20 = (const char ***)attachments;
    do
    {
      if ( **v20 )
      {
        LUI_BeginTable(++v19, luaVM);
        LUI_SetTableString("ref", **v20, LUI_luaVM);
        LUI_SetTableInt("type", *((int *)*v20 + 46), LUI_luaVM);
        LUI_SetTableString("animateSeq", (*v20)[24], LUI_luaVM);
        LUI_SetTableString("icon", (*v20)[25], LUI_luaVM);
        DynamicAttachmentSlot = BG_GetDynamicAttachmentSlot(*((const DynamicAttachmentType *)*v20 + 46));
        if ( DynamicAttachmentSlot == ATT_SLOT_OTHER )
          v22 = 0i64;
        else
          v22 = r_weapon.attachmentVariationIndices[DynamicAttachmentSlot];
        LUI_SetTableInt("variantID", v22, LUI_luaVM);
        LUI_EndTable(LUI_luaVM);
      }
      ++v20;
      --AllWeaponAttachments;
    }
    while ( AllWeaponAttachments );
  }
  LUI_BeginTable(v19 + 1, luaVM);
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
  LocalClientNum_t ClientFromController; 
  const BG_SpawnGroup_Loot_ItemDef *LootItemFromCursor; 
  unsigned __int16 ModelForController; 
  unsigned __int16 ModelFromPath; 
  HintParamValue v8; 
  int Int; 
  const char *pickupString; 
  const char *v11; 
  const BG_SpawnGroup_Loot_ItemDef *LootItemFromScriptableIndex; 
  unsigned __int16 v13; 
  int v14; 
  __int64 WeaponFireType; 
  __int64 v20; 
  cg_t *LocalClientGlobals; 
  int v22; 
  __int64 v23; 
  __int64 LootWeaponNumActiveAttachments; 
  const char *WeaponBaseName; 
  __int64 WeaponAttachments; 
  __int64 v27; 
  const char ***v28; 
  Weapon result; 
  Weapon r_weapon; 
  WeaponAttachment *attachments[30]; 

  if ( j_lua_gettop(luaVM) < 1 )
    j_luaL_error(luaVM, "USAGE: Game.GetLootData( controllerIndex )");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Game.GetLootData( controllerIndex )");
  *(double *)&_XMM0 = lui_tonumber32(luaVM, 1);
  __asm { vcvttss2si ebx, xmm0 }
  ClientFromController = CL_Mgr_GetClientFromController(_EBX);
  LootItemFromCursor = LUI_DataBinding_Interactions_GetLootItemFromCursor(ClientFromController);
  ModelForController = LUI_Model_GetModelForController(_EBX);
  ModelFromPath = LUI_Model_GetModelFromPath(ModelForController, "cg.HUD.hints.lootCard.shouldShow");
  v8.intVal = 0;
  if ( LUI_Model_GetDataType(ModelFromPath) == LUI_MODEL_DT_INT )
    Int = LUI_Model_GetInt(ModelFromPath);
  else
    Int = 0;
  pickupString = NULL;
  if ( j_lua_gettop(luaVM) < 2 )
  {
    if ( Int != 1 )
      goto LABEL_16;
    v13 = LUI_Model_GetModelFromPath(ModelForController, "cg.HUD.hints.lootCard.targetEntityNum");
    if ( LUI_Model_GetDataType(v13) != LUI_MODEL_DT_INT )
      goto LABEL_16;
    v14 = LUI_Model_GetInt(v13);
    LootItemFromScriptableIndex = LUI_DataBinding_Interactions_GetLootItemFromScriptableIndex(ClientFromController, v14 & 0x3FFFFF);
    LootItemFromCursor = LootItemFromScriptableIndex;
    if ( !LootItemFromScriptableIndex )
      goto LABEL_16;
  }
  else
  {
    if ( !j_lua_isstring(luaVM, 2) )
      j_luaL_error(luaVM, "USAGE: Game.GetLootData( controllerIndex, ?brLootItemNameRef );");
    v11 = j_lua_tolstring(luaVM, 2, NULL);
    LootItemFromScriptableIndex = LUI_DataBinding_Interactions_GetLootItemFromName(ClientFromController, v11);
    LootItemFromCursor = LootItemFromScriptableIndex;
  }
  pickupString = LootItemFromScriptableIndex->pickupString;
LABEL_16:
  _RAX = LUI_DataBinding_Interactions_GetWeapon(&result, ClientFromController);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rsp+1C8h+r_weapon.weaponIdx], ymm0
    vmovups xmm1, xmmword ptr [rax+20h]
    vmovups xmmword ptr [rsp+1C8h+r_weapon.attachmentVariationIndices+5], xmm1
    vmovsd  xmm0, qword ptr [rax+30h]
    vmovsd  qword ptr [rsp+1C8h+r_weapon.attachmentVariationIndices+15h], xmm0
  }
  *(_DWORD *)&r_weapon.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
  WeaponFireType = BG_GetWeaponFireType(&r_weapon, 0);
  v20 = BG_GetWeaponFireType(&r_weapon, 1);
  LocalClientGlobals = CG_GetLocalClientGlobals(ClientFromController);
  v22 = 0;
  v23 = 0i64;
  while ( LocalClientGlobals->predictedPlayerState.cursorHintParams.types[v23] != 2 )
  {
    ++v22;
    if ( ++v23 >= 2 )
      goto LABEL_21;
  }
  LODWORD(v8.floatVal) = LocalClientGlobals->predictedPlayerState.cursorHintParams.values[v22];
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
  LUI_SetTableInt("quantity", v8.intVal, luaVM);
  LUI_SetTableInt("startQuantity", (int)LootItemFromCursor->startQuantity, luaVM);
  LUI_SetTableInt("weaponIndex", (int)LootItemFromCursor->weaponIndex, luaVM);
  LUI_SetTableInt("fireType", WeaponFireType, luaVM);
  LUI_SetTableInt("fireTypeAlt", v20, luaVM);
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
      v27 = 1i64;
      v28 = (const char ***)attachments;
      do
      {
        LUI_SetTableString(v27++, **v28++, luaVM);
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

__int64 __fastcall LUI_LuaCall_Game_GetObjectives_impl(lua_State *const luaVM, long double _XMM1_8, __int64 a3, double _XMM3_8)
{
  LocalClientNum_t v7; 
  playerState_s *p_predictedPlayerState; 
  const ClConfigStrings *v9; 
  cg_t *LocalClientGlobals; 
  bool m_isMLGSpectator; 
  char *m_activeGameTypeName; 
  int v13; 
  __int64 v14; 
  unsigned __int8 v17; 
  int v18; 
  ObjectiveBackground background; 
  const char *v20; 
  __int64 v21; 
  char v22; 
  __int64 v23; 
  char v24; 
  ObjectiveSide v25; 
  int v26; 
  __int64 v27; 
  ObjectiveSide *v28; 
  int v30; 
  __int64 v31; 
  unsigned __int8 v37; 
  __int64 v38; 
  char v40; 
  unsigned int InstanceIndex; 
  char v42; 
  const ObjectiveSettings *v43; 
  const ObjectiveSettings *v44; 
  int v45; 
  int v46; 
  const char *v52; 
  const char *v53; 
  int v54; 
  int v55; 
  unsigned __int8 v62; 
  bool v63; 
  unsigned __int8 v64; 
  int v65; 
  LocalClientNum_t ClientFromController; 
  __int64 v67; 
  __int64 v68; 
  ClConfigStrings *ClConfigStrings; 
  char *v70; 
  vec3_t out_origin; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: Game.GetObjectives( controllerIndex )");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Game.GetObjectives( controllerIndex )");
  *(double *)&_XMM0 = lui_tonumber32(luaVM, 1);
  __asm { vcvttss2si ecx, xmm0; controllerIndex }
  ClientFromController = CL_Mgr_GetClientFromController(_ECX);
  v7 = ClientFromController;
  p_predictedPlayerState = &CG_GetLocalClientGlobals(ClientFromController)->predictedPlayerState;
  *(_QWORD *)out_origin.v = p_predictedPlayerState;
  ClConfigStrings = ClConfigStrings::GetClConfigStrings();
  v9 = ClConfigStrings;
  LocalClientGlobals = CG_GetLocalClientGlobals(ClientFromController);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_game.cpp", 2260, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  m_isMLGSpectator = LocalClientGlobals->m_isMLGSpectator;
  m_activeGameTypeName = cls.m_activeGameTypeName;
  v13 = 0;
  v63 = m_isMLGSpectator;
  if ( !cls.m_activeGameTypeName[0] )
    m_activeGameTypeName = NULL;
  v70 = m_activeGameTypeName;
  v64 = ScriptableCl_ObjectiveCount(ClientFromController);
  v62 = ScriptableCl_ObjectivePeak(ClientFromController);
  j_lua_createtable(luaVM, v62 + 32, 0);
  v14 = 1i64;
  v65 = 0;
  v68 = 1i64;
  _RSI = &p_predictedPlayerState->objectives[0].side;
  do
  {
    if ( !m_isMLGSpectator || (*(_WORD *)(_RSI - 5) & 0x4000) == 0 )
    {
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2sd xmm1, xmm1, eax; n
      }
      j_lua_pushnumber(LUI_luaVM, _XMM1_8);
      j_lua_createtable(luaVM, 0, 16);
      LUI_SetTableInt("index", v14, luaVM);
      v17 = *((_BYTE *)_RSI - 2);
      if ( ((v17 - 2) & 0xFD) == 0 && CG_CalloutMarkerPing_CheckSquadPingsForTarget(v7, *(_DWORD *)(_RSI - 161), 0xFFFFFFFF, v13) != 53 )
        v17 = 1;
      if ( m_isMLGSpectator && (v18 = *(_DWORD *)(_RSI + 3)) != 0 )
      {
        background = *((_BYTE *)_RSI + 7);
      }
      else
      {
        v18 = *(_DWORD *)(_RSI - 17);
        background = *((_BYTE *)_RSI - 3);
      }
      LUI_SetTableObjectiveStringsAndIcon(luaVM, v9, *(_DWORD *)(_RSI - 21), *(_DWORD *)(_RSI - 25), v18, background, *(_DWORD *)(_RSI - 29), -1);
      LUI_SetTableObjectiveFlags(luaVM, (const ObjectiveFlags *)(_RSI - 5));
      if ( !m_isMLGSpectator || !m_activeGameTypeName )
        goto LABEL_28;
      v20 = "ctf";
      v21 = 0x7FFFFFFFi64;
      do
      {
        v22 = v20[m_activeGameTypeName - "ctf"];
        v23 = v21;
        v24 = *v20++;
        --v21;
        if ( !v23 )
          break;
        if ( v22 != v24 )
          goto LABEL_28;
      }
      while ( v22 );
      if ( *(int *)(_RSI - 29) > 0 )
        v25 = (*_RSI == FRIENDLY) + 1;
      else
LABEL_28:
        v25 = *_RSI;
      __asm { vmovss  xmm3, dword ptr [rsi-0Dh]; progress }
      LUI_SetTableObjectiveStatus(luaVM, v17, v25, *(float *)&_XMM3_8, _RSI[1]);
      LUI_BeginTable("locations", luaVM);
      v26 = 1;
      v67 = 8i64;
      v27 = 1i64;
      v28 = _RSI - 161;
      _R14 = _RSI - 121;
      do
      {
        v30 = *(_DWORD *)(_RSI - 33);
        v31 = *(int *)v28;
        LUI_BeginTable(v27, luaVM);
        if ( (v26 & v30) != 0 )
        {
          if ( (_DWORD)v31 == 2047 )
          {
            __asm
            {
              vmovss  xmm1, dword ptr [r14-8]
              vcvtss2sd xmm1, xmm1, xmm1; value
            }
            LUI_SetTableNumber("x", *(long double *)&_XMM1, luaVM);
            __asm
            {
              vmovss  xmm1, dword ptr [r14-4]
              vcvtss2sd xmm1, xmm1, xmm1; value
            }
            LUI_SetTableNumber("y", *(long double *)&_XMM1, luaVM);
            __asm
            {
              vmovss  xmm1, dword ptr [r14]
              vcvtss2sd xmm1, xmm1, xmm1; value
            }
            LUI_SetTableNumber("z", _XMM1_8, luaVM);
          }
          else
          {
            LUI_SetTableInt("entNum", v31, luaVM);
          }
        }
        LUI_EndTable(luaVM);
        ++v27;
        v26 = __ROL4__(v26, 1);
        _R14 += 12;
        v28 += 4;
        --v67;
      }
      while ( v67 );
      LUI_EndTable(luaVM);
      v9 = ClConfigStrings;
      CG_GameInterface_SetObjectiveLuaData(ClConfigStrings, (const ObjectiveView *const)(_RSI - 161), luaVM);
      j_lua_settable(LUI_luaVM, -3);
      v13 = v65;
      m_isMLGSpectator = v63;
      v14 = v68;
      v7 = ClientFromController;
      m_activeGameTypeName = v70;
    }
    ++v13;
    ++v14;
    _RSI += 172;
    v65 = v13;
    v68 = v14;
  }
  while ( v13 < 32 );
  v37 = 0;
  if ( !v62 )
    return 1i64;
  v38 = *(_QWORD *)out_origin.v;
  do
  {
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2sd xmm1, xmm1, ebx; n
    }
    j_lua_pushnumber(LUI_luaVM, _XMM1_8);
    j_lua_createtable(luaVM, 0, 16);
    LUI_SetTableInt("index", (unsigned int)v37 + 33, luaVM);
    if ( CG_Players_IsPlayerInGulag(v7, *(_DWORD *)(v38 + 460)) || v37 >= v64 )
    {
      v40 = 0;
      InstanceIndex = -1;
    }
    else
    {
      v40 = 1;
      InstanceIndex = ScriptableCl_ObjectiveGetInstanceIndex(v7, v37);
    }
    v42 = 0;
    if ( InstanceIndex != -1 )
      v42 = v40;
    if ( v42 && ScriptableCl_GetInstanceInUse(v7, InstanceIndex) && CG_CalloutMarkerPing_CheckSquadPingsForTarget(v7, 2047, InstanceIndex, -1) == 53 && (v43 = ScriptableCl_ObjectiveGet(v7, v37, &out_origin), (v44 = v43) != NULL) )
    {
      LUI_SetTableObjectiveStringsAndIcon(luaVM, v9, v43->description, v43->label, v43->icon, v43->background, v43->zOffset, -1);
      LUI_SetTableObjectiveFlags(luaVM, (const ObjectiveFlags *)v44);
      __asm { vxorps  xmm3, xmm3, xmm3; progress }
      LUI_SetTableObjectiveStatus(luaVM, (unsigned __int8)v44->state, NEUTRAL, *(float *)&_XMM3_8, NEUTRAL);
      LUI_BeginTable("locations", luaVM);
      v45 = 0;
      do
      {
        v46 = v45 + 1;
        LUI_BeginTable(v45 + 1, luaVM);
        if ( !v45 )
        {
          if ( InstanceIndex == -1 )
          {
            __asm
            {
              vmovss  xmm1, dword ptr [rsp+0B8h+out_origin]
              vcvtss2sd xmm1, xmm1, xmm1; value
            }
            LUI_SetTableNumber("x", *(long double *)&_XMM1, luaVM);
            __asm
            {
              vmovss  xmm1, dword ptr [rsp+0B8h+out_origin+4]
              vcvtss2sd xmm1, xmm1, xmm1; value
            }
            LUI_SetTableNumber("y", *(long double *)&_XMM1, luaVM);
            __asm
            {
              vmovss  xmm1, dword ptr [rsp+0B8h+out_origin+8]
              vcvtss2sd xmm1, xmm1, xmm1; value
            }
            LUI_SetTableNumber("z", _XMM1_8, luaVM);
          }
          else
          {
            LUI_SetTableInt("scriptableIndex", InstanceIndex, luaVM);
          }
        }
        LUI_EndTable(luaVM);
        ++v45;
      }
      while ( v46 < 8 );
    }
    else
    {
      v52 = (const char *)v9->GetLocalizedString((ClConfigStrings *)v9, 0);
      LUI_SetTableString("description", v52, luaVM);
      v53 = (const char *)v9->GetLocalizedString((ClConfigStrings *)v9, 0);
      LUI_SetTableString("label", v53, luaVM);
      LUI_SetTableInt("background", 1i64, luaVM);
      __asm { vxorpd  xmm1, xmm1, xmm1; value }
      LUI_SetTableNumber("zOffset", _XMM1_8, luaVM);
      LUI_SetTableInt("ownerClientNum", -1i64, luaVM);
      LUI_SetTableBool("showDistance", 0, luaVM);
      LUI_SetTableBool("pinned", 0, luaVM);
      LUI_SetTableBool("playIntro", 0, luaVM);
      LUI_SetTableBool("playOutro", 0, luaVM);
      LUI_SetTableBool("pulsate", 0, luaVM);
      LUI_SetTableBool("showProgress", 0, luaVM);
      LUI_SetTableBool("fadeDisabled", 0, luaVM);
      __asm { vxorps  xmm3, xmm3, xmm3; progress }
      LUI_SetTableObjectiveStatus(luaVM, 3, NEUTRAL, *(float *)&_XMM3_8, NEUTRAL);
      LUI_BeginTable("locations", luaVM);
      v54 = 0;
      do
      {
        v55 = v54 + 1;
        LUI_BeginTable(v54 + 1, luaVM);
        if ( !v54 )
        {
          __asm
          {
            vmovss  xmm1, dword ptr cs:?vec3_origin@@3Tvec3_t@@B; vec3_t const vec3_origin
            vcvtss2sd xmm1, xmm1, xmm1; value
          }
          LUI_SetTableNumber("x", *(long double *)&_XMM1, luaVM);
          __asm
          {
            vmovss  xmm1, dword ptr cs:?vec3_origin@@3Tvec3_t@@B+4; vec3_t const vec3_origin
            vcvtss2sd xmm1, xmm1, xmm1; value
          }
          LUI_SetTableNumber("y", *(long double *)&_XMM1, luaVM);
          __asm
          {
            vmovss  xmm1, dword ptr cs:?vec3_origin@@3Tvec3_t@@B+8; vec3_t const vec3_origin
            vcvtss2sd xmm1, xmm1, xmm1; value
          }
          LUI_SetTableNumber("z", _XMM1_8, luaVM);
        }
        LUI_EndTable(luaVM);
        ++v54;
      }
      while ( v55 < 8 );
    }
    LUI_EndTable(luaVM);
    j_lua_settable(LUI_luaVM, -3);
    ++v37;
  }
  while ( v37 < v62 );
  return 1i64;
}

/*
==============
LUI_LuaCall_Game_GetOffsetForHitmarker_impl
==============
*/
__int64 LUI_LuaCall_Game_GetOffsetForHitmarker_impl(lua_State *const luaVM)
{
  LocalClientNum_t ClientFromController; 
  const ScreenPlacement *ActivePlacement; 
  const LUIElement *CurrentRoot; 
  __int64 result; 
  vec3_t outOrg; 
  __int64 v46; 
  vec2_t outScreenPos; 
  vec3_t angles; 
  vec3_t forward; 
  dvec3_t worldPos; 
  char v51; 
  void *retaddr; 

  _RAX = &retaddr;
  v46 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
  }
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Game.GetOffsetForHitmarker( <controller> )");
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    goto LABEL_12;
  *(double *)&_XMM0 = lui_tonumber32(luaVM, 1);
  __asm { vcvttss2si ecx, xmm0; controllerIndex }
  ClientFromController = CL_Mgr_GetClientFromController(_ECX);
  _RDI = CG_GetLocalClientGlobals(ClientFromController);
  RefdefView_GetOrg(&_RDI->refdef.view, &outOrg);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+49DFCh]
    vmovss  dword ptr [rsp+0C8h+angles], xmm0
    vmovss  xmm1, dword ptr [rdi+49E00h]
    vmovss  dword ptr [rsp+0C8h+angles+4], xmm1
    vxorps  xmm0, xmm0, xmm0
    vmovss  dword ptr [rsp+0C8h+angles+8], xmm0
  }
  AngleVectors(&angles, &forward, NULL, NULL);
  __asm
  {
    vmovss  xmm3, cs:__real@40a00000
    vmulss  xmm1, xmm3, dword ptr [rsp+0C8h+forward]
    vaddss  xmm5, xmm1, dword ptr [rsp+0C8h+outOrg]
    vmulss  xmm0, xmm3, dword ptr [rsp+0C8h+forward+4]
    vaddss  xmm4, xmm0, dword ptr [rsp+0C8h+outOrg+4]
    vmulss  xmm2, xmm3, dword ptr [rsp+0C8h+forward+8]
    vaddss  xmm3, xmm2, dword ptr [rsp+0C8h+outOrg+8]
    vcvtss2sd xmm0, xmm5, xmm5
    vmovsd  qword ptr [rsp+0C8h+worldPos], xmm0
    vcvtss2sd xmm1, xmm4, xmm4
    vmovsd  qword ptr [rsp+0C8h+worldPos+8], xmm1
    vcvtss2sd xmm0, xmm3, xmm3
    vmovsd  qword ptr [rsp+0C8h+worldPos+10h], xmm0
  }
  ActivePlacement = ScrPlace_GetActivePlacement(ClientFromController);
  __asm
  {
    vmovss  xmm1, cs:__real@3f000000
    vmulss  xmm7, xmm1, dword ptr [rax+20h]
    vmulss  xmm8, xmm1, dword ptr [rax+24h]
  }
  CurrentRoot = LUI_CoD_GetCurrentRoot(luaVM);
  if ( !CurrentRoot && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_game.cpp", 855, ASSERT_TYPE_ASSERT, "(root)", (const char *)&queryFormat, "root") )
    __debugbreak();
  _RAX = LUI_GetRootData(CurrentRoot);
  __asm { vmovss  xmm6, dword ptr [rax+0F8h] }
  if ( !CG_WorldPosToScreenPosRealForScenePrecise(ClientFromController, ActivePlacement, &worldPos, 0, &outScreenPos) )
  {
    memset(&outOrg, 0, sizeof(outOrg));
LABEL_12:
    result = 0i64;
    goto LABEL_13;
  }
  j_lua_createtable(luaVM, 0, 2);
  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vdivss  xmm6, xmm0, xmm6
    vmovss  xmm1, dword ptr [rsp+0C8h+outScreenPos]
    vsubss  xmm2, xmm1, xmm7
    vmulss  xmm0, xmm2, xmm6
    vcvtss2sd xmm1, xmm0, xmm0; value
  }
  LUI_SetTableNumber("x", *(long double *)&_XMM1, LUI_luaVM);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+0C8h+outScreenPos+4]
    vsubss  xmm1, xmm0, xmm8
    vmulss  xmm2, xmm1, xmm6
    vcvtss2sd xmm1, xmm2, xmm2; value
  }
  LUI_SetTableNumber("y", *(long double *)&_XMM1, LUI_luaVM);
  memset(&outOrg, 0, sizeof(outOrg));
  result = 1i64;
LABEL_13:
  _R11 = &v51;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
  return result;
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
    _RAX = CG_Omnvar_GetData(ClientFromController, v7);
    v10 = _RAX;
    switch ( Def->type )
    {
      case OMNVAR_TYPE_BOOL:
        j_lua_pushboolean(luaVM, _RAX->current.enabled);
        result = 1i64;
        break;
      case OMNVAR_TYPE_FLOAT:
        __asm
        {
          vmovss  xmm1, dword ptr [rax+4]; jumptable 00000001424653D1 case 1
          vcvtss2sd xmm1, xmm1, xmm1; n
        }
        j_lua_pushnumber(luaVM, *(long double *)&_XMM1);
        result = 1i64;
        break;
      case OMNVAR_TYPE_INT:
        if ( !_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.h", 207, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
          __debugbreak();
        if ( Def->type != OMNVAR_TYPE_INT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.h", 208, ASSERT_TYPE_ASSERT, "(def->type == OMNVAR_TYPE_INT)", (const char *)&queryFormat, "def->type == OMNVAR_TYPE_INT") )
          __debugbreak();
        j_lua_pushinteger(luaVM, Def->minvalue + v10->current.integer);
        result = 1i64;
        break;
      case OMNVAR_TYPE_UINT:
        integer = _RAX->current.integer;
        if ( Def->userType == OMNVAR_USER_TYPE_BIT_FIELD && j_lua_gettop(luaVM) >= 3 )
        {
          v12 = lui_tointeger32(luaVM, 3);
          integer = ((1 << v12) & (unsigned int)integer) >> v12;
        }
        j_lua_pushinteger(luaVM, integer);
        result = 1i64;
        break;
      case OMNVAR_TYPE_TIME:
        Time = CG_Omnvar_GetTime(Def, _RAX, ClientFromController);
        j_lua_pushinteger(luaVM, Time);
        result = 1i64;
        break;
      case OMNVAR_TYPE_NCS_LUI:
        if ( !BG_Omnvar_GetNCString(Def, _RAX, (const char **)&outStringValue) )
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
  LocalClientNum_t ClientFromController; 
  int v5; 
  centity_t *Entity; 
  int clientNum; 
  centity_t *v10; 
  vec4_t color; 
  char clanTagBuf[16]; 
  char nameBuf[40]; 
  char dest[48]; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Game.GetPlayerDataForTacOpsMap( <controllerIndex>, <entityNum> )");
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    return 0i64;
  *(double *)&_XMM0 = lui_tonumber32(luaVM, 1);
  __asm { vcvttss2si ecx, xmm0; controllerIndex }
  ClientFromController = CL_Mgr_GetClientFromController(_ECX);
  v5 = lui_tointeger32(luaVM, 2);
  Entity = CG_GetEntity(ClientFromController, v5);
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
    v5 = clientNum - 1;
  }
  if ( v5 >= cls.maxClients )
    goto LABEL_12;
  __asm
  {
    vmovups xmm0, cs:__xmm@3f8000003f8000003f8000003f800000
    vmovups xmmword ptr [rsp+0B8h+color], xmm0
  }
  nameBuf[0] = 0;
  clanTagBuf[0] = 0;
  dest[0] = 0;
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( v5 < cls.maxClients || v5 >= (int)ComCharacterLimits::ms_gameData.m_characterCount )
  {
    if ( CL_GetClientNameAndClanTag(ClientFromController, v5, nameBuf, 0x24ui64, clanTagBuf, 0xCui64) )
    {
      Com_sprintf(dest, 0x30ui64, "%s%s", clanTagBuf, nameBuf);
    }
    else
    {
      Com_sprintf(dest, 0x30ui64, "?");
      Com_PrintWarning(13, "DEBUGGING SQUAD NAME ... localClientNum: %d, clientNum: %d\n", (unsigned int)ClientFromController, (unsigned int)v5);
    }
    LUI_CoD_GameMP_GetBrColorForClientNum(v5, &color);
  }
  else
  {
    v10 = CG_GetEntity(ClientFromController, v5);
    if ( CL_GetAgentName(ClientFromController, v5, v10->nextState.otherEntityNum, nameBuf, 0x24ui64) )
    {
      Com_sprintf(dest, 0x30ui64, (const char *)&queryFormat, nameBuf);
    }
    else
    {
      Com_sprintf(dest, 0x30ui64, "?");
      Com_PrintWarning(13, "DEBUGGING SQUAD NAME ... localClientNum: %d, clientNum: %d\n", (unsigned int)ClientFromController, (unsigned int)v5);
    }
    LUI_CoD_GameMP_GetBrColorForIndex(0, &color);
  }
  j_lua_createtable(luaVM, 0, 2);
  LUI_SetTableString((const char *)&stru_143C9A1A4, dest, luaVM);
  j_lua_createtable(luaVM, 0, 3);
  __asm
  {
    vmovss  xmm1, dword ptr [rsp+0B8h+color]
    vcvtss2sd xmm1, xmm1, xmm1; value
  }
  LUI_SetTableNumber("r", *(long double *)&_XMM1, luaVM);
  __asm
  {
    vmovss  xmm1, dword ptr [rsp+0B8h+color+4]
    vcvtss2sd xmm1, xmm1, xmm1; value
  }
  LUI_SetTableNumber("g", *(long double *)&_XMM1, luaVM);
  __asm
  {
    vmovss  xmm1, dword ptr [rsp+0B8h+color+8]
    vcvtss2sd xmm1, xmm1, xmm1; value
  }
  LUI_SetTableNumber("b", *(long double *)&_XMM1, luaVM);
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
  LocalClientNum_t ClientFromController; 
  bool v10; 
  ReticleDef *Reticle; 
  bool lockReticleToTag; 
  ReticleDef *v18; 
  char primaryAffectedByEMP; 
  ReticleDef *v25; 
  ReticleDef *v26; 
  int naturalFOV; 
  __int64 result; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, "USAGE: Game.GetPrimaryReticleData( <controller>, <isAltReticle> )");
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || j_lua_type(luaVM, 2) != 1 )
    return 0i64;
  __asm
  {
    vmovaps [rsp+78h+var_18], xmm6
    vmovaps [rsp+78h+var_28], xmm7
    vmovaps [rsp+78h+var_38], xmm8
    vmovaps [rsp+78h+var_48], xmm9
    vmovaps [rsp+78h+var_58], xmm10
  }
  *(double *)&_XMM0 = lui_tonumber32(luaVM, 1);
  __asm { vcvttss2si ecx, xmm0; controllerIndex }
  ClientFromController = CL_Mgr_GetClientFromController(_ECX);
  v10 = j_lua_toboolean(luaVM, 2) == 1;
  Reticle = GetReticle(ClientFromController, v10);
  if ( Reticle )
    lockReticleToTag = Reticle->lockReticleToTag;
  else
    lockReticleToTag = 0;
  _RAX = GetReticle(ClientFromController, v10);
  __asm { vxorps  xmm6, xmm6, xmm6 }
  if ( _RAX )
    __asm { vmovss  xmm10, dword ptr [rax+14h] }
  else
    __asm { vxorps  xmm10, xmm10, xmm10 }
  if ( GetReticle(ClientFromController, v10) )
    __asm { vmovss  xmm9, dword ptr [rax+1Ch] }
  else
    __asm { vmovss  xmm9, cs:__real@3f800000 }
  v18 = GetReticle(ClientFromController, v10);
  if ( v18 )
    primaryAffectedByEMP = v18->primaryAffectedByEMP;
  else
    primaryAffectedByEMP = 1;
  if ( GetReticle(ClientFromController, v10) )
    __asm { vmovss  xmm8, dword ptr [rax+38h] }
  else
    __asm { vxorps  xmm8, xmm8, xmm8 }
  if ( GetReticle(ClientFromController, v10) )
    __asm { vmovss  xmm7, dword ptr [rax+40h] }
  else
    __asm { vxorps  xmm7, xmm7, xmm7 }
  if ( GetReticle(ClientFromController, v10) )
    __asm { vmovss  xmm6, dword ptr [rax+44h] }
  v25 = GetReticle(ClientFromController, v10);
  if ( v25 && v25->scaleWithFOV )
  {
    j_lua_createtable(luaVM, 0, 8);
    v26 = GetReticle(ClientFromController, v10);
    if ( v26 )
      naturalFOV = v26->naturalFOV;
    else
      naturalFOV = 65;
    LUI_SetTableInt("naturalFOV", naturalFOV, LUI_luaVM);
  }
  else
  {
    j_lua_createtable(luaVM, 0, 7);
  }
  LUI_SetTableBool("lockedToTag", lockReticleToTag, LUI_luaVM);
  __asm { vcvtss2sd xmm1, xmm10, xmm10; value }
  LUI_SetTableNumber("tagOffset", *(long double *)&_XMM1, LUI_luaVM);
  __asm { vcvtss2sd xmm1, xmm9, xmm9; value }
  LUI_SetTableNumber("defaultScale", *(long double *)&_XMM1, LUI_luaVM);
  LUI_SetTableBool("affectedByEMP", primaryAffectedByEMP, LUI_luaVM);
  __asm { vcvtss2sd xmm1, xmm8, xmm8; value }
  LUI_SetTableNumber("naturalDistance", *(long double *)&_XMM1, LUI_luaVM);
  __asm { vcvtss2sd xmm1, xmm7, xmm7; value }
  LUI_SetTableNumber("minScale", *(long double *)&_XMM1, LUI_luaVM);
  __asm { vcvtss2sd xmm1, xmm6, xmm6; value }
  LUI_SetTableNumber("maxScale", *(long double *)&_XMM1, LUI_luaVM);
  __asm { vmovaps xmm10, [rsp+78h+var_58] }
  result = 1i64;
  __asm
  {
    vmovaps xmm9, [rsp+78h+var_48]
    vmovaps xmm8, [rsp+78h+var_38]
    vmovaps xmm7, [rsp+78h+var_28]
    vmovaps xmm6, [rsp+78h+var_18]
  }
  return result;
}

/*
==============
LUI_LuaCall_Game_GetSecondaryReticleData_impl
==============
*/
__int64 LUI_LuaCall_Game_GetSecondaryReticleData_impl(lua_State *const luaVM)
{
  LocalClientNum_t ClientFromController; 
  bool v10; 
  ReticleDef *Reticle; 
  bool secondaryLockReticleToTag; 
  ReticleDef *v18; 
  char secondaryAffectedByEMP; 
  __int64 result; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, "USAGE: Game.GetSecondaryReticleData( <controller>, <isAltReticle> )");
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || j_lua_type(luaVM, 2) != 1 )
    return 0i64;
  __asm
  {
    vmovaps [rsp+78h+var_18], xmm6
    vmovaps [rsp+78h+var_28], xmm7
    vmovaps [rsp+78h+var_38], xmm8
    vmovaps [rsp+78h+var_48], xmm9
    vmovaps [rsp+78h+var_58], xmm10
  }
  *(double *)&_XMM0 = lui_tonumber32(luaVM, 1);
  __asm { vcvttss2si ecx, xmm0; controllerIndex }
  ClientFromController = CL_Mgr_GetClientFromController(_ECX);
  v10 = j_lua_toboolean(luaVM, 2) == 1;
  Reticle = GetReticle(ClientFromController, v10);
  if ( Reticle )
    secondaryLockReticleToTag = Reticle->secondaryLockReticleToTag;
  else
    secondaryLockReticleToTag = 0;
  _RAX = GetReticle(ClientFromController, v10);
  __asm { vxorps  xmm6, xmm6, xmm6 }
  if ( _RAX )
    __asm { vmovss  xmm10, dword ptr [rax+34h] }
  else
    __asm { vxorps  xmm10, xmm10, xmm10 }
  if ( GetReticle(ClientFromController, v10) )
    __asm { vmovss  xmm9, dword ptr [rax+20h] }
  else
    __asm { vmovss  xmm9, cs:__real@3f800000 }
  v18 = GetReticle(ClientFromController, v10);
  if ( v18 )
    secondaryAffectedByEMP = v18->secondaryAffectedByEMP;
  else
    secondaryAffectedByEMP = 1;
  if ( GetReticle(ClientFromController, v10) )
    __asm { vmovss  xmm8, dword ptr [rax+38h] }
  else
    __asm { vxorps  xmm8, xmm8, xmm8 }
  if ( GetReticle(ClientFromController, v10) )
    __asm { vmovss  xmm7, dword ptr [rax+40h] }
  else
    __asm { vxorps  xmm7, xmm7, xmm7 }
  if ( GetReticle(ClientFromController, v10) )
    __asm { vmovss  xmm6, dword ptr [rax+44h] }
  j_lua_createtable(luaVM, 0, 7);
  LUI_SetTableBool("lockedToTag", secondaryLockReticleToTag, LUI_luaVM);
  __asm { vcvtss2sd xmm1, xmm10, xmm10; value }
  LUI_SetTableNumber("tagOffset", *(long double *)&_XMM1, LUI_luaVM);
  __asm { vcvtss2sd xmm1, xmm9, xmm9; value }
  LUI_SetTableNumber("defaultScale", *(long double *)&_XMM1, LUI_luaVM);
  LUI_SetTableBool("affectedByEMP", secondaryAffectedByEMP, LUI_luaVM);
  __asm { vcvtss2sd xmm1, xmm8, xmm8; value }
  LUI_SetTableNumber("naturalDistance", *(long double *)&_XMM1, LUI_luaVM);
  __asm { vcvtss2sd xmm1, xmm7, xmm7; value }
  LUI_SetTableNumber("minScale", *(long double *)&_XMM1, LUI_luaVM);
  __asm { vcvtss2sd xmm1, xmm6, xmm6; value }
  LUI_SetTableNumber("maxScale", *(long double *)&_XMM1, LUI_luaVM);
  __asm { vmovaps xmm10, [rsp+78h+var_58] }
  result = 1i64;
  __asm
  {
    vmovaps xmm9, [rsp+78h+var_48]
    vmovaps xmm8, [rsp+78h+var_38]
    vmovaps xmm7, [rsp+78h+var_28]
    vmovaps xmm6, [rsp+78h+var_18]
  }
  return result;
}

/*
==============
LUI_LuaCall_Game_GetTargetMarkerGroups_impl
==============
*/

__int64 __fastcall LUI_LuaCall_Game_GetTargetMarkerGroups_impl(lua_State *const luaVM, long double _XMM1_8)
{
  LocalClientNum_t ClientFromController; 
  __int64 v6; 
  cg_t *LocalClientGlobals; 
  TargetMarkerGroupView *targetMarkerGroups; 
  int v9; 
  __int64 v11; 
  int v12; 
  __int64 v16; 
  int v17; 
  __int64 v19; 
  int v20; 
  char *outName; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: Game.GetTargetMarkerGroups( controllerIndex )");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Game.GetTargetMarkerGroups( controllerIndex )");
  *(double *)&_XMM0 = lui_tonumber32(luaVM, 1);
  __asm { vcvttss2si ecx, xmm0; controllerIndex }
  ClientFromController = CL_Mgr_GetClientFromController(_ECX);
  v6 = 2i64;
  LocalClientGlobals = CG_GetLocalClientGlobals(ClientFromController);
  j_lua_createtable(luaVM, 2, 0);
  targetMarkerGroups = LocalClientGlobals->predictedPlayerState.targetMarkerGroups;
  v9 = 1;
  do
  {
    if ( (targetMarkerGroups->flags & 1) != 0 )
    {
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2sd xmm1, xmm1, r14d; n
      }
      j_lua_pushnumber(LUI_luaVM, _XMM1_8);
      j_lua_createtable(luaVM, 0, 4);
      if ( NetConstStrings_GetNameFromIndex(NETCONSTSTRINGTYPE_LUI, targetMarkerGroups->widgetName, (const char **)&outName) )
        LUI_SetTableString("widgetName", outName, luaVM);
      j_lua_createtable(luaVM, 0, 20);
      v11 = 0i64;
      v12 = 1;
      do
      {
        if ( targetMarkerGroups->entityNumbers[v11] != 2047 )
        {
          __asm
          {
            vxorps  xmm1, xmm1, xmm1
            vcvtsi2sd xmm1, xmm1, esi; n
          }
          j_lua_pushnumber(LUI_luaVM, *(long double *)&_XMM1);
          __asm
          {
            vxorps  xmm1, xmm1, xmm1
            vcvtsi2sd xmm1, xmm1, eax; n
          }
          j_lua_pushnumber(LUI_luaVM, _XMM1_8);
          j_lua_settable(LUI_luaVM, -3);
        }
        ++v12;
        ++v11;
      }
      while ( v11 < 20 );
      j_lua_setfield(luaVM, -2, "entityNumbers");
      j_lua_createtable(luaVM, 0, 20);
      v16 = 0i64;
      v17 = 1;
      do
      {
        if ( targetMarkerGroups->entityNumbers[v16] != 2047 )
        {
          __asm
          {
            vxorps  xmm1, xmm1, xmm1
            vcvtsi2sd xmm1, xmm1, esi; n
          }
          j_lua_pushnumber(LUI_luaVM, _XMM1_8);
          j_lua_pushboolean(LUI_luaVM, targetMarkerGroups->entityStates[v16]);
          j_lua_settable(LUI_luaVM, -3);
        }
        ++v17;
        ++v16;
      }
      while ( v16 < 20 );
      j_lua_setfield(luaVM, -2, "entityStates");
      j_lua_createtable(luaVM, 0, 20);
      v19 = 0i64;
      v20 = 1;
      do
      {
        if ( targetMarkerGroups->entityNumbers[v19] != 2047 )
        {
          __asm
          {
            vxorps  xmm1, xmm1, xmm1
            vcvtsi2sd xmm1, xmm1, esi; n
          }
          j_lua_pushnumber(LUI_luaVM, _XMM1_8);
          j_lua_pushboolean(LUI_luaVM, targetMarkerGroups->extraStates[v19]);
          j_lua_settable(LUI_luaVM, -3);
        }
        ++v20;
        ++v19;
      }
      while ( v19 < 20 );
      j_lua_setfield(luaVM, -2, "extraStates");
      j_lua_settable(LUI_luaVM, -3);
    }
    ++v9;
    ++targetMarkerGroups;
    --v6;
  }
  while ( v6 );
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
  LocalClientNum_t ClientFromController; 
  PlayerHandIndex PlayerHandIndexToUseForWidget; 
  const char *v15; 
  BOOL v16; 
  char v18; 
  cg_t *LocalClientGlobals; 
  const ScreenPlacement *ActivePlacement; 
  const LUIElement *CurrentRoot; 
  __int64 result; 
  vec3_t outOrg; 
  __int64 v82; 
  vec2_t outScreenPos; 
  dvec3_t outWorldPosition; 
  dvec3_t worldPos; 
  tmat33_t<vec3_t> outLocalAxis; 
  char v87; 
  void *retaddr; 

  _RAX = &retaddr;
  v82 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
    vmovaps xmmword ptr [rax-78h], xmm11
    vmovaps xmmword ptr [rax-88h], xmm12
  }
  if ( j_lua_gettop(luaVM) < 1 )
    j_luaL_error(luaVM, "USAGE: Game.GetViewModelTagScreenOffset( controllerIndex )");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Game.GetViewModelTagScreenOffset( controllerIndex )");
  *(double *)&_XMM0 = lui_tonumber32(luaVM, 1);
  __asm { vcvttss2si ecx, xmm0; controllerIndex }
  ClientFromController = CL_Mgr_GetClientFromController(_ECX);
  PlayerHandIndexToUseForWidget = LUI_GetPlayerHandIndexToUseForWidget(ClientFromController, 0);
  v15 = j_lua_tolstring(luaVM, 2, NULL);
  v16 = strcmp_0(v15, "tag_reticle_attach") == 0;
  if ( !LUI_GetViewModelTransform(ClientFromController, PlayerHandIndexToUseForWidget, v15, &outLocalAxis, &outWorldPosition) )
    goto LABEL_16;
  if ( j_lua_gettop(luaVM) == 3 )
  {
    *(double *)&_XMM0 = j_lua_tonumber(luaVM, 3);
    __asm
    {
      vxorpd  xmm1, xmm1, xmm1
      vucomisd xmm0, xmm1
    }
    if ( v18 )
      j_luaL_error(luaVM, "USAGE: Game.GetViewModelTagScreenOffset( controllerIndex, tagName, worldOffset )");
    *(double *)&_XMM0 = j_lua_tonumber(luaVM, 3);
    __asm { vcvtsd2ss xmm12, xmm0, xmm0 }
    LocalClientGlobals = CG_GetLocalClientGlobals(ClientFromController);
    RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+148h+outOrg]
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  xmm11, qword ptr [rsp+148h+var_F0]
      vsubsd  xmm8, xmm11, xmm0
      vmovss  xmm1, dword ptr [rsp+148h+outOrg+4]
      vcvtss2sd xmm1, xmm1, xmm1
      vmovsd  xmm10, qword ptr [rsp+148h+var_F0+8]
      vsubsd  xmm7, xmm10, xmm1
      vmovss  xmm0, dword ptr [rsp+148h+outOrg+8]
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  xmm9, qword ptr [rsp+148h+var_F0+10h]
      vsubsd  xmm6, xmm9, xmm0
      vmulsd  xmm1, xmm7, xmm7
      vmulsd  xmm0, xmm8, xmm8
      vaddsd  xmm2, xmm1, xmm0
      vmulsd  xmm1, xmm6, xmm6
      vaddsd  xmm2, xmm2, xmm1
      vsqrtsd xmm3, xmm2, xmm2
      vcmplesd xmm0, xmm3, cs:__real@8000000000000000
      vmovsd  xmm2, cs:__real@3ff0000000000000
      vblendvpd xmm1, xmm3, xmm2, xmm0
      vdivsd  xmm4, xmm2, xmm1
      vcvtss2sd xmm5, xmm12, xmm12
      vmulsd  xmm0, xmm8, xmm4
      vmulsd  xmm2, xmm0, xmm5
      vmulsd  xmm1, xmm7, xmm4
      vmulsd  xmm3, xmm1, xmm5
      vmulsd  xmm0, xmm6, xmm4
      vmulsd  xmm4, xmm0, xmm5
      vaddsd  xmm1, xmm2, xmm11
      vmovsd  qword ptr [rsp+148h+worldPos], xmm1
      vaddsd  xmm0, xmm3, xmm10
      vmovsd  qword ptr [rsp+148h+worldPos+8], xmm0
      vaddsd  xmm1, xmm4, xmm9
      vmovsd  qword ptr [rsp+148h+worldPos+10h], xmm1
    }
    memset(&outOrg, 0, sizeof(outOrg));
  }
  else
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rsp+148h+var_F0]
      vmovups xmmword ptr [rsp+148h+worldPos], xmm0
      vmovsd  xmm1, qword ptr [rsp+148h+var_F0+10h]
      vmovsd  qword ptr [rsp+148h+worldPos+10h], xmm1
    }
  }
  ActivePlacement = ScrPlace_GetActivePlacement(ClientFromController);
  __asm
  {
    vmovss  xmm1, cs:__real@3f000000
    vmulss  xmm7, xmm1, dword ptr [rax+20h]
    vmulss  xmm8, xmm1, dword ptr [rax+24h]
  }
  CurrentRoot = LUI_CoD_GetCurrentRoot(luaVM);
  if ( !CurrentRoot && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_game.cpp", 800, ASSERT_TYPE_ASSERT, "(root)", (const char *)&queryFormat, "root") )
    __debugbreak();
  _RAX = LUI_GetRootData(CurrentRoot);
  __asm { vmovss  xmm6, dword ptr [rax+0F8h] }
  if ( CG_WorldPosToScreenPosRealForScenePrecise(ClientFromController, ActivePlacement, &worldPos, v16, &outScreenPos) )
  {
    j_lua_createtable(luaVM, 0, 2);
    __asm
    {
      vmovss  xmm0, cs:__real@3f800000
      vdivss  xmm6, xmm0, xmm6
      vmovss  xmm1, dword ptr [rsp+148h+outScreenPos]
      vsubss  xmm2, xmm1, xmm7
      vmulss  xmm0, xmm2, xmm6
      vcvtss2sd xmm1, xmm0, xmm0; value
    }
    LUI_SetTableNumber("x", *(long double *)&_XMM1, LUI_luaVM);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+148h+outScreenPos+4]
      vsubss  xmm1, xmm0, xmm8
      vmulss  xmm2, xmm1, xmm6
      vcvtss2sd xmm1, xmm2, xmm2; value
    }
    LUI_SetTableNumber("y", *(long double *)&_XMM1, LUI_luaVM);
    result = 1i64;
  }
  else
  {
LABEL_16:
    result = 0i64;
  }
  _R11 = &v87;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
  }
  return result;
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

void __fastcall LUI_SetTableObjectiveStatus(lua_State *luaVM, int state, ObjectiveSide side, double progress, ObjectiveSide progressSide)
{
  const char *v10; 
  const char *v11; 

  __asm
  {
    vmovaps [rsp+38h+var_18], xmm6
    vmovaps xmm6, xmm3
  }
  LUI_SetTableInt("state", state, luaVM);
  __asm { vcvtss2sd xmm1, xmm6, xmm6; value }
  LUI_SetTableNumber("progress", *(long double *)&_XMM1, luaVM);
  v10 = "neutral";
  switch ( progressSide )
  {
    case FRIENDLY:
      v11 = "friendly";
      break;
    case ENEMY:
      v11 = "enemy";
      break;
    case IN_FLUX:
      v11 = "inFlux";
      break;
    default:
      v11 = "neutral";
      break;
  }
  LUI_SetTableString("progressSide", v11, luaVM);
  switch ( side )
  {
    case FRIENDLY:
      v10 = "friendly";
      break;
    case ENEMY:
      v10 = "enemy";
      break;
    case IN_FLUX:
      v10 = "inFlux";
      break;
  }
  __asm { vmovaps xmm6, [rsp+38h+var_18] }
  LUI_SetTableString("side", v10, luaVM);
}

/*
==============
LUI_SetTableObjectiveStringsAndIcon
==============
*/
void LUI_SetTableObjectiveStringsAndIcon(lua_State *luaVM, const ClConfigStrings *const cs, int descriptionIndex, int labelIndex, int iconIndex, ObjectiveBackground background, int zOffset, const int ownerClientNum)
{
  const char *v12; 
  const char *v13; 
  char *outName; 

  v12 = (const char *)cs->GetLocalizedString((ClConfigStrings *)cs, descriptionIndex);
  LUI_SetTableString("description", v12, luaVM);
  if ( iconIndex && NetConstStrings_GetNameFromIndexPlusOne(NETCONSTSTRINGTYPE_OBJECTIVEICON, iconIndex, (const char **)&outName) )
    LUI_SetTableString("icon", outName, luaVM);
  v13 = (const char *)cs->GetLocalizedString((ClConfigStrings *)cs, labelIndex);
  LUI_SetTableString("label", v13, luaVM);
  LUI_SetTableInt("background", (unsigned __int8)background, luaVM);
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2sd xmm1, xmm1, [rsp+28h+zOffset]; value
  }
  LUI_SetTableNumber("zOffset", *(long double *)&_XMM1, luaVM);
  LUI_SetTableInt("ownerClientNum", ownerClientNum, luaVM);
}

