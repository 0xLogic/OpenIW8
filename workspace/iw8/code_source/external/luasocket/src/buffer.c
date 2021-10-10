/*
==============
buffer_init
==============
*/
void buffer_init(t_buffer_ *buf, t_io_ *io, t_timeout_ *tm)
{
  buf->io = io;
  buf->last = 0i64;
  buf->first = 0i64;
  buf->sent = 0i64;
  buf->received = 0i64;
  buf->tm = tm;
  buf->birthday = j_timeout_gettime();
}

/*
==============
buffer_isempty
==============
*/
_BOOL8 buffer_isempty(t_buffer_ *buf)
{
  return buf->first >= buf->last;
}

/*
==============
buffer_meth_getstats
==============
*/
__int64 buffer_meth_getstats(lua_State *L, t_buffer_ *buf)
{
  long double v8; 

  _XMM1 = 0i64;
  __asm { vcvtsi2sd xmm1, xmm1, rax }
  if ( (buf->received & 0x8000000000000000ui64) != 0i64 )
    *(double *)&_XMM1 = *(double *)&_XMM1 + 1.844674407370955e19;
  j_lua_pushnumber(L, *(long double *)&_XMM1);
  _XMM1 = 0i64;
  __asm { vcvtsi2sd xmm1, xmm1, rax }
  if ( (buf->sent & 0x8000000000000000ui64) != 0i64 )
    *(double *)&_XMM1 = *(double *)&_XMM1 + 1.844674407370955e19;
  j_lua_pushnumber(L, *(long double *)&_XMM1);
  v8 = j_timeout_gettime();
  j_lua_pushnumber(L, v8 - buf->birthday);
  return 3i64;
}

