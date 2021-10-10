/*
==============
timeout_lua_gettime
==============
*/
__int64 timeout_lua_gettime(lua_State *L)
{
  _FILETIME SystemTimeAsFileTime; 

  GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
  _XMM0 = 0i64;
  __asm { vcvtsi2sd xmm0, xmm0, rax }
  _XMM1 = 0i64;
  __asm { vcvtsi2sd xmm1, xmm1, rax }
  j_lua_pushnumber(L, *(double *)&_XMM0 * 429.4967296 + *(double *)&_XMM1 * 0.0000001 - 1.16444736e10);
  return 1i64;
}

/*
==============
timeout_lua_sleep
==============
*/

__int64 __fastcall timeout_lua_sleep(lua_State *L, double _XMM1_8)
{
  __int128 v5; 

  *(double *)&_XMM0 = j_luaL_checknumber(L, 1);
  __asm
  {
    vxorpd  xmm1, xmm1, xmm1
    vmaxsd  xmm2, xmm0, xmm1
  }
  if ( *(double *)&_XMM2 < 1.797693134862316e305 )
  {
    *((_QWORD *)&v5 + 1) = *((_QWORD *)&_XMM2 + 1);
    *(double *)&v5 = *(double *)&_XMM2 * 1000.0;
    _XMM2 = v5;
  }
  __asm
  {
    vminsd  xmm0, xmm2, cs:__real@41dfffffffc00000
    vcvttsd2si ecx, xmm0; dwMilliseconds
  }
  Sleep(_ECX);
  return 0i64;
}

/*
==============
timeout_get
==============
*/
long double timeout_get(t_timeout_ *tm)
{
  double total; 
  __int128 v11; 
  _FILETIME SystemTimeAsFileTime; 

  *(long double *)&_XMM0 = tm->block;
  __asm { vxorpd  xmm6, xmm6, xmm6 }
  if ( tm->block < *(double *)&_XMM6 )
  {
    if ( *(double *)&_XMM6 > tm->total )
    {
      *(double *)&_XMM0 = DOUBLE_N1_0;
      return *(double *)&_XMM0;
    }
    if ( *(double *)&_XMM0 < *(double *)&_XMM6 )
    {
      GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
      _XMM0 = 0i64;
      __asm { vcvtsi2sd xmm0, xmm0, rax }
      _XMM1 = 0i64;
      __asm { vcvtsi2sd xmm1, xmm1, rax }
      _XMM2 = COERCE_UNSIGNED_INT64(tm->total - (*(double *)&_XMM0 * 429.4967296 + *(double *)&_XMM1 * 0.0000001 - 1.16444736e10) + tm->start);
      __asm { vmaxsd  xmm0, xmm2, xmm6 }
      return *(double *)&_XMM0;
    }
  }
  total = tm->total;
  if ( total >= *(double *)&_XMM6 )
  {
    *((_QWORD *)&v11 + 1) = 0i64;
    *(double *)&v11 = total - j_timeout_gettime() + tm->start;
    _XMM2 = v11;
    _XMM1 = *(unsigned __int64 *)&tm->block;
    __asm
    {
      vmaxsd  xmm3, xmm2, xmm6
      vcmpltsd xmm0, xmm1, xmm3
      vblendvpd xmm1, xmm3, xmm1, xmm0
    }
    *(_QWORD *)&_XMM0 = _XMM1;
  }
  return *(double *)&_XMM0;
}

