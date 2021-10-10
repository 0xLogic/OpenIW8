/*
==============
opt_get_broadcast
==============
*/
__int64 opt_get_broadcast(lua_State *L, unsigned __int64 *ps)
{
  int optval; 
  int optlen; 

  optval = 0;
  optlen = 4;
  if ( getsockopt(*ps, 0xFFFF, 32, (char *)&optval, &optlen) >= 0 )
  {
    j_lua_pushboolean(L, optval);
    return 1i64;
  }
  else
  {
    j_lua_pushnil(L);
    j_lua_pushstring(L, "getsockopt failed");
    return 2i64;
  }
}

/*
==============
opt_get_dontroute
==============
*/
__int64 opt_get_dontroute(lua_State *L, unsigned __int64 *ps)
{
  int optval; 
  int optlen; 

  optval = 0;
  optlen = 4;
  if ( getsockopt(*ps, 0xFFFF, 16, (char *)&optval, &optlen) >= 0 )
  {
    j_lua_pushboolean(L, optval);
    return 1i64;
  }
  else
  {
    j_lua_pushnil(L);
    j_lua_pushstring(L, "getsockopt failed");
    return 2i64;
  }
}

/*
==============
opt_get_error
==============
*/
__int64 opt_get_error(lua_State *L, unsigned __int64 *ps)
{
  const char *v4; 
  int optval; 
  int optlen; 

  optval = 0;
  optlen = 4;
  if ( getsockopt(*ps, 0xFFFF, 4103, (char *)&optval, &optlen) >= 0 )
  {
    v4 = j_socket_strerror(optval);
    j_lua_pushstring(L, v4);
    return 1i64;
  }
  else
  {
    j_lua_pushnil(L);
    j_lua_pushstring(L, "getsockopt failed");
    return 2i64;
  }
}

/*
==============
opt_get_ip6_multicast_hops
==============
*/
int opt_get_ip6_multicast_hops(lua_State *L, unsigned __int64 *ps)
{
  return opt_getint(L, ps, 41, 10);
}

/*
==============
opt_get_ip6_multicast_loop
==============
*/
__int64 opt_get_ip6_multicast_loop(lua_State *L, unsigned __int64 *ps)
{
  int optval; 
  int optlen; 

  optval = 0;
  optlen = 4;
  if ( getsockopt(*ps, 41, 11, (char *)&optval, &optlen) >= 0 )
  {
    j_lua_pushboolean(L, optval);
    return 1i64;
  }
  else
  {
    j_lua_pushnil(L);
    j_lua_pushstring(L, "getsockopt failed");
    return 2i64;
  }
}

/*
==============
opt_get_ip6_unicast_hops
==============
*/
int opt_get_ip6_unicast_hops(lua_State *L, unsigned __int64 *ps)
{
  return opt_getint(L, ps, 41, 4);
}

/*
==============
opt_get_ip6_v6only
==============
*/
__int64 opt_get_ip6_v6only(lua_State *L, unsigned __int64 *ps)
{
  int optval; 
  int optlen; 

  optval = 0;
  optlen = 4;
  if ( getsockopt(*ps, 41, 27, (char *)&optval, &optlen) >= 0 )
  {
    j_lua_pushboolean(L, optval);
    return 1i64;
  }
  else
  {
    j_lua_pushnil(L);
    j_lua_pushstring(L, "getsockopt failed");
    return 2i64;
  }
}

/*
==============
opt_get_ip_multicast_if
==============
*/
__int64 opt_get_ip_multicast_if(lua_State *L, unsigned __int64 *ps)
{
  char *v4; 
  int optlen; 
  struct in_addr optval; 

  optlen = 4;
  if ( getsockopt(*ps, 0, 9, (char *)&optval, &optlen) >= 0 )
  {
    v4 = inet_ntoa(optval);
    j_lua_pushstring(L, v4);
    return 1i64;
  }
  else
  {
    j_lua_pushnil(L);
    j_lua_pushstring(L, "getsockopt failed");
    return 2i64;
  }
}

/*
==============
opt_get_ip_multicast_loop
==============
*/
__int64 opt_get_ip_multicast_loop(lua_State *L, unsigned __int64 *ps)
{
  int optval; 
  int optlen; 

  optval = 0;
  optlen = 4;
  if ( getsockopt(*ps, 0, 11, (char *)&optval, &optlen) >= 0 )
  {
    j_lua_pushboolean(L, optval);
    return 1i64;
  }
  else
  {
    j_lua_pushnil(L);
    j_lua_pushstring(L, "getsockopt failed");
    return 2i64;
  }
}

