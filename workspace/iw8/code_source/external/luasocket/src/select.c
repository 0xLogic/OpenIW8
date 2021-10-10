/*
==============
global_select
==============
*/
__int64 global_select(lua_State *L)
{
  __int128 v1; 
  int v4; 
  int v5; 
  int v6; 
  unsigned int v7; 
  int start; 
  unsigned __int64 v14; 
  int v15; 
  unsigned __int64 max_fd; 
  t_timeout_ tm; 
  fd_set set; 
  fd_set wfds; 

  max_fd = -1i64;
  *(double *)&v1 = j_luaL_optnumber(L, 3, -1.0);
  _XMM6 = v1;
  set.fd_count = 0;
  wfds.fd_count = 0;
  j_lua_settop(L, 3);
  j_lua_createtable(L, 0, 0);
  v4 = j_lua_gettop(L);
  j_lua_createtable(L, 0, 0);
  v5 = j_lua_gettop(L);
  j_lua_createtable(L, 0, 0);
  v6 = j_lua_gettop(L);
  collect_fd(L, 1, v4, &set, &max_fd);
  collect_fd(L, 2, v4, &wfds, &max_fd);
  v7 = check_dirty(L, 1, v5, &set);
  _XMM1 = 0u;
  _XMM0 = v7;
  __asm { vpcmpgtd xmm3, xmm0, xmm1 }
  _mm_shuffle_ps(_XMM3, _XMM3, 0);
  __asm
  {
    vxorpd  xmm1, xmm1, xmm1
    vblendvpd xmm1, xmm6, xmm1, xmm3; block
  }
  start = v7;
  j_timeout_init(&tm, *(long double *)&_XMM1, -1.0);
  j_timeout_markstart(&tm);
  v14 = max_fd + 1;
  v15 = j_socket_select(max_fd + 1, &set, &wfds, NULL, &tm);
  if ( v15 > 0 || start > 0 )
  {
    return_fd(L, &set, v14, v4, v5, start);
    return_fd(L, &wfds, v14, v4, v6, 0);
    make_assoc(L, v5);
    make_assoc(L, v6);
    return 2i64;
  }
  else
  {
    if ( v15 )
      j_luaL_error(L, "select failed");
    j_lua_pushstring(L, "timeout");
    return 3i64;
  }
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
  unsigned __int64 v11; 
  int v12; 
  unsigned int fd_count; 
  __int64 v16; 

  v4 = 0;
  v9 = 1;
  result = j_lua_type(L, tab);
  if ( result )
  {
    j_lua_pushnumber(L, 1.0);
    j_lua_gettable(L, tab);
    while ( j_lua_type(L, -1) )
    {
      v11 = getfd(L);
      if ( v11 != -1i64 )
      {
        v12 = 0;
        j_lua_pushstring(L, "dirty");
        j_lua_gettable(L, -2);
        if ( j_lua_type(L, -1) )
        {
          j_lua_pushvalue(L, -2);
          j_lua_call(L, 1, 1);
          v12 = j_lua_toboolean(L, -1);
        }
        j_lua_settop(L, -2);
        if ( v12 )
        {
          _XMM1 = 0i64;
          ++v4;
          __asm { vcvtsi2sd xmm1, xmm1, r14d; n }
          j_lua_pushnumber(L, *(long double *)&_XMM1);
          j_lua_pushvalue(L, -2);
          j_lua_settable(L, dtab);
          fd_count = set->fd_count;
          v16 = 0i64;
          if ( set->fd_count )
          {
            while ( set->fd_array[v16] != v11 )
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
      _XMM1 = 0i64;
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
  int v5; 
  int v10; 
  signed __int64 v11; 
  unsigned int fd_count; 
  __int64 i; 

  v5 = 0;
  v10 = 1;
  if ( j_lua_type(L, tab) )
  {
    j_luaL_checktype(L, tab, 5);
    j_lua_pushnumber(L, 1.0);
    j_lua_gettable(L, tab);
    while ( j_lua_type(L, -1) )
    {
      v11 = getfd(L);
      if ( v11 != -1 )
      {
        if ( v5 >= 64 )
          j_luaL_argerror(L, tab, "too many sockets");
        fd_count = set->fd_count;
        for ( i = 0i64; (unsigned int)i < fd_count; i = (unsigned int)(i + 1) )
        {
          if ( set->fd_array[i] == v11 )
            break;
        }
        if ( (_DWORD)i == fd_count && fd_count < 0x40 )
        {
          set->fd_array[i] = v11;
          ++set->fd_count;
        }
        ++v5;
        if ( *max_fd == -1i64 || *max_fd < v11 )
          *max_fd = v11;
        _XMM1 = 0i64;
        __asm { vcvtsi2sd xmm1, xmm1, rbx }
        if ( v11 < 0 )
          *(double *)&_XMM1 = *(double *)&_XMM1 + 1.844674407370955e19;
        j_lua_pushnumber(L, *(long double *)&_XMM1);
        j_lua_pushvalue(L, -2);
        j_lua_settable(L, itab);
      }
      j_lua_settop(L, -2);
      _XMM1 = 0i64;
      ++v10;
      __asm { vcvtsi2sd xmm1, xmm1, r12d; n }
      j_lua_pushnumber(L, *(long double *)&_XMM1);
      j_lua_gettable(L, tab);
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
  __int64 v4; 
  unsigned __int64 v6; 
  __int128 v7; 

  v4 = -1i64;
  j_lua_pushstring(L, "getfd");
  j_lua_gettable(L, -2);
  if ( j_lua_type(L, -1) )
  {
    j_lua_pushvalue(L, -2);
    j_lua_call(L, 1, 1);
    if ( j_lua_isnumber(L, -1) )
    {
      *(double *)&_XMM0 = j_lua_tonumber(L, -1);
      __asm { vxorpd  xmm1, xmm1, xmm1 }
      if ( *(double *)&_XMM0 >= *(double *)&_XMM1 )
      {
        v6 = 0i64;
        if ( *(double *)&_XMM0 >= 9.223372036854776e18 )
        {
          *((_QWORD *)&v7 + 1) = *((_QWORD *)&_XMM0 + 1);
          *(double *)&v7 = *(double *)&_XMM0 - 9.223372036854776e18;
          _XMM0 = v7;
          if ( *(double *)&v7 < 9.223372036854776e18 )
            v6 = 0x8000000000000000ui64;
        }
        __asm { vcvttsd2si rbx, xmm0 }
        v4 = v6 + _RBX;
      }
    }
  }
  j_lua_settop(L, -2);
  return v4;
}

/*
==============
make_assoc
==============
*/
void make_assoc(lua_State *L, int tab)
{
  int v4; 
  int v6; 

  v4 = 1;
  j_lua_createtable(L, 0, 0);
  _XMM6 = *(unsigned __int64 *)&DOUBLE_1_0;
  v6 = j_lua_gettop(L);
  j_lua_pushnumber(L, 1.0);
  j_lua_gettable(L, tab);
  while ( j_lua_type(L, -1) )
  {
    j_lua_pushnumber(L, *(long double *)&_XMM6);
    j_lua_pushvalue(L, -2);
    j_lua_settable(L, v6);
    j_lua_pushnumber(L, *(long double *)&_XMM6);
    j_lua_settable(L, v6);
    ++v4;
    __asm
    {
      vxorpd  xmm6, xmm6, xmm6
      vcvtsi2sd xmm6, xmm6, edi
    }
    j_lua_pushnumber(L, *(long double *)&_XMM6);
    j_lua_gettable(L, tab);
  }
  j_lua_settop(L, -2);
}

/*
==============
return_fd
==============
*/
void return_fd(lua_State *L, fd_set *set, unsigned __int64 max_fd, int itab, int tab, int start)
{
  signed __int64 i; 

  if ( max_fd )
  {
    for ( i = 0i64; i < max_fd; ++i )
    {
      if ( _WSAFDIsSet_0(i, set) )
      {
        _XMM1 = 0i64;
        ++start;
        __asm { vcvtsi2sd xmm1, xmm1, edi; n }
        j_lua_pushnumber(L, *(long double *)&_XMM1);
        _XMM1 = 0i64;
        __asm { vcvtsi2sd xmm1, xmm1, rbx }
        if ( i < 0 )
          *(double *)&_XMM1 = *(double *)&_XMM1 + 1.844674407370955e19;
        j_lua_pushnumber(L, *(long double *)&_XMM1);
        j_lua_gettable(L, itab);
        j_lua_settable(L, tab);
      }
    }
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

