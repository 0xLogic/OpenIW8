/*
==============
lj_profile_interpreter
==============
*/
void lj_profile_interpreter(lua_State *L)
{
  global_State *ptr64; 
  unsigned __int8 v3; 
  int samples; 

  ptr64 = (global_State *)L->glref.ptr64;
  EnterCriticalSection(&profile_state.lock);
  v3 = ptr64->hookmask & 0x7F;
  if ( (ptr64->hookmask & 0x20) == 0 )
  {
    samples = profile_state.samples;
    profile_state.samples = 0;
    ptr64->hookmask = 32;
    j_lj_dispatch_update(ptr64);
    LeaveCriticalSection(&profile_state.lock);
    profile_state.cb(profile_state.data, L, samples, profile_state.vmstate);
    EnterCriticalSection(&profile_state.lock);
    v3 |= ptr64->hookmask & 0x80;
  }
  ptr64->hookmask = v3;
  j_lj_dispatch_update(ptr64);
  LeaveCriticalSection(&profile_state.lock);
}

/*
==============
lj_profile_hook_enter
==============
*/
void lj_profile_hook_enter(global_State *g)
{
  if ( profile_state.g )
  {
    EnterCriticalSection(&profile_state.lock);
    g->hookmask |= 0x10u;
    LeaveCriticalSection(&profile_state.lock);
  }
  else
  {
    g->hookmask |= 0x10u;
  }
}

/*
==============
lj_profile_hook_leave
==============
*/
void lj_profile_hook_leave(global_State *g)
{
  if ( profile_state.g )
  {
    EnterCriticalSection(&profile_state.lock);
    g->hookmask &= ~0x10u;
    LeaveCriticalSection(&profile_state.lock);
  }
  else
  {
    g->hookmask &= ~0x10u;
  }
}

/*
==============
luaJIT_profile_start
==============
*/
void luaJIT_profile_start(lua_State *L, const char *mode, void (*cb)(void *, lua_State *, int, int), void *data)
{
  char v5; 
  const char *v8; 
  int i; 
  char v11; 
  int v12; 
  global_State *g; 
  unsigned __int64 v14; 
  unsigned __int64 ptr64; 
  HINSTANCE__ *Library; 
  unsigned int (__fastcall *ProcAddress)(unsigned int); 

  v5 = *mode;
  v8 = mode;
  for ( i = 10; *v8; v5 = *v8 )
  {
    ++v8;
    if ( v5 == 105 )
    {
      v11 = *v8;
      i = 0;
      if ( *v8 < 48 )
        goto LABEL_7;
      do
      {
        if ( v11 > 57 )
          break;
        ++v8;
        v12 = v11;
        v11 = *v8;
        i = v12 + 10 * i - 48;
      }
      while ( *v8 >= 48 );
      if ( i <= 0 )
LABEL_7:
        i = 1;
    }
  }
  g = profile_state.g;
  if ( profile_state.g )
  {
    if ( (global_State *)L->glref.ptr64 != profile_state.g )
      return;
    profile_state.abort = 1;
    WaitForSingleObject(profile_state.thread, 0xFFFFFFFF);
    DeleteCriticalSection(&profile_state.lock);
    g->hookmask &= ~0x80u;
    j_lj_dispatch_update(g);
    v14 = (unsigned int)(LODWORD(profile_state.sb.e.ptr64) - LODWORD(profile_state.sb.b.ptr64));
    ptr64 = profile_state.sb.b.ptr64;
    g->gc.total -= v14;
    g->allocf(g->allocd, (void *)ptr64, v14, 0i64);
    profile_state.sb.b.ptr64 = 0i64;
    profile_state.sb.e.ptr64 = 0i64;
    profile_state.g = NULL;
  }
  __asm { vpxor   xmm0, xmm0, xmm0 }
  profile_state.g = (global_State *)L->glref.ptr64;
  __asm { vmovdqu xmmword ptr cs:profile_state.sb.e.ptr64, xmm0 }
  profile_state.interval = i;
  profile_state.cb = cb;
  profile_state.data = data;
  profile_state.samples = 0;
  profile_state.sb.L.ptr64 = (unsigned __int64)L;
  profile_state.sb.p.ptr64 = 0i64;
  if ( profile_state.wmm || (Library = LoadLibraryExA("winmm.dll", NULL, 0), (profile_state.wmm = Library) == NULL) || (profile_state.wmm_tbp = (unsigned int (__fastcall *)(unsigned int))GetProcAddress(Library, "timeBeginPeriod"), ProcAddress = (unsigned int (__fastcall *)(unsigned int))GetProcAddress(profile_state.wmm, "timeEndPeriod"), profile_state.wmm_tep = ProcAddress, profile_state.wmm_tbp) && ProcAddress )
  {
    InitializeCriticalSection(&profile_state.lock);
    profile_state.abort = 0;
    profile_state.thread = CreateThread(NULL, 0i64, profile_thread, &profile_state, 0, NULL);
  }
  else
  {
    profile_state.wmm = NULL;
  }
}

