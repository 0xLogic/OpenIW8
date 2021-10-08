/*
==============
inet_global_toip
==============
*/
__int64 inet_global_toip(lua_State *L)
{
  const char *v2; 
  int v3; 
  const char *v4; 
  char *v6; 
  hostent *hp; 

  v2 = j_luaL_checklstring(L, 1, NULL);
  hp = NULL;
  v3 = inet_gethost(v2, &hp);
  if ( v3 )
  {
    j_lua_pushnil(L);
    v4 = j_socket_hoststrerror(v3);
    j_lua_pushstring(L, v4);
  }
  else
  {
    v6 = inet_ntoa(**(struct in_addr **)hp->h_addr_list);
    j_lua_pushstring(L, v6);
    inet_pushresolved(L, hp);
  }
  return 2i64;
}

/*
==============
inet_global_getaddrinfo
==============
*/

__int64 __fastcall inet_global_getaddrinfo(lua_State *L, long double _XMM1_8)
{
  const char *v3; 
  int v4; 
  int v5; 
  const char *v6; 
  PADDRINFOA v8; 
  int v9; 
  int ai_family; 
  const char *v12; 
  unsigned __int64 v13; 
  const char *v14; 
  PADDRINFOA ppResult; 
  ADDRINFOA pHints; 
  char pNodeBuffer[1040]; 

  v3 = j_luaL_checklstring(L, 1, NULL);
  pHints.ai_flags = 0;
  memset(&pHints.ai_protocol, 0, 36);
  v4 = 1;
  pHints.ai_socktype = 1;
  ppResult = NULL;
  pHints.ai_family = 0;
  v5 = getaddrinfo(v3, NULL, &pHints, &ppResult);
  if ( v5 )
  {
    j_lua_pushnil(L);
    v6 = j_socket_gaistrerror(v5);
    j_lua_pushstring(L, v6);
    return 2i64;
  }
  else
  {
    j_lua_createtable(L, 0, 0);
    v8 = ppResult;
    if ( ppResult )
    {
      while ( 1 )
      {
        v9 = getnameinfo(v8->ai_addr, v8->ai_addrlen, pNodeBuffer, 0x401u, NULL, 0, 2);
        if ( v9 )
          break;
        __asm
        {
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2sd xmm1, xmm1, r14d; n
        }
        j_lua_pushnumber(L, _XMM1_8);
        j_lua_createtable(L, 0, 0);
        ai_family = v8->ai_family;
        if ( ai_family )
        {
          if ( ai_family == 2 )
          {
            v12 = "inet";
            v13 = 4i64;
          }
          else if ( ai_family == 23 )
          {
            v12 = "inet6";
            v13 = 5i64;
          }
          else
          {
            v12 = "unknown";
            v13 = 7i64;
          }
        }
        else
        {
          v12 = "unspec";
          v13 = 6i64;
        }
        j_lua_pushlstring(L, "family", 6ui64);
        j_lua_pushlstring(L, v12, v13);
        j_lua_settable(L, -3);
        j_lua_pushlstring(L, "addr", 4ui64);
        j_lua_pushstring(L, pNodeBuffer);
        j_lua_settable(L, -3);
        j_lua_settable(L, -3);
        v8 = v8->ai_next;
        ++v4;
        if ( !v8 )
        {
          v8 = ppResult;
          goto LABEL_14;
        }
      }
      freeaddrinfo(ppResult);
      j_lua_pushnil(L);
      v14 = j_socket_gaistrerror(v9);
      j_lua_pushstring(L, v14);
      return 2i64;
    }
    else
    {
LABEL_14:
      freeaddrinfo(v8);
      return 1i64;
    }
  }
}

/*
==============
inet_global_tohostname
==============
*/
__int64 inet_global_tohostname(lua_State *L)
{
  const char *v2; 
  int v3; 
  const char *v4; 
  hostent *hp; 

  v2 = j_luaL_checklstring(L, 1, NULL);
  hp = NULL;
  v3 = inet_gethost(v2, &hp);
  if ( v3 )
  {
    j_lua_pushnil(L);
    v4 = j_socket_hoststrerror(v3);
    j_lua_pushstring(L, v4);
  }
  else
  {
    j_lua_pushstring(L, hp->h_name);
    inet_pushresolved(L, hp);
  }
  return 2i64;
}

