/*
==============
global_create
==============
*/
int global_create(lua_State *L)
{
  return tcp_create(L, 0);
}

/*
==============
global_create4
==============
*/
int global_create4(lua_State *L)
{
  return tcp_create(L, 2);
}

/*
==============
global_create6
==============
*/
int global_create6(lua_State *L)
{
  return tcp_create(L, 23);
}

/*
==============
meth_getfamily
==============
*/
__int64 meth_getfamily(lua_State *L)
{
  _DWORD *v2; 
  const char *v3; 

  v2 = j_auxiliar_checkgroup(L, "tcp{any}", 1);
  v3 = "inet6";
  if ( v2[2078] != 23 )
    v3 = "inet4";
  j_lua_pushlstring(L, v3, 5ui64);
  return 1i64;
}

/*
==============
meth_send
==============
*/
int meth_send(lua_State *L)
{
  char *v2; 

  v2 = (char *)j_auxiliar_checkclass(L, "tcp{client}", 1);
  return j_buffer_meth_send(L, (t_buffer_ *)(v2 + 40));
}

/*
==============
meth_getsockname
==============
*/
int meth_getsockname(lua_State *L)
{
  void *v2; 

  v2 = j_auxiliar_checkgroup(L, "tcp{any}", 1);
  return j_inet_meth_getsockname(L, (unsigned __int64 *)v2, *((_DWORD *)v2 + 2078));
}

/*
==============
meth_getpeername
==============
*/
int meth_getpeername(lua_State *L)
{
  void *v2; 

  v2 = j_auxiliar_checkgroup(L, "tcp{any}", 1);
  return j_inet_meth_getpeername(L, (unsigned __int64 *)v2, *((_DWORD *)v2 + 2078));
}

/*
==============
meth_receive
==============
*/
int meth_receive(lua_State *L)
{
  char *v2; 

  v2 = (char *)j_auxiliar_checkclass(L, "tcp{client}", 1);
  return j_buffer_meth_receive(L, (t_buffer_ *)(v2 + 40));
}

/*
==============
meth_close
==============
*/
__int64 meth_close(lua_State *L)
{
  unsigned __int64 *v2; 

  v2 = (unsigned __int64 *)j_auxiliar_checkgroup(L, "tcp{any}", 1);
  j_socket_destroy(v2);
  __asm { vmovsd  xmm1, cs:__real@3ff0000000000000; n }
  j_lua_pushnumber(L, *(long double *)&_XMM1);
  return 1i64;
}

/*
==============
meth_getoption
==============
*/
int meth_getoption(lua_State *L)
{
  unsigned __int64 *v2; 

  v2 = (unsigned __int64 *)j_auxiliar_checkgroup(L, "tcp{any}", 1);
  return j_opt_meth_getoption(L, optget, v2);
}

/*
==============
meth_setoption
==============
*/
int meth_setoption(lua_State *L)
{
  unsigned __int64 *v2; 

  v2 = (unsigned __int64 *)j_auxiliar_checkgroup(L, "tcp{any}", 1);
  return j_opt_meth_setoption(L, optset, v2);
}

/*
==============
meth_gettimeout
==============
*/
int meth_gettimeout(lua_State *L)
{
  char *v2; 

  v2 = (char *)j_auxiliar_checkgroup(L, "tcp{any}", 1);
  return j_timeout_meth_gettimeout(L, (t_timeout_ *)(v2 + 8288));
}

/*
==============
meth_settimeout
==============
*/
int meth_settimeout(lua_State *L)
{
  char *v2; 

  v2 = (char *)j_auxiliar_checkgroup(L, "tcp{any}", 1);
  return j_timeout_meth_settimeout(L, (t_timeout_ *)(v2 + 8288));
}

/*
==============
meth_getfd
==============
*/