/*
==============
opt_get_keepalive
==============
*/
__int64 opt_get_keepalive(lua_State *L, unsigned __int64 *ps)
{
  int optval; 
  int optlen; 

  optval = 0;
  optlen = 4;
  if ( getsockopt(*ps, 0xFFFF, 8, (char *)&optval, &optlen) >= 0 )
  {
    j_lua_pushboolean(L, optval);
    return 1i64;
  }
  else
  {
    j_lua_pushnil(L);
    j_lua_pushstring(L, "getsockopt failed");
    return 2i64;
  }
}

/*
==============
opt_get_linger
==============
*/
__int64 opt_get_linger(lua_State *L, unsigned __int64 *ps)
{
  unsigned __int16 optval; 
  unsigned __int16 v5; 
  int optlen; 

  optlen = 4;
  if ( getsockopt(*ps, 0xFFFF, 128, (char *)&optval, &optlen) >= 0 )
  {
    j_lua_createtable(L, 0, 0);
    j_lua_pushboolean(L, optval);
    j_lua_setfield(L, -2, "on");
    j_lua_pushinteger(L, v5);
    j_lua_setfield(L, -2, "timeout");
    return 1i64;
  }
  else
  {
    j_lua_pushnil(L);
    j_lua_pushstring(L, "getsockopt failed");
    return 2i64;
  }
}

/*
==============
opt_get_reuseaddr
==============
*/
__int64 opt_get_reuseaddr(lua_State *L, unsigned __int64 *ps)
{
  int optval; 
  int optlen; 

  optval = 0;
  optlen = 4;
  if ( getsockopt(*ps, 0xFFFF, 4, (char *)&optval, &optlen) >= 0 )
  {
    j_lua_pushboolean(L, optval);
    return 1i64;
  }
  else
  {
    j_lua_pushnil(L);
    j_lua_pushstring(L, "getsockopt failed");
    return 2i64;
  }
}

/*
==============
opt_get_reuseport
==============
*/
__int64 opt_get_reuseport(lua_State *L, unsigned __int64 *ps)
{
  int optval; 
  int optlen; 

  optval = 0;
  optlen = 4;
  if ( getsockopt(*ps, 0xFFFF, 4, (char *)&optval, &optlen) >= 0 )
  {
    j_lua_pushboolean(L, optval);
    return 1i64;
  }
  else
  {
    j_lua_pushnil(L);
    j_lua_pushstring(L, "getsockopt failed");
    return 2i64;
  }
}

/*
==============
opt_get_tcp_nodelay
==============
*/
__int64 opt_get_tcp_nodelay(lua_State *L, unsigned __int64 *ps)
{
  int optval; 
  int optlen; 

  optval = 0;
  optlen = 4;
  if ( getsockopt(*ps, 6, 1, (char *)&optval, &optlen) >= 0 )
  {
    j_lua_pushboolean(L, optval);
    return 1i64;
  }
  else
  {
    j_lua_pushnil(L);
    j_lua_pushstring(L, "getsockopt failed");
    return 2i64;
  }
}

/*
==============
opt_getint
==============
*/
__int64 opt_getint(lua_State *L, unsigned __int64 *ps, int level, int name)
{
  char optval[4]; 
  int optlen[5]; 

  *(_DWORD *)optval = 0;
  optlen[0] = 4;
  if ( getsockopt(*ps, level, name, optval, optlen) >= 0 )
  {
    _XMM1 = 0i64;
    __asm { vcvtsi2sd xmm1, xmm1, dword ptr [rsp+48h+optval]; n }
    j_lua_pushnumber(L, *(long double *)&_XMM1);
    return 1i64;
  }
  else
  {
    j_lua_pushnil(L);
    j_lua_pushstring(L, "getsockopt failed");
    return 2i64;
  }
}