/*
==============
timeout_getretry
==============
*/
long double timeout_getretry(t_timeout_ *tm)
{
  double total; 
  double v11; 
  _FILETIME SystemTimeAsFileTime; 

  __asm { vxorpd  xmm7, xmm7, xmm7 }
  if ( tm->block < *(double *)&_XMM7 )
  {
    if ( *(double *)&_XMM7 > tm->total )
    {
      *(double *)&_XMM0 = DOUBLE_N1_0;
      return *(double *)&_XMM0;
    }
    if ( tm->block < *(double *)&_XMM7 )
    {
      GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
      _XMM0 = 0i64;
      __asm { vcvtsi2sd xmm0, xmm0, rax }
      _XMM1 = 0i64;
      __asm { vcvtsi2sd xmm1, xmm1, rax }
      _XMM2 = COERCE_UNSIGNED_INT64(tm->total - (*(double *)&_XMM0 * 429.4967296 + *(double *)&_XMM1 * 0.0000001 - 1.16444736e10) + tm->start);
      __asm { vmaxsd  xmm0, xmm2, xmm7 }
      return *(double *)&_XMM0;
    }
  }
  total = tm->total;
  v11 = j_timeout_gettime();
  if ( total >= *(double *)&_XMM7 )
  {
    _XMM2 = COERCE_UNSIGNED_INT64(tm->total - v11 + tm->start);
    _XMM1 = *(unsigned __int64 *)&tm->block;
    __asm
    {
      vmaxsd  xmm3, xmm2, xmm7
      vcmpltsd xmm0, xmm1, xmm3
      vblendvpd xmm1, xmm3, xmm1, xmm0
    }
    *(_QWORD *)&_XMM0 = _XMM1;
  }
  else
  {
    _XMM2 = COERCE_UNSIGNED_INT64(tm->block - v11 + tm->start);
    __asm { vmaxsd  xmm0, xmm2, xmm7 }
  }
  return *(double *)&_XMM0;
}

/*
==============
timeout_getstart
==============
*/
long double timeout_getstart(t_timeout_ *tm)
{
  return tm->start;
}

/*
==============
timeout_gettime
==============
*/
double timeout_gettime()
{
  _FILETIME SystemTimeAsFileTime; 

  GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
  _XMM0 = 0i64;
  __asm { vcvtsi2sd xmm0, xmm0, rax }
  _XMM1 = 0i64;
  __asm { vcvtsi2sd xmm1, xmm1, rax }
  return *(double *)&_XMM0 * 429.4967296 + *(double *)&_XMM1 * 0.0000001 - 1.16444736e10;
}

/*
==============
timeout_init
==============
*/
void timeout_init(t_timeout_ *tm, long double block, long double total)
{
  tm->block = block;
  tm->total = total;
}

/*
==============
timeout_markstart
==============
*/
t_timeout_ *timeout_markstart(t_timeout_ *tm)
{
  _FILETIME SystemTimeAsFileTime; 

  GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
  _XMM0 = 0i64;
  __asm { vcvtsi2sd xmm0, xmm0, rax }
  _XMM1 = 0i64;
  __asm { vcvtsi2sd xmm1, xmm1, rax }
  tm->start = *(double *)&_XMM0 * 429.4967296 + *(double *)&_XMM1 * 0.0000001 - 1.16444736e10;
  return tm;
}

/*
==============
timeout_meth_gettimeout
==============
*/
__int64 timeout_meth_gettimeout(lua_State *L, t_timeout_ *tm)
{
  j_lua_pushnumber(L, tm->block);
  j_lua_pushnumber(L, tm->total);
  return 2i64;
}

/*
==============
timeout_meth_settimeout
==============
*/
__int64 timeout_meth_settimeout(lua_State *L, t_timeout_ *tm)
{
  double v4; 
  char v5; 

  v4 = j_luaL_optnumber(L, 2, -1.0);
  v5 = *j_luaL_optlstring(L, 3, "b", NULL);
  if ( v5 == 98 )
  {
    tm->block = v4;
  }
  else
  {
    if ( ((v5 - 114) & 0xFD) != 0 )
      j_luaL_argerror(L, 3, "invalid timeout mode");
    tm->total = v4;
  }
  j_lua_pushnumber(L, 1.0);
  return 1i64;
}

/*
==============
timeout_open
==============
*/
__int64 timeout_open(lua_State *L)
{
  j_luaL_setfuncs(L, func_1, 0);
  return 0i64;
}