/*
==============
buffer_meth_receive
==============
*/
__int64 buffer_meth_receive(lua_State *L, t_buffer_ *buf)
{
  unsigned int v5; 
  int v6; 
  const char *v7; 
  const char *v8; 
  char v9; 
  unsigned __int64 first; 
  unsigned __int64 last; 
  char *p; 
  int v13; 
  int v14; 
  unsigned __int64 v15; 
  char *v16; 
  unsigned __int64 v17; 
  unsigned __int64 v18; 
  char v19; 
  unsigned __int64 received; 
  unsigned __int64 v21; 
  unsigned __int64 v22; 
  unsigned __int64 v23; 
  __int64 v24; 
  unsigned __int64 v25; 
  int v26; 
  int v27; 
  unsigned __int64 v28; 
  unsigned __int64 v29; 
  unsigned __int64 v30; 
  int v31; 
  unsigned __int64 v32; 
  double v33; 
  __int128 v35; 
  unsigned __int64 v37; 
  unsigned __int64 v39; 
  unsigned __int64 v40; 
  unsigned __int64 v41; 
  unsigned __int64 v42; 
  int v43; 
  unsigned __int64 v44; 
  unsigned __int64 v45; 
  unsigned __int64 v46; 
  unsigned __int64 v47; 
  const char *v48; 
  int v50; 
  unsigned __int64 v51; 
  unsigned __int64 len; 
  luaL_Buffer v53; 
  char v54; 

  v5 = 0;
  v50 = j_lua_gettop(L);
  v6 = v50;
  v7 = j_luaL_optlstring(L, 3, (const char *)&queryFormat.fmt + 3, &len);
  j_timeout_markstart(buf->tm);
  j_luaL_buffinit(L, &v53);
  j_luaL_addlstring(&v53, v7, len);
  if ( !j_lua_isnumber(L, 2) )
  {
    v8 = j_luaL_optlstring(L, 2, "*l", NULL);
    if ( *v8 != 42 )
      goto LABEL_33;
    v9 = v8[1];
    if ( v9 == 108 )
    {
      first = buf->first;
      last = buf->last;
      p = v53.p;
      while ( 1 )
      {
        v13 = 0;
        if ( first >= last )
        {
          v14 = buf->io->recv(buf->io->ctx, buf->data, 0x2000ui64, &v51, buf->tm);
          v15 = v51;
          v13 = v14;
          buf->last = v51;
          last = v15;
          p = v53.p;
          first = 0i64;
          buf->first = 0i64;
        }
        v16 = &buf->data[first];
        v17 = last - first;
        v18 = 0i64;
        if ( last != first )
        {
          do
          {
            v19 = v16[v18];
            if ( v19 == 10 )
              break;
            if ( v19 != 13 )
            {
              if ( p >= &v54 )
              {
                j_luaL_prepbuffer(&v53);
                v19 = v16[v18];
                p = v53.p;
              }
              *p = v19;
              p = ++v53.p;
            }
            ++v18;
          }
          while ( v18 < v17 );
        }
        last = buf->last;
        received = buf->received;
        v21 = buf->first;
        if ( v18 < v17 )
          break;
        buf->received = v18 + received;
        first = v21 + v18;
        buf->first = v21 + v18;
        if ( v21 + v18 >= last )
        {
          buf->last = 0i64;
          first = 0i64;
          buf->first = 0i64;
          last = 0i64;
        }
        if ( v13 )
        {
          v5 = v13;
          goto LABEL_51;
        }
      }
      buf->received = received + v18 + 1;
      v22 = v21 + v18 + 1;
      buf->first = v22;
      if ( v22 >= last )
      {
        buf->last = 0i64;
        buf->first = 0i64;
      }
      v5 = v13;
      goto LABEL_51;
    }
    if ( v9 != 97 )
LABEL_33:
      j_luaL_argerror(L, 2, "invalid receive pattern");
    v23 = buf->first;
    v24 = 0i64;
    v25 = buf->last;
    do
    {
      v26 = 0;
      if ( v23 >= v25 )
      {
        v27 = buf->io->recv(buf->io->ctx, buf->data, 0x2000ui64, &v51, buf->tm);
        v28 = v51;
        v26 = v27;
        buf->last = v51;
        v25 = v28;
        v23 = 0i64;
        buf->first = 0i64;
      }
      v29 = v25 - v23;
      v24 += v29;
      j_luaL_addlstring(&v53, &buf->data[v23], v29);
      v30 = buf->first;
      buf->received += v29;
      v23 = v29 + v30;
      v25 = buf->last;
      buf->first = v23;
      if ( v23 >= v25 )
      {
        buf->last = 0i64;
        v23 = 0i64;
        buf->first = 0i64;
        v25 = 0i64;
      }
    }
    while ( !v26 );
    if ( v26 == -2 )
    {
      v31 = -2;
      if ( v24 )
        v31 = 0;
      v5 = v31;
      goto LABEL_51;
    }
LABEL_50:
    v5 = v26;
LABEL_51:
    v6 = v50;
    goto LABEL_52;
  }
  *(double *)&_XMM0 = j_lua_tonumber(L, 2);
  v32 = 0i64;
  v33 = *(double *)&_XMM0;
  _XMM1 = _XMM0;
  if ( *(double *)&_XMM0 >= 9.223372036854776e18 )
  {
    *((_QWORD *)&v35 + 1) = *((_QWORD *)&_XMM0 + 1);
    *(double *)&v35 = *(double *)&_XMM0 - 9.223372036854776e18;
    _XMM1 = v35;
    if ( *(double *)&_XMM0 - 9.223372036854776e18 < 9.223372036854776e18 )
      v32 = 0x8000000000000000ui64;
  }
  __asm { vcvttsd2si r15, xmm1 }
  v37 = v32 + _R15;
  __asm { vxorpd  xmm0, xmm0, xmm0 }
  if ( v33 < *(double *)&_XMM0 )
    j_luaL_argerror(L, 2, "invalid receive pattern");
  if ( !len || v37 > len )
  {
    v39 = buf->first;
    v40 = v37 - len;
    v41 = buf->last;
    v42 = 0i64;
    do
    {
      v26 = 0;
      if ( v39 >= v41 )
      {
        v43 = buf->io->recv(buf->io->ctx, buf->data, 0x2000ui64, &v51, buf->tm);
        v44 = v51;
        v26 = v43;
        buf->last = v51;
        v41 = v44;
        v39 = 0i64;
        buf->first = 0i64;
      }
      v45 = v41 - v39;
      v46 = v40 - v42;
      if ( v45 < v40 - v42 )
        v46 = v45;
      j_luaL_addlstring(&v53, &buf->data[v39], v46);
      v47 = buf->first;
      buf->received += v46;
      v39 = v46 + v47;
      v41 = buf->last;
      buf->first = v39;
      if ( v39 >= v41 )
      {
        buf->last = 0i64;
        v39 = 0i64;
        buf->first = 0i64;
        v41 = 0i64;
      }
      v42 += v46;
    }
    while ( v42 < v40 && !v26 );
    goto LABEL_50;
  }
LABEL_52:
  j_luaL_pushresult(&v53);
  if ( v5 )
  {
    v48 = buf->io->error(buf->io->ctx, v5);
    j_lua_pushstring(L, v48);
    j_lua_pushvalue(L, -2);
    j_lua_pushnil(L);
    j_lua_replace(L, -4);
  }
  else
  {
    j_lua_pushnil(L);
    j_lua_pushnil(L);
  }
  return (unsigned int)(j_lua_gettop(L) - v6);
}