__int64 __fastcall meth_getfd(lua_State *L, double _XMM1_8)
{
  j_auxiliar_checkgroup(L, "tcp{any}", 1);
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2sd xmm1, xmm1, dword ptr [rax]; n
  }
  j_lua_pushnumber(L, *(long double *)&_XMM1);
  return 1i64;
}

/*
==============
meth_setfd
==============
*/
__int64 meth_setfd(lua_State *L)
{
  _QWORD *v3; 

  v3 = j_auxiliar_checkgroup(L, "tcp{any}", 1);
  *(double *)&_XMM0 = j_luaL_checknumber(L, 2);
  __asm
  {
    vmovsd  xmm1, cs:__real@43e0000000000000
    vcomisd xmm0, xmm1
    vsubsd  xmm0, xmm0, xmm1
    vcomisd xmm0, xmm1
    vcvttsd2si rax, xmm0
  }
  *v3 = _RAX;
  return 0i64;
}

/*
==============
meth_dirty
==============
*/
__int64 meth_dirty(lua_State *L)
{
  char *v2; 
  int v3; 

  v2 = (char *)j_auxiliar_checkgroup(L, "tcp{any}", 1);
  v3 = j_buffer_isempty((t_buffer_ *)(v2 + 40));
  j_lua_pushboolean(L, v3 == 0);
  return 1i64;
}

/*
==============
meth_sendto
==============
*/

__int64 __fastcall meth_sendto(lua_State *L, double _XMM1_8)
{
  char *v3; 
  char *v4; 
  const char *v5; 
  const char *v6; 
  const char *v7; 
  PADDRINFOA v9; 
  const char *v10; 
  int v11; 
  const char *v12; 
  ADDRINFOA pHints; 
  PADDRINFOA ppResult; 
  unsigned __int64 sent; 
  unsigned __int64 len; 

  v3 = (char *)j_auxiliar_checkclass(L, "udp{unconnected}", 1);
  sent = 0i64;
  v4 = v3;
  v5 = j_luaL_checklstring(L, 2, &len);
  v6 = j_luaL_checklstring(L, 3, NULL);
  v7 = j_luaL_checklstring(L, 4, NULL);
  memset(&pHints, 0, sizeof(pHints));
  pHints.ai_family = *((_DWORD *)v4 + 8);
  pHints.ai_socktype = 2;
  pHints.ai_flags = 12;
  if ( getaddrinfo(v6, v7, &pHints, &ppResult) )
  {
    j_lua_pushnil(L);
    j_lua_pushstring(L, "luasocket: meth_sendto error.");
    return 2i64;
  }
  else
  {
    if ( !*((_DWORD *)v4 + 8) && *(_QWORD *)v4 == -1i64 )
    {
      v9 = ppResult;
      if ( ppResult )
      {
        while ( 1 )
        {
          v10 = j_inet_trycreate((unsigned __int64 *)v4, v9->ai_family, 2, 0);
          if ( !v10 )
            break;
          v9 = v9->ai_next;
          if ( !v9 )
          {
            j_lua_pushnil(L);
            j_lua_pushstring(L, v10);
            freeaddrinfo(ppResult);
            return 2i64;
          }
        }
        j_socket_setnonblocking((unsigned __int64 *)v4);
        *((_DWORD *)v4 + 8) = v9->ai_family;
      }
    }
    j_timeout_markstart((t_timeout_ *)(v4 + 8));
    v11 = j_socket_sendto((unsigned __int64 *)v4, v5, len, &sent, ppResult->ai_addr, ppResult->ai_addrlen, (t_timeout_ *)(v4 + 8));
    freeaddrinfo(ppResult);
    if ( v11 )
    {
      j_lua_pushnil(L);
      if ( v11 == -2 )
        v12 = "refused";
      else
        v12 = j_socket_strerror(v11);
      j_lua_pushstring(L, v12);
      return 2i64;
    }
    else
    {
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2sd xmm1, xmm1, rcx
      }
      if ( (sent & 0x8000000000000000ui64) != 0i64 )
        __asm { vaddsd  xmm1, xmm1, cs:__real@43f0000000000000; n }
      j_lua_pushnumber(L, *(long double *)&_XMM1);
      return 1i64;
    }
  }
}

