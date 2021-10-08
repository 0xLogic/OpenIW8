/*
==============
global_connect
==============
*/
__int64 global_connect(lua_State *L)
{
  const char *v4; 
  const char *v5; 
  int v6; 
  _QWORD *ctx; 
  const char *v11; 
  addrinfo connecthints; 
  addrinfo bindhints; 
  char *serv; 
  char *address; 

  address = (char *)j_luaL_checklstring(L, 1, NULL);
  serv = (char *)j_luaL_checklstring(L, 2, NULL);
  v4 = j_luaL_optlstring(L, 3, NULL, NULL);
  v5 = j_luaL_optlstring(L, 4, "0", NULL);
  v6 = j_inet_optfamily(L, 5, "unspec");
  ctx = j_lua_newuserdata(L, 0x2080ui64);
  memset_0(ctx, 0, 0x2080ui64);
  j_io_init((t_io_ *)(ctx + 1), (int (__fastcall *)(void *, const char *, unsigned __int64, unsigned __int64 *, t_timeout_ *))j_socket_send, (int (__fastcall *)(void *, char *, unsigned __int64, unsigned __int64 *, t_timeout_ *))j_socket_recv, (const char *(__fastcall *)(void *, int))j_socket_ioerror, ctx);
  __asm
  {
    vmovsd  xmm1, cs:__real@bff0000000000000; block
    vmovaps xmm2, xmm1; total
  }
  j_timeout_init((t_timeout_ *)(ctx + 1036), *(long double *)&_XMM1, *(long double *)&_XMM2);
  j_buffer_init((t_buffer_ *)(ctx + 5), (t_io_ *)(ctx + 1), (t_timeout_ *)(ctx + 1036));
  *ctx = -1i64;
  *((_DWORD *)ctx + 2078) = 0;
  HIDWORD(bindhints.ai_next) = 0;
  bindhints.ai_socktype = 1;
  bindhints.ai_family = v6;
  bindhints.ai_flags = 1;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu ymmword ptr [rsp+0C8h+bindhints.ai_protocol], ymm0
  }
  if ( v4 )
  {
    v11 = j_inet_trybind(ctx, (int *)ctx + 2078, v4, v5, &bindhints);
    if ( v11 )
      goto LABEL_5;
  }
  memset(&connecthints.ai_protocol, 0, 36);
  *(_QWORD *)&connecthints.ai_flags = 0i64;
  connecthints.ai_socktype = 1;
  connecthints.ai_family = *((_DWORD *)ctx + 2078);
  v11 = j_inet_tryconnect(ctx, (int *)ctx + 2078, address, serv, (t_timeout_ *)(ctx + 1036), &connecthints);
  if ( v11 )
  {
    j_socket_destroy(ctx);
LABEL_5:
    j_lua_pushnil(L);
    j_lua_pushstring(L, v11);
    return 2i64;
  }
  j_auxiliar_setclass(L, "tcp{client}", -1);
  return 1i64;
}

