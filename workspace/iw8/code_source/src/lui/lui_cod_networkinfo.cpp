/*
==============
LUI_CoD_RegisterNetworkInfoFunctions
==============
*/

void __fastcall LUI_CoD_RegisterNetworkInfoFunctions(lua_State *luaVM)
{
  ?LUI_CoD_RegisterNetworkInfoFunctions@@YAXPEAUlua_State@@@Z(luaVM);
}

/*
==============
LUI_CoD_LuaCall_HasValidDCQoSResult
==============
*/
__int64 LUI_CoD_LuaCall_HasValidDCQoSResult(lua_State *const luaVM)
{
  int v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: NetworkInfo.HasValidDCQoSResult()\n");
  v2 = Online_DcQos_IsResultValid(DCQOS_RESULT_DATACENTERS) && Online_DcQos_GetDatacenterCount() > 0;
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
LUI_CoD_LuaCall_IsConnectedToFirstParty
==============
*/
__int64 LUI_CoD_LuaCall_IsConnectedToFirstParty(lua_State *const luaVM)
{
  int ControllerFromClient; 
  bool IsSignedIn; 
  unsigned int v4; 

  ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
  IsSignedIn = Live_IsSignedIn(ControllerFromClient);
  j_lua_pushboolean(luaVM, IsSignedIn);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_IsConnectedToDW
==============
*/
__int64 LUI_CoD_LuaCall_IsConnectedToDW(lua_State *const luaVM)
{
  int ControllerFromClient; 
  bool IsConnectedToDemonware; 
  unsigned int v4; 

  ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
  IsConnectedToDemonware = Live_IsConnectedToDemonware(ControllerFromClient);
  j_lua_pushboolean(luaVM, IsConnectedToDemonware);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetBandwidth
==============
*/

__int64 __fastcall LUI_CoD_LuaCall_GetBandwidth(lua_State *const luaVM, double _XMM1_8)
{
  unsigned int v5; 

  if ( !Live_BandwidthTestInProgress() )
    Online_GetUploadSpeed();
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2sd xmm1, xmm1, edi; n
  }
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
LUI_CoD_LuaCall_IsOnWirelessConnection
==============
*/
__int64 LUI_CoD_LuaCall_IsOnWirelessConnection(lua_State *const luaVM)
{
  bool v2; 
  unsigned int v3; 

  v2 = Live_IsOnWifi();
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
LUI_CoD_LuaCall_GetNetworkRegionString
==============
*/
__int64 LUI_CoD_LuaCall_GetNetworkRegionString(lua_State *const luaVM)
{
  const char *CountryCodeString; 
  const char *RegionString; 
  const char *CityString; 
  unsigned int v5; 
  char dest[256]; 

  memset_0(dest, 0, sizeof(dest));
  if ( !LiveRegionInfo_NeedsRegionSync() )
  {
    CountryCodeString = LiveRegionInfo_GetCountryCodeString();
    RegionString = LiveRegionInfo_GetRegionString();
    CityString = LiveRegionInfo_GetCityString();
    Com_sprintf<256>((char (*)[256])dest, "%s, %s, %s", CityString, RegionString, CountryCodeString);
  }
  j_lua_pushstring(luaVM, dest);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v5);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetExternalIP
==============
*/
__int64 LUI_CoD_LuaCall_GetExternalIP(lua_State *const luaVM)
{
  bdCommonAddr *m_ptr; 
  volatile signed __int32 *p_m_refCount; 
  bdAddr *PublicAddr; 
  unsigned int v5; 
  __int64 str[8]; 

  str[0] = 0x302E302E302E30i64;
  memset(&str[1], 0, 56);
  if ( NET_IsStarted() )
  {
    m_ptr = NET_GetLocalCommonAddr()->m_ptr;
    p_m_refCount = (volatile signed __int32 *)&m_ptr->m_refCount;
    if ( m_ptr )
      _InterlockedExchangeAdd(p_m_refCount, 1u);
    if ( m_ptr )
    {
      PublicAddr = (bdAddr *)bdCommonAddr::getPublicAddr(m_ptr);
      bdAddr::toString(PublicAddr, (char *const)str, 0x40ui64);
      j_lua_pushstring(luaVM, (const char *)str);
    }
    if ( m_ptr && _InterlockedExchangeAdd(p_m_refCount, 0xFFFFFFFF) == 1 )
      ((void (__fastcall *)(bdCommonAddr *, __int64))m_ptr->~bdReferencable)(m_ptr, 1i64);
  }
  j_lua_pushstring(luaVM, (const char *)str);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v5);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetInternalIP
==============
*/
__int64 LUI_CoD_LuaCall_GetInternalIP(lua_State *const luaVM)
{
  bdCommonAddr *m_ptr; 
  volatile signed __int32 *p_m_refCount; 
  bdAddr *LocalAddrByIndex; 
  unsigned int v5; 
  __int64 str[8]; 

  str[0] = 0x302E302E302E30i64;
  memset(&str[1], 0, 56);
  if ( NET_IsStarted() )
  {
    m_ptr = NET_GetLocalCommonAddr()->m_ptr;
    p_m_refCount = (volatile signed __int32 *)&m_ptr->m_refCount;
    if ( m_ptr )
      _InterlockedExchangeAdd(p_m_refCount, 1u);
    if ( m_ptr )
    {
      LocalAddrByIndex = (bdAddr *)bdCommonAddr::getLocalAddrByIndex(m_ptr, 0);
      bdAddr::toString(LocalAddrByIndex, (char *const)str, 0x40ui64);
    }
    if ( m_ptr && _InterlockedExchangeAdd(p_m_refCount, 0xFFFFFFFF) == 1 )
      ((void (__fastcall *)(bdCommonAddr *, __int64))m_ptr->~bdReferencable)(m_ptr, 1i64);
  }
  j_lua_pushstring(luaVM, (const char *)str);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v5);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetFenceStateString
==============
*/
__int64 LUI_CoD_LuaCall_GetFenceStateString(lua_State *const luaVM)
{
  int ControllerFromClient; 
  unsigned int v3; 
  unsigned int v4; 
  __int64 v5; 
  char v6; 
  unsigned int v7; 
  char str[128]; 

  ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
  v3 = Live_SyncOnlineDataFlags(ControllerFromClient);
  memset_0(str, 0, sizeof(str));
  v4 = 0;
  v5 = 0i64;
  do
  {
    if ( _bittest((const int *)&v3, v4) )
      v6 = 45;
    else
      v6 = v4 + 65;
    str[v5] = v6;
    ++v4;
    str[v5 + 1] = 44;
    v5 += 2i64;
  }
  while ( v4 < 0x14 );
  str[40] = 0;
  j_lua_pushstring(luaVM, str);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v7 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v7);
  }
  return 1i64;
}

/*
==============
LUI_CoD_RegisterNetworkInfoFunctions
==============
*/
void LUI_CoD_RegisterNetworkInfoFunctions(lua_State *luaVM)
{
  j_luaL_register(luaVM, "NetworkInfo", NetworkInfo_Methods);
  j_lua_settop(luaVM, -2);
}

