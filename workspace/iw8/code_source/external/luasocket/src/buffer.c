/*
==============
buffer_init
==============
*/
void buffer_init(t_buffer_ *buf, t_io_ *io, t_timeout_ *tm)
{
  buf->io = io;
  buf->last = 0i64;
  _RBX = buf;
  buf->first = 0i64;
  buf->sent = 0i64;
  buf->received = 0i64;
  buf->tm = tm;
  *(double *)&_XMM0 = j_timeout_gettime();
  __asm { vmovsd  qword ptr [rbx], xmm0 }
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
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2sd xmm1, xmm1, rax
  }
  if ( (buf->received & 0x8000000000000000ui64) != 0i64 )
    __asm { vaddsd  xmm1, xmm1, cs:__real@43f0000000000000; n }
  j_lua_pushnumber(L, *(long double *)&_XMM1);
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2sd xmm1, xmm1, rax
  }
  if ( (buf->sent & 0x8000000000000000ui64) != 0i64 )
    __asm { vaddsd  xmm1, xmm1, cs:__real@43f0000000000000; n }
  j_lua_pushnumber(L, *(long double *)&_XMM1);
  *(double *)&_XMM0 = j_timeout_gettime();
  __asm { vsubsd  xmm1, xmm0, qword ptr [rbx]; n }
  j_lua_pushnumber(L, *(long double *)&_XMM1);
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
  unsigned __int64 v10; 
  unsigned __int64 v11; 
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
  unsigned __int64 first; 
  unsigned __int64 v39; 
  unsigned __int64 last; 
  unsigned __int64 v41; 
  int v42; 
  unsigned __int64 v43; 
  unsigned __int64 v44; 
  unsigned __int64 v45; 
  unsigned __int64 v46; 
  const char *v47; 
  int v49; 
  unsigned __int64 v50; 
  unsigned __int64 len; 
  luaL_Buffer v52; 
  char v53; 

  v5 = 0;
  v49 = j_lua_gettop(L);
  v6 = v49;
  v7 = j_luaL_optlstring(L, 3, (const char *)&queryFormat.fmt + 3, &len);
  j_timeout_markstart(buf->tm);
  j_luaL_buffinit(L, &v52);
  j_luaL_addlstring(&v52, v7, len);
  if ( j_lua_isnumber(L, 2) )
  {
    *(double *)&_XMM0 = j_lua_tonumber(L, 2);
    __asm
    {
      vmovsd  xmm2, cs:__real@43e0000000000000
      vcomisd xmm0, xmm2
      vmovaps xmm3, xmm0
      vmovaps xmm1, xmm0
      vsubsd  xmm1, xmm0, xmm2
      vcomisd xmm1, xmm2
      vcvttsd2si r15, xmm1
      vxorpd  xmm0, xmm0, xmm0
      vcomisd xmm3, xmm0
    }
    if ( len && _R15 <= len )
      goto LABEL_47;
    first = buf->first;
    v39 = _R15 - len;
    last = buf->last;
    v41 = 0i64;
    do
    {
      v26 = 0;
      if ( first >= last )
      {
        v42 = buf->io->recv(buf->io->ctx, buf->data, 0x2000ui64, &v50, buf->tm);
        v43 = v50;
        v26 = v42;
        buf->last = v50;
        last = v43;
        first = 0i64;
        buf->first = 0i64;
      }
      v44 = last - first;
      v45 = v39 - v41;
      if ( v44 < v39 - v41 )
        v45 = v44;
      j_luaL_addlstring(&v52, &buf->data[first], v45);
      v46 = buf->first;
      buf->received += v45;
      first = v45 + v46;
      last = buf->last;
      buf->first = first;
      if ( first >= last )
      {
        buf->last = 0i64;
        first = 0i64;
        buf->first = 0i64;
        last = 0i64;
      }
      v41 += v45;
    }
    while ( v41 < v39 && !v26 );
  }
  else
  {
    v8 = j_luaL_optlstring(L, 2, "*l", NULL);
    if ( *v8 != 42 )
      goto LABEL_33;
    v9 = v8[1];
    if ( v9 == 108 )
    {
      v10 = buf->first;
      v11 = buf->last;
      p = v52.p;
      while ( 1 )
      {
        v13 = 0;
        if ( v10 >= v11 )
        {
          v14 = buf->io->recv(buf->io->ctx, buf->data, 0x2000ui64, &v50, buf->tm);
          v15 = v50;
          v13 = v14;
          buf->last = v50;
          v11 = v15;
          p = v52.p;
          v10 = 0i64;
          buf->first = 0i64;
        }
        v16 = &buf->data[v10];
        v17 = v11 - v10;
        v18 = 0i64;
        if ( v11 != v10 )
        {
          do
          {
            v19 = v16[v18];
            if ( v19 == 10 )
              break;
            if ( v19 != 13 )
            {
              if ( p >= &v53 )
              {
                j_luaL_prepbuffer(&v52);
                v19 = v16[v18];
                p = v52.p;
              }
              *p = v19;
              p = ++v52.p;
            }
            ++v18;
          }
          while ( v18 < v17 );
        }
        v11 = buf->last;
        received = buf->received;
        v21 = buf->first;
        if ( v18 < v17 )
          break;
        buf->received = v18 + received;
        v10 = v21 + v18;
        buf->first = v21 + v18;
        if ( v21 + v18 >= v11 )
        {
          buf->last = 0i64;
          v10 = 0i64;
          buf->first = 0i64;
          v11 = 0i64;
        }
        if ( v13 )
        {
          v5 = v13;
          goto LABEL_46;
        }
      }
      buf->received = received + v18 + 1;
      v22 = v21 + v18 + 1;
      buf->first = v22;
      if ( v22 >= v11 )
      {
        buf->last = 0i64;
        buf->first = 0i64;
      }
      v5 = v13;
      goto LABEL_46;
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
        v27 = buf->io->recv(buf->io->ctx, buf->data, 0x2000ui64, &v50, buf->tm);
        v28 = v50;
        v26 = v27;
        buf->last = v50;
        v25 = v28;
        v23 = 0i64;
        buf->first = 0i64;
      }
      v29 = v25 - v23;
      v24 += v29;
      j_luaL_addlstring(&v52, &buf->data[v23], v29);
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
      goto LABEL_46;
    }
  }
  v5 = v26;
