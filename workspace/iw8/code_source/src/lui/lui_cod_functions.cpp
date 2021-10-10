/*
==============
LUI_CoD_FormatDuration
==============
*/

void __fastcall LUI_CoD_FormatDuration(const unsigned int durationInMS, unsigned __int64 bufferSize, char *const outBuffer, bool useLocalizedFormat)
{
  ?LUI_CoD_FormatDuration@@YAXI_KQEAD_N@Z(durationInMS, bufferSize, outBuffer, useLocalizedFormat);
}

/*
==============
LUI_CoD_RegisterMatchRulesFunctions
==============
*/

void __fastcall LUI_CoD_RegisterMatchRulesFunctions(lua_State *luaVM)
{
  ?LUI_CoD_RegisterMatchRulesFunctions@@YAXPEAUlua_State@@@Z(luaVM);
}

/*
==============
LUI_CoD_RegisterEngineFunctions
==============
*/

void __fastcall LUI_CoD_RegisterEngineFunctions(lua_State *luaVM)
{
  ?LUI_CoD_RegisterEngineFunctions@@YAXPEAUlua_State@@@Z(luaVM);
}

/*
==============
LUI_CoD_RegisterDebugFunctions
==============
*/

void __fastcall LUI_CoD_RegisterDebugFunctions(lua_State *luaVM)
{
  ?LUI_CoD_RegisterDebugFunctions@@YAXPEAUlua_State@@@Z(luaVM);
}

/*
==============
LUI_CoD_RegisterFriendsFunctions
==============
*/

void __fastcall LUI_CoD_RegisterFriendsFunctions(lua_State *luaVM)
{
  ?LUI_CoD_RegisterFriendsFunctions@@YAXPEAUlua_State@@@Z(luaVM);
}

/*
==============
LUI_CoD_RegisterDCacheFunctions
==============
*/

void __fastcall LUI_CoD_RegisterDCacheFunctions(lua_State *luaVM)
{
  ?LUI_CoD_RegisterDCacheFunctions@@YAXPEAUlua_State@@@Z(luaVM);
}

/*
==============
LUI_CoD_RegisterModules
==============
*/

void __fastcall LUI_CoD_RegisterModules(lua_State *luaVM)
{
  ?LUI_CoD_RegisterModules@@YAXPEAUlua_State@@@Z(luaVM);
}

/*
==============
LUI_GetDDL
==============
*/

int __fastcall LUI_GetDDL(lua_State *luaVM, const int nargs, const DDLDef *const def, const DDLContext *buffer, const StatsGroup statsGroup)
{
  return ?LUI_GetDDL@@YAHPEAUlua_State@@HQEBUDDLDef@@PEBUDDLContext@@W4StatsGroup@@@Z(luaVM, nargs, def, buffer, statsGroup);
}

/*
==============
LUI_CoD_RegisterLoadoutDraftingFunctions
==============
*/

void __fastcall LUI_CoD_RegisterLoadoutDraftingFunctions(lua_State *luaVM)
{
  ?LUI_CoD_RegisterLoadoutDraftingFunctions@@YAXPEAUlua_State@@@Z(luaVM);
}

/*
==============
LUI_CoD_FormatDuration
==============
*/

void __fastcall LUI_CoD_FormatDuration(const unsigned int durationInMS, unsigned __int64 bufferSize, char *const outBuffer, bool useLocalizedFormat, int showDecimalsAtTime, LUICountdownCustomFormatType customFormatType, const char *customFormat)
{
  ?LUI_CoD_FormatDuration@@YAXI_KQEAD_NHW4LUICountdownCustomFormatType@@PEBD@Z(durationInMS, bufferSize, outBuffer, useLocalizedFormat, showDecimalsAtTime, customFormatType, customFormat);
}

/*
==============
LUI_CoD_LuaCall_GetStoreData
==============
*/
__int64 LUI_CoD_LuaCall_GetStoreData(lua_State *const luaVM)
{
  bdObjectStoreObject *Object; 
  const unsigned __int8 *Content; 
  __int64 v4; 
  bool v5; 
  const char *v6; 
  unsigned int v7; 

  Object = (bdObjectStoreObject *)bdObjectStoreErrorWrappedObject::getObject(Online_Store::s_instance.m_responseObjects[0]);
  Content = bdObjectStoreObject::getContent(Object);
  if ( !Content )
    goto LABEL_5;
  v4 = -1i64;
  do
    ++v4;
  while ( Content[v4] );
  v5 = (_DWORD)v4 == 0;
  v6 = (const char *)Content;
  if ( v5 )
LABEL_5:
    v6 = (char *)&queryFormat.fmt + 3;
  j_lua_pushstring(LUI_luaVM, v6);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v7 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v7);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetCategoryData
==============
*/
__int64 LUI_CoD_LuaCall_GetCategoryData(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 
  int i; 
  bdObjectStoreObject *Object; 
  const char *Content; 
  __int64 v7; 
  unsigned int v10; 

  j_lua_createtable(luaVM, 0, 0);
  v2 = Online_Store::s_instance.m_responseCount[1];
  v3 = 0;
  for ( i = 1; v3 < v2; ++v3 )
  {
    Object = (bdObjectStoreObject *)bdObjectStoreErrorWrappedObject::getObject((bdObjectStoreErrorWrappedObject *)&Online_Store::s_instance.m_responseCount[882 * v3 - 17640]);
    Content = (const char *)bdObjectStoreObject::getContent(Object);
    if ( Content )
    {
      v7 = -1i64;
      do
        ++v7;
      while ( Content[v7] );
      if ( (_DWORD)v7 )
      {
        _XMM1 = 0i64;
        __asm { vcvtsi2sd xmm1, xmm1, esi; n }
        j_lua_pushnumber(LUI_luaVM, *(long double *)&_XMM1);
        j_lua_pushstring(LUI_luaVM, Content);
        j_lua_settable(LUI_luaVM, -3);
        ++i;
      }
    }
  }
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v10 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v10);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetLayoutData
==============
*/
__int64 LUI_CoD_LuaCall_GetLayoutData(lua_State *const luaVM)
{
  unsigned int v1; 
  unsigned int i; 
  bdObjectStoreObject *Object; 
  bdObjectStoreMetadata *Metadata; 
  bdObjectStoreObjectID *ObjectID; 
  const char *ObjectName; 
  bdObjectStoreObject *v8; 
  const unsigned __int8 *Content; 
  const char *v10; 
  __int64 v11; 
  __int64 v12; 
  unsigned int v13; 

  v1 = Online_Store::s_instance.m_responseCount[2];
  j_lua_createtable(luaVM, 0, 0);
  for ( i = 0; i < v1; ++i )
  {
    Object = (bdObjectStoreObject *)bdObjectStoreErrorWrappedObject::getObject((bdObjectStoreErrorWrappedObject *)&Online_Store::s_instance.m_responseCount[882 * i - 8820]);
    Metadata = (bdObjectStoreMetadata *)bdObjectStoreObject::getMetadata(Object);
    ObjectID = (bdObjectStoreObjectID *)bdObjectStoreMetadata::getObjectID(Metadata);
    ObjectName = bdObjectStoreObjectID::getObjectName(ObjectID);
    v8 = (bdObjectStoreObject *)bdObjectStoreErrorWrappedObject::getObject((bdObjectStoreErrorWrappedObject *)&Online_Store::s_instance.m_responseCount[882 * i - 8820]);
    Content = bdObjectStoreObject::getContent(v8);
    v10 = (const char *)Content;
    v11 = -1i64;
    do
      ++v11;
    while ( ObjectName[v11] );
    if ( (_DWORD)v11 )
    {
      if ( Content )
      {
        v12 = -1i64;
        do
          ++v12;
        while ( v10[v12] );
        if ( (_DWORD)v12 )
        {
          j_lua_pushstring(LUI_luaVM, ObjectName);
          j_lua_pushstring(LUI_luaVM, v10);
          j_lua_settable(LUI_luaVM, -3);
        }
      }
    }
  }
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v13 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v13);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_ShowGamerCard
==============
*/
__int64 LUI_CoD_LuaCall_ShowGamerCard(lua_State *luaVM)
{
  int v2; 
  XUID *v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isuserdata(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Lobby.ShowGamerCard( controllerIndex, xuid )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_isuserdata(luaVM, 2) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    v3 = (XUID *)j_lua_touserdata(luaVM, 2);
    UI_ShowGamerCard(v2, (XUID)v3->m_id);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_IsInfilTransientRequested
==============
*/
__int64 LUI_CoD_LuaCall_IsInfilTransientRequested(lua_State *const luaVM)
{
  unsigned int v2; 
  const char *v3; 
  int v4; 
  unsigned int v5; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isstring(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.IsInfilTransientRequested( filename )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isstring(luaVM, 1) )
  {
    v3 = j_lua_tolstring(luaVM, 1, NULL);
    if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_functions.cpp", 12548, ASSERT_TYPE_ASSERT, "(filename)", (const char *)&queryFormat, "filename") )
      __debugbreak();
    if ( !Com_GameMode_SupportsFeature(WEAPON_RELOADING|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_functions.cpp", 12550, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRANSIENT_INFILS ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRANSIENT_INFILS )") )
      __debugbreak();
    v4 = 0;
    if ( v3 && CL_TransientsInfilMP_IsRequestedByName(v3) )
      v4 = 1;
    j_lua_pushboolean(luaVM, v4);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v5);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_IsInfilTransientLoaded
==============
*/
__int64 LUI_CoD_LuaCall_IsInfilTransientLoaded(lua_State *const luaVM)
{
  unsigned int v2; 
  const char *v3; 
  int v4; 
  unsigned int v5; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isstring(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.IsInfilTransientLoaded( filename )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isstring(luaVM, 1) )
  {
    v3 = j_lua_tolstring(luaVM, 1, NULL);
    if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_functions.cpp", 12573, ASSERT_TYPE_ASSERT, "(filename)", (const char *)&queryFormat, "filename") )
      __debugbreak();
    if ( !Com_GameMode_SupportsFeature(WEAPON_RELOADING|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_functions.cpp", 12575, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRANSIENT_INFILS ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRANSIENT_INFILS )") )
      __debugbreak();
    v4 = 0;
    if ( v3 && CL_TransientsInfilMP_IsLoadedByName(v3) )
      v4 = 1;
    j_lua_pushboolean(luaVM, v4);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v5);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_IsPlayAgainAllowed
==============
*/
__int64 LUI_CoD_LuaCall_IsPlayAgainAllowed(lua_State *const luaVM)
{
  bool IsPlayAgainAllowed; 
  unsigned int v3; 

  IsPlayAgainAllowed = Com_FastFile_IsPlayAgainAllowed();
  j_lua_pushboolean(luaVM, IsPlayAgainAllowed);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_UserOwnsApp
==============
*/
__int64 LUI_CoD_LuaCall_UserOwnsApp(lua_State *const luaVM)
{
  unsigned int v2; 

  j_lua_pushboolean(luaVM, 1);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_AppIsInstalled
==============
*/
__int64 LUI_CoD_LuaCall_AppIsInstalled(lua_State *const luaVM)
{
  unsigned int v2; 

  j_lua_pushboolean(luaVM, 1);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_SetFocusChainInfo
==============
*/
__int64 LUI_CoD_LuaCall_SetFocusChainInfo(lua_State *const luaVM)
{
  const char *v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isstring(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Friends.SetFocusChainInfo( <focusChainString> )\n");
  if ( !j_lua_isstring(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isstring( luaVM, 1 )");
  v2 = j_lua_tolstring(luaVM, 1, NULL);
  if ( !v2 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "stringReference != NULL");
  LUI_CoD_SetFocusChainInfo(v2);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetSignInState
==============
*/

__int64 __fastcall LUI_CoD_LuaCall_GetSignInState(lua_State *const luaVM, double _XMM1_8)
{
  unsigned int v4; 

  __asm { vxorpd  xmm1, xmm1, xmm1; n }
  j_lua_pushnumber(luaVM, *(long double *)&_XMM1);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetBattleNetConnectionState
==============
*/

__int64 __fastcall LUI_CoD_LuaCall_GetBattleNetConnectionState(lua_State *const luaVM, double _XMM1_8)
{
  unsigned int v4; 

  __asm { vxorpd  xmm1, xmm1, xmm1; n }
  j_lua_pushnumber(luaVM, *(long double *)&_XMM1);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetSignInErrorString
==============
*/
__int64 LUI_CoD_LuaCall_GetSignInErrorString(lua_State *const luaVM)
{
  unsigned int v2; 

  j_lua_pushstring(luaVM, (const char *)&queryFormat.fmt + 3);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_ShouldShowLinkToPhoneInError
==============
*/
__int64 LUI_CoD_LuaCall_ShouldShowLinkToPhoneInError(lua_State *const luaVM)
{
  unsigned int v2; 

  j_lua_pushinteger(luaVM, 0i64);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_HasDisconnectedAfterSignin
==============
*/
__int64 LUI_CoD_LuaCall_HasDisconnectedAfterSignin(lua_State *const luaVM)
{
  unsigned int v2; 

  j_lua_pushboolean(luaVM, 0);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_UsingSplitscreenUpscaling
==============
*/
__int64 LUI_CoD_LuaCall_UsingSplitscreenUpscaling(lua_State *const luaVM)
{
  bool v2; 
  unsigned int v3; 

  v2 = LUI_CoD_UsingSplitscreenUpscaling();
  j_lua_pushboolean(luaVM, v2);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetBattleNetFenceState
==============
*/

__int64 __fastcall LUI_CoD_LuaCall_GetBattleNetFenceState(lua_State *const luaVM, double _XMM1_8)
{
  unsigned int v4; 

  __asm { vxorpd  xmm1, xmm1, xmm1; n }
  j_lua_pushnumber(luaVM, *(long double *)&_XMM1);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_SplitscreenPlayerCount
==============
*/
__int64 LUI_CoD_LuaCall_SplitscreenPlayerCount(lua_State *const luaVM)
{
  int LocalClientActiveCount; 
  unsigned int v3; 

  LocalClientActiveCount = CL_GetLocalClientActiveCount();
  j_lua_pushinteger(luaVM, LocalClientActiveCount);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_SetPresenceContext
==============
*/
__int64 LUI_CoD_LuaCall_SetPresenceContext(lua_State *const luaVM)
{
  int v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.SetPresenceContext( <presenceContext> )\n");
  v2 = lui_tointeger32(luaVM, 1);
  Social_SetPresenceContextForAllActiveClients(v2);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_ResetFontsPrecache
==============
*/
__int64 LUI_CoD_LuaCall_ResetFontsPrecache(lua_State *const luaVM)
{
  unsigned int v2; 

  LUI_CoD_ClearPreCachedFonts();
  FontCache_CancelPreCacheGlyphs();
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_PreCacheGlyphs
==============
*/
__int64 LUI_CoD_LuaCall_PreCacheGlyphs(lua_State *const luaVM)
{
  GfxFont *v2; 
  const char *v3; 
  const LUIElement *CurrentRoot; 
  int v7; 
  unsigned int v8; 

  if ( j_lua_gettop(luaVM) != 3 )
    j_luaL_error(luaVM, "USAGE: Engine.PreCacheGlyphs( font, size, text );");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.PreCacheGlyphs( font, size, text );");
  if ( !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Engine.PreCacheGlyphs( font, size, text );");
  if ( !j_lua_isstring(luaVM, 3) )
    j_luaL_error(luaVM, "USAGE: Engine.PreCacheGlyphs( font, size, text );");
  v2 = (GfxFont *)j_lua_touserdata(luaVM, 1);
  lui_tonumber32(luaVM, 2);
  v3 = j_lua_tolstring(luaVM, 3, NULL);
  CurrentRoot = LUI_CoD_GetCurrentRoot(luaVM);
  if ( !CurrentRoot && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_functions.cpp", 528, ASSERT_TYPE_ASSERT, "(root)", (const char *)&queryFormat, "root") )
    __debugbreak();
  LUI_GetRootData(CurrentRoot);
  _XMM0 = 0i64;
  __asm { vroundss xmm4, xmm0, xmm3, 1 }
  v7 = (int)*(float *)&_XMM4;
  if ( !LUI_CoD_IsFontPreCached(v2, (int)*(float *)&_XMM4) )
  {
    if ( !FontCache_PreCacheGlyphs(v2, v7, v3) )
      j_luaL_error(luaVM, "Error while precaching glyphs. Fontcache queue may be full.\n");
    LUI_CoD_MarkFontAsPreCached(v2, v7, luaVM);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v8 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v8);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_SetUIReadyToProcessInviteJoins
==============
*/
__int64 LUI_CoD_LuaCall_SetUIReadyToProcessInviteJoins(lua_State *const luaVM)
{
  unsigned int v2; 

  InviteJoinHSM::SetUIReadyToProcessInviteJoins(&g_invitationHSM, 1);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetOnlineFriendsCount
==============
*/
__int64 LUI_CoD_LuaCall_GetOnlineFriendsCount(lua_State *const luaVM)
{
  int v2; 
  Online_Friends *Instance; 
  signed int NumOnlineFriends; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Friends.GetOnlineFriendsCount( <controller> )\n");
  v2 = lui_tointeger32(luaVM, 1);
  Instance = Online_Friends::GetInstance();
  NumOnlineFriends = Online_Friends::GetNumOnlineFriends(Instance, v2);
  j_lua_pushinteger(luaVM, NumOnlineFriends);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v5);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetDetailedOnlineFriendsCount
==============
*/
__int64 LUI_CoD_LuaCall_GetDetailedOnlineFriendsCount(lua_State *const luaVM)
{
  int v2; 
  Online_Friends *Instance; 
  __int64 NumOnlineFriends; 
  OnlinePresenceNotifications *v5; 
  __int64 NumOnlineCrossplayFriends; 
  OnlinePresenceNotifications *v7; 
  __int64 NumOnlineUniqueFriends; 
  unsigned int v9; 
  unsigned int v10; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Friends.GetDetailedOnlineFriendsCount( <controllerIndex> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    Instance = Online_Friends::GetInstance();
    NumOnlineFriends = (int)Online_Friends::GetNumOnlineFriends(Instance, v2);
    v5 = OnlinePresenceNotifications::GetInstance();
    NumOnlineCrossplayFriends = (int)OnlinePresenceNotifications::GetNumOnlineCrossplayFriends(v5, v2);
    v7 = OnlinePresenceNotifications::GetInstance();
    NumOnlineUniqueFriends = (int)OnlinePresenceNotifications::GetNumOnlineUniqueFriends(v7, v2);
    j_lua_pushinteger(luaVM, NumOnlineFriends);
    j_lua_pushinteger(luaVM, NumOnlineCrossplayFriends);
    j_lua_pushinteger(luaVM, NumOnlineUniqueFriends);
    v9 = 3;
  }
  else
  {
    v9 = 0;
  }
  if ( (int)v9 > j_lua_gettop(luaVM) )
  {
    v10 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v9, v10);
  }
  return v9;
}

/*
==============
LUI_CoD_LuaCall_GetTimePlayed
==============
*/
__int64 LUI_CoD_LuaCall_GetTimePlayed(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_CoD_LuaCall_GetTimePlayed_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_CountPendingPlaystationInvites
==============
*/
__int64 LUI_CoD_LuaCall_CountPendingPlaystationInvites(lua_State *const luaVM)
{
  unsigned int v2; 

  j_lua_pushinteger(luaVM, 0i64);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetMixedFriendsData
==============
*/
__int64 LUI_CoD_LuaCall_GetMixedFriendsData(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_CoD_LuaCall_GetMixedFriendsData_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_ReportMemoryUsage
==============
*/
__int64 LUI_CoD_LuaCall_ReportMemoryUsage(lua_State *const luaVM)
{
  unsigned int v2; 

  LUI_ReportMemoryUsage();
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_IsControllerMissing
==============
*/
__int64 LUI_CoD_LuaCall_IsControllerMissing(lua_State *const luaVM)
{
  bool ShouldShowControllerRemovedPopup; 
  double v3; 
  unsigned int v4; 
  LocalClientNum_t outLocalClientNum; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: Engine.IsControllerMissing( <controller> )\n");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.IsControllerMissing( <controller> )\n");
  ShouldShowControllerRemovedPopup = 0;
  v3 = lui_tonumber32(luaVM, 1);
  outLocalClientNum = LOCAL_CLIENT_INVALID;
  if ( CL_Mgr_IsControllerMappedToClient((int)*(float *)&v3, &outLocalClientNum) )
  {
    if ( outLocalClientNum == LOCAL_CLIENT_INVALID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_functions.cpp", 736, ASSERT_TYPE_ASSERT, "(localClientNum != LOCAL_CLIENT_INVALID)", (const char *)&queryFormat, "localClientNum != LOCAL_CLIENT_INVALID") )
      __debugbreak();
    ShouldShowControllerRemovedPopup = UI_ShouldShowControllerRemovedPopup(outLocalClientNum);
  }
  j_lua_pushboolean(luaVM, ShouldShowControllerRemovedPopup);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_ShowControllerConnectedPopup
==============
*/
__int64 LUI_CoD_LuaCall_ShowControllerConnectedPopup(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: Engine.ShowControllerConnectedPopup( <controller> )\n");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.ShowControllerConnectedPopup( <controller> )\n");
  j_lua_pushboolean(luaVM, 0);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_DisableControllerConnectedPopup
==============
*/
__int64 LUI_CoD_LuaCall_DisableControllerConnectedPopup(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_IsWaitingForTransientFiles
==============
*/
__int64 LUI_CoD_LuaCall_IsWaitingForTransientFiles(lua_State *const luaVM)
{
  bool v2; 
  unsigned int v3; 

  v2 = CL_MainSP_ShowPopupWaitingForTransientFiles();
  j_lua_pushboolean(luaVM, v2);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_IsOnlineConnectivityDisabled
==============
*/
__int64 LUI_CoD_LuaCall_IsOnlineConnectivityDisabled(lua_State *const luaVM)
{
  const dvar_t *v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Engine.IsOnlineConnectivityDisabled()\n");
  v2 = DVARBOOL_force_offline_menus;
  if ( !DVARBOOL_force_offline_menus && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "force_offline_menus") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  j_lua_pushboolean(luaVM, v2->current.enabled);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_IsNetworkConnected
==============
*/
__int64 LUI_CoD_LuaCall_IsNetworkConnected(lua_State *const luaVM)
{
  bool HasNetConnection; 
  unsigned int v3; 

  HasNetConnection = Live_HasNetConnection();
  j_lua_pushboolean(luaVM, HasNetConnection);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_ShouldBeInOnlineArea
==============
*/
__int64 LUI_CoD_LuaCall_ShouldBeInOnlineArea(lua_State *const luaVM)
{
  const dvar_t *v2; 
  int v3; 
  int ControllerFromClient; 
  char State; 
  bool v6; 
  unsigned int v7; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Engine.ShouldBeInOnlineArea()\n");
  v2 = DVARBOOL_force_offline_menus;
  if ( !DVARBOOL_force_offline_menus && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "force_offline_menus") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled )
  {
    v3 = 0;
  }
  else
  {
    ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
    State = Live_OnlineServicesFence_GetState(ControllerFromClient);
    v6 = (unsigned __int8)Live_SyncOnlineDataFence_GetState(ControllerFromClient, 0) == 3;
    v3 = 0;
    if ( State == 3 && v6 )
      v3 = 1;
  }
  j_lua_pushboolean(luaVM, v3);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v7 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v7);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_IsSystemUiActive
==============
*/
__int64 LUI_CoD_LuaCall_IsSystemUiActive(lua_State *const luaVM)
{
  bool IsSystemUiActive; 
  unsigned int v3; 

  IsSystemUiActive = Live_IsSystemUiActive();
  j_lua_pushboolean(luaVM, IsSystemUiActive);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_IsAnyUserSignedIn
==============
*/
__int64 LUI_CoD_LuaCall_IsAnyUserSignedIn(lua_State *const luaVM)
{
  int v1; 
  int v3; 
  unsigned int v4; 

  v1 = 0;
  v3 = 0;
  while ( !Live_IsUserSignedIn(v3) )
  {
    if ( ++v3 >= 8 )
      goto LABEL_6;
  }
  v1 = 1;
LABEL_6:
  j_lua_pushboolean(luaVM, v1);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_AreRegulationsEnabled
==============
*/
__int64 LUI_CoD_LuaCall_AreRegulationsEnabled(lua_State *const luaVM)
{
  const dvar_t *v1; 
  unsigned int v3; 

  v1 = DVARBOOL_online_regulations_enabled;
  if ( !DVARBOOL_online_regulations_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_regulations_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  j_lua_pushboolean(luaVM, v1->current.color[0]);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_IsUserSignedIn
==============
*/
__int64 LUI_CoD_LuaCall_IsUserSignedIn(lua_State *const luaVM)
{
  double v2; 
  bool IsUserSignedIn; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: Engine.IsUserSignedIn( <controller> )\n");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.IsUserSignedIn( <controller> )\n");
  v2 = lui_tonumber32(luaVM, 1);
  IsUserSignedIn = Live_IsUserSignedIn((int)*(float *)&v2);
  j_lua_pushboolean(luaVM, IsUserSignedIn);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_IsUserSignedInToLive
==============
*/
__int64 LUI_CoD_LuaCall_IsUserSignedInToLive(lua_State *const luaVM)
{
  int v2; 
  double v3; 
  bool IsUserSignedInToLive; 
  unsigned int v5; 
  int controllerIndex; 
  LocalClientNum_t localClientNum; 

  if ( j_lua_gettop(luaVM) > 1 )
    j_luaL_error(luaVM, "USAGE: Engine.IsUserSignedInToLive( ?<controller> )\n");
  if ( j_lua_gettop(luaVM) && !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.IsUserSignedInToLive( ?<controller> )\n");
  if ( j_lua_gettop(luaVM) )
  {
    v3 = lui_tonumber32(luaVM, 1);
    v2 = (int)*(float *)&v3;
    controllerIndex = (int)*(float *)&v3;
  }
  else
  {
    LUI_CoD_AttemptInferLocalClientAndController(&localClientNum, &controllerIndex);
    v2 = controllerIndex;
  }
  IsUserSignedInToLive = Live_IsUserSignedInToLive(v2);
  j_lua_pushboolean(luaVM, IsUserSignedInToLive);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v5);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_IsUserSignedInToDemonware
==============
*/
__int64 LUI_CoD_LuaCall_IsUserSignedInToDemonware(lua_State *const luaVM)
{
  int v2; 
  double v3; 
  bool IsUserSignedInToDemonware; 
  unsigned int v5; 
  int controllerIndex; 
  LocalClientNum_t localClientNum; 

  if ( j_lua_gettop(luaVM) > 1 )
    j_luaL_error(luaVM, "USAGE: Engine.IsUserSignedInToDemonware( ?<controller> )\n");
  if ( j_lua_gettop(luaVM) && !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.IsUserSignedInToDemonware( ?<controller> )\n");
  if ( j_lua_gettop(luaVM) )
  {
    v3 = lui_tonumber32(luaVM, 1);
    v2 = (int)*(float *)&v3;
    controllerIndex = (int)*(float *)&v3;
  }
  else
  {
    LUI_CoD_AttemptInferLocalClientAndController(&localClientNum, &controllerIndex);
    v2 = controllerIndex;
  }
  IsUserSignedInToDemonware = Live_IsUserSignedInToDemonware(v2);
  j_lua_pushboolean(luaVM, IsUserSignedInToDemonware);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v5);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_DoWeHaveOnlineStats
==============
*/
__int64 LUI_CoD_LuaCall_DoWeHaveOnlineStats(lua_State *const luaVM)
{
  double v2; 
  bool HaveStatsForSource; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: Engine.DoWeHaveOnlineStats( ?<controller> )\n");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.DoWeHaveOnlineStats( ?<controller> )\n");
  v2 = lui_tonumber32(luaVM, 1);
  HaveStatsForSource = LiveStorage_DoWeHaveStatsForSource((int)*(float *)&v2, STATS_ONLINE);
  j_lua_pushboolean(luaVM, HaveStatsForSource);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_DoWeHaveStatsForActiveSource
==============
*/
__int64 LUI_CoD_LuaCall_DoWeHaveStatsForActiveSource(lua_State *const luaVM)
{
  unsigned int v2; 
  double v3; 
  StatsSource ActiveStatsSource; 
  bool HaveStatsForSource; 
  unsigned int v6; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.DoWeHaveStatsForActiveSource( ?<controller> )\n");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v3 = lui_tonumber32(luaVM, 1);
    ActiveStatsSource = LiveStorage_GetActiveStatsSource((int)*(float *)&v3);
    HaveStatsForSource = LiveStorage_DoWeHaveStatsForSource((int)*(float *)&v3, ActiveStatsSource);
    j_lua_pushboolean(luaVM, HaveStatsForSource);
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
LUI_CoD_LuaCall_IsUserSignedInForCommerce
==============
*/
__int64 LUI_CoD_LuaCall_IsUserSignedInForCommerce(lua_State *const luaVM)
{
  double v2; 
  int v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: Engine.IsUserSignedInForCommerce( <controller> )\n");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.IsUserSignedInForCommerce( <controller> )\n");
  v2 = lui_tonumber32(luaVM, 1);
  v3 = Live_HasNetConnection() && Live_IsUserSignedInToLive((int)*(float *)&v2);
  j_lua_pushboolean(luaVM, v3);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_IsUserAGuest
==============
*/
__int64 LUI_CoD_LuaCall_IsUserAGuest(lua_State *const luaVM)
{
  double v2; 
  bool IsGuest; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: Engine.IsUserAGuest( <controller> )\n");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.IsUserAGuest( <controller> )\n");
  v2 = lui_tonumber32(luaVM, 1);
  IsGuest = Live_UserIsGuest((int)*(float *)&v2);
  j_lua_pushboolean(luaVM, IsGuest);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetFriendsData
==============
*/
__int64 LUI_CoD_LuaCall_GetFriendsData(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_CoD_LuaCall_GetFriendsData_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_IsProfileSignedIn
==============
*/
__int64 LUI_CoD_LuaCall_IsProfileSignedIn(lua_State *const luaVM)
{
  double v2; 
  bool IsProfileLoggedIn; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: Engine.IsProfileSignedIn( <controller> )\n");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.IsProfileSignedIn( <controller> )\n");
  v2 = lui_tonumber32(luaVM, 1);
  IsProfileLoggedIn = GamerProfile_IsProfileLoggedIn((int)*(float *)&v2);
  j_lua_pushboolean(luaVM, IsProfileLoggedIn);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_UserCanPlayOnline
==============
*/
__int64 LUI_CoD_LuaCall_UserCanPlayOnline(lua_State *const luaVM)
{
  double v2; 
  bool CanUserPlayOnline; 
  unsigned int v4; 
  OnlinePlayFailureReason failureReason; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: Engine.UserCanPlayOnline( <controller> )\n");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.UserCanPlayOnline( <controller> )\n");
  v2 = lui_tonumber32(luaVM, 1);
  CanUserPlayOnline = Live_CanUserPlayOnline((int)*(float *)&v2, &failureReason);
  j_lua_pushboolean(luaVM, CanUserPlayOnline);
  j_lua_pushinteger(luaVM, failureReason);
  if ( j_lua_gettop(luaVM) < 2 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 2i64, v4);
  }
  return 2i64;
}

/*
==============
LUI_CoD_LuaCall_HasOnlineServiceSubscription
==============
*/
__int64 LUI_CoD_LuaCall_HasOnlineServiceSubscription(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.HasOnlineServiceSubscription( <controller> )");
  if ( j_lua_gettop(luaVM) == 1 )
    j_lua_isnumber(luaVM, 1);
  j_lua_pushboolean(luaVM, 1);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_DoWeHaveOnlineSubscriptionInformation
==============
*/
__int64 LUI_CoD_LuaCall_DoWeHaveOnlineSubscriptionInformation(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.DoWeHaveOnlineSubscriptionInformation( <controller> )");
  if ( j_lua_gettop(luaVM) == 1 )
    j_lua_isnumber(luaVM, 1);
  j_lua_pushboolean(luaVM, 1);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_UserIsGuest
==============
*/
__int64 LUI_CoD_LuaCall_UserIsGuest(lua_State *const luaVM)
{
  double v2; 
  bool IsGuest; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: Engine.UserIsGuest( <controller> )\n");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.UserIsGuest( <controller> )\n");
  v2 = lui_tonumber32(luaVM, 1);
  IsGuest = Live_UserIsGuest((int)*(float *)&v2);
  j_lua_pushboolean(luaVM, IsGuest);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_UserIsAgeRestricted
==============
*/
__int64 LUI_CoD_LuaCall_UserIsAgeRestricted(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: Engine.UserIsAgeRestricted( <controller> )\n");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.UserIsAgeRestricted( <controller> )\n");
  lui_tonumber32(luaVM, 1);
  j_lua_pushboolean(luaVM, 0);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_CancelConnecting
==============
*/
__int64 LUI_CoD_LuaCall_CancelConnecting(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Engine.CancelConnecting()");
  if ( !j_lua_gettop(luaVM) )
    Live_CancelConnecting();
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_AllSplitscreenProfilesSignedIn
==============
*/
__int64 LUI_CoD_LuaCall_AllSplitscreenProfilesSignedIn(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_functions.cpp", 1370, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Deprecated function.") )
    __debugbreak();
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_IsInDemonwareQueue
==============
*/
__int64 LUI_CoD_LuaCall_IsInDemonwareQueue(lua_State *const luaVM)
{
  bool v2; 
  double v3; 
  unsigned int v4; 

  v2 = 0;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.IsInDemonwareQueue( <controllerIndex> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v3 = lui_tonumber32(luaVM, 1);
    v2 = Live_IsInQueue((int)*(float *)&v3);
  }
  j_lua_pushboolean(luaVM, v2);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetDefaultExpandedSocialMenuList
==============
*/
__int64 LUI_CoD_LuaCall_GetDefaultExpandedSocialMenuList(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_CoD_LuaCall_GetDefaultExpandedSocialMenuList_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_GetDemonwareQueueWaitTimeSecs
==============
*/

__int64 __fastcall LUI_CoD_LuaCall_GetDemonwareQueueWaitTimeSecs(lua_State *const luaVM, double _XMM1_8)
{
  unsigned int v3; 
  double v4; 
  unsigned int v7; 

  v3 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.GetDemonwareQueueWaitTimeSecs( <controllerIndex> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v4 = lui_tonumber32(luaVM, 1);
    if ( Live_IsInQueue((int)*(float *)&v4) )
    {
      Live_GetQueueWaitTimeSecs((int)*(float *)&v4);
      _XMM1 = 0i64;
      __asm { vcvtsi2sd xmm1, xmm1, eax; n }
    }
    else
    {
      __asm { vxorpd  xmm1, xmm1, xmm1; n }
    }
    j_lua_pushnumber(luaVM, *(long double *)&_XMM1);
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
LUI_CoD_LuaCall_GetWhisperableFriendsNames
==============
*/
__int64 LUI_CoD_LuaCall_GetWhisperableFriendsNames(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_CoD_LuaCall_GetWhisperableFriendsNames_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_UserWithoutOfflineProfile
==============
*/
__int64 LUI_CoD_LuaCall_UserWithoutOfflineProfile(lua_State *const luaVM)
{
  int i; 
  const char *UsernameForLocalClient; 
  const char *v4; 
  unsigned int v5; 
  char str[1024]; 
  char dest[1024]; 

  memset_0(str, 0, sizeof(str));
  for ( i = 0; i < 8; ++i )
  {
    if ( CL_Mgr_IsControllerMappedToClient(i, NULL) )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_functions.cpp", 1433, ASSERT_TYPE_ASSERT, "(false)", (const char *)&queryFormat, "false") )
        __debugbreak();
      UsernameForLocalClient = CL_GetUsernameForLocalClient(i);
      Com_sprintf<1024>((char (*)[1024])dest, aMenuProfileWar, UsernameForLocalClient);
      v4 = SEH_LocalizeTextMessage(dest, "ui string", LOCMSG_NOERR);
      Core_strcpy(str, 0x400ui64, v4);
    }
  }
  j_lua_pushstring(luaVM, str);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v5);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetDefaultSensitivityIndex
==============
*/
__int64 LUI_CoD_LuaCall_GetDefaultSensitivityIndex(lua_State *const luaVM)
{
  int DefaultSensitivityIndex; 
  unsigned int v3; 

  DefaultSensitivityIndex = GamerProfile_GetDefaultSensitivityIndex();
  j_lua_pushinteger(luaVM, DefaultSensitivityIndex);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetHorizontalSensitivityIndex
==============
*/
__int64 LUI_CoD_LuaCall_GetHorizontalSensitivityIndex(lua_State *const luaVM)
{
  unsigned int v2; 
  double v3; 
  int HorizontalSensitivityIndex; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: Engine.GetHorizontalSensitivity( <controllerIndex> )");
  if ( j_lua_gettop(luaVM) == 1 )
  {
    v2 = 1;
    v3 = lui_tonumber32(luaVM, 1);
    HorizontalSensitivityIndex = GamerProfile_GetHorizontalSensitivityIndex((int)*(float *)&v3);
    j_lua_pushinteger(luaVM, HorizontalSensitivityIndex);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v5);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_IsPlatformFriend
==============
*/
__int64 LUI_CoD_LuaCall_IsPlatformFriend(lua_State *const luaVM)
{
  unsigned int v2; 
  int v3; 
  const char *v4; 
  __int64 v5; 
  Online_Friends *Instance; 
  int Index; 
  Online_Friends *v8; 
  unsigned int v9; 
  XUID result; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 3 || !j_lua_isnumber(luaVM, 1) || !j_lua_isstring(luaVM, 2) || !j_lua_isstring(luaVM, 3) )
    j_luaL_error(luaVM, "USAGE: Friends.IsPlatformFriend( <controllerIndex>, <xuidString>, <platformIdString> )");
  if ( j_lua_gettop(luaVM) == 3 && j_lua_isnumber(luaVM, 1) && j_lua_isstring(luaVM, 2) && j_lua_isstring(luaVM, 3) )
  {
    v3 = lui_tointeger32(luaVM, 1);
    LUI_ToXUID(&result, luaVM, 2);
    v4 = j_lua_tolstring(luaVM, 3, NULL);
    v5 = I_atoi64(v4);
    Instance = Online_Friends::GetInstance();
    Index = Online_Friends::FindIndex(Instance, v3, result);
    if ( Index == -1 )
    {
      v8 = Online_Friends::GetInstance();
      Index = Online_Friends::FindIndexByPlatformId(v8, v3, v5);
    }
    j_lua_pushboolean(luaVM, Index != -1);
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
LUI_CoD_LuaCall_SetHorizontalSensitivity
==============
*/
__int64 LUI_CoD_LuaCall_SetHorizontalSensitivity(lua_State *const luaVM)
{
  double v2; 
  int v3; 
  double v4; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, "USAGE: Engine.SetHorizontalSensitivity( <controllerIndex>, <sensitivityIndex> )");
  if ( j_lua_gettop(luaVM) == 2 )
  {
    v2 = lui_tonumber32(luaVM, 1);
    v3 = (int)*(float *)&v2;
    v4 = lui_tonumber32(luaVM, 2);
    GamerProfile_SetHorizontalSensitivity(v3, (int)*(float *)&v4);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_IsCrossplayFriend
==============
*/
__int64 LUI_CoD_LuaCall_IsCrossplayFriend(lua_State *const luaVM)
{
  unsigned int v2; 
  int v3; 
  Online_Friends *Instance; 
  int Index; 
  unsigned int v6; 
  XUID result; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isstring(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Friends.IsCrossplayFriend( <controllerIndex>, <xuidString> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_isstring(luaVM, 2) )
  {
    v3 = lui_tointeger32(luaVM, 1);
    LUI_ToXUID(&result, luaVM, 2);
    Instance = Online_Friends::GetInstance();
    Index = Online_Friends::Crossplay_FindIndex(Instance, v3, result);
    j_lua_pushboolean(luaVM, Index != -1);
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
LUI_CoD_LuaCall_GetVerticalSensitivityIndex
==============
*/
__int64 LUI_CoD_LuaCall_GetVerticalSensitivityIndex(lua_State *const luaVM)
{
  unsigned int v2; 
  double v3; 
  int VerticalSensitivityIndex; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: Engine.GetVerticalSensitivity( <controllerIndex> )");
  if ( j_lua_gettop(luaVM) == 1 )
  {
    v2 = 1;
    v3 = lui_tonumber32(luaVM, 1);
    VerticalSensitivityIndex = GamerProfile_GetVerticalSensitivityIndex((int)*(float *)&v3);
    j_lua_pushinteger(luaVM, VerticalSensitivityIndex);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v5);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_GetFriendDetails
==============
*/
__int64 LUI_CoD_LuaCall_GetFriendDetails(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_CoD_LuaCall_GetFriendDetails_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_SetVerticalSensitivity
==============
*/
__int64 LUI_CoD_LuaCall_SetVerticalSensitivity(lua_State *const luaVM)
{
  double v2; 
  int v3; 
  double v4; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, "USAGE: Engine.SetVerticalSensitivity( <controllerIndex>, <sensitivityIndex> )");
  if ( j_lua_gettop(luaVM) == 2 )
  {
    v2 = lui_tonumber32(luaVM, 1);
    v3 = (int)*(float *)&v2;
    v4 = lui_tonumber32(luaVM, 2);
    GamerProfile_SetVerticalSensitivity(v3, (int)*(float *)&v4);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetHitMarkerSoundAlias
==============
*/
__int64 LUI_CoD_LuaCall_GetHitMarkerSoundAlias(lua_State *const luaVM)
{
  unsigned int v2; 
  double v3; 
  const char *HitMarkerAlias; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: Engine.GetHitMarkerSoundAlias( <controllerIndex> )");
  if ( j_lua_gettop(luaVM) == 1 )
  {
    v2 = 1;
    v3 = lui_tonumber32(luaVM, 1);
    HitMarkerAlias = GamerProfile_GetHitMarkerAlias((int)*(float *)&v3);
    j_lua_pushstring(luaVM, HitMarkerAlias);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v5);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_SetHitMarkerSoundAlias
==============
*/
__int64 LUI_CoD_LuaCall_SetHitMarkerSoundAlias(lua_State *const luaVM)
{
  double v2; 
  const char *v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, "USAGE: Engine.SetHitMarkerSoundAlias( <controllerIndex>, <soundAlias> )");
  if ( j_lua_gettop(luaVM) == 2 )
  {
    v2 = lui_tonumber32(luaVM, 1);
    v3 = j_lua_tolstring(luaVM, 2, NULL);
    GamerProfile_SetHitMarkerAlias((int)*(float *)&v2, v3);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetProfileData
==============
*/
__int64 LUI_CoD_LuaCall_GetProfileData(lua_State *const luaVM)
{
  int v2; 
  unsigned int v3; 
  const char *v4; 
  double v5; 
  int v6; 
  __int128 v7; 
  __int64 v8; 
  unsigned int v13; 
  GamerProfileData result; 
  int controllerIndex; 
  LocalClientNum_t localClientNum; 

  v2 = j_lua_gettop(luaVM);
  if ( v2 < 1 )
    j_luaL_error(luaVM, "USAGE: Engine.GetProfileData( <string>, ?<controller> )");
  v3 = 1;
  if ( !j_lua_isstring(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.GetProfileData( <string>, ?<controller> )");
  v4 = j_lua_tolstring(luaVM, 1, NULL);
  if ( v2 <= 1 )
  {
    LUI_CoD_AttemptInferLocalClientAndController(&localClientNum, &controllerIndex);
    v6 = controllerIndex;
  }
  else
  {
    if ( !j_lua_isnumber(luaVM, 2) )
      j_luaL_error(luaVM, "USAGE: Engine.GetProfileData( <string>, ?<controller> )");
    v5 = lui_tonumber32(luaVM, 2);
    v6 = (int)*(float *)&v5;
    controllerIndex = (int)*(float *)&v5;
  }
  v7 = (__int128)*GamerProfile_GetDataByName(&result, v6, v4);
  LODWORD(v8) = v7;
  switch ( (int)v7 )
  {
    case 1:
    case 3:
      _XMM1 = 0i64;
      __asm { vcvtsi2sd xmm1, xmm1, eax; n }
      j_lua_pushnumber(luaVM, *(long double *)&_XMM1);
      break;
    case 2:
      j_lua_pushboolean(luaVM, BYTE8(v7));
      break;
    case 4:
    case 8:
      _XMM1 = 0i64;
      __asm { vcvtsi2sd xmm1, xmm1, dword ptr [rsp+58h+str+8]; n }
      j_lua_pushnumber(luaVM, *(long double *)&_XMM1);
      break;
    case 5:
      j_lua_pushnumber(luaVM, *((float *)&v7 + 2));
      break;
    case 6:
      j_lua_pushstring(luaVM, *((const char **)&v7 + 1));
      break;
    default:
      v3 = 0;
      Com_PrintError(13, "Error: Engine.GetProfileData cannot get field '%s' from profile, type = %d\n", v4, v8);
      break;
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
LUI_CoD_LuaCall_XUIDToString
==============
*/
__int64 LUI_CoD_LuaCall_XUIDToString(lua_State *const luaVM)
{
  unsigned int v2; 
  const XUID *v3; 
  unsigned int v4; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Friends.XUIDToString( xuidUserData )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isuserdata(luaVM, 1) )
  {
    v3 = (const XUID *)j_lua_touserdata(luaVM, 1);
    LUI_PushXUID(luaVM, (const XUID)v3->m_id);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v4);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_SetProfileData
==============
*/
__int64 LUI_CoD_LuaCall_SetProfileData(lua_State *const luaVM)
{
  int v2; 
  const char *v3; 
  double v4; 
  float v5; 
  double v6; 
  int v7; 
  unsigned int v8; 
  int controllerIndex; 
  LocalClientNum_t localClientNum; 

  v2 = j_lua_gettop(luaVM);
  if ( v2 < 2 )
    j_luaL_error(luaVM, "USAGE: Engine.SetProfileData( <optionName>, <newValue>, ?<controllerIndex> )");
  if ( !j_lua_isstring(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.SetProfileData( <optionName>, <newValue>, ?<controllerIndex> )");
  if ( !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Engine.SetProfileData( <optionName>, <newValue>, ?<controllerIndex> )");
  v3 = j_lua_tolstring(luaVM, 1, NULL);
  v4 = lui_tonumber32(luaVM, 2);
  v5 = *(float *)&v4;
  if ( v2 <= 2 )
  {
    LUI_CoD_AttemptInferLocalClientAndController(&localClientNum, &controllerIndex);
    v7 = controllerIndex;
  }
  else
  {
    if ( !j_lua_isnumber(luaVM, 3) )
      j_luaL_error(luaVM, "USAGE: Engine.SetProfileData( <optionName>, <newValue>, ?<controllerIndex> )");
    v6 = lui_tonumber32(luaVM, 3);
    v7 = (int)*(float *)&v6;
    controllerIndex = (int)*(float *)&v6;
  }
  GamerProfile_SetDataByName(v7, v3, v5);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v8 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v8);
  }
  return 0i64;
}

/*
==============
LUI_COD_LuaCall_XUIDFromString
==============
*/
__int64 LUI_COD_LuaCall_XUIDFromString(lua_State *const luaVM)
{
  unsigned int v2; 
  XUID *v3; 
  unsigned int v4; 
  XUID result; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isstring(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.XUIDFromString( <xuidString> )\n");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isstring(luaVM, 1) )
  {
    LUI_ToXUID(&result, luaVM, 1);
    v3 = (XUID *)j_lua_newuserdata(luaVM, 8ui64);
    XUID::operator=(v3, &result);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v4);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_ResetProfileData
==============
*/
__int64 LUI_CoD_LuaCall_ResetProfileData(lua_State *const luaVM)
{
  int v2; 
  const char *v3; 
  double v4; 
  int v5; 
  unsigned int v6; 
  int controllerIndex; 
  LocalClientNum_t localClientNum; 

  v2 = j_lua_gettop(luaVM);
  if ( v2 < 1 )
    j_luaL_error(luaVM, "USAGE: Engine.ResetProfileData( <optionName>, ?<controllerIndex> )");
  if ( !j_lua_isstring(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.ResetProfileData( <optionName>, ?<controllerIndex> )");
  v3 = j_lua_tolstring(luaVM, 1, NULL);
  if ( v2 <= 1 )
  {
    LUI_CoD_AttemptInferLocalClientAndController(&localClientNum, &controllerIndex);
    v5 = controllerIndex;
  }
  else
  {
    if ( !j_lua_isnumber(luaVM, 2) )
      j_luaL_error(luaVM, "USAGE: Engine.SetProfileData( <optionName> ?<controllerIndex> )");
    v4 = lui_tonumber32(luaVM, 2);
    v5 = (int)*(float *)&v4;
    controllerIndex = (int)*(float *)&v4;
  }
  GamerProfile_ResetDataByName(v5, v3);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v6);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetPrivatePartyNumSlots
==============
*/
__int64 LUI_CoD_LuaCall_GetPrivatePartyNumSlots(lua_State *const luaVM)
{
  int NumGameSlots; 
  unsigned int v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Friends.GetPrivatePartyNumSlots()");
  if ( j_lua_gettop(luaVM) )
  {
    v3 = 0;
  }
  else
  {
    NumGameSlots = Party_GetNumGameSlots(&g_partyData);
    j_lua_pushinteger(luaVM, NumGameSlots);
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
LUI_CoD_LuaCall_ResetAllGameOptions
==============
*/
__int64 LUI_CoD_LuaCall_ResetAllGameOptions(lua_State *const luaVM)
{
  int v2; 
  double v3; 
  LocalClientNum_t ClientFromController; 
  unsigned int v5; 

  v2 = j_lua_gettop(luaVM);
  if ( j_lua_gettop(luaVM) < 1 )
    j_luaL_error(luaVM, "USAGE: Engine.ResetAllGameOptions( <controllerIndex> )");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.ResetAllGameOptions( <controllerIndex> )");
  if ( v2 > 0 )
  {
    v3 = lui_tonumber32(luaVM, 1);
    ClientFromController = CL_Mgr_GetClientFromController((int)*(float *)&v3);
    GamerProfile_ResetAllGameOptions((int)*(float *)&v3);
    CL_Keys_ResetAllBindings(ClientFromController);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetPrivatePartyMembers
==============
*/
__int64 LUI_CoD_LuaCall_GetPrivatePartyMembers(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_CoD_LuaCall_GetPrivatePartyMembers_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_GetProfileDataDefaultValue
==============
*/
__int64 LUI_CoD_LuaCall_GetProfileDataDefaultValue(lua_State *const luaVM)
{
  int v2; 
  unsigned int v3; 
  const char *v4; 
  double v5; 
  int v6; 
  double DataDefaultValueByName; 
  unsigned int v8; 
  GamerProfileData result; 
  int controllerIndex; 
  LocalClientNum_t localClientNum; 

  v2 = j_lua_gettop(luaVM);
  if ( v2 < 1 )
    j_luaL_error(luaVM, "USAGE: Engine.GetProfileDataDefaultValue( <string>, ?<controller> )");
  v3 = 1;
  if ( !j_lua_isstring(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.GetProfileDataDefaultValue( <string>, ?<controller> )");
  v4 = j_lua_tolstring(luaVM, 1, NULL);
  if ( v2 <= 1 )
  {
    LUI_CoD_AttemptInferLocalClientAndController(&localClientNum, &controllerIndex);
    v6 = controllerIndex;
  }
  else
  {
    if ( !j_lua_isnumber(luaVM, 2) )
      j_luaL_error(luaVM, "USAGE: Engine.GetProfileDataDefaultValue( <string>, ?<controller> )");
    v5 = lui_tonumber32(luaVM, 2);
    v6 = (int)*(float *)&v5;
    controllerIndex = (int)*(float *)&v5;
  }
  if ( GamerProfile_GetDataByName(&result, v6, v4)->type )
  {
    DataDefaultValueByName = GamerProfile_GetDataDefaultValueByName(controllerIndex, v4);
    j_lua_pushnumber(luaVM, *(float *)&DataDefaultValueByName);
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
LUI_CoD_LuaCall_GetProfileDataMinValue
==============
*/
__int64 LUI_CoD_LuaCall_GetProfileDataMinValue(lua_State *const luaVM)
{
  int v2; 
  unsigned int v3; 
  const char *v4; 
  double v5; 
  int v6; 
  double DataMinValueByName; 
  unsigned int v8; 
  GamerProfileData result; 
  int controllerIndex; 
  LocalClientNum_t localClientNum; 

  v2 = j_lua_gettop(luaVM);
  if ( v2 < 1 )
    j_luaL_error(luaVM, "USAGE: Engine.GetProfileDataMinValue( <string>, ?<controller> )");
  v3 = 1;
  if ( !j_lua_isstring(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.GetProfileDataMinValue( <string>, ?<controller> )");
  v4 = j_lua_tolstring(luaVM, 1, NULL);
  if ( v2 <= 1 )
  {
    LUI_CoD_AttemptInferLocalClientAndController(&localClientNum, &controllerIndex);
    v6 = controllerIndex;
  }
  else
  {
    if ( !j_lua_isnumber(luaVM, 2) )
      j_luaL_error(luaVM, "USAGE: Engine.GetProfileDataMinValue( <string>, ?<controller> )");
    v5 = lui_tonumber32(luaVM, 2);
    v6 = (int)*(float *)&v5;
    controllerIndex = (int)*(float *)&v5;
  }
  if ( GamerProfile_GetDataByName(&result, v6, v4)->type )
  {
    DataMinValueByName = GamerProfile_GetDataMinValueByName(controllerIndex, v4);
    j_lua_pushnumber(luaVM, *(float *)&DataMinValueByName);
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
LUI_CoD_LuaCall_GetProfileDataMaxValue
==============
*/
__int64 LUI_CoD_LuaCall_GetProfileDataMaxValue(lua_State *const luaVM)
{
  int v2; 
  unsigned int v3; 
  const char *v4; 
  double v5; 
  int v6; 
  double DataMaxValueByName; 
  unsigned int v8; 
  GamerProfileData result; 
  int controllerIndex; 
  LocalClientNum_t localClientNum; 

  v2 = j_lua_gettop(luaVM);
  if ( v2 < 1 )
    j_luaL_error(luaVM, "USAGE: Engine.GetProfileDataMaxValue( <string>, ?<controller> )");
  v3 = 1;
  if ( !j_lua_isstring(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.GetProfileDataMaxValue( <string>, ?<controller> )");
  v4 = j_lua_tolstring(luaVM, 1, NULL);
  if ( v2 <= 1 )
  {
    LUI_CoD_AttemptInferLocalClientAndController(&localClientNum, &controllerIndex);
    v6 = controllerIndex;
  }
  else
  {
    if ( !j_lua_isnumber(luaVM, 2) )
      j_luaL_error(luaVM, "USAGE: Engine.GetProfileDataMaxValue( <string>, ?<controller> )");
    v5 = lui_tonumber32(luaVM, 2);
    v6 = (int)*(float *)&v5;
    controllerIndex = (int)*(float *)&v5;
  }
  if ( GamerProfile_GetDataByName(&result, v6, v4)->type )
  {
    DataMaxValueByName = GamerProfile_GetDataMaxValueByName(controllerIndex, v4);
    j_lua_pushnumber(luaVM, *(float *)&DataMaxValueByName);
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
LUI_CoD_LuaCall_IsPrivatePartyCrossplay
==============
*/
__int64 LUI_CoD_LuaCall_IsPrivatePartyCrossplay(lua_State *const luaVM)
{
  bool IsCrossplayParty; 
  unsigned int v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Friends.IsPrivatePartyCrossplay()");
  if ( j_lua_gettop(luaVM) )
  {
    v3 = 0;
  }
  else
  {
    IsCrossplayParty = Party_IsCrossplayParty(&g_partyData);
    j_lua_pushboolean(luaVM, IsCrossplayParty);
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
LUI_CoD_LuaCall_IsPrivatePartyHostF2P
==============
*/
__int64 LUI_CoD_LuaCall_IsPrivatePartyHostF2P(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 
  bool IsMemberF2PUser; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Friends.IsPrivatePartyHostF2P()");
  if ( j_lua_gettop(luaVM) || !g_partyData.inParty )
  {
    v2 = 0;
  }
  else
  {
    if ( Party_IsHostDedicated(&g_partyData) )
    {
      j_lua_pushboolean(luaVM, 0);
    }
    else
    {
      v3 = Party_HostNum(&g_partyData);
      IsMemberF2PUser = Party_IsMemberF2PUser(&g_partyData, v3);
      j_lua_pushboolean(luaVM, IsMemberF2PUser);
    }
    v2 = 1;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v5);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_NeedToDeleteSaveData
==============
*/
__int64 LUI_CoD_LuaCall_NeedToDeleteSaveData(lua_State *const luaVM)
{
  double v2; 
  bool v3; 
  unsigned int v4; 

  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.NeedToDeleteSaveData( <controller> )");
  v2 = lui_tonumber32(luaVM, 1);
  v3 = GamerProfile_AwaitingDelete((int)*(float *)&v2);
  j_lua_pushboolean(luaVM, v3);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_DeleteProfile
==============
*/
__int64 LUI_CoD_LuaCall_DeleteProfile(lua_State *const luaVM)
{
  double v2; 
  unsigned int v3; 

  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.DeleteProfile( <controller> )");
  v2 = lui_tonumber32(luaVM, 1);
  GamerProfile_DeleteProfile((int)*(float *)&v2);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetOnlineFriendClanTag
==============
*/
__int64 LUI_CoD_LuaCall_GetOnlineFriendClanTag(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_CoD_LuaCall_GetOnlineFriendClanTag_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_WriteProfile
==============
*/
__int64 LUI_CoD_LuaCall_WriteProfile(lua_State *const luaVM)
{
  double v2; 
  unsigned int v3; 

  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.WriteProfile( <controller> )");
  v2 = lui_tonumber32(luaVM, 1);
  GamerProfile_ForceSaveProfile((int)*(float *)&v2);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetOnlineFriendRank
==============
*/
__int64 LUI_CoD_LuaCall_GetOnlineFriendRank(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_CoD_LuaCall_GetOnlineFriendRank_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_RetrySaveData
==============
*/
__int64 LUI_CoD_LuaCall_RetrySaveData(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetOnlineFriendPatch
==============
*/
__int64 LUI_CoD_LuaCall_GetOnlineFriendPatch(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_CoD_LuaCall_GetOnlineFriendPatch_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_ClearSaveDataErrors
==============
*/
__int64 LUI_CoD_LuaCall_ClearSaveDataErrors(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_ProfileMenuDvarsSetup
==============
*/
__int64 LUI_CoD_LuaCall_ProfileMenuDvarsSetup(lua_State *const luaVM)
{
  double v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.ProfileMenuDvarsSetup( <controller> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v2 = lui_tonumber32(luaVM, 1);
    GamerProfile_OptionsMenuDvarsSetup((int)*(float *)&v2);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetOnlineFriendPatchbacking
==============
*/
__int64 LUI_CoD_LuaCall_GetOnlineFriendPatchbacking(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Friends.GetOnlineFriendPatchbacking( <controller>, <friendIndex> )\n");
  j_lua_pushinteger(luaVM, 0i64);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_SetSticksConfig
==============
*/
__int64 LUI_CoD_LuaCall_SetSticksConfig(lua_State *const luaVM)
{
  const char *v2; 
  double v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isstring(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Engine.SetSticksConfig( <id>, <controller> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isstring(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    v2 = j_lua_tolstring(luaVM, 1, NULL);
    v3 = lui_tonumber32(luaVM, 2);
    GamerProfile_SetBindingsConfig((int)*(float *)&v3, v2, 0, 0);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetOnlineFriendBackground
==============
*/
__int64 LUI_CoD_LuaCall_GetOnlineFriendBackground(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_CoD_LuaCall_GetOnlineFriendBackground_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_GetOnlineFriendAlienRank
==============
*/
__int64 LUI_CoD_LuaCall_GetOnlineFriendAlienRank(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_CoD_LuaCall_GetOnlineFriendAlienRank_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_SetButtonsConfig
==============
*/
__int64 LUI_CoD_LuaCall_SetButtonsConfig(lua_State *const luaVM)
{
  const char *v2; 
  double v3; 
  int v4; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) < 2 || !j_lua_isstring(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Engine.SetButtonsConfig( <id>, <controller>, <boolean> )");
  if ( j_lua_gettop(luaVM) >= 2 && j_lua_isstring(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    v2 = j_lua_tolstring(luaVM, 1, NULL);
    v3 = lui_tonumber32(luaVM, 2);
    if ( j_lua_gettop(luaVM) == 3 && j_lua_type(luaVM, 3) == 1 )
      v4 = j_lua_toboolean(luaVM, 3);
    else
      v4 = 0;
    GamerProfile_SetBindingsConfig((int)*(float *)&v3, v2, 1, v4 != 0);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetOnlineFriendPrestige
==============
*/
__int64 LUI_CoD_LuaCall_GetOnlineFriendPrestige(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_CoD_LuaCall_GetOnlineFriendPrestige_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_CanViewClanTags
==============
*/
__int64 LUI_CoD_LuaCall_CanViewClanTags(lua_State *const luaVM)
{
  unsigned int v2; 

  j_lua_pushboolean(luaVM, 1);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetOnlineFriendAlienPrestige
==============
*/
__int64 LUI_CoD_LuaCall_GetOnlineFriendAlienPrestige(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_CoD_LuaCall_GetOnlineFriendAlienPrestige_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_IsUGCRestricted
==============
*/
__int64 LUI_CoD_LuaCall_IsUGCRestricted(lua_State *const luaVM)
{
  unsigned int v2; 

  j_lua_pushboolean(luaVM, 0);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_CanViewCustomEmblemFromUser
==============
*/
__int64 LUI_CoD_LuaCall_CanViewCustomEmblemFromUser(lua_State *const luaVM)
{
  int v2; 
  int v3; 
  unsigned int v4; 
  LocalClientNum_t outLocalClientNum; 
  XUID result; 

  lui_tonumber32(luaVM, 1);
  LUI_ToXUID(&result, luaVM, 2);
  if ( Live_XUIDIsLocalPlayer(result) )
  {
    v2 = 0;
    v3 = 0;
    while ( !CL_Mgr_IsControllerMappedToClient(v3, &outLocalClientNum) || Live_GetDoesUserHaveUGCPrivilege(v3) )
    {
      if ( ++v3 >= 8 )
      {
        v2 = 1;
        break;
      }
    }
  }
  else
  {
    v2 = 1;
  }
  j_lua_pushboolean(luaVM, v2);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_SetOnlineFriendStoredXUID
==============
*/
__int64 LUI_CoD_LuaCall_SetOnlineFriendStoredXUID(lua_State *const luaVM)
{
  int v2; 
  int v3; 
  Online_Friends *Instance; 
  Online_Friends *v5; 
  unsigned int v6; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Friends.SetOnlineFriendStoredXUID( <controller>, <friendIndex> )\n");
  v2 = lui_tointeger32(luaVM, 1);
  v3 = lui_tointeger32(luaVM, 2);
  Instance = Online_Friends::GetInstance();
  Online_Friends::FeederSelection(Instance, v2, v3);
  v5 = Online_Friends::GetInstance();
  Online_Friends::FeederStoreXUID(v5, v2);
  PlayercardCache_UpdateOnlineFriendsCaching(v2);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v6);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_ShowOnlineFriendGamercard
==============
*/
__int64 LUI_CoD_LuaCall_ShowOnlineFriendGamercard(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_CanAccessCustomEmblemFeature
==============
*/
__int64 LUI_CoD_LuaCall_CanAccessCustomEmblemFeature(lua_State *const luaVM)
{
  double v2; 
  bool HaveUGCPrivilege; 
  unsigned int v4; 

  v2 = lui_tonumber32(luaVM, 1);
  HaveUGCPrivilege = Live_GetDoesUserHaveUGCPrivilege((int)*(float *)&v2);
  j_lua_pushboolean(luaVM, HaveUGCPrivilege);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_ShowPlayerCard
==============
*/
__int64 LUI_CoD_LuaCall_ShowPlayerCard(lua_State *const luaVM)
{
  unsigned int v2; 
  const char *v3; 
  unsigned __int64 v4; 
  Online_Friends *Instance; 
  Online_Friends *v6; 
  unsigned int v7; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isstring(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Friends.ShowPlayerCard( controllerIndex, platformId )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_isstring(luaVM, 2) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    v3 = j_lua_tolstring(luaVM, 2, NULL);
    v4 = I_atoui64(v3);
    Online_Friends::GetInstance();
    if ( v2 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_functions.cpp", 14890, ASSERT_TYPE_ASSERT, "(Online_Friends::GetInstance().IsControllerValid( controllerIndex ))", (const char *)&queryFormat, "Online_Friends::GetInstance().IsControllerValid( controllerIndex )") )
      __debugbreak();
    Instance = Online_Friends::GetInstance();
    if ( Online_Friends::IsConnected(Instance, v2) )
    {
      v6 = Online_Friends::GetInstance();
      Online_Friends::ShowPlayerCard(v6, v2, v4);
    }
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v7 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v7);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_IsChatRestricted
==============
*/
__int64 LUI_CoD_LuaCall_IsChatRestricted(lua_State *const luaVM)
{
  double v2; 
  bool HaveOnlineCommunicationsPrivilege; 
  unsigned int v4; 

  v2 = lui_tonumber32(luaVM, 1);
  HaveOnlineCommunicationsPrivilege = Live_GetDoesUserHaveOnlineCommunicationsPrivilege((int)*(float *)&v2);
  j_lua_pushboolean(luaVM, !HaveOnlineCommunicationsPrivilege);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetCustomClanTag
==============
*/
__int64 LUI_CoD_LuaCall_GetCustomClanTag(lua_State *const luaVM)
{
  double v2; 
  int v3; 
  const char *CustomClanTag; 
  unsigned int v5; 
  int controllerIndex; 
  LocalClientNum_t localClientNum; 

  if ( j_lua_gettop(luaVM) < 1 )
  {
    LUI_CoD_AttemptInferLocalClientAndController(&localClientNum, &controllerIndex);
    v3 = controllerIndex;
  }
  else
  {
    if ( !j_lua_isnumber(luaVM, 1) )
      j_luaL_error(luaVM, "USAGE: Engine.GetCustomClanTag( ?<controller> )");
    v2 = lui_tonumber32(luaVM, 1);
    v3 = (int)*(float *)&v2;
    controllerIndex = (int)*(float *)&v2;
  }
  CustomClanTag = CL_PlayerData_GetCustomClanTag(v3);
  j_lua_pushstring(luaVM, CustomClanTag);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v5);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_CanShowFriendGamercard
==============
*/
__int64 LUI_CoD_LuaCall_CanShowFriendGamercard(lua_State *const luaVM)
{
  int v2; 
  Online_Friends *Instance; 
  bool CanShowCard; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Friends.CanShowFriendGamercard( <controller> )\n");
  v2 = lui_tointeger32(luaVM, 1);
  Instance = Online_Friends::GetInstance();
  CanShowCard = Online_Friends::CanShowCard(Instance, v2);
  j_lua_pushboolean(luaVM, CanShowCard);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v5);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_ReportOnlineFriend
==============
*/
__int64 LUI_CoD_LuaCall_ReportOnlineFriend(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetClanTag
==============
*/
__int64 LUI_CoD_LuaCall_GetClanTag(lua_State *const luaVM)
{
  unsigned int v2; 
  double v3; 
  unsigned __int8 ClanTagType; 
  const char *ClanTag; 
  __int64 v6; 
  unsigned int v7; 
  char outBuffer[8]; 
  __int64 v10; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.GetClanTag( <controller> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    *(_QWORD *)outBuffer = 0i64;
    LODWORD(v10) = 0;
    v3 = lui_tonumber32(luaVM, 1);
    ClanTagType = CL_PlayerData_GetClanTagType((int)*(float *)&v3);
    ClanTag = CL_PlayerData_GetClanTag((int)*(float *)&v3);
    if ( ClanTag )
    {
      v6 = -1i64;
      do
        ++v6;
      while ( ClanTag[v6] );
      if ( v6 )
        Com_PlayerUtils_ColorizeClanTag(ClanTag, ClanTagType, outBuffer, 0xCui64, 0x37u);
    }
    else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_functions.cpp", 2319, ASSERT_TYPE_ASSERT, "(clanTag)", (const char *)&queryFormat, "clanTag", *(_QWORD *)outBuffer, v10) )
    {
      __debugbreak();
    }
    j_lua_pushstring(luaVM, outBuffer);
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
LUI_CoD_LuaCall_JoinOnUser
==============
*/
__int64 LUI_CoD_LuaCall_JoinOnUser(lua_State *const luaVM)
{
  int v2; 
  XUID v3; 
  const char *v4; 
  unsigned __int64 v5; 
  unsigned int v6; 

  if ( j_lua_gettop(luaVM) != 3 || !j_lua_isnumber(luaVM, 1) || !j_lua_isuserdata(luaVM, 2) || !j_lua_isstring(luaVM, 3) )
    j_luaL_error(luaVM, "USAGE: Friends.JoinOnUser( controllerIndex, xuid, platformId )");
  if ( j_lua_gettop(luaVM) == 3 && j_lua_isnumber(luaVM, 1) && j_lua_isuserdata(luaVM, 2) && j_lua_isstring(luaVM, 3) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    v3.m_id = *(_QWORD *)j_lua_touserdata(luaVM, 2);
    v4 = j_lua_tolstring(luaVM, 3, NULL);
    v5 = I_atoui64(v4);
    InviteJoinHSM_xb3::StartJoiningUser(&g_invitationHSM, v2, v3, v5);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v6);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetRecentPlayersCount
==============
*/
__int64 LUI_CoD_LuaCall_GetRecentPlayersCount(lua_State *const luaVM)
{
  int v2; 
  Online_MetPlayer *Instance; 
  int Count; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Friends.GetRecentPlayersCount( <controller> )\n");
  v2 = lui_tointeger32(luaVM, 1);
  Instance = Online_MetPlayer::GetInstance();
  Count = Online_MetPlayer::GetCount(Instance, v2);
  j_lua_pushinteger(luaVM, Count);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v5);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetRawClanTag
==============
*/
__int64 LUI_CoD_LuaCall_GetRawClanTag(lua_State *const luaVM)
{
  unsigned int v2; 
  double v3; 
  const char *ClanTag; 
  unsigned int v5; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.GetRawClanTag( <controller> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v3 = lui_tonumber32(luaVM, 1);
    ClanTag = CL_PlayerData_GetClanTag((int)*(float *)&v3);
    if ( !ClanTag && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_functions.cpp", 2347, ASSERT_TYPE_ASSERT, "(clanTag)", (const char *)&queryFormat, "clanTag") )
      __debugbreak();
    j_lua_pushstring(luaVM, ClanTag);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v5);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_GetRecentPlayerGamertag
==============
*/
__int64 LUI_CoD_LuaCall_GetRecentPlayerGamertag(lua_State *const luaVM)
{
  int v2; 
  int v3; 
  Online_MetPlayer *Instance; 
  Online_MetPlayer *v5; 
  const char *CurrentIndexName; 
  unsigned int v7; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Friends.GetRecentPlayerGamertag( <controller>, <friendIndex> )\n");
  v2 = lui_tointeger32(luaVM, 1);
  v3 = lui_tointeger32(luaVM, 2);
  Instance = Online_MetPlayer::GetInstance();
  Online_MetPlayer::FeederSelection(Instance, v2, v3);
  v5 = Online_MetPlayer::GetInstance();
  CurrentIndexName = Online_MetPlayer::GetCurrentIndexName(v5, v2);
  j_lua_pushstring(luaVM, CurrentIndexName);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v7 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v7);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_SetAndEnableCustomClanTag
==============
*/
__int64 LUI_CoD_LuaCall_SetAndEnableCustomClanTag(lua_State *const luaVM)
{
  double v2; 
  const char *v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isstring(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Engine.SetAndEnableCustomClanTag( <controller>, <tag> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_isstring(luaVM, 2) )
  {
    v2 = lui_tonumber32(luaVM, 1);
    v3 = j_lua_tolstring(luaVM, 2, NULL);
    CL_PlayerData_SetClanTagType((int)*(float *)&v2, 0);
    UI_ClanKeyboard_callback((int)*(float *)&v2, 1, v3);
    LiveStorage_RequestOnlineStatsUpload((int)*(float *)&v2);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetRecentPlayerPresence
==============
*/
__int64 LUI_CoD_LuaCall_GetRecentPlayerPresence(lua_State *const luaVM)
{
  int v2; 
  int v3; 
  Online_MetPlayer *Instance; 
  const char *LastMetInfoForSlot; 
  unsigned int v6; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Friends.GetRecentPlayerPresence( <controller>, <friendIndex> )\n");
  v2 = lui_tointeger32(luaVM, 1);
  v3 = lui_tointeger32(luaVM, 2);
  Instance = Online_MetPlayer::GetInstance();
  LastMetInfoForSlot = Online_MetPlayer::GetLastMetInfoForSlot(Instance, v2, v3);
  j_lua_pushstring(luaVM, LastMetInfoForSlot);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v6);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_SetAndEnableOfficialClanTag
==============
*/
__int64 LUI_CoD_LuaCall_SetAndEnableOfficialClanTag(lua_State *const luaVM)
{
  double v2; 
  const char *v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isstring(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Engine.SetAndEnableOfficialClanTag( <controller>, <tag> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_isstring(luaVM, 2) )
  {
    v2 = lui_tonumber32(luaVM, 1);
    v3 = j_lua_tolstring(luaVM, 2, NULL);
    CL_PlayerData_SetClanTagType((int)*(float *)&v2, 2);
    CL_PlayerData_SetClanTag((int)*(float *)&v2, v3);
    LiveStorage_RequestOnlineStatsUpload((int)*(float *)&v2);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_SetClanTagType
==============
*/
__int64 LUI_CoD_LuaCall_SetClanTagType(lua_State *const luaVM)
{
  double v2; 
  int v3; 
  double v4; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Engine.SetClanTagType( <controllerIndex>, <clanTagType> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    v2 = lui_tonumber32(luaVM, 1);
    v3 = (int)*(float *)&v2;
    v4 = lui_tonumber32(luaVM, 2);
    CL_PlayerData_SetClanTagType(v3, (int)*(float *)&v4);
    LiveStorage_RequestOnlineStatsUpload(v3);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetRecentPlayerClanTag
==============
*/
__int64 LUI_CoD_LuaCall_GetRecentPlayerClanTag(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_CoD_LuaCall_GetRecentPlayerClanTag_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_ValidateClanDigitsRestriction
==============
*/
__int64 LUI_CoD_LuaCall_ValidateClanDigitsRestriction(lua_State *const luaVM)
{
  unsigned int v2; 
  int v3; 
  __int16 v4; 
  const char *v5; 
  char v6; 
  bool v7; 
  __int16 v8; 
  unsigned int v9; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isstring(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.ValidateClanDigitsRestriction( <clanName> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isstring(luaVM, 1) )
  {
    v3 = 0;
    v4 = 0;
    v5 = j_lua_tolstring(luaVM, 1, NULL);
    v6 = *v5;
    while ( v6 )
    {
      ++v5;
      v7 = (unsigned __int8)(v6 - 48) <= 9u;
      v8 = v4;
      v6 = *v5;
      ++v4;
      if ( !v7 )
        v4 = v8;
    }
    LOBYTE(v3) = v4 <= 6;
    j_lua_pushboolean(luaVM, v3);
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
LUI_CoD_LuaCall_GetRecentPlayerPatch
==============
*/
__int64 LUI_CoD_LuaCall_GetRecentPlayerPatch(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_CoD_LuaCall_GetRecentPlayerPatch_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_GetRecentPlayerPatchbacking
==============
*/
__int64 LUI_CoD_LuaCall_GetRecentPlayerPatchbacking(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Friends.GetRecentPlayerPatchbacking( <controller>, <friendIndex> )\n");
  j_lua_pushinteger(luaVM, 0i64);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_SetWeaponInPlayercardCache
==============
*/
__int64 LUI_CoD_LuaCall_SetWeaponInPlayercardCache(lua_State *const luaVM)
{
  int v2; 
  unsigned __int8 v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Engine.SetWeaponInPlayercardCache( <controllerIndex>, <loadoutIndex> )\n");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    v3 = lui_tointeger32(luaVM, 2);
    PlayercardCache_LoadPlayercard_ForEdit(v2);
    PlayercardCache_SetFavoriteLoadout(v2, v3);
    PlayercardCache_CommitPlayercardEdits(v2);
    PlayercardCache_RequestUpload(v2);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetRecentPlayerBackground
==============
*/
__int64 LUI_CoD_LuaCall_GetRecentPlayerBackground(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_CoD_LuaCall_GetRecentPlayerBackground_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_SyncPartyPlayercards
==============
*/
__int64 LUI_CoD_LuaCall_SyncPartyPlayercards(lua_State *const luaVM)
{
  double v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.SyncPartyPlayercards( <controller> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v2 = lui_tonumber32(luaVM, 1);
    PlayercardCache_MarkPartyDirty((int)*(float *)&v2, 16);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetRecentPlayerRank
==============
*/
__int64 LUI_CoD_LuaCall_GetRecentPlayerRank(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_CoD_LuaCall_GetRecentPlayerRank_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_GetRecentPlayerAlienRank
==============
*/
__int64 LUI_CoD_LuaCall_GetRecentPlayerAlienRank(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_CoD_LuaCall_GetRecentPlayerAlienRank_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_GetRecentPlayerPrestige
==============
*/
__int64 LUI_CoD_LuaCall_GetRecentPlayerPrestige(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_CoD_LuaCall_GetRecentPlayerPrestige_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_GetRecentPlayerAlienPrestige
==============
*/
__int64 LUI_CoD_LuaCall_GetRecentPlayerAlienPrestige(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_CoD_LuaCall_GetRecentPlayerAlienPrestige_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_SetRecentPlayerStoredXUID
==============
*/
__int64 LUI_CoD_LuaCall_SetRecentPlayerStoredXUID(lua_State *const luaVM)
{
  int v2; 
  int v3; 
  Online_MetPlayer *Instance; 
  Online_MetPlayer *v5; 
  unsigned int v6; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Friends.SetRecentPlayerStoredXUID( <controller>, <friendIndex> )\n");
  v2 = lui_tointeger32(luaVM, 1);
  v3 = lui_tointeger32(luaVM, 2);
  Instance = Online_MetPlayer::GetInstance();
  Online_MetPlayer::FeederSelection(Instance, v2, v3);
  v5 = Online_MetPlayer::GetInstance();
  Online_MetPlayer::FeederStoreXUID(v5, v2);
  PlayercardCache_UpdateRecentPlayersCaching(v2);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v6);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_ShowRecentPlayerGamercard
==============
*/
__int64 LUI_CoD_LuaCall_ShowRecentPlayerGamercard(lua_State *const luaVM)
{
  int v2; 
  const XUID *v3; 
  Online_MetPlayer *Instance; 
  unsigned int v5; 
  XUID xuid; 

  XUID::XUID(&xuid);
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isuserdata(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Friends.ShowRecentPlayerGamercard( controllerIndex, xuid )\n");
  v2 = lui_tointeger32(luaVM, 1);
  v3 = (const XUID *)j_lua_touserdata(luaVM, 2);
  XUID::operator=(&xuid, v3);
  Instance = Online_MetPlayer::GetInstance();
  Online_MetPlayer::FeederOnShowCard(Instance, v2, xuid);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_ShowRecentPlayerGroups
==============
*/
__int64 LUI_CoD_LuaCall_ShowRecentPlayerGroups(lua_State *const luaVM)
{
  int v2; 
  LocalClientNum_t ClientFromController; 
  Online_MetPlayer *Instance; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Friends.ShowRecentPlayerGroups( <controller> )\n");
  v2 = lui_tointeger32(luaVM, 1);
  ClientFromController = CL_Mgr_GetClientFromController(v2);
  Instance = Online_MetPlayer::GetInstance();
  Online_MetPlayer::FeederOnShowGroups(Instance, ClientFromController, v2);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_RequestRecentPlayerAsFriend
==============
*/
__int64 LUI_CoD_LuaCall_RequestRecentPlayerAsFriend(lua_State *const luaVM)
{
  int v2; 
  const XUID *v3; 
  Online_MetPlayer *Instance; 
  unsigned int v5; 
  XUID xuid; 

  XUID::XUID(&xuid);
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isuserdata(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Friends.RequestRecentPlayerAsFriend( controllerIndex, xuid )\n");
  v2 = lui_tointeger32(luaVM, 1);
  v3 = (const XUID *)j_lua_touserdata(luaVM, 2);
  XUID::operator=(&xuid, v3);
  Instance = Online_MetPlayer::GetInstance();
  Online_MetPlayer::FeederOnFriendRequest(Instance, v2, xuid);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_ReportRecentPlayer
==============
*/
__int64 LUI_CoD_LuaCall_ReportRecentPlayer(lua_State *const luaVM)
{
  int v2; 
  ReportOffense v3; 
  Online_MetPlayer *Instance; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Friends.ReportRecentPlayer( <controller>, offense> )\n");
  v2 = lui_tointeger32(luaVM, 1);
  v3 = lui_tointeger32(luaVM, 3);
  Instance = Online_MetPlayer::GetInstance();
  Online_MetPlayer::FeederOnReportRequest(Instance, v2, v3);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_HasClientMatchData
==============
*/
__int64 LUI_CoD_LuaCall_HasClientMatchData(lua_State *const luaVM)
{
  int v2; 
  __int64 v3; 
  ClientMatchData *p_matchData; 
  const char *v5; 
  signed __int64 v6; 
  char v7; 
  __int64 v8; 
  char v9; 
  int v10; 
  unsigned int v11; 

  if ( j_lua_gettop(luaVM) && (j_lua_gettop(luaVM) != 1 || !j_lua_isstring(luaVM, 1)) )
    j_luaL_error(luaVM, "Usage: Engine.HasClientMatchData( [ddlPath] )");
  v2 = 0;
  if ( cls.matchData.def[0] )
  {
    v2 = 1;
    if ( j_lua_gettop(luaVM) == 1 )
    {
      v3 = 0x7FFFFFFFi64;
      p_matchData = &cls.matchData;
      v5 = j_lua_tolstring(luaVM, 1, NULL);
      if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      v6 = v5 - (const char *)&cls.matchData;
      while ( 1 )
      {
        v7 = p_matchData->def[v6];
        v8 = v3;
        v9 = p_matchData->def[0];
        p_matchData = (ClientMatchData *)((char *)p_matchData + 1);
        --v3;
        if ( !v8 )
        {
LABEL_14:
          v10 = 0;
          goto LABEL_15;
        }
        if ( v7 != v9 )
          break;
        if ( !v7 )
          goto LABEL_14;
      }
      v10 = 1;
      if ( v7 < v9 )
        v10 = -1;
LABEL_15:
      v2 = v10 == 0;
    }
  }
  j_lua_pushboolean(luaVM, v2);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v11 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v11);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_IsRecentPlayerAFriend
==============
*/
__int64 LUI_CoD_LuaCall_IsRecentPlayerAFriend(lua_State *const luaVM)
{
  int v2; 
  const XUID *v3; 
  Online_MetPlayer *Instance; 
  bool IsPlatformFriend; 
  unsigned int v6; 
  XUID xuid; 

  XUID::XUID(&xuid);
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isuserdata(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Friends.IsRecentPlayerAFriend( controllerIndex, xuid )\n");
  v2 = lui_tointeger32(luaVM, 1);
  v3 = (const XUID *)j_lua_touserdata(luaVM, 2);
  XUID::operator=(&xuid, v3);
  Instance = Online_MetPlayer::GetInstance();
  IsPlatformFriend = Online_MetPlayer::IsPlatformFriend(Instance, v2, xuid);
  j_lua_pushboolean(luaVM, IsPlatformFriend);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v6);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetClientMatchData
==============
*/
__int64 LUI_CoD_LuaCall_GetClientMatchData(lua_State *const luaVM)
{
  unsigned int DDL; 
  int v3; 
  const DDLDef *Asset; 
  unsigned int v5; 
  DDLContext ddlContext; 

  if ( cls.matchData.def[0] )
  {
    v3 = j_lua_gettop(luaVM);
    Asset = Com_DDL_LoadAsset(cls.matchData.def);
    Com_DDL_CreateContext(cls.matchData.data, 24000, Asset, &ddlContext, NULL, NULL);
    DDL = LUI_GetDDL(luaVM, v3, Asset, &ddlContext, STATSGROUP_IGNORE);
  }
  else
  {
    DDL = 0;
  }
  if ( (int)DDL > j_lua_gettop(luaVM) )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", DDL, v5);
  }
  return DDL;
}

/*
==============
LUI_CoD_LuaCall_IsUserInBlockList
==============
*/
__int64 LUI_CoD_LuaCall_IsUserInBlockList(lua_State *const luaVM)
{
  int v2; 
  XUID v3; 
  Online_BlockList *Instance; 
  bool IsBlocked; 
  unsigned int v6; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isuserdata(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Friends.IsUserInBlockList( controllerIndex, xuid )\n");
  v2 = lui_tointeger32(luaVM, 1);
  v3.m_id = *(_QWORD *)j_lua_touserdata(luaVM, 2);
  Instance = Online_BlockList::GetInstance();
  IsBlocked = Online_BlockList::IsBlocked(Instance, v2, v3);
  j_lua_pushboolean(luaVM, IsBlocked);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v6);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_HasSaveDevice
==============
*/
__int64 LUI_CoD_LuaCall_HasSaveDevice(lua_State *const luaVM)
{
  unsigned int v2; 

  j_lua_pushboolean(luaVM, 1);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetExtinctionBonusDeadline
==============
*/
__int64 LUI_CoD_LuaCall_GetExtinctionBonusDeadline(lua_State *const luaVM)
{
  int v2; 
  unsigned int ExtinctionBonusDeadline; 
  unsigned int v12; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 1 && lua_isnumber( luaVM, 1 )");
  v2 = lui_tointeger32(luaVM, 1);
  ExtinctionBonusDeadline = LiveStorate_GetExtinctionBonusDeadline(v2);
  if ( ExtinctionBonusDeadline && ExtinctionBonusDeadline > LiveStorage_GetUTC() )
    LiveStorage_GetUTC();
  _XMM1 = 0i64;
  __asm { vcvtsi2sd xmm1, xmm1, rax; n }
  j_lua_pushnumber(luaVM, *(long double *)&_XMM1);
  _XMM1 = 0i64;
  __asm { vcvtsi2sd xmm1, xmm1, rax; n }
  j_lua_pushnumber(luaVM, *(long double *)&_XMM1);
  _XMM1 = 0i64;
  __asm { vcvtsi2sd xmm1, xmm1, rax; n }
  j_lua_pushnumber(luaVM, *(long double *)&_XMM1);
  _XMM1 = 0i64;
  __asm { vcvtsi2sd xmm1, xmm1, rax; n }
  j_lua_pushnumber(luaVM, *(long double *)&_XMM1);
  if ( j_lua_gettop(luaVM) < 4 )
  {
    v12 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 4i64, v12);
  }
  return 4i64;
}

/*
==============
LUI_CoD_LuaCall_FavoriteFriendsEnabled
==============
*/
__int64 LUI_CoD_LuaCall_FavoriteFriendsEnabled(lua_State *const luaVM)
{
  Online_Friends *Instance; 
  bool IsEnabled; 
  unsigned int v4; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Friends.FavoriteFriendsEnabled()");
  if ( j_lua_gettop(luaVM) )
  {
    v4 = 0;
  }
  else
  {
    Instance = Online_Friends::GetInstance();
    IsEnabled = Online_Friends::FavoriteFriends_IsEnabled(Instance);
    j_lua_pushboolean(luaVM, IsEnabled);
    v4 = 1;
  }
  if ( (int)v4 > j_lua_gettop(luaVM) )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v4, v5);
  }
  return v4;
}

/*
==============
LUI_CoD_LuaCall_GetNumberOfFavoriteFriends
==============
*/
__int64 LUI_CoD_LuaCall_GetNumberOfFavoriteFriends(lua_State *const luaVM)
{
  unsigned int v2; 
  Online_Friends *Instance; 
  int v4; 
  Online_Friends *v5; 
  int LinkedFriendCount; 
  unsigned int v7; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Friends.GetNumberOfFavoriteFriends( controllerIndex )\n");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    Instance = Online_Friends::GetInstance();
    if ( Online_Friends::FavoriteFriends_IsEnabled(Instance) )
    {
      v4 = lui_tointeger32(luaVM, 1);
      v5 = Online_Friends::GetInstance();
      LinkedFriendCount = Online_Friends::FavoriteFriends_GetLinkedFriendCount(v5, v4);
      j_lua_pushinteger(luaVM, LinkedFriendCount);
    }
    else
    {
      j_lua_pushinteger(luaVM, 0i64);
    }
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
LUI_CoD_LuaCall_UpdateExtinctionBonusDeadline
==============
*/
__int64 LUI_CoD_LuaCall_UpdateExtinctionBonusDeadline(lua_State *const luaVM)
{
  int v2; 
  int v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 1 && lua_isnumber( luaVM, 1 )");
  v2 = lui_tointeger32(luaVM, 1);
  v3 = truncate_cast<unsigned int,int>(v2);
  LiveStorage_MarkPeriodicExtinctionBonusOutOfDate(v3);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_AddToFavoriteUsers
==============
*/
__int64 LUI_CoD_LuaCall_AddToFavoriteUsers(lua_State *const luaVM)
{
  Online_Friends *Instance; 
  int v3; 
  XUID v4; 
  Online_Friends *v5; 
  unsigned int v6; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isuserdata(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Friends.AddToFavoriteUsers( controllerIndex, xuid )\n");
  if ( j_lua_gettop(luaVM) == 2 )
  {
    if ( j_lua_isnumber(luaVM, 1) )
    {
      if ( j_lua_isuserdata(luaVM, 2) )
      {
        Instance = Online_Friends::GetInstance();
        if ( Online_Friends::FavoriteFriends_IsEnabled(Instance) )
        {
          v3 = lui_tointeger32(luaVM, 1);
          v4.m_id = *(_QWORD *)j_lua_touserdata(luaVM, 2);
          v5 = Online_Friends::GetInstance();
          Online_Friends::FavoriteFriends_AddToListAndFixTheOrderOfUsersInLocalCache(v5, v3, v4);
        }
      }
    }
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v6);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_IsPitchInverted
==============
*/
__int64 LUI_CoD_LuaCall_IsPitchInverted(lua_State *const luaVM)
{
  unsigned int v2; 
  int v3; 
  bool InvertedVerticalLookGamepad; 
  unsigned int v5; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.IsPitchInverted( <controller> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v3 = lui_tointeger32(luaVM, 1);
    InvertedVerticalLookGamepad = GamerProfile_GetInvertedVerticalLookGamepad(v3);
    j_lua_pushboolean(luaVM, InvertedVerticalLookGamepad);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v5);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_AddToFavoriteUsersButtonDisabled
==============
*/
__int64 LUI_CoD_LuaCall_AddToFavoriteUsersButtonDisabled(lua_State *const luaVM)
{
  unsigned int v2; 
  Online_Friends *Instance; 
  int v4; 
  XUID v5; 
  Online_Friends *v6; 
  unsigned int v7; 
  char *errorString; 
  char *value; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isuserdata(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Friends.AddToFavoriteUsersButtonDisabled( controllerIndex, xuid )\n");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_isuserdata(luaVM, 2) )
  {
    Instance = Online_Friends::GetInstance();
    if ( Online_Friends::FavoriteFriends_IsEnabled(Instance) )
    {
      v4 = lui_tointeger32(luaVM, 1);
      v5.m_id = *(_QWORD *)j_lua_touserdata(luaVM, 2);
      errorString = (char *)&queryFormat.fmt + 3;
      value = (char *)&queryFormat.fmt + 3;
      v6 = Online_Friends::GetInstance();
      LOBYTE(v5.m_id) = Online_Friends::FavoriteFriends_CanUserBeAddedToList(v6, v4, v5, (const char **)&errorString, (const char **)&value);
      j_lua_createtable(LUI_luaVM, 0, 3);
      LUI_SetTableBool("disabled", LOBYTE(v5.m_id) == 0, LUI_luaVM);
      LUI_SetTableString("errorString", errorString, LUI_luaVM);
      LUI_SetTableString("devErrorString", value, LUI_luaVM);
    }
    else
    {
      j_lua_createtable(LUI_luaVM, 0, 3);
      LUI_SetTableBool("disabled", 1, LUI_luaVM);
      LUI_SetTableString("errorString", (const char *)&queryFormat.fmt + 3, LUI_luaVM);
      LUI_SetTableString("devErrorString", "Favorite Friends Feature disabled", LUI_luaVM);
    }
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
LUI_CoD_LuaCall_ToggleInvertedPitch
==============
*/
__int64 LUI_CoD_LuaCall_ToggleInvertedPitch(lua_State *const luaVM)
{
  int v2; 
  bool InvertedVerticalLookGamepad; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.ToggleInvertedPitch( <controller> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    InvertedVerticalLookGamepad = GamerProfile_GetInvertedVerticalLookGamepad(v2);
    GamerProfile_SetInvertedVerticalLookGamepad(v2, !InvertedVerticalLookGamepad);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_ToggleInvertedFlyPitch
==============
*/
__int64 LUI_CoD_LuaCall_ToggleInvertedFlyPitch(lua_State *const luaVM)
{
  int v2; 
  bool InvertedVerticalLookFlyingGamepad; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.ToggleInvertedFlyPitch( <controller> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    InvertedVerticalLookFlyingGamepad = GamerProfile_GetInvertedVerticalLookFlyingGamepad(v2);
    GamerProfile_SetInvertedVerticalLookFlyingGamepad(v2, !InvertedVerticalLookFlyingGamepad);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_RemoveFromFavoriteFriends
==============
*/
__int64 LUI_CoD_LuaCall_RemoveFromFavoriteFriends(lua_State *const luaVM)
{
  Online_Friends *Instance; 
  int v3; 
  XUID v4; 
  Online_Friends *v5; 
  unsigned int v6; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isuserdata(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Friends.RemoveFromFavoriteFriends( controllerIndex, xuid )\n");
  if ( j_lua_gettop(luaVM) == 2 )
  {
    if ( j_lua_isnumber(luaVM, 1) )
    {
      if ( j_lua_isuserdata(luaVM, 2) )
      {
        Instance = Online_Friends::GetInstance();
        if ( Online_Friends::FavoriteFriends_IsEnabled(Instance) )
        {
          v3 = lui_tointeger32(luaVM, 1);
          v4.m_id = *(_QWORD *)j_lua_touserdata(luaVM, 2);
          v5 = Online_Friends::GetInstance();
          Online_Friends::FavoriteFriends_RemoveFromListAndFixTheOrderOfUsersInLocalCache(v5, v3, v4);
        }
      }
    }
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v6);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_SetAimAssistType
==============
*/
__int64 LUI_CoD_LuaCall_SetAimAssistType(lua_State *const luaVM)
{
  int v2; 
  int v3; 
  int v4; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Engine.SetAimAssistType( <controller>, <aimAssistType> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    v3 = lui_tointeger32(luaVM, 2);
    v4 = truncate_cast<unsigned int,int>(v3);
    GamerProfile_SetAimAssistType(v2, v4);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_RemoveFromFavoriteUsersButtonDisabled
==============
*/
__int64 LUI_CoD_LuaCall_RemoveFromFavoriteUsersButtonDisabled(lua_State *const luaVM)
{
  unsigned int v2; 
  Online_Friends *Instance; 
  int v4; 
  XUID v5; 
  Online_Friends *v6; 
  unsigned int v7; 
  char *errorString; 
  char *value; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isuserdata(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Friends.RemoveFromFavoriteUsersButtonDisabled( controllerIndex, xuid )\n");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_isuserdata(luaVM, 2) )
  {
    Instance = Online_Friends::GetInstance();
    if ( Online_Friends::FavoriteFriends_IsEnabled(Instance) )
    {
      v4 = lui_tointeger32(luaVM, 1);
      v5.m_id = *(_QWORD *)j_lua_touserdata(luaVM, 2);
      errorString = (char *)&queryFormat.fmt + 3;
      value = (char *)&queryFormat.fmt + 3;
      v6 = Online_Friends::GetInstance();
      LOBYTE(v5.m_id) = Online_Friends::FavoriteFriends_CanUserBeRemovedFromList(v6, v4, v5, (const char **)&errorString, (const char **)&value);
      j_lua_createtable(LUI_luaVM, 0, 3);
      LUI_SetTableBool("disabled", LOBYTE(v5.m_id) == 0, LUI_luaVM);
      LUI_SetTableString("errorString", errorString, LUI_luaVM);
      LUI_SetTableString("devErrorString", value, LUI_luaVM);
    }
    else
    {
      j_lua_createtable(LUI_luaVM, 0, 3);
      LUI_SetTableBool("disabled", 1, LUI_luaVM);
      LUI_SetTableString("errorString", (const char *)&queryFormat.fmt + 3, LUI_luaVM);
      LUI_SetTableString("devErrorString", "Favorite Friends Feature disabled", LUI_luaVM);
    }
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
LUI_CoD_LuaCall_SetAimResponseCurveType
==============
*/
__int64 LUI_CoD_LuaCall_SetAimResponseCurveType(lua_State *const luaVM)
{
  int v2; 
  int v3; 
  int v4; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Engine.SetAimResponseCurveType( <controller>, <aimAssistType> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    v3 = lui_tointeger32(luaVM, 2);
    v4 = truncate_cast<unsigned int,int>(v3);
    GamerProfile_SetAimResponseCurveType(v2, v4);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_SetMountButtonConfig
==============
*/
__int64 LUI_CoD_LuaCall_SetMountButtonConfig(lua_State *const luaVM)
{
  int v2; 
  int v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Engine.SetMountButtonConfig( <controller>, <mountButtonConfigType> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    v3 = lui_tointeger32(luaVM, 2);
    GamerProfile_SetMountButton(v2, v3);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_FavoriteFriendsViewProfileButtonDisabled
==============
*/
__int64 LUI_CoD_LuaCall_FavoriteFriendsViewProfileButtonDisabled(lua_State *const luaVM)
{
  int v2; 
  const XUID *v3; 
  Online_Friends *Instance; 
  bool v5; 
  unsigned int v6; 
  XUID xuid; 
  char *devErrorString; 
  char *errorString; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isuserdata(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Friends.FavoriteFriendsViewProfileButtonDisabled( controllerIndex, xuid )\n");
  XUID::XUID(&xuid);
  errorString = (char *)&queryFormat.fmt + 3;
  devErrorString = (char *)&queryFormat.fmt + 3;
  v2 = lui_tointeger32(luaVM, 1);
  v3 = (const XUID *)j_lua_touserdata(luaVM, 2);
  XUID::operator=(&xuid, v3);
  Instance = Online_Friends::GetInstance();
  v5 = Online_Friends::FavoriteFriends_FavoriteFriendsViewProfileButtonDisabled(Instance, v2, xuid, (const char **)&errorString, (const char **)&devErrorString);
  j_lua_pushboolean(luaVM, v5);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v6);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_SetMountButtonConfigKBM
==============
*/
__int64 LUI_CoD_LuaCall_SetMountButtonConfigKBM(lua_State *const luaVM)
{
  int v2; 
  int v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Engine.SetMountButtonConfigKBM( <controller>, <mountButtonConfigType> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    v3 = lui_tointeger32(luaVM, 2);
    GamerProfile_SetMountButtonKBM(v2, v3);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetLivePartyFriendsCount
==============
*/
__int64 LUI_CoD_LuaCall_GetLivePartyFriendsCount(lua_State *const luaVM)
{
  int Count; 
  unsigned int v3; 

  Count = LiveParty_GetCount();
  j_lua_pushinteger(luaVM, Count);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_ToggleSprintCancelsReload
==============
*/
__int64 LUI_CoD_LuaCall_ToggleSprintCancelsReload(lua_State *const luaVM)
{
  int v2; 
  bool v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.ToggleSprintCancelsReload( <controller> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    v3 = GamerProfile_SprintCancelsReload(v2);
    GamerProfile_SetSprintCancelsReload(v2, !v3);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetLivePartyFriendGamertag
==============
*/
__int64 LUI_CoD_LuaCall_GetLivePartyFriendGamertag(lua_State *const luaVM)
{
  const XUID *v2; 
  const char *CurrentIndexName; 
  unsigned int v4; 
  XUID xuid; 

  XUID::XUID(&xuid);
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isuserdata(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Friends.GetLivePartyFriendGamertag( <controller>, <xuid> )\n");
  lui_tointeger32(luaVM, 1);
  v2 = (const XUID *)j_lua_touserdata(luaVM, 2);
  XUID::operator=(&xuid, v2);
  CurrentIndexName = LiveParty_GetCurrentIndexName(xuid);
  j_lua_pushstring(luaVM, CurrentIndexName);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_ToggleRumble
==============
*/
__int64 LUI_CoD_LuaCall_ToggleRumble(lua_State *const luaVM)
{
  int v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.ToggleRumble( <controller> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    GamerProfile_RumbleToggle(v2);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetLivePartyFriendPresence
==============
*/
__int64 LUI_CoD_LuaCall_GetLivePartyFriendPresence(lua_State *const luaVM)
{
  int v2; 
  int v3; 
  const char *PresenceForSlot; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Friends.GetLivePartyFriendPresence( <controller>, <friendIndex> )\n");
  v2 = lui_tointeger32(luaVM, 1);
  v3 = lui_tointeger32(luaVM, 2);
  PresenceForSlot = LiveParty_GetPresenceForSlot(v2, v3);
  j_lua_pushstring(luaVM, PresenceForSlot);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v5);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_ToggleLean
==============
*/
__int64 LUI_CoD_LuaCall_ToggleLean(lua_State *const luaVM)
{
  int v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.ToggleLean( <controller> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    GamerProfile_LeanToggle(v2);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_SetYoloState
==============
*/
__int64 LUI_CoD_LuaCall_SetYoloState(lua_State *const luaVM)
{
  int v2; 
  int v3; 
  int v4; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Engine.SetYoloState( <controller>, <yoloState> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    v3 = lui_tointeger32(luaVM, 2);
    v4 = truncate_cast<unsigned int,int>(v3);
    GamerProfile_SetYoloState(v2, v4);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetLivePartyFriendClanTag
==============
*/
__int64 LUI_CoD_LuaCall_GetLivePartyFriendClanTag(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_CoD_LuaCall_GetLivePartyFriendClanTag_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_GetLivePartyFriendPatch
==============
*/
__int64 LUI_CoD_LuaCall_GetLivePartyFriendPatch(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_CoD_LuaCall_GetLivePartyFriendPatch_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_SetSubtitlesEnabled
==============
*/
__int64 LUI_CoD_LuaCall_SetSubtitlesEnabled(lua_State *const luaVM)
{
  int v2; 
  int v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, "USAGE: Engine.SetSubtitlesEnabled( <controller>, <enabled> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_type(luaVM, 2) == 1 )
  {
    v2 = lui_tointeger32(luaVM, 1);
    v3 = j_lua_toboolean(luaVM, 2);
    GamerProfile_SetSubtitles(v2, v3 != 0);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetLivePartyFriendPatchbacking
==============
*/
__int64 LUI_CoD_LuaCall_GetLivePartyFriendPatchbacking(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Friends.GetLivePartyFriendPatchbacking( <controller>, <friendIndex> )\n");
  j_lua_pushinteger(luaVM, 0i64);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_SubtitlesEnabled
==============
*/
__int64 LUI_CoD_LuaCall_SubtitlesEnabled(lua_State *const luaVM)
{
  unsigned int v2; 
  int v3; 
  bool v4; 
  unsigned int v5; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.SubtitlesEnabled( <controller> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v3 = lui_tointeger32(luaVM, 1);
    v4 = GamerProfile_SubtitlesEnabled(v3);
    j_lua_pushboolean(luaVM, v4);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v5);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_GetLivePartyFriendBackground
==============
*/
__int64 LUI_CoD_LuaCall_GetLivePartyFriendBackground(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_CoD_LuaCall_GetLivePartyFriendBackground_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_LightBarSetColor
==============
*/
__int64 LUI_CoD_LuaCall_LightBarSetColor(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetLivePartyFriendRank
==============
*/
__int64 LUI_CoD_LuaCall_GetLivePartyFriendRank(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_CoD_LuaCall_GetLivePartyFriendRank_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_LightBarReset
==============
*/
__int64 LUI_CoD_LuaCall_LightBarReset(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_LightBarResetAll
==============
*/
__int64 LUI_CoD_LuaCall_LightBarResetAll(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetLivePartyFriendAlienRank
==============
*/
__int64 LUI_CoD_LuaCall_GetLivePartyFriendAlienRank(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_CoD_LuaCall_GetLivePartyFriendAlienRank_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_ToggleLightBar
==============
*/
__int64 LUI_CoD_LuaCall_ToggleLightBar(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetLivePartyFriendPrestige
==============
*/
__int64 LUI_CoD_LuaCall_GetLivePartyFriendPrestige(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_CoD_LuaCall_GetLivePartyFriendPrestige_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_PlayRumble
==============
*/
__int64 LUI_CoD_LuaCall_PlayRumble(lua_State *const luaVM)
{
  int v2; 
  LocalClientNum_t v3; 
  const char *v4; 
  unsigned int v5; 
  __int64 v7; 
  int v8; 
  LocalClientNum_t outLocalClientNum; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isstring(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Engine.PlayRumble( <controller>, rumble name )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_isstring(luaVM, 2) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    if ( !CL_Mgr_IsControllerMappedToClient(v2, &outLocalClientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_functions.cpp", 3406, ASSERT_TYPE_ASSERT, "(CL_Mgr_IsControllerMappedToClient( controllerIndex, &localClientNum ))", (const char *)&queryFormat, "CL_Mgr_IsControllerMappedToClient( controllerIndex, &localClientNum )") )
      __debugbreak();
    v3 = outLocalClientNum;
    if ( (unsigned int)outLocalClientNum >= LOCAL_CLIENT_COUNT )
    {
      v8 = 2;
      LODWORD(v7) = outLocalClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1193, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v7, v8) )
        __debugbreak();
    }
    if ( v3 >= cg_t::ms_allocatedCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_functions.cpp", 3407, ASSERT_TYPE_ASSERT, "(cg_t::IsClientAllocated( localClientNum ))", (const char *)&queryFormat, "cg_t::IsClientAllocated( localClientNum )") )
      __debugbreak();
    v4 = j_lua_tolstring(luaVM, 2, NULL);
    CG_Rumble_PlayOnClientByName(outLocalClientNum, v4);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetLivePartyFriendAlienPrestige
==============
*/
__int64 LUI_CoD_LuaCall_GetLivePartyFriendAlienPrestige(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_CoD_LuaCall_GetLivePartyFriendAlienPrestige_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_SetLivePartyFriendStoredXUID
==============
*/
__int64 LUI_CoD_LuaCall_SetLivePartyFriendStoredXUID(lua_State *const luaVM)
{
  int v2; 
  int v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Friends.SetLivePartyFriendStoredXUID( <controller>, <friendIndex> )\n");
  v2 = lui_tointeger32(luaVM, 1);
  v3 = lui_tointeger32(luaVM, 2);
  LiveParty_FeederSelection(v3);
  LiveParty_StoreXUID(v2);
  PlayercardCache_UpdateLivePartyFriendsCaching(v2);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_RegisterAccount
==============
*/
__int64 LUI_CoD_LuaCall_RegisterAccount(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_ReportLivePartyFriend
==============
*/
__int64 LUI_CoD_LuaCall_ReportLivePartyFriend(lua_State *const luaVM)
{
  int v2; 
  ReportOffense v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Friends.ReportLivePartyFriend( <controller>, <offense> )\n");
  v2 = lui_tointeger32(luaVM, 1);
  v3 = lui_tointeger32(luaVM, 3);
  LiveParty_FeederOnReportRequest(v2, v3);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_ToggleAutoAim
==============
*/
__int64 LUI_CoD_LuaCall_ToggleAutoAim(lua_State *const luaVM)
{
  int v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.ToggleAutoAim( <controller> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    GamerProfile_AutoAimToggle(v2);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_ShouldLeavePrivatePartyButtonBeEnabled
==============
*/
__int64 LUI_CoD_LuaCall_ShouldLeavePrivatePartyButtonBeEnabled(lua_State *const luaVM)
{
  int v1; 
  unsigned int v3; 

  v1 = 0;
  if ( g_partyData.inParty && !Lobby_IsInLobby() )
    v1 = 1;
  j_lua_pushboolean(luaVM, v1);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_ToggleTargetAssist
==============
*/
__int64 LUI_CoD_LuaCall_ToggleTargetAssist(lua_State *const luaVM)
{
  int v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.ToggleTargetAssist( <controller> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    GamerProfile_TargetAssistToggle(v2);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_ShouldInviteToPrivatePartyButtonBeEnabled
==============
*/
__int64 LUI_CoD_LuaCall_ShouldInviteToPrivatePartyButtonBeEnabled(lua_State *const luaVM)
{
  int v1; 
  unsigned int v3; 

  v1 = 0;
  if ( g_partyData.inParty && !Lobby_IsInLobby() )
    v1 = 1;
  j_lua_pushboolean(luaVM, v1);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetColorBlindTargets
==============
*/
__int64 LUI_CoD_LuaCall_GetColorBlindTargets(lua_State *const luaVM)
{
  int v2; 
  unsigned __int8 v3; 
  unsigned int v4; 
  unsigned int v5; 
  unsigned int v6; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.GetColorBlindTargets( <controller> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    v3 = GamerProfile_ColorBlindTargets(v2);
    v4 = v3;
    j_lua_pushboolean(luaVM, v3 & 1);
    j_lua_pushboolean(luaVM, (v4 >> 1) & 1);
    v5 = 2;
  }
  else
  {
    v5 = 0;
  }
  if ( (int)v5 > j_lua_gettop(luaVM) )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v5, v6);
  }
  return v5;
}

/*
==============
LUI_CoD_LuaCall_ShouldKickFromPrivatePartyButtonBeEnabled
==============
*/
__int64 LUI_CoD_LuaCall_ShouldKickFromPrivatePartyButtonBeEnabled(lua_State *const luaVM)
{
  int v1; 
  unsigned int v3; 

  v1 = 0;
  if ( g_partyData.inParty && !Lobby_IsInLobby() )
    v1 = 1;
  j_lua_pushboolean(luaVM, v1);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetMaxPrivatePartySlotsForGamemode
==============
*/
__int64 LUI_CoD_LuaCall_GetMaxPrivatePartySlotsForGamemode(lua_State *const luaVM)
{
  char v2; 
  __int64 v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.GetMaxPrivatePartySlotsForGamemode( <gamemode> )\n");
  v2 = lui_tointeger32(luaVM, 1);
  v3 = 4i64;
  if ( v2 != 3 )
    v3 = 20i64;
  j_lua_pushinteger(luaVM, v3);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_SetColorBlindTargets
==============
*/
__int64 LUI_CoD_LuaCall_SetColorBlindTargets(lua_State *const luaVM)
{
  int v2; 
  int v3; 
  int v4; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 3 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || !j_lua_isnumber(luaVM, 3) )
    j_luaL_error(luaVM, "USAGE: Engine.SetColorBlindTargets( <controllerIndex>, <world>, <ui> )");
  if ( j_lua_gettop(luaVM) == 3 && j_lua_isnumber(luaVM, 1) && j_lua_isnumber(luaVM, 2) && j_lua_isnumber(luaVM, 3) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    v3 = lui_tointeger32(luaVM, 2);
    v4 = lui_tointeger32(luaVM, 3);
    GamerProfile_SetColorBlindTargets(v2, v3 != 0, v4 != 0);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_ResetMaxPrivatePartySizeForMainMenu
==============
*/
__int64 LUI_CoD_LuaCall_ResetMaxPrivatePartySizeForMainMenu(lua_State *const luaVM)
{
  unsigned int v2; 

  Dvar_SetInt_Internal(DVARINT_party_maxPrivatePartyPlayers, 20);
  if ( g_partyData.inParty && Party_AreWeHost(&g_partyData) )
    Party_SetNumGameSlots(&g_partyData, 20);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_SetMinimapStyle
==============
*/
__int64 LUI_CoD_LuaCall_SetMinimapStyle(lua_State *const luaVM)
{
  int v2; 
  int v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Engine.SetMinimapStyle( <controllerIndex>, <style> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    v3 = lui_tointeger32(luaVM, 2);
    GamerProfile_SetMinimapStyle(v2, v3);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_SetMaxPrivatePartySize
==============
*/
__int64 LUI_CoD_LuaCall_SetMaxPrivatePartySize(lua_State *const luaVM)
{
  int v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.SetMaxPrivatePartySize( <maxPartySize> )\n");
  v2 = lui_tointeger32(luaVM, 1);
  if ( g_partyData.inParty && Party_AreWeHost(&g_partyData) )
  {
    PartyHost_SetPrivatePartyMaxPlayers(v2);
    Party_SetNumGameSlots(&g_partyData, v2);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetMinimapStyle
==============
*/
__int64 LUI_CoD_LuaCall_GetMinimapStyle(lua_State *const luaVM)
{
  unsigned int v2; 
  int v3; 
  int MinimapStyle; 
  unsigned int v5; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.GetMinimapStyle( <controllerIndex> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v3 = lui_tointeger32(luaVM, 1);
    MinimapStyle = GamerProfile_GetMinimapStyle(v3);
    j_lua_pushinteger(luaVM, MinimapStyle);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v5);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_ShouldCurrentSessionBeClosed
==============
*/
__int64 LUI_CoD_LuaCall_ShouldCurrentSessionBeClosed(lua_State *const luaVM)
{
  const PartyData *ActiveParty; 
  bool ShouldCurrentSessionBeClosed; 
  unsigned int v4; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Engine.ShouldCurrentSessionBeClosed()");
  if ( j_lua_gettop(luaVM) )
  {
    v4 = 0;
  }
  else
  {
    ActiveParty = Party_GetActiveParty();
    ShouldCurrentSessionBeClosed = Party_ShouldCurrentSessionBeClosed(ActiveParty);
    j_lua_pushboolean(luaVM, ShouldCurrentSessionBeClosed);
    v4 = 1;
  }
  if ( (int)v4 > j_lua_gettop(luaVM) )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v4, v5);
  }
  return v4;
}

/*
==============
LUI_CoD_LuaCall_SetUseNumbersForCompassCardinalDirText
==============
*/
__int64 LUI_CoD_LuaCall_SetUseNumbersForCompassCardinalDirText(lua_State *const luaVM)
{
  int v2; 
  int v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, "USAGE: Engine.SetUseNumbersForCompassCardinalDirText( <controllerIndex>, <bool> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_type(luaVM, 2) == 1 )
  {
    v2 = lui_tointeger32(luaVM, 1);
    v3 = j_lua_toboolean(luaVM, 2);
    GamerProfile_SetUseNumbersForCompassCardinalDirText(v2, v3 != 0);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetMemberCountInPrivateParty
==============
*/
__int64 LUI_CoD_LuaCall_GetMemberCountInPrivateParty(lua_State *const luaVM)
{
  int PartyMemberCount; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Engine.GetMemberCountInPrivateParty()\n");
  PartyMemberCount = GetPartyMemberCount();
  j_lua_pushinteger(luaVM, PartyMemberCount);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_SaveMatchRulesDataDefault
==============
*/
__int64 LUI_CoD_LuaCall_SaveMatchRulesDataDefault(lua_State *const luaVM)
{
  GameStateInfo *v2; 
  const char *GameType; 
  unsigned int v4; 

  v2 = GameStateInfo_Get();
  GameType = BG_MatchRulesData_GetGameType(v2->matchRules);
  SaveMatchRulesDataToFilesystem(v2->matchRules, GameType);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetUseNumbersForCompassCardinalDirText
==============
*/
__int64 LUI_CoD_LuaCall_GetUseNumbersForCompassCardinalDirText(lua_State *const luaVM)
{
  unsigned int v2; 
  int v3; 
  int UseNumbersForCompassCardinalDirText; 
  unsigned int v5; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.GetUseNumbersForCompassCardinalDirText( <controllerIndex> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v3 = lui_tointeger32(luaVM, 1);
    UseNumbersForCompassCardinalDirText = GamerProfile_GetUseNumbersForCompassCardinalDirText(v3);
    j_lua_pushboolean(luaVM, UseNumbersForCompassCardinalDirText != 0);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v5);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_LoadMatchRulesDataDefault
==============
*/
__int64 LUI_CoD_LuaCall_LoadMatchRulesDataDefault(lua_State *const luaVM)
{
  GameStateInfo *v2; 
  const char *GameType; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) > 1 )
    j_luaL_error(luaVM, "USAGE: MatchRules.LoadMatchRulesDataDefault( <gameTypeOverride> )\n");
  v2 = GameStateInfo_Get();
  if ( j_lua_gettop(luaVM) <= 0 )
  {
    GameType = BG_MatchRulesData_GetGameType(v2->matchRules);
  }
  else
  {
    if ( !j_lua_isstring(luaVM, 1) )
      j_luaL_error(luaVM, "USAGE: MatchRules.LoadMatchRulesDataDefault( <gameType> )");
    GameType = j_lua_tolstring(luaVM, 1, NULL);
  }
  if ( BG_MatchRules_LoadDefaultFromFF(v2->matchRules, GameType) )
    MatchRulesChanged(v2->matchRules);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_SetMinimapRotationEnabled
==============
*/
__int64 LUI_CoD_LuaCall_SetMinimapRotationEnabled(lua_State *const luaVM)
{
  int v2; 
  int v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, "USAGE: Engine.SetMinimapRotationEnabled( <controllerIndex>, <enabled> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_type(luaVM, 2) == 1 )
  {
    v2 = lui_tointeger32(luaVM, 1);
    v3 = j_lua_toboolean(luaVM, 2);
    GamerProfile_SetMinimapRotationEnabled(v2, v3 != 0);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetMinimapRotationEnabled
==============
*/
__int64 LUI_CoD_LuaCall_GetMinimapRotationEnabled(lua_State *const luaVM)
{
  unsigned int v2; 
  int v3; 
  bool MinimapRotationEnabled; 
  unsigned int v5; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.GetMinimapRotationEnabled( <controllerIndex> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v3 = lui_tointeger32(luaVM, 1);
    MinimapRotationEnabled = GamerProfile_GetMinimapRotationEnabled(v3);
    j_lua_pushboolean(luaVM, MinimapRotationEnabled);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v5);
  }
  return v2;
}

/*
==============
LUI_LuaCall_MatchRules_HasMLGRecipeAvailable
==============
*/
__int64 LUI_LuaCall_MatchRules_HasMLGRecipeAvailable(lua_State *const luaVM)
{
  GameStateInfo *v2; 
  const char *GameType; 
  int CanLoadFromFF; 
  unsigned int v5; 
  char dest[32]; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: MatchRules.HasMLGRecipeAvailable()\n");
  v2 = GameStateInfo_Get();
  GameType = BG_MatchRulesData_GetGameType(v2->matchRules);
  Com_sprintf(dest, 0x1Eui64, "mlg_%s", GameType);
  CanLoadFromFF = MatchRules_CanLoadFromFF(dest);
  j_lua_pushboolean(luaVM, CanLoadFromFF);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v5);
  }
  return 1i64;
}

/*
==============
LUI_LuaCall_MatchRules_LoadMLGRecipe
==============
*/
__int64 LUI_LuaCall_MatchRules_LoadMLGRecipe(lua_State *const luaVM)
{
  GameStateInfo *v2; 
  const char *GameType; 
  GameStateInfo *v4; 
  unsigned int v5; 
  char dest[32]; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: MatchRules.LoadMLGRecipe()\n");
  v2 = GameStateInfo_Get();
  GameType = BG_MatchRulesData_GetGameType(v2->matchRules);
  Com_sprintf(dest, 0x1Eui64, "mlg_%s", GameType);
  v4 = GameStateInfo_Get();
  if ( MatchRules_LoadFromFF(v4->matchRules, dest) )
    MatchRulesChanged(v4->matchRules);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetIsGoreAllowedInRegion
==============
*/
__int64 LUI_CoD_LuaCall_GetIsGoreAllowedInRegion(lua_State *const luaVM)
{
  bool IsGoreAllowedInRegion; 
  unsigned int v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Engine.GetIsGoreAllowedInRegion()");
  if ( j_lua_gettop(luaVM) )
  {
    v3 = 0;
  }
  else
  {
    IsGoreAllowedInRegion = RG_IsGoreAllowedInRegion();
    j_lua_pushboolean(luaVM, IsGoreAllowedInRegion);
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
LUI_LuaCall_MatchRules_ArbitrarilyLoadCDLRecipe
==============
*/
__int64 LUI_LuaCall_MatchRules_ArbitrarilyLoadCDLRecipe(lua_State *const luaVM)
{
  GameStateInfo *v2; 
  MatchRules *matchRules; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: MatchRules.ArbitrarilyLoadCDLRecipe()\n");
  v2 = GameStateInfo_Get();
  if ( MatchRules_LoadFromFF(v2->matchRules, "mlg_koth") )
  {
    matchRules = v2->matchRules;
    v2->usingRecipe = 1;
    MatchRulesChanged(matchRules);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_ToggleMPVoice
==============
*/
__int64 LUI_CoD_LuaCall_ToggleMPVoice(lua_State *const luaVM)
{
  int v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.ToggleMPVoice( <controller> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    GamerProfile_MPVoiceToggle(v2);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_IsUsingMatchRulesData
==============
*/
__int64 LUI_CoD_LuaCall_IsUsingMatchRulesData(lua_State *const luaVM)
{
  GameStateInfo *v2; 
  unsigned int v3; 

  v2 = GameStateInfo_Get();
  j_lua_pushboolean(luaVM, v2->usingRecipe);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetHighestDifficultyForLevel
==============
*/
__int64 LUI_CoD_LuaCall_GetHighestDifficultyForLevel(lua_State *const luaVM)
{
  __int64 v2; 
  int v3; 
  unsigned int v6; 
  GamerProfileData result; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Engine.GetHighestDifficultyForLevel( <level, controller> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    v3 = lui_tointeger32(luaVM, 2);
    _XMM0 = (__int128)*GamerProfile_GetDataByName(&result, v3, "missionhighestdifficulty");
    __asm { vpextrq rax, xmm0, 1 }
    j_lua_pushinteger(luaVM, *(char *)(v2 + _RAX) - 48);
  }
  else
  {
    j_lua_pushnil(luaVM);
  }
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v6);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_AreMatchRulesDefaultFromFF
==============
*/
__int64 LUI_CoD_LuaCall_AreMatchRulesDefaultFromFF(lua_State *const luaVM)
{
  int matched; 
  GameStateInfo *v3; 
  unsigned int v4; 

  matched = 0;
  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: MatchRules.AreMatchRulesDefaultFromFF()");
  if ( !j_lua_gettop(luaVM) )
  {
    v3 = GameStateInfo_Get();
    matched = AreMatchRulesDefaultFromFF(v3->matchRules);
  }
  j_lua_pushboolean(luaVM, matched);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_HasCompletedAnyLevel
==============
*/
__int64 LUI_CoD_LuaCall_HasCompletedAnyLevel(lua_State *const luaVM)
{
  int v2; 
  GamerProfileData *DataByName; 
  unsigned __int64 v4; 
  int v7; 
  __int64 v8; 
  unsigned int v9; 
  GamerProfileData result; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.HasCompletedAnyLevel( <controller> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    DataByName = GamerProfile_GetDataByName(&result, v2, "missionhighestdifficulty");
    v4 = -1i64;
    _XMM0 = *DataByName;
    __asm { vpextrq rdx, xmm0, 1 }
    do
      ++v4;
    while ( *(_BYTE *)(_RDX + v4) );
    v7 = 0;
    v8 = 0i64;
    if ( v4 )
    {
      while ( *(_BYTE *)(v8 + _RDX) == 48 )
      {
        if ( ++v8 >= v4 )
          goto LABEL_14;
      }
      v7 = 1;
    }
  }
  else
  {
    v7 = 0;
  }
LABEL_14:
  j_lua_pushboolean(luaVM, v7);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v9 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v9);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_SetUsingMatchRulesData
==============
*/
__int64 LUI_CoD_LuaCall_SetUsingMatchRulesData(lua_State *const luaVM)
{
  int v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) < 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) >= 1 && lua_isnumber( luaVM, 1 )");
  v2 = lui_tointeger32(luaVM, 1);
  BG_GameStateInfo_SetUsingRecipe(v2 > 0);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_CheckMatchRulesData
==============
*/
__int64 LUI_CoD_LuaCall_CheckMatchRulesData(lua_State *const luaVM)
{
  GameStateInfo *v3; 
  int v5; 
  const DDLDef *Asset; 
  int v7; 
  int v8; 
  const char *v9; 
  const char *v10; 
  int v11; 
  unsigned int v12; 
  DDLState state; 

  v3 = GameStateInfo_Get();
  if ( v3->usingRecipe )
  {
    __asm { vpxor   xmm0, xmm0, xmm0 }
    state.isValid = 0;
    state.offset = 0;
    state.arrayIndex = -1;
    *(_OWORD *)&state.member = _XMM0;
    if ( !v3->matchRules && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_functions.cpp", 16601, ASSERT_TYPE_ASSERT, "(gInfo->matchRules)", (const char *)&queryFormat, "gInfo->matchRules", *(_QWORD *)&state.isValid, *(_QWORD *)&state.arrayIndex, state.member, state.ddlDef) )
      __debugbreak();
    v5 = j_lua_gettop(luaVM);
    Asset = Com_DDL_LoadAsset("ddl/mp/recipes.ddl");
    v7 = -v5;
    LiveStorage_InitializeDDLStateForStatsGroup(Asset, &state, STATSGROUP_IGNORE);
    for ( ; !DDL_StateIsLeaf(&state); ++v7 )
    {
      if ( DDL_StateIsArrayRoot(&state) )
      {
        v8 = lui_tointeger32(luaVM, v7);
        DDL_MoveToIndex(&state, &state, v8);
      }
      else
      {
        if ( !j_lua_tolstring(luaVM, v7, NULL) )
        {
          v10 = j_va("Expected string when navigating DDL data but got NULL");
          j_luaL_error(luaVM, v10);
        }
        v9 = j_lua_tolstring(luaVM, v7, NULL);
        DDL_MoveToName(&state, &state, v9);
      }
    }
    v11 = 1;
  }
  else
  {
    Com_PrintError(13, "GetMatchRulesData called when when not using recipe\n");
    v11 = 0;
  }
  j_lua_pushboolean(luaVM, v11);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v12 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v12);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_SupportsDefaultMenu
==============
*/
__int64 LUI_CoD_LuaCall_SupportsDefaultMenu(lua_State *const luaVM)
{
  unsigned int v2; 

  j_lua_pushboolean(luaVM, 1);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_DCache_ClearDCache
==============
*/
__int64 LUI_CoD_LuaCall_DCache_ClearDCache(lua_State *const luaVM)
{
  dcacheType_t v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: DCache.ClearCache( <cacheType> )\n");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: DCache.ClearCache( <cacheType> )\n");
  v2 = lui_tointeger32(luaVM, 1);
  Com_DCache_Clear(v2);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_PLMRefreshData
==============
*/
__int64 LUI_CoD_LuaCall_PLMRefreshData(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Engine.PLMRefreshData()");
  if ( !j_lua_gettop(luaVM) )
    Sys_PLM_WriteData(1, 1);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetMatchRulesData
==============
*/
__int64 LUI_CoD_LuaCall_GetMatchRulesData(lua_State *const luaVM)
{
  GameStateInfo *v2; 
  const DDLDef *Asset; 
  unsigned int DDL; 
  int v5; 
  unsigned int v6; 
  DDLContext ddlContext; 

  v2 = GameStateInfo_Get();
  Asset = Com_DDL_LoadAsset("ddl/mp/recipes.ddl");
  if ( v2->usingRecipe )
  {
    if ( !v2->matchRules && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_functions.cpp", 16639, ASSERT_TYPE_ASSERT, "(gInfo->matchRules)", (const char *)&queryFormat, "gInfo->matchRules") )
      __debugbreak();
    Com_DDL_CreateContext(v2->matchRules, 4096, Asset, &ddlContext, NULL, NULL);
    v5 = j_lua_gettop(luaVM);
    DDL = LUI_GetDDL(luaVM, v5, Asset, &ddlContext, STATSGROUP_IGNORE);
  }
  else
  {
    Com_PrintError(13, "MatchRules.GetMatchRulesData called when when not using recipe\n");
    DDL = 0;
  }
  if ( (int)DDL > j_lua_gettop(luaVM) )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", DDL, v6);
  }
  return DDL;
}

/*
==============
LUI_CoD_LuaCall_DCache_ClearStartupCount
==============
*/
__int64 LUI_CoD_LuaCall_DCache_ClearStartupCount(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: DCache.ClearStartupCount()\n");
  DCache_ResetStartupCount(1);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_DCache_IsStartupDisabled
==============
*/
__int64 LUI_CoD_LuaCall_DCache_IsStartupDisabled(lua_State *const luaVM)
{
  bool IsStartupDisabled; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: DCache.IsStartupDisabled()\n");
  IsStartupDisabled = DCache_IsStartupDisabled();
  j_lua_pushboolean(luaVM, IsStartupDisabled);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_DeprecatedIsGamepadEnabled
==============
*/
__int64 LUI_CoD_LuaCall_DeprecatedIsGamepadEnabled(lua_State *const luaVM)
{
  LocalClientNum_t CurrentLocalClient; 
  __int64 v3; 
  unsigned int v4; 

  CurrentLocalClient = LUI_CoD_GetCurrentLocalClient();
  v3 = 0i64;
  if ( LUI_CoD_InFrontend() )
  {
    CurrentLocalClient = LOCAL_CLIENT_0;
  }
  else if ( CurrentLocalClient == LOCAL_CLIENT_INVALID )
  {
    goto LABEL_5;
  }
  LOBYTE(v3) = CL_Input_IsGamepadEnabled(CurrentLocalClient);
LABEL_5:
  j_lua_pushinteger(luaVM, v3);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetMatchRulesDefaultData
==============
*/
__int64 LUI_CoD_LuaCall_GetMatchRulesDefaultData(lua_State *const luaVM)
{
  GameStateInfo *v2; 
  GameStateInfo *v3; 
  unsigned int DDL; 
  const DDLDef *Asset; 
  const char *GameType; 
  const MatchRulesRawfileCache *MatchRulesDefaultDataFromFF; 
  int v8; 
  unsigned int v9; 
  DDLContext ddlContext; 

  v2 = GameStateInfo_Get();
  v3 = v2;
  if ( v2->usingRecipe )
  {
    if ( !v2->matchRules && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_functions.cpp", 16663, ASSERT_TYPE_ASSERT, "(gInfo->matchRules)", (const char *)&queryFormat, "gInfo->matchRules") )
      __debugbreak();
    Asset = Com_DDL_LoadAsset("ddl/mp/recipes.ddl");
    GameType = BG_MatchRulesData_GetGameType(v3->matchRules);
    MatchRulesDefaultDataFromFF = GetMatchRulesDefaultDataFromFF(GameType);
    Com_DDL_CreateContext(MatchRulesDefaultDataFromFF->data, 4096, Asset, &ddlContext, NULL, NULL);
    v8 = j_lua_gettop(luaVM);
    DDL = LUI_GetDDL(luaVM, v8, Asset, &ddlContext, STATSGROUP_IGNORE);
  }
  else
  {
    Com_PrintError(13, "MatchRules.GetDefaultData called when when not using recipe\n");
    DDL = 0;
  }
  if ( (int)DDL > j_lua_gettop(luaVM) )
  {
    v9 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", DDL, v9);
  }
  return DDL;
}

/*
==============
LUI_CoD_LuaCall_DCache_AdditionalData_GetLanguage
==============
*/
__int64 LUI_CoD_LuaCall_DCache_AdditionalData_GetLanguage(lua_State *const luaVM)
{
  int Language; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: DCache.GetLanguage()\n");
  Language = Sys_GetLanguage();
  j_lua_pushinteger(luaVM, Language);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_IsGamepadEnabledForController
==============
*/
__int64 LUI_CoD_LuaCall_IsGamepadEnabledForController(lua_State *const luaVM)
{
  unsigned int v2; 
  int v3; 
  LocalClientNum_t ClientFromController; 
  bool IsGamepadEnabled; 
  unsigned int v6; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.IsGamepadEnabledForController( <controllerIndex> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v3 = lui_tointeger32(luaVM, 1);
    ClientFromController = CL_Mgr_GetClientFromController(v3);
    if ( ClientFromController == LOCAL_CLIENT_INVALID )
    {
      j_lua_pushboolean(luaVM, 0);
    }
    else
    {
      IsGamepadEnabled = CL_Input_IsGamepadEnabled(ClientFromController);
      j_lua_pushboolean(luaVM, IsGamepadEnabled);
    }
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
LUI_CoD_LuaCall_DCache_AdditionalData_SetLanguage
==============
*/
__int64 LUI_CoD_LuaCall_DCache_AdditionalData_SetLanguage(lua_State *const luaVM)
{
  language_t v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: DCache.SetLanguage( language )\n");
  v2 = lui_tointeger32(luaVM, 1);
  Sys_StoreLanguage(v2);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetMatchRulesMetaData
==============
*/
__int64 LUI_CoD_LuaCall_GetMatchRulesMetaData(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_CoD_LuaCall_GetMatchRulesMetaData_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_SetGamepadEnabled
==============
*/
__int64 LUI_CoD_LuaCall_SetGamepadEnabled(lua_State *const luaVM)
{
  int v2; 
  int v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, "USAGE: Engine.SetGamepadEnabled( <controllerIndex>, <bool> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_type(luaVM, 2) == 1 )
  {
    v2 = lui_tointeger32(luaVM, 1);
    v3 = j_lua_toboolean(luaVM, 2);
    CL_Input_SetGamepadEnabled(v2, v3 != 0);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetUsernameByController
==============
*/
__int64 LUI_CoD_LuaCall_GetUsernameByController(lua_State *const luaVM)
{
  const char *UsernameForLocalClient; 
  int v3; 
  unsigned int v4; 

  UsernameForLocalClient = (char *)&queryFormat.fmt + 3;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.GetUsernameByController( <controller> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v3 = lui_tointeger32(luaVM, 1);
    UsernameForLocalClient = CL_GetUsernameForLocalClient(v3);
  }
  j_lua_pushstring(luaVM, UsernameForLocalClient);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_HasAcceptedInvite
==============
*/
__int64 LUI_CoD_LuaCall_HasAcceptedInvite(lua_State *const luaVM)
{
  bool HasAcceptedInvite; 
  unsigned int v3; 

  HasAcceptedInvite = Live_Invitation_HasAcceptedInvite();
  j_lua_pushboolean(luaVM, HasAcceptedInvite);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_ClearMetaDataCache
==============
*/
__int64 LUI_CoD_LuaCall_ClearMetaDataCache(lua_State *const luaVM)
{
  unsigned int v2; 

  BG_MatchRulesHistory_ClearHeaderCache();
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_DeclineInvitationOnGamerProfileFenceBackout
==============
*/
__int64 LUI_CoD_LuaCall_DeclineInvitationOnGamerProfileFenceBackout(lua_State *const luaVM)
{
  unsigned int v2; 

  Live_CancelInvitationAfterDecliningEULAIfRequired();
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_SetMatchRulesData
==============
*/
__int64 LUI_CoD_LuaCall_SetMatchRulesData(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_CoD_LuaCall_SetMatchRulesData_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_GetPlayerIntelIsFound
==============
*/
__int64 LUI_CoD_LuaCall_GetPlayerIntelIsFound(lua_State *const luaVM)
{
  unsigned __int16 v2; 
  bool IsFound; 
  unsigned int v4; 
  int controllerIndex; 
  LocalClientNum_t localClientNum; 

  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_STILL_LAND|WEAPON_FIRING|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_functions.cpp", 4052, ASSERT_TYPE_ASSERT, "(!Com_GameMode_SupportsFeature(Com_GameMode_Feature::UI_MULTIPLAYER ))", (const char *)&queryFormat, "!Com_GameMode_SupportsFeature(Com_GameMode_Feature::UI_MULTIPLAYER )") )
    __debugbreak();
  LUI_CoD_AttemptInferLocalClientAndController(&localClientNum, &controllerIndex);
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "GetPlayerIntelIsFound only takes one integer argument <index>");
  v2 = lui_tointeger32(luaVM, 1);
  IsFound = GamerProfile_GetPlayerIntelIsFound(controllerIndex, v2);
  j_lua_pushboolean(luaVM, IsFound);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_CacheDataFromSlot
==============
*/
__int64 LUI_CoD_LuaCall_CacheDataFromSlot(lua_State *const luaVM)
{
  unsigned int v2; 
  const dvar_t *v3; 
  int ControllerFromClient; 
  MatchRules *MatchRulesEditingCache; 
  MatchRulesReturnCode v6; 
  unsigned int v7; 
  unsigned int v8; 

  v2 = lui_tointeger32(luaVM, -1);
  if ( v2 > 9 )
  {
    Com_PrintError(13, "MatchRules.CacheDataFromSlot: Slot index is not within bounds\n");
  }
  else
  {
    v3 = DVARBOOL_onlinegame;
    if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v3);
    if ( !v3->current.enabled || Lobby_IsInLobby() )
    {
      ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
      MatchRulesEditingCache = BG_MatchRulesData_GetMatchRulesEditingCache();
      memset_0(MatchRulesEditingCache, 0, sizeof(MatchRules));
      v6 = BG_MatchRulesHistory_ReadFromDisk(MatchRulesEditingCache, ControllerFromClient, MR_SAVELOC_PLAYERSAVED, v2);
      j_lua_pushboolean(luaVM, v6 == MR_RETCODE_TRUE);
      v7 = 1;
      goto LABEL_11;
    }
    Com_PrintError(13, "MatchRules.CacheDataFromSlot called while not in lobby\n");
  }
  v7 = 0;
LABEL_11:
  if ( (int)v7 > j_lua_gettop(luaVM) )
  {
    v8 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v7, v8);
  }
  return v7;
}

/*
==============
LUI_CoD_LuaCall_CurrentMapHasSave
==============
*/
__int64 LUI_CoD_LuaCall_CurrentMapHasSave(lua_State *const luaVM)
{
  bool HasSaveGame; 
  unsigned int v3; 

  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_STILL_LAND|WEAPON_FIRING|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_functions.cpp", 4084, ASSERT_TYPE_ASSERT, "(!Com_GameMode_SupportsFeature( Com_GameMode_Feature::UI_MULTIPLAYER ))", (const char *)&queryFormat, "!Com_GameMode_SupportsFeature( Com_GameMode_Feature::UI_MULTIPLAYER )") )
    __debugbreak();
  HasSaveGame = CL_MainSP_CurrentMapHasSaveGame();
  j_lua_pushboolean(luaVM, HasSaveGame);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_SPPause
==============
*/
__int64 LUI_CoD_LuaCall_SPPause(lua_State *const luaVM)
{
  unsigned int v2; 
  LocalClientNum_t CurrentLocalClient; 
  CLPauseReason v4; 
  bool v5; 
  unsigned int v6; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.SPPause( <pauseReasonEnum> )\n");
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_STILL_LAND|WEAPON_FIRING|0x80) || Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_SLOW_HARD_LAND|WEAPON_FIRING|0x80) )
  {
    v2 = 0;
  }
  else
  {
    CurrentLocalClient = LUI_CoD_GetCurrentLocalClient();
    v4 = lui_tointeger32(luaVM, 1);
    v5 = CL_MainSP_Pause(CurrentLocalClient, 0, v4);
    if ( v5 )
      SND_SetUIPause(1);
    j_lua_pushboolean(luaVM, v5);
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
LUI_CoD_LuaCall_SetDataToCachedSlot
==============
*/
__int64 LUI_CoD_LuaCall_SetDataToCachedSlot(lua_State *const luaVM)
{
  const dvar_t *v2; 
  unsigned int v3; 
  MatchRules *MatchRulesEditingCache; 
  int v5; 
  const DDLDef *Asset; 
  bool v7; 
  unsigned int v8; 
  DDLContext ddlContext; 

  v2 = DVARBOOL_onlinegame;
  if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( !v2->current.enabled || Lobby_IsInLobby() )
  {
    MatchRulesEditingCache = BG_MatchRulesData_GetMatchRulesEditingCache();
    v5 = j_lua_gettop(luaVM);
    Asset = Com_DDL_LoadAsset("ddl/mp/recipes.ddl");
    Com_DDL_CreateContext(MatchRulesEditingCache, 4096, Asset, &ddlContext, NULL, NULL);
    v7 = LUI_SetDDL(luaVM, v5, Asset, &ddlContext, STATSGROUP_IGNORE);
    j_lua_pushboolean(luaVM, v7);
    v3 = 1;
  }
  else
  {
    Com_PrintError(13, "MatchRules.SetDataToCachedSlot called while not in lobby\n");
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
LUI_CoD_LuaCall_Pause
==============
*/
__int64 LUI_CoD_LuaCall_Pause(lua_State *const luaVM)
{
  int v2; 
  CLPauseReason PauseReason; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.Pause( <pauseReasonEnum> )\n");
  v2 = lui_tointeger32(luaVM, 1);
  PauseReason = CL_Pause_GetPauseReason();
  CL_Pause_SetPauseReason((CLPauseReason)(v2 | PauseReason));
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_SaveCachedDataToSlot
==============
*/
__int64 LUI_CoD_LuaCall_SaveCachedDataToSlot(lua_State *const luaVM)
{
  unsigned int v2; 
  const dvar_t *v3; 
  int ControllerFromClient; 
  MatchRules *MatchRulesEditingCache; 
  unsigned int v6; 

  v2 = lui_tointeger32(luaVM, -1);
  if ( v2 > 9 )
  {
    Com_PrintError(13, "MatchRules.SaveCachedDataToSlot: Slot index is not within bounds\n");
  }
  else
  {
    v3 = DVARBOOL_onlinegame;
    if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v3);
    if ( !v3->current.enabled || Lobby_IsInLobby() )
    {
      ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
      MatchRulesEditingCache = BG_MatchRulesData_GetMatchRulesEditingCache();
      BG_MatchRules_UpdateChecksumAndVersion(MatchRulesEditingCache);
      BG_MatchRulesHistory_WriteToDisk(MatchRulesEditingCache, ControllerFromClient, MR_SAVELOC_PLAYERSAVED, v2);
    }
    else
    {
      Com_PrintError(13, "MatchRules.SaveCachedDataToSlot called while not in lobby\n");
    }
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v6);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_Unpause
==============
*/
__int64 LUI_CoD_LuaCall_Unpause(lua_State *const luaVM)
{
  CLPauseReason v2; 
  LocalClientNum_t CurrentLocalClient; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.Unpause( <pauseReasonEnum> )\n");
  v2 = lui_tointeger32(luaVM, 1);
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_STILL_LAND|WEAPON_FIRING|0x80) )
  {
    CL_MainMP_Unpause(v2);
  }
  else
  {
    CurrentLocalClient = LUI_CoD_GetCurrentLocalClient();
    CL_MainSP_Unpause(CurrentLocalClient, v2);
    SND_SetUIPause(0);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_CustomClassIsRestricted
==============
*/
__int64 LUI_CoD_LuaCall_CustomClassIsRestricted(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_CoD_LuaCall_CustomClassIsRestricted_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_UnpauseUISounds
==============
*/
__int64 LUI_CoD_LuaCall_UnpauseUISounds(lua_State *const luaVM)
{
  unsigned int v2; 

  SND_SetUIPause(0);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_StartTransitionSettleFrames
==============
*/
__int64 LUI_CoD_LuaCall_StartTransitionSettleFrames(lua_State *const luaVM)
{
  LocalClientNum_t CurrentLocalClient; 
  int v3; 
  unsigned int v4; 

  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_STILL_LAND|WEAPON_FIRING|0x80) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_functions.cpp", 4213, ASSERT_TYPE_ASSERT, "(0)", "%s\n\tEngine.StartTransitionSettleFrames is not supported in multiplayer.", "0") )
      __debugbreak();
  }
  else
  {
    CurrentLocalClient = LUI_CoD_GetCurrentLocalClient();
    if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
      j_luaL_error(luaVM, "Engine.StartTransitionSettleFrames only takes one integer argument <settleTimeMs>");
    v3 = lui_tointeger32(luaVM, 1);
    CL_MainSP_StartTransitionSettleFrames(CurrentLocalClient, v3);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_SuperIsRestricted
==============
*/
__int64 LUI_CoD_LuaCall_SuperIsRestricted(lua_State *const luaVM)
{
  unsigned int v2; 
  const char *v3; 
  int IsSuperRestricted; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) == 1 && (v2 = 1, j_lua_isstring(luaVM, 1)) )
  {
    if ( GameStateInfo_Get()->usingRecipe )
    {
      v3 = j_lua_tolstring(luaVM, 1, NULL);
      IsSuperRestricted = MatchRules_IsSuperRestricted(v3);
      j_lua_pushboolean(luaVM, IsSuperRestricted);
    }
    else
    {
      j_lua_pushboolean(luaVM, 0);
    }
  }
  else
  {
    Com_PrintError(13, "USAGE: MatchRules.SuperIsRestricted( <superName> )\n");
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v5);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_KillstreakIsRestricted
==============
*/
__int64 LUI_CoD_LuaCall_KillstreakIsRestricted(lua_State *const luaVM)
{
  unsigned int v2; 
  const char *v3; 
  int IsKillstreakRestricted; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) == 1 && (v2 = 1, j_lua_isstring(luaVM, 1)) )
  {
    if ( GameStateInfo_Get()->usingRecipe )
    {
      v3 = j_lua_tolstring(luaVM, 1, NULL);
      IsKillstreakRestricted = MatchRules_IsKillstreakRestricted(v3);
      j_lua_pushboolean(luaVM, IsKillstreakRestricted);
    }
    else
    {
      j_lua_pushboolean(luaVM, 0);
    }
  }
  else
  {
    Com_PrintError(13, "USAGE: MatchRules.KillstreakIsRestricted( <killstreakName> )\n");
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v5);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_IsRunningTransitionSettleFrames
==============
*/
__int64 LUI_CoD_LuaCall_IsRunningTransitionSettleFrames(lua_State *const luaVM)
{
  int IsRunningTransitionSettleFrames; 
  LocalClientNum_t CurrentLocalClient; 
  unsigned int v4; 

  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_STILL_LAND|WEAPON_FIRING|0x80) )
  {
    IsRunningTransitionSettleFrames = 0;
  }
  else
  {
    CurrentLocalClient = LUI_CoD_GetCurrentLocalClient();
    IsRunningTransitionSettleFrames = CL_MainSP_IsRunningTransitionSettleFrames(CurrentLocalClient);
  }
  j_lua_pushboolean(luaVM, IsRunningTransitionSettleFrames);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_AttachmentIsRestricted
==============
*/
__int64 LUI_CoD_LuaCall_AttachmentIsRestricted(lua_State *const luaVM)
{
  unsigned int v2; 
  const char *v3; 
  const char *v4; 
  const char *v5; 
  int IsWeaponAttachmentRestricted; 
  unsigned int v7; 
  char dest[256]; 

  if ( j_lua_gettop(luaVM) == 2 && (v2 = 1, j_lua_isstring(luaVM, 1)) && j_lua_isstring(luaVM, 2) )
  {
    if ( GameStateInfo_Get()->usingRecipe )
    {
      v3 = j_lua_tolstring(luaVM, 1, NULL);
      if ( MatchRules_IsAttachmentRestricted(v3) )
      {
        j_lua_pushboolean(luaVM, 1);
      }
      else
      {
        v4 = j_lua_tolstring(luaVM, 1, NULL);
        v5 = j_lua_tolstring(luaVM, 2, NULL);
        Com_sprintf<256>((char (*)[256])dest, "%s_%s", v5, v4);
        IsWeaponAttachmentRestricted = MatchRules_IsWeaponAttachmentRestricted(dest);
        j_lua_pushboolean(luaVM, IsWeaponAttachmentRestricted);
      }
    }
    else
    {
      j_lua_pushboolean(luaVM, 0);
    }
  }
  else
  {
    Com_PrintError(13, "USAGE: MatchRules.AttachmentIsRestricted( <attachmentName>, <weaponName> )\n");
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
LUI_CoD_LuaCall_DuckAudio
==============
*/
__int64 LUI_CoD_LuaCall_DuckAudio(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_SetSoundSubmix
==============
*/
__int64 LUI_CoD_LuaCall_SetSoundSubmix(lua_State *const luaVM)
{
  const char *v2; 
  unsigned int v3; 

  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_STILL_LAND|WEAPON_FIRING|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_functions.cpp", 4293, ASSERT_TYPE_ASSERT, "(!Com_GameMode_SupportsFeature( Com_GameMode_Feature::UI_MULTIPLAYER ))", (const char *)&queryFormat, "!Com_GameMode_SupportsFeature( Com_GameMode_Feature::UI_MULTIPLAYER )") )
    __debugbreak();
  if ( (j_lua_gettop(luaVM) != 1 || j_lua_type(luaVM, 1) != 1) && (j_lua_gettop(luaVM) != 2 || j_lua_type(luaVM, 1) != 1 || !j_lua_isstring(luaVM, 2)) )
    j_luaL_error(luaVM, "USAGE: Engine.DuckAudio( enableDucking, duckName<optional> )");
  if ( j_lua_toboolean(luaVM, 1) )
  {
    v2 = "bink_from_frontend";
    if ( j_lua_isstring(luaVM, 2) )
      v2 = j_lua_tolstring(luaVM, 2, NULL);
  }
  else
  {
    v2 = NULL;
  }
  SND_SubmixSetSlotFromLUA(v2);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_AttachmentClassIsRestricted
==============
*/
__int64 LUI_CoD_LuaCall_AttachmentClassIsRestricted(lua_State *const luaVM)
{
  unsigned int v2; 
  const char *v3; 
  int IsAttachmentClassRestricted; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) == 1 && (v2 = 1, j_lua_isstring(luaVM, 1)) )
  {
    if ( GameStateInfo_Get()->usingRecipe )
    {
      v3 = j_lua_tolstring(luaVM, 1, NULL);
      IsAttachmentClassRestricted = MatchRules_IsAttachmentClassRestricted(v3);
      j_lua_pushboolean(luaVM, IsAttachmentClassRestricted);
    }
    else
    {
      j_lua_pushboolean(luaVM, 0);
    }
  }
  else
  {
    Com_PrintError(13, "USAGE: MatchRules.AttachmentClassIsRestricted( <attachmentClassName> )\n");
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v5);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_PerkIsRestricted
==============
*/
__int64 LUI_CoD_LuaCall_PerkIsRestricted(lua_State *const luaVM)
{
  unsigned int v2; 
  const char *v3; 
  int IsPerkRestricted; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) == 1 && (v2 = 1, j_lua_isstring(luaVM, 1)) )
  {
    if ( GameStateInfo_Get()->usingRecipe )
    {
      v3 = j_lua_tolstring(luaVM, 1, NULL);
      IsPerkRestricted = MatchRules_IsPerkRestricted(v3);
      j_lua_pushboolean(luaVM, IsPerkRestricted);
    }
    else
    {
      j_lua_pushboolean(luaVM, 0);
    }
  }
  else
  {
    Com_PrintError(13, "USAGE: MatchRules.PerkIsRestricted( <perkName> )\n");
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v5);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_StopAllSounds
==============
*/
__int64 LUI_CoD_LuaCall_StopAllSounds(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( LUI_Workers_IsRunningCmd() )
    LUI_Workers_QueueStopAllSounds();
  else
    SND_StopSounds(SND_STOP_ALL);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_EquipmentIsRestricted
==============
*/
__int64 LUI_CoD_LuaCall_EquipmentIsRestricted(lua_State *const luaVM)
{
  unsigned int v2; 
  const char *v3; 
  int IsEquipmentRestricted; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) == 1 && (v2 = 1, j_lua_isstring(luaVM, 1)) )
  {
    if ( GameStateInfo_Get()->usingRecipe )
    {
      v3 = j_lua_tolstring(luaVM, 1, NULL);
      IsEquipmentRestricted = MatchRules_IsEquipmentRestricted(v3);
      j_lua_pushboolean(luaVM, IsEquipmentRestricted);
    }
    else
    {
      j_lua_pushboolean(luaVM, 0);
    }
  }
  else
  {
    Com_PrintError(13, "USAGE: MatchRules.EquipmentIsRestricted( <equipmentName> )\n");
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v5);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_Localize
==============
*/
__int64 LUI_CoD_LuaCall_Localize(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_CoD_LuaCall_Localize_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_SetAttachmentRestricted
==============
*/
__int64 LUI_CoD_LuaCall_SetAttachmentRestricted(lua_State *const luaVM)
{
  unsigned int v2; 
  const char *v3; 
  int v4; 
  int matched; 
  unsigned int v6; 

  if ( j_lua_gettop(luaVM) == 2 && (v2 = 1, j_lua_isstring(luaVM, 1)) && j_lua_type(luaVM, 2) == 1 )
  {
    if ( GameStateInfo_Get()->usingRecipe )
    {
      v3 = j_lua_tolstring(luaVM, 1, NULL);
      v4 = j_lua_toboolean(luaVM, 2);
      matched = MatchRules_SetAttachmentRestricted(v3, v4 != 0);
      j_lua_pushboolean(luaVM, matched);
    }
    else
    {
      j_lua_pushboolean(luaVM, 0);
    }
  }
  else
  {
    Com_PrintError(13, "USAGE: MatchRules.SetAttachmentRestricted( <attachmentName>, isRestricted )\n");
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
LUI_CoD_LuaCall_SetAttachmentClassRestricted
==============
*/
__int64 LUI_CoD_LuaCall_SetAttachmentClassRestricted(lua_State *const luaVM)
{
  unsigned int v2; 
  const char *v3; 
  int v4; 
  int matched; 
  unsigned int v6; 

  if ( j_lua_gettop(luaVM) == 2 && (v2 = 1, j_lua_isstring(luaVM, 1)) && j_lua_type(luaVM, 2) == 1 )
  {
    if ( GameStateInfo_Get()->usingRecipe )
    {
      v3 = j_lua_tolstring(luaVM, 1, NULL);
      v4 = j_lua_toboolean(luaVM, 2);
      matched = MatchRules_SetAttachmentClassRestricted(v3, v4 != 0);
      j_lua_pushboolean(luaVM, matched);
    }
    else
    {
      j_lua_pushboolean(luaVM, 0);
    }
  }
  else
  {
    Com_PrintError(13, "USAGE: MatchRules.SetAttachmentClassRestricted( <attachmentClassName>, isRestricted )\n");
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
LUI_CoD_LuaCall_SetPerkRestricted
==============
*/
__int64 LUI_CoD_LuaCall_SetPerkRestricted(lua_State *const luaVM)
{
  unsigned int v2; 
  const char *v3; 
  int v4; 
  int matched; 
  unsigned int v6; 

  if ( j_lua_gettop(luaVM) == 2 && (v2 = 1, j_lua_isstring(luaVM, 1)) && j_lua_type(luaVM, 2) == 1 )
  {
    if ( GameStateInfo_Get()->usingRecipe )
    {
      v3 = j_lua_tolstring(luaVM, 1, NULL);
      v4 = j_lua_toboolean(luaVM, 2);
      matched = MatchRules_SetPerkRestricted(v3, v4 != 0);
      j_lua_pushboolean(luaVM, matched);
    }
    else
    {
      j_lua_pushboolean(luaVM, 0);
    }
  }
  else
  {
    Com_PrintError(13, "USAGE: MatchRules.SetPerkRestricted( <perkName>, isRestricted )\n");
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
LUI_CoD_LuaCall_LocalizeLong
==============
*/
__int64 LUI_CoD_LuaCall_LocalizeLong(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_CoD_LuaCall_LocalizeLong_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_SetEquipmentRestricted
==============
*/
__int64 LUI_CoD_LuaCall_SetEquipmentRestricted(lua_State *const luaVM)
{
  unsigned int v2; 
  const char *v3; 
  int v4; 
  int matched; 
  unsigned int v6; 

  if ( j_lua_gettop(luaVM) == 2 && (v2 = 1, j_lua_isstring(luaVM, 1)) && j_lua_type(luaVM, 2) == 1 )
  {
    if ( GameStateInfo_Get()->usingRecipe )
    {
      v3 = j_lua_tolstring(luaVM, 1, NULL);
      v4 = j_lua_toboolean(luaVM, 2);
      matched = MatchRules_SetEquipmentRestricted(v3, v4 != 0);
      j_lua_pushboolean(luaVM, matched);
    }
    else
    {
      j_lua_pushboolean(luaVM, 0);
    }
  }
  else
  {
    Com_PrintError(13, "USAGE: MatchRules.SetEquipmentRestricted( <equipmentName>, isRestricted )\n");
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
LUI_CoD_LuaCall_MarkLocalized
==============
*/
__int64 LUI_CoD_LuaCall_MarkLocalized(lua_State *const luaVM)
{
  unsigned int v1; 
  const char *v3; 
  const char *v4; 
  unsigned int v5; 

  v1 = 1;
  if ( !j_lua_isstring(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.MarkLocalized( <preLocString> ) ");
  if ( j_lua_isstring(luaVM, 1) )
  {
    v3 = j_lua_tolstring(luaVM, 1, NULL);
    v4 = j_va(&byte_1444661C0, v3);
    j_lua_pushstring(luaVM, v4);
  }
  else
  {
    v1 = 0;
  }
  if ( (int)v1 > j_lua_gettop(luaVM) )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v1, v5);
  }
  return v1;
}

/*
==============
LUI_CoD_LuaCall_SetSuperRestricted
==============
*/
__int64 LUI_CoD_LuaCall_SetSuperRestricted(lua_State *const luaVM)
{
  unsigned int v2; 
  const char *v3; 
  int v4; 
  int matched; 
  unsigned int v6; 

  if ( j_lua_gettop(luaVM) == 2 && (v2 = 1, j_lua_isstring(luaVM, 1)) && j_lua_type(luaVM, 2) == 1 )
  {
    if ( GameStateInfo_Get()->usingRecipe )
    {
      v3 = j_lua_tolstring(luaVM, 1, NULL);
      v4 = j_lua_toboolean(luaVM, 2);
      matched = MatchRules_SetSuperRestricted(v3, v4 != 0);
      j_lua_pushboolean(luaVM, matched);
    }
    else
    {
      j_lua_pushboolean(luaVM, 0);
    }
  }
  else
  {
    Com_PrintError(13, "USAGE: MatchRules.SetSuperRestricted( <superName>, isRestricted )\n");
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
LUI_CoD_LuaCall_IndexForNetConstString
==============
*/
__int64 LUI_CoD_LuaCall_IndexForNetConstString(lua_State *const luaVM)
{
  unsigned int v2; 
  const char *v3; 
  unsigned int v4; 
  unsigned int luiStringIndex; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: Engine.IndexForNetConstString( <netconststring_value> )");
  v2 = 1;
  if ( !j_lua_isstring(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.IndexForNetConstString( <netconststring_value> )");
  if ( !NetConstStrings_AreStringsLoaded() )
    j_luaL_error(luaVM, "Net const strings should be loaded at all times when doing lookups, otherwise inconsistent results will occur.");
  v3 = j_lua_tolstring(luaVM, 1, NULL);
  if ( NetConstStrings_GetLuiStringIndex(v3, &luiStringIndex) )
    j_lua_pushinteger(luaVM, (int)luiStringIndex);
  else
    v2 = 0;
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v4);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_SetKillstreakRestricted
==============
*/
__int64 LUI_CoD_LuaCall_SetKillstreakRestricted(lua_State *const luaVM)
{
  unsigned int v2; 
  const char *v3; 
  int v4; 
  int matched; 
  unsigned int v6; 

  if ( j_lua_gettop(luaVM) == 2 && (v2 = 1, j_lua_isstring(luaVM, 1)) && j_lua_type(luaVM, 2) == 1 )
  {
    if ( GameStateInfo_Get()->usingRecipe )
    {
      v3 = j_lua_tolstring(luaVM, 1, NULL);
      v4 = j_lua_toboolean(luaVM, 2);
      matched = MatchRules_SetKillstreakRestricted(v3, v4 != 0);
      j_lua_pushboolean(luaVM, matched);
    }
    else
    {
      j_lua_pushboolean(luaVM, 0);
    }
  }
  else
  {
    Com_PrintError(13, "USAGE: MatchRules.SetKillstreakRestricted( <killstreakName>, isRestricted )\n");
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
LUI_CoD_LuaCall_NetConstStringFromIndex
==============
*/
__int64 LUI_CoD_LuaCall_NetConstStringFromIndex(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 
  unsigned int v4; 
  char *outLuiString; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: Engine.NetConstStringFromIndex( <netconststring_index> )");
  v2 = 1;
  if ( !j_lua_isstring(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.NetConstStringFromIndex( <netconststring_index> )");
  if ( !NetConstStrings_AreStringsLoaded() )
    j_luaL_error(luaVM, "Net const strings should be loaded at all times when doing lookups, otherwise inconsistent results will occur.");
  v3 = lui_tointeger32(luaVM, 1);
  if ( NetConstStrings_GetLuiStringName(v3, (const char **)&outLuiString) )
    j_lua_pushstring(luaVM, outLuiString);
  else
    v2 = 0;
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v4);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_WeaponIsRestricted
==============
*/
__int64 LUI_CoD_LuaCall_WeaponIsRestricted(lua_State *const luaVM)
{
  unsigned int v2; 
  const char *v3; 
  int IsWeaponRestricted; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) == 1 && (v2 = 1, j_lua_isstring(luaVM, 1)) )
  {
    if ( GameStateInfo_Get()->usingRecipe )
    {
      v3 = j_lua_tolstring(luaVM, 1, NULL);
      IsWeaponRestricted = MatchRules_IsWeaponRestricted(v3);
      j_lua_pushboolean(luaVM, IsWeaponRestricted);
    }
    else
    {
      j_lua_pushboolean(luaVM, 0);
    }
  }
  else
  {
    Com_PrintError(13, "USAGE: MatchRules.WeaponIsRestricted( <weaponName> )\n");
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v5);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_NotifyServer
==============
*/
__int64 LUI_CoD_LuaCall_NotifyServer(lua_State *const luaVM)
{
  LocalClientNum_t CurrentValidLocalClient; 
  const char *v3; 
  int v4; 
  unsigned int v5; 
  int v7; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isstring(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Engine.NotifyServer( <channelName>, <numericData> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isstring(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    if ( LUI_CoD_InFrontend() )
      CurrentValidLocalClient = LOCAL_CLIENT_0;
    else
      CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
    v3 = j_lua_tolstring(luaVM, 1, NULL);
    v7 = lui_tointeger32(luaVM, 2);
    v4 = v7;
    Com_Printf(13, "Engine.NotifyServer called for localClientNum: %d, with channelName: %s, and data: %d.\n", (unsigned int)CurrentValidLocalClient, v3, v7);
    CG_ServerCmd_NotifyServer(CurrentValidLocalClient, v3, v4);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_WeaponClassIsRestricted
==============
*/
__int64 LUI_CoD_LuaCall_WeaponClassIsRestricted(lua_State *const luaVM)
{
  unsigned int v2; 
  const char *v3; 
  int IsWeaponClassRestricted; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) == 1 && (v2 = 1, j_lua_isstring(luaVM, 1)) )
  {
    if ( GameStateInfo_Get()->usingRecipe )
    {
      v3 = j_lua_tolstring(luaVM, 1, NULL);
      IsWeaponClassRestricted = MatchRules_IsWeaponClassRestricted(v3);
      j_lua_pushboolean(luaVM, IsWeaponClassRestricted);
    }
    else
    {
      j_lua_pushboolean(luaVM, 0);
    }
  }
  else
  {
    Com_PrintError(13, "USAGE: MatchRules.WeaponClassIsRestricted( <weaponClassName> )\n");
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v5);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_TelemetryMenuChange
==============
*/
__int64 LUI_CoD_LuaCall_TelemetryMenuChange(lua_State *const luaVM)
{
  int v2; 
  const char *v3; 
  const char *v4; 
  int v5; 
  bool isIntermission; 
  unsigned int v7; 

  if ( !j_lua_isnumber(luaVM, 1) || !j_lua_isstring(luaVM, 2) || !j_lua_isstring(luaVM, 3) || !j_lua_isnumber(luaVM, 4) )
    j_luaL_error(luaVM, "USAGE: Engine.TelemetryMenuChange( <controller>, <nextMenuName>, <prevMenuName>, <duration> )");
  v2 = lui_tointeger32(luaVM, 1);
  v3 = j_lua_tolstring(luaVM, 2, NULL);
  v4 = j_lua_tolstring(luaVM, 3, NULL);
  v5 = lui_tointeger32(luaVM, 4);
  isIntermission = 0;
  if ( Lobby_IsInRunningLobby() )
    isIntermission = (Lobby_GetPartyData()->lobbyFlags & 0x64) == 64;
  Online_Telemetry_StoreScreenView(v2, v3, v4, v5, isIntermission);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v7 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v7);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_SetWeaponRestricted
==============
*/
__int64 LUI_CoD_LuaCall_SetWeaponRestricted(lua_State *const luaVM)
{
  unsigned int v2; 
  const char *v3; 
  int v4; 
  int matched; 
  unsigned int v6; 

  if ( j_lua_gettop(luaVM) == 2 && (v2 = 1, j_lua_isstring(luaVM, 1)) && j_lua_type(luaVM, 2) == 1 )
  {
    if ( GameStateInfo_Get()->usingRecipe )
    {
      v3 = j_lua_tolstring(luaVM, 1, NULL);
      v4 = j_lua_toboolean(luaVM, 2);
      matched = MatchRules_SetWeaponRestricted(v3, v4 != 0);
      j_lua_pushboolean(luaVM, matched);
    }
    else
    {
      j_lua_pushboolean(luaVM, 0);
    }
  }
  else
  {
    Com_PrintError(13, "USAGE: MatchRules.SetWeaponRestricted( <weaponName>, isRestricted )\n");
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
LUI_CoD_LuaCall_StoreItemViewBegan
==============
*/
__int64 LUI_CoD_LuaCall_StoreItemViewBegan(lua_State *const luaVM)
{
  int v2; 
  unsigned int v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Engine.StoreItemViewBegan( <controller>, <itemId> )");
  v2 = lui_tointeger32(luaVM, 1);
  v3 = lui_tointeger32(luaVM, 2);
  Online_Telemetry_StoreItemViewBegin(v2, v3);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_SetWeaponClassRestricted
==============
*/
__int64 LUI_CoD_LuaCall_SetWeaponClassRestricted(lua_State *const luaVM)
{
  unsigned int v2; 
  const char *v3; 
  int v4; 
  int matched; 
  unsigned int v6; 

  if ( j_lua_gettop(luaVM) == 2 && (v2 = 1, j_lua_isstring(luaVM, 1)) && j_lua_type(luaVM, 2) == 1 )
  {
    if ( GameStateInfo_Get()->usingRecipe )
    {
      v3 = j_lua_tolstring(luaVM, 1, NULL);
      v4 = j_lua_toboolean(luaVM, 2);
      matched = MatchRules_SetWeaponClassRestricted(v3, v4 != 0);
      j_lua_pushboolean(luaVM, matched);
    }
    else
    {
      j_lua_pushboolean(luaVM, 0);
    }
  }
  else
  {
    Com_PrintError(13, "USAGE: MatchRules.SetWeaponClassRestricted( <weaponClassName>, isRestricted )\n");
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
LUI_CoD_LuaCall_StoreItemViewEnded
==============
*/
__int64 LUI_CoD_LuaCall_StoreItemViewEnded(lua_State *const luaVM)
{
  int v2; 
  unsigned int v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Engine.StoreItemViewEnded( <controller>, <itemId> )");
  v2 = lui_tointeger32(luaVM, 1);
  v3 = lui_tointeger32(luaVM, 2);
  Online_Telemetry_StoreItemViewEnd(v2, v3);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_InputSwapEnabled
==============
*/
__int64 LUI_CoD_LuaCall_InputSwapEnabled(lua_State *const luaVM)
{
  unsigned int v2; 
  GameStateInfo *v3; 
  bool InputSwapEnabled; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) )
  {
    Com_PrintError(13, "USAGE: MatchRules.InputSwapEnabled()\n");
    v2 = 0;
  }
  else if ( GameStateInfo_Get()->usingRecipe )
  {
    v3 = GameStateInfo_Get();
    InputSwapEnabled = BG_MatchRulesData_GetInputSwapEnabled(v3->matchRules);
    j_lua_pushboolean(luaVM, InputSwapEnabled);
    v2 = 1;
  }
  else
  {
    v2 = 1;
    j_lua_pushboolean(luaVM, 1);
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v5);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_StoreOpened
==============
*/
__int64 LUI_CoD_LuaCall_StoreOpened(lua_State *const luaVM)
{
  int v2; 
  const char *v3; 
  const char *v4; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 3 || !j_lua_isnumber(luaVM, 1) || !j_lua_isstring(luaVM, 2) || !j_lua_isstring(luaVM, 3) )
    j_luaL_error(luaVM, "USAGE: Engine.StoreOpened( <controller>, <source>, <actionSource> )");
  v2 = lui_tointeger32(luaVM, 1);
  v3 = j_lua_tolstring(luaVM, 2, NULL);
  v4 = j_lua_tolstring(luaVM, 3, NULL);
  Online_Telemetry_StoreOpenedEvent(v2, v3, v4);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_IsUsingCustomMapRotation
==============
*/
__int64 LUI_CoD_LuaCall_IsUsingCustomMapRotation(lua_State *const luaVM)
{
  GameStateInfo *v2; 
  unsigned int v3; 
  const dvar_t *v4; 
  unsigned int v5; 

  v2 = GameStateInfo_Get();
  if ( Lobby_IsInLobby() )
  {
    if ( Lobby_AreWeHost() )
    {
      v4 = DVARBOOL_xblive_privatematch;
      if ( !DVARBOOL_xblive_privatematch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xblive_privatematch") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v4);
      if ( v4->current.enabled )
      {
        if ( v2->mapRotation )
        {
          j_lua_pushboolean(luaVM, v2->usingRotation);
          v3 = 1;
        }
        else
        {
          Com_PrintError(13, "MatchRules.IsUsingCustomMapRotation called while not using map rotation\n");
          v3 = 0;
        }
      }
      else
      {
        Com_PrintError(13, "MatchRules.IsUsingCustomMapRotation called while not in private match\n");
        v3 = 0;
      }
    }
    else
    {
      Com_PrintError(13, "MatchRules.IsUsingCustomMapRotation called while not lobby host\n");
      v3 = 0;
    }
  }
  else
  {
    Com_PrintError(13, "MatchRules.IsUsingCustomMapRotation called while not in lobby\n");
    v3 = 0;
  }
  if ( (int)v3 > j_lua_gettop(luaVM) )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v3, v5);
  }
  return v3;
}

/*
==============
LUI_CoD_LuaCall_StoreClosed
==============
*/
__int64 LUI_CoD_LuaCall_StoreClosed(lua_State *const luaVM)
{
  int v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.StoreClosed( <controller> )");
  v2 = lui_tointeger32(luaVM, 1);
  Online_Telemetry_StoreClosedEvent(v2);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_SetUsingCustomMapRotation
==============
*/
__int64 LUI_CoD_LuaCall_SetUsingCustomMapRotation(lua_State *const luaVM)
{
  GameStateInfo *v2; 
  unsigned int v3; 

  v2 = GameStateInfo_Get();
  if ( j_lua_gettop(luaVM) != 1 || j_lua_type(luaVM, 1) != 1 )
    j_luaL_error(luaVM, "USAGE: MatchRules.SetUsingCustomMapRotation( <boolean> )\n");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_type(luaVM, 1) == 1 )
    v2->usingRotation = j_lua_toboolean(luaVM, 1) != 0;
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GenerateStoreSessionId
==============
*/
__int64 LUI_CoD_LuaCall_GenerateStoreSessionId(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 
  unsigned int v4; 
  bdRandom v6; 

  bdRandom::bdRandom(&v6);
  v2 = Sys_Microseconds();
  bdRandom::setSeed(&v6, v2);
  v3 = bdRandom::nextUInt(&v6);
  j_lua_pushinteger(luaVM, v3);
  bdRandom::~bdRandom(&v6);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_LoadMatchRulesDataFromHistory
==============
*/
__int64 LUI_CoD_LuaCall_LoadMatchRulesDataFromHistory(lua_State *const luaVM)
{
  unsigned int v2; 
  const dvar_t *v3; 
  GameStateInfo *v4; 
  int ControllerFromClient; 
  unsigned int v6; 

  if ( j_lua_gettop(luaVM) < 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) >= 1 && lua_isnumber( luaVM, 1 )");
  v2 = lui_tointeger32(luaVM, 1);
  if ( v2 > 0xA )
  {
    Com_PrintError(13, "MatchRules.LoadMatchRulesDataFromHistory: Slot index is not within bounds\n");
  }
  else
  {
    v3 = DVARBOOL_onlinegame;
    if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v3);
    if ( !v3->current.enabled || Lobby_IsInLobby() )
    {
      v4 = GameStateInfo_Get();
      if ( !v4->matchRules && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_functions.cpp", 17454, ASSERT_TYPE_ASSERT, "(gInfo->matchRules)", (const char *)&queryFormat, "gInfo->matchRules") )
        __debugbreak();
      ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
      if ( BG_MatchRulesHistory_ReadFromDisk(v4->matchRules, ControllerFromClient, MR_SAVELOC_PLAYERHISTORY, v2) == MR_RETCODE_TRUE )
        MatchRulesChanged(v4->matchRules);
    }
    else
    {
      Com_PrintError(13, "MatchRules.LoadMatchRulesDataFromHistory called while not in lobby\n");
    }
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v6);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_TelemetryPrestige
==============
*/
__int64 LUI_CoD_LuaCall_TelemetryPrestige(lua_State *const luaVM)
{
  int v2; 
  int v3; 
  int v4; 
  unsigned int v5; 

  if ( !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || !j_lua_isnumber(luaVM, 3) )
    j_luaL_error(luaVM, "USAGE: Engine.TelemetryMenuChange( <controller>, <old_value>, <new_value> )");
  v2 = lui_tointeger32(luaVM, 1);
  v3 = lui_tointeger32(luaVM, 2);
  v4 = lui_tointeger32(luaVM, 3);
  Online_Telemetry_SendPrestige(v2, v3, v4);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_SaveMatchRulesDataToHistory
==============
*/
__int64 LUI_CoD_LuaCall_SaveMatchRulesDataToHistory(lua_State *const luaVM)
{
  const dvar_t *v2; 
  GameStateInfo *v3; 
  int ControllerFromClient; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 0");
  v2 = DVARBOOL_onlinegame;
  if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( !v2->current.enabled || Lobby_IsInLobby() )
  {
    v3 = GameStateInfo_Get();
    if ( !v3->matchRules && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_functions.cpp", 17489, ASSERT_TYPE_ASSERT, "(gInfo->matchRules)", (const char *)&queryFormat, "gInfo->matchRules") )
      __debugbreak();
    ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
    BG_MatchRulesHistory_SaveAppendToFront(v3->matchRules, ControllerFromClient, MR_SAVELOC_PLAYERHISTORY, 0);
  }
  else
  {
    Com_PrintError(13, "MatchRules.SaveMatchRulesDataToHistory called while not in lobby\n");
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_CRMFetchMessagesAsync
==============
*/
__int64 LUI_CoD_LuaCall_CRMFetchMessagesAsync(lua_State *const luaVM)
{
  double v2; 
  int v3; 
  MarketingCommsManager *Instance; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.CRMFetchMessagesAsync( <controllerIndex> )");
  if ( j_lua_gettop(luaVM) == 1 )
  {
    if ( j_lua_isnumber(luaVM, 1) )
    {
      v2 = lui_tonumber32(luaVM, 1);
      v3 = (int)*(float *)&v2;
      if ( Live_IsUserSignedInToDemonware((int)*(float *)&v2) && LiveStorage_DoWeHaveStatsForSource(v3, STATS_ONLINE) )
      {
        Instance = MarketingCommsManager::GetInstance();
        MarketingCommsManager::FetchMessagesFromBackendAsync(Instance, v3);
      }
    }
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_CRMGetMaxMessageCount
==============
*/
__int64 LUI_CoD_LuaCall_CRMGetMaxMessageCount(lua_State *const luaVM)
{
  double v2; 
  MarketingCommsManager *Instance; 
  int MessageMaxCount; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.CRMGetMaxMessageCount( <locationID> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v2 = lui_tonumber32(luaVM, 1);
    Instance = MarketingCommsManager::GetInstance();
    MessageMaxCount = MarketingCommsManager::GetMessageMaxCount(Instance, (int)*(float *)&v2);
    j_lua_pushinteger(luaVM, MessageMaxCount);
  }
  else
  {
    j_lua_pushnil(luaVM);
  }
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v5);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_LoadMatchRulesDataFromPlayer
==============
*/
__int64 LUI_CoD_LuaCall_LoadMatchRulesDataFromPlayer(lua_State *const luaVM)
{
  unsigned int v2; 
  const dvar_t *v3; 
  GameStateInfo *v4; 
  int ControllerFromClient; 
  unsigned int v6; 

  if ( j_lua_gettop(luaVM) < 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) >= 1 && lua_isnumber( luaVM, 1 )");
  v2 = lui_tointeger32(luaVM, 1);
  if ( v2 > 9 )
  {
    Com_PrintError(13, "MatchRules.LoadMatchRulesDataFromHistory: Slot index is not within bounds\n");
  }
  else
  {
    v3 = DVARBOOL_onlinegame;
    if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v3);
    if ( !v3->current.enabled || Lobby_IsInLobby() )
    {
      v4 = GameStateInfo_Get();
      if ( !v4->matchRules && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_functions.cpp", 17530, ASSERT_TYPE_ASSERT, "(gInfo->matchRules)", (const char *)&queryFormat, "gInfo->matchRules") )
        __debugbreak();
      ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
      if ( BG_MatchRulesHistory_ReadFromDisk(v4->matchRules, ControllerFromClient, MR_SAVELOC_PLAYERSAVED, v2) == MR_RETCODE_TRUE )
        MatchRulesChanged(v4->matchRules);
    }
    else
    {
      Com_PrintError(13, "MatchRules.LoadMatchRulesDataFromHistory called while not in lobby\n");
    }
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v6);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_CRMGetValidMessageCount
==============
*/
__int64 LUI_CoD_LuaCall_CRMGetValidMessageCount(lua_State *const luaVM)
{
  double v2; 
  MarketingCommsManager *Instance; 
  int MessageToDisplayCount; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Engine.CRMGetValidMessageCount( <controllerIndex>, <locationID> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    v2 = lui_tonumber32(luaVM, 2);
    Instance = MarketingCommsManager::GetInstance();
    MessageToDisplayCount = MarketingCommsManager::GetMessageToDisplayCount(Instance, (int)*(float *)&v2);
    j_lua_pushinteger(luaVM, MessageToDisplayCount);
  }
  else
  {
    j_lua_pushnil(luaVM);
  }
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v5);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_SaveMatchRulesDataToPlayer
==============
*/
__int64 LUI_CoD_LuaCall_SaveMatchRulesDataToPlayer(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 
  const dvar_t *v4; 
  GameStateInfo *v5; 
  int ControllerFromClient; 
  bool v7; 
  unsigned int v8; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) < 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) >= 1 && lua_isnumber( luaVM, 1 )");
  v3 = lui_tointeger32(luaVM, 1);
  if ( v3 > 9 )
  {
    Com_PrintError(13, "MatchRules.LoadMatchRulesDataFromHistory: Slot index is not within bounds\n");
    goto LABEL_16;
  }
  v4 = DVARBOOL_onlinegame;
  if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.enabled && !Lobby_IsInLobby() )
  {
    Com_PrintError(13, "MatchRules.LoadMatchRulesDataFromHistory called while not in lobby\n");
LABEL_16:
    v2 = 0;
    goto LABEL_17;
  }
  v5 = GameStateInfo_Get();
  if ( !v5->matchRules && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_functions.cpp", 17575, ASSERT_TYPE_ASSERT, "(gInfo->matchRules)", (const char *)&queryFormat, "gInfo->matchRules") )
    __debugbreak();
  ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
  v7 = BG_MatchRulesHistory_WriteToDisk(v5->matchRules, ControllerFromClient, MR_SAVELOC_PLAYERSAVED, v3);
  j_lua_pushboolean(luaVM, v7);
LABEL_17:
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v8 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v8);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_CRMRedeemAllCodesForMessage
==============
*/
__int64 LUI_CoD_LuaCall_CRMRedeemAllCodesForMessage(lua_State *const luaVM)
{
  double v2; 
  int v3; 
  double v4; 
  int v5; 
  double v6; 
  MarketingCommsManager *Instance; 
  unsigned int v8; 

  if ( j_lua_gettop(luaVM) != 3 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || !j_lua_isnumber(luaVM, 3) )
    j_luaL_error(luaVM, "USAGE: Engine.CRMRedeemAllCodesForMessage( <controllerIndex>, <locationID> <messageIndex> )");
  if ( j_lua_gettop(luaVM) == 3 && j_lua_isnumber(luaVM, 1) && j_lua_isnumber(luaVM, 2) && j_lua_isnumber(luaVM, 3) )
  {
    v2 = lui_tonumber32(luaVM, 1);
    v3 = (int)*(float *)&v2;
    v4 = lui_tonumber32(luaVM, 2);
    v5 = (int)*(float *)&v4;
    v6 = lui_tonumber32(luaVM, 3);
    Instance = MarketingCommsManager::GetInstance();
    MarketingCommsManager::RedeemAllCodesForMessage(Instance, v3, v5, (int)*(float *)&v6);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v8 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v8);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_DeleteSaveSlotFromPlayer
==============
*/
__int64 LUI_CoD_LuaCall_DeleteSaveSlotFromPlayer(lua_State *const luaVM)
{
  unsigned int v2; 
  int ControllerFromClient; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: MatchRules.DeleteSaveSlotFromPlayer( slotNum )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    if ( v2 > 9 )
    {
      Com_PrintError(13, "MatchRules.DeleteSaveSlotFromPlayer: Slot index is not within bounds\n");
    }
    else if ( !Dvar_GetBool_Internal_DebugName(DVARBOOL_onlinegame, "onlinegame") || Lobby_IsInLobby() )
    {
      ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
      BG_MatchRulesHistory_DeleteSaveSlot(ControllerFromClient, v2, MR_SAVELOC_PLAYERSAVED);
    }
    else
    {
      Com_PrintError(13, "MatchRules.DeleteSaveSlotFromPlayer called while not in lobby\n");
    }
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetSavedModeMax
==============
*/
__int64 LUI_CoD_LuaCall_GetSavedModeMax(lua_State *const luaVM)
{
  unsigned int v2; 

  j_lua_pushinteger(luaVM, 10i64);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_SetEnabled
==============
*/
__int64 LUI_CoD_LuaCall_SetEnabled(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_IsEnabled
==============
*/
__int64 LUI_CoD_LuaCall_IsEnabled(lua_State *const luaVM)
{
  unsigned int v2; 

  j_lua_pushboolean(luaVM, 0);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_CRMClearLocallyCachedData
==============
*/
__int64 LUI_CoD_LuaCall_CRMClearLocallyCachedData(lua_State *const luaVM)
{
  MarketingCommsManager *Instance; 
  unsigned int v3; 

  Instance = MarketingCommsManager::GetInstance();
  MarketingCommsManager::ForceClearAllLocallyCachedData(Instance);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetRigDraftInfoForPlayer
==============
*/
__int64 LUI_CoD_LuaCall_GetRigDraftInfoForPlayer(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_RequestRig
==============
*/
__int64 LUI_CoD_LuaCall_RequestRig(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_RequestSuper
==============
*/
__int64 LUI_CoD_LuaCall_RequestSuper(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_RequestTrait
==============
*/
__int64 LUI_CoD_LuaCall_RequestTrait(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetWeaponDraftInfoForPlayer
==============
*/
__int64 LUI_CoD_LuaCall_GetWeaponDraftInfoForPlayer(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_RequestWeapon
==============
*/
__int64 LUI_CoD_LuaCall_RequestWeapon(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetPlayerXUIDWithRig
==============
*/
__int64 LUI_CoD_LuaCall_GetPlayerXUIDWithRig(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetPlayerXUIDWithWeapon
==============
*/
__int64 LUI_CoD_LuaCall_GetPlayerXUIDWithWeapon(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_IsXUIDInvalid
==============
*/
__int64 LUI_CoD_LuaCall_IsXUIDInvalid(lua_State *const luaVM)
{
  unsigned int v2; 
  bool IsNull; 
  unsigned int v4; 
  XUID result; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isstring(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.IsXUIDInvalid( XUIDString )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isstring(luaVM, 1) )
  {
    LUI_ToXUID(&result, luaVM, 1);
    IsNull = XUID::IsNull(&result);
    j_lua_pushboolean(luaVM, IsNull);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v4);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_GetDraftingTimeRemaining
==============
*/
__int64 LUI_CoD_LuaCall_GetDraftingTimeRemaining(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_ResetAllPartyMemberDraftData
==============
*/
__int64 LUI_CoD_LuaCall_ResetAllPartyMemberDraftData(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_StartDraftingTimer
==============
*/
__int64 LUI_CoD_LuaCall_StartDraftingTimer(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetUTC
==============
*/
__int64 LUI_CoD_LuaCall_GetUTC(lua_State *const luaVM)
{
  unsigned int UTC; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Engine.GetUTC()");
  if ( LiveStorage_IsTimeSynced() )
  {
    UTC = LiveStorage_GetUTC();
    j_lua_pushinteger(luaVM, UTC);
  }
  else
  {
    j_lua_pushnil(luaVM);
  }
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetUTCOffset
==============
*/
__int64 LUI_CoD_LuaCall_GetUTCOffset(lua_State *const luaVM)
{
  unsigned int UTCOffset; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Engine.GetUTCOffset()");
  if ( LiveStorage_IsTimeSynced() )
  {
    UTCOffset = LiveStorage_GetUTCOffset();
    j_lua_pushinteger(luaVM, UTCOffset);
  }
  else
  {
    j_lua_pushnil(luaVM);
  }
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_CRMGetMessageContent
==============
*/
__int64 LUI_CoD_LuaCall_CRMGetMessageContent(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_CoD_LuaCall_CRMGetMessageContent_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_GetCurrentMissionGroup
==============
*/
__int64 LUI_CoD_LuaCall_GetCurrentMissionGroup(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 
  unsigned int UTC; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, "USAGE: Engine.GetCurrentMissionGroup( periodLength, numMissionGroups )");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isnumber( luaVM, 1 )");
  if ( !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isnumber( luaVM, 2 )");
  v2 = lui_tointeger32(luaVM, 1);
  v3 = lui_tointeger32(luaVM, 2);
  UTC = LiveStorage_GetUTC();
  j_lua_pushinteger(luaVM, UTC % v2 % v3);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v5);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_IsSaveGameScreenShotAvailable
==============
*/
__int64 LUI_CoD_LuaCall_IsSaveGameScreenShotAvailable(lua_State *const luaVM)
{
  bool v2; 
  unsigned int v3; 

  v2 = Com_ScreenShotSaveGame_ScreenShotExists();
  j_lua_pushboolean(luaVM, v2);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_CRMSendDlogEvent
==============
*/
__int64 LUI_CoD_LuaCall_CRMSendDlogEvent(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_CoD_LuaCall_CRMSendDlogEvent_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_GetEntityNumNoneValue
==============
*/
__int64 LUI_CoD_LuaCall_GetEntityNumNoneValue(lua_State *const luaVM)
{
  unsigned int v2; 

  j_lua_pushinteger(luaVM, 2047i64);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetMaxShipCallouts
==============
*/
__int64 LUI_CoD_LuaCall_GetMaxShipCallouts(lua_State *const luaVM)
{
  unsigned int v2; 

  j_lua_pushinteger(luaVM, 0i64);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetShipCalloutText
==============
*/
__int64 LUI_CoD_LuaCall_GetShipCalloutText(lua_State *const luaVM)
{
  unsigned int v2; 

  j_lua_pushstring(luaVM, (const char *)&queryFormat.fmt + 3);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetSpaceshipTargetTag
==============
*/
__int64 LUI_CoD_LuaCall_GetSpaceshipTargetTag(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetRankForXP
==============
*/
__int64 LUI_CoD_LuaCall_GetRankForXP(lua_State *const luaVM)
{
  int v2; 
  int RankForXpAlien; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.GetRankForXP( <xpamount> )\n");
  v2 = lui_tointeger32(luaVM, 1);
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() == LONG )
    RankForXpAlien = Com_GetRankForXpAlien(v2);
  else
    RankForXpAlien = Com_GetRankForXpMP(v2);
  j_lua_pushinteger(luaVM, RankForXpAlien);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_AreSplitscreenControlsEnabled
==============
*/
__int64 LUI_CoD_LuaCall_AreSplitscreenControlsEnabled(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_functions.cpp", 18250, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Engine.AreSplitscreenControlsEnabled() deprecated.") )
    __debugbreak();
  j_lua_pushinteger(luaVM, 0i64);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_HasDebugTextPermission
==============
*/
__int64 LUI_CoD_LuaCall_HasDebugTextPermission(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Debug.HasDebugTextPermission()");
  if ( j_lua_gettop(luaVM) )
  {
    v2 = 0;
  }
  else
  {
    v2 = 1;
    j_lua_pushboolean(luaVM, 1);
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
LUI_CoD_LuaCall_GetControllerInUse
==============
*/
__int64 LUI_CoD_LuaCall_GetControllerInUse(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_functions.cpp", 18258, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Engine.GetControllerInUse() deprecated.") )
    __debugbreak();
  j_lua_pushinteger(luaVM, 0i64);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_ShouldShowDebugInfo
==============
*/
__int64 LUI_CoD_LuaCall_ShouldShowDebugInfo(lua_State *const luaVM)
{
  const dvar_t *v2; 
  unsigned int v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Debug.ShouldShowDebugInfo()");
  if ( j_lua_gettop(luaVM) )
  {
    v3 = 0;
  }
  else
  {
    v2 = DVARBOOL_lui_showDebugLayer;
    if ( !DVARBOOL_lui_showDebugLayer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_showDebugLayer") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v2);
    j_lua_pushboolean(luaVM, v2->current.color[0]);
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
LUI_CoD_LuaCall_IsTURequired
==============
*/
__int64 LUI_CoD_LuaCall_IsTURequired(lua_State *const luaVM)
{
  unsigned int v2; 

  j_lua_pushboolean(luaVM, 0);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_FetchDebugInfo
==============
*/
__int64 LUI_CoD_LuaCall_FetchDebugInfo(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 
  char destString[3072]; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Debug.FetchDebugInfo()");
  if ( j_lua_gettop(luaVM) )
  {
    v2 = 0;
  }
  else
  {
    j_lua_createtable(luaVM, 0, 0);
    memset_0(destString, 0, sizeof(destString));
    NET_GetRetailDebug(destString, 3072);
    Online_DcQos_GetRetailDebug(destString, 3072);
    LUI_SetTableString("DataA", destString, luaVM);
    memset_0(destString, 0, sizeof(destString));
    OnlineMatchmakerOmniscient::GetRetailDebug(&OnlineMatchmakerOmniscient::ms_instance, destString, 3072);
    LUI_SetTableString("DataB", destString, luaVM);
    memset_0(destString, 0, sizeof(destString));
    FenceManager_GetRetailDebug(destString, 3072);
    Party_GetRetailDebug(destString, 3072);
    LUI_SetTableString("DataC", destString, luaVM);
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
LUI_CoD_LuaCall_DeactivateClients
==============
*/
__int64 LUI_CoD_LuaCall_DeactivateClients(lua_State *const luaVM)
{
  const char *v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: Engine.DeactivateClients( reason )");
  if ( !j_lua_isstring(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isstring( luaVM, 1 )");
  if ( LUI_CoD_LUIRootDLogEnabled() )
  {
    v2 = j_lua_tolstring(luaVM, 1, NULL);
    LUI_CoD_SetLastDeactivateClientsReason(v2);
  }
  CL_Mgr_InitialiseClients();
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_ActivateInitialClient
==============
*/
__int64 LUI_CoD_LuaCall_ActivateInitialClient(lua_State *const luaVM)
{
  int NthController_Safe; 
  unsigned int v3; 

  if ( !j_lua_isstring(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.ActivateInitialClient( reason, controllerIndex )");
  if ( j_lua_isnumber(luaVM, 2) )
  {
    NthController_Safe = lui_tointeger32(luaVM, 2);
  }
  else if ( CL_AllLocalClientsInactive() )
  {
    NthController_Safe = CL_Mgr_GetNthController_Safe(CLIENT_MANAGER_CONTROLLER_FIRST_ACTIVE);
  }
  else
  {
    NthController_Safe = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
  }
  CL_Mgr_ActivateClient(LOCAL_CLIENT_0, NthController_Safe);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_BootCheckActivate
==============
*/
__int64 LUI_CoD_LuaCall_BootCheckActivate(lua_State *const luaVM)
{
  unsigned int v2; 

  Com_BootCheck_Activate();
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_BootCheckIsBlocking
==============
*/
__int64 LUI_CoD_LuaCall_BootCheckIsBlocking(lua_State *const luaVM)
{
  bool v2; 
  unsigned int v3; 

  v2 = Com_BootCheck_ShouldBlockUI();
  j_lua_pushboolean(luaVM, v2);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_BootCheckIsCorruptSaveDataDetected
==============
*/
__int64 LUI_CoD_LuaCall_BootCheckIsCorruptSaveDataDetected(lua_State *const luaVM)
{
  bool v2; 
  unsigned int v3; 

  v2 = Com_BootCheck_IsCorruptSaveDataDetected();
  j_lua_pushboolean(luaVM, v2);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_SetRecommended
==============
*/
__int64 LUI_CoD_LuaCall_SetRecommended(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_BootCheckCorruptSaveDataDialogClosed
==============
*/
__int64 LUI_CoD_LuaCall_BootCheckCorruptSaveDataDialogClosed(lua_State *const luaVM)
{
  unsigned int v2; 

  Com_BootCheck_CorruptSaveDataDialogClosed();
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetBytesFree
==============
*/
__int64 LUI_CoD_LuaCall_GetBytesFree(lua_State *const luaVM)
{
  unsigned int FreeMemoryBytes; 
  unsigned int v3; 

  FreeMemoryBytes = LUI_CoD_GetFreeMemoryBytes();
  j_lua_pushinteger(luaVM, FreeMemoryBytes);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_SystemRestart
==============
*/
__int64 LUI_CoD_LuaCall_SystemRestart(lua_State *const luaVM)
{
  const char *v2; 
  unsigned int v3; 

  if ( !j_lua_isstring(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.SystemRestart( reason )");
  v2 = j_lua_tolstring(luaVM, 1, NULL);
  Dvar_SetString_Internal(DVARSTR_lui_system_restart_message, v2);
  Dvar_SetBool_Internal(DVARBOOL_lui_system_restart_required, 1);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_BindKey
==============
*/
__int64 LUI_CoD_LuaCall_BindKey(lua_State *const luaVM)
{
  int v2; 
  LocalClientNum_t ClientFromController; 
  const char *v4; 
  InputContext v5; 
  const char *v6; 
  Bind BindingForCommand; 
  CL_KeyBindSlot v8; 
  unsigned int v9; 

  if ( j_lua_gettop(luaVM) != 4 )
    j_luaL_error(luaVM, "USAGE: Engine.BindKey( <controllerIndex>, <inputContext>, <action>, <slotIndex> )");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.BindKey( <controllerIndex>, <inputContext>, <action>, <slotIndex> )");
  if ( !j_lua_isstring(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Engine.BindKey( <controllerIndex>, <inputContext>, <action>, <slotIndex> )");
  if ( !j_lua_isstring(luaVM, 3) )
    j_luaL_error(luaVM, "USAGE: Engine.BindKey( <controllerIndex>, <inputContext>, <action>, <slotIndex> )");
  if ( !j_lua_isnumber(luaVM, 4) )
    j_luaL_error(luaVM, "USAGE: Engine.BindKey( <controllerIndex>, <inputContext>, <action>, <slotIndex> )");
  v2 = lui_tointeger32(luaVM, 1);
  ClientFromController = CL_Mgr_GetClientFromController(v2);
  v4 = j_lua_tolstring(luaVM, 2, NULL);
  v5 = CL_InputContext_FromName(v4);
  v6 = j_lua_tolstring(luaVM, 3, NULL);
  BindingForCommand = (unsigned __int8)Com_Keys_GetBindingForCommand(v6);
  v8 = (unsigned __int8)lui_tointeger32(luaVM, 4);
  LUI_CoD_SetWaitingForKeyBind(ClientFromController, v5, BindingForCommand, v8);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v9 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v9);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetMaxMPClients
==============
*/
__int64 LUI_CoD_LuaCall_GetMaxMPClients(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Engine.GetMaxMPClients()");
  if ( j_lua_gettop(luaVM) )
  {
    v2 = 0;
  }
  else
  {
    j_lua_pushnumber(luaVM, 200.0);
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
LUI_CoD_LuaCall_GetLastErrorCode
==============
*/
__int64 LUI_CoD_LuaCall_GetLastErrorCode(lua_State *const luaVM)
{
  const char *LastRecorderErrorCodeLocalized; 
  bool ShouldReportLastRecordedError; 
  const char *v4; 
  unsigned int v5; 
  unsigned int v6; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Engine.GetLastRecorderErrorCode()");
  if ( j_lua_gettop(luaVM) )
  {
    v5 = 0;
  }
  else
  {
    LastRecorderErrorCodeLocalized = OnlineErrorManager::GetLastRecorderErrorCodeLocalized(&g_onlineMgr.m_errorManager);
    ShouldReportLastRecordedError = OnlineErrorManager::GetShouldReportLastRecordedError(&g_onlineMgr.m_errorManager);
    v4 = (char *)&queryFormat.fmt + 3;
    if ( ShouldReportLastRecordedError )
      v4 = LastRecorderErrorCodeLocalized;
    j_lua_pushstring(luaVM, v4);
    v5 = 1;
  }
  if ( (int)v5 > j_lua_gettop(luaVM) )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v5, v6);
  }
  return v5;
}

/*
==============
LUI_CoD_LuaCall_UnbindKey
==============
*/
__int64 LUI_CoD_LuaCall_UnbindKey(lua_State *const luaVM)
{
  int v2; 
  LocalClientNum_t ClientFromController; 
  const char *v4; 
  InputContext v5; 
  const char *v6; 
  Bind BindingForCommand; 
  CL_KeyBindSlot v8; 
  unsigned int v9; 

  if ( j_lua_gettop(luaVM) != 4 )
    j_luaL_error(luaVM, "USAGE: Engine.UnbindKey( <controllerIndex>, <inputContext>, <action>, <slotIndex> )");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.UnbindKey( <controllerIndex>, <inputContext>, <action>, <slotIndex> )");
  if ( !j_lua_isstring(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Engine.UnbindKey( <controllerIndex>, <inputContext>, <action>, <slotIndex> )");
  if ( !j_lua_isstring(luaVM, 3) )
    j_luaL_error(luaVM, "USAGE: Engine.UnbindKey( <controllerIndex>, <inputContext>, <action>, <slotIndex> )");
  if ( !j_lua_isnumber(luaVM, 4) )
    j_luaL_error(luaVM, "USAGE: Engine.UnbindKey( <controllerIndex>, <inputContext>, <action>, <slotIndex> )");
  v2 = lui_tointeger32(luaVM, 1);
  ClientFromController = CL_Mgr_GetClientFromController(v2);
  v4 = j_lua_tolstring(luaVM, 2, NULL);
  v5 = CL_InputContext_FromName(v4);
  v6 = j_lua_tolstring(luaVM, 3, NULL);
  BindingForCommand = (unsigned __int8)Com_Keys_GetBindingForCommand(v6);
  v8 = (unsigned __int8)lui_tointeger32(luaVM, 4);
  CL_Keys_BindKey(ClientFromController, v5, BindingForCommand, v8, K_NONE, NULL);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v9 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v9);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_ClearLastErrorCode
==============
*/
__int64 LUI_CoD_LuaCall_ClearLastErrorCode(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Engine.ClearLastRecordedErrorCode()");
  if ( !j_lua_gettop(luaVM) )
    OnlineErrorManager::ClearLastRecordedErrorCode(&g_onlineMgr.m_errorManager);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_SetupClientViewports
==============
*/
__int64 LUI_CoD_LuaCall_SetupClientViewports(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Engine.SetupClientViewports()");
  if ( !j_lua_gettop(luaVM) )
    ScrPlace_SetupClientViewports();
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_ResetKey
==============
*/
__int64 LUI_CoD_LuaCall_ResetKey(lua_State *const luaVM)
{
  int v2; 
  LocalClientNum_t ClientFromController; 
  const char *v4; 
  InputContext v5; 
  const char *v6; 
  Bind BindingForCommand; 
  CL_KeyBindSlot v8; 
  keyNum_t DefaultKey; 
  __int64 v10; 
  CL_KeyBind *v11; 
  unsigned int v12; 
  CL_KeyBind unboundActions[16]; 

  if ( j_lua_gettop(luaVM) != 4 )
    j_luaL_error(luaVM, "USAGE: Engine.ResetKey( <controllerIndex>, <inputContext>, <action>, <slotIndex> )");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.ResetKey( <controllerIndex>, <inputContext>, <action>, <slotIndex> )");
  if ( !j_lua_isstring(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Engine.ResetKey( <controllerIndex>, <inputContext>, <action>, <slotIndex> )");
  if ( !j_lua_isstring(luaVM, 3) )
    j_luaL_error(luaVM, "USAGE: Engine.ResetKey( <controllerIndex>, <inputContext>, <action>, <slotIndex> )");
  if ( !j_lua_isnumber(luaVM, 4) )
    j_luaL_error(luaVM, "USAGE: Engine.ResetKey( <controllerIndex>, <inputContext>, <action>, <slotIndex> )");
  v2 = lui_tointeger32(luaVM, 1);
  ClientFromController = CL_Mgr_GetClientFromController(v2);
  v4 = j_lua_tolstring(luaVM, 2, NULL);
  v5 = CL_InputContext_FromName(v4);
  v6 = j_lua_tolstring(luaVM, 3, NULL);
  BindingForCommand = (unsigned __int8)Com_Keys_GetBindingForCommand(v6);
  v8 = (unsigned __int8)lui_tointeger32(luaVM, 4);
  DefaultKey = CL_Keys_GetDefaultKey(ClientFromController, v5, BindingForCommand, v8, 0);
  if ( DefaultKey != CL_Keys_GetBoundKey(ClientFromController, v5, BindingForCommand, v8, 0) )
  {
    v10 = 15i64;
    v11 = unboundActions;
    do
    {
      CL_KeyBind::CL_KeyBind(v11++);
      --v10;
    }
    while ( v10 );
    CL_Keys_BindKey(ClientFromController, v5, BindingForCommand, v8, DefaultKey, (CL_KeyBind (*)[15])unboundActions);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v12 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v12);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_MeasureResourceEventStart
==============
*/
__int64 LUI_CoD_LuaCall_MeasureResourceEventStart(lua_State *const luaVM)
{
  const char *v2; 
  const char *v3; 
  unsigned int v4; 

  if ( Dvar_GetBoolSafe("NOMOKSKQRM") )
  {
    if ( j_lua_gettop(luaVM) != 2 || !j_lua_isstring(luaVM, 1) || !j_lua_isstring(luaVM, 2) )
      j_luaL_error(luaVM, "USAGE: Engine.MeasureResourceEventStart( <eventname>, <eventtype> )\n");
    if ( j_lua_gettop(luaVM) == 2 && j_lua_isstring(luaVM, 1) && j_lua_isstring(luaVM, 2) )
    {
      v2 = j_lua_tolstring(luaVM, 1, NULL);
      v3 = j_lua_tolstring(luaVM, 2, NULL);
      j_lua_gc(luaVM, 2, 0);
      j_lua_gc(luaVM, 2, 0);
      j_lua_gc(luaVM, 2, 0);
      LUI_CoD_StartResourceEvent(v2, v3);
    }
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_ResetAllBindings
==============
*/
__int64 LUI_CoD_LuaCall_ResetAllBindings(lua_State *const luaVM)
{
  int v2; 
  LocalClientNum_t ClientFromController; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: Engine.ResetAllBindings( <controllerIndex> )");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.ResetAllBindings( <controllerIndex> )");
  v2 = lui_tointeger32(luaVM, 1);
  ClientFromController = CL_Mgr_GetClientFromController(v2);
  CL_Keys_ResetAllBindings(ClientFromController);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_LinkKey
==============
*/
__int64 LUI_CoD_LuaCall_LinkKey(lua_State *const luaVM)
{
  int v2; 
  LocalClientNum_t ClientFromController; 
  const char *v4; 
  InputContext v5; 
  const char *v6; 
  Bind BindingForCommand; 
  unsigned int v8; 

  if ( j_lua_gettop(luaVM) != 3 )
    j_luaL_error(luaVM, "USAGE: Engine.LinkKey( <controllerIndex>, <inputContext>, <action>, <slotIndex> )");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.LinkKey( <controllerIndex>, <inputContext>, <action>, <slotIndex> )");
  if ( !j_lua_isstring(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Engine.LinkKey( <controllerIndex>, <inputContext>, <action>, <slotIndex> )");
  if ( !j_lua_isstring(luaVM, 3) )
    j_luaL_error(luaVM, "USAGE: Engine.LinkKey( <controllerIndex>, <inputContext>, <action>, <slotIndex> )");
  v2 = lui_tointeger32(luaVM, 1);
  ClientFromController = CL_Mgr_GetClientFromController(v2);
  v4 = j_lua_tolstring(luaVM, 2, NULL);
  v5 = CL_InputContext_FromName(v4);
  v6 = j_lua_tolstring(luaVM, 3, NULL);
  BindingForCommand = (unsigned __int8)Com_Keys_GetBindingForCommand(v6);
  CL_Keys_BindKey(ClientFromController, v5, BindingForCommand, INVALID, K_INHERIT, NULL);
  CL_Keys_BindKey(ClientFromController, v5, BindingForCommand, BOOL_VALUE, K_INHERIT, NULL);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v8 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v8);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_UnlinkKey
==============
*/
__int64 LUI_CoD_LuaCall_UnlinkKey(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_CoD_LuaCall_UnlinkKey_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_IsKeyLinked
==============
*/
__int64 LUI_CoD_LuaCall_IsKeyLinked(lua_State *const luaVM)
{
  unsigned int v2; 
  int v3; 
  LocalClientNum_t ClientFromController; 
  const char *v5; 
  InputContext v6; 
  const char *v7; 
  Bind BindingForCommand; 
  keyNum_t BoundKey; 
  keyNum_t v10; 
  unsigned int v11; 

  if ( j_lua_gettop(luaVM) != 3 )
    j_luaL_error(luaVM, "USAGE: Engine.LinkKey( <controllerIndex>, <inputContext>, <action>, <slotIndex> )");
  v2 = 1;
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.LinkKey( <controllerIndex>, <inputContext>, <action>, <slotIndex> )");
  if ( !j_lua_isstring(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Engine.LinkKey( <controllerIndex>, <inputContext>, <action>, <slotIndex> )");
  if ( !j_lua_isstring(luaVM, 3) )
    j_luaL_error(luaVM, "USAGE: Engine.LinkKey( <controllerIndex>, <inputContext>, <action>, <slotIndex> )");
  v3 = lui_tointeger32(luaVM, 1);
  ClientFromController = CL_Mgr_GetClientFromController(v3);
  v5 = j_lua_tolstring(luaVM, 2, NULL);
  v6 = CL_InputContext_FromName(v5);
  v7 = j_lua_tolstring(luaVM, 3, NULL);
  BindingForCommand = (unsigned __int8)Com_Keys_GetBindingForCommand(v7);
  BoundKey = CL_Keys_GetBoundKey(ClientFromController, v6, BindingForCommand, INVALID, 0);
  v10 = CL_Keys_GetBoundKey(ClientFromController, v6, BindingForCommand, BOOL_VALUE, 0);
  if ( BoundKey != K_INHERIT || v10 != K_INHERIT )
    v2 = 0;
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v11 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v11);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_GetDefaultKey
==============
*/
__int64 LUI_CoD_LuaCall_GetDefaultKey(lua_State *const luaVM)
{
  unsigned int v2; 
  int v3; 
  const char *v4; 
  InputContext v5; 
  const char *v6; 
  Bind BindingForCommand; 
  CL_KeyBindSlot v8; 
  LocalClientNum_t ClientFromController; 
  unsigned int v10; 
  char str[256]; 

  if ( j_lua_gettop(luaVM) != 4 || !j_lua_isnumber(luaVM, 1) || !j_lua_isstring(luaVM, 2) || !j_lua_isstring(luaVM, 3) || !j_lua_isnumber(luaVM, 4) )
    j_luaL_error(luaVM, "USAGE: Engine.GetDefaultKey( <controller>, <inputContext>, <command>, <slot> )");
  v2 = lui_tointeger32(luaVM, 1);
  v3 = v2;
  if ( v2 > 7 )
    j_luaL_error(luaVM, "Invalid controller index %d", v2);
  v4 = j_lua_tolstring(luaVM, 2, NULL);
  v5 = CL_InputContext_FromName(v4);
  v6 = j_lua_tolstring(luaVM, 3, NULL);
  BindingForCommand = (unsigned __int8)Com_Keys_GetBindingForCommand(v6);
  if ( BindingForCommand == BIND_VOID )
    j_luaL_error(luaVM, "Invalid command %s.", v6);
  v8 = (unsigned __int8)lui_tointeger32(luaVM, 4);
  ClientFromController = CL_Mgr_GetClientFromController(v3);
  UI_GetDefaultKeyLocalizedString(ClientFromController, v5, BindingForCommand, v8, str, 0x100ui64);
  j_lua_pushstring(luaVM, str);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v10 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v10);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetBinding
==============
*/
__int64 LUI_CoD_LuaCall_GetBinding(lua_State *const luaVM)
{
  int v2; 
  LocalClientNum_t ClientFromController; 
  const char *v4; 
  InputContext inputContext; 
  const char *v6; 
  unsigned int v7; 
  char result[256]; 

  if ( j_lua_gettop(luaVM) != 2 && j_lua_gettop(luaVM) != 3 || !j_lua_isnumber(luaVM, 1) || !j_lua_isstring(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Engine.GetBinding( <controller>, <command>, <inputContext> )");
  v2 = lui_tointeger32(luaVM, 1);
  ClientFromController = CL_Mgr_GetClientFromController(v2);
  v4 = j_lua_tolstring(luaVM, 2, NULL);
  inputContext = STRUCT_POINTER|FLOAT_POINTER;
  if ( j_lua_isstring(luaVM, 3) )
  {
    v6 = j_lua_tolstring(luaVM, 3, NULL);
    inputContext = CL_InputContext_FromName(v6);
  }
  UI_GetKeyBindLocalizedString(ClientFromController, v4, result, 0x100ui64, inputContext, 0, 0);
  j_lua_pushfstring(luaVM, (const char *)&stru_143FB69FC, result);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v7 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v7);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetBoundKey
==============
*/
__int64 LUI_CoD_LuaCall_GetBoundKey(lua_State *const luaVM)
{
  unsigned int v2; 
  int v3; 
  const char *v4; 
  InputContext v5; 
  const char *v6; 
  Bind BindingForCommand; 
  CL_KeyBindSlot v8; 
  LocalClientNum_t ClientFromController; 
  unsigned int v10; 
  char str[256]; 

  if ( j_lua_gettop(luaVM) != 4 || !j_lua_isnumber(luaVM, 1) || !j_lua_isstring(luaVM, 2) || !j_lua_isstring(luaVM, 3) || !j_lua_isnumber(luaVM, 4) )
    j_luaL_error(luaVM, "USAGE: Engine.GetBoundKey( <controller>, <inputContext>, <command>, <slot> )");
  v2 = lui_tointeger32(luaVM, 1);
  v3 = v2;
  if ( v2 > 7 )
    j_luaL_error(luaVM, "Invalid controller index %d", v2);
  v4 = j_lua_tolstring(luaVM, 2, NULL);
  v5 = CL_InputContext_FromName(v4);
  v6 = j_lua_tolstring(luaVM, 3, NULL);
  BindingForCommand = (unsigned __int8)Com_Keys_GetBindingForCommand(v6);
  if ( BindingForCommand == BIND_VOID )
    j_luaL_error(luaVM, "Invalid command %s.", v6);
  v8 = (unsigned __int8)lui_tointeger32(luaVM, 4);
  ClientFromController = CL_Mgr_GetClientFromController(v3);
  UI_GetBoundKeyLocalizedString(ClientFromController, v5, BindingForCommand, v8, str, 0x100ui64);
  j_lua_pushstring(luaVM, str);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v10 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v10);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_DLog_RecordBindingsAndGameplayOptions
==============
*/
__int64 LUI_CoD_LuaCall_DLog_RecordBindingsAndGameplayOptions(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_CoD_LuaCall_DLog_RecordBindingsAndGameplayOptions_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_DLog_NotifyMainMenuStart
==============
*/
__int64 LUI_CoD_LuaCall_DLog_NotifyMainMenuStart(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 0");
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_ReportPublicLobbyMenuOpenedWithoutBeingInLobbyPartyError
==============
*/
__int64 LUI_CoD_LuaCall_ReportPublicLobbyMenuOpenedWithoutBeingInLobbyPartyError(lua_State *const luaVM)
{
  const dvar_t *v2; 
  int v3; 
  unsigned __int8 ActiveGameMode; 
  Online_ErrorReporting *InstancePtr; 
  unsigned int v6; 
  char *fmt; 
  char dest[256]; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 0");
  v2 = DVARBOOL_ui_is_magma_gamemode;
  if ( !DVARBOOL_ui_is_magma_gamemode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ui_is_magma_gamemode") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  v3 = v2->current.color[0];
  ActiveGameMode = Com_GameMode_GetActiveGameMode();
  LODWORD(fmt) = v3;
  Com_sprintf(dest, 0x100ui64, "%d,%d", ActiveGameMode, fmt);
  InstancePtr = Online_ErrorReporting::GetInstancePtr();
  Online_ErrorReporting::ReportError(InstancePtr, (Online_Error_CAT_PARTY_t)0x8000000, dest);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v6);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_BitwiseAnd
==============
*/
__int64 LUI_CoD_LuaCall_BitwiseAnd(lua_State *const luaVM)
{
  unsigned int v2; 
  int v3; 
  int v4; 
  unsigned int v5; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Engine.BitwiseAnd( <int>, <int> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    v3 = lui_tointeger32(luaVM, 1);
    v4 = lui_tointeger32(luaVM, 2);
    j_lua_pushinteger(luaVM, v3 & v4);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v5);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_BitwiseOr
==============
*/
__int64 LUI_CoD_LuaCall_BitwiseOr(lua_State *const luaVM)
{
  unsigned int v2; 
  int v3; 
  int v4; 
  unsigned int v5; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Engine.BitwiseOr( <int>, <int> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    v3 = lui_tointeger32(luaVM, 1);
    v4 = lui_tointeger32(luaVM, 2);
    j_lua_pushinteger(luaVM, v3 | v4);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v5);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_IsBitSet
==============
*/
__int64 LUI_CoD_LuaCall_IsBitSet(lua_State *const luaVM)
{
  unsigned int v2; 
  int v3; 
  char v4; 
  unsigned int v5; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Engine.IsBitSet( <int>, <int> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    v3 = lui_tointeger32(luaVM, 1);
    v4 = lui_tointeger32(luaVM, 2);
    j_lua_pushboolean(luaVM, ((1 << v4) & v3) != 0);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v5);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_BitShiftRight
==============
*/
__int64 LUI_CoD_LuaCall_BitShiftRight(lua_State *const luaVM)
{
  unsigned int v2; 
  int v3; 
  char v4; 
  unsigned int v5; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Engine.BitShiftRight( <int>, <int> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    v3 = lui_tointeger32(luaVM, 1);
    v4 = lui_tointeger32(luaVM, 2);
    j_lua_pushinteger(luaVM, v3 >> v4);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v5);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_MustShowSplashScreens
==============
*/
__int64 LUI_CoD_LuaCall_MustShowSplashScreens(lua_State *const luaVM)
{
  int v2; 
  unsigned int v3; 

  v2 = !g_launchData.skipMovies && !LUI_CoD_HasShownSplashScreens();
  j_lua_pushboolean(luaVM, v2);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_SetHasSeenSplashScreen
==============
*/
__int64 LUI_CoD_LuaCall_SetHasSeenSplashScreen(lua_State *const luaVM)
{
  unsigned int v2; 

  LUI_CoD_SetHasShownSplashScreens();
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_DoesSoundExist
==============
*/
__int64 LUI_CoD_LuaCall_DoesSoundExist(lua_State *const luaVM)
{
  const char *v2; 
  bool Alias; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 1");
  if ( !j_lua_isstring(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isstring( luaVM, 1 )");
  v2 = j_lua_tolstring(luaVM, 1, NULL);
  Alias = UI_TryFindAlias(v2);
  j_lua_pushboolean(luaVM, Alias);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_PlaySound
==============
*/
__int64 LUI_CoD_LuaCall_PlaySound(lua_State *const luaVM)
{
  unsigned int v2; 
  const char *v3; 
  LocalClientNum_t CurrentLocalClient; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 1");
  if ( !j_lua_isstring(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isstring( luaVM, 1 )");
  v2 = 0;
  v3 = j_lua_tolstring(luaVM, 1, NULL);
  CurrentLocalClient = LUI_CoD_GetCurrentLocalClient();
  if ( CurrentLocalClient == LOCAL_CLIENT_INVALID )
    CurrentLocalClient = LOCAL_CLIENT_0;
  if ( LUI_Workers_IsRunningCmd() )
    LUI_Workers_QueuePlaySound(CurrentLocalClient, v3);
  else
    v2 = UI_PlayLocalSoundAliasByName(CurrentLocalClient, v3);
  j_lua_pushinteger(luaVM, v2);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v5);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_IsSoundPlaying
==============
*/
__int64 LUI_CoD_LuaCall_IsSoundPlaying(lua_State *const luaVM)
{
  LocalClientNum_t CurrentLocalClient; 
  unsigned int v3; 
  bool IsPlaybackIdPlaying; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 1");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isnumber( luaVM, 1 )");
  CurrentLocalClient = LUI_CoD_GetCurrentLocalClient();
  if ( CurrentLocalClient == LOCAL_CLIENT_INVALID )
    CurrentLocalClient = LOCAL_CLIENT_0;
  v3 = lui_tointeger32(luaVM, 1);
  IsPlaybackIdPlaying = UI_IsPlaybackIdPlaying(CurrentLocalClient, v3);
  j_lua_pushboolean(luaVM, IsPlaybackIdPlaying);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v5);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_StopSound
==============
*/
__int64 LUI_CoD_LuaCall_StopSound(lua_State *const luaVM)
{
  LocalClientNum_t CurrentLocalClient; 
  unsigned int v3; 
  bool v4; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 1");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isnumber( luaVM, 1 )");
  CurrentLocalClient = LUI_CoD_GetCurrentLocalClient();
  if ( CurrentLocalClient == LOCAL_CLIENT_INVALID )
    CurrentLocalClient = LOCAL_CLIENT_0;
  v3 = lui_tointeger32(luaVM, 1);
  v4 = UI_StopLocalSoundAliasById(CurrentLocalClient, v3);
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
LUI_CoD_LuaCall_FadeSound
==============
*/
__int64 LUI_CoD_LuaCall_FadeSound(lua_State *const luaVM)
{
  LocalClientNum_t CurrentLocalClient; 
  unsigned int v3; 
  double v4; 
  int v5; 
  bool v6; 
  unsigned int v7; 

  if ( j_lua_gettop(luaVM) != 3 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 3");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isnumber( luaVM, 1 )");
  if ( !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isnumber( luaVM, 2 )");
  if ( !j_lua_isnumber(luaVM, 3) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isnumber( luaVM, 3 )");
  CurrentLocalClient = LUI_CoD_GetCurrentLocalClient();
  if ( CurrentLocalClient == LOCAL_CLIENT_INVALID )
    CurrentLocalClient = LOCAL_CLIENT_0;
  v3 = lui_tointeger32(luaVM, 1);
  v4 = lui_tonumber32(luaVM, 2);
  v5 = lui_tointeger32(luaVM, 3);
  v6 = UI_FadeLocalSoundAliasById(CurrentLocalClient, v3, *(float *)&v4, v5);
  j_lua_pushboolean(luaVM, v6);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v7 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v7);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetSubtitleForSound
==============
*/
__int64 LUI_CoD_LuaCall_GetSubtitleForSound(lua_State *const luaVM)
{
  const char *v2; 
  const char *SubtitleForPlaybackId; 
  LocalClientNum_t CurrentLocalClient; 
  unsigned int v5; 
  unsigned int v6; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 1");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isnumber( luaVM, 1 )");
  v2 = (char *)&queryFormat.fmt + 3;
  SubtitleForPlaybackId = (char *)&queryFormat.fmt + 3;
  CurrentLocalClient = LUI_CoD_GetCurrentLocalClient();
  if ( CurrentLocalClient == LOCAL_CLIENT_INVALID )
    CurrentLocalClient = LOCAL_CLIENT_0;
  v5 = lui_tointeger32(luaVM, 1);
  if ( UI_IsPlaybackIdPlaying(CurrentLocalClient, v5) )
    SubtitleForPlaybackId = UI_GetSubtitleForPlaybackId(CurrentLocalClient, v5);
  if ( SubtitleForPlaybackId )
    v2 = SubtitleForPlaybackId;
  j_lua_pushstring(luaVM, v2);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v6);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_PlayCountdownSound
==============
*/
__int64 LUI_CoD_LuaCall_PlayCountdownSound(lua_State *const luaVM)
{
  int v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.PlayCountdownSound( countdownTime )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    Party_PlayCountdownSound(v2);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_PlayMusic
==============
*/
__int64 LUI_CoD_LuaCall_PlayMusic(lua_State *const luaVM)
{
  const char *v2; 
  const char *v3; 
  char v4; 
  unsigned int v5; 
  char v6; 
  unsigned int v7; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isstring(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.PlayMusic( <musicName> )\n");
  LUI_CoD_GetCurrentLocalClient();
  v2 = j_lua_tolstring(luaVM, 1, NULL);
  v3 = v2;
  if ( v2 && (v4 = *v2) != 0 )
  {
    v5 = 5381;
    do
    {
      ++v3;
      v6 = v4 | 0x20;
      if ( (unsigned int)(v4 - 65) >= 0x1A )
        v6 = v4;
      v5 = 65599 * v5 + v6;
      v4 = *v3;
    }
    while ( *v3 );
    if ( !v5 )
      v5 = 1;
  }
  else
  {
    v5 = 0;
  }
  SND_SetMusicState(v5);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v7 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v7);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_MeasureResourceEventEnd
==============
*/
__int64 LUI_CoD_LuaCall_MeasureResourceEventEnd(lua_State *const luaVM)
{
  const char *v2; 
  const char *v3; 
  unsigned int v4; 

  if ( Dvar_GetBoolSafe("NOMOKSKQRM") )
  {
    if ( j_lua_gettop(luaVM) != 2 || !j_lua_isstring(luaVM, 1) || !j_lua_isstring(luaVM, 2) )
      j_luaL_error(luaVM, "USAGE: Engine.MeasureResourceEventEnd( <eventName>, <eventType> )\n");
    if ( j_lua_gettop(luaVM) == 2 && j_lua_isstring(luaVM, 1) && j_lua_isstring(luaVM, 2) )
    {
      v2 = j_lua_tolstring(luaVM, 1, NULL);
      v3 = j_lua_tolstring(luaVM, 2, NULL);
      j_lua_gc(luaVM, 2, 0);
      j_lua_gc(luaVM, 2, 0);
      j_lua_gc(luaVM, 2, 0);
      LUI_CoD_StartResourceEnd(v2, v3);
    }
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_StopMusic
==============
*/
__int64 LUI_CoD_LuaCall_StopMusic(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Engine.StopMusic()");
  if ( !j_lua_gettop(luaVM) )
    SND_SetMusicState(0);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_IsFrontEndLevelInitialized
==============
*/
__int64 LUI_CoD_LuaCall_IsFrontEndLevelInitialized(lua_State *const luaVM)
{
  bool IsActive; 
  unsigned int v3; 

  IsActive = Com_FrontEndScene_IsActive();
  j_lua_pushboolean(luaVM, IsActive);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_FadeMusic
==============
*/
__int64 LUI_CoD_LuaCall_FadeMusic(lua_State *const luaVM)
{
  double v2; 
  int v3; 
  float v4; 
  double v5; 
  unsigned int VolModIndexFromName; 
  unsigned int v7; 

  if ( j_lua_gettop(luaVM) < 2 || !j_lua_isnumber(luaVM, 1) || j_lua_gettop(luaVM) != 1 && !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Engine.FadeMusic( <volume>, ?<fadeTime> )\n");
  v2 = lui_tonumber32(luaVM, 1);
  v3 = 0;
  v4 = *(float *)&v2;
  if ( j_lua_gettop(luaVM) == 2 )
  {
    v5 = lui_tonumber32(luaVM, 2);
    v3 = (int)*(float *)&v5;
  }
  VolModIndexFromName = SND_GetVolModIndexFromName("music");
  SND_SetVolModValue(VolModIndexFromName, v4, v3);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v7 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v7);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_SetFrontEndSceneSection
==============
*/
__int64 LUI_CoD_LuaCall_SetFrontEndSceneSection(lua_State *const luaVM)
{
  const char *v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: Engine.SetFrontEndSceneSection( <section_name> )");
  if ( !j_lua_isstring(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.SetFrontEndSceneSection( <section_name> )");
  v2 = j_lua_tolstring(luaVM, 1, NULL);
  Com_Printf(13, "LUI SetFrontEndLevelSection: %s\n", v2);
  CG_FrontEndScene_SetActiveSection(v2, 0);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetBuildNumber
==============
*/
__int64 LUI_CoD_LuaCall_GetBuildNumber(lua_State *const luaVM)
{
  signed int BuildNumberAsInt; 
  unsigned int v3; 

  BuildNumberAsInt = j_getBuildNumberAsInt();
  j_lua_pushinteger(luaVM, BuildNumberAsInt);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_MakeRootFullscreen
==============
*/
__int64 LUI_CoD_LuaCall_MakeRootFullscreen(lua_State *const luaVM)
{
  int ControllerFromClient; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Engine.MakeRootFullscreen()");
  ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
  LUI_CoD_MakeClientRootFullscreen(ControllerFromClient);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetLuiInUse
==============
*/
__int64 LUI_CoD_LuaCall_GetLuiInUse(lua_State *const luaVM)
{
  bool IsCatcherActive; 
  unsigned int v3; 
  LocalClientNum_t localClientNum; 
  int controllerIndex; 

  LUI_CoD_AttemptInferLocalClientAndController(&localClientNum, &controllerIndex);
  IsCatcherActive = CL_Keys_IsCatcherActive(localClientNum, 64);
  j_lua_pushboolean(luaVM, IsCatcherActive);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_MakeRootSplitscreen
==============
*/
__int64 LUI_CoD_LuaCall_MakeRootSplitscreen(lua_State *const luaVM)
{
  int ControllerFromClient; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Engine.MakeRootSplitscreen()");
  ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
  LUI_CoD_MakeClientRootSplitscreen(ControllerFromClient);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_SetLuiInUse
==============
*/
__int64 LUI_CoD_LuaCall_SetLuiInUse(lua_State *const luaVM)
{
  int i; 
  LocalClientNum_t CurrentValidLocalClient; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) >= 2 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) < 2");
  if ( j_lua_type(luaVM, 1) != 1 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isboolean( luaVM, 1 )");
  if ( LUI_CoD_InFrontend() )
  {
    for ( i = 0; i < 2; ++i )
    {
      if ( j_lua_toboolean(luaVM, 1) )
        CL_Keys_AddCatcher((LocalClientNum_t)i, 64);
      else
        CL_Keys_RemoveCatcher((LocalClientNum_t)i, -65);
    }
  }
  else
  {
    CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
    if ( j_lua_toboolean(luaVM, 1) )
      CL_Keys_AddCatcher(CurrentValidLocalClient, 64);
    else
      CL_Keys_RemoveCatcher(CurrentValidLocalClient, -65);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetMountTutorialString
==============
*/
__int64 LUI_CoD_LuaCall_GetMountTutorialString(lua_State *const luaVM)
{
  int v2; 
  int MountButton; 
  bool ToggleADSEnabledGamepad; 
  const char *v5; 
  const char *v6; 
  unsigned int v7; 

  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.GetMountTutorialString( controllerIndex )");
  v2 = lui_tointeger32(luaVM, 1);
  if ( GamerProfile_GetGamepadEnabled(v2) )
  {
    MountButton = GamerProfile_GetMountButton(v2);
    ToggleADSEnabledGamepad = GamerProfile_GetToggleADSEnabledGamepad(v2);
  }
  else
  {
    MountButton = GamerProfile_GetMountButtonKBM(v2);
    ToggleADSEnabledGamepad = GamerProfile_GetToggleADSEnabledKeyboard(v2);
  }
  if ( MountButton == 8 )
  {
    v5 = "MP_BR_INGAME/TUT_MOUNT_BINDING_TOGGLE";
  }
  else if ( MountButton == 9 )
  {
    v5 = "MP_BR_INGAME/TUT_MOUNT_BINDING";
  }
  else if ( ToggleADSEnabledGamepad )
  {
    switch ( MountButton )
    {
      case 2:
        v5 = "MP_BR_INGAME/TUT_MOUNT_DOUBLE_TOGGLE";
        break;
      case 4:
        v5 = "MP_BR_INGAME/TUT_MOUNT_SPRINT_TOGGLE";
        break;
      case 7:
        v5 = "MP_BR_INGAME/TUT_MOUNT_HOLD_TOGGLE";
        break;
      default:
        v5 = "MP_BR_INGAME/TUT_MOUNT_TOGGLE";
        if ( MountButton == 10 )
          v5 = "MP_BR_INGAME/TUT_MOUNT_ACTIVATE_TOGGLE";
        break;
    }
  }
  else
  {
    switch ( MountButton )
    {
      case 2:
        v5 = "MP_BR_INGAME/TUT_MOUNT_DOUBLE";
        break;
      case 4:
        v5 = "MP_BR_INGAME/TUT_MOUNT_SPRINT";
        break;
      case 7:
        v5 = "MP_BR_INGAME/TUT_MOUNT_HOLD";
        break;
      default:
        v5 = "MP_BR_INGAME/TUT_MOUNT";
        if ( MountButton == 10 )
          v5 = "MP_BR_INGAME/TUT_MOUNT_ACTIVATE";
        break;
    }
  }
  v6 = SEH_LocalizeTextMessage(v5, "Tutorial Message", LOCMSG_SAFE);
  j_lua_pushstring(luaVM, v6);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v7 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v7);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_SetInventoryInUse
==============
*/
__int64 LUI_CoD_LuaCall_SetInventoryInUse(lua_State *const luaVM)
{
  LocalClientNum_t CurrentValidLocalClient; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) >= 2 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) < 2");
  if ( j_lua_type(luaVM, 1) != 1 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isboolean( luaVM, 1 )");
  CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
  if ( j_lua_toboolean(luaVM, 1) )
    CL_Keys_AddCatcher(CurrentValidLocalClient, 1024);
  else
    CL_Keys_RemoveCatcher(CurrentValidLocalClient, -1025);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_SetScoreboardOn
==============
*/
__int64 LUI_CoD_LuaCall_SetScoreboardOn(lua_State *const luaVM)
{
  LocalClientNum_t CurrentValidLocalClient; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) >= 2 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) < 2");
  if ( j_lua_type(luaVM, 1) != 1 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isboolean( luaVM, 1 )");
  CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
  if ( j_lua_toboolean(luaVM, 1) )
    CL_Keys_AddCatcher(CurrentValidLocalClient, 2048);
  else
    CL_Keys_RemoveCatcher(CurrentValidLocalClient, -2049);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_IsTutorialCompleted
==============
*/
__int64 LUI_CoD_LuaCall_IsTutorialCompleted(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_CoD_LuaCall_IsTutorialCompleted_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_GetLuiRoot
==============
*/
__int64 LUI_CoD_LuaCall_GetLuiRoot(lua_State *const luaVM)
{
  LUIElement *CurrentRoot; 
  LUIElement *v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Engine.GetLuiRoot()\n");
  CurrentRoot = LUI_CoD_GetCurrentRoot(luaVM);
  v3 = CurrentRoot;
  if ( CurrentRoot )
  {
    if ( !LUI_ElementHasWeakTableEntry(CurrentRoot, luaVM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_functions.cpp", 6899, ASSERT_TYPE_ASSERT, "(LUI_ElementHasWeakTableEntry( root, luaVM ))", (const char *)&queryFormat, "LUI_ElementHasWeakTableEntry( root, luaVM )") )
      __debugbreak();
    LUI_PutElementOnTopOfStack(v3, luaVM);
    LODWORD(v3) = 1;
  }
  if ( (int)v3 > j_lua_gettop(luaVM) )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", (unsigned int)v3, v4);
  }
  return (unsigned int)v3;
}

/*
==============
LUI_CoD_LuaCall_GetAspectRatio
==============
*/
__int64 LUI_CoD_LuaCall_GetAspectRatio(lua_State *const luaVM)
{
  unsigned int v2; 

  j_lua_pushnumber(luaVM, cls.vidConfig.windowAspectRatio);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetInvertPitchKBM
==============
*/
__int64 LUI_CoD_LuaCall_GetInvertPitchKBM(lua_State *const luaVM)
{
  unsigned int v2; 
  int v3; 
  unsigned int v6; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE : Engine.GetInvertPitchKBM( controllerIndex )\n");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v3 = lui_tointeger32(luaVM, 1);
    GamerProfile_GetInvertedVerticalLookKBM(v3);
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
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v6);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_CompleteTutorial
==============
*/
__int64 LUI_CoD_LuaCall_CompleteTutorial(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_CoD_LuaCall_CompleteTutorial_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_IsLevelInFileSystem
==============
*/
__int64 LUI_CoD_LuaCall_IsLevelInFileSystem(lua_State *const luaVM)
{
  unsigned int v2; 
  const char *v3; 
  bool v4; 
  unsigned int v5; 
  char dest[256]; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isstring(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.IsLevelInFileSystem( <levelName> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isstring(luaVM, 1) )
  {
    v3 = j_lua_tolstring(luaVM, 1, NULL);
    Com_sprintf(dest, 0x100ui64, "%s.ff", v3);
    v4 = g_fileSystem->Exists(g_fileSystem, SF_ZONE, dest);
    j_lua_pushboolean(luaVM, v4);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v5);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_IsKeyboardConnected
==============
*/
__int64 LUI_CoD_LuaCall_IsKeyboardConnected(lua_State *const luaVM)
{
  unsigned int v2; 
  int v3; 
  unsigned int v4; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE : Engine.IsKeyboardConnected( controllerIndex )\n");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v3 = 0;
    while ( !IN_IsKeyboardConnected(v3) )
    {
      if ( ++v3 >= 8 )
      {
        j_lua_pushboolean(luaVM, 0);
        goto LABEL_12;
      }
    }
    j_lua_pushboolean(luaVM, 1);
  }
  else
  {
    v2 = 0;
  }
LABEL_12:
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v4);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_IsDedi
==============
*/
__int64 LUI_CoD_LuaCall_IsDedi(lua_State *const luaVM)
{
  const PartyData *PartyData; 
  int IsServerDedicated; 
  unsigned int v4; 

  PartyData = Lobby_GetPartyData();
  IsServerDedicated = Party_IsServerDedicated(PartyData);
  j_lua_pushboolean(luaVM, IsServerDedicated != 0);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_SaveCurrentSPMissions
==============
*/
__int64 LUI_CoD_LuaCall_SaveCurrentSPMissions(lua_State *const luaVM)
{
  int v4; 
  double v5; 
  StatsSource ActiveStatsSource; 
  char v9; 
  char *v10; 
  unsigned int v11; 
  int navStringCount; 
  DDLState fromState; 
  DDLContext context; 
  GamerProfileData result; 
  DDLState v17; 
  char *navStrings[16]; 

  __asm { vpxor   xmm0, xmm0, xmm0 }
  v4 = 0;
  fromState.offset = 0;
  fromState.isValid = 0;
  fromState.arrayIndex = -1;
  *(_OWORD *)&fromState.member = _XMM0;
  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: Engine.SaveCurrentSPMissions( <controller> )\n");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.SaveCurrentSPMissions( <controller> )\n");
  v5 = lui_tonumber32(luaVM, 1);
  ActiveStatsSource = LiveStorage_GetActiveStatsSource((int)*(float *)&v5);
  if ( CL_PlayerData_GetDDLBuffer(&context, (int)*(float *)&v5, ActiveStatsSource, STATSGROUP_COMMON) )
  {
    _XMM0 = (__int128)*GamerProfile_GetDataByName(&result, (int)*(float *)&v5, "missionhighestdifficulty");
    __asm { vpextrq rdi, xmm0, 1 }
    for ( ; *_RDI; ++v4 )
    {
      if ( v4 >= 64 )
        break;
      v9 = *_RDI;
      v10 = j_va("commonData.spCompletion.%d", (unsigned int)v4);
      Com_ParseNavStrings(v10, (const char **)navStrings, 16, &navStringCount);
      fromState = *DDL_GetRootState(&v17, context.def);
      if ( DDL_MoveToPath(&fromState, &fromState, navStringCount, (const char **)navStrings) && DDL_GetType(&fromState) == DDL_UINT_TYPE && !DDL_GetUInt(&fromState, &context) && v9 > 48 )
        DDL_SetUInt(&fromState, &context, 1u);
      ++_RDI;
    }
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v11 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v11);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_UsesMouseCursor
==============
*/
__int64 LUI_CoD_LuaCall_UsesMouseCursor(lua_State *const luaVM)
{
  unsigned int v2; 

  j_lua_pushboolean(luaVM, 1);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetMousePosition
==============
*/
__int64 LUI_CoD_LuaCall_GetMousePosition(lua_State *const luaVM)
{
  int v2; 
  unsigned int v3; 
  unsigned int v4; 
  float outX; 
  float outY; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.GetMousePosition( <controller> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    LUI_CoD_GetMousePosition(v2, &outX, &outY);
    j_lua_pushnumber(luaVM, outX);
    j_lua_pushnumber(luaVM, outY);
    v3 = 2;
  }
  else
  {
    v3 = 0;
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
LUI_CoD_LuaCall_Exec
==============
*/
__int64 LUI_CoD_LuaCall_Exec(lua_State *const luaVM)
{
  int v2; 
  const char *v3; 
  double v4; 
  unsigned int v5; 
  LocalClientNum_t localClientNum; 
  int controllerIndex; 

  v2 = j_lua_gettop(luaVM);
  if ( (unsigned int)(v2 - 1) > 1 )
    j_luaL_error(luaVM, "USAGE: Engine.Exec( <command>, ?<controller> )\n");
  if ( !j_lua_isstring(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.Exec( <command>, ?<controller> )\n");
  v3 = j_lua_tolstring(luaVM, 1, NULL);
  if ( v2 == 2 )
  {
    if ( !j_lua_isnumber(luaVM, 2) )
      j_luaL_error(luaVM, "USAGE: Engine.Exec( <command>, ?<controller> )\n");
    v4 = lui_tonumber32(luaVM, 2);
    controllerIndex = (int)*(float *)&v4;
    localClientNum = CL_Mgr_GetClientFromController((int)*(float *)&v4);
  }
  else
  {
    LUI_CoD_AttemptInferLocalClientAndController(&localClientNum, &controllerIndex);
  }
  if ( uiscript_verbose->current.enabled )
    Com_Printf(13, "LUISCRIPT - Executing command '%s'\n", v3);
  Cbuf_AddText(localClientNum, v3);
  Cbuf_AddText(localClientNum, "\n");
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_IsLocalServerPaused
==============
*/
__int64 LUI_CoD_LuaCall_IsLocalServerPaused(lua_State *const luaVM)
{
  bool v2; 
  unsigned int v3; 

  v2 = Com_GameMode_SupportsFeature(WEAPON_SCOPE_TOGGLE_ON|WEAPON_FIRING|0x80) && Com_MP_GetIsLocalServerPaused();
  j_lua_pushboolean(luaVM, v2);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_SaveChallengeAsDone
==============
*/
__int64 LUI_CoD_LuaCall_SaveChallengeAsDone(lua_State *const luaVM)
{
  double v2; 
  const char *v3; 
  StatsSource ActiveStatsSource; 
  unsigned int v5; 
  int navStringCount; 
  DDLState result; 
  DDLContext context; 
  char *navStrings[16]; 
  char dest[256]; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, "USAGE: Engine.SaveChallengeAsDone( <controller_index> <challenge_name> )");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.SaveChallengeAsDone( <CONTROLLER_INDEX> <challenge_name> )");
  if ( !j_lua_isstring(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Engine.SaveChallengeAsDone( <controller_index> <CHALLENGE_NAME> )");
  v2 = lui_tonumber32(luaVM, 1);
  v3 = j_lua_tolstring(luaVM, 2, NULL);
  ActiveStatsSource = LiveStorage_GetActiveStatsSource((int)*(float *)&v2);
  if ( CL_PlayerData_GetDDLBuffer(&context, (int)*(float *)&v2, ActiveStatsSource, STATSGROUP_COMMON) )
  {
    Core_strcpy(dest, 0x100ui64, v3);
    Com_ParseNavStrings(dest, (const char **)navStrings, 16, &navStringCount);
    DDL_GetRootState(&result, context.def);
    if ( DDL_MoveToPath(&result, &result, navStringCount, (const char **)navStrings) && DDL_GetType(&result) == DDL_UINT_TYPE && !DDL_GetUInt(&result, &context) )
      DDL_SetUInt(&result, &context, 1u);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_ExecFirstClient
==============
*/
__int64 LUI_CoD_LuaCall_ExecFirstClient(lua_State *const luaVM)
{
  const char *v2; 
  LocalClientNum_t FirstActiveLocalClient; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: Engine.ExecFirstClient( <command> )\n");
  if ( !j_lua_isstring(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.ExecFirstClient( <command> )\n");
  if ( CL_GetLocalClientActiveCount() <= 0 )
    j_luaL_error(luaVM, "No active clients to execute on\n");
  v2 = j_lua_tolstring(luaVM, 1, NULL);
  FirstActiveLocalClient = CL_GetFirstActiveLocalClient();
  if ( uiscript_verbose->current.enabled )
    Com_Printf(13, "LUISCRIPT - Executing on first client command '%s'\n", v2);
  Cbuf_AddText(FirstActiveLocalClient, v2);
  Cbuf_AddText(FirstActiveLocalClient, "\n");
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_IsClientConnectionActive
==============
*/
__int64 LUI_CoD_LuaCall_IsClientConnectionActive(lua_State *const luaVM)
{
  unsigned int v2; 
  double v3; 
  LocalClientNum_t ClientFromController; 
  __int64 v5; 
  unsigned int v6; 

  if ( j_lua_gettop(luaVM) < 0 )
    j_luaL_error(luaVM, "USAGE: Engine.IsClientConnectionActive()");
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = 0;
  }
  else
  {
    v2 = 1;
    if ( !j_lua_isnumber(luaVM, 1) )
      j_luaL_error(luaVM, "USAGE: Engine.IsClientConnectionActive( controllerIndex ) \n");
    v3 = lui_tonumber32(luaVM, 1);
    ClientFromController = CL_Mgr_GetClientFromController((int)*(float *)&v3);
    v5 = ClientFromController;
    if ( (unsigned int)ClientFromController >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", ClientFromController, 2) )
      __debugbreak();
    j_lua_pushboolean(luaVM, clientUIActives[v5].connectionState == CA_ACTIVE);
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
LUI_CoD_LuaCall_IsTrialLicense
==============
*/
__int64 LUI_CoD_LuaCall_IsTrialLicense(lua_State *const luaVM)
{
  unsigned int v2; 

  j_lua_pushboolean(luaVM, 0);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_ExecNow
==============
*/
__int64 LUI_CoD_LuaCall_ExecNow(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_CoD_LuaCall_ExecNow_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_ShouldShowPostMatchSurvey
==============
*/
__int64 LUI_CoD_LuaCall_ShouldShowPostMatchSurvey(lua_State *const luaVM)
{
  const dvar_t *v1; 
  int v3; 
  const dvar_t *v4; 
  unsigned int v5; 

  v1 = DVARBOOL_survey_enabled;
  if ( !DVARBOOL_survey_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "survey_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  v3 = 0;
  if ( v1->current.enabled )
  {
    v4 = DVARBOOL_should_show_post_game_survey;
    if ( !DVARBOOL_should_show_post_game_survey && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "should_show_post_game_survey") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    if ( v4->current.enabled )
      v3 = 1;
  }
  j_lua_pushboolean(luaVM, v3);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v5);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_PostMatchSurveyResponded
==============
*/
__int64 LUI_CoD_LuaCall_PostMatchSurveyResponded(lua_State *const luaVM)
{
  int v2; 
  int v3; 
  int v4; 
  int v5; 
  unsigned int v6; 

  if ( !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || !j_lua_isnumber(luaVM, 3) || j_lua_type(luaVM, 4) != 1 )
    j_luaL_error(luaVM, "USAGE: Engine.SurveyResponded( <controller>, <buttonLayout>, <buttonPressed>, <isQuitter>");
  v2 = lui_tointeger32(luaVM, 1);
  v3 = lui_tointeger32(luaVM, 2);
  v4 = lui_tointeger32(luaVM, 3);
  v5 = j_lua_toboolean(luaVM, 4);
  Online_Telemetry_EndGameSurvey(v2, v3, v4, v5 != 0);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v6);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_ExecKeysCfgFrom
==============
*/
__int64 LUI_CoD_LuaCall_ExecKeysCfgFrom(lua_State *const luaVM)
{
  double v2; 
  LocalClientNum_t ClientFromController; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, "USAGE: Engine.ExecKeysCfgFrom( <gameModeInt>, <controller_num> )\n");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.ExecKeysCfgFrom( <gameModeInt>, <controller_num> )\n");
  v2 = lui_tonumber32(luaVM, 2);
  ClientFromController = CL_Mgr_GetClientFromController((int)*(float *)&v2);
  CL_Keys_LoadBindings(ClientFromController, (int)*(float *)&v2);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_Cod_LuaCall_ShowWebBrowser
==============
*/
__int64 LUI_Cod_LuaCall_ShowWebBrowser(lua_State *const luaVM)
{
  int v2; 
  UI_BROWSER_TYPE v3; 
  const char *v4; 
  unsigned int v5; 

  if ( !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || !j_lua_isstring(luaVM, 3) )
    j_luaL_error(luaVM, "USAGE: Engine.ShowWebBrowser( <controllerIndex>, <browserType>, <url> )");
  if ( j_lua_isnumber(luaVM, 1) && j_lua_isnumber(luaVM, 2) && j_lua_isstring(luaVM, 3) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    v3 = lui_tointeger32(luaVM, 2);
    v4 = j_lua_tolstring(luaVM, 3, NULL);
    UI_ShowBrowser(v2, v4, (const char *)&queryFormat.fmt + 3, v3, NULL);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_ReloadDefaultKeysCfg
==============
*/
__int64 LUI_CoD_LuaCall_ReloadDefaultKeysCfg(lua_State *const luaVM)
{
  double v2; 
  LocalClientNum_t ClientFromController; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: Engine.ReloadDefaultKeysCfg( <controller_num> )\n");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.ReloadDefaultKeysCfg( <controller_num> )\n");
  v2 = lui_tonumber32(luaVM, 1);
  ClientFromController = CL_Mgr_GetClientFromController((int)*(float *)&v2);
  CL_Keys_ForceDefaultKeyBindingReload(ClientFromController, (int)*(float *)&v2);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_Cod_LuaCall_HasSocialNetworkPrivileges
==============
*/
__int64 LUI_Cod_LuaCall_HasSocialNetworkPrivileges(lua_State *const luaVM)
{
  bool HaveSocialNetworkSharingPrivilege; 
  int v3; 
  unsigned int v4; 

  HaveSocialNetworkSharingPrivilege = 1;
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.HasSocialNetworkPrivileges( <controllerIndex>");
  if ( j_lua_isnumber(luaVM, 1) )
  {
    v3 = lui_tointeger32(luaVM, 1);
    HaveSocialNetworkSharingPrivilege = Live_GetDoesUserHaveSocialNetworkSharingPrivilege(v3);
  }
  j_lua_pushboolean(luaVM, HaveSocialNetworkSharingPrivilege);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_PlayStreamingVideo
==============
*/
__int64 LUI_CoD_LuaCall_PlayStreamingVideo(lua_State *const luaVM)
{
  const char *v2; 
  Online_VideoStreaming *Instance; 
  bool started; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: Engine.PlayStreamingVideo( <movieURL> )\n");
  v2 = j_lua_tolstring(luaVM, 1, NULL);
  Instance = Online_VideoStreaming::GetInstance();
  started = Online_VideoStreaming::StartVideo(Instance, v2, 0);
  j_lua_pushboolean(luaVM, started);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v5);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_SetLastLuaError
==============
*/
__int64 LUI_CoD_LuaCall_SetLastLuaError(lua_State *const luaVM)
{
  const char *v2; 
  unsigned int v3; 

  v2 = j_lua_tolstring(luaVM, 1, NULL);
  if ( v2 )
  {
    g_lui_last_error_msg[0] = 31;
    Core_strcpy_truncate(&g_lui_last_error_msg[1], 0x7FFui64, v2);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_StopStreamingVideo
==============
*/
__int64 LUI_CoD_LuaCall_StopStreamingVideo(lua_State *const luaVM)
{
  Online_VideoStreaming *Instance; 
  bool v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Engine.StopStreamingVideo()\n");
  Instance = Online_VideoStreaming::GetInstance();
  v3 = Online_VideoStreaming::StopVideo(Instance, 0, 0);
  j_lua_pushboolean(luaVM, v3);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_SendEventToNetLua
==============
*/
__int64 LUI_CoD_LuaCall_SendEventToNetLua(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isstring(luaVM, 1) || j_lua_type(luaVM, 2) != 5 )
    j_luaL_error(luaVM, "USAGE: Engine.SendEventToNetLua( <eventname>, <eventdata> )\n");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isstring(luaVM, 1) )
    j_lua_type(luaVM, 2);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_PauseStreamingVideo
==============
*/
__int64 LUI_CoD_LuaCall_PauseStreamingVideo(lua_State *const luaVM)
{
  int v2; 
  Online_VideoStreaming *Instance; 
  bool v4; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: Engine.PauseStreamingVideo( <integer> ) \n");
  v2 = lui_tointeger32(luaVM, 1);
  Instance = Online_VideoStreaming::GetInstance();
  v4 = Online_VideoStreaming::SetPauseStatus(Instance, v2 != 0);
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
LUI_CoD_LuaCall_IsLUIProfile
==============
*/
__int64 LUI_CoD_LuaCall_IsLUIProfile(lua_State *const luaVM)
{
  unsigned int v2; 

  j_lua_pushboolean(luaVM, 0);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_MuteStreamingVideo
==============
*/
__int64 LUI_CoD_LuaCall_MuteStreamingVideo(lua_State *const luaVM)
{
  int v2; 
  Online_VideoStreaming *Instance; 
  bool v4; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: Engine.MuteStreamingVideo( <integer> ) \n");
  v2 = lui_tointeger32(luaVM, 1);
  Instance = Online_VideoStreaming::GetInstance();
  v4 = Online_VideoStreaming::SetMuteStatus(Instance, v2 != 0);
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
LUI_CoD_LuaCall_ProfileBeginEvent
==============
*/
__int64 LUI_CoD_LuaCall_ProfileBeginEvent(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_DisplayStreamingVideo
==============
*/
__int64 LUI_CoD_LuaCall_DisplayStreamingVideo(lua_State *const luaVM)
{
  int v2; 
  Online_VideoStreaming *Instance; 
  bool v4; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: Engine.DisplayStreamingVideo( <integer> ) \n");
  v2 = lui_tointeger32(luaVM, 1);
  Instance = Online_VideoStreaming::GetInstance();
  v4 = Online_VideoStreaming::SetDisplayStatus(Instance, v2 != 0);
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
LUI_CoD_LuaCall_ProfileEndEvent
==============
*/
__int64 LUI_CoD_LuaCall_ProfileEndEvent(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_PlayMenuVideo
==============
*/
__int64 LUI_CoD_LuaCall_PlayMenuVideo(lua_State *const luaVM)
{
  unsigned int v2; 
  const char *v3; 
  int v4; 
  unsigned int v7; 

  if ( j_lua_gettop(luaVM) < 1 || j_lua_gettop(luaVM) > 4 )
    j_luaL_error(luaVM, "USAGE: Engine.PlayMenuVideo( <movieName>, <flags>, <startOffset> )\n");
  v2 = 0;
  v3 = j_lua_tolstring(luaVM, 1, NULL);
  v4 = 0;
  if ( j_lua_isnumber(luaVM, 2) )
    v4 = lui_tointeger32(luaVM, 2);
  if ( j_lua_isnumber(luaVM, 3) )
  {
    lui_tonumber32(luaVM, 3);
    _XMM0 = 0i64;
    __asm { vroundss xmm1, xmm0, xmm4, 1 }
    v2 = (int)*(float *)&_XMM1;
  }
  if ( j_lua_gettop(luaVM) >= 4 && j_lua_toboolean(luaVM, 4) )
    R_Cinematic_ClearServerFlags(16);
  if ( LUI_CoD_InFrontend() )
  {
    LUI_CoD_SetFrontendCinematicState(v3, v4, v2);
  }
  else
  {
    R_Cinematic_StopPlayback(0);
    R_Cinematic_StartPlayback(v3, v4 | 0x2000, v2);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v7 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v7);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetLastInputType
==============
*/
__int64 LUI_CoD_LuaCall_GetLastInputType(lua_State *const luaVM)
{
  int v2; 
  bool IsControllerMappedToClient; 
  LocalClientNum_t v4; 
  unsigned int v7; 
  LocalClientNum_t outLocalClientNum; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: Engine.GetLastInputType( <controllerIndex> )\n");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.GetLastInputType( <controllerIndex> )\n");
  v2 = lui_tointeger32(luaVM, 1);
  IsControllerMappedToClient = CL_Mgr_IsControllerMappedToClient(v2, &outLocalClientNum);
  v4 = outLocalClientNum;
  if ( !IsControllerMappedToClient )
    v4 = LOCAL_CLIENT_0;
  outLocalClientNum = v4;
  if ( (unsigned int)v4 >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v4, 2) )
    __debugbreak();
  _XMM1 = 0i64;
  __asm { vcvtsi2sd xmm1, xmm1, dword ptr [rcx+rax]; n }
  j_lua_pushnumber(luaVM, *(long double *)&_XMM1);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v7 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v7);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_ForceLastInputType
==============
*/
__int64 LUI_CoD_LuaCall_ForceLastInputType(lua_State *const luaVM)
{
  int v2; 
  UIInputType v3; 
  bool IsControllerMappedToClient; 
  LocalClientNum_t v5; 
  int v6; 
  unsigned int v7; 
  LocalClientNum_t outLocalClientNum; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Engine.ForceLastInputType( <controllerIndex>, <inputType> )\n");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    v3 = lui_tointeger32(luaVM, 2);
    IsControllerMappedToClient = CL_Mgr_IsControllerMappedToClient(v2, &outLocalClientNum);
    v5 = outLocalClientNum;
    v6 = 0;
    if ( !IsControllerMappedToClient )
      v5 = LOCAL_CLIENT_0;
    outLocalClientNum = v5;
    LOBYTE(v6) = v3 != GAMEPAD;
    CL_GetLocalClientUIGlobals(v5)->lastInputType = v3;
    IN_ShowGameCursor(v6);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v7 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v7);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetMenuVideoName
==============
*/
__int64 LUI_CoD_LuaCall_GetMenuVideoName(lua_State *const luaVM)
{
  unsigned int v2; 
  char outName[64]; 

  R_Cinematic_GetNextFilename(outName, 0x40ui64);
  j_lua_pushstring(luaVM, outName);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_StopMenuVideo
==============
*/
__int64 LUI_CoD_LuaCall_StopMenuVideo(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Engine.StopMenuVideo( )\n");
  if ( LUI_CoD_InFrontend() )
  {
    LUI_CoD_ClearFrontendCinematicState();
  }
  else if ( !DB_IsDoingSPHotLoad() )
  {
    R_Cinematic_StopPlayback(0);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_ForceMouseMoveEvent
==============
*/
__int64 LUI_CoD_LuaCall_ForceMouseMoveEvent(lua_State *const luaVM)
{
  int v2; 
  bool IsControllerMappedToClient; 
  LocalClientNum_t v4; 
  unsigned int v5; 
  LocalClientNum_t outLocalClientNum; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.ForceMouseMoveEvent( <controllerIndex> )\n");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    IsControllerMappedToClient = CL_Mgr_IsControllerMappedToClient(v2, &outLocalClientNum);
    v4 = outLocalClientNum;
    if ( !IsControllerMappedToClient )
      v4 = LOCAL_CLIENT_0;
    outLocalClientNum = v4;
    CL_Input_HandleLuiMouseEvent(v4, 1);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_PlaySavedVideo
==============
*/
__int64 LUI_CoD_LuaCall_PlaySavedVideo(lua_State *const luaVM)
{
  bool v2; 
  unsigned int v3; 

  v2 = R_Cinematic_PlayFromSave();
  j_lua_pushboolean(luaVM, v2);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_CaptureMouse
==============
*/
__int64 LUI_CoD_LuaCall_CaptureMouse(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_IsVideoFinished
==============
*/
__int64 LUI_CoD_LuaCall_IsVideoFinished(lua_State *const luaVM)
{
  int v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Engine.IsVideoFinished( )\n");
  v2 = !R_Cinematic_IsStarted() && !R_Cinematic_IsPending() || R_Cinematic_IsFinished();
  j_lua_pushboolean(luaVM, v2);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_IsBattleNetAuthReady
==============
*/
__int64 LUI_CoD_LuaCall_IsBattleNetAuthReady(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Engine.IsBattleAuthReady()\n");
  j_lua_pushboolean(luaVM, 0);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_IsPlayingStoryBink
==============
*/
__int64 LUI_CoD_LuaCall_IsPlayingStoryBink(lua_State *const luaVM)
{
  int v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Engine.IsPlayingStoryBink()\n");
  v2 = !R_Cinematic_IsLoadFiller() && !R_Cinematic_IsFinished() && R_Cinematic_IsLoaded();
  j_lua_pushboolean(luaVM, v2);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_IsInIGRPaidSession
==============
*/
__int64 LUI_CoD_LuaCall_IsInIGRPaidSession(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Engine.IsInIGRPaidSession()\n");
  j_lua_pushboolean(luaVM, 0);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_IsCurrentBinkLoadFiller
==============
*/
__int64 LUI_CoD_LuaCall_IsCurrentBinkLoadFiller(lua_State *const luaVM)
{
  bool IsLoadFiller; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Engine.IsCurrentBinkLoadFiller()\n");
  IsLoadFiller = R_Cinematic_IsLoadFiller();
  j_lua_pushboolean(luaVM, IsLoadFiller);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_IsKoreanAccount
==============
*/
__int64 LUI_CoD_LuaCall_IsKoreanAccount(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Engine.IsKoreanAccount()\n");
  j_lua_pushboolean(luaVM, 0);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetCurrentBink
==============
*/
__int64 LUI_CoD_LuaCall_GetCurrentBink(lua_State *const luaVM)
{
  bool FilenameAndTimeInMsec; 
  char v3; 
  unsigned int v4; 
  unsigned int outTimeInMsec[4]; 
  char outName[64]; 

  FilenameAndTimeInMsec = R_Cinematic_GetFilenameAndTimeInMsec(outName, 0x40ui64, outTimeInMsec);
  v3 = outName[0];
  if ( !FilenameAndTimeInMsec )
    v3 = 0;
  outName[0] = v3;
  j_lua_pushstring(luaVM, outName);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_IsKorean15PlusAccount
==============
*/
__int64 LUI_CoD_LuaCall_IsKorean15PlusAccount(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Engine.IsKorean15PlusAccount()\n");
  j_lua_pushboolean(luaVM, 0);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_IsDoingSPHotLoad
==============
*/
__int64 LUI_CoD_LuaCall_IsDoingSPHotLoad(lua_State *const luaVM)
{
  bool IsDoingSPHotLoad; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Engine.IsDoingSPHotLoad( )\n");
  IsDoingSPHotLoad = DB_IsDoingSPHotLoad();
  j_lua_pushboolean(luaVM, IsDoingSPHotLoad);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_IsKoreanIGR
==============
*/
__int64 LUI_CoD_LuaCall_IsKoreanIGR(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Engine.IsKoreanIGR()\n");
  j_lua_pushboolean(luaVM, 0);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_IsInSPHotLoadBinkTransition
==============
*/
__int64 LUI_CoD_LuaCall_IsInSPHotLoadBinkTransition(lua_State *const luaVM)
{
  bool IsDoingSPHotLoadBinkTransition; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Engine.IsInSPHotLoadBinkTransition( )\n");
  IsDoingSPHotLoadBinkTransition = DB_IsDoingSPHotLoadBinkTransition();
  j_lua_pushboolean(luaVM, IsDoingSPHotLoadBinkTransition);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetKoreaIGRXPBonusRate
==============
*/

__int64 __fastcall LUI_CoD_LuaCall_GetKoreaIGRXPBonusRate(lua_State *const luaVM, double _XMM1_8)
{
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Engine.GetKoreaIGRXPBonusRate()\n");
  __asm { vxorpd  xmm1, xmm1, xmm1; n }
  j_lua_pushnumber(luaVM, *(long double *)&_XMM1);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetKoreaIGRWeaponXPBonusRate
==============
*/

__int64 __fastcall LUI_CoD_LuaCall_GetKoreaIGRWeaponXPBonusRate(lua_State *const luaVM, double _XMM1_8)
{
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Engine.GetKoreaIGRWeaponXPBonusRate()\n");
  __asm { vxorpd  xmm1, xmm1, xmm1; n }
  j_lua_pushnumber(luaVM, *(long double *)&_XMM1);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_IsVideoPlaying
==============
*/
__int64 LUI_CoD_LuaCall_IsVideoPlaying(lua_State *const luaVM)
{
  int v2; 
  unsigned int v3; 

  v2 = R_Cinematic_IsStarted() || R_Cinematic_IsPending();
  j_lua_pushboolean(luaVM, v2);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_PauseVideo
==============
*/
__int64 LUI_CoD_LuaCall_PauseVideo(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( CG_FrontEndScene_HasActiveCinematicPlayback() )
    j_luaL_error(luaVM, "Shouldn't manually control bink video playback while front-end scene cinematic is active. Clear the cinematic from script first.\n");
  R_Cinematic_SetPaused(CINEMATIC_INGAME_PAUSED, 3);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetKoreaIGRBattlePassXPBonusRate
==============
*/

__int64 __fastcall LUI_CoD_LuaCall_GetKoreaIGRBattlePassXPBonusRate(lua_State *const luaVM, double _XMM1_8)
{
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Engine.GetKoreaIGRBattlePassXPBonusRate()\n");
  __asm { vxorpd  xmm1, xmm1, xmm1; n }
  j_lua_pushnumber(luaVM, *(long double *)&_XMM1);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_ResumeVideo
==============
*/
__int64 LUI_CoD_LuaCall_ResumeVideo(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( CG_FrontEndScene_HasActiveCinematicPlayback() )
    j_luaL_error(luaVM, "Shouldn't manually control bink video playback while front-end scene cinematic is active. Clear the cinematic from script first.\n");
  R_Cinematic_SetPaused(CINEMATIC_NOT_PAUSED, 3);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_UsesHWMouseCursor
==============
*/
__int64 LUI_CoD_LuaCall_UsesHWMouseCursor(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Engine.UsesHWMouseCursor()\n");
  j_lua_pushboolean(luaVM, 1);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetBinkFrameNum
==============
*/
__int64 LUI_CoD_LuaCall_GetBinkFrameNum(lua_State *const luaVM)
{
  signed int BinkFrameNum; 
  unsigned int v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Engine.GetBinkFrameNum()\n");
  if ( j_lua_gettop(luaVM) )
  {
    v3 = 0;
  }
  else
  {
    BinkFrameNum = R_Cinematic_GetBinkFrameNum();
    j_lua_pushinteger(luaVM, BinkFrameNum);
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
LUI_CoD_LuaCall_EnableHWMouseCursor
==============
*/
__int64 LUI_CoD_LuaCall_EnableHWMouseCursor(lua_State *const luaVM)
{
  int v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: Engine.EnableHWMouseCursor( <boolean> )\n");
  if ( j_lua_type(luaVM, 1) != 1 )
    j_luaL_error(luaVM, "USAGE: Engine.EnableHWMouseCursor( <boolean> )\n");
  v2 = j_lua_toboolean(luaVM, 1);
  IN_ShowGameCursor(v2 != 0);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetBinkFrameRate
==============
*/
__int64 LUI_CoD_LuaCall_GetBinkFrameRate(lua_State *const luaVM)
{
  signed int BinkFrameRate; 
  unsigned int v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Engine.GetBinkFrameRate()\n");
  if ( j_lua_gettop(luaVM) )
  {
    v3 = 0;
  }
  else
  {
    BinkFrameRate = R_Cinematic_GetBinkFrameRate();
    j_lua_pushinteger(luaVM, BinkFrameRate);
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
LUI_CoD_LuaCall_SetHWMouseCursorType
==============
*/
__int64 LUI_CoD_LuaCall_SetHWMouseCursorType(lua_State *const luaVM)
{
  CursorType v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.SetHWMouseCursorType( <MouseCursorType> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    if ( (unsigned int)v2 > CURSOR_TYPE_WIN_IBEAM )
      j_luaL_error(luaVM, "Invalid cursor type.  See CoD.MouseCursorType enum");
    IN_SetMouseCursorType(v2);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetBinkTotalFrames
==============
*/
__int64 LUI_CoD_LuaCall_GetBinkTotalFrames(lua_State *const luaVM)
{
  signed int BinkTotalFrames; 
  unsigned int v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Engine.GetBinkTotalFrames()\n");
  if ( j_lua_gettop(luaVM) )
  {
    v3 = 0;
  }
  else
  {
    BinkTotalFrames = R_Cinematic_GetBinkTotalFrames();
    j_lua_pushinteger(luaVM, BinkTotalFrames);
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
LUI_CoD_LuaCall_GetCurrentWorldMap
==============
*/
__int64 LUI_CoD_LuaCall_GetCurrentWorldMap(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Engine.GetCurrentWorldMap()");
  j_lua_pushinteger(luaVM, 0i64);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_PlayBinkFillerAfterFinish
==============
*/
__int64 LUI_CoD_LuaCall_PlayBinkFillerAfterFinish(lua_State *const luaVM)
{
  int v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) != 1 || j_lua_type(luaVM, 1) != 1 )
    j_luaL_error(luaVM, "USAGE: Engine.PlayBinkFillerAfterFinish( <bool> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_type(luaVM, 1) == 1 )
  {
    v2 = j_lua_toboolean(luaVM, 1);
    R_Cinematic_PlayBinkFillerAfterFinish(v2 != 0);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_IsInSignInQueue
==============
*/
__int64 LUI_CoD_LuaCall_IsInSignInQueue(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Engine.IsInSignInQueue()\n");
  j_lua_pushboolean(luaVM, 0);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetSignInQueueWaitTimeSecs
==============
*/
__int64 LUI_CoD_LuaCall_GetSignInQueueWaitTimeSecs(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Engine.GetSignInQueueWaitTimeSecs()\n");
  j_lua_pushinteger(luaVM, 0i64);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_InLoadingScreen
==============
*/
__int64 LUI_CoD_LuaCall_InLoadingScreen(lua_State *const luaVM)
{
  bool v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Engine.InLoadingScreen()\n");
  v2 = Live_InLoadingScreen();
  j_lua_pushboolean(luaVM, v2);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetSignInQueuePosition
==============
*/
__int64 LUI_CoD_LuaCall_GetSignInQueuePosition(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Engine.GetSignInQueuePosition()\n");
  j_lua_pushinteger(luaVM, 0i64);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_StartGameModeSP
==============
*/
__int64 LUI_CoD_LuaCall_StartGameModeSP(lua_State *const luaVM)
{
  unsigned int v2; 

  GamerProfile_UpdateProfilePlayTimes();
  Com_GameMode_SetDesiredGameMode(HALF, 1);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetBattlenetCatalogError
==============
*/
__int64 LUI_CoD_LuaCall_GetBattlenetCatalogError(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Engine.GetBattlenetCatalogError()\n");
  j_lua_pushnil(luaVM);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_StartGameModeMP
==============
*/
__int64 LUI_CoD_LuaCall_StartGameModeMP(lua_State *const luaVM)
{
  GameModeType v2; 
  unsigned int v3; 

  GamerProfile_UpdateProfilePlayTimes();
  LOBYTE(v2) = 2;
  Com_GameMode_SetDesiredGameMode(v2, 1);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_StartGameModeCP
==============
*/
__int64 LUI_CoD_LuaCall_StartGameModeCP(lua_State *const luaVM)
{
  GameModeType v2; 
  unsigned int v3; 

  GamerProfile_UpdateProfilePlayTimes();
  LOBYTE(v2) = 3;
  Com_GameMode_SetDesiredGameMode(v2, 1);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_ClearBattlenetCatalogError
==============
*/
__int64 LUI_CoD_LuaCall_ClearBattlenetCatalogError(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Engine.ClearBattlenetCatalogError()\n");
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_StopGameMode
==============
*/
__int64 LUI_CoD_LuaCall_StopGameMode(lua_State *const luaVM)
{
  unsigned int v2; 

  GamerProfile_UpdateProfilePlayTimes();
  Com_GameMode_SetDesiredGameMode(NONE, 1);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetAntiAddictionTipsDesc
==============
*/
__int64 LUI_CoD_LuaCall_GetAntiAddictionTipsDesc(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Engine.GetAntiAddictionTipsDesc()\n");
  j_lua_pushstring(luaVM, (const char *)&queryFormat.fmt + 3);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_SetDesiredGamemode
==============
*/
__int64 LUI_CoD_LuaCall_SetDesiredGamemode(lua_State *const luaVM)
{
  unsigned __int8 v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: Engine.SetDesiredGamemode( <gamemodeType> )\n");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.SetDesiredGamemode( <gamemodeType> )\n");
  v2 = lui_tointeger32(luaVM, 1);
  GamerProfile_UpdateProfilePlayTimes();
  Com_GameMode_SetDesiredGameMode((GameModeType)v2, 1);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_OnAntiAddictionTipsConfirmed
==============
*/
__int64 LUI_CoD_LuaCall_OnAntiAddictionTipsConfirmed(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Engine.OnAntiAddictionTipsConfirmed()\n");
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_ClearError
==============
*/
__int64 LUI_CoD_LuaCall_ClearError(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Engine.ClearError()\n");
  if ( LUI_Workers_IsRunningCmd() )
    LUI_Workers_ClearComErrors();
  else
    Com_ClearErrors();
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_COD_LuaCall_GetRevenueRateType
==============
*/
__int64 LUI_COD_LuaCall_GetRevenueRateType(lua_State *const luaVM)
{
  unsigned int v2; 

  j_lua_pushinteger(luaVM, 0i64);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_HorizontalFovTrueValue
==============
*/
__int64 LUI_CoD_LuaCall_HorizontalFovTrueValue(lua_State *const luaVM)
{
  const dvar_t *v1; 
  float windowAspectRatio; 
  float v4; 
  float v5; 
  double v6; 
  float v7; 
  long double v8; 
  unsigned int v9; 

  v1 = DVARFLT_com_targetWidescreenHorzFov;
  windowAspectRatio = cls.vidConfig.windowAspectRatio;
  if ( !DVARFLT_com_targetWidescreenHorzFov && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_targetWidescreenHorzFov") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  v4 = tanf_0(v1->current.value * 0.0087266462);
  v5 = atanf_0(v4 * 0.75);
  v6 = I_fclamp(v5 * 1.762947, 0.015384615, 1.6923077);
  v7 = (float)(tanf_0(*(float *)&v6 * 0.56723201) * windowAspectRatio) * 0.75;
  v8 = (float)(atanf_0(v7) * 114.59155);
  j_lua_pushnumber(luaVM, v8);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v9 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v9);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_ClearMapLoadErrors
==============
*/
__int64 LUI_CoD_LuaCall_ClearMapLoadErrors(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Engine.ClearMapLoadErrors()\n");
  Com_MapLoadErrors_ClearFinalizedCount();
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetMapLoadErrorTitle
==============
*/
__int64 LUI_CoD_LuaCall_GetMapLoadErrorTitle(lua_State *const luaVM)
{
  const char *Title; 
  unsigned int v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Engine.LUI_CoD_LuaCall_GetMapLoadErrorTitle( )");
  if ( j_lua_gettop(luaVM) )
  {
    v3 = 0;
  }
  else
  {
    Title = Com_MapLoadErrors_GetTitle();
    j_lua_pushstring(luaVM, Title);
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
LUI_CoD_LuaCall_VerticalFovTrueValue
==============
*/
__int64 LUI_CoD_LuaCall_VerticalFovTrueValue(lua_State *const luaVM)
{
  unsigned int v2; 
  double v3; 
  float v4; 
  long double v5; 
  unsigned int v6; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.VerticalFOVTrueValue( <HorizontalFov> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v3 = lui_tonumber32(luaVM, 1);
    v4 = tanf_0(*(float *)&v3 * 0.0087266462) / cls.vidConfig.windowAspectRatio;
    v5 = (float)(atanf_0(v4) * 114.59155);
    j_lua_pushnumber(luaVM, v5);
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
LUI_CoD_LuaCall_GetMapLoadErrorText
==============
*/
__int64 LUI_CoD_LuaCall_GetMapLoadErrorText(lua_State *const luaVM)
{
  const char *Text; 
  unsigned int v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Engine.GetMapLoadErrorText( )");
  if ( j_lua_gettop(luaVM) )
  {
    v3 = 0;
  }
  else
  {
    Text = Com_MapLoadErrors_GetText();
    j_lua_pushstring(luaVM, Text);
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
LUI_CoD_LuaCall_SetLuiLayerKeyCatcher
==============
*/
__int64 LUI_CoD_LuaCall_SetLuiLayerKeyCatcher(lua_State *const luaVM)
{
  double v2; 
  unsigned int v3; 
  LocalClientNum_t outLocalClientNum; 

  v2 = lui_tonumber32(luaVM, 1);
  outLocalClientNum = LOCAL_CLIENT_INVALID;
  if ( CL_Mgr_IsControllerMappedToClient((int)*(float *)&v2, &outLocalClientNum) )
  {
    if ( outLocalClientNum == LOCAL_CLIENT_INVALID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_functions.cpp", 19647, ASSERT_TYPE_ASSERT, "(localClientNum != LOCAL_CLIENT_INVALID)", (const char *)&queryFormat, "localClientNum != LOCAL_CLIENT_INVALID") )
      __debugbreak();
    if ( j_lua_toboolean(luaVM, 2) )
      CL_Keys_AddCatcher(outLocalClientNum, 256);
    else
      CL_Keys_RemoveCatcher(outLocalClientNum, -257);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetMapLoadErrorCount
==============
*/
__int64 LUI_CoD_LuaCall_GetMapLoadErrorCount(lua_State *const luaVM)
{
  unsigned int FinalizedCount; 
  unsigned int v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Engine.GetMapLoadErrorCount( )");
  if ( j_lua_gettop(luaVM) )
  {
    v3 = 0;
  }
  else
  {
    FinalizedCount = Com_MapLoadErrors_GetFinalizedCount();
    j_lua_pushinteger(luaVM, FinalizedCount);
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
LUI_CoD_LuaCall_ReportMemory
==============
*/
__int64 LUI_CoD_LuaCall_ReportMemory(lua_State *const luaVM)
{
  unsigned int v2; 

  LUI_ReportMemoryUsage();
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_SetIsInOverlayMenu
==============
*/
__int64 LUI_CoD_LuaCall_SetIsInOverlayMenu(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_COD_LuaCall_GetCurrentCoDPlayMode
==============
*/
__int64 LUI_COD_LuaCall_GetCurrentCoDPlayMode(lua_State *const luaVM)
{
  unsigned __int8 ActiveGameMode; 
  unsigned int v3; 

  ActiveGameMode = Com_GameMode_GetActiveGameMode();
  j_lua_pushinteger(luaVM, ActiveGameMode);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_IsUsingPS4Controller
==============
*/
__int64 LUI_CoD_LuaCall_IsUsingPS4Controller(lua_State *const luaVM)
{
  unsigned int v2; 

  j_lua_pushboolean(luaVM, 0);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_COD_LuaCall_IsPlayerUsingButtonLayoutBumperPing
==============
*/
__int64 LUI_COD_LuaCall_IsPlayerUsingButtonLayoutBumperPing(lua_State *const luaVM)
{
  int v2; 
  bool IsPlayerUsingButtonLayoutBumperPing; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.IsPlayerUsingButtonLayoutBumperPing( <controllerIndex> )\n");
  v2 = lui_tointeger32(luaVM, 1);
  IsPlayerUsingButtonLayoutBumperPing = CG_IsPlayerUsingButtonLayoutBumperPing(v2);
  j_lua_pushboolean(luaVM, IsPlayerUsingButtonLayoutBumperPing);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_IsConnectedToGameServer
==============
*/
__int64 LUI_CoD_LuaCall_IsConnectedToGameServer(lua_State *const luaVM)
{
  int v1; 
  connstate_t LocalClientAnyConnectionState; 
  unsigned int v4; 

  v1 = 0;
  if ( clientUIActives[0].frontEndSceneState[0] )
    LocalClientAnyConnectionState = CA_DISCONNECTED;
  else
    LocalClientAnyConnectionState = CL_GetLocalClientAnyConnectionState(LOCAL_CLIENT_0);
  LOBYTE(v1) = LocalClientAnyConnectionState >= CA_CONNECTED;
  j_lua_pushboolean(luaVM, v1);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_PromptRequiresBacking
==============
*/
__int64 LUI_CoD_LuaCall_PromptRequiresBacking(lua_State *const luaVM)
{
  int DoesRequireBacking; 
  char *v3; 
  LocalClientNum_t CurrentLocalClient; 
  const dvar_t *v5; 
  const char *v6; 
  unsigned int v7; 
  unsigned int v8; 
  int usedCount[4]; 
  char dstString[1024]; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: Engine.PromptRequiresBacking( <text> )\n");
  if ( !j_lua_isstring(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.PromptRequiresBacking( <command> )\n");
  DoesRequireBacking = 0;
  v3 = (char *)j_lua_tolstring(luaVM, 1, NULL);
  usedCount[0] = 0;
  CurrentLocalClient = LUI_CoD_GetCurrentLocalClient();
  if ( LUI_CoD_InFrontend() && CurrentLocalClient == LOCAL_CLIENT_INVALID )
    CurrentLocalClient = LOCAL_CLIENT_0;
  v5 = DVARBOOL_lui_rendertime_binding_directive;
  if ( !DVARBOOL_lui_rendertime_binding_directive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_rendertime_binding_directive") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( v5->current.enabled )
  {
    UI_ReplaceDirective(CurrentLocalClient, v3, dstString, 0x400ui64, 0);
    v3 = dstString;
  }
  v6 = v3 + 1;
  if ( *v3 != 31 )
    v6 = v3;
  v7 = SEH_DecodeLetter(v6, usedCount);
  if ( usedCount[0] > 0 )
    DoesRequireBacking = FontIcons_DoesRequireBacking(v7);
  j_lua_pushboolean(luaVM, DoesRequireBacking);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v8 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v8);
  }
  return 1i64;
}

/*
==============
LUI_COD_LuaCall_IsCurrentButtonLayoutFlipped
==============
*/
__int64 LUI_COD_LuaCall_IsCurrentButtonLayoutFlipped(lua_State *const luaVM)
{
  int v2; 
  bool IsCurrentButtonLayoutFlipped; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.IsCurrentButtonLayoutFlipped( <controllerIndex> )\n");
  v2 = lui_tointeger32(luaVM, 1);
  IsCurrentButtonLayoutFlipped = CG_IsCurrentButtonLayoutFlipped(v2);
  j_lua_pushboolean(luaVM, IsCurrentButtonLayoutFlipped);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_COD_LuaCall_GetLUIModeTransition
==============
*/
__int64 LUI_COD_LuaCall_GetLUIModeTransition(lua_State *const luaVM)
{
  unsigned __int8 LUIModeTransition; 
  unsigned int v3; 

  LUIModeTransition = Com_GameMode_GetLUIModeTransition();
  j_lua_pushinteger(luaVM, LUIModeTransition);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_IsUnbound
==============
*/
__int64 LUI_CoD_LuaCall_IsUnbound(lua_State *const luaVM)
{
  const char *v2; 
  int v3; 
  LocalClientNum_t ClientFromController; 
  int v5; 
  const dvar_t *v6; 
  unsigned int v7; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, "USAGE: Engine.IsUnbound( <text>, <controllerIndex> )\n");
  if ( !j_lua_isstring(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Engine.IsUnbound( <command>, <controllerIndex> )\n");
  v2 = j_lua_tolstring(luaVM, 1, NULL);
  v3 = lua_tointeger32(luaVM, 2);
  ClientFromController = CL_Mgr_GetClientFromController(v3);
  v5 = 0;
  if ( LUI_CoD_InFrontend() && ClientFromController == LOCAL_CLIENT_INVALID )
    ClientFromController = LOCAL_CLIENT_0;
  v6 = DVARBOOL_lui_rendertime_binding_directive;
  if ( !DVARBOOL_lui_rendertime_binding_directive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_rendertime_binding_directive") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( v6->current.enabled )
    LOBYTE(v5) = !UI_IsDirectiveBound(ClientFromController, v2);
  j_lua_pushboolean(luaVM, v5);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v7 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v7);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetUnitScale
==============
*/
__int64 LUI_CoD_LuaCall_GetUnitScale(lua_State *const luaVM)
{
  const LUIElement *CurrentRoot; 
  LUIRootData *RootData; 
  unsigned int v4; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Engine.GetUnitScale()");
  if ( j_lua_gettop(luaVM) )
  {
    v4 = 0;
  }
  else
  {
    CurrentRoot = LUI_CoD_GetCurrentRoot(luaVM);
    if ( !CurrentRoot && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_functions.cpp", 8096, ASSERT_TYPE_ASSERT, "(root)", (const char *)&queryFormat, "root") )
      __debugbreak();
    RootData = LUI_GetRootData(CurrentRoot);
    j_lua_pushnumber(luaVM, RootData->unitScale);
    v4 = 1;
  }
  if ( (int)v4 > j_lua_gettop(luaVM) )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v4, v5);
  }
  return v4;
}

/*
==============
LUI_COD_LuaCall_IsPS3
==============
*/
__int64 LUI_COD_LuaCall_IsPS3(lua_State *const luaVM)
{
  unsigned int v2; 

  j_lua_pushboolean(luaVM, 0);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_NvidiaHighlightsRequestPermissions
==============
*/
__int64 LUI_CoD_LuaCall_NvidiaHighlightsRequestPermissions(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_COD_LuaCall_IsPS4
==============
*/
__int64 LUI_COD_LuaCall_IsPS4(lua_State *const luaVM)
{
  unsigned int v2; 

  j_lua_pushboolean(luaVM, 0);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_NvidiaHighlightsEnabled
==============
*/
__int64 LUI_CoD_LuaCall_NvidiaHighlightsEnabled(lua_State *const luaVM)
{
  unsigned int v2; 

  j_lua_pushboolean(luaVM, 0);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_COD_LuaCall_IsGamepadVita
==============
*/
__int64 LUI_COD_LuaCall_IsGamepadVita(lua_State *const luaVM)
{
  unsigned int v2; 

  j_lua_pushboolean(luaVM, 0);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_NvidiaHighlightsConfigurationSuccessful
==============
*/
__int64 LUI_CoD_LuaCall_NvidiaHighlightsConfigurationSuccessful(lua_State *const luaVM)
{
  unsigned int v2; 

  j_lua_pushboolean(luaVM, 0);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_COD_LuaCall_IsXbox360
==============
*/
__int64 LUI_COD_LuaCall_IsXbox360(lua_State *const luaVM)
{
  unsigned int v2; 

  j_lua_pushboolean(luaVM, 0);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_NvidiaHighlightsBeginGroup
==============
*/
__int64 LUI_CoD_LuaCall_NvidiaHighlightsBeginGroup(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_COD_LuaCall_IsXB3
==============
*/
__int64 LUI_COD_LuaCall_IsXB3(lua_State *const luaVM)
{
  unsigned int v2; 

  j_lua_pushboolean(luaVM, 1);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_NvidiaHighlightsEndGroup
==============
*/
__int64 LUI_CoD_LuaCall_NvidiaHighlightsEndGroup(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_COD_LuaCall_IsPC
==============
*/
__int64 LUI_COD_LuaCall_IsPC(lua_State *const luaVM)
{
  unsigned int v2; 

  j_lua_pushboolean(luaVM, 0);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_NvidiaHighlightsScreenshot
==============
*/
__int64 LUI_CoD_LuaCall_NvidiaHighlightsScreenshot(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_COD_LuaCall_IsPCApp
==============
*/
__int64 LUI_COD_LuaCall_IsPCApp(lua_State *const luaVM)
{
  unsigned int v2; 

  j_lua_pushboolean(luaVM, 0);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_NvidiaHighlightsVideo
==============
*/
__int64 LUI_CoD_LuaCall_NvidiaHighlightsVideo(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_COD_LuaCall_IsBattleNet
==============
*/
__int64 LUI_COD_LuaCall_IsBattleNet(lua_State *const luaVM)
{
  unsigned int v2; 

  j_lua_pushboolean(luaVM, 0);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_NvidiaHighlightsSummary
==============
*/
__int64 LUI_CoD_LuaCall_NvidiaHighlightsSummary(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_COD_LuaCall_IsWeGame
==============
*/
__int64 LUI_COD_LuaCall_IsWeGame(lua_State *const luaVM)
{
  unsigned int v2; 

  j_lua_pushboolean(luaVM, 0);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_NvidiaHighlightsFetchCountAsync
==============
*/
__int64 LUI_CoD_LuaCall_NvidiaHighlightsFetchCountAsync(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_COD_LuaCall_IsSteamGame
==============
*/
__int64 LUI_COD_LuaCall_IsSteamGame(lua_State *const luaVM)
{
  unsigned int v2; 

  j_lua_pushboolean(luaVM, 0);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_NvidiaHighlightsCleanup
==============
*/
__int64 LUI_CoD_LuaCall_NvidiaHighlightsCleanup(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_COD_LuaCall_IsPCSimple
==============
*/
__int64 LUI_COD_LuaCall_IsPCSimple(lua_State *const luaVM)
{
  unsigned int v2; 

  j_lua_pushboolean(luaVM, 0);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetContentProgress
==============
*/
__int64 LUI_CoD_LuaCall_GetContentProgress(lua_State *const luaVM)
{
  lua_State *v3; 
  const int *DLCPacks; 
  unsigned int v5; 
  int v6; 
  int v7; 
  int v8; 
  const int *SpDLCPacks; 
  int v10; 
  int v11; 
  int v12; 
  __int64 v17; 
  int v18; 
  ContentProgressState v19; 
  __int32 v20; 
  __int32 v21; 
  __int128 v22; 
  unsigned int v23; 
  unsigned int v24; 
  long double progress; 

  v3 = luaVM;
  if ( j_lua_gettop(luaVM) > 1 )
    j_luaL_error(v3, "USAGE: Engine.GetContentProgress()");
  if ( j_lua_gettop(v3) > 1 )
  {
    v23 = 0;
    goto LABEL_37;
  }
  DLCPacks = Content_GetDLCPacks();
  v5 = 10;
  if ( j_lua_gettop(v3) != 1 )
    goto LABEL_15;
  v6 = lui_tointeger32(v3, 1) - 1;
  if ( !v6 )
  {
    SpDLCPacks = Content_GetSpDLCPacks();
    goto LABEL_13;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    SpDLCPacks = Content_GetMpDLCPacks();
    v5 = 4;
    goto LABEL_14;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    SpDLCPacks = Content_GetCpDLCPacks();
LABEL_13:
    v5 = 3;
    goto LABEL_14;
  }
  if ( v8 == 1 )
  {
    SpDLCPacks = Content_GetBrDLCPacks();
    v5 = 1;
LABEL_14:
    DLCPacks = SpDLCPacks;
  }
LABEL_15:
  v10 = 0;
  v11 = 0;
  v12 = 0;
  _XMM0 = 0i64;
  __asm
  {
    vcvtsi2sd xmm0, xmm0, esi
    vxorpd  xmm6, xmm6, xmm6
    vxorpd  xmm7, xmm7, xmm7
  }
  v17 = 0i64;
  do
  {
    v18 = DLCPacks[v17];
    progress = *(double *)&_XMM6;
    v19 = Content_GetProgress(v18, &progress);
    if ( v19 )
    {
      v20 = v19 - 1;
      if ( v20 )
      {
        v21 = v20 - 1;
        if ( v21 )
        {
          if ( v21 == 1 )
          {
            ++v10;
          }
          else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_functions.cpp", 20198, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ContentProgressState unknown.") )
          {
            __debugbreak();
          }
        }
        else
        {
          ++v11;
        }
      }
      else
      {
        ++v12;
      }
    }
    ++v17;
    *((_QWORD *)&v22 + 1) = *((_QWORD *)&_XMM7 + 1);
    *(double *)&v22 = *(double *)&_XMM7 + 1.0 / *(double *)&_XMM0 * progress;
    _XMM7 = v22;
  }
  while ( v17 < v5 );
  v3 = luaVM;
  if ( v10 == v5 )
  {
    *(double *)&_XMM6 = DOUBLE_3_0;
  }
  else if ( v11 <= 0 )
  {
    if ( v12 > 0 || v10 > 0 )
      *(double *)&_XMM6 = DOUBLE_1_0;
  }
  else
  {
    *(double *)&_XMM6 = DOUBLE_2_0;
  }
  j_lua_pushnumber(luaVM, *(long double *)&_XMM6);
  j_lua_pushnumber(luaVM, *(long double *)&v22);
  v23 = 2;
LABEL_37:
  if ( (int)v23 > j_lua_gettop(v3) )
  {
    v24 = j_lua_gettop(v3);
    j_luaL_error(v3, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v23, v24);
  }
  return v23;
}

/*
==============
LUI_COD_LuaCall_IsBattleNetLanOnly
==============
*/
__int64 LUI_COD_LuaCall_IsBattleNetLanOnly(lua_State *const luaVM)
{
  unsigned int v2; 

  j_lua_pushboolean(luaVM, 0);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_COD_LuaCall_IsMagma
==============
*/
__int64 LUI_COD_LuaCall_IsMagma(lua_State *const luaVM)
{
  const dvar_t *v1; 
  unsigned int v3; 

  v1 = DVARBOOL_ui_is_magma_gamemode;
  if ( !DVARBOOL_ui_is_magma_gamemode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ui_is_magma_gamemode") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  j_lua_pushboolean(luaVM, v1->current.color[0]);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_COD_LuaCall_IsPremiumPlayer
==============
*/
__int64 LUI_COD_LuaCall_IsPremiumPlayer(lua_State *const luaVM)
{
  unsigned int v2; 
  int v3; 
  bool IsPaidUser; 
  unsigned int v5; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.IsPremiumPlayer( <controllerIndex> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v3 = lui_tointeger32(luaVM, 1);
    IsPaidUser = LiveStorage_IsPaidUser(v3);
    j_lua_pushboolean(luaVM, IsPaidUser);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v5);
  }
  return v2;
}

/*
==============
LUI_COD_LuaCall_IsPremiumPlayerReady
==============
*/
__int64 LUI_COD_LuaCall_IsPremiumPlayerReady(lua_State *const luaVM)
{
  unsigned int v2; 
  int v3; 
  bool IsPaidUserReady; 
  unsigned int v5; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.IsPremiumPlayerReady( <controllerIndex> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v3 = lui_tointeger32(luaVM, 1);
    IsPaidUserReady = LiveStorage_IsPaidUserReady(v3);
    j_lua_pushboolean(luaVM, IsPaidUserReady);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v5);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_IsGameModeAllowed
==============
*/
__int64 LUI_CoD_LuaCall_IsGameModeAllowed(lua_State *const luaVM)
{
  unsigned int v2; 
  bool IsPaidUser; 
  int v4; 
  int v5; 
  int v6; 
  int v7; 
  unsigned int v8; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Engine.IsGameModeAllowed( <gameModeType>, <controllerIndex> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    IsPaidUser = 0;
    v4 = lui_tointeger32(luaVM, 1);
    v5 = lui_tointeger32(luaVM, 2);
    v6 = v4 - 1;
    if ( !v6 || (v7 = v6 - 1) == 0 || v7 == 1 )
      IsPaidUser = LiveStorage_IsPaidUser(v5);
    j_lua_pushboolean(luaVM, IsPaidUser);
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
LUI_COD_LuaCall_RefreshPremiumPlayer
==============
*/
__int64 LUI_COD_LuaCall_RefreshPremiumPlayer(lua_State *const luaVM)
{
  int v2; 
  Online_Commerce *Instance; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.RefreshPremiumPlayer( <controllerIndex> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    Instance = Online_Commerce::GetInstance();
    Online_Commerce::GetPaidEntitlement(Instance, v2);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_COD_LuaCall_IsLanguageAvailable
==============
*/
__int64 LUI_COD_LuaCall_IsLanguageAvailable(lua_State *const luaVM)
{
  unsigned int v2; 
  int v3; 
  bool IsLanguagePresent; 
  unsigned int v5; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.IsLanguageAvailable( language )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v3 = lui_tointeger32(luaVM, 1);
    if ( v3 < 0 )
      j_luaL_error(luaVM, (const char *)&queryFormat, "language >= 0");
    if ( v3 >= 21 )
      j_luaL_error(luaVM, (const char *)&queryFormat, "language < MAX_LANGUAGES");
    IsLanguagePresent = SEH_IsLanguagePresent(v3);
    j_lua_pushboolean(luaVM, IsLanguagePresent);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v5);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_IsGameModeAvailable
==============
*/
__int64 LUI_CoD_LuaCall_IsGameModeAvailable(lua_State *const luaVM)
{
  bool v2; 
  unsigned int v3; 
  int v4; 
  int v5; 
  int v6; 
  bool IsBRAvailable; 
  unsigned int v8; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: Engine.IsGameModeAvailable( <gameModeType> )");
  if ( j_lua_gettop(luaVM) == 1 )
  {
    v2 = 0;
    v3 = 1;
    v4 = lui_tointeger32(luaVM, 1) - 1;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( v6 )
        {
          if ( v6 != 1 )
          {
LABEL_13:
            j_lua_pushboolean(luaVM, v2);
            goto LABEL_15;
          }
          IsBRAvailable = Content_IsBRAvailable();
        }
        else
        {
          IsBRAvailable = Content_IsCPAvailable();
        }
      }
      else
      {
        IsBRAvailable = Content_IsMPAvailable();
      }
    }
    else
    {
      IsBRAvailable = Content_IsSPAvailable();
    }
    v2 = IsBRAvailable;
    goto LABEL_13;
  }
  v3 = 0;
LABEL_15:
  if ( (int)v3 > j_lua_gettop(luaVM) )
  {
    v8 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v3, v8);
  }
  return v3;
}

/*
==============
LUI_COD_LuaCall_LanguageHasPartialVariant
==============
*/
__int64 LUI_COD_LuaCall_LanguageHasPartialVariant(lua_State *const luaVM)
{
  unsigned int v2; 

  j_lua_pushboolean(luaVM, 0);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_SwapControllers
==============
*/
__int64 LUI_CoD_LuaCall_SwapControllers(lua_State *const luaVM)
{
  int v2; 
  int v3; 
  unsigned int v4; 

  GPad_ResetControllerMissing();
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Engine.SwapControllers(  <new><old>  )");
  if ( j_lua_gettop(luaVM) == 2 )
  {
    if ( j_lua_isnumber(luaVM, 1) )
    {
      if ( j_lua_isnumber(luaVM, 2) )
      {
        v2 = lui_tointeger32(luaVM, 1);
        v3 = lui_tointeger32(luaVM, 2);
        if ( v2 != v3 )
          GPad_SwapGamepadsForControllerIndexes(v2, v3);
      }
    }
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_COD_LuaCall_UsePartialVariant
==============
*/
__int64 LUI_COD_LuaCall_UsePartialVariant(lua_State *const luaVM)
{
  unsigned int v2; 

  j_lua_pushboolean(luaVM, 0);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_COD_LuaCall_SetUsePartialVariant
==============
*/
__int64 LUI_COD_LuaCall_SetUsePartialVariant(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_SetControllerMissing
==============
*/
__int64 LUI_CoD_LuaCall_SetControllerMissing(lua_State *const luaVM)
{
  int v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.SetControllerMissing(  <controller>  )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    GPad_SetControllerMissing(v2);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_COD_LuaCall_IsPCDesktop
==============
*/
__int64 LUI_COD_LuaCall_IsPCDesktop(lua_State *const luaVM)
{
  unsigned int v2; 

  j_lua_pushboolean(luaVM, 0);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_COD_LuaCall_CanResumeGame
==============
*/
__int64 LUI_COD_LuaCall_CanResumeGame(lua_State *const luaVM)
{
  bool enabled; 
  int v3; 
  const dvar_t *v4; 
  __int128 v5; 
  unsigned int v6; 
  GamerProfileData result; 

  enabled = 0;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.CanResumeGame( <controller> )");
  if ( j_lua_gettop(luaVM) == 1 )
  {
    if ( j_lua_isnumber(luaVM, 1) )
    {
      v3 = lui_tointeger32(luaVM, 1);
      if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_STILL_LAND|WEAPON_FIRING|0x80) )
      {
        v4 = DVARBOOL_com_saveGameAvailable;
        if ( !DVARBOOL_com_saveGameAvailable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_saveGameAvailable") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v4);
        enabled = v4->current.enabled;
        v5 = (__int128)*GamerProfile_GetDataByName(&result, v3, "yoloState");
        if ( (_DWORD)v5 != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_functions.cpp", 8478, ASSERT_TYPE_ASSERT, "(profileData.type == TYPE_INT)", (const char *)&queryFormat, "profileData.type == TYPE_INT") )
          __debugbreak();
        if ( DWORD2(v5) == 1 )
          enabled = 0;
      }
    }
  }
  j_lua_pushboolean(luaVM, enabled);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v6);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetOldControllerMissing
==============
*/
__int64 LUI_CoD_LuaCall_GetOldControllerMissing(lua_State *const luaVM)
{
  unsigned int v4; 

  GPad_GetControllerMissing();
  _XMM1 = 0i64;
  __asm { vcvtsi2sd xmm1, xmm1, eax; n }
  j_lua_pushnumber(luaVM, *(long double *)&_XMM1);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_CoD_IsImageAssetLoaded
==============
*/
__int64 LUI_CoD_IsImageAssetLoaded(lua_State *const luaVM)
{
  unsigned int v2; 
  const char *v3; 
  const GfxImage *v4; 
  bool v5; 
  unsigned int v6; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isstring(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.IsImageAssetLoaded( imageName )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isstring(luaVM, 1) )
  {
    v3 = j_lua_tolstring(luaVM, 1, NULL);
    v4 = Image_Register(v3, IMAGE_TRACK_UI);
    v5 = Stream_CheckImage(v4, MIP3);
    j_lua_pushboolean(luaVM, v5);
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
LUI_CoD_LuaCall_GetTimeOfLastSaveGame
==============
*/
__int64 LUI_CoD_LuaCall_GetTimeOfLastSaveGame(lua_State *const luaVM)
{
  const qtime_s *TimeOfLastSave; 
  unsigned int v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Engine.GetTimeOfLastSaveGame()");
  if ( j_lua_gettop(luaVM) )
  {
    v3 = 0;
  }
  else
  {
    TimeOfLastSave = SaveDevice_GetTimeOfLastSave();
    j_lua_pushinteger(luaVM, TimeOfLastSave->tm_sec);
    j_lua_pushinteger(luaVM, TimeOfLastSave->tm_min);
    j_lua_pushinteger(luaVM, TimeOfLastSave->tm_hour);
    j_lua_pushinteger(luaVM, TimeOfLastSave->tm_mday);
    j_lua_pushinteger(luaVM, TimeOfLastSave->tm_mon + 1);
    j_lua_pushinteger(luaVM, TimeOfLastSave->tm_year + 1900);
    v3 = 6;
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
LUI_CoD_LuaCall_IsEntitySystemAllocated
==============
*/
__int64 LUI_CoD_LuaCall_IsEntitySystemAllocated(lua_State *const luaVM)
{
  unsigned int v2; 

  j_lua_pushboolean(luaVM, (_BYTE)CgEntitySystem::ms_allocatedType != NONE);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetPlayerCardDataFromXUID
==============
*/
__int64 LUI_CoD_LuaCall_GetPlayerCardDataFromXUID(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_CoD_LuaCall_GetPlayerCardDataFromXUID_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_COD_LuaCall_GetFirstActiveController
==============
*/
__int64 LUI_COD_LuaCall_GetFirstActiveController(lua_State *const luaVM)
{
  __int64 ControllerFromClient; 
  unsigned int v3; 

  ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Engine.GetFirstActiveController()\n");
  j_lua_pushinteger(luaVM, ControllerFromClient);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_COD_LuaCall_IsAnyLocalClientActive
==============
*/
__int64 LUI_COD_LuaCall_IsAnyLocalClientActive(lua_State *const luaVM)
{
  bool v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Engine.IsAnyLocalClientActive()\n");
  v2 = CL_AllLocalClientsInactive();
  j_lua_pushboolean(luaVM, !v2);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_COD_LuaCall_MakeLocalClientInactive
==============
*/
__int64 LUI_COD_LuaCall_MakeLocalClientInactive(lua_State *const luaVM)
{
  int v2; 
  unsigned __int64 PlatformUserId; 
  int MemberByPlatformId; 
  int v5; 
  unsigned int v6; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.MakeLocalClientInactive( <controller> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    if ( Party_AreWeHost(&g_partyData) )
    {
      if ( Party_IsRunning(&g_partyData) )
      {
        if ( Live_IsSignedIn(v2) )
        {
          PlatformUserId = Live_GetPlatformUserId(v2);
          MemberByPlatformId = Party_FindMemberByPlatformId(&g_partyData, PlatformUserId);
          v5 = MemberByPlatformId;
          if ( MemberByPlatformId != -1 )
          {
            if ( Party_IsHost(&g_partyData, MemberByPlatformId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_functions.cpp", 8583, ASSERT_TYPE_ASSERT, "(!Party_IsHost( party, member ))", (const char *)&queryFormat, "!Party_IsHost( party, member )") )
              __debugbreak();
            PartyHost_RemovePlayer(&g_partyData, v5, 0, (const char *)&queryFormat.fmt + 3);
          }
        }
      }
    }
    CL_Mgr_ResetClientsBackToSingleClient(v2);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v6);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetPrivatePartyHostName
==============
*/
__int64 LUI_CoD_LuaCall_GetPrivatePartyHostName(lua_State *const luaVM)
{
  const char *HostName; 
  unsigned int v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Engine.GetPrivatePartyHostName()");
  if ( j_lua_gettop(luaVM) || !g_partyData.inParty )
  {
    v3 = 0;
  }
  else
  {
    HostName = Party_GetHostName(&g_partyData);
    j_lua_pushstring(luaVM, HostName);
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
LUI_CoD_LuaCall_RemoveSplitScreenPlayer
==============
*/
__int64 LUI_CoD_LuaCall_RemoveSplitScreenPlayer(lua_State *const luaVM)
{
  int ControllerFromClient; 
  int v3; 
  netsrc_t LocalNetIDFromControllerIndex; 
  const XUID *Xuid; 
  int MemberByXUID; 
  int v7; 
  unsigned int v8; 
  XUID result; 

  ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_1);
  v3 = 0;
  if ( Party_IsRunning(&g_partyData) && Party_AreWeHost(&g_partyData) && g_partyData.splitscreenData.mainClient.localControllerIndex != ControllerFromClient )
  {
    LocalNetIDFromControllerIndex = NET_GetLocalNetIDFromControllerIndex(ControllerFromClient);
    NET_FlushLoopback(LocalNetIDFromControllerIndex);
    if ( g_partyData.splitscreenData.mainClient.localControllerIndex == ControllerFromClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_functions.cpp", 20564, ASSERT_TYPE_ASSERT, "(party->splitscreenData.mainClient.localControllerIndex != controllerIndex)", (const char *)&queryFormat, "party->splitscreenData.mainClient.localControllerIndex != controllerIndex") )
      __debugbreak();
    Xuid = Live_GetXuid(&result, ControllerFromClient);
    MemberByXUID = Party_FindMemberByXUID(&g_partyData, (const XUID)Xuid->m_id);
    v7 = MemberByXUID;
    if ( MemberByXUID == -1 )
    {
      Com_Printf(14, "Trying to remove local player from the party when they weren't present.");
      v3 = 0;
    }
    else
    {
      if ( Party_IsHost(&g_partyData, MemberByXUID) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_functions.cpp", 20575, ASSERT_TYPE_ASSERT, "(!Party_IsHost( party, member ))", (const char *)&queryFormat, "!Party_IsHost( party, member )") )
        __debugbreak();
      PartyHost_RemovePlayer(&g_partyData, v7, 0, (const char *)&queryFormat.fmt + 3);
      Party_ClearOtherSplitscreenClient(&g_partyData.splitscreenData);
      CL_Mgr_DeActivateClient(LOCAL_CLIENT_1, ControllerFromClient);
      CL_Mgr_ResetClientsBackToSingleClient(ControllerFromClient);
      Dvar_SetBool_Internal(DVARBOOL_splitscreen, 0);
      v3 = 1;
    }
  }
  j_lua_pushboolean(luaVM, v3);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v8 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v8);
  }
  return 1i64;
}

/*
==============
LUI_COD_LuaCall_GetLocalClientXUID
==============
*/
__int64 LUI_COD_LuaCall_GetLocalClientXUID(lua_State *const luaVM)
{
  unsigned int v2; 
  int v3; 
  const XUID *v4; 
  XUID *v5; 
  unsigned int v6; 
  XUID xuid; 
  XUID result; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.GetLocalClientXUID( <controllerIndex> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v3 = lui_tointeger32(luaVM, 1);
    XUID::XUID(&xuid);
    if ( Live_IsUserSignedIn(v3) )
    {
      v4 = Live_GetXuid(&result, v3);
      XUID::operator=(&xuid, v4);
    }
    v5 = (XUID *)j_lua_newuserdata(luaVM, 8ui64);
    XUID::operator=(v5, &xuid);
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
LUI_CoD_LuaCall_DoesPartyContainSplitscreenPlayer
==============
*/
__int64 LUI_CoD_LuaCall_DoesPartyContainSplitscreenPlayer(lua_State *const luaVM)
{
  int IsAnyMemberSplitscreened; 
  unsigned int v3; 

  IsAnyMemberSplitscreened = Party_IsAnyMemberSplitscreened(&g_partyData);
  j_lua_pushboolean(luaVM, IsAnyMemberSplitscreened != 0);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetLocalClientXUIDString
==============
*/
__int64 LUI_CoD_LuaCall_GetLocalClientXUIDString(lua_State *const luaVM)
{
  unsigned int v2; 
  int v3; 
  const XUID *v4; 
  unsigned int v5; 
  XUID xuid; 
  XUID result; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.GetLocalClientXUIDString( <controllerIndex> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v3 = lui_tointeger32(luaVM, 1);
    XUID::XUID(&xuid);
    if ( Live_IsUserSignedIn(v3) )
    {
      v4 = Live_GetXuid(&result, v3);
      XUID::operator=(&xuid, v4);
    }
    LUI_PushXUID(luaVM, xuid);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v5);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_IsPartyMemberPremium
==============
*/
__int64 LUI_CoD_LuaCall_IsPartyMemberPremium(lua_State *const luaVM)
{
  bool IsPaid; 
  int v3; 
  unsigned int v4; 

  IsPaid = 0;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.IsPartyMemberPremium( playerSlot )\n");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v3 = lui_tointeger32(luaVM, 1);
    IsPaid = Party_PartyMemberIsPaid(&g_partyData, v3);
  }
  j_lua_pushboolean(luaVM, IsPaid);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_COD_LuaCall_MakeLocalClientActive
==============
*/
__int64 LUI_COD_LuaCall_MakeLocalClientActive(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_functions.cpp", 8674, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Deprecated function") )
    __debugbreak();
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_DoesPartyContainNonPremiumPlayers
==============
*/
__int64 LUI_CoD_LuaCall_DoesPartyContainNonPremiumPlayers(lua_State *const luaVM)
{
  PartyData *ActiveParty; 
  bool v3; 
  unsigned int v4; 
  bitarray<224> freePlayersInParty; 

  ActiveParty = Party_GetActiveParty();
  v3 = Party_AllMembersPaid(ActiveParty, &freePlayersInParty);
  j_lua_pushboolean(luaVM, !v3);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_COD_LuaCall_HasActiveLocalClient
==============
*/
__int64 LUI_COD_LuaCall_HasActiveLocalClient(lua_State *const luaVM)
{
  int v2; 
  int v3; 
  unsigned int v4; 
  LocalClientNum_t outLocalClientNum; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: Engine.HasActiveLocalClient( <controller> )\n");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.HasActiveLocalClient( <controller> )\n");
  v2 = lui_tointeger32(luaVM, 1);
  v3 = CL_Mgr_IsControllerMappedToClient(v2, &outLocalClientNum) && CL_IsLocalClientActive(outLocalClientNum);
  j_lua_pushboolean(luaVM, v3);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_CanAllPartyMembersPlaySubscriptionRequiredContent
==============
*/
__int64 LUI_CoD_LuaCall_CanAllPartyMembersPlaySubscriptionRequiredContent(lua_State *const luaVM)
{
  PartyData *ActiveParty; 
  bool CanPlaySubscriptionRequiredContent; 
  unsigned int v4; 
  bitarray<224> freePlayersInParty; 

  ActiveParty = Party_GetActiveParty();
  CanPlaySubscriptionRequiredContent = Party_AllMembersCanPlaySubscriptionRequiredContent(ActiveParty, &freePlayersInParty);
  j_lua_pushboolean(luaVM, CanPlaySubscriptionRequiredContent);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetActiveStatsSource
==============
*/
__int64 LUI_CoD_LuaCall_GetActiveStatsSource(lua_State *const luaVM)
{
  int v2; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: Engine.GetActiveStatsSource( <controllerIndex> )\n");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.GetActiveStatsSource( <controllerIndex> )\n");
  v2 = lui_tointeger32(luaVM, 1);
  LiveStorage_GetActiveStatsSource(v2);
  _XMM1 = 0i64;
  __asm { vcvtsi2sd xmm1, xmm1, eax; n }
  j_lua_pushnumber(luaVM, *(long double *)&_XMM1);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v5);
  }
  return 1i64;
}

/*
==============
LUI_COD_LuaCall_IsActiveLocalClientPrimary
==============
*/
__int64 LUI_COD_LuaCall_IsActiveLocalClientPrimary(lua_State *const luaVM)
{
  int v2; 
  int v3; 
  unsigned int v4; 
  LocalClientNum_t outLocalClientNum; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.IsActiveLocalClientPrimary( <controller> )");
  v2 = 0;
  if ( j_lua_gettop(luaVM) == 1 )
  {
    if ( j_lua_isnumber(luaVM, 1) )
    {
      v3 = lui_tointeger32(luaVM, 1);
      if ( CL_Mgr_IsControllerMappedToClient(v3, &outLocalClientNum) && CL_IsLocalClientActive(outLocalClientNum) && outLocalClientNum == LOCAL_CLIENT_0 )
        v2 = 1;
    }
  }
  j_lua_pushboolean(luaVM, v2);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_LootCrateCameraShake
==============
*/
__int64 LUI_CoD_LuaCall_LootCrateCameraShake(lua_State *const luaVM)
{
  int v2; 
  bool IsControllerMappedToClient; 
  LocalClientNum_t v4; 
  unsigned int v5; 
  LocalClientNum_t outLocalClientNum; 
  vec3_t src; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: Engine.LootCrateCameraShake( <controllerIndex> )\n");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.LootCrateCameraShake( <controllerIndex> )\n");
  v2 = lui_tointeger32(luaVM, 1);
  IsControllerMappedToClient = CL_Mgr_IsControllerMappedToClient(v2, &outLocalClientNum);
  v4 = outLocalClientNum;
  src.v[0] = FLOAT_6144_0;
  src.v[2] = FLOAT_48_0;
  if ( !IsControllerMappedToClient )
    v4 = LOCAL_CLIENT_0;
  src.v[1] = FLOAT_2848_0;
  outLocalClientNum = v4;
  CG_StartShakeCameraWithControls(v4, 500, 2047, &src, 10000.0, 100, 100, 100, 500, 500, 500, 0.0, 200.0, 0);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
LUI_COD_LuaCall_GetMaxControllerCount
==============
*/
__int64 LUI_COD_LuaCall_GetMaxControllerCount(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Engine.GetMaxControllerCount()\n");
  j_lua_pushinteger(luaVM, 8i64);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_UploadHardwareSettings
==============
*/
__int64 LUI_CoD_LuaCall_UploadHardwareSettings(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_COD_LuaCall_IsControllerIndexActive
==============
*/
__int64 LUI_COD_LuaCall_IsControllerIndexActive(lua_State *const luaVM)
{
  unsigned int v2; 
  int v3; 
  bool IsControllerActive; 
  unsigned int v5; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.HasActiveLocalClient( <controller> )\n");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v3 = lua_tointeger32(luaVM, 1);
    IsControllerActive = CL_Mgr_IsControllerActive(v3);
    j_lua_pushboolean(luaVM, IsControllerActive);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v5);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_DoesPartyContainCrossplayPlayer
==============
*/
__int64 LUI_CoD_LuaCall_DoesPartyContainCrossplayPlayer(lua_State *const luaVM)
{
  int NumGameSlots; 
  int v3; 
  __int64 v4; 
  __int64 v5; 
  char *platform; 
  char v7; 
  unsigned int v8; 

  NumGameSlots = Party_GetNumGameSlots(&g_partyData);
  v3 = 0;
  v4 = NumGameSlots;
  if ( NumGameSlots > 0 )
  {
    v5 = 0i64;
    platform = g_partyData.partyMembers[0].info.platform;
    while ( 1 )
    {
      v7 = *platform;
      if ( v7 != (unsigned __int8)GetClientPlatform() )
      {
        if ( v7 )
          break;
      }
      ++v5;
      platform += 504;
      if ( v5 >= v4 )
        goto LABEL_8;
    }
    v3 = 1;
  }
LABEL_8:
  j_lua_pushboolean(luaVM, v3);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v8 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v8);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_InLobby
==============
*/
__int64 LUI_CoD_LuaCall_InLobby(lua_State *const luaVM)
{
  int inParty; 
  unsigned int v3; 

  if ( Live_IsInSystemlinkLobby() )
    inParty = g_partyData.inParty;
  else
    inParty = Lobby_IsInLobby();
  j_lua_pushboolean(luaVM, inParty);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_DoesLobbyContainCrossplayPlayer
==============
*/
__int64 LUI_CoD_LuaCall_DoesLobbyContainCrossplayPlayer(lua_State *const luaVM)
{
  const PartyData *PartyData; 
  int NumGameSlots; 
  int v4; 
  __int64 v5; 
  char *platform; 
  __int64 v7; 
  char v8; 
  unsigned int v9; 

  PartyData = Lobby_GetPartyData();
  NumGameSlots = Party_GetNumGameSlots(PartyData);
  v4 = 0;
  v5 = NumGameSlots;
  if ( NumGameSlots > 0 )
  {
    platform = PartyData->partyMembers[0].info.platform;
    v7 = 0i64;
    while ( 1 )
    {
      v8 = *platform;
      if ( v8 != (unsigned __int8)GetClientPlatform() )
      {
        if ( v8 )
          break;
      }
      ++v7;
      platform += 504;
      if ( v7 >= v5 )
        goto LABEL_8;
    }
    v4 = 1;
  }
LABEL_8:
  j_lua_pushboolean(luaVM, v4);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v9 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v9);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_AntiCheatBanCheck
==============
*/
__int64 LUI_CoD_LuaCall_AntiCheatBanCheck(lua_State *const luaVM)
{
  int v2; 
  int v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Engine.AntiCheatBanCheck( <controller>, <featureInt> )\n");
  v2 = lui_tointeger32(luaVM, 1);
  v3 = lui_tointeger32(luaVM, 2);
  LiveAntiCheat_FeatureBanCheck(v2, v3);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_IsProfanity
==============
*/
__int64 LUI_CoD_LuaCall_IsProfanity(lua_State *const luaVM)
{
  bool IsBadWord; 
  int v3; 
  const dvar_t *v4; 
  int v5; 
  const char *v6; 
  unsigned int v7; 

  IsBadWord = 0;
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isstring(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Engine.IsProfanity( <controller>, <text> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_isstring(luaVM, 2) )
  {
    v3 = lui_tointeger32(luaVM, 1);
    v4 = DVARBOOL_onlinegame;
    v5 = v3;
    if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    if ( v4->current.enabled )
    {
      v6 = j_lua_tolstring(luaVM, 2, NULL);
      IsBadWord = ProfanityFilter_IsBadWord(v5, v6);
    }
  }
  j_lua_pushboolean(luaVM, IsBadWord);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v7 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v7);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetOtherLocalClientsController
==============
*/
__int64 LUI_CoD_LuaCall_GetOtherLocalClientsController(lua_State *const luaVM)
{
  int v2; 
  int ControllerFromClient; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: Engine.GetOtherLocalClientsController( <controller> )\n");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.GetOtherLocalClientsController( <controller> )\n");
  v2 = lui_tointeger32(luaVM, 1);
  ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
  if ( CL_Mgr_GetClientFromController(v2) == LOCAL_CLIENT_0 )
    ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_1);
  if ( ControllerFromClient == -1 )
    ControllerFromClient = v2;
  j_lua_pushinteger(luaVM, ControllerFromClient);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_StripTextLocs
==============
*/
__int64 LUI_CoD_LuaCall_StripTextLocs(lua_State *const luaVM)
{
  unsigned int v1; 
  const char *v3; 
  __int64 v4; 
  unsigned int v5; 
  char output[512]; 

  v1 = 1;
  if ( !j_lua_isstring(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.StripTextLocs( <localizedText> )");
  if ( j_lua_isstring(luaVM, 1) )
  {
    v3 = j_lua_tolstring(luaVM, 1, NULL);
    v4 = -1i64;
    do
      ++v4;
    while ( v3[v4] );
    R_PrepareTextLine(v3, v4, output, 512, 0, NULL);
    j_lua_pushstring(luaVM, output);
  }
  else
  {
    v1 = 0;
  }
  if ( (int)v1 > j_lua_gettop(luaVM) )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v1, v5);
  }
  return v1;
}

/*
==============
LUI_CoD_LuaCall_OwnsBaseGame
==============
*/
__int64 LUI_CoD_LuaCall_OwnsBaseGame(lua_State *const luaVM)
{
  unsigned int v2; 

  j_lua_pushboolean(luaVM, 1);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetMilliseconds
==============
*/
__int64 LUI_CoD_LuaCall_GetMilliseconds(lua_State *const luaVM)
{
  int v2; 
  unsigned int v3; 

  v2 = Sys_Milliseconds();
  j_lua_pushinteger(luaVM, v2);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_CoD_NextGameLaunchOrFirstPartyStore
==============
*/
__int64 LUI_CoD_NextGameLaunchOrFirstPartyStore(lua_State *const luaVM)
{
  const dvar_t *v1; 
  unsigned int v3; 

  v1 = DVARBOOL_ui_display_ng_blade;
  if ( !DVARBOOL_ui_display_ng_blade && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ui_display_ng_blade") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.enabled )
  {
    if ( j_lua_gettop(luaVM) != 1 )
      j_luaL_error(luaVM, "USAGE: Engine.NextGameLaunchOrFirstPartyStore( <controller> )\n");
    if ( !j_lua_isnumber(luaVM, 1) )
      j_luaL_error(luaVM, "USAGE: Engine.NextGameLaunchOrFirstPartyStore( <controller> )\n");
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetMicroseconds
==============
*/
__int64 LUI_CoD_LuaCall_GetMicroseconds(lua_State *const luaVM)
{
  __int64 v2; 
  unsigned int v3; 

  v2 = Sys_Microseconds();
  j_lua_pushinteger(luaVM, v2);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_AntiCheatFeatureBanTimeRemainingDisplayString
==============
*/
__int64 LUI_CoD_LuaCall_AntiCheatFeatureBanTimeRemainingDisplayString(lua_State *const luaVM)
{
  int v2; 
  int v3; 
  const char *v4; 
  int BanEndTimeLocal; 
  signed int v6; 
  const char *v7; 
  int v8; 
  unsigned int v9; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, "USAGE: Engine.AntiCheatFeatureBanTimeRemainingDisplayString( <controller>, <feature> )\n");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.AntiCheatFeatureBanTimeRemainingDisplayString( <controller>, <feature> )\n");
  if ( !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Engine.AntiCheatFeatureBanTimeRemainingDisplayString( <controller>, <feature> )\n");
  v2 = lui_tointeger32(luaVM, 1);
  v3 = lui_tointeger32(luaVM, 2);
  v4 = (char *)&queryFormat.fmt + 3;
  BanEndTimeLocal = LiveAntiCheat_FeatureGetBanEndTimeLocal(v2, v3);
  if ( BanEndTimeLocal != -1 )
  {
    v6 = (BanEndTimeLocal - (unsigned int)_time64(NULL)) / 0x3C;
    if ( v6 / 60 <= 48 )
    {
      if ( v6 < 60 )
      {
        v7 = UI_SafeTranslateString("EXE/COD_TEMP_BAN_MINUTES");
        v8 = v6;
      }
      else
      {
        v7 = UI_SafeTranslateString("EXE/COD_TEMP_BAN_HOURS");
        v8 = v6 / 60;
      }
    }
    else
    {
      v7 = UI_SafeTranslateString("EXE/COD_TEMP_BAN_DAYS");
      v8 = v6 / 60 / 24;
    }
    v4 = UI_ReplaceConversionInt(v7, v8);
  }
  j_lua_pushstring(luaVM, v4);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v9 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v9);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetCurrentDayMonthYear
==============
*/
__int64 LUI_CoD_LuaCall_GetCurrentDayMonthYear(lua_State *const luaVM)
{
  struct tm *v2; 
  unsigned int v3; 
  unsigned int v4; 
  __time64_t Time; 

  Time = Sys_GetTimeAsSeconds();
  v2 = _localtime64(&Time);
  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Engine.GetCurrentDayMonthYear()");
  if ( j_lua_gettop(luaVM) )
  {
    v3 = 0;
  }
  else
  {
    j_lua_pushinteger(luaVM, v2->tm_mday);
    j_lua_pushinteger(luaVM, v2->tm_mon + 1);
    j_lua_pushinteger(luaVM, v2->tm_year + 1900);
    v3 = 3;
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
LUI_CoD_LuaCall_GetCurrentTimeDiffWithEpochTime
==============
*/
__int64 LUI_CoD_LuaCall_GetCurrentTimeDiffWithEpochTime(lua_State *const luaVM)
{
  unsigned int UTC; 
  const char *v3; 
  int v4; 
  unsigned int v5; 
  int v7; 

  if ( !j_lua_isstring(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.GetCurrentTimeDiffWithEpochTime( <seconds> )");
  if ( j_lua_isstring(luaVM, 1) )
  {
    if ( LiveStorage_IsTimeSynced() )
    {
      UTC = LiveStorage_GetUTC();
      v3 = j_lua_tolstring(luaVM, 1, NULL);
      v4 = atoi(v3) - UTC;
      if ( (int)abs32(v4) > 0x2000000 )
      {
        v7 = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_functions.cpp", 8978, ASSERT_TYPE_ASSERT, "(abs( result ) <= 2 << 24)", "%s\n\tResult of GetCurrentTimeDiffWithEpochTime (%u) is outside the representable range of a lua integer (which is a float).  Result will be truncated.", "abs( result ) <= 2 << 24", v7) )
          __debugbreak();
      }
      j_lua_pushinteger(luaVM, v4);
    }
    else
    {
      j_lua_pushnil(luaVM);
    }
  }
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v5);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_IsCurrentTimeWithinRange
==============
*/
__int64 LUI_CoD_LuaCall_IsCurrentTimeWithinRange(lua_State *const luaVM)
{
  int v2; 
  const char *v3; 
  const dvar_t *VarByName; 
  const char *v5; 
  const dvar_t *v6; 
  unsigned int UTC; 
  unsigned int IntSafe; 
  unsigned int v9; 
  unsigned int v10; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isstring(luaVM, 1) || !j_lua_isstring(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Engine.IsCurrentTimeWithinRange( timeFromDvar, timeToDvar )");
  v2 = 0;
  if ( j_lua_gettop(luaVM) == 2 )
  {
    if ( j_lua_isstring(luaVM, 1) )
    {
      if ( j_lua_isstring(luaVM, 2) )
      {
        if ( LiveStorage_IsTimeSynced() )
        {
          v3 = j_lua_tolstring(luaVM, 1, NULL);
          VarByName = Dvar_FindVarByName(v3);
          v5 = j_lua_tolstring(luaVM, 2, NULL);
          v6 = Dvar_FindVarByName(v5);
          if ( VarByName )
          {
            if ( v6 )
            {
              UTC = LiveStorage_GetUTC();
              IntSafe = Dvar_GetIntSafe(v3);
              v9 = Dvar_GetIntSafe(v5);
              if ( UTC >= IntSafe && UTC < v9 )
                v2 = 1;
            }
          }
        }
      }
    }
  }
  j_lua_pushboolean(luaVM, v2);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v10 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v10);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_AddToEpochTime
==============
*/
__int64 LUI_CoD_LuaCall_AddToEpochTime(lua_State *const luaVM)
{
  unsigned int v2; 
  const char *v3; 
  int v4; 
  const char *v5; 
  int v6; 
  const char *v7; 
  unsigned int v8; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isstring(luaVM, 1) || !j_lua_isnumber(luaVM, 2) && !j_lua_isstring(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Engine.AddToEpochTime( <time>, <seconds> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isstring(luaVM, 1) && (j_lua_isnumber(luaVM, 2) || j_lua_isstring(luaVM, 2)) )
  {
    v3 = j_lua_tolstring(luaVM, 1, NULL);
    v4 = atoi(v3);
    if ( j_lua_isstring(luaVM, 2) )
    {
      v5 = j_lua_tolstring(luaVM, 2, NULL);
      v6 = atoi(v5);
    }
    else
    {
      v6 = lui_tointeger32(luaVM, 2);
    }
    v7 = j_va("%i", (unsigned int)(v6 + v4));
    j_lua_pushstring(luaVM, v7);
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
LUI_CoD_LuaCall_GetCurrentEpochTime
==============
*/
__int64 LUI_CoD_LuaCall_GetCurrentEpochTime(lua_State *const luaVM)
{
  unsigned int TimeAsSeconds; 
  const char *v3; 
  unsigned int v4; 

  TimeAsSeconds = Sys_GetTimeAsSeconds();
  v3 = j_va("%i", TimeAsSeconds);
  j_lua_pushstring(luaVM, v3);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetCurrentYear
==============
*/
__int64 LUI_CoD_LuaCall_GetCurrentYear(lua_State *const luaVM)
{
  struct tm *v2; 
  unsigned int v3; 
  unsigned int v4; 
  __time64_t Time; 

  Time = Sys_GetTimeAsSeconds();
  v2 = _localtime64(&Time);
  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Engine.GetCurrentYear()");
  if ( j_lua_gettop(luaVM) )
  {
    v3 = 0;
  }
  else
  {
    j_lua_pushinteger(luaVM, v2->tm_year + 1900);
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
LUI_CoD_LuaCall_FormatDuration
==============
*/
__int64 LUI_CoD_LuaCall_FormatDuration(lua_State *const luaVM)
{
  unsigned int v1; 
  unsigned int v3; 
  signed int v4; 
  int v5; 
  int v6; 
  const char *v7; 
  unsigned int v8; 
  int v10; 
  int v11; 
  char dest[16]; 

  v1 = 1;
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.FormatDuration( <milliseconds> )");
  if ( j_lua_isnumber(luaVM, 1) )
  {
    v3 = lui_tointeger32(luaVM, 1);
    v4 = v3 / 0x3E8;
    v5 = (int)(v3 / 0x3E8) / 60;
    if ( (int)(v3 / 0x3E8) < 30 )
      v6 = (int)(v3 % 0x3E8) / 100;
    else
      v6 = (int)(v3 / 0x3E8) % 60;
    if ( v4 < 30 )
      v5 = (int)(v3 / 0x3E8) % 60;
    v7 = "%s%d:%02d%s";
    if ( v4 < 30 )
      v7 = "%s0:%02d.%d%s";
    v11 = v6;
    v10 = v5;
    Com_sprintf(dest, 0xAui64, v7, &stru_1440115A4, v10, v11, &unk_14448972C);
    j_lua_pushstring(luaVM, dest);
  }
  else
  {
    v1 = 0;
  }
  if ( (int)v1 > j_lua_gettop(luaVM) )
  {
    v8 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v1, v8);
  }
  return v1;
}

/*
==============
LUI_CoD_LuaCall_GetFormattedDate
==============
*/
__int64 LUI_CoD_LuaCall_GetFormattedDate(lua_State *const luaVM)
{
  unsigned int v1; 
  const char *v3; 
  struct tm *v4; 
  const char *v5; 
  unsigned int v6; 
  __time64_t Time[2]; 
  ConversionArguments arguments; 
  char dest[16]; 
  char v11[16]; 
  char v12[48]; 
  char outputString[1024]; 

  v1 = 1;
  if ( !j_lua_isstring(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.GetFormattedDate( <time> )");
  if ( j_lua_isstring(luaVM, 1) )
  {
    v3 = j_lua_tolstring(luaVM, 1, NULL);
    Time[0] = (unsigned int)atoi(v3);
    v4 = _localtime64(Time);
    v5 = UI_SafeTranslateString("LUA_MENU/DATE");
    if ( v5 )
    {
      memset_0(&arguments, 0, sizeof(arguments));
      arguments.argCount = 3;
      Com_sprintf(dest, 0x10ui64, "%d", (unsigned int)(v4->tm_mon + 1));
      arguments.args[0] = dest;
      Com_sprintf(v11, 0x10ui64, "%d", (unsigned int)v4->tm_mday);
      arguments.args[1] = v11;
      Com_sprintf(v12, 0x10ui64, "%d", (unsigned int)(v4->tm_year + 1900));
      arguments.args[2] = v12;
      UI_ReplaceConversions(v5, &arguments, outputString, 0x400ui64);
    }
    else
    {
      outputString[0] = 0;
    }
    j_lua_pushstring(luaVM, outputString);
  }
  else
  {
    v1 = 0;
  }
  if ( (int)v1 > j_lua_gettop(luaVM) )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v1, v6);
  }
  return v1;
}

/*
==============
LUI_CoD_LuaCall_GetFormattedTime
==============
*/
__int64 LUI_CoD_LuaCall_GetFormattedTime(lua_State *const luaVM)
{
  unsigned int v1; 
  const char *v3; 
  struct tm *v4; 
  const char *v5; 
  unsigned int v6; 
  __time64_t Time[2]; 
  ConversionArguments arguments; 
  char dest[16]; 
  char v11[64]; 
  char outputString[1024]; 

  v1 = 1;
  if ( !j_lua_isstring(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.GetFormattedTime( <time> )");
  if ( j_lua_isstring(luaVM, 1) )
  {
    v3 = j_lua_tolstring(luaVM, 1, NULL);
    Time[0] = (unsigned int)atoi(v3);
    v4 = _localtime64(Time);
    v5 = UI_SafeTranslateString("LUA_MENU/FORMATTED_TIME");
    if ( v5 )
    {
      memset_0(&arguments, 0, sizeof(arguments));
      arguments.argCount = 2;
      Com_sprintf(dest, 0x10ui64, "%d", (unsigned int)v4->tm_hour);
      arguments.args[0] = dest;
      Com_sprintf(v11, 0x10ui64, "%02d", (unsigned int)v4->tm_min);
      arguments.args[1] = v11;
      UI_ReplaceConversions(v5, &arguments, outputString, 0x400ui64);
    }
    else
    {
      outputString[0] = 0;
    }
    j_lua_pushstring(luaVM, outputString);
  }
  else
  {
    v1 = 0;
  }
  if ( (int)v1 > j_lua_gettop(luaVM) )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v1, v6);
  }
  return v1;
}

/*
==============
LUI_CoD_LuaCall_GetFormattedDateTime
==============
*/
__int64 LUI_CoD_LuaCall_GetFormattedDateTime(lua_State *const luaVM)
{
  unsigned int v1; 
  struct tm *v3; 
  const char *v4; 
  unsigned int v5; 
  __time64_t Time[2]; 
  ConversionArguments arguments; 
  char dest[16]; 
  char v10[16]; 
  char v11[16]; 
  char v12[16]; 
  char v13[16]; 
  char outputString[1024]; 

  v1 = 1;
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.GetFormattedDateTime( <time> )");
  if ( j_lua_isnumber(luaVM, 1) )
  {
    Time[0] = (unsigned int)lui_tointeger32(luaVM, 1);
    v3 = _localtime64(Time);
    v4 = UI_SafeTranslateString("LUA_MENU/DATE_TIME");
    if ( v4 )
    {
      memset_0(&arguments, 0, sizeof(arguments));
      arguments.argCount = 5;
      Com_sprintf(dest, 0x10ui64, "%d", (unsigned int)(v3->tm_mon + 1));
      arguments.args[0] = dest;
      Com_sprintf(v10, 0x10ui64, "%d", (unsigned int)v3->tm_mday);
      arguments.args[1] = v10;
      Com_sprintf(v11, 0x10ui64, "%d", (unsigned int)(v3->tm_year + 1900));
      arguments.args[2] = v11;
      Com_sprintf(v12, 0x10ui64, "%d", (unsigned int)v3->tm_hour);
      arguments.args[3] = v12;
      Com_sprintf(v13, 0x10ui64, "%02d", (unsigned int)v3->tm_min);
      arguments.args[4] = v13;
      UI_ReplaceConversions(v4, &arguments, outputString, 0x400ui64);
    }
    else
    {
      outputString[0] = 0;
    }
    j_lua_pushstring(luaVM, outputString);
  }
  else
  {
    v1 = 0;
  }
  if ( (int)v1 > j_lua_gettop(luaVM) )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v1, v5);
  }
  return v1;
}

/*
==============
LUI_CoD_LuaCall_GetFormattedDateTimeForEvent
==============
*/
__int64 LUI_CoD_LuaCall_GetFormattedDateTimeForEvent(lua_State *const luaVM)
{
  unsigned int v1; 
  struct tm *v3; 
  const char *v4; 
  unsigned int v5; 
  __time64_t Time[2]; 
  ConversionArguments arguments; 
  char dest[16]; 
  char v10[16]; 
  char v11[16]; 
  char v12[16]; 
  char v13[16]; 
  char outputString[1024]; 

  v1 = 1;
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.GetFormattedDateTimeForEvent( <time> )");
  if ( j_lua_isnumber(luaVM, 1) )
  {
    Time[0] = (unsigned int)lui_tointeger32(luaVM, 1);
    v3 = _localtime64(Time);
    v4 = UI_SafeTranslateString("LUA_MENU/DATE_TIME_EVENT");
    if ( v4 )
    {
      memset_0(&arguments, 0, sizeof(arguments));
      arguments.argCount = 5;
      Com_sprintf(dest, 0x10ui64, "%d", (unsigned int)(v3->tm_mon + 1));
      arguments.args[0] = dest;
      Com_sprintf(v10, 0x10ui64, "%d", (unsigned int)v3->tm_mday);
      arguments.args[1] = v10;
      Com_sprintf(v11, 0x10ui64, "%d", (unsigned int)(v3->tm_year + 1900));
      arguments.args[2] = v11;
      Com_sprintf(v12, 0x10ui64, "%d", (unsigned int)v3->tm_hour);
      arguments.args[3] = v12;
      Com_sprintf(v13, 0x10ui64, "%02d", (unsigned int)v3->tm_min);
      arguments.args[4] = v13;
      UI_ReplaceConversions(v4, &arguments, outputString, 0x400ui64);
    }
    else
    {
      outputString[0] = 0;
    }
    j_lua_pushstring(luaVM, outputString);
  }
  else
  {
    v1 = 0;
  }
  if ( (int)v1 > j_lua_gettop(luaVM) )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v1, v5);
  }
  return v1;
}

/*
==============
LUI_CoD_LuaCall_GetCurrentFormattedDateTime
==============
*/
__int64 LUI_CoD_LuaCall_GetCurrentFormattedDateTime(lua_State *const luaVM)
{
  struct tm *v2; 
  const char *v3; 
  unsigned int v4; 
  unsigned int v5; 
  __time64_t Time[2]; 
  ConversionArguments arguments; 
  char dest[16]; 
  char v10[16]; 
  char v11[16]; 
  char v12[16]; 
  char v13[16]; 
  char outputString[1024]; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Engine.GetCurrentFormattedDateTime( )");
  if ( j_lua_gettop(luaVM) )
  {
    v4 = 0;
  }
  else
  {
    Time[0] = Sys_GetTimeAsSeconds();
    v2 = _localtime64(Time);
    v3 = UI_SafeTranslateString("LUA_MENU/DATE_TIME");
    if ( v3 )
    {
      memset_0(&arguments, 0, sizeof(arguments));
      arguments.argCount = 5;
      Com_sprintf(dest, 0x10ui64, "%d", (unsigned int)(v2->tm_mon + 1));
      arguments.args[0] = dest;
      Com_sprintf(v10, 0x10ui64, "%d", (unsigned int)v2->tm_mday);
      arguments.args[1] = v10;
      Com_sprintf(v11, 0x10ui64, "%d", (unsigned int)(v2->tm_year + 1900));
      arguments.args[2] = v11;
      Com_sprintf(v12, 0x10ui64, "%d", (unsigned int)v2->tm_hour);
      arguments.args[3] = v12;
      Com_sprintf(v13, 0x10ui64, "%02d", (unsigned int)v2->tm_min);
      arguments.args[4] = v13;
      UI_ReplaceConversions(v3, &arguments, outputString, 0x400ui64);
    }
    else
    {
      outputString[0] = 0;
    }
    j_lua_pushstring(luaVM, outputString);
    v4 = 1;
  }
  if ( (int)v4 > j_lua_gettop(luaVM) )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v4, v5);
  }
  return v4;
}

/*
==============
LUI_CoD_LuaCall_FormatTimeHoursMinutesSeconds
==============
*/
__int64 LUI_CoD_LuaCall_FormatTimeHoursMinutesSeconds(lua_State *const luaVM)
{
  unsigned int v1; 
  int v3; 
  const char *v4; 
  __int64 v5; 
  int v6; 
  unsigned int v7; 
  __time64_t Time[2]; 
  ConversionArguments arguments; 
  char dest[16]; 
  char v12[16]; 
  char v13[48]; 
  char outputString[1024]; 

  v1 = 1;
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.FormatTimeHoursMinutesSeconds( <time> )");
  if ( j_lua_isnumber(luaVM, 1) )
  {
    v3 = lui_tointeger32(luaVM, 1);
    Time[0] = (unsigned int)v3;
    _localtime64(Time);
    v4 = UI_SafeTranslateString("LUA_MENU/HOURS_MINUTES_SECONDS");
    if ( v4 )
    {
      memset_0(&arguments, 0, sizeof(arguments));
      arguments.argCount = 3;
      v5 = (unsigned int)(v3 / 3600);
      v6 = v3 % 3600;
      Com_sprintf(dest, 0x10ui64, "%d", v5);
      arguments.args[0] = dest;
      Com_sprintf(v12, 0x10ui64, "%02d", (unsigned int)(v6 / 60));
      arguments.args[1] = v12;
      Com_sprintf(v13, 0x10ui64, "%02d", (unsigned int)(v6 % 60));
      arguments.args[2] = v13;
      UI_ReplaceConversions(v4, &arguments, outputString, 0x400ui64);
    }
    else
    {
      outputString[0] = 0;
    }
    j_lua_pushstring(luaVM, outputString);
  }
  else
  {
    v1 = 0;
  }
  if ( (int)v1 > j_lua_gettop(luaVM) )
  {
    v7 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v1, v7);
  }
  return v1;
}

/*
==============
LUI_CoD_LuaCall_FormatTimeSmall
==============
*/
__int64 LUI_CoD_LuaCall_FormatTimeSmall(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_CoD_LuaCall_FormatTimeSmall_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_GetRawMonthDayYear
==============
*/
__int64 LUI_CoD_LuaCall_GetRawMonthDayYear(lua_State *const luaVM)
{
  struct tm *v2; 
  unsigned int v3; 
  unsigned int v4; 
  __time64_t Time; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Engine.GetRawMonthDayYear( )");
  if ( j_lua_gettop(luaVM) )
  {
    v3 = 0;
  }
  else
  {
    Time = Sys_GetTimeAsSeconds();
    v2 = _localtime64(&Time);
    j_lua_createtable(luaVM, 0, 0);
    LUI_SetTableInt("month", v2->tm_mon + 1, luaVM);
    LUI_SetTableInt("day", v2->tm_mday, luaVM);
    LUI_SetTableInt("year", v2->tm_year + 1900, luaVM);
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
LUI_CoD_LuaCall_GetMonthName
==============
*/
__int64 LUI_CoD_LuaCall_GetMonthName(lua_State *const luaVM)
{
  unsigned int v1; 
  struct tm *v3; 
  __int64 tm_mon; 
  const char *v5; 
  unsigned int v6; 
  __time64_t Time[2]; 
  ConversionArguments arguments; 
  char *reference[12]; 
  char outputString[1024]; 

  v1 = 1;
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.GetMonthName( <time> )");
  if ( j_lua_isnumber(luaVM, 1) )
  {
    Time[0] = (unsigned int)lui_tointeger32(luaVM, 1);
    v3 = _localtime64(Time);
    reference[0] = "LUA_MENU/JANUARY";
    reference[1] = "LUA_MENU/FEBRUARY";
    tm_mon = v3->tm_mon;
    reference[2] = "LUA_MENU/MARCH";
    reference[3] = "LUA_MENU/APRIL";
    reference[4] = "LUA_MENU/MAY";
    reference[5] = "LUA_MENU/JUNE";
    reference[6] = "LUA_MENU/JULY";
    reference[7] = "LUA_MENU/AUGUST";
    reference[8] = "LUA_MENU/SEPTEMBER";
    reference[9] = "LUA_MENU/OCTOBER";
    reference[10] = "LUA_MENU/NOVEMBER";
    reference[11] = "LUA_MENU/DECEMBER";
    if ( (unsigned int)tm_mon >= 0xC && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_functions.cpp", 9341, ASSERT_TYPE_ASSERT, "(unsigned)( month ) < (unsigned)( ( sizeof( *array_counter( stringName ) ) + 0 ) )", "month doesn't index ARRAY_COUNT( stringName )\n\t%i not in [0, %i)", tm_mon, 12) )
      __debugbreak();
    v5 = UI_SafeTranslateString(reference[tm_mon]);
    if ( v5 )
    {
      memset_0(&arguments, 0, sizeof(arguments));
      UI_ReplaceConversions(v5, &arguments, outputString, 0x400ui64);
    }
    else
    {
      outputString[0] = 0;
    }
    j_lua_pushstring(luaVM, outputString);
  }
  else
  {
    v1 = 0;
  }
  if ( (int)v1 > j_lua_gettop(luaVM) )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v1, v6);
  }
  return v1;
}

/*
==============
LUI_CoD_LuaCall_GetMonthNameAbbreviated
==============
*/
__int64 LUI_CoD_LuaCall_GetMonthNameAbbreviated(lua_State *const luaVM)
{
  unsigned int v1; 
  struct tm *v3; 
  __int64 tm_mon; 
  const char *v5; 
  unsigned int v6; 
  __time64_t Time[2]; 
  ConversionArguments arguments; 
  char *reference[12]; 
  char outputString[1024]; 

  v1 = 1;
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.GetMonthNameAbbreviated( <time> )");
  if ( j_lua_isnumber(luaVM, 1) )
  {
    Time[0] = (unsigned int)lui_tointeger32(luaVM, 1);
    v3 = _localtime64(Time);
    reference[0] = "LUA_MENU/JANUARY_SHORT";
    reference[1] = "LUA_MENU/FEBRUARY_SHORT";
    tm_mon = v3->tm_mon;
    reference[2] = "LUA_MENU/MARCH_SHORT";
    reference[3] = "LUA_MENU/APRIL_SHORT";
    reference[4] = "LUA_MENU/MAY_SHORT";
    reference[5] = "LUA_MENU/JUNE_SHORT";
    reference[6] = "LUA_MENU/JULY_SHORT";
    reference[7] = "LUA_MENU/AUGUST_SHORT";
    reference[8] = "LUA_MENU/SEPTEMBER_SHORT";
    reference[9] = "LUA_MENU/OCTOBER_SHORT";
    reference[10] = "LUA_MENU/NOVEMBER_SHORT";
    reference[11] = "LUA_MENU/DECEMBER_SHORT";
    if ( (unsigned int)tm_mon >= 0xC && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_functions.cpp", 9364, ASSERT_TYPE_ASSERT, "(unsigned)( month ) < (unsigned)( ( sizeof( *array_counter( stringName ) ) + 0 ) )", "month doesn't index ARRAY_COUNT( stringName )\n\t%i not in [0, %i)", tm_mon, 12) )
      __debugbreak();
    v5 = UI_SafeTranslateString(reference[tm_mon]);
    if ( v5 )
    {
      memset_0(&arguments, 0, sizeof(arguments));
      UI_ReplaceConversions(v5, &arguments, outputString, 0x400ui64);
    }
    else
    {
      outputString[0] = 0;
    }
    j_lua_pushstring(luaVM, outputString);
  }
  else
  {
    v1 = 0;
  }
  if ( (int)v1 > j_lua_gettop(luaVM) )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v1, v6);
  }
  return v1;
}

/*
==============
LUI_CoD_LuaCall_GetDayOfWeekName
==============
*/
__int64 LUI_CoD_LuaCall_GetDayOfWeekName(lua_State *const luaVM)
{
  unsigned int v1; 
  struct tm *v3; 
  __int64 tm_wday; 
  const char *v5; 
  unsigned int v6; 
  __time64_t Time[2]; 
  ConversionArguments arguments; 
  char *reference[8]; 
  char outputString[1024]; 

  v1 = 1;
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.GetDayOfWeekName( <time> )");
  if ( j_lua_isnumber(luaVM, 1) )
  {
    Time[0] = (unsigned int)lui_tointeger32(luaVM, 1);
    v3 = _localtime64(Time);
    reference[0] = "LUA_MENU/SUNDAY";
    reference[1] = "LUA_MENU/MONDAY";
    tm_wday = v3->tm_wday;
    reference[2] = "LUA_MENU/TUESDAY";
    reference[3] = "LUA_MENU/WEDNESDAY";
    reference[4] = "LUA_MENU/THURSDAY";
    reference[5] = "LUA_MENU/FRIDAY";
    reference[6] = "LUA_MENU/SATURDAY";
    if ( (unsigned int)tm_wday >= 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_functions.cpp", 9382, ASSERT_TYPE_ASSERT, "(unsigned)( dayOfWeek ) < (unsigned)( ( sizeof( *array_counter( stringName ) ) + 0 ) )", "dayOfWeek doesn't index ARRAY_COUNT( stringName )\n\t%i not in [0, %i)", tm_wday, 7) )
      __debugbreak();
    v5 = UI_SafeTranslateString(reference[tm_wday]);
    if ( v5 )
    {
      memset_0(&arguments, 0, sizeof(arguments));
      UI_ReplaceConversions(v5, &arguments, outputString, 0x400ui64);
    }
    else
    {
      outputString[0] = 0;
    }
    j_lua_pushstring(luaVM, outputString);
  }
  else
  {
    v1 = 0;
  }
  if ( (int)v1 > j_lua_gettop(luaVM) )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v1, v6);
  }
  return v1;
}

/*
==============
LUI_CoD_LuaCall_GetDayOfWeekNameAbbreviated
==============
*/
__int64 LUI_CoD_LuaCall_GetDayOfWeekNameAbbreviated(lua_State *const luaVM)
{
  unsigned int v1; 
  struct tm *v3; 
  __int64 tm_wday; 
  const char *v5; 
  unsigned int v6; 
  __time64_t Time[2]; 
  ConversionArguments arguments; 
  char *reference[8]; 
  char outputString[1024]; 

  v1 = 1;
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.GetDayOfWeekNameAbbreviated( <time> )");
  if ( j_lua_isnumber(luaVM, 1) )
  {
    Time[0] = (unsigned int)lui_tointeger32(luaVM, 1);
    v3 = _localtime64(Time);
    reference[0] = "LUA_MENU/SUNDAY_SHORT";
    reference[1] = "LUA_MENU/MONDAY_SHORT";
    tm_wday = v3->tm_wday;
    reference[2] = "LUA_MENU/TUESDAY_SHORT";
    reference[3] = "LUA_MENU/WEDNESDAY_SHORT";
    reference[4] = "LUA_MENU/THURSDAY_SHORT";
    reference[5] = "LUA_MENU/FRIDAY_SHORT";
    reference[6] = "LUA_MENU/SATURDAY_SHORT";
    if ( (unsigned int)tm_wday >= 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_functions.cpp", 9400, ASSERT_TYPE_ASSERT, "(unsigned)( dayOfWeek ) < (unsigned)( ( sizeof( *array_counter( stringName ) ) + 0 ) )", "dayOfWeek doesn't index ARRAY_COUNT( stringName )\n\t%i not in [0, %i)", tm_wday, 7) )
      __debugbreak();
    v5 = UI_SafeTranslateString(reference[tm_wday]);
    if ( v5 )
    {
      memset_0(&arguments, 0, sizeof(arguments));
      UI_ReplaceConversions(v5, &arguments, outputString, 0x400ui64);
    }
    else
    {
      outputString[0] = 0;
    }
    j_lua_pushstring(luaVM, outputString);
  }
  else
  {
    v1 = 0;
  }
  if ( (int)v1 > j_lua_gettop(luaVM) )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v1, v6);
  }
  return v1;
}

/*
==============
LUI_CoD_LuaCall_GetAccessoryIndex
==============
*/
__int64 LUI_CoD_LuaCall_GetAccessoryIndex(lua_State *const luaVM)
{
  unsigned int v2; 
  const char *v3; 
  signed int IndexForName; 
  unsigned int v5; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isstring(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Engine.GetAccessoryIndex( <controller>, <accessoryAssetName> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_isstring(luaVM, 2) )
  {
    v3 = j_lua_tolstring(luaVM, 2, NULL);
    IndexForName = BG_Accessory_GetIndexForName(v3);
    if ( IndexForName == 127 )
      j_lua_pushnil(luaVM);
    else
      j_lua_pushinteger(luaVM, IndexForName);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v5);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_GetAccessoryWidgetName
==============
*/
__int64 LUI_CoD_LuaCall_GetAccessoryWidgetName(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 
  const AccessoryDef *Def; 
  unsigned int v5; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Engine.GetAccessoryWidgetName( <controller>, <accessoryIndex> )");
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    goto LABEL_12;
  v3 = lui_tointeger32(luaVM, 2);
  if ( v3 > 0x7F )
    j_luaL_error(luaVM, "USAGE: Engine.GetAccessoryWidgetName( <controller>, <accessoryIndex> ) -- provided index %i is out of bounds", v3);
  Def = BG_Accessory_GetDef(v3);
  if ( Def )
    j_lua_pushstring(luaVM, Def->widgetVM);
  else
LABEL_12:
    v2 = 0;
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v5);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_GetAccessoryRTTWidth
==============
*/
__int64 LUI_CoD_LuaCall_GetAccessoryRTTWidth(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 
  const AccessoryDef *Def; 
  unsigned int v5; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Engine.GetAccessoryRTTWidth( <controller>, <accessoryIndex> )");
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    goto LABEL_12;
  v3 = lui_tointeger32(luaVM, 2);
  if ( v3 > 0x7F )
    j_luaL_error(luaVM, "USAGE: Engine.GetAccessoryRTTWidth( <controller>, <accessoryIndex> ) -- provided index %i is out of bounds", v3);
  Def = BG_Accessory_GetDef(v3);
  if ( Def )
    j_lua_pushinteger(luaVM, Def->widgetVMRTTWidth);
  else
LABEL_12:
    v2 = 0;
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v5);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_GetAccessoryRTTHeight
==============
*/
__int64 LUI_CoD_LuaCall_GetAccessoryRTTHeight(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 
  const AccessoryDef *Def; 
  unsigned int v5; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Engine.GetAccessoryRTTHeight( <controller>, <accessoryIndex> )");
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    goto LABEL_12;
  v3 = lui_tointeger32(luaVM, 2);
  if ( v3 > 0x7F )
    j_luaL_error(luaVM, "USAGE: Engine.GetAccessoryRTTHeight( <controller>, <accessoryIndex> ) -- provided index %i is out of bounds", v3);
  Def = BG_Accessory_GetDef(v3);
  if ( Def )
    j_lua_pushinteger(luaVM, Def->widgetVMRTTHeight);
  else
LABEL_12:
    v2 = 0;
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v5);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_GetCurrentRegion
==============
*/
__int64 LUI_CoD_LuaCall_GetCurrentRegion(lua_State *const luaVM)
{
  unsigned int v2; 

  j_lua_pushinteger(luaVM, g_currentRegion);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetAccessoryRTTMipCount
==============
*/
__int64 LUI_CoD_LuaCall_GetAccessoryRTTMipCount(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 
  const AccessoryDef *Def; 
  unsigned int v5; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Engine.GetAccessoryRTTMipCount( <controller>, <accessoryIndex> )");
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    goto LABEL_12;
  v3 = lui_tointeger32(luaVM, 2);
  if ( v3 > 0x7F )
    j_luaL_error(luaVM, "USAGE: Engine.GetAccessoryRTTMipCount( <controller>, <accessoryIndex> ) -- provided index %i is out of bounds", v3);
  Def = BG_Accessory_GetDef(v3);
  if ( Def )
    j_lua_pushinteger(luaVM, Def->widgetVMRTTMipCount);
  else
LABEL_12:
    v2 = 0;
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v5);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_StreamingCheckInstall
==============
*/
__int64 LUI_CoD_LuaCall_StreamingCheckInstall(lua_State *const luaVM)
{
  unsigned int v2; 
  float progress; 
  __int64 secondsRemaining; 

  Com_FastFile_CheckInstallInProgress(&progress, &secondsRemaining);
  j_lua_pushnumber(luaVM, progress);
  j_lua_pushinteger(luaVM, (int)secondsRemaining);
  if ( j_lua_gettop(luaVM) < 2 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 2i64, v2);
  }
  return 2i64;
}

/*
==============
LUI_CoD_LuaCall_StreamingSuspendInstall
==============
*/
__int64 LUI_CoD_LuaCall_StreamingSuspendInstall(lua_State *const luaVM)
{
  unsigned int v2; 

  Com_FastFile_SuspendInstall();
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_IsFastFileGameWorkComplete
==============
*/
__int64 LUI_CoD_LuaCall_IsFastFileGameWorkComplete(lua_State *const luaVM)
{
  bool IsGameWorkComplete; 
  unsigned int v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Engine.IsFastFileGameWorkComplete()");
  if ( j_lua_gettop(luaVM) )
  {
    v3 = 0;
  }
  else
  {
    IsGameWorkComplete = Com_FastFile_IsGameWorkComplete();
    j_lua_pushboolean(luaVM, IsGameWorkComplete);
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
LUI_CoD_LuaCall_AreGlobalSpecificAndGroupZonesRequested
==============
*/
__int64 LUI_CoD_LuaCall_AreGlobalSpecificAndGroupZonesRequested(lua_State *const luaVM)
{
  bool v2; 
  unsigned int v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Engine.AreGlobalSpecificAndGroupZonesRequested()");
  if ( j_lua_gettop(luaVM) )
  {
    v3 = 0;
  }
  else
  {
    v2 = Com_FastFile_AreGlobalSpecificAndGroupZonesRequested();
    j_lua_pushboolean(luaVM, v2);
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
LUI_CoD_LuaCall_GetCurrentLanguage
==============
*/
__int64 LUI_CoD_LuaCall_GetCurrentLanguage(lua_State *const luaVM)
{
  int CurrentLanguage; 
  unsigned int v3; 

  CurrentLanguage = SEH_GetCurrentLanguage();
  j_lua_pushinteger(luaVM, CurrentLanguage);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_SetPreferredLanguage
==============
*/
__int64 LUI_CoD_LuaCall_SetPreferredLanguage(lua_State *const luaVM)
{
  int v2; 
  int v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 2 && lua_isnumber( luaVM, 1 ) && lua_isnumber( luaVM, 2 )");
  v2 = lui_tointeger32(luaVM, 1);
  v3 = lui_tointeger32(luaVM, 2);
  if ( v3 < 0 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "language >= 0");
  if ( v3 >= 21 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "language < MAX_LANGUAGES");
  GamerProfile_SetLanguage(v2, v3);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetPreferredLanguage
==============
*/
__int64 LUI_CoD_LuaCall_GetPreferredLanguage(lua_State *const luaVM)
{
  int v2; 
  int Language; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 1 && lua_isnumber( luaVM, 1 )");
  v2 = lui_tointeger32(luaVM, 1);
  Language = GamerProfile_GetLanguage(v2);
  j_lua_pushinteger(luaVM, Language);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_ClearMatchData
==============
*/
__int64 LUI_CoD_LuaCall_ClearMatchData(lua_State *const luaVM)
{
  unsigned int v2; 

  memset_0(&cls.matchData, 0, sizeof(cls.matchData));
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_IgnoreXB3UserProfileChange
==============
*/
__int64 LUI_CoD_LuaCall_IgnoreXB3UserProfileChange(lua_State *const luaVM)
{
  int v2; 
  unsigned int v3; 

  v2 = lui_tointeger32(luaVM, 1);
  Live_OnIgnoreUserProfileChange(v2);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_NVidiaGPUAvailable
==============
*/
__int64 LUI_CoD_LuaCall_NVidiaGPUAvailable(lua_State *const luaVM)
{
  unsigned int v2; 

  j_lua_pushboolean(luaVM, 0);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_TXAAAvailable
==============
*/
__int64 LUI_CoD_LuaCall_TXAAAvailable(lua_State *const luaVM)
{
  unsigned int v2; 

  j_lua_pushboolean(luaVM, 0);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_SMAAT2XAvailable
==============
*/
__int64 LUI_CoD_LuaCall_SMAAT2XAvailable(lua_State *const luaVM)
{
  unsigned int v2; 

  j_lua_pushboolean(luaVM, 1);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_Cod_LuaCall_HBAOAvailable
==============
*/
__int64 LUI_Cod_LuaCall_HBAOAvailable(lua_State *const luaVM)
{
  unsigned int v2; 

  j_lua_pushboolean(luaVM, 0);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_Cod_LuaCall_IsDisplayOutputHDR
==============
*/
__int64 LUI_Cod_LuaCall_IsDisplayOutputHDR(lua_State *const luaVM)
{
  GfxColorimetry DisplayColorimetry; 
  bool IsColorimetryHDR; 
  unsigned int v4; 

  DisplayColorimetry = R_GetDisplayColorimetry();
  IsColorimetryHDR = R_IsColorimetryHDR(DisplayColorimetry);
  j_lua_pushboolean(luaVM, IsColorimetryHDR);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_Cod_LuaCall_IsDisplayHDRCapable
==============
*/
__int64 LUI_Cod_LuaCall_IsDisplayHDRCapable(lua_State *const luaVM)
{
  bool IsDisplayHDRCapable; 
  unsigned int v3; 

  IsDisplayHDRCapable = R_IsDisplayHDRCapable();
  j_lua_pushboolean(luaVM, IsDisplayHDRCapable);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_Cod_LuaCall_GetSDRBarelyVisibleIntensity
==============
*/
__int64 LUI_Cod_LuaCall_GetSDRBarelyVisibleIntensity(lua_State *const luaVM)
{
  unsigned int v6; 

  _XMM6 = LODWORD(FLOAT_0_039999999);
  _XMM0 = (unsigned int)R_GetDisplayColorimetry();
  __asm
  {
    vpcmpeqd xmm3, xmm0, xmm1
    vblendvps xmm0, xmm6, xmm2, xmm3
  }
  j_lua_pushnumber(luaVM, *(float *)&_XMM0);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v6);
  }
  return 1i64;
}

/*
==============
LUI_Cod_LuaCall_HDRLuminanceFromSDK
==============
*/
__int64 LUI_Cod_LuaCall_HDRLuminanceFromSDK(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_Cod_LuaCall_GetVoiceLevel
==============
*/
__int64 LUI_Cod_LuaCall_GetVoiceLevel(lua_State *const luaVM)
{
  double VoiceLevel; 
  unsigned int v3; 

  VoiceLevel = Voice_GetVoiceLevel();
  j_lua_pushnumber(luaVM, *(float *)&VoiceLevel);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_PartyMemberHasMapPack
==============
*/
__int64 LUI_CoD_LuaCall_PartyMemberHasMapPack(lua_State *const luaVM)
{
  bool HasMapPack; 
  int v3; 
  char v4; 
  unsigned int v5; 

  HasMapPack = 0;
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Engine.PartyMemberHasMapPack( <partyMemberIndex>, <mapPackIndex> );\n");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    v3 = lui_tointeger32(luaVM, 1);
    v4 = lui_tointeger32(luaVM, 2);
    HasMapPack = Party_PartyMemberHasMapPack(&g_partyData, v3, 2 << v4);
  }
  j_lua_pushboolean(luaVM, HasMapPack);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v5);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_PartyMissingMapPacks
==============
*/
__int64 LUI_CoD_LuaCall_PartyMissingMapPacks(lua_State *const luaVM)
{
  const char *MapName; 
  int MapIndex; 
  int MapSource; 
  const PartyData *PartyData; 
  PartyData *v6; 
  const char *FirstPlayerNameWithoutMapPack; 
  char *v8; 
  const char *v9; 
  char *MapDisplayNameReference; 
  const char *v11; 
  const char *v12; 
  unsigned int v13; 
  char dest[48]; 
  char v16[1024]; 

  if ( Party_IsAnyMemberMissingMapPack() )
  {
    MapName = Party_GetMapName();
    MapIndex = Live_GetMapIndex(MapName);
    MapSource = Live_GetMapSource(MapIndex);
    if ( !Lobby_IsInLobby() )
    {
      dest[0] = 0;
      v11 = PartyUI_MissingMapPackPlayerName();
      Core_strcpy(dest, 0x2Fui64, v11);
      I_CleanStr(dest);
      v16[0] = 0;
      v12 = PartyUI_MissingMapPackName();
      Core_strcpy(v16, 0x400ui64, v12);
      j_lua_pushboolean(luaVM, 1);
      MapDisplayNameReference = v16;
      v8 = dest;
      goto LABEL_7;
    }
    PartyData = Lobby_GetPartyData();
    if ( !Party_PartyMembersHaveMapPack(PartyData, MapSource) )
    {
      dest[0] = 0;
      v6 = Lobby_GetPartyData();
      FirstPlayerNameWithoutMapPack = PartyUI_GetFirstPlayerNameWithoutMapPack(v6, MapSource);
      Core_strcpy(dest, 0x2Fui64, FirstPlayerNameWithoutMapPack);
      I_CleanStr(dest);
      j_lua_pushboolean(luaVM, 1);
      v8 = dest;
      v9 = Party_GetMapName();
      MapDisplayNameReference = (char *)UI_GetMapDisplayNameReference(v9);
      goto LABEL_7;
    }
  }
  j_lua_pushboolean(luaVM, 0);
  v8 = (char *)&queryFormat.fmt + 3;
  MapDisplayNameReference = (char *)&queryFormat.fmt + 3;
LABEL_7:
  j_lua_pushstring(luaVM, MapDisplayNameReference);
  j_lua_pushstring(luaVM, v8);
  if ( j_lua_gettop(luaVM) < 3 )
  {
    v13 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 3i64, v13);
  }
  return 3i64;
}

/*
==============
LUI_CoD_LuaCall_PartyGetFirstPlayerWithoutMap
==============
*/
__int64 LUI_CoD_LuaCall_PartyGetFirstPlayerWithoutMap(lua_State *const luaVM)
{
  const char *MapName; 
  int MapIndex; 
  int MapSource; 
  PartyData *ActiveParty; 
  const char *FirstPlayerNameWithoutMapPack; 
  unsigned int v7; 
  char dest[48]; 

  MapName = Party_GetMapName();
  MapIndex = Live_GetMapIndex(MapName);
  MapSource = Live_GetMapSource(MapIndex);
  ActiveParty = Party_GetActiveParty();
  FirstPlayerNameWithoutMapPack = PartyUI_GetFirstPlayerNameWithoutMapPack(ActiveParty, MapSource);
  Core_strcpy(dest, 0x2Fui64, FirstPlayerNameWithoutMapPack);
  I_CleanStr(dest);
  j_lua_pushstring(luaVM, dest);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v7 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v7);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_IsMapPackOwned
==============
*/
__int64 LUI_CoD_LuaCall_IsMapPackOwned(lua_State *const luaVM)
{
  int v2; 
  unsigned int v3; 
  unsigned int v4; 
  int HaveContentPack; 
  const char *v6; 
  unsigned int v7; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 1");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isnumber( luaVM, 1 )");
  v2 = lui_tointeger32(luaVM, 1);
  v3 = 2 << v2;
  v4 = v2;
  HaveContentPack = Content_DoWeHaveContentPack(2 << v2);
  v6 = "false";
  if ( (_BYTE)HaveContentPack )
    v6 = "true";
  Com_Printf(16, "IsMapPackOwned: %d %d %s\n", v4, v3, v6);
  j_lua_pushboolean(luaVM, HaveContentPack);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v7 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v7);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_PartyEveryoneHasMap
==============
*/
__int64 LUI_CoD_LuaCall_PartyEveryoneHasMap(lua_State *const luaVM)
{
  bool HaveMapPack; 
  const char *v3; 
  int MapIndex; 
  int MapSource; 
  const PartyData *PartyData; 
  unsigned int v7; 

  HaveMapPack = 0;
  if ( !j_lua_isstring(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.PartyEveryoneHasMap( <mapName> )");
  if ( j_lua_isstring(luaVM, 1) && Lobby_IsInLobby() )
  {
    v3 = j_lua_tolstring(luaVM, 1, NULL);
    MapIndex = Live_GetMapIndex(v3);
    MapSource = Live_GetMapSource(MapIndex);
    PartyData = Lobby_GetPartyData();
    HaveMapPack = Party_PartyMembersHaveMapPack(PartyData, MapSource);
  }
  j_lua_pushboolean(luaVM, HaveMapPack);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v7 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v7);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_AnyoneHasSeasonPass
==============
*/
__int64 LUI_CoD_LuaCall_AnyoneHasSeasonPass(lua_State *const luaVM)
{
  unsigned int v2; 

  j_lua_pushboolean(luaVM, 0);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_AnyoneHasSpecificDLCPack
==============
*/
__int64 LUI_CoD_LuaCall_AnyoneHasSpecificDLCPack(lua_State *const luaVM)
{
  bool HaveDLCPackByName; 
  const char *v3; 
  unsigned int v4; 

  HaveDLCPackByName = 0;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isstring(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.AnyoneHasSpecificDLCPack( <DLCName> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isstring(luaVM, 1) )
  {
    v3 = j_lua_tolstring(luaVM, 1, NULL);
    HaveDLCPackByName = Content_DoWeHaveDLCPackByName(v3);
  }
  j_lua_pushboolean(luaVM, HaveDLCPackByName);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_ShowFirstPartyStoreForDLCPack
==============
*/
__int64 LUI_CoD_LuaCall_ShowFirstPartyStoreForDLCPack(lua_State *const luaVM)
{
  int v2; 
  const char *v3; 
  int ContentIDFromPackName; 
  unsigned int v5; 
  __int128 *v6; 
  Online_Commerce *Instance; 
  unsigned int v8; 
  __int128 v10; 
  int v11; 
  char *data[5]; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isstring(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Engine.ShowFirstPartyStoreForDLCPack( <controller>, <DLCName> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_isstring(luaVM, 2) )
  {
    v2 = j_lua_tointeger(luaVM, 1);
    v3 = j_lua_tolstring(luaVM, 2, NULL);
    ContentIDFromPackName = Content_GetContentIDFromPackName(v3);
    v11 = 1024;
    v5 = 0;
    data[0] = "19e4bbd0-04e1-448b-a12b-2060fe4cb0df";
    data[1] = "ed58ef51-bbef-4d07-97f5-d2d297e66b2c";
    data[2] = "50514e39-5757-3035-c044-533848466800";
    data[3] = "58444e39-5736-3042-c039-305243342400";
    data[4] = "35305039-464d-3058-c047-54424a4b4b00";
    v6 = &v10;
    v10 = _xmm;
    while ( *(_DWORD *)v6 != ContentIDFromPackName )
    {
      ++v5;
      v6 = (__int128 *)((char *)v6 + 4);
      if ( v5 >= 5 )
        goto LABEL_13;
    }
    Instance = Online_Commerce::GetInstance();
    Online_Commerce::ShowFirstPartyStore(Instance, v2, data[v5]);
  }
LABEL_13:
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v8 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v8);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_UnmountAllContent
==============
*/
__int64 LUI_CoD_LuaCall_UnmountAllContent(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Engine.UnmountAllContent()");
  Content_UnmountAllContent();
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_DeleteAndEnqueueOutOfDateContent
==============
*/
__int64 LUI_CoD_LuaCall_DeleteAndEnqueueOutOfDateContent(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Engine.DeleteAndEnqueueOutOfDateContent()");
  j_lua_gettop(luaVM);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_DeleteOutOfDateContent
==============
*/
__int64 LUI_CoD_LuaCall_DeleteOutOfDateContent(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Engine.DeleteOutOfDateContent()");
  j_lua_gettop(luaVM);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetDLCPackProgress
==============
*/
__int64 LUI_CoD_LuaCall_GetDLCPackProgress(lua_State *const luaVM)
{
  const char *v3; 
  int ContentIDFromPackName; 
  ContentProgressState v6; 
  unsigned int v7; 
  long double progress; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isstring(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.GetDLCPackProgress( <DLCName> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isstring(luaVM, 1) )
  {
    v3 = j_lua_tolstring(luaVM, 1, NULL);
    ContentIDFromPackName = Content_GetContentIDFromPackName(v3);
    __asm { vxorpd  xmm0, xmm0, xmm0 }
    progress = *(double *)&_XMM0;
    v6 = Content_GetProgress(ContentIDFromPackName, &progress);
    j_lua_pushinteger(luaVM, v6);
    j_lua_pushnumber(luaVM, progress);
  }
  if ( j_lua_gettop(luaVM) < 2 )
  {
    v7 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 2i64, v7);
  }
  return 2i64;
}

/*
==============
LUI_CoD_LuaCall_AnyoneHasAliensDLC
==============
*/
__int64 LUI_CoD_LuaCall_AnyoneHasAliensDLC(lua_State *const luaVM)
{
  char AvailableContentPacks; 
  unsigned int v3; 

  AvailableContentPacks = Content_GetAvailableContentPacks();
  j_lua_pushboolean(luaVM, AvailableContentPacks & 2);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_AnyoneHasAliensDLC1
==============
*/
__int64 LUI_CoD_LuaCall_AnyoneHasAliensDLC1(lua_State *const luaVM)
{
  unsigned int v2; 

  j_lua_pushboolean(luaVM, 0);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_AnyoneHasAliensDLC2
==============
*/
__int64 LUI_CoD_LuaCall_AnyoneHasAliensDLC2(lua_State *const luaVM)
{
  unsigned int v2; 

  j_lua_pushboolean(luaVM, 0);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_AnyoneHasAliensDLC3
==============
*/
__int64 LUI_CoD_LuaCall_AnyoneHasAliensDLC3(lua_State *const luaVM)
{
  unsigned int v2; 

  j_lua_pushboolean(luaVM, 0);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_AnyoneHasAliensDLC4
==============
*/
__int64 LUI_CoD_LuaCall_AnyoneHasAliensDLC4(lua_State *const luaVM)
{
  unsigned int v2; 

  j_lua_pushboolean(luaVM, 0);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_SetStoreEnterTimestamp
==============
*/
__int64 LUI_CoD_LuaCall_SetStoreEnterTimestamp(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Engine.SetStoreEnterTimestamp()");
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_SetUpsellMenuOpenTimestamp
==============
*/
__int64 LUI_CoD_LuaCall_SetUpsellMenuOpenTimestamp(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Engine.SetUpsellMenuOpenTimestamp()");
  s_upsellMenuOpenTimestamp = LiveStorage_GetUTC();
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_SetUpsellMenuCloseTimestamp
==============
*/
__int64 LUI_CoD_LuaCall_SetUpsellMenuCloseTimestamp(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Engine.SetUpsellMenuCloseTimestamp()");
  s_upsellMenuCloseTimestamp = LiveStorage_GetUTC();
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetUpsellMenuViewTime
==============
*/
__int64 LUI_CoD_LuaCall_GetUpsellMenuViewTime(lua_State *const luaVM)
{
  int v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Engine.GetUpsellMenuViewTime()");
  v2 = s_upsellMenuCloseTimestamp - s_upsellMenuOpenTimestamp;
  if ( s_upsellMenuCloseTimestamp - s_upsellMenuOpenTimestamp <= 255 )
  {
    if ( v2 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_functions.cpp", 11290, ASSERT_TYPE_ASSERT, "(upsellMenuViewTime >= 0 && upsellMenuViewTime <= 255)", (const char *)&queryFormat, "upsellMenuViewTime >= 0 && upsellMenuViewTime <= MAX_UPSELL_VIEW_TIME_IN_SECS") )
      __debugbreak();
  }
  else
  {
    v2 = 255;
  }
  j_lua_pushinteger(luaVM, v2);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetUpsellMenuOpenTimestamp
==============
*/
__int64 LUI_CoD_LuaCall_GetUpsellMenuOpenTimestamp(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Engine.GetUpsellMenuOpenTimestamp()");
  if ( s_upsellMenuOpenTimestamp < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_functions.cpp", 11310, ASSERT_TYPE_ASSERT, "(s_upsellMenuOpenTimestamp >= 0)", (const char *)&queryFormat, "s_upsellMenuOpenTimestamp >= 0") )
    __debugbreak();
  j_lua_pushinteger(luaVM, s_upsellMenuOpenTimestamp);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_IsSpecialRegion
==============
*/
__int64 LUI_CoD_LuaCall_IsSpecialRegion(lua_State *const luaVM)
{
  int IsSpecialRegion; 
  unsigned int v3; 

  IsSpecialRegion = Sys_IsSpecialRegion();
  j_lua_pushboolean(luaVM, IsSpecialRegion);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_Quit
==============
*/
__int64 LUI_CoD_LuaCall_Quit(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetDisplayHeight
==============
*/
__int64 LUI_CoD_LuaCall_GetDisplayHeight(lua_State *const luaVM)
{
  unsigned int v2; 

  j_lua_pushinteger(luaVM, cls.vidConfig.displayHeight);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetDisplayWidth
==============
*/
__int64 LUI_CoD_LuaCall_GetDisplayWidth(lua_State *const luaVM)
{
  unsigned int v2; 

  j_lua_pushinteger(luaVM, cls.vidConfig.displayWidth);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetStatsGroupForGameMode
==============
*/
__int64 LUI_CoD_LuaCall_GetStatsGroupForGameMode(lua_State *const luaVM)
{
  StatsGroup StatsGroupForGameMode; 
  unsigned int v3; 

  StatsGroupForGameMode = Com_PlayerData_GetStatsGroupForGameMode();
  j_lua_pushinteger(luaVM, StatsGroupForGameMode);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetMaterialAspectRatio
==============
*/
__int64 LUI_CoD_LuaCall_GetMaterialAspectRatio(lua_State *const luaVM)
{
  unsigned int v1; 
  const GfxImage *v3; 
  double MaterialAspectRatio; 
  unsigned int v5; 

  v1 = 1;
  if ( j_lua_type(luaVM, 1) != 2 )
    j_luaL_error(luaVM, "USAGE: Engine.GetMaterialAspectRatio( <materialHandle> );");
  if ( j_lua_type(luaVM, 1) != 2 || (v3 = (const GfxImage *)j_lua_touserdata(luaVM, 1), MaterialAspectRatio = LUI_Interface_GetMaterialAspectRatio(v3), *(float *)&MaterialAspectRatio == 0.0) )
    v1 = 0;
  else
    j_lua_pushnumber(luaVM, *(float *)&MaterialAspectRatio);
  if ( (int)v1 > j_lua_gettop(luaVM) )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v1, v5);
  }
  return v1;
}

/*
==============
LUI_CoD_LuaCall_ShowOnlineUpsell
==============
*/
__int64 LUI_CoD_LuaCall_ShowOnlineUpsell(lua_State *const luaVM)
{
  double v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.ShowOnlineUpsell( <controllerIndex> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v2 = lui_tonumber32(luaVM, 1);
    Live_TryGoldUpsell((int)*(float *)&v2);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_IsShowingOnlineUpsell
==============
*/
__int64 LUI_CoD_LuaCall_IsShowingOnlineUpsell(lua_State *const luaVM)
{
  bool IsGoldUpselling; 
  unsigned int v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Engine.IsShowingOnlineUpsell()");
  if ( j_lua_gettop(luaVM) )
  {
    v3 = 0;
  }
  else
  {
    IsGoldUpselling = Live_IsGoldUpselling();
    j_lua_pushboolean(luaVM, IsGoldUpselling);
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
LUI_CoD_LuaCall_ShowAccountPicker
==============
*/
__int64 LUI_CoD_LuaCall_ShowAccountPicker(lua_State *const luaVM)
{
  double v2; 
  int v3; 
  unsigned int v4; 

  if ( !com_unattendedMode->current.enabled )
  {
    if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || j_lua_type(luaVM, 2) != 1 )
      j_luaL_error(luaVM, "USAGE: Engine.ShowAccountPicker( <controllerIndex> <bool> )");
    if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_type(luaVM, 2) == 1 )
    {
      v2 = lui_tonumber32(luaVM, 1);
      v3 = j_lua_toboolean(luaVM, 2);
      Live_StartXBOneSignIn((int)*(float *)&v2, 1, v3 != 0);
    }
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_IsShowingAccountPicker
==============
*/
__int64 LUI_CoD_LuaCall_IsShowingAccountPicker(lua_State *const luaVM)
{
  bool IsSigningIn; 
  unsigned int v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Engine.IsShowingAccountPicker()");
  if ( j_lua_gettop(luaVM) )
  {
    v3 = 0;
  }
  else
  {
    IsSigningIn = Live_IsSigningIn();
    j_lua_pushboolean(luaVM, IsSigningIn);
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
LUI_CoD_LuaCall_GetControllerForLocalClient
==============
*/
__int64 LUI_CoD_LuaCall_GetControllerForLocalClient(lua_State *const luaVM)
{
  int ControllerFromClient; 
  LocalClientNum_t v3; 
  unsigned int v4; 

  ControllerFromClient = 0;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Friends.GetControllerForLocalClient( <client> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v3 = lui_tointeger32(luaVM, 1);
    ControllerFromClient = CL_Mgr_GetControllerFromClient(v3);
  }
  j_lua_pushinteger(luaVM, ControllerFromClient);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_VoteForDLCItem
==============
*/
__int64 LUI_CoD_LuaCall_VoteForDLCItem(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetNumberOfImagesForVote
==============
*/
__int64 LUI_CoD_LuaCall_GetNumberOfImagesForVote(lua_State *const luaVM)
{
  unsigned int v2; 

  j_lua_pushinteger(luaVM, -1i64);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_StartVoteImageDownload
==============
*/
__int64 LUI_CoD_LuaCall_StartVoteImageDownload(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_IsVoteImageDownloaded
==============
*/
__int64 LUI_CoD_LuaCall_IsVoteImageDownloaded(lua_State *const luaVM)
{
  unsigned int v2; 

  j_lua_pushboolean(luaVM, 0);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_IsAnnouncerReleased
==============
*/
__int64 LUI_CoD_LuaCall_IsAnnouncerReleased(lua_State *const luaVM)
{
  unsigned int v2; 

  j_lua_pushboolean(luaVM, 0);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_IsAnnouncerUnlocked
==============
*/
__int64 LUI_CoD_LuaCall_IsAnnouncerUnlocked(lua_State *const luaVM)
{
  unsigned int v2; 

  j_lua_pushboolean(luaVM, 0);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_IsSuitLocked
==============
*/
__int64 LUI_CoD_LuaCall_IsSuitLocked(lua_State *const luaVM)
{
  unsigned int v2; 
  int integer; 
  unsigned int v4; 

  v2 = lui_tointeger32(luaVM, 1);
  integer = debug_locksuits->current.integer;
  j_lua_pushboolean(luaVM, _bittest(&integer, v2));
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_IsHardcoreMPActive
==============
*/
__int64 LUI_CoD_LuaCall_IsHardcoreMPActive(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( !LODWORD(cl_maxLocalClients) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 329, ASSERT_TYPE_ASSERT, "(cl_maxLocalClients)", "%s\n\tMust be called after client allocation", "cl_maxLocalClients") )
    __debugbreak();
  j_lua_pushboolean(luaVM, cls.m_activeGameHardcoreSetting);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetGameTypeIndex
==============
*/
__int64 LUI_CoD_LuaCall_GetGameTypeIndex(lua_State *const luaVM)
{
  unsigned int v2; 
  const char *v3; 
  unsigned int v4; 
  int index; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 1");
  v2 = 1;
  if ( !j_lua_isstring(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isstring( luaVM, 1 )");
  v3 = j_lua_tolstring(luaVM, 1, NULL);
  if ( Com_GameInfo_GetGameTypeIndexForInternalName(v3, &index) )
    j_lua_pushinteger(luaVM, index);
  else
    v2 = 0;
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v4);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_GameDVRProhibitRecording
==============
*/
__int64 LUI_CoD_LuaCall_GameDVRProhibitRecording(lua_State *const luaVM)
{
  int v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) != 1 || j_lua_type(luaVM, 1) != 1 )
    j_luaL_error(luaVM, "USAGE: Engine.GameDVRProhibitRecording( <prohibit> )");
  v2 = j_lua_toboolean(luaVM, 1);
  GameDVR_ProhibitRecording(v2 != 0);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GameDVRProhibitScreenshots
==============
*/
__int64 LUI_CoD_LuaCall_GameDVRProhibitScreenshots(lua_State *const luaVM)
{
  int v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) != 1 || j_lua_type(luaVM, 1) != 1 )
    j_luaL_error(luaVM, "USAGE: Engine.GameDVRProhibitScreenshots( <prohibit> )");
  v2 = j_lua_toboolean(luaVM, 1);
  GameDVR_ProhibitScreenshots(v2 != 0);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_OnLANCreateGame
==============
*/
__int64 LUI_CoD_LuaCall_OnLANCreateGame(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_OnPrivateCreateGame
==============
*/
__int64 LUI_CoD_LuaCall_OnPrivateCreateGame(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_IsLocalPlayAllowed
==============
*/
__int64 LUI_CoD_LuaCall_IsLocalPlayAllowed(lua_State *const luaVM)
{
  unsigned int v2; 

  j_lua_pushboolean(luaVM, 1);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_IsCrossPlayToggleAllowed
==============
*/
__int64 LUI_CoD_LuaCall_IsCrossPlayToggleAllowed(lua_State *const luaVM)
{
  int v2; 
  int HasShownCrossPlayDialog; 
  unsigned int v4; 
  LocalClientNum_t outLocalClientNum; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.IsCrossPlayToggleAllowed( <controller> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    if ( !CL_Mgr_IsControllerMappedToClient(v2, &outLocalClientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_functions.cpp", 11870, ASSERT_TYPE_ASSERT, "(CL_Mgr_IsControllerMappedToClient( controllerIndex, &localClientNum ))", (const char *)&queryFormat, "CL_Mgr_IsControllerMappedToClient( controllerIndex, &localClientNum )") )
      __debugbreak();
    HasShownCrossPlayDialog = Online_PlayerData_HasShownCrossPlayDialog(v2);
    j_lua_pushboolean(luaVM, HasShownCrossPlayDialog);
  }
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_AllowCrossPlayToggle
==============
*/
__int64 LUI_CoD_LuaCall_AllowCrossPlayToggle(lua_State *const luaVM)
{
  int v2; 
  unsigned int v3; 
  LocalClientNum_t outLocalClientNum; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.AllowCrossPlayToggle( <controller> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    if ( !CL_Mgr_IsControllerMappedToClient(v2, &outLocalClientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_functions.cpp", 11906, ASSERT_TYPE_ASSERT, "(CL_Mgr_IsControllerMappedToClient( controllerIndex, &localClientNum ))", (const char *)&queryFormat, "CL_Mgr_IsControllerMappedToClient( controllerIndex, &localClientNum )") )
      __debugbreak();
    if ( !Online_PlayerData_HasShownCrossPlayDialog(v2) )
    {
      Online_PlayerData_SetHasShownCrossPlayDialog(v2, 1);
      Online_PlayerData_SetCrossPlayEnabled(v2, 1);
      GamerProfile_SetCrossPlay(v2, 1);
    }
  }
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_IsCrossPlayEnabled
==============
*/
__int64 LUI_CoD_LuaCall_IsCrossPlayEnabled(lua_State *const luaVM)
{
  unsigned int v2; 
  int v3; 
  bool IsCrossPlayEnabled; 
  unsigned int v5; 
  LocalClientNum_t outLocalClientNum; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.IsCrossPlayEnabled( <controller> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v3 = lui_tointeger32(luaVM, 1);
    if ( !CL_Mgr_IsControllerMappedToClient(v3, &outLocalClientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_functions.cpp", 11938, ASSERT_TYPE_ASSERT, "(CL_Mgr_IsControllerMappedToClient( controllerIndex, &localClientNum ))", (const char *)&queryFormat, "CL_Mgr_IsControllerMappedToClient( controllerIndex, &localClientNum )") )
      __debugbreak();
    if ( Live_HasCrossPlayPermissionsOnPlatform(v3) )
    {
      IsCrossPlayEnabled = Online_PlayerData_IsCrossPlayEnabled(v3);
      j_lua_pushboolean(luaVM, IsCrossPlayEnabled);
    }
    else
    {
      j_lua_pushboolean(luaVM, 0);
    }
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v5);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_SetCrossPlayEnabled
==============
*/
__int64 LUI_CoD_LuaCall_SetCrossPlayEnabled(lua_State *const luaVM)
{
  unsigned int v2; 
  int v3; 
  bool v4; 
  bool v5; 
  PartyData *PartyData; 
  unsigned int v7; 
  LocalClientNum_t outLocalClientNum; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, "USAGE: Engine.SetCrossPlayEnabled( <controller>, <enabled> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_type(luaVM, 2) == 1 )
  {
    v3 = lui_tointeger32(luaVM, 1);
    if ( !CL_Mgr_IsControllerMappedToClient(v3, &outLocalClientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_functions.cpp", 11971, ASSERT_TYPE_ASSERT, "(CL_Mgr_IsControllerMappedToClient( controllerIndex, &localClientNum ))", (const char *)&queryFormat, "CL_Mgr_IsControllerMappedToClient( controllerIndex, &localClientNum )") )
      __debugbreak();
    if ( !Online_PlayerData_HasShownCrossPlayDialog(v3) )
      Online_PlayerData_SetHasShownCrossPlayDialog(v3, 1);
    v4 = j_lua_toboolean(luaVM, 2) != 0;
    v5 = Online_PlayerData_SetCrossPlayEnabled(v3, v4);
    if ( v5 )
    {
      Live_CrossplaySettingChanged(v3, v4);
      if ( g_partyData.inParty )
        PartyHost_CopyCrossplaySettingsToParty(&g_partyData);
      if ( Lobby_GetPartyData()->inParty )
      {
        PartyData = Lobby_GetPartyData();
        PartyHost_CopyCrossplaySettingsToParty(PartyData);
      }
      OnlineMatchmakerOmniscient::ResetMatchmaking(&OnlineMatchmakerOmniscient::ms_instance);
    }
    j_lua_pushboolean(luaVM, v5);
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
LUI_CoD_LuaCall_GetHasCrossplayPermissions
==============
*/
__int64 LUI_CoD_LuaCall_GetHasCrossplayPermissions(lua_State *const luaVM)
{
  bool CanToggleCrossPlayOption; 
  int v3; 
  unsigned int v4; 

  CanToggleCrossPlayOption = 0;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Social.GetHasCrossplayPermissions( <controllerIndex> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v3 = lui_tointeger32(luaVM, 1);
    CanToggleCrossPlayOption = Live_CanToggleCrossPlayOption(v3);
  }
  j_lua_pushboolean(luaVM, CanToggleCrossPlayOption);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_ToUpperCase
==============
*/
__int64 LUI_CoD_LuaCall_ToUpperCase(lua_State *const luaVM)
{
  unsigned int v2; 
  const char *v3; 
  unsigned int v4; 
  char output[512]; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isstring(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: allUpperCaseString = Engine.ToUpperCase( <some string> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isstring(luaVM, 1) )
  {
    v3 = j_lua_tolstring(luaVM, 1, NULL);
    Com_UTF8_ToUpperCase(v3, output, 512);
    j_lua_pushstring(luaVM, output);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v4);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_TruncateToGlyphCount
==============
*/
__int64 LUI_CoD_LuaCall_TruncateToGlyphCount(lua_State *const luaVM)
{
  unsigned int v2; 
  const char *v3; 
  int v4; 
  unsigned int v5; 
  char output[512]; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isstring(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: truncatedString = Engine.TruncateToGlyphCount( <some string>, <some int> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isstring(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    v3 = j_lua_tolstring(luaVM, 1, NULL);
    v4 = lui_tointeger32(luaVM, 2);
    Com_UTF8_TruncateToGlyphCount(v3, output, 512, v4, NULL);
    j_lua_pushstring(luaVM, output);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v5);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_WeaponUsesEnergyBullets
==============
*/
__int64 LUI_CoD_LuaCall_WeaponUsesEnergyBullets(lua_State *const luaVM)
{
  unsigned int v2; 
  const char *v3; 
  const char *v4; 
  __int64 v5; 
  signed __int64 v6; 
  char v7; 
  __int64 v8; 
  char v9; 
  unsigned int v10; 
  __int64 v12; 
  __m256i v13; 
  Weapon result; 

  if ( j_lua_gettop(luaVM) == 1 && (v2 = 1, j_lua_isstring(luaVM, 1)) )
  {
    v3 = j_lua_tolstring(luaVM, 1, NULL);
    v13 = *(__m256i *)&CG_Weapons_GetWeaponForName(&result, v3)->weaponIdx;
    if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1138, ASSERT_TYPE_ASSERT, "(weaponName)", (const char *)&queryFormat, "weaponName") )
      __debugbreak();
    v4 = "none";
    v5 = 4i64;
    if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    v6 = v3 - "none";
    do
    {
      v7 = v4[v6];
      v8 = v5;
      v9 = *v4;
      --v5;
      ++v4;
    }
    while ( v8 && v7 == v9 && v7 );
    if ( v13.m256i_u16[0] > bg_lastParsedWeaponIndex )
    {
      LODWORD(v12) = v13.m256i_u16[0];
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v12, bg_lastParsedWeaponIndex) )
        __debugbreak();
    }
    if ( !bg_weaponDefs[v13.m256i_u16[0]] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
      __debugbreak();
    j_lua_pushboolean(luaVM, bg_weaponDefs[v13.m256i_u16[0]]->bEnergyBullet);
  }
  else
  {
    Com_PrintError(13, "USAGE: Engine.WeaponUsesEnergyBullets( <string> )\n");
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v10 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v10);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_WeaponTypeIsProjectile
==============
*/
__int64 LUI_CoD_LuaCall_WeaponTypeIsProjectile(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_CoD_LuaCall_WeaponTypeIsProjectile_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_GetWeaponSetupInitialized
==============
*/
__int64 LUI_CoD_LuaCall_GetWeaponSetupInitialized(lua_State *const luaVM)
{
  bool v2; 
  unsigned int v3; 

  v2 = BG_WeaponSetup_Initialized();
  j_lua_pushboolean(luaVM, v2);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_IsDraftTeamCompositionValid
==============
*/
__int64 LUI_CoD_LuaCall_IsDraftTeamCompositionValid(lua_State *const luaVM)
{
  PartyData *ActiveParty; 
  const PartyData *v3; 
  bool v4; 
  int v5; 
  int v6; 
  int v7; 
  int LocalClientAnyConnectionState; 
  signed int v9; 
  int *p_team; 
  unsigned int v11; 

  ActiveParty = Party_GetActiveParty();
  v3 = ActiveParty;
  if ( ActiveParty )
    v4 = ActiveParty->inParty != 0;
  else
    v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  if ( v4 )
  {
    if ( clientUIActives[0].frontEndSceneState[0] || (LocalClientAnyConnectionState = CL_GetLocalClientAnyConnectionState(LOCAL_CLIENT_0), v7 = 0, LocalClientAnyConnectionState < 3) )
    {
      v9 = 0;
      p_team = &v3->partyMembers[0].team;
      do
      {
        if ( Party_IsMemberUIVisible(v3, v9) )
        {
          if ( *p_team == 2 )
          {
            ++v5;
          }
          else if ( *p_team == 1 )
          {
            ++v6;
          }
        }
        ++v9;
        p_team += 126;
      }
      while ( v9 < 200 );
      v7 = 0;
      if ( v5 <= 4 && v6 <= 4 )
        v7 = 1;
    }
  }
  j_lua_pushboolean(luaVM, v7);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v11 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v11);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetLoadoutDraftTeams
==============
*/
__int64 LUI_CoD_LuaCall_GetLoadoutDraftTeams(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_CoD_LuaCall_GetLoadoutDraftTeams_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_GetTeamForLocalClient
==============
*/
__int64 LUI_CoD_LuaCall_GetTeamForLocalClient(lua_State *const luaVM)
{
  int ControllerFromClient; 
  const PartyData *ActiveParty; 
  int MemberByXUID; 
  unsigned int v5; 
  unsigned int v6; 
  XUID result; 

  ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
  Live_GetXuid(&result, ControllerFromClient);
  ActiveParty = Party_GetActiveParty();
  MemberByXUID = Party_FindMemberByXUID(ActiveParty, result);
  if ( MemberByXUID < 0 )
  {
    v5 = 0;
  }
  else
  {
    j_lua_pushinteger(luaVM, ActiveParty->partyMembers[MemberByXUID].team);
    v5 = 1;
  }
  if ( (int)v5 > j_lua_gettop(luaVM) )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v5, v6);
  }
  return v5;
}

/*
==============
LUI_CoD_LuaCall_GetTeamForPartyMemberIndex
==============
*/
__int64 LUI_CoD_LuaCall_GetTeamForPartyMemberIndex(lua_State *const luaVM)
{
  int v2; 
  __int64 v3; 
  PartyData *ActiveParty; 
  unsigned int v5; 

  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.GetTeamForPartyMemberIndex( <memberIndex> )\n");
  v2 = lui_tointeger32(luaVM, 1);
  v3 = v2;
  if ( (unsigned int)v2 > 0xC7 )
    j_luaL_error(luaVM, "Provide member index >= 0 and < MAX_PARTY_MEMBERS\n");
  ActiveParty = Party_GetActiveParty();
  j_lua_pushinteger(luaVM, ActiveParty->partyMembers[v3].team);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v5);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetLocalClientFullGamertag
==============
*/
__int64 LUI_CoD_LuaCall_GetLocalClientFullGamertag(lua_State *const luaVM)
{
  int v2; 
  unsigned __int8 ClanTagType; 
  const char *ClanTag; 
  __int64 v5; 
  __int64 v6; 
  const char *v7; 
  const char *v8; 
  unsigned int v9; 
  char outBuffer[8]; 
  __int64 v12; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.GetLocalClientFullGamertag( <controllerIndex> )\n");
  v2 = lui_tointeger32(luaVM, 1);
  if ( !Live_IsSignedIn(v2) )
    goto LABEL_21;
  *(_QWORD *)outBuffer = 0i64;
  LODWORD(v12) = 0;
  ClanTagType = CL_PlayerData_GetClanTagType(v2);
  ClanTag = CL_PlayerData_GetClanTag(v2);
  v5 = -1i64;
  if ( ClanTag )
  {
    v6 = -1i64;
    do
      ++v6;
    while ( ClanTag[v6] );
    if ( v6 )
      Com_PlayerUtils_ColorizeClanTag(ClanTag, ClanTagType, outBuffer, 0xCui64, 0x37u);
  }
  else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_functions.cpp", 12415, ASSERT_TYPE_ASSERT, "(clanTag)", (const char *)&queryFormat, "clanTag", *(_QWORD *)outBuffer, v12) )
  {
    __debugbreak();
  }
  v7 = GamerProfile_GetDisplayNameTag(v2) ? Live_GetLocalClientFullName(v2) : Live_GetLocalClientName(v2);
  if ( !ClanTag )
    goto LABEL_19;
  do
    ++v5;
  while ( ClanTag[v5] );
  if ( v5 )
    v8 = j_va("[%s]%s", outBuffer, v7);
  else
LABEL_19:
    v8 = j_va((const char *)&queryFormat, v7);
  if ( !v8 )
LABEL_21:
    v8 = (char *)&queryFormat.fmt + 3;
  j_lua_pushstring(luaVM, v8);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v9 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v9);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_IsDisplayingNameTag
==============
*/
__int64 LUI_CoD_LuaCall_IsDisplayingNameTag(lua_State *const luaVM)
{
  int v2; 
  bool DisplayNameTag; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.IsDisplayingNameTag( <controllerIndex> )\n");
  v2 = lui_tointeger32(luaVM, 1);
  DisplayNameTag = GamerProfile_GetDisplayNameTag(v2);
  j_lua_pushboolean(luaVM, DisplayNameTag);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetNumActiveLocalClients
==============
*/
__int64 LUI_CoD_LuaCall_GetNumActiveLocalClients(lua_State *const luaVM)
{
  int LocalClientActiveCount; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Engine.GetNumActiveLocalClients()\n");
  LocalClientActiveCount = CL_GetLocalClientActiveCount();
  j_lua_pushinteger(luaVM, LocalClientActiveCount);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_SetLobbyStreamingPos
==============
*/
__int64 LUI_CoD_LuaCall_SetLobbyStreamingPos(lua_State *const luaVM)
{
  __int128 v1; 
  unsigned int v3; 
  vec3_t *p_pos; 
  unsigned int v5; 
  int v6; 
  double v7; 
  unsigned int v8; 
  __int64 v10; 
  __int64 v11; 
  vec3_t pos; 
  __int128 v13; 

  v3 = 1;
  if ( j_lua_gettop(luaVM) != 1 || j_lua_type(luaVM, 1) != 5 )
    j_luaL_error(luaVM, "USAGE: Engine.SetLobbyStreamingPos( <pos> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_type(luaVM, 1) == 5 )
  {
    p_pos = &pos;
    v5 = 0;
    v13 = v1;
    *(_QWORD *)pos.v = 0i64;
    pos.v[2] = 0.0;
    while ( 1 )
    {
      v6 = v5 + 1;
      j_lua_pushinteger(luaVM, (int)(v5 + 1));
      j_lua_gettable(luaVM, 1);
      if ( !j_lua_type(luaVM, -1) )
        break;
      if ( !j_lua_isnumber(luaVM, -1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_functions.cpp", 12491, ASSERT_TYPE_ASSERT, "(lua_isnumber( luaVM, -1 ))", (const char *)&queryFormat, "lua_isnumber( luaVM, -1 )") )
        __debugbreak();
      v7 = lui_tonumber32(luaVM, -1);
      if ( v5 >= 3 )
      {
        LODWORD(v11) = 3;
        LODWORD(v10) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v10, v11) )
          __debugbreak();
      }
      p_pos->v[0] = *(float *)&v7;
      j_lua_settop(luaVM, -2);
      p_pos = (vec3_t *)((char *)p_pos + 4);
      ++v5;
      if ( v6 >= 3 )
        goto LABEL_17;
    }
    j_lua_settop(luaVM, -2);
LABEL_17:
    CL_TransientsWorldMP_ResetLobbyStreamPositions();
    CL_TransientsWorldMP_AddLobbyStreamPositions(&pos);
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
LUI_CoD_LuaCall_AreAnyInfilGameplayTransientsRequested
==============
*/
__int64 LUI_CoD_LuaCall_AreAnyInfilGameplayTransientsRequested(lua_State *const luaVM)
{
  unsigned int GameplayInfilRequestCount; 
  unsigned int v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Engine.AreAnyInfilGameplayTransientsRequested()");
  if ( j_lua_gettop(luaVM) )
  {
    v3 = 0;
  }
  else
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_RELOADING|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_functions.cpp", 12511, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRANSIENT_INFILS ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRANSIENT_INFILS )") )
      __debugbreak();
    GameplayInfilRequestCount = CL_TransientsInfilMP_GetGameplayInfilRequestCount();
    j_lua_pushboolean(luaVM, GameplayInfilRequestCount != 0);
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
LUI_CoD_LuaCall_AreAllInfilGameplayTransientsLoaded
==============
*/
__int64 LUI_CoD_LuaCall_AreAllInfilGameplayTransientsLoaded(lua_State *const luaVM)
{
  bool v2; 
  unsigned int v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Engine.AreAllInfilGameplayTransientsLoaded()");
  if ( j_lua_gettop(luaVM) )
  {
    v3 = 0;
  }
  else
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_RELOADING|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_functions.cpp", 12528, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRANSIENT_INFILS ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRANSIENT_INFILS )") )
      __debugbreak();
    v2 = CL_TransientsInfilMP_AreGameplayInfilsLoaded();
    j_lua_pushboolean(luaVM, v2);
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
CompareFriend
==============
*/
int CompareFriend(const void *f1, const void *f2)
{
  __m256i v2; 
  bool v3; 
  int v4; 
  int v5; 
  char s1[32]; 
  int v8; 
  char s0[32]; 
  int v10; 

  v2 = *(__m256i *)((char *)f1 + 8);
  v10 = *((_DWORD *)f1 + 10);
  v8 = *((_DWORD *)f2 + 10);
  v3 = *((_BYTE *)f1 + 120) == 0;
  *(__m256i *)s0 = v2;
  v4 = !v3;
  v3 = *((_BYTE *)f2 + 120) == 0;
  *(__m256i *)s1 = *(__m256i *)((char *)f2 + 8);
  v5 = !v3;
  if ( v4 == v5 )
    return Com_PlayerUtils_SocialMenu_Stricmp(s0, s1);
  else
    return v5 - v4;
}

/*
==============
GetLivePartyFriendPlayerCard
==============
*/
void GetLivePartyFriendPlayerCard(lua_State *luaVM, PlayerProfileData *playerCardData)
{
  int v4; 
  int v5; 
  const XUID *CurrentIndexXUID; 
  const char *CurrentIndexName; 
  XUID xuid; 
  XUID result; 

  XUID::XUID(&xuid);
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Friends.GetLivePartyFriendPlayerCard( <controller>, <friendIndex> )\n");
  v4 = lui_tointeger32(luaVM, 1);
  v5 = lui_tointeger32(luaVM, 2);
  LiveParty_FeederSelection(v5);
  CurrentIndexXUID = LiveParty_GetCurrentIndexXUID(&result, v4);
  XUID::operator=(&xuid, CurrentIndexXUID);
  CurrentIndexName = LiveParty_GetCurrentIndexName(xuid);
  PlayercardCache_GetPlayercard(xuid, CurrentIndexName, playerCardData);
}

/*
==============
GetOnlineFriendPlayerCard
==============
*/
void GetOnlineFriendPlayerCard(lua_State *luaVM, PlayerProfileData *profileData)
{
  int v4; 
  int v5; 
  Online_Friends *Instance; 
  Online_Friends *v7; 
  const XUID *CurrentIndexXUID; 
  Online_Friends *v9; 
  const char *CurrentIndexName; 
  XUID userID; 
  XUID result; 

  XUID::XUID(&userID);
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Friends.GetOnlineFriendPlayerCard( <controller>, <friendIndex> )\n");
  v4 = lui_tointeger32(luaVM, 1);
  v5 = lui_tointeger32(luaVM, 2);
  Instance = Online_Friends::GetInstance();
  Online_Friends::FeederSelection(Instance, v4, v5);
  v7 = Online_Friends::GetInstance();
  CurrentIndexXUID = Online_Friends::GetCurrentIndexXUID(v7, &result, v4);
  XUID::operator=(&userID, CurrentIndexXUID);
  v9 = Online_Friends::GetInstance();
  CurrentIndexName = Online_Friends::GetCurrentIndexName(v9, v4);
  PlayercardCache_GetPlayercard(userID, CurrentIndexName, profileData);
}

/*
==============
GetRecentPlayerPlayerCard
==============
*/
void GetRecentPlayerPlayerCard(lua_State *luaVM, PlayerProfileData *playerCardData)
{
  int v4; 
  int v5; 
  Online_MetPlayer *Instance; 
  Online_MetPlayer *v7; 
  const XUID *CurrentIndexXUID; 
  Online_MetPlayer *v9; 
  const char *CurrentIndexName; 
  XUID userID; 
  XUID result; 

  XUID::XUID(&userID);
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Friends.GetRecentPlayerPlayerCard( <controller>, <friendIndex> )\n");
  v4 = lui_tointeger32(luaVM, 1);
  v5 = lui_tointeger32(luaVM, 2);
  Instance = Online_MetPlayer::GetInstance();
  Online_MetPlayer::FeederSelection(Instance, v4, v5);
  v7 = Online_MetPlayer::GetInstance();
  CurrentIndexXUID = Online_MetPlayer::GetCurrentIndexXUID(v7, &result, v4);
  XUID::operator=(&userID, CurrentIndexXUID);
  v9 = Online_MetPlayer::GetInstance();
  CurrentIndexName = Online_MetPlayer::GetCurrentIndexName(v9, v4);
  PlayercardCache_GetPlayercard(userID, CurrentIndexName, playerCardData);
}

/*
==============
LUI_CoD_FormatDuration
==============
*/
void LUI_CoD_FormatDuration(const unsigned int durationInMS, unsigned __int64 bufferSize, char *const outBuffer, bool useLocalizedFormat)
{
  LUI_CoD_FormatDuration(durationInMS, bufferSize, outBuffer, useLocalizedFormat, 30, LUI_COUNTDOWN_FORMAT_NONE, NULL);
}

/*
==============
LUI_CoD_FormatDuration
==============
*/
void LUI_CoD_FormatDuration(const unsigned int durationInMS, unsigned __int64 bufferSize, char *const outBuffer, bool useLocalizedFormat, int showDecimalsAtTime, LUICountdownCustomFormatType customFormatType, const char *customFormat)
{
  int v9; 
  int v10; 
  signed int v11; 
  int v12; 
  int v13; 
  const char *v14; 
  int v15; 
  const char *v16; 
  const char *v17; 
  int replaceInts; 
  int v19; 
  int v20; 

  v9 = durationInMS / 0x3E8;
  v10 = (int)(durationInMS / 0x3E8) / 3600;
  v11 = durationInMS % 0x3E8;
  v12 = (int)(durationInMS / 0x3E8) / 60;
  v13 = (int)(durationInMS / 0x3E8) % 60;
  if ( useLocalizedFormat )
  {
    if ( customFormatType )
    {
      switch ( customFormatType )
      {
        case LUI_COUNTDOWN_FORMAT_HRMINSEC:
          replaceInts = v9 / 3600;
          v20 = (int)(durationInMS / 0x3E8) % 60;
          v19 = v12 % 60;
          v14 = UI_SafeTranslateString(customFormat);
          v15 = 3;
          goto LABEL_15;
        case LUI_COUNTDOWN_FORMAT_MINSEC:
          replaceInts = (int)(durationInMS / 0x3E8) / 60;
          v16 = customFormat;
          v19 = v13;
          goto LABEL_14;
        case LUI_COUNTDOWN_FORMAT_SEC:
          replaceInts = durationInMS / 0x3E8;
          v14 = UI_SafeTranslateString(customFormat);
          v15 = 1;
          goto LABEL_15;
        case LUI_COUNTDOWN_FORMAT_SECMSEC:
          replaceInts = durationInMS / 0x3E8;
          v16 = customFormat;
          goto LABEL_13;
        case LUI_COUNTDOWN_FORMAT_MSEC:
          replaceInts = durationInMS;
          v14 = UI_SafeTranslateString(customFormat);
          v15 = 1;
          goto LABEL_15;
        case LUI_COUNTDOWN_FORMAT_DAYHRMIN:
          replaceInts = v10 / 24;
          v19 = v10 % 24;
          v20 = v12 % 60;
          v14 = UI_SafeTranslateString(customFormat);
          v15 = 3;
          goto LABEL_15;
        default:
          return;
      }
    }
    else
    {
      if ( v9 < showDecimalsAtTime )
      {
        replaceInts = (int)(durationInMS / 0x3E8) % 60;
        v16 = "LUA_MENU_MP/COUNTDOWN_SECONDS";
LABEL_13:
        v19 = v11;
      }
      else
      {
        replaceInts = (int)(durationInMS / 0x3E8) / 60;
        v16 = "LUA_MENU_MP/COUNTDOWN";
        v19 = v13;
      }
LABEL_14:
      v14 = UI_SafeTranslateString(v16);
      v15 = 2;
LABEL_15:
      v17 = UI_ReplaceConversionInts(v14, v15, &replaceInts);
      Core_strcpy(outBuffer, bufferSize, v17);
    }
  }
  else if ( v9 < showDecimalsAtTime )
  {
    Com_sprintf(outBuffer, bufferSize, "%s0:%02d.%d%s", &stru_1440115A4, (int)(durationInMS / 0x3E8) % 60, v11 / 100, &unk_14448972C);
  }
  else
  {
    Com_sprintf(outBuffer, bufferSize, "%s%d:%02d%s", &stru_1440115A4, (int)(durationInMS / 0x3E8) / 60, (int)(durationInMS / 0x3E8) % 60, &unk_14448972C);
  }
}

/*
==============
LUI_CoD_LuaCall_CRMGetMessageContent_impl
==============
*/
__int64 LUI_CoD_LuaCall_CRMGetMessageContent_impl(lua_State *const luaVM)
{
  double v2; 
  int v3; 
  double v4; 
  int v5; 
  double v6; 
  int v7; 
  MarketingCommsManager *Instance; 
  lua_State *v9; 
  const char *v10; 
  bdJSONDeserializer CRMContent; 
  unsigned int checksum32Out; 

  if ( j_lua_gettop(luaVM) != 3 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || !j_lua_isnumber(luaVM, 3) )
    j_luaL_error(luaVM, "USAGE: Engine.CRMGetMessageContent( <controllerIndex>, <locationID>, <messageIndex> )");
  if ( j_lua_gettop(luaVM) != 3 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || !j_lua_isnumber(luaVM, 3) )
    goto LABEL_14;
  bdJSONDeserializer::bdJSONDeserializer(&CRMContent);
  v2 = lui_tonumber32(luaVM, 1);
  v3 = (int)*(float *)&v2;
  v4 = lui_tonumber32(luaVM, 2);
  v5 = (int)*(float *)&v4;
  v6 = lui_tonumber32(luaVM, 3);
  v7 = (int)*(float *)&v6;
  checksum32Out = 0;
  Instance = MarketingCommsManager::GetInstance();
  if ( !MarketingCommsManager::GetCachedMetaDataParsedMessage(Instance, v3, v5, (int)*(float *)&v6, &CRMContent, &checksum32Out) || !CRMContent.m_parsed )
  {
    bdJSONDeserializer::~bdJSONDeserializer(&CRMContent);
LABEL_14:
    j_lua_pushnil(luaVM);
    return 1i64;
  }
  j_lua_createtable(luaVM, 0, 0);
  LUI_BeginTable("message", luaVM);
  LUI_CoD_SetUpTable_ForCRMMsg(v5, v7, &CRMContent);
  v9 = LUI_luaVM;
  v10 = j_va("%u", checksum32Out);
  LUI_SetTableString("checksum", v10, v9);
  LUI_SetTableInt("location_id", v5, LUI_luaVM);
  LUI_SetTableInt("message_index", v7, LUI_luaVM);
  LUI_EndTable(LUI_luaVM);
  bdJSONDeserializer::~bdJSONDeserializer(&CRMContent);
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_CRMSendDlogEvent_impl
==============
*/
__int64 LUI_CoD_LuaCall_CRMSendDlogEvent_impl(lua_State *const luaVM)
{
  double v3; 
  int v4; 
  const char *v11; 
  const char *v12; 
  const char *v15; 
  const char *v16; 
  const char *v17; 
  DLogContext context; 
  char buffer[2048]; 

  if ( j_lua_gettop(luaVM) != 9 || !j_lua_isnumber(luaVM, 1) || j_lua_type(luaVM, 2) != 5 || !j_lua_isstring(luaVM, 3) || !j_lua_isstring(luaVM, 4) || !j_lua_isnumber(luaVM, 5) || !j_lua_isnumber(luaVM, 6) || !j_lua_isstring(luaVM, 7) || !j_lua_isstring(luaVM, 8) || !j_lua_isstring(luaVM, 9) )
    j_luaL_error(luaVM, "USAGE: Engine.CRMGetMessageContent( <controllerIndex>, <messageInfoTable>, <crm_screen_id>, <previous_screen_id>, <selected_message_id>, <total_message_items>, <crm_screen_button_pressed>, <interaction_type>, <language> )");
  if ( j_lua_gettop(luaVM) != 9 )
    return 0i64;
  if ( !j_lua_isnumber(luaVM, 1) )
    return 0i64;
  if ( j_lua_type(luaVM, 2) != 5 )
    return 0i64;
  if ( !j_lua_isstring(luaVM, 3) )
    return 0i64;
  if ( !j_lua_isstring(luaVM, 4) )
    return 0i64;
  if ( !j_lua_isnumber(luaVM, 5) )
    return 0i64;
  if ( !j_lua_isnumber(luaVM, 6) )
    return 0i64;
  if ( !j_lua_isstring(luaVM, 7) )
    return 0i64;
  if ( !j_lua_isstring(luaVM, 8) )
    return 0i64;
  if ( !j_lua_isstring(luaVM, 9) )
    return 0i64;
  v3 = lui_tonumber32(luaVM, 1);
  if ( !Online_Telemetry_IsCRMTelemetryEnabled((int)*(float *)&v3) )
    return 0i64;
  DLog_CreateContext(&context, 0i64, buffer, 2048);
  if ( !DLog_BeginEvent(&context, "dlog_event_crm_interaction") )
    return 0i64;
  v4 = 1;
  j_lua_pushinteger(luaVM, 1i64);
  j_lua_gettable(luaVM, 2);
  while ( j_lua_type(luaVM, -1) )
  {
    if ( v4 > 10 )
      break;
    j_lua_getfield(luaVM, -1, "message_id");
    if ( j_lua_isnumber(luaVM, -1) )
    {
      *(double *)&_XMM0 = j_lua_tonumber(luaVM, -1);
      __asm { vcvttsd2si r12, xmm0 }
    }
    else
    {
      LODWORD(_R12) = 0;
    }
    j_lua_settop(luaVM, -2);
    j_lua_getfield(luaVM, -1, "grid_position_num");
    if ( j_lua_isnumber(luaVM, -1) )
    {
      *(double *)&_XMM0 = j_lua_tonumber(luaVM, -1);
      __asm { vcvttsd2si r15d, xmm0 }
    }
    else
    {
      LOBYTE(_ER15) = 0;
    }
    j_lua_settop(luaVM, -2);
    j_lua_getfield(luaVM, -1, "channel_id");
    if ( j_lua_isnumber(luaVM, -1) )
    {
      *(double *)&_XMM0 = j_lua_tonumber(luaVM, -1);
      __asm { vcvttsd2si r14d, xmm0 }
    }
    else
    {
      LOBYTE(_ER14) = 0;
    }
    j_lua_settop(luaVM, -2);
    j_lua_getfield(luaVM, -1, "layout_id");
    if ( j_lua_isnumber(luaVM, -1) )
    {
      *(double *)&_XMM0 = j_lua_tonumber(luaVM, -1);
      __asm { vcvttsd2si ebp, xmm0 }
    }
    else
    {
      LOBYTE(_EBP) = 0;
    }
    j_lua_settop(luaVM, -2);
    j_lua_getfield(luaVM, -1, "total_time_spent_ms");
    if ( j_lua_isnumber(luaVM, -1) )
    {
      *(double *)&_XMM0 = j_lua_tonumber(luaVM, -1);
      __asm { vcvttsd2si rsi, xmm0 }
    }
    else
    {
      LODWORD(_RSI) = 0;
    }
    j_lua_settop(luaVM, -2);
    j_lua_getfield(luaVM, -1, "more_details_time_spent_ms");
    if ( j_lua_isnumber(luaVM, -1) )
    {
      *(double *)&_XMM0 = j_lua_tonumber(luaVM, -1);
      __asm { vcvttsd2si rdi, xmm0 }
    }
    else
    {
      LODWORD(_RDI) = 0;
    }
    j_lua_settop(luaVM, -2);
    if ( DLog_IsActive() )
    {
      if ( DLog_BeginRow(&context, "crm_interaction_message_info") && DLog_UInt32(&context, "message_id", _R12) && DLog_UInt8(&context, "grid_position_num", _ER15) && DLog_UInt8(&context, "channel_id", _ER14) && DLog_UInt8(&context, "layout_id", _EBP) && DLog_UInt32(&context, "total_time_spent_ms", _RSI) && DLog_UInt32(&context, "more_details_time_spent_ms", _RDI) )
        DLog_EndRow(&context);
    }
    else
    {
      context.error = DLOG_ERROR_NOT_ACTIVE;
    }
    ++v4;
    j_lua_settop(luaVM, -2);
    j_lua_pushinteger(luaVM, v4);
    j_lua_gettable(luaVM, 2);
  }
  j_lua_settop(luaVM, -2);
  v11 = j_lua_tolstring(luaVM, 3, NULL);
  v12 = j_lua_tolstring(luaVM, 4, NULL);
  if ( j_lua_isnumber(luaVM, 5) )
  {
    *(double *)&_XMM0 = j_lua_tonumber(luaVM, 5);
    __asm { vcvttsd2si rsi, xmm0 }
  }
  else
  {
    LODWORD(_RSI) = 0;
  }
  if ( j_lua_isnumber(luaVM, 6) )
  {
    *(double *)&_XMM0 = j_lua_tonumber(luaVM, 6);
    __asm { vcvttsd2si edi, xmm0 }
  }
  else
  {
    LOBYTE(_EDI) = 0;
  }
  v15 = j_lua_tolstring(luaVM, 7, NULL);
  v16 = j_lua_tolstring(luaVM, 8, NULL);
  v17 = j_lua_tolstring(luaVM, 9, NULL);
  if ( DLog_String(&context, "crm_screen_id", v11, 0) && DLog_String(&context, "previous_screen_id", v12, 0) && DLog_UInt32(&context, "selected_message_id", _RSI) && DLog_UInt8(&context, "total_message_items", _EDI) && DLog_String(&context, "crm_screen_button_pressed", v15, 0) && DLog_String(&context, "interaction_type", v16, 0) )
    DLog_String(&context, "language", v17, 0);
  DLog_EndEvent(&context);
  DLog_RecordContext(&context);
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_CompleteTutorial_impl
==============
*/
__int64 LUI_CoD_LuaCall_CompleteTutorial_impl(lua_State *const luaVM)
{
  int v2; 
  int v3; 
  int v4; 
  StatsSource ActiveStatsSource; 
  const char *v6; 
  int v7; 
  DDLContext context; 

  v2 = j_lua_gettop(luaVM);
  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, "USAGE: Engine.CompleteTutorial( controllerIndex, tutorialIndex )");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.CompleteTutorial( controllerIndex, tutorialIndex )");
  if ( !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Engine.CompleteTutorial( controllerIndex, tutorialIndex )");
  v3 = lui_tointeger32(luaVM, 1);
  v4 = lui_tointeger32(luaVM, 2);
  if ( v4 >= 64 )
    j_luaL_error(luaVM, "USAGE: Engine.CompleteTutorial( controllerIndex, tutorialIndex ), tutorialIndex must be under 64");
  ActiveStatsSource = LiveStorage_GetActiveStatsSource(v3);
  if ( CL_PlayerData_GetDDLBuffer(&context, v3, ActiveStatsSource, STATSGROUP_RANKED) )
  {
    if ( v4 > 31 )
    {
      LOBYTE(v4) = v4 - 32;
      v6 = "mpTutorialLevel2";
    }
    else
    {
      v6 = "mpTutorialLevel";
    }
    j_lua_pushstring(luaVM, v6);
    LUI_GetDDL(luaVM, 1, context.def, &context, STATSGROUP_RANKED);
    if ( !j_lua_isnumber(luaVM, -1) )
      j_luaL_error(luaVM, "Error reading mpTutorialLevel");
    v7 = lui_tointeger32(luaVM, -1);
    j_lua_settop(luaVM, -2);
    j_lua_pushinteger(luaVM, v7 | (1 << v4));
    LUI_SetDDL(luaVM, 2, context.def, &context, STATSGROUP_RANKED);
    j_lua_settop(luaVM, -3);
    if ( v2 != j_lua_gettop(luaVM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_functions.cpp", 18741, ASSERT_TYPE_ASSERT, "(stackTop == lua_gettop( luaVM ))", (const char *)&queryFormat, "stackTop == lua_gettop( luaVM )") )
      __debugbreak();
  }
  else
  {
    Com_Printf(14, "Tried to get PlayerData before we have downloaded player stats - %s\n", "LUI_CoD_LuaCall_CompleteTutorial_impl");
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_CustomClassIsRestricted_impl
==============
*/
__int64 LUI_CoD_LuaCall_CustomClassIsRestricted_impl(lua_State *const luaVM)
{
  int v1; 
  StatsGroup statsGroup; 
  int v4; 
  int v5; 
  int v6; 
  bool v7; 
  int v8; 
  int v9; 
  int v10; 
  bool v11; 
  const char *v12; 
  int v13; 
  const char *v14; 
  int slot; 
  int v16; 

  v1 = 0;
  statsGroup = STATSGROUP_IGNORE;
  v4 = j_lua_gettop(luaVM);
  v5 = j_lua_gettop(luaVM);
  v6 = 3;
  v7 = v4 == 6;
  v8 = 4;
  v9 = 5;
  if ( v7 )
  {
    v10 = 6;
    if ( v5 != 6 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || !j_lua_isstring(luaVM, 3) || !j_lua_isnumber(luaVM, 4) || !j_lua_isstring(luaVM, 5) || !j_lua_isnumber(luaVM, 6) )
      j_luaL_error(luaVM, "USAGE: MatchRules.CustomClassIsRestricted( <controller>, <statsgroup>, <squadLoc>, <squadMemberIndex>, <classLoc>, <slot> )\n");
    v11 = j_lua_gettop(luaVM) == 6 && j_lua_isnumber(luaVM, 1) && j_lua_isnumber(luaVM, 2) && j_lua_isstring(luaVM, 3) && j_lua_isnumber(luaVM, 4) && j_lua_isstring(luaVM, 5) && j_lua_isnumber(luaVM, 6);
    statsGroup = lui_tointeger32(luaVM, 2);
  }
  else
  {
    if ( v5 != 5 || !j_lua_isnumber(luaVM, 1) || !j_lua_isstring(luaVM, 2) || !j_lua_isnumber(luaVM, 3) || !j_lua_isstring(luaVM, 4) || !j_lua_isnumber(luaVM, 5) )
      j_luaL_error(luaVM, "USAGE: MatchRules.CustomClassIsRestricted( <controller>, <squadLoc>, <squadMemberIndex>, <classLoc>, <slot> )\n");
    v11 = j_lua_gettop(luaVM) == 5 && j_lua_isnumber(luaVM, 1) && j_lua_isstring(luaVM, 2) && j_lua_isnumber(luaVM, 3) && j_lua_isstring(luaVM, 4) && j_lua_isnumber(luaVM, 5);
    v10 = 5;
    v9 = 4;
    v8 = 3;
    v6 = 2;
  }
  v12 = j_lua_tolstring(luaVM, v6, NULL);
  v13 = lui_tointeger32(luaVM, v8);
  v14 = j_lua_tolstring(luaVM, v9, NULL);
  slot = lui_tointeger32(luaVM, v10);
  if ( v11 && GameStateInfo_Get()->usingRecipe )
  {
    v16 = lui_tointeger32(luaVM, 1);
    LOBYTE(v1) = MatchRules_ValidateCustomClass(v16, v12, v13, v14, slot, statsGroup) != 1;
  }
  j_lua_pushboolean(luaVM, v1);
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_DLog_RecordBindingsAndGameplayOptions_impl
==============
*/
void LUI_CoD_LuaCall_DLog_RecordBindingsAndGameplayOptions_impl
{
	//Failed decompiling
}

/*
==============
LUI_CoD_LuaCall_ExecNow_impl
==============
*/
__int64 LUI_CoD_LuaCall_ExecNow_impl(lua_State *const luaVM)
{
  int v2; 
  const char *v3; 
  double v4; 
  int v6; 
  const char *v7; 
  double v8; 
  unsigned int v9; 
  int v10[10]; 
  LocalClientNum_t ClientFromController; 
  int controllerIndex; 
  LocalClientNum_t localClientNum; 

  v2 = j_lua_gettop(luaVM);
  if ( (unsigned int)(v2 - 1) > 1 )
    j_luaL_error(luaVM, "USAGE: Engine.ExecNow( <command>, ?<controller_num> )\n");
  if ( !j_lua_isstring(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.ExecNow( <command>, ?<controller_num> )\n");
  v3 = j_lua_tolstring(luaVM, 1, NULL);
  if ( v2 == 2 )
  {
    if ( !j_lua_isnumber(luaVM, 2) )
      j_luaL_error(luaVM, "USAGE: Engine.ExecNow( <command>, ?<controller_num> )\n");
    v4 = lui_tonumber32(luaVM, 2);
    controllerIndex = (int)*(float *)&v4;
    localClientNum = CL_Mgr_GetClientFromController((int)*(float *)&v4);
  }
  else
  {
    LUI_CoD_AttemptInferLocalClientAndController(&localClientNum, &controllerIndex);
  }
  if ( uiscript_verbose->current.enabled )
    Com_Printf(13, "LUISCRIPT - Executing command Now'%s'\n", v3);
  if ( Sys_IsMainThread() )
  {
    Cbuf_ExecuteBufferInternal(localClientNum, controllerIndex, v3, 0, 0);
    return 0i64;
  }
  else
  {
    v6 = j_lua_gettop(luaVM);
    if ( (unsigned int)(v6 - 1) > 1 )
      j_luaL_error(luaVM, "USAGE: Engine.Exec( <command>, ?<controller> )\n");
    if ( !j_lua_isstring(luaVM, 1) )
      j_luaL_error(luaVM, "USAGE: Engine.Exec( <command>, ?<controller> )\n");
    v7 = j_lua_tolstring(luaVM, 1, NULL);
    if ( v6 == 2 )
    {
      if ( !j_lua_isnumber(luaVM, 2) )
        j_luaL_error(luaVM, "USAGE: Engine.Exec( <command>, ?<controller> )\n");
      v8 = lui_tonumber32(luaVM, 2);
      v10[0] = (int)*(float *)&v8;
      ClientFromController = CL_Mgr_GetClientFromController((int)*(float *)&v8);
    }
    else
    {
      LUI_CoD_AttemptInferLocalClientAndController(&ClientFromController, v10);
    }
    if ( uiscript_verbose->current.enabled )
      Com_Printf(13, "LUISCRIPT - Executing command '%s'\n", v7);
    Cbuf_AddText(ClientFromController, v7);
    Cbuf_AddText(ClientFromController, "\n");
    if ( j_lua_gettop(luaVM) < 0 )
    {
      v9 = j_lua_gettop(luaVM);
      j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v9);
    }
    return 0i64;
  }
}

/*
==============
LUI_CoD_LuaCall_FormatTimeSmall_impl
==============
*/
__int64 LUI_CoD_LuaCall_FormatTimeSmall_impl(lua_State *const luaVM)
{
  int v2; 
  const char *v5; 
  __int64 v6; 
  int v7; 
  const char *v8; 
  const char *v9; 
  __time64_t Time[2]; 
  ConversionArguments arguments; 
  char dest[16]; 
  char v14[16]; 
  char v15[48]; 
  char outputString[1024]; 

  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.FormatTimeSmall( <seconds> )");
  if ( j_lua_isnumber(luaVM, 1) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    _XMM0 = 0i64;
    __asm { vroundss xmm4, xmm0, xmm2, 1 }
    Time[0] = (unsigned int)v2;
    if ( (int)*(float *)&_XMM4 < 1440 )
    {
      if ( (int)*(float *)&_XMM4 < 60 )
      {
        _localtime64(Time);
        if ( v2 >= 60 )
        {
          v5 = UI_SafeTranslateString("LUA_MENU_MP/MINUTES_SECONDS");
          if ( v5 )
          {
            memset_0(&arguments, 0, sizeof(arguments));
            arguments.argCount = 2;
            Com_sprintf(dest, 0x10ui64, "%d", (unsigned int)(v2 / 60));
            arguments.args[0] = dest;
            Com_sprintf(v14, 0x10ui64, "%d", (unsigned int)(v2 % 60));
            arguments.args[1] = v14;
            goto LABEL_16;
          }
        }
        else
        {
          v8 = UI_SafeTranslateString("LUA_MENU_MP/SECONDS");
          if ( v8 )
          {
            memset_0(&arguments, 0, sizeof(arguments));
            arguments.argCount = 1;
            Com_sprintf(dest, 0x10ui64, "%d", (unsigned int)v2);
            v9 = v8;
            arguments.args[0] = dest;
LABEL_17:
            UI_ReplaceConversions(v9, &arguments, outputString, 0x400ui64);
            goto LABEL_18;
          }
        }
      }
      else
      {
        _localtime64(Time);
        v5 = UI_SafeTranslateString("LUA_MENU_MP/HOURS_MINUTES");
        if ( v5 )
        {
          memset_0(&arguments, 0, sizeof(arguments));
          arguments.argCount = 2;
          Com_sprintf(dest, 0x10ui64, "%d", (unsigned int)(v2 / 3600));
          arguments.args[0] = dest;
          Com_sprintf(v14, 0x10ui64, "%d", (unsigned int)(v2 % 3600 / 60));
          arguments.args[1] = v14;
          goto LABEL_16;
        }
      }
    }
    else
    {
      _localtime64(Time);
      v5 = UI_SafeTranslateString("LUA_MENU_MP/DAYS_HOURS_MINUTES");
      if ( v5 )
      {
        memset_0(&arguments, 0, sizeof(arguments));
        arguments.argCount = 3;
        v6 = (unsigned int)(v2 / 86400);
        v7 = v2 % 86400;
        Com_sprintf(dest, 0x10ui64, "%d", v6);
        arguments.args[0] = dest;
        Com_sprintf(v14, 0x10ui64, "%d", (unsigned int)(v7 / 3600));
        arguments.args[1] = v14;
        Com_sprintf(v15, 0x10ui64, "%d", (unsigned int)(v7 % 3600 / 60));
        arguments.args[2] = v15;
LABEL_16:
        v9 = v5;
        goto LABEL_17;
      }
    }
    outputString[0] = 0;
LABEL_18:
    j_lua_pushstring(luaVM, outputString);
    return 1i64;
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetCategoryData_impl
==============
*/
__int64 LUI_CoD_LuaCall_GetCategoryData_impl(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 
  __int64 v4; 
  const char *v5; 
  int m_count; 
  signed int i; 
  bool v13; 
  bool v14; 
  int v15; 
  bool v16; 
  bdJSONDeserializer storeContent; 
  bdJSONDeserializer v18; 
  bdJSONDeserializer v19; 
  __int64 v20; 
  char value[6160]; 

  v20 = -2i64;
  if ( j_lua_gettop(luaVM) != 1 || j_lua_type(luaVM, 1) != 5 )
    j_luaL_error(luaVM, "USAGE: Engine.GetCategoryData( categoryDataJSON )");
  if ( j_lua_gettop(luaVM) != 1 || j_lua_type(luaVM, 1) != 5 )
    return 0i64;
  bdJSONDeserializer::bdJSONDeserializer(&storeContent);
  v2 = Online_Store::GetInstance()->m_responseCount[1];
  j_lua_createtable(luaVM, v2, 0);
  v3 = 0;
  if ( v2 )
  {
    v4 = 1i64;
    do
    {
      j_lua_pushinteger(luaVM, v4);
      j_lua_gettable(luaVM, -3);
      v5 = j_lua_tolstring(luaVM, -1, NULL);
      bdJSONDeserializer::parse(&storeContent, v5);
      j_lua_settop(luaVM, -2);
      ++v3;
      _XMM1 = 0i64;
      __asm { vcvtsi2sd xmm1, xmm1, rax; n }
      j_lua_pushnumber(luaVM, *(long double *)&_XMM1);
      j_lua_createtable(luaVM, 0, 7);
      if ( bdJSONDeserializer::hasKey(&storeContent, (const char *const)&valueOut) && bdJSONDeserializer::getString(&storeContent, (const char *const)&valueOut, value, 0x1801u) )
        LUI_SetTableString((const char *)&valueOut, value, luaVM);
      if ( bdJSONDeserializer::getString(&storeContent, (const char *const)&stru_143C9A1A4, value, 0x1801u) )
        LUI_SetTableString((const char *)&stru_143C9A1A4, value, luaVM);
      if ( bdJSONDeserializer::hasKey(&storeContent, "layoutName") && bdJSONDeserializer::getString(&storeContent, "layoutName", value, 0x1801u) )
        LUI_SetTableString("layoutName", value, luaVM);
      if ( bdJSONDeserializer::getInt32(&storeContent, "order", &v15) )
        LUI_SetTableInt("order", v15, luaVM);
      if ( bdJSONDeserializer::getInt32(&storeContent, "layoutType", &v15) )
        LUI_SetTableInt("layoutType", v15, luaVM);
      if ( bdJSONDeserializer::hasKey(&storeContent, "asset") && bdJSONDeserializer::getString(&storeContent, "asset", value, 0x1801u) )
        LUI_SetTableString("asset", value, luaVM);
      if ( bdJSONDeserializer::hasKey(&storeContent, "idPubVar") && bdJSONDeserializer::getString(&storeContent, "idPubVar", value, 0x1801u) )
        LUI_SetTableString("idPubVar", value, luaVM);
      if ( bdJSONDeserializer::hasKey(&storeContent, "timerPubVar") && bdJSONDeserializer::getString(&storeContent, "timerPubVar", value, 0x1801u) )
        LUI_SetTableString("timerPubVar", value, luaVM);
      if ( bdJSONDeserializer::getInt32(&storeContent, "numItemsShown", &v15) )
        LUI_SetTableInt("numItemsShown", v15, luaVM);
      v13 = 0;
      if ( bdJSONDeserializer::hasKey(&storeContent, "justForYou") && bdJSONDeserializer::getBoolean(&storeContent, "justForYou", &v13) )
        LUI_SetTableBool("justForYou", v13, luaVM);
      LUI_CoD_LuaCall_GetStoreColorData(luaVM, &storeContent);
      bdJSONDeserializer::bdJSONDeserializer(&v19);
      if ( bdJSONDeserializer::getArray(&storeContent, "items", &v19) )
      {
        m_count = v19.m_count;
        j_lua_pushstring(luaVM, "items");
        j_lua_createtable(luaVM, m_count, 0);
        for ( i = 0; i < m_count; ++i )
        {
          bdJSONDeserializer::bdJSONDeserializer(&v18);
          if ( bdJSONDeserializer::getObject(&v19, i, &v18) )
          {
            _XMM1 = 0i64;
            __asm { vcvtsi2sd xmm1, xmm1, eax; n }
            j_lua_pushnumber(luaVM, *(long double *)&_XMM1);
            j_lua_createtable(luaVM, 0, 5);
            if ( bdJSONDeserializer::getInt32(&v18, "order", &v15) )
              LUI_SetTableInt("order", v15, luaVM);
            v14 = 0;
            if ( bdJSONDeserializer::hasKey(&v18, "usesFirstPartyStore") && bdJSONDeserializer::getBoolean(&v18, "usesFirstPartyStore", &v14) )
              LUI_SetTableBool("usesFirstPartyStore", v14, luaVM);
            if ( v14 && bdJSONDeserializer::hasKey(&v18, "firstPartyID") && bdJSONDeserializer::getString(&v18, "firstPartyID", value, 0x1801u) )
              LUI_SetTableString("firstPartyID", value, luaVM);
            if ( bdJSONDeserializer::hasKey(&v18, "layoutOnlyItem") && bdJSONDeserializer::getBoolean(&v18, "layoutOnlyItem", &v16) )
              LUI_SetTableBool("layoutOnlyItem", v16, luaVM);
            v13 = 0;
            if ( bdJSONDeserializer::hasKey(&v18, "justForYou") && bdJSONDeserializer::getBoolean(&v18, "justForYou", &v13) )
              LUI_SetTableBool("justForYou", v13, luaVM);
            if ( bdJSONDeserializer::hasKey(&v18, (const char *const)&valueOut) && bdJSONDeserializer::getInt32(&v18, (const char *const)&valueOut, &v15) )
              LUI_SetTableInt((const char *)&valueOut, v15, luaVM);
            if ( bdJSONDeserializer::hasKey(&v18, "menuToOpen") && bdJSONDeserializer::getString(&v18, "menuToOpen", value, 0x1801u) )
              LUI_SetTableString("menuToOpen", value, luaVM);
            if ( bdJSONDeserializer::getString(&v18, "asset", value, 0x1801u) )
              LUI_SetTableString("asset", value, luaVM);
            if ( bdJSONDeserializer::getString(&v18, (const char *const)&stru_143C9A1A4, value, 0x1801u) )
              LUI_SetTableString((const char *)&stru_143C9A1A4, value, luaVM);
            LUI_CoD_LuaCall_GetStoreColorData(luaVM, &v18);
            j_lua_settable(luaVM, -3);
          }
          bdJSONDeserializer::~bdJSONDeserializer(&v18);
        }
        j_lua_settable(luaVM, -3);
      }
      j_lua_settable(luaVM, -3);
      bdJSONDeserializer::~bdJSONDeserializer(&v19);
      ++v4;
    }
    while ( v3 < v2 );
  }
  bdJSONDeserializer::~bdJSONDeserializer(&storeContent);
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetDefaultExpandedSocialMenuList_impl
==============
*/

__int64 __fastcall LUI_CoD_LuaCall_GetDefaultExpandedSocialMenuList_impl(lua_State *const luaVM, double _XMM1_8)
{
  int v3; 
  const dvar_t *v4; 
  int v5; 
  int v6; 
  Online_Friends *v7; 
  const dvar_t *v8; 
  Online_Friends *Instance; 
  OnlinePresenceNotifications *v10; 
  OnlinePresenceNotifications *v12; 
  const dvar_t *v13; 
  Online_Friends *v14; 
  Online_Friends *v15; 
  const dvar_t *v16; 
  const dvar_t *v17; 
  unsigned int numFriendsOut; 
  DWFriend *friendsOut; 
  FavoriteFriendDetailsForUI v21; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Friends.GetDefaultExpandedSocialMenuList( <controllerIndex> )\n");
  v3 = lui_tointeger32(luaVM, 1);
  v4 = DVARBOOL_online_favorite_friends_enabled;
  numFriendsOut = 0;
  v5 = v3;
  if ( !DVARBOOL_online_favorite_friends_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_favorite_friends_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( !v4->current.enabled )
  {
LABEL_11:
    v8 = DVARBOOL_online_crossplay_friends_enabled;
    if ( !DVARBOOL_online_crossplay_friends_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_crossplay_friends_enabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    if ( v8->current.enabled )
    {
      friendsOut = NULL;
      Instance = Online_Friends::GetInstance();
      if ( Online_Friends::Crossplay_GetFriends(Instance, v5, &friendsOut, &numFriendsOut) )
      {
        v10 = OnlinePresenceNotifications::GetInstance();
        if ( OnlinePresenceNotifications::GetNumOnlineCrossplayFriends(v10, v5) )
          goto LABEL_17;
      }
    }
    v12 = OnlinePresenceNotifications::GetInstance();
    if ( OnlinePresenceNotifications::GetNumOnlinePlatformFriends(v12, v5) )
      goto LABEL_36;
    v13 = DVARBOOL_online_favorite_friends_enabled;
    if ( !DVARBOOL_online_favorite_friends_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_favorite_friends_enabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    if ( v13->current.enabled )
    {
      v14 = Online_Friends::GetInstance();
      if ( Online_Friends::FavoriteFriends_GetLinkedFriendCount(v14, v5) > 0 )
        goto LABEL_31;
    }
    if ( !numFriendsOut )
    {
      v15 = Online_Friends::GetInstance();
      if ( Online_Friends::GetFriends(v15, v5)->count )
        goto LABEL_36;
      v16 = DVARBOOL_online_favorite_friends_enabled;
      if ( !DVARBOOL_online_favorite_friends_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_favorite_friends_enabled") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v16);
      if ( v16->current.enabled )
      {
LABEL_31:
        *(double *)&_XMM1 = DOUBLE_5_0;
        goto LABEL_37;
      }
      v17 = DVARBOOL_online_crossplay_friends_enabled;
      if ( !DVARBOOL_online_crossplay_friends_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_crossplay_friends_enabled") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v17);
      if ( !v17->current.enabled )
      {
LABEL_36:
        __asm { vxorpd  xmm1, xmm1, xmm1; n }
        goto LABEL_37;
      }
    }
LABEL_17:
    *(double *)&_XMM1 = DOUBLE_4_0;
LABEL_37:
    j_lua_pushnumber(luaVM, *(long double *)&_XMM1);
    return 1i64;
  }
  v6 = 0;
  while ( 1 )
  {
    XUID::XUID(&v21.xuid);
    v7 = Online_Friends::GetInstance();
    Online_Friends::FavoriteFriends_GetUserDetailsForUI(v7, v5, v6, &v21);
    if ( v21.isOnline )
      break;
    if ( ++v6 >= 16 )
      goto LABEL_11;
  }
  j_lua_pushnumber(luaVM, 5.0);
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetFriendDetails_impl
==============
*/
__int64 LUI_CoD_LuaCall_GetFriendDetails_impl(lua_State *const luaVM)
{
  int v2; 
  const char *v3; 
  int v4; 
  bool UserDetailsForUI; 
  const SocialPresence *Presence; 
  char *m_clanTag; 
  SocialPresence *v8; 
  __int64 v9; 
  Online_Friends *v10; 
  Online_MetPlayer *Instance; 
  int PositionByXuid; 
  Online_MetPlayer *v13; 
  Online_Friends *v14; 
  Online_Friends *v15; 
  int Index; 
  Online_Friends *v17; 
  int UserIndexFromXuid; 
  Online_Friends *v19; 
  OnlineClansManager *v20; 
  OnlineClansManager *v21; 
  OnlineClan *ClanById; 
  int m_inputType; 
  __int64 v24; 
  unsigned __int8 *v25; 
  __int64 v26; 
  signed __int64 v27; 
  char v28; 
  __int64 v29; 
  __int64 v30; 
  PresencePlatform presencePlatform; 
  XUID result; 
  bool isSessionPrivateOut; 
  const OnlineClanMember *numFriendsOut; 
  UIPlayerInfo v36; 
  PlayerProfileData profileData; 
  DWFriend *friendsOut; 
  int v39; 
  char dest[48]; 
  char outputString[128]; 
  char v42[128]; 
  char value[128]; 

  if ( j_lua_gettop(luaVM) != 4 || !j_lua_isnumber(luaVM, 1) || !j_lua_isstring(luaVM, 2) || !j_lua_isstring(luaVM, 3) || !j_lua_isnumber(luaVM, 4) )
    j_luaL_error(luaVM, "USAGE: Friends.GetFriendDetails( controllerIndex, xuid, platformIdString, friendType )");
  if ( j_lua_gettop(luaVM) != 4 || !j_lua_isnumber(luaVM, 1) || !j_lua_isstring(luaVM, 2) || !j_lua_isstring(luaVM, 3) || !j_lua_isnumber(luaVM, 4) )
    return 0i64;
  v2 = lui_tointeger32(luaVM, 1);
  LUI_ToXUID(&result, luaVM, 2);
  v3 = j_lua_tolstring(luaVM, 3, NULL);
  v4 = lui_tointeger32(luaVM, 4);
  UserDetailsForUI = 0;
  Presence = Social_GetPresence(v2, result);
  m_clanTag = NULL;
  presencePlatform = PRESENCE_PLATFORM_NONE;
  value[0] = 0;
  v8 = (SocialPresence *)Presence;
  outputString[0] = 0;
  v42[0] = 0;
  dest[0] = 0;
  if ( v4 )
  {
    switch ( v4 )
    {
      case 3:
        Instance = Online_MetPlayer::GetInstance();
        PositionByXuid = Online_MetPlayer::GetPositionByXuid(Instance, v2, result);
        if ( PositionByXuid >= 0 )
        {
          v13 = Online_MetPlayer::GetInstance();
          Online_MetPlayer::GetPlayerInfoForUI(v13, &v36, v2, PositionByXuid);
          Core_strcpy(dest, 0x24ui64, v36.gamertag);
          Core_strcpy(outputString, 0x80ui64, v36.presenceString);
          Core_strcpy(value, 0x80ui64, v36.lastMetInfo);
          UserDetailsForUI = 1;
          presencePlatform = v36.presencePlatform;
        }
        break;
      case 4:
        LODWORD(numFriendsOut) = 0;
        friendsOut = NULL;
        v14 = Online_Friends::GetInstance();
        if ( Online_Friends::Crossplay_GetFriends(v14, v2, &friendsOut, (unsigned int *)&numFriendsOut) )
        {
          v15 = Online_Friends::GetInstance();
          Index = Online_Friends::Crossplay_FindIndex(v15, v2, result);
          if ( Index >= 0 )
          {
            Core_strcpy(dest, 0x24ui64, friendsOut[Index].name);
            if ( v8 )
            {
              Social_FormatSocialPresence(v8, PRESENCE_PLATFORM_NONE, outputString, 0x80ui64);
              presencePlatform = SocialPresence::GetPlatform(v8);
            }
            UserDetailsForUI = 1;
          }
        }
        break;
      case 5:
        v17 = Online_Friends::GetInstance();
        UserIndexFromXuid = Online_Friends::FavoriteFriends_GetUserIndexFromXuid(v17, v2, result);
        if ( UserIndexFromXuid >= 0 )
        {
          XUID::XUID((XUID *)&v36);
          v19 = Online_Friends::GetInstance();
          UserDetailsForUI = Online_Friends::FavoriteFriends_GetUserDetailsForUI(v19, v2, UserIndexFromXuid, (FavoriteFriendDetailsForUI *)&v36);
          if ( UserDetailsForUI )
          {
            Com_TruncatePlayerName(&v36.presenceString[16], dest, 0x24ui64);
            Core_strcpy(outputString, 0x80ui64, &v36.presenceString[52]);
            presencePlatform = v36.lastMetInfo[53];
          }
        }
        break;
      case 2:
        v20 = OnlineClansManager::GetInstance();
        if ( OnlineClansManager::GetActiveClan(v20, v2, (unsigned __int64 *)&friendsOut) )
        {
          v21 = OnlineClansManager::GetInstance();
          ClanById = OnlineClansManager::GetClanById(v21, v2, (const unsigned __int64)friendsOut);
          UserDetailsForUI = OnlineClan::GetMember(ClanById, result, &numFriendsOut);
        }
        break;
      case 1:
        UserDetailsForUI = Party_FindMemberByXUID(&g_partyData, result) != -1;
        break;
    }
  }
  else
  {
    v9 = I_atoi64(v3);
    v10 = Online_Friends::GetInstance();
    UserDetailsForUI = Online_Friends::GetFriendsDetailsForUI(v10, v2, result, v9, outputString, dest, &isSessionPrivateOut);
  }
  m_inputType = 0;
  if ( v8 )
  {
    if ( Social_IsRemotePlayerOnline(v2, result) )
    {
      m_inputType = v8->m_inputType;
      m_clanTag = v8->m_clanTag;
    }
  }
  PlayercardCache_GetPlayercard(result, dest, &profileData);
  if ( m_clanTag )
  {
    v25 = (unsigned __int8 *)&queryFormat.fmt + 3;
    v26 = 0x7FFFFFFFi64;
    v27 = m_clanTag - ((char *)&queryFormat.fmt + 3);
    do
    {
      v28 = v25[v27];
      v29 = v26;
      v24 = *v25++;
      --v26;
      if ( !v29 )
        break;
      if ( v28 != (_BYTE)v24 )
      {
        friendsOut = NULL;
        v39 = 0;
        Com_PlayerUtils_ColorizeClanTag(profileData.clanAbbrev, profileData.clanTagType, (char *)&friendsOut, 0xCui64, 0x37u);
        Com_sprintf<128>((char (*)[128])v42, "[%s]%s", (const char *)&friendsOut, dest);
        goto LABEL_41;
      }
    }
    while ( v28 );
  }
  Com_sprintf<128>((char (*)[128])v42, (const char *)&queryFormat, dest, v24);
LABEL_41:
  v30 = profileData.customization_background[PlayerCardData_GetCacheLocation()];
  j_lua_createtable(luaVM, 0, 8);
  LUI_SetTableString("gamertag", dest, luaVM);
  LUI_SetTableInt("background", v30, luaVM);
  LUI_SetTableString("fullName", v42, luaVM);
  LUI_SetTableString("presence", outputString, luaVM);
  LUI_SetTableInt("presencePlatform", (unsigned __int8)presencePlatform, luaVM);
  LUI_SetTableString("lastMetInfo", value, luaVM);
  LUI_SetTableBool("isValidEntry", UserDetailsForUI, luaVM);
  LUI_SetTableInt("inputType", m_inputType, LUI_luaVM);
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetFriendsData_impl
==============
*/
__int64 LUI_CoD_LuaCall_GetFriendsData_impl(lua_State *const luaVM)
{
  int v2; 
  FriendsPopupTabs v3; 
  Online_Friends *Instance; 
  Online_Friends *v5; 
  int NumOnlineFriends; 
  OnlineUserLists *v7; 
  Online_Friends *v8; 
  OnlinePresenceNotifications *v9; 
  Online_Friends *v10; 
  Online_Friends *v11; 
  Online_Friends *v12; 
  unsigned int v13; 
  int v14; 
  int v15; 
  __int64 v16; 
  int v17; 
  unsigned int v18; 
  int v19; 
  int v20; 
  __int64 v21; 
  unsigned __int64 *v22; 
  int v23; 
  __int64 v24; 
  FavoriteFriend *v25; 
  const XUID *v26; 
  unsigned __int64 platformId; 
  PresencePlatform presencePlatform; 
  FavoriteFriendType *v29; 
  Online_Friends *v30; 
  SocialPresence *v31; 
  Online_MetPlayer *v32; 
  FavoriteFriend *v33; 
  const SocialPresence *Presence; 
  SocialPresence *v35; 
  Online_Friends *v36; 
  Online_InvitationManager *v37; 
  int v38; 
  unsigned __int64 *v41; 
  const char *v42; 
  char *v43; 
  __int64 CacheLocation; 
  int v45; 
  Online_Friends *v46; 
  char *fmt; 
  bool isSessionPrivateOut; 
  bool IsUserJoinable; 
  unsigned int numFriendsOut; 
  XUID xuid; 
  unsigned int v53; 
  int v54; 
  FavoriteFriend *Friends; 
  int v56; 
  int pivot; 
  FavoriteFriendType *v58; 
  UserList *userListOut; 
  DWFriend *friendsOut; 
  unsigned __int64 *v61; 
  __int64 v62; 
  XUID xuidList; 
  char *devErrorString; 
  char *errorString; 
  XUID result; 
  UIPlayerInfo v67; 
  PlayerProfileData profileData; 
  unsigned __int64 userPlatformIds[64]; 
  char outBuffer[8]; 
  int v71; 
  char outTruncatedPlayerName[36]; 
  char v73[64]; 
  char v74[21]; 
  char presenceOut[128]; 
  char v76[128]; 
  char value[128]; 
  char dest[64]; 

  if ( j_lua_gettop(luaVM) != 5 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || !j_lua_isnumber(luaVM, 3) || !j_lua_isnumber(luaVM, 4) || !j_lua_isnumber(luaVM, 5) )
    j_luaL_error(luaVM, "USAGE: Friends.GetFriendsData( <controller>, <friendsType>, <friendFrom>, <friendTo>, <friendsCount> )\n");
  v2 = lui_tointeger32(luaVM, 1);
  v3 = lui_tointeger32(luaVM, 2);
  Friends = NULL;
  numFriendsOut = 0;
  v53 = 0;
  if ( v3 == FRIENDS_POPUP_TAB_ONLINE_FRIENDS )
  {
    Instance = Online_Friends::GetInstance();
    Friends = (FavoriteFriend *)Online_Friends::GetFriends(Instance, v2);
    numFriendsOut = Friends[2].m_xuid.m_id;
    v5 = Online_Friends::GetInstance();
    NumOnlineFriends = Online_Friends::GetNumOnlineFriends(v5, v2);
LABEL_19:
    v53 = NumOnlineFriends;
    goto LABEL_20;
  }
  if ( v3 == FRIENDS_POPUP_TAB_RECENT_PLAYERS )
  {
    userListOut = NULL;
    v7 = OnlineUserLists::GetInstance();
    if ( OnlineUserLists::GetUserList(v7, v2, MOVEMENT, (const UserList **)&userListOut) )
    {
      Friends = (FavoriteFriend *)userListOut;
      numFriendsOut = userListOut->m_numUsers;
    }
    else
    {
      numFriendsOut = 0;
    }
    goto LABEL_20;
  }
  if ( v3 != FRIENDS_POPUP_TAB_CROSSPLAY_FRIENDS )
  {
    if ( v3 != FRIENDS_POPUP_TAB_FAVORITE_FRIENDS )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_functions.cpp", 13594, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown friends type. Make sure the cpp enum list 'FriendsPopupTabs' matches the LUA list in 'Friends.TabIDs'.") )
        __debugbreak();
      return 0i64;
    }
    v10 = Online_Friends::GetInstance();
    Friends = Online_Friends::FavoriteFriends_GetFriendsList(v10, v2);
    v11 = Online_Friends::GetInstance();
    numFriendsOut = Online_Friends::FavoriteFriends_GetLinkedFriendCount(v11, v2);
    v12 = Online_Friends::GetInstance();
    NumOnlineFriends = Online_Friends::FavoriteFriends_GetOnlineFriendCount(v12, v2);
    goto LABEL_19;
  }
  friendsOut = NULL;
  v8 = Online_Friends::GetInstance();
  if ( Online_Friends::Crossplay_GetFriends(v8, v2, &friendsOut, &numFriendsOut) )
  {
    Friends = (FavoriteFriend *)friendsOut;
    v9 = OnlinePresenceNotifications::GetInstance();
    NumOnlineFriends = OnlinePresenceNotifications::GetNumOnlineCrossplayFriends(v9, v2);
    goto LABEL_19;
  }
LABEL_20:
  j_lua_createtable(luaVM, 0, 3);
  v13 = numFriendsOut;
  if ( numFriendsOut )
  {
    v14 = numFriendsOut - 1;
    v15 = lui_tointeger32(luaVM, 3);
    v16 = I_clamp(v15, 0, v14);
    v17 = lui_tointeger32(luaVM, 4);
    v18 = lui_tointeger32(luaVM, 5);
    if ( v18 < numFriendsOut )
    {
      v19 = numFriendsOut - v18;
      if ( (int)(numFriendsOut - v18) > 20 )
        v19 = 20;
      v17 += v19;
    }
    v20 = I_clamp(v17, v16, numFriendsOut - 1);
    v21 = v20;
    v22 = userPlatformIds;
    v23 = v20 - v16;
    pivot = (v20 - (int)v16) / 2;
    v54 = 0;
    v24 = 8i64;
    do
    {
      *v22 = 0i64;
      v22[1] = 0i64;
      v22[2] = 0i64;
      v22 += 8;
      *(v22 - 5) = 0i64;
      *(v22 - 4) = 0i64;
      *(v22 - 3) = 0i64;
      *(v22 - 2) = 0i64;
      *(v22 - 1) = 0i64;
      --v24;
    }
    while ( v24 );
    if ( v23 > 64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_functions.cpp", 13638, ASSERT_TYPE_ASSERT, "((friendTo - friendFrom) <= 64)", (const char *)&queryFormat, "(friendTo - friendFrom) <= MAX_FRIENDS_SESSIONS_TO_FETCH") )
      __debugbreak();
    v56 = 1;
    j_lua_pushstring(luaVM, "friends");
    j_lua_createtable(luaVM, v23 + 1, 0);
    if ( (int)v16 <= (int)v21 )
    {
      v25 = Friends;
      v61 = userPlatformIds;
      v62 = v21 - v16 + 1;
      v58 = &Friends[2102].m_friendType + v16;
      while ( 1 )
      {
        XUID::XUID(&xuid);
        errorString = (char *)&queryFormat.fmt + 3;
        devErrorString = (char *)&queryFormat.fmt + 3;
        Com_sprintf(dest, 0x40ui64, "%i", (unsigned int)v16);
        outTruncatedPlayerName[0] = 0;
        v73[0] = 0;
        presenceOut[0] = 0;
        value[0] = 0;
        v76[0] = 0;
        v26 = XUID::NullXUID(&result);
        XUID::operator=(&xuid, v26);
        platformId = 0i64;
        presencePlatform = PRESENCE_PLATFORM_NONE;
        isSessionPrivateOut = 0;
        if ( v3 )
        {
          if ( v3 == FRIENDS_POPUP_TAB_RECENT_PLAYERS )
          {
            v32 = Online_MetPlayer::GetInstance();
            Online_MetPlayer::GetPlayerInfoForUI(v32, &v67, v2, v16);
            XUID::operator=(&xuid, &v67.xuid);
            Com_TruncatePlayerName(v67.gamertag, outTruncatedPlayerName, 0x24ui64);
            Core_strcpy(v73, 0x40ui64, v67.gamertagWithHash);
            Core_strcpy(presenceOut, 0x80ui64, v67.presenceString);
            Core_strcpy(value, 0x80ui64, v67.lastMetInfo);
            presencePlatform = v67.presencePlatform;
            isSessionPrivateOut = v67.isSessionPrivate;
            xuidList.m_id = xuid.m_id;
            PlayercardCache_UpdateOnlineFriendsCaching_Raw(v2, &xuidList, 1);
            platformId = v67.platformId;
          }
          else if ( v3 == FRIENDS_POPUP_TAB_CROSSPLAY_FRIENDS )
          {
            v33 = &v25[9 * (int)v16];
            XUID::operator=(&xuid, &v33->m_xuid);
            Com_TruncatePlayerName((const char *)&v33->m_friendType, outTruncatedPlayerName, 0x24ui64);
            Core_strcpy(v73, 0x40ui64, (const char *)&v33[4].m_friendType);
            Presence = Social_GetPresence(v2, xuid);
            v35 = (SocialPresence *)Presence;
            if ( Presence )
            {
              Social_FormatSocialPresence(Presence, PRESENCE_PLATFORM_NONE, presenceOut, 0x80ui64);
              presencePlatform = SocialPresence::GetPlatform(v35);
              platformId = SocialPresence::GetPlatformId(v35);
            }
          }
          else
          {
            XUID::XUID((XUID *)&v67);
            v36 = Online_Friends::GetInstance();
            Online_Friends::FavoriteFriends_GetUserDetailsForUI(v36, v2, v16, (FavoriteFriendDetailsForUI *)&v67);
            XUID::operator=(&xuid, (const XUID *)&v67);
            platformId = *(_QWORD *)&v67.presenceString[8];
            presencePlatform = v67.lastMetInfo[53];
            isSessionPrivateOut = v67.lastMetInfo[52];
            Com_TruncatePlayerName(&v67.presenceString[16], outTruncatedPlayerName, 0x24ui64);
            Core_strcpy(presenceOut, 0x80ui64, &v67.presenceString[52]);
          }
        }
        else
        {
          v29 = v58;
          XUID::operator=(&xuid, (const XUID *)&v25[2].m_friendType + *(int *)v58);
          platformId = *((_QWORD *)&v25[602].m_friendType + *(int *)v29);
          v30 = Online_Friends::GetInstance();
          Online_Friends::GetFriendsDetailsForUI(v30, v2, xuid, platformId, presenceOut, outTruncatedPlayerName, &isSessionPrivateOut);
          PlayercardCache_UpdateOnlineFriendsCaching_Explicit(v2, pivot, 40);
          v31 = (SocialPresence *)Social_GetPresence(v2, xuid);
          if ( v31 )
            presencePlatform = SocialPresence::GetPlatform(v31);
        }
        v37 = Online_InvitationManager::GetInstance();
        IsUserJoinable = Online_InvitationManager::IsUserJoinable(v37, v2, xuid, platformId, v3, (const char **)&errorString, (const char **)&devErrorString);
        if ( !XUID::IsNull(&xuid) || platformId )
          break;
        LODWORD(fmt) = v16;
        Com_PrintError(14, "%s: (Type %i) Invalid user at index %i\n", "LUI_CoD_LuaCall_GetFriendsData_impl", (unsigned int)v3, fmt);
LABEL_55:
        ++v58;
        v25 = Friends;
        LODWORD(v16) = v16 + 1;
        if ( !--v62 )
        {
          v45 = v54;
          if ( v54 > 0 )
          {
            v46 = Online_Friends::GetInstance();
            Online_Friends::GetSessionsForUsers(v46, v2, userPlatformIds, v45);
          }
          goto LABEL_58;
        }
      }
      v38 = v56;
      _XMM1 = 0i64;
      __asm { vcvtsi2sd xmm1, xmm1, ebx; n }
      j_lua_pushnumber(luaVM, *(long double *)&_XMM1);
      v56 = v38 + 1;
      j_lua_createtable(luaVM, 0, 13);
      if ( v3 == FRIENDS_POPUP_TAB_ONLINE_FRIENDS )
      {
        v41 = v61;
        ++v54;
        *v61 = platformId;
        v61 = v41 + 1;
      }
      v42 = XUID::ToString(&xuid);
      LUI_SetTableString("xuid", v42, luaVM);
      Com_sprintf<21>((char (*)[21])v74, "%zu", platformId);
      LUI_SetTableString("platformId", v74, luaVM);
      PlayercardCache_GetPlayercard(xuid, outTruncatedPlayerName, &profileData);
      LUI_SetTableString("presence", presenceOut, luaVM);
      LUI_SetTableString("lastMetInfo", value, luaVM);
      if ( !outTruncatedPlayerName[0] )
        Com_sprintf<36>((char (*)[36])outTruncatedPlayerName, (const char *)&queryFormat, profileData.name);
      if ( profileData.clanAbbrev[0] )
      {
        *(_QWORD *)outBuffer = 0i64;
        v71 = 0;
        Com_PlayerUtils_ColorizeClanTag(profileData.clanAbbrev, profileData.clanTagType, outBuffer, 0xCui64, 0x37u);
        Com_sprintf<128>((char (*)[128])v76, "[%s]%s", outBuffer, outTruncatedPlayerName);
        LUI_SetTableString("fullName", v76, luaVM);
        if ( v73[0] )
        {
          memset_0(v76, 0, sizeof(v76));
          Com_sprintf<128>((char (*)[128])v76, "[%s]%s", outBuffer, v73);
          v43 = v76;
LABEL_53:
          LUI_SetTableString("fullNameWithHash", v43, luaVM);
        }
      }
      else
      {
        LUI_SetTableString("fullName", outTruncatedPlayerName, luaVM);
        if ( v73[0] )
        {
          v43 = v73;
          goto LABEL_53;
        }
      }
      CacheLocation = PlayerCardData_GetCacheLocation();
      LUI_SetTableBool("customEmblemEquipped", 0, luaVM);
      LUI_SetTableInt("emblemIndex", profileData.customization_patch[CacheLocation], luaVM);
      LUI_SetTableInt("background", profileData.customization_background[CacheLocation], luaVM);
      LUI_SetTableInt("rank", profileData.prestige_mp + profileData.rank_mp, luaVM);
      LUI_SetTableInt("baseRank", profileData.rank_mp, luaVM);
      LUI_SetTableInt("prestige", profileData.prestige_mp, luaVM);
      LUI_SetTableBool("isPrivate", isSessionPrivateOut, luaVM);
      LUI_SetTableBool("joinable", IsUserJoinable, luaVM);
      LUI_SetTableInt("presencePlatform", (unsigned __int8)presencePlatform, luaVM);
      j_lua_settable(luaVM, -3);
      goto LABEL_55;
    }
LABEL_58:
    j_lua_settable(luaVM, -3);
    v13 = numFriendsOut;
  }
  LUI_SetTableInt("count", v13, luaVM);
  LUI_SetTableInt("onlineCount", v53, luaVM);
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetLayoutData_impl
==============
*/
__int64 LUI_CoD_LuaCall_GetLayoutData_impl(lua_State *const luaVM)
{
  const char *v2; 
  __int64 v3; 
  Online_Store *Instance; 
  bdObjectStoreObject *Object; 
  const char *Content; 
  unsigned int v7; 
  __int64 v8; 
  unsigned int v9; 
  __int64 v10; 
  int v14[2]; 
  __int64 v15; 
  bdJSONDeserializer v16; 
  bdJSONDeserializer v17; 
  bdJSONDeserializer value; 
  bdJSONDeserializer v19; 
  bdObjectStoreErrorWrappedObject response; 

  v15 = -2i64;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isstring(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.GetLayoutData( filename )");
  if ( j_lua_gettop(luaVM) != 1 )
    return 0i64;
  if ( !j_lua_isstring(luaVM, 1) )
    return 0i64;
  v2 = j_lua_tolstring(luaVM, 1, NULL);
  j_lua_settop(luaVM, -2);
  v3 = -1i64;
  do
    ++v3;
  while ( v2[v3] );
  if ( !(_DWORD)v3 )
    return 0i64;
  bdObjectStoreErrorWrappedObject::bdObjectStoreErrorWrappedObject(&response);
  Instance = Online_Store::GetInstance();
  if ( !Online_Store::GetResponseObjectByFileName(Instance, STORE_RESPONSES_LAYOUTS, v2, &response) )
  {
    bdMemory::deallocate(response.m_object.m_metadata.m_tags.m_data);
    response.m_object.m_metadata.m_tags.m_data = NULL;
    *(_QWORD *)&response.m_object.m_metadata.m_tags.m_capacity = 0i64;
    bdObjectStoreACL::~bdObjectStoreACL(&response.m_object.m_metadata.m_acl);
    return 0i64;
  }
  Object = bdObjectStoreErrorWrappedObject::getObject(&response);
  Content = (const char *)bdObjectStoreObject::getContent(Object);
  bdJSONDeserializer::bdJSONDeserializer(&v19);
  bdJSONDeserializer::bdJSONDeserializer(&value);
  bdJSONDeserializer::parse(&v19, Content);
  j_lua_createtable(luaVM, 2, 0);
  if ( bdJSONDeserializer::getArray(&v19, "layout", &value) )
  {
    bdJSONDeserializer::bdJSONDeserializer(&v17);
    v7 = 0;
    v8 = 1i64;
    do
    {
      bdJSONDeserializer::getElementByIndex(&value, v7, &v17);
      j_lua_pushinteger(luaVM, v8);
      j_lua_createtable(luaVM, 0, 3);
      v9 = 0;
      v10 = 1i64;
      do
      {
        bdJSONDeserializer::bdJSONDeserializer(&v16);
        bdJSONDeserializer::getElementByIndex(&v17, v9, &v16);
        bdJSONDeserializer::getInt32(&v16, v14);
        _XMM1 = 0i64;
        __asm { vcvtsi2sd xmm1, xmm1, [rsp+0EB0h+var_E90]; value }
        LUI_SetTableNumber(v10, *(long double *)&_XMM1, luaVM);
        bdJSONDeserializer::~bdJSONDeserializer(&v16);
        ++v9;
        ++v10;
      }
      while ( v9 < 3 );
      j_lua_settable(luaVM, -3);
      ++v7;
      ++v8;
    }
    while ( v7 < 2 );
    bdJSONDeserializer::~bdJSONDeserializer(&v17);
  }
  bdJSONDeserializer::~bdJSONDeserializer(&value);
  bdJSONDeserializer::~bdJSONDeserializer(&v19);
  bdMemory::deallocate(response.m_object.m_metadata.m_tags.m_data);
  response.m_object.m_metadata.m_tags.m_data = NULL;
  *(_QWORD *)&response.m_object.m_metadata.m_tags.m_capacity = 0i64;
  bdObjectStoreACL::~bdObjectStoreACL(&response.m_object.m_metadata.m_acl);
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetLivePartyFriendAlienPrestige_impl
==============
*/
__int64 LUI_CoD_LuaCall_GetLivePartyFriendAlienPrestige_impl(lua_State *const luaVM)
{
  PlayerProfileData playerCardData; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Friends.GetLivePartyFriendAlienPrestige( <controller>, <friendIndex> )\n");
  GetLivePartyFriendPlayerCard(luaVM, &playerCardData);
  j_lua_pushinteger(luaVM, playerCardData.prestige_alien);
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetLivePartyFriendAlienRank_impl
==============
*/
__int64 LUI_CoD_LuaCall_GetLivePartyFriendAlienRank_impl(lua_State *const luaVM)
{
  PlayerProfileData playerCardData; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Friends.GetLivePartyFriendAlienRank( <controller>, <friendIndex> )\n");
  GetLivePartyFriendPlayerCard(luaVM, &playerCardData);
  j_lua_pushinteger(luaVM, playerCardData.rank_alien);
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetLivePartyFriendBackground_impl
==============
*/
__int64 LUI_CoD_LuaCall_GetLivePartyFriendBackground_impl(lua_State *const luaVM)
{
  __int64 CacheLocation; 
  PlayerProfileData playerCardData; 

  CacheLocation = PlayerCardData_GetCacheLocation();
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Friends.GetLivePartyFriendBackground( <controller>, <friendIndex> )\n");
  GetLivePartyFriendPlayerCard(luaVM, &playerCardData);
  j_lua_pushinteger(luaVM, playerCardData.customization_background[CacheLocation]);
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetLivePartyFriendClanTag_impl
==============
*/
__int64 LUI_CoD_LuaCall_GetLivePartyFriendClanTag_impl(lua_State *const luaVM)
{
  PlayerProfileData playerCardData; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Friends.GetLivePartyFriendClanTag( <controller>, <friendIndex> )\n");
  GetLivePartyFriendPlayerCard(luaVM, &playerCardData);
  j_lua_pushstring(luaVM, playerCardData.clanAbbrev);
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetLivePartyFriendPatch_impl
==============
*/
__int64 LUI_CoD_LuaCall_GetLivePartyFriendPatch_impl(lua_State *const luaVM)
{
  __int64 CacheLocation; 
  PlayerProfileData playerCardData; 

  CacheLocation = PlayerCardData_GetCacheLocation();
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Friends.GetLivePartyFriendPatch( <controller>, <friendIndex> )\n");
  GetLivePartyFriendPlayerCard(luaVM, &playerCardData);
  j_lua_pushinteger(luaVM, playerCardData.customization_patch[CacheLocation]);
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetLivePartyFriendPrestige_impl
==============
*/
__int64 LUI_CoD_LuaCall_GetLivePartyFriendPrestige_impl(lua_State *const luaVM)
{
  PlayerProfileData playerCardData; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Friends.GetLivePartyFriendPrestige( <controller>, <friendIndex> )\n");
  GetLivePartyFriendPlayerCard(luaVM, &playerCardData);
  j_lua_pushinteger(luaVM, playerCardData.prestige_mp);
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetLivePartyFriendRank_impl
==============
*/
__int64 LUI_CoD_LuaCall_GetLivePartyFriendRank_impl(lua_State *const luaVM)
{
  PlayerProfileData playerCardData; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Friends.GetLivePartyFriendRank( <controller>, <friendIndex> )\n");
  GetLivePartyFriendPlayerCard(luaVM, &playerCardData);
  j_lua_pushinteger(luaVM, playerCardData.prestige_mp + playerCardData.rank_mp);
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetLoadoutDraftTeams_impl
==============
*/
__int64 LUI_CoD_LuaCall_GetLoadoutDraftTeams_impl(lua_State *const luaVM)
{
  int v2; 
  PartyData *ActiveParty; 
  bool v4; 
  __int64 v5; 
  XUID *v6; 
  __int64 v7; 
  XUID *v8; 
  int v9; 
  int v10; 
  int v11; 
  signed int v12; 
  PartyData *v13; 
  XUID *p_playerUID; 
  int IsMemberLocalPlayer; 
  int m_id; 
  bool v17; 
  int v18; 
  int v19; 
  lua_State *v20; 
  int v21; 
  int i; 
  const char *v23; 
  const char *v24; 
  const char *v25; 
  const char *v26; 
  const char *v27; 
  PartyData *party; 
  LocalClientNum_t outLocalClientNum; 
  lua_State *L; 
  XUID v32; 
  __int64 v33; 
  __int64 v34; 
  __int64 v35; 
  XUID v36; 
  __int64 v37; 
  __int64 v38; 
  __int64 v39; 

  L = luaVM;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.GetLoadoutDraftTeams( <controller> )");
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    return 0i64;
  v2 = lui_tointeger32(luaVM, 1);
  if ( !CL_Mgr_IsControllerMappedToClient(v2, &outLocalClientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_functions.cpp", 12227, ASSERT_TYPE_ASSERT, "(CL_Mgr_IsControllerMappedToClient( controllerIndex, &localClientNum ))", (const char *)&queryFormat, "CL_Mgr_IsControllerMappedToClient( controllerIndex, &localClientNum )") )
    __debugbreak();
  ActiveParty = Party_GetActiveParty();
  party = ActiveParty;
  v4 = ActiveParty && ActiveParty->inParty != 0;
  v5 = 4i64;
  v6 = &v32;
  v7 = 4i64;
  do
  {
    XUID::XUID(v6++);
    --v7;
  }
  while ( v7 );
  v8 = &v36;
  do
  {
    XUID::XUID(v8++);
    --v5;
  }
  while ( v5 );
  v32.m_id = 0i64;
  v9 = 0;
  v33 = 0i64;
  v10 = 0;
  v34 = 0i64;
  v11 = 0;
  v35 = 0i64;
  v36.m_id = 0i64;
  v37 = 0i64;
  v38 = 0i64;
  v39 = 0i64;
  if ( !v4 || CL_IsLocalClientConnectedToGameServer(outLocalClientNum) )
    return 0i64;
  v12 = 0;
  v13 = party;
  p_playerUID = &party->partyMembers[0].playerUID;
  do
  {
    if ( Party_IsMemberUIVisible(v13, v12) )
    {
      IsMemberLocalPlayer = Party_IsMemberLocalPlayer(v13, v12);
      m_id = p_playerUID[-2].m_id;
      v17 = IsMemberLocalPlayer != 0;
      if ( IsMemberLocalPlayer )
        v11 = p_playerUID[-2].m_id;
      if ( m_id == 2 )
      {
        if ( v9 < 4 )
          XUID::operator=(&v32 + v9, p_playerUID);
        if ( v17 && v9 > 0 )
        {
          party = (PartyData *)v32.m_id;
          XUID::operator=(&v32, p_playerUID);
          v18 = 3;
          if ( v9 < 3 )
            v18 = v9;
          XUID::operator=(&v32 + v18, (const XUID *)&party);
        }
        ++v9;
      }
      else if ( m_id == 1 )
      {
        if ( v10 < 4 )
          XUID::operator=(&v36 + v10, p_playerUID);
        if ( v17 && v10 > 0 )
        {
          party = (PartyData *)v36.m_id;
          XUID::operator=(&v36, p_playerUID);
          v19 = 3;
          if ( v10 < 3 )
            v19 = v10;
          XUID::operator=(&v36 + v19, (const XUID *)&party);
        }
        ++v10;
      }
    }
    ++v12;
    p_playerUID += 63;
  }
  while ( v12 < 200 );
  v20 = L;
  j_lua_createtable(L, 0, 0);
  j_lua_createtable(v20, 0, 0);
  v21 = 0;
  for ( i = 0; i < v9; ++i )
  {
    if ( i >= 4 )
      break;
    if ( (unsigned int)(v11 - 1) <= 1 || (unsigned int)(v11 - 201) <= 1 )
    {
      v23 = XUID::ToString(&v32 + i);
      LUI_SetTableString(i + 1, v23, v20);
    }
  }
  v24 = "TeamB";
  v25 = "TeamA";
  if ( v11 == 2 )
  {
    v26 = "TeamA";
  }
  else
  {
    v26 = "TeamB";
    if ( v11 != 1 )
      v26 = "TeamA";
  }
  j_lua_setfield(v20, -2, v26);
  j_lua_createtable(v20, 0, 0);
  if ( v10 > 0 )
  {
    do
    {
      if ( v21 >= 4 )
        break;
      if ( (unsigned int)(v11 - 1) <= 1 || (unsigned int)(v11 - 201) <= 1 )
      {
        v27 = XUID::ToString(&v36 + v21);
        LUI_SetTableString(v21 + 1, v27, v20);
      }
      ++v21;
    }
    while ( v21 < v10 );
  }
  if ( v11 != 2 )
  {
    if ( v11 != 1 )
      v25 = "TeamB";
    v24 = v25;
  }
  j_lua_setfield(v20, -2, v24);
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetMatchRulesMetaData_impl
==============
*/
__int64 LUI_CoD_LuaCall_GetMatchRulesMetaData_impl(lua_State *const luaVM)
{
  MatchRulesSaveLocation v2; 
  int v3; 
  int v4; 
  GameStateInfo *v5; 
  int ControllerFromClient; 
  struct tm *v8; 
  const char *v9; 
  int intResult; 
  __time64_t Time; 
  ConversionArguments arguments; 
  char dest[16]; 
  char v14[16]; 
  char v15[48]; 
  char outputString[1024]; 

  if ( j_lua_gettop(luaVM) != 3 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || !j_lua_isnumber(luaVM, 3) )
    j_luaL_error(luaVM, "USAGE: MatchRules.GetMatchRulesMetaData( <saveLocation>, <slotIndex>, <headerLookupValue> )");
  if ( j_lua_gettop(luaVM) != 3 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || !j_lua_isnumber(luaVM, 3) )
    return 0i64;
  v2 = lui_tointeger32(luaVM, 1);
  v3 = lui_tointeger32(luaVM, 2);
  v4 = lui_tointeger32(luaVM, 3);
  v5 = GameStateInfo_Get();
  if ( !v5->matchRules && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_functions.cpp", 16697, ASSERT_TYPE_ASSERT, "(gInfo->matchRules)", (const char *)&queryFormat, "gInfo->matchRules") )
    __debugbreak();
  ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
  if ( !BG_MatchRulesHistory_ReadMetadataFromDisk(v5->matchRules, ControllerFromClient, v2, v3, (MatchRulesSaveHeaderLookup)v4, &intResult, outputString, 1024) )
    return 0i64;
  if ( v4 )
  {
    if ( v4 <= 0 )
    {
LABEL_19:
      Com_PrintError(13, "Failure to get meta data in MatchRules.GetMatchRulesMetaData\n");
      j_lua_pushnil(luaVM);
      return 1i64;
    }
    if ( v4 > 4 )
    {
      if ( v4 <= 6 )
      {
        j_lua_pushinteger(luaVM, intResult);
        return 1i64;
      }
      goto LABEL_19;
    }
  }
  else
  {
    Time = (unsigned int)atoi(outputString);
    v8 = _localtime64(&Time);
    v9 = UI_SafeTranslateString("LUA_MENU/DATE");
    if ( v9 )
    {
      memset_0(&arguments, 0, sizeof(arguments));
      arguments.argCount = 3;
      Com_sprintf(dest, 0x10ui64, "%d", (unsigned int)(v8->tm_mon + 1));
      arguments.args[0] = dest;
      Com_sprintf(v14, 0x10ui64, "%d", (unsigned int)v8->tm_mday);
      arguments.args[1] = v14;
      Com_sprintf(v15, 0x10ui64, "%d", (unsigned int)(v8->tm_year + 1900));
      arguments.args[2] = v15;
      UI_ReplaceConversions(v9, &arguments, outputString, 0x400ui64);
    }
    else
    {
      outputString[0] = 0;
    }
  }
  j_lua_pushstring(luaVM, outputString);
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetMixedFriendsData_impl
==============
*/
__int64 LUI_CoD_LuaCall_GetMixedFriendsData_impl(lua_State *const luaVM)
{
  lua_State *v1; 
  int v2; 
  FriendCommonInfo *v3; 
  __int64 v4; 
  unsigned int m_id; 
  unsigned int v6; 
  Online_Friends *Instance; 
  unsigned int v8; 
  int v9; 
  DWFriend *v10; 
  const SocialPresence *Presence; 
  unsigned __int8 m_context; 
  unsigned __int64 v13; 
  Online_Friends *v14; 
  __int64 v15; 
  Online_Friends *v16; 
  FriendListGlobal *Friends; 
  Online_Friends *v18; 
  unsigned int v19; 
  int v20; 
  __int64 v21; 
  unsigned __int64 *v22; 
  unsigned __int64 v23; 
  const dvar_t *v24; 
  bool IsFriendOnlineInTitle; 
  Online_Friends *v26; 
  const SocialPresence *v27; 
  unsigned __int8 v28; 
  unsigned __int64 v29; 
  __int64 v30; 
  __int64 v31; 
  unsigned __int64 v32; 
  Online_Friends *v33; 
  __int64 v34; 
  unsigned int v35; 
  signed int v36; 
  int v37; 
  int v38; 
  unsigned int v39; 
  int v40; 
  int v41; 
  XUID *v42; 
  __int64 v43; 
  unsigned int v44; 
  unsigned __int64 *v45; 
  __int64 v46; 
  __int64 v47; 
  int v48; 
  unsigned __int64 PlatformId; 
  __int64 friendsType; 
  FriendCommonInfo *v51; 
  Online_Friends *v52; 
  SocialPresence *v53; 
  __int64 v54; 
  const SocialPresence *v55; 
  SocialPresence *v56; 
  Online_InvitationManager *v57; 
  int v60; 
  unsigned __int64 *v61; 
  const char *v62; 
  char *v63; 
  __int64 CacheLocation; 
  int v65; 
  Online_Friends *v66; 
  char *fmt; 
  char *gamertagOut; 
  bool *isSessionPrivateOut; 
  bool v71; 
  PresencePlatform Platform; 
  bool v73; 
  bool IsUserJoinable; 
  unsigned int numFriendsOut; 
  int controllerIndex; 
  __int64 v77; 
  unsigned int v78; 
  unsigned int v79; 
  int userCount[2]; 
  FriendListGlobal *v81; 
  XUID userId; 
  __int64 v83; 
  DWFriend *friendsOut; 
  unsigned __int64 *v85; 
  char *devErrorString; 
  char *errorString; 
  __int64 v88; 
  PlayerProfileData profileData; 
  XUID xuidList[42]; 
  unsigned __int64 userPlatformIds[500]; 
  FriendCommonInfo Base[1700]; 
  char outBuffer[8]; 
  int v94; 
  char name[48]; 
  char value[64]; 
  char v97[21]; 
  char presenceOut[128]; 
  char v99[128]; 
  char dest[64]; 

  v1 = luaVM;
  *(_QWORD *)userCount = luaVM;
  if ( j_lua_gettop(luaVM) != 5 || !j_lua_isnumber(v1, 1) || !j_lua_isnumber(v1, 2) || !j_lua_isnumber(v1, 3) || j_lua_type(v1, 4) != 1 || j_lua_type(v1, 5) != 1 )
    j_luaL_error(v1, "USAGE: Friends.GetMixedFriendsData( <controllerIndex>, <friendFrom>, <friendTo>, <NeedFriendList>, <showOfflineFriends> )\n");
  controllerIndex = lui_tointeger32(v1, 1);
  v2 = controllerIndex;
  v3 = Base;
  v4 = 1700i64;
  v71 = j_lua_toboolean(v1, 5) != 0;
  do
  {
    FriendCommonInfo::FriendCommonInfo(v3++);
    --v4;
  }
  while ( v4 );
  LODWORD(userId.m_id) = 0;
  v77 = 0i64;
  m_id = 0;
  v78 = 0;
  v6 = 0;
  numFriendsOut = 0;
  memset_0(Base, 0, sizeof(Base));
  friendsOut = NULL;
  Instance = Online_Friends::GetInstance();
  if ( Online_Friends::Crossplay_GetFriends(Instance, controllerIndex, &friendsOut, &numFriendsOut) )
  {
    v8 = 0;
    if ( numFriendsOut )
    {
      v9 = v2;
      while ( 1 )
      {
        if ( v8 >= 0x1F4 )
        {
          LODWORD(isSessionPrivateOut) = 500;
          LODWORD(gamertagOut) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_functions.cpp", 13058, ASSERT_TYPE_ASSERT, "(unsigned)( friendIndex ) < (unsigned)( ( 500 ) )", "friendIndex doesn't index MAX_FRIENDS_CROSSPLAY\n\t%i not in [0, %i)", gamertagOut, isSessionPrivateOut) )
            __debugbreak();
        }
        v10 = &friendsOut[v8];
        Presence = Social_GetPresence(v9, v10->xuid);
        if ( !Presence )
          goto LABEL_30;
        if ( m_id >= 0x6A4 )
        {
          LODWORD(isSessionPrivateOut) = 1700;
          LODWORD(gamertagOut) = m_id;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_functions.cpp", 13064, ASSERT_TYPE_ASSERT, "(unsigned)( mixedFriendsListIter ) < (unsigned)( ( sizeof( *array_counter( mixedFriendList ) ) + 0 ) )", "mixedFriendsListIter doesn't index mixedFriendList\n\t%i not in [0, %i)", gamertagOut, isSessionPrivateOut) )
            __debugbreak();
        }
        m_context = Presence->m_context;
        LODWORD(v77) = v77 + 1;
        v13 = (unsigned __int64)m_id << 7;
        *(&Base[0].presence + v13) = m_context;
        if ( Presence->m_context > 0 )
          break;
        if ( v71 )
          goto LABEL_23;
LABEL_30:
        if ( ++v8 >= numFriendsOut )
        {
          v1 = *(lua_State **)userCount;
          LODWORD(v4) = 0;
          v2 = controllerIndex;
          LODWORD(userId.m_id) = m_id;
          goto LABEL_32;
        }
      }
      ++v78;
LABEL_23:
      v14 = Online_Friends::GetInstance();
      Online_Friends::CrossPlay_UpdateIfCrossplayFriendAtIndexIsAlsoPlatformFriend(v14, v9, v8);
      if ( m_id >= 0x6A4 )
      {
        LODWORD(isSessionPrivateOut) = 1700;
        LODWORD(gamertagOut) = m_id;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_functions.cpp", 13084, ASSERT_TYPE_ASSERT, "(unsigned)( mixedFriendsListIter ) < (unsigned)( ( sizeof( *array_counter( mixedFriendList ) ) + 0 ) )", "mixedFriendsListIter doesn't index mixedFriendList\n\t%i not in [0, %i)", gamertagOut, isSessionPrivateOut) )
          __debugbreak();
      }
      Base[(unsigned __int64)m_id].friendsType = FRIENDS_POPUP_TAB_CROSSPLAY_FRIENDS;
      Base[(unsigned __int64)m_id].isAtviFriend = 1;
      XUID::operator=((XUID *)((char *)&Base[0].xuid + v13), &v10->xuid);
      Com_TruncatePlayerName(v10->name, &Base[0].name[v13], 0x24ui64);
      Core_strcpy(&Base[0].nameWithHash[v13], 0x40ui64, v10->nameWithHash);
      if ( v10->isPlatformFriend && v6 < 0x1F4 )
      {
        v15 = v6++;
        userPlatformIds[v15] = (unsigned __int64)Base + v13;
      }
      ++m_id;
      goto LABEL_30;
    }
  }
LABEL_32:
  v16 = Online_Friends::GetInstance();
  Friends = Online_Friends::GetFriends(v16, v2);
  v81 = Friends;
  numFriendsOut = Friends->count;
  v18 = Online_Friends::GetInstance();
  Online_Friends::GetNumOnlineFriends(v18, v2);
  v19 = 0;
  if ( numFriendsOut )
  {
    v20 = controllerIndex;
    while ( 1 )
    {
      if ( v19 >= 0x4B0 )
      {
        LODWORD(isSessionPrivateOut) = 1200;
        LODWORD(gamertagOut) = v19;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_functions.cpp", 13113, ASSERT_TYPE_ASSERT, "(unsigned)( friendIndex ) < (unsigned)( ( sizeof( *array_counter( friendListGlobal->sortedFriends ) ) + 0 ) )", "friendIndex doesn't index friendListGlobal->sortedFriends\n\t%i not in [0, %i)", gamertagOut, isSessionPrivateOut) )
          __debugbreak();
      }
      v21 = Friends->sortedFriends[v19];
      v79 = v21;
      if ( (unsigned int)v21 >= 0x4B0 )
      {
        LODWORD(isSessionPrivateOut) = 1200;
        LODWORD(gamertagOut) = v21;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_functions.cpp", 13116, ASSERT_TYPE_ASSERT, "(unsigned)( sortedFriendIndex ) < (unsigned)( ( sizeof( *array_counter( friendListGlobal->friends ) ) + 0 ) )", "sortedFriendIndex doesn't index friendListGlobal->friends\n\t%i not in [0, %i)", gamertagOut, isSessionPrivateOut) )
          __debugbreak();
      }
      userId.m_id = Friends->friends[v21].m_id;
      v83 = v21;
      if ( m_id >= 0x6A4 )
      {
        LODWORD(isSessionPrivateOut) = 1700;
        LODWORD(gamertagOut) = m_id;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_functions.cpp", 13119, ASSERT_TYPE_ASSERT, "(unsigned)( mixedFriendsListIter ) < (unsigned)( ( sizeof( *array_counter( mixedFriendList ) ) + 0 ) )", "mixedFriendsListIter doesn't index mixedFriendList\n\t%i not in [0, %i)", gamertagOut, isSessionPrivateOut) )
          __debugbreak();
      }
      if ( v6 )
      {
        v22 = userPlatformIds;
        while ( 1 )
        {
          v23 = XUID::ToUint64(&userId);
          if ( XUID::ToUint64((XUID *)*v22) == v23 )
            break;
          LODWORD(v4) = v4 + 1;
          ++v22;
          if ( (unsigned int)v4 >= v6 )
          {
            LODWORD(v21) = v79;
            goto LABEL_48;
          }
        }
        Friends = v81;
        v30 = v83;
        v31 = (unsigned int)v4;
        LODWORD(v4) = 0;
        v32 = userPlatformIds[v31];
        *(_DWORD *)(v32 + 108) = 0;
        *(_QWORD *)(v32 + 112) = Friends->friendPlatformIds[v30];
        goto LABEL_62;
      }
LABEL_48:
      v24 = DVARBOOL_online_friends_should_show_online_only_if_platform_presence_valid;
      IsFriendOnlineInTitle = 1;
      if ( !DVARBOOL_online_friends_should_show_online_only_if_platform_presence_valid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_friends_should_show_online_only_if_platform_presence_valid") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v24);
      if ( v24->current.enabled )
      {
        v26 = Online_Friends::GetInstance();
        IsFriendOnlineInTitle = Online_Friends::IsFriendOnlineInTitle(v26, v20, v19);
      }
      v27 = Social_GetPresence(v20, userId);
      if ( v27 )
      {
        v28 = v27->m_context;
        LODWORD(v77) = v77 + 1;
        Base[(unsigned __int64)m_id].presence = v28;
      }
      v29 = (unsigned __int64)m_id << 7;
      if ( *(&Base[0].presence + v29) && IsFriendOnlineInTitle )
      {
        ++HIDWORD(v77);
      }
      else if ( !v71 )
      {
        Friends = v81;
        LODWORD(v4) = 0;
        goto LABEL_62;
      }
      v33 = Online_Friends::GetInstance();
      Online_Friends::GetGamertag(v33, v20, v21, &Base[0].name[v29], 0x24ui64);
      XUID::operator=((XUID *)((char *)&Base[0].xuid + v29), &userId);
      v34 = (__int64)v81;
      LODWORD(v4) = 0;
      ++m_id;
      *(unsigned __int64 *)((char *)&Base[0].platformId + v29) = v81->friendPlatformIds[(int)v21];
      *(_DWORD *)&Base[0].nameWithHash[v29 + 64] = 0;
      Friends = (FriendListGlobal *)v34;
LABEL_62:
      if ( ++v19 >= numFriendsOut )
      {
        v1 = *(lua_State **)userCount;
        LODWORD(userId.m_id) = m_id;
        break;
      }
    }
  }
  v35 = HIDWORD(v77) + v78;
  v79 = HIDWORD(v77) + v78;
  j_lua_createtable(v1, 0, 3);
  if ( j_lua_toboolean(v1, 4) && m_id )
  {
    if ( m_id > 0x6A4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_functions.cpp", 13183, ASSERT_TYPE_ASSERT, "( mixedFriendsListCount ) <= ( ( sizeof( *array_counter( mixedFriendList ) ) + 0 ) )", "%s <= %s\n\t%u, %u", "mixedFriendsListCount", "ARRAY_COUNT( mixedFriendList )", m_id, 1700) )
      __debugbreak();
    qsort(Base, m_id, 0x80ui64, (_CoreCrtNonSecureSearchSortCompareFunction)CompareFriend);
    v36 = m_id - 1;
    v37 = lui_tointeger32(v1, 2);
    if ( (int)(m_id - 1) < 0 )
    {
      LODWORD(isSessionPrivateOut) = m_id - 1;
      LODWORD(gamertagOut) = 0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 799, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%i, %i", gamertagOut, isSessionPrivateOut) )
        __debugbreak();
    }
    if ( v36 < v37 )
      v37 = m_id - 1;
    if ( v37 < 0 )
      v37 = 0;
    v38 = lui_tointeger32(v1, 3);
    v39 = lui_tointeger32(v1, 4);
    if ( v39 < m_id )
    {
      v40 = m_id - v39;
      if ( (int)(m_id - v39) > 20 )
        v40 = 20;
      v38 += v40;
    }
    if ( v37 > v36 )
    {
      LODWORD(isSessionPrivateOut) = m_id - 1;
      LODWORD(gamertagOut) = v37;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 799, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%i, %i", gamertagOut, isSessionPrivateOut) )
        __debugbreak();
    }
    if ( (int)m_id <= v38 )
      v38 = m_id - 1;
    if ( v37 > v38 )
      v38 = v37;
    if ( v38 - v37 > 40 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_functions.cpp", 13205, ASSERT_TYPE_ASSERT, "(friendTo - friendFrom <= 40)", (const char *)&queryFormat, "friendTo - friendFrom <= SOCIAL_MENU_CACHED_FRIENDS") )
        __debugbreak();
      v41 = v37 + (v38 - v37) / 2;
      v37 = v41 - 20;
      v38 = v41 + 20;
    }
    v42 = xuidList;
    v43 = 41i64;
    do
    {
      XUID::XUID(v42++);
      --v43;
    }
    while ( v43 );
    v44 = 0;
    if ( v37 <= v38 )
    {
      do
      {
        if ( v44 >= 0x29 )
          break;
        XUID::operator=(&xuidList[v44], &Base[(__int64)(int)(v44 + v37)].xuid);
        ++v44;
      }
      while ( (int)(v44 + v37) <= v38 );
    }
    PlayercardCache_UpdateOnlineFriendsCaching_Raw(controllerIndex, xuidList, v44);
    v45 = userPlatformIds;
    userCount[0] = 0;
    v46 = 8i64;
    do
    {
      *v45 = 0i64;
      v45[1] = 0i64;
      v45[2] = 0i64;
      v45 += 8;
      *(v45 - 5) = 0i64;
      *(v45 - 4) = 0i64;
      *(v45 - 3) = 0i64;
      *(v45 - 2) = 0i64;
      *(v45 - 1) = 0i64;
      --v46;
    }
    while ( v46 );
    if ( v38 - v37 > 64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_functions.cpp", 13239, ASSERT_TYPE_ASSERT, "(( friendTo - friendFrom ) <= 64)", (const char *)&queryFormat, "( friendTo - friendFrom ) <= MAX_FRIENDS_SESSIONS_TO_FETCH") )
      __debugbreak();
    LODWORD(v81) = 1;
    j_lua_pushstring(v1, "friends");
    j_lua_createtable(v1, v38 - v37 + 1, 0);
    v47 = v37;
    v83 = v37;
    v88 = v38;
    if ( v37 <= (__int64)v38 )
    {
      v48 = controllerIndex;
      v85 = userPlatformIds;
      do
      {
        errorString = (char *)&queryFormat.fmt + 3;
        devErrorString = (char *)&queryFormat.fmt + 3;
        Com_sprintf(dest, 0x40ui64, "%i", (unsigned int)v37);
        name[0] = 0;
        value[0] = 0;
        PlatformId = 0i64;
        presenceOut[0] = 0;
        v99[0] = 0;
        v73 = 0;
        Platform = PRESENCE_PLATFORM_NONE;
        if ( (unsigned int)v37 >= 0x6A4 )
        {
          LODWORD(isSessionPrivateOut) = 1700;
          LODWORD(gamertagOut) = v37;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_functions.cpp", 13287, ASSERT_TYPE_ASSERT, "(unsigned)( mixedFriendIndex ) < (unsigned)( ( sizeof( *array_counter( mixedFriendList ) ) + 0 ) )", "mixedFriendIndex doesn't index mixedFriendList\n\t%i not in [0, %i)", gamertagOut, isSessionPrivateOut) )
            __debugbreak();
        }
        friendsType = Base[v47].friendsType;
        v51 = &Base[v47];
        if ( (_DWORD)friendsType )
        {
          v54 = 1i64;
          if ( (_DWORD)friendsType == 4 )
          {
            Core_strcpy(name, 0x24ui64, v51->name);
            Core_strcpy(value, 0x40ui64, v51->nameWithHash);
            v55 = Social_GetPresence(v48, v51->xuid);
            v56 = (SocialPresence *)v55;
            if ( v55 )
            {
              Social_FormatSocialPresence(v55, PRESENCE_PLATFORM_NONE, presenceOut, 0x80ui64);
              Platform = SocialPresence::GetPlatform(v56);
              PlatformId = SocialPresence::GetPlatformId(v56);
            }
            v54 = 1i64;
          }
        }
        else
        {
          PlatformId = v51->platformId;
          v52 = Online_Friends::GetInstance();
          Online_Friends::GetFriendsDetailsForUI(v52, v48, v51->xuid, PlatformId, presenceOut, name, &v73);
          v53 = (SocialPresence *)Social_GetPresence(v48, v51->xuid);
          if ( v53 )
            Platform = SocialPresence::GetPlatform(v53);
          if ( v51->isAtviFriend )
            Core_strcpy(value, 0x40ui64, v51->nameWithHash);
          v54 = 2i64;
        }
        v57 = Online_InvitationManager::GetInstance();
        IsUserJoinable = Online_InvitationManager::IsUserJoinable(v57, v48, v51->xuid, PlatformId, (FriendsPopupTabs)friendsType, (const char **)&errorString, (const char **)&devErrorString);
        if ( !XUID::IsNull(&v51->xuid) || PlatformId )
        {
          _XMM1 = 0i64;
          __asm { vcvtsi2sd xmm1, xmm1, dword ptr [rsp+41680h+var_41608]; n }
          j_lua_pushnumber(v1, *(long double *)&_XMM1);
          LODWORD(v81) = (_DWORD)v81 + 1;
          j_lua_createtable(v1, 0, 16);
          if ( !(_DWORD)friendsType )
          {
            v60 = userCount[0];
            if ( userCount[0] >= 0x40u )
            {
              LODWORD(isSessionPrivateOut) = 64;
              LODWORD(gamertagOut) = userCount[0];
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_functions.cpp", 13368, ASSERT_TYPE_ASSERT, "(unsigned)( platformIdsToFetchSessionsCounter ) < (unsigned)( ( sizeof( *array_counter( platformIdsToFetchSessions ) ) + 0 ) )", "platformIdsToFetchSessionsCounter doesn't index platformIdsToFetchSessions\n\t%i not in [0, %i)", gamertagOut, isSessionPrivateOut) )
                __debugbreak();
              v60 = userCount[0];
            }
            v61 = v85;
            userCount[0] = v60 + 1;
            *v85 = PlatformId;
            v85 = v61 + 1;
          }
          v62 = XUID::ToString(&v51->xuid);
          LUI_SetTableString("xuid", v62, v1);
          Com_sprintf<21>((char (*)[21])v97, "%zu", PlatformId);
          LUI_SetTableString("platformId", v97, v1);
          PlayercardCache_GetPlayercard(v51->xuid, name, &profileData);
          LUI_SetTableString("presence", presenceOut, v1);
          LUI_SetTableBool("isOnline", v51->presence != 0, v1);
          if ( profileData.clanAbbrev[0] )
          {
            *(_QWORD *)outBuffer = 0i64;
            v94 = 0;
            Com_PlayerUtils_ColorizeClanTag(profileData.clanAbbrev, profileData.clanTagType, outBuffer, 0xCui64, 0x37u);
            Com_sprintf<128>((char (*)[128])v99, "[%s]%s", outBuffer, name);
            v63 = v99;
          }
          else
          {
            v63 = name;
          }
          LUI_SetTableString("fullName", v63, v1);
          if ( value[0] )
            LUI_SetTableString("fullNameWithHash", value, v1);
          CacheLocation = PlayerCardData_GetCacheLocation();
          LUI_SetTableBool("customEmblemEquipped", 0, v1);
          LUI_SetTableInt("emblemIndex", profileData.customization_patch[CacheLocation], v1);
          LUI_SetTableInt("background", profileData.customization_background[CacheLocation], v1);
          LUI_SetTableInt("rank", profileData.prestige_mp + profileData.rank_mp, v1);
          LUI_SetTableInt("baseRank", profileData.rank_mp, v1);
          LUI_SetTableInt("prestige", profileData.prestige_mp, v1);
          LUI_SetTableBool("isPrivate", v73, v1);
          LUI_SetTableBool("joinable", IsUserJoinable, v1);
          LUI_SetTableInt("presencePlatform", (unsigned __int8)Platform, v1);
          LUI_SetTableInt("friendsListType", v54, v1);
          LUI_SetTableInt("friendsType", friendsType, v1);
          LUI_SetTableBool("isAtviFriend", v51->isAtviFriend, v1);
          j_lua_settable(v1, -3);
        }
        else
        {
          LODWORD(fmt) = v37;
          Com_PrintError(14, "%s: (Type %i) Invalid user at index %i\n", "LUI_CoD_LuaCall_GetMixedFriendsData_impl", (unsigned int)friendsType, fmt);
        }
        v47 = v83 + 1;
        ++v37;
        v83 = v47;
      }
      while ( v47 <= v88 );
      v65 = userCount[0];
      m_id = userId.m_id;
      if ( userCount[0] > 0 )
      {
        v66 = Online_Friends::GetInstance();
        Online_Friends::GetSessionsForUsers(v66, controllerIndex, userPlatformIds, v65);
      }
      v35 = v79;
    }
    j_lua_settable(v1, -3);
  }
  LUI_SetTableInt("count", m_id, v1);
  LUI_SetTableInt("onlineCount", v35, v1);
  LUI_SetTableInt("totalCount", (unsigned int)v77, v1);
  LUI_SetTableInt("onlinePlatformFriendCount", HIDWORD(v77), v1);
  LUI_SetTableInt("onlineAtviFriendCount", v78, v1);
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetOnlineFriendAlienPrestige_impl
==============
*/
__int64 LUI_CoD_LuaCall_GetOnlineFriendAlienPrestige_impl(lua_State *const luaVM)
{
  PlayerProfileData profileData; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Friends.GetOnlineFriendAlienPrestige( <controller>, <friendIndex> )\n");
  GetOnlineFriendPlayerCard(luaVM, &profileData);
  j_lua_pushinteger(luaVM, profileData.prestige_alien);
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetOnlineFriendAlienRank_impl
==============
*/
__int64 LUI_CoD_LuaCall_GetOnlineFriendAlienRank_impl(lua_State *const luaVM)
{
  PlayerProfileData profileData; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Friends.GetOnlineFriendAlienRank( <controller>, <friendIndex> )\n");
  GetOnlineFriendPlayerCard(luaVM, &profileData);
  j_lua_pushinteger(luaVM, profileData.rank_alien);
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetOnlineFriendBackground_impl
==============
*/
__int64 LUI_CoD_LuaCall_GetOnlineFriendBackground_impl(lua_State *const luaVM)
{
  __int64 CacheLocation; 
  PlayerProfileData profileData; 

  CacheLocation = PlayerCardData_GetCacheLocation();
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Friends.GetOnlineFriendBackground( <controller>, <friendIndex> )\n");
  GetOnlineFriendPlayerCard(luaVM, &profileData);
  j_lua_pushinteger(luaVM, profileData.customization_background[CacheLocation]);
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetOnlineFriendClanTag_impl
==============
*/
__int64 LUI_CoD_LuaCall_GetOnlineFriendClanTag_impl(lua_State *const luaVM)
{
  PlayerProfileData profileData; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Friends.GetOnlineFriendClanTag( <controller>, <friendIndex> )\n");
  GetOnlineFriendPlayerCard(luaVM, &profileData);
  j_lua_pushstring(luaVM, profileData.clanAbbrev);
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetOnlineFriendPatch_impl
==============
*/
__int64 LUI_CoD_LuaCall_GetOnlineFriendPatch_impl(lua_State *const luaVM)
{
  __int64 CacheLocation; 
  PlayerProfileData profileData; 

  CacheLocation = PlayerCardData_GetCacheLocation();
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Friends.GetOnlineFriendPatch( <controller>, <friendIndex> )\n");
  GetOnlineFriendPlayerCard(luaVM, &profileData);
  j_lua_pushinteger(luaVM, profileData.customization_patch[CacheLocation]);
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetOnlineFriendPrestige_impl
==============
*/
__int64 LUI_CoD_LuaCall_GetOnlineFriendPrestige_impl(lua_State *const luaVM)
{
  PlayerProfileData profileData; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Friends.GetOnlineFriendPrestige( <controller>, <friendIndex> )\n");
  GetOnlineFriendPlayerCard(luaVM, &profileData);
  j_lua_pushinteger(luaVM, profileData.prestige_mp);
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetOnlineFriendRank_impl
==============
*/
__int64 LUI_CoD_LuaCall_GetOnlineFriendRank_impl(lua_State *const luaVM)
{
  PlayerProfileData profileData; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Friends.GetOnlineFriendRank( <controller>, <friendIndex> )\n");
  GetOnlineFriendPlayerCard(luaVM, &profileData);
  j_lua_pushinteger(luaVM, profileData.prestige_mp + profileData.rank_mp);
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetPlayerCardDataFromXUID_impl
==============
*/
__int64 LUI_CoD_LuaCall_GetPlayerCardDataFromXUID_impl(lua_State *const luaVM)
{
  char *name; 
  __int64 CacheLocation; 
  XUID result; 
  PlayerProfileData profileData; 
  char outBuffer[8]; 
  int v8; 
  char dest[47]; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isstring(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.GetPlayerCardDataFromXUID( XUID )");
  if ( j_lua_gettop(luaVM) != 1 )
    return 0i64;
  if ( !j_lua_isstring(luaVM, 1) )
    return 0i64;
  LUI_ToXUID(&result, luaVM, 1);
  if ( !PlayercardCache_GetPlayercard(result, "<unknown>", &profileData) )
    return 0i64;
  j_lua_createtable(luaVM, 0, 0);
  memset(dest, 0, sizeof(dest));
  if ( profileData.clanAbbrev[0] )
  {
    *(_QWORD *)outBuffer = 0i64;
    v8 = 0;
    Com_PlayerUtils_ColorizeClanTag(profileData.clanAbbrev, profileData.clanTagType, outBuffer, 0xCui64, 0x37u);
    Com_sprintf<47>((char (*)[47])dest, "[%s]%s", outBuffer, profileData.name);
    name = dest;
  }
  else
  {
    name = profileData.name;
  }
  LUI_SetTableString("gamertag", name, luaVM);
  LUI_SetTableInt("rank", profileData.rank_mp + profileData.prestige_mp, luaVM);
  CacheLocation = PlayerCardData_GetCacheLocation();
  LUI_SetTableInt("emblemIndex", profileData.customization_patch[CacheLocation], luaVM);
  LUI_SetTableInt("background", profileData.customization_background[CacheLocation], luaVM);
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetPrivatePartyMembers_impl
==============
*/
__int64 LUI_CoD_LuaCall_GetPrivatePartyMembers_impl(lua_State *const luaVM)
{
  bool v3; 
  signed int v4; 
  int v5; 
  int NumGameSlots; 
  __int64 v7; 
  bool *p_usingGamepad; 
  int IsMemberLocalPlayer; 
  bool v10; 
  lua_State *v13; 
  const char *v14; 
  bool IsPlayerMuted; 
  const PartyData *ActiveParty; 
  int MemberByXUID; 
  bool v18; 
  bool IsHost; 
  char ClientPlatform; 
  int v21; 
  __int64 CacheLocation; 
  char *v23; 
  __int64 postColor; 
  bool v25; 
  XUID player; 
  PlayerProfileData profileData; 
  char outBuffer[8]; 
  int v29; 
  char dest[21]; 
  char value[64]; 
  char v32[128]; 

  if ( j_lua_gettop(luaVM) && (j_lua_gettop(luaVM) != 1 || j_lua_type(luaVM, 1) != 1) )
    j_luaL_error(luaVM, "USAGE: Friends.GetPrivatePartyMembers( [excludeLocalPlayer] )");
  if ( j_lua_gettop(luaVM) && (j_lua_gettop(luaVM) != 1 || j_lua_type(luaVM, 1) != 1) )
    return 0i64;
  v3 = j_lua_gettop(luaVM) == 1 && j_lua_toboolean(luaVM, 1);
  v25 = v3;
  j_lua_createtable(luaVM, 0, 0);
  v4 = 0;
  v5 = 1;
  NumGameSlots = Party_GetNumGameSlots(&g_partyData);
  v7 = NumGameSlots;
  if ( NumGameSlots > 0 )
  {
    p_usingGamepad = &g_partyData.partyMembers[0].info.usingGamepad;
    do
    {
      if ( Party_IsMemberPresent((const PartyMember *)(p_usingGamepad - 101)) )
      {
        IsMemberLocalPlayer = Party_IsMemberLocalPlayer(&g_partyData, v4);
        v10 = IsMemberLocalPlayer != 0;
        if ( !IsMemberLocalPlayer || !v3 )
        {
          _XMM1 = 0i64;
          __asm { vcvtsi2sd xmm1, xmm1, r12d; n }
          j_lua_pushnumber(LUI_luaVM, *(long double *)&_XMM1);
          j_lua_createtable(luaVM, 0, 11);
          LUI_SetTableInt("partyIndex", v4, luaVM);
          v13 = LUI_luaVM;
          player.m_id = *(_QWORD *)(p_usingGamepad + 315);
          v14 = XUID::ToString(&player);
          LUI_SetTableString("xuidString", v14, v13);
          IsPlayerMuted = CL_IsPlayerMuted(&g_partyData, v4);
          LUI_SetTableBool("isMuted", IsPlayerMuted, LUI_luaVM);
          ActiveParty = Live_GetActiveParty();
          MemberByXUID = Party_FindMemberByXUID(ActiveParty, player);
          v18 = MemberByXUID != -1 && CL_IsPlayerTalking(ActiveParty, MemberByXUID);
          LUI_SetTableBool("isTalking", v18, LUI_luaVM);
          LUI_SetTableBool("isMyPlayer", v10, LUI_luaVM);
          IsHost = Party_IsHost(&g_partyData, v4);
          LUI_SetTableBool("isPartyHost", IsHost, LUI_luaVM);
          LUI_SetTableBool("usingGamepad", *p_usingGamepad, LUI_luaVM);
          LUI_SetTableInt("clientPlatform", p_usingGamepad[55], luaVM);
          Com_sprintf<21>((char (*)[21])dest, "%zu", *(_QWORD *)(p_usingGamepad + 59));
          LUI_SetTableString("platformId", dest, luaVM);
          ClientPlatform = GetClientPlatform();
          LUI_SetTableBool("isCrossplayPlayer", p_usingGamepad[55] != ClientPlatform, LUI_luaVM);
          LUI_SetTableBool("isPaidPlayer", p_usingGamepad[80], LUI_luaVM);
          v21 = *(_DWORD *)(p_usingGamepad - 13);
          value[0] = 0;
          LODWORD(postColor) = v21;
          Com_sprintf(value, 0x40ui64, "%s#%d", (const char *)p_usingGamepad - 49, postColor);
          if ( PlayercardCache_GetPlayercard(player, (const char *)p_usingGamepad - 49, &profileData) )
          {
            CacheLocation = PlayerCardData_GetCacheLocation();
            LUI_SetTableInt("emblemIndex", profileData.customization_patch[CacheLocation], luaVM);
            LUI_SetTableInt("background", profileData.customization_background[CacheLocation], luaVM);
            if ( profileData.clanAbbrev[0] )
            {
              memset_0(v32, 0, sizeof(v32));
              *(_QWORD *)outBuffer = 0i64;
              v29 = 0;
              Com_PlayerUtils_ColorizeClanTag(profileData.clanAbbrev, profileData.clanTagType, outBuffer, 0xCui64, 0x37u);
              Com_sprintf<128>((char (*)[128])v32, "[%s]%s", outBuffer, (const char *)p_usingGamepad - 49);
              LUI_SetTableString("gamertag", v32, LUI_luaVM);
              memset_0(v32, 0, sizeof(v32));
              Com_sprintf<128>((char (*)[128])v32, "[%s]%s", outBuffer, value);
              v23 = v32;
            }
            else
            {
              LUI_SetTableString("gamertag", (const char *)p_usingGamepad - 49, LUI_luaVM);
              v23 = value;
            }
            LUI_SetTableString("fullNameWithHash", v23, LUI_luaVM);
            LUI_SetTableInt("baseRank", profileData.rank_mp, luaVM);
            LUI_SetTableInt("prestige", profileData.prestige_mp, luaVM);
          }
          j_lua_settable(LUI_luaVM, -3);
          ++v5;
        }
      }
      v3 = v25;
      ++v4;
      p_usingGamepad += 504;
      --v7;
    }
    while ( v7 );
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetRecentPlayerAlienPrestige_impl
==============
*/
__int64 LUI_CoD_LuaCall_GetRecentPlayerAlienPrestige_impl(lua_State *const luaVM)
{
  PlayerProfileData playerCardData; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Friends.GetRecentPlayerAlienPrestige( <controller>, <friendIndex> )\n");
  GetRecentPlayerPlayerCard(luaVM, &playerCardData);
  j_lua_pushinteger(luaVM, playerCardData.prestige_alien);
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetRecentPlayerAlienRank_impl
==============
*/
__int64 LUI_CoD_LuaCall_GetRecentPlayerAlienRank_impl(lua_State *const luaVM)
{
  PlayerProfileData playerCardData; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Friends.GetRecentPlayerAlienRank( <controller>, <friendIndex> )\n");
  GetRecentPlayerPlayerCard(luaVM, &playerCardData);
  j_lua_pushinteger(luaVM, playerCardData.rank_alien);
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetRecentPlayerBackground_impl
==============
*/
__int64 LUI_CoD_LuaCall_GetRecentPlayerBackground_impl(lua_State *const luaVM)
{
  __int64 CacheLocation; 
  PlayerProfileData playerCardData; 

  CacheLocation = PlayerCardData_GetCacheLocation();
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Friends.GetRecentPlayerBackground( <controller>, <friendIndex> )\n");
  GetRecentPlayerPlayerCard(luaVM, &playerCardData);
  j_lua_pushinteger(luaVM, playerCardData.customization_background[CacheLocation]);
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetRecentPlayerClanTag_impl
==============
*/
__int64 LUI_CoD_LuaCall_GetRecentPlayerClanTag_impl(lua_State *const luaVM)
{
  PlayerProfileData playerCardData; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Friends.GetRecentPlayerClanTag( <controller>, <friendIndex> )\n");
  GetRecentPlayerPlayerCard(luaVM, &playerCardData);
  j_lua_pushstring(luaVM, playerCardData.clanAbbrev);
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetRecentPlayerPatch_impl
==============
*/
__int64 LUI_CoD_LuaCall_GetRecentPlayerPatch_impl(lua_State *const luaVM)
{
  __int64 CacheLocation; 
  PlayerProfileData playerCardData; 

  CacheLocation = PlayerCardData_GetCacheLocation();
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Friends.GetRecentPlayerPatch( <controller>, <friendIndex> )\n");
  GetRecentPlayerPlayerCard(luaVM, &playerCardData);
  j_lua_pushinteger(luaVM, playerCardData.customization_patch[CacheLocation]);
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetRecentPlayerPrestige_impl
==============
*/
__int64 LUI_CoD_LuaCall_GetRecentPlayerPrestige_impl(lua_State *const luaVM)
{
  PlayerProfileData playerCardData; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Friends.GetRecentPlayerPrestige( <controller>, <friendIndex> )\n");
  GetRecentPlayerPlayerCard(luaVM, &playerCardData);
  j_lua_pushinteger(luaVM, playerCardData.prestige_mp);
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetRecentPlayerRank_impl
==============
*/
__int64 LUI_CoD_LuaCall_GetRecentPlayerRank_impl(lua_State *const luaVM)
{
  PlayerProfileData playerCardData; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Friends.GetRecentPlayerRank( <controller>, <friendIndex> )\n");
  GetRecentPlayerPlayerCard(luaVM, &playerCardData);
  j_lua_pushinteger(luaVM, playerCardData.prestige_mp + playerCardData.rank_mp);
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetStoreColorData
==============
*/
void LUI_CoD_LuaCall_GetStoreColorData(lua_State *luaVM, bdJSONDeserializer *storeContent)
{
  unsigned int v4; 
  const char *v5; 
  bdJSONDeserializer value; 
  int v7; 

  bdJSONDeserializer::bdJSONDeserializer(&value);
  if ( bdJSONDeserializer::getArray(storeContent, "color", &value) )
  {
    j_lua_pushstring(luaVM, "color");
    j_lua_createtable(luaVM, 0, 3);
    v4 = 0;
    while ( 1 )
    {
      if ( bdJSONDeserializer::getInt32(&value, v4, &v7) )
      {
        switch ( v4 )
        {
          case 0u:
            v5 = "r";
LABEL_10:
            LUI_SetTableNumber(v5, (float)((float)v7 * 0.0039215689), luaVM);
            break;
          case 1u:
            v5 = "g";
            goto LABEL_10;
          case 2u:
            v5 = "b";
            goto LABEL_10;
        }
      }
      if ( (int)++v4 >= 3 )
      {
        j_lua_settable(luaVM, -3);
        break;
      }
    }
  }
  bdJSONDeserializer::~bdJSONDeserializer(&value);
}

/*
==============
LUI_CoD_LuaCall_GetTimePlayed_impl
==============
*/

__int64 __fastcall LUI_CoD_LuaCall_GetTimePlayed_impl(lua_State *const luaVM, double _XMM1_8)
{
  unsigned int PlayTimeSP; 
  int ControllerFromClient; 
  const char *v6; 
  unsigned int v7; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 
  unsigned int v12; 
  unsigned int v13; 
  unsigned int v14; 
  unsigned int v15; 
  const char *v16; 
  int v21; 
  const char *v24; 
  const char *v25; 
  const char *v28; 
  unsigned int v30; 
  ConversionArguments arguments; 
  char dest[16]; 
  char v33[16]; 
  char v34[16]; 
  char v35[16]; 

  PlayTimeSP = 0;
  if ( j_lua_gettop(luaVM) < 1 )
    j_luaL_error(luaVM, "USAGE: Engine.GetTimePlayed( <string> )");
  if ( !j_lua_isstring(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.GetTimePlayed( <string> )");
  ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
  v6 = j_lua_tolstring(luaVM, 1, NULL);
  if ( !I_stricmp(v6, "sp") )
    PlayTimeSP = GamerProfile_GetPlayTimeSP(ControllerFromClient);
  if ( I_stricmp(v6, "cp") )
  {
    if ( I_stricmp(v6, "mp") )
    {
      if ( !I_stricmp(v6, "total") )
      {
        v7 = GamerProfile_GetPlayTimeSP(ControllerFromClient);
        v8 = GamerProfile_GetPlayTimeCP(ControllerFromClient) + v7;
        PlayTimeSP = GamerProfile_GetPlayTimeMP(ControllerFromClient) + v8;
      }
    }
    else
    {
      PlayTimeSP = GamerProfile_GetPlayTimeMP(ControllerFromClient);
    }
  }
  else
  {
    PlayTimeSP = GamerProfile_GetPlayTimeCP(ControllerFromClient);
  }
  v9 = PlayTimeSP / 0x64;
  v10 = PlayTimeSP % 0x64;
  v11 = v9 / 0x3C;
  v12 = v9 / 0x3C / 0x3C;
  v13 = v9 % 0x3C;
  v14 = v11 - 60 * v12;
  v30 = v12 / 0x18;
  v15 = v12 % 0x18;
  if ( !j_lua_isstring(luaVM, 2) )
    goto LABEL_31;
  v16 = j_lua_tolstring(luaVM, 2, NULL);
  if ( I_stricmp(v16, "days") )
  {
    if ( !I_stricmp(v16, "hours") || !I_stricmp(v16, "minutes") || !I_stricmp(v16, "seconds") || !I_stricmp(v16, "centiseconds") )
    {
      _XMM1 = 0i64;
      __asm { vcvtsi2sd xmm1, xmm1, rax; n }
      j_lua_pushnumber(luaVM, *(long double *)&_XMM1);
      return 1i64;
    }
    v21 = I_stricmp(v16, "hms");
    if ( !v21 )
    {
      __asm
      {
        vpxor   xmm0, xmm0, xmm0
        vpxor   xmm1, xmm1, xmm1
      }
      *(_QWORD *)&arguments.argCount = 3i64;
      *(_OWORD *)&arguments.args[3] = _XMM0;
      *(_OWORD *)&arguments.args[5] = _XMM1;
      *(_OWORD *)&arguments.args[7] = _XMM0;
      Com_sprintf(dest, (unsigned int)(unsigned __int8)v21 + 16, "%02d", v15);
      Com_sprintf(v33, 0x10ui64, "%02d", v14);
      Com_sprintf(v34, 0x10ui64, "%02d", v13);
      arguments.args[0] = dest;
      arguments.args[1] = v33;
      arguments.args[2] = v34;
      v24 = SEH_LocalizeTextMessage("MENU_SP/TIME_PLAYED_HMS", "ui string", LOCMSG_NOERR);
      if ( v24 )
        UI_ReplaceConversions(v24, &arguments, resultHMS, 0x80ui64);
      else
        resultHMS[0] = 0;
      v25 = resultHMS;
      goto LABEL_32;
    }
    if ( !I_stricmp(v6, "dhms") )
    {
      *(_QWORD *)&arguments.argCount = 4i64;
      __asm
      {
        vpxor   xmm0, xmm0, xmm0
        vpxor   xmm1, xmm1, xmm1
      }
      arguments.args[4] = NULL;
      *(_OWORD *)&arguments.args[5] = _XMM0;
      *(_OWORD *)&arguments.args[7] = _XMM1;
      Com_sprintf(dest, 0x10ui64, "%d", v30);
      Com_sprintf(v33, 0x10ui64, "%02d", v15);
      Com_sprintf(v34, 0x10ui64, "%02d", v14);
      Com_sprintf(v35, 0x10ui64, "%02d", v13);
      arguments.args[0] = dest;
      arguments.args[1] = v33;
      arguments.args[2] = v34;
      arguments.args[3] = v35;
      v28 = SEH_LocalizeTextMessage("MENU_SP/TIME_PLAYED_DHMS", "ui string", LOCMSG_NOERR);
      if ( v28 )
        UI_ReplaceConversions(v28, &arguments, resultDHMS, 0x80ui64);
      else
        resultDHMS[0] = 0;
      v25 = resultDHMS;
      goto LABEL_32;
    }
LABEL_31:
    Com_sprintf(resultString, 0x80ui64, "%i:%02d:%02d:%02d:%02d", v30, v15, v14, v13, v10);
    v25 = resultString;
LABEL_32:
    j_lua_pushstring(luaVM, v25);
    return 1i64;
  }
  _XMM1 = 0i64;
  __asm { vcvtsi2sd xmm1, xmm1, rdx; n }
  j_lua_pushnumber(luaVM, *(long double *)&_XMM1);
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetWhisperableFriendsNames_impl
==============
*/
__int64 LUI_CoD_LuaCall_GetWhisperableFriendsNames_impl(lua_State *const luaVM)
{
  Online_Friends *Instance; 
  FriendListGlobal *Friends; 
  unsigned int count; 
  unsigned int v5; 
  Online_Friends *v6; 
  unsigned int v7; 
  int *sortedFriends; 
  const XUID *v9; 
  unsigned __int64 v10; 
  __int64 v11; 
  Online_Friends *v12; 
  __int64 v13; 
  const char *v16; 
  __int64 v17; 
  unsigned int numFriendsOut; 
  XUID v20; 
  int localControllerIndex; 
  DWFriend *friendsOut; 
  int *v23; 
  XUID result; 
  char gamertagOut[40]; 
  char dest[21]; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Friends.GetWhisperableFriendsNames( <controller> )\n");
  localControllerIndex = lui_tointeger32(luaVM, 1);
  Instance = Online_Friends::GetInstance();
  Friends = Online_Friends::GetFriends(Instance, localControllerIndex);
  count = Friends->count;
  v5 = count;
  numFriendsOut = 0;
  friendsOut = NULL;
  v6 = Online_Friends::GetInstance();
  if ( Online_Friends::Crossplay_GetFriends(v6, localControllerIndex, &friendsOut, &numFriendsOut) )
    v5 = count + numFriendsOut;
  j_lua_createtable(luaVM, 0, 2);
  j_lua_pushstring(luaVM, "friends");
  j_lua_createtable(luaVM, v5, 0);
  v7 = 0;
  if ( v5 )
  {
    sortedFriends = Friends->sortedFriends;
    v23 = Friends->sortedFriends;
    while ( 1 )
    {
      XUID::XUID(&v20);
      gamertagOut[0] = 0;
      v9 = XUID::NullXUID(&result);
      XUID::operator=(&v20, v9);
      v10 = 0i64;
      if ( v7 >= count )
      {
        v13 = (int)(v7 - count);
        XUID::operator=(&v20, &friendsOut[v13].xuid);
        Com_TruncatePlayerName(friendsOut[v13].name, gamertagOut, 0x24ui64);
      }
      else
      {
        v11 = *sortedFriends;
        XUID::operator=(&v20, &Friends->friends[v11]);
        v10 = Friends->friendPlatformIds[v11];
        v12 = Online_Friends::GetInstance();
        Online_Friends::GetGamertag(v12, localControllerIndex, v11, gamertagOut, 0x24ui64);
        sortedFriends = v23;
      }
      if ( XUID::IsNull(&v20) && !v10 )
        break;
      _XMM1 = 0i64;
      ++v7;
      __asm { vcvtsi2sd xmm1, xmm1, r14d; n }
      j_lua_pushnumber(luaVM, *(long double *)&_XMM1);
      j_lua_createtable(luaVM, 0, 2);
      v16 = XUID::ToString(&v20);
      LUI_SetTableString("xuid", v16, luaVM);
      LUI_SetTableString("gamertag", gamertagOut, luaVM);
      Com_sprintf<21>((char (*)[21])dest, "%zu", v10);
      LUI_SetTableString("platformId", dest, luaVM);
      j_lua_settable(luaVM, -3);
      v23 = ++sortedFriends;
      if ( v7 >= v5 )
        goto LABEL_14;
    }
    j_lua_settop(LUI_luaVM, -3);
    v17 = 0i64;
  }
  else
  {
LABEL_14:
    j_lua_settable(luaVM, -3);
    v17 = v5;
  }
  LUI_SetTableInt("count", v17, luaVM);
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_IsTutorialCompleted_impl
==============
*/
__int64 LUI_CoD_LuaCall_IsTutorialCompleted_impl(lua_State *const luaVM)
{
  int v2; 
  int v3; 
  signed int v4; 
  LocalClientNum_t ClientFromController; 
  StatsSource ActiveStatsSource; 
  const char *v8; 
  int v9; 
  int v10; 
  DDLContext context; 

  v2 = j_lua_gettop(luaVM);
  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, "USAGE: Engine.IsTutorialCompleted( controllerIndex, tutorialIndex )");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.IsTutorialCompleted( controllerIndex, tutorialIndex )");
  if ( !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Engine.IsTutorialCompleted( controllerIndex, tutorialIndex )");
  v3 = lui_tointeger32(luaVM, 1);
  v4 = lui_tointeger32(luaVM, 2);
  if ( v4 >= 64 )
    j_luaL_error(luaVM, "USAGE: Engine.CompleteTutorial( controllerIndex, tutorialIndex ), tutorialIndex must be under 64");
  ClientFromController = CL_Mgr_GetClientFromController(v3);
  LiveStorage_EnsureMaySetPersistentData(ClientFromController, "LUI_CoD_LuaCall_IsTutorialCompleted_impl");
  ActiveStatsSource = LiveStorage_GetActiveStatsSource(v3);
  if ( CL_PlayerData_GetDDLBuffer(&context, v3, ActiveStatsSource, STATSGROUP_RANKED) )
  {
    if ( v4 > 31 )
    {
      v4 -= 32;
      v8 = "mpTutorialLevel2";
    }
    else
    {
      v8 = "mpTutorialLevel";
    }
    j_lua_pushstring(luaVM, v8);
    v9 = 0;
    LUI_GetDDL(luaVM, 1, context.def, &context, STATSGROUP_RANKED);
    if ( !j_lua_isnumber(luaVM, -1) )
      j_luaL_error(luaVM, "Error reading mpTutorialLevel");
    v10 = lui_tointeger32(luaVM, -1);
    j_lua_settop(luaVM, -2);
    j_lua_settop(luaVM, -2);
    LOBYTE(v9) = _bittest(&v10, v4);
    j_lua_pushboolean(luaVM, v9);
    if ( v2 + 1 != j_lua_gettop(luaVM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_functions.cpp", 18692, ASSERT_TYPE_ASSERT, "(stackTop + 1 == lua_gettop( luaVM ))", (const char *)&queryFormat, "stackTop + 1 == lua_gettop( luaVM )") )
      __debugbreak();
    return 1i64;
  }
  else
  {
    Com_Printf(14, "Tried to set PlayerData before we have downloaded player stats - %s\n", "LUI_CoD_LuaCall_IsTutorialCompleted_impl");
    return 0i64;
  }
}

/*
==============
LUI_CoD_LuaCall_LocalizeLong_impl
==============
*/
__int64 LUI_CoD_LuaCall_LocalizeLong_impl(lua_State *const luaVM)
{
  const char *v2; 
  const char *v3; 
  char v4; 
  const char *String; 
  const char *v6; 
  const char *v7; 
  __int64 v9; 
  __int64 v10; 
  unsigned __int64 v11; 
  char v12; 
  char dest[32767]; 

  if ( j_lua_gettop(luaVM) < 1 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "numParams >= 1");
  if ( !j_lua_isstring(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isstring( luaVM, 1 )");
  v2 = j_lua_tolstring(luaVM, 1, NULL);
  v3 = v2;
  if ( !v2 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "stringReference != NULL");
  v4 = *v2;
  if ( v4 == 64 )
    v4 = *++v3;
  if ( v4 == 31 )
    j_luaL_error(luaVM, "Attempted to localize an already localized (long) string: %s", v3);
  String = SEH_StringEd_GetString(v3);
  v6 = String;
  if ( String )
  {
    v12 = 31;
    Core_strcpy(dest, 0x7FFEui64, String);
    v10 = -1i64;
    do
      ++v10;
    while ( v6[v10] );
    dest[v10] = 30;
    v11 = v10 + 2;
    if ( v11 >= 0x8000 )
    {
      j___report_rangecheckfailure(v9);
      JUMPOUT(0x1425A5B93i64);
    }
    dest[v11 - 1] = 0;
    v7 = &v12;
  }
  else
  {
    v7 = v3;
  }
  j_lua_pushstring(luaVM, v7);
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_Localize_impl
==============
*/
__int64 LUI_CoD_LuaCall_Localize_impl(lua_State *const luaVM)
{
  int v2; 
  const char *v3; 
  char *v4; 
  char v5; 
  const char *String; 
  const char *v7; 
  unsigned int v8; 
  int v9; 
  __int64 v10; 
  const char *v11; 
  const char *v12; 
  const dvar_t *v13; 
  LocalClientNum_t localClientNum; 
  int controllerIndex[3]; 
  ConversionArguments arguments; 
  char outputString[1024]; 
  char dstString[1024]; 

  v2 = j_lua_gettop(luaVM);
  if ( v2 < 1 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "numParams >= 1");
  if ( !j_lua_isstring(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isstring( luaVM, 1 )");
  v3 = j_lua_tolstring(luaVM, 1, NULL);
  v4 = (char *)v3;
  if ( !v3 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "stringReference != NULL");
  v5 = *v3;
  if ( v5 == 64 )
    v5 = *++v4;
  if ( v5 == 31 )
    j_luaL_error(luaVM, "Attempted to localize an already localized string: %s\n", v4);
  String = SEH_StringEd_GetString(v4);
  v7 = String;
  if ( String )
  {
    v8 = v2 - 1;
    arguments.argCount = 0;
    v4 = (char *)String;
    if ( v2 - 1 > 0 )
    {
      v9 = 2;
      v10 = v8;
      do
      {
        if ( j_lua_isstring(luaVM, v9) )
        {
          v11 = j_lua_tolstring(luaVM, v9, NULL);
          if ( *v11 == 31 || j_lua_isnumber(luaVM, v9) )
          {
            arguments.args[arguments.argCount] = v11;
          }
          else
          {
            v12 = SEH_StringEd_GetString(v11);
            if ( v12 )
              arguments.args[arguments.argCount] = v12;
            else
              arguments.args[arguments.argCount] = j_va(&byte_144480424, v11);
          }
          ++arguments.argCount;
        }
        ++v9;
        --v10;
      }
      while ( v10 );
      if ( arguments.argCount > 0 )
      {
        UI_ReplaceConversions(v7, &arguments, outputString, 0x400ui64);
        v4 = outputString;
      }
    }
  }
  if ( LUI_CoD_CanInferLocalClientAndController() )
  {
    LUI_CoD_AttemptInferLocalClientAndController(&localClientNum, controllerIndex);
  }
  else
  {
    localClientNum = LOCAL_CLIENT_0;
    controllerIndex[0] = 0;
  }
  v13 = DVARBOOL_lui_rendertime_binding_directive;
  if ( !DVARBOOL_lui_rendertime_binding_directive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_rendertime_binding_directive") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  if ( !v13->current.enabled )
  {
    UI_ReplaceDirective(localClientNum, v4, dstString, 0x400ui64, 0);
    v4 = dstString;
  }
  if ( v7 )
    j_lua_pushfstring(luaVM, (const char *)&stru_143FB69FC, v4);
  else
    j_lua_pushstring(luaVM, v4);
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_SetMatchRulesData_impl
==============
*/
__int64 LUI_CoD_LuaCall_SetMatchRulesData_impl(lua_State *const luaVM)
{
  const dvar_t *v1; 
  const dvar_t *v4; 
  GameStateInfo *v5; 
  int v6; 
  const DDLDef *Asset; 
  bool v8; 
  DDLContext ddlContext; 

  v1 = DVARBOOL_onlinegame;
  if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( !v1->current.enabled )
    goto LABEL_28;
  if ( !Lobby_IsInLobby() )
  {
    Com_PrintError(13, "MatchRules.SetMatchRulesData called while not in lobby\n");
    return 0i64;
  }
  if ( Lobby_AreWeHost() )
  {
LABEL_28:
    if ( !Live_IsInSystemlinkLobby() )
      goto LABEL_15;
    v4 = DVARBOOL_systemlink_host;
    if ( !DVARBOOL_systemlink_host && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "systemlink_host") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    if ( v4->current.enabled )
    {
LABEL_15:
      v5 = GameStateInfo_Get();
      if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_functions.cpp", 16795, ASSERT_TYPE_ASSERT, "(gInfo)", (const char *)&queryFormat, "gInfo") )
        __debugbreak();
      if ( v5->usingRecipe )
      {
        if ( !v5->matchRules && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_functions.cpp", 16803, ASSERT_TYPE_ASSERT, "(gInfo->matchRules)", (const char *)&queryFormat, "gInfo->matchRules") )
          __debugbreak();
        v6 = j_lua_gettop(luaVM);
        Asset = Com_DDL_LoadAsset("ddl/mp/recipes.ddl");
        Com_DDL_CreateContext(v5->matchRules, 4096, Asset, &ddlContext, NULL, NULL);
        v8 = LUI_SetDDL(luaVM, v6, Asset, &ddlContext, STATSGROUP_IGNORE);
        if ( v8 )
          MatchRulesChanged(v5->matchRules);
        j_lua_pushboolean(luaVM, v8);
        return 1i64;
      }
      else
      {
        Com_PrintError(13, "MatchRules.SetMatchRulesData called when when not using recipe\n");
        return 0i64;
      }
    }
    else
    {
      Com_PrintError(13, "MatchRules.SetMatchRulesData called while not system link host\n");
      return 0i64;
    }
  }
  else
  {
    Com_PrintError(13, "MatchRules.SetMatchRulesData called while not lobby host\n");
    return 0i64;
  }
}

/*
==============
LUI_CoD_LuaCall_ShowGamerCard_impl
==============
*/
__int64 LUI_CoD_LuaCall_ShowGamerCard_impl(lua_State *const luaVM)
{
  int v2; 
  double v3; 
  unsigned int v4; 
  bool isBot; 
  LocalClientNum_t ClientFromController; 
  __int64 v7; 
  clientInfo_t *v8; 
  unsigned __int8 ActiveGameMode; 
  const PartyData *PartyData; 
  unsigned __int64 PlatformId; 
  unsigned int v12; 
  __int64 v14; 
  __int64 v15; 
  LocalClientNum_t v16; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Engine.ShowGamerCard( <controllerIndex>, <clientNum> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    v3 = lui_tonumber32(luaVM, 2);
    v4 = (int)*(float *)&v3;
    isBot = 0;
    if ( LUI_CoD_InFrontend() )
    {
      PartyData = &g_partyData;
    }
    else
    {
      ClientFromController = CL_Mgr_GetClientFromController(v2);
      v7 = ClientFromController;
      if ( !(_BYTE)CgStatic::ms_allocatedType )
      {
        v16 = ClientFromController;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 110, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the client game statics for localClientNum %d but the ype is not known\n", "ms_allocatedType != GameModeType::NONE", v16) )
          __debugbreak();
      }
      if ( (unsigned int)v7 >= LODWORD(CgStatic::ms_allocatedCount) )
      {
        *(float *)&v15 = CgStatic::ms_allocatedCount;
        LODWORD(v14) = v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 111, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v14, v15) )
          __debugbreak();
      }
      if ( !CgStatic::ms_cgameStaticsArray[v7] )
      {
        LODWORD(v15) = v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 112, ASSERT_TYPE_ASSERT, "(ms_cgameStaticsArray[localClientNum])", "%s\n\tTrying to access unallocated client game statics for localClientNum %d\n", "ms_cgameStaticsArray[localClientNum]", v15) )
          __debugbreak();
      }
      v8 = CgStatic::ms_cgameStaticsArray[v7]->GetClientInfo(CgStatic::ms_cgameStaticsArray[v7], v4);
      ActiveGameMode = Com_GameMode_GetActiveGameMode();
      if ( BG_GameInterface_GameModeIsMP((GameModeType)ActiveGameMode) )
        isBot = v8->isBot;
      PartyData = Lobby_GetPartyData();
      if ( isBot )
        return 0i64;
    }
    PlatformId = Party_GetPlatformId(PartyData, v4);
    v12 = XShowGamerCardUI(v2, PlatformId);
    if ( v12 )
      Com_PrintError(16, "Error %x when trying to show gamercard for PlatformId %zu\n", v12, PlatformId);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_UnlinkKey_impl
==============
*/
__int64 LUI_CoD_LuaCall_UnlinkKey_impl(lua_State *const luaVM)
{
  int v2; 
  LocalClientNum_t ClientFromController; 
  const char *v4; 
  InputContext v5; 
  const char *v6; 
  Bind BindingForCommand; 
  keyNum_t BoundKey; 
  keyNum_t v9; 

  if ( j_lua_gettop(luaVM) != 3 )
    j_luaL_error(luaVM, "USAGE: Engine.UnlinkKey( <controllerIndex>, <inputContext>, <action>, <slotIndex> )");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.UnlinkKey( <controllerIndex>, <inputContext>, <action>, <slotIndex> )");
  if ( !j_lua_isstring(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Engine.UnlinkKey( <controllerIndex>, <inputContext>, <action>, <slotIndex> )");
  if ( !j_lua_isstring(luaVM, 3) )
    j_luaL_error(luaVM, "USAGE: Engine.UnlinkKey( <controllerIndex>, <inputContext>, <action>, <slotIndex> )");
  v2 = lui_tointeger32(luaVM, 1);
  ClientFromController = CL_Mgr_GetClientFromController(v2);
  v4 = j_lua_tolstring(luaVM, 2, NULL);
  v5 = CL_InputContext_FromName(v4);
  v6 = j_lua_tolstring(luaVM, 3, NULL);
  BindingForCommand = (unsigned __int8)Com_Keys_GetBindingForCommand(v6);
  BoundKey = CL_Keys_GetBoundKey(ClientFromController, v5, BindingForCommand, INVALID, 1);
  v9 = CL_Keys_GetBoundKey(ClientFromController, v5, BindingForCommand, BOOL_VALUE, 1);
  if ( CL_Keys_BindKey(ClientFromController, v5, BindingForCommand, INVALID, BoundKey, NULL) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_functions.cpp", 5707, ASSERT_TYPE_ASSERT, "(CL_Keys_BindKey( localClientNum, inputContext, action, CL_KeyBindSlot::PRIMARY, primaryKey, nullptr ) == 0)", (const char *)&queryFormat, "CL_Keys_BindKey( localClientNum, inputContext, action, CL_KeyBindSlot::PRIMARY, primaryKey, nullptr ) == 0") )
    __debugbreak();
  if ( CL_Keys_BindKey(ClientFromController, v5, BindingForCommand, BOOL_VALUE, v9, NULL) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_functions.cpp", 5708, ASSERT_TYPE_ASSERT, "(CL_Keys_BindKey( localClientNum, inputContext, action, CL_KeyBindSlot::SECONDARY, secondaryKey, nullptr ) == 0)", (const char *)&queryFormat, "CL_Keys_BindKey( localClientNum, inputContext, action, CL_KeyBindSlot::SECONDARY, secondaryKey, nullptr ) == 0") )
    __debugbreak();
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_WeaponTypeIsProjectile_impl
==============
*/
__int64 LUI_CoD_LuaCall_WeaponTypeIsProjectile_impl(lua_State *const luaVM)
{
  int v2; 
  __int64 ClientFromController; 
  __int64 v4; 
  playerState_s *p_predictedPlayerState; 
  const Weapon *CurrentWeaponForPlayer; 
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *p_weapFlags; 
  unsigned int v8; 
  __int64 v9; 
  bool v10; 
  int v11; 
  __int64 v13; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.WeaponTypeIsProjectile( <controller> )\n");
  v2 = lui_tointeger32(luaVM, 1);
  ClientFromController = CL_Mgr_GetClientFromController(v2);
  if ( (unsigned int)ClientFromController >= cg_t::ms_allocatedCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_t::ms_allocatedCount )", "localClientNum doesn't index cg_t::ms_allocatedCount\n\t%i not in [0, %i)", ClientFromController, cg_t::ms_allocatedCount) )
    __debugbreak();
  v4 = ClientFromController;
  if ( !cg_t::ms_cgArray[ClientFromController] )
  {
    LODWORD(v13) = ClientFromController;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1167, ASSERT_TYPE_ASSERT, "(cg_t::ms_cgArray[localClientNum])", "%s\n\tTrying to access unallocated client globals for localClientNum %d\n", "cg_t::ms_cgArray[localClientNum]", v13) )
      __debugbreak();
  }
  if ( cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN )
  {
    LODWORD(v13) = ClientFromController;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1168, ASSERT_TYPE_ASSERT, "(cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client globals for localClientNum %d but the client global type is not known\n", "cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN", v13) )
      __debugbreak();
  }
  p_predictedPlayerState = &cg_t::ms_cgArray[v4]->predictedPlayerState;
  if ( !CgWeaponMap::ms_instance[v4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(CgWeaponMap::ms_instance[v4], p_predictedPlayerState);
  if ( BG_UseLeftTriggerAltFireMode(CurrentWeaponForPlayer) )
  {
    if ( !p_predictedPlayerState )
      goto LABEL_21;
    p_weapFlags = &p_predictedPlayerState->weapCommon.weapFlags;
    v8 = 29;
  }
  else
  {
    if ( p_predictedPlayerState )
    {
      v9 = (__int64)&p_predictedPlayerState->weapCommon.weapFlags;
      if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&p_predictedPlayerState->weapCommon.weapFlags, ACTIVE, 0x22u) )
        goto LABEL_21;
    }
    else
    {
      v9 = 1832i64;
    }
    if ( !p_predictedPlayerState )
      goto LABEL_21;
    if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal((GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *)v9, ACTIVE, 0x11u) )
    {
LABEL_31:
      v10 = 1;
      goto LABEL_22;
    }
    v8 = 27;
    p_weapFlags = (GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *)v9;
  }
  if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, v8) )
    goto LABEL_31;
LABEL_21:
  v10 = 0;
LABEL_22:
  v11 = 0;
  if ( CurrentWeaponForPlayer->weaponIdx && BG_GetWeaponType(CurrentWeaponForPlayer, v10) == WEAPTYPE_PROJECTILE )
    v11 = 1;
  j_lua_pushboolean(luaVM, v11);
  return 1i64;
}

/*
==============
LUI_CoD_RegisterDCacheFunctions
==============
*/
void LUI_CoD_RegisterDCacheFunctions(lua_State *luaVM)
{
  j_luaL_register(luaVM, "DCache", DCache_methods);
  j_lua_settop(luaVM, -2);
}

/*
==============
LUI_CoD_RegisterDebugFunctions
==============
*/
void LUI_CoD_RegisterDebugFunctions(lua_State *luaVM)
{
  j_luaL_register(luaVM, "Debug", Debug_methods);
  j_lua_settop(luaVM, -2);
}

/*
==============
LUI_CoD_RegisterEngineFunctions
==============
*/
void LUI_CoD_RegisterEngineFunctions(lua_State *luaVM)
{
  LuaShared_RegisterEngineFunctions(luaVM);
  j_luaL_register(luaVM, "Engine", Engine_methods_0);
  j_lua_settop(luaVM, -2);
}

/*
==============
LUI_CoD_RegisterFriendsFunctions
==============
*/
void LUI_CoD_RegisterFriendsFunctions(lua_State *luaVM)
{
  j_luaL_register(luaVM, "Friends", Friends_methods);
  j_lua_settop(luaVM, -2);
}

/*
==============
LUI_CoD_RegisterLoadoutDraftingFunctions
==============
*/
void LUI_CoD_RegisterLoadoutDraftingFunctions(lua_State *luaVM)
{
  j_luaL_register(luaVM, "LoadoutDrafting", LoadoutDrafting_methods);
  j_lua_settop(luaVM, -2);
}

/*
==============
LUI_CoD_RegisterMatchRulesFunctions
==============
*/
void LUI_CoD_RegisterMatchRulesFunctions(lua_State *luaVM)
{
  j_luaL_register(luaVM, "MatchRules", MatchRules_methods);
  j_lua_settop(luaVM, -2);
}

/*
==============
LUI_CoD_RegisterModules
==============
*/
void LUI_CoD_RegisterModules(lua_State *luaVM)
{
  ClGameModeApplication *ActiveClientApplication; 

  LuaShared_RegisterEngineFunctions(luaVM);
  j_luaL_register(luaVM, "Engine", Engine_methods_0);
  j_lua_settop(luaVM, -2);
  LuaShared_RegisterDvarFunctions(luaVM);
  LuaShared_RegisterTableFunctions(luaVM);
  LuaShared_RegisterUnlockFunctions(luaVM);
  DDL_LuaInit(luaVM);
  j_luaL_register(luaVM, "Friends", Friends_methods);
  j_lua_settop(luaVM, -2);
  LUI_CoD_RegisterPlayercardFunctions(luaVM);
  LUI_CoD_RegisterSocialFunctions(luaVM);
  LUI_CoD_RegisterLobbyFunctions(luaVM);
  LUI_CoD_RegisterLobbyMemberFunctions(luaVM);
  LUI_CoD_RegisterPlayerDataFunctions(luaVM);
  LUI_CoD_RegisterPlaylistFunctions(luaVM);
  LUI_CoD_RegisterMLGFunctions(luaVM);
  LUI_CoD_RegisterClanFunctions(luaVM);
  if ( !LUI_CoD_InFrontend() )
  {
    LUI_CoD_RegisterCommonGameFunctions(luaVM);
    if ( !ClGameModeApplication::HasActiveApplicationGameMode() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_functions.cpp", 22302, ASSERT_TYPE_ASSERT, "(ClGameModeApplication::HasActiveApplicationGameMode())", "%s\n\tWe are attempting to start the in-game UI, but we have not allocated a game mode to start the game with", "ClGameModeApplication::HasActiveApplicationGameMode()") )
      __debugbreak();
    ActiveClientApplication = ClGameModeApplication::GetActiveClientApplication();
    ActiveClientApplication->RegisterGameModeFunctions(ActiveClientApplication, luaVM);
  }
  LUI_CoD_OnScreenKeyboard_RegisterFunctions(luaVM);
  LuaShared_RegisterDataModelFunctions(luaVM);
  LUI_CoD_RegisterFencingFunctions(luaVM);
  LUI_CoD_RegisterClientCharacterFunctions(luaVM);
  LUI_CoD_RegisterClientWeaponFunctions(luaVM);
  LUI_CoD_RegisterClientModelFunctions(luaVM);
  LUI_CoD_RegisterStreamingFunctions(luaVM);
  j_luaL_register(luaVM, "MatchRules", MatchRules_methods);
  j_lua_settop(luaVM, -2);
  LUI_CoD_RegisterLeaderboardsFunctions(luaVM);
  LUI_CoD_RegisterPostMatchFunctions(luaVM);
  LUI_CoD_RegisterTournamentFunctions(luaVM);
  j_luaL_register(luaVM, "DCache", DCache_methods);
  j_lua_settop(luaVM, -2);
  j_luaL_register(luaVM, "Debug", Debug_methods);
  j_lua_settop(luaVM, -2);
  j_luaL_register(luaVM, "LoadoutDrafting", LoadoutDrafting_methods);
  j_lua_settop(luaVM, -2);
  LUI_CoD_RegisterChallengesFunctions(luaVM);
  LUI_CoD_RegisterNetworkInfoFunctions(luaVM);
  OnlineMgr::RegisterLuaFunctions(&g_onlineMgr, luaVM);
  OnlineMatchmakerOmniscient::RegisterLUIFunctions(luaVM);
}

/*
==============
LUI_CoD_SetUpTable_ForCRMMsg
==============
*/
void LUI_CoD_SetUpTable_ForCRMMsg(int locationID, int messageIndex, bdJSONDeserializer *CRMContent)
{
  __int64 v6; 
  int v7; 
  int v8; 
  MarketingCommsManager *Instance; 
  bool HasPayLoadAttachedByLocationIDCount; 
  char value[6160]; 

  if ( bdJSONDeserializer::getString(CRMContent, "message_id", value, 0x1801u) )
    LUI_SetTableString("message_id", value, LUI_luaVM);
  if ( bdJSONDeserializer::getString(CRMContent, "title", value, 0x1801u) )
    LUI_SetTableString("title", value, LUI_luaVM);
  if ( bdJSONDeserializer::getString(CRMContent, "content_short", value, 0x1801u) )
    LUI_SetTableString("content_short", value, LUI_luaVM);
  if ( bdJSONDeserializer::getString(CRMContent, "popup_action_title", value, 0x1801u) )
    LUI_SetTableString("popup_action_title", value, LUI_luaVM);
  if ( bdJSONDeserializer::hasKey(CRMContent, "popup_image") && bdJSONDeserializer::getString(CRMContent, "popup_image", value, 0x1801u) )
    LUI_SetTableString("popup_image", value, LUI_luaVM);
  if ( bdJSONDeserializer::hasKey(CRMContent, "action_title") && bdJSONDeserializer::getString(CRMContent, "action_title", value, 0x1801u) )
    LUI_SetTableString("action_title", value, LUI_luaVM);
  if ( bdJSONDeserializer::getString(CRMContent, "action", value, 0x1801u) )
    LUI_SetTableString("action", value, LUI_luaVM);
  v6 = 0i64;
  do
  {
    v7 = (unsigned __int8)value[v6++];
    v8 = v7 - (unsigned __int8)aRedeem_0[v6 - 1];
  }
  while ( !v8 && v6 != 7 );
  Instance = MarketingCommsManager::GetInstance();
  HasPayLoadAttachedByLocationIDCount = MarketingCommsManager::HasPayLoadAttachedByLocationIDCount(Instance, locationID, messageIndex);
  if ( v8 )
  {
    if ( HasPayLoadAttachedByLocationIDCount )
      Com_PrintError(25, "CRM PAYLOAD ERROR! Action type is [%s] but should be [%s] when a message has a payload!\n", value, "redeem");
  }
  else if ( !HasPayLoadAttachedByLocationIDCount )
  {
    Com_PrintError(25, "CRM PAYLOAD ERROR! Action type is [%s] but there is no payload attached!!\n", value);
  }
  if ( bdJSONDeserializer::hasKey(CRMContent, "action_location") && bdJSONDeserializer::getString(CRMContent, "action_location", value, 0x1801u) )
    LUI_SetTableString("action_location", value, LUI_luaVM);
  if ( bdJSONDeserializer::getString(CRMContent, "item", value, 0x1801u) )
    LUI_SetTableString("item", value, LUI_luaVM);
  if ( bdJSONDeserializer::hasKey(CRMContent, "image") && bdJSONDeserializer::getString(CRMContent, "image", value, 0x1801u) )
    LUI_SetTableString("image", value, LUI_luaVM);
  if ( bdJSONDeserializer::getString(CRMContent, "content_long", value, 0x1801u) )
    LUI_SetTableString("content_long", value, LUI_luaVM);
  if ( bdJSONDeserializer::hasKey(CRMContent, "force_view_time") && bdJSONDeserializer::getString(CRMContent, "force_view_time", value, 0x1801u) )
    LUI_SetTableString("force_view_time", value, LUI_luaVM);
  if ( bdJSONDeserializer::hasKey(CRMContent, "layout_type") && bdJSONDeserializer::getString(CRMContent, "layout_type", value, 0x1801u) )
    LUI_SetTableString("layout_type", value, LUI_luaVM);
}

/*
==============
LUI_GetDDL
==============
*/
__int64 LUI_GetDDL(lua_State *luaVM, const int nargs, const DDLDef *const def, const DDLContext *buffer, const StatsGroup statsGroup)
{
  int v9; 
  int v11; 
  int v12; 
  const char *v13; 
  const char *v14; 
  int v15; 
  int v16; 
  const char *v17; 
  const char *v18; 
  const char *v19; 
  const char *v20; 
  DDLType Type; 
  bool Bool; 
  int Int; 
  double Float; 
  unsigned __int16 Short; 
  unsigned __int8 Byte; 
  const char *Enum; 
  DDLState state; 

  state.isValid = 0;
  state.arrayIndex = -1;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  v9 = 0;
  state.offset = 0;
  *(_OWORD *)&state.member = _XMM0;
  v11 = -nargs;
  LiveStorage_InitializeDDLStateForStatsGroup(def, &state, statsGroup);
  for ( ; !DDL_StateIsLeaf(&state); ++v11 )
  {
    if ( v11 > 0 )
      j_luaL_error(luaVM, "DDL lookup did not receive enough arguments");
    if ( DDL_StateIsArrayRoot(&state) )
    {
      if ( !j_lua_isnumber(luaVM, v11) )
      {
        v12 = j_lua_type(luaVM, v11);
        v13 = j_lua_typename(luaVM, v12);
        v14 = j_va("Expected integer when parsing navigating DDL data but got %s", v13);
        j_luaL_error(luaVM, v14);
      }
      v15 = lui_tointeger32(luaVM, v11);
      DDL_MoveToIndex(&state, &state, v15);
    }
    else
    {
      if ( !j_lua_isstring(luaVM, v11) )
      {
        v16 = j_lua_type(luaVM, v11);
        v17 = j_lua_typename(luaVM, v16);
        v18 = j_va("Expected string when navigating DDL data but got %s", v17);
        j_luaL_error(luaVM, v18);
      }
      if ( !j_lua_tolstring(luaVM, v11, NULL) )
      {
        v20 = j_va("Expected string when navigating DDL data but got NULL");
        j_luaL_error(luaVM, v20);
      }
      v19 = j_lua_tolstring(luaVM, v11, NULL);
      DDL_MoveToName(&state, &state, v19);
    }
    ++v9;
  }
  if ( v9 != nargs )
    j_luaL_error(luaVM, "DDL lookup received too many arguments");
  Type = DDL_GetType(&state);
  switch ( Type )
  {
    case DDL_BYTE_TYPE:
      Byte = DDL_GetByte(&state, buffer);
      j_lua_pushinteger(luaVM, Byte);
      break;
    case DDL_SHORT_TYPE:
      Short = DDL_GetShort(&state, buffer);
      j_lua_pushinteger(luaVM, Short);
      break;
    case DDL_UINT_TYPE:
    case DDL_INT_TYPE:
      if ( DDL_StateGetBitSize(&state) == 1 )
      {
        Bool = DDL_GetBool(&state, buffer);
        j_lua_pushboolean(luaVM, Bool);
      }
      else
      {
        Int = DDL_GetInt(&state, buffer);
        j_lua_pushinteger(luaVM, Int);
      }
      break;
    case DDL_FLOAT_TYPE:
      Float = DDL_GetFloat(&state, buffer);
      j_lua_pushnumber(luaVM, *(float *)&Float);
      break;
    case DDL_ENUM_TYPE:
      Enum = DDL_GetEnum(&state, buffer);
      goto LABEL_27;
    default:
      if ( Type != DDL_STRING_TYPE )
        j_luaL_error(luaVM, "LUI_GetDDL encountered unsupported type %d", (unsigned int)Type);
      Enum = DDL_GetString(&state, buffer);
LABEL_27:
      j_lua_pushstring(luaVM, Enum);
      break;
  }
  return 1i64;
}

/*
==============
LUI_SetDDL
==============
*/
bool LUI_SetDDL(lua_State *luaVM, const int nargs, const DDLDef *def, DDLContext *buffer, const StatsGroup statsGroup)
{
  int v9; 
  int v11; 
  int v12; 
  const char *v13; 
  const char *v14; 
  int v15; 
  int v16; 
  const char *v17; 
  const char *v18; 
  const char *v19; 
  const char *v20; 
  DDLType Type; 
  int v22; 
  bool result; 
  int v24; 
  double v25; 
  int v26; 
  unsigned __int16 v27; 
  int v28; 
  unsigned __int8 v29; 
  const char *v30; 
  const char *v31; 
  DDLState state; 

  state.isValid = 0;
  state.arrayIndex = -1;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  v9 = 0;
  state.offset = 0;
  *(_OWORD *)&state.member = _XMM0;
  v11 = -nargs;
  LiveStorage_InitializeDDLStateForStatsGroup(def, &state, statsGroup);
  for ( ; !DDL_StateIsLeaf(&state); ++v11 )
  {
    if ( v11 > 0 )
      j_luaL_error(luaVM, "DDL lookup did not receive enough arguments");
    if ( DDL_StateIsArrayRoot(&state) )
    {
      if ( !j_lua_isnumber(luaVM, v11) )
      {
        v12 = j_lua_type(luaVM, v11);
        v13 = j_lua_typename(luaVM, v12);
        v14 = j_va("Expected integer when parsing navigating DDL data but got %s", v13);
        j_luaL_error(luaVM, v14);
      }
      v15 = lui_tointeger32(luaVM, v11);
      DDL_MoveToIndex(&state, &state, v15);
    }
    else
    {
      if ( !j_lua_isstring(luaVM, v11) )
      {
        v16 = j_lua_type(luaVM, v11);
        v17 = j_lua_typename(luaVM, v16);
        v18 = j_va("Expected string when navigating DDL data but got %s", v17);
        j_luaL_error(luaVM, v18);
      }
      if ( !j_lua_tolstring(luaVM, v11, NULL) )
      {
        v20 = j_va("Expected string when navigating DDL data but got NULL");
        j_luaL_error(luaVM, v20);
      }
      v19 = j_lua_tolstring(luaVM, v11, NULL);
      DDL_MoveToName(&state, &state, v19);
    }
    ++v9;
  }
  if ( v9 != nargs - 1 )
    j_luaL_error(luaVM, "DDL lookup received too many arguments");
  Type = DDL_GetType(&state);
  switch ( Type )
  {
    case DDL_BYTE_TYPE:
      if ( !j_lua_isnumber(luaVM, -1) )
        j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isnumber( luaVM, -1 )");
      v28 = lui_tointeger32(luaVM, -1);
      v29 = v28;
      if ( (v28 < 0 || (unsigned int)v28 > 0xFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,int>(int)", "unsigned", (unsigned __int8)v28, "signed", v28) )
        __debugbreak();
      result = DDL_SetByte(&state, buffer, v29);
      break;
    case DDL_SHORT_TYPE:
      if ( !j_lua_isnumber(luaVM, -1) )
        j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isnumber( luaVM, -1 )");
      v26 = lui_tointeger32(luaVM, -1);
      v27 = v26;
      if ( (unsigned int)(v26 + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)v26, "signed", v26) )
        __debugbreak();
      result = DDL_SetShort(&state, buffer, v27);
      break;
    case DDL_UINT_TYPE:
    case DDL_INT_TYPE:
      if ( DDL_StateGetBitSize(&state) == 1 )
      {
        if ( j_lua_type(luaVM, -1) != 1 )
          j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isboolean( luaVM, -1 )");
        v22 = j_lua_toboolean(luaVM, -1);
        result = DDL_SetBool(&state, buffer, v22 != 0);
      }
      else
      {
        if ( !j_lua_isnumber(luaVM, -1) )
          j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isnumber( luaVM, -1 )");
        v24 = lui_tointeger32(luaVM, -1);
        result = DDL_SetInt(&state, buffer, v24);
      }
      break;
    case DDL_FLOAT_TYPE:
      if ( !j_lua_isnumber(luaVM, -1) )
        j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isnumber( luaVM, -1 )");
      v25 = lui_tonumber32(luaVM, -1);
      result = DDL_SetFloat(&state, buffer, *(float *)&v25);
      break;
    case DDL_ENUM_TYPE:
      if ( !j_lua_isstring(luaVM, -1) )
        j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isstring( luaVM, -1 )");
      v30 = j_lua_tolstring(luaVM, -1, NULL);
      result = DDL_SetEnum(&state, buffer, v30);
      break;
    default:
      if ( !j_lua_isstring(luaVM, -1) )
        j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isstring( luaVM, -1 )");
      if ( Type != DDL_STRING_TYPE )
        j_luaL_error(luaVM, "LUI_SetDDL encountered unsupported type %d", (unsigned int)Type);
      v31 = j_lua_tolstring(luaVM, -1, NULL);
      result = DDL_SetString(&state, buffer, v31);
      break;
  }
  return result;
}