/*
==============
opt_ip6_setmembership
==============
*/
__int64 opt_ip6_setmembership(lua_State *L, unsigned __int64 *ps, int level, int name)
{
  const char *v9; 
  const char *v10; 
  __int64 pAddrBuf[2]; 
  int v14; 

  pAddrBuf[0] = 0i64;
  pAddrBuf[1] = 0i64;
  v14 = 0;
  if ( j_lua_type(L, 3) != 5 )
  {
    v9 = j_lua_typename(L, 5);
    j_auxiliar_typeerror(L, 3, v9);
  }
  j_lua_pushstring(L, "multiaddr");
  j_lua_gettable(L, 3);
  if ( !j_lua_isstring(L, -1) )
    j_luaL_argerror(L, 3, "string 'multiaddr' field expected");
  v10 = j_lua_tolstring(L, -1, NULL);
  if ( !inet_pton(23, v10, pAddrBuf) )
    j_luaL_argerror(L, 3, "invalid 'multiaddr' ip address");
  j_lua_pushstring(L, "interface");
  j_lua_gettable(L, 3);
  if ( j_lua_type(L, -1) )
  {
    if ( !j_lua_isnumber(L, -1) )
      j_luaL_argerror(L, -1, "number 'interface' field expected");
    *(double *)&_XMM0 = j_lua_tonumber(L, -1);
    __asm { vcvttsd2si rax, xmm0 }
    v14 = _RAX;
  }
  if ( setsockopt(*ps, level, name, (const char *)pAddrBuf, 20) >= 0 )
  {
    j_lua_pushnumber(L, 1.0);
    return 1i64;
  }
  else
  {
    j_lua_pushnil(L);
    j_lua_pushstring(L, "setsockopt failed");
    return 2i64;
  }
}

/*
==============
opt_meth_getoption
==============
*/
__int64 opt_meth_getoption(lua_State *L, t_opt *opt, unsigned __int64 *ps)
{
  const char *v6; 
  const char *name; 
  const char *i; 
  unsigned __int8 *v9; 
  int v10; 
  int v11; 
  int (__fastcall *func)(lua_State *, unsigned __int64 *); 
  char _Buffer[48]; 

  v6 = j_luaL_checklstring(L, 2, NULL);
  name = opt->name;
  for ( i = v6; name; ++opt )
  {
    v9 = (unsigned __int8 *)i;
    name -= (__int64)i;
    do
    {
      v10 = (unsigned __int8)name[(_QWORD)v9];
      v11 = *v9 - v10;
      if ( v11 )
        break;
      ++v9;
    }
    while ( v10 );
    if ( !v11 )
      break;
    name = opt[1].name;
  }
  func = opt->func;
  if ( !func )
  {
    j_sprintf(_Buffer, "unsupported option `%.35s'", i);
    j_luaL_argerror(L, 2, _Buffer);
  }
  return ((__int64 (__fastcall *)(lua_State *, unsigned __int64 *, const char *, const char *))func)(L, ps, name, i);
}

/*
==============
opt_meth_setoption
==============
*/
__int64 opt_meth_setoption(lua_State *L, t_opt *opt, unsigned __int64 *ps)
{
  const char *v6; 
  const char *name; 
  const char *i; 
  unsigned __int8 *v9; 
  int v10; 
  int v11; 
  int (__fastcall *func)(lua_State *, unsigned __int64 *); 
  char _Buffer[48]; 

  v6 = j_luaL_checklstring(L, 2, NULL);
  name = opt->name;
  for ( i = v6; name; ++opt )
  {
    v9 = (unsigned __int8 *)i;
    name -= (__int64)i;
    do
    {
      v10 = (unsigned __int8)name[(_QWORD)v9];
      v11 = *v9 - v10;
      if ( v11 )
        break;
      ++v9;
    }
    while ( v10 );
    if ( !v11 )
      break;
    name = opt[1].name;
  }
  func = opt->func;
  if ( !func )
  {
    j_sprintf(_Buffer, "unsupported option `%.35s'", i);
    j_luaL_argerror(L, 2, _Buffer);
  }
  return ((__int64 (__fastcall *)(lua_State *, unsigned __int64 *, const char *, const char *))func)(L, ps, name, i);
}

/*
==============
opt_set_broadcast
==============
*/
int opt_set_broadcast(lua_State *L, unsigned __int64 *ps)
{
  return opt_setboolean(L, ps, 0xFFFF, 32);
}

/*
==============
opt_set_dontroute
==============
*/
int opt_set_dontroute(lua_State *L, unsigned __int64 *ps)
{
  return opt_setboolean(L, ps, 0xFFFF, 16);
}