/*
==============
meth_receivefrom
==============
*/
__int64 meth_receivefrom(lua_State *L)
{
  char *v4; 
  char *v8; 
  int v10; 
  const char *v11; 
  int v12; 
  socklen_t SockaddrLength; 
  unsigned __int64 got; 
  sockaddr pSockaddr; 
  char pServiceBuffer[16]; 
  char pNodeBuffer[80]; 
  char v18; 

  __asm { vmovsd  xmm2, cs:__real@40c0000000000000; def }
  v4 = (char *)j_auxiliar_checkclass(L, "udp{unconnected}", 1);
  *(double *)&_XMM0 = j_luaL_optnumber(L, 2, *(long double *)&_XMM2);
  __asm
  {
    vmovsd  xmm1, cs:__real@43e0000000000000
    vcomisd xmm0, xmm1
    vsubsd  xmm0, xmm0, xmm1
    vcomisd xmm0, xmm1
    vcvttsd2si rdi, xmm0
  }
  if ( _RDI <= 0x2000 )
    v8 = &v18;
  else
    v8 = (char *)malloc(_RDI);
  SockaddrLength = 128;
  j_timeout_markstart((t_timeout_ *)(v4 + 8));
  if ( !v8 )
  {
    j_lua_pushnil(L);
    j_lua_pushlstring(L, "out of memory", 0xDui64);
    return 2i64;
  }
  v10 = j_socket_recvfrom((unsigned __int64 *)v4, v8, _RDI, &got, &pSockaddr, &SockaddrLength, (t_timeout_ *)(v4 + 8));
  if ( ((v10 + 2) & 0xFFFFFFFD) != 0 )
  {
    j_lua_pushnil(L);
    v11 = j_socket_strerror(v10);
LABEL_10:
    j_lua_pushstring(L, v11);
    if ( _RDI > 0x2000 )
      free(v8);
    return 2i64;
  }
  if ( getnameinfo(&pSockaddr, SockaddrLength, pNodeBuffer, 0x41u, pServiceBuffer, 6u, 10) )
  {
    j_lua_pushnil(L);
    v11 = "luasocket: meth_receivefrom error.";
    goto LABEL_10;
  }
  j_lua_pushlstring(L, v8, got);
  j_lua_pushstring(L, pNodeBuffer);
  v12 = strtol(pServiceBuffer, NULL, 10);
  j_lua_pushinteger(L, v12);
  if ( _RDI > 0x2000 )
    free(v8);
  return 3i64;
}

/*
==============
meth_setsockname
==============
*/
__int64 meth_setsockname(lua_State *L)
{
  _DWORD *v2; 
  const char *v3; 
  const char *v4; 
  const char *v5; 
  addrinfo bindhints; 

  v2 = j_auxiliar_checkclass(L, "udp{unconnected}", 1);
  v3 = j_luaL_checklstring(L, 2, NULL);
  v4 = j_luaL_checklstring(L, 3, NULL);
  *(_QWORD *)&bindhints.ai_flags = 0i64;
  memset(&bindhints.ai_protocol, 0, 36);
  bindhints.ai_socktype = 2;
  bindhints.ai_family = v2[8];
  bindhints.ai_flags = 1;
  v5 = j_inet_trybind((unsigned __int64 *)v2, v2 + 8, v3, v4, &bindhints);
  if ( v5 )
  {
    j_lua_pushnil(L);
    j_lua_pushstring(L, v5);
    return 2i64;
  }
  else
  {
    __asm { vmovsd  xmm1, cs:__real@3ff0000000000000; n }
    j_lua_pushnumber(L, *(long double *)&_XMM1);
    return 1i64;
  }
}

