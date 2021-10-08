/*
==============
global_select
==============
*/
__int64 global_select(lua_State *L)
{
  int v7; 
  int v8; 
  int v9; 
  int start; 
  unsigned __int64 v19; 
  int v20; 
  __int64 result; 
  unsigned __int64 max_fd; 
  t_timeout_ tm; 
  fd_set set; 
  fd_set wfds; 
  char v29; 

  __asm
  {
    vmovaps [rsp+4B8h+var_38], xmm6
    vmovsd  xmm2, cs:__real@bff0000000000000; def
  }
  max_fd = -1i64;
  *(double *)&_XMM0 = j_luaL_optnumber(L, 3, *(long double *)&_XMM2);
  _ER12 = 0;
  __asm { vmovaps xmm6, xmm0 }
  set.fd_count = 0;
  wfds.fd_count = 0;
  j_lua_settop(L, 3);
  j_lua_createtable(L, 0, 0);
  v7 = j_lua_gettop(L);
  j_lua_createtable(L, 0, 0);
  v8 = j_lua_gettop(L);
  j_lua_createtable(L, 0, 0);
  v9 = j_lua_gettop(L);
  collect_fd(L, 1, v7, &set, &max_fd);
  collect_fd(L, 2, v7, &wfds, &max_fd);
  _EAX = check_dirty(L, 1, v8, &set);
  __asm
  {
    vmovsd  xmm2, cs:__real@bff0000000000000; total
    vmovd   xmm1, r12d
    vmovd   xmm0, eax
    vpcmpgtd xmm3, xmm0, xmm1
    vshufps xmm3, xmm3, xmm3, 0
    vxorpd  xmm1, xmm1, xmm1
    vblendvpd xmm1, xmm6, xmm1, xmm3; block
  }
  start = _EAX;
  j_timeout_init(&tm, *(long double *)&_XMM1, *(long double *)&_XMM2);
  j_timeout_markstart(&tm);
  v19 = max_fd + 1;
  v20 = j_socket_select(max_fd + 1, &set, &wfds, NULL, &tm);
  if ( v20 > 0 || start > 0 )
  {
    return_fd(L, &set, v19, v7, v8, start);
    return_fd(L, &wfds, v19, v7, v9, 0);
    make_assoc(L, v8);
    make_assoc(L, v9);
    result = 2i64;
  }
  else
  {
    if ( v20 )
      j_luaL_error(L, "select failed");
    j_lua_pushstring(L, "timeout");
    result = 3i64;
  }
  _R11 = &v29;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
  return result;
}

/*
==============
check_dirty
==============
*/
int check_dirty(lua_State *L, int tab, int dtab, fd_set *set)
{
  int v4; 
  int v9; 
  int result; 
  unsigned __int64 v12; 
  int v13; 
  unsigned int fd_count; 
  __int64 v16; 

  v4 = 0;
  v9 = 1;
  result = j_lua_type(L, tab);
  if ( result )
  {
    __asm { vmovsd  xmm1, cs:__real@3ff0000000000000; n }
    j_lua_pushnumber(L, *(long double *)&_XMM1);
    j_lua_gettable(L, tab);
    while ( j_lua_type(L, -1) )
    {
      v12 = getfd(L);
      if ( v12 != -1i64 )
      {
        v13 = 0;
        j_lua_pushstring(L, "dirty");
        j_lua_gettable(L, -2);
        if ( j_lua_type(L, -1) )
        {
          j_lua_pushvalue(L, -2);
          j_lua_call(L, 1, 1);
          v13 = j_lua_toboolean(L, -1);
        }
        j_lua_settop(L, -2);
        if ( v13 )
        {
          __asm { vxorps  xmm1, xmm1, xmm1 }
          ++v4;
          __asm { vcvtsi2sd xmm1, xmm1, r14d; n }
          j_lua_pushnumber(L, *(long double *)&_XMM1);
          j_lua_pushvalue(L, -2);
          j_lua_settable(L, dtab);
          fd_count = set->fd_count;
          v16 = 0i64;
          if ( set->fd_count )
          {
            while ( set->fd_array[v16] != v12 )
            {
              v16 = (unsigned int)(v16 + 1);
              if ( (unsigned int)v16 >= fd_count )
                goto LABEL_14;
            }
            if ( (unsigned int)v16 < fd_count - 1 )
            {
              do
              {
                set->fd_array[v16] = set->fd_array[(unsigned int)(v16 + 1)];
                v16 = (unsigned int)(v16 + 1);
                fd_count = set->fd_count;
              }
              while ( (unsigned int)v16 < set->fd_count - 1 );
            }
            set->fd_count = fd_count - 1;
          }
        }
      }
LABEL_14:
      j_lua_settop(L, -2);
      __asm { vxorps  xmm1, xmm1, xmm1 }
      ++v9;
      __asm { vcvtsi2sd xmm1, xmm1, r15d; n }
      j_lua_pushnumber(L, *(long double *)&_XMM1);
      j_lua_gettable(L, tab);
    }
    j_lua_settop(L, -2);
    return v4;
  }
  return result;
}