/*
==============
opt_set_ip6_add_membership
==============
*/
__int64 opt_set_ip6_add_membership(lua_State *L, unsigned __int64 *ps)
{
  return opt_ip6_setmembership(L, ps, 41, 12);
}

/*
==============
opt_set_ip6_drop_membersip
==============
*/
__int64 opt_set_ip6_drop_membersip(lua_State *L, unsigned __int64 *ps)
{
  return opt_ip6_setmembership(L, ps, 41, 13);
}

/*
==============
opt_set_ip6_multicast_hops
==============
*/
int opt_set_ip6_multicast_hops(lua_State *L, unsigned __int64 *ps)
{
  return opt_setint(L, ps, 41, 10);
}

/*
==============
opt_set_ip6_multicast_loop
==============
*/
int opt_set_ip6_multicast_loop(lua_State *L, unsigned __int64 *ps)
{
  return opt_setboolean(L, ps, 41, 11);
}

/*
==============
opt_set_ip6_unicast_hops
==============
*/
int opt_set_ip6_unicast_hops(lua_State *L, unsigned __int64 *ps)
{
  return opt_setint(L, ps, 41, 4);
}

/*
==============
opt_set_ip6_v6only
==============
*/
int opt_set_ip6_v6only(lua_State *L, unsigned __int64 *ps)
{
  return opt_setboolean(L, ps, 41, 27);
}

/*
==============
opt_set_ip_add_membership
==============
*/
int opt_set_ip_add_membership(lua_State *L, unsigned __int64 *ps)
{
  return opt_setmembership(L, ps, 0, 12);
}

/*
==============
opt_set_ip_drop_membersip
==============
*/
int opt_set_ip_drop_membersip(lua_State *L, unsigned __int64 *ps)
{
  return opt_setmembership(L, ps, 0, 13);
}

/*
==============
opt_set_ip_multicast_if
==============
*/
__int64 opt_set_ip_multicast_if(lua_State *L, unsigned __int64 *ps)
{
  const char *v4; 
  in_addr inp; 

  v4 = j_luaL_checklstring(L, 3, NULL);
  inp = (in_addr)htonl(0);
  if ( *(_WORD *)v4 != *(_WORD *)"*" && !j_inet_aton(v4, &inp) )
    j_luaL_argerror(L, 3, "ip expected");
  if ( setsockopt(*ps, 0, 9, (const char *)&inp, 4) >= 0 )
  {
    j_lua_pushnumber(L, 1.0);
    return 1i64;
  }
  else
  {
    j_lua_pushnil(L);
    j_lua_pushstring(L, "setsockopt failed");
    return 2i64;
  }
}

/*
==============
opt_set_ip_multicast_loop
==============
*/
int opt_set_ip_multicast_loop(lua_State *L, unsigned __int64 *ps)
{
  return opt_setboolean(L, ps, 0, 11);
}

/*
==============
opt_set_ip_multicast_ttl
==============
*/
int opt_set_ip_multicast_ttl(lua_State *L, unsigned __int64 *ps)
{
  return opt_setint(L, ps, 0, 10);
}

/*
==============
opt_set_keepalive
==============
*/
int opt_set_keepalive(lua_State *L, unsigned __int64 *ps)
{
  return opt_setboolean(L, ps, 0xFFFF, 8);
}

/*
==============
opt_set_linger
==============
*/
__int64 opt_set_linger(lua_State *L, unsigned __int64 *ps)
{
  const char *v5; 
  unsigned __int64 v6; 
  __int16 optval; 
  __int16 v10; 

  if ( j_lua_type(L, 3) != 5 )
  {
    v5 = j_lua_typename(L, 5);
    j_auxiliar_typeerror(L, 3, v5);
  }
  j_lua_pushstring(L, "on");
  j_lua_gettable(L, 3);
  if ( j_lua_type(L, -1) != 1 )
    j_luaL_argerror(L, 3, "boolean 'on' field expected");
  optval = j_lua_toboolean(L, -1);
  j_lua_pushstring(L, "timeout");
  j_lua_gettable(L, 3);
  if ( !j_lua_isnumber(L, -1) )
    j_luaL_argerror(L, 3, "number 'timeout' field expected");
  *(double *)&_XMM0 = j_lua_tonumber(L, -1);
  v6 = *ps;
  __asm { vcvttsd2si eax, xmm0 }
  v10 = _EAX;
  if ( setsockopt(v6, 0xFFFF, 128, (const char *)&optval, 4) >= 0 )
  {
    j_lua_pushnumber(L, 1.0);
    return 1i64;
  }
  else
  {
    j_lua_pushnil(L);
    j_lua_pushstring(L, "setsockopt failed");
    return 2i64;
  }
}