/*
==============
inet_global_getnameinfo
==============
*/

__int64 __fastcall inet_global_getnameinfo(lua_State *L, long double _XMM1_8)
{
  const char *v3; 
  const char *v4; 
  const char *v5; 
  int v6; 
  const char *v7; 
  PADDRINFOA v9; 
  int v10; 
  PADDRINFOA ppResult; 
  ADDRINFOA pHints; 
  char str[40]; 
  char pNodeBuffer[1040]; 

  v3 = j_luaL_optlstring(L, 1, NULL, NULL);
  v4 = j_luaL_optlstring(L, 2, NULL, NULL);
  v5 = v4;
  if ( !v3 && !v4 )
    j_luaL_error(L, "host and serv cannot be both nil");
  pHints.ai_flags = 0;
  memset(&pHints.ai_protocol, 0, 36);
  pHints.ai_socktype = 1;
  pHints.ai_family = 0;
  v6 = getaddrinfo(v3, v4, &pHints, &ppResult);
  if ( v6 )
  {
    j_lua_pushnil(L);
    v7 = j_socket_gaistrerror(v6);
    j_lua_pushstring(L, v7);
    return 2i64;
  }
  else
  {
    j_lua_createtable(L, 0, 0);
    v9 = ppResult;
    v10 = 1;
    if ( ppResult )
    {
      do
      {
        getnameinfo(v9->ai_addr, v9->ai_addrlen, pNodeBuffer, v3 != NULL ? 0x401 : 0, str, v5 != NULL ? 0x20 : 0, 0);
        if ( v3 )
        {
          __asm
          {
            vxorps  xmm1, xmm1, xmm1
            vcvtsi2sd xmm1, xmm1, esi; n
          }
          j_lua_pushnumber(L, _XMM1_8);
          j_lua_pushstring(L, pNodeBuffer);
          j_lua_settable(L, -3);
        }
        v9 = v9->ai_next;
        ++v10;
      }
      while ( v9 );
      v9 = ppResult;
    }
    freeaddrinfo(v9);
    if ( v5 )
    {
      j_lua_pushstring(L, str);
      return 2i64;
    }
    else
    {
      return 1i64;
    }
  }
}

/*
==============
inet_global_gethostname
==============
*/
__int64 inet_global_gethostname(lua_State *L)
{
  int *v2; 
  const char *v3; 
  char name[272]; 

  name[256] = 0;
  if ( gethostname(name, 256) >= 0 )
  {
    j_lua_pushstring(L, name);
    return 1i64;
  }
  else
  {
    j_lua_pushnil(L);
    v2 = _errno();
    v3 = j_socket_strerror(*v2);
    j_lua_pushstring(L, v3);
    return 2i64;
  }
}

/*
==============
inet_aton
==============
*/
__int64 inet_aton(const char *cp, in_addr *inp)
{
  unsigned int v5; 
  unsigned int v6; 
  unsigned int v7; 
  int v8; 
  unsigned int v9; 

  v9 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  if ( !j_sscanf(cp, "%u.%u.%u.%u%n", &v9, &v5, &v6, &v7, &v8) || !v8 || cp[v8] || v9 > 0xFF || v5 > 0xFF || v6 > 0xFF || v7 > 0xFF )
    return 0i64;
  if ( inp )
    inp->S_un.S_addr = htonl(v7 + ((v6 + ((v5 + (v9 << 8)) << 8)) << 8));
  return 1i64;
}

/*
==============
inet_gethost
==============
*/
int inet_gethost(const char *address, hostent **hp)
{
  unsigned int v5; 
  unsigned int v6; 
  char addr[4]; 
  int v8; 
  unsigned int v9; 
  unsigned int v10; 

  v9 = 0;
  v10 = 0;
  v5 = 0;
  v6 = 0;
  v8 = 0;
  if ( !j_sscanf(address, "%u.%u.%u.%u%n", &v9, &v10, &v5, &v6, &v8) || !v8 || address[v8] || v9 > 0xFF || v10 > 0xFF || v5 > 0xFF || v6 > 0xFF )
    return j_socket_gethostbyname(address, hp);
  *(_DWORD *)addr = htonl(v6 + ((v5 + ((v10 + (v9 << 8)) << 8)) << 8));
  return j_socket_gethostbyaddr(addr, 4, hp);
}

