/*
==============
LUI_CoD_RegisterPlaylistFunctions
==============
*/

void __fastcall LUI_CoD_RegisterPlaylistFunctions(lua_State *luaVM)
{
  ?LUI_CoD_RegisterPlaylistFunctions@@YAXPEAUlua_State@@@Z(luaVM);
}

/*
==============
LUI_CoD_LuaCall_DoAction
==============
*/
__int64 LUI_CoD_LuaCall_DoAction(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_CoD_LuaCall_DoAction_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_GetPreselectedCategory
==============
*/
__int64 LUI_CoD_LuaCall_GetPreselectedCategory(lua_State *luaVM)
{
  int PreselectedPlaylistCategory; 
  unsigned int v3; 

  PreselectedPlaylistCategory = PlaylistFeeder_GetPreselectedPlaylistCategory();
  j_lua_pushinteger(luaVM, PreselectedPlaylistCategory);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetPreselectedIndexInCategory
==============
*/
__int64 LUI_CoD_LuaCall_GetPreselectedIndexInCategory(lua_State *luaVM)
{
  int PreselectedPlaylistIndexInCategory; 
  unsigned int v3; 

  PreselectedPlaylistIndexInCategory = PlaylistFeeder_GetPreselectedPlaylistIndexInCategory();
  j_lua_pushinteger(luaVM, PreselectedPlaylistIndexInCategory);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetPlaylistName
==============
*/
__int64 LUI_CoD_LuaCall_GetPlaylistName(lua_State *luaVM)
{
  int v2; 
  int PlaylistIdForNum; 
  const char *PlaylistName; 
  unsigned int v5; 

  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "GetPlaylistName takes a playlistId");
  v2 = lui_tointeger32(luaVM, 1);
  PlaylistIdForNum = Playlist_GetPlaylistIdForNum(v2);
  PlaylistName = Playlist_GetPlaylistName(PlaylistIdForNum);
  j_lua_pushstring(luaVM, PlaylistName);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v5);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetPlaylistGameTypes
==============
*/
__int64 LUI_CoD_LuaCall_GetPlaylistGameTypes(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 
  unsigned int ItemPlaylistId; 
  unsigned int v5; 
  int NumEntries; 
  signed int v7; 
  int v8; 
  playlistEntry *Entry; 
  playlistGametype *GameType; 
  unsigned int v11; 
  unsigned int v13; 

  if ( !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "GetPlaylistGameTypes takes a (int)category and (int)index");
  v2 = lui_tointeger32(luaVM, 1);
  v3 = lui_tointeger32(luaVM, 2);
  ItemPlaylistId = Playlist_GetItemPlaylistId(LOCAL_CLIENT_0, v2, v3);
  v5 = ItemPlaylistId;
  if ( ItemPlaylistId > 0x80 )
  {
    v13 = ItemPlaylistId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_playlist.cpp", 293, ASSERT_TYPE_ASSERT, "( ( playlistId >= 0 && playlistId < 129 ) )", "( playlistId ) = %i", v13) )
      __debugbreak();
  }
  NumEntries = Playlist_GetNumEntries(v5);
  j_lua_createtable(luaVM, 0, 0);
  v7 = 0;
  v8 = j_lua_gettop(luaVM);
  while ( v7 < NumEntries )
  {
    Entry = Playlist_GetEntry(v5, v7);
    GameType = Playlist_GetGameType(Entry->gametype);
    j_lua_pushstring(luaVM, GameType->internalName);
    j_lua_rawseti(luaVM, v8, ++v7);
  }
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v11 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v11);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetPlaylistID
==============
*/
__int64 LUI_CoD_LuaCall_GetPlaylistID(lua_State *luaVM)
{
  int v2; 
  int PlaylistIdForNum; 
  unsigned int v4; 

  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "GetPlaylistID takes a playlistNum");
  v2 = lui_tointeger32(luaVM, 1);
  PlaylistIdForNum = Playlist_GetPlaylistIdForNum(v2);
  j_lua_pushinteger(luaVM, PlaylistIdForNum);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetItemVideo
==============
*/
__int64 LUI_CoD_LuaCall_GetItemVideo(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 
  const char *ItemVideo; 
  unsigned int v5; 

  if ( !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "GetItemVideo takes a (int)category and (int)index");
  v2 = lui_tointeger32(luaVM, 1);
  v3 = lui_tointeger32(luaVM, 2);
  ItemVideo = Playlist_GetItemVideo(LOCAL_CLIENT_0, v2, v3);
  j_lua_pushstring(luaVM, ItemVideo);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v5);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetItemFeaturedImage
==============
*/
__int64 LUI_CoD_LuaCall_GetItemFeaturedImage(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 
  const char *ItemFeaturedImage; 
  unsigned int v5; 

  if ( !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "GetItemFeaturedImage takes a (int)category and (int)index");
  v2 = lui_tointeger32(luaVM, 1);
  v3 = lui_tointeger32(luaVM, 2);
  ItemFeaturedImage = Playlist_GetItemFeaturedImage(LOCAL_CLIENT_0, v2, v3);
  j_lua_pushstring(luaVM, ItemFeaturedImage);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v5);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetLockState
==============
*/
__int64 LUI_CoD_LuaCall_GetLockState(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 
  PlaylistLockState LockState; 
  unsigned int v5; 

  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "Expected playlist category index");
  if ( !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "Expected playlist index");
  v2 = lui_tointeger32(luaVM, 1);
  v3 = lui_tointeger32(luaVM, 2);
  LockState = Playlist_GetLockState(LOCAL_CLIENT_0, v2, v3);
  j_lua_pushinteger(luaVM, (unsigned __int8)LockState);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v5);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_DoPlaylistId
==============
*/
__int64 LUI_CoD_LuaCall_DoPlaylistId(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 
  bool v4; 
  unsigned int v5; 

  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "DoPlaylistId takes a (int)DoPlaylistId");
  v2 = lui_tointeger32(luaVM, 1);
  v3 = 0;
  if ( j_lua_gettop(luaVM) > 1 )
  {
    if ( !j_lua_isnumber(luaVM, 2) )
      j_luaL_error(luaVM, "Second parameter of DoPlaylistId has to be a number");
    v3 = lui_tointeger32(luaVM, 2);
  }
  v4 = Playlist_DoPlaylistId(LOCAL_CLIENT_0, v3, v2);
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
LUI_CoD_LuaCall_GetFiltered
==============
*/
__int64 LUI_CoD_LuaCall_GetFiltered(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 
  bool IsCategoryFiltered; 
  bool IsPlaylistFiltered; 
  unsigned int v6; 

  if ( !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "GetFiltered takes a (int)category and (int)index");
  v2 = lui_tointeger32(luaVM, 1);
  v3 = lui_tointeger32(luaVM, 2);
  IsCategoryFiltered = Playlist_IsCategoryFiltered(LOCAL_CLIENT_0, v2);
  j_lua_pushboolean(luaVM, IsCategoryFiltered);
  IsPlaylistFiltered = Playlist_IsPlaylistFiltered(LOCAL_CLIENT_0, v2, v3);
  j_lua_pushboolean(luaVM, IsPlaylistFiltered);
  if ( j_lua_gettop(luaVM) < 2 )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 2i64, v6);
  }
  return 2i64;
}