/*
==============
meth_connect
==============
*/
__int64 meth_connect(lua_State *L)
{
  char *v2; 
  const char *v3; 
  const char *v4; 
  const char *v5; 
  addrinfo connecthints; 

  v2 = (char *)j_auxiliar_checkgroup(L, "tcp{any}", 1);
  v3 = j_luaL_checklstring(L, 2, NULL);
  v4 = j_luaL_checklstring(L, 3, NULL);
  memset(&connecthints.ai_protocol, 0, 36);
  *(_QWORD *)&connecthints.ai_flags = 0i64;
  connecthints.ai_socktype = 1;
  connecthints.ai_family = *((_DWORD *)v2 + 2078);
  j_timeout_markstart((t_timeout_ *)(v2 + 8288));
  v5 = j_inet_tryconnect((unsigned __int64 *)v2, (int *)v2 + 2078, v3, v4, (t_timeout_ *)(v2 + 8288), &connecthints);
  j_auxiliar_setclass(L, "tcp{client}", 1);
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
meth_listen
==============
*/
__int64 meth_listen(lua_State *L)
{
  unsigned __int64 *v4; 
  int v6; 
  const char *v7; 

  __asm { vmovsd  xmm2, cs:__real@4040000000000000; def }
  v4 = (unsigned __int64 *)j_auxiliar_checkclass(L, "tcp{master}", 1);
  *(double *)&_XMM0 = j_luaL_optnumber(L, 2, *(long double *)&_XMM2);
  __asm { vcvttsd2si edx, xmm0; backlog }
  v6 = j_socket_listen(v4, _EDX);
  if ( v6 )
  {
    j_lua_pushnil(L);
    v7 = j_socket_strerror(v6);
    j_lua_pushstring(L, v7);
    return 2i64;
  }
  else
  {
    j_auxiliar_setclass(L, "tcp{server}", 1);
    __asm { vmovsd  xmm1, cs:__real@3ff0000000000000; n }
    j_lua_pushnumber(L, *(long double *)&_XMM1);
    return 1i64;
  }
}

/*
==============
meth_bind
==============
*/
__int64 meth_bind(lua_State *L)
{
  _DWORD *v2; 
  const char *v3; 
  const char *v4; 
  const char *v5; 
  addrinfo bindhints; 

  v2 = j_auxiliar_checkclass(L, "tcp{master}", 1);
  v3 = j_luaL_checklstring(L, 2, NULL);
  v4 = j_luaL_checklstring(L, 3, NULL);
  *(_QWORD *)&bindhints.ai_flags = 0i64;
  memset(&bindhints.ai_protocol, 0, 36);
  bindhints.ai_socktype = 1;
  bindhints.ai_family = v2[2078];
  bindhints.ai_flags = 1;
  v5 = j_inet_trybind((unsigned __int64 *)v2, v2 + 2078, v3, v4, &bindhints);
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
meth_getstats
==============
*/
int meth_getstats(lua_State *L)
{
  char *v2; 

  v2 = (char *)j_auxiliar_checkclass(L, "tcp{client}", 1);
  return j_buffer_meth_getstats(L, (t_buffer_ *)(v2 + 40));
}

/*
==============
meth_setstats
==============
*/
int meth_setstats(lua_State *L)
{
  char *v2; 

  v2 = (char *)j_auxiliar_checkclass(L, "tcp{client}", 1);
  return j_buffer_meth_setstats(L, (t_buffer_ *)(v2 + 40));
}

/*
==============
meth_shutdown
==============
*/
__int64 meth_shutdown(lua_State *L)
{
  unsigned __int64 *v2; 
  int v3; 

  v2 = (unsigned __int64 *)j_auxiliar_checkclass(L, "tcp{client}", 1);
  v3 = j_luaL_checkoption(L, 2, "both", methods);
  j_socket_shutdown(v2, v3);
  __asm { vmovsd  xmm1, cs:__real@3ff0000000000000; n }
  j_lua_pushnumber(L, *(long double *)&_XMM1);
  return 1i64;
}

/*
==============
meth_accept
==============
*/
__int64 meth_accept(lua_State *L)
{
  char *v2; 
  t_timeout_ *v3; 
  const char *v4; 
  unsigned __int64 *ctx; 
  __int64 result; 
  unsigned __int64 client; 

  v2 = (char *)j_auxiliar_checkclass(L, "tcp{server}", 1);
  v3 = j_timeout_markstart((t_timeout_ *)(v2 + 8288));
  v4 = j_inet_tryaccept((unsigned __int64 *)v2, *((_DWORD *)v2 + 2078), &client, v3);
  if ( v4 )
  {
    j_lua_pushnil(L);
    j_lua_pushstring(L, v4);
    return 2i64;
  }
  else
  {
    ctx = (unsigned __int64 *)j_lua_newuserdata(L, 0x2080ui64);
    j_auxiliar_setclass(L, "tcp{client}", -1);
    memset_0(ctx, 0, 0x2080ui64);
    j_socket_setnonblocking(&client);
    *ctx = client;
    j_io_init((t_io_ *)(ctx + 1), (int (__fastcall *)(void *, const char *, unsigned __int64, unsigned __int64 *, t_timeout_ *))j_socket_send, (int (__fastcall *)(void *, char *, unsigned __int64, unsigned __int64 *, t_timeout_ *))j_socket_recv, (const char *(__fastcall *)(void *, int))j_socket_ioerror, ctx);
    __asm
    {
      vmovsd  xmm1, cs:__real@bff0000000000000; block
      vmovaps xmm2, xmm1; total
    }
    j_timeout_init((t_timeout_ *)(ctx + 1036), *(long double *)&_XMM1, *(long double *)&_XMM2);
    j_buffer_init((t_buffer_ *)(ctx + 5), (t_io_ *)(ctx + 1), (t_timeout_ *)(ctx + 1036));
    result = 1i64;
    *((_DWORD *)ctx + 2078) = *((_DWORD *)v2 + 2078);
  }
  return result;
}

/*
==============
tcp_create
==============
*/
__int64 tcp_create(lua_State *L, int family)
{
  _QWORD *ctx; 
  const char *v7; 

  ctx = j_lua_newuserdata(L, 0x2080ui64);
  memset_0(ctx, 0, 0x2080ui64);
  j_auxiliar_setclass(L, "tcp{master}", -1);
  *ctx = -1i64;
  *((_DWORD *)ctx + 2078) = family;
  j_io_init((t_io_ *)(ctx + 1), (int (__fastcall *)(void *, const char *, unsigned __int64, unsigned __int64 *, t_timeout_ *))j_socket_send, (int (__fastcall *)(void *, char *, unsigned __int64, unsigned __int64 *, t_timeout_ *))j_socket_recv, (const char *(__fastcall *)(void *, int))j_socket_ioerror, ctx);
  __asm
  {
    vmovsd  xmm1, cs:__real@bff0000000000000; block
    vmovaps xmm2, xmm1; total
  }
  j_timeout_init((t_timeout_ *)(ctx + 1036), *(long double *)&_XMM1, *(long double *)&_XMM2);
  j_buffer_init((t_buffer_ *)(ctx + 5), (t_io_ *)(ctx + 1), (t_timeout_ *)(ctx + 1036));
  if ( family )
  {
    v7 = j_inet_trycreate(ctx, family, 1, 0);
    if ( v7 )
    {
      j_lua_pushnil(L);
      j_lua_pushstring(L, v7);
      return 2i64;
    }
    j_socket_setnonblocking(ctx);
  }
  return 1i64;
}

/*
==============
tcp_open
==============
*/
__int64 tcp_open(lua_State *L)
{
  j_auxiliar_newclass(L, "tcp{master}", tcp_methods);
  j_auxiliar_newclass(L, "tcp{client}", tcp_methods);
  j_auxiliar_newclass(L, "tcp{server}", tcp_methods);
  j_auxiliar_add2group(L, "tcp{master}", "tcp{any}");
  j_auxiliar_add2group(L, "tcp{client}", "tcp{any}");
  j_auxiliar_add2group(L, "tcp{server}", "tcp{any}");
  j_luaL_setfuncs(L, func_3, 0);
  return 0i64;
}