/*
==============
inet_meth_getpeername
==============
*/
__int64 inet_meth_getpeername(lua_State *L, unsigned __int64 *ps, int family)
{
  int *v5; 
  const char *v6; 
  unsigned __int64 v8; 
  int v9; 
  const char *v10; 
  int namelen[4]; 
  struct sockaddr name; 
  char pServiceBuffer[16]; 
  char pNodeBuffer[80]; 

  namelen[0] = 128;
  if ( getpeername(*ps, &name, namelen) >= 0 )
  {
    v8 = 6i64;
    if ( getnameinfo(&name, namelen[0], pNodeBuffer, 0x41u, pServiceBuffer, 6u, 10) )
    {
      j_lua_pushnil(L);
      j_lua_pushstring(L, "luasocket: inet_meth_getpeername error.");
      return 2i64;
    }
    else
    {
      j_lua_pushstring(L, pNodeBuffer);
      v9 = strtol(pServiceBuffer, NULL, 10);
      j_lua_pushinteger(L, v9);
      if ( family )
      {
        if ( family == 2 )
        {
          v10 = "inet";
          v8 = 4i64;
        }
        else if ( family == 23 )
        {
          v10 = "inet6";
          v8 = 5i64;
        }
        else
        {
          v10 = "unknown";
          v8 = 7i64;
        }
      }
      else
      {
        v10 = "unspec";
      }
      j_lua_pushlstring(L, v10, v8);
      return 3i64;
    }
  }
  else
  {
    j_lua_pushnil(L);
    v5 = _errno();
    v6 = j_socket_strerror(*v5);
    j_lua_pushstring(L, v6);
    return 2i64;
  }
}

/*
==============
inet_meth_getsockname
==============
*/
__int64 inet_meth_getsockname(lua_State *L, unsigned __int64 *ps, int family)
{
  int *v5; 
  const char *v6; 
  unsigned __int64 v8; 
  const char *v9; 
  int namelen[4]; 
  struct sockaddr name; 
  char str[16]; 
  char pNodeBuffer[80]; 

  namelen[0] = 128;
  if ( getsockname(*ps, &name, namelen) >= 0 )
  {
    v8 = 6i64;
    if ( getnameinfo(&name, namelen[0], pNodeBuffer, 0x41u, str, 6u, 10) )
    {
      j_lua_pushnil(L);
      j_lua_pushstring(L, "luasocket: inet_meth_getsockname error.");
      return 2i64;
    }
    else
    {
      j_lua_pushstring(L, pNodeBuffer);
      j_lua_pushstring(L, str);
      if ( family )
      {
        if ( family == 2 )
        {
          v9 = "inet";
          v8 = 4i64;
        }
        else if ( family == 23 )
        {
          v9 = "inet6";
          v8 = 5i64;
        }
        else
        {
          v9 = "unknown";
          v8 = 7i64;
        }
      }
      else
      {
        v9 = "unspec";
      }
      j_lua_pushlstring(L, v9, v8);
      return 3i64;
    }
  }
  else
  {
    j_lua_pushnil(L);
    v5 = _errno();
    v6 = j_socket_strerror(*v5);
    j_lua_pushstring(L, v6);
    return 2i64;
  }
}

/*
==============
inet_open
==============
*/
__int64 inet_open(lua_State *L)
{
  j_lua_pushstring(L, "dns");
  j_lua_createtable(L, 0, 0);
  j_luaL_setfuncs(L, func_2, 0);
  j_lua_settable(L, -3);
  return 0i64;
}

/*
==============
inet_optfamily
==============
*/
__int64 inet_optfamily(lua_State *L, int narg, const char *def)
{
  return (unsigned int)optvalue[j_luaL_checkoption(L, narg, def, optname)];
}

/*
==============
inet_optsocktype
==============
*/
__int64 inet_optsocktype(lua_State *L, int narg, const char *def)
{
  return (unsigned int)optvalue_0[j_luaL_checkoption(L, narg, def, optname_0)];
}