/*
==============
LUI_CoD_LuaCall_SetFiltered
==============
*/
__int64 LUI_CoD_LuaCall_SetFiltered(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 
  unsigned int v4; 

  if ( !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "SetFiltered takes a (int)category and (int)index");
  v2 = lui_tointeger32(luaVM, 1);
  v3 = lui_tointeger32(luaVM, 2);
  Playlist_SetFiltered(LOCAL_CLIENT_0, v2, v3);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_IsCategoryFiltered
==============
*/
__int64 LUI_CoD_LuaCall_IsCategoryFiltered(lua_State *luaVM)
{
  unsigned int v2; 
  bool IsCategoryFiltered; 
  unsigned int v4; 

  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "IsCategoryFiltered takes a (int)category");
  v2 = lui_tointeger32(luaVM, 1);
  IsCategoryFiltered = Playlist_IsCategoryFiltered(LOCAL_CLIENT_0, v2);
  j_lua_pushboolean(luaVM, IsCategoryFiltered);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_IsCategoryFeatured
==============
*/
__int64 LUI_CoD_LuaCall_IsCategoryFeatured(lua_State *luaVM)
{
  unsigned int v2; 
  bool IsCategoryFeatured; 
  unsigned int v4; 

  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "IsCategoryFeatured takes a (int)category");
  v2 = lui_tointeger32(luaVM, 1);
  IsCategoryFeatured = Playlist_IsCategoryFeatured(LOCAL_CLIENT_0, v2);
  j_lua_pushboolean(luaVM, IsCategoryFeatured);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_IsCategoryHardcore
==============
*/
__int64 LUI_CoD_LuaCall_IsCategoryHardcore(lua_State *luaVM)
{
  unsigned int v2; 
  bool IsCategoryHardcore; 
  unsigned int v4; 

  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "IsCategoryHardcore takes a (int)category");
  v2 = lui_tointeger32(luaVM, 1);
  IsCategoryHardcore = Playlist_IsCategoryHardcore(LOCAL_CLIENT_0, v2);
  j_lua_pushboolean(luaVM, IsCategoryHardcore);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_IsCategoryPromoted
==============
*/
__int64 LUI_CoD_LuaCall_IsCategoryPromoted(lua_State *luaVM)
{
  unsigned int v2; 
  bool IsCategoryPromoted; 
  unsigned int v4; 

  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "IsCategoryPromoted takes a (int)category");
  v2 = lui_tointeger32(luaVM, 1);
  IsCategoryPromoted = Playlist_IsCategoryPromoted(LOCAL_CLIENT_0, v2);
  j_lua_pushboolean(luaVM, IsCategoryPromoted);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_IsCategoryCDL
==============
*/
__int64 LUI_CoD_LuaCall_IsCategoryCDL(lua_State *luaVM)
{
  unsigned int v2; 
  bool IsCategoryCDL; 
  unsigned int v4; 

  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "Playlist_IsCategoryCDL takes a (int)category");
  v2 = lui_tointeger32(luaVM, 1);
  IsCategoryCDL = Playlist_IsCategoryCDL(LOCAL_CLIENT_0, v2);
  j_lua_pushboolean(luaVM, IsCategoryCDL);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_IsCategoryBR
==============
*/
__int64 LUI_CoD_LuaCall_IsCategoryBR(lua_State *luaVM)
{
  unsigned int v2; 
  bool IsCategoryBR; 
  unsigned int v4; 

  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "Playlist_IsCategoryBR takes a (int)category");
  v2 = lui_tointeger32(luaVM, 1);
  IsCategoryBR = Playlist_IsCategoryBR(LOCAL_CLIENT_0, v2);
  j_lua_pushboolean(luaVM, IsCategoryBR);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_CoD_IsAnyPlaylistInCategoryRestrictF2P
==============
*/
__int64 LUI_CoD_IsAnyPlaylistInCategoryRestrictF2P(lua_State *luaVM)
{
  unsigned int v2; 
  int v3; 
  int ItemPlaylistId; 
  bool v5; 
  unsigned int v6; 

  if ( !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "IsAnyPlaylistInCategoryRestrictF2P takes a (int)playlist and category");
  v2 = lua_tointeger32(luaVM, 1);
  v3 = lua_tointeger32(luaVM, 2);
  ItemPlaylistId = Playlist_GetItemPlaylistId(LOCAL_CLIENT_0, v3, v2);
  v5 = Playlist_AnyPlaylistInCategoryRestrictsF2P(ItemPlaylistId, v3);
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
LUI_CoD_LuaCall_IsBRPlunderPostTutorial
==============
*/
__int64 LUI_CoD_LuaCall_IsBRPlunderPostTutorial(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 
  int ItemPlaylistId; 
  bool IsBRPlunderPostTutorial; 
  unsigned int v6; 

  if ( !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "LUI_CoD_LuaCall_IsBRPlunderPostTutorial takes a (int)playlist and category");
  v2 = lua_tointeger32(luaVM, 1);
  v3 = lua_tointeger32(luaVM, 2);
  ItemPlaylistId = Playlist_GetItemPlaylistId(LOCAL_CLIENT_0, v3, v2);
  IsBRPlunderPostTutorial = Playlist_IsBRPlunderPostTutorial(ItemPlaylistId);
  j_lua_pushboolean(luaVM, IsBRPlunderPostTutorial);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v6);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_IsDMZPostTutorial
==============
*/
__int64 LUI_CoD_LuaCall_IsDMZPostTutorial(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 
  int ItemPlaylistId; 
  bool IsDMZPostTutorial; 
  unsigned int v6; 

  if ( !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "LUI_CoD_LuaCall_IsBRPlunderPostTutorial takes a (int)playlist and category");
  v2 = lua_tointeger32(luaVM, 1);
  v3 = lua_tointeger32(luaVM, 2);
  ItemPlaylistId = Playlist_GetItemPlaylistId(LOCAL_CLIENT_0, v3, v2);
  IsDMZPostTutorial = Playlist_IsDMZPostTutorial(ItemPlaylistId);
  j_lua_pushboolean(luaVM, IsDMZPostTutorial);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v6);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_IsSurvival
==============
*/
__int64 LUI_CoD_LuaCall_IsSurvival(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 
  int ItemPlaylistId; 
  bool IsSurvival; 
  unsigned int v6; 

  if ( !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "LUI_CoD_LuaCall_IsSurvival takes a (int)playlist and category");
  v2 = lua_tointeger32(luaVM, 1);
  v3 = lua_tointeger32(luaVM, 2);
  ItemPlaylistId = Playlist_GetItemPlaylistId(LOCAL_CLIENT_0, v3, v2);
  IsSurvival = Playlist_IsSurvival(ItemPlaylistId);
  j_lua_pushboolean(luaVM, IsSurvival);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v6);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_IsSplitscreenRestricted
==============
*/
__int64 LUI_CoD_LuaCall_IsSplitscreenRestricted(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 
  int ItemPlaylistId; 
  bool v5; 
  unsigned int v6; 

  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "IsSplitscreenRestricted takes a (int)playlist and category");
  v2 = lua_tointeger32(luaVM, 1);
  v3 = lua_tointeger32(luaVM, 2);
  ItemPlaylistId = Playlist_GetItemPlaylistId(LOCAL_CLIENT_0, v3, v2);
  v5 = Playlist_RestrictsSplitscreen(ItemPlaylistId);
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
LUI_CoD_LuaCall_IsLimitedTime
==============
*/
__int64 LUI_CoD_LuaCall_IsLimitedTime(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 
  int ItemPlaylistId; 
  bool IsLimitedTime; 
  unsigned int v6; 

  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "IsLimitedTime takes a (int)playlist and category");
  v2 = lua_tointeger32(luaVM, 1);
  v3 = lua_tointeger32(luaVM, 2);
  ItemPlaylistId = Playlist_GetItemPlaylistId(LOCAL_CLIENT_0, v3, v2);
  IsLimitedTime = Playlist_IsLimitedTime(ItemPlaylistId);
  j_lua_pushboolean(luaVM, IsLimitedTime);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v6);
  }
  return 1i64;
}

/*
==============
LUI_CoD_RegisterPlaylistFunctions
==============
*/
void LUI_CoD_RegisterPlaylistFunctions(lua_State *luaVM)
{
  j_luaL_register(luaVM, "Playlist", Engine_methods);
  j_lua_settop(luaVM, -2);
}