/*
==============
meth_setpeername
==============
*/
__int64 meth_setpeername(lua_State *L)
{
  char *v2; 
  t_timeout_ *tm; 
  const char *v4; 
  bool v5; 
  unsigned __int8 v6; 
  int v7; 
  const char *v8; 
  const char *v9; 
  const char *v11; 
  addrinfo connecthints; 

  v2 = (char *)j_auxiliar_checkgroup(L, "udp{any}", 1);
  tm = (t_timeout_ *)(v2 + 8);
  v4 = j_luaL_checklstring(L, 2, NULL);
  v5 = *v4 < (unsigned int)asc_143D6868C[0];
  if ( *v4 == asc_143D6868C[0] && (v6 = v4[1], v5 = v6 < (unsigned int)asc_143D6868C[1], v6 == asc_143D6868C[1]) )
    v7 = 0;
  else
    v7 = v5 ? -1 : 1;
  if ( v7 )
    v8 = j_luaL_checklstring(L, 3, NULL);
  else
    v8 = "0";
  memset(&connecthints.ai_protocol, 0, 36);
  *(_QWORD *)&connecthints.ai_flags = 0i64;
  connecthints.ai_socktype = 2;
  connecthints.ai_family = *((_DWORD *)v2 + 8);
  if ( v7 )
  {
    v9 = j_inet_tryconnect((unsigned __int64 *)v2, (int *)v2 + 8, v4, v8, tm, &connecthints);
    if ( v9 )
    {
      j_lua_pushnil(L);
      j_lua_pushstring(L, v9);
      return 2i64;
    }
    v11 = "udp{connected}";
  }
  else
  {
    j_inet_trydisconnect((unsigned __int64 *)v2, *((_DWORD *)v2 + 8), tm);
    v11 = "udp{unconnected}";
  }
  j_auxiliar_setclass(L, v11, 1);
  __asm { vmovsd  xmm1, cs:__real@3ff0000000000000; n }
  j_lua_pushnumber(L, *(long double *)&_XMM1);
  return 1i64;
}

/*
==============
udp_create
==============
*/
__int64 udp_create(lua_State *L, int family)
{
  char *v4; 
  const char *v7; 

  v4 = (char *)j_lua_newuserdata(L, 0x28ui64);
  j_auxiliar_setclass(L, "udp{unconnected}", -1);
  __asm
  {
    vmovsd  xmm1, cs:__real@bff0000000000000; block
    vmovaps xmm2, xmm1; total
  }
  *(_QWORD *)v4 = -1i64;
  j_timeout_init((t_timeout_ *)(v4 + 8), *(long double *)&_XMM1, *(long double *)&_XMM2);
  *((_DWORD *)v4 + 8) = family;
  if ( family )
  {
    v7 = j_inet_trycreate((unsigned __int64 *)v4, family, 2, 0);
    if ( v7 )
    {
      j_lua_pushnil(L);
      j_lua_pushstring(L, v7);
      return 2i64;
    }
    j_socket_setnonblocking((unsigned __int64 *)v4);
  }
  return 1i64;
}

/*
==============
udp_open
==============
*/
__int64 udp_open(lua_State *L)
{
  j_auxiliar_newclass(L, "udp{connected}", udp_methods);
  j_auxiliar_newclass(L, "udp{unconnected}", udp_methods);
  j_auxiliar_add2group(L, "udp{connected}", "udp{any}");
  j_auxiliar_add2group(L, "udp{unconnected}", "udp{any}");
  j_auxiliar_add2group(L, "udp{connected}", "select{able}");
  j_auxiliar_add2group(L, "udp{unconnected}", "select{able}");
  j_luaL_setfuncs(L, func_4, 0);
  j_lua_pushlstring(L, "_DATAGRAMSIZE", 0xDui64);
  j_lua_pushinteger(L, 0x2000i64);
  j_lua_rawset(L, -3);
  return 0i64;
}