LABEL_46:
  v6 = v49;
LABEL_47:
  j_luaL_pushresult(&v52);
  if ( v5 )
  {
    v47 = buf->io->error(buf->io->ctx, v5);
    j_lua_pushstring(L, v47);
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
  lua_State *v5; 
  unsigned int v6; 
  int v7; 
  unsigned __int64 v8; 
  t_io_ *io; 
  int v14; 
  bool v15; 
  t_timeout_ *tm; 
  int v17; 
  int v18; 
  const char *v19; 
  void *ctx; 
  __int64 v21; 
  const char *v24; 
  int v31; 
  unsigned __int64 len; 
  const char *v33; 

  __asm { vmovaps [rsp+88h+var_58], xmm6 }
  v5 = L;
  v6 = 0;
  v31 = j_lua_gettop(L);
  len = 0i64;
  v7 = v31;
  v8 = 0i64;
  __asm { vmovsd  xmm2, cs:__real@3ff0000000000000; def }
  v33 = j_luaL_checklstring(v5, 2, &len);
  *(double *)&_XMM0 = j_luaL_optnumber(v5, 3, *(long double *)&_XMM2);
  __asm
  {
    vmovsd  xmm2, cs:__real@bff0000000000000; def
    vcvttsd2si esi, xmm0
  }
  *(double *)&_XMM0 = j_luaL_optnumber(v5, 4, *(long double *)&_XMM2);
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
    v14 = _EDI - _ESI;
    v15 = v14 == -1;
    tm = buf->tm;
    v17 = 0;
    v18 = v14 + 1;
    if ( !v15 )
    {
      v19 = v33;
      do
      {
        if ( v17 )
          break;
        ctx = io->ctx;
        v21 = 0x2000i64;
        v33 = NULL;
        if ( v18 - v8 <= 0x2000 )
          v21 = v18 - v8;
        v17 = io->send(ctx, &v19[v8 - 1 + _ESI], v21, (unsigned __int64 *)&v33, tm);
        v8 += (unsigned __int64)v33;
      }
      while ( v8 < v18 );
      v5 = L;
    }
    buf->sent += v8;
    v6 = v17;
    v7 = v31;
  }
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vcvtsi2sd xmm6, xmm6, rcx
  }
  if ( (__int64)(_ESI + v8 - 1) < 0 )
    __asm { vaddsd  xmm6, xmm6, cs:__real@43f0000000000000 }
  if ( v6 )
  {
    j_lua_pushnil(v5);
    v24 = buf->io->error(buf->io->ctx, v6);
    j_lua_pushstring(v5, v24);
    __asm { vmovaps xmm1, xmm6; n }
    j_lua_pushnumber(v5, *(long double *)&_XMM1);
  }
  else
  {
    __asm { vmovaps xmm1, xmm6; n }
    j_lua_pushnumber(v5, *(long double *)&_XMM1);
    j_lua_pushnil(v5);
    j_lua_pushnil(v5);
  }
  __asm { vmovaps xmm6, [rsp+88h+var_58] }
  return (unsigned int)(j_lua_gettop(v5) - v7);
}

/*
==============
buffer_meth_setstats
==============
*/

__int64 __fastcall buffer_meth_setstats(lua_State *L, t_buffer_ *buf, double _XMM2_8)
{
  unsigned __int64 v11; 
  __int64 sent; 
  __int64 result; 

  _RDI = buf;
  __asm
  {
    vmovaps [rsp+38h+var_18], xmm6
    vmovsd  xmm6, cs:__real@43f0000000000000
    vxorps  xmm2, xmm2, xmm2
    vcvtsi2sd xmm2, xmm2, rax
  }
  if ( (buf->received & 0x8000000000000000ui64) != 0i64 )
    __asm { vaddsd  xmm2, xmm2, xmm6; def }
  *(double *)&_XMM0 = j_luaL_optnumber(L, 2, *(long double *)&_XMM2);
  __asm { vcvttsd2si eax, xmm0 }
  v11 = _EAX;
  sent = _RDI->sent;
  _RDI->received = v11;
  __asm
  {
    vxorps  xmm2, xmm2, xmm2
    vcvtsi2sd xmm2, xmm2, rax
  }
  if ( sent < 0 )
    __asm { vaddsd  xmm2, xmm2, xmm6; def }
  *(double *)&_XMM0 = j_luaL_optnumber(L, 3, *(long double *)&_XMM2);
  __asm { vcvttsd2si eax, xmm0 }
  _RDI->sent = _EAX;
  if ( j_lua_isnumber(L, 4) )
  {
    *(double *)&_XMM0 = j_timeout_gettime();
    __asm { vmovaps xmm6, xmm0 }
    j_lua_tonumber(L, 4);
    __asm
    {
      vsubsd  xmm1, xmm6, xmm0
      vmovsd  qword ptr [rdi], xmm1
    }
  }
  __asm { vmovsd  xmm1, cs:__real@3ff0000000000000; n }
  j_lua_pushnumber(L, *(long double *)&_XMM1);
  result = 1i64;
  __asm { vmovaps xmm6, [rsp+38h+var_18] }
  return result;
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