/*
==============
inet_pushresolved
==============
*/
void inet_pushresolved(lua_State *L, hostent *hp)
{
  int v5; 
  char **h_aliases; 
  int v7; 
  int v8; 
  char **h_addr_list; 
  char *v12; 

  j_lua_createtable(L, 0, 0);
  v5 = j_lua_gettop(L);
  j_lua_pushstring(L, (const char *)&stru_143C9A1A4);
  j_lua_pushstring(L, hp->h_name);
  j_lua_settable(L, v5);
  j_lua_pushstring(L, "ip");
  j_lua_pushstring(L, "alias");
  h_aliases = hp->h_aliases;
  v7 = 1;
  v8 = 1;
  j_lua_createtable(L, 0, 0);
  if ( h_aliases && *h_aliases )
  {
    do
    {
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2sd xmm1, xmm1, esi; n
      }
      j_lua_pushnumber(L, *(long double *)&_XMM1);
      j_lua_pushstring(L, *h_aliases);
      j_lua_settable(L, -3);
      ++v8;
      ++h_aliases;
    }
    while ( *h_aliases );
  }
  j_lua_settable(L, v5);
  j_lua_createtable(L, 0, 0);
  h_addr_list = hp->h_addr_list;
  if ( h_addr_list && *h_addr_list )
  {
    do
    {
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2sd xmm1, xmm1, ebp; n
      }
      j_lua_pushnumber(L, *(long double *)&_XMM1);
      v12 = inet_ntoa(*(struct in_addr *)*h_addr_list);
      j_lua_pushstring(L, v12);
      j_lua_settable(L, -3);
      ++v7;
      ++h_addr_list;
    }
    while ( *h_addr_list );
  }
  j_lua_settable(L, v5);
}

/*
==============
inet_tryaccept
==============
*/
const char *inet_tryaccept(unsigned __int64 *server, int family, unsigned __int64 *client, t_timeout_ *tm)
{
  int v4; 
  int v5; 
  int len[4]; 
  sockaddr addr; 

  if ( family == 2 )
  {
    len[0] = 16;
  }
  else
  {
    v4 = 28;
    if ( family != 23 )
      v4 = 128;
    len[0] = v4;
  }
  v5 = j_socket_accept(server, client, &addr, len, tm);
  return j_socket_strerror(v5);
}

/*
==============
inet_trybind
==============
*/
const char *inet_trybind(unsigned __int64 *ps, int *family, const char *address, const char *serv, addrinfo *bindhints)
{
  int v5; 
  const char *v7; 
  const char *v9; 
  int v10; 
  int v11; 
  const char *v12; 
  PADDRINFOA v14; 
  int ai_family; 
  int v16; 
  unsigned __int64 v17; 
  int v18; 
  int optval; 
  PADDRINFOA ppResult; 

  v5 = *family;
  v7 = "0";
  v9 = NULL;
  ppResult = NULL;
  if ( serv )
    v7 = serv;
  v10 = *(unsigned __int8 *)address - (unsigned __int8)asc_143D6868C[0];
  if ( !v10 )
    v10 = *((unsigned __int8 *)address + 1) - (unsigned __int8)asc_143D6868C[1];
  if ( v10 )
    v9 = address;
  v11 = getaddrinfo(v9, v7, bindhints, &ppResult);
  v12 = j_socket_gaistrerror(v11);
  if ( v12 )
  {
    if ( !ppResult )
      return v12;
    freeaddrinfo(ppResult);
    return v12;
  }
  v14 = ppResult;
  if ( !ppResult )
    goto LABEL_22;
  while ( 1 )
  {
    if ( v5 != v14->ai_family || *ps == -1i64 )
    {
      j_socket_destroy(ps);
      ai_family = v14->ai_family;
      v16 = j_socket_create(ps, ai_family, v14->ai_socktype, v14->ai_protocol);
      v12 = j_socket_strerror(v16);
      if ( !v12 && ai_family == 23 )
      {
        v17 = *ps;
        optval = 1;
        setsockopt(v17, 41, 27, (const char *)&optval, 4);
      }
      if ( v12 )
        goto LABEL_19;
      v5 = v14->ai_family;
    }
    v18 = j_socket_bind(ps, v14->ai_addr, v14->ai_addrlen);
    v12 = j_socket_strerror(v18);
    if ( !v12 )
      break;
LABEL_19:
    v14 = v14->ai_next;
    if ( !v14 )
      goto LABEL_22;
  }
  *family = v5;
  j_socket_setnonblocking(ps);
LABEL_22:
  freeaddrinfo(ppResult);
  return v12;
}

