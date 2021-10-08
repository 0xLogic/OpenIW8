/*
==============
LUI_CoD_RegisterFencingFunctions
==============
*/

void __fastcall LUI_CoD_RegisterFencingFunctions(lua_State *luaVM)
{
  ?LUI_CoD_RegisterFencingFunctions@@YAXPEAUlua_State@@@Z(luaVM);
}

/*
==============
LUI_CoD_LuaCall_OnlineServicesRequest
==============
*/
__int64 LUI_CoD_LuaCall_OnlineServicesRequest(lua_State *const luaVM)
{
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Fences.OCDSRequest( <controller> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 1);
    __asm { vcvttss2si ecx, xmm0; controllerIndex }
    Live_OnlineServicesFence_Request(_ECX);
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
LUI_CoD_LuaCall_OnlineServicesGetState
==============
*/
__int64 LUI_CoD_LuaCall_OnlineServicesGetState(lua_State *const luaVM)
{
  unsigned int v3; 
  char State; 
  OnlinePlayFailureReason ErrorCode; 
  unsigned int v7; 

  v3 = 0;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Fences.OCDSGetState( <controller> )");
  if ( j_lua_gettop(luaVM) == 1 )
  {
    if ( j_lua_isnumber(luaVM, 1) )
    {
      *(double *)&_XMM0 = lui_tonumber32(luaVM, 1);
      __asm { vcvttss2si ebp, xmm0 }
      State = Live_OnlineServicesFence_GetState(_EBP);
      j_lua_pushinteger(luaVM, State);
      v3 = 1;
      if ( State == 4 )
      {
        ErrorCode = Live_OnlineServicesFence_GetErrorCode(_EBP);
        j_lua_pushinteger(luaVM, ErrorCode);
        v3 = 2;
      }
    }
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
LUI_CoD_LuaCall_OnlineServicesResetState
==============
*/
__int64 LUI_CoD_LuaCall_OnlineServicesResetState(lua_State *const luaVM)
{
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Fences.OCDSResetState( <controller> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 1);
    __asm { vcvttss2si ecx, xmm0; controllerIndex }
    Live_OnlineServicesFence_ResetState(_ECX);
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
LUI_CoD_LuaCall_OnlineDataRequest
==============
*/
__int64 LUI_CoD_LuaCall_OnlineDataRequest(lua_State *const luaVM)
{
  int v5; 
  unsigned int v6; 

  if ( j_lua_gettop(luaVM) != 3 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_type(luaVM, 3) != 1 )
    j_luaL_error(luaVM, "USAGE: Fences.ODSFRequest( <controller>, <fencetype>, <shouldCacheFenceStatus> )");
  if ( j_lua_gettop(luaVM) == 3 && j_lua_isnumber(luaVM, 1) && j_lua_isnumber(luaVM, 2) && j_lua_type(luaVM, 3) == 1 )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 1);
    __asm { vcvttss2si edi, xmm0 }
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 2);
    __asm { vcvttss2si ebx, xmm0 }
    v5 = j_lua_toboolean(luaVM, 3);
    Live_SyncOnlineDataFence_Request(_EDI, _EBX, v5 != 0);
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
LUI_CoD_LuaCall_OnlineDataGetState
==============
*/
__int64 LUI_CoD_LuaCall_OnlineDataGetState(lua_State *const luaVM)
{
  unsigned int v3; 
  char State; 
  int ErrorCode; 
  unsigned int v8; 

  v3 = 0;
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Fences.ODSFGetState( <controller>, <fencetype> )");
  if ( j_lua_gettop(luaVM) == 2 )
  {
    if ( j_lua_isnumber(luaVM, 1) )
    {
      if ( j_lua_isnumber(luaVM, 2) )
      {
        *(double *)&_XMM0 = lui_tonumber32(luaVM, 1);
        __asm { vcvttss2si ebp, xmm0 }
        *(double *)&_XMM0 = lui_tonumber32(luaVM, 2);
        __asm { vcvttss2si r14d, xmm0 }
        State = Live_SyncOnlineDataFence_GetState(_EBP, _ER14);
        j_lua_pushinteger(luaVM, State);
        v3 = 1;
        if ( State == 4 )
        {
          ErrorCode = Live_SyncOnlineDataFence_GetErrorCode(_EBP, _ER14);
          j_lua_pushinteger(luaVM, ErrorCode);
          v3 = 2;
        }
      }
    }
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
LUI_CoD_LuaCall_OnlineDataResetState
==============
*/
__int64 LUI_CoD_LuaCall_OnlineDataResetState(lua_State *const luaVM)
{
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Fences.ODSFResetState( <controller>, <fencetype> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 1);
    __asm { vcvttss2si ebx, xmm0 }
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 2);
    __asm { vcvttss2si edx, xmm0; gameMode }
    Live_SyncOnlineDataFence_ResetState(_EBX, _EDX);
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
LUI_CoD_LuaCall_PatchGetState
==============
*/
__int64 LUI_CoD_LuaCall_PatchGetState(lua_State *const luaVM)
{
  char State; 
  unsigned int v3; 
  int ErrorCode; 
  __int64 v5; 
  unsigned int v6; 
  CCSPatchType patchType; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Fences.PatchGetState()");
  if ( j_lua_gettop(luaVM) )
  {
    v3 = 0;
    goto LABEL_15;
  }
  patchType = MOVEMENT;
  State = Live_PatchFence_GetState(&patchType);
  switch ( State )
  {
    case 0:
      v5 = 0i64;
      goto LABEL_13;
    case 2:
      v5 = 2i64;
LABEL_13:
      j_lua_pushinteger(luaVM, v5);
      v3 = 1;
      break;
    case 3:
      j_lua_pushinteger(luaVM, 3i64);
      patchType = MOVEMENT;
      ErrorCode = Live_PatchFence_GetErrorCode(&patchType);
      j_lua_pushinteger(luaVM, ErrorCode);
      v3 = 2;
      break;
    case 4:
      j_lua_pushinteger(luaVM, 4i64);
      v3 = 1;
      break;
    default:
      v3 = 1;
      j_lua_pushinteger(luaVM, 1i64);
      break;
  }
LABEL_15:
  if ( (int)v3 > j_lua_gettop(luaVM) )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v3, v6);
  }
  return v3;
}

/*
==============
LUI_CoD_LuaCall_PatchResetState
==============
*/
__int64 LUI_CoD_LuaCall_PatchResetState(lua_State *const luaVM)
{
  CCSPatchType i; 
  unsigned int v3; 
  CCSPatchType patchType; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Fences.PatchResetState()");
  if ( !j_lua_gettop(luaVM) )
  {
    for ( i = MOVEMENT; (unsigned int)i < COUNT; ++i )
    {
      patchType = i;
      Live_PatchFence_ResetState(&patchType);
    }
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
LUI_CoD_LuaCall_PatchGetProgress
==============
*/
__int64 LUI_CoD_LuaCall_PatchGetProgress(lua_State *const luaVM)
{
  CCSPatchType v6; 
  char v13; 
  char v14; 
  unsigned int v22; 
  CCSPatchType patchType; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Fences.PatchGetProgress()");
  v6 = MOVEMENT;
  if ( !j_lua_gettop(luaVM) )
  {
    __asm
    {
      vmovaps [rsp+58h+var_18], xmm6
      vmovss  xmm6, cs:__real@3f800000
      vmovaps [rsp+58h+var_28], xmm7
      vmovss  xmm7, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vmovaps [rsp+58h+var_38], xmm8
      vmovsd  xmm8, cs:__real@3f50624dd2f1a9fc
    }
    while ( 1 )
    {
      patchType = v6;
      *(double *)&_XMM0 = Live_PatchFence_GetProgress(&patchType);
      __asm
      {
        vsubss  xmm1, xmm6, xmm0
        vandps  xmm1, xmm1, xmm7
        vcvtss2sd xmm1, xmm1, xmm1
        vcomisd xmm1, xmm8
      }
      if ( !(v13 | v14) )
        break;
      if ( (unsigned int)++v6 >= COUNT )
        goto LABEL_9;
    }
    __asm { vmovaps xmm6, xmm0 }
LABEL_9:
    __asm
    {
      vmulss  xmm0, xmm6, cs:__real@42c80000
      vcvtss2sd xmm2, xmm0, xmm0
      vmovq   r8, xmm2
    }
    Com_Printf(25, "LUI_CoD_LuaCall_PatchGetProgress: patch progress %f %% \n", *(double *)&_XMM2);
    __asm { vcvtss2sd xmm1, xmm6, xmm6; n }
    j_lua_pushnumber(luaVM, *(long double *)&_XMM1);
    __asm { vmovaps xmm8, [rsp+58h+var_38] }
    v6 = DODGE;
    __asm
    {
      vmovaps xmm7, [rsp+58h+var_28]
      vmovaps xmm6, [rsp+58h+var_18]
    }
  }
  if ( v6 > j_lua_gettop(luaVM) )
  {
    v22 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", (unsigned int)v6, v22);
  }
  return (unsigned int)v6;
}

/*
==============
LUI_CoD_LuaCall_PatchRestart
==============
*/
__int64 LUI_CoD_LuaCall_PatchRestart(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Fences.PatchRestart()");
  if ( !j_lua_gettop(luaVM) )
  {
    Dvar_SetString_Internal(DVARSTR_lui_system_restart_message, "LUA_MENU/PATCH_UPDATE_SUCCESS");
    Dvar_SetBool_Internal(DVARBOOL_lui_system_restart_required, 1);
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
LUI_CoD_LuaCall_FenceSpinnerGetState
==============
*/
__int64 LUI_CoD_LuaCall_FenceSpinnerGetState(lua_State *const luaVM)
{
  unsigned int v2; 
  FenceChannel v3; 
  FenceState FenceState; 
  const char *ContextString; 
  unsigned int v6; 

  v2 = 0;
  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: Fences.LUI_CoD_LuaCall_FenceSpinnerGetState( <channel> )");
  if ( j_lua_gettop(luaVM) == 1 )
  {
    v3 = lui_tointeger32(luaVM, 1);
    FenceState = OnlineErrorManager::GetFenceState(&g_onlineMgr.m_errorManager, v3);
    j_lua_pushinteger(luaVM, FenceState);
    ContextString = OnlineErrorManager::GetContextString(&g_onlineMgr.m_errorManager, v3);
    j_lua_pushstring(luaVM, ContextString);
    v2 = 2;
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
LUI_CoD_LuaCall_FenceSpinnerGetSuccessShowPopup
==============
*/
__int64 LUI_CoD_LuaCall_FenceSpinnerGetSuccessShowPopup(lua_State *const luaVM)
{
  unsigned int v2; 
  int v3; 
  bool ShouldShowConfirmationPopup; 
  unsigned int v5; 

  v2 = 0;
  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: Fences.FenceSpinnerGetSuccessShowPopup( <channel> )");
  if ( j_lua_gettop(luaVM) == 1 )
  {
    v2 = 1;
    v3 = lui_tointeger32(luaVM, 1);
    ShouldShowConfirmationPopup = OnlineErrorManager::GetShouldShowConfirmationPopup(&g_onlineMgr.m_errorManager, (FenceChannel)v3);
    j_lua_pushboolean(luaVM, ShouldShowConfirmationPopup);
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
LUI_CoD_LuaCall_FenceSpinnerGetFailureAction
==============
*/
__int64 LUI_CoD_LuaCall_FenceSpinnerGetFailureAction(lua_State *const luaVM)
{
  unsigned int v2; 
  int v3; 
  int FailureAction; 
  unsigned int v5; 

  v2 = 0;
  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: Fences.LUI_CoD_LuaCall_FenceSpinnerGetFailureAction( <channel> )");
  if ( j_lua_gettop(luaVM) == 1 )
  {
    v2 = 1;
    v3 = lui_tointeger32(luaVM, 1);
    FailureAction = OnlineErrorManager::GetFailureAction(&g_onlineMgr.m_errorManager, (FenceChannel)v3);
    j_lua_pushinteger(luaVM, FailureAction);
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
LUI_CoD_LuaCall_FenceSpinnerReset
==============
*/
__int64 LUI_CoD_LuaCall_FenceSpinnerReset(lua_State *const luaVM)
{
  int v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: Fences.LUI_CoD_LuaCall_ResetErrorTask( <channel> )");
  if ( j_lua_gettop(luaVM) == 1 )
  {
    v2 = lui_tointeger32(luaVM, 1);
    OnlineErrorManager::ResetFence(&g_onlineMgr.m_errorManager, (FenceChannel)v2);
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
LUI_CoD_LuaCall_OfflineDataFetched
==============
*/
__int64 LUI_CoD_LuaCall_OfflineDataFetched(lua_State *const luaVM)
{
  unsigned int v3; 
  bool v5; 
  unsigned int v6; 

  v3 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Fences.OfflineDataFetched( <controllerIndex> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 1);
    __asm { vcvttss2si ecx, xmm0; controllerIndex }
    v5 = LiveStorage_AreStatsFetched(_ECX, STATS_OFFLINE);
    j_lua_pushboolean(luaVM, v5);
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
LUI_CoD_LuaCall_NetworkingStarted
==============
*/
__int64 LUI_CoD_LuaCall_NetworkingStarted(lua_State *const luaVM)
{
  bool IsStarted; 
  unsigned int v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Fences.NetworkingStarted()");
  if ( j_lua_gettop(luaVM) )
  {
    v3 = 0;
  }
  else
  {
    IsStarted = NET_IsStarted();
    j_lua_pushboolean(luaVM, IsStarted);
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
LUI_CoD_LuaCall_PlaylistsGetState
==============
*/
__int64 LUI_CoD_LuaCall_PlaylistsGetState(lua_State *const luaVM)
{
  __int64 v2; 
  bool HasNewPlaylistChanged; 
  unsigned int v4; 

  if ( LiveStorage_GettingPlaylists() )
  {
    v2 = 1i64;
  }
  else
  {
    HasNewPlaylistChanged = Playlist_HasNewPlaylistChanged();
    v2 = 2i64;
    if ( HasNewPlaylistChanged )
      v2 = 0i64;
  }
  j_lua_pushinteger(luaVM, v2);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_StatsResetGetState
==============
*/

__int64 __fastcall LUI_CoD_LuaCall_StatsResetGetState(lua_State *const luaVM, double _XMM1_8)
{
  int v3; 
  StatsSource v4; 
  unsigned int v7; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, "USAGE: Fences.StatsResetGetState( controllerIndex, StatsSource )");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Fences.StatsResetGetState( controllerIndex, StatsSource )");
  if ( !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Fences.StatsResetGetState( controllerIndex, StatsSource )");
  v3 = lui_tointeger32(luaVM, 1);
  v4 = lui_tointeger32(luaVM, 2);
  if ( !LiveStorage_AreStatsFetched(v3, v4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_fencing_functions.cpp", 479, ASSERT_TYPE_ASSERT, "(LiveStorage_AreStatsFetched( controllerIndex, statsSource ))", (const char *)&queryFormat, "LiveStorage_AreStatsFetched( controllerIndex, statsSource )") )
    __debugbreak();
  LiveStorage_GetStatsResetState(v3, v4);
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2sd xmm1, xmm1, eax; n
  }
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
LUI_CoD_LuaCall_StatsResetProceed
==============
*/
__int64 LUI_CoD_LuaCall_StatsResetProceed(lua_State *const luaVM)
{
  int v2; 
  StatsSource v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, "USAGE: Fences.StatsResetProceed( controllerIndex, StatsSource )");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Fences.StatsResetProceed( controllerIndex, StatsSource )");
  if ( !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Fences.StatsResetProceed( controllerIndex, StatsSource )");
  v2 = lui_tointeger32(luaVM, 1);
  v3 = lui_tointeger32(luaVM, 2);
  if ( !LiveStorage_AreStatsFetched(v2, v3) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_fencing_functions.cpp", 493, ASSERT_TYPE_ASSERT, "(LiveStorage_AreStatsFetched( controllerIndex, statsSource ))", (const char *)&queryFormat, "LiveStorage_AreStatsFetched( controllerIndex, statsSource )") )
    __debugbreak();
  LiveStorage_ResetStats(v2, v3);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_HasMultiLoginError
==============
*/
__int64 LUI_CoD_LuaCall_HasMultiLoginError(lua_State *const luaVM)
{
  bool HasMultiLoginError; 
  unsigned int v3; 

  HasMultiLoginError = dwHasMultiLoginError();
  j_lua_pushboolean(luaVM, HasMultiLoginError);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_ShouldFenceSignInShowErrorPopup
==============
*/
__int64 LUI_CoD_LuaCall_ShouldFenceSignInShowErrorPopup(lua_State *const luaVM)
{
  bool ShouldFenceSignInShowMessage; 
  unsigned int v3; 

  ShouldFenceSignInShowMessage = Live_ShouldFenceSignInShowMessage();
  j_lua_pushboolean(luaVM, ShouldFenceSignInShowMessage);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_OwnershipStatusFenceStart
==============
*/
__int64 LUI_CoD_LuaCall_OwnershipStatusFenceStart(lua_State *const luaVM)
{
  unsigned int v2; 

  Live_OwnershipStatusFenceStart();
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_HasOwnershipStatusFenceTimedOut
==============
*/
__int64 LUI_CoD_LuaCall_HasOwnershipStatusFenceTimedOut(lua_State *const luaVM)
{
  bool HasOwnershipStatusFenceTimedOut; 
  unsigned int v3; 

  HasOwnershipStatusFenceTimedOut = Live_HasOwnershipStatusFenceTimedOut();
  j_lua_pushboolean(luaVM, HasOwnershipStatusFenceTimedOut);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_HasPlayerBannedFlag
==============
*/
__int64 LUI_CoD_LuaCall_HasPlayerBannedFlag(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Fences.HasPlayerBannedFlag( <controller> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
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
LUI_CoD_LuaCall_ClearPlayerBanFlags
==============
*/
__int64 LUI_CoD_LuaCall_ClearPlayerBanFlags(lua_State *const luaVM)
{
  int i; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Fences.ClearPlayerBanFlags()");
  if ( !j_lua_gettop(luaVM) )
  {
    for ( i = 0; i < 8; ++i )
      dwSetPlayerBannedType(i, BanType_None);
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
LUI_CoD_LuaCall_GetPlayerBannedType
==============
*/
__int64 LUI_CoD_LuaCall_GetPlayerBannedType(lua_State *const luaVM)
{
  BanType PlayerBannedType; 
  unsigned int v5; 

  PlayerBannedType = BanType_None;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Fences.GetPlayerBannedType( <controller> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 1);
    __asm { vcvttss2si ecx, xmm0; controllerIndex }
    PlayerBannedType = dwGetPlayerBannedType(_ECX);
  }
  j_lua_pushinteger(luaVM, PlayerBannedType);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v5);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_ClearPlayerBanType
==============
*/
__int64 LUI_CoD_LuaCall_ClearPlayerBanType(lua_State *const luaVM)
{
  int i; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Fences.ClearPlayerBanType()");
  if ( !j_lua_gettop(luaVM) )
  {
    for ( i = 0; i < 8; ++i )
      dwSetPlayerBannedType(i, BanType_None);
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
LUI_CoD_LuaCall_IsContentEnumerationDone
==============
*/
__int64 LUI_CoD_LuaCall_IsContentEnumerationDone(lua_State *const luaVM)
{
  bool IsEnumerationDone; 
  unsigned int v3; 

  IsEnumerationDone = 1;
  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Fences.IsContentEnumerationDone()");
  if ( !j_lua_gettop(luaVM) )
    IsEnumerationDone = Content_IsEnumerationDone();
  j_lua_pushboolean(luaVM, IsEnumerationDone);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetStatusStringForAllFences
==============
*/
__int64 LUI_CoD_LuaCall_GetStatusStringForAllFences(lua_State *const luaVM)
{
  unsigned int v3; 
  unsigned int v5; 
  char fenceStatusString[1024]; 

  v3 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Fences.GetStatusStringForAllFences( <controllerIndex> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 1);
    __asm { vcvttss2si ebx, xmm0 }
    memset_0(fenceStatusString, 0, sizeof(fenceStatusString));
    FenceManager_GetStatusStringForAllFences(_EBX, fenceStatusString, 1024);
    j_lua_pushstring(luaVM, fenceStatusString);
  }
  else
  {
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
LUI_CoD_LuaCall_PrintStatusStringForAllFences
==============
*/
__int64 LUI_CoD_LuaCall_PrintStatusStringForAllFences(lua_State *const luaVM)
{
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Fences.PrintStatusStringForAllFences( <controllerIndex> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 1);
    __asm { vcvttss2si ecx, xmm0; controllerIndex }
    FenceManager_PrintStatusStringForAllFences(_ECX);
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
LUI_CoD_LuaCall_GetStatusStringForRootFenceNotPassingForOnlineData
==============
*/
__int64 LUI_CoD_LuaCall_GetStatusStringForRootFenceNotPassingForOnlineData(lua_State *const luaVM)
{
  unsigned int v3; 
  const dvar_t *v6; 
  int RootFenceNotPassing; 
  int v8; 
  const char *v9; 
  unsigned int v10; 
  char dest[1024]; 

  v3 = 1;
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Fences.GetStatusStringForRootFenceNotPassingForOnlineData( <controllerIndex>, <gamemode> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 1);
    __asm { vcvttss2si ebp, xmm0 }
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 2);
    __asm { vcvttss2si r14d, xmm0 }
    memset_0(dest, 0, sizeof(dest));
    v6 = DVARBOOL_online_fences_should_show_root_fence_not_passing_in_popups;
    if ( !DVARBOOL_online_fences_should_show_root_fence_not_passing_in_popups && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_fences_should_show_root_fence_not_passing_in_popups") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    if ( v6->current.enabled )
    {
      RootFenceNotPassing = Live_SyncOnlineDataFence_GetRootFenceNotPassing(_EBP, _ER14);
      v8 = RootFenceNotPassing;
      if ( RootFenceNotPassing >= 0 )
      {
        v9 = j_va("%02d", (unsigned int)RootFenceNotPassing);
        I_strcat_truncate(dest, 0x400ui64, v9);
        FenceManager_GetStatusStringForFenceIndex(_EBP, v8, dest, 1024);
      }
    }
    j_lua_pushstring(luaVM, dest);
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
LUI_CoD_RegisterFencingFunctions
==============
*/
void LUI_CoD_RegisterFencingFunctions(lua_State *luaVM)
{
  j_luaL_register(luaVM, "Fences", Fencing_methods);
  j_lua_settop(luaVM, -2);
}