/*
==============
collect_fd
==============
*/
void collect_fd(lua_State *L, int tab, int itab, fd_set *set, unsigned __int64 *max_fd)
{
  int v6; 
  int v11; 
  signed __int64 v14; 
  unsigned int fd_count; 
  __int64 i; 

  v6 = 0;
  v11 = 1;
  if ( j_lua_type(L, tab) )
  {
    j_luaL_checktype(L, tab, 5);
    __asm { vmovsd  xmm1, cs:__real@3ff0000000000000; n }
    j_lua_pushnumber(L, *(long double *)&_XMM1);
    j_lua_gettable(L, tab);
    if ( j_lua_type(L, -1) )
    {
      __asm
      {
        vmovaps [rsp+58h+var_38], xmm6
        vmovsd  xmm6, cs:__real@43f0000000000000
      }
      do
      {
        v14 = getfd(L);
        if ( v14 != -1 )
        {
          if ( v6 >= 64 )
            j_luaL_argerror(L, tab, "too many sockets");
          fd_count = set->fd_count;
          for ( i = 0i64; (unsigned int)i < fd_count; i = (unsigned int)(i + 1) )
          {
            if ( set->fd_array[i] == v14 )
              break;
          }
          if ( (_DWORD)i == fd_count && fd_count < 0x40 )
          {
            set->fd_array[i] = v14;
            ++set->fd_count;
          }
          ++v6;
          if ( *max_fd == -1i64 || *max_fd < v14 )
            *max_fd = v14;
          __asm
          {
            vxorps  xmm1, xmm1, xmm1
            vcvtsi2sd xmm1, xmm1, rbx
          }
          if ( v14 < 0 )
            __asm { vaddsd  xmm1, xmm1, xmm6; n }
          j_lua_pushnumber(L, *(long double *)&_XMM1);
          j_lua_pushvalue(L, -2);
          j_lua_settable(L, itab);
        }
        j_lua_settop(L, -2);
        __asm { vxorps  xmm1, xmm1, xmm1 }
        ++v11;
        __asm { vcvtsi2sd xmm1, xmm1, r12d; n }
        j_lua_pushnumber(L, *(long double *)&_XMM1);
        j_lua_gettable(L, tab);
      }
      while ( j_lua_type(L, -1) );
      __asm { vmovaps xmm6, [rsp+58h+var_38] }
    }
    j_lua_settop(L, -2);
  }
}

/*
==============
getfd
==============
*/