/*
==============
inet_tryconnect
==============
*/
const char *inet_tryconnect(unsigned __int64 *ps, int *family, const char *address, const char *serv, t_timeout_ *tm, addrinfo *connecthints)
{
  int v7; 
  int v10; 
  const char *v11; 
  PADDRINFOA v13; 
  int ai_family; 
  int v17; 
  unsigned __int64 v18; 
  int v19; 
  PADDRINFOA ppResult; 
  int optval; 

  v7 = *family;
  ppResult = NULL;
  v10 = getaddrinfo(address, serv, connecthints, &ppResult);
  v11 = j_socket_gaistrerror(v10);
  if ( v11 )
  {
    if ( !ppResult )
      return v11;
    freeaddrinfo(ppResult);
    return v11;
  }
  v13 = ppResult;
  if ( !ppResult )
    goto LABEL_19;
  _RBP = tm;
  __asm
  {
    vmovaps [rsp+78h+var_38], xmm6
    vxorpd  xmm6, xmm6, xmm6
  }
  while ( 1 )
  {
    j_timeout_markstart(_RBP);
    if ( v7 != v13->ai_family || *ps == -1i64 )
    {
      j_socket_destroy(ps);
      ai_family = v13->ai_family;
      v17 = j_socket_create(ps, ai_family, v13->ai_socktype, v13->ai_protocol);
      v11 = j_socket_strerror(v17);
      if ( !v11 && ai_family == 23 )
      {
        v18 = *ps;
        optval = 1;
        setsockopt(v18, 41, 27, (const char *)&optval, 4);
      }
      if ( v11 )
        goto LABEL_15;
      v7 = v13->ai_family;
      j_socket_setnonblocking(ps);
    }
    v19 = j_socket_connect(ps, v13->ai_addr, v13->ai_addrlen, _RBP);
    v11 = j_socket_strerror(v19);
    if ( !v11 )
      break;
    __asm { vucomisd xmm6, qword ptr [rbp+0] }
LABEL_15:
    v13 = v13->ai_next;
    if ( !v13 )
      goto LABEL_18;
  }
  *family = v7;
LABEL_18:
  __asm { vmovaps xmm6, [rsp+78h+var_38] }
LABEL_19:
  freeaddrinfo(ppResult);
  return v11;
}

/*
==============
inet_trycreate
==============
*/
const char *inet_trycreate(unsigned __int64 *ps, int family, int type, int protocol)
{
  int v6; 
  const char *result; 
  unsigned __int64 v8; 
  char optval[4]; 

  v6 = j_socket_create(ps, family, type, protocol);
  result = j_socket_strerror(v6);
  if ( !result && family == 23 )
  {
    v8 = *ps;
    *(_DWORD *)optval = 1;
    setsockopt(v8, 41, 27, optval, 4);
    return 0i64;
  }
  return result;
}

/*
==============
inet_trydisconnect
==============
*/
const char *inet_trydisconnect(unsigned __int64 *ps, int family, t_timeout_ *tm)
{
  const char *result; 
  sockaddr *p_addr; 
  t_timeout_ *v5; 
  int v7; 
  int v8; 
  sockaddr addr; 
  __int16 v10; 
  int v11; 
  __int16 v12; 
  int v14; 

  result = NULL;
  if ( family == 2 )
  {
    v5 = tm;
    *(_QWORD *)&addr.sa_family = 0i64;
    v7 = 16;
    *(_QWORD *)&addr.sa_data[6] = 0i64;
    p_addr = &addr;
  }
  else
  {
    if ( family != 23 )
      return result;
    *(_QWORD *)&addr.sa_family = 0i64;
    p_addr = (sockaddr *)&v10;
    *(_QWORD *)&addr.sa_data[6] = 0i64;
    v5 = tm;
    __asm
    {
      vmovups xmm0, xmmword ptr [rsp+68h+addr.sa_family]
      vmovups [rsp+68h+var_30], xmm0
    }
    v11 = 0;
    v7 = 28;
    v12 = 0;
    v14 = 0;
    v10 = 0;
  }
  v8 = j_socket_connect(ps, p_addr, v7, v5);
  return j_socket_strerror(v8);
}