/*
==============
buffer_meth_send
==============
*/
__int64 buffer_meth_send(lua_State *L, t_buffer_ *buf)
{
  lua_State *v4; 
  unsigned int v5; 
  int v6; 
  unsigned __int64 v7; 
  t_io_ *io; 
  int v11; 
  bool v12; 
  t_timeout_ *tm; 
  int v14; 
  int v15; 
  const char *v16; 
  void *ctx; 
  __int64 v18; 
  const char *v21; 
  int v24; 
  unsigned __int64 len; 
  const char *v26; 

  v4 = L;
  v5 = 0;
  v24 = j_lua_gettop(L);
  len = 0i64;
  v6 = v24;
  v7 = 0i64;
  v26 = j_luaL_checklstring(v4, 2, &len);
  *(double *)&_XMM0 = j_luaL_optnumber(v4, 3, 1.0);
  __asm { vcvttsd2si esi, xmm0 }
  *(double *)&_XMM0 = j_luaL_optnumber(v4, 4, -1.0);
  __asm { vcvttsd2si edi, xmm0 }
  j_timeout_markstart(buf->tm);
  if ( _ESI < 0 )
    _ESI += len + 1;
  if ( _EDI < 0 )
    _EDI += len + 1;
  if ( _ESI < 1 )
    _ESI = 1;
  if ( _EDI > (int)len )
    _EDI = len;
  if ( _ESI <= _EDI )
  {
    io = buf->io;
    v11 = _EDI - _ESI;
    v12 = v11 == -1;
    tm = buf->tm;
    v14 = 0;
    v15 = v11 + 1;
    if ( !v12 )
    {
      v16 = v26;
      do
      {
        if ( v14 )
          break;
        ctx = io->ctx;
        v18 = 0x2000i64;
        v26 = NULL;
        if ( v15 - v7 <= 0x2000 )
          v18 = v15 - v7;
        v14 = io->send(ctx, &v16[v7 - 1 + _ESI], v18, (unsigned __int64 *)&v26, tm);
        v7 += (unsigned __int64)v26;
      }
      while ( v7 < v15 );
      v4 = L;
    }
    buf->sent += v7;
    v5 = v14;
    v6 = v24;
  }
  _XMM6 = 0i64;
  __asm { vcvtsi2sd xmm6, xmm6, rcx }
  if ( (__int64)(_ESI + v7 - 1) < 0 )
    *(double *)&_XMM6 = *(double *)&_XMM6 + 1.844674407370955e19;
  if ( v5 )
  {
    j_lua_pushnil(v4);
    v21 = buf->io->error(buf->io->ctx, v5);
    j_lua_pushstring(v4, v21);
    j_lua_pushnumber(v4, *(long double *)&_XMM6);
  }
  else
  {
    j_lua_pushnumber(v4, *(long double *)&_XMM6);
    j_lua_pushnil(v4);
    j_lua_pushnil(v4);
  }
  return (unsigned int)(j_lua_gettop(v4) - v6);
}

/*
==============
buffer_meth_setstats
==============
*/
__int64 buffer_meth_setstats(lua_State *L, t_buffer_ *buf)
{
  unsigned __int64 v8; 
  signed __int64 sent; 
  long double v13; 

  _XMM2 = 0i64;
  __asm { vcvtsi2sd xmm2, xmm2, rax }
  if ( (buf->received & 0x8000000000000000ui64) != 0i64 )
    *(double *)&_XMM2 = *(double *)&_XMM2 + 1.844674407370955e19;
  *(double *)&_XMM0 = j_luaL_optnumber(L, 2, *(long double *)&_XMM2);
  __asm { vcvttsd2si eax, xmm0 }
  v8 = _EAX;
  sent = buf->sent;
  buf->received = v8;
  _XMM2 = 0i64;
  __asm { vcvtsi2sd xmm2, xmm2, rax }
  if ( sent < 0 )
    *(double *)&_XMM2 = *(double *)&_XMM2 + 1.844674407370955e19;
  *(double *)&_XMM0 = j_luaL_optnumber(L, 3, *(long double *)&_XMM2);
  __asm { vcvttsd2si eax, xmm0 }
  buf->sent = _EAX;
  if ( j_lua_isnumber(L, 4) )
  {
    v13 = j_timeout_gettime();
    buf->birthday = v13 - j_lua_tonumber(L, 4);
  }
  j_lua_pushnumber(L, 1.0);
  return 1i64;
}

/*
==============
buffer_open
==============
*/
__int64 buffer_open(lua_State *L)
{
  return 0i64;
}