__int64 __fastcall getfd(lua_State *L, double _XMM1_8)
{
  char v6; 

  _RBX = -1i64;
  j_lua_pushstring(L, "getfd");
  j_lua_gettable(L, -2);
  if ( j_lua_type(L, -1) )
  {
    j_lua_pushvalue(L, -2);
    j_lua_call(L, 1, 1);
    if ( j_lua_isnumber(L, -1) )
    {
      *(double *)&_XMM0 = j_lua_tonumber(L, -1);
      __asm
      {
        vxorpd  xmm1, xmm1, xmm1
        vcomisd xmm0, xmm1
      }
      if ( !v6 )
      {
        __asm
        {
          vmovsd  xmm1, cs:__real@43e0000000000000
          vcomisd xmm0, xmm1
          vsubsd  xmm0, xmm0, xmm1
          vcomisd xmm0, xmm1
          vcvttsd2si rbx, xmm0
        }
      }
    }
  }
  j_lua_settop(L, -2);
  return _RBX;
}

/*
==============
make_assoc
==============
*/
void make_assoc(lua_State *L, int tab)
{
  int v5; 
  int v8; 

  __asm { vmovaps [rsp+38h+var_18], xmm6 }
  v5 = 1;
  j_lua_createtable(L, 0, 0);
  __asm
  {
    vmovsd  xmm6, cs:__real@3ff0000000000000
    vmovaps xmm1, xmm6; n
  }
  v8 = j_lua_gettop(L);
  j_lua_pushnumber(L, *(long double *)&_XMM1);
  j_lua_gettable(L, tab);
  while ( j_lua_type(L, -1) )
  {
    __asm { vmovaps xmm1, xmm6; n }
    j_lua_pushnumber(L, *(long double *)&_XMM1);
    j_lua_pushvalue(L, -2);
    j_lua_settable(L, v8);
    __asm { vmovaps xmm1, xmm6; n }
    j_lua_pushnumber(L, *(long double *)&_XMM1);
    j_lua_settable(L, v8);
    ++v5;
    __asm
    {
      vxorpd  xmm6, xmm6, xmm6
      vcvtsi2sd xmm6, xmm6, edi
      vmovaps xmm1, xmm6; n
    }
    j_lua_pushnumber(L, *(long double *)&_XMM1);
    j_lua_gettable(L, tab);
  }
  __asm { vmovaps xmm6, [rsp+38h+var_18] }
  j_lua_settop(L, -2);
}

/*
==============
return_fd
==============
*/
void return_fd(lua_State *L, fd_set *set, unsigned __int64 max_fd, int itab, int tab, int start)
{
  signed __int64 v13; 

  if ( max_fd )
  {
    __asm { vmovaps [rsp+48h+var_28], xmm6 }
    v13 = 0i64;
    __asm { vmovsd  xmm6, cs:__real@43f0000000000000 }
    do
    {
      if ( _WSAFDIsSet_0(v13, set) )
      {
        __asm { vxorps  xmm1, xmm1, xmm1 }
        ++start;
        __asm { vcvtsi2sd xmm1, xmm1, edi; n }
        j_lua_pushnumber(L, *(long double *)&_XMM1);
        __asm
        {
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2sd xmm1, xmm1, rbx
        }
        if ( v13 < 0 )
          __asm { vaddsd  xmm1, xmm1, xmm6; n }
        j_lua_pushnumber(L, *(long double *)&_XMM1);
        j_lua_gettable(L, itab);
        j_lua_settable(L, tab);
      }
      ++v13;
    }
    while ( v13 < max_fd );
    __asm { vmovaps xmm6, [rsp+48h+var_28] }
  }
}

/*
==============
select_open
==============
*/
__int64 select_open(lua_State *L)
{
  j_lua_pushstring(L, "_SETSIZE");
  j_lua_pushinteger(L, 64i64);
  j_lua_rawset(L, -3);
  j_lua_pushstring(L, "_SOCKETINVALID");
  j_lua_pushinteger(L, -1i64);
  j_lua_rawset(L, -3);
  j_luaL_setfuncs(L, func_5, 0);
  return 0i64;
}