/*
==============
opt_set_reuseaddr
==============
*/
int opt_set_reuseaddr(lua_State *L, unsigned __int64 *ps)
{
  return opt_setboolean(L, ps, 0xFFFF, 4);
}

/*
==============
opt_set_reuseport
==============
*/
int opt_set_reuseport(lua_State *L, unsigned __int64 *ps)
{
  return opt_setboolean(L, ps, 0xFFFF, 4);
}

/*
==============
opt_set_tcp_nodelay
==============
*/
int opt_set_tcp_nodelay(lua_State *L, unsigned __int64 *ps)
{
  return opt_setboolean(L, ps, 6, 1);
}

/*
==============
opt_setboolean
==============
*/
__int64 opt_setboolean(lua_State *L, unsigned __int64 *ps, int level, int name)
{
  int v8; 
  unsigned __int64 v9; 
  char optval[4]; 

  v8 = j_auxiliar_checkboolean(L, 3);
  v9 = *ps;
  *(_DWORD *)optval = v8;
  if ( setsockopt(v9, level, name, optval, 4) >= 0 )
  {
    j_lua_pushnumber(L, 1.0);
    return 1i64;
  }
  else
  {
    j_lua_pushnil(L);
    j_lua_pushstring(L, "setsockopt failed");
    return 2i64;
  }
}

/*
==============
opt_setint
==============
*/
__int64 opt_setint(lua_State *L, unsigned __int64 *ps, int level, int name)
{
  unsigned __int64 v9; 
  char optval[4]; 

  *(double *)&_XMM0 = j_lua_tonumber(L, 3);
  v9 = *ps;
  __asm { vcvttsd2si eax, xmm0 }
  *(_DWORD *)optval = _EAX;
  if ( setsockopt(v9, level, name, optval, 4) >= 0 )
  {
    j_lua_pushnumber(L, 1.0);
    return 1i64;
  }
  else
  {
    j_lua_pushnil(L);
    j_lua_pushstring(L, "setsockopt failed");
    return 2i64;
  }
}

/*
==============
opt_setmembership
==============
*/
__int64 opt_setmembership(lua_State *L, unsigned __int64 *ps, int level, int name)
{
  const char *v8; 
  const char *v9; 
  const char *v10; 
  const char *v11; 
  in_addr inp; 
  in_addr v14; 

  if ( j_lua_type(L, 3) != 5 )
  {
    v8 = j_lua_typename(L, 5);
    j_auxiliar_typeerror(L, 3, v8);
  }
  j_lua_pushstring(L, "multiaddr");
  j_lua_gettable(L, 3);
  if ( !j_lua_isstring(L, -1) )
    j_luaL_argerror(L, 3, "string 'multiaddr' field expected");
  v9 = j_lua_tolstring(L, -1, NULL);
  if ( !j_inet_aton(v9, &inp) )
    j_luaL_argerror(L, 3, "invalid 'multiaddr' ip address");
  j_lua_pushstring(L, "interface");
  j_lua_gettable(L, 3);
  if ( !j_lua_isstring(L, -1) )
    j_luaL_argerror(L, 3, "string 'interface' field expected");
  v14 = (in_addr)htonl(0);
  v10 = j_lua_tolstring(L, -1, NULL);
  if ( *v10 != asc_143D6868C[0] || v10[1] != asc_143D6868C[1] )
  {
    v11 = j_lua_tolstring(L, -1, NULL);
    if ( !j_inet_aton(v11, &v14) )
      j_luaL_argerror(L, 3, "invalid 'interface' ip address");
  }
  if ( setsockopt(*ps, level, name, (const char *)&inp, 8) >= 0 )
  {
    j_lua_pushnumber(L, 1.0);
    return 1i64;
  }
  else
  {
    j_lua_pushnil(L);
    j_lua_pushstring(L, "setsockopt failed");
    return 2i64;
  }
}