/*
==============
luaJIT_profile_stop
==============
*/
void luaJIT_profile_stop(lua_State *L)
{
  global_State *g; 
  unsigned __int64 v2; 
  unsigned __int64 ptr64; 
  void *allocd; 

  g = profile_state.g;
  if ( (global_State *)L->glref.ptr64 == profile_state.g )
  {
    profile_state.abort = 1;
    WaitForSingleObject(profile_state.thread, 0xFFFFFFFF);
    DeleteCriticalSection(&profile_state.lock);
    g->hookmask &= ~0x80u;
    j_lj_dispatch_update(g);
    v2 = (unsigned int)(LODWORD(profile_state.sb.e.ptr64) - LODWORD(profile_state.sb.b.ptr64));
    ptr64 = profile_state.sb.b.ptr64;
    allocd = g->allocd;
    g->gc.total -= v2;
    g->allocf(allocd, (void *)ptr64, v2, 0i64);
    profile_state.sb.b.ptr64 = 0i64;
    profile_state.sb.e.ptr64 = 0i64;
    profile_state.g = NULL;
  }
}

/*
==============
luaJIT_profile_dumpstack
==============
*/
const char *luaJIT_profile_dumpstack(lua_State *L, const char *fmt, int depth, unsigned __int64 *len)
{
  profile_state.sb.L.ptr64 = (unsigned __int64)L;
  profile_state.sb.p.ptr64 = profile_state.sb.b.ptr64;
  j_lj_debug_dumpstack(L, &profile_state.sb, fmt, depth);
  *len = (unsigned int)(LODWORD(profile_state.sb.p.ptr64) - LODWORD(profile_state.sb.b.ptr64));
  return (const char *)profile_state.sb.b.ptr64;
}

/*
==============
profile_thread
==============
*/
__int64 profile_thread(void *psx)
{
  DWORD v1; 
  global_State *v3; 
  unsigned __int8 hookmask; 
  int vmstate; 
  int v6; 

  v1 = *((_DWORD *)psx + 14);
  (*((void (__fastcall **)(_QWORD))psx + 10))(v1);
  Sleep(v1);
  while ( !*((_DWORD *)psx + 36) )
  {
    v3 = *(global_State **)psx;
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)psx + 96));
    ++*((_DWORD *)psx + 15);
    hookmask = v3->hookmask;
    if ( (hookmask & 0xA0) == 0 )
    {
      vmstate = v3->vmstate;
      if ( vmstate < 0 )
      {
        if ( vmstate == -1 )
        {
          v6 = 73;
        }
        else if ( vmstate == -2 )
        {
          v6 = 67;
        }
        else
        {
          v6 = 74;
          if ( vmstate == -3 )
            v6 = 71;
        }
      }
      else
      {
        v6 = 78;
      }
      *((_DWORD *)psx + 16) = v6;
      v3->hookmask = hookmask | 0x80;
      j_lj_dispatch_update(v3);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)psx + 96));
    Sleep(v1);
  }
  (*((void (__fastcall **)(_QWORD))psx + 11))(v1);
  return 0i64;
}

